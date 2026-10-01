//// FUNCTION FUN_009a8990 @ 009a8990 ////

void __fastcall FUN_009a8990(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_009a89b0 @ 009a89b0 ////

undefined4 * __fastcall FUN_009a89b0(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004b0470(param_1 + 8);
  param_1[0x11] = DAT_0105cb44;
  DAT_0105cb44 = param_1;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar1);
  return param_1;
}


//// FUNCTION FUN_009a8a00 @ 009a8a00 ////

int * __thiscall FUN_009a8a00(void *this,char *param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  ulonglong uVar11;
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6628;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 0xc) = 0xff;
  *(undefined1 *)((int)this + 0xd) = 0xff;
  *(undefined1 *)((int)this + 0xe) = 0xff;
  *(undefined1 *)((int)this + 0xf) = 0xff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(uint *)((int)this + 0x10) = param_3;
  local_6c = local_60;
  *(undefined1 *)((int)this + 8) = 0;
  *(int *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_6c,param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_6c);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy((char *)local_2c,"lithograph",10);
  local_28 = 10;
  local_2c[10] = 0;
  bVar3 = false;
  pbVar8 = local_2c;
  pbVar9 = local_6c;
  do {
    bVar2 = *pbVar9;
    bVar10 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_009a8b19:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_009a8b1e;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar9[1];
    bVar10 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_009a8b19;
    pbVar9 = pbVar9 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_009a8b1e:
  if (iVar5 == 0) {
LAB_009a8bb1:
    bVar10 = true;
  }
  else {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy((char *)local_4c,"arial rounded mt ex bd",0x16);
    local_48 = 0x16;
    local_4c[0x16] = 0;
    bVar3 = true;
    pbVar8 = local_4c;
    pbVar9 = local_6c;
    do {
      bVar2 = *pbVar9;
      bVar10 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_009a8ba1:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_009a8ba6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar10 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_009a8ba1;
      pbVar9 = pbVar9 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_009a8ba6:
    bVar10 = false;
    if (iVar5 == 0) goto LAB_009a8bb1;
  }
  if ((bVar3) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar10) {
    if (local_64 < 0xd) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy((char *)local_6c,"default_bold",0xc);
    local_68 = 0xc;
    local_6c[0xc] = 0;
  }
  puVar6 = DAT_010c97f0;
  if ((param_2 == -1) || (0xb < param_2)) {
    if ((param_3 & 2) == 0) {
      puVar6 = FUN_00a5abb0((char *)local_6c,(int *)0x0);
    }
LAB_009a8d36:
    *(undefined4 **)this = puVar6;
  }
  else {
    if ((param_3 & 2) != 0) goto LAB_009a8d36;
    puVar6 = FUN_00a5abb0("small",(int *)0x0);
    local_2c = local_20;
    *(undefined4 **)this = puVar6;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    _strncpy((char *)local_2c,"small",5);
    local_28 = 5;
    local_2c[5] = 0;
    uVar7 = FUN_00401ec0(*(undefined4 **)this,&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if ((char)uVar7 != '\0') {
      *(float *)((int)this + 0x14) = (float)*(int *)(*(int *)this + 0x2c) * 0.5;
      FUN_00acd42c();
      uVar11 = FUN_009a8150();
      *(int *)((int)this + 0x18) = (int)uVar11;
      goto LAB_009a8d40;
    }
  }
  FUN_009a84c0(this,param_2);
LAB_009a8d40:
  FUN_009a8440((int)this);
  if (DAT_0105cb4c != (code *)0x0) {
    (*DAT_0105cb4c)(local_6c,*(undefined4 *)((int)this + 0x18));
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_009a8d90 @ 009a8d90 ////

void __cdecl FUN_009a8d90(undefined4 *param_1)

{
  wchar_t *pwVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar4 = operator_new(0x48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_009a89b0(puVar4);
  }
  pwVar1 = (wchar_t *)*param_1;
  uVar5 = FUN_00ace02d(pwVar1);
  FUN_004036d0(puVar4,pwVar1,uVar5);
  puVar7 = param_1;
  puVar8 = puVar4 + 8;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((((float)param_1[2] == 0.0) && ((float)param_1[3] == 0.0)) && ((float)param_1[4] == 0.0)) {
    fVar2 = (float)DAT_00e67ba8;
    puVar4[10] = 0;
    puVar4[0xc] = 0;
    puVar4[0xb] = fVar2 * 14.0;
    DAT_00e67ba8 = DAT_00e67ba8 + 1;
  }
  else if ((*(byte *)(param_1 + 8) & 1) != 0) {
    if (DAT_0105c434 <= DAT_0105c404) {
      fVar2 = -14.0;
    }
    else {
      fVar2 = 14.0;
    }
    fVar3 = DAT_0105c430 + 16.0;
    fVar2 = (float)DAT_0105cb48 * fVar2 + DAT_0105c434;
    puVar4[0xc] = 0;
    puVar4[0xb] = fVar2;
    puVar4[10] = fVar3;
    DAT_0105cb48 = DAT_0105cb48 + 1;
  }
  if (param_1[5] != 0) {
    puVar4[0xd] = param_1[5];
    return;
  }
  puVar4[0xd] = DAT_0105cb40;
  return;
}


//// FUNCTION FUN_009a8ec0 @ 009a8ec0 ////

void __cdecl FUN_009a8ec0(undefined4 *param_1,char param_2)

{
  float fVar1;
  undefined4 uVar2;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar2 = FUN_009a1b30(&DAT_0105c2e8,(float *)(param_1 + 2),&local_2c);
  if ((char)uVar2 == '\0') {
    return;
  }
  local_24 = *param_1;
  local_20 = param_1[1];
  local_8 = param_1[7];
  local_10 = param_1[5];
  local_4 = local_4 ^ (param_1[8] ^ local_4) & 1;
  local_c = (float)param_1[6];
  local_18 = local_28;
  local_1c = local_2c;
  local_14 = 0;
  if (param_2 != '\0') {
    fVar1 = DAT_0105c3a8 - (float)param_1[2];
    local_c = SQRT(fVar1 * fVar1 +
                   (DAT_0105c3ac - (float)param_1[3]) * (DAT_0105c3ac - (float)param_1[3]) +
                   (DAT_0105c3b0 - (float)param_1[4]) * (DAT_0105c3b0 - (float)param_1[4]));
    if (local_c <= DAT_0105c3e0) {
      return;
    }
    local_c = (float)param_1[6] / local_c;
  }
  FUN_009a8d90(&local_24);
  return;
}


//// FUNCTION FUN_009a8fc0 @ 009a8fc0 ////

void FUN_009a8fc0(void)

{
  int *piVar1;
  int *_Memory;
  
  _Memory = DAT_0105cb44;
  if (DAT_0105cd94 == '\0') {
    if (DAT_0105cb44 != (int *)0x0) {
      piVar1 = DAT_0105cb44 + 8;
      *piVar1 = *DAT_0105cb44;
      if ((DAT_0105cd94 == '\0') && ((void *)_Memory[0xd] != (void *)0x0)) {
        FUN_009a81f0((void *)_Memory[0xd],piVar1);
      }
      FUN_009a8590(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_0105cb44 = (int *)0x0;
    DAT_00e67ba8 = 3;
    DAT_0105cb48 = 0;
  }
  return;
}


//// FUNCTION FUN_009a9040 @ 009a9040 ////

void FUN_009a9040(void)

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


//// FUNCTION FUN_009a90a0 @ 009a90a0 ////

void * __thiscall FUN_009a90a0(void *this,byte param_1)

{
  FUN_009a8990((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009a90c0 @ 009a90c0 ////

void __fastcall FUN_009a90c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009a9040();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_009a9100 @ 009a9100 ////

int __fastcall FUN_009a9100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009a9040();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009a9140 @ 009a9140 ////

void FUN_009a9140(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_009a9140(*(void **)((int)param_1 + 8));
    FUN_009a8990((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009a9180 @ 009a9180 ////

void __fastcall FUN_009a9180(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 8), (int)puVar1 - *(int *)(param_1 + 4) >> 5 != 0)) {
    FUN_00405fe0(puVar1 + -8,puVar1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x20;
  }
  return;
}


//// FUNCTION FUN_009a91b0 @ 009a91b0 ////

void __thiscall FUN_009a91b0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf6648;
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
  FUN_009a8030((int *)&param_2);
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
      goto LAB_009a9321;
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
      piVar2 = (int *)FUN_009a7f80(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_009a7f60((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_009a9321:
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
            FUN_009a7f00(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_009a7fa0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_009a7f00(this,(int)piVar5);
              break;
            }
LAB_009a93e4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_009a7fa0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_009a93e4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_009a7f00(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_009a7fa0(this,piVar5);
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


//// FUNCTION FUN_009a9480 @ 009a9480 ////

void __fastcall FUN_009a9480(int param_1)

{
  FUN_009a9140(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_009a94b0 @ 009a94b0 ////

void FUN_009a94b0(void)

{
  int *_Memory;
  undefined4 *puVar1;
  
  _Memory = DAT_0105cb40;
  if (DAT_0105cb40 != (int *)0x0) {
    if (*DAT_0105cb40 != 0) {
      *DAT_0105cb40 = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cb40 = (int *)0x0;
  FUN_00a5b2c0();
  for (; (DAT_0105cb64 != 0 && ((int)DAT_0105cb68 - DAT_0105cb64 >> 5 != 0));
      DAT_0105cb68 = DAT_0105cb68 + -8) {
    for (puVar1 = DAT_0105cb68 + -8; puVar1 != DAT_0105cb68; puVar1 = puVar1 + 8) {
      if (0x14 < (uint)puVar1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_009a9540 @ 009a9540 ////

void __thiscall FUN_009a9540(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_009a9140((void *)piVar6[1]);
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
    FUN_009a91b0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_009a9660 @ 009a9660 ////

void __fastcall FUN_009a9660(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_009a9540(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009a9690 @ 009a9690 ////

void FUN_009a9690(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *_Dest;
  undefined4 *puVar4;
  char *pcVar5;
  uint _Count;
  uint uVar6;
  uint uStack_19c;
  char acStack_198 [20];
  undefined4 auStack_184 [16];
  undefined1 uStack_144;
  int iStack_13c;
  int iStack_138;
  undefined1 local_128 [16];
  char acStack_118 [260];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6684;
  pvStack_c = ExceptionList;
  DAT_0105cb5c = 0;
  DAT_0105cb50 = 0;
  DAT_0105cb58 = DAT_0105c400;
  DAT_0105cb54 = DAT_0105c404;
  ExceptionList = &pvStack_c;
  FUN_00a5b100();
  piVar2 = DAT_0105cb40;
  if (DAT_0105cb40 != (int *)0x0) {
    if (*DAT_0105cb40 != 0) {
      *DAT_0105cb40 = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  DAT_0105cb40 = (int *)0x0;
  (**(code **)(*g_pDirect3DDevice + 0xc0))(g_pDirect3DDevice,local_128);
  FUN_009c89a0(auStack_184);
  pvStack_c = (void *)0x0;
  uStack_144 = 0;
  FUN_009ca9d0(auStack_184,"*.fnt",PTR_DAT_00e6956c,(undefined1 *)0x1);
  uVar6 = 0;
  do {
    if ((iStack_13c == 0) || ((uint)(iStack_138 - iStack_13c >> 2) <= uVar6)) {
      puVar4 = operator_new(0x7c);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
      if (puVar4 == (undefined4 *)0x0) {
        DAT_0105cb40 = (undefined4 *)0x0;
      }
      else {
        DAT_0105cb40 = FUN_009a87d0(puVar4);
      }
      pvStack_c = (void *)0xffffffff;
      FUN_009c8560(auStack_184);
      ExceptionList = pvStack_14;
      return;
    }
    __splitpath(*(char **)(iStack_13c + uVar6 * 4),(char *)0x0,(char *)0x0,acStack_118,(char *)0x0);
    iVar3 = __stricmp(acStack_118,"small");
    if (iVar3 != 0) {
      _Dest = acStack_198;
      pcVar5 = acStack_118;
      acStack_198[0] = '\0';
      uStack_19c = 0x14;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      _Count = (int)pcVar5 - (int)(acStack_118 + 1);
      if (0x13 < _Count) {
        uStack_19c = _Count + 0x20 & 0xffffffe0;
        _Dest = _malloc(uStack_19c);
      }
      _strncpy(_Dest,acStack_118,_Count);
      piVar2 = DAT_0105cb68;
      _Dest[_Count] = '\0';
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      if ((DAT_0105cb64 == 0) ||
         ((uint)(DAT_0105cb6c - DAT_0105cb64 >> 5) <= (uint)((int)DAT_0105cb68 - DAT_0105cb64 >> 5))
         ) {
        FUN_00439fd0(&DAT_0105cb60,DAT_0105cb68,1,(undefined4 *)&stack0xfffffe5c);
      }
      else {
        FUN_00439ea0(DAT_0105cb68,1,(undefined4 *)&stack0xfffffe5c);
        DAT_0105cb68 = piVar2 + 8;
      }
      pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
      if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}


//// FUNCTION FUN_009a98f0 @ 009a98f0 ////

int __fastcall FUN_009a98f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009a9040();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009a9a70 @ 009a9a70 ////

void __thiscall FUN_009a9a70(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  fVar3 = param_1[4] + *param_1 + param_1[8];
  if (0.0 < fVar3) {
    fVar3 = SQRT(fVar3 + 1.0);
    *(float *)((int)this + 0xc) = fVar3 * 0.5;
    fVar3 = 0.5 / fVar3;
    *(float *)this = (param_1[5] - param_1[7]) * fVar3;
    *(float *)((int)this + 4) = (param_1[6] - param_1[2]) * fVar3;
    *(float *)((int)this + 8) = (param_1[1] - param_1[3]) * fVar3;
    return;
  }
  uVar4 = (uint)(*param_1 < param_1[4]);
  if (param_1[uVar4 * 4] < param_1[8]) {
    uVar4 = 2;
  }
  iVar1 = *(int *)(&DAT_00e67bdc + uVar4 * 4);
  iVar2 = *(int *)(&DAT_00e67bdc + iVar1 * 4);
  fVar3 = SQRT(((param_1[uVar4 * 4] - param_1[iVar1 * 4]) - param_1[iVar2 * 4]) + 1.0);
  if (fVar3 < 1.1920929e-07) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 0xc) = 0x3f800000;
    return;
  }
  *(float *)((int)this + uVar4 * 4) = fVar3 * 0.5;
  fVar3 = 0.5 / fVar3;
  *(float *)((int)this + 0xc) = (param_1[iVar1 * 3 + iVar2] - param_1[iVar2 * 3 + iVar1]) * fVar3;
  *(float *)((int)this + iVar1 * 4) =
       (param_1[uVar4 * 3 + iVar1] + param_1[iVar1 * 3 + uVar4]) * fVar3;
  *(float *)((int)this + iVar2 * 4) =
       (param_1[uVar4 * 3 + iVar2] + param_1[iVar2 * 3 + uVar4]) * fVar3;
  return;
}


//// FUNCTION FUN_009a9bb0 @ 009a9bb0 ////

void __thiscall FUN_009a9bb0(void *this,float param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fsin((float10)param_1 * (float10)0.5);
  fVar1 = (float)(fVar2 / SQRT((float10)param_2[2] * (float10)param_2[2] +
                               (float10)param_2[1] * (float10)param_2[1] +
                               (float10)*param_2 * (float10)*param_2));
  *(float *)this = fVar1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * param_2[1];
  *(float *)((int)this + 8) = fVar1 * param_2[2];
  fVar2 = (float10)fcos((float10)param_1 * (float10)0.5);
  *(float *)((int)this + 0xc) = (float)fVar2;
  return;
}


//// FUNCTION FUN_009a9c70 @ 009a9c70 ////

void __fastcall FUN_009a9c70(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[3] * param_1[3] +
          param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (fVar1 == 0.0) {
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    param_1[3] = 1.0;
    return;
  }
  fVar1 = 1.0 / SQRT(fVar1);
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  param_1[3] = fVar1 * param_1[3];
  return;
}


//// FUNCTION FUN_009a9cf0 @ 009a9cf0 ////

void __thiscall FUN_009a9cf0(void *this,float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  pfVar5 = param_1;
  pfVar4 = (float *)(*param_1 * *param_2 +
                    param_2[3] * param_1[3] + param_1[1] * param_2[1] + param_1[2] * param_2[2]);
  if ((float)pfVar4 <= 1.0) {
    if ((float)pfVar4 < 0.0) {
      fVar1 = param_1[1];
      fVar2 = param_1[2];
      fVar3 = param_1[3];
      *(float *)this = -*param_1;
      *(float *)((int)this + 4) = -fVar1;
      param_1 = (float *)-(float)pfVar4;
      *(float *)((int)this + 8) = -fVar2;
      *(float *)((int)this + 0xc) = -fVar3;
      goto LAB_009a9d4c;
    }
  }
  else {
    param_1 = (float *)0x3f800000;
    pfVar4 = param_1;
  }
  param_1 = pfVar4;
  *(float *)this = *pfVar5;
  *(float *)((int)this + 4) = pfVar5[1];
  *(float *)((int)this + 8) = pfVar5[2];
  *(float *)((int)this + 0xc) = pfVar5[3];
LAB_009a9d4c:
  if (1e-07 < (float)param_1 + 1.0) {
    if (1e-07 <= 1.0 - (float)param_1) {
      fVar7 = (float10)FUN_00ad1010();
      fVar8 = (float10)fsin(fVar7);
      fVar6 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)(float)fVar7);
      fVar6 = fVar6 * (float10)(float)((float10)1.0 / fVar8);
      fVar7 = (float10)fsin((float10)(float)fVar7 * (float10)param_3);
      fVar7 = fVar7 * (float10)(float)((float10)1.0 / fVar8);
    }
    else {
      fVar6 = (float10)1.0 - (float10)param_3;
      fVar7 = (float10)param_3;
    }
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)this =
         (float)(fVar6 * (float10)*(float *)this + (float10)(float)(fVar7 * (float10)*param_2));
    *(float *)((int)this + 4) =
         (float)(fVar6 * (float10)*(float *)((int)this + 4) +
                (float10)(float)(fVar7 * (float10)fVar1));
    *(float *)((int)this + 8) =
         (float)(fVar6 * (float10)*(float *)((int)this + 8)) + (float)(fVar7 * (float10)fVar2);
    *(float *)((int)this + 0xc) =
         (float)((float10)(float)(fVar6 * (float10)*(float *)((int)this + 0xc)) +
                fVar7 * (float10)fVar3);
    return;
  }
  fVar6 = (float10)fsin(((float10)0.5 - (float10)param_3) * (float10)3.1415927);
  fVar7 = (float10)fsin((float10)param_3 * (float10)3.1415927);
  fVar1 = *(float *)this;
  fVar2 = *(float *)((int)this + 8);
  *(float *)this =
       (float)(fVar6 * (float10)*(float *)this +
              (float10)(float)(fVar7 * (float10)*(float *)((int)this + 4)));
  *(float *)((int)this + 4) =
       (float)(fVar6 * (float10)*(float *)((int)this + 4) + (float10)(float)(fVar7 * (float10)fVar1)
              );
  *(float *)((int)this + 8) =
       (float)(fVar6 * (float10)*(float *)((int)this + 8)) +
       (float)(fVar7 * (float10)*(float *)((int)this + 0xc));
  *(float *)((int)this + 0xc) =
       (float)((float10)(float)(fVar6 * (float10)*(float *)((int)this + 0xc)) +
              fVar7 * (float10)fVar2);
  return;
}


//// FUNCTION FUN_009a9f60 @ 009a9f60 ////

void __thiscall FUN_009a9f60(void *this,float *param_1)

{
  ulonglong uVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_1[1];
  local_10 = *param_1;
  local_8 = param_1[2];
  local_4 = param_1[3];
  FUN_009a9c70(&local_10);
  uVar1 = FUN_00acd42c();
  *(short *)this = (short)uVar1;
  uVar1 = FUN_00acd42c();
  *(short *)((int)this + 2) = (short)uVar1;
  uVar1 = FUN_00acd42c();
  *(short *)((int)this + 4) = (short)uVar1;
  if ((local_4 + 1.0) * 32767.0 < 0.0) {
    uVar1 = FUN_00acd42c();
    *(short *)((int)this + 6) = (short)uVar1;
    return;
  }
  uVar1 = FUN_00acd42c();
  *(short *)((int)this + 6) = (short)uVar1;
  return;
}


//// FUNCTION FUN_009aa0c0 @ 009aa0c0 ////

void __thiscall FUN_009aa0c0(void *this,ushort *param_1)

{
  *(float *)this = (float)*param_1 * 3.051851e-05 - 1.0;
  *(float *)((int)this + 4) = (float)param_1[1] * 3.051851e-05 - 1.0;
  *(float *)((int)this + 8) = (float)param_1[2] * 3.051851e-05 - 1.0;
  *(float *)((int)this + 0xc) = (float)param_1[3] * 3.051851e-05 - 1.0;
  return;
}


//// FUNCTION FUN_009aa140 @ 009aa140 ////

undefined4 * __thiscall FUN_009aa140(void *this,void *param_1,float param_2)

{
  void *this_00;
  ulonglong uVar1;
  float local_8;
  float local_4;
  
  this_00 = param_1;
  if (param_1 != (void *)0x0) {
    param_2 = 1.0 / param_2;
    param_1 = (void *)0x0;
    local_8 = 0.0;
    local_4 = 0.0;
    FUN_009ab850(this_00,(float *)&param_1,&local_8,&local_4);
    uVar1 = FUN_00acd42c();
    *(short *)((int)this + 6) = (short)uVar1;
    uVar1 = FUN_00acd42c();
    *(short *)((int)this + 8) = (short)uVar1;
    uVar1 = FUN_00acd42c();
    *(short *)((int)this + 10) = (short)uVar1;
    uVar1 = FUN_009848f0(param_2 * *(float *)((int)this_00 + 0x24));
    *(short *)this = (short)uVar1;
    uVar1 = FUN_009848f0(param_2 * *(float *)((int)this_00 + 0x28));
    *(short *)((int)this + 2) = (short)uVar1;
    uVar1 = FUN_009848f0(param_2 * *(float *)((int)this_00 + 0x2c));
    *(short *)((int)this + 4) = (short)uVar1;
    return this;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return this;
}


//// FUNCTION FUN_009aa2c0 @ 009aa2c0 ////

void __thiscall FUN_009aa2c0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[4];
  *(undefined4 *)((int)this + 0x10) = param_1[5];
  *(undefined4 *)((int)this + 0x14) = param_1[6];
  *(undefined4 *)((int)this + 0x18) = param_1[8];
  *(undefined4 *)((int)this + 0x1c) = param_1[9];
  *(undefined4 *)((int)this + 0x20) = param_1[10];
  *(undefined4 *)((int)this + 0x24) = param_1[0xc];
  *(undefined4 *)((int)this + 0x28) = param_1[0xd];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xe];
  return;
}


//// FUNCTION FUN_009aa310 @ 009aa310 ////

void __thiscall FUN_009aa310(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1[3];
  *(undefined4 *)((int)this + 0x14) = param_1[4];
  *(undefined4 *)((int)this + 0x18) = param_1[5];
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1[6];
  *(undefined4 *)((int)this + 0x24) = param_1[7];
  *(undefined4 *)((int)this + 0x28) = param_1[8];
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = param_1[9];
  *(undefined4 *)((int)this + 0x34) = param_1[10];
  *(undefined4 *)((int)this + 0x38) = param_1[0xb];
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  return;
}


//// FUNCTION FUN_009aa380 @ 009aa380 ////

void __thiscall FUN_009aa380(void *this,float *param_1)

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
  
  fVar1 = *param_1 * *param_1;
  fVar1 = fVar1 + fVar1;
  fVar2 = param_1[1] * param_1[1];
  fVar3 = param_1[2] * param_1[2];
  fVar3 = fVar3 + fVar3;
  fVar4 = *param_1 * param_1[1] + *param_1 * param_1[1];
  fVar6 = *param_1 * param_1[3] + *param_1 * param_1[3];
  fVar7 = param_1[3] * param_1[1] + param_1[3] * param_1[1];
  fVar5 = param_1[2] * param_1[3] + param_1[2] * param_1[3];
  fVar8 = param_1[2] * *param_1 + param_1[2] * *param_1;
  fVar9 = param_1[2] * param_1[1] + param_1[2] * param_1[1];
  fVar2 = 1.0 - (fVar2 + fVar2);
  *(float *)this = fVar2 - fVar3;
  *(float *)((int)this + 4) = fVar5 + fVar4;
  *(float *)((int)this + 8) = fVar8 - fVar7;
  *(float *)((int)this + 0xc) = fVar4 - fVar5;
  *(float *)((int)this + 0x10) = (1.0 - fVar3) - fVar1;
  *(float *)((int)this + 0x14) = fVar9 + fVar6;
  *(float *)((int)this + 0x18) = fVar8 + fVar7;
  *(float *)((int)this + 0x1c) = fVar9 - fVar6;
  *(float *)((int)this + 0x20) = fVar2 - fVar1;
  return;
}


//// FUNCTION FUN_009aa480 @ 009aa480 ////

void FUN_009aa480(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    iVar2 = iVar2 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_009d9820();
    } while (iVar1 < 3);
  } while (iVar2 < 4);
  return;
}


//// FUNCTION FUN_009aa500 @ 009aa500 ////

void __thiscall FUN_009aa500(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (param_1[8] * param_1[4] - param_1[7] * param_1[5]) * *param_1 +
          (param_1[5] * param_1[1] - param_1[2] * param_1[4]) * param_1[6] +
          (param_1[2] * param_1[7] - param_1[8] * param_1[1]) * param_1[3];
  if (ABS(fVar1) < 1e-10) {
    if (0.0 <= fVar1) {
      fVar1 = 1e-10;
    }
    else {
      fVar1 = -1e-10;
    }
  }
  fVar1 = 1.0 / fVar1;
  *(float *)this = (param_1[8] * param_1[4] - param_1[7] * param_1[5]) * fVar1;
  *(float *)((int)this + 0xc) = (param_1[6] * param_1[5] - param_1[8] * param_1[3]) * fVar1;
  *(float *)((int)this + 0x18) = (param_1[7] * param_1[3] - param_1[6] * param_1[4]) * fVar1;
  *(float *)((int)this + 4) = (param_1[2] * param_1[7] - param_1[8] * param_1[1]) * fVar1;
  *(float *)((int)this + 0x10) = (param_1[8] * *param_1 - param_1[6] * param_1[2]) * fVar1;
  *(float *)((int)this + 0x1c) = (param_1[6] * param_1[1] - *param_1 * param_1[7]) * fVar1;
  *(float *)((int)this + 8) = (param_1[5] * param_1[1] - param_1[2] * param_1[4]) * fVar1;
  *(float *)((int)this + 0x14) = (param_1[2] * param_1[3] - *param_1 * param_1[5]) * fVar1;
  *(float *)((int)this + 0x20) = (*param_1 * param_1[4] - param_1[3] * param_1[1]) * fVar1;
  *(float *)((int)this + 0x24) =
       -(*(float *)this * param_1[9] +
        param_1[10] * *(float *)((int)this + 0xc) + param_1[0xb] * *(float *)((int)this + 0x18));
  *(float *)((int)this + 0x28) =
       -(param_1[9] * *(float *)((int)this + 4) +
        *(float *)((int)this + 0x1c) * param_1[0xb] + *(float *)((int)this + 0x10) * param_1[10]);
  *(float *)((int)this + 0x2c) =
       -(*(float *)((int)this + 8) * param_1[9] +
        *(float *)((int)this + 0x20) * param_1[0xb] + param_1[10] * *(float *)((int)this + 0x14));
  return;
}


//// FUNCTION FUN_009aa670 @ 009aa670 ////

void __fastcall FUN_009aa670(float *param_1)

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
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar11 = param_1;
  pfVar12 = local_30;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fVar1 = local_30[1] * local_1c - local_30[2] * local_20;
  fVar2 = local_30[2] * local_14 - local_30[1] * local_10;
  fVar3 = local_10 * local_20 - local_1c * local_14;
  fVar4 = fVar3 * local_30[0] + fVar2 * local_30[3] + fVar1 * local_18;
  if (ABS(fVar4) < 1e-10) {
    if (0.0 <= fVar4) {
      fVar4 = 1e-10;
    }
    else {
      fVar4 = -1e-10;
    }
  }
  fVar4 = 1.0 / fVar4;
  fVar3 = fVar3 * fVar4;
  *param_1 = fVar3;
  fVar5 = (local_18 * local_1c - local_30[3] * local_10) * fVar4;
  param_1[3] = fVar5;
  fVar6 = (local_30[3] * local_14 - local_18 * local_20) * fVar4;
  param_1[6] = fVar6;
  fVar2 = fVar2 * fVar4;
  param_1[1] = fVar2;
  fVar7 = (local_10 * local_30[0] - local_18 * local_30[2]) * fVar4;
  param_1[4] = fVar7;
  fVar8 = (local_18 * local_30[1] - local_14 * local_30[0]) * fVar4;
  param_1[7] = fVar8;
  fVar1 = fVar1 * fVar4;
  param_1[2] = fVar1;
  fVar9 = (local_30[2] * local_30[3] - local_1c * local_30[0]) * fVar4;
  param_1[5] = fVar9;
  fVar4 = (local_20 * local_30[0] - local_30[1] * local_30[3]) * fVar4;
  param_1[8] = fVar4;
  param_1[9] = -(fVar3 * local_c + fVar5 * local_8 + fVar6 * local_4);
  param_1[10] = -(fVar2 * local_c + fVar7 * local_8 + fVar8 * local_4);
  param_1[0xb] = -(fVar1 * local_c + fVar9 * local_8 + fVar4 * local_4);
  return;
}


//// FUNCTION FUN_009aa830 @ 009aa830 ////

void __thiscall FUN_009aa830(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = this;
  pfVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)this = local_30[0] * *param_1 + local_30[1] * param_1[3] + local_30[2] * param_1[6];
  *(float *)((int)this + 4) =
       local_30[0] * param_1[1] + local_30[1] * param_1[4] + local_30[2] * param_1[7];
  *(float *)((int)this + 8) =
       local_30[0] * param_1[2] + local_30[1] * param_1[5] + local_30[2] * param_1[8];
  *(float *)((int)this + 0xc) =
       local_30[3] * *param_1 + local_20 * param_1[3] + local_1c * param_1[6];
  *(float *)((int)this + 0x10) =
       local_30[3] * param_1[1] + local_20 * param_1[4] + local_1c * param_1[7];
  *(float *)((int)this + 0x14) =
       local_30[3] * param_1[2] + local_20 * param_1[5] + local_1c * param_1[8];
  *(float *)((int)this + 0x18) = local_18 * *param_1 + local_14 * param_1[3] + local_10 * param_1[6]
  ;
  *(float *)((int)this + 0x1c) =
       local_18 * param_1[1] + local_14 * param_1[4] + local_10 * param_1[7];
  *(float *)((int)this + 0x20) =
       local_18 * param_1[2] + local_14 * param_1[5] + local_10 * param_1[8];
  *(float *)((int)this + 0x24) =
       local_c * *param_1 + local_8 * param_1[3] + local_4 * param_1[6] + param_1[9];
  *(float *)((int)this + 0x28) =
       local_c * param_1[1] + local_8 * param_1[4] + local_4 * param_1[7] + param_1[10];
  *(float *)((int)this + 0x2c) =
       local_c * param_1[2] + local_8 * param_1[5] + local_4 * param_1[8] + param_1[0xb];
  return;
}


//// FUNCTION FUN_009aaad0 @ 009aaad0 ////

void __thiscall FUN_009aaad0(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_40 [4];
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
  
  pfVar2 = this;
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)this =
       local_40[0] * *param_1 +
       local_40[2] * param_1[8] + local_40[3] * param_1[0xc] + local_40[1] * param_1[4];
  *(float *)((int)this + 4) =
       local_40[2] * param_1[9] +
       local_40[3] * param_1[0xd] + local_40[1] * param_1[5] + local_40[0] * param_1[1];
  *(float *)((int)this + 8) =
       local_40[2] * param_1[10] +
       local_40[3] * param_1[0xe] + local_40[1] * param_1[6] + local_40[0] * param_1[2];
  *(float *)((int)this + 0xc) =
       local_40[0] * param_1[3] +
       local_40[2] * param_1[0xb] + local_40[3] * param_1[0xf] + local_40[1] * param_1[7];
  *(float *)((int)this + 0x10) =
       local_30 * *param_1 + local_28 * param_1[8] + local_24 * param_1[0xc] + local_2c * param_1[4]
  ;
  *(float *)((int)this + 0x14) =
       local_28 * param_1[9] +
       local_24 * param_1[0xd] + local_2c * param_1[5] + local_30 * param_1[1];
  *(float *)((int)this + 0x18) =
       local_28 * param_1[10] +
       local_24 * param_1[0xe] + local_2c * param_1[6] + local_30 * param_1[2];
  *(float *)((int)this + 0x1c) =
       local_30 * param_1[3] +
       local_28 * param_1[0xb] + local_24 * param_1[0xf] + local_2c * param_1[7];
  *(float *)((int)this + 0x20) =
       local_20 * *param_1 + local_18 * param_1[8] + local_14 * param_1[0xc] + local_1c * param_1[4]
  ;
  *(float *)((int)this + 0x24) =
       local_18 * param_1[9] +
       local_14 * param_1[0xd] + local_1c * param_1[5] + local_20 * param_1[1];
  *(float *)((int)this + 0x28) =
       local_18 * param_1[10] +
       local_14 * param_1[0xe] + local_1c * param_1[6] + local_20 * param_1[2];
  *(float *)((int)this + 0x2c) =
       local_20 * param_1[3] +
       local_18 * param_1[0xb] + local_14 * param_1[0xf] + local_1c * param_1[7];
  *(float *)((int)this + 0x30) =
       local_10 * *param_1 + local_8 * param_1[8] + local_4 * param_1[0xc] + local_c * param_1[4];
  *(float *)((int)this + 0x34) =
       local_8 * param_1[9] + local_4 * param_1[0xd] + local_c * param_1[5] + local_10 * param_1[1];
  *(float *)((int)this + 0x38) =
       local_8 * param_1[10] + local_4 * param_1[0xe] + local_c * param_1[6] + local_10 * param_1[2]
  ;
  *(float *)((int)this + 0x3c) =
       local_10 * param_1[3] +
       local_8 * param_1[0xb] + local_4 * param_1[0xf] + local_c * param_1[7];
  return;
}


//// FUNCTION FUN_009aad40 @ 009aad40 ////

void __thiscall FUN_009aad40(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_40 [4];
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
  
  pfVar2 = this;
  pfVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)this =
       local_40[0] * *param_1 +
       local_20 * param_1[2] + local_10 * param_1[3] + local_30 * param_1[1];
  *(float *)((int)this + 4) =
       local_40[1] * *param_1 + local_1c * param_1[2] + local_c * param_1[3] + local_2c * param_1[1]
  ;
  *(float *)((int)this + 8) =
       local_40[2] * *param_1 + local_18 * param_1[2] + local_8 * param_1[3] + local_28 * param_1[1]
  ;
  *(float *)((int)this + 0xc) =
       local_40[3] * *param_1 + local_14 * param_1[2] + local_4 * param_1[3] + local_24 * param_1[1]
  ;
  *(float *)((int)this + 0x10) =
       local_30 * param_1[5] +
       local_40[0] * param_1[4] + local_20 * param_1[6] + local_10 * param_1[7];
  *(float *)((int)this + 0x14) =
       local_2c * param_1[5] +
       local_40[1] * param_1[4] + local_1c * param_1[6] + local_c * param_1[7];
  *(float *)((int)this + 0x18) =
       local_28 * param_1[5] +
       local_40[2] * param_1[4] + local_18 * param_1[6] + local_8 * param_1[7];
  *(float *)((int)this + 0x1c) =
       local_24 * param_1[5] +
       local_40[3] * param_1[4] + local_14 * param_1[6] + local_4 * param_1[7];
  *(float *)((int)this + 0x20) =
       local_30 * param_1[9] +
       local_40[0] * param_1[8] + local_20 * param_1[10] + local_10 * param_1[0xb];
  *(float *)((int)this + 0x24) =
       local_2c * param_1[9] +
       local_40[1] * param_1[8] + local_1c * param_1[10] + local_c * param_1[0xb];
  *(float *)((int)this + 0x28) =
       local_28 * param_1[9] +
       local_40[2] * param_1[8] + local_18 * param_1[10] + local_8 * param_1[0xb];
  *(float *)((int)this + 0x2c) =
       local_24 * param_1[9] +
       local_40[3] * param_1[8] + local_14 * param_1[10] + local_4 * param_1[0xb];
  *(float *)((int)this + 0x30) =
       local_30 * param_1[0xd] +
       local_40[0] * param_1[0xc] + local_20 * param_1[0xe] + local_10 * param_1[0xf];
  *(float *)((int)this + 0x34) =
       local_2c * param_1[0xd] +
       local_40[1] * param_1[0xc] + local_1c * param_1[0xe] + local_c * param_1[0xf];
  *(float *)((int)this + 0x38) =
       local_28 * param_1[0xd] +
       local_40[2] * param_1[0xc] + local_18 * param_1[0xe] + local_8 * param_1[0xf];
  *(float *)((int)this + 0x3c) =
       local_24 * param_1[0xd] +
       local_40[3] * param_1[0xc] + local_14 * param_1[0xe] + local_4 * param_1[0xf];
  return;
}


//// FUNCTION FUN_009aafb0 @ 009aafb0 ////

void __thiscall FUN_009aafb0(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = this;
  pfVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)this = local_30[0] * *param_1 + local_30[3] * param_1[1] + local_18 * param_1[2];
  *(float *)((int)this + 4) = local_30[1] * *param_1 + local_20 * param_1[1] + local_14 * param_1[2]
  ;
  *(float *)((int)this + 8) = local_30[2] * *param_1 + local_1c * param_1[1] + local_10 * param_1[2]
  ;
  *(float *)((int)this + 0xc) =
       local_30[3] * param_1[4] + local_18 * param_1[5] + local_30[0] * param_1[3];
  *(float *)((int)this + 0x10) =
       local_20 * param_1[4] + local_14 * param_1[5] + local_30[1] * param_1[3];
  *(float *)((int)this + 0x14) =
       local_1c * param_1[4] + local_10 * param_1[5] + local_30[2] * param_1[3];
  *(float *)((int)this + 0x18) =
       local_30[0] * param_1[6] + local_30[3] * param_1[7] + local_18 * param_1[8];
  *(float *)((int)this + 0x1c) =
       local_30[1] * param_1[6] + local_20 * param_1[7] + local_14 * param_1[8];
  *(float *)((int)this + 0x20) =
       local_30[2] * param_1[6] + local_1c * param_1[7] + local_10 * param_1[8];
  *(float *)((int)this + 0x24) =
       local_30[3] * param_1[10] + local_18 * param_1[0xb] + local_30[0] * param_1[9] + local_c;
  *(float *)((int)this + 0x28) =
       local_20 * param_1[10] + local_14 * param_1[0xb] + local_30[1] * param_1[9] + local_8;
  *(float *)((int)this + 0x2c) =
       local_1c * param_1[10] + local_10 * param_1[0xb] + local_30[2] * param_1[9] + local_4;
  return;
}


//// FUNCTION FUN_009ab130 @ 009ab130 ////

void __thiscall FUN_009ab130(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  pfVar2 = this;
  pfVar3 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(float *)this = local_30[0] * *param_1 + local_30[3] * param_1[1] + local_18 * param_1[2];
  *(float *)((int)this + 4) = local_30[1] * *param_1 + local_20 * param_1[1] + local_14 * param_1[2]
  ;
  *(float *)((int)this + 8) = local_30[2] * *param_1 + local_1c * param_1[1] + local_10 * param_1[2]
  ;
  *(float *)((int)this + 0xc) =
       local_30[3] * param_1[4] + local_18 * param_1[5] + local_30[0] * param_1[3];
  *(float *)((int)this + 0x10) =
       local_20 * param_1[4] + local_14 * param_1[5] + local_30[1] * param_1[3];
  *(float *)((int)this + 0x14) =
       local_1c * param_1[4] + local_10 * param_1[5] + local_30[2] * param_1[3];
  *(float *)((int)this + 0x18) =
       local_30[0] * param_1[6] + local_30[3] * param_1[7] + local_18 * param_1[8];
  *(float *)((int)this + 0x1c) =
       local_30[1] * param_1[6] + local_20 * param_1[7] + local_14 * param_1[8];
  *(float *)((int)this + 0x20) =
       local_30[2] * param_1[6] + local_1c * param_1[7] + local_10 * param_1[8];
  return;
}


//// FUNCTION FUN_009ab250 @ 009ab250 ////

void __fastcall FUN_009ab250(float *param_1)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    FUN_00412e20(param_1);
    param_1 = param_1 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_009ab280 @ 009ab280 ////

void __cdecl FUN_009ab280(float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  
  switch(param_3) {
  case 0:
    fVar1 = param_2[2];
    fVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = fVar2;
    param_1[2] = fVar1;
    return;
  case 1:
    fVar1 = param_2[2];
    fVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = fVar2;
    param_1[2] = fVar1 + 3.1415927;
    return;
  case 2:
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = 3.1415927 - fVar2;
    param_1[2] = fVar1;
    return;
  case 3:
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    break;
  case 4:
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = 3.1415927 - fVar2;
    param_1[2] = fVar1 + 3.1415927;
    return;
  case 5:
    fVar1 = param_2[2] + 3.1415927;
    fVar2 = param_2[1];
    break;
  case 6:
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    *param_1 = *param_2 + 3.1415927;
    param_1[1] = 3.1415927 - fVar2;
    param_1[2] = fVar1;
    return;
  case 7:
    fVar1 = param_2[2] + 3.1415927;
    fVar2 = 3.1415927 - param_2[1];
    break;
  default:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return;
  }
  *param_1 = *param_2 + 3.1415927;
  param_1[1] = fVar2;
  param_1[2] = fVar1;
  return;
}


//// FUNCTION FUN_009ab3f0 @ 009ab3f0 ////

void __thiscall FUN_009ab3f0(void *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar4 = (float10)fcos((float10)param_3);
  fVar5 = (float10)fsin((float10)param_3);
  fVar6 = (float10)fcos((float10)param_2);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fsin((float10)param_2);
  fVar7 = (float10)fcos((float10)param_1);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fsin((float10)param_1);
  fVar3 = (float)fVar7;
  *(float *)this = (float)((float10)fVar1 * fVar4);
  *(float *)((int)this + 4) = (float)((float10)fVar1 * fVar5);
  *(float *)((int)this + 8) = (float)-fVar6;
  *(float *)((int)this + 0xc) = (float)((float10)fVar3 * fVar6 * fVar4 - (float10)fVar2 * fVar5);
  *(float *)((int)this + 0x10) = (float)((float10)fVar2 * fVar4 + (float10)fVar3 * fVar6 * fVar5);
  *(float *)((int)this + 0x14) = fVar3 * fVar1;
  *(float *)((int)this + 0x18) = (float)((float10)fVar3 * fVar5 + fVar6 * (float10)fVar2 * fVar4);
  *(float *)((int)this + 0x1c) = (float)(fVar6 * (float10)fVar2 * fVar5 - (float10)fVar3 * fVar4);
  *(float *)((int)this + 0x20) = fVar2 * fVar1;
  return;
}


//// FUNCTION Matrix_FromPackedPoseSample @ 009ab4a0 ////

void __thiscall Matrix_FromPackedPoseSample(void *this,int param_1,float param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0x20) = 0x3f800000;
    *(undefined4 *)((int)this + 0x10) = 0x3f800000;
    *(undefined4 *)this = 0x3f800000;
    return;
  }
  uVar5 = FUN_009ab3f0(this,(((float)*(ushort *)(param_1 + 6) - 0.5) * 3.0517578e-05 - 1.0) *
                            3.1415927,
                       (((float)*(ushort *)(param_1 + 8) - 0.5) * 3.0517578e-05 - 1.0) * 3.1415927,
                       (((float)*(ushort *)(param_1 + 10) - 0.5) * 3.0517578e-05 - 1.0) * 3.1415927)
  ;
  puVar4 = (ushort *)((ulonglong)uVar5 >> 0x20);
  iVar3 = (int)uVar5;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(float *)(iVar3 + 0x24) = ((float)*puVar4 * 3.051851e-05 - 1.0) * param_2;
  *(float *)(iVar3 + 0x28) = ((float)uVar1 * 3.051851e-05 - 1.0) * param_2;
  *(float *)(iVar3 + 0x2c) = ((float)uVar2 * 3.051851e-05 - 1.0) * param_2;
  return;
}


//// FUNCTION FUN_009ab5f0 @ 009ab5f0 ////

void __thiscall FUN_009ab5f0(void *this,float *param_1,float param_2)

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
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar12 = (float10)fcos((float10)param_2);
  fVar13 = (float10)fsin((float10)param_2);
  fVar15 = (float10)*param_1 * (float10)*param_1;
  fVar10 = param_1[1] * param_1[1];
  fVar11 = param_1[2] * param_1[2];
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  fVar4 = *param_1;
  fVar5 = param_1[2];
  fVar6 = param_1[1];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  *(float *)this = (float)(((float10)1.0 - fVar15) * fVar12 + fVar15);
  fVar15 = (float10)(fVar1 * fVar2) - (float10)(fVar1 * fVar2) * fVar12;
  *(float *)((int)this + 0xc) = (float)((float10)(float)(fVar13 * (float10)fVar9) + fVar15);
  fVar14 = (float10)(fVar3 * fVar4) - (float10)(fVar3 * fVar4) * fVar12;
  *(float *)((int)this + 0x18) = (float)(fVar14 - (float10)(float)(fVar13 * (float10)fVar8));
  *(float *)((int)this + 4) = (float)(fVar15 - (float10)(float)(fVar13 * (float10)fVar9));
  *(float *)((int)this + 0x10) =
       (float)(((float10)1.0 - (float10)fVar10) * fVar12 + (float10)fVar10);
  fVar15 = (float10)(fVar5 * fVar6) - (float10)(fVar5 * fVar6) * fVar12;
  *(float *)((int)this + 0x1c) = (float)(fVar15 + (float10)(float)(fVar13 * (float10)fVar7));
  *(float *)((int)this + 8) = (float)(fVar14 + (float10)(float)(fVar13 * (float10)fVar8));
  *(float *)((int)this + 0x14) = (float)fVar15 - (float)(fVar13 * (float10)fVar7);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(float *)((int)this + 0x20) =
       (float)(((float10)1.0 - (float10)fVar11) * fVar12 + (float10)fVar11);
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}


//// FUNCTION FUN_009ab700 @ 009ab700 ////

float10 __cdecl FUN_009ab700(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
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
  
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_10 = 1.0;
  local_20 = 1.0;
  local_30 = 1.0;
  FUN_009ab3f0(&local_30,*param_2,param_2[1],param_2[2]);
  fVar1 = local_18 + local_24 + local_30;
  fVar3 = (float10)local_20 + (float10)local_2c + (float10)local_14;
  fVar4 = (float10)(local_28 + local_1c) + (float10)local_10;
  fVar5 = (float10)fVar1;
  fVar1 = *param_1 -
          (float)((float10)fVar1 * (float10)local_30 +
                  fVar4 * (float10)local_18 + fVar3 * (float10)local_24 + (float10)local_c);
  fVar2 = param_1[1] -
          (float)((float10)local_2c * fVar5 + fVar4 * (float10)local_14 + fVar3 * (float10)local_20
                 + (float10)local_8);
  fVar3 = (float10)param_1[2] -
          ((float10)local_28 * fVar5 + (float10)local_1c * fVar3 + fVar4 * (float10)local_10 +
          (float10)local_4);
  return (float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2 + fVar3 * fVar3;
}


//// FUNCTION FUN_009ab850 @ 009ab850 ////

void __thiscall FUN_009ab850(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
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
  
  fVar1 = -*(float *)((int)this + 8);
  if (1.0 < fVar1) {
LAB_009ab88f:
    fVar8 = (float10)fpatan((float10)*(float *)((int)this + 0xc),
                            (float10)*(float *)((int)this + 0x18));
    local_24 = (float)fVar8;
    fVar8 = (float10)1.5707964;
    local_20 = (float)fVar8;
    fVar7 = (float10)0.0;
  }
  else {
    if (-1.0 <= fVar1) {
      if (0.9999 < fVar1) goto LAB_009ab88f;
      if (-0.9999 <= fVar1) {
        fVar8 = (float10)fpatan((float10)*(float *)((int)this + 0x14),
                                (float10)*(float *)((int)this + 0x20));
        local_24 = (float)fVar8;
        fVar8 = (float10)FUN_00ad2ae0();
        local_20 = (float)fVar8;
        fVar7 = (float10)fpatan((float10)*(float *)((int)this + 4),(float10)*(float *)this);
        goto LAB_009ab900;
      }
    }
    fVar8 = (float10)fpatan(-(float10)*(float *)((int)this + 0xc),
                            -(float10)*(float *)((int)this + 0x18));
    local_24 = (float)fVar8;
    fVar8 = (float10)-1.5707964;
    local_20 = (float)fVar8;
    fVar7 = (float10)0.0;
  }
LAB_009ab900:
  local_1c = (float)fVar7;
  iVar6 = 0;
  local_c = local_24;
  fVar1 = *(float *)((int)this + 0xc) + *(float *)this + *(float *)((int)this + 0x18);
  fVar2 = *(float *)((int)this + 0x10) + *(float *)((int)this + 4) + *(float *)((int)this + 0x1c);
  fVar3 = *(float *)((int)this + 0x14) + *(float *)((int)this + 8) + *(float *)((int)this + 0x20);
  local_18 = fVar2 * *(float *)((int)this + 0xc) +
             fVar3 * *(float *)((int)this + 0x18) + fVar1 * *(float *)this +
             *(float *)((int)this + 0x24);
  local_14 = fVar1 * *(float *)((int)this + 4) +
             fVar2 * *(float *)((int)this + 0x10) + fVar3 * *(float *)((int)this + 0x1c) +
             *(float *)((int)this + 0x28);
  local_10 = fVar1 * *(float *)((int)this + 8) +
             fVar2 * *(float *)((int)this + 0x14) + fVar3 * *(float *)((int)this + 0x20) +
             *(float *)((int)this + 0x2c);
  local_8 = (float)fVar8;
  local_4 = (float)fVar7;
  fVar8 = FUN_009ab700(&local_18,&local_c);
  local_28 = (float)fVar8;
  iVar5 = 1;
  do {
    pfVar4 = (float *)FUN_009ab280(&local_c,&local_24,iVar5);
    fVar8 = FUN_009ab700(&local_18,pfVar4);
    if ((fVar8 < (float10)local_28) && ((float10)0.001 < fVar8 - (float10)local_28)) {
      local_28 = (float)fVar8;
      iVar6 = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  FUN_009ab280(&local_c,&local_24,iVar6);
  fVar8 = FUN_004012c0(local_c);
  *param_1 = (float)fVar8;
  fVar8 = FUN_004012c0(local_8);
  *param_2 = (float)fVar8;
  fVar8 = FUN_004012c0(local_4);
  *param_3 = (float)fVar8;
  return;
}


//// FUNCTION FUN_009aba60 @ 009aba60 ////

void __fastcall FUN_009aba60(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_009aba70 @ 009aba70 ////

undefined1 __fastcall FUN_009aba70(undefined1 *param_1)

{
  return *param_1;
}


//// FUNCTION FUN_009aba80 @ 009aba80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009aba80(undefined4 *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,param_1);
  _DAT_0105cbe0 = local_8;
  _DAT_0105cbe4 = local_4;
  DAT_0105cbd8 = local_8;
  DAT_0105cbdc = local_4;
  return;
}


//// FUNCTION FUN_009abae0 @ 009abae0 ////

void __cdecl FUN_009abae0(undefined4 *param_1)

{
  DAT_0105cbd8 = *param_1;
  DAT_0105cbdc = param_1[1];
  return;
}


//// FUNCTION FUN_009abb00 @ 009abb00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009abb00(char param_1)

{
  if (param_1 != '\0') {
    if (DAT_0105cb84 < 1) {
      _DAT_0105cbe0 = DAT_0105cbd8;
      _DAT_0105cbe4 = DAT_0105cbdc;
    }
    DAT_0105cb84 = DAT_0105cb84 + 1;
    return;
  }
  DAT_0105cb84 = DAT_0105cb84 + -1;
  return;
}


//// FUNCTION FUN_009abb40 @ 009abb40 ////

bool FUN_009abb40(void)

{
  return 0 < DAT_0105cb84;
}


//// FUNCTION FUN_009abb50 @ 009abb50 ////

void __cdecl FUN_009abb50(undefined1 param_1)

{
  DAT_00e67c18 = param_1;
  return;
}


//// FUNCTION FUN_009abb70 @ 009abb70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009abb70(void *this,char param_1)

{
  if (param_1 != *(char *)this) {
    *(char *)this = param_1;
    if (param_1 != '\0') {
      if (DAT_0105cb84 < 1) {
        _DAT_0105cbe0 = DAT_0105cbd8;
        _DAT_0105cbe4 = DAT_0105cbdc;
      }
      DAT_0105cb84 = DAT_0105cb84 + 1;
      return;
    }
    DAT_0105cb84 = DAT_0105cb84 + -1;
  }
  return;
}


//// FUNCTION FUN_009abcf0 @ 009abcf0 ////

void __cdecl FUN_009abcf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (DAT_0105cb88 != 0) {
    uVar1 = param_1[1];
    *(undefined4 *)(DAT_0105cb88 + 0x28) = *param_1;
    *(undefined4 *)(DAT_0105cb88 + 0x2c) = uVar1;
    uVar1 = param_1[3];
    *(undefined4 *)(DAT_0105cb88 + 0x30) = param_1[2];
    *(undefined4 *)(DAT_0105cb88 + 0x34) = uVar1;
  }
  return;
}


//// FUNCTION FUN_009abd50 @ 009abd50 ////

void __cdecl FUN_009abd50(int param_1)

{
  if (param_1 != DAT_0105cb8c) {
    DAT_0105cb8c = param_1;
    FUN_009abcf0((undefined4 *)(&DAT_00e67c20 + param_1 * 0x10));
    return;
  }
  return;
}


//// FUNCTION FUN_009abd80 @ 009abd80 ////

void __cdecl FUN_009abd80(int param_1)

{
  DAT_0105cb90 = DAT_0105cb90 + param_1;
  if (DAT_0105cb90 == 0) {
    if (DAT_0105cb94 != DAT_0105cb8c) {
      DAT_0105cb8c = DAT_0105cb94;
      FUN_009abcf0((undefined4 *)(&DAT_00e67c20 + DAT_0105cb94 * 0x10));
      return;
    }
  }
  else if ((DAT_0105cb90 == 1) && (DAT_0105cb94 = DAT_0105cb8c, DAT_0105cb8c != 0xd)) {
    DAT_0105cb8c = 0xd;
    FUN_009abcf0((undefined4 *)&DAT_00e67cf0);
    return;
  }
  return;
}


//// FUNCTION FUN_009abde0 @ 009abde0 ////

void FUN_009abde0(void)

{
  void *_Memory;
  int *piVar1;
  int *piVar2;
  
  if (DAT_0105cb88 == (void *)0x0) {
    piVar2 = &DAT_0105cb98;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x105cbd8);
    return;
  }
  _Memory = *(void **)((int)DAT_0105cb88 + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)((int)DAT_0105cb88 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105cb88);
}


//// FUNCTION FUN_009abe50 @ 009abe50 ////

void __fastcall FUN_009abe50(char *param_1)

{
  if (*param_1 != '\0') {
    *param_1 = '\0';
    DAT_0105cb84 = DAT_0105cb84 + -1;
  }
  return;
}


//// FUNCTION FUN_009abe60 @ 009abe60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009abe60(undefined4 param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf669b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = FUN_0099bb50((char *)*param_2,0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0105cb88 = (undefined4 *)0x0;
  }
  else {
    DAT_0105cb88 = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0105cb88[1] = uVar3;
  *(undefined1 *)(DAT_0105cb88[1] + 0xc) = 6;
  *(uint *)(DAT_0105cb88[1] + 0x10) = *(uint *)(DAT_0105cb88[1] + 0x10) & 0xbfffffff;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0105cb88[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0105cb88[1],(int)pvVar1);
  }
  DAT_0105cb88[2] = 0xffffffff;
  _DAT_0105cb80 = param_1;
  DAT_0105cbd8 = 0;
  DAT_0105cbdc = 0;
  _DAT_0105cbe0 = 0;
  _DAT_0105cbe4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  DAT_0105cb8c = 0;
  FUN_009abcf0((undefined4 *)&DAT_00e67c20);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ac000 @ 009ac000 ////

undefined4 __cdecl FUN_009ac000(char param_1)

{
  if (('/' < param_1) && (param_1 < ':')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_009ac020 @ 009ac020 ////

uint __cdecl FUN_009ac020(uint param_1)

{
  if ((param_1 & 3) != 0) {
    param_1 = (param_1 - (param_1 & 3)) + 4;
  }
  return param_1;
}


//// FUNCTION FUN_009ac040 @ 009ac040 ////

void __cdecl FUN_009ac040(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      cVar2 = *param_1;
      if (('@' < cVar2) && (cVar2 < '[')) {
        *param_1 = cVar2 + ' ';
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}


//// FUNCTION FUN_009ac070 @ 009ac070 ////

void __cdecl FUN_009ac070(ushort *param_1)

{
  ushort uVar1;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = *param_1;
    while (uVar1 != 0) {
      uVar1 = *param_1;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        *param_1 = uVar1 + 0x20;
      }
      param_1 = param_1 + 1;
      uVar1 = *param_1;
    }
  }
  return;
}


//// FUNCTION FUN_009ac0b0 @ 009ac0b0 ////

void __cdecl FUN_009ac0b0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      cVar2 = *param_1;
      if (('`' < cVar2) && (cVar2 < '{')) {
        *param_1 = cVar2 + -0x20;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}


//// FUNCTION FUN_009ac120 @ 009ac120 ////

int __cdecl FUN_009ac120(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar5 = 0;
  while( true ) {
    if (iVar3 < (int)pcVar2 - (int)(param_2 + 1)) {
      return -1;
    }
    iVar4 = _strncmp(param_2,param_1,(int)pcVar2 - (int)(param_2 + 1));
    if (iVar4 == 0) break;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + -1;
    param_1 = param_1 + 1;
  }
  return iVar5;
}


//// FUNCTION FUN_009ac1e0 @ 009ac1e0 ////

uint __cdecl FUN_009ac1e0(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar6 = 0x9e3779b9;
  uVar5 = 0;
  uVar3 = 0x9e3779b9;
  uVar4 = param_2;
  if (0xb < (int)param_2) {
    uVar2 = param_2 / 0xc;
    uVar4 = param_2 % 0xc;
    do {
      iVar1 = (uint)*(uint3 *)(param_1 + 5) * 0x100 + param_1[4] + uVar6;
      uVar5 = (uint)*(uint3 *)(param_1 + 9) * 0x100 + param_1[8] + uVar5;
      uVar3 = ((*(int *)param_1 - uVar5) - iVar1) + uVar3 ^ uVar5 >> 0xd;
      uVar6 = (iVar1 - uVar5) - uVar3 ^ uVar3 << 8;
      uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 0xd;
      uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xc;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar3 << 0x10;
      uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 5;
      uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 3;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar3 << 10;
      uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 0xf;
      param_1 = param_1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar5 = uVar5 + param_2;
  switch(uVar4) {
  case 0xb:
    uVar5 = uVar5 + (uint)param_1[10] * 0x1000000;
  case 10:
    uVar5 = uVar5 + (uint)param_1[9] * 0x10000;
  case 9:
    uVar5 = uVar5 + (uint)param_1[8] * 0x100;
  case 8:
    uVar6 = uVar6 + (uint)param_1[7] * 0x1000000;
  case 7:
    uVar6 = uVar6 + (uint)param_1[6] * 0x10000;
  case 6:
    uVar6 = uVar6 + (uint)param_1[5] * 0x100;
  case 5:
    uVar6 = uVar6 + param_1[4];
  case 4:
    uVar3 = uVar3 + (uint)param_1[3] * 0x1000000;
  case 3:
    uVar3 = uVar3 + (uint)param_1[2] * 0x10000;
  case 2:
    uVar3 = uVar3 + (uint)param_1[1] * 0x100;
  case 1:
    uVar3 = uVar3 + *param_1;
  default:
    uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar4 << 8;
    uVar3 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar5 = (uVar6 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 << 10;
    return (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  }
}


//// FUNCTION FUN_009ac450 @ 009ac450 ////

ulonglong FUN_009ac450(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_009ac510 @ 009ac510 ////

void __cdecl FUN_009ac510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009ac660 @ 009ac660 ////

void __thiscall FUN_009ac660(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  *(int *)this = *param_1;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = (int)this + 0x10;
  piVar3 = param_1 + 4;
  local_4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    param_1 = (int *)0x0;
    do {
      iVar1 = *(int *)this;
      piVar2 = (int *)(*(int *)((int)this + 0xc) + (int)param_1);
      *piVar2 = *piVar3;
      piVar2[1] = piVar3[1];
      piVar2[2] = piVar3[2];
      piVar2[3] = piVar3[3];
      piVar2[4] = piVar3[4];
      piVar2[5] = piVar3[5];
      piVar4 = piVar3 + 7;
      piVar2[6] = piVar3[6];
      if (iVar1 < 1) {
        piVar2[7] = 0;
      }
      else {
        piVar2[7] = *piVar4;
        piVar4 = piVar3 + 8;
      }
      local_4 = local_4 + 1;
      param_1 = param_1 + 8;
      piVar3 = piVar4;
    } while (local_4 < *(int *)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_009ac7a0 @ 009ac7a0 ////

void __cdecl FUN_009ac7a0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009ac820 @ 009ac820 ////

void __thiscall FUN_009ac820(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 0x10);
  fVar3 = *(float *)((int)this + 0x14);
  fVar4 = *(float *)((int)this + 4);
  fVar5 = *(float *)((int)this + 8);
  fVar6 = *(float *)((int)this + 0x1c);
  fVar7 = *(float *)((int)this + 0x18);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar4;
  param_1[6] = param_2 * fVar7;
  param_1[2] = param_2 * fVar5;
  param_1[7] = param_2 * fVar6;
  param_1[3] = param_2 * fVar1;
  param_1[4] = param_2 * fVar2;
  param_1[5] = param_2 * fVar3;
  return;
}


//// FUNCTION FUN_009ac8b0 @ 009ac8b0 ////

void __thiscall FUN_009ac8b0(void *this,float *param_1,float *param_2)

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
  
  fVar1 = param_2[3];
  fVar2 = *(float *)((int)this + 0xc);
  fVar3 = param_2[4];
  fVar4 = *(float *)((int)this + 0x10);
  fVar5 = param_2[5];
  fVar6 = *(float *)((int)this + 0x14);
  fVar7 = param_2[1];
  fVar8 = *(float *)((int)this + 4);
  fVar9 = param_2[2];
  fVar10 = *(float *)((int)this + 8);
  fVar11 = param_2[7];
  fVar12 = *(float *)((int)this + 0x1c);
  fVar13 = param_2[6];
  fVar14 = *(float *)((int)this + 0x18);
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = fVar7 + fVar8;
  param_1[6] = fVar13 + fVar14;
  param_1[2] = fVar9 + fVar10;
  param_1[7] = fVar11 + fVar12;
  param_1[3] = fVar1 + fVar2;
  param_1[4] = fVar3 + fVar4;
  param_1[5] = fVar5 + fVar6;
  return;
}


//// FUNCTION FUN_009ac940 @ 009ac940 ////

undefined4 * __cdecl FUN_009ac940(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf66b8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = _wcstombs((char *)0x0,(wchar_t *)*param_2,param_2[1] + 1);
  if (0 < (int)sVar2) {
    _Dest = operator_new(sVar2 + 1);
    _wcstombs(_Dest,(wchar_t *)*param_2,param_2[1] + 1);
    pcVar3 = _Dest;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,_Dest,(int)pcVar3 - (int)(_Dest + 1));
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
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


//// FUNCTION FUN_009aca20 @ 009aca20 ////

undefined4 __cdecl FUN_009aca20(int param_1)

{
  char cVar1;
  int *_Memory;
  size_t sVar2;
  void *this;
  char *pcVar3;
  uint uVar4;
  uint _Count;
  char *local_12c;
  uint local_128;
  uint local_124;
  char local_120 [20];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf66e6;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  _sprintf(local_10c,"Data\\Cameras\\%s",param_1);
  local_12c = local_120;
  pcVar3 = local_10c;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)pcVar3 - (int)(local_10c + 1);
  if (0x13 < uVar4) {
    local_124 = uVar4 + 0x20 & 0xffffffe0;
    local_12c = _malloc(local_124);
  }
  _strncpy(local_12c,local_10c,uVar4);
  local_12c[uVar4] = '\0';
  local_4 = 0;
  local_128 = uVar4;
  uVar4 = FUN_009d3720(&local_12c);
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  if (uVar4 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  _Memory = operator_new(uVar4);
  local_12c = local_120;
  pcVar3 = local_10c;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _Count = (int)pcVar3 - (int)(local_10c + 1);
  if (0x13 < _Count) {
    local_124 = _Count + 0x20 & 0xffffffe0;
    local_12c = _malloc(local_124);
  }
  _strncpy(local_12c,local_10c,_Count);
  local_12c[_Count] = '\0';
  local_4 = 1;
  local_128 = _Count;
  sVar2 = FUN_009d3ca0(&local_12c,_Memory,uVar4,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (*_Memory == 0) {
    uVar4 = uVar4 + _Memory[2] * 4;
  }
  this = operator_new(uVar4);
  FUN_009ac660(this,_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009acc20 @ 009acc20 ////

undefined4 __thiscall FUN_009acc20(void *this,undefined4 *param_1,int param_2,char param_3)

{
  uint uVar1;
  float *pfVar2;
  void *this_00;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 extraout_ST0;
  ulonglong uVar7;
  float *pfVar8;
  float local_60 [8];
  float local_40 [8];
  float local_20 [8];
  
  uVar1 = *(int *)((int)this + 8) - 1;
  uVar7 = FUN_00acd42c();
  if (((int)uVar7 < param_2) && (param_3 != '\0')) {
    FUN_00acd42c();
  }
  uVar7 = FUN_00acd42c();
  iVar5 = (int)uVar7;
  uVar4 = iVar5 + 1;
  if ((int)uVar1 < (int)uVar4) {
    uVar4 = (param_3 != '\0') - 1 & uVar1;
  }
  pfVar2 = (float *)FUN_009ac820((void *)(uVar4 * 0x20 + *(int *)((int)this + 0xc)),local_60,
                                 (float)(extraout_ST0 - (float10)iVar5));
  pfVar8 = local_40;
  this_00 = (void *)FUN_009ac820((void *)(iVar5 * 0x20 + *(int *)((int)this + 0xc)),local_20,
                                 1.0 - (float)(extraout_ST0 - (float10)iVar5));
  puVar3 = (undefined4 *)FUN_009ac8b0(this_00,pfVar8,pfVar2);
  puVar6 = puVar3;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}


//// FUNCTION FUN_009acd70 @ 009acd70 ////

undefined4 * __cdecl FUN_009acd70(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t _Count;
  char local_100 [256];
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_3 + 1);
  if (pcVar2 != param_3 + 1) {
    iVar4 = FUN_009ac120(param_2,param_3);
    if (iVar4 != -1) {
      pcVar2 = param_2 + iVar4;
      iVar4 = FUN_009ac120(pcVar2,":");
      if ((iVar4 == -1) || (iVar4 != iVar3)) {
        iVar4 = FUN_009ac120(pcVar2,"=");
        if ((iVar4 == -1) || (iVar4 != iVar3)) goto LAB_009ace3d;
      }
      _Count = FUN_009ac120(pcVar2 + iVar4 + 1,"]");
      if ((_Count != 0xffffffff) && ((int)_Count < 0x20)) {
        _strncpy(local_100,pcVar2 + iVar4 + 1,_Count);
        local_100[_Count] = '\0';
        FUN_00401de0(param_1,local_100,0xffffffff);
        return param_1;
      }
    }
  }
LAB_009ace3d:
  param_1[2] = 0x14;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = param_1 + 3;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_009ace70 @ 009ace70 ////

undefined4 __cdecl FUN_009ace70(char *param_1,char *param_2,float *param_3)

{
  double dVar1;
  char *local_20;
  int local_1c;
  uint local_18;
  
  if (param_1 != (char *)0x0) {
    FUN_009acd70(&local_20,param_1,param_2);
    if (local_1c != 0) {
      dVar1 = _atof(local_20);
      *param_3 = (float)dVar1;
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      return CONCAT31((int3)(local_18 >> 8),1);
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  return 0;
}


//// FUNCTION FUN_009acf10 @ 009acf10 ////

void * FUN_009acf10(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009acf60 @ 009acf60 ////

undefined4 * __cdecl FUN_009acf60(undefined4 *param_1,undefined4 *param_2)

{
  char *_Source;
  size_t sVar1;
  wchar_t *_Dest;
  uint uVar2;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf66f8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  _Source = (char *)*param_2;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar1 = _mbstowcs((wchar_t *)0x0,_Source,param_2[1] + 1);
  if (0 < (int)sVar1) {
    _Dest = operator_new(sVar1 * 2 + 2);
    _mbstowcs(_Dest,_Source,param_2[1] + 1);
    uVar2 = FUN_00ace02d(_Dest);
    FUN_004036d0(&local_2c,_Dest,uVar2);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009ad040 @ 009ad040 ////

undefined4 * __cdecl FUN_009ad040(undefined4 *param_1,wchar_t *param_2)

{
  char cVar1;
  int iVar2;
  char *lpMultiByteStr;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint cbMultiByte;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6720;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_2 == (wchar_t *)0x0) ||
     (ExceptionList = &local_c, iVar2 = FUN_00ace02d(param_2), iVar2 == 0)) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
    ExceptionList = local_c;
    return param_1;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  local_4 = 0;
  iVar2 = WideCharToMultiByte(0,0,param_2,-1,(LPSTR)0x0,0,(LPCCH)0x0,(LPBOOL)0x0);
  if (0 < iVar2) {
    cbMultiByte = iVar2 + 1;
    lpMultiByteStr = operator_new(cbMultiByte);
    pcVar3 = lpMultiByteStr;
    for (uVar5 = cbMultiByte >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = cbMultiByte & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    WideCharToMultiByte(0,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCCH)0x0,(LPBOOL)0x0);
    pcVar3 = lpMultiByteStr;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_6c,lpMultiByteStr,(int)pcVar3 - (int)(lpMultiByteStr + 1));
                    /* WARNING: Subroutine does not return */
    _free(lpMultiByteStr);
  }
  if (local_68 == 0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    uVar5 = FUN_00ace02d(param_2);
    FUN_004036d0(&local_4c,param_2,uVar5);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar4 = FUN_009ac940(local_2c,&local_4c);
    FUN_004015d0(&local_6c,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_6c,local_68);
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_009ad240 @ 009ad240 ////

undefined4 * __cdecl FUN_009ad240(undefined4 *param_1,char *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  wchar_t *lpWideCharStr;
  undefined4 *puVar5;
  uint uVar6;
  UINT CodePage;
  wchar_t *pwVar7;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6740;
  local_c = ExceptionList;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_2 + 1) {
      local_6c = local_60;
      local_60[0] = L'\0';
      local_68 = 0;
      local_64 = 10;
      ExceptionList = &local_c;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_6c,(wchar_t *)&lpCaption_00d16918,uVar3);
      CodePage = 0;
      local_4 = 0;
      if (param_3 == '\x01') {
        CodePage = 0xfde9;
      }
      iVar4 = MultiByteToWideChar(CodePage,0,param_2,-1,(LPWSTR)0x0,0);
      if (0 < iVar4) {
        uVar3 = iVar4 * 2 + 2;
        lpWideCharStr = operator_new(uVar3);
        pwVar7 = lpWideCharStr;
        for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pwVar7[0] = L'\0';
          pwVar7[1] = L'\0';
          pwVar7 = pwVar7 + 2;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)pwVar7 = 0;
          pwVar7 = (wchar_t *)((int)pwVar7 + 1);
        }
        pcVar2 = param_2;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        MultiByteToWideChar(CodePage,0,param_2,-1,lpWideCharStr,
                            (int)(pcVar2 + (1 - (int)(param_2 + 1))));
        uVar3 = FUN_00ace02d(lpWideCharStr);
        FUN_004036d0(&local_6c,lpWideCharStr,uVar3);
                    /* WARNING: Subroutine does not return */
        _free(lpWideCharStr);
      }
      if (local_68 == 0) {
        local_4c = local_40;
        local_40[0] = 0;
        local_48 = 0;
        local_44 = 0x14;
        pcVar2 = param_2;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_004015d0(&local_4c,param_2,(int)pcVar2 - (int)(param_2 + 1));
        local_4 = CONCAT31(local_4._1_3_,1);
        puVar5 = FUN_009acf60(local_2c,&local_4c);
        FUN_004036d0(&local_6c,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
      }
      *(undefined2 *)(param_1 + 3) = 0;
      *param_1 = param_1 + 3;
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
  }
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar3);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009ad550 @ 009ad550 ////

int __thiscall FUN_009ad550(void *this,byte *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  do {
    pbVar5 = *(byte **)(*(int *)((int)this + 4) + param_2 * 4);
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_009ad589:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_009ad58e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_009ad589;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_009ad58e:
    iVar2 = param_2;
    if ((iVar4 < 1) && (iVar2 = param_3, param_4 = param_2, -1 < iVar4)) {
      return param_2;
    }
    param_3 = iVar2;
    if (param_4 - param_3 < 2) break;
    param_2 = (param_4 - param_3) / 2 + param_3;
  } while( true );
  pbVar5 = *(byte **)(*(int *)((int)this + 4) + param_3 * 4);
  do {
    bVar1 = *param_1;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_009ad5e8:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_009ad5ed;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_009ad5e8;
    param_1 = param_1 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_009ad5ed:
  if (iVar4 != 0) {
    return param_4;
  }
  return param_3;
}


//// FUNCTION FUN_009ad610 @ 009ad610 ////

undefined4 * FUN_009ad610(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009ad640 @ 009ad640 ////

void __fastcall FUN_009ad640(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_009d9820();
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x48), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x4c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    _strrchr(*(char **)(iVar1 + uVar2 * 4),0x5c);
    FUN_009d9820();
  }
  return;
}


//// FUNCTION FUN_009ad6a0 @ 009ad6a0 ////

int __thiscall FUN_009ad6a0(void *this,byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    iVar5 = *(int *)((int)this + 8) - (int)puVar2;
    iVar6 = iVar5 >> 2;
    if (iVar6 != 0) {
      iVar3 = iVar6 + -1;
      pbVar7 = (byte *)*puVar2;
      iVar5 = iVar6 - (iVar5 >> 0x1f) >> 1;
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_009ad6fb:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_009ad700;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_009ad6fb;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_009ad700:
      if (iVar6 < 1) {
        return 0;
      }
      pbVar7 = (byte *)puVar2[iVar3];
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_009ad739:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_009ad73e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_009ad739;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_009ad73e:
      if (iVar6 < 0) {
        if ((iVar5 != 0) && (iVar5 != iVar3)) {
          iVar5 = FUN_009ad550(this,param_1,iVar5,0,iVar3);
          return iVar5;
        }
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  return -1;
}


//// FUNCTION FUN_009ad770 @ 009ad770 ////

void __fastcall FUN_009ad770(int param_1)

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


//// FUNCTION FUN_009ad7a0 @ 009ad7a0 ////

void __fastcall FUN_009ad7a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 8) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_009ad800 @ 009ad800 ////

byte * __thiscall FUN_009ad800(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  iVar3 = FUN_009ad6a0(this,param_1);
  if (iVar3 != -1) {
    pbVar2 = *(byte **)(*(int *)((int)this + 4) + iVar3 * 4);
    pbVar4 = pbVar2;
    do {
      bVar1 = *param_1;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_009ad84a:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_009ad84f;
      }
      if (bVar1 == 0) break;
      bVar1 = param_1[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_009ad84a;
      param_1 = param_1 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_009ad84f:
    if (iVar3 == 0) {
      return pbVar2;
    }
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_009ad870 @ 009ad870 ////

undefined4 __thiscall FUN_009ad870(void *this,byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = FUN_009ad800(this,param_1);
  if (pbVar1 != (byte *)0x0) {
    return *(undefined4 *)(pbVar1 + 0x20);
  }
  return 0;
}


//// FUNCTION FUN_009ad890 @ 009ad890 ////

void FUN_009ad890(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *local_104;
  byte local_100 [256];
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(param_1 + 1);
    if (((7 < iVar3) && (param_1[iVar3 + -8] == '_')) && (param_1[iVar3 + -7] == 'v')) {
      if ((('/' < param_1[iVar3 + -6]) && (param_1[iVar3 + -6] < ':')) &&
         (uVar4 = FUN_009ac000(param_1[iVar3 + -5]), (char)uVar4 != '\0')) {
        _sprintf((char *)local_100,param_1);
        local_100[iVar3 + -6] = 0x30;
        local_100[iVar3 + -5] = 0x30;
        iVar5 = FUN_009ad870(local_104,local_100);
        *param_2 = iVar5;
        FUN_009b7af0(param_1 + iVar3 + -6,param_3,(int *)0x0);
        if ((*param_3 < 0) || (*param_2 <= *param_3)) {
          *param_3 = 0;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009ad980 @ 009ad980 ////

void __thiscall FUN_009ad980(void *this,char *param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  FUN_009ad890(param_2,&local_8,&local_4);
  if (*param_3 == -1) {
    *param_3 = local_8 + -1;
  }
  if ((*param_3 < 0) || (local_8 <= *param_3)) {
    *param_3 = local_4;
    _sprintf(param_1,param_2);
    return;
  }
  _sprintf(param_1,param_2);
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar3 = *param_3;
  pcVar1 = (char *)((int)this + 0x10);
  pcVar4 = pcVar1;
  if (iVar3 < 10) {
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    _sprintf(param_1 + (int)(pcVar5 + (-((int)pcVar4 - ((int)this + 0x11)) - (int)(param_1 + 1)) +
                                      -2),"0%d%s",iVar3,pcVar1);
    return;
  }
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  _sprintf(param_1 + (int)(pcVar5 + (-((int)pcVar4 - ((int)this + 0x11)) - (int)(param_1 + 1)) + -2)
           ,"%d%s",iVar3,pcVar1);
  return;
}


//// FUNCTION FUN_009ada70 @ 009ada70 ////

bool FUN_009ada70(char *param_1)

{
  int local_4;
  
  if (param_1 == (char *)0x0) {
    return false;
  }
  FUN_009ad890(param_1,(int *)&param_1,&local_4);
  return 1 < (int)param_1;
}


//// FUNCTION FUN_009adaa0 @ 009adaa0 ////

void __thiscall FUN_009adaa0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00988c40();
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
      _Dst = FUN_009ad610((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009acf10(param_1,iVar5,param_1 + param_2);
      FUN_009ad610(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009ac510(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009acf10(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009ac7a0(param_1,(int)pvVar3,iVar5);
    FUN_009ac510(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009adc80 @ 009adc80 ////

void __thiscall FUN_009adc80(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1 >> 2;
  }
  FUN_009adaa0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 4;
  return;
}


//// FUNCTION FUN_009adcd0 @ 009adcd0 ////

void __thiscall FUN_009adcd0(void *this,undefined4 *param_1)

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
  FUN_009adaa0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009add20 @ 009add20 ////

void __thiscall FUN_009add20(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)((int)this + 4) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  }
  pbVar3 = operator_new(0x24);
  if (pbVar3 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  else if (param_1 == (byte *)0x0) {
    *pbVar3 = 0;
    *(int *)(pbVar3 + 0x20) = param_2;
  }
  else {
    _strncpy((char *)pbVar3,(char *)param_1,0x20);
    pbVar3[0x1f] = 0;
    *(int *)(pbVar3 + 0x20) = param_2;
  }
  param_1 = pbVar3;
  if (iVar7 == 0) {
    FUN_009adcd0(this,&param_1);
    return;
  }
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar2 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 8) - (int)puVar2 >> 2;
  }
  pbVar6 = (byte *)puVar2[iVar4 + -1];
  pbVar5 = pbVar3;
  if (iVar7 == 1) {
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_009adde4:
        iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_009adde9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_009adde4;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_009adde9:
    if (iVar7 < 1) {
      FUN_009adc80(this,&param_2,puVar2,&param_1);
      return;
    }
  }
  else {
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_009ade34:
        iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_009ade39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_009ade34;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_009ade39:
    if (iVar7 < 1) {
      iVar7 = FUN_009ad6a0(this,pbVar3);
      FUN_009adc80(this,&param_2,puVar2 + iVar7,&param_1);
      return;
    }
  }
  FUN_009adcd0(this,&param_1);
  return;
}


//// FUNCTION FUN_009ade80 @ 009ade80 ////

void __thiscall FUN_009ade80(void *this,char *param_1,char *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  byte *_Str;
  int iVar12;
  bool bVar13;
  byte local_184 [32];
  undefined4 local_164 [17];
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  undefined1 uStack_112;
  undefined1 uStack_111;
  byte local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf675b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009ad7a0((int)this);
  iVar8 = 0x10 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)this + iVar8] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)((int)this + 0x10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _sprintf((char *)local_184,"_v00%s",(int)this + 0x10);
  pbVar5 = local_184;
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar2 != 0);
  FUN_009c89a0(local_164);
  local_4 = 0;
  FUN_009ca9d0(local_164,(char *)((int)this + 0x10),param_1,(undefined1 *)0x1);
  uVar11 = 0;
  do {
    while( true ) {
      if ((local_11c == 0) || ((uint)(local_118 - local_11c >> 2) <= uVar11)) {
        local_4 = 0xffffffff;
        FUN_009c8560(local_164);
        ExceptionList = local_c;
        return;
      }
      _Str = *(byte **)(local_11c + uVar11 * 4);
      pcVar6 = _strrchr((char *)_Str,0x5c);
      if (pcVar6 != (char *)0x0) {
        _Str = (byte *)(pcVar6 + 1);
      }
      pbVar7 = _Str;
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      iVar8 = (int)pbVar7 - (int)(_Str + 1);
      if (7 < iVar8) break;
LAB_009ae08a:
      uVar11 = uVar11 + 1;
    }
    pbVar7 = local_184;
    pbVar9 = _Str + (iVar8 - ((int)pbVar5 - (int)(local_184 + 1)));
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_009adfbd:
        iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_009adfc2;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_009adfbd;
      pbVar9 = pbVar9 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar10 = 0;
LAB_009adfc2:
    if (iVar10 != 0) goto LAB_009ae08a;
    iVar10 = 1;
    iVar12 = 1;
    pbVar7 = _Str;
    do {
      do {
        bVar2 = *pbVar7;
        pbVar7[(int)(local_110 + -(int)_Str)] = bVar2;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      if (iVar12 < 10) {
        puVar3 = &uStack_111;
      }
      else {
        puVar3 = &uStack_112;
      }
      _sprintf(puVar3 + (iVar8 - ((int)pcVar4 - ((int)this + 0x11))),"%d%s",iVar12,(int)this + 0x10)
      ;
      pcVar6 = FUN_009c84e0((int)local_120,(char *)local_110);
      if (pcVar6 == (char *)0x0) {
        iVar12 = 100;
      }
      else {
        iVar10 = iVar10 + 1;
      }
      iVar12 = iVar12 + 1;
      pbVar7 = _Str;
    } while (iVar12 < 100);
    if (param_3 == '\0') {
      if (0 < iVar10) {
        FUN_009add20(this,_Str,iVar10);
      }
      goto LAB_009ae08a;
    }
    if (iVar10 < 2) goto LAB_009ae08a;
    FUN_009add20(this,_Str,iVar10);
    uVar11 = uVar11 + 1;
  } while( true );
}


//// FUNCTION FUN_009ae0d0 @ 009ae0d0 ////

void __fastcall FUN_009ae0d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71d8c;
  FUN_00a5b960(param_1);
  return;
}


//// FUNCTION FUN_009ae0e0 @ 009ae0e0 ////

void __thiscall FUN_009ae0e0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x2c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x28) = param_1;
  }
  return;
}


//// FUNCTION FUN_009ae100 @ 009ae100 ////

void __thiscall FUN_009ae100(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x30) = param_1;
  return;
}


//// FUNCTION FUN_009ae110 @ 009ae110 ////

void __thiscall FUN_009ae110(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  return;
}


//// FUNCTION FUN_009ae120 @ 009ae120 ////

void __thiscall FUN_009ae120(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x48) = *param_1;
  *(undefined4 *)((int)this + 0x4c) = param_1[1];
  *(undefined4 *)((int)this + 0x50) = param_1[2];
  return;
}


//// FUNCTION FUN_009ae140 @ 009ae140 ////

undefined4 * __thiscall FUN_009ae140(void *this,uint param_1,uint param_2,int param_3)

{
  FUN_00a5c670(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0x437f0000;
  *(undefined4 *)((int)this + 0x44) = 0x437f0000;
  *(undefined4 *)((int)this + 0x3c) = 0x437f0000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_00d71d8c;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x2c) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x24) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x28) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return this;
}


//// FUNCTION FUN_009ae1c0 @ 009ae1c0 ////

undefined4 * __thiscall FUN_009ae1c0(void *this,byte param_1)

{
  FUN_009ae0d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009ae1e0 @ 009ae1e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009ae1e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  FUN_00a5b5f0(param_1);
  pfVar4 = *(float **)(param_1 + 0x2c);
  if (pfVar4 != (float *)0x0) {
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = *(float *)(param_1 + 0x4c);
    fVar3 = *(float *)(param_1 + 0x50);
    *pfVar4 = fVar1 * *(float *)(param_1 + 0x48) + *pfVar4;
    pfVar4[1] = fVar1 * fVar2 + pfVar4[1];
    pfVar4[2] = fVar1 * fVar3 + pfVar4[2];
    *(float *)(*(int *)(param_1 + 0x2c) + 0x28) =
         *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0xc) +
         *(float *)(*(int *)(param_1 + 0x2c) + 0x28);
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24) = *(undefined4 *)(param_1 + 0x34);
    if (0.0 < *(float *)(param_1 + 0x30)) {
      pfVar4 = *(float **)(param_1 + 0x2c);
      fVar1 = SQRT((DAT_0105c3a8 - *pfVar4) * (DAT_0105c3a8 - *pfVar4) +
                   (DAT_0105c3ac - pfVar4[1]) * (DAT_0105c3ac - pfVar4[1]) +
                   (DAT_0105c3b0 - pfVar4[2]) * (DAT_0105c3b0 - pfVar4[2]));
      if (fVar1 < _DAT_00e67da0) {
        fVar1 = _DAT_00e67da0;
      }
      *(float *)(*(int *)(param_1 + 0x2c) + 0x24) =
           ((1.0 - *(float *)(param_1 + 0x30)) +
           (fVar1 / _DAT_00e67da0) * *(float *)(param_1 + 0x30)) *
           *(float *)(*(int *)(param_1 + 0x2c) + 0x24);
    }
    if ((*(float *)(param_1 + 0x38) < 0.0 != (*(float *)(param_1 + 0x38) == 0.0)) ||
       (*(float *)(*(int *)(param_1 + 0x2c) + 0x24) < 0.0)) {
      FUN_00a5b810(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009ae2f0 @ 009ae2f0 ////

void __thiscall FUN_009ae2f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined4 *)((int)this + 0x44) = param_3;
  uVar4 = FUN_00acd42c();
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar5 = FUN_00acd42c();
    iVar1 = (int)uVar5;
    uVar5 = FUN_00acd42c();
    iVar2 = (int)uVar5;
    uVar5 = FUN_00acd42c();
    puVar3 = (undefined4 *)FUN_0040a530(&param_3,(int)uVar4,(int)uVar5,iVar2,iVar1);
    *(undefined4 *)(*(int *)((int)this + 0x2c) + 0x2c) = *puVar3;
  }
  return;
}


//// FUNCTION FUN_009ae360 @ 009ae360 ////

void __thiscall FUN_009ae360(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x38) = param_1;
  if (iVar1 != 0) {
    uVar3 = FUN_00acd42c();
    iVar2 = (int)uVar3;
    if (iVar2 < 0) {
      *(undefined1 *)(iVar1 + 0x2f) = 0;
      return;
    }
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    *(char *)(iVar1 + 0x2f) = (char)iVar2;
  }
  return;
}


//// FUNCTION FUN_009ae3c0 @ 009ae3c0 ////

void __fastcall FUN_009ae3c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00d71d9c;
  puVar1 = param_1 + 0x21;
  iVar2 = 0x10;
  do {
    puVar1[-0x20] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}


//// FUNCTION FUN_009ae410 @ 009ae410 ////

float10 __fastcall FUN_009ae410(int param_1)

{
  return (float10)*(float *)(param_1 + 200);
}


//// FUNCTION FUN_009ae600 @ 009ae600 ////

void __cdecl FUN_009ae600(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x45);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_009ae630 @ 009ae630 ////

void __thiscall
FUN_009ae630(void *this,undefined4 *param_1,int param_2,ushort param_3,uint param_4,char param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf677b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)((int)this + param_2 * 4 + 0x84) = param_4;
  puVar3 = FUN_0040a690(param_4,'\0');
  *(undefined4 **)((int)this + param_2 * 4 + 4) = puVar3;
  *(byte *)((int)puVar3 + 0x16) = *(byte *)((int)puVar3 + 0x16) & 0xfd;
  pvVar4 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  *(void **)((int)this + param_2 * 4 + 0x44) = pvVar4;
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_009910f0(puVar3);
  }
  *(undefined4 *)(*(int *)((int)this + param_2 * 4 + 4) + 0x18) = uVar5;
  local_4 = 0xffffffff;
  if (param_5 == '\0') {
    *(undefined1 *)(*(int *)(*(int *)((int)this + param_2 * 4 + 4) + 0x18) + 0xc) = 6;
  }
  else {
    *(undefined1 *)(*(int *)(*(int *)((int)this + param_2 * 4 + 4) + 0x18) + 0xc) = 7;
  }
  pvVar4 = *(void **)(*(int *)((int)this + param_2 * 4 + 4) + 0x18);
  iVar2 = *(int *)((int)this + param_2 * 4 + 0x44);
  if (*(int *)((int)pvVar4 + 0x18) != iVar2) {
    Engine_SetResourceReference(pvVar4,iVar2);
  }
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + param_2 * 4 + 4) + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220(*(void **)((int)this + param_2 * 4 + 4),param_3);
  FUN_0040a6f0(*(int *)((int)this + param_2 * 4 + 4));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ae8a0 @ 009ae8a0 ////

void __fastcall FUN_009ae8a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_009ae900 @ 009ae900 ////

void FUN_009ae900(void)

{
  undefined4 *puVar1;
  
  if (DAT_0105cbec != (undefined4 *)0x0) {
    (**(code **)*DAT_0105cbec)(1);
  }
  DAT_0105cbec = (undefined4 *)0x0;
  puVar1 = DAT_0105cbf8;
  while (puVar1 != &DAT_0105cc04) {
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
      puVar1 = DAT_0105cbf8;
    }
  }
  return;
}


//// FUNCTION FUN_009ae940 @ 009ae940 ////

void __fastcall FUN_009ae940(void *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6810;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  ExceptionList = &local_c;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_1.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 0;
  FUN_009ae630(param_1,&local_2c,0,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_2.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 1;
  FUN_009ae630(param_1,&local_2c,1,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_3.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 2;
  FUN_009ae630(param_1,&local_2c,2,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_4.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 3;
  FUN_009ae630(param_1,&local_2c,3,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_5.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 4;
  FUN_009ae630(param_1,&local_2c,4,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/moneyframes_6.dds",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 5;
  FUN_009ae630(param_1,&local_2c,5,4,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/sparkles.dds",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 6;
  FUN_009ae630(param_1,&local_2c,6,4,0x100,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/smoke.dds",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 7;
  FUN_009ae630(param_1,&local_2c,7,2,0x80,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/rubble.dds",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 8;
  FUN_009ae630(param_1,&local_2c,8,2,0x80,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/particles.dds",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = 9;
  FUN_009ae630(param_1,&local_2c,9,1,0x200,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/celebrity.dds",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = 10;
  FUN_009ae630(param_1,&local_2c,10,2,0x80,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/particle_happy.dds",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 0xb;
  FUN_009ae630(param_1,&local_2c,0xb,2,0x80,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ui/starframes.dds",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 0xc;
  FUN_009ae630(param_1,&local_2c,0xc,4,0x100,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/sparkles_actor.dds",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 0xd;
  FUN_009ae630(param_1,&local_2c,0xd,4,0x100,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/sparkles_director.dds",0x18);
  local_28 = 0x18;
  local_2c[0x18] = '\0';
  local_4 = 0xe;
  FUN_009ae630(param_1,&local_2c,0xe,4,0x100,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/sparkles_extra.dds",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 0xf;
  FUN_009ae630(param_1,&local_2c,0xf,4,0x100,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009af080 @ 009af080 ////

int * __fastcall FUN_009af080(int *param_1)

{
  FUN_009ae8a0(param_1);
  return param_1;
}


//// FUNCTION FUN_009af090 @ 009af090 ////

void FUN_009af090(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xcc);
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0105cbec = (void *)FUN_009ae3c0(puVar1);
    FUN_009ae940(DAT_0105cbec);
    return;
  }
  DAT_0105cbec = (void *)0x0;
  FUN_009ae940((void *)0x0);
  return;
}


//// FUNCTION FUN_009af0d0 @ 009af0d0 ////

void __thiscall FUN_009af0d0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x45) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x45) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_009af140 @ 009af140 ////

int * __fastcall FUN_009af140(int *param_1)

{
  FUN_009ae8a0(param_1);
  return param_1;
}


//// FUNCTION FUN_009af150 @ 009af150 ////

int FUN_009af150(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_4;
  
  iVar2 = -1;
  FUN_009af0d0(&DAT_010c97f8,&local_4,&param_1);
  if (local_4 == DAT_010c97fc) {
    return -1;
  }
  if (local_4 != -0x10) {
    while ((*(int *)(local_4 + 0x18) != local_4 + 0x24 && (iVar2 == -1))) {
      puVar1 = *(undefined4 **)(*(int *)(local_4 + 0x18) + 8);
      iVar2 = puVar1[9];
      (**(code **)*puVar1)(1);
    }
    return iVar2;
  }
  return -1;
}


//// FUNCTION FUN_009af1d0 @ 009af1d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_009af1d0(void *this,undefined4 param_1,float param_2,float param_3,int *param_4,int param_5,
            undefined *param_6)

{
  int *piVar1;
  float fVar2;
  void *pvVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6899;
  local_c = ExceptionList;
  if (_DAT_0105cbe8 != 0.0) {
    return (int *)0x0;
  }
  piVar1 = param_4;
  ExceptionList = &local_c;
  if (param_4 == (int *)0x0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00990d30(0,6);
  }
  fVar2 = (float)FUN_00995d50(*(int *)((int)this + (int)piVar1 * 4 + 4));
  if ((fVar2 == -NAN) &&
     (fVar2 = (float)FUN_009af150(*(uint *)((int)this + (int)piVar1 * 4 + 4)), fVar2 == -NAN)) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if (param_6 == (undefined *)0x0) {
    param_6 = PTR_LAB_00e67dec;
  }
  param_4 = (int *)0x0;
  switch(param_5) {
  case 0:
    pvVar3 = operator_new(0x94);
    local_4 = 4;
    if (pvVar3 == (void *)0x0) {
LAB_009af570:
      param_4 = (int *)0x0;
    }
    else {
      param_4 = FUN_00a5d4c0(pvVar3,0x9ae430,*(uint *)((int)this + (int)piVar1 * 4 + 4),(int)fVar2,1
                            );
    }
    break;
  case 1:
    pvVar3 = operator_new(0x94);
    local_4 = 5;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5d4c0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                           (int)fVar2,0);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    pvVar3 = operator_new(0x6c);
    local_4 = 6;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5cfa0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),fVar2,
                           param_5);
    break;
  case 7:
    pvVar3 = operator_new(0x88);
    local_4 = 3;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5d790(pvVar3,0x9ae430,*(uint *)((int)this + (int)piVar1 * 4 + 4),(int)fVar2);
    break;
  case 8:
    pvVar3 = operator_new(0x88);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      param_4 = FUN_00a5dae0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                             (int)fVar2);
    }
    local_4 = 0xffffffff;
    FUN_009ae100(param_4,DAT_00e67df0);
    goto LAB_009af57e;
  case 9:
    pvVar3 = operator_new(0x88);
    local_4 = 2;
    if (pvVar3 == (void *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      param_4 = FUN_00a5dae0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                             (int)fVar2);
    }
    local_4 = 0xffffffff;
    FUN_00a5d8e0(param_4,1);
    FUN_009ae100(param_4,DAT_00e67df0);
    goto LAB_009af57e;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    pvVar3 = operator_new(0x6c);
    local_4 = 7;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5cdc0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                           (int)fVar2,(char)param_5);
    break;
  case 0xe:
    pvVar3 = operator_new(0x7c);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      param_4 = FUN_00a5dd00(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                             (int)fVar2);
    }
    local_4 = 0xffffffff;
    fVar4 = FUN_00990e30(0.1,0.2);
    FUN_009ae110(param_4,(float)fVar4);
    FUN_00a5dc00(param_4,0,0,0x40400000);
    goto LAB_009af57e;
  case 0xf:
    pvVar3 = operator_new(0x70);
    local_4 = 8;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5cc60(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                           (int)fVar2);
    break;
  case 0x10:
    pvVar3 = operator_new(0x6c);
    local_4 = 9;
    if (pvVar3 == (void *)0x0) {
      param_4 = (int *)0x0;
    }
    else {
      param_4 = FUN_00a5caf0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                             (int)fVar2);
    }
    local_4 = 0xffffffff;
    if (0.0 <= param_2) {
      FUN_009ae360(param_4,param_2);
    }
    if (0.0 <= param_3) {
      FUN_009ae110(param_4,param_3);
    }
    goto LAB_009af57e;
  case 0x11:
    pvVar3 = operator_new(0x70);
    local_4 = 10;
    if (pvVar3 == (void *)0x0) goto LAB_009af570;
    param_4 = FUN_00a5c7d0(pvVar3,(uint)param_6,*(uint *)((int)this + (int)piVar1 * 4 + 4),
                           (int)fVar2);
    break;
  default:
    goto switchD_009af272_default;
  }
  local_4 = 0xffffffff;
LAB_009af57e:
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 8))();
  }
switchD_009af272_default:
  ExceptionList = local_c;
  return param_4;
}


//// FUNCTION FUN_009af7b0 @ 009af7b0 ////

void __thiscall
FUN_009af7b0(void *this,undefined4 param_1,int *param_2,int param_3,undefined *param_4)

{
  FUN_009af1d0(this,param_1,-1.0,-1.0,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_009af7e0 @ 009af7e0 ////

void __fastcall FUN_009af7e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d71f0c;
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


//// FUNCTION FUN_009af830 @ 009af830 ////

undefined4 * __thiscall FUN_009af830(void *this,byte param_1)

{
  FUN_009af7e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009af850 @ 009af850 ////

void __fastcall FUN_009af850(int param_1)

{
  FUN_009af7e0((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION FUN_009af860 @ 009af860 ////

void __fastcall FUN_009af860(int param_1)

{
  FUN_009af7e0((undefined4 *)(param_1 + 0x10));
  return;
}


//// FUNCTION FUN_009af870 @ 009af870 ////

void * __thiscall FUN_009af870(void *this,byte param_1)

{
  FUN_009af860((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009af8b0 @ 009af8b0 ////

void FUN_009af8b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_009af8b0(*(void **)((int)param_1 + 8));
    FUN_009af860((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009af8f0 @ 009af8f0 ////

void __fastcall FUN_009af8f0(int param_1)

{
  FUN_009af8b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_009af920 @ 009af920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009af920(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *local_4;
  
  local_4 = (int *)*DAT_010c97fc;
  piVar4 = DAT_010c97fc;
  if (local_4 != DAT_010c97fc) {
    do {
      piVar3 = local_4;
      if ((int *)local_4[6] != local_4 + 9) {
        piVar1 = local_4 + 9;
        do {
          piVar4 = (int *)piVar3[6];
          puVar2 = (undefined4 *)piVar4[2];
          if ((int *)piVar4[1] != (int *)0x0) {
            *(int *)piVar4[1] = *piVar4;
          }
          if (*piVar4 != 0) {
            *(int *)(*piVar4 + 4) = piVar4[1];
          }
          *piVar4 = 0;
          piVar4[1] = 0;
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          piVar4 = DAT_010c97fc;
        } while ((int *)piVar3[6] != piVar1);
      }
      FUN_009ae8a0((int *)&local_4);
    } while (local_4 != piVar4);
  }
  FUN_009af8b0((void *)piVar4[1]);
  DAT_010c97fc[1] = (int)DAT_010c97fc;
  _DAT_010c9800 = 0;
  *DAT_010c97fc = (int)DAT_010c97fc;
  DAT_010c97fc[2] = (int)DAT_010c97fc;
  return;
}


//// FUNCTION FUN_009af9c0 @ 009af9c0 ////

void __fastcall FUN_009af9c0(int *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int *piVar4;
  int local_4;
  
  *param_1 = (int)&PTR_FUN_00d71d9c;
  FUN_009af920();
  local_4 = 0x10;
  do {
    piVar4 = param_1 + 1;
    _Memory = *(void **)(*piVar4 + 0x18);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*piVar4 + 0x18) = 0;
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      *piVar4 = 0;
    }
    if ((void *)param_1[0x11] != (void *)0x0) {
      FUN_0099b400((void *)param_1[0x11]);
      param_1[0x11] = 0;
    }
    local_4 = local_4 + -1;
    param_1 = piVar4;
  } while (local_4 != 0);
  return;
}


//// FUNCTION FUN_009afa60 @ 009afa60 ////

int * __thiscall FUN_009afa60(void *this,byte param_1)

{
  FUN_009af9c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009afab0 @ 009afab0 ////

void __thiscall FUN_009afab0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_009afac0 @ 009afac0 ////

undefined4 * __fastcall FUN_009afac0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf68bb;
  local_c = ExceptionList;
  piVar1 = param_1 + 0xe;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d71f24;
  param_1[3] = 0;
  param_1[7] = 0xbf800000;
  param_1[8] = 0xbf800000;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  *piVar1 = 0;
  param_1[0xf] = 0;
  local_4 = 0;
  param_1[0x10] = param_1;
  FUN_00acdb9e(0xe67e6c);
  iVar2 = FUN_0097dda0();
  param_1[0x11] = iVar2;
  if (s___AVCParticleEmmiter_MV___00e67e50[0x1a] != '\0') {
    iVar2 = 0x38;
    pcVar4 = "ListLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe67e6c);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCParticleEmmiter_MV___00e67e50[0x1a] = '\0';
  }
  param_1[0xf] = &DAT_0105cc04;
  *piVar1 = (int)DAT_0105cc04;
  *(int **)((int)DAT_0105cc04 + 4) = piVar1;
  DAT_0105cc04 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009afba0 @ 009afba0 ////

undefined4 * __thiscall
FUN_009afba0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf68db;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x38);
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d71f24;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x20) = 0xbf800000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_4 = 0;
  *(void **)((int)this + 0x40) = this;
  FUN_00acdb9e(0xe67e6c);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x44) = iVar2;
  if (s__PAVCParticleEmmiter_MV___00e67e74[0x1a] != '\0') {
    iVar2 = 0x38;
    pcVar4 = "ListLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe67e6c);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s__PAVCParticleEmmiter_MV___00e67e74[0x1a] = '\0';
  }
  *(int ***)((int)this + 0x3c) = &DAT_0105cc04;
  *piVar1 = (int)DAT_0105cc04;
  *(int **)((int)DAT_0105cc04 + 4) = piVar1;
  DAT_0105cc04 = piVar1;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = param_6;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009afcb0 @ 009afcb0 ////

/* WARNING: Removing unreachable block (ram,0x009afcde) */

void __fastcall FUN_009afcb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71f24;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}


//// FUNCTION FUN_009afd00 @ 009afd00 ////

void __fastcall FUN_009afd00(int param_1)

{
  float10 fVar1;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (*(char *)(param_1 + 4) != '\0') {
    fVar1 = FUN_009ae410((int)DAT_0105cbec);
    local_c = *(undefined4 *)(param_1 + 0x10);
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 8) + (float10)*(float *)(param_1 + 0xc);
    local_8 = *(undefined4 *)(param_1 + 0x14);
    local_4 = *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0xc) = (float)fVar1;
    if ((float10)1.0 <= fVar1) {
      do {
        fVar1 = FUN_00990e30(-1.0,1.0);
        local_4 = (float)(fVar1 + (float10)*(float *)(param_1 + 0x18));
        FUN_009af1d0(DAT_0105cbec,&local_c,*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x1c),
                     *(int **)(param_1 + 0x28),*(int *)(param_1 + 0x24),(undefined *)0x0);
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - 1.0;
      } while (1.0 <= *(float *)(param_1 + 0xc));
    }
  }
  if (0.0 < *(float *)(param_1 + 0x34)) {
    fVar1 = FUN_009ae410((int)DAT_0105cbec);
    *(float *)(param_1 + 0x34) = (float)((float10)*(float *)(param_1 + 0x34) - fVar1);
  }
  return;
}


//// FUNCTION FUN_009afdd0 @ 009afdd0 ////

undefined4 * __thiscall FUN_009afdd0(void *this,byte param_1)

{
  FUN_009afcb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009afdf0 @ 009afdf0 ////

void __fastcall FUN_009afdf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d71f30;
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


//// FUNCTION FUN_009afe40 @ 009afe40 ////

undefined4 * __thiscall FUN_009afe40(void *this,byte param_1)

{
  FUN_009afdf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009afe60 @ 009afe60 ////

void __fastcall FUN_009afe60(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d71f30;
  return;
}


//// FUNCTION FUN_009aff10 @ 009aff10 ////

void __fastcall FUN_009aff10(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x41a00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


//// FUNCTION FUN_009afff0 @ 009afff0 ////

void __fastcall FUN_009afff0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d71f44;
  return;
}


//// FUNCTION FUN_009b0020 @ 009b0020 ////

undefined4 FUN_009b0020(void)

{
  return CONCAT31((int3)((uint)DAT_0105cc2c >> 8),DAT_0105cc2c != 0);
}


//// FUNCTION FUN_009b00b0 @ 009b00b0 ////

void __cdecl FUN_009b00b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) &&
     ((param_1 != 0 && (iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))(), iVar1 != 0)))) {
    piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
    (**(code **)(*piVar2 + 0x78))(param_1);
  }
  return;
}


//// FUNCTION FUN_009b01a0 @ 009b01a0 ////

undefined4 __cdecl FUN_009b01a0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x30))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
      uVar3 = (**(code **)(*piVar2 + 8))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_009b03c0 @ 009b03c0 ////

float10 __cdecl FUN_009b03c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 auStack_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6958;
  local_c = ExceptionList;
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    ExceptionList = &local_c;
    iVar4 = (**(code **)(*DAT_0105cc2c + 0x30))();
    if (iVar4 != 0) {
      uVar5 = FUN_009b01a0(param_1);
      FUN_00bb89e0(auStack_20,0,1,uVar5);
      uStack_4 = 0;
      piVar6 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0xc))(auStack_20,param_2,param_3);
      if (piVar6 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*piVar6 + 4))();
        iVar4 = (**(code **)*piVar6)();
        iVar7 = (**(code **)(*piVar6 + 4))();
        iVar8 = (**(code **)(*piVar6 + 0xc))();
        (**(code **)(*piVar6 + 0x10))();
        fVar1 = (float)iVar8;
        if (iVar8 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar3 = (float)iVar7;
        if (iVar7 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar2 = (float)iVar4;
        if (iVar4 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        uStack_4 = 0xffffffff;
        FUN_00bb8a10(auStack_20);
        ExceptionList = local_c;
        return (float10)((fVar1 / fVar3) / (fVar2 + fVar2));
      }
      uStack_4 = 0xffffffff;
      FUN_00bb8a10(auStack_20);
    }
  }
  ExceptionList = local_c;
  return (float10)0.0;
}


//// FUNCTION FUN_009b0520 @ 009b0520 ////

undefined4 __cdecl FUN_009b0520(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6978;
  local_c = ExceptionList;
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x30))();
    if (iVar1 != 0) {
      uVar2 = FUN_00bb8950(auStack_20,param_1);
      uStack_4 = 0;
      piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
      uVar2 = (**(code **)(*piVar3 + 0x14))(uVar2);
      local_c = (void *)0xffffffff;
      FUN_00bb8a10((undefined4 *)&stack0xffffffd8);
      ExceptionList = pvStack_14;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}


//// FUNCTION FUN_009b05d0 @ 009b05d0 ////

void __cdecl
FUN_009b05d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined1 *puStack_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_24 = local_20;
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) &&
     (DAT_0105cc30 != (int *)0x0)) {
    local_c = 0;
    local_8 = 0;
    local_14 = param_6;
    local_10 = param_4;
    local_4 = param_2;
    local_1c = param_5;
    local_18 = 4 - (uint)(param_7 != '\0');
    (**(code **)(*DAT_0105cc30 + 0x10))(param_1);
    (**(code **)(*DAT_0105cc30 + 0x20))(param_1,&puStack_24);
  }
  return;
}


//// FUNCTION FUN_009b0660 @ 009b0660 ////

float10 __cdecl FUN_009b0660(int param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 *puStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) &&
     (DAT_0105cc30 != (int *)0x0)) {
    uStack_14 = 0;
    iStack_18 = param_1;
    puStack_1c = (undefined1 *)0x9b06a5;
    piVar1 = (int *)(**(code **)(*DAT_0105cc30 + 0xc))();
    if (piVar1 != (int *)0x0) {
      puStack_1c = &stack0xfffffff0;
      (**(code **)(*piVar1 + 4))();
      (**(code **)(*piVar1 + 8))();
      (**(code **)(*piVar1 + 0xc))(&puStack_1c);
      (**(code **)*piVar1)();
      fVar2 = (float10)((int)&stack0xfffffff0 * 2);
      if ((int)&stack0xfffffff0 * 2 < 0) {
        fVar2 = fVar2 + (float10)4.2949673e+09;
      }
      fVar3 = (float10)(int)puStack_1c;
      if ((int)puStack_1c < 0) {
        fVar3 = fVar3 + (float10)4.2949673e+09;
      }
      fVar4 = (float10)iStack_18;
      if (iStack_18 < 0) {
        fVar4 = fVar4 + (float10)4.2949673e+09;
      }
      return (fVar2 / fVar3) / fVar4;
    }
    return (float10)0.0;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_009b0730 @ 009b0730 ////

void __cdecl FUN_009b0730(undefined4 param_1)

{
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) &&
     (DAT_0105cc30 != (undefined4 *)0x0)) {
    (**(code **)*DAT_0105cc30)(param_1);
  }
  return;
}


//// FUNCTION FUN_009b0760 @ 009b0760 ////

bool __cdecl FUN_009b0760(undefined4 param_1)

{
  int iVar1;
  
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) &&
     (DAT_0105cc30 != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc30 + 0x38))(param_1);
    return 0 < iVar1;
  }
  return false;
}


//// FUNCTION FUN_009b07a0 @ 009b07a0 ////

void __cdecl FUN_009b07a0(undefined4 param_1)

{
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) &&
     (DAT_0105cc30 != (int *)0x0)) {
    (**(code **)(*DAT_0105cc30 + 0x28))(param_1);
  }
  return;
}


//// FUNCTION FUN_009b07d0 @ 009b07d0 ////

float10 __cdecl FUN_009b07d0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined1 *unaff_retaddr;
  undefined4 uStack_4;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      if (DAT_0105cc34 != (code *)0x0) {
        fVar3 = (float10)(*DAT_0105cc34)(param_1,param_2);
        return fVar3;
      }
      uStack_4 = 0;
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      fVar3 = (float10)(**(code **)(*piVar2 + 0xb0))(param_1,&uStack_4);
      if ((fVar3 == (float10)1.0) && (param_1 == 0)) {
        *unaff_retaddr = 0;
        return fVar3;
      }
      *unaff_retaddr = 1;
      return fVar3;
    }
  }
  *param_2 = 0;
  return (float10)0.0;
}


//// FUNCTION FUN_009b0880 @ 009b0880 ////

void __cdecl FUN_009b0880(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      uStack_c = *param_2;
      uStack_8 = param_2[1];
      uStack_4 = param_2[2];
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0xa8))(param_1,&uStack_c);
    }
  }
  return;
}


//// FUNCTION FUN_009b0930 @ 009b0930 ////

void __cdecl FUN_009b0930(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      if (param_1 == 0) {
        piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
        (**(code **)(*piVar2 + 0x44))(4);
      }
      else if (param_1 == 1) {
        piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
        (**(code **)(*piVar2 + 0x44))(1);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_009b0990 @ 009b0990 ////

bool FUN_009b0990(void)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      iVar1 = (**(code **)(*piVar2 + 0x48))();
      return (bool)('\x01' - (iVar1 != 1));
    }
  }
  return false;
}


//// FUNCTION FUN_009b09f0 @ 009b09f0 ////

undefined1 __cdecl FUN_009b09f0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_20 [16];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6998;
  local_c = ExceptionList;
  if ((((param_1 != 0) && (DAT_0105cc29 == '\0')) && (DAT_0105cc28 == '\0')) &&
     (DAT_0105cc2c != (int *)0x0)) {
    ExceptionList = &local_c;
    iVar2 = (**(code **)(*DAT_0105cc2c + 0x30))();
    if (iVar2 != 0) {
      uVar3 = FUN_00bb8950(auStack_20,param_1);
      uStack_4 = 0;
      piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
      uVar1 = (**(code **)(*piVar4 + 0x18))(uVar3);
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00bb8a10((undefined4 *)&stack0xffffffdc);
      ExceptionList = pvStack_10;
      return uVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_009b0c10 @ 009b0c10 ////

void __cdecl FUN_009b0c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009b0cf0 @ 009b0cf0 ////

void __thiscall FUN_009b0cf0(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00d71f68;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_009b0d20 @ 009b0d20 ////

undefined4 * __thiscall FUN_009b0d20(void *this,byte param_1)

{
  FUN_009afff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b0da0 @ 009b0da0 ////

void __cdecl FUN_009b0da0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*DAT_0105cc2c;
    puVar2 = FUN_00bbd930((char *)*param_1,param_1[8],param_1[9],param_1[10]);
    (*(code *)*puVar1)(puVar2);
  }
  return;
}


//// FUNCTION FUN_009b0df0 @ 009b0df0 ////

void __cdecl FUN_009b0df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)*DAT_0105cc2c;
    puVar2 = FUN_00bbd8b0((char *)*param_1,param_1[8],param_1[9],param_1[10],param_1[0xb],
                          param_1[0xc]);
    (*(code *)*puVar1)(puVar2);
  }
  return;
}


//// FUNCTION FUN_009b0e40 @ 009b0e40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009b0e40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      _DAT_00e67ee0 = param_1;
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x34))(-(uint)(param_1 != 0) & 0xe67edc);
    }
  }
  return;
}


//// FUNCTION FUN_009b0e90 @ 009b0e90 ////

void __cdecl FUN_009b0e90(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x74))(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009b0ed0 @ 009b0ed0 ////

void __cdecl FUN_009b0ed0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x68))(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009b0f10 @ 009b0f10 ////

void __cdecl FUN_009b0f10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x7c))(param_1,param_2);
    }
  }
  return;
}


//// FUNCTION FUN_009b0f60 @ 009b0f60 ////

void __cdecl FUN_009b0f60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) &&
     (((iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))(), iVar1 != 0 && (-1 < param_1)) &&
      (param_1 < 0x20)))) {
    piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
    (**(code **)(*piVar2 + 0x84))(param_1);
  }
  return;
}


//// FUNCTION FUN_009b0fb0 @ 009b0fb0 ////

void __cdecl FUN_009b0fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) &&
     (((iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))(), iVar1 != 0 && (-1 < param_1)) &&
      (param_1 < 0x20)))) {
    piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
    (**(code **)(*piVar2 + 0x80))(param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_009b1000 @ 009b1000 ////

void __cdecl FUN_009b1000(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x2c))();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)(**(code **)(*DAT_0105cc2c + 0x2c))();
      (**(code **)*puVar2)(param_1,param_2,param_3);
    }
  }
  return;
}


//// FUNCTION FUN_009b1050 @ 009b1050 ////

float10 __cdecl FUN_009b1050(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x2c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
      fVar3 = (float10)(**(code **)(*piVar2 + 4))(param_1);
      return fVar3;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_009b10a0 @ 009b10a0 ////

void __cdecl FUN_009b10a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0xa0))(param_1,param_2);
    }
  }
  return;
}


//// FUNCTION FUN_009b1140 @ 009b1140 ////

bool __cdecl FUN_009b1140(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      iVar1 = (**(code **)(*piVar2 + 0xb4))(param_1);
      return -1 < iVar1;
    }
  }
  return false;
}


//// FUNCTION FUN_009b1190 @ 009b1190 ////

void FUN_009b1190(void)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x009b11c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 100))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009b11d0 @ 009b11d0 ////

void __cdecl FUN_009b11d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x88))(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009b1210 @ 009b1210 ////

void __cdecl FUN_009b1210(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x8c))(param_1,param_2);
    }
  }
  return;
}


//// FUNCTION FUN_009b1260 @ 009b1260 ////

void FUN_009b1260(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    puStack_3c = (undefined4 *)0x9b1290;
    iVar1 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar1 != 0) {
      uStack_10 = DAT_0105c3dc;
      uStack_8 = DAT_00e67ecc;
      uStack_c = DAT_00e67ed4;
      uStack_4 = DAT_00e67ed0;
      uStack_14 = DAT_0105cc4c;
      puStack_3c = (undefined4 *)0x9b12d4;
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      puStack_3c = &uStack_14;
      (**(code **)(*piVar2 + 0x18))();
      uStack_1c = DAT_0105c3d4;
      uStack_24 = DAT_0105c3cc;
      uStack_20 = DAT_0105c3d0;
      uStack_28 = DAT_0105c4b4;
      uStack_30 = DAT_0105c49c;
      uStack_2c = DAT_0105c4a8;
      uStack_34 = DAT_0105c4b8;
      puStack_3c = DAT_0105c4a0;
      uStack_38 = DAT_0105c4ac;
      piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar2 + 0x4c))(&uStack_24,&uStack_30,&puStack_3c);
    }
  }
  return;
}


//// FUNCTION FUN_009b1360 @ 009b1360 ////

void __fastcall FUN_009b1360(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf69b8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar2 = DAT_0105cc24;
  do {
    ExceptionList = &pvStack_c;
    if (puVar2 == (undefined4 *)0x0) {
LAB_009b13b4:
      if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[9])();
      }
      param_1[9] = 0;
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      ExceptionList = pvStack_c;
      return;
    }
    if (puVar2 == param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        DAT_0105cc24 = (undefined4 *)puVar2[8];
        ExceptionList = &pvStack_c;
      }
      else {
        ExceptionList = &pvStack_c;
        puVar1[8] = puVar2[8];
      }
      goto LAB_009b13b4;
    }
    puVar1 = puVar2;
    puVar2 = (undefined4 *)puVar2[8];
  } while( true );
}


//// FUNCTION FUN_009b13f0 @ 009b13f0 ////

undefined4 * __thiscall FUN_009b13f0(void *this,byte param_1)

{
  FUN_009b1360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b14b0 @ 009b14b0 ////

void __cdecl FUN_009b14b0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009b1530 @ 009b1530 ////

undefined4 __cdecl
FUN_009b1530(byte *param_1,uint param_2,int param_3,char param_4,undefined4 param_5,char param_6,
            undefined4 param_7,float param_8)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 auStack_b0 [3];
  undefined4 uStack_a4;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *puStack_5c;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf69db;
  local_c = ExceptionList;
  if ((((DAT_0105cc29 != '\0') || (DAT_0105cc28 != '\0')) || (DAT_0105cc2c == (int *)0x0)) ||
     ((param_1 == (byte *)0x0 ||
      (ExceptionList = &local_c, iVar2 = (**(code **)(*DAT_0105cc2c + 0x28))(), iVar2 == 0)))) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if ((int)param_2 < 0) {
    param_2 = 4;
  }
  if ((param_6 == '\0') &&
     (((DAT_0105cc38 != '\0' && ((param_2 == 4 || ((4 < (int)param_2 && ((int)param_2 < 0xc)))))) ||
      ((DAT_0105cc39 != '\0' && ((0xb < (int)param_2 && ((int)param_2 < 0x13)))))))) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  bVar1 = false;
  if ((((param_2 != DAT_00e67ec4) && (param_2 != DAT_00e67ec8)) && (param_2 != 4)) && (param_2 != 3)
     ) {
    if (param_6 == '\0') {
      ExceptionList = local_c;
      return 0xffffffff;
    }
    bVar1 = true;
  }
  FUN_00bbdba0(&uStack_98);
  uStack_98 = *(undefined4 *)(param_1 + 0x24);
  if ((*param_1 & 2) != 0) {
    FUN_00bbde00(&uStack_98,'\x01');
  }
  uStack_7c = (*param_1 & 1) != 0;
  if ((bool)uStack_7c) {
    uStack_78 = *(undefined4 *)(param_1 + 0xc);
    uStack_74 = *(undefined4 *)(param_1 + 0x10);
    uStack_70 = *(undefined4 *)(param_1 + 0x14);
  }
  if (param_4 != '\0') {
    *DAT_0105cc54 = 0xffffffff;
    puStack_5c = &DAT_0105cc50;
  }
  uStack_88 = param_5;
  if ((*param_1 & 4) != 0) {
    FUN_00bbdc50(&uStack_98,*(undefined4 *)(param_1 + 0x1c));
  }
  FUN_00bbdd80(&uStack_98,0,'\x01');
  FUN_00bbdd80(&uStack_98,2,'\x01');
  FUN_00bbdd80(&uStack_98,param_2,'\x01');
  if ((0.0 < param_8) && (param_8 < 1.0 != (param_8 == 1.0))) {
    FUN_00bbdc90(&uStack_98,param_8,param_8);
  }
  if (param_3 != 0) {
    FUN_00bbdd00(&uStack_98,param_3);
  }
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = param_7;
  FUN_00bb89e0(auStack_b0,0,1,*(undefined4 *)(param_1 + 4));
  uStack_4 = 0;
  if ((*(float *)(param_1 + 0x18) == 0.0) && (*(int *)(param_1 + 8) < 0)) {
    piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
    uVar4 = (**(code **)(*piVar3 + 0x58))(auStack_b0,&uStack_98);
  }
  else {
    iVar2 = (**(code **)(*DAT_0105cc2c + 0x30))();
    uVar4 = uStack_a4;
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
      iVar2 = (**(code **)(*piVar3 + 0xc))(&stack0xffffff48,0,*(undefined4 *)(param_1 + 8));
      if (iVar2 == 0) {
        uStack_4 = 0xffffffff;
        FUN_00bb8a10(auStack_b0);
        ExceptionList = local_c;
        return 0xffffffff;
      }
      piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      uVar4 = (**(code **)(*piVar3 + 0x54))(iVar2,*(undefined4 *)(param_1 + 0x18),&uStack_98);
    }
  }
  if (bVar1) {
    FUN_009b1210(uVar4,1);
  }
  local_c = (void *)0xffffffff;
  FUN_00bb8a10((undefined4 *)&stack0xffffff48);
  ExceptionList = pvStack_14;
  return uVar4;
}


//// FUNCTION FUN_009b1860 @ 009b1860 ////

undefined4 __cdecl
FUN_009b1860(byte *param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,char param_7,int param_8,char param_9,char param_10)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 auStack_ac [5];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined *puStack_5c;
  void *pvStack_20;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf69fb;
  local_c = ExceptionList;
  if ((((DAT_0105cc29 != '\0') || (DAT_0105cc28 != '\0')) || (DAT_0105cc2c == (int *)0x0)) ||
     (((param_1 == (byte *)0x0 ||
       (ExceptionList = &local_c, iVar2 = (**(code **)(*DAT_0105cc2c + 0x30))(), iVar2 == 0)) ||
      (DAT_0105cc30 == (int *)0x0)))) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if ((int)param_2 < 0) {
    param_2 = 4;
  }
  if ((DAT_0105cc38 != '\0') && ((param_2 == 4 || ((4 < (int)param_2 && ((int)param_2 < 0xc)))))) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if (((DAT_0105cc39 != '\0') && (0xb < (int)param_2)) && ((int)param_2 < 0x13)) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  bVar1 = false;
  if (((param_2 != DAT_00e67ec4) && (param_2 != DAT_00e67ec8)) && ((param_2 != 4 && (param_2 != 3)))
     ) {
    if (param_9 == '\0') {
      ExceptionList = local_c;
      return 0xffffffff;
    }
    bVar1 = true;
  }
  FUN_00bbdba0(&uStack_98);
  uStack_98 = *(undefined4 *)(param_1 + 0x24);
  if ((*param_1 & 2) != 0) {
    FUN_00bbde00(&uStack_98,'\x01');
  }
  uStack_7c = (*param_1 & 1) != 0;
  if ((bool)uStack_7c) {
    uStack_78 = *(undefined4 *)(param_1 + 0xc);
    uStack_74 = *(undefined4 *)(param_1 + 0x10);
    uStack_70 = *(undefined4 *)(param_1 + 0x14);
  }
  if (param_7 != '\0') {
    *DAT_0105cc54 = 0xffffffff;
    puStack_5c = &DAT_0105cc50;
    param_6 = 0;
  }
  if ((*param_1 & 4) != 0) {
    FUN_00bbdc50(&uStack_98,*(undefined4 *)(param_1 + 0x1c));
  }
  if (param_4 != 0) {
    FUN_00bbdd00(&uStack_98,param_4);
  }
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_88 = param_3;
  FUN_00bb89e0(auStack_ac,0,1,*(undefined4 *)(param_1 + 4));
  uStack_4 = 0;
  FUN_00bbdd80(&uStack_98,0,'\x01');
  if (param_10 == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = 1;
  }
  FUN_00bbdd80(&uStack_98,uVar5,'\x01');
  FUN_00bbdd80(&uStack_98,param_2,'\x01');
  piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
  iVar2 = (**(code **)(*piVar3 + 0xc))(auStack_ac);
  if (iVar2 == 0) {
    uStack_4 = 0xffffffff;
    FUN_00bb8a10(auStack_ac);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  uVar4 = (**(code **)(*DAT_0105cc30 + 8))(param_5,param_6,iVar2);
  if (bVar1) {
    FUN_009b1210(uVar4,1);
  }
  uStack_18 = 0xffffffff;
  FUN_00bb8a10((undefined4 *)&stack0xffffff40);
  ExceptionList = pvStack_20;
  return uVar4;
}


//// FUNCTION FUN_009b1b40 @ 009b1b40 ////

undefined4 __cdecl
FUN_009b1b40(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            char param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 auStack_8c [5];
  undefined4 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar2 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar2 != 0) {
      if ((int)param_3 < 0) {
        param_3 = 4;
      }
      if ((DAT_0105cc38 != '\0') && ((param_3 == 4 || ((4 < (int)param_3 && ((int)param_3 < 0xc)))))
         ) {
        return 0xffffffff;
      }
      if ((DAT_0105cc39 != '\0') && ((0xb < (int)param_3 && ((int)param_3 < 0x13)))) {
        return 0xffffffff;
      }
      bVar1 = false;
      if ((param_3 != DAT_00e67ec4) &&
         (((param_3 != DAT_00e67ec8 && (param_3 != 4)) && (param_3 != 3)))) {
        if (param_6 == '\0') {
          return 0xffffffff;
        }
        bVar1 = true;
      }
      FUN_00bbdba0(auStack_8c);
      auStack_8c[0] = 0xffffffff;
      FUN_00bbdcd0(auStack_8c,0x3f800000);
      FUN_00bbdce0(auStack_8c,0x42200000);
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      uStack_68 = 0x3f800000;
      uStack_64 = 0;
      FUN_00bbdd20(auStack_8c,1);
      uStack_78 = param_5;
      FUN_00bbdd80(auStack_8c,0,'\x01');
      FUN_00bbdd80(auStack_8c,2,'\x01');
      FUN_00bbdd80(auStack_8c,param_3,'\x01');
      if (param_2 != 0) {
        FUN_00bbdd00(auStack_8c,param_2);
      }
      piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      uVar4 = (**(code **)(*piVar3 + 0x54))(param_1,param_4,auStack_8c);
      if (bVar1) {
        FUN_009b1210(uVar4,1);
      }
      return uVar4;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_009b1d00 @ 009b1d00 ////

undefined4 __cdecl
FUN_009b1d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,char param_10)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_retaddr;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d0;
  undefined1 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *puStack_a8;
  undefined4 auStack_4c [19];
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar2 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*DAT_0105cc2c + 0x34))();
      if (iVar2 != 0) {
        if ((int)param_4 < 0) {
          param_4 = 4;
        }
        if ((DAT_0105cc38 != '\0') &&
           ((param_4 == 4 || ((4 < (int)param_4 && ((int)param_4 < 0xc)))))) {
          return 0xffffffff;
        }
        if ((DAT_0105cc39 != '\0') && ((0xb < (int)param_4 && ((int)param_4 < 0x13)))) {
          return 0xffffffff;
        }
        bVar1 = false;
        if ((param_4 != DAT_00e67ec4) &&
           (((param_4 != DAT_00e67ec8 && (param_4 != 4)) && (param_4 != 3)))) {
          if (param_10 == '\0') {
            return 0xffffffff;
          }
          bVar1 = true;
        }
        uStack_f0 = param_7;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_e8 = 0;
        uStack_ec = param_1;
        uStack_e4 = param_6;
        FUN_009aff10(auStack_4c);
        puVar3 = (undefined4 *)(**(code **)(*DAT_0105cc2c + 0x34))();
        uVar4 = (**(code **)*puVar3)(param_2,&uStack_f0,auStack_4c);
        FUN_00bbdba0(&uStack_e4);
        uStack_e4 = 0xffffffff;
        FUN_00bbdcd0(&uStack_e4,0x3f800000);
        FUN_00bbdce0(&uStack_e4,0x42200000);
        uStack_c8 = 0;
        uStack_c4 = 0x3f800000;
        uStack_c0 = 0x3f800000;
        uStack_bc = 0;
        FUN_00bbdd20(&uStack_e4,1);
        uStack_d0 = param_5;
        if ((char)param_6 != '\0') {
          *DAT_0105cc54 = 0xffffffff;
          puStack_a8 = &DAT_0105cc50;
        }
        FUN_00bbdd80(&uStack_e4,0,'\x01');
        FUN_00bbdd80(&uStack_e4,2,'\x01');
        FUN_00bbdd80(&uStack_e4,param_4,'\x01');
        if (unaff_retaddr != 0) {
          FUN_00bbdd00(&uStack_e4,unaff_retaddr);
        }
        piVar5 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
        uVar4 = (**(code **)(*piVar5 + 0x54))(uVar4,param_2,&uStack_e4);
        if (bVar1) {
          FUN_009b1210(uVar4,1);
        }
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_009b1f50 @ 009b1f50 ////

void FUN_009b1f50(void)

{
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) {
    FUN_009b1260();
    return;
  }
  return;
}


//// FUNCTION FUN_009b1f80 @ 009b1f80 ////

void __fastcall FUN_009b1f80(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009b1360(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009b1fa0 @ 009b1fa0 ////

void FUN_009b1fa0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_0105cc24;
  if (DAT_0105cc24 == (undefined4 *)0x0) {
    DAT_0105cc24 = (undefined4 *)0x0;
    return;
  }
  if (DAT_0105cc24 != (undefined4 *)0x0) {
    FUN_009b1360(DAT_0105cc24);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cc24 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_009b2030 @ 009b2030 ////

void * FUN_009b2030(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009b2060 @ 009b2060 ////

undefined4 * __thiscall FUN_009b2060(void *this,char *param_1,uint param_2,uint param_3)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_74;
  undefined1 local_73;
  void *local_70;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cf6a30;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  local_4 = 1;
  uStack_3 = 0;
  local_70 = this;
  FUN_004015d0(this,param_1,param_2);
  *(void **)((int)this + 0x20) = DAT_0105cc24;
  local_73 = 0;
  local_74 = 0;
  DAT_0105cc24 = this;
  FUN_009b92f0();
  _local_4 = CONCAT31(uStack_3,2);
  sVar1 = FUN_00ace02d(L"\\Lionhead Studios\\TheMovies\\Audio\\Atmosphere\\");
  FUN_0040cae0(local_6c,L"\\Lionhead Studios\\TheMovies\\Audio\\Atmosphere\\",sVar1);
  puVar2 = FUN_009acf60(local_2c,&param_1);
  FUN_0040cae0(local_6c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  uVar3 = FUN_009d36d0(local_6c,(uint *)0x0);
  if ((char)uVar3 == '\0') {
    uVar4 = FUN_00ace02d(L"data\\audio\\atmosphere\\");
    FUN_004036d0(local_6c,L"data\\audio\\atmosphere\\",uVar4);
    puVar2 = FUN_009acf60(local_2c,&param_1);
    FUN_0040cae0(local_6c,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  FUN_009ac940(local_4c,local_6c);
  _local_4 = CONCAT31(uStack_3,3);
  if (DAT_0105cc2c == (int *)0x0) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  else {
    uVar3 = (**(code **)(*DAT_0105cc2c + 0x38))(local_4c[0],&local_74);
    *(undefined4 *)((int)this + 0x24) = uVar3;
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_009b2230 @ 009b2230 ////

undefined4 * __cdecl FUN_009b2230(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *_Memory;
  byte *pbVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  char *in_stack_ffffffbc;
  uint in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_1;
  puStack_8 = &LAB_00cf6a53;
  local_c = ExceptionList;
  local_4 = 0;
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != 0)) {
    puVar4 = DAT_0105cc24;
    if (param_2 != 0) {
      do {
        if (puVar4 == (undefined4 *)0x0) {
          ExceptionList = &local_c;
          this = operator_new(0x28);
          local_4 = CONCAT31(local_4._1_3_,1);
          if (this == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            FUN_00403de0(&stack0xffffffbc,&param_1);
            puVar4 = FUN_009b2060(this,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4);
          }
          if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          ExceptionList = local_c;
          return puVar4;
        }
        pbVar5 = (byte *)*puVar4;
        pbVar2 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_009b2308:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_009b230d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_009b2308;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_009b230d:
        if (iVar3 == 0) {
          if (0x14 < param_3) {
            ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
            _free(param_1);
          }
          return puVar4;
        }
        puVar4 = (undefined4 *)puVar4[8];
      } while( true );
    }
    if (0x14 < param_3) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  else if (0x14 < param_3) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009b23a0 @ 009b23a0 ////

/* WARNING: Removing unreachable block (ram,0x009b23ef) */

void FUN_009b23a0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *unaff_ESI;
  char *unaff_EDI;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  _strncpy(local_20,"",0);
  local_1c = 0;
  *local_20 = '\0';
  if (unaff_EDI != (char *)0x0) {
    if (local_18 == 0) {
      local_18 = 0x20;
      local_20 = _malloc(0x20);
    }
    _strncpy(local_20,"",0);
    local_1c = 0;
    *local_20 = '\0';
    pcVar2 = unaff_EDI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_20,unaff_EDI,(int)pcVar2 - (int)(unaff_EDI + 1));
    FUN_004073f0(&local_20,".lug",4);
  }
  *(undefined1 *)(unaff_ESI + 3) = 0;
  *unaff_ESI = unaff_ESI + 3;
  unaff_ESI[2] = 0x14;
  unaff_ESI[1] = 0;
  FUN_004015d0(unaff_ESI,local_20,local_1c);
  if (local_18 < 0x15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_009b24a0 @ 009b24a0 ////

void __cdecl FUN_009b24a0(char *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_48 [4];
  undefined4 uStack_44;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6a68;
  local_c = ExceptionList;
  if (param_1 != (char *)0x0) {
    uStack_44 = 0x9b24d3;
    ExceptionList = &local_c;
    iVar1 = _strncmp(param_1,"set_",4);
    if (iVar1 != 0) {
      uStack_44 = 0x9b24e7;
      iVar1 = _strncmp(param_1,"fac_",4);
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return;
      }
    }
    FUN_009b23a0();
    pbVar2 = local_48;
    local_48[0] = 0;
    iVar1 = 0;
    uVar3 = 0x14;
    local_4 = 0;
    FUN_004015d0(&stack0xffffffac,local_2c,local_28);
    FUN_009b2230(pbVar2,iVar1,uVar3);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b2660 @ 009b2660 ////

void __fastcall FUN_009b2660(int param_1)

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


//// FUNCTION FUN_009b2690 @ 009b2690 ////

undefined4 * FUN_009b2690(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009b26c0 @ 009b26c0 ////

void __fastcall FUN_009b26c0(int param_1)

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


//// FUNCTION FUN_009b26f0 @ 009b26f0 ////

void __fastcall FUN_009b26f0(int param_1)

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


//// FUNCTION FUN_009b2720 @ 009b2720 ////

void FUN_009b2720(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *_Memory;
  uint uVar4;
  
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (DAT_0105cc2c != (int *)0x0)) {
    iVar2 = (**(code **)(*DAT_0105cc2c + 0x28))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
      (**(code **)(*piVar3 + 100))();
    }
    FUN_009b1fa0();
    uVar4 = 0;
    _Memory = DAT_0105cc40;
    while (_Memory != (void *)0x0) {
      if ((uint)(DAT_0105cc44 - (int)_Memory >> 2) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      puVar1 = *(undefined4 **)((int)_Memory + uVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)();
        _Memory = DAT_0105cc40;
      }
      uVar4 = uVar4 + 1;
    }
    DAT_0105cc40 = (void *)0x0;
    DAT_0105cc44 = 0;
    DAT_0105cc48 = 0;
  }
  return;
}


//// FUNCTION FUN_009b27d0 @ 009b27d0 ////

void FUN_009b27d0(void)

{
  if (DAT_0105cc29 == '\0') {
    FUN_009b2720();
    if (DAT_0105cc2c != (int *)0x0) {
      (**(code **)(*DAT_0105cc2c + 0x40))();
      DAT_0105cc2c = (int *)0x0;
    }
  }
  return;
}


//// FUNCTION FUN_009b2800 @ 009b2800 ////

void FUN_009b2800(void)

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
  puStack_8 = &LAB_00cf6aa8;
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


//// FUNCTION FUN_009b28c0 @ 009b28c0 ////

void __thiscall FUN_009b28c0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009b2800();
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
      _Dst = FUN_009b2690((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009b2030(param_1,iVar5,param_1 + param_2);
      FUN_009b2690(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009b0c10(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009b2030(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009b14b0(param_1,(int)pvVar3,iVar5);
    FUN_009b0c10(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009b2b00 @ 009b2b00 ////

void __thiscall FUN_009b2b00(void *this,undefined4 *param_1)

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
  FUN_009b28c0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009b2b50 @ 009b2b50 ////

void __cdecl FUN_009b2b50(int param_1)

{
  undefined **ppuVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_188;
  undefined1 local_184;
  undefined1 local_183;
  undefined4 local_180 [16];
  undefined1 local_140;
  int local_138;
  int local_134;
  char *local_12c [2];
  uint local_124;
  char local_10c [248];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6ad6;
  local_c = ExceptionList;
  if (((DAT_0105cc29 == '\0') && (DAT_0105cc28 == '\0')) && (uVar6 = 0, DAT_0105cc2c != (int *)0x0))
  {
    ExceptionList = &local_c;
    FUN_009b2720();
    local_183 = 0;
    local_184 = 0;
    if (param_1 != 0) {
      (**(code **)(*DAT_0105cc2c + 0x38))(param_1,&local_184);
      FUN_009b2b00(&DAT_0105cc3c,(undefined4 *)&stack0xfffffe70);
      ExceptionList = pvStack_14;
      return;
    }
    FUN_009c89a0(local_180);
    local_4 = 0;
    local_140 = 0;
    FUN_009ca9d0(local_180,"lug","Data\\Audio",(undefined1 *)0x1);
    ppuVar1 = FUN_009b4260();
    FUN_0040d6b0(local_12c,"Data\\Audio\\",ppuVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_009ca9d0(local_180,"lug",local_12c[0],(undefined1 *)0x1);
    for (; (local_138 != 0 && (uVar6 < (uint)(local_134 - local_138 >> 2))); uVar6 = uVar6 + 1) {
      FUN_009ac040(*(char **)(local_138 + uVar6 * 4));
      _sprintf(local_10c,*(char **)(local_138 + uVar6 * 4));
      FUN_009ac040(local_10c);
      pcVar5 = *(char **)(local_138 + uVar6 * 4);
      pcVar2 = _strrchr(pcVar5,0x5c);
      if (pcVar2 != (char *)0x0) {
        pcVar5 = pcVar2 + 1;
      }
      iVar3 = _strncmp(pcVar5,"fac_",4);
      pcVar5 = *(char **)(local_138 + uVar6 * 4);
      pcVar2 = _strrchr(pcVar5,0x5c);
      if (pcVar2 != (char *)0x0) {
        pcVar5 = pcVar2 + 1;
      }
      iVar4 = _strncmp(pcVar5,"set_",4);
      if ((iVar4 != 0) && (iVar3 != 0)) {
        uStack_188 = (**(code **)(*DAT_0105cc2c + 0x38))(local_10c,&local_184);
        if ((DAT_0105cc40 == 0) ||
           ((uint)(DAT_0105cc48 - DAT_0105cc40 >> 2) <=
            (uint)((int)DAT_0105cc44 - DAT_0105cc40 >> 2))) {
          FUN_009b28c0(&DAT_0105cc3c,DAT_0105cc44,1,&uStack_188);
        }
        else {
          *DAT_0105cc44 = uStack_188;
          DAT_0105cc44 = DAT_0105cc44 + 1;
        }
        _strrchr(*(char **)(local_138 + uVar6 * 4),0x5c);
        FUN_009d9820();
      }
    }
    if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c[0]);
    }
    local_4 = 0xffffffff;
    FUN_009c8560(local_180);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b2de0 @ 009b2de0 ////

uint FUN_009b2de0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *local_bc;
  undefined4 local_b8;
  uint local_b4;
  char local_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c [6];
  int local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_48;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38;
  undefined4 local_34;
  void *pvStack_20;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6b0c;
  local_c = ExceptionList;
  if (DAT_0105cc29 != '\0') {
    return (uint)ExceptionList & 0xffffff00;
  }
  ExceptionList = &local_c;
  FUN_00bb9530(local_84);
  local_48 = DAT_0105beb0;
  local_70 = 0x40;
  local_6c = 0x200;
  local_68 = 0x1000000;
  local_64 = 1;
  if (DAT_0105be08 < 2) {
    local_40._0_1_ = 0;
  }
  uVar1 = FUN_009bfdd0();
  if ((char)uVar1 != '\0') {
    local_bc = local_b0;
    local_b0[0] = '\0';
    local_b8 = 0;
    local_b4 = 0x40;
    local_bc = _malloc(0x40);
    _strncpy(local_bc,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
    local_b8 = 0x27;
    local_bc[0x27] = '\0';
    local_4 = 0;
    FUN_00a05ff0(local_9c,&local_bc,0);
    if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_bc);
    }
    local_bc = local_b0;
    local_b0[0] = '\0';
    local_b8 = 0;
    local_b4 = 0x14;
    _strncpy(local_bc,"AudioBS",7);
    local_b8 = 7;
    local_bc[7] = '\0';
    local_4._0_1_ = 3;
    local_3c = FUN_00a06070(local_9c,&local_bc,300);
    if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_bc);
    }
    local_bc = local_b0;
    local_b0[0] = '\0';
    local_b8 = 0;
    local_b4 = 0x14;
    _strncpy(local_bc,"AudioDS",7);
    local_b8 = 7;
    local_bc[7] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    iVar2 = FUN_00a06070(local_9c,&local_bc,0);
    local_38 = iVar2 != 0;
    if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_bc);
    }
    if (local_3c < 0x32) {
      local_3c = 0x32;
    }
    else if (800 < local_3c) {
      local_3c = 800;
    }
    local_34 = 3;
    local_4 = 0xffffffff;
    FUN_00a05fe0((int)local_9c);
  }
  DAT_0105cc2c = FUN_00bbb2c0(local_84);
  if (DAT_0105cc2c == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = *DAT_0105cc2c;
  puVar3 = FUN_00bbe5d0();
  (**(code **)(iVar2 + 8))(puVar3);
  iVar2 = *DAT_0105cc2c;
  puVar3 = FUN_00bbe270();
  (**(code **)(iVar2 + 8))(puVar3);
  iVar2 = *DAT_0105cc2c;
  puVar3 = FUN_00bbdef0();
  (**(code **)(iVar2 + 8))(puVar3);
  iVar2 = *DAT_0105cc2c;
  puVar3 = FUN_00bbde90();
  (**(code **)(iVar2 + 8))(puVar3);
  iVar2 = (**(code **)(*DAT_0105cc2c + 0x3c))();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)(**(code **)(*DAT_0105cc2c + 0x3c))();
    (**(code **)*puVar3)("\\LogStreams\\AudioLib\\SetTypeStatus Warning false",0);
    puVar3 = (undefined4 *)(**(code **)(*DAT_0105cc2c + 0x3c))();
    (**(code **)*puVar3)("\\LogStreams\\AudioLib\\SetTypeStatus Info false",0);
  }
  FUN_00bbde60(&local_40);
  FUN_00bbde20(&local_40,0,'\x01');
  FUN_00bbde20(&local_40,1,'\x01');
  (**(code **)(*DAT_0105cc2c + 0x20))(&local_40);
  (**(code **)(*DAT_0105cc2c + 0x18))();
  FUN_009b2b50(iStack_10);
  iVar2 = (**(code **)(*DAT_0105cc2c + 0x2c))();
  if (iVar2 != 0) {
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
    (**(code **)(*piVar4 + 0x10))(0,"global");
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
    (**(code **)(*piVar4 + 0x10))(1,"music");
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
    (**(code **)(*piVar4 + 0x10))(2,&DAT_00d72068);
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
    (**(code **)(*piVar4 + 0x10))(3,"mode_independent");
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x2c))();
    (**(code **)(*piVar4 + 0x10))(4,"mode_specific");
  }
  DAT_0105cc30 = (int *)(**(code **)(*DAT_0105cc2c + 0x24))();
  uStack_a8 = 0x4000;
  local_9c[0] = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (DAT_0105cc30 != (int *)0x0) {
    (**(code **)(*DAT_0105cc30 + 0x40))(&uStack_a8);
    (**(code **)*DAT_0105cc30)(0);
  }
  FUN_009b1260();
  iVar2 = (**(code **)(*DAT_0105cc2c + 0x28))();
  uVar1 = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)(**(code **)(*DAT_0105cc2c + 0x28))();
    uVar1 = (**(code **)(*piVar4 + 0x2c))(&PTR_PTR_00e67ee4);
  }
  ExceptionList = pvStack_20;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009b32b0 @ 009b32b0 ////

void __fastcall FUN_009b32b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6b36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d720ec;
  local_4 = 1;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  param_1[0x10] = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xc]);
}


//// FUNCTION FUN_009b3380 @ 009b3380 ////

void __fastcall FUN_009b3380(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  void *this;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6b4b;
  local_c = ExceptionList;
  if (s___AVCMoviesEventParamsCallback___00e67fac[0x21] != '\0') {
    iVar8 = *(int *)(param_1 + 8);
    iVar1 = param_1 + 0x14;
    if (iVar8 != iVar1) {
      iVar7 = 0;
      ExceptionList = &local_c;
      while ((iVar8 != iVar1 && (iVar7 < 6))) {
        piVar2 = *(int **)(iVar8 + 8);
        iVar8 = *(int *)(iVar8 + 4);
        if ((piVar2 != (int *)0x0) &&
           (((piVar2[0x10] != 0 && (cVar3 = FUN_00a070c0(piVar2[0x10]), cVar3 != '\0')) &&
            (piVar2[9] == 0)))) {
          uVar4 = FUN_00a070f0(piVar2[0x10]);
          *(undefined1 *)(piVar2 + 0xd) = uVar4;
          iVar5 = FUN_00a07120(piVar2[0x10]);
          piVar2[10] = iVar5;
          *(undefined1 *)((int)piVar2 + 0x3d) = *(undefined1 *)(piVar2[0x10] + 0x48);
          (**(code **)(*piVar2 + 4))();
          iVar7 = iVar7 + 1;
          if ((piVar2[10] == piVar2[0xb]) && ((char)piVar2[0xf] != '\0')) {
            (**(code **)*piVar2)(1);
          }
        }
      }
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 != iVar1) {
        do {
          if (1 < iVar7) break;
          piVar2 = *(int **)(iVar8 + 8);
          iVar8 = *(int *)(iVar8 + 4);
          if (((piVar2 != (int *)0x0) && (piVar2[0x10] != 0)) &&
             (cVar3 = FUN_00a070c0(piVar2[0x10]), cVar3 != '\0')) {
            uVar4 = FUN_00a070f0(piVar2[0x10]);
            *(undefined1 *)(piVar2 + 0xd) = uVar4;
            iVar5 = FUN_00a07120(piVar2[0x10]);
            piVar2[10] = iVar5;
            *(undefined1 *)((int)piVar2 + 0x3d) = *(undefined1 *)(piVar2[0x10] + 0x48);
            (**(code **)(*piVar2 + 4))();
            iVar7 = iVar7 + 1;
            if ((piVar2[10] == piVar2[0xb]) && ((char)piVar2[0xf] != '\0')) {
              (**(code **)*piVar2)(1);
            }
          }
        } while (iVar8 != iVar1);
        for (iVar8 = *(int *)(param_1 + 8); iVar8 != iVar1; iVar8 = *(int *)(iVar8 + 4)) {
          iVar7 = *(int *)(iVar8 + 8);
          if (*(int *)(iVar7 + 0x40) == 0) {
            this = operator_new(0x4c);
            uStack_4 = 0;
            if (this == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_00a071d0(this,iVar7);
            }
            uStack_4 = 0xffffffff;
            *(undefined4 **)(iVar7 + 0x40) = puVar6;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b3510 @ 009b3510 ////

undefined4 * __thiscall FUN_009b3510(void *this,byte param_1)

{
  FUN_009b32b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION AsyncLoadJob_ExecuteSync @ 009b3530 ////

void __fastcall AsyncLoadJob_ExecuteSync(int *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  size_t sVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* CONFIRMED: the synchronous path of the async mesh-load job (taken when
                       DAT_0105cc5c == 0, i.e. no worker thread). param_1[0xb] = file size,
                       param_1[0xc] = newly allocated buffer of that size; FUN_009d3ca0 (the same
                       generic whole-file-read helper used by the .pak loader) reads the entire .msh
                       file into it in one shot. param_1[0xd] set to 1 on success (bytes read ==
                       file size). Then calls the job's own vtable slot+4 (FUN_009e0ef0 ->
                       FUN_009deb10, the real binary parser) followed by slot 0 (destructor, called
                       with arg 1 = "delete this"). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1[0xc] == 0) && (ExceptionList = &local_c, param_1[0xb] != 0)) {
    ExceptionList = &local_c;
    pvVar3 = operator_new(param_1[0xb]);
    param_1[0xc] = (int)pvVar3;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (DAT_0105cc5c == '\0') {
    if (((param_1[0xb] != 0) && (param_1[0xc] != 0)) && (param_1[2] != 0)) {
      pcVar2 = (char *)param_1[1];
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_2c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      local_4 = 0;
      sVar5 = FUN_009d3ca0(&local_2c,(undefined4 *)param_1[0xc],param_1[0xb],
                           (undefined1 *)((int)param_1 + 0x3d));
      param_1[10] = sVar5;
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (param_1[0xb] == param_1[10]) {
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    (**(code **)(*param_1 + 4))();
    (**(code **)*param_1)(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b3640 @ 009b3640 ////

void __fastcall FUN_009b3640(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d720f8;
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


//// FUNCTION FUN_009b3690 @ 009b3690 ////

undefined4 * __thiscall FUN_009b3690(void *this,byte param_1)

{
  FUN_009b3640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b36b0 @ 009b36b0 ////

void __fastcall FUN_009b36b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6b88;
  puVar1 = (undefined4 *)param_1[2];
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar2, puVar1 != param_1 + 5) {
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
    }
    ppvVar2 = ExceptionList;
    puVar1 = (undefined4 *)param_1[2];
  }
  FUN_009b3640(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009b3710 @ 009b3710 ////

undefined4 * __thiscall FUN_009b3710(void *this,byte param_1)

{
  FUN_009b36b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b3730 @ 009b3730 ////

void FUN_009b3730(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_0105cc58;
  if (DAT_0105cc58 != (undefined4 *)0x0) {
    FUN_009b36b0(DAT_0105cc58);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cc58 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_009b3760 @ 009b3760 ////

void __fastcall FUN_009b3760(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d720f8;
  return;
}


//// FUNCTION FUN_009b37c0 @ 009b37c0 ////

void __fastcall FUN_009b37c0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d720f8;
  return;
}


//// FUNCTION FUN_009b3820 @ 009b3820 ////

void FUN_009b3820(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6beb;
  local_c = ExceptionList;
  if (DAT_0105cc58 == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x34);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_0105cc58 = FUN_009b37c0(puVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_0105cc58 = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b3890 @ 009b3890 ////

void FUN_009b3890(void)

{
  int iVar1;
  
  iVar1 = FUN_009b3820();
  FUN_009b3380(iVar1);
  return;
}


//// FUNCTION FUN_009b38a0 @ 009b38a0 ////

undefined4 * __fastcall FUN_009b38a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6c16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d720ec;
  param_1[1] = param_1 + 4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0x14;
  piVar1 = param_1 + 0x11;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  *piVar1 = 0;
  param_1[0x12] = 0;
  local_4 = 1;
  param_1[0x13] = param_1;
  FUN_00acdb9e(0xe67ffc);
  iVar2 = FUN_0097dda0();
  param_1[0x14] = iVar2;
  if (s___AV__InList_VAsyncEntry_MV___MV_00e67fd8[0x23] != '\0') {
    iVar2 = 0x44;
    pcVar5 = "m_Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe67ffc);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AV__InList_VAsyncEntry_MV___MV_00e67fd8[0x23] = '\0';
  }
  iVar2 = FUN_009b3820();
  piVar4 = (int *)(iVar2 + 0x14);
  param_1[0x12] = piVar4;
  *piVar1 = *piVar4;
  *(int **)(*piVar4 + 4) = piVar1;
  *piVar4 = (int)piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b39a0 @ 009b39a0 ////

undefined4 * __cdecl
FUN_009b39a0(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x1c);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00a5e120(this,param_1,param_2,param_3,param_4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009b3a70 @ 009b3a70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_009b3a70(void *this,float *param_1,float param_2,float param_3,undefined4 *param_4,int param_5,
            undefined *param_6)

{
  int *piVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6c56;
  local_c = ExceptionList;
  if (_DAT_0105cc60 != 0.0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  piVar1 = FUN_00a5de70(*(int *)((int)this + (int)param_4 * 4 + 4));
  if (piVar1 != (int *)0x0) {
    if (param_6 == (undefined *)0x0) {
      param_6 = PTR_LAB_00e68018;
    }
    if (param_5 == 0) {
      pvVar2 = operator_new(0x70);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = FUN_00a5e6e0(pvVar2,param_6,*(undefined4 *)((int)this + (int)param_4 * 4 + 4),
                               piVar1);
      }
      local_4 = 0xffffffff;
      if (0.0 <= param_2) {
        FUN_00a5e5d0(param_4,param_2);
      }
      if (0.0 <= param_3) {
        FUN_00a5e040(param_4,param_3);
      }
    }
    else {
      if (param_5 != 1) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      pvVar2 = operator_new(0x90);
      local_4 = 1;
      if (pvVar2 == (void *)0x0) {
        local_4 = 0xffffffff;
        param_4 = (undefined4 *)0x0;
      }
      else {
        param_4 = FUN_00a5e930(pvVar2,param_6,*(undefined4 *)((int)this + (int)param_4 * 4 + 4),
                               piVar1,4);
        local_4 = 0xffffffff;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_00a5dfb0(param_4,param_1);
    }
    ExceptionList = local_c;
    return param_4;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009b3be0 @ 009b3be0 ////

float10 __fastcall FUN_009b3be0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x20);
}


//// FUNCTION FUN_009b3d10 @ 009b3d10 ////

void __thiscall
FUN_009b3d10(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6c6b;
  local_c = ExceptionList;
  this_00 = (void *)0x0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + param_2 * 4 + 0x14) = param_5;
  pvVar2 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  *(void **)((int)this + param_2 * 4 + 0xc) = pvVar2;
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    this_00 = (void *)FUN_009910f0(puVar3);
  }
  *(char *)((int)this_00 + 0xc) = (param_6 != '\0') + '\x06';
  iVar1 = *(int *)((int)this + param_2 * 4 + 0xc);
  local_4 = 0xffffffff;
  if (*(int *)((int)this_00 + 0x18) != iVar1) {
    Engine_SetResourceReference(this_00,iVar1);
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xbfffffff;
  puVar3 = FUN_009b39a0((ushort)*(undefined4 *)((int)this + param_2 * 4 + 0x14),this_00,param_3,
                        param_4);
  *(undefined4 **)((int)this + param_2 * 4 + 4) = puVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b3ec0 @ 009b3ec0 ////

void __fastcall FUN_009b3ec0(int *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = (int)&PTR_FUN_00d7210c;
  if (DAT_010c980c != &DAT_010c9818) {
    do {
      piVar2 = DAT_010c980c;
      puVar1 = (undefined4 *)DAT_010c980c[2];
      piVar4 = DAT_010c980c + 1;
      if ((int *)DAT_010c980c[1] != (int *)0x0) {
        *(int *)DAT_010c980c[1] = *DAT_010c980c;
      }
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar4;
      }
      *piVar2 = 0;
      *piVar4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while (DAT_010c980c != &DAT_010c9818);
  }
  iVar3 = 2;
  do {
    piVar4 = param_1 + 1;
    _Memory = *(void **)(*piVar4 + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*piVar4 + 4) = 0;
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    *piVar4 = 0;
    if ((void *)param_1[3] != (void *)0x0) {
      FUN_0099b400((void *)param_1[3]);
      param_1[3] = 0;
    }
    iVar3 = iVar3 + -1;
    param_1 = piVar4;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_009b3f70 @ 009b3f70 ////

void FUN_009b3f70(void)

{
  undefined4 *puVar1;
  
  if (DAT_0105cc64 != (undefined4 *)0x0) {
    (**(code **)*DAT_0105cc64)(1);
  }
  DAT_0105cc64 = (undefined4 *)0x0;
  puVar1 = DAT_010c9840;
  while (puVar1 != &DAT_010c984c) {
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
      puVar1 = DAT_010c9840;
    }
  }
  return;
}


//// FUNCTION FUN_009b3fb0 @ 009b3fb0 ////

void __fastcall FUN_009b3fb0(void *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6c90;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"ui/star1.dds",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 0;
  FUN_009b3d10(param_1,&local_2c,0,1,1,0x400,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"ui/sparkle_single.dds",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4 = 1;
  FUN_009b3d10(param_1,&local_2c,1,1,1,0x100,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b4190 @ 009b4190 ////

int * __thiscall FUN_009b4190(void *this,byte param_1)

{
  FUN_009b3ec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b41b0 @ 009b41b0 ////

void FUN_009b41b0(void)

{
  DAT_0105cc64 = operator_new(0x24);
  if (DAT_0105cc64 != (undefined4 *)0x0) {
    *DAT_0105cc64 = &PTR_FUN_00d7210c;
    DAT_0105cc64[1] = 0;
    DAT_0105cc64[2] = 0;
    DAT_0105cc64[5] = 0x100;
    DAT_0105cc64[6] = 0x100;
    DAT_0105cc64[7] = 0;
    DAT_0105cc64[8] = 0;
    FUN_009b3fb0(DAT_0105cc64);
    return;
  }
  DAT_0105cc64 = (undefined4 *)0x0;
  FUN_009b3fb0((void *)0x0);
  return;
}


//// FUNCTION FUN_009b4210 @ 009b4210 ////

void * __thiscall FUN_009b4210(void *this,byte param_1)

{
  FUN_00a37cb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b4250 @ 009b4250 ////

undefined4 FUN_009b4250(void)

{
  return DAT_00e68040;
}


//// FUNCTION FUN_009b4260 @ 009b4260 ////

undefined ** FUN_009b4260(void)

{
  return &PTR_DAT_00e68048 + DAT_00e68040 * 8;
}


//// FUNCTION FUN_009b4290 @ 009b4290 ////

undefined4 FUN_009b4290(void)

{
  if ((((DAT_00e68040 != 0xc) && (DAT_00e68040 != 0xd)) && (DAT_00e68040 != 0xe)) &&
     (DAT_00e68040 != 0xf)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_009b42c0 @ 009b42c0 ////

undefined4 FUN_009b42c0(void)

{
  if ((((DAT_00e68040 != 0xc) && (DAT_00e68040 != 0xd)) && (DAT_00e68040 != 0xe)) &&
     (DAT_00e68040 != 0xf)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_009b4530 @ 009b4530 ////

void __cdecl FUN_009b4530(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_009b4610 @ 009b4610 ////

void __fastcall FUN_009b4610(undefined4 *param_1)

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


//// FUNCTION FUN_009b4640 @ 009b4640 ////

void FUN_009b4640(void)

{
  void *_Memory;
  
  _Memory = DAT_0105cc70;
  DAT_0105cc74 = 0;
  if (DAT_0105cc70 != (void *)0x0) {
    FUN_00a37cb0((int)DAT_0105cc70);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cc70 = (void *)0x0;
  return;
}


//// FUNCTION FUN_009b4670 @ 009b4670 ////

void __fastcall FUN_009b4670(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
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


//// FUNCTION FUN_009b46b0 @ 009b46b0 ////

bool __cdecl FUN_009b46b0(undefined4 *param_1)

{
  int iVar1;
  
  if (DAT_0105cc70 == (void *)0x0) {
    return false;
  }
  iVar1 = FUN_00a35eb0(DAT_0105cc70,(char *)*param_1);
  return iVar1 != 0;
}


//// FUNCTION FUN_009b4840 @ 009b4840 ////

void __cdecl FUN_009b4840(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_009b48a0 @ 009b48a0 ////

undefined4 * __thiscall FUN_009b48a0(void *this,byte param_1)

{
  FUN_009b4610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009b4900 @ 009b4900 ////

int FUN_009b4900(void)

{
  char cVar1;
  FILE *_File;
  char *pcVar2;
  uint _Count;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  char local_28 [8];
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  _File = _fopen("data\\language.txt","rb");
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  _strncpy(local_20,"EN-UK",5);
  local_1c = 5;
  local_20[5] = '\0';
  if (_File != (FILE *)0x0) {
    _fgets(local_28,8,_File);
    _fclose(_File);
    pcVar2 = local_28;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar2 - (int)(local_28 + 1);
    if (local_18 <= _Count) {
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      local_18 = _Count + 0x20 & 0xffffffe0;
      local_20 = _malloc(local_18);
    }
    _strncpy(local_20,local_28,_Count);
    local_1c = _Count;
    local_20[_Count] = '\0';
  }
  iVar5 = 0;
  ppuVar4 = &PTR_DAT_00e68048;
  do {
    iVar3 = __strnicmp(*ppuVar4,local_20,(size_t)ppuVar4[1]);
    if (iVar3 == 0) {
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      return iVar5;
    }
    ppuVar4 = ppuVar4 + 8;
    iVar5 = iVar5 + 1;
  } while ((int)ppuVar4 < 0xe68268);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return 0;
}


//// FUNCTION FUN_009b4a40 @ 009b4a40 ////

undefined4 * __cdecl FUN_009b4a40(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6ca8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = _wcstombs((char *)0x0,(wchar_t *)*param_2,param_2[1] * 2 + 2);
  if (0 < (int)sVar2) {
    _Dest = operator_new(sVar2 * 2);
    sVar2 = _wcstombs(_Dest,(wchar_t *)*param_2,sVar2 * 2);
    if (sVar2 != 0xffffffff) {
      pcVar3 = _Dest;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_2c,_Dest,(int)pcVar3 - (int)(_Dest + 1));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
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


//// FUNCTION FUN_009b4bc0 @ 009b4bc0 ////

undefined4 * __thiscall FUN_009b4bc0(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_009b4c60 @ 009b4c60 ////

int * __cdecl FUN_009b4c60(int param_1,int param_2,int *param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar7 = (uint *)(param_3 + 10);
  do {
    pwVar1 = *(wchar_t **)(param_2 + -0x40);
    uVar2 = *(uint *)(param_2 + -0x3c);
    iVar6 = param_2 + -0x40;
    puVar8 = puVar7 + -0x10;
    param_3 = param_3 + -0x10;
    if (puVar7[-0x18] <= uVar2) {
      if (10 < puVar7[-0x18]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar7[-0x18] = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      *param_3 = (int)pvVar5;
    }
    _wcsncpy((wchar_t *)*param_3,pwVar1,uVar2);
    iVar3 = *param_3;
    puVar7[-0x19] = uVar2;
    *(undefined2 *)(iVar3 + uVar2 * 2) = 0;
    pwVar1 = *(wchar_t **)(param_2 + -0x20);
    uVar2 = *(uint *)(param_2 + -0x1c);
    if (*puVar8 <= uVar2) {
      if (10 < *puVar8) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-0x12]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar8 = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      puVar7[-0x12] = (uint)pvVar5;
    }
    _wcsncpy((wchar_t *)puVar7[-0x12],pwVar1,uVar2);
    puVar7[-0x11] = uVar2;
    *(undefined2 *)(puVar7[-0x12] + uVar2 * 2) = 0;
    param_2 = iVar6;
    puVar7 = puVar8;
  } while (iVar6 != param_1);
  return param_3;
}


//// FUNCTION FUN_009b4d80 @ 009b4d80 ////

void __cdecl FUN_009b4d80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return;
}


//// FUNCTION FUN_009b4de0 @ 009b4de0 ////

undefined4 * __cdecl FUN_009b4de0(undefined4 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  wchar_t *_Dest;
  uint uVar2;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6cc8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar1 = _mbstowcs((wchar_t *)0x0,(char *)*param_2,param_2[1] + 1);
  if (0 < (int)sVar1) {
    _Dest = operator_new(sVar1 * 2 + 2);
    _mbstowcs(_Dest,(char *)*param_2,param_2[1] + 1);
    uVar2 = FUN_00ace02d(_Dest);
    FUN_004036d0(&local_2c,_Dest,uVar2);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b4f00 @ 009b4f00 ////

undefined4 * __cdecl FUN_009b4f00(undefined4 *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  FUN_0040cae0(&local_20,(wchar_t *)&stack0x00000008,1);
  pwVar1 = local_20;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar2 = FUN_00ace02d(local_20);
  FUN_004036d0(param_1,pwVar1,uVar2);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_009b4f80 @ 009b4f80 ////

undefined4 * __cdecl FUN_009b4f80(undefined4 *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *local_a4;
  undefined4 local_a0;
  uint local_9c;
  wchar_t local_98 [10];
  undefined4 local_84;
  wchar_t local_80 [64];
  
  local_a4 = local_98;
  local_84 = 0;
  local_98[0] = L'\0';
  local_a0 = 0;
  local_9c = 10;
  sVar2 = _swprintf(local_80,0xd18f7c,param_2);
  FUN_0040cae0(&local_a4,local_80,sVar2);
  pwVar1 = local_a4;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar3 = FUN_00ace02d(local_a4);
  FUN_004036d0(param_1,pwVar1,uVar3);
  if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  return param_1;
}


//// FUNCTION FUN_009b5030 @ 009b5030 ////

undefined4 * __cdecl FUN_009b5030(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if (DAT_0105cc70 == (void *)0x0) {
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar1);
    return param_1;
  }
  iVar2 = FUN_00a35eb0(DAT_0105cc70,(char *)*param_2);
  if (iVar2 != 0) {
    pwVar3 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,iVar2);
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    uVar1 = FUN_00ace02d(pwVar3);
    FUN_004036d0(param_1,pwVar3,uVar1);
    return param_1;
  }
  FUN_009ad240(param_1,(char *)*param_2,'\x01');
  return param_1;
}


//// FUNCTION FUN_009b50f0 @ 009b50f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_009b50f0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  wchar_t *pwVar4;
  uint uVar5;
  char *pcVar6;
  void *local_20 [2];
  uint local_18;
  
  if ((DAT_0105cd00 & 1) == 0) {
    DAT_0105cd00 = DAT_0105cd00 | 1;
    _DAT_0105cc98 = &DAT_0105cca4;
    DAT_0105cca4 = 0;
    _DAT_0105cc9c = 0;
    _DAT_0105cca0 = 0x14;
    DAT_0105ccb8 = &DAT_0105ccc4;
    DAT_0105ccc4 = 0;
    _DAT_0105ccbc = 0;
    _DAT_0105ccc0 = 0x14;
    DAT_0105ccd8 = &DAT_0105cce4;
    DAT_0105cce4 = 0;
    _DAT_0105ccdc = 0;
    _DAT_0105cce0 = 10;
    _atexit(FUN_00d14860);
  }
  DAT_0105ccfc = 0;
  if (param_3 == 0) {
    if (0 < param_2) {
      return (undefined *)0x0;
    }
    FUN_004015d0(&DAT_0105cc98,(char *)*param_1,param_1[1]);
    _DAT_0105ccdc = 0;
    *DAT_0105ccd8 = 0;
    _DAT_0105ccbc = 0;
    *DAT_0105ccb8 = 0;
    _DAT_0105ccf8 = 0xbf800000;
    DAT_0105ccfc = 0;
    puVar2 = FUN_009ad240(local_20,(char *)*param_1,'\x01');
    FUN_004036d0(&DAT_0105ccd8,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  else {
    pcVar3 = (char *)FUN_00a35e70(DAT_0105cc70,param_3);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&DAT_0105cc98,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    pwVar4 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,param_3);
    uVar5 = FUN_00ace02d(pwVar4);
    FUN_004036d0(&DAT_0105ccd8,pwVar4,uVar5);
    pcVar3 = (char *)FUN_00a35e90(DAT_0105cc70,param_3);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&DAT_0105ccb8,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    _DAT_0105ccf8 = 0xbf800000;
    DAT_0105ccfc = 1;
  }
  return &DAT_0105cc98;
}


//// FUNCTION FUN_009b52c0 @ 009b52c0 ////

/* WARNING: Removing unreachable block (ram,0x009b5708) */

int * __cdecl FUN_009b52c0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  wchar_t *_Source;
  uint uVar17;
  void *pvVar18;
  bool bVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  uint local_6c;
  uint local_68;
  wchar_t *local_2c;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_2);
  param_2 = (undefined4 *)0x0;
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00a35eb0(DAT_0105cc70,(char *)*puVar2);
  }
  else {
    iVar3 = FUN_00a35cf0(DAT_0105cc70,"ERA_PRE_30S");
    iVar4 = FUN_00a35cf0(DAT_0105cc70,"ERA_40S_50S");
    iVar5 = FUN_00a35cf0(DAT_0105cc70,"ERA_60S_70S");
    iVar6 = FUN_00a35cf0(DAT_0105cc70,"ERA_POST_80S");
    iVar7 = FUN_00a35cf0(DAT_0105cc70,"GENRE_ACTION");
    iVar8 = FUN_00a35cf0(DAT_0105cc70,"GENRE_COMEDY");
    iVar9 = FUN_00a35cf0(DAT_0105cc70,"GENRE_HORROR");
    iVar10 = FUN_00a35cf0(DAT_0105cc70,"GENRE_ROMANCE");
    iVar11 = FUN_00a35cf0(DAT_0105cc70,"GENRE_SCI-FI");
    iVar12 = FUN_00a35cf0(DAT_0105cc70,"GENRE_THRILLER");
    iVar13 = FUN_00a35cf0(DAT_0105cc70,"GENRE_WAR");
    iVar14 = FUN_00a35cf0(DAT_0105cc70,"GENRE_WESTERN");
    local_6c = 0xffffffff;
    uVar17 = FUN_00a35d60(DAT_0105cc70,uVar1);
    local_68 = 0;
    puVar2 = (undefined4 *)0x0;
    if (uVar17 != 0) {
      do {
        bVar19 = true;
        puVar2 = (undefined4 *)FUN_00a35db0(DAT_0105cc70,uVar1,local_68);
        if ((((param_3 != 0) && (*(int *)(param_3 + 4) != 0)) &&
            (*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 5 != 0)) &&
           (((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar3,(int)puVar2), (char)uVar15 != '\0' ||
             (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar4,(int)puVar2), (char)uVar15 != '\0')) ||
            ((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar5,(int)puVar2), (char)uVar15 != '\0' ||
             (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar6,(int)puVar2), (char)uVar15 != '\0')))))) {
          puVar20 = *(undefined4 **)(param_3 + 4);
          bVar19 = false;
          if (puVar20 != *(undefined4 **)(param_3 + 8)) {
            do {
              uVar15 = FUN_00a36170(DAT_0105cc70,(char *)*puVar20,(int)puVar2);
              if ((char)uVar15 != '\0') {
                bVar19 = true;
                break;
              }
              puVar20 = puVar20 + 8;
            } while (puVar20 != *(undefined4 **)(param_3 + 8));
          }
        }
        if (bVar19) {
          if ((((param_4 == 0) || (*(int *)(param_4 + 4) == 0)) ||
              (*(int *)(param_4 + 8) - *(int *)(param_4 + 4) >> 5 == 0)) ||
             (((((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar7,(int)puVar2), (char)uVar15 == '\0' &&
                 (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar8,(int)puVar2), (char)uVar15 == '\0')) &&
                (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar9,(int)puVar2), (char)uVar15 == '\0')) &&
               ((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar10,(int)puVar2), (char)uVar15 == '\0' &&
                (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar11,(int)puVar2), (char)uVar15 == '\0')))) &&
              ((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar12,(int)puVar2), (char)uVar15 == '\0' &&
               ((uVar15 = FUN_00a35e10(DAT_0105cc70,iVar13,(int)puVar2), (char)uVar15 == '\0' &&
                (uVar15 = FUN_00a35e10(DAT_0105cc70,iVar14,(int)puVar2), (char)uVar15 == '\0')))))))
             ) {
LAB_009b55ff:
            uVar15 = FUN_00a35f20(DAT_0105cc70,(int)puVar2);
            if ((param_2 == (undefined4 *)0x0) || (uVar15 < local_6c)) {
LAB_009b567b:
              local_6c = uVar15;
              param_2 = puVar2;
            }
            else if (uVar15 == local_6c) {
              uVar21 = FUN_00acd42c();
              iVar16 = FUN_00990d30(0,(int)uVar21);
              uVar15 = local_6c;
              if (iVar16 == 0) goto LAB_009b567b;
            }
          }
          else {
            puVar20 = *(undefined4 **)(param_4 + 4);
            if (puVar20 != *(undefined4 **)(param_4 + 8)) {
              do {
                uVar15 = FUN_00a36170(DAT_0105cc70,(char *)*puVar20,(int)puVar2);
                if ((char)uVar15 != '\0') goto LAB_009b55ff;
                puVar20 = puVar20 + 8;
              } while (puVar20 != *(undefined4 **)(param_4 + 8));
            }
          }
        }
        local_68 = local_68 + 1;
        puVar2 = param_2;
      } while (local_68 < uVar17);
    }
  }
  local_2c = local_20;
  uVar1 = 0;
  local_20[0] = L'\0';
  local_24 = 10;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    DAT_0105cc68 = DAT_0105cc68 + 1;
    FUN_00a35f40(DAT_0105cc70,(int)puVar2,DAT_0105cc68);
    _Source = (wchar_t *)FUN_00a35e50(DAT_0105cc70,(int)puVar2);
    uVar1 = FUN_00ace02d(_Source);
    if (9 < uVar1) {
      uVar17 = uVar1 + 0x20 >> 5;
      local_24 = uVar17 << 5;
      local_2c = _malloc(uVar17 * 0x40);
    }
    _wcsncpy(local_2c,_Source,uVar1);
    local_2c[uVar1] = L'\0';
  }
  param_1[2] = 10;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  if (9 < uVar1) {
    uVar17 = uVar1 + 0x20 >> 5;
    param_1[2] = uVar17 << 5;
    pvVar18 = _malloc(uVar17 * 0x40);
    *param_1 = (int)pvVar18;
  }
  _wcsncpy((wchar_t *)*param_1,local_2c,uVar1);
  param_1[1] = uVar1;
  *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b57d0 @ 009b57d0 ////

/* WARNING: Removing unreachable block (ram,0x009b5939) */

int * __cdecl FUN_009b57d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *_Source;
  uint _Count;
  int iVar5;
  char *_Source_00;
  char *pcVar6;
  void *pvVar7;
  uint uVar8;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6d10;
  local_c = ExceptionList;
  uVar8 = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_2);
  if (uVar2 != 0) {
    uVar3 = FUN_00a35d60(DAT_0105cc70,uVar2);
    local_2c = local_20;
    local_20[0] = L'\0';
    local_28 = 0;
    local_24 = 10;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (uVar3 != 0) {
      while( true ) {
        iVar4 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar8);
        _Source = (wchar_t *)FUN_00a35e50(DAT_0105cc70,iVar4);
        _Count = FUN_00ace02d(_Source);
        if (local_24 <= _Count) {
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          local_24 = _Count + 0x20 & 0xffffffe0;
          local_2c = _malloc(local_24 * 2);
        }
        _wcsncpy(local_2c,_Source,_Count);
        local_2c[_Count] = L'\0';
        local_28 = _Count;
        iVar5 = _wcscmp(local_2c,(wchar_t *)*param_3);
        if (iVar5 == 0) break;
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) goto LAB_009b597b;
      }
      _Source_00 = (char *)FUN_00a35e70(DAT_0105cc70,iVar4);
      pcVar6 = _Source_00;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_48 = (int)pcVar6 - (int)(_Source_00 + 1);
      if (0x13 < local_48) {
        local_44 = local_48 + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy(local_4c,_Source_00,local_48);
      local_4c[local_48] = '\0';
LAB_009b597b:
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0x14;
  if (0x13 < local_48) {
    uVar2 = local_48 + 0x20 & 0xffffffe0;
    param_1[2] = uVar2;
    pvVar7 = _malloc(uVar2);
    *param_1 = (int)pvVar7;
  }
  _strncpy((char *)*param_1,local_4c,local_48);
  param_1[1] = local_48;
  *(undefined1 *)(local_48 + *param_1) = 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b5a20 @ 009b5a20 ////

void __cdecl FUN_009b5a20(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  
  if (param_1 != param_2) {
    puVar7 = (uint *)(param_1 + 10);
    do {
      pwVar2 = (wchar_t *)*param_3;
      uVar3 = param_3[1];
      if (puVar7[-8] <= uVar3) {
        if (10 < puVar7[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar5 = uVar3 + 0x20 & 0xffffffe0;
        puVar7[-8] = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        *param_1 = (int)pvVar6;
      }
      _wcsncpy((wchar_t *)*param_1,pwVar2,uVar3);
      iVar4 = *param_1;
      puVar7[-9] = uVar3;
      *(undefined2 *)(iVar4 + uVar3 * 2) = 0;
      pwVar2 = (wchar_t *)param_3[8];
      uVar3 = param_3[9];
      if (*puVar7 <= uVar3) {
        if (10 < *puVar7) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar7[-2]);
        }
        uVar5 = uVar3 + 0x20 & 0xffffffe0;
        *puVar7 = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        puVar7[-2] = (uint)pvVar6;
      }
      _wcsncpy((wchar_t *)puVar7[-2],pwVar2,uVar3);
      puVar1 = puVar7 + -2;
      puVar7[-1] = uVar3;
      param_1 = param_1 + 0x10;
      puVar7 = puVar7 + 0x10;
      *(undefined2 *)(*puVar1 + uVar3 * 2) = 0;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_009b5b30 @ 009b5b30 ////

void __cdecl FUN_009b5b30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}


//// FUNCTION FUN_009b5bc0 @ 009b5bc0 ////

int * __cdecl FUN_009b5bc0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  
  if (param_1 != param_2) {
    piVar6 = param_3 + 10;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(piVar6 + -7);
        *(undefined2 *)(piVar6 + -7) = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 10;
        uVar1 = param_1[1];
        pwVar2 = (wchar_t *)*param_1;
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          piVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4 * 2);
          *param_3 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*param_3,pwVar2,uVar1);
        iVar3 = *param_3;
        piVar6[-9] = uVar1;
        *(undefined2 *)(iVar3 + uVar1 * 2) = 0;
        piVar6[-2] = (int)(piVar6 + 1);
        *(undefined2 *)(piVar6 + 1) = 0;
        piVar6[-1] = 0;
        *piVar6 = 10;
        uVar1 = param_1[9];
        pwVar2 = (wchar_t *)param_1[8];
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 >> 5;
          *piVar6 = uVar4 << 5;
          pvVar5 = _malloc(uVar4 * 0x40);
          piVar6[-2] = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)piVar6[-2],pwVar2,uVar1);
        piVar6[-1] = uVar1;
        *(undefined2 *)(piVar6[-2] + uVar1 * 2) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      piVar6 = piVar6 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_009b5cd0 @ 009b5cd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009b5cd0(int param_1,char *param_2,uint param_3,uint param_4)

{
  char *_Memory;
  undefined4 *puVar1;
  char *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6d3b;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_0105cc74 == '\0') {
    DAT_0105cc74 = '\x01';
    DAT_00e68040 = param_1;
    ExceptionList = &local_c;
    puVar1 = operator_new(0x858);
    local_4._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_0105cc70 = (undefined4 *)0x0;
    }
    else {
      DAT_0105cc70 = FUN_00a37790(puVar1);
    }
    puVar1 = FUN_0040d6b0(local_2c,"data\\text\\",&PTR_DAT_00e68048 + DAT_00e68040 * 8);
    puVar1 = FUN_004312e0(local_4c,puVar1,"\\");
    FUN_0047aee0(local_6c,puVar1,&param_2);
    _Memory = param_2;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (DAT_00e68040 == 0x10) {
      FUN_004015d0(local_6c,param_2,param_3);
    }
    FUN_00a37e20(DAT_0105cc70,local_6c[0]);
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    _DAT_0105cc6c = 0;
    DAT_0105cc68 = 0;
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  else if (0x14 < param_4) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b5e60 @ 009b5e60 ////

undefined4 * __cdecl FUN_009b5e60(undefined4 *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
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
  puStack_8 = &LAB_00cf6d58;
  local_c = ExceptionList;
  if (param_2 == 1) {
    pcVar3 = "NUMBER_ORDINAL_SUFFIX_1";
  }
  else if (param_2 == 2) {
    pcVar3 = "NUMBER_ORDINAL_SUFFIX_2";
  }
  else if (param_2 == 3) {
    pcVar3 = "NUMBER_ORDINAL_SUFFIX_3";
  }
  else {
    uVar4 = param_2 % 100;
    if ((uVar4 < 0x15) || (param_2 % 10 != 1)) {
      if ((uVar4 < 0x16) || (param_2 % 10 != 2)) {
        if ((uVar4 < 0x17) || (pcVar3 = "NUMBER_ORDINAL_SUFFIX_23_33_ETC", param_2 % 10 != 3)) {
          pcVar3 = "NUMBER_ORDINAL_SUFFIX_4_ONWARDS";
        }
      }
      else {
        pcVar3 = "NUMBER_ORDINAL_SUFFIX_22_32_ETC";
      }
    }
    else {
      pcVar3 = "NUMBER_ORDINAL_SUFFIX_21_31_ETC";
    }
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
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b5f90 @ 009b5f90 ////

void __cdecl FUN_009b5f90(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  int local_4;
  
  uVar1 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_1);
  uVar6 = 0;
  local_8 = 0;
  if (uVar1 == 0) {
    if ((int)param_2 < 1) {
      local_8 = FUN_00a35eb0(DAT_0105cc70,(char *)*param_1);
    }
  }
  else {
    uVar2 = FUN_00a35d60(DAT_0105cc70,uVar1);
    if ((int)param_2 < (int)uVar2) {
      uVar3 = param_2;
      if ((int)param_2 < 0) {
        if (param_3[1] != 0) {
          local_4 = 1;
          if (uVar2 != 0) {
            do {
              iVar4 = FUN_00a35db0(DAT_0105cc70,uVar1,uVar6);
              uVar3 = FUN_00a36170(DAT_0105cc70,(char *)*param_3,iVar4);
              if ((char)uVar3 == '\0') {
                iVar5 = FUN_00990d30(0,local_4);
                if (iVar5 == 0) {
                  local_8 = iVar4;
                }
                local_4 = local_4 + 1;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar2);
          }
          goto LAB_009b600e;
        }
        uVar3 = FUN_00990d30(0,uVar2);
      }
      local_8 = FUN_00a35db0(DAT_0105cc70,uVar1,uVar3);
    }
  }
LAB_009b600e:
  FUN_009b50f0(param_1,param_2,local_8);
  return;
}


//// FUNCTION FUN_009b6080 @ 009b6080 ////

void __cdecl FUN_009b6080(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_b0;
  int local_ac;
  uint auStack_a0 [20];
  uint local_50 [20];
  
  uVar1 = FUN_00990ea0(param_2);
  iVar3 = 0;
  do {
    uVar2 = FUN_00990ea0(iVar3);
    auStack_a0[iVar3] = uVar2;
    iVar6 = iVar3 + 1;
    auStack_a0[iVar3 + 0x14] = uVar2 % DAT_00e68288;
    iVar3 = iVar6;
  } while (iVar6 < 0x14);
  uVar2 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_1);
  local_ac = 0;
  if (uVar2 == 0) {
    iVar3 = FUN_00a35eb0(DAT_0105cc70,(char *)*param_1);
  }
  else {
    uVar4 = FUN_00a35d60(DAT_0105cc70,uVar2);
    iVar3 = local_ac;
    if (param_3[1] == 0) {
      if (uVar4 != 0) {
        iVar3 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar1 % uVar4);
      }
    }
    else {
      uVar7 = 0;
      local_b0 = 0;
      if (uVar4 != 0) {
        do {
          iVar6 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar7);
          uVar5 = FUN_00a36170(DAT_0105cc70,(char *)*param_3,iVar6);
          if ((char)uVar5 == '\0') {
            local_b0 = local_b0 + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        if (0 < (int)local_b0) {
          local_b0 = uVar1 % local_b0;
          uVar1 = 0;
          do {
            iVar3 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar1);
            uVar7 = FUN_00a36170(DAT_0105cc70,(char *)*param_3,iVar3);
            if ((char)uVar7 == '\0') {
              if (local_b0 == 0) break;
              local_b0 = local_b0 - 1;
            }
            uVar1 = uVar1 + 1;
            iVar3 = local_ac;
          } while (uVar1 < uVar4);
        }
      }
    }
  }
  local_ac = iVar3;
  FUN_009b50f0(param_1,-1,local_ac);
  return;
}


//// FUNCTION FUN_009b6200 @ 009b6200 ////

void __fastcall FUN_009b6200(int param_1)

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


//// FUNCTION FUN_009b6280 @ 009b6280 ////

void __cdecl FUN_009b6280(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  
  if (param_2 != 0) {
    piVar6 = param_1 + 10;
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(piVar6 + -7);
        *(undefined2 *)(piVar6 + -7) = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 10;
        uVar1 = param_3[1];
        pwVar2 = (wchar_t *)*param_3;
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          piVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4 * 2);
          *param_1 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*param_1,pwVar2,uVar1);
        iVar3 = *param_1;
        piVar6[-9] = uVar1;
        *(undefined2 *)(iVar3 + uVar1 * 2) = 0;
        piVar6[-2] = (int)(piVar6 + 1);
        *(undefined2 *)(piVar6 + 1) = 0;
        piVar6[-1] = 0;
        *piVar6 = 10;
        uVar1 = param_3[9];
        pwVar2 = (wchar_t *)param_3[8];
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 >> 5;
          *piVar6 = uVar4 << 5;
          pvVar5 = _malloc(uVar4 * 0x40);
          piVar6[-2] = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)piVar6[-2],pwVar2,uVar1);
        piVar6[-1] = uVar1;
        *(undefined2 *)(piVar6[-2] + uVar1 * 2) = 0;
      }
      param_1 = param_1 + 0x10;
      piVar6 = piVar6 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_009b63e0 @ 009b63e0 ////

void __fastcall FUN_009b63e0(int param_1)

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


//// FUNCTION FUN_009b6450 @ 009b6450 ////

void __fastcall FUN_009b6450(int param_1)

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


//// FUNCTION FUN_009b6480 @ 009b6480 ////

undefined4 * FUN_009b6480(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_009b5b30(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_009b6530 @ 009b6530 ////

void FUN_009b6530(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float local_8;
  
  DAT_0105cc68 = DAT_0105cc68 + 1;
  if ((DAT_0105cc7c != (int *)0x0) && (10 < (uint)((int)DAT_0105cc80 - (int)DAT_0105cc7c >> 3))) {
    local_8 = 0.0;
    piVar7 = DAT_0105cc7c;
    if (DAT_0105cc7c != DAT_0105cc80) {
      do {
        iVar6 = FUN_00a35f20(DAT_0105cc70,*piVar7);
        fVar1 = (float)(DAT_0105cc68 - iVar6);
        if (DAT_0105cc68 - iVar6 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        local_8 = fVar1 + local_8;
        piVar7 = piVar7 + 2;
      } while (piVar7 != DAT_0105cc80);
    }
    if (DAT_0105cc7c == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)DAT_0105cc80 - (int)DAT_0105cc7c >> 3;
    }
    fVar1 = (float)iVar6;
    if (iVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    piVar7 = DAT_0105cc7c;
    if (DAT_0105cc7c != DAT_0105cc80) {
      do {
        iVar6 = FUN_00a35f20(DAT_0105cc70,*piVar7);
        piVar5 = DAT_0105cc80;
        fVar2 = (float)(DAT_0105cc68 - iVar6);
        if (DAT_0105cc68 - iVar6 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        piVar3 = piVar7;
        piVar4 = piVar7;
        if (fVar2 < local_8 / fVar1) {
          while (piVar4 = piVar4 + 2, piVar4 != piVar5) {
            *piVar3 = *piVar4;
            piVar3[1] = piVar4[1];
            piVar3 = piVar3 + 2;
          }
          DAT_0105cc80 = DAT_0105cc80 + -2;
        }
        else {
          piVar7 = piVar7 + 2;
        }
      } while (piVar7 != DAT_0105cc80);
    }
  }
  return;
}


//// FUNCTION FUN_009b6660 @ 009b6660 ////

int * FUN_009b6660(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_009b6280(param_1,param_2,param_3);
  return param_1 + param_2 * 0x10;
}


//// FUNCTION FUN_009b6690 @ 009b6690 ////

void FUN_009b6690(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_009b4610(param_1);
  }
  return;
}


//// FUNCTION FUN_009b66c0 @ 009b66c0 ////

void __fastcall FUN_009b66c0(int param_1)

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
    FUN_009b4610(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009b6710 @ 009b6710 ////

void FUN_009b6710(void)

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
  puStack_8 = &LAB_00cf6d78;
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


//// FUNCTION FUN_009b6780 @ 009b6780 ////

void FUN_009b6780(void)

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
  puStack_8 = &LAB_00cf6d98;
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


//// FUNCTION FUN_009b68a0 @ 009b68a0 ////

void __thiscall FUN_009b68a0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf6db8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_009b4bc0(local_5c,param_3);
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
      uVar8 = FUN_009b6710();
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
      piVar6 = FUN_009b5bc0(*(undefined4 **)((int)this + 4),param_1,piVar5);
      FUN_009b6280(piVar6,param_2,local_5c);
      FUN_009b5bc0(param_1,*(undefined4 **)((int)this + 8),piVar6 + param_2 * 0x10);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_009b6690(puVar1,*(undefined4 **)((int)this + 8));
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
        FUN_009b5bc0(param_1,local_1c,param_1 + param_2 * 0x10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009b6660(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 6),local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        FUN_009b5a20(param_1,(int *)(iVar4 + param_2 * -0x40),local_5c);
      }
      else {
        piVar6 = local_1c + param_2 * -0x10;
        piVar5 = FUN_009b5bc0(piVar6,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar5;
        FUN_009b4c60((int)param_1,(int)piVar6,local_1c);
        FUN_009b5a20(param_1,param_1 + param_2 * 0x10,local_5c);
      }
    }
  }
  if (10 < local_34) {
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


//// FUNCTION FUN_009b6b50 @ 009b6b50 ////

void __thiscall FUN_009b6b50(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf6dd0;
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
      uVar2 = FUN_009b6780();
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
      puVar5 = (undefined4 *)FUN_009b4d80(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_009b5b30(puVar5,param_2,&local_20);
      FUN_009b4d80(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_009b4d80(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_009b6480(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_009b4530(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_009b4d80(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_009b4840((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_009b4530(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009b6e60 @ 009b6e60 ////

void __thiscall FUN_009b6e60(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_009b6280(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x10;
    return;
  }
  FUN_009b68a0(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009b6ed0 @ 009b6ed0 ////

void __thiscall FUN_009b6ed0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_009b5b30(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_009b6b50(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009b6f40 @ 009b6f40 ////

void __cdecl FUN_009b6f40(char *param_1,wchar_t *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  void *local_6c [2];
  uint local_64;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf6df3;
  local_c = ExceptionList;
  local_4c = local_40;
  local_2c = local_20;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_8c = local_80;
  local_4 = 0;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_8c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4._0_1_ = 1;
  puVar3 = FUN_009b4de0(local_6c,&local_8c);
  FUN_004036d0(&local_2c,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  uVar4 = FUN_00ace02d(param_2);
  FUN_004036d0(&local_4c,param_2,uVar4);
  FUN_009b6e60(&DAT_0105cc88,&local_4c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b70a0 @ 009b70a0 ////

void __cdecl FUN_009b70a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar4 = 0;
  if (DAT_0105cc7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105cc7c);
  }
  DAT_0105cc7c = (void *)0x0;
  DAT_0105cc80 = (undefined4 *)0x0;
  DAT_0105cc84 = 0;
  uVar2 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_1);
  if (uVar2 != 0) {
    uVar3 = FUN_00a35d60(DAT_0105cc70,uVar2);
    if (uVar3 != 0) {
      local_c = 0;
      do {
        local_10 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar4);
        puVar1 = DAT_0105cc80;
        if ((DAT_0105cc7c == (void *)0x0) ||
           ((uint)(DAT_0105cc84 - (int)DAT_0105cc7c >> 3) <=
            (uint)((int)DAT_0105cc80 - (int)DAT_0105cc7c >> 3))) {
          FUN_009b6b50(&DAT_0105cc78,DAT_0105cc80,1,&local_10);
        }
        else {
          FUN_009b5b30(DAT_0105cc80,1,&local_10);
          DAT_0105cc80 = puVar1 + 2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return;
}


//// FUNCTION FUN_009b7190 @ 009b7190 ////

undefined4 * __cdecl FUN_009b7190(undefined4 *param_1,undefined4 *param_2,char param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6e08;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_4 == 0) {
    ExceptionList = &local_c;
    param_4 = FUN_00990ce0();
  }
  if (param_3 == '\0') {
    uVar5 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_2);
    if (uVar5 == 0) goto LAB_009b728c;
    uVar1 = FUN_00a35d60(DAT_0105cc70,uVar5);
    uVar6 = 0;
    if (0 < (int)uVar1) {
      uVar6 = param_4 % uVar1;
    }
    iVar2 = FUN_00a35db0(DAT_0105cc70,uVar5,uVar6);
  }
  else {
    FUN_009b70a0(param_2);
    FUN_009b6530();
    if (DAT_0105cc7c == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = DAT_0105cc80 - DAT_0105cc7c >> 3;
    }
    iVar2 = *(int *)(DAT_0105cc7c + (param_4 % uVar5) * 8);
    FUN_00a35f40(DAT_0105cc70,iVar2,DAT_0105cc68);
  }
  pwVar3 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,iVar2);
  uVar5 = FUN_00ace02d(pwVar3);
  FUN_004036d0(&local_4c,pwVar3,uVar5);
LAB_009b728c:
  if (local_48 == 0) {
    puVar4 = FUN_009ad240(local_2c,(char *)*param_2,'\x01');
    FUN_004036d0(&local_4c,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (local_44 < 0xb) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_009b7330 @ 009b7330 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_009b7330(undefined4 *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  wchar_t *pwVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  void *_Memory;
  int iVar11;
  uint uVar12;
  int local_44;
  uint local_40;
  int local_34;
  uint local_30;
  void *local_2c;
  void *local_28;
  int *local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6e28;
  local_c = ExceptionList;
  _Memory = (void *)0x0;
  ExceptionList = &local_c;
  if ((DAT_0105cd70 & 1) == 0) {
    DAT_0105cd70 = DAT_0105cd70 | 1;
    _DAT_0105cd08 = &DAT_0105cd14;
    DAT_0105cd14 = 0;
    _DAT_0105cd0c = 0;
    _DAT_0105cd10 = 0x14;
    DAT_0105cd28 = &DAT_0105cd34;
    DAT_0105cd34 = 0;
    _DAT_0105cd2c = 0;
    _DAT_0105cd30 = 0x14;
    DAT_0105cd48 = &DAT_0105cd54;
    DAT_0105cd54 = 0;
    _DAT_0105cd4c = 0;
    _DAT_0105cd50 = 10;
    ExceptionList = &local_c;
    _atexit(FUN_00d14850);
  }
  DAT_0105cd6c = 0;
  uVar2 = FUN_00a35cf0(DAT_0105cc70,(char *)*param_1);
  local_44 = 0;
  if (uVar2 == 0) {
    if (0 < (int)param_2) {
      ExceptionList = local_c;
      return (undefined *)0x0;
    }
    local_44 = FUN_00a35eb0(DAT_0105cc70,(char *)*param_1);
LAB_009b7571:
    if (local_44 != 0) {
      pcVar6 = (char *)FUN_00a35e70(DAT_0105cc70,local_44);
      pcVar9 = pcVar6;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&DAT_0105cd08,pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
      pwVar7 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,local_44);
      uVar2 = FUN_00ace02d(pwVar7);
      FUN_004036d0(&DAT_0105cd48,pwVar7,uVar2);
      pcVar6 = (char *)FUN_00a35e90(DAT_0105cc70,local_44);
      pcVar9 = pcVar6;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&DAT_0105cd28,pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
      _DAT_0105cd68 = 0xbf800000;
      DAT_0105cd6c = 1;
      goto LAB_009b76d7;
    }
  }
  else {
    local_30 = FUN_00a35d60(DAT_0105cc70,uVar2);
    if (((param_3 != 0) && (*(int *)(param_3 + 4) != 0)) &&
       (uVar8 = *(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 5, uVar8 != 0)) {
      piVar10 = (int *)0x0;
      local_28 = (void *)0x0;
      local_24 = (int *)0x0;
      local_20 = 0;
      local_4 = 0;
      local_40 = 0;
      if (local_30 != 0) {
        do {
          iVar3 = FUN_00a35db0(DAT_0105cc70,uVar2,local_40);
          uVar12 = 0;
          local_34 = iVar3;
          if (uVar8 != 0) {
            iVar11 = 0;
            do {
              uVar4 = FUN_00a36170(DAT_0105cc70,*(char **)(iVar11 + *(int *)(param_3 + 4)),iVar3);
              _Memory = local_28;
              if ((char)uVar4 == '\0') goto LAB_009b750a;
              uVar12 = uVar12 + 1;
              iVar11 = iVar11 + 0x20;
            } while (uVar12 < uVar8);
          }
          if ((_Memory == (void *)0x0) ||
             ((uint)(local_20 - (int)_Memory >> 2) <= (uint)((int)piVar10 - (int)_Memory >> 2))) {
            FUN_004c0700(&local_2c,piVar10,1,&local_34);
            piVar10 = local_24;
            _Memory = local_28;
          }
          else {
            *piVar10 = iVar3;
            local_24 = piVar10 + 1;
            piVar10 = local_24;
          }
LAB_009b750a:
          local_40 = local_40 + 1;
        } while (local_40 < local_30);
        if (((_Memory != (void *)0x0) && (iVar3 = (int)piVar10 - (int)_Memory >> 2, iVar3 != 0)) &&
           ((int)param_2 < iVar3)) {
          if ((int)param_2 < 0) {
            iVar3 = FUN_00990d30(0,iVar3);
            local_44 = *(int *)((int)_Memory + iVar3 * 4);
          }
          else {
            local_44 = *(int *)((int)_Memory + param_2 * 4);
          }
        }
      }
      local_4 = 0xffffffff;
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_009b7571;
    }
    if ((int)param_2 < (int)local_30) {
      if ((int)param_2 < 0) {
        uVar8 = FUN_00990d30(0,local_30);
        local_44 = FUN_00a35db0(DAT_0105cc70,uVar2,uVar8);
      }
      else {
        local_44 = FUN_00a35db0(DAT_0105cc70,uVar2,param_2);
      }
      goto LAB_009b7571;
    }
  }
  if (0 < (int)param_2) {
    ExceptionList = local_c;
    return (undefined *)0x0;
  }
  FUN_004015d0(&DAT_0105cd08,(char *)*param_1,param_1[1]);
  _DAT_0105cd4c = 0;
  *DAT_0105cd48 = 0;
  _DAT_0105cd2c = 0;
  *DAT_0105cd28 = 0;
  _DAT_0105cd68 = 0xbf800000;
  DAT_0105cd6c = 0;
  puVar5 = FUN_009ad240(&local_2c,(char *)*param_1,'\x01');
  FUN_004036d0(&DAT_0105cd48,(wchar_t *)*puVar5,puVar5[1]);
  if (&lpType_0000000a < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
LAB_009b76d7:
  ExceptionList = local_c;
  return &DAT_0105cd08;
}


//// FUNCTION FUN_009b7750 @ 009b7750 ////

undefined * __cdecl FUN_009b7750(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *_Memory;
  undefined *puVar1;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6e48;
  local_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0043a2d0(local_1c,param_3);
  puVar1 = FUN_009b7330(param_1,param_2,(int)local_1c);
  _Memory = local_18;
  if (local_18 != (undefined4 *)0x0) {
    FUN_00405fe0(local_18,local_14);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_009b7820 @ 009b7820 ////

void __fastcall FUN_009b7820(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_009b79b0 @ 009b79b0 ////

void __fastcall FUN_009b79b0(int *param_1)

{
  if (0 < *param_1) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[1]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}


//// FUNCTION FUN_009b79f0 @ 009b79f0 ////

void __fastcall FUN_009b79f0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x38));
}


//// FUNCTION FUN_009b7af0 @ 009b7af0 ////

uint __cdecl FUN_009b7af0(char *param_1,int *param_2,int *param_3)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    cVar1 = *param_1;
    while (('/' < cVar1 && (cVar1 < ':'))) {
      if (param_3 != (int *)0x0) {
        *param_3 = *param_3 + 1;
      }
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = cVar1 + -0x30 + iVar2 * 10;
      cVar1 = *param_1;
    }
    *param_2 = iVar2;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009b7b80 @ 009b7b80 ////

void FUN_009b7b80(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_308 [256];
  CHAR local_208 [260];
  char local_104 [260];
  
  GetModuleFileNameA((HMODULE)0x0,local_208,0x101);
  __splitpath(local_208,local_308,local_104,(char *)0x0,(char *)0x0);
  pcVar2 = local_104;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)local_104;
  pcVar2 = &stack0xfffffcf7;
  do {
    pcVar5 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar5 != '\0');
  pcVar5 = local_104;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_00ad0ec3(local_308);
  return;
}


//// FUNCTION FUN_009b7c10 @ 009b7c10 ////

int __fastcall FUN_009b7c10(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


//// FUNCTION FUN_009b82a0 @ 009b82a0 ////

uint * __fastcall FUN_009b82a0(uint *param_1)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0xff;
  *(undefined1 *)((int)param_1 + 0x12) = 0xff;
  *(undefined1 *)((int)param_1 + 0x13) = 0xff;
  param_1[4] = 0xffffffff;
  *param_1 = *param_1 & 0xfffffffe;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = operator_new(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_0041f350(puVar1);
    param_1[0xe] = (uint)puVar1;
    *param_1 = *param_1 & 0xfffffff9;
    return param_1;
  }
  param_1[0xe] = 0;
  *param_1 = *param_1 & 0xfffffff9;
  return param_1;
}


//// FUNCTION FUN_009b83a0 @ 009b83a0 ////

undefined4 __thiscall FUN_009b83a0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    fVar2 = *(float *)((int)this + 0x14) - 4.0;
    fVar3 = *(float *)((int)this + 0x18) - 4.0;
    fVar4 = *(float *)((int)this + 0x14) + 4.0;
    fVar5 = *(float *)((int)this + 0x18) + 4.0;
    fVar1 = *param_1;
    uVar7 = (undefined2)((uint)*(int *)((int)this + 0x38) >> 0x10);
    uVar6 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      fVar1 = *param_1;
      uVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar4) << 8 | (ushort)(NAN(fVar1) || NAN(fVar4)) << 10
                             | (ushort)(fVar1 == fVar4) << 0xe);
      if (fVar1 < fVar4 || (fVar1 == fVar4) != 0) {
        fVar1 = param_1[1];
        uVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar3) << 8 |
                               (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                               (ushort)(fVar1 == fVar3) << 0xe);
        if (fVar1 >= fVar3) {
          fVar1 = param_1[1];
          uVar6 = CONCAT22(uVar7,(ushort)(fVar1 < fVar5) << 8 |
                                 (ushort)(NAN(fVar1) || NAN(fVar5)) << 10 |
                                 (ushort)(fVar1 == fVar5) << 0xe);
          if (fVar1 < fVar5 || (fVar1 == fVar5) != 0) {
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
        }
      }
    }
  }
  return uVar6;
}


//// FUNCTION FUN_009b8420 @ 009b8420 ////

void __cdecl FUN_009b8420(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack0000000c;
  int in_stack_00000018;
  undefined4 local_c;
  ushort local_8 [4];
  
  iVar4 = 0;
  if (param_2 == 0) {
    return;
  }
  FUN_00c84bc0(0x10);
  FUN_00c84bb0(1);
  local_8[0] = 0;
  local_8[1] = 0;
  local_c = 0;
  FUN_00c84bf0(param_1,param_2 * 3,&local_c,local_8);
  uStack0000000c = param_1[1] / 3;
  iVar3 = 0;
  if (0 < param_2) {
    do {
      if (iVar3 < (int)uStack0000000c) {
        iVar2 = 3;
        iVar1 = iVar4;
        do {
          *(undefined2 *)(iVar1 + (int)param_1) = *(undefined2 *)(iVar1 + param_1[2]);
          iVar1 = iVar1 + 2;
          iVar2 = iVar2 + -1;
          param_2 = in_stack_00000018;
        } while (iVar2 != 0);
      }
      else {
        *(undefined4 *)(iVar4 + (int)param_1) = 0;
        *(undefined2 *)((undefined4 *)(iVar4 + (int)param_1) + 1) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 6;
    } while (iVar3 < param_2);
  }
  _eh_vector_destructor_iterator_(param_1,0xc,param_1[-1],FUN_009b7820);
                    /* WARNING: Subroutine does not return */
  _free(param_1 + -1);
}


//// FUNCTION FUN_009b84f0 @ 009b84f0 ////

void __cdecl FUN_009b84f0(float *param_1,float param_2,float param_3)

{
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  ulonglong uVar1;
  
  if (0.0 <= (*param_1 - param_2) / (param_3 - param_2)) {
    uVar1 = FUN_00acd42c();
    *param_1 = (float)((extraout_ST0 - (float10)(int)uVar1) * extraout_ST1 + (float10)param_2);
    return;
  }
  uVar1 = FUN_00acd42c();
  *param_1 = (float)(((extraout_ST0_00 - (float10)(int)uVar1) + (float10)1.0) * extraout_ST1_00 +
                    (float10)param_2);
  return;
}


//// FUNCTION FUN_009b8550 @ 009b8550 ////

uint __thiscall FUN_009b8550(void *this,int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *in_EAX;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar3 = param_2;
  if (-1 < (int)param_2) {
    in_EAX = *(int **)this;
    iVar2 = *in_EAX;
    if (((((int)param_2 < iVar2) && (-1 < param_1)) && (piVar1 = in_EAX + 1, param_1 < *piVar1)) &&
       (in_EAX = (int *)in_EAX[2],
       *(char *)((int)in_EAX + (int)(param_2 + iVar2 * param_1) * 4 + 3) == '\0')) {
      iVar5 = -1;
      param_2 = (char *)((int)in_EAX + (int)(param_2 + (param_1 + -1) * iVar2) * 4 + -1);
      do {
        uVar4 = 0xffffffff;
        pcVar6 = param_2;
        do {
          if (((((iVar5 != 0) && (uVar4 != 0)) &&
               ((-1 < (int)(pcVar3 + iVar5) &&
                (((int)(pcVar3 + iVar5) < iVar2 && (-1 < (int)(uVar4 + param_1))))))) &&
              ((int)(uVar4 + param_1) < *piVar1)) && (*pcVar6 != '\0')) {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
          uVar4 = uVar4 + 1;
          pcVar6 = pcVar6 + iVar2 * 4;
        } while ((int)uVar4 < 2);
        iVar5 = iVar5 + 1;
        param_2 = param_2 + 4;
        if (1 < iVar5) {
          return uVar4 & 0xffffff00;
        }
      } while( true );
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009b8620 @ 009b8620 ////

void FUN_009b8620(undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar3 = -1;
  do {
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  uVar4 = FUN_00acd42c();
  iVar3 = (int)uVar4;
  uVar4 = FUN_00acd42c();
  uVar5 = FUN_00acd42c();
  iVar1 = (int)uVar5;
  *param_1 = 0xff;
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  param_1[3] = 0xff;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[2] = (char)iVar1;
  if ((int)uVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
    if ((int)uVar4 < 0x100) {
      uVar2 = (undefined1)uVar4;
    }
  }
  param_1[1] = uVar2;
  if (-1 < iVar3) {
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    *param_1 = (char)iVar3;
    return;
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_009b87f0 @ 009b87f0 ////

void __thiscall FUN_009b87f0(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_4 [4];
  
  *(int **)this = param_1;
  iVar8 = param_1[1] * *param_1;
  pvVar3 = operator_new(iVar8 * 4);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else if (-1 < iVar8 + -1) {
    puVar5 = (undefined1 *)((int)pvVar3 + 2);
    do {
      puVar5[-2] = 0xff;
      puVar5[-1] = 0xff;
      *puVar5 = 0xff;
      puVar5[1] = 0xff;
      *(undefined4 *)(puVar5 + -2) = 0xffffffff;
      puVar5 = puVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(void **)((int)this + 4) = pvVar3;
    goto LAB_009b8850;
  }
  *(void **)((int)this + 4) = pvVar3;
LAB_009b8850:
  do {
    puVar4 = *(undefined4 **)(*(int *)this + 8);
    puVar9 = *(undefined4 **)((int)this + 4);
    for (uVar6 = param_1[1] * *param_1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    pcVar7 = (char *)0x0;
    bVar2 = false;
    if (0 < **(int **)this) {
      do {
        iVar8 = 0;
        if (0 < *(int *)(*(int *)this + 4)) {
          do {
            uVar6 = FUN_009b8550(this,iVar8,pcVar7);
            if ((char)uVar6 != '\0') {
              iVar1 = **(int **)this;
              puVar4 = (undefined4 *)FUN_009b8620(local_4);
              *(undefined4 *)(*(int *)((int)this + 4) + (int)(pcVar7 + iVar1 * iVar8) * 4) = *puVar4
              ;
              bVar2 = true;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(*(int *)this + 4));
        }
        pcVar7 = pcVar7 + 1;
      } while ((int)pcVar7 < **(int **)this);
    }
    puVar4 = *(undefined4 **)((int)this + 4);
    puVar9 = *(undefined4 **)(*(int *)this + 8);
    for (uVar6 = param_1[1] * *param_1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  } while (bVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_009b8930 @ 009b8930 ////

void FUN_009b8930(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int local_124;
  int local_120;
  void *local_11c;
  undefined1 local_114 [8];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6e8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00a58720(&local_124,param_1);
  local_4 = 0;
  if ((local_124 != 0) && (local_120 != 0)) {
    FUN_009b87f0(local_114,&local_124);
    _sprintf(acStack_10c,param_1);
    pcVar1 = acStack_10c;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    _sprintf(pcVar2 + -4,"_filled.tga");
    FUN_00a58580(&local_124,acStack_10c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_11c);
}


//// FUNCTION FUN_009b8c30 @ 009b8c30 ////

undefined4 * __cdecl FUN_009b8c30(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6ea8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = _wcstombs((char *)0x0,(wchar_t *)*param_2,param_2[1] + 1);
  if (0 < (int)sVar2) {
    _Dest = operator_new(sVar2 + 1);
    _wcstombs(_Dest,(wchar_t *)*param_2,param_2[1] + 1);
    pcVar3 = _Dest;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,_Dest,(int)pcVar3 - (int)(_Dest + 1));
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
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


//// FUNCTION FUN_009b8d10 @ 009b8d10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009b8d10(int param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint *this;
  uint *extraout_EDX;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  float local_40;
  undefined4 local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) != 0)) {
    pfVar12 = (float *)(*(int *)(param_1 + 0xc) + 0x18);
    pfVar13 = local_38;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar13 = *pfVar12;
      pfVar12 = pfVar12 + 1;
      pfVar13 = pfVar13 + 1;
    }
    FUN_009aa830(local_38,(float *)&DAT_0105c468);
    local_60 = 0;
    iVar10 = FUN_0097e350(*(void **)(param_1 + 0xc),0);
    local_3c = DAT_0105c434;
    local_40 = DAT_0105c430;
    local_58 = 0;
    if (0 < *(int *)(iVar10 + 0x28)) {
      do {
        piVar5 = *(int **)(*(int *)(iVar10 + 0x2c) + local_58 * 4);
        local_5c = 0;
        if (0 < *piVar5) {
          do {
            iVar6 = *(int *)(piVar5[1] + local_5c * 4);
            local_54 = 0;
            if (0 < *(int *)(iVar6 + 0x2c)) {
              iVar11 = 0;
              iVar8 = local_60 * 0x3c;
              do {
                iVar7 = *(int *)(param_1 + 8);
                *(int *)(iVar7 + 0xc + iVar8) = local_54;
                *(int *)(iVar7 + 8 + iVar8) = local_5c;
                this = (uint *)(iVar7 + iVar8);
                this[1] = local_58;
                puVar1 = (uint *)(*(int *)(iVar6 + 0x30) + 0xc + iVar11);
                this[0xb] = *puVar1;
                this[0xc] = puVar1[1];
                this[0xd] = puVar1[2];
                pfVar13 = (float *)(*(int *)(iVar6 + 0x30) + iVar11);
                this[8] = (uint)*pfVar13;
                this[9] = (uint)pfVar13[1];
                this[10] = (uint)pfVar13[2];
                pfVar12 = (float *)(this + 5);
                *pfVar12 = *pfVar13;
                this[6] = (uint)pfVar13[1];
                this[7] = (uint)pfVar13[2];
                fVar2 = *pfVar12;
                fVar3 = (float)this[6];
                fVar4 = (float)this[7];
                *pfVar12 = local_38[0] * fVar2 + local_38[3] * fVar3 + local_20 * fVar4 + local_14;
                this[6] = (uint)(local_38[1] * fVar2 + local_28 * fVar3 + local_1c * fVar4 +
                                local_10);
                this[7] = (uint)(local_38[2] * fVar2 + local_24 * fVar3 + local_18 * fVar4 + local_c
                                );
                uVar14 = *this;
                if (DAT_0105c3e0 <= (float)this[7]) {
                  fVar2 = 1.0 / (float)this[7];
                  *this = uVar14 | 1;
                  this[7] = (uint)fVar2;
                  *pfVar12 = (fVar2 * *pfVar12 + 1.0) * _DAT_0105c410;
                  this[6] = (uint)(_DAT_0105c414 - fVar2 * (float)this[6] * _DAT_0105c414);
                  this[7] = (uint)((1.0 - fVar2) * _DAT_0105c3f4);
                  uVar9 = FUN_009b83a0(this,&local_40);
                  if ((char)uVar9 == '\0') {
                    uVar14 = uVar14 & 0xfffffffd | 1;
                  }
                  else {
                    uVar14 = uVar14 | 3;
                  }
                  *extraout_EDX = uVar14;
                  extraout_EDX[4] = (-(uint)((*extraout_EDX & 2) != 0) & 0xfeff01) - 0xffff01;
                }
                else {
                  *this = uVar14 & 0xfffffffe;
                }
                local_54 = local_54 + 1;
                iVar11 = iVar11 + 0x20;
                local_60 = local_60 + 1;
                iVar8 = iVar8 + 0x3c;
              } while (local_54 < *(int *)(iVar6 + 0x2c));
            }
            local_5c = local_5c + 1;
          } while (local_5c < *piVar5);
        }
        local_58 = local_58 + 1;
      } while ((int)local_58 < *(int *)(iVar10 + 0x28));
    }
  }
  return;
}


//// FUNCTION FUN_009b8ff0 @ 009b8ff0 ////

undefined4 * __cdecl FUN_009b8ff0(undefined4 *param_1)

{
  undefined1 local_b4 [8];
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6f10;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  ExceptionList = &local_c;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_68 = 0x27;
  local_6c[0x27] = '\0';
  local_4 = 1;
  FUN_00a05ff0(local_b4,&local_6c,0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_8c = local_80;
  local_80[0] = '\0';
  local_88 = 0;
  local_84 = 0x14;
  _strncpy(local_8c,"",0);
  local_88 = 0;
  *local_8c = '\0';
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"GameDir",7);
  local_a8 = 7;
  local_ac[7] = '\0';
  local_4._0_1_ = 5;
  FUN_00a06260(local_b4,local_2c,&local_ac,&local_8c);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_4._0_1_ = 7;
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  FUN_009acf60(&local_4c,local_2c);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a05fe0((int)local_b4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b91e0 @ 009b91e0 ////

undefined4 * FUN_009b91e0(void)

{
  uint uVar1;
  wchar_t *pwStack_240;
  uint uStack_23c;
  undefined1 *puStack_238;
  wchar_t awStack_21c [8];
  undefined4 local_20c;
  undefined1 local_208 [504];
  undefined4 *puStack_10;
  
  puStack_238 = local_208;
  uStack_23c = 0;
  pwStack_240 = (wchar_t *)0x0;
  local_20c = 0;
  SHGetFolderPathW(0,5);
  pwStack_240 = (wchar_t *)&stack0xfffffdcc;
  uStack_23c = 0;
  puStack_238 = (undefined1 *)0xa;
  uVar1 = FUN_00ace02d(awStack_21c);
  FUN_004036d0(&pwStack_240,awStack_21c,uVar1);
  *puStack_10 = puStack_10 + 3;
  *(undefined2 *)(puStack_10 + 3) = 0;
  puStack_10[1] = 0;
  puStack_10[2] = 10;
  FUN_004036d0(puStack_10,pwStack_240,uStack_23c);
  if (10 < puStack_238) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_240);
  }
  return puStack_10;
}


//// FUNCTION FUN_009b9280 @ 009b9280 ////

undefined4 * FUN_009b9280(void)

{
  uint uVar1;
  wchar_t awStack_21c [4];
  undefined1 *puStack_214;
  undefined1 local_208 [504];
  undefined4 *puStack_10;
  
  puStack_214 = local_208;
  awStack_21c[2] = L'\0';
  awStack_21c[3] = L'\0';
  awStack_21c[0] = L'\0';
  awStack_21c[1] = L'\0';
  SHGetFolderPathW(0,0x1a);
  *puStack_10 = puStack_10 + 3;
  *(undefined2 *)(puStack_10 + 3) = 0;
  puStack_10[1] = 0;
  puStack_10[2] = 10;
  uVar1 = FUN_00ace02d(awStack_21c);
  FUN_004036d0(puStack_10,awStack_21c,uVar1);
  return puStack_10;
}


//// FUNCTION FUN_009b92f0 @ 009b92f0 ////

undefined4 * FUN_009b92f0(void)

{
  uint uVar1;
  wchar_t awStack_21c [4];
  undefined1 *puStack_214;
  undefined1 local_208 [504];
  undefined4 *puStack_10;
  
  puStack_214 = local_208;
  awStack_21c[2] = L'\0';
  awStack_21c[3] = L'\0';
  awStack_21c[0] = L'\0';
  awStack_21c[1] = L'\0';
  SHGetFolderPathW(0,0x23);
  *puStack_10 = puStack_10 + 3;
  *(undefined2 *)(puStack_10 + 3) = 0;
  puStack_10[1] = 0;
  puStack_10[2] = 10;
  uVar1 = FUN_00ace02d(awStack_21c);
  FUN_004036d0(puStack_10,awStack_21c,uVar1);
  return puStack_10;
}


//// FUNCTION FUN_009b9360 @ 009b9360 ////

void __cdecl FUN_009b9360(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d24480,0,2);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_00acf917((LPCSTR)*puVar2);
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d24480,uVar1 + 1,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_009b93d0 @ 009b93d0 ////

undefined4 * __cdecl FUN_009b93d0(undefined4 *param_1,undefined4 *param_2)

{
  char *_Source;
  int iVar1;
  size_t sVar2;
  wchar_t *_Dest;
  uint uVar3;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6f28;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  _Source = (char *)*param_2;
  iVar1 = param_2[1];
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = _mbstowcs((wchar_t *)0x0,_Source,iVar1 + 1U);
  if (0 < (int)sVar2) {
    _Dest = operator_new(sVar2 * 2 + 2);
    _mbstowcs(_Dest,_Source,iVar1 + 1U);
    uVar3 = FUN_00ace02d(_Dest);
    FUN_004036d0(&local_2c,_Dest,uVar3);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009b94b0 @ 009b94b0 ////

void __cdecl FUN_009b94b0(int *param_1)

{
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d722c8,0,4);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,0xffffffff);
    puVar3 = FUN_00430770(param_1,local_40,0,uVar1);
    puVar2 = FUN_0047aee0(local_60,puVar3,puVar2);
    uVar1 = puVar2[1];
    _Source = (char *)*puVar2;
    if ((uint)param_1[2] <= uVar1) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar4 = _malloc(_Size);
      *param_1 = (int)pvVar4;
    }
    _strncpy((char *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined1 *)(uVar1 + *param_1) = 0;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d722c8,0,4);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_009b9680 @ 009b9680 ////

void __cdecl FUN_009b9680(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_1,(int)pcVar2 - (int)(param_1 + 1));
  FUN_009b94b0((int *)&local_20);
  pcVar2 = local_20;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)param_1 - (int)local_20] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return;
}


//// FUNCTION FUN_009b9700 @ 009b9700 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009b9700(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  float10 fVar18;
  int local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6f8f;
  local_c = ExceptionList;
  bVar16 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar10 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar10[1];
      pcVar9 = (char *)*puVar10;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 2;
      local_29c = puVar10[9];
      local_2bc = uVar7;
      if (local_29c == 1) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"COS_LATEX_HEAD",0xe);
        local_27c = 1.96182e-44;
        *(byte *)((int)local_280 + 0xe) = 0;
        pbVar11 = local_2c0;
        puVar13 = local_280;
        do {
          bVar1 = *pbVar11;
          bVar16 = bVar1 < (byte)*puVar13;
          if (bVar1 != (byte)*puVar13) {
LAB_009b9898:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_009b989d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar16 = bVar1 < *(byte *)((int)puVar13 + 1);
          if (bVar1 != *(byte *)((int)puVar13 + 1)) goto LAB_009b9898;
          pbVar11 = pbVar11 + 2;
          puVar13 = (uint *)((int)puVar13 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009b989d:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"cos_latex_head",0xe);
          local_2dc = 0xe;
          local_2e0[0xe] = 0;
          bVar16 = true;
          bVar3 = true;
          pbVar11 = local_2c0;
          pbVar14 = local_2e0;
          do {
            bVar1 = *pbVar11;
            bVar17 = bVar1 < *pbVar14;
            if (bVar1 != *pbVar14) {
LAB_009b9918:
              iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_009b991d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar17 = bVar1 < pbVar14[1];
            if (bVar1 != pbVar14[1]) goto LAB_009b9918;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009b991d:
          if (iVar5 != 0) goto LAB_009b9928;
        }
        bVar16 = true;
        bVar17 = true;
      }
      else {
LAB_009b9928:
        bVar17 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar16) && (bVar16 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar17) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while (local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      uVar7 = FUN_009ce990(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      for (; (int)uVar7 < iVar6; uVar7 = uVar7 + 1) {
        FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,uVar7);
        FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
        local_2f4 = local_260;
        if ((int)local_260 < local_2e4) {
          local_28c = 0;
          do {
            _sprintf(local_110,"%s%i%s%i","cos_latex_head_",uVar7);
            FUN_009ac040(local_110);
            FUN_009d10d0();
            FUN_009a6070(&DAT_0105c2e8,6.0);
            DAT_0105c3e4 = 0x42c80000;
            FUN_009a5390(0x105c2e8);
            fVar18 = FUN_004012c0(0.03926991);
            FUN_009a1950(&DAT_0105c2e8,(float)fVar18);
            local_228 = _DAT_00e68294 + 1.73;
            local_220 = _DAT_00e68290 + 3.2;
            local_230 = 0.3;
            local_224 = _DAT_00e68290 + 8.71;
            local_22c = 0x3dcccccd;
            local_21c = 0x400851ec;
            FUN_009a2830(&DAT_0105c2e8,&local_224,&local_230,0.0);
            iVar5 = 2;
            do {
              FUN_009a56b0(0xffa7b8d6,'\x01');
              FUN_009a1410();
              FUN_004012c0(0.0);
              local_23c = 0;
              local_238 = 0;
              local_234 = 0;
              (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
              (**(code **)(**(int **)((int)param_1 + 8) + 8))();
              FUN_009a1460();
              uVar4 = DAT_0105ca60;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
            local_27c = DAT_0105c404;
            fStack_290 = DAT_0105c404 + (float)puStack_288;
            fStack_284 = DAT_0105c404;
            DAT_0105ca60 = DAT_0105ca68;
            local_274[0] = local_28c;
            local_280 = puStack_288;
            local_278 = fStack_290;
            FUN_009a56e0((int)param_2);
            uStack_298 = 0;
            puStack_294 = (undefined4 *)0x0;
            DAT_0105ca60 = uVar4;
            MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
            if (puStack_294 != (undefined4 *)0x0) {
              pcStack_25c = acStack_250;
              acStack_250[0] = '\0';
              uStack_258 = 0;
              uStack_254 = 0x40;
              pcStack_25c = _malloc(0x40);
              _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
              uStack_258 = 0x26;
              pcStack_25c[0x26] = '\0';
              local_4 = 1;
              uVar8 = FUN_009d3720(&pcStack_25c);
              local_4 = 0xffffffff;
              if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_25c);
              }
              if (uVar8 == 0x2080) {
                _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                puVar10 = operator_new(0x2080);
                local_2c0 = local_2b4;
                local_2b4[0] = 0;
                local_2bc = 0;
                local_2b8 = 0x40;
                local_2c0 = _malloc(0x40);
                _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                local_2bc = 0x26;
                local_2c0[0x26] = 0;
                local_4 = 2;
                FUN_009d3ca0(&local_2c0,puVar10,0x2080,(undefined1 *)0x0);
                if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c0);
                }
                puVar12 = puStack_294;
                puVar15 = puVar10 + 0x20;
                for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar15 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_2e0 = local_2d4;
                pcVar9 = acStack_210;
                local_2d4[0] = 0;
                local_2dc = 0;
                local_2d8 = 0x14;
                do {
                  cVar2 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                uVar7 = (int)pcVar9 - (int)(acStack_210 + 1);
                if (0x13 < uVar7) {
                  local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                  local_2e0 = _malloc(local_2d8);
                }
                _strncpy((char *)local_2e0,acStack_210,uVar7);
                local_2e0[uVar7] = 0;
                local_4 = 3;
                local_2dc = uVar7;
                FUN_009d4370(&local_2e0,puVar10,0x2080);
                local_4 = 0xffffffff;
                if (0x14 < local_2d8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
                    /* WARNING: Subroutine does not return */
                _free(puVar10);
              }
            }
            MediaPlayer_UnlockVideoBuffer((int)param_2);
            FUN_009d12f0(param_1,local_2e8,(void *)0x1);
            local_2f4 = local_2f4 + 1;
          } while ((int)local_2f4 < local_2e4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009b9f10 @ 009b9f10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009b9f10(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  float10 fVar18;
  int local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6fcf;
  local_c = ExceptionList;
  bVar16 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar10 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar10[1];
      pcVar9 = (char *)*puVar10;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 2;
      local_29c = puVar10[9];
      local_2bc = uVar7;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"EYE_COLOR",9);
        local_27c = 1.26117e-44;
        *(byte *)((int)local_280 + 9) = 0;
        pbVar11 = local_2c0;
        puVar13 = local_280;
        do {
          bVar1 = *pbVar11;
          bVar16 = bVar1 < (byte)*puVar13;
          if (bVar1 != (byte)*puVar13) {
LAB_009ba0a8:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_009ba0ad;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar16 = bVar1 < *(byte *)((int)puVar13 + 1);
          if (bVar1 != *(byte *)((int)puVar13 + 1)) goto LAB_009ba0a8;
          pbVar11 = pbVar11 + 2;
          puVar13 = (uint *)((int)puVar13 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009ba0ad:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"eye_color",9);
          local_2dc = 9;
          local_2e0[9] = 0;
          bVar16 = true;
          bVar3 = true;
          pbVar11 = local_2c0;
          pbVar14 = local_2e0;
          do {
            bVar1 = *pbVar11;
            bVar17 = bVar1 < *pbVar14;
            if (bVar1 != *pbVar14) {
LAB_009ba128:
              iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_009ba12d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar17 = bVar1 < pbVar14[1];
            if (bVar1 != pbVar14[1]) goto LAB_009ba128;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009ba12d:
          if (iVar5 != 0) goto LAB_009ba138;
        }
        bVar16 = true;
        bVar17 = true;
      }
      else {
LAB_009ba138:
        bVar17 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar16) && (bVar16 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar17) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while (local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      uVar7 = FUN_009ce990(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      for (; (int)uVar7 < iVar6; uVar7 = uVar7 + 1) {
        FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,uVar7);
        FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
        local_2f4 = local_260;
        if ((int)local_260 < local_2e4) {
          local_28c = 0;
          do {
            _sprintf(local_110,"%s%i%s%i","cos_eye_color_",uVar7);
            FUN_009ac040(local_110);
            FUN_009d10d0();
            FUN_009a6070(&DAT_0105c2e8,6.0);
            DAT_0105c3e4 = 0x42c80000;
            FUN_009a5390(0x105c2e8);
            fVar18 = FUN_004012c0(0.002617994);
            FUN_009a1950(&DAT_0105c2e8,(float)fVar18);
            local_220 = _DAT_00e6829c + 3.2;
            local_224 = _DAT_00e6829c + 8.71;
            local_21c = 0x40400000;
            local_230 = 0.3;
            local_22c = 0x3dcccccd;
            local_228 = _DAT_00e68298 + 1.73;
            FUN_009a2830(&DAT_0105c2e8,&local_224,&local_230,0.0);
            iVar5 = 2;
            do {
              FUN_009a56b0(0xffa7b8d6,'\x01');
              FUN_009a1410();
              FUN_004012c0(0.0);
              local_23c = 0;
              local_238 = 0;
              local_234 = 0;
              (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
              (**(code **)(**(int **)((int)param_1 + 8) + 8))();
              FUN_009a1460();
              uVar4 = DAT_0105ca60;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
            local_27c = DAT_0105c404;
            fStack_290 = DAT_0105c404 + (float)puStack_288;
            fStack_284 = DAT_0105c404;
            DAT_0105ca60 = DAT_0105ca68;
            local_274[0] = local_28c;
            local_280 = puStack_288;
            local_278 = fStack_290;
            FUN_009a56e0((int)param_2);
            uStack_298 = 0;
            puStack_294 = (undefined4 *)0x0;
            DAT_0105ca60 = uVar4;
            MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
            if (puStack_294 != (undefined4 *)0x0) {
              pcStack_25c = acStack_250;
              acStack_250[0] = '\0';
              uStack_258 = 0;
              uStack_254 = 0x40;
              pcStack_25c = _malloc(0x40);
              _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
              uStack_258 = 0x26;
              pcStack_25c[0x26] = '\0';
              local_4 = 1;
              uVar8 = FUN_009d3720(&pcStack_25c);
              local_4 = 0xffffffff;
              if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_25c);
              }
              if (uVar8 == 0x2080) {
                _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                puVar10 = operator_new(0x2080);
                local_2c0 = local_2b4;
                local_2b4[0] = 0;
                local_2bc = 0;
                local_2b8 = 0x40;
                local_2c0 = _malloc(0x40);
                _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                local_2bc = 0x26;
                local_2c0[0x26] = 0;
                local_4 = 2;
                FUN_009d3ca0(&local_2c0,puVar10,0x2080,(undefined1 *)0x0);
                if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c0);
                }
                puVar12 = puStack_294;
                puVar15 = puVar10 + 0x20;
                for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar15 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_2e0 = local_2d4;
                pcVar9 = acStack_210;
                local_2d4[0] = 0;
                local_2dc = 0;
                local_2d8 = 0x14;
                do {
                  cVar2 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar2 != '\0');
                uVar7 = (int)pcVar9 - (int)(acStack_210 + 1);
                if (0x13 < uVar7) {
                  local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                  local_2e0 = _malloc(local_2d8);
                }
                _strncpy((char *)local_2e0,acStack_210,uVar7);
                local_2e0[uVar7] = 0;
                local_4 = 3;
                local_2dc = uVar7;
                FUN_009d4370(&local_2e0,puVar10,0x2080);
                local_4 = 0xffffffff;
                if (0x14 < local_2d8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
                    /* WARNING: Subroutine does not return */
                _free(puVar10);
              }
            }
            MediaPlayer_UnlockVideoBuffer((int)param_2);
            FUN_009d12f0(param_1,local_2e8,(void *)0x1);
            local_2f4 = local_2f4 + 1;
          } while ((int)local_2f4 < local_2e4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ba720 @ 009ba720 ////

void __cdecl FUN_009ba720(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  char *pcVar18;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  uint local_290;
  float fStack_28c;
  uint local_288;
  uint *local_284;
  float local_280;
  float local_27c;
  uint local_278 [5];
  uint *puStack_264;
  float fStack_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char local_210 [260];
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf700f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  iVar8 = *(int *)((int)param_1 + 0x34);
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar9 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar9[1];
      pcVar18 = (char *)*puVar9;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar18,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 2;
      local_29c = puVar9[9];
      local_2bc = uVar7;
      if (local_29c == 0) {
        local_284 = local_278;
        local_278[0] = local_278[0] & 0xffffff00;
        local_280 = 0.0;
        local_27c = 2.8026e-44;
        _strncpy((char *)local_284,"MAKE_UP_EYEBROW",0xf);
        local_280 = 2.10195e-44;
        *(byte *)((int)local_284 + 0xf) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_284;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009ba8d8:
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009ba8dd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009ba8d8;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009ba8dd:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_eyebrow",0xf);
          local_2dc = 0xf;
          local_2e0[0xf] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009ba958:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009ba95d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009ba958;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009ba95d:
          if (iVar5 != 0) goto LAB_009ba968;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009ba968:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_27c)) {
                    /* WARNING: Subroutine does not return */
        _free(local_284);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar6) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_290,&local_2e4);
          local_2f4 = local_290;
          if ((int)local_290 < local_2e4) {
            local_288 = 0;
            do {
              if (iVar8 == 1) {
                pcVar18 = "f_cos_eyebrow_";
              }
              else {
                pcVar18 = "m_cos_eyebrow_";
              }
              _sprintf(local_210,"%s%i%s%i",pcVar18,local_2f8);
              FUN_009ac040(local_210);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              fVar17 = FUN_004012c0(0.013089971);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.75;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.7341;
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar5 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              local_284 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_280 = DAT_0105c404;
              fStack_28c = DAT_0105c404 + (float)local_284;
              fStack_260 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_278[0] = local_288;
              local_27c = fStack_28c;
              puStack_264 = local_284;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar7 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar7 == 0x2080) {
                  _sprintf(acStack_10c,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar9 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar9,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar9 + 0x20;
                  for (iVar8 = 0x800; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar18 = acStack_10c;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar18;
                    pcVar18 = pcVar18 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar18 - (int)(acStack_10c + 1);
                  if (0x13 < uVar7) {
                    local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_10c,uVar7);
                  local_2e0[uVar7] = 0;
                  local_4 = 3;
                  local_2dc = uVar7;
                  FUN_009d4370(&local_2e0,puVar9,0x2080);
                  local_4 = 0xffffffff;
                  if (0x14 < local_2d8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2e0);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(puVar9);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar6);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009baf60 @ 009baf60 ////

void __cdecl FUN_009baf60(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf704f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar9 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar9[1];
      pcVar8 = (char *)*puVar9;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar8,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 2;
      local_29c = puVar9[9];
      local_2bc = uVar7;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"MAKE_UP_BEARD",0xd);
        local_27c = 1.82169e-44;
        *(byte *)((int)local_280 + 0xd) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bb108:
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bb10d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bb108;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009bb10d:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_beard",0xd);
          local_2dc = 0xd;
          local_2e0[0xd] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009bb188:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bb18d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009bb188;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009bb18d:
          if (iVar5 != 0) goto LAB_009bb198;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bb198:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar6) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_facialhair_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              fVar17 = FUN_004012c0(0.013089971);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.67;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.67;
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar5 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar7 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar7 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar9 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar9,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar9 + 0x20;
                  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar8 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar8 - (int)(acStack_210 + 1);
                  if (0x13 < uVar7) {
                    local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar7);
                  local_2e0[uVar7] = 0;
                  local_4 = 3;
                  local_2dc = uVar7;
                  FUN_009d4370(&local_2e0,puVar9,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar9);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar6);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bb780 @ 009bb780 ////

void __cdecl FUN_009bb780(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf708f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar9 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar9[1];
      pcVar8 = (char *)*puVar9;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar8,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 2;
      local_29c = puVar9[9];
      local_2bc = uVar7;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"MAKE_UP_LIPS",0xc);
        local_27c = 1.68156e-44;
        *(byte *)(local_280 + 3) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bb928:
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bb92d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bb928;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009bb92d:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_lips",0xc);
          local_2dc = 0xc;
          local_2e0[0xc] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009bb9a8:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bb9ad;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009bb9a8;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009bb9ad:
          if (iVar5 != 0) goto LAB_009bb9b8;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bb9b8:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar6) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_lipstick_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              fVar17 = FUN_004012c0(0.013089971);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.67;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.67;
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar5 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar7 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar7 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar9 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar9,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar9 + 0x20;
                  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar8 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar8 - (int)(acStack_210 + 1);
                  if (0x13 < uVar7) {
                    local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar7);
                  local_2e0[uVar7] = 0;
                  local_4 = 3;
                  local_2dc = uVar7;
                  FUN_009d4370(&local_2e0,puVar9,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar9);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar6);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bbfa0 @ 009bbfa0 ////

void __cdecl FUN_009bbfa0(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  void *this;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf70cf;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  pbVar5 = Anim_LoadByName("idle_male.anm");
  FUN_00a019d0(*(void **)(*(int *)((int)param_1 + 8) + 0x78),pbVar5,0xffffffff);
  if (pbVar5 != (byte *)0x0) {
    FUN_00985de0(pbVar5);
  }
  FUN_00a03180(*(void **)(*(int *)((int)param_1 + 8) + 0x78),10);
  FUN_00a01210(*(int *)(*(int *)((int)param_1 + 8) + 0x78));
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar7 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar7) {
    local_2f4 = 0;
    do {
      puVar10 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar8 = puVar10[1];
      pcVar9 = (char *)*puVar10;
      if (0x13 < uVar8) {
        local_2b8 = uVar8 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar8);
      local_2c0[uVar8] = 0;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 2;
      local_29c = puVar10[9];
      local_2bc = uVar8;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"MAKE_UP_NAILS",0xd);
        local_27c = 1.82169e-44;
        *(byte *)((int)local_280 + 0xd) = 0;
        pbVar5 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar5;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bc188:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bc18d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bc188;
          pbVar5 = pbVar5 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_009bc18d:
        if (iVar6 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_nails",0xd);
          local_2dc = 0xd;
          local_2e0[0xd] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar5 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar5;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009bc208:
              iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bc20d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009bc208;
            pbVar5 = pbVar5 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_009bc20d:
          if (iVar6 != 0) goto LAB_009bc218;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bc218:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar7);
    if (local_2e8 != -1) {
      iVar7 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar7) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_nails_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              fVar17 = FUN_004012c0(0.026179941);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 6.0;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.0;
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar6 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(1.5707964);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar8 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar8 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar10 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar10,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar10 + 0x20;
                  for (iVar7 = 0x800; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar9 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  uVar8 = (int)pcVar9 - (int)(acStack_210 + 1);
                  if (0x13 < uVar8) {
                    local_2d8 = uVar8 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar8);
                  local_2e0[uVar8] = 0;
                  local_4 = 3;
                  local_2dc = uVar8;
                  FUN_009d4370(&local_2e0,puVar10,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar10);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar7);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bc800 @ 009bc800 ////

void __cdecl FUN_009bc800(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *this;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  float10 fVar18;
  uint local_2fc;
  uint local_2f8;
  int *local_2f4;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  uint local_290;
  float local_28c [4];
  uint local_27c;
  uint *puStack_278;
  float fStack_274;
  uint *local_270;
  float local_26c;
  float local_268;
  uint local_264 [5];
  float local_250 [3];
  char *pcStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  char acStack_238 [20];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf710f;
  local_c = ExceptionList;
  bVar16 = false;
  bVar4 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  puVar6 = FUN_009cfaa0("m_50s_swm_1.cos");
  FUN_009d2c50(param_1,puVar6,'\x01',-1.0,-1.0);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar6);
  }
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f4 = (int *)0x0;
  }
  else {
    local_2f4 = FUN_009d2620(this,(int)param_1);
  }
  local_2ec = local_2f4[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < local_2ec) {
    local_2fc = 0;
    do {
      puVar6 = (undefined4 *)(local_2f4[3] + local_2fc);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar10 = puVar6[1];
      pcVar9 = (char *)*puVar6;
      if (0x13 < uVar10) {
        local_2b8 = uVar10 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar10);
      local_2c0[uVar10] = 0;
      local_2a0 = local_2a0 ^ (puVar6[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar6[8] ^ local_2a0) & 2;
      local_29c = puVar6[9];
      local_2bc = uVar10;
      if (local_29c == 0) {
        local_270 = local_264;
        local_264[0] = local_264[0] & 0xffffff00;
        local_26c = 0.0;
        local_268 = 2.8026e-44;
        _strncpy((char *)local_270,"MAKE_UP_TATOO",0xd);
        local_26c = 1.82169e-44;
        *(byte *)((int)local_270 + 0xd) = 0;
        pbVar7 = local_2c0;
        puVar11 = local_270;
        do {
          bVar1 = *pbVar7;
          bVar16 = bVar1 < (byte)*puVar11;
          if (bVar1 != (byte)*puVar11) {
LAB_009bc9e7:
            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_009bc9ec;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar16 = bVar1 < *(byte *)((int)puVar11 + 1);
          if (bVar1 != *(byte *)((int)puVar11 + 1)) goto LAB_009bc9e7;
          pbVar7 = pbVar7 + 2;
          puVar11 = (uint *)((int)puVar11 + 2);
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_009bc9ec:
        if (iVar8 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_tatoo",0xd);
          bVar16 = true;
          bVar4 = true;
          local_2dc = 0xd;
          local_2e0[0xd] = 0;
          pbVar7 = local_2c0;
          pbVar12 = local_2e0;
          do {
            bVar1 = *pbVar7;
            bVar17 = bVar1 < *pbVar12;
            if (bVar1 != *pbVar12) {
LAB_009bca5b:
              iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_009bca60;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar17 = bVar1 < pbVar12[1];
            if (bVar1 != pbVar12[1]) goto LAB_009bca5b;
            pbVar7 = pbVar7 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_009bca60:
          if (iVar8 != 0) goto LAB_009bca79;
        }
        bVar16 = true;
        bVar17 = true;
      }
      else {
LAB_009bca79:
        bVar17 = false;
      }
      if ((bVar4) && (bVar4 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar16) && (bVar16 = false, 0x14 < (uint)local_268)) {
                    /* WARNING: Subroutine does not return */
        _free(local_270);
      }
      if (bVar17) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2fc = local_2fc + 0x28;
    } while ((int)local_2f8 < local_2ec);
    if (local_2e8 != -1) {
      iVar8 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar8) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_290,&local_2e4);
          local_2fc = local_290;
          if ((int)local_290 < local_2e4) {
            local_27c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_tatoo_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              fVar3 = 1.3;
              pcVar9 = (char *)((int)param_1 + 0x1a8);
              local_28c[0] = 9.21;
              local_28c[1] = 0.0;
              local_28c[2] = 1.75;
              local_250[0] = 0.0;
              local_250[1] = 0.0;
              local_250[2] = 1.7341;
              do {
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              if ((int)pcVar9 - ((int)param_1 + 0x1a9) == 0x11) {
                pcVar9 = (char *)((int)param_1 + 0x1b3);
                if (pcVar9 != (char *)0x0) {
                  local_2ec = 0;
                  cVar2 = *pcVar9;
                  while (('/' < cVar2 && (cVar2 < ':'))) {
                    pcVar9 = pcVar9 + 1;
                    local_2ec = cVar2 + -0x30 + local_2ec * 10;
                    cVar2 = *pcVar9;
                  }
                }
                if ((((DAT_010c9894 != 0) && (-1 < local_2ec)) && (local_2ec <= DAT_010c9880)) &&
                   (*(char *)(DAT_010c9894 + local_2ec * 8) != '\0')) {
                  local_28c[0] = -9.21;
                  fVar3 = 5.0;
                  local_28c[2] = 1.25;
                  local_250[2] = 1.25;
                }
              }
              fVar18 = FUN_004012c0(fVar3 * 0.017453292);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar18);
              FUN_009a2830(&DAT_0105c2e8,local_28c,local_250,0.0);
              iVar14 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_224 = 0;
                local_220 = 0;
                local_21c = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_224);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar5 = DAT_0105ca60;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
              puStack_278 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_26c = DAT_0105c404;
              local_28c[3] = DAT_0105c404 + (float)puStack_278;
              fStack_274 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_264[0] = local_27c;
              local_270 = puStack_278;
              local_268 = local_28c[3];
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar5;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_244 = acStack_238;
                acStack_238[0] = '\0';
                uStack_240 = 0;
                uStack_23c = 0x40;
                pcStack_244 = _malloc(0x40);
                _strncpy(pcStack_244,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_240 = 0x26;
                pcStack_244[0x26] = '\0';
                local_4 = 1;
                uVar10 = FUN_009d3720(&pcStack_244);
                local_4 = 0xffffffff;
                if (0x14 < uStack_23c) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_244);
                }
                if (uVar10 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar6 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar6,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar13 = puStack_294;
                  puVar15 = puVar6 + 0x20;
                  for (iVar8 = 0x800; iVar8 != 0; iVar8 = iVar8 + -1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar9 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  uVar10 = (int)pcVar9 - (int)(acStack_210 + 1);
                  if (0x13 < uVar10) {
                    local_2d8 = uVar10 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar10);
                  local_2e0[uVar10] = 0;
                  local_4 = 3;
                  local_2dc = uVar10;
                  FUN_009d4370(&local_2e0,puVar6,0x2080);
                  local_4 = 0xffffffff;
                  if (0x14 < local_2d8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2e0);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(puVar6);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2fc = local_2fc + 1;
            } while ((int)local_2fc < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar8);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
      puVar6 = FUN_009cfaa0("m_20s_1.cos");
      FUN_009d2c50(param_1,puVar6,'\x01',-1.0,-1.0);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_009cfb00(puVar6);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bd120 @ 009bd120 ////

void __cdecl FUN_009bd120(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *this;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf714f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  puVar5 = FUN_009cfaa0("m_50s_swm_1.cos");
  FUN_009d2c50(param_1,puVar5,'\x01',-1.0,-1.0);
  if (puVar5 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar5);
  }
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar7 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar7) {
    local_2f4 = 0;
    do {
      puVar5 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar8 = puVar5[1];
      pcVar9 = (char *)*puVar5;
      if (0x13 < uVar8) {
        local_2b8 = uVar8 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar8);
      local_2c0[uVar8] = 0;
      local_2a0 = local_2a0 ^ (puVar5[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar5[8] ^ local_2a0) & 2;
      local_29c = puVar5[9];
      local_2bc = uVar8;
      if (local_29c == 1) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"MAKE_UP_MASK",0xc);
        local_27c = 1.68156e-44;
        *(byte *)(local_280 + 3) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bd2f8:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bd2fd;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bd2f8;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_009bd2fd:
        if (iVar6 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_mask",0xc);
          local_2dc = 0xc;
          local_2e0[0xc] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009bd378:
              iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bd37d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009bd378;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_009bd37d:
          if (iVar6 != 0) goto LAB_009bd388;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bd388:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar7);
    if (local_2e8 != -1) {
      iVar7 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar7) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_bodypaint_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.45;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.451;
              fVar17 = FUN_004012c0(0.09599311);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar6 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar8 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar8 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar5 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar5,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar5 + 0x20;
                  for (iVar7 = 0x800; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar9 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  uVar8 = (int)pcVar9 - (int)(acStack_210 + 1);
                  if (0x13 < uVar8) {
                    local_2d8 = uVar8 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar8);
                  local_2e0[uVar8] = 0;
                  local_4 = 3;
                  local_2dc = uVar8;
                  FUN_009d4370(&local_2e0,puVar5,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar5);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar7);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
      puVar5 = FUN_009cfaa0("m_20s_1.cos");
      FUN_009d2c50(param_1,puVar5,'\x01',-1.0,-1.0);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_009cfb00(puVar5);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bd9a0 @ 009bd9a0 ////

void __cdecl FUN_009bd9a0(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *this;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf718f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  puVar5 = FUN_009cfaa0("f_40s_3.cos");
  FUN_009d2c50(param_1,puVar5,'\x01',-1.0,-1.0);
  if (puVar5 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar5);
  }
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar7 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar7) {
    local_2f4 = 0;
    do {
      puVar5 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar8 = puVar5[1];
      pcVar9 = (char *)*puVar5;
      if (0x13 < uVar8) {
        local_2b8 = uVar8 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar9,uVar8);
      local_2c0[uVar8] = 0;
      local_2a0 = local_2a0 ^ (puVar5[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar5[8] ^ local_2a0) & 2;
      local_29c = puVar5[9];
      local_2bc = uVar8;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"MAKE_UP_EYES_SHAPE",0x12);
        local_27c = 2.52234e-44;
        *(byte *)((int)local_280 + 0x12) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bdb78:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bdb7d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bdb78;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_009bdb7d:
        if (iVar6 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"make_up_eyes_shape",0x12);
          local_2dc = 0x12;
          local_2e0[0x12] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009bdbf8:
              iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bdbfd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009bdbf8;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_009bdbfd:
          if (iVar6 != 0) goto LAB_009bdc08;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bdc08:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar7);
    if (local_2e8 != -1) {
      iVar7 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar7) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s%i%s%i","cos_makeupshape_",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.75;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.7341;
              fVar17 = FUN_004012c0(0.019198623);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar6 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar8 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar8 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar5 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar5,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar5 + 0x20;
                  for (iVar7 = 0x800; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar9 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar2 != '\0');
                  uVar8 = (int)pcVar9 - (int)(acStack_210 + 1);
                  if (0x13 < uVar8) {
                    local_2d8 = uVar8 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar8);
                  local_2e0[uVar8] = 0;
                  local_4 = 3;
                  local_2dc = uVar8;
                  FUN_009d4370(&local_2e0,puVar5,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar5);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar7);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
      puVar5 = FUN_009cfaa0("f_40s_3.cos");
      FUN_009d2c50(param_1,puVar5,'\x01',-1.0,-1.0);
      if (puVar5 != (undefined4 *)0x0) {
        FUN_009cfb00(puVar5);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009be220 @ 009be220 ////

void __cdecl FUN_009be220(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *this;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  uint local_31c;
  uint local_318;
  int local_30c;
  int local_308;
  int local_304;
  byte *local_300;
  uint local_2fc;
  uint local_2f8;
  byte local_2f4 [20];
  byte *local_2e0;
  undefined4 local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  undefined4 local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  undefined4 uStack_2a0;
  undefined4 *puStack_29c;
  uint *local_298;
  float local_294;
  float local_290;
  uint local_28c [5];
  byte *local_278;
  uint local_274;
  uint local_270;
  byte local_26c [20];
  uint local_258;
  int local_254;
  uint *puStack_250;
  float fStack_24c;
  uint local_248;
  float fStack_244;
  uint local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230;
  undefined4 local_22c;
  undefined4 local_228;
  float local_224;
  undefined4 local_220;
  undefined4 local_21c;
  int local_218;
  uint local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf71cf;
  local_c = ExceptionList;
  bVar19 = false;
  bVar4 = false;
  bVar17 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  puVar6 = FUN_009cfaa0("f_40s_3.cos");
  FUN_009d2c50(param_1,puVar6,'\x01',-1.0,-1.0);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar6);
  }
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_009d2620(this,(int)param_1);
  }
  iVar15 = piVar7[2];
  local_4 = 0xffffffff;
  local_30c = -1;
  local_304 = 0;
  local_31c = 0;
  if (0 < iVar15) {
    local_318 = 0;
    do {
      puVar6 = (undefined4 *)(piVar7[3] + local_318);
      local_278 = local_26c;
      local_26c[0] = 0;
      local_274 = 0;
      local_270 = 0x14;
      uVar9 = puVar6[1];
      pcVar10 = (char *)*puVar6;
      if (0x13 < uVar9) {
        local_270 = uVar9 + 0x20 & 0xffffffe0;
        local_278 = _malloc(local_270);
      }
      _strncpy((char *)local_278,pcVar10,uVar9);
      local_278[uVar9] = 0;
      local_258 = local_258 ^ (puVar6[8] ^ local_258) & 1;
      local_258 = local_258 ^ (puVar6[8] ^ local_258) & 2;
      local_254 = puVar6[9];
      local_274 = uVar9;
      if (local_254 == 0) {
        local_298 = local_28c;
        local_28c[0] = local_28c[0] & 0xffffff00;
        local_294 = 0.0;
        local_290 = 2.8026e-44;
        _strncpy((char *)local_298,"MAKE_UP_EYES_COLOR",0x12);
        local_294 = 2.52234e-44;
        *(byte *)((int)local_298 + 0x12) = 0;
        pbVar11 = local_278;
        puVar13 = local_298;
        do {
          bVar1 = *pbVar11;
          bVar17 = bVar1 < (byte)*puVar13;
          if (bVar1 != (byte)*puVar13) {
LAB_009be428:
            iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_009be42d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar17 = bVar1 < *(byte *)((int)puVar13 + 1);
          if (bVar1 != *(byte *)((int)puVar13 + 1)) goto LAB_009be428;
          pbVar11 = pbVar11 + 2;
          puVar13 = (uint *)((int)puVar13 + 2);
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_009be42d:
        if (iVar8 != 0) {
          local_300 = local_2f4;
          local_2f4[0] = 0;
          local_2fc = 0;
          local_2f8 = 0x14;
          _strncpy((char *)local_300,"make_up_eyes_color",0x12);
          local_2fc = 0x12;
          local_300[0x12] = 0;
          bVar17 = true;
          bVar3 = true;
          pbVar11 = local_278;
          pbVar14 = local_300;
          do {
            bVar1 = *pbVar11;
            bVar18 = bVar1 < *pbVar14;
            if (bVar1 != *pbVar14) {
LAB_009be4a8:
              iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_009be4ad;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar18 = bVar1 < pbVar14[1];
            if (bVar1 != pbVar14[1]) goto LAB_009be4a8;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_009be4ad:
          if (iVar8 != 0) goto LAB_009be4b8;
        }
        bVar17 = true;
        bVar18 = true;
      }
      else {
LAB_009be4b8:
        bVar18 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2f8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_300);
      }
      if ((bVar17) && (bVar17 = false, 0x14 < (uint)local_290)) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      if (bVar18) {
        local_30c = local_31c;
      }
      if (local_254 == 0) {
        local_2e0 = local_2d4;
        local_2d4[0] = 0;
        local_2dc = 0;
        local_2d8 = 0x14;
        _strncpy((char *)local_2e0,"MAKE_UP_EYES_SHAPE",0x12);
        local_2dc = 0x12;
        local_2e0[0x12] = 0;
        pbVar11 = local_278;
        pbVar14 = local_2e0;
        do {
          bVar1 = *pbVar11;
          bVar19 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_009be5a8:
            iVar8 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_009be5ad;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar19 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_009be5a8;
          pbVar11 = pbVar11 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_009be5ad:
        if (iVar8 != 0) {
          local_2c0 = local_2b4;
          local_2b4[0] = 0;
          local_2bc = 0;
          local_2b8 = 0x14;
          _strncpy((char *)local_2c0,"make_up_eyes_shape",0x12);
          local_2bc = 0x12;
          local_2c0[0x12] = 0;
          bVar19 = true;
          bVar4 = true;
          pbVar11 = local_278;
          pbVar14 = local_2c0;
          do {
            bVar1 = *pbVar11;
            bVar18 = bVar1 < *pbVar14;
            if (bVar1 != *pbVar14) {
LAB_009be63e:
              iVar8 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_009be643;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar18 = bVar1 < pbVar14[1];
            if (bVar1 != pbVar14[1]) goto LAB_009be63e;
            pbVar11 = pbVar11 + 2;
            pbVar14 = pbVar14 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_009be643:
          if (iVar8 != 0) goto LAB_009be64e;
        }
        bVar19 = true;
        bVar18 = true;
      }
      else {
LAB_009be64e:
        bVar18 = false;
      }
      if ((bVar4) && (bVar4 = false, 0x14 < local_2b8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      if ((bVar19) && (bVar19 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if (bVar18) {
        local_304 = local_31c;
      }
      if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
        _free(local_278);
      }
      local_31c = local_31c + 1;
      local_318 = local_318 + 0x28;
    } while ((int)local_31c < iVar15);
  }
  iVar15 = local_304;
  FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_304,0xc);
  if (local_30c != -1) {
    iVar8 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_30c);
    FUN_009ce080(*(void **)((int)param_1 + 0xc),local_30c,&local_214,&local_218);
    local_308 = 0;
    local_31c = 0;
    if (0 < iVar8) {
      do {
        FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_30c,local_31c);
        FUN_009ce080(*(void **)((int)param_1 + 0xc),local_30c,&local_248,&local_308);
        local_318 = local_248;
        if ((int)local_248 < local_308) {
          local_240 = 0;
          do {
            _sprintf(local_110,"%s%i%s%i","cos_makeupcolor_",local_31c);
            FUN_009ac040(local_110);
            FUN_009d10d0();
            FUN_009a6070(&DAT_0105c2e8,6.0);
            DAT_0105c3e4 = 0x42c80000;
            FUN_009a5390(0x105c2e8);
            local_224 = 9.21;
            local_220 = 0;
            local_21c = 0x3fe00000;
            local_230 = 0.0;
            local_22c = 0;
            local_228 = 0x3fddf6fd;
            fVar20 = FUN_004012c0(0.019198623);
            FUN_009a1950(&DAT_0105c2e8,(float)fVar20);
            FUN_009a2830(&DAT_0105c2e8,&local_224,&local_230,0.0);
            iVar15 = 2;
            do {
              FUN_009a56b0(0xffa7b8d6,'\x01');
              FUN_009a1410();
              FUN_004012c0(0.0);
              local_23c = 0;
              local_238 = 0;
              local_234 = 0;
              (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
              (**(code **)(**(int **)((int)param_1 + 8) + 8))();
              FUN_009a1460();
              uVar5 = DAT_0105ca60;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            local_298 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
            local_294 = DAT_0105c404;
            local_290 = DAT_0105c404 + (float)local_298;
            fStack_24c = DAT_0105c404;
            DAT_0105ca60 = DAT_0105ca68;
            local_28c[0] = local_240;
            puStack_250 = local_298;
            fStack_244 = local_290;
            FUN_009a56e0((int)param_2);
            uStack_2a0 = 0;
            puStack_29c = (undefined4 *)0x0;
            DAT_0105ca60 = uVar5;
            MediaPlayer_LockVideoBuffer(param_2,&uStack_2a0);
            if (puStack_29c != (undefined4 *)0x0) {
              local_2e0 = local_2d4;
              local_2d4[0] = 0;
              local_2dc = 0;
              local_2d8 = 0x40;
              local_2e0 = _malloc(0x40);
              _strncpy((char *)local_2e0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
              local_2dc = 0x26;
              local_2e0[0x26] = 0;
              local_4 = 1;
              uVar9 = FUN_009d3720(&local_2e0);
              local_4 = 0xffffffff;
              if (0x14 < local_2d8) {
                    /* WARNING: Subroutine does not return */
                _free(local_2e0);
              }
              if (uVar9 == 0x2080) {
                _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                puVar6 = operator_new(0x2080);
                local_2c0 = local_2b4;
                local_2b4[0] = 0;
                local_2bc = 0;
                local_2b8 = 0x40;
                local_2c0 = _malloc(0x40);
                _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                local_2bc = 0x26;
                local_2c0[0x26] = 0;
                local_4 = 2;
                FUN_009d3ca0(&local_2c0,puVar6,0x2080,(undefined1 *)0x0);
                if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c0);
                }
                puVar12 = puStack_29c;
                puVar16 = puVar6 + 0x20;
                for (iVar15 = 0x800; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *puVar16 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar16 = puVar16 + 1;
                }
                local_300 = local_2f4;
                pcVar10 = acStack_210;
                local_2f4[0] = 0;
                local_2fc = 0;
                local_2f8 = 0x14;
                do {
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                uVar9 = (int)pcVar10 - (int)(acStack_210 + 1);
                if (0x13 < uVar9) {
                  local_2f8 = uVar9 + 0x20 & 0xffffffe0;
                  local_300 = _malloc(local_2f8);
                }
                _strncpy((char *)local_300,acStack_210,uVar9);
                local_300[uVar9] = 0;
                local_4 = 3;
                local_2fc = uVar9;
                FUN_009d4370(&local_300,puVar6,0x2080);
                local_4 = 0xffffffff;
                if (0x14 < local_2f8) {
                    /* WARNING: Subroutine does not return */
                  _free(local_300);
                }
                    /* WARNING: Subroutine does not return */
                _free(puVar6);
              }
            }
            MediaPlayer_UnlockVideoBuffer((int)param_2);
            FUN_009d12f0(param_1,local_30c,(void *)0x1);
            local_318 = local_318 + 1;
          } while ((int)local_318 < local_308);
        }
        local_31c = local_31c + 1;
        iVar15 = local_304;
      } while ((int)local_31c < iVar8);
    }
    uVar9 = FUN_009d1780(param_1,iVar15);
    while (1 < (int)uVar9) {
      FUN_009d12f0(param_1,iVar15,(void *)0x1);
      uVar9 = FUN_009d1780(param_1,iVar15);
    }
    FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    puVar6 = FUN_009cfaa0("f_40s_3.cos");
    FUN_009d2c50(param_1,puVar6,'\x01',-1.0,-1.0);
    if (puVar6 != (undefined4 *)0x0) {
      FUN_009cfb00(puVar6);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bec90 @ 009bec90 ////

void __cdecl FUN_009bec90(void *param_1,void *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf720f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_009d60a0(param_1,"hair_20s_m9.msh");
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar9 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar9[1];
      pcVar8 = (char *)*puVar9;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar8,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar9[8] ^ local_2a0) & 2;
      local_29c = puVar9[9];
      local_2bc = uVar7;
      if (local_29c == 1) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"COS_GLASSES",0xb);
        local_27c = 1.54143e-44;
        *(byte *)((int)local_280 + 0xb) = 0;
        pbVar10 = local_2c0;
        puVar12 = local_280;
        do {
          bVar1 = *pbVar10;
          bVar15 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_009bee38:
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bee3d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar15 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_009bee38;
          pbVar10 = pbVar10 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009bee3d:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"cos_glasses",0xb);
          local_2dc = 0xb;
          local_2e0[0xb] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar10 = local_2c0;
          pbVar13 = local_2e0;
          do {
            bVar1 = *pbVar10;
            bVar16 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_009beeb8:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009beebd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar16 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_009beeb8;
            pbVar10 = pbVar10 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009beebd:
          if (iVar5 != 0) goto LAB_009beec8;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009beec8:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar6) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"%s_%s_%i%s%i",param_3,"glasses",local_2f8);
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              local_230[3] = 9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.75;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.7341;
              fVar17 = FUN_004012c0(0.019198623);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar5 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar7 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar7 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar9 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar9,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar11 = puStack_294;
                  puVar14 = puVar9 + 0x20;
                  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar11;
                    puVar11 = puVar11 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar8 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar8 - (int)(acStack_210 + 1);
                  if (0x13 < uVar7) {
                    local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar7);
                  local_2e0[uVar7] = 0;
                  local_4 = 3;
                  local_2dc = uVar7;
                  FUN_009d4370(&local_2e0,puVar9,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar9);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar6);
      }
      FUN_009d60a0(param_1,(char *)((int)param_1 + 0x250));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bf4b0 @ 009bf4b0 ////

void __cdecl FUN_009bf4b0(void *param_1,void *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  void *this;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  uint local_2f8;
  uint local_2f4;
  int *local_2f0;
  int local_2e8;
  int local_2e4;
  byte *local_2e0;
  uint local_2dc;
  uint local_2d8;
  byte local_2d4 [20];
  byte *local_2c0;
  uint local_2bc;
  uint local_2b8;
  byte local_2b4 [20];
  uint local_2a0;
  int local_29c;
  undefined4 uStack_298;
  undefined4 *puStack_294;
  float fStack_290;
  uint local_28c;
  uint *puStack_288;
  float fStack_284;
  uint *local_280;
  float local_27c;
  float local_278;
  uint local_274 [5];
  uint local_260;
  char *pcStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  char acStack_250 [20];
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  float local_230 [6];
  uint local_218;
  int local_214;
  char acStack_210 [256];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf724f;
  local_c = ExceptionList;
  bVar15 = false;
  bVar3 = false;
  ExceptionList = &local_c;
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    local_2f0 = (int *)0x0;
  }
  else {
    local_2f0 = FUN_009d2620(this,(int)param_1);
  }
  iVar6 = local_2f0[2];
  local_4 = 0xffffffff;
  local_2e8 = -1;
  local_2f8 = 0;
  if (0 < iVar6) {
    local_2f4 = 0;
    do {
      puVar10 = (undefined4 *)(local_2f0[3] + local_2f4);
      local_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2bc = 0;
      local_2b8 = 0x14;
      uVar7 = puVar10[1];
      pcVar8 = (char *)*puVar10;
      if (0x13 < uVar7) {
        local_2b8 = uVar7 + 0x20 & 0xffffffe0;
        local_2c0 = _malloc(local_2b8);
      }
      _strncpy((char *)local_2c0,pcVar8,uVar7);
      local_2c0[uVar7] = 0;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 1;
      local_2a0 = local_2a0 ^ (puVar10[8] ^ local_2a0) & 2;
      local_29c = puVar10[9];
      local_2bc = uVar7;
      if (local_29c == 0) {
        local_280 = local_274;
        local_274[0] = local_274[0] & 0xffffff00;
        local_27c = 0.0;
        local_278 = 2.8026e-44;
        _strncpy((char *)local_280,"HAIR_COLOR",10);
        local_27c = 1.4013e-44;
        *(byte *)((int)local_280 + 10) = 0;
        puVar9 = local_280;
        pbVar11 = local_2c0;
        do {
          bVar1 = *pbVar11;
          bVar15 = bVar1 < (byte)*puVar9;
          if (bVar1 != (byte)*puVar9) {
LAB_009bf649:
            iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_009bf64e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar15 = bVar1 < *(byte *)((int)puVar9 + 1);
          if (bVar1 != *(byte *)((int)puVar9 + 1)) goto LAB_009bf649;
          pbVar11 = pbVar11 + 2;
          puVar9 = (uint *)((int)puVar9 + 2);
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_009bf64e:
        if (iVar5 != 0) {
          local_2e0 = local_2d4;
          local_2d4[0] = 0;
          local_2dc = 0;
          local_2d8 = 0x14;
          _strncpy((char *)local_2e0,"hair_color",10);
          local_2dc = 10;
          local_2e0[10] = 0;
          bVar15 = true;
          bVar3 = true;
          pbVar11 = local_2e0;
          pbVar12 = local_2c0;
          do {
            bVar1 = *pbVar12;
            bVar16 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_009bf6c9:
              iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
              goto LAB_009bf6ce;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar12[1];
            bVar16 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_009bf6c9;
            pbVar12 = pbVar12 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_009bf6ce:
          if (iVar5 != 0) goto LAB_009bf6d9;
        }
        bVar15 = true;
        bVar16 = true;
      }
      else {
LAB_009bf6d9:
        bVar16 = false;
      }
      if ((bVar3) && (bVar3 = false, 0x14 < local_2d8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e0);
      }
      if ((bVar15) && (bVar15 = false, 0x14 < (uint)local_278)) {
                    /* WARNING: Subroutine does not return */
        _free(local_280);
      }
      if (bVar16) {
        local_2e8 = local_2f8;
      }
      if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c0);
      }
      local_2f8 = local_2f8 + 1;
      local_2f4 = local_2f4 + 0x28;
    } while ((int)local_2f8 < iVar6);
    if (local_2e8 != -1) {
      iVar6 = FUN_009cdc00(*(void **)((int)param_1 + 0xc),local_2e8);
      FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_218,&local_214);
      local_2e4 = 0;
      local_2f8 = 0;
      if (0 < iVar6) {
        do {
          FUN_009cf8f0(*(void **)((int)param_1 + 0xc),local_2e8,local_2f8);
          FUN_009ce080(*(void **)((int)param_1 + 0xc),local_2e8,&local_260,&local_2e4);
          local_2f4 = local_260;
          if ((int)local_260 < local_2e4) {
            local_28c = 0;
            do {
              _sprintf(local_110,"hair_color_%i_%i");
              FUN_009ac040(local_110);
              FUN_009d10d0();
              FUN_009a6070(&DAT_0105c2e8,6.0);
              DAT_0105c3e4 = 0x42c80000;
              FUN_009a5390(0x105c2e8);
              local_230[3] = -9.21;
              local_230[4] = 0.0;
              local_230[5] = 1.75;
              local_230[0] = 0.0;
              local_230[1] = 0.0;
              local_230[2] = 1.7341;
              fVar17 = FUN_004012c0(0.02617994);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar17);
              FUN_009a2830(&DAT_0105c2e8,local_230 + 3,local_230,0.0);
              iVar5 = 2;
              do {
                FUN_009a56b0(0xffa7b8d6,'\x01');
                FUN_009a1410();
                FUN_004012c0(0.0);
                local_23c = 0;
                local_238 = 0;
                local_234 = 0;
                (**(code **)(**(int **)((int)param_1 + 8) + 0x20))(&local_23c);
                (**(code **)(**(int **)((int)param_1 + 8) + 8))();
                FUN_009a1460();
                uVar4 = DAT_0105ca60;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              puStack_288 = (uint *)((DAT_0105c400 - DAT_0105c404) * 0.5);
              local_27c = DAT_0105c404;
              fStack_290 = DAT_0105c404 + (float)puStack_288;
              fStack_284 = DAT_0105c404;
              DAT_0105ca60 = DAT_0105ca68;
              local_274[0] = local_28c;
              local_280 = puStack_288;
              local_278 = fStack_290;
              FUN_009a56e0((int)param_2);
              uStack_298 = 0;
              puStack_294 = (undefined4 *)0x0;
              DAT_0105ca60 = uVar4;
              MediaPlayer_LockVideoBuffer(param_2,&uStack_298);
              if (puStack_294 != (undefined4 *)0x0) {
                pcStack_25c = acStack_250;
                acStack_250[0] = '\0';
                uStack_258 = 0;
                uStack_254 = 0x40;
                pcStack_25c = _malloc(0x40);
                _strncpy(pcStack_25c,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                uStack_258 = 0x26;
                pcStack_25c[0x26] = '\0';
                local_4 = 1;
                uVar7 = FUN_009d3720(&pcStack_25c);
                local_4 = 0xffffffff;
                if (0x14 < uStack_254) {
                    /* WARNING: Subroutine does not return */
                  _free(pcStack_25c);
                }
                if (uVar7 == 0x2080) {
                  _sprintf(acStack_210,"Data\\Textures\\Thumbs\\CostumeOptions\\%s.dds");
                  puVar10 = operator_new(0x2080);
                  local_2c0 = local_2b4;
                  local_2b4[0] = 0;
                  local_2bc = 0;
                  local_2b8 = 0x40;
                  local_2c0 = _malloc(0x40);
                  _strncpy((char *)local_2c0,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
                  local_2bc = 0x26;
                  local_2c0[0x26] = 0;
                  local_4 = 2;
                  FUN_009d3ca0(&local_2c0,puVar10,0x2080,(undefined1 *)0x0);
                  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c0);
                  }
                  puVar13 = puStack_294;
                  puVar14 = puVar10 + 0x20;
                  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *puVar14 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar14 = puVar14 + 1;
                  }
                  local_2e0 = local_2d4;
                  pcVar8 = acStack_210;
                  local_2d4[0] = 0;
                  local_2dc = 0;
                  local_2d8 = 0x14;
                  do {
                    cVar2 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar2 != '\0');
                  uVar7 = (int)pcVar8 - (int)(acStack_210 + 1);
                  if (0x13 < uVar7) {
                    local_2d8 = uVar7 + 0x20 & 0xffffffe0;
                    local_2e0 = _malloc(local_2d8);
                  }
                  _strncpy((char *)local_2e0,acStack_210,uVar7);
                  local_2e0[uVar7] = 0;
                  local_4 = 3;
                  local_2dc = uVar7;
                  FUN_009d4370(&local_2e0,puVar10,0x2080);
                  local_4 = 0xffffffff;
                  if (local_2d8 < 0x15) {
                    /* WARNING: Subroutine does not return */
                    _free(puVar10);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(local_2e0);
                }
              }
              MediaPlayer_UnlockVideoBuffer((int)param_2);
              FUN_009d12f0(param_1,local_2e8,(void *)0x1);
              local_2f4 = local_2f4 + 1;
            } while ((int)local_2f4 < local_2e4);
          }
          local_2f8 = local_2f8 + 1;
        } while ((int)local_2f8 < iVar6);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009bfc90 @ 009bfc90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_009bfc90(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 *puVar3;
  WINBOOL WVar4;
  DWORD local_124;
  void *apvStack_120 [2];
  uint uStack_118;
  char local_100 [256];
  
  if ((DAT_0105cde4 & 1) == 0) {
    DAT_0105cde4 = DAT_0105cde4 | 1;
    DAT_0105cdc4 = &DAT_0105cdd0;
    _DAT_0105cdd0 = 0;
    DAT_0105cdc8 = 0;
    DAT_0105cdcc = 10;
    _atexit(FUN_00d148d0);
  }
  if (DAT_0105cdc0 == '\0') {
    hModule = GetModuleHandleA("Secur32.DLL");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetUserNameExA");
      if (pFVar1 != (FARPROC)0x0) {
        local_124 = 0x100;
        iVar2 = (*pFVar1)(3,local_100,&local_124);
        if ((char)iVar2 != '\0') {
          puVar3 = FUN_009ad240(apvStack_120,local_100,'\0');
          FUN_004036d0(&DAT_0105cdc4,(wchar_t *)*puVar3,puVar3[1]);
          if (10 < uStack_118) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_120[0]);
          }
        }
      }
    }
    if (DAT_0105cdc8 == 0) {
      local_124 = 0x100;
      WVar4 = GetUserNameA(local_100,&local_124);
      if (WVar4 != 0) {
        puVar3 = FUN_009ad240(apvStack_120,local_100,'\0');
        FUN_004036d0(&DAT_0105cdc4,(wchar_t *)*puVar3,puVar3[1]);
        if (10 < uStack_118) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_120[0]);
        }
      }
    }
    DAT_0105cdc0 = '\x01';
  }
  return &DAT_0105cdc4;
}


//// FUNCTION FUN_009bfdd0 @ 009bfdd0 ////

undefined4 FUN_009bfdd0(void)

{
  size_t sVar1;
  undefined4 *puVar2;
  FILE *_File;
  DWORD DVar3;
  wchar_t *local_6c [2];
  uint local_64;
  char *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b9280();
  local_4 = 0;
  sVar1 = FUN_00ace02d(L"\\Lionhead Studios");
  FUN_0040cae0(local_6c,L"\\Lionhead Studios",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_6c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\The Movies");
  FUN_0040cae0(local_6c,L"\\The Movies",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_6c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\osdetect.txt");
  FUN_0040cae0(local_6c,L"\\osdetect.txt",sVar1);
  FUN_009ad040(local_4c,local_6c[0]);
  _File = _fopen(local_4c[0],"wt");
  if (_File == (FILE *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_44 = 0;
  }
  else {
    DVar3 = GetVersion();
    if (DVar3 < 0x80000000) {
      FID_conflict__fwprintf(_File,"Windows XP/NT/2k detected");
      _fclose(_File);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (local_64 < 0xb) {
        ExceptionList = local_c;
        return local_44 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    FID_conflict__fwprintf(_File,"Windows 9x detected");
    _fclose(_File);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  if (local_64 < 0xb) {
    ExceptionList = local_c;
    return CONCAT31((int3)(local_44 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c[0]);
}


//// FUNCTION FUN_009bffb0 @ 009bffb0 ////

void __fastcall FUN_009bffb0(int param_1)

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


//// FUNCTION FUN_009bffe0 @ 009bffe0 ////

void __fastcall FUN_009bffe0(int param_1)

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


//// FUNCTION FUN_009c0090 @ 009c0090 ////

void __cdecl FUN_009c0090(int *param_1)

{
  wchar_t *_Source;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  iVar1 = FUN_00ace02d(L" \t\n\r");
  uVar2 = FUN_00442df0(param_1,L" \t\n\r",0,iVar1);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return;
    }
    puVar3 = FUN_004211c0(param_1,local_20,uVar2 + 1,0xffffffff);
    puVar4 = FUN_004211c0(param_1,local_40,0,uVar2);
    puVar3 = FUN_00443250(local_60,puVar4,puVar3);
    uVar2 = puVar3[1];
    _Source = (wchar_t *)*puVar3;
    if ((uint)param_1[2] <= uVar2) {
      if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      uVar5 = uVar2 + 0x20 & 0xffffffe0;
      param_1[2] = uVar5;
      pvVar6 = _malloc(uVar5 * 2);
      *param_1 = (int)pvVar6;
    }
    _wcsncpy((wchar_t *)*param_1,_Source,uVar2);
    param_1[1] = uVar2;
    *(undefined2 *)(*param_1 + uVar2 * 2) = 0;
    if (10 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (10 < local_18) break;
    iVar1 = FUN_00ace02d(L" \t\n\r");
    uVar2 = FUN_00442df0(param_1,L" \t\n\r",0,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_009c02d0 @ 009c02d0 ////

void FUN_009c02d0(void)

{
  char cVar1;
  undefined1 uVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *_Memory;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_4d8;
  undefined4 *local_4d4;
  void *local_4d0;
  char *local_4cc;
  uint local_4c8;
  uint local_4c4;
  char local_4c0 [20];
  char *local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  char local_4a0 [20];
  char *local_48c;
  undefined4 local_488;
  uint local_484;
  char local_480 [20];
  undefined4 local_46c [18];
  int local_424;
  int local_420;
  char local_418 [260];
  char local_314 [256];
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf72ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a60930();
  FUN_00a62bd0((byte *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Backdrops\\",'\x01');
  FUN_009c89a0(local_46c);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_009ca9d0(local_46c,"*.dds","Data\\Textures\\BackDrops\\",(undefined1 *)0x1);
  this = FUN_0099bb50("thumb_backdrops",0x31545844,0x80,0x40,'\0');
  uVar8 = 0;
  local_4d0 = this;
  do {
    if ((local_424 == 0) || ((uint)(local_420 - local_424 >> 2) <= uVar8)) {
      if (this != (void *)0x0) {
        FUN_0099b400(this);
      }
      uVar8 = 0x40;
      pcVar7 = _malloc(0x40);
      _strncpy(pcVar7,"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Backdrops\\",0x33);
      pcVar7[0x33] = '\0';
      FUN_00a624d0(pcVar7,0x33,uVar8);
      FUN_00a5f900();
      FUN_00a62130();
      local_4 = 0xffffffff;
      FUN_009c8560(local_46c);
      ExceptionList = local_c;
      return;
    }
    __splitpath(*(char **)(local_424 + uVar8 * 4),(char *)0x0,(char *)0x0,local_110,local_214);
    _sprintf(local_418,"%s%s");
    FUN_009ac040(local_418);
    iVar3 = _strncmp(local_418,"bd_",3);
    if (iVar3 == 0) {
      FUN_009d62a0('\x01');
      DAT_0105beb4 = 1;
      uVar4 = FUN_009a6fb0('\x01');
      if ((char)uVar4 != '\0') {
        FUN_009a1410();
        pvVar5 = FUN_0099bb50(local_418,0,0,0,'\0');
        FUN_009a57d0((int)pvVar5,0,0xffffffff,0,(undefined4 *)0x0);
        if (pvVar5 != (void *)0x0) {
          FUN_0099b400(pvVar5);
        }
        FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
        FUN_009a1460();
        FUN_009a56e0((int)this);
        FUN_009a6fb0('\0');
      }
      FUN_009d62a0('\0');
      DAT_0105beb4 = 0;
      local_4d8 = 0;
      local_4d4 = (undefined4 *)0x0;
      MediaPlayer_LockVideoBuffer(this,&local_4d8);
      uVar2 = (undefined1)local_4;
      if (local_4d4 != (undefined4 *)0x0) {
        local_4ac = local_4a0;
        local_4a0[0] = '\0';
        local_4a8 = 0;
        local_4a4 = 0x40;
        local_4ac = _malloc(0x40);
        _strncpy(local_4ac,"Data\\Textures\\BluePrint\\bd_thumb.dds",0x24);
        local_4a8 = 0x24;
        local_4ac[0x24] = '\0';
        local_4._0_1_ = 1;
        uVar6 = FUN_009d3720(&local_4ac);
        local_4._0_1_ = 0;
        uVar2 = (undefined1)local_4;
        local_4._0_1_ = 0;
        if (0x14 < local_4a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_4ac);
        }
        if (uVar6 == 0x1080) {
          _sprintf(local_314,"Data\\Textures\\Thumbs\\BackDrops\\th_%s");
          _Memory = operator_new(0x1080);
          local_48c = local_480;
          local_480[0] = '\0';
          local_488 = 0;
          local_484 = 0x40;
          local_48c = _malloc(0x40);
          _strncpy(local_48c,"Data\\Textures\\BluePrint\\bd_thumb.dds",0x24);
          local_488 = 0x24;
          local_48c[0x24] = '\0';
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_009d3ca0(&local_48c,_Memory,0x1080,(undefined1 *)0x0);
          if (0x14 < local_484) {
                    /* WARNING: Subroutine does not return */
            _free(local_48c);
          }
          puVar9 = local_4d4;
          puVar10 = _Memory + 0x20;
          for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          local_4cc = local_4c0;
          pcVar7 = local_314;
          local_4c0[0] = '\0';
          local_4c8 = 0;
          local_4c4 = 0x14;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(local_314 + 1);
          if (0x13 < uVar8) {
            local_4c4 = uVar8 + 0x20 & 0xffffffe0;
            local_4cc = _malloc(local_4c4);
          }
          _strncpy(local_4cc,local_314,uVar8);
          local_4cc[uVar8] = '\0';
          local_4._0_1_ = 3;
          local_4c8 = uVar8;
          FUN_009d4370(&local_4cc,_Memory,0x1080);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < local_4c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_4cc);
          }
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      local_4._0_1_ = uVar2;
      MediaPlayer_UnlockVideoBuffer((int)this);
    }
    uVar8 = uVar8 + 1;
  } while( true );
}


//// FUNCTION FUN_009c0760 @ 009c0760 ////

void FUN_009c0760(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_36c [18];
  int local_324;
  int local_320 [2];
  char local_318 [8];
  char local_310 [252];
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf72cb;
  local_c = ExceptionList;
  DAT_0105cdf1 = 0;
  ExceptionList = &local_c;
  FUN_009c89a0(local_36c);
  local_4 = 0;
  FUN_009ca9d0(local_36c,"hair_*.msh","Data\\Meshes\\",(undefined1 *)0x1);
  for (uVar4 = 0; (local_324 != 0 && (uVar4 < (uint)(local_320[0] - local_324 >> 2)));
      uVar4 = uVar4 + 1) {
    __splitpath(*(char **)(local_324 + uVar4 * 4),(char *)0x0,(char *)0x0,local_110,local_214);
    _sprintf(local_318,"%s%s",local_110,local_214);
    FUN_009ac040(local_318);
    pcVar2 = local_318;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0xd < (int)pcVar2 - (int)(local_318 + 1)) {
      iVar3 = _strncmp(local_318,"hair_",5);
      bVar5 = iVar3 == 0;
      iVar3 = _strncmp(local_310,"_m",2);
      if ((iVar3 != 0) && (iVar3 = _strncmp(local_310,"_f",2), iVar3 != 0)) {
        bVar5 = false;
      }
      iVar3 = _strncmp((char *)((int)local_320 + ((int)pcVar2 - (int)(local_318 + 1)) + -1),"_lod",4
                      );
      if ((iVar3 != 0) && (bVar5)) {
        FUN_009d9820();
        FUN_009d87c0(local_318);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_36c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c08f0 @ 009c08f0 ////

void FUN_009c08f0(void)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  void *this;
  int iVar6;
  void *pvVar7;
  byte *this_00;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *_Memory;
  LONG LVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 *puVar17;
  bool bVar18;
  float10 fVar19;
  int *local_550;
  undefined4 uStack_53c;
  undefined4 *puStack_538;
  int *local_534;
  float fStack_530;
  int local_52c [4];
  float afStack_51c [2];
  float afStack_514 [2];
  char *pcStack_50c;
  uint uStack_508;
  uint uStack_504;
  char acStack_500 [20];
  char *pcStack_4ec;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  char acStack_4e0 [20];
  char *pcStack_4cc;
  undefined4 uStack_4c8;
  uint uStack_4c4;
  char acStack_4c0 [16];
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  undefined4 local_488 [18];
  int local_440;
  int local_43c;
  char acStack_433 [267];
  wchar_t local_328 [132];
  char acStack_220 [256];
  char local_120 [268];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf731a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  piVar5 = FUN_00433eb0();
  local_534 = piVar5;
  this = FUN_0099bb50("morphing data",0x31545844,0x200,0x200,'\0');
  FUN_009c89a0(local_488);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  FUN_009ca9d0(local_488,"*.hd","Data\\Heads\\",(undefined1 *)0x1);
  uVar11 = 0;
  do {
    if ((local_440 == 0) || ((uint)(local_43c - local_440 >> 2) <= uVar11)) {
      local_c = 0xffffffff;
      FUN_009c8560(local_488);
      if (this != (void *)0x0) {
        FUN_0099b400(this);
      }
      if (piVar5 != (int *)0x0) {
        LVar10 = InterlockedDecrement(piVar5 + 4);
        uVar3 = DAT_0105b588;
        DAT_0105b588 = uVar3;
        if (LVar10 == 0) {
          DAT_0105b588 = 1;
          (**(code **)*piVar5)();
          DAT_0105b588 = uVar3;
        }
      }
      ExceptionList = pvStack_14;
      return;
    }
    __splitpath(*(char **)(local_440 + uVar11 * 4),(char *)0x0,(char *)0x0,acStack_433 + 3,local_120
               );
    _sprintf((char *)local_328,"%s%s",acStack_433 + 3,local_120);
    FUN_009ac040((char *)local_328);
    iVar6 = _strncmp((char *)local_328,"head_",5);
    pcVar13 = acStack_433 + 3;
    cVar4 = '\x01' - (iVar6 != 0);
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar13 - (int)(acStack_433 + 4) < 5) {
LAB_009c0a4b:
      if (cVar4 != '\0') {
        local_52c[2] = 0;
        local_52c[3] = 0;
        local_52c[0] = 0x200;
        local_52c[1] = 0x200;
        pvVar7 = operator_new(0x30);
        local_c._0_1_ = 1;
        if (pvVar7 == (void *)0x0) {
          local_550 = (int *)0x0;
        }
        else {
          local_550 = FUN_009a5a30(pvVar7,local_52c);
        }
        local_c._0_1_ = 0;
        this_00 = FUN_00a1aad0(local_328);
        pvVar7 = FUN_0099bb50("head_without_neck.dds",0,0,0,'\0');
        FUN_00a48e80(this_00,2,(int)pvVar7);
        pvVar7 = FUN_0099bb50("missing.dds",0,0,0,'\0');
        FUN_00a48e80(this_00,1,(int)pvVar7);
        pvVar7 = FUN_0099bb50("missing.dds",0,0,0,'\0');
        FUN_00a48e80(this_00,0,(int)pvVar7);
        iVar6 = 0;
        if (0 < *(int *)(this_00 + 0x30)) {
          iVar12 = 0;
          do {
            *(uint *)(*(int *)(this_00 + 0x34) + 0x10 + iVar12) =
                 *(uint *)(*(int *)(this_00 + 0x34) + 0x10 + iVar12) & 0xfeffffff;
            iVar6 = iVar6 + 1;
            iVar12 = iVar12 + 0x24;
          } while (iVar6 < *(int *)(this_00 + 0x30));
        }
        (**(code **)(*piVar5 + 0x18))();
        FUN_004012c0(0.0);
        uStack_4b0 = 0;
        uStack_4ac = 0;
        uStack_4a8 = 0;
        (**(code **)(*piVar5 + 0x20))(&uStack_4b0);
        DAT_0105bec4 = 1;
        uVar8 = FUN_009a6fb0('\x01');
        if ((char)uVar8 != '\0') {
          fVar2 = *(float *)(this_00 + 0xe0) * 12.6;
          FUN_009a6070(&DAT_0105c2e8,0.1);
          DAT_0105c3e4 = 0x42c80000;
          FUN_009a5390(0x105c2e8);
          fVar19 = FUN_004012c0(0.17453294);
          FUN_009a1950(&DAT_0105c2e8,(float)fVar19);
          fStack_530 = fVar2 * 0.0;
          fStack_498 = fStack_530 + *(float *)(this_00 + 0xd0);
          fStack_49c = fStack_530 + *(float *)(this_00 + 0xcc);
          fStack_4a0 = fVar2 + *(float *)(this_00 + 200);
          fStack_494 = fVar2;
          FUN_009a2830(&DAT_0105c2e8,&fStack_4a0,(float *)(this_00 + 200),0.0);
          iVar6 = FUN_009d9d50(this_00,0);
          FUN_009a1b30(&DAT_0105c2e8,(float *)(*(int *)(iVar6 + 0x30) + 0x40),afStack_51c);
          FUN_009a1b30(&DAT_0105c2e8,(float *)(*(int *)(iVar6 + 0x30) + 0x240),afStack_514);
          FUN_00acd42c();
          FUN_00acd42c();
          FUN_00acd42c();
          FUN_00acd42c();
          FUN_009d9820();
          DAT_0105cde8 = DAT_0105cde8 + 1;
          FUN_009a56b0(0xff000000,'\x01');
          FUN_009a1410();
          (**(code **)(*piVar5 + 0x10))();
          FUN_009a1460();
          if (local_550 != (int *)0x0) {
            FUN_009a5b60((int)local_550);
                    /* WARNING: Subroutine does not return */
            _free(local_550);
          }
          FUN_009a56e0((int)this);
          FUN_009a6fb0('\0');
        }
        DAT_0105bec4 = 0;
        FUN_009de3b0(this_00);
        uStack_53c = 0;
        puStack_538 = (undefined4 *)0x0;
        MediaPlayer_LockVideoBuffer(this,&uStack_53c);
        uVar3 = (undefined1)local_c;
        if (puStack_538 != (undefined4 *)0x0) {
          pcStack_4cc = acStack_4c0;
          acStack_4c0[0] = '\0';
          uStack_4c8 = 0;
          uStack_4c4 = 0x40;
          pcStack_4cc = _malloc(0x40);
          _strncpy(pcStack_4cc,"Data\\Textures\\BluePrint\\debug.dds",0x21);
          uStack_4c8 = 0x21;
          pcStack_4cc[0x21] = '\0';
          local_c._0_1_ = 2;
          uVar9 = FUN_009d3720(&pcStack_4cc);
          local_c._0_1_ = 0;
          uVar3 = (undefined1)local_c;
          local_c._0_1_ = 0;
          if (0x14 < uStack_4c4) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_4cc);
          }
          if (uVar9 == 0x20080) {
            _sprintf(acStack_220,"Data\\Textures\\Specials\\Test\\%s.dds");
            _Memory = operator_new(0x20080);
            pcStack_4ec = acStack_4e0;
            acStack_4e0[0] = '\0';
            uStack_4e8 = 0;
            uStack_4e4 = 0x40;
            pcStack_4ec = _malloc(0x40);
            _strncpy(pcStack_4ec,"Data\\Textures\\BluePrint\\debug.dds",0x21);
            uStack_4e8 = 0x21;
            pcStack_4ec[0x21] = '\0';
            local_c = CONCAT31(local_c._1_3_,3);
            FUN_009d3ca0(&pcStack_4ec,_Memory,0x20080,(undefined1 *)0x0);
            if (0x14 < uStack_4e4) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_4ec);
            }
            puVar15 = puStack_538;
            puVar17 = _Memory + 0x20;
            for (iVar6 = 0x8000; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar17 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar17 = puVar17 + 1;
            }
            pcStack_50c = acStack_500;
            pcVar13 = acStack_220;
            acStack_500[0] = '\0';
            uStack_508 = 0;
            uStack_504 = 0x14;
            do {
              cVar4 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 != '\0');
            uVar11 = (int)pcVar13 - (int)(acStack_220 + 1);
            if (0x13 < uVar11) {
              uStack_504 = uVar11 + 0x20 & 0xffffffe0;
              pcStack_50c = _malloc(uStack_504);
            }
            _strncpy(pcStack_50c,acStack_220,uVar11);
            pcStack_50c[uVar11] = '\0';
            local_c._0_1_ = 4;
            uStack_508 = uVar11;
            FUN_009d4370(&pcStack_50c,_Memory,0x20080);
            local_c = (uint)local_c._1_3_ << 8;
            if (0x14 < uStack_504) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_50c);
            }
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
        local_c._0_1_ = uVar3;
        MediaPlayer_UnlockVideoBuffer((int)this);
      }
    }
    else {
      iVar6 = 5;
      bVar18 = true;
      pcVar14 = acStack_433 + ((int)pcVar13 - (int)(acStack_433 + 4)) + -1;
      pcVar16 = "_fat";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar18 = *pcVar14 == *pcVar16;
        pcVar14 = pcVar14 + 1;
        pcVar16 = pcVar16 + 1;
      } while (bVar18);
      if (bVar18) {
        cVar4 = '\0';
      }
      iVar6 = 5;
      bVar18 = true;
      pcVar13 = acStack_433 + ((int)pcVar13 - (int)(acStack_433 + 4)) + -1;
      pcVar14 = "_old";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar18 = *pcVar13 == *pcVar14;
        pcVar13 = pcVar13 + 1;
        pcVar14 = pcVar14 + 1;
      } while (bVar18);
      if (!bVar18) goto LAB_009c0a4b;
    }
    uVar11 = uVar11 + 1;
  } while( true );
}


//// FUNCTION FUN_009c1020 @ 009c1020 ////

void FUN_009c1020(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *this;
  void *this_00;
  undefined4 *puVar4;
  byte *pbVar5;
  void *pvVar6;
  LONG LVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  
  FUN_00a60930();
  FUN_00a62bd0((byte *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\CostumeOptions\\",'\x01');
  puVar2 = FUN_00433eb0();
  puVar3 = FUN_00433eb0();
  this = FUN_009d30f0((int)puVar2,0,1,(uint *)0x0,'\0');
  this_00 = FUN_009d30f0((int)puVar3,1,1,(uint *)0x0,'\0');
  puVar4 = FUN_009cfaa0("m_20s_1.cos");
  FUN_009d2c50(this,puVar4,'\x01',-1.0,-1.0);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar4);
  }
  puVar4 = FUN_009cfaa0("f_40s_3.cos");
  FUN_009d2c50(this_00,puVar4,'\x01',-1.0,-1.0);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar4);
  }
  pbVar5 = Anim_LoadByName("sm_pose.anm");
  FUN_00a019d0((void *)puVar2[0x1e],pbVar5,0xffffffff);
  FUN_00a019d0((void *)puVar3[0x1e],pbVar5,0xffffffff);
  if (pbVar5 != (byte *)0x0) {
    FUN_00985de0(pbVar5);
  }
  pvVar6 = FUN_0099bb50("thumb_sets",0x31545844,0x80,0x80,'\0');
  FUN_009bf4b0(this_00,pvVar6);
  puVar4 = FUN_009cfaa0("f_20s_1.cos");
  FUN_009d2c50(this_00,puVar4,'\x01',-1.0,-1.0);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar4);
  }
  FUN_009bec90(this_00,pvVar6,"early");
  puVar4 = FUN_009cfaa0("f_entourage_50svip.cos");
  FUN_009d2c50(this_00,puVar4,'\x01',-1.0,-1.0);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar4);
  }
  FUN_009bec90(this_00,pvVar6,&DAT_00d7278c);
  puVar4 = FUN_009cfaa0("f_barmaid.cos");
  FUN_009d2c50(this_00,puVar4,'\x01',-1.0,-1.0);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar4);
  }
  FUN_009bec90(this_00,pvVar6,&DAT_00d72774);
  FUN_009bd9a0(this_00,pvVar6);
  FUN_009be220(this_00,pvVar6);
  FUN_009bd120(this,pvVar6);
  FUN_009bc800(this,pvVar6);
  FUN_009bbfa0(this_00,pvVar6);
  FUN_009b9700(this,pvVar6);
  FUN_009b9f10(this,pvVar6);
  FUN_009ba720(this,pvVar6);
  FUN_009ba720(this_00,pvVar6);
  FUN_009baf60(this,pvVar6);
  FUN_009bb780(this_00,pvVar6);
  if (pvVar6 != (void *)0x0) {
    FUN_0099b400(pvVar6);
  }
  LVar7 = InterlockedDecrement(puVar2 + 4);
  uVar1 = DAT_0105b588;
  if (LVar7 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*puVar2)();
  }
  DAT_0105b588 = uVar1;
  LVar7 = InterlockedDecrement(puVar3 + 4);
  uVar1 = DAT_0105b588;
  if (LVar7 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*puVar3)();
  }
  pcVar8 = &stack0xffffffd0;
  iVar9 = 0;
  uVar10 = 0x14;
  DAT_0105b588 = uVar1;
  FUN_004015d0(&stack0xffffffc4,"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\CostumeOptions\\",
               0x38);
  FUN_00a624d0(pcVar8,iVar9,uVar10);
  FUN_00a5f900();
  FUN_00a62130();
  return;
}


//// FUNCTION FUN_009c12d0 @ 009c12d0 ////

void __fastcall FUN_009c12d0(int param_1)

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


//// FUNCTION FUN_009c1300 @ 009c1300 ////

void __fastcall FUN_009c1300(int param_1)

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


//// FUNCTION FUN_009c1340 @ 009c1340 ////

void * __thiscall FUN_009c1340(void *this,byte param_1)

{
  if (0xf < *(uint *)((int)this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009c1380 @ 009c1380 ////

void __fastcall FUN_009c1380(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


//// FUNCTION FUN_009c13b0 @ 009c13b0 ////

void __fastcall FUN_009c13b0(int param_1)

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


//// FUNCTION FUN_009c1430 @ 009c1430 ////

void * __thiscall FUN_009c1430(void *this,byte param_1)

{
  FUN_009c1380((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009c1450 @ 009c1450 ////

void __fastcall FUN_009c1450(int param_1)

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


//// FUNCTION FUN_009c1480 @ 009c1480 ////

void FUN_009c1480(void)

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
  puStack_8 = &LAB_00cf7338;
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


//// FUNCTION FUN_009c14f0 @ 009c14f0 ////

void FUN_009c14f0(void)

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
  puStack_8 = &LAB_00cf7358;
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


//// FUNCTION FUN_009c1560 @ 009c1560 ////

void FUN_009c1560(void)

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
  puStack_8 = &LAB_00cf7378;
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


//// FUNCTION FUN_009c15d0 @ 009c15d0 ////

void FUN_009c15d0(void)

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
  puStack_8 = &LAB_00cf7398;
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


//// FUNCTION FUN_009c1640 @ 009c1640 ////

void FUN_009c1640(void)

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
  puStack_8 = &LAB_00cf73b8;
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


//// FUNCTION FUN_009c1700 @ 009c1700 ////

void * __cdecl FUN_009c1700(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0x1c);
    param_3 = (void *)((int)param_3 + -0x1c);
    FUN_00405c30(param_3,param_2,0,0xffffffff);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_009c1740 @ 009c1740 ////

void FUN_009c1740(int param_1)

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


//// FUNCTION FUN_009c1780 @ 009c1780 ////

void __cdecl FUN_009c1780(void *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf73e1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined1 *)((int)param_1 + 4) = 0;
    FUN_00405c30(param_1,param_2,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c17d0 @ 009c17d0 ////

void __thiscall FUN_009c17d0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)((int)this + 4);
  uVar2 = *(undefined4 *)((int)this + 8);
  uVar3 = *(undefined4 *)((int)this + 0xc);
  uVar4 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}


//// FUNCTION FUN_009c1850 @ 009c1850 ////

void __cdecl FUN_009c1850(int param_1,int param_2,int param_3,undefined4 param_4,byte *param_5)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte **ppbVar7;
  bool bVar8;
  bool bVar9;
  uint in_stack_00000024;
  uint in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf73f8;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (param_3 < param_2) {
    iVar5 = (param_2 + -1) / 2;
    pvVar1 = (void *)(iVar5 * 0x1c + param_1);
    ppbVar7 = (byte **)param_5;
    if (in_stack_00000028 < 0x10) {
      ppbVar7 = &param_5;
    }
    uVar2 = *(uint *)((int)pvVar1 + 0x14);
    if (uVar2 == 0) {
LAB_009c18e7:
      if (in_stack_00000024 <= uVar2) {
        uVar3 = (uint)(uVar2 != in_stack_00000024);
        goto LAB_009c18f8;
      }
    }
    else {
      uVar4 = in_stack_00000024;
      if (uVar2 < in_stack_00000024) {
        uVar4 = uVar2;
      }
      if (*(uint *)((int)pvVar1 + 0x18) < 0x10) {
        pbVar6 = (byte *)((int)pvVar1 + 4);
      }
      else {
        pbVar6 = *(byte **)((int)pvVar1 + 4);
      }
      bVar8 = false;
      uVar3 = 0;
      bVar9 = true;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar8 = *pbVar6 < *(byte *)ppbVar7;
        bVar9 = *pbVar6 == *(byte *)ppbVar7;
        pbVar6 = pbVar6 + 1;
        ppbVar7 = (byte **)((int)ppbVar7 + 1);
      } while (bVar9);
      if (!bVar9) {
        uVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (uVar3 == 0) goto LAB_009c18e7;
LAB_009c18f8:
      if (-1 < (int)uVar3) break;
    }
    FUN_00405c30((void *)(param_2 * 0x1c + param_1),pvVar1,0,0xffffffff);
    param_2 = iVar5;
  }
  FUN_00405c30((void *)(param_2 * 0x1c + param_1),&param_4,0,0xffffffff);
  if (in_stack_00000028 < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_5);
}


//// FUNCTION FUN_009c1970 @ 009c1970 ////

void __cdecl FUN_009c1970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *this;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7418;
  local_c = ExceptionList;
  iVar2 = (param_3 - param_1) / 0x1c;
  iVar1 = (param_2 - param_1) / 0x1c;
  iVar6 = iVar1;
  local_38 = iVar2;
  while (iVar4 = iVar6, iVar4 != 0) {
    iVar6 = local_38 % iVar4;
    local_38 = iVar4;
  }
  if ((local_38 < iVar2) && (0 < local_38)) {
    param_2 = iVar1 * 0x1c;
    pvVar8 = (void *)(local_38 * 0x1c + param_1);
    ExceptionList = &local_c;
    do {
      iVar2 = param_2;
      local_4 = 0xffffffff;
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      FUN_00405c30(local_28,pvVar8,0,0xffffffff);
      local_4 = 0;
      if ((int)pvVar8 + iVar2 == param_3) {
        piVar7 = &param_1;
      }
      else {
        local_34 = (int)pvVar8 + iVar2;
        piVar7 = &local_34;
      }
      pvVar5 = (void *)*piVar7;
      this = pvVar8;
      while (pvVar3 = pvVar5, pvVar3 != pvVar8) {
        FUN_00405c30(this,pvVar3,0,0xffffffff);
        iVar2 = (param_3 - (int)pvVar3) / 0x1c;
        if (iVar1 < iVar2) {
          local_30 = param_2 + (int)pvVar3;
          piVar7 = &local_30;
        }
        else {
          local_2c = (iVar1 - iVar2) * 0x1c + param_1;
          piVar7 = &local_2c;
        }
        this = pvVar3;
        pvVar5 = (void *)*piVar7;
      }
      FUN_00405c30(this,local_28,0,0xffffffff);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      pvVar8 = (void *)((int)pvVar8 + -0x1c);
      local_38 = local_38 + -1;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c1b10 @ 009c1b10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c1b10(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *this;
  void *this_00;
  undefined4 *puVar6;
  byte *pbVar7;
  void *this_01;
  int iVar8;
  uint uVar9;
  LONG LVar10;
  char *pcVar11;
  uint uVar12;
  void *this_02;
  float10 fVar13;
  undefined4 uStack_590;
  undefined4 *puStack_58c;
  undefined4 *local_588;
  float fStack_584;
  undefined4 uStack_580;
  undefined4 *local_57c;
  float fStack_578;
  float fStack_574;
  char *pcStack_570;
  uint uStack_56c;
  uint uStack_568;
  char acStack_564 [20];
  char *pcStack_550;
  undefined4 uStack_54c;
  uint uStack_548;
  char acStack_544 [20];
  char *pcStack_530;
  undefined4 uStack_52c;
  uint uStack_528;
  char acStack_524 [20];
  float local_510;
  float local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  float local_4f8 [3];
  undefined1 auStack_4ec [4];
  void *pvStack_4e8;
  undefined4 uStack_4d8;
  uint uStack_4d4;
  undefined1 auStack_4d0 [4];
  void *pvStack_4cc;
  undefined4 uStack_4bc;
  uint uStack_4b8;
  undefined1 auStack_4b4 [4];
  void *pvStack_4b0;
  undefined4 uStack_4a0;
  uint uStack_49c;
  undefined1 auStack_498 [4];
  void *pvStack_494;
  undefined4 uStack_484;
  uint uStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  undefined4 uStack_470;
  undefined4 local_46c [18];
  int local_424;
  int local_420;
  char local_418 [9];
  char local_40f;
  char local_314 [260];
  char acStack_210 [256];
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf747d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00a60930();
  FUN_00a62bd0((byte *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Hair\\",'\x01');
  puVar4 = FUN_00433eb0();
  local_57c = puVar4;
  puVar5 = FUN_00433eb0();
  local_588 = puVar5;
  this = FUN_009d30f0((int)puVar4,0,1,(uint *)0x0,'\0');
  this_00 = FUN_009d30f0((int)puVar5,1,1,(uint *)0x0,'\0');
  puVar6 = FUN_009cfaa0("m_bodyless.cos");
  FUN_009d2c50(this,puVar6,'\x01',-1.0,-1.0);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar6);
  }
  puVar6 = FUN_009cfaa0("f_bodyless.cos");
  FUN_009d2c50(this_00,puVar6,'\x01',-1.0,-1.0);
  if (puVar6 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar6);
  }
  pbVar7 = Anim_LoadByName("sm_pose.anm");
  FUN_00a019d0((void *)puVar4[0x1e],pbVar7,0xffffffff);
  FUN_00a019d0((void *)puVar5[0x1e],pbVar7,0xffffffff);
  if (pbVar7 != (byte *)0x0) {
    FUN_00985de0(pbVar7);
  }
  this_01 = FUN_0099bb50("thumb_sets",0x31545844,0x80,0x80,'\0');
  FUN_009c89a0(local_46c);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_009ca9d0(local_46c,"hair_*.msh","Data\\Meshes\\",(undefined1 *)0x1);
  uVar12 = 0;
  while( true ) {
    if ((local_424 == 0) || ((uint)(local_420 - local_424 >> 2) <= uVar12)) break;
    __splitpath(*(char **)(local_424 + uVar12 * 4),(char *)0x0,(char *)0x0,local_314,local_110);
    _sprintf(local_418,"%s%s");
    FUN_009ac040(local_418);
    iVar8 = _strncmp(local_418,"hair_",5);
    if (iVar8 == 0) {
      this_02 = this_00;
      if (local_40f != 'f') {
        this_02 = this;
      }
      FUN_009d60a0(this_02,local_418);
      FUN_009d10d0();
      FUN_009a6070(&DAT_0105c2e8,6.0);
      DAT_0105c3e4 = 0x42c80000;
      FUN_009a5390(0x105c2e8);
      fVar13 = FUN_004012c0(0.03926991);
      FUN_009a1950(&DAT_0105c2e8,(float)fVar13);
      local_4f8[2] = _DAT_00e682a4 + 1.73;
      local_50c = _DAT_00e682a0 + 3.2;
      local_4f8[0] = 0.3;
      local_510 = _DAT_00e682a0 + 8.71;
      local_4f8[1] = 0.1;
      local_508 = 0x400851ec;
      FUN_009a2830(&DAT_0105c2e8,&local_510,local_4f8,0.0);
      iVar8 = 2;
      do {
        FUN_009a56b0(0xffa7b8d6,'\x01');
        FUN_009a1410();
        FUN_004012c0(0.0);
        local_504 = 0;
        local_500 = 0;
        local_4fc = 0;
        (**(code **)(**(int **)((int)this_02 + 8) + 0x20))();
        (**(code **)(**(int **)((int)this_02 + 8) + 8))();
        FUN_009a1460();
        uVar2 = DAT_0105ca60;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      fStack_578 = (DAT_0105c400 - DAT_0105c404) * 0.5;
      fStack_478 = DAT_0105c404;
      fStack_584 = DAT_0105c404 + fStack_578;
      fStack_574 = DAT_0105c404;
      uStack_580 = 0;
      DAT_0105ca60 = DAT_0105ca68;
      uStack_470 = 0;
      fStack_47c = fStack_578;
      fStack_474 = fStack_584;
      FUN_009a56e0((int)this_01);
      uStack_590 = 0;
      puStack_58c = (undefined4 *)0x0;
      DAT_0105ca60 = uVar2;
      MediaPlayer_LockVideoBuffer(this_01,&uStack_590);
      uVar3 = (undefined1)local_4;
      if (puStack_58c != (undefined4 *)0x0) {
        pcStack_530 = acStack_524;
        acStack_524[0] = '\0';
        uStack_52c = 0;
        uStack_528 = 0x40;
        pcStack_530 = _malloc(0x40);
        _strncpy(pcStack_530,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
        uStack_52c = 0x26;
        pcStack_530[0x26] = '\0';
        local_4._0_1_ = 1;
        uVar9 = FUN_009d3720(&pcStack_530);
        local_4._0_1_ = 0;
        uVar3 = (undefined1)local_4;
        local_4._0_1_ = 0;
        if (0x14 < uStack_528) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_530);
        }
        if (uVar9 == 0x2080) {
          _sprintf(acStack_210,"Data\\Textures\\Thumbs\\Hair\\%s.dds");
          puVar4 = operator_new(0x2080);
          pcStack_550 = acStack_544;
          acStack_544[0] = '\0';
          uStack_54c = 0;
          uStack_548 = 0x40;
          pcStack_550 = _malloc(0x40);
          _strncpy(pcStack_550,"Data\\Textures\\BluePrint\\thumb_hair.dds",0x26);
          uStack_54c = 0x26;
          pcStack_550[0x26] = '\0';
          local_4 = CONCAT31(local_4._1_3_,2);
          FUN_009d3ca0(&pcStack_550,puVar4,0x2080,(undefined1 *)0x0);
          if (0x14 < uStack_548) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_550);
          }
          puVar5 = puStack_58c;
          puVar6 = puVar4 + 0x20;
          for (iVar8 = 0x800; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          pcStack_570 = acStack_564;
          pcVar11 = acStack_210;
          acStack_564[0] = '\0';
          uStack_56c = 0;
          uStack_568 = 0x14;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          uVar12 = (int)pcVar11 - (int)(acStack_210 + 1);
          if (0x13 < uVar12) {
            uStack_568 = uVar12 + 0x20 & 0xffffffe0;
            pcStack_570 = _malloc(uStack_568);
          }
          _strncpy(pcStack_570,acStack_210,uVar12);
          pcStack_570[uVar12] = '\0';
          local_4._0_1_ = 3;
          uStack_56c = uVar12;
          FUN_009d4370(&pcStack_570,puVar4,0x2080);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < uStack_568) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_570);
          }
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
      }
      local_4._0_1_ = uVar3;
      MediaPlayer_UnlockVideoBuffer((int)this_01);
      puVar4 = local_57c;
      puVar5 = local_588;
    }
    uVar12 = uVar12 + 1;
  }
  if (this_01 != (void *)0x0) {
    FUN_0099b400(this_01);
  }
  LVar10 = InterlockedDecrement(puVar4 + 4);
  uVar3 = DAT_0105b588;
  if (LVar10 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*puVar4)();
  }
  DAT_0105b588 = uVar3;
  LVar10 = InterlockedDecrement(puVar5 + 4);
  uVar3 = DAT_0105b588;
  if (LVar10 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*puVar5)();
  }
  uVar12 = 0x40;
  DAT_0105b588 = uVar3;
  pcVar11 = _malloc(0x40);
  _strncpy(pcVar11,"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Hair\\",0x2e);
  pcVar11[0x2e] = '\0';
  FUN_00a624d0(pcVar11,0x2e,uVar12);
  FUN_00a5f900();
  FUN_00a62130();
  uStack_4d4 = 0xf;
  uStack_4d8 = 0;
  pvStack_4e8 = (void *)((uint)pvStack_4e8 & 0xffffff00);
  FUN_00405d50(auStack_4ec,&PTR_DAT_00d1e2c0,3);
  local_4._0_1_ = 4;
  uStack_4b8 = 0xf;
  uStack_4bc = 0;
  pvStack_4cc = (void *)((uint)pvStack_4cc & 0xffffff00);
  FUN_00405d50(auStack_4d0,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Hair",0x2d
              );
  local_4._0_1_ = 5;
  uStack_49c = 0xf;
  uStack_4a0 = 0;
  pvStack_4b0 = (void *)((uint)pvStack_4b0 & 0xffffff00);
  FUN_00405d50(auStack_4b4,(undefined4 *)&DAT_00d72830,3);
  local_4 = CONCAT31(local_4._1_3_,6);
  uStack_480 = 0xf;
  uStack_484 = 0;
  pvStack_494 = (void *)((uint)pvStack_494 & 0xffffff00);
  FUN_00405d50(auStack_498,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Meshes",0x1f);
  if (0xf < uStack_480) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_494);
  }
  uStack_480 = 0xf;
  uStack_484 = 0;
  pvStack_494 = (void *)((uint)pvStack_494 & 0xffffff00);
  if (0xf < uStack_49c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4b0);
  }
  uStack_49c = 0xf;
  uStack_4a0 = 0;
  pvStack_4b0 = (void *)((uint)pvStack_4b0 & 0xffffff00);
  if (0xf < uStack_4b8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4cc);
  }
  uStack_4b8 = 0xf;
  uStack_4bc = 0;
  pvStack_4cc = (void *)((uint)pvStack_4cc & 0xffffff00);
  if (0xf < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4e8);
  }
  uStack_4d4 = 0xf;
  uStack_4d8 = 0;
  pvStack_4e8 = (void *)((uint)pvStack_4e8 & 0xffffff00);
  local_4 = 0xffffffff;
  FUN_009c8560(local_46c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009c2540 @ 009c2540 ////

void * __cdecl FUN_009c2540(void *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7498;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_00405d50(local_28,(undefined4 *)param_2,(int)pcVar2 - (int)(param_2 + 1));
  local_4 = 0;
  pvVar3 = FUN_00963fa0(local_28,param_3,0,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_00405c30(param_1,pvVar3,0,0xffffffff);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009c25f0 @ 009c25f0 ////

void * __cdecl FUN_009c25f0(void *param_1,void *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf74b8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_00405c30(local_28,param_2,0,0xffffffff);
  local_4 = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = FUN_00964450(local_28,(undefined4 *)param_3,(int)pcVar2 - (int)(param_3 + 1));
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_00405c30(param_1,pvVar3,0,0xffffffff);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009c26a0 @ 009c26a0 ////

void * __cdecl FUN_009c26a0(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf74d8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_00405c30(local_28,param_2,0,0xffffffff);
  local_4 = 0;
  pvVar1 = FUN_00963fa0(local_28,param_3,0,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_00405c30(param_1,pvVar1,0,0xffffffff);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009c2740 @ 009c2740 ////

void __cdecl FUN_009c2740(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    FUN_00405c30(param_1,param_3,0,0xffffffff);
  }
  return;
}


//// FUNCTION FUN_009c2790 @ 009c2790 ////

void __cdecl FUN_009c2790(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < *(uint *)(param_1 + 0x18)) break;
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1 = param_1 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009c2800 @ 009c2800 ////

void * __cdecl FUN_009c2800(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf7501;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      *(undefined4 *)((int)param_3 + 0x18) = 0xf;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      *(undefined1 *)((int)param_3 + 4) = 0;
      FUN_00405c30(param_3,param_1,0,0xffffffff);
    }
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_009c28a0 @ 009c28a0 ////

void * __cdecl FUN_009c28a0(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf7521;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      *(undefined4 *)((int)param_3 + 0x18) = 0xf;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      *(undefined1 *)((int)param_3 + 4) = 0;
      FUN_00405c30(param_3,param_1,0,0xffffffff);
    }
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_009c2950 @ 009c2950 ////

void __cdecl FUN_009c2950(int param_1,byte *param_2,int param_3,undefined4 param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  uint in_stack_00000028;
  undefined4 in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pbVar3 = param_2;
  puStack_8 = &LAB_00cf7538;
  local_4 = 0;
  pbVar9 = param_2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    pbVar10 = (byte *)((int)pbVar9 * 2 + 2);
    if (param_3 <= (int)pbVar10) {
      if (pbVar10 == (byte *)param_3) {
        FUN_00405c30((void *)((int)pbVar9 * 0x1c + param_1),
                     (void *)(param_3 * 0x1c + -0x1c + param_1),0,0xffffffff);
        pbVar9 = (byte *)(param_3 + -1);
      }
      pbVar10 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
      FUN_00405c30(&stack0xffffffc0,&param_4,0,0xffffffff);
      FUN_009c1850(param_1,(int)pbVar9,(int)pbVar3,in_stack_ffffffc0,pbVar10);
      if (in_stack_00000028 < 0x10) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_5);
    }
    iVar4 = (int)pbVar10 * 0x1c;
    uVar1 = *(uint *)(iVar4 + -8 + param_1);
    iVar5 = iVar4 + param_1;
    if (*(uint *)(iVar4 + -4 + param_1) < 0x10) {
      param_2 = (byte *)(iVar5 + -0x18);
    }
    else {
      param_2 = *(byte **)(iVar5 + -0x18);
    }
    uVar2 = *(uint *)(iVar5 + 0x14);
    if (uVar2 == 0) {
LAB_009c29fc:
      if (uVar1 <= uVar2) {
        uVar7 = (uint)(uVar2 != uVar1);
        goto LAB_009c2a09;
      }
LAB_009c2a0b:
      pbVar10 = pbVar10 + -1;
    }
    else {
      uVar8 = uVar2;
      if (uVar1 <= uVar2) {
        uVar8 = uVar1;
      }
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        pbVar6 = (byte *)(iVar5 + 4);
      }
      else {
        pbVar6 = *(byte **)(iVar5 + 4);
      }
      bVar11 = false;
      uVar7 = 0;
      bVar12 = true;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        bVar11 = *pbVar6 < *param_2;
        bVar12 = *pbVar6 == *param_2;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 1;
      } while (bVar12);
      if (!bVar12) {
        uVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if (uVar7 == 0) goto LAB_009c29fc;
LAB_009c2a09:
      if ((int)uVar7 < 0) goto LAB_009c2a0b;
    }
    FUN_00405c30((void *)((int)pbVar9 * 0x1c + param_1),(void *)((int)pbVar10 * 0x1c + param_1),0,
                 0xffffffff);
    pbVar9 = pbVar10;
  } while( true );
}


//// FUNCTION FUN_009c2ae0 @ 009c2ae0 ////

void __cdecl FUN_009c2ae0(void *param_1,int param_2,void *param_3,undefined4 param_4,void *param_5)

{
  uint in_stack_00000028;
  undefined4 in_stack_ffffffd4;
  uint in_stack_ffffffd8;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7558;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00405c30(param_3,param_1,0,0xffffffff);
  pvVar1 = (void *)(in_stack_ffffffd8 & 0xffffff00);
  FUN_00405c30(&stack0xffffffd4,&param_4,0,0xffffffff);
  FUN_009c2950((int)param_1,(byte *)0x0,(param_2 - (int)param_1) / 0x1c,in_stack_ffffffd4,pvVar1);
  if (0xf < in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    _free(param_5);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c2bc0 @ 009c2bc0 ////

void __fastcall FUN_009c2bc0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_009c2c30 @ 009c2c30 ////

void __cdecl FUN_009c2c30(void *param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf7581;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined1 *)((int)param_1 + 4) = 0;
      FUN_00405c30(param_1,param_3,0,0xffffffff);
    }
    param_1 = (void *)((int)param_1 + 0x1c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009c2d40 @ 009c2d40 ////

void __cdecl FUN_009c2d40(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  undefined4 in_stack_ffffffd4;
  void *in_stack_ffffffd8;
  
  iVar1 = (param_2 - param_1) / 0x1c;
  pbVar2 = (byte *)(iVar1 / 2);
  if (0 < (int)pbVar2) {
    pvVar3 = (void *)((int)pbVar2 * 0x1c + param_1);
    do {
      pvVar3 = (void *)((int)pvVar3 + -0x1c);
      pbVar2 = pbVar2 + -1;
      in_stack_ffffffd8 = (void *)((uint)in_stack_ffffffd8 & 0xffffff00);
      FUN_00405c30(&stack0xffffffd4,pvVar3,0,0xffffffff);
      FUN_009c2950(param_1,pbVar2,iVar1,in_stack_ffffffd4,in_stack_ffffffd8);
    } while (0 < (int)pbVar2);
  }
  return;
}


//// FUNCTION FUN_009c2df0 @ 009c2df0 ////

void __cdecl FUN_009c2df0(int param_1,void *param_2,void *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + 4);
  pbVar2 = pbVar3;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pbVar2 = *(byte **)pbVar3;
  }
  uVar1 = FUN_0096a0f0(param_2,0,*(uint *)((int)param_2 + 0x14),pbVar2,*(uint *)(param_1 + 0x14));
  if ((int)uVar1 < 0) {
    FUN_009c17d0(param_2,param_1);
  }
  if (*(uint *)((int)param_2 + 0x18) < 0x10) {
    pbVar2 = (byte *)((int)param_2 + 4);
  }
  else {
    pbVar2 = *(byte **)((int)param_2 + 4);
  }
  uVar1 = FUN_0096a0f0(param_3,0,*(uint *)((int)param_3 + 0x14),pbVar2,
                       *(uint *)((int)param_2 + 0x14));
  if ((int)uVar1 < 0) {
    FUN_009c17d0(param_3,(int)param_2);
  }
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pbVar3 = *(byte **)pbVar3;
  }
  uVar1 = FUN_0096a0f0(param_2,0,*(uint *)((int)param_2 + 0x14),pbVar3,*(uint *)(param_1 + 0x14));
  if ((int)uVar1 < 0) {
    FUN_009c17d0(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_009c2e90 @ 009c2e90 ////

void __cdecl FUN_009c2e90(void *param_1,int param_2)

{
  void *pvVar1;
  undefined4 in_stack_ffffffdc;
  uint in_stack_ffffffe0;
  void *pvVar2;
  
  pvVar1 = (void *)(param_2 + -0x1c);
  pvVar2 = (void *)(in_stack_ffffffe0 & 0xffffff00);
  FUN_00405c30(&stack0xffffffdc,pvVar1,0,0xffffffff);
  FUN_009c2ae0(param_1,(int)pvVar1,pvVar1,in_stack_ffffffdc,pvVar2);
  return;
}


//// FUNCTION FUN_009c2ed0 @ 009c2ed0 ////

void FUN_009c2ed0(int param_1,int param_2)

{
  FUN_009c2790(param_1,param_2);
  return;
}


//// FUNCTION FUN_009c3010 @ 009c3010 ////

void __cdecl FUN_009c3010(byte *param_1,byte *param_2)

{
  byte *this;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte *local_4;
  
  this = param_1;
  if (param_1 != param_2) {
joined_r0x009c3028:
    while (this = this + 0x1c, this != param_2) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        pbVar1 = param_1 + 4;
      }
      else {
        pbVar1 = *(byte **)(param_1 + 4);
      }
      uVar2 = FUN_0096a0f0(this,0,*(uint *)(this + 0x14),pbVar1,*(uint *)(param_1 + 0x14));
      if (-1 < (int)uVar2) {
        pbVar1 = this + 4;
        local_4 = this;
        do {
          pbVar5 = pbVar1 + -0x1c;
          pbVar7 = pbVar5;
          if (0xf < *(uint *)(pbVar1 + -8)) {
            pbVar7 = *(byte **)pbVar5;
          }
          uVar2 = *(uint *)(this + 0x14);
          if (uVar2 == 0) {
LAB_009c30d3:
            if (*(uint *)(pbVar1 + -0xc) <= uVar2) {
              uVar3 = (uint)(uVar2 != *(uint *)(pbVar1 + -0xc));
              goto LAB_009c30e3;
            }
          }
          else {
            uVar4 = *(uint *)(pbVar1 + -0xc);
            if (uVar2 < *(uint *)(pbVar1 + -0xc)) {
              uVar4 = uVar2;
            }
            if (*(uint *)(this + 0x18) < 0x10) {
              pbVar6 = this + 4;
            }
            else {
              pbVar6 = *(byte **)(this + 4);
            }
            bVar8 = false;
            uVar3 = 0;
            bVar9 = true;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              bVar8 = *pbVar6 < *pbVar7;
              bVar9 = *pbVar6 == *pbVar7;
              pbVar6 = pbVar6 + 1;
              pbVar7 = pbVar7 + 1;
            } while (bVar9);
            if (!bVar9) {
              uVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            }
            if (uVar3 == 0) goto LAB_009c30d3;
LAB_009c30e3:
            if (-1 < (int)uVar3) goto LAB_009c30f3;
          }
          local_4 = pbVar1 + -0x20;
          pbVar1 = pbVar5;
        } while( true );
      }
      if ((param_1 != this) && (this != this + 0x1c)) {
        FUN_009c1970((int)param_1,(int)this,(int)(this + 0x1c));
      }
    }
  }
  return;
LAB_009c30f3:
  if ((local_4 != this) && (this != this + 0x1c)) {
    FUN_009c1970((int)local_4,(int)this,(int)(this + 0x1c));
  }
  goto joined_r0x009c3028;
}


//// FUNCTION FUN_009c3130 @ 009c3130 ////

void __cdecl FUN_009c3130(int param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = ((int)param_3 - param_1) / 0x1c;
  if (0x28 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    pvVar1 = (void *)(iVar2 * 0x1c + param_1);
    FUN_009c2df0(param_1,pvVar1,(void *)(iVar2 * 0x38 + param_1));
    FUN_009c2df0((int)((int)param_2 + iVar2 * -0x1c),param_2,(void *)(iVar2 * 0x1c + (int)param_2));
    pvVar3 = (void *)((int)param_3 + iVar2 * -0x1c);
    FUN_009c2df0((int)((int)param_3 + iVar2 * -0x38),pvVar3,param_3);
    FUN_009c2df0((int)pvVar1,param_2,pvVar3);
    return;
  }
  FUN_009c2df0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_009c3210 @ 009c3210 ////

void FUN_009c3210(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  uint _Count;
  int *piVar8;
  int *_Memory;
  uint uVar9;
  undefined1 local_1d8 [4];
  int *local_1d4;
  int *local_1d0;
  int local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  char *local_198;
  uint local_194;
  uint local_190;
  char local_18c [20];
  undefined4 local_178 [18];
  int local_130;
  int local_12c;
  char local_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf75b1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009c89a0(local_178);
  uVar9 = 0;
  local_c = 0;
  FUN_009ca9d0(local_178,"*.msh","C:\\movies\\Dev\\Build\\data\\Meshes\\",(undefined1 *)0x1);
  _Memory = (int *)0x0;
  piVar8 = (int *)0x0;
  local_1d4 = (int *)0x0;
  local_1d0 = (int *)0x0;
  local_1cc = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  do {
    if ((local_130 == 0) || ((uint)(local_12c - local_130 >> 2) <= uVar9)) {
      FUN_009d9820();
      for (uVar9 = 0; (_Memory != (int *)0x0 && (uVar9 < (uint)((int)piVar8 - (int)_Memory >> 5)));
          uVar9 = uVar9 + 1) {
        FUN_009d9820();
      }
      FUN_009d9820();
      piVar2 = _Memory;
      if (_Memory == (int *)0x0) {
        local_c = 0xffffffff;
        FUN_009c8560(local_178);
        ExceptionList = local_14;
        return;
      }
      while( true ) {
        if (piVar2 == piVar8) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (0x14 < (uint)piVar2[2]) break;
        piVar2 = piVar2 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar2);
    }
    pcVar7 = *(char **)(local_130 + uVar9 * 4);
    pcVar3 = _strrchr(pcVar7,0x5c);
    pcVar5 = pcVar7;
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3 + 1;
    }
    iVar4 = _strncmp(pcVar5,"set_",4);
    if (iVar4 == 0) {
LAB_009c32f5:
      pcVar5 = _strrchr(pcVar7,0x5c);
      if (pcVar5 != (char *)0x0) {
        pcVar7 = pcVar5 + 1;
      }
      pbVar6 = FUN_009de1d0(pcVar7,1);
      if (pbVar6 != (byte *)0x0) {
        local_1c0 = *(float *)(pbVar6 + 0xd0) - *(float *)(pbVar6 + 0xdc);
        local_1c4 = *(float *)(pbVar6 + 0xcc) - *(float *)(pbVar6 + 0xd8);
        local_1c8 = *(float *)(pbVar6 + 200) - *(float *)(pbVar6 + 0xd4);
        local_1b4 = *(float *)(pbVar6 + 0xdc) + *(float *)(pbVar6 + 0xd0);
        local_1b8 = *(float *)(pbVar6 + 0xd8) + *(float *)(pbVar6 + 0xcc);
        local_1bc = *(float *)(pbVar6 + 0xd4) + *(float *)(pbVar6 + 200);
        local_1b0 = local_1c8;
        local_1ac = local_1c4;
        local_1a8 = local_1c0;
        local_1a4 = local_1bc;
        local_1a0 = local_1b8;
        local_19c = local_1b4;
        _sprintf(local_120,"%s: (%f, %f) (%f, %f)\n",pbVar6,(double)local_1c8,(double)local_1c4,
                 (double)local_1bc,(double)local_1b8);
        local_198 = local_18c;
        pcVar7 = local_120;
        local_18c[0] = '\0';
        local_194 = 0;
        local_190 = 0x14;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        _Count = (int)pcVar7 - (int)(local_120 + 1);
        if (0x13 < _Count) {
          local_190 = _Count + 0x20 & 0xffffffe0;
          local_198 = _malloc(local_190);
        }
        _strncpy(local_198,local_120,_Count);
        local_198[_Count] = '\0';
        local_c = CONCAT31(local_c._1_3_,2);
        local_194 = _Count;
        if ((_Memory == (int *)0x0) ||
           ((uint)(local_1cc - (int)_Memory >> 5) <= (uint)((int)piVar8 - (int)_Memory >> 5))) {
          FUN_00439fd0(local_1d8,piVar8,1,&local_198);
          _Memory = local_1d4;
        }
        else {
          FUN_00439ea0(piVar8,1,&local_198);
          local_1d0 = piVar8 + 8;
        }
        piVar8 = local_1d0;
        local_c = CONCAT31(local_c._1_3_,1);
        if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
          _free(local_198);
        }
        FUN_009de3b0(pbVar6);
      }
    }
    else {
      pcVar3 = _strrchr(pcVar7,0x5c);
      pcVar5 = pcVar7;
      if (pcVar3 != (char *)0x0) {
        pcVar5 = pcVar3 + 1;
      }
      iVar4 = _strncmp(pcVar5,"fac_",4);
      if (iVar4 == 0) goto LAB_009c32f5;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}


//// FUNCTION FUN_009c3580 @ 009c3580 ////

/* WARNING: Removing unreachable block (ram,0x009c379f) */

uint __cdecl FUN_009c3580(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *_Memory;
  int iVar4;
  char local_8c [8];
  char *local_84;
  undefined1 local_7c [4];
  int local_78;
  int *local_74;
  int local_70;
  char *local_6c;
  undefined4 local_68;
  int local_64;
  char local_60 [52];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf75e0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  uVar3 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar3 == 0) {
    ExceptionList = local_c;
    return local_24 & 0xffffff00;
  }
  _Memory = operator_new(uVar3 + 1);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 1;
  FUN_009d3ca0(&local_2c,(undefined4 *)_Memory,uVar3 + 1,(undefined1 *)0x0);
  if (local_24 < 0x15) {
    _Memory[uVar3] = '\0';
    pcVar2 = _Memory;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_78 = 0;
    local_74 = (int *)0x0;
    local_70 = 0;
    local_6c = local_60;
    local_4 = 2;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    local_84 = _Memory;
    _strncpy(local_6c,"",0);
    local_68 = 0;
    *local_6c = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005520d0(&local_6c,(int)pcVar2 - (int)(_Memory + 1));
    cVar1 = *_Memory;
    iVar4 = 0;
    while ((cVar1 != '\0' && (iVar4 < (int)uVar3))) {
      if (cVar1 == '\n') {
        if ((local_78 == 0) ||
           ((uint)(local_70 - local_78 >> 5) <= (uint)((int)local_74 - local_78 >> 5))) {
          FUN_00439fd0(local_7c,local_74,1,&local_6c);
        }
        else {
          FUN_00439ea0(local_74,1,&local_6c);
          local_74 = local_74 + 8;
        }
        if (local_64 == 0) {
          local_64 = 0x20;
          local_6c = _malloc(0x20);
        }
        _strncpy(local_6c,"",0);
        local_84 = local_84 + 1;
        local_68 = 0;
        *local_6c = '\0';
        cVar1 = *local_84;
        iVar4 = iVar4 + 1;
      }
      else {
        if (((cVar1 != '\r') && (cVar1 != '\t')) && (cVar1 != ' ')) {
          local_8c[0] = cVar1;
          FUN_004073f0(&local_6c,local_8c,1);
        }
        local_84 = local_84 + 1;
        cVar1 = *local_84;
        iVar4 = iVar4 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_009c3f10 @ 009c3f10 ////

void __fastcall FUN_009c3f10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_009c2790(*(int *)(param_1 + 4),*(int *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_009c3f50 @ 009c3f50 ////

void __thiscall FUN_009c3f50(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf7630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x9249249 < param_1) {
    ExceptionList = &local_10;
    FUN_009c1480();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x1c;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x1c);
    local_8 = 0;
    FUN_009c2800(*(void **)((int)this + 4),*(void **)((int)this + 8),pvVar2);
    if (*(int *)((int)this + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (*(int *)((int)this + 4) != 0) {
      FUN_009c2790(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x1c + (int)pvVar2);
    *(void **)((int)this + 8) = (void *)(iVar3 * 0x1c + (int)pvVar2);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009c4060 @ 009c4060 ////

void * FUN_009c4060(void *param_1,int param_2,void *param_3)

{
  FUN_009c2c30(param_1,param_2,param_3);
  return (void *)(param_2 * 0x1c + (int)param_1);
}


//// FUNCTION FUN_009c4090 @ 009c4090 ////

void FUN_009c4090(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_009c1380(param_1);
  }
  return;
}


//// FUNCTION FUN_009c40c0 @ 009c40c0 ////

void __thiscall FUN_009c40c0(void *this,void *param_1,uint param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint extraout_ECX;
  undefined1 local_38 [4];
  void *local_34;
  undefined4 local_24;
  uint local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf7648;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = (void *)((uint)local_34 & 0xffffff00);
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00405c30(local_38,param_3,0,0xffffffff);
  iVar1 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)((int)this + 0xc) - iVar1) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_2) {
      FUN_009c1480();
      uVar4 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar4 < iVar1 + param_2) {
      if (0x9249249 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar4 < iVar1 + param_2) {
        iVar1 = FUN_009b7c10((int)this);
        uVar4 = iVar1 + param_2;
      }
      pvVar2 = operator_new(uVar4 * 0x1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar2;
      pvVar3 = FUN_009c28a0(*(void **)((int)this + 4),param_1,pvVar2);
      FUN_009c2c30(pvVar3,param_2,local_38);
      FUN_009c28a0(param_1,*(void **)((int)this + 8),(void *)((int)pvVar3 + param_2 * 0x1c));
      iVar1 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_009c2790(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar4 * 0x1c + (int)pvVar2);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar1) * 0x1c + (int)pvVar2);
      *(void **)((int)this + 4) = pvVar2;
    }
    else {
      local_1c = *(void **)((int)this + 8);
      if ((uint)(((int)local_1c - (int)param_1) / 0x1c) < param_2) {
        FUN_009c28a0(param_1,local_1c,(void *)(param_2 * 0x1c + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009c4060(*(void **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,local_38);
        iVar1 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar1;
        local_8 = 0;
        FUN_009c2740(param_1,(void *)(iVar1 + param_2 * -0x1c),local_38);
      }
      else {
        pvVar2 = (void *)((int)local_1c + param_2 * -0x1c);
        pvVar3 = FUN_009c28a0(pvVar2,local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar3;
        FUN_009c1700(param_1,pvVar2,local_1c);
        FUN_009c2740(param_1,(void *)(param_2 * 0x1c + (int)param_1),local_38);
      }
    }
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009c43f0 @ 009c43f0 ////

void __cdecl FUN_009c43f0(undefined4 *param_1,void *param_2,void *param_3)

{
  void *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  byte *pbVar9;
  void *this_00;
  uint *puVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  void *local_14;
  void *local_10;
  uint *local_8;
  void *local_4;
  
  local_14 = (void *)((((int)param_3 - (int)param_2) / 0x38) * 0x1c + (int)param_2);
  FUN_009c3130((int)param_2,local_14,(void *)((int)param_3 + -0x1c));
  local_10 = (void *)((int)local_14 + 0x1c);
  if (param_2 < local_14) {
    puVar6 = (uint *)((int)local_14 + -8);
    do {
      uVar4 = puVar6[7];
      if (puVar6[8] < 0x10) {
        puVar10 = puVar6 + 3;
      }
      else {
        puVar10 = (uint *)puVar6[3];
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
LAB_009c4488:
        if (uVar5 < uVar4) break;
        uVar1 = (uint)(uVar5 != uVar4);
      }
      else {
        uVar3 = uVar5;
        if (uVar4 <= uVar5) {
          uVar3 = uVar4;
        }
        if (puVar6[1] < 0x10) {
          puVar8 = puVar6 + -4;
        }
        else {
          puVar8 = (uint *)puVar6[-4];
        }
        bVar12 = false;
        uVar1 = 0;
        bVar13 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar12 = (byte)*puVar8 < (byte)*puVar10;
          bVar13 = (byte)*puVar8 == (byte)*puVar10;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (bVar13);
        if (!bVar13) {
          uVar1 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar1 == 0) goto LAB_009c4488;
      }
      if ((int)uVar1 < 0) break;
      if (puVar6[1] < 0x10) {
        puVar10 = puVar6 + -4;
      }
      else {
        puVar10 = (uint *)puVar6[-4];
      }
      uVar5 = puVar6[7];
      if (uVar4 < puVar6[7]) {
        uVar5 = uVar4;
      }
      if (uVar5 == 0) {
LAB_009c44d7:
        if (uVar5 < *puVar6) break;
        uVar3 = (uint)(uVar5 != *puVar6);
      }
      else {
        uVar4 = *puVar6;
        if (uVar5 < *puVar6) {
          uVar4 = uVar5;
        }
        if (puVar6[8] < 0x10) {
          puVar8 = puVar6 + 3;
        }
        else {
          puVar8 = (uint *)puVar6[3];
        }
        bVar12 = false;
        uVar3 = 0;
        bVar13 = true;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar12 = (byte)*puVar8 < (byte)*puVar10;
          bVar13 = (byte)*puVar8 == (byte)*puVar10;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        } while (bVar13);
        if (!bVar13) {
          uVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar3 == 0) goto LAB_009c44d7;
      }
      if ((int)uVar3 < 0) break;
      local_14 = (void *)((int)local_14 - 0x1c);
      puVar6 = puVar6 + -7;
    } while (param_2 < local_14);
  }
  if (local_10 < param_3) {
    uVar4 = *(uint *)((int)local_14 + 0x14);
    do {
      pbVar7 = (byte *)((int)local_14 + 4);
      pbVar11 = pbVar7;
      if (0xf < *(uint *)((int)local_14 + 0x18)) {
        pbVar11 = *(byte **)pbVar7;
      }
      uVar5 = *(uint *)((int)local_10 + 0x14);
      if (uVar5 == 0) {
LAB_009c457a:
        if (uVar5 < uVar4) break;
        uVar1 = (uint)(uVar5 != uVar4);
      }
      else {
        uVar3 = uVar4;
        if (uVar5 < uVar4) {
          uVar3 = uVar5;
        }
        if (*(uint *)((int)local_10 + 0x18) < 0x10) {
          pbVar9 = (byte *)((int)local_10 + 4);
        }
        else {
          pbVar9 = *(byte **)((int)local_10 + 4);
        }
        bVar12 = false;
        uVar1 = 0;
        bVar13 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar12 = *pbVar9 < *pbVar11;
          bVar13 = *pbVar9 == *pbVar11;
          pbVar9 = pbVar9 + 1;
          pbVar11 = pbVar11 + 1;
        } while (bVar13);
        if (!bVar13) {
          uVar1 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar1 == 0) goto LAB_009c457a;
      }
      if ((int)uVar1 < 0) break;
      if (*(uint *)((int)local_10 + 0x18) < 0x10) {
        pbVar11 = (byte *)((int)local_10 + 4);
      }
      else {
        pbVar11 = *(byte **)((int)local_10 + 4);
      }
      uVar3 = *(uint *)((int)local_14 + 0x14);
      if (uVar4 < *(uint *)((int)local_14 + 0x14)) {
        uVar3 = uVar4;
      }
      if (uVar3 == 0) {
LAB_009c45de:
        if (uVar3 < uVar5) break;
        uVar2 = (uint)(uVar3 != uVar5);
      }
      else {
        uVar1 = uVar3;
        if (uVar5 <= uVar3) {
          uVar1 = uVar5;
        }
        if (0xf < *(uint *)((int)local_14 + 0x18)) {
          pbVar7 = *(byte **)pbVar7;
        }
        bVar12 = false;
        uVar2 = 0;
        bVar13 = true;
        do {
          if (uVar1 == 0) break;
          uVar1 = uVar1 - 1;
          bVar12 = *pbVar7 < *pbVar11;
          bVar13 = *pbVar7 == *pbVar11;
          pbVar7 = pbVar7 + 1;
          pbVar11 = pbVar11 + 1;
        } while (bVar13);
        if (!bVar13) {
          uVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar2 == 0) goto LAB_009c45de;
      }
      if (((int)uVar2 < 0) || (local_10 = (void *)((int)local_10 + 0x1c), param_3 <= local_10))
      break;
    } while( true );
  }
  local_4 = local_14;
  this_00 = local_10;
  this = local_10;
  do {
    while (param_3 <= this) {
LAB_009c472a:
      if (param_2 < local_4) {
        local_8 = (uint *)((int)local_4 + -8);
        do {
          uVar4 = *(uint *)((int)local_14 + 0x14);
          if (*(uint *)((int)local_14 + 0x18) < 0x10) {
            pbVar7 = (byte *)((int)local_14 + 4);
          }
          else {
            pbVar7 = *(byte **)((int)local_14 + 4);
          }
          uVar5 = *local_8;
          if (uVar5 == 0) {
LAB_009c478d:
            if (uVar4 <= uVar5) {
              uVar1 = (uint)(uVar5 != uVar4);
              goto LAB_009c479a;
            }
          }
          else {
            uVar3 = uVar5;
            if (uVar4 <= uVar5) {
              uVar3 = uVar4;
            }
            if (local_8[1] < 0x10) {
              puVar6 = local_8 + -4;
            }
            else {
              puVar6 = (uint *)local_8[-4];
            }
            bVar12 = false;
            uVar1 = 0;
            bVar13 = true;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              bVar12 = (byte)*puVar6 < *pbVar7;
              bVar13 = (byte)*puVar6 == *pbVar7;
              puVar6 = (uint *)((int)puVar6 + 1);
              pbVar7 = pbVar7 + 1;
            } while (bVar13);
            if (!bVar13) {
              uVar1 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            }
            if (uVar1 == 0) goto LAB_009c478d;
LAB_009c479a:
            if (-1 < (int)uVar1) {
              if (local_8[1] < 0x10) {
                puVar6 = local_8 + -4;
              }
              else {
                puVar6 = (uint *)local_8[-4];
              }
              uVar5 = *(uint *)((int)local_14 + 0x14);
              if (uVar4 < *(uint *)((int)local_14 + 0x14)) {
                uVar5 = uVar4;
              }
              if (uVar5 == 0) {
LAB_009c47e4:
                if (uVar5 < *local_8) break;
                uVar3 = (uint)(uVar5 != *local_8);
              }
              else {
                uVar4 = *local_8;
                if (uVar5 < *local_8) {
                  uVar4 = uVar5;
                }
                if (*(uint *)((int)local_14 + 0x18) < 0x10) {
                  pbVar7 = (byte *)((int)local_14 + 4);
                }
                else {
                  pbVar7 = *(byte **)((int)local_14 + 4);
                }
                bVar12 = false;
                uVar3 = 0;
                bVar13 = true;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  bVar12 = *pbVar7 < (byte)*puVar6;
                  bVar13 = *pbVar7 == (byte)*puVar6;
                  pbVar7 = pbVar7 + 1;
                  puVar6 = (uint *)((int)puVar6 + 1);
                } while (bVar13);
                if (!bVar13) {
                  uVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                }
                if (uVar3 == 0) goto LAB_009c47e4;
              }
              if ((int)uVar3 < 0) break;
              local_14 = (void *)((int)local_14 - 0x1c);
              FUN_009c17d0(local_14,(int)(local_8 + -5));
            }
          }
          local_4 = (void *)((int)local_4 - 0x1c);
          local_8 = local_8 + -7;
        } while (param_2 < local_4);
      }
      if (local_4 == param_2) {
        if (this == param_3) {
          *param_1 = local_14;
          param_1[1] = this_00;
          return;
        }
        if (this_00 != this) {
          FUN_009c17d0(local_14,(int)this_00);
        }
        this_00 = (void *)((int)this_00 + 0x1c);
        FUN_009c17d0(local_14,(int)this);
        this = (void *)((int)this + 0x1c);
        local_14 = (void *)((int)local_14 + 0x1c);
      }
      else {
        local_4 = (void *)((int)local_4 - 0x1c);
        if (this == param_3) {
          local_14 = (void *)((int)local_14 + -0x1c);
          if (local_4 != local_14) {
            FUN_009c17d0(local_4,(int)local_14);
          }
          this_00 = (void *)((int)this_00 + -0x1c);
          FUN_009c17d0(local_14,(int)this_00);
        }
        else {
          FUN_009c17d0(this,(int)local_4);
          this = (void *)((int)this + 0x1c);
        }
      }
    }
    uVar4 = *(uint *)((int)this + 0x14);
    pbVar7 = (byte *)((int)this + 4);
    pbVar11 = pbVar7;
    if (0xf < *(uint *)((int)this + 0x18)) {
      pbVar11 = *(byte **)pbVar7;
    }
    uVar5 = *(uint *)((int)local_14 + 0x14);
    local_10 = this_00;
    if (uVar5 == 0) {
LAB_009c4687:
      if (uVar4 <= uVar5) {
        uVar1 = (uint)(uVar5 != uVar4);
        goto LAB_009c4698;
      }
    }
    else {
      uVar3 = uVar5;
      if (uVar4 <= uVar5) {
        uVar3 = uVar4;
      }
      if (*(uint *)((int)local_14 + 0x18) < 0x10) {
        pbVar9 = (byte *)((int)local_14 + 4);
      }
      else {
        pbVar9 = *(byte **)((int)local_14 + 4);
      }
      bVar12 = false;
      uVar1 = 0;
      bVar13 = true;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        bVar12 = *pbVar9 < *pbVar11;
        bVar13 = *pbVar9 == *pbVar11;
        pbVar9 = pbVar9 + 1;
        pbVar11 = pbVar11 + 1;
      } while (bVar13);
      if (!bVar13) {
        uVar1 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (uVar1 == 0) goto LAB_009c4687;
LAB_009c4698:
      if (-1 < (int)uVar1) {
        if (*(uint *)((int)local_14 + 0x18) < 0x10) {
          pbVar11 = (byte *)((int)local_14 + 4);
        }
        else {
          pbVar11 = *(byte **)((int)local_14 + 4);
        }
        uVar3 = *(uint *)((int)this + 0x14);
        if (uVar4 < *(uint *)((int)this + 0x14)) {
          uVar3 = uVar4;
        }
        if (uVar3 == 0) {
LAB_009c46e7:
          if (uVar3 < uVar5) goto LAB_009c472a;
          uVar1 = (uint)(uVar3 != uVar5);
        }
        else {
          uVar4 = uVar5;
          if (uVar3 < uVar5) {
            uVar4 = uVar3;
          }
          if (0xf < *(uint *)((int)this + 0x18)) {
            pbVar7 = *(byte **)pbVar7;
          }
          bVar12 = false;
          uVar1 = 0;
          bVar13 = true;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            bVar12 = *pbVar7 < *pbVar11;
            bVar13 = *pbVar7 == *pbVar11;
            pbVar7 = pbVar7 + 1;
            pbVar11 = pbVar11 + 1;
          } while (bVar13);
          if (!bVar13) {
            uVar1 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          }
          if (uVar1 == 0) goto LAB_009c46e7;
        }
        if ((int)uVar1 < 0) goto LAB_009c472a;
        local_10 = (void *)((int)this_00 + 0x1c);
        FUN_009c17d0(this_00,(int)this);
      }
    }
    this_00 = local_10;
    this = (void *)((int)this + 0x1c);
  } while( true );
}


//// FUNCTION FUN_009c48f0 @ 009c48f0 ////

void __cdecl FUN_009c48f0(void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1;
  while (1 < iVar1 / 0x1c) {
    FUN_009c2e90(param_1,param_2);
    param_2 = param_2 + -0x1c;
    iVar1 = param_2 - (int)param_1;
  }
  return;
}


//// FUNCTION FUN_009c4950 @ 009c4950 ////

void __fastcall FUN_009c4950(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_009c1380(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009c49a0 @ 009c49a0 ////

void __thiscall FUN_009c49a0(void *this,int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1c;
      goto LAB_009c49e9;
    }
  }
  iVar1 = 0;
LAB_009c49e9:
  FUN_009c40c0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_009c4a40 @ 009c4a40 ////

void __cdecl FUN_009c4a40(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *local_8;
  byte *local_4;
  
  iVar1 = (int)param_2 - (int)param_1;
  do {
    iVar1 = iVar1 / 0x1c;
    if (iVar1 < 0x21) {
LAB_009c4b16:
      if (1 < iVar1) {
        FUN_009c3010(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < ((int)param_2 - (int)param_1) / 0x1c) {
          FUN_009c2d40((int)param_1,(int)param_2);
        }
        FUN_009c48f0(param_1,(int)param_2);
        return;
      }
      goto LAB_009c4b16;
    }
    FUN_009c43f0(&local_8,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x1c < ((int)param_2 - (int)local_4) / 0x1c) {
      FUN_009c4a40(param_1,local_8,param_3);
      param_1 = local_4;
    }
    else {
      FUN_009c4a40(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_009c4b70 @ 009c4b70 ////

void __cdecl
FUN_009c4b70(undefined4 *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)param_4 + 4);
    do {
      if ((iVar1 == 0) || ((*(int *)((int)param_4 + 8) - iVar1) / 0x1c == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((int)param_5 - iVar1) / 0x1c;
      }
      FUN_009c40c0(param_4,param_5,1,param_2);
      iVar1 = *(int *)((int)param_4 + 4);
      param_2 = (void *)((int)param_2 + 0x1c);
      param_5 = (void *)(iVar2 * 0x1c + iVar1 + 0x1c);
    } while (param_2 != param_3);
  }
  param_1[1] = param_5;
  *param_1 = param_4;
  return;
}


//// FUNCTION FUN_009c4c00 @ 009c4c00 ////

void __fastcall FUN_009c4c00(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    FUN_009c1380(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009c4c10 @ 009c4c10 ////

void __thiscall FUN_009c4c10(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_009c2c30(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x1c;
    return;
  }
  FUN_009c49a0(this,(int *)&param_1,*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_009c4d00 @ 009c4d00 ////

int __fastcall FUN_009c4d00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf767e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_4 = 2;
  _eh_vector_constructor_iterator_((void *)(param_1 + 0x44),0x10,4,FUN_009c2bc0,FUN_009c1450);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009c4d80 @ 009c4d80 ////

void __cdecl FUN_009c4d80(char *param_1)

{
  undefined1 uVar1;
  byte *this;
  undefined1 local_b4 [168];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_0105eb3a;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf769b;
  pvStack_c = ExceptionList;
  DAT_0105eb3a = 0;
  ExceptionList = &pvStack_c;
  this = FUN_009de1d0(param_1,0);
  FUN_009c4d00((int)local_b4);
  local_4 = 0;
  FUN_00a6a190(local_b4,(char *)this);
  FUN_00a673b0(this,(int)local_b4);
  if (this != (byte *)0x0) {
    FUN_009de3b0(this);
  }
  local_4 = 0xffffffff;
  DAT_0105eb3a = uVar1;
  FUN_00a68a70((int)local_b4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009c4e30 @ 009c4e30 ////

void FUN_009c4e30(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 local_388 [18];
  int local_340;
  int local_33c;
  char local_338 [8];
  char local_330 [264];
  char local_228 [264];
  char local_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf76bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009c89a0(local_388);
  iVar6 = 0;
  local_c = 0;
  FUN_009ca9d0(local_388,"cos_*.msh","Data\\Meshes\\",(undefined1 *)0x1);
  if (local_340 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_33c - local_340 >> 2;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  if (0.0 < fVar2) {
    do {
      __splitpath(*(char **)(local_340 + iVar6 * 4),(char *)0x0,(char *)0x0,local_120,local_228);
      _sprintf(local_330,"%s%s",local_120,local_228);
      FUN_009ac040(local_330);
      iVar4 = _strncmp("cos_",local_330,4);
      if (iVar4 == 0) {
        pcVar5 = local_330;
        pcVar10 = local_330 + 1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar8 = pcVar5 + (int)(local_338 + (1 - (int)pcVar10));
        iVar4 = 8;
        bVar11 = true;
        pcVar7 = "_l1.msh";
        pcVar9 = pcVar8;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar11 = *pcVar7 == *pcVar9;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar4 = 8;
          bVar11 = true;
          pcVar7 = "_l2.msh";
          pcVar9 = pcVar8;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar11 = *pcVar7 == *pcVar9;
            pcVar7 = pcVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar11);
          if (!bVar11) {
            iVar4 = 8;
            bVar11 = true;
            pcVar7 = "_l3.msh";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar11 = *pcVar7 == *pcVar8;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar11);
            if (!bVar11) {
              pcVar8 = pcVar5 + (int)(local_338 + (-1 - (int)pcVar10));
              iVar4 = 10;
              bVar11 = true;
              pcVar7 = "_lod1.msh";
              pcVar9 = pcVar8;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar11 = *pcVar7 == *pcVar9;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar11);
              if (!bVar11) {
                iVar4 = 10;
                bVar11 = true;
                pcVar7 = "_lod2.msh";
                pcVar9 = pcVar8;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar11 = *pcVar7 == *pcVar9;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (bVar11);
                if (!bVar11) {
                  iVar4 = 10;
                  bVar11 = true;
                  pcVar7 = "_lod3.msh";
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar11 = *pcVar7 == *pcVar8;
                    pcVar7 = pcVar7 + 1;
                    pcVar8 = pcVar8 + 1;
                  } while (bVar11);
                  if (!bVar11) {
                    iVar4 = 9;
                    bVar11 = true;
                    pcVar8 = "_fat.msh";
                    pcVar7 = pcVar5 + (int)(local_338 + -(int)pcVar10);
                    do {
                      if (iVar4 == 0) break;
                      iVar4 = iVar4 + -1;
                      bVar11 = *pcVar8 == *pcVar7;
                      pcVar8 = pcVar8 + 1;
                      pcVar7 = pcVar7 + 1;
                    } while (bVar11);
                    if (!bVar11) {
                      iVar4 = 9;
                      bVar11 = true;
                      pcVar8 = "_enh.msh";
                      pcVar10 = pcVar5 + (int)(local_338 + -(int)pcVar10);
                      do {
                        if (iVar4 == 0) break;
                        iVar4 = iVar4 + -1;
                        bVar11 = *pcVar8 == *pcVar10;
                        pcVar8 = pcVar8 + 1;
                        pcVar10 = pcVar10 + 1;
                      } while (bVar11);
                      if (!bVar11) {
                        SetWindowTextA(DAT_0105beb0,local_330);
                        FUN_009d9820();
                        FUN_009c4d80(local_330);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_009d9820();
      iVar6 = iVar6 + 1;
      fVar3 = (float)iVar6;
      if (iVar6 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
    } while (fVar3 < fVar2);
  }
  local_c = 0xffffffff;
  FUN_009c8560(local_388);
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_009c5090 @ 009c5090 ////

undefined4 * __cdecl
FUN_009c5090(undefined4 *param_1,byte *param_2,void *param_3,void *param_4,void *param_5,
            void *param_6,void *param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  pbVar6 = param_2;
  if (param_2 != param_3) {
    param_2 = param_2 + 4;
    do {
      if (param_4 == param_5) break;
      uVar4 = *(uint *)((int)param_4 + 0x14);
      if (*(uint *)((int)param_4 + 0x18) < 0x10) {
        pbVar3 = (byte *)((int)param_4 + 4);
      }
      else {
        pbVar3 = *(byte **)((int)param_4 + 4);
      }
      uVar1 = *(uint *)(pbVar6 + 0x14);
      if (uVar1 == 0) {
LAB_009c5109:
        if (uVar4 <= uVar1) {
          uVar2 = (uint)(uVar1 != uVar4);
          goto LAB_009c5116;
        }
LAB_009c5118:
        iVar8 = *(int *)((int)param_6 + 4);
        if ((iVar8 == 0) || ((*(int *)((int)param_6 + 8) - iVar8) / 0x1c == 0)) {
          iVar8 = 0;
        }
        else {
          iVar8 = ((int)param_7 - iVar8) / 0x1c;
        }
        FUN_009c40c0(param_6,param_7,1,pbVar6);
        param_7 = (void *)(iVar8 * 0x1c + *(int *)((int)param_6 + 4) + 0x1c);
        pbVar6 = pbVar6 + 0x1c;
        param_2 = param_2 + 0x1c;
      }
      else {
        uVar5 = uVar1;
        if (uVar4 <= uVar1) {
          uVar5 = uVar4;
        }
        pbVar7 = param_2;
        if (0xf < *(uint *)(pbVar6 + 0x18)) {
          pbVar7 = *(byte **)param_2;
        }
        bVar9 = false;
        uVar2 = 0;
        bVar10 = true;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          bVar9 = *pbVar7 < *pbVar3;
          bVar10 = *pbVar7 == *pbVar3;
          pbVar7 = pbVar7 + 1;
          pbVar3 = pbVar3 + 1;
        } while (bVar10);
        if (!bVar10) {
          uVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (uVar2 == 0) goto LAB_009c5109;
LAB_009c5116:
        if ((int)uVar2 < 0) goto LAB_009c5118;
        pbVar3 = param_2;
        if (0xf < *(uint *)(pbVar6 + 0x18)) {
          pbVar3 = *(byte **)param_2;
        }
        uVar4 = FUN_0096a0f0(param_4,0,uVar4,pbVar3,*(uint *)(pbVar6 + 0x14));
        if ((int)uVar4 < 0) {
          param_4 = (void *)((int)param_4 + 0x1c);
        }
        else {
          param_2 = param_2 + 0x1c;
          pbVar6 = pbVar6 + 0x1c;
          param_4 = (void *)((int)param_4 + 0x1c);
        }
      }
    } while (pbVar6 != param_3);
  }
  FUN_009c4b70(param_1,pbVar6,param_3,param_6,param_7);
  return param_1;
}


//// FUNCTION FUN_009c5210 @ 009c5210 ////

void __cdecl FUN_009c5210(int param_1,int param_2,int param_3,int param_4,void *param_5)

{
  char cVar1;
  byte *_Memory;
  byte *_Memory_00;
  byte *pbVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined1 local_31c [4];
  void *local_318;
  undefined4 local_308;
  uint local_304;
  undefined1 local_300 [4];
  byte *local_2fc;
  byte *local_2f8;
  undefined4 local_2f4;
  undefined1 local_2f0 [4];
  byte *local_2ec;
  byte *local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0 [2];
  undefined4 local_2d8 [18];
  int local_290;
  int local_28c;
  undefined4 local_280 [18];
  int local_238;
  int local_234;
  char local_228 [264];
  char local_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf7712;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009c89a0(local_2d8);
  local_c = 0;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pcVar6 = (char *)(param_1 + 4);
  }
  else {
    pcVar6 = *(char **)(param_1 + 4);
  }
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    pcVar5 = (char *)(param_2 + 4);
  }
  else {
    pcVar5 = *(char **)(param_2 + 4);
  }
  FUN_009ca9d0(local_2d8,pcVar5,pcVar6,(undefined1 *)0x1);
  if ((local_290 != 0) && (local_28c - local_290 >> 2 != 0)) {
    FUN_009c89a0(local_280);
    local_c._0_1_ = 1;
    if (*(uint *)(param_3 + 0x18) < 0x10) {
      pcVar6 = (char *)(param_3 + 4);
    }
    else {
      pcVar6 = *(char **)(param_3 + 4);
    }
    if (*(uint *)(param_4 + 0x18) < 0x10) {
      pcVar5 = (char *)(param_4 + 4);
    }
    else {
      pcVar5 = *(char **)(param_4 + 4);
    }
    FUN_009ca9d0(local_280,pcVar5,pcVar6,(undefined1 *)0x1);
    if ((local_238 != 0) && (local_234 - local_238 >> 2 != 0)) {
      local_2fc = (byte *)0x0;
      local_2f8 = (byte *)0x0;
      local_2f4 = 0;
      local_c._0_1_ = 2;
      if (local_290 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = local_28c - local_290 >> 2;
      }
      FUN_009c3f50(local_300,uVar4);
      local_2ec = (byte *)0x0;
      local_2e8 = (byte *)0x0;
      local_2e4 = 0;
      local_c._0_1_ = 3;
      if (local_238 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = local_234 - local_238 >> 2;
      }
      FUN_009c3f50(local_2f0,uVar4);
      for (uVar4 = 0; (local_290 != 0 && (uVar4 < (uint)(local_28c - local_290 >> 2)));
          uVar4 = uVar4 + 1) {
        pcVar6 = *(char **)(local_290 + uVar4 * 4);
        pcVar5 = _strrchr(pcVar6,0x5c);
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5 + 1;
        }
        pcVar5 = local_228;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        __splitpath(pcVar6,(char *)0x0,(char *)0x0,local_228,(char *)0x0);
        pcVar6 = local_228;
        local_304 = 0xf;
        local_308 = 0;
        local_318 = (void *)((uint)local_318 & 0xffffff00);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00405d50(local_31c,(undefined4 *)local_228,(int)pcVar6 - (int)(local_228 + 1));
        local_c._0_1_ = 4;
        FUN_009c4c10(local_300,local_31c);
        local_c._0_1_ = 3;
        uVar3 = (undefined1)local_c;
        local_c._0_1_ = 3;
        if (0xf < local_304) {
                    /* WARNING: Subroutine does not return */
          _free(local_318);
        }
        local_308 = 0;
        local_304 = 0xf;
        local_318 = (void *)((uint)local_318 & 0xffffff00);
        local_c._0_1_ = uVar3;
      }
      for (uVar4 = 0;
          (_Memory = local_2fc, local_238 != 0 && (uVar4 < (uint)(local_234 - local_238 >> 2)));
          uVar4 = uVar4 + 1) {
        pcVar6 = *(char **)(local_238 + uVar4 * 4);
        pcVar5 = _strrchr(pcVar6,0x5c);
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5 + 1;
        }
        pcVar5 = local_120;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + 4;
        }
        __splitpath(pcVar6,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
        pcVar6 = local_120;
        local_304 = 0xf;
        local_308 = 0;
        local_318 = (void *)((uint)local_318 & 0xffffff00);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00405d50(local_31c,(undefined4 *)local_120,(int)pcVar6 - (int)(local_120 + 1));
        local_c._0_1_ = 5;
        FUN_009c4c10(local_2f0,local_31c);
        local_c._0_1_ = 3;
        uVar3 = (undefined1)local_c;
        local_c._0_1_ = 3;
        if (0xf < local_304) {
                    /* WARNING: Subroutine does not return */
          _free(local_318);
        }
        local_308 = 0;
        local_304 = 0xf;
        local_318 = (void *)((uint)local_318 & 0xffffff00);
        local_c._0_1_ = uVar3;
      }
      FUN_009c4a40(local_2fc,local_2f8,((int)local_2f8 - (int)local_2fc) / 0x1c);
      pbVar2 = local_2e8;
      _Memory_00 = local_2ec;
      FUN_009c4a40(local_2ec,local_2e8,((int)local_2e8 - (int)local_2ec) / 0x1c);
      FUN_009c5090(local_2e0,_Memory,local_2f8,_Memory_00,pbVar2,param_5,
                   *(void **)((int)param_5 + 4));
      if (_Memory_00 != (byte *)0x0) {
        FUN_009c2790((int)_Memory_00,(int)pbVar2);
                    /* WARNING: Subroutine does not return */
        _free(_Memory_00);
      }
      if (_Memory != (byte *)0x0) {
        FUN_009c2790((int)_Memory,(int)local_2f8);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_009c8560(local_280);
  }
  local_c = 0xffffffff;
  FUN_009c8560(local_2d8);
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_009c5640 @ 009c5640 ////

void __cdecl FUN_009c5640(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char ***pppcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_94 [4];
  void *local_90;
  int local_8c;
  undefined4 local_88;
  char *local_84;
  int local_80;
  uint local_7c;
  char local_78 [20];
  undefined1 local_64 [4];
  char **local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf774e;
  local_c = ExceptionList;
  local_90 = (void *)0x0;
  local_8c = 0;
  local_88 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_009c5210(param_1,param_2,param_3,param_4,local_94);
  FUN_00a60930();
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pcVar5 = (char *)(param_1 + 4);
  }
  else {
    pcVar5 = *(char **)(param_1 + 4);
  }
  local_84 = local_78;
  local_78[0] = '\0';
  local_80 = 0;
  local_7c = 0x14;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_84,pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
  local_4._0_1_ = 1;
  if (local_84[local_80 + -1] != '\\') {
    FUN_004073f0(&local_84,"\\",1);
  }
  uVar6 = 0;
  iVar7 = 0;
  while( true ) {
    if ((local_90 == (void *)0x0) || ((uint)((local_8c - (int)local_90) / 0x1c) <= uVar6)) {
      FUN_00a62130();
      if (0x14 < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_84);
      }
      if (local_90 != (void *)0x0) {
        FUN_009c2790((int)local_90,local_8c);
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      ExceptionList = local_c;
      return;
    }
    pvVar3 = FUN_009c2540(local_44,local_84,iVar7 + (int)local_90);
    local_4._0_1_ = 2;
    pvVar3 = FUN_009c25f0(local_28,pvVar3,".");
    local_4._0_1_ = 3;
    FUN_009c26a0(local_64,pvVar3,param_2);
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    local_4._0_1_ = 5;
    if (0xf < local_2c) break;
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pppcVar4 = (char ***)local_60[0];
    if (local_4c < 0x10) {
      pppcVar4 = local_60;
    }
    FUN_00a627e0((char *)pppcVar4,-1);
    local_4._0_1_ = 1;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    uVar6 = uVar6 + 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (char **)((uint)local_60[0] & 0xffffff00);
    iVar7 = iVar7 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_009c58a0 @ 009c58a0 ////

void FUN_009c58a0(void)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  int *this;
  void *pvVar4;
  int *piVar5;
  void *this_00;
  byte *this_01;
  undefined4 uVar6;
  float *pfVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  LONG LVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float10 fVar22;
  char *pcVar23;
  undefined4 uStack_584;
  undefined4 *puStack_580;
  uint uStack_57c;
  int *piStack_578;
  int iStack_574;
  char *pcStack_570;
  uint uStack_56c;
  uint uStack_568;
  char acStack_564 [20];
  undefined1 auStack_550 [4];
  void *pvStack_54c;
  undefined4 uStack_53c;
  uint uStack_538;
  undefined1 auStack_534 [4];
  void *pvStack_530;
  undefined4 uStack_520;
  uint uStack_51c;
  undefined1 auStack_518 [4];
  void *pvStack_514;
  undefined4 uStack_504;
  uint uStack_500;
  char *pcStack_4fc;
  undefined4 uStack_4f8;
  uint uStack_4f4;
  char acStack_4f0 [20];
  char *pcStack_4dc;
  undefined4 uStack_4d8;
  uint uStack_4d4;
  char acStack_4d0 [20];
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  undefined1 auStack_4b0 [4];
  void *pvStack_4ac;
  undefined4 uStack_49c;
  uint uStack_498;
  float fStack_494;
  undefined4 auStack_488 [18];
  int iStack_440;
  int iStack_43c;
  char acStack_430 [264];
  char acStack_328 [264];
  char acStack_220 [256];
  char acStack_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00cf77b8;
  local_14 = ExceptionList;
  DAT_01050c5a = 1;
  if (DAT_0105c404 == DAT_0105c400) {
    ExceptionList = &local_14;
    FUN_00a60930();
    FUN_00a62bd0((byte *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Sets\\",'\x01');
    OccupancyGrid_InitGlobals();
    this = FUN_00433eb0();
    iVar12 = *this;
    piStack_578 = this;
    FUN_009de1d0("Sky_box.msh",1);
    (**(code **)(iVar12 + 0x18))();
    pvVar4 = (void *)FUN_0097e350(this,0);
    FUN_009de3b0(pvVar4);
    piVar5 = FUN_00433eb0();
    piVar5[0x27] = piVar5[0x27] | 0x180;
    pvVar4 = FUN_0099bb50("thumb_sets",0x33545844,0x80,0x80,'\0');
    this_00 = FUN_0099bb50("thumb_sets_uncompress",0x15,0x80,0x80,'\0');
    DAT_0105cdf1 = 0;
    iStack_574 = 0;
    do {
      iVar12 = iStack_574;
      FUN_009c89a0(auStack_488);
      iStack_c._0_1_ = 0;
      iStack_c._1_3_ = 0;
      if (iVar12 == 1) {
        pcVar23 = "set_*.msh";
LAB_009c59d5:
        FUN_009ca9d0(auStack_488,pcVar23,"Data\\Meshes\\",(undefined1 *)0x1);
      }
      else if (iVar12 == 0) {
        pcVar23 = "fac_*.msh";
        goto LAB_009c59d5;
      }
      uStack_57c = 0;
      while ((iStack_440 != 0 && (uStack_57c < (uint)(iStack_43c - iStack_440 >> 2)))) {
        __splitpath(*(char **)(iStack_440 + uStack_57c * 4),(char *)0x0,(char *)0x0,acStack_328,
                    acStack_120);
        _sprintf(acStack_430,"%s%s");
        FUN_009ac040(acStack_430);
        pcVar23 = acStack_430;
        do {
          pcVar14 = pcVar23;
          pcVar23 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        pcVar14 = pcVar14 + -7;
        iVar12 = 8;
        bVar18 = true;
        pcVar23 = pcVar14;
        pcVar16 = "_l1.msh";
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar18 = *pcVar23 == *pcVar16;
          pcVar23 = pcVar23 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar18);
        iVar12 = 8;
        bVar19 = true;
        pcVar23 = pcVar14;
        pcVar16 = "_l2.msh";
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar19 = *pcVar23 == *pcVar16;
          pcVar23 = pcVar23 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar19);
        iVar12 = 8;
        bVar20 = true;
        pcVar23 = pcVar14;
        pcVar16 = "_l3.msh";
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar20 = *pcVar23 == *pcVar16;
          pcVar23 = pcVar23 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar20);
        iVar12 = 8;
        bVar21 = true;
        pcVar23 = "_l4.msh";
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          bVar21 = *pcVar14 == *pcVar23;
          pcVar14 = pcVar14 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar21);
        if ((bVar21) || (bVar20 || (bVar19 || bVar18))) {
          uStack_57c = uStack_57c + 1;
          this = piStack_578;
          iVar12 = iStack_574;
        }
        else {
          this_01 = FUN_009de1d0(acStack_430,1);
          (**(code **)(*piVar5 + 0x18))();
          puVar10 = (undefined4 *)piVar5[0x1e];
          if (puVar10 != (undefined4 *)0x0) {
            FUN_00a01ff0(puVar10);
                    /* WARNING: Subroutine does not return */
            _free(puVar10);
          }
          FUN_009e4330(piVar5);
          DAT_0105bec4 = 1;
          uVar6 = FUN_009a6fb0('\x01');
          if ((char)uVar6 != '\0') {
            pfVar7 = (float *)FUN_009da5f0(this_01,(byte *)"thumbnail");
            if (pfVar7 == (float *)0x0) {
              fVar2 = *(float *)(this_01 + 0xe0);
              FUN_009a6070(&DAT_0105c2e8,1.0);
              DAT_0105c3e4 = fVar2 * 3.0;
              FUN_009a5390(0x105c2e8);
              fVar22 = FUN_004012c0(1.2217306);
              FUN_009a1950(&DAT_0105c2e8,(float)fVar22);
              fStack_494 = fVar2 * -1.0;
              fStack_4b4 = fVar2 * 0.7 + *(float *)(this_01 + 0xd0);
              fStack_4b8 = fStack_494 + *(float *)(this_01 + 0xcc);
              fStack_4bc = fStack_494 + *(float *)(this_01 + 200);
              FUN_009a2830(&DAT_0105c2e8,&fStack_4bc,(float *)(this_01 + 200),0.0);
            }
            else {
              FUN_009a2d40(pfVar7);
            }
            FUN_009a56b0(0xff000000,'\x01');
            FUN_009a1410();
            (**(code **)(*piStack_578 + 0x10))();
            DAT_0105f8cc = 1;
            (**(code **)(*piVar5 + 0x10))();
            FUN_009a1460();
            FUN_009a56e0((int)this_00);
            FUN_009a6fb0('\0');
          }
          DAT_0105bec4 = 0;
          if (this_01 != (byte *)0x0) {
            FUN_009de3b0(this_01);
          }
          uStack_584 = 0;
          puStack_580 = (undefined4 *)0x0;
          MediaPlayer_LockVideoBuffer(this_00,&uStack_584);
          if (puStack_580 != (undefined4 *)0x0) {
            puVar8 = (undefined1 *)((int)puStack_580 + 3);
            iVar12 = 0x80;
            do {
              iVar13 = 0x80;
              do {
                *puVar8 = 0xff;
                puVar8 = puVar8 + 4;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          MediaPlayer_UnlockVideoBuffer((int)this_00);
          FUN_0099a9b0(pvVar4,0,(uint)this_00,0);
          MediaPlayer_LockVideoBuffer(pvVar4,&uStack_584);
          uVar3 = (undefined1)iStack_c;
          if (puStack_580 != (undefined4 *)0x0) {
            pcStack_4fc = acStack_4f0;
            acStack_4f0[0] = '\0';
            uStack_4f8 = 0;
            uStack_4f4 = 0x40;
            pcStack_4fc = _malloc(0x40);
            _strncpy(pcStack_4fc,"Data\\Textures\\BluePrint\\set_thumb.dds",0x25);
            uStack_4f8 = 0x25;
            pcStack_4fc[0x25] = '\0';
            iStack_c._0_1_ = 1;
            uVar9 = FUN_009d3720(&pcStack_4fc);
            iStack_c._0_1_ = 0;
            uVar3 = (undefined1)iStack_c;
            iStack_c._0_1_ = 0;
            if (0x14 < uStack_4f4) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_4fc);
            }
            if (uVar9 == 0x4080) {
              _sprintf(acStack_220,"Data\\Textures\\Thumbs\\Sets\\%s.dds");
              puVar10 = operator_new(0x4080);
              pcStack_4dc = acStack_4d0;
              acStack_4d0[0] = '\0';
              uStack_4d8 = 0;
              uStack_4d4 = 0x40;
              pcStack_4dc = _malloc(0x40);
              _strncpy(pcStack_4dc,"Data\\Textures\\BluePrint\\set_thumb.dds",0x25);
              uStack_4d8 = 0x25;
              pcStack_4dc[0x25] = '\0';
              iStack_c = CONCAT31(iStack_c._1_3_,2);
              FUN_009d3ca0(&pcStack_4dc,puVar10,0x4080,(undefined1 *)0x0);
              if (0x14 < uStack_4d4) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_4dc);
              }
              puVar15 = puStack_580;
              puVar17 = puVar10 + 0x20;
              for (iVar12 = 0x1000; iVar12 != 0; iVar12 = iVar12 + -1) {
                *puVar17 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              }
              pcStack_570 = acStack_564;
              pcVar23 = acStack_220;
              acStack_564[0] = '\0';
              uStack_56c = 0;
              uStack_568 = 0x14;
              do {
                cVar1 = *pcVar23;
                pcVar23 = pcVar23 + 1;
              } while (cVar1 != '\0');
              uVar9 = (int)pcVar23 - (int)(acStack_220 + 1);
              if (0x13 < uVar9) {
                uStack_568 = uVar9 + 0x20 & 0xffffffe0;
                pcStack_570 = _malloc(uStack_568);
              }
              _strncpy(pcStack_570,acStack_220,uVar9);
              pcStack_570[uVar9] = '\0';
              iStack_c._0_1_ = 3;
              uStack_56c = uVar9;
              FUN_009d4370(&pcStack_570,puVar10,0x4080);
              iStack_c = (uint)iStack_c._1_3_ << 8;
              if (0x14 < uStack_568) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_570);
              }
                    /* WARNING: Subroutine does not return */
              _free(puVar10);
            }
          }
          iStack_c._0_1_ = uVar3;
          MediaPlayer_UnlockVideoBuffer((int)pvVar4);
          FUN_009e45b0(piVar5);
          uStack_57c = uStack_57c + 1;
          this = piStack_578;
          iVar12 = iStack_574;
        }
      }
      iStack_c = 0xffffffff;
      FUN_009c8560(auStack_488);
      iStack_574 = iVar12 + 1;
    } while (iStack_574 < 2);
    if (this_00 != (void *)0x0) {
      FUN_0099b400(this_00);
    }
    if (pvVar4 != (void *)0x0) {
      FUN_0099b400(pvVar4);
    }
    LVar11 = InterlockedDecrement(piVar5 + 4);
    uVar3 = DAT_0105b588;
    if (LVar11 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*piVar5)();
    }
    DAT_0105b588 = uVar3;
    LVar11 = InterlockedDecrement(this + 4);
    uVar3 = DAT_0105b588;
    if (LVar11 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*this)();
    }
    DAT_0105b588 = uVar3;
    FUN_009e4ce0();
    uVar9 = 0x40;
    pcVar23 = _malloc(0x40);
    _strncpy(pcVar23,"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Sets\\",0x2e);
    pcVar23[0x2e] = '\0';
    FUN_00a624d0(pcVar23,0x2e,uVar9);
    FUN_00a5f900();
    FUN_00a62130();
    uStack_498 = 0xf;
    uStack_49c = 0;
    pvStack_4ac = (void *)((uint)pvStack_4ac & 0xffffff00);
    FUN_00405d50(auStack_4b0,&PTR_DAT_00d1e2c0,3);
    iStack_c = 4;
    uStack_51c = 0xf;
    uStack_520 = 0;
    pvStack_530 = (void *)((uint)pvStack_530 & 0xffffff00);
    FUN_00405d50(auStack_534,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Sets",
                 0x2d);
    iStack_c._0_1_ = 5;
    uStack_500 = 0xf;
    uStack_504 = 0;
    pvStack_514 = (void *)((uint)pvStack_514 & 0xffffff00);
    FUN_00405d50(auStack_518,(undefined4 *)&DAT_00d72830,3);
    iStack_c._0_1_ = 6;
    uStack_538 = 0xf;
    uStack_53c = 0;
    pvStack_54c = (void *)((uint)pvStack_54c & 0xffffff00);
    FUN_00405d50(auStack_550,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Meshes",0x1f);
    iStack_c = CONCAT31(iStack_c._1_3_,7);
    FUN_009c5640((int)auStack_534,(int)auStack_4b0,(int)auStack_550,(int)auStack_518);
    if (0xf < uStack_538) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_54c);
    }
    uStack_538 = 0xf;
    uStack_53c = 0;
    pvStack_54c = (void *)((uint)pvStack_54c & 0xffffff00);
    if (0xf < uStack_500) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_514);
    }
    uStack_500 = 0xf;
    uStack_504 = 0;
    pvStack_514 = (void *)((uint)pvStack_514 & 0xffffff00);
    if (0xf < uStack_51c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_530);
    }
    uStack_51c = 0xf;
    uStack_520 = 0;
    pvStack_530 = (void *)((uint)pvStack_530 & 0xffffff00);
    if (0xf < uStack_498) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4ac);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_009c69c0 @ 009c69c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009c69c0(char param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *this;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *this_00;
  byte *pbVar8;
  void *this_01;
  void *this_02;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  LONG LVar12;
  uint uVar13;
  float10 fVar14;
  char *pcVar15;
  undefined4 *local_680;
  undefined4 uStack_674;
  undefined4 *puStack_670;
  undefined4 *local_66c;
  int *local_668;
  undefined4 uStack_664;
  float fStack_660;
  int *local_65c;
  float fStack_658;
  float fStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  char *pcStack_648;
  uint uStack_644;
  uint uStack_640;
  char acStack_63c [20];
  undefined4 uStack_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  undefined1 auStack_618 [4];
  void *pvStack_614;
  undefined4 uStack_604;
  uint uStack_600;
  undefined1 auStack_5fc [4];
  void *pvStack_5f8;
  undefined4 uStack_5e8;
  uint uStack_5e4;
  undefined1 auStack_5e0 [4];
  void *pvStack_5dc;
  undefined4 uStack_5cc;
  uint uStack_5c8;
  char *pcStack_5c4;
  undefined4 uStack_5c0;
  uint uStack_5bc;
  char acStack_5b8 [20];
  char *pcStack_5a4;
  undefined4 uStack_5a0;
  uint uStack_59c;
  char acStack_598 [20];
  float local_584;
  float local_580;
  undefined4 local_57c;
  undefined4 local_578;
  float local_574;
  undefined4 local_570;
  float local_560 [3];
  undefined1 auStack_554 [4];
  void *pvStack_550;
  undefined4 uStack_540;
  uint uStack_53c;
  undefined4 local_538 [18];
  int local_4f0;
  int local_4ec;
  char local_4e4 [260];
  char local_3e0 [260];
  char acStack_2dc [256];
  uint local_1dc [51];
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf78a3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00a60930();
  FUN_00a62bd0((byte *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Heads\\",'\x01');
  this = FUN_00433eb0();
  local_65c = this;
  piVar4 = FUN_00433eb0();
  local_668 = piVar4;
  puVar5 = FUN_009cfaa0("m_bodyless.cos");
  local_66c = puVar5;
  puVar6 = FUN_009cfaa0("f_bodyless.cos");
  puVar7 = FUN_009d30f0((int)piVar4,0,1,(uint *)0x0,'\0');
  this_00 = FUN_009d30f0((int)this,1,1,(uint *)0x0,'\0');
  FUN_009d2c50(puVar7,puVar5,'\x01',-1.0,-1.0);
  FUN_009d2c50(this_00,puVar6,'\x01',-1.0,-1.0);
  pbVar8 = Anim_LoadByName("sm_pose.anm");
  FUN_0097e2b0((int)piVar4);
  FUN_00a019d0((void *)piVar4[0x1e],pbVar8,0xffffffff);
  FUN_0097e2b0((int)this);
  FUN_00a019d0((void *)this[0x1e],pbVar8,0xffffffff);
  if (pbVar8 != (byte *)0x0) {
    FUN_00985de0(pbVar8);
  }
  this_01 = FUN_0099bb50("GenerateAllHeadsThumbs",0x31545844,0x100,0x80,'\0');
  this_02 = FUN_0099bb50("",0x15,0x100,0x80,'\0');
  local_680 = (undefined4 *)0x0;
  if (param_1 != '\0') {
    local_680 = (undefined4 *)FUN_00a449e0();
    local_680[0x20] = local_680[0x20] | 1;
    pvVar9 = FUN_0099bb50("fx_thumbs_head.dds",0,0,0,'\0');
    FUN_00a44920(local_680,(int)pvVar9);
    if (pvVar9 != (void *)0x0) {
      FUN_0099b400(pvVar9);
    }
  }
  FUN_009c89a0(local_538);
  local_4 = 0;
  DAT_0105cdf1 = 0;
  FUN_009ca9d0(local_538,"head_*.hd","Data\\Heads\\",(undefined1 *)0x1);
  for (uVar13 = 0; (local_4f0 != 0 && (uVar13 < (uint)(local_4ec - local_4f0 >> 2)));
      uVar13 = uVar13 + 1) {
    __splitpath(*(char **)(local_4f0 + uVar13 * 4),(char *)0x0,(char *)0x0,local_3e0,local_110);
    _sprintf(local_4e4,"%s%s");
    FUN_009ac040(local_4e4);
    iVar10 = _strncmp(local_4e4,"head_",5);
    if (iVar10 == 0) {
      iVar10 = _strncmp(local_4e4,"head_m",6);
      puVar5 = this_00;
      if (iVar10 == 0) {
        this = piVar4;
        puVar5 = puVar7;
      }
      this[0x27] = this[0x27] | 8;
      FUN_00980620(this,local_680);
      FUN_009d2990(local_1dc,local_4e4,(char *)0x0,0.0);
      local_4._0_1_ = 1;
      FUN_009d2880(puVar5,local_1dc);
      FUN_009d10d0();
      FUN_009a6070(&DAT_0105c2e8,9.0);
      DAT_0105c3e4 = 0x42c80000;
      FUN_009a5390(0x105c2e8);
      fVar14 = FUN_004012c0(0.052359883);
      FUN_009a1950(&DAT_0105c2e8,(float)fVar14);
      local_580 = _DAT_00e682b0 * -0.5;
      local_57c = DAT_00e682ac;
      local_560[0] = DAT_00e682a8;
      local_560[2] = (float)DAT_00e682ac;
      local_584 = 0.0;
      local_560[1] = 0.0;
      FUN_009a2830(&DAT_0105c2e8,local_560,&local_584,0.0);
      iVar10 = 2;
      do {
        FUN_009a56b0(0xffa7b8d6,'\x01');
        FUN_009a1410();
        FUN_004012c0(0.0);
        local_578 = 0;
        local_574 = 0.0;
        local_570 = 0;
        (**(code **)(*this + 0x20))();
        (**(code **)(*this + 8))();
        FUN_004012c0(1.5707964);
        local_574 = -_DAT_00e682b0;
        local_578 = 0;
        local_570 = 0;
        (**(code **)(*this + 0x20))();
        (**(code **)(*this + 8))();
        FUN_009a1460();
        uVar2 = DAT_0105ca60;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      fStack_620 = DAT_0105c400;
      uStack_664 = 0;
      uStack_628 = 0;
      fStack_658 = DAT_0105c400;
      fStack_654 = (DAT_0105c404 - DAT_0105c400 * 0.5) * 0.5;
      fStack_660 = DAT_0105c404 - fStack_654;
      DAT_0105ca60 = DAT_0105ca68;
      fStack_624 = fStack_660;
      fStack_61c = fStack_654;
      if (param_1 == '\0') {
        FUN_009a56e0((int)this_01);
      }
      else {
        FUN_009a56e0((int)this_02);
        uStack_650 = 0;
        uStack_64c = 0;
        MediaPlayer_LockVideoBuffer(this_02,&uStack_650);
        MediaPlayer_UnlockVideoBuffer((int)this_02);
        FUN_0099a9b0(this_01,0,(uint)this_02,0);
      }
      uStack_674 = 0;
      puStack_670 = (undefined4 *)0x0;
      DAT_0105ca60 = uVar2;
      MediaPlayer_LockVideoBuffer(this_01,&uStack_674);
      uVar3 = (undefined1)local_4;
      if (puStack_670 != (undefined4 *)0x0) {
        pcStack_5a4 = acStack_598;
        acStack_598[0] = '\0';
        uStack_5a0 = 0;
        uStack_59c = 0x40;
        pcStack_5a4 = _malloc(0x40);
        _strncpy(pcStack_5a4,"Data\\Textures\\BluePrint\\template_head_photo.dds",0x2f);
        uStack_5a0 = 0x2f;
        pcStack_5a4[0x2f] = '\0';
        local_4._0_1_ = 2;
        uVar11 = FUN_009d3720(&pcStack_5a4);
        local_4._0_1_ = 1;
        uVar3 = (undefined1)local_4;
        local_4._0_1_ = 1;
        if (0x14 < uStack_59c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_5a4);
        }
        if (uVar11 == 0x4080) {
          if (param_1 == '\0') {
            pcVar15 = "Data\\Textures\\Thumbs\\Heads\\%s.dds";
          }
          else {
            pcVar15 = "Data\\Textures\\Thumbs\\Heads\\%s_h.dds";
          }
          _sprintf(acStack_2dc,pcVar15);
          puVar5 = operator_new(0x4080);
          pcStack_5c4 = acStack_5b8;
          acStack_5b8[0] = '\0';
          uStack_5c0 = 0;
          uStack_5bc = 0x40;
          pcStack_5c4 = _malloc(0x40);
          _strncpy(pcStack_5c4,"Data\\Textures\\BluePrint\\template_head_photo.dds",0x2f);
          uStack_5c0 = 0x2f;
          pcStack_5c4[0x2f] = '\0';
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_009d3ca0(&pcStack_5c4,puVar5,0x4080,(undefined1 *)0x0);
          if (0x14 < uStack_5bc) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_5c4);
          }
          puVar6 = puStack_670;
          puVar7 = puVar5 + 0x20;
          for (iVar10 = 0x1000; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          pcStack_648 = acStack_63c;
          pcVar15 = acStack_2dc;
          acStack_63c[0] = '\0';
          uStack_644 = 0;
          uStack_640 = 0x14;
          do {
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          uVar13 = (int)pcVar15 - (int)(acStack_2dc + 1);
          if (0x13 < uVar13) {
            uStack_640 = uVar13 + 0x20 & 0xffffffe0;
            pcStack_648 = _malloc(uStack_640);
          }
          _strncpy(pcStack_648,acStack_2dc,uVar13);
          pcStack_648[uVar13] = '\0';
          local_4._0_1_ = 4;
          uStack_644 = uVar13;
          FUN_009d4370(&pcStack_648,puVar5,0x4080);
          local_4 = CONCAT31(local_4._1_3_,1);
          if (uStack_640 < 0x15) {
                    /* WARNING: Subroutine does not return */
            _free(puVar5);
          }
                    /* WARNING: Subroutine does not return */
          _free(pcStack_648);
        }
      }
      local_4._0_1_ = uVar3;
      MediaPlayer_UnlockVideoBuffer((int)this_01);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00434ae0((int)local_1dc);
      piVar4 = local_668;
      this = local_65c;
    }
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_538);
  if (this_01 != (void *)0x0) {
    FUN_0099b400(this_01);
  }
  if (this_02 != (void *)0x0) {
    FUN_0099b400(this_02);
  }
  LVar12 = InterlockedDecrement(this + 4);
  uVar3 = DAT_0105b588;
  if (LVar12 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*this)();
  }
  DAT_0105b588 = uVar3;
  LVar12 = InterlockedDecrement(piVar4 + 4);
  uVar3 = DAT_0105b588;
  if (LVar12 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*piVar4)();
  }
  DAT_0105b588 = uVar3;
  FUN_009d2c50(this_00,(void *)0x0,'\x01',-1.0,-1.0);
  FUN_009d2c50(puVar7,(void *)0x0,'\x01',-1.0,-1.0);
  if (this_00 != (undefined4 *)0x0) {
    FUN_009d2b50(this_00);
  }
  if (puVar7 != (undefined4 *)0x0) {
    FUN_009d2b50(puVar7);
  }
  if (local_66c != (undefined4 *)0x0) {
    FUN_009cfb00(local_66c);
  }
  if (puVar6 != (undefined4 *)0x0) {
    FUN_009cfb00(puVar6);
  }
  uVar13 = 0x40;
  pcVar15 = _malloc(0x40);
  _strncpy(pcVar15,"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Heads\\",0x2f);
  pcVar15[0x2f] = '\0';
  FUN_00a624d0(pcVar15,0x2f,uVar13);
  FUN_00a5f900();
  FUN_00a62130();
  uStack_53c = 0xf;
  uStack_540 = 0;
  pvStack_550 = (void *)((uint)pvStack_550 & 0xffffff00);
  FUN_00405d50(auStack_554,&PTR_DAT_00d1e2c0,3);
  local_4 = 5;
  uStack_5c8 = 0xf;
  uStack_5cc = 0;
  pvStack_5dc = (void *)((uint)pvStack_5dc & 0xffffff00);
  FUN_00405d50(auStack_5e0,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Textures\\Thumbs\\Heads",
               0x2e);
  local_4._0_1_ = 6;
  uStack_5e4 = 0xf;
  uStack_5e8 = 0;
  pvStack_5f8 = (void *)((uint)pvStack_5f8 & 0xffffff00);
  FUN_00405d50(auStack_5fc,(undefined4 *)&DAT_00d72830,3);
  local_4._0_1_ = 7;
  uStack_600 = 0xf;
  uStack_604 = 0;
  pvStack_614 = (void *)((uint)pvStack_614 & 0xffffff00);
  FUN_00405d50(auStack_618,(undefined4 *)"C:\\movies\\Dev\\Build\\data\\Meshes",0x1f);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_009c5640((int)auStack_5e0,(int)auStack_554,(int)auStack_618,(int)auStack_5fc);
  if (0xf < uStack_600) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_614);
  }
  uStack_600 = 0xf;
  uStack_604 = 0;
  pvStack_614 = (void *)((uint)pvStack_614 & 0xffffff00);
  if (0xf < uStack_5e4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_5f8);
  }
  uStack_5e4 = 0xf;
  uStack_5e8 = 0;
  pvStack_5f8 = (void *)((uint)pvStack_5f8 & 0xffffff00);
  if (uStack_5c8 < 0x10) {
    uStack_5c8 = 0xf;
    uStack_5cc = 0;
    pvStack_5dc = (void *)((uint)pvStack_5dc & 0xffffff00);
    if (uStack_53c < 0x10) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_550);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_5dc);
}


//// FUNCTION FUN_009c74d0 @ 009c74d0 ////

void __cdecl FUN_009c74d0(char *param_1,char *param_2)

{
  char *pcVar1;
  char *_Str1;
  
  pcVar1 = _strrchr(param_1,0x5c);
  _Str1 = pcVar1 + 1;
  if (pcVar1 == (char *)0x0) {
    _Str1 = param_1;
  }
  pcVar1 = _strrchr(param_2,0x5c);
  if (pcVar1 != (char *)0x0) {
    __stricmp(_Str1,pcVar1 + 1);
    return;
  }
  __stricmp(_Str1,param_2);
  return;
}


//// FUNCTION FUN_009c7520 @ 009c7520 ////

undefined4 __cdecl FUN_009c7520(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_208 [260];
  char local_104 [260];
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_104 + -(int)param_1)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_208 + -(int)param_2)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (param_3 != '\0') {
    __splitpath(param_1,(char *)0x0,(char *)0x0,local_104,(char *)0x0);
    __splitpath(param_2,(char *)0x0,(char *)0x0,local_208,(char *)0x0);
  }
  iVar3 = __stricmp(local_104,local_208);
  return CONCAT31((int3)((uint)-iVar3 >> 8),'\x01' - (iVar3 != 0));
}


//// FUNCTION FUN_009c75d0 @ 009c75d0 ////

bool __cdecl FUN_009c75d0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *param_2;
  pcVar4 = (char *)0x0;
  pcVar3 = (char *)0x0;
  while( true ) {
    if (cVar1 == '\0') goto LAB_009c75fe;
    cVar2 = *param_1;
    if (cVar2 == '*') break;
    if ((cVar2 != cVar1) && (cVar2 != '?')) {
      return false;
    }
    cVar1 = param_2[1];
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar2 = *param_1;
    if (cVar2 == '*') {
      pcVar3 = param_1 + 1;
      if (param_1[1] == '\0') {
        return true;
      }
      param_1 = pcVar3;
      pcVar4 = param_2 + 1;
    }
    else if ((cVar2 == cVar1) || (cVar2 == '?')) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    else {
      param_1 = pcVar3;
      param_2 = pcVar4;
      pcVar4 = pcVar4 + 1;
    }
    cVar1 = *param_2;
  }
LAB_009c75fe:
  cVar1 = *param_1;
  while (cVar1 == '*') {
    pcVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar4;
  }
  return *param_1 == '\0';
}


//// FUNCTION FUN_009c7700 @ 009c7700 ////

void FUN_009c7700(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105cdf8);
}


//// FUNCTION FUN_009c7720 @ 009c7720 ////

int __cdecl FUN_009c7720(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}


//// FUNCTION FUN_009c77e0 @ 009c77e0 ////

void __cdecl FUN_009c77e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009c79c0 @ 009c79c0 ////

void __cdecl FUN_009c79c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009c7a90 @ 009c7a90 ////

void FUN_009c7a90(void)

{
  char cVar1;
  char *pcVar2;
  uint _Count;
  char *local_158;
  uint local_154;
  uint local_150;
  char local_14c [20];
  undefined1 local_138 [8];
  char *local_130;
  undefined4 local_12c;
  uint local_128;
  char local_124 [20];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf78dc;
  local_c = ExceptionList;
  local_158 = local_14c;
  local_14c[0] = '\0';
  local_154 = 0;
  local_150 = 0x40;
  ExceptionList = &local_c;
  local_158 = _malloc(0x40);
  _strncpy(local_158,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_154 = 0x27;
  local_158[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_138,&local_158,0);
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  DAT_0105cdf0 = 1;
  __getcwd(local_110,0x104);
  local_158 = local_14c;
  pcVar2 = local_110;
  local_14c[0] = '\0';
  local_154 = 0;
  local_150 = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Count = (int)pcVar2 - (int)(local_110 + 1);
  if (0x13 < _Count) {
    local_150 = _Count + 0x20 & 0xffffffe0;
    local_158 = _malloc(local_150);
  }
  _strncpy(local_158,local_110,_Count);
  local_158[_Count] = '\0';
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  local_154 = _Count;
  _strncpy(local_130,"GameDir",7);
  local_12c = 7;
  local_130[7] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a061a0(local_138,&local_130,&local_158);
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_138);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c7c40 @ 009c7c40 ////

uint FUN_009c7c40(void)

{
  uint uVar1;
  undefined4 *_Memory;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7900;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  ExceptionList = &local_c;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"data\\MasterFileList.bin",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 0;
  uVar1 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar1 == 0) {
    ExceptionList = local_c;
    return local_24 & 0xffffff00;
  }
  _Memory = operator_new(uVar1);
  puVar5 = _Memory;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"data\\MasterFileList.bin",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4 = 1;
  FUN_009d3ca0(&local_2c,_Memory,uVar1,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar2 = (int *)Pak_DecodeEntryData((int)_Memory);
  if (*piVar2 != 1) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cdf4 = piVar2[2];
  DAT_0105cdf8 = operator_new(DAT_0105cdf4 * 100);
  piVar2 = piVar2 + 3;
  piVar6 = DAT_0105cdf8;
  for (uVar1 = (uint)(DAT_0105cdf4 * 100) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *piVar6 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar6 = piVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar6 = (char)*piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
    piVar6 = (int *)((int)piVar6 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009c7e30 @ 009c7e30 ////

void __fastcall FUN_009c7e30(int param_1)

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


//// FUNCTION FUN_009c7e60 @ 009c7e60 ////

void * FUN_009c7e60(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009c7ed0 @ 009c7ed0 ////

void __thiscall FUN_009c7ed0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = _strrchr(param_1,0x2a);
  if (pcVar2 == (char *)0x0) {
    FUN_004015d0(this,"",0);
    FUN_004073f0(this,"*",1);
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
    return;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_009c7f40 @ 009c7f40 ////

void __thiscall FUN_009c7f40(void *this,char *param_1)

{
  int *this_00;
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint _Count;
  uint _Size;
  void *pvVar5;
  char local_104 [260];
  
  pcVar2 = local_104;
  iVar3 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_104 + iVar3)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(local_104 + 1);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if (local_104[iVar4] == '/') {
        local_104[iVar4] = '\\';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  pcVar2 = local_104;
  this_00 = (int *)((int)this + 0x20);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Count = (int)pcVar2 - (int)(local_104 + 1);
  if (*(uint *)((int)this + 0x28) <= _Count) {
    if (0x14 < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*this_00);
    }
    _Size = _Count + 0x20 & 0xffffffe0;
    *(uint *)((int)this + 0x28) = _Size;
    pvVar5 = _malloc(_Size);
    *this_00 = (int)pvVar5;
  }
  _strncpy((char *)*this_00,local_104,_Count);
  *(uint *)((int)this + 0x24) = _Count;
  *(undefined1 *)(_Count + *this_00) = 0;
  if (local_104[iVar3 + -1] != '\\') {
    FUN_004073f0(this_00,"\\",1);
  }
  return;
}


//// FUNCTION FUN_009c8010 @ 009c8010 ////

int __cdecl FUN_009c8010(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  while( true ) {
    pcVar4 = *(char **)(*(int *)(param_1 + 4) + param_3 * 4);
    pcVar1 = _strrchr(pcVar4,0x5c);
    if (pcVar1 != (char *)0x0) {
      pcVar4 = pcVar1 + 1;
    }
    iVar2 = __stricmp(param_2,pcVar4);
    iVar3 = param_3;
    if ((iVar2 < 1) && (iVar3 = param_4, param_5 = param_3, -1 < iVar2)) {
      return param_3;
    }
    if (param_5 - iVar3 < 2) break;
    param_3 = (param_5 - iVar3) / 2 + iVar3;
    param_4 = iVar3;
  }
  pcVar4 = *(char **)(*(int *)(param_1 + 4) + iVar3 * 4);
  pcVar1 = _strrchr(pcVar4,0x5c);
  if (pcVar1 != (char *)0x0) {
    pcVar4 = pcVar1 + 1;
  }
  iVar2 = __stricmp(param_2,pcVar4);
  if (iVar2 != 0) {
    return param_5;
  }
  return iVar3;
}


//// FUNCTION FUN_009c80c0 @ 009c80c0 ////

void __cdecl FUN_009c80c0(int param_1)

{
  char *_Str;
  char *_Str_00;
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  char *local_4;
  
  do {
    bVar1 = false;
    local_8 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar4 >> 2;
      }
      if (iVar5 - 1U <= local_8) break;
      iVar5 = local_8 * 4;
      _Str = *(char **)(iVar5 + 4 + iVar4);
      _Str_00 = *(char **)(iVar5 + iVar4);
      pcVar2 = _strrchr(_Str,0x5c);
      local_4 = _Str;
      if (pcVar2 != (char *)0x0) {
        local_4 = pcVar2 + 1;
      }
      pcVar3 = _strrchr(_Str_00,0x5c);
      pcVar2 = _Str_00;
      if (pcVar3 != (char *)0x0) {
        pcVar2 = pcVar3 + 1;
      }
      iVar4 = __stricmp(local_4,pcVar2);
      if (iVar4 < 0) {
        *(char **)(*(int *)(param_1 + 4) + 4 + iVar5) = _Str_00;
        *(char **)(*(int *)(param_1 + 4) + iVar5) = _Str;
        bVar1 = true;
      }
      local_8 = local_8 + 1;
    }
  } while (bVar1);
  return;
}


//// FUNCTION FUN_009c82f0 @ 009c82f0 ////

void __fastcall FUN_009c82f0(int param_1)

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


//// FUNCTION FUN_009c8320 @ 009c8320 ////

void __fastcall FUN_009c8320(int param_1)

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


//// FUNCTION FUN_009c8350 @ 009c8350 ////

undefined4 * FUN_009c8350(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009c8380 @ 009c8380 ////

void __cdecl FUN_009c8380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_009c83b0 @ 009c83b0 ////

void __fastcall FUN_009c83b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x4c) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


//// FUNCTION FUN_009c8410 @ 009c8410 ////

uint __cdecl FUN_009c8410(int param_1,char *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar5 = *(int *)(param_1 + 8) - (int)puVar1 >> 2, iVar5 == 0)) {
    return 0xffffffff;
  }
  pcVar6 = (char *)*puVar1;
  pcVar2 = _strrchr(pcVar6,0x5c);
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2 + 1;
  }
  iVar3 = __stricmp(param_2,pcVar6);
  if (iVar3 < 1) {
    return 0;
  }
  pcVar6 = *(char **)(*(int *)(param_1 + 4) + -4 + iVar5 * 4);
  pcVar2 = _strrchr(pcVar6,0x5c);
  if (pcVar2 != (char *)0x0) {
    pcVar6 = pcVar2 + 1;
  }
  iVar3 = __stricmp(param_2,pcVar6);
  if (-1 < iVar3) {
    return iVar5 - 1;
  }
  uVar4 = iVar5 - 1;
  if ((int)uVar4 < 2) {
    pcVar6 = (char *)**(undefined4 **)(param_1 + 4);
    pcVar2 = _strrchr(pcVar6,0x5c);
    if (pcVar2 != (char *)0x0) {
      pcVar6 = pcVar2 + 1;
    }
    iVar5 = __stricmp(param_2,pcVar6);
    return -(uint)(iVar5 != 0) & uVar4;
  }
  uVar4 = FUN_009c8010(param_1,param_2,(int)uVar4 / 2,0,uVar4);
  return uVar4;
}


//// FUNCTION FUN_009c84e0 @ 009c84e0 ////

char * __cdecl FUN_009c84e0(int param_1,char *param_2)

{
  char *_Str;
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_009c8410(param_1,param_2);
  if (uVar1 != 0xffffffff) {
    _Str = *(char **)(*(int *)(param_1 + 4) + uVar1 * 4);
    pcVar2 = _strrchr(_Str,0x5c);
    pcVar3 = _Str;
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2 + 1;
    }
    uVar4 = FUN_009c7520(pcVar3,param_2,'\0');
    if ((char)uVar4 != '\0') {
      return _Str;
    }
  }
  return (char *)0x0;
}


//// FUNCTION FUN_009c8560 @ 009c8560 ////

void __fastcall FUN_009c8560(undefined4 *param_1)

{
  FUN_009c83b0((int)param_1);
  if ((void *)param_1[0x12] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
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


//// FUNCTION FUN_009c85d0 @ 009c85d0 ////

void FUN_009c85d0(void)

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
  puStack_8 = &LAB_00cf7918;
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


//// FUNCTION FUN_009c8640 @ 009c8640 ////

void __thiscall FUN_009c8640(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf7930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_009c85d0();
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
    FUN_009c8380(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
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


//// FUNCTION FUN_009c8760 @ 009c8760 ////

void __thiscall FUN_009c8760(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009c85d0();
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
      _Dst = FUN_009c8350((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009c7e60(param_1,iVar5,param_1 + param_2);
      FUN_009c8350(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009c77e0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009c7e60(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009c79c0(param_1,(int)pvVar3,iVar5);
    FUN_009c77e0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009c8950 @ 009c8950 ////

void __thiscall FUN_009c8950(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1 >> 2;
  }
  FUN_009c8760(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 4;
  return;
}


//// FUNCTION FUN_009c89a0 @ 009c89a0 ////

undefined4 * __fastcall FUN_009c89a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf795e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[8] = param_1 + 0xb;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0x14;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_4 = 2;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  FUN_004015d0(param_1,"",0);
  FUN_004015d0(param_1 + 8,"",0);
  FUN_009c8640(param_1 + 0x11,1000);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009c8a40 @ 009c8a40 ////

void __thiscall FUN_009c8a40(void *this,undefined4 *param_1)

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
  FUN_009c8760(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009c8a90 @ 009c8a90 ////

uint __thiscall FUN_009c8a90(void *this,char *param_1)

{
  void *this_00;
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *local_10c;
  int local_108;
  char local_104 [260];
  
  _strncpy(local_104,param_1,0x104);
  pcVar1 = _strrchr(local_104,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_104;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  this_00 = (void *)((int)this + 0x44);
  pcVar1 = FUN_009c84e0((int)this_00,pcVar1);
  if (pcVar1 != (char *)0x0) {
    return (uint)pcVar1 & 0xffffff00;
  }
  if (*(int *)((int)this + 0x48) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((int)this + 0x4c) - *(int *)((int)this + 0x48) >> 2;
  }
  pcVar1 = operator_new(0x104);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    _strncpy(pcVar1,param_1,0x104);
  }
  local_10c = pcVar1;
  if (iVar5 != 0) {
    pcVar2 = FUN_009c84e0((int)this_00,param_1);
    if (pcVar2 != (char *)0x0) {
      return (uint)pcVar2 & 0xffffff00;
    }
    if (iVar5 == 1) {
      iVar5 = FUN_009c74d0(pcVar1,(char *)**(undefined4 **)((int)this + 0x48));
      if (0 < iVar5) goto LAB_009c8b6c;
      puVar6 = *(undefined4 **)((int)this + 0x48);
    }
    else {
      iVar5 = FUN_009c74d0(pcVar1,*(char **)(*(int *)((int)this + 0x48) + -4 + iVar5 * 4));
      if (0 < iVar5) {
        uVar3 = FUN_009c8a40(this_00,&local_10c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      pcVar1 = FUN_0041cdb0(pcVar1);
      uVar4 = FUN_009c8410((int)this_00,pcVar1);
      puVar6 = (undefined4 *)(*(int *)((int)this + 0x48) + uVar4 * 4);
    }
    uVar3 = FUN_009c8950(this_00,&local_108,puVar6,&local_10c);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
LAB_009c8b6c:
  uVar3 = FUN_009c8a40(this_00,&local_10c);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_009c8ce0 @ 009c8ce0 ////

/* WARNING: Removing unreachable block (ram,0x009c8ef7) */
/* WARNING: Removing unreachable block (ram,0x009c8e5e) */

void __cdecl FUN_009c8ce0(char *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  HANDLE hFindFile;
  char *pcVar2;
  CHAR *pCVar3;
  WINBOOL WVar4;
  int iVar5;
  bool bVar6;
  void *in_stack_00000024;
  char *in_stack_00000028;
  size_t in_stack_0000002c;
  uint in_stack_00000030;
  char in_stack_00000048;
  undefined4 uVar7;
  uint uVar8;
  char local_200 [12];
  undefined4 uStack_1f4;
  undefined1 *local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc [8];
  undefined4 uStack_1d4;
  char *local_1b4;
  uint local_1b0;
  uint local_1ac;
  char local_1a8 [20];
  char *local_194;
  uint local_190;
  uint local_18c;
  char local_188 [20];
  undefined1 *local_174;
  HANDLE local_170;
  char *local_16c;
  undefined4 local_168;
  uint local_164;
  char local_160 [20];
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf79a1;
  local_c = ExceptionList;
  local_4 = 0;
  local_16c = local_160;
  local_160[0] = '\0';
  local_168 = 0;
  local_164 = 0x14;
  uStack_1d4 = 0x9c8d2f;
  ExceptionList = &local_c;
  _strncpy(local_16c,"",0);
  local_168 = 0;
  *local_16c = '\0';
  local_4._0_1_ = 2;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_16c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  FUN_004073f0(&local_16c,"*.*",3);
  local_170 = FindFirstFileA(local_16c,&local_14c);
  if (local_170 == (HANDLE)0xffffffff) {
    if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  else {
    local_194 = local_188;
    local_188[0] = '\0';
    local_190 = 0;
    local_18c = 0x14;
    local_1b4 = local_1a8;
    local_1a8[0] = '\0';
    local_1b0 = 0;
    local_1ac = 0x14;
    local_4._0_1_ = 4;
    do {
      if (((byte)local_14c.dwFileAttributes & 0x10) != 0) {
        iVar5 = 2;
        bVar6 = true;
        pCVar3 = local_14c.cFileName;
        pcVar2 = ".";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar6 = *pCVar3 == *pcVar2;
          pCVar3 = pCVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar6);
        if (!bVar6) {
          iVar5 = 3;
          bVar6 = true;
          pCVar3 = local_14c.cFileName;
          pcVar2 = "..";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar6 = *pCVar3 == *pcVar2;
            pCVar3 = pCVar3 + 1;
            pcVar2 = pcVar2 + 1;
          } while (bVar6);
          if (!bVar6) {
            if (local_18c == 0) {
              local_18c = 0x20;
              local_194 = _malloc(0x20);
            }
            uStack_1d4 = 0x9c8e89;
            _strncpy(local_194,"",0);
            local_190 = 0;
            *local_194 = '\0';
            pcVar2 = param_1;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_194,param_1,(int)pcVar2 - (int)(param_1 + 1));
            pCVar3 = local_14c.cFileName;
            do {
              cVar1 = *pCVar3;
              pCVar3 = pCVar3 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_194,local_14c.cFileName,(int)pCVar3 - (int)(local_14c.cFileName + 1)
                        );
            FUN_004073f0(&local_194,"\\",1);
            if (local_1ac == 0) {
              local_1ac = 0x20;
              local_1b4 = _malloc(0x20);
            }
            uStack_1d4 = 0x9c8f2a;
            _strncpy(local_1b4,"",0);
            local_1b0 = 0;
            *local_1b4 = '\0';
            FUN_004073f0(&local_1b4,in_stack_00000028,in_stack_0000002c);
            FUN_004073f0(&local_1b4,"\\",1);
            pCVar3 = local_14c.cFileName;
            do {
              cVar1 = *pCVar3;
              pCVar3 = pCVar3 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_1b4,local_14c.cFileName,(int)pCVar3 - (int)(local_14c.cFileName + 1)
                        );
            FUN_0043a2d0(in_stack_00000024,&local_1b4);
            if (in_stack_00000048 != '\0') {
              local_174 = (undefined1 *)&local_1e8;
              local_1e8 = local_1dc;
              local_1dc[0] = 0;
              local_1e4 = 0;
              local_1e0 = 0x14;
              uStack_1f4 = 0x9c8fce;
              FUN_004015d0(&local_1e8,local_1b4,local_1b0);
              local_174 = &stack0xfffffdf4;
              pcVar2 = local_200;
              local_200[0] = '\0';
              uVar7 = 0;
              uVar8 = 0x14;
              FUN_004015d0(&stack0xfffffdf4,local_194,local_190);
              FUN_009c8ce0(pcVar2,uVar7,uVar8);
            }
          }
        }
      }
      hFindFile = local_170;
      WVar4 = FindNextFileA(local_170,&local_14c);
    } while (WVar4 != 0);
    FindClose(hFindFile);
    if (0x14 < local_1ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_1b4);
    }
    if (0x14 < local_18c) {
                    /* WARNING: Subroutine does not return */
      _free(local_194);
    }
    if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  if (in_stack_00000030 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000028);
}


//// FUNCTION FUN_009c90b0 @ 009c90b0 ////

/* WARNING: Removing unreachable block (ram,0x009c9312) */
/* WARNING: Removing unreachable block (ram,0x009c9207) */

void __thiscall FUN_009c90b0(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  CHAR *pCVar3;
  undefined3 extraout_var;
  WINBOOL WVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  char local_1bc [4];
  undefined4 uStack_1b8;
  char *local_198;
  uint local_194;
  uint local_190;
  char local_18c [20];
  undefined4 *local_178;
  HANDLE local_174;
  char *local_170;
  undefined4 local_16c;
  uint local_168;
  char local_164 [20];
  undefined1 *local_150;
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf79ce;
  local_c = ExceptionList;
  local_170 = local_164;
  local_4 = 0;
  local_164[0] = '\0';
  local_16c = 0;
  local_168 = 0x14;
  uStack_1b8 = 0x9c9105;
  ExceptionList = &local_c;
  local_178 = this;
  _strncpy(local_170,"",0);
  local_16c = 0;
  *local_170 = '\0';
  local_4._0_1_ = 1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_170,param_1,(int)pcVar2 - (int)(param_1 + 1));
  FUN_004073f0(&local_170,"*.*",3);
  local_174 = FindFirstFileA(local_170,&local_14c);
  if (local_174 != (HANDLE)0xffffffff) {
    local_198 = local_18c;
    local_18c[0] = '\0';
    local_194 = 0;
    local_190 = 0x14;
    uStack_1b8 = 0x9c9199;
    _strncpy(local_198,"",0);
    local_194 = 0;
    *local_198 = '\0';
    local_4._0_1_ = 2;
    do {
      if ((((byte)local_14c.dwFileAttributes & 0x10) != 0) && (*(char *)((int)this + 0x40) != '\0'))
      {
        iVar5 = 2;
        bVar6 = true;
        pCVar3 = local_14c.cFileName;
        pcVar2 = ".";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar6 = *pCVar3 == *pcVar2;
          pCVar3 = pCVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar6);
        this = local_178;
        if (!bVar6) {
          iVar5 = 3;
          bVar6 = true;
          pCVar3 = local_14c.cFileName;
          pcVar2 = "..";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar6 = *pCVar3 == *pcVar2;
            pCVar3 = pCVar3 + 1;
            pcVar2 = pcVar2 + 1;
          } while (bVar6);
          if (!bVar6) {
            if (local_190 == 0) {
              local_190 = 0x20;
              local_198 = _malloc(0x20);
            }
            uStack_1b8 = 0x9c923a;
            _strncpy(local_198,"",0);
            local_194 = 0;
            *local_198 = '\0';
            pcVar2 = param_1;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_198,param_1,(int)pcVar2 - (int)(param_1 + 1));
            pCVar3 = local_14c.cFileName;
            do {
              cVar1 = *pCVar3;
              pCVar3 = pCVar3 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_198,local_14c.cFileName,(int)pCVar3 - (int)(local_14c.cFileName + 1)
                        );
            FUN_004073f0(&local_198,"\\",1);
            local_150 = &stack0xfffffe38;
            pcVar2 = local_1bc;
            local_1bc[0] = '\0';
            uVar7 = 0;
            uVar8 = 0x14;
            FUN_004015d0(&stack0xfffffe38,local_198,local_194);
            FUN_009c90b0(local_178,pcVar2,uVar7,uVar8);
            this = local_178;
          }
        }
      }
      if (*(char *)((int)this + 0x41) != '\0') {
        FUN_009ac040(local_14c.cFileName);
      }
      bVar6 = FUN_009c75d0(*(char **)this,local_14c.cFileName);
      if (CONCAT31(extraout_var,bVar6) != 0) {
        if (local_190 == 0) {
          local_190 = 0x20;
          local_198 = _malloc(0x20);
        }
        uStack_1b8 = 0x9c9345;
        _strncpy(local_198,"",0);
        local_194 = 0;
        *local_198 = '\0';
        pcVar2 = param_1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_004073f0(&local_198,param_1,(int)pcVar2 - (int)(param_1 + 1));
        pCVar3 = local_14c.cFileName;
        do {
          cVar1 = *pCVar3;
          pCVar3 = pCVar3 + 1;
        } while (cVar1 != '\0');
        FUN_004073f0(&local_198,local_14c.cFileName,(int)pCVar3 - (int)(local_14c.cFileName + 1));
        if (((byte)local_14c.dwFileAttributes & 0x10) != 0) {
          FUN_004073f0(&local_198,"\\",1);
        }
        FUN_009c8a90(this,local_198);
      }
      WVar4 = FindNextFileA(local_174,&local_14c);
    } while (WVar4 != 0);
    FindClose(local_174);
    if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
      _free(local_198);
    }
  }
  if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c9430 @ 009c9430 ////

void __thiscall FUN_009c9430(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  uint _Count;
  char *_Source;
  int iVar1;
  uint uVar2;
  int *local_3c;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf79f8;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_010b9351 == '\0') {
    if (param_3 < 0x15) {
      return;
    }
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = &local_c;
  local_34 = (int *)FUN_0048f380();
  *(undefined1 *)((int)local_34 + 0x2d) = 1;
  local_34[1] = (int)local_34;
  *local_34 = (int)local_34;
  local_34[2] = (int)local_34;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00a10630(param_1,*(char **)this,local_38,*(char *)((int)this + 0x40));
  local_3c = (int *)*local_34;
  if (local_3c != local_34) {
    do {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _Count = local_3c[4];
      _Source = (char *)local_3c[3];
      if (0x13 < _Count) {
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,_Source,_Count);
      local_2c[_Count] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      local_28 = _Count;
      if ((*(char *)((int)this + 0x41) != '\0') && (uVar2 = 0, _Count != 0)) {
        do {
          iVar1 = _tolower((int)local_2c[uVar2]);
          local_2c[uVar2] = (char)iVar1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_28);
      }
      FUN_009c8a90(this,local_2c);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_0048edd0((int *)&local_3c);
    } while (local_3c != local_34);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0048fbd0(local_38,&local_3c,(int *)*local_34,local_34);
                    /* WARNING: Subroutine does not return */
  _free(local_34);
}


//// FUNCTION FUN_009c95e0 @ 009c95e0 ////

void __thiscall FUN_009c95e0(void *this,byte *param_1,size_t param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined3 extraout_var;
  byte *pbVar8;
  undefined3 extraout_var_00;
  int iVar9;
  char *_Str;
  byte *pbVar10;
  int iVar11;
  char local_174 [100];
  byte local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7a18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0048ad50((int *)&param_1);
  pbVar8 = param_1;
  _sprintf(local_174,"%s",param_1);
  pvVar4 = _bsearch(local_174,DAT_0105cdf8,DAT_0105cdf4,100,FUN_009c7720);
  if (pvVar4 == (void *)0x0) {
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(pbVar8);
    }
  }
  else {
    iVar11 = ((int)pvVar4 - (int)DAT_0105cdf8) / 100;
    if (iVar11 < (int)DAT_0105cdf4) {
      iVar9 = iVar11 * 100;
      do {
        _Str = (char *)(iVar9 + (int)DAT_0105cdf8);
        if (*(char *)((int)this + 0x41) != '\0') {
          FUN_009ac040(_Str);
        }
        pcVar5 = _strrchr(_Str,0x5c);
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (4 < (uint)((int)pcVar6 - (int)(pcVar5 + 1))) {
            __splitpath(_Str,(char *)0x0,(char *)local_110,(char *)0x0,(char *)0x0);
            if (*(char *)((int)this + 0x40) == '\0') {
              pbVar8 = local_110;
              pbVar10 = param_1;
              do {
                bVar2 = *pbVar8;
                bVar3 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_009c9786:
                  iVar7 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
                  goto LAB_009c978b;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar3 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_009c9786;
                pbVar8 = pbVar8 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_009c978b:
              if (iVar7 == 0) {
                bVar3 = FUN_009c75d0(*(char **)this,pcVar5 + 1);
                if (CONCAT31(extraout_var_00,bVar3) != 0) {
                  FUN_009c8a90(this,_Str);
                }
              }
              else {
                iVar7 = _strncmp((char *)local_110,(char *)param_1,param_2);
                pbVar8 = param_1;
                if (iVar7 != 0) break;
              }
            }
            else {
              iVar7 = _strncmp((char *)local_110,(char *)param_1,param_2);
              pbVar8 = param_1;
              if (iVar7 != 0) break;
              bVar3 = FUN_009c75d0(*(char **)this,pcVar5 + 1);
              if (CONCAT31(extraout_var,bVar3) != 0) {
                FUN_009c8a90(this,_Str);
              }
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 100;
        pbVar8 = param_1;
      } while (iVar11 < (int)DAT_0105cdf4);
    }
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(pbVar8);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009c9850 @ 009c9850 ////

/* WARNING: Removing unreachable block (ram,0x009c9d61) */
/* WARNING: Removing unreachable block (ram,0x009c9b9e) */

void FUN_009c9850(char *param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  HANDLE hFindFile;
  WINBOOL WVar8;
  undefined3 extraout_var;
  char *pcVar9;
  uint *_Dest;
  CHAR *pCVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  char *in_stack_0000000c;
  void *in_stack_00000024;
  char in_stack_00000028;
  uint local_238;
  char *local_20c;
  uint local_208;
  uint local_204;
  char local_200 [20];
  undefined1 local_1ec [4];
  int *local_1e8;
  undefined4 local_1e4;
  int *local_1e0;
  int *local_1dc;
  undefined4 local_1d8;
  int *local_1d4 [2];
  char *local_1cc;
  uint local_1c8;
  uint local_1c4;
  char local_1c0 [20];
  char *local_1ac;
  uint local_1a8;
  uint local_1a4;
  char local_1a0 [20];
  char *local_18c;
  undefined4 local_188;
  uint local_184;
  char local_180 [20];
  char *local_16c;
  size_t local_168;
  _WIN32_FIND_DATAA local_14c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7a85;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar5 = FUN_004302c0(&param_1,&DAT_00d1835c,0xffffffff,1);
  FUN_00430770(&param_1,&local_16c,iVar5 + 1U,param_2);
  local_4._0_1_ = 1;
  puVar6 = FUN_00430770(&param_1,&local_1cc,0,iVar5 + 1U);
  FUN_004015d0(&param_1,(char *)*puVar6,puVar6[1]);
  if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1cc);
  }
  local_1e8 = (int *)FUN_0048f380();
  *(undefined1 *)((int)local_1e8 + 0x2d) = 1;
  local_1e8[1] = (int)local_1e8;
  *local_1e8 = (int)local_1e8;
  local_1e8[2] = (int)local_1e8;
  local_1e4 = 0;
  local_4._0_1_ = 2;
  local_1dc = (int *)FUN_0048f380();
  pcVar9 = param_1;
  *(undefined1 *)((int)local_1dc + 0x2d) = 1;
  local_1dc[1] = (int)local_1dc;
  *local_1dc = (int)local_1dc;
  local_1dc[2] = (int)local_1dc;
  local_1d8 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (in_stack_00000028 != '\0') {
    FUN_00a10630(param_1,local_16c,&local_1e0,'\0');
    local_238 = 0x9c9988;
    FUN_00a10680(pcVar9,local_1ec);
  }
  local_18c = local_180;
  local_180[0] = '\0';
  local_188 = 0;
  local_184 = 0x14;
  _strncpy(local_18c,"",0);
  local_188 = 0;
  *local_18c = '\0';
  pcVar7 = pcVar9;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_18c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
  FUN_004073f0(&local_18c,"*.*",3);
  hFindFile = FindFirstFileA(local_18c,&local_14c);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_14c.dwFileAttributes & 0x10) == 0) {
        bVar14 = FUN_009c75d0(local_16c,local_14c.cFileName);
        if (CONCAT31(extraout_var,bVar14) != 0) {
          local_1cc = local_1c0;
          pCVar10 = local_14c.cFileName;
          local_1c4 = 0x14;
          local_1c0[0] = '\0';
          local_1c8 = 0;
          do {
            cVar1 = *pCVar10;
            pCVar10 = pCVar10 + 1;
          } while (cVar1 != '\0');
          uVar11 = (int)pCVar10 - (int)(local_14c.cFileName + 1);
          if (0x13 < uVar11) {
            local_1c4 = uVar11 + 0x20 & 0xffffffe0;
            local_1cc = _malloc(local_1c4);
          }
          _strncpy(local_1cc,local_14c.cFileName,uVar11);
          local_1cc[uVar11] = '\0';
          local_4 = CONCAT31(local_4._1_3_,6);
          local_1c8 = uVar11;
          FUN_0048fab0(&local_1e0,local_1d4,&local_1cc);
          if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
        }
      }
      else {
        iVar5 = 2;
        bVar14 = true;
        pCVar10 = local_14c.cFileName;
        pcVar9 = ".";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar14 = *pCVar10 == *pcVar9;
          pCVar10 = pCVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar14);
        pcVar9 = param_1;
        if (!bVar14) {
          iVar5 = 3;
          bVar14 = true;
          pCVar10 = local_14c.cFileName;
          pcVar7 = "..";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar14 = *pCVar10 == *pcVar7;
            pCVar10 = pCVar10 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar14);
          if (!bVar14) {
            local_1ac = local_1a0;
            pCVar10 = local_14c.cFileName;
            local_1a0[0] = '\0';
            local_1a8 = 0;
            local_1a4 = 0x14;
            do {
              cVar1 = *pCVar10;
              pCVar10 = pCVar10 + 1;
            } while (cVar1 != '\0');
            uVar11 = (int)pCVar10 - (int)(local_14c.cFileName + 1);
            if (0x13 < uVar11) {
              local_1a4 = uVar11 + 0x20 & 0xffffffe0;
              local_1ac = _malloc(local_1a4);
            }
            _strncpy(local_1ac,local_14c.cFileName,uVar11);
            local_1ac[uVar11] = '\0';
            local_4 = CONCAT31(local_4._1_3_,5);
            local_1a8 = uVar11;
            FUN_0048ad50((int *)&local_1ac);
            FUN_0048fab0(local_1ec,local_1d4,&local_1ac);
            pcVar9 = param_1;
            if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
              _free(local_1ac);
            }
          }
        }
      }
      WVar8 = FindNextFileA(hFindFile,&local_14c);
    } while (WVar8 != 0);
    FindClose(hFindFile);
  }
  local_20c = local_200;
  local_200[0] = '\0';
  local_208 = 0;
  local_204 = 0x14;
  _strncpy(local_20c,"",0);
  local_208 = 0;
  *local_20c = '\0';
  local_1d4[0] = (int *)*local_1dc;
  local_4 = CONCAT31(local_4._1_3_,7);
  if (local_1d4[0] != local_1dc) {
    do {
      piVar12 = local_1d4[0];
      if (local_204 == 0) {
        local_204 = 0x20;
        local_20c = _malloc(0x20);
      }
      _strncpy(local_20c,"",0);
      local_208 = 0;
      *local_20c = '\0';
      pcVar7 = pcVar9;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_20c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
      FUN_004073f0(&local_20c,(char *)piVar12[3],piVar12[4]);
      pvVar3 = in_stack_00000024;
      iVar5 = *(int *)((int)in_stack_00000024 + 4);
      if ((iVar5 == 0) ||
         ((uint)(*(int *)((int)in_stack_00000024 + 0xc) - iVar5 >> 5) <=
          (uint)(*(int *)((int)in_stack_00000024 + 8) - iVar5 >> 5))) {
        FUN_00439fd0(in_stack_00000024,*(int **)((int)in_stack_00000024 + 8),1,&local_20c);
      }
      else {
        piVar12 = *(int **)((int)in_stack_00000024 + 8);
        FUN_00439ea0(piVar12,1,&local_20c);
        *(int **)((int)pvVar3 + 8) = piVar12 + 8;
        pcVar9 = param_1;
      }
      FUN_0048edd0((int *)local_1d4);
    } while (local_1d4[0] != local_1dc);
  }
  piVar12 = (int *)*local_1e8;
  if (piVar12 != local_1e8) {
    do {
      if (local_204 == 0) {
        local_204 = 0x20;
        local_20c = _malloc(0x20);
      }
      _strncpy(local_20c,"",0);
      local_208 = 0;
      *local_20c = '\0';
      pcVar7 = pcVar9;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_20c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
      FUN_004073f0(&local_20c,(char *)piVar12[3],piVar12[4]);
      uVar13 = local_208 + 1;
      pcVar9 = local_20c;
      uVar11 = local_204;
      if (local_204 <= uVar13) {
        uVar11 = local_208 + 0x21 & 0xffffffe0;
        pcVar9 = _malloc(uVar11);
        _strncpy(pcVar9,local_20c,local_208);
        if (0x14 < local_204) {
                    /* WARNING: Subroutine does not return */
          _free(local_20c);
        }
      }
      local_204 = uVar11;
      local_20c = pcVar9;
      _strncpy(local_20c + local_208,"\\",1);
      local_20c[uVar13] = '\0';
      local_208 = uVar13;
      FUN_004073f0(&local_20c,local_16c,local_168);
      uVar11 = local_208;
      pcVar9 = local_20c;
      local_1d4[0] = (int *)&stack0xfffffdbc;
      _Dest = &local_238;
      local_238 = local_238 & 0xffffff00;
      piVar2 = (int *)&stack0xfffffdbc;
      if (0x13 < local_208) {
        _Dest = _malloc(local_208 + 0x20 & 0xffffffe0);
        piVar2 = local_1d4[0];
      }
      local_1d4[0] = piVar2;
      _strncpy((char *)_Dest,pcVar9,uVar11);
      *(undefined1 *)((int)_Dest + uVar11) = 0;
      FUN_009c9850((char *)_Dest,uVar11);
      if (*(char *)((int)piVar12 + 0x2d) == '\0') {
        piVar2 = (int *)piVar12[2];
        if (*(char *)((int)piVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar12 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x2d);
            piVar12 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar12[1] + 0x2d);
          piVar4 = (int *)piVar12[1];
          piVar2 = piVar12;
          while ((piVar12 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar12[2]))) {
            cVar1 = *(char *)(piVar12[1] + 0x2d);
            piVar4 = (int *)piVar12[1];
            piVar2 = piVar12;
          }
        }
      }
      pcVar9 = in_stack_0000000c;
    } while (piVar12 != local_1e0);
  }
  if (local_204 < 0x15) {
    if (0x14 < local_184) {
                    /* WARNING: Subroutine does not return */
      _free(local_18c);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0048fbd0(&local_1e0,local_1d4,(int *)*local_1dc,local_1dc);
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20c);
}


//// FUNCTION FUN_009ca010 @ 009ca010 ////

/* WARNING: Removing unreachable block (ram,0x009ca2cf) */

void FUN_009ca010(char *param_1)

{
  char cVar1;
  char *pcVar2;
  WINBOOL WVar3;
  int *piVar4;
  int iVar5;
  CHAR *pCVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  void *in_stack_00000024;
  char in_stack_00000028;
  char local_1f0 [4];
  undefined4 uStack_1ec;
  undefined1 local_1c4 [4];
  int *local_1c0;
  int *local_1bc;
  HANDLE local_1b8;
  int *local_1b4 [2];
  int *local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined1 local_1a0 [20];
  char *local_18c;
  undefined4 local_188;
  uint local_184;
  char local_180 [20];
  char *local_16c;
  uint local_168;
  uint local_164;
  char local_160 [20];
  _WIN32_FIND_DATAA local_14c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf7ac4;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_1c0 = (int *)FUN_0048f380();
  *(undefined1 *)((int)local_1c0 + 0x2d) = 1;
  local_1c0[1] = (int)local_1c0;
  *local_1c0 = (int)local_1c0;
  local_1c0[2] = (int)local_1c0;
  local_1bc = (int *)0x0;
  local_18c = local_180;
  local_180[0] = '\0';
  local_188 = 0;
  local_184 = 0x14;
  _strncpy(local_18c,"",0);
  local_188 = 0;
  *local_18c = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_18c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  FUN_004073f0(&local_18c,"\\*.*",4);
  if (in_stack_00000028 != '\0') {
    FUN_00a10680(param_1,local_1c4);
  }
  local_1b8 = FindFirstFileA(local_18c,&local_14c);
  if (local_1b8 != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_14c.dwFileAttributes & 0x10) != 0) {
        iVar5 = 2;
        bVar9 = true;
        pCVar6 = local_14c.cFileName;
        pcVar2 = ".";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar9 = *pCVar6 == *pcVar2;
          pCVar6 = pCVar6 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar9);
        if (!bVar9) {
          iVar5 = 3;
          bVar9 = true;
          pCVar6 = local_14c.cFileName;
          pcVar2 = "..";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar9 = *pCVar6 == *pcVar2;
            pCVar6 = pCVar6 + 1;
            pcVar2 = pcVar2 + 1;
          } while (bVar9);
          if (!bVar9) {
            local_16c = local_160;
            pCVar6 = local_14c.cFileName;
            local_160[0] = '\0';
            local_168 = 0;
            local_164 = 0x14;
            do {
              cVar1 = *pCVar6;
              pCVar6 = pCVar6 + 1;
            } while (cVar1 != '\0');
            uVar7 = (int)pCVar6 - (int)(local_14c.cFileName + 1);
            if (0x13 < uVar7) {
              local_164 = uVar7 + 0x20 & 0xffffffe0;
              local_16c = _malloc(local_164);
            }
            _strncpy(local_16c,local_14c.cFileName,uVar7);
            local_16c[uVar7] = '\0';
            local_4 = CONCAT31(local_4._1_3_,3);
            local_168 = uVar7;
            FUN_0048fab0(local_1c4,local_1b4,&local_16c);
            if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
              _free(local_16c);
            }
          }
        }
      }
      WVar3 = FindNextFileA(local_1b8,&local_14c);
    } while (WVar3 != 0);
    FindClose(local_1b8);
  }
  if (local_1bc == (int *)0x0) {
    if (local_184 < 0x15) {
      local_4 = local_4 & 0xffffff00;
      FUN_0048fbd0(local_1c4,local_1b4,(int *)*local_1c0,local_1c0);
                    /* WARNING: Subroutine does not return */
      _free(local_1c0);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_18c);
  }
  local_1ac = (int *)local_1a0;
  local_1a0[0] = 0;
  local_1a8 = 0;
  local_1a4 = 0x14;
  _strncpy((char *)local_1ac,"",0);
  local_1a8 = 0;
  *(char *)local_1ac = '\0';
  piVar8 = (int *)*local_1c0;
  local_4._0_1_ = 4;
  piVar4 = local_1c0;
  local_1b8 = piVar8;
  if (piVar8 != local_1c0) {
    do {
      if (local_1a4 == 0) {
        local_1a4 = 0x20;
        local_1ac = _malloc(0x20);
      }
      _strncpy((char *)local_1ac,"",0);
      local_1a8 = 0;
      *(char *)local_1ac = '\0';
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_1ac,param_1,(int)pcVar2 - (int)(param_1 + 1));
      FUN_004073f0(&local_1ac,"\\",1);
      FUN_004073f0(&local_1ac,(char *)piVar8[3],piVar8[4]);
      iVar5 = *(int *)((int)in_stack_00000024 + 4);
      if ((iVar5 == 0) ||
         ((uint)(*(int *)((int)in_stack_00000024 + 0xc) - iVar5 >> 5) <=
          (uint)(*(int *)((int)in_stack_00000024 + 8) - iVar5 >> 5))) {
        FUN_00439fd0(in_stack_00000024,*(int **)((int)in_stack_00000024 + 8),1,&local_1ac);
      }
      else {
        piVar8 = *(int **)((int)in_stack_00000024 + 8);
        uStack_1ec = 0x9ca395;
        FUN_00439ea0(piVar8,1,&local_1ac);
        *(int **)((int)in_stack_00000024 + 8) = piVar8 + 8;
      }
      uVar7 = local_1a8;
      pcVar2 = local_1f0;
      local_1f0[0] = '\0';
      local_1b4[0] = local_1ac;
      if (0x13 < local_1a8) {
        pcVar2 = _malloc(local_1a8 + 0x20 & 0xffffffe0);
      }
      _strncpy(pcVar2,(char *)local_1b4[0],uVar7);
      pcVar2[uVar7] = '\0';
      FUN_009ca010(pcVar2);
      FUN_0048edd0((int *)local_1b4);
      piVar4 = local_1bc;
      piVar8 = local_1b4[0];
    } while (local_1b4[0] != local_1bc);
  }
  if (local_1a4 < 0x15) {
    if (local_184 < 0x15) {
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0048fbd0(local_1c4,local_1b4,(int *)*piVar4,piVar4);
                    /* WARNING: Subroutine does not return */
      _free(local_1c0);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_18c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1ac);
}


//// FUNCTION FUN_009ca4d0 @ 009ca4d0 ////

/* WARNING: Removing unreachable block (ram,0x009ca74d) */
/* WARNING: Removing unreachable block (ram,0x009ca64e) */

void FUN_009ca4d0(char *param_1,uint param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *in_stack_0000000c;
  void *in_stack_00000024;
  int *local_88;
  undefined1 local_84 [4];
  int *local_80;
  undefined4 local_7c;
  int *local_78;
  char *local_74;
  undefined4 local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  size_t local_48;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7afb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_004302c0(&param_1,&DAT_00d1835c,0xffffffff,1);
  FUN_00430770(&param_1,&local_4c,iVar3 + 1U,param_2);
  local_4._0_1_ = 1;
  puVar4 = FUN_00430770(&param_1,local_2c,0,iVar3 + 1U);
  FUN_004015d0(&param_1,(char *)*puVar4,puVar4[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_74 = (char *)FUN_0048f380();
  local_74[0x2d] = '\x01';
  *(char **)(local_74 + 4) = local_74;
  *(char **)local_74 = local_74;
  *(char **)(local_74 + 8) = local_74;
  local_70 = 0;
  local_4._0_1_ = 2;
  local_80 = (int *)FUN_0048f380();
  pcVar7 = param_1;
  *(undefined1 *)((int)local_80 + 0x2d) = 1;
  local_80[1] = (int)local_80;
  *local_80 = (int)local_80;
  local_80[2] = (int)local_80;
  local_7c = 0;
  local_4._0_1_ = 3;
  FUN_00a10630(param_1,local_4c,local_84,'\0');
  FUN_00a10680(pcVar7,&local_78);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  local_88 = (int *)*local_80;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_88 != local_80) {
    do {
      piVar8 = local_88;
      if (local_64 == 0) {
        local_64 = 0x20;
        local_6c = _malloc(0x20);
      }
      _strncpy(local_6c,"",0);
      local_68 = 0;
      *local_6c = '\0';
      pcVar5 = pcVar7;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_6c,pcVar7,(int)pcVar5 - (int)(pcVar7 + 1));
      FUN_004073f0(&local_6c,(char *)piVar8[3],piVar8[4]);
      pvVar2 = in_stack_00000024;
      iVar3 = *(int *)((int)in_stack_00000024 + 4);
      if ((iVar3 == 0) ||
         ((uint)(*(int *)((int)in_stack_00000024 + 0xc) - iVar3 >> 5) <=
          (uint)(*(int *)((int)in_stack_00000024 + 8) - iVar3 >> 5))) {
        FUN_00439fd0(in_stack_00000024,*(int **)((int)in_stack_00000024 + 8),1,&local_6c);
      }
      else {
        piVar8 = *(int **)((int)in_stack_00000024 + 8);
        FUN_00439ea0(piVar8,1,&local_6c);
        *(int **)((int)pvVar2 + 8) = piVar8 + 8;
      }
      FUN_0048edd0((int *)&local_88);
    } while (local_88 != local_80);
  }
  pcVar5 = *(char **)local_74;
  piVar8 = local_80;
  if (pcVar5 != local_74) {
    do {
      if (local_64 == 0) {
        local_64 = 0x20;
        local_6c = _malloc(0x20);
      }
      _strncpy(local_6c,"",0);
      local_68 = 0;
      *local_6c = '\0';
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_6c,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
      FUN_004073f0(&local_6c,*(char **)(pcVar5 + 0xc),*(size_t *)(pcVar5 + 0x10));
      uVar9 = local_68 + 1;
      pcVar7 = local_6c;
      uVar10 = local_64;
      if (local_64 <= uVar9) {
        uVar10 = local_68 + 0x21 & 0xffffffe0;
        pcVar7 = _malloc(uVar10);
        _strncpy(pcVar7,local_6c,local_68);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
      }
      local_64 = uVar10;
      local_6c = pcVar7;
      _strncpy(local_6c + local_68,"\\",1);
      local_6c[uVar9] = '\0';
      local_68 = uVar9;
      FUN_004073f0(&local_6c,local_4c,local_48);
      uVar10 = local_68;
      pcVar6 = local_6c;
      local_88 = (int *)&stack0xffffff44;
      pcVar7 = &stack0xffffff50;
      piVar8 = (int *)&stack0xffffff44;
      if (0x13 < local_68) {
        pcVar7 = _malloc(local_68 + 0x20 & 0xffffffe0);
        piVar8 = local_88;
      }
      local_88 = piVar8;
      _strncpy(pcVar7,pcVar6,uVar10);
      pcVar7[uVar10] = '\0';
      FUN_009ca4d0(pcVar7,uVar10);
      if (pcVar5[0x2d] == '\0') {
        pcVar7 = *(char **)(pcVar5 + 8);
        if (pcVar7[0x2d] == '\0') {
          cVar1 = (*(char **)pcVar7)[0x2d];
          pcVar5 = pcVar7;
          pcVar7 = *(char **)pcVar7;
          while (cVar1 == '\0') {
            cVar1 = (*(char **)pcVar7)[0x2d];
            pcVar5 = pcVar7;
            pcVar7 = *(char **)pcVar7;
          }
        }
        else {
          cVar1 = (*(char **)(pcVar5 + 4))[0x2d];
          pcVar6 = *(char **)(pcVar5 + 4);
          pcVar7 = pcVar5;
          while ((pcVar5 = pcVar6, cVar1 == '\0' && (pcVar7 == *(char **)(pcVar5 + 8)))) {
            cVar1 = (*(char **)(pcVar5 + 4))[0x2d];
            pcVar6 = *(char **)(pcVar5 + 4);
            pcVar7 = pcVar5;
          }
        }
      }
      piVar8 = local_78;
      pcVar7 = in_stack_0000000c;
    } while (pcVar5 != local_6c);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0048fbd0(local_84,&local_88,(int *)*piVar8,piVar8);
                    /* WARNING: Subroutine does not return */
  _free(local_80);
}


//// FUNCTION FUN_009ca9d0 @ 009ca9d0 ////

void __thiscall FUN_009ca9d0(void *this,char *param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  char local_18 [4];
  undefined4 uStack_14;
  
  FUN_009c7ed0(this,param_1);
  FUN_009c7f40(this,param_2);
  if (2 < *(uint *)((int)this + 0x24)) {
    uStack_14 = 0x9ca9ff;
    _strncpy((char *)&param_1,*(char **)((int)this + 0x20),3);
    if ((param_1._1_1_ == ':') && (param_1._2_1_ == '\\')) goto LAB_009caa4c;
  }
  if ((char)param_3 != '\0') {
    param_3 = &stack0xffffffdc;
    pcVar1 = local_18;
    local_18[0] = '\0';
    uVar2 = 0;
    uVar3 = 0x14;
    FUN_004015d0(&stack0xffffffdc,*(char **)((int)this + 0x20),*(uint *)((int)this + 0x24));
    FUN_009c9430(this,pcVar1,uVar2,uVar3);
  }
LAB_009caa4c:
  param_3 = &stack0xffffffdc;
  uVar3 = 0x14;
  pcVar1 = local_18;
  uVar2 = 0;
  local_18[0] = '\0';
  FUN_004015d0(&stack0xffffffdc,*(char **)((int)this + 0x20),*(uint *)((int)this + 0x24));
  FUN_009c90b0(this,pcVar1,uVar2,uVar3);
  return;
}


//// FUNCTION FUN_009cae10 @ 009cae10 ////

void FUN_009cae10(void)

{
                    /* WARNING: Could not recover jumptable at 0x009cae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0105cdfc + 8))();
  return;
}


//// FUNCTION FUN_009cae20 @ 009cae20 ////

void FUN_009cae20(void)

{
  int iVar1;
  char local_40 [32];
  byte local_20 [32];
  
  iVar1 = 1;
  do {
    _sprintf((char *)local_20,"sky_%02d_v00.dds",iVar1);
    _sprintf(local_40,"sky_%02d_v%02d.dds",iVar1,DAT_0105ce08);
    FUN_00981fc0(DAT_0105cdfc,local_20,local_40,-1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}


//// FUNCTION FUN_009caf20 @ 009caf20 ////

void __cdecl FUN_009caf20(undefined4 param_1)

{
  DAT_0105ce10 = param_1;
  return;
}


//// FUNCTION FUN_009caf30 @ 009caf30 ////

void __cdecl FUN_009caf30(undefined4 param_1)

{
  DAT_0105ce14 = param_1;
  return;
}


//// FUNCTION FUN_009caf80 @ 009caf80 ////

int __cdecl FUN_009caf80(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char local_400 [1024];
  
  FUN_004015d0(param_2,"",0);
  iVar2 = FUN_009ac120(param_1,"[");
  if (iVar2 == -1) {
    return -1;
  }
  iVar3 = FUN_009ac120(param_1 + iVar2,"]");
  if (iVar3 == -1) {
    return -1;
  }
  _strncpy(local_400,param_1 + iVar2 + 1,iVar3 - 1);
  pcVar4 = local_400;
  local_400[iVar3 + -1] = '\0';
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_2,local_400,(int)pcVar4 - (int)(local_400 + 1));
  FUN_0048ad50(param_2);
  return iVar3 + iVar2;
}


//// FUNCTION FUN_009cb040 @ 009cb040 ////

void __cdecl FUN_009cb040(void *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *this;
  char *pcVar7;
  byte *pbVar8;
  int local_b4;
  byte *local_b0;
  uint local_ac;
  uint local_a8;
  byte local_a4 [20];
  char *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  char local_6c [32];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7b43;
  local_c = ExceptionList;
  if (((param_1 != (void *)0x0) &&
      (ExceptionList = &local_c, iVar2 = FUN_0097e350(param_1,0), iVar2 != 0)) &&
     (iVar2 = FUN_0097e350(param_1,0), *(int *)(iVar2 + 0x3c) != 0)) {
    pcVar7 = "_v00.dds";
    do {
      local_90 = pcVar7;
      pcVar7 = local_90 + 1;
    } while (*local_90 != '\0');
    local_90 = local_90 + -0xd72e34;
    local_b4 = 0;
    iVar2 = FUN_0097e350(param_1,0);
    if (0 < *(int *)(iVar2 + 0x38)) {
      do {
        iVar2 = FUN_0097e350(param_1,0);
        pcVar7 = *(char **)(*(int *)(iVar2 + 0x3c) + local_b4 * 4);
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 0x14;
        pcVar3 = pcVar7;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_004015d0(&local_b0,pcVar7,(int)pcVar3 - (int)(pcVar7 + 1));
        local_4 = 0;
        iVar2 = __strnicmp((char *)local_b0,"awning_stripe_17",0x10);
        pcVar7 = local_90;
        if (iVar2 == 0) {
          FUN_00430770(&local_b0,local_4c,local_ac - (int)local_90,local_ac);
          local_8c = local_80;
          local_4 = CONCAT31(local_4._1_3_,1);
          local_80[0] = 0;
          local_88 = 0;
          local_84 = 0x14;
          pcVar3 = "_v00.dds";
          do {
            pcVar4 = pcVar3;
            pcVar3 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          FUN_004015d0(&local_8c,"_v00.dds",(uint)(pcVar4 + -0xd72e34));
          uVar5 = FUN_00401ec0(local_4c,&local_8c);
          if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
          if ((char)uVar5 != '\0') {
            if (DAT_0105ce0c == -1) {
              pcVar7 = "awning_stripe_12_v00.dds";
              pcVar3 = local_6c;
              for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar3 = pcVar3 + 4;
              }
              *pcVar3 = *pcVar7;
            }
            else {
              puVar6 = FUN_00430770(&local_b0,local_2c,0,local_ac - (int)pcVar7);
              _sprintf(local_6c,"%s_v%02d.dds",*puVar6,DAT_0105ce0c);
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c[0]);
              }
            }
            FUN_0097e350(param_1,0);
            FUN_009d9820();
            pbVar8 = local_b0;
            this = (void *)FUN_0097e350(param_1,0);
            FUN_009dc990(this,pbVar8);
            FUN_00981fc0(param_1,local_b0,local_6c,-1);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
        }
        local_4 = 0xffffffff;
        if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_b4 = local_b4 + 1;
        iVar2 = FUN_0097e350(param_1,0);
      } while (local_b4 < *(int *)(iVar2 + 0x38));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009cb2e0 @ 009cb2e0 ////

void __cdecl FUN_009cb2e0(void *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *this;
  byte *pbVar8;
  int local_b4;
  byte *local_b0;
  uint local_ac;
  uint local_a8;
  byte local_a4 [20];
  char *local_90;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7b63;
  local_c = ExceptionList;
  if (((param_1 != (void *)0x0) &&
      (ExceptionList = &local_c, iVar3 = FUN_0097e350(param_1,0), iVar3 != 0)) &&
     (iVar3 = FUN_0097e350(param_1,0), *(int *)(iVar3 + 0x3c) != 0)) {
    pcVar2 = "_v00.dds";
    do {
      local_90 = pcVar2;
      pcVar2 = local_90 + 1;
    } while (*local_90 != '\0');
    local_90 = local_90 + -0xd72e34;
    local_b4 = 0;
    iVar3 = FUN_0097e350(param_1,0);
    if (0 < *(int *)(iVar3 + 0x38)) {
      do {
        iVar3 = FUN_0097e350(param_1,0);
        pcVar2 = *(char **)(*(int *)(iVar3 + 0x3c) + local_b4 * 4);
        local_b0 = local_a4;
        local_a4[0] = 0;
        local_ac = 0;
        local_a8 = 0x14;
        pcVar4 = pcVar2;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004015d0(&local_b0,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
        local_4 = 0;
        iVar3 = __strnicmp((char *)local_b0,"awning_stripe_17",0x10);
        if ((iVar3 != 0) &&
           (iVar3 = __strnicmp((char *)local_b0,"awning_stripe_",0xe), pcVar2 = local_90, iVar3 == 0
           )) {
          FUN_00430770(&local_b0,local_6c,local_ac - (int)local_90,local_ac);
          local_8c = local_80;
          local_4 = CONCAT31(local_4._1_3_,1);
          local_80[0] = 0;
          local_88 = 0;
          local_84 = 0x14;
          pcVar4 = "_v00.dds";
          do {
            pcVar5 = pcVar4;
            pcVar4 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          FUN_004015d0(&local_8c,"_v00.dds",(uint)(pcVar5 + -0xd72e34));
          uVar6 = FUN_00401ec0(local_6c,&local_8c);
          if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
          if ((char)uVar6 != '\0') {
            puVar7 = FUN_00430770(&local_b0,local_4c,0,local_ac - (int)pcVar2);
            _sprintf(local_2c,"%s_v%02d.dds",*puVar7,DAT_0105ce08);
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c[0]);
            }
            FUN_0097e350(param_1,0);
            FUN_009d9820();
            pbVar8 = local_b0;
            this = (void *)FUN_0097e350(param_1,0);
            FUN_009dc990(this,pbVar8);
            FUN_00981fc0(param_1,local_b0,local_2c,-1);
          }
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
        }
        local_4 = 0xffffffff;
        if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_b4 = local_b4 + 1;
        iVar3 = FUN_0097e350(param_1,0);
      } while (local_b4 < *(int *)(iVar3 + 0x38));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009cb570 @ 009cb570 ////

int * __cdecl FUN_009cb570(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  double dVar8;
  char *local_c0;
  uint local_bc;
  uint local_b8;
  char local_b4 [20];
  undefined1 *puStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  char *pcStack_8c;
  uint uStack_88;
  uint uStack_84;
  char *apcStack_6c [2];
  uint uStack_64;
  char *apcStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7b96;
  local_c = ExceptionList;
  local_c0 = local_b4;
  local_b4[0] = '\0';
  local_bc = 0;
  local_b8 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_c0,"",0);
  local_bc = 0;
  *local_c0 = '\0';
  local_4 = 0;
  iVar2 = FUN_009caf80(param_1,(int *)&local_c0);
  if ((((iVar2 != -1) && (iVar3 = __stricmp(local_c0,"fac_gatehouse"), iVar3 != 0)) &&
      (iVar3 = __stricmp(local_c0,"lot_gate"), iVar3 != 0)) &&
     (((iVar3 = __stricmp(local_c0,"outl_billboardt"), iVar3 != 0 &&
       (iVar3 = __strnicmp(local_c0,"lot_wall_",9), iVar3 != 0)) &&
      ((iVar3 = __strnicmp(local_c0,"osl_",4), iVar3 != 0 &&
       (iVar3 = __stricmp(local_c0,"lot_wallcorner"), iVar3 != 0)))))) {
    FUN_00430a20(&local_c0,".msh");
    pbVar4 = FUN_009de1d0(local_c0,1);
    if (pbVar4 != (byte *)0x0) {
      piVar5 = FUN_00433eb0();
      (**(code **)(*piVar5 + 0x18))();
      FUN_009de3b0(pbVar4);
      pcVar1 = param_1 + iVar2 + 1;
      iVar2 = FUN_009caf80(pcVar1,(int *)&local_c0);
      if (iVar2 != -1) {
        uVar6 = FUN_00448370(&local_c0," ",0);
        if (uVar6 == 0xffffffff) {
          if (local_b8 < 0x15) {
            ExceptionList = local_c;
            return piVar5;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_c0);
        }
        FUN_00430770(&local_c0,apcStack_4c,0,uVar6);
        FUN_00430770(&local_c0,&pcStack_8c,uVar6 + 1,local_bc);
        FUN_00401de0(apcStack_6c,"0",0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,3);
        uVar6 = FUN_00448370(&pcStack_8c," ",0);
        if (uVar6 != 0xffffffff) {
          puVar7 = FUN_00430770(&pcStack_8c,apvStack_2c,uVar6 + 1,uStack_88);
          FUN_00401e30(apcStack_6c,puVar7);
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          puVar7 = FUN_00430770(&pcStack_8c,apvStack_2c,0,uVar6);
          FUN_00401e30(&pcStack_8c,puVar7);
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
        }
        dVar8 = _atof(apcStack_4c[0]);
        fStack_98 = (float)dVar8 * 0.001;
        dVar8 = _atof(pcStack_8c);
        fStack_94 = (float)dVar8 * 0.001;
        dVar8 = _atof(apcStack_6c[0]);
        fStack_90 = (float)dVar8 * 0.001;
        iVar3 = FUN_009caf80(pcVar1 + iVar2 + 1,(int *)&local_c0);
        if (iVar3 == -1) {
          puStack_a0 = &stack0xffffff28;
          FUN_004012c0(0.0);
          (**(code **)(*piVar5 + 0x20))(&fStack_98);
        }
        else {
          dVar8 = _atof(local_c0);
          fStack_9c = (float)dVar8 * 0.001;
          iVar2 = FUN_009caf80(pcVar1 + iVar2 + 1 + iVar3 + 1,(int *)&local_c0);
          if (iVar2 != -1) {
            _atof(local_c0);
          }
          iVar2 = *piVar5;
          puStack_a0 = &stack0xffffff28;
          FUN_00401340(&stack0xffffff28,fStack_9c);
          (**(code **)(iVar2 + 0x20))(&fStack_98);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(apcStack_6c[0]);
        }
        if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_8c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apcStack_4c[0]);
        }
      }
      if (local_b8 < 0x15) {
        ExceptionList = local_c;
        return piVar5;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_c0);
    }
  }
  if (local_b8 < 0x15) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c0);
}


//// FUNCTION FUN_009cb9c0 @ 009cb9c0 ////

void FUN_009cb9c0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  while ((DAT_0105ce1c != 0 && (DAT_0105ce20 - DAT_0105ce1c >> 2 != 0))) {
    puVar1 = *(undefined4 **)(DAT_0105ce20 + -4);
    if ((*(byte *)(puVar1 + 0x27) & 0x40) != 0) {
      FUN_009e45b0(puVar1);
    }
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if (LVar3 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    if ((DAT_0105ce1c != 0) && (DAT_0105ce20 - DAT_0105ce1c >> 2 != 0)) {
      DAT_0105ce20 = DAT_0105ce20 + -4;
    }
  }
  return;
}


//// FUNCTION FUN_009cba50 @ 009cba50 ////

void FUN_009cba50(void)

{
  uint uVar1;
  
  if (DAT_00e682b4 != '\0') {
    for (uVar1 = 0; (DAT_0105ce1c != 0 && (uVar1 < (uint)(DAT_0105ce20 - DAT_0105ce1c >> 2)));
        uVar1 = uVar1 + 1) {
      (**(code **)(**(int **)(DAT_0105ce1c + uVar1 * 4) + 0x10))(0,1);
    }
  }
  return;
}


//// FUNCTION FUN_009cba90 @ 009cba90 ////

ulonglong FUN_009cba90(void)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint extraout_EDX;
  undefined4 uVar5;
  uint extraout_EDX_00;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar7 = FUN_00acd42c();
  if (DAT_0105ce04 != (int)uVar7) {
    if (DAT_0105bea4 != (code *)0x0) {
      (*DAT_0105bea4)();
    }
    uVar7 = FUN_00acd42c();
    DAT_0105ce04 = (int)uVar7;
    iVar4 = 0;
    if (DAT_0105ce04 < 10) {
      if (5 < DAT_0105ce04) {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 2;
    }
    if (DAT_0105ce08 != iVar4) {
      DAT_0105ce08 = iVar4;
      uVar7 = FUN_009cae20();
      for (uVar6 = 0;
          (DAT_0105ce4c != 0 &&
          (uVar2 = DAT_0105ce50 - DAT_0105ce4c >> 2, uVar7 = CONCAT44((int)(uVar7 >> 0x20),uVar2),
          uVar6 < uVar2)); uVar6 = uVar6 + 1) {
        uVar7 = FUN_009cb2e0(*(void **)(DAT_0105ce4c + uVar6 * 4));
      }
    }
    uVar6 = 0;
    iVar4 = DAT_0105ce2c;
    while( true ) {
      uVar5 = (undefined4)(uVar7 >> 0x20);
      uVar2 = (uint)uVar7;
      if ((iVar4 == 0) || (uVar2 = DAT_0105ce30 - iVar4 >> 2, uVar2 <= uVar6)) break;
      piVar1 = *(int **)(iVar4 + uVar6 * 4);
      uVar7 = CONCAT44(uVar5,DAT_0105ce10);
      if ((DAT_0105ce10 != (code *)0x0) &&
         (uVar7 = CONCAT44(uVar5,DAT_0105ce10), piVar1 != (int *)0x0)) {
        uVar8 = (*DAT_0105ce10)(&DAT_00d72db8);
        uVar7 = uVar8 & 0xffffffff00000000;
        iVar4 = DAT_0105ce2c;
        if ((char *)uVar8 != (char *)0x0) {
          pbVar3 = FUN_009de1d0((char *)uVar8,1);
          uVar7 = (ulonglong)extraout_EDX << 0x20;
          iVar4 = DAT_0105ce2c;
          if (pbVar3 != (byte *)0x0) {
            (**(code **)(*piVar1 + 0x18))(pbVar3);
            uVar7 = FUN_009de3b0(pbVar3);
            iVar4 = DAT_0105ce2c;
          }
        }
      }
      uVar6 = uVar6 + 1;
    }
    uVar7 = CONCAT44(uVar5,uVar2);
    uVar6 = 0;
    iVar4 = DAT_0105ce3c;
    while( true ) {
      uVar5 = (undefined4)(uVar7 >> 0x20);
      uVar2 = (uint)uVar7;
      if ((iVar4 == 0) || (uVar2 = DAT_0105ce40 - iVar4 >> 2, uVar2 <= uVar6)) break;
      piVar1 = *(int **)(iVar4 + uVar6 * 4);
      uVar7 = CONCAT44(uVar5,DAT_0105ce14);
      if ((DAT_0105ce14 != (code *)0x0) &&
         (uVar7 = CONCAT44(uVar5,DAT_0105ce14), piVar1 != (int *)0x0)) {
        uVar8 = (*DAT_0105ce14)("car_chrysler");
        uVar7 = uVar8 & 0xffffffff00000000;
        iVar4 = DAT_0105ce3c;
        if ((char *)uVar8 != (char *)0x0) {
          pbVar3 = FUN_009de1d0((char *)uVar8,1);
          uVar7 = (ulonglong)extraout_EDX_00 << 0x20;
          iVar4 = DAT_0105ce3c;
          if (pbVar3 != (byte *)0x0) {
            (**(code **)(*piVar1 + 0x18))(pbVar3);
            uVar7 = FUN_009de3b0(pbVar3);
            iVar4 = DAT_0105ce3c;
          }
        }
      }
      uVar6 = uVar6 + 1;
    }
    return CONCAT44(uVar5,CONCAT31((int3)(uVar2 >> 8),1));
  }
  return uVar7 & 0xffffffffffffff00;
}


//// FUNCTION FUN_009cbc40 @ 009cbc40 ////

void FUN_009cbc40(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar4 = FUN_00acd42c();
  iVar1 = (int)uVar4;
  iVar2 = -1;
  if (iVar1 < 0x7d1) {
    if (iVar1 < 0x7af) {
      if (iVar1 < 0x7a3) {
        if (iVar1 < 0x79e) {
          if (iVar1 < 0x794) {
            if (0x789 < iVar1) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 4;
    }
  }
  else {
    iVar2 = 5;
  }
  if (iVar2 != DAT_0105ce0c) {
    DAT_0105ce0c = iVar2;
    for (uVar3 = 0; (DAT_0105ce5c != 0 && (uVar3 < (uint)(DAT_0105ce60 - DAT_0105ce5c >> 2)));
        uVar3 = uVar3 + 1) {
      FUN_009cb040(*(void **)(DAT_0105ce5c + uVar3 * 4));
    }
  }
  return;
}


//// FUNCTION FUN_009cbd00 @ 009cbd00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cbd00(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  
  FUN_009cb9c0();
  puVar2 = DAT_0105cdfc;
  if (DAT_0105ce2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105ce2c);
  }
  DAT_0105ce2c = (void *)0x0;
  DAT_0105ce30 = 0;
  _DAT_0105ce34 = 0;
  if (DAT_0105ce3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105ce3c);
  }
  DAT_0105ce3c = (void *)0x0;
  DAT_0105ce40 = 0;
  _DAT_0105ce44 = 0;
  if (DAT_0105ce4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105ce4c);
  }
  DAT_0105ce4c = (void *)0x0;
  DAT_0105ce50 = 0;
  _DAT_0105ce54 = 0;
  if (DAT_0105ce5c == (void *)0x0) {
    DAT_0105ce5c = (void *)0x0;
    DAT_0105ce60 = 0;
    _DAT_0105ce64 = 0;
    if (DAT_0105cdfc != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_0105cdfc + 4);
      uVar1 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105cdfc = (undefined4 *)0x0;
      DAT_0105b588 = uVar1;
    }
    DAT_0105ce00 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105ce5c);
}


//// FUNCTION FUN_009cbdf0 @ 009cbdf0 ////

undefined4 FUN_009cbdf0(void)

{
  undefined4 uVar1;
  
  FUN_009cba90();
  uVar1 = FUN_009cbc40();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009cbe00 @ 009cbe00 ////

int __cdecl FUN_009cbe00(char *param_1)

{
  bool bVar1;
  bool bVar2;
  size_t _Count;
  int *this;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  char *_Str2;
  size_t sVar7;
  int *local_404;
  char local_400 [1024];
  
  _Count = FUN_009ac120(param_1,"\n");
  if ((_Count != 0xffffffff) && ((int)_Count < 0x401)) {
    _strncpy(local_400,param_1,_Count);
    local_400[_Count] = '\0';
    this = FUN_009cb570(local_400);
    if (this != (int *)0x0) {
      this[0x27] = this[0x27] | 0x80;
      local_404 = this;
      FUN_009e4330(this);
      FUN_004690a0(&DAT_0105ce18,&local_404);
      sVar7 = 5;
      _Str2 = "p_car";
      pcVar3 = (char *)FUN_0097e350(this,0);
      iVar4 = __strnicmp(pcVar3,_Str2,sVar7);
      if (iVar4 == 0) {
        pcVar3 = "chrysler";
        puVar5 = (uint *)FUN_0097e350(this,0);
        puVar5 = FUN_00ace080(puVar5,pcVar3);
        if (puVar5 == (uint *)0x0) {
          FUN_004690a0(&DAT_0105ce28,&local_404);
          return _Count + 1;
        }
        FUN_004690a0(&DAT_0105ce38,&local_404);
        return _Count + 1;
      }
      iVar4 = FUN_0097e350(this,0);
      if ((0 < *(int *)(iVar4 + 0x38)) &&
         (iVar4 = FUN_0097e350(this,0), *(int *)(iVar4 + 0x3c) != 0)) {
        bVar1 = false;
        bVar2 = false;
        iVar4 = FUN_0097e350(this,0);
        if (0 < *(int *)(iVar4 + 0x38)) {
          iVar4 = 0;
          do {
            sVar7 = 0xe;
            pcVar3 = "awning_stripe_";
            iVar6 = FUN_0097e350(this,0);
            iVar6 = __strnicmp(*(char **)(*(int *)(iVar6 + 0x3c) + iVar4 * 4),pcVar3,sVar7);
            if (iVar6 == 0) {
              sVar7 = 0x10;
              pcVar3 = "awning_stripe_17";
              bVar1 = true;
              iVar6 = FUN_0097e350(this,0);
              iVar6 = __strnicmp(*(char **)(*(int *)(iVar6 + 0x3c) + iVar4 * 4),pcVar3,sVar7);
              if (iVar6 == 0) {
                bVar2 = true;
              }
            }
            iVar4 = iVar4 + 1;
            iVar6 = FUN_0097e350(this,0);
          } while (iVar4 < *(int *)(iVar6 + 0x38));
          if (bVar1) {
            FUN_004690a0(&DAT_0105ce48,&local_404);
          }
          if (bVar2) {
            FUN_004690a0(&DAT_0105ce58,&local_404);
          }
        }
      }
    }
    return _Count + 1;
  }
  return -1;
}


//// FUNCTION FUN_009cbfe0 @ 009cbfe0 ////

uint __cdecl FUN_009cbfe0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *_Memory;
  size_t sVar4;
  int iVar5;
  char *local_50;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7bb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009cb9c0();
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  uVar3 = FUN_009d3720(&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (uVar3 == 0) {
    ExceptionList = local_c;
    return local_44 & 0xffffff00;
  }
  _Memory = operator_new(uVar3 + 1);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 1;
  sVar4 = FUN_009d3ca0(&local_2c,(undefined4 *)_Memory,uVar3,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  _Memory[uVar3] = '\0';
  local_50 = _Memory;
  while( true ) {
    iVar5 = FUN_009cbe00(local_50);
    if (iVar5 == -1) break;
    local_50 = local_50 + iVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009cc160 @ 009cc160 ////

uint __cdecl FUN_009cc160(char *param_1)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  void *unaff_ESI;
  char *pcVar10;
  bool bVar11;
  bool bVar12;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf7bd3;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_4 = 0;
  local_24 = 0x40;
  if (DAT_0105be08 == 0) {
    ExceptionList = &local_c;
    local_2c = _malloc(0x40);
    _strncpy(local_2c,"data\\Landscape\\OutsideLot_low.rob",0x21);
    local_28 = 0x21;
    local_2c[0x21] = '\0';
  }
  else {
    ExceptionList = &local_c;
    local_2c = _malloc(0x40);
    _strncpy(local_2c,"data\\Landscape\\OutsideLot_high.rob",0x22);
    local_28 = 0x22;
    local_2c[0x22] = '\0';
  }
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  }
  uVar4 = FUN_009cbfe0(local_2c);
  if ((char)uVar4 == '\0') {
    if (local_24 < 0x15) {
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pbVar5 = FUN_009de1d0("Sky_box.msh",1);
  param_1 = (char *)0x0;
  if (0 < *(int *)(pbVar5 + 0x30)) {
    iVar9 = 0;
    do {
      pcVar3 = *(char **)(*(int *)(pbVar5 + 0x34) + 0x18 + iVar9);
      if (pcVar3 == (char *)0x0) {
LAB_009cc294:
        bVar11 = false;
      }
      else {
        iVar8 = 0x10;
        bVar11 = true;
        pcVar10 = "land_sand00.dds";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar11 = *pcVar3 == *pcVar10;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar11);
        if (!bVar11) goto LAB_009cc294;
        bVar11 = true;
      }
      pcVar3 = *(char **)(*(int *)(pbVar5 + 0x34) + iVar9 + 0x18);
      if (pcVar3 == (char *)0x0) {
LAB_009cc2b6:
        bVar12 = false;
      }
      else {
        iVar8 = 0x12;
        bVar12 = true;
        pcVar10 = "land_tarmac00.dds";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar12 = *pcVar3 == *pcVar10;
          pcVar3 = pcVar3 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar12);
        if (!bVar12) goto LAB_009cc2b6;
        bVar12 = true;
      }
      if (bVar11 || bVar12) {
        *(undefined1 *)(*(int *)(pbVar5 + 0x34) + 0xc + iVar9) = 0x27;
        *(uint *)(*(int *)(pbVar5 + 0x34) + 0x10 + iVar9) =
             *(uint *)(*(int *)(pbVar5 + 0x34) + 0x10 + iVar9) | 0x8000000;
        puVar1 = (uint *)(*(int *)(pbVar5 + 0x34) + 0x10 + iVar9);
        *puVar1 = *puVar1 | 0x10000000;
      }
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 0x24;
    } while ((int)param_1 < *(int *)(pbVar5 + 0x30));
  }
  puVar6 = operator_new(0x110);
  local_4._0_1_ = 1;
  if (puVar6 == (undefined4 *)0x0) {
    DAT_0105cdfc = (int *)0x0;
  }
  else {
    DAT_0105cdfc = MeshInstance_Constructor(puVar6);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*DAT_0105cdfc + 0x18))(pbVar5);
  uVar7 = FUN_009de3b0(pbVar5);
  DAT_0105ce04 = 0;
  DAT_0105ce08 = 0;
  DAT_0105ce0c = 0;
  DAT_0105ce00 = 1;
  if (local_28 < 0x15) {
    ExceptionList = pvStack_10;
    return CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}


//// FUNCTION FUN_009cc380 @ 009cc380 ////

void FUN_009cc380(void)

{
  DAT_0105d270 = 0;
  DAT_0105d274 = 0;
  return;
}


//// FUNCTION FUN_009cc390 @ 009cc390 ////

void __thiscall FUN_009cc390(void *this,int *param_1)

{
  do {
    if (*(void **)((int)this + 0x10) != (void *)0x0) {
      FUN_009cc390(*(void **)((int)this + 0x10),param_1);
    }
    (&DAT_0105ce70)[*param_1] = this;
    *param_1 = *param_1 + 1;
    this = *(void **)((int)this + 0x14);
  } while (this != (void *)0x0);
  return;
}


//// FUNCTION FUN_009cc3c0 @ 009cc3c0 ////

void __cdecl FUN_009cc3c0(int param_1)

{
  DAT_0105ce68 = param_1 == 1;
  return;
}


//// FUNCTION FUN_009cc3f0 @ 009cc3f0 ////

undefined4 * FUN_009cc3f0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  LONG LVar4;
  undefined4 *extraout_EDX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_14;
  float local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  int local_4;
  
  DAT_0105d278 = 0;
  if (DAT_0105d270 == (void *)0x0) {
    return (undefined4 *)0x0;
  }
  local_4 = 0;
  FUN_009cc390(DAT_0105d270,&local_4);
  iVar7 = -1;
  iVar6 = -1;
  iVar8 = 0;
  local_14 = (undefined4 *)DAT_00e682b8;
  puVar5 = extraout_EDX;
  local_c = extraout_EDX;
  local_8 = extraout_EDX;
  if ((int)extraout_EDX < (int)DAT_0105d274) {
    do {
      if (iVar7 != -1) break;
      puVar5 = (undefined4 *)(&DAT_0105ce70)[iVar8];
      cVar3 = (**(code **)(*(int *)*puVar5 + 0x28))(&local_10);
      if (cVar3 == '\0') {
        if (local_10 < (float)local_14) {
          local_8 = puVar5 + 1;
          local_14 = (undefined4 *)local_10;
          iVar6 = iVar8;
        }
      }
      else {
        local_c = puVar5 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar8 + 1;
      puVar5 = (undefined4 *)0x0;
    } while (iVar8 < (int)DAT_0105d274);
  }
  local_14 = puVar5;
  if (iVar7 == -1) {
    if ((iVar6 != -1) && (1 < *(int *)((&DAT_0105d280)[iVar6 * 6] + 0x10))) {
      local_14 = local_8;
      DAT_0105d278 = 2;
    }
  }
  else if (1 < *(int *)((&DAT_0105d280)[iVar7 * 6] + 0x10)) {
    local_14 = local_c;
    DAT_0105d278 = 1;
  }
  iVar6 = 0;
  if ((int)puVar5 < (int)DAT_0105d274) {
    puVar9 = &DAT_0105d280;
    iVar7 = (int)DAT_0105d274;
    do {
      puVar1 = (undefined4 *)*puVar9;
      if (puVar1 != puVar5) {
        LVar4 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        iVar7 = (int)DAT_0105d274;
        DAT_0105b588 = uVar2;
        *puVar9 = 0;
        puVar5 = (undefined4 *)0x0;
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 6;
    } while (iVar6 < iVar7);
  }
  DAT_0105d270 = puVar5;
  DAT_0105d274 = puVar5;
  return local_14;
}


//// FUNCTION FUN_009cc560 @ 009cc560 ////

void __cdecl FUN_009cc560(void *param_1,float param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar2 = DAT_0105d270;
  if (DAT_0105d274 < 0x100) {
    iVar3 = FUN_0097e350(param_1,0);
    if ((((iVar3 != 0) && (iVar3 = FUN_0097e350(param_1,0), *(int *)(iVar3 + 0x40) != 0)) &&
        ((*(byte *)((int)param_1 + 0x9c) & 0x40) == 0)) ||
       ((*(uint *)((int)param_1 + 0x9c) & 0x4000000) != 0)) {
      param_2 = param_2 - 1e+06;
    }
    iVar3 = DAT_0105d274;
    puVar2 = &DAT_0105d280 + DAT_0105d274 * 6;
    *puVar2 = param_1;
    DAT_0105d274 = DAT_0105d274 + 1;
    InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    if (param_3 == (undefined4 *)0x0) {
      (&DAT_0105d288)[iVar3 * 6] = 0;
      (&DAT_0105d284)[iVar3 * 6] = 0;
    }
    else {
      (&DAT_0105d284)[iVar3 * 6] = *param_3;
      (&DAT_0105d288)[iVar3 * 6] = param_3[1];
    }
    puVar1 = DAT_0105d270;
    bVar5 = DAT_0105d270 != (undefined4 *)0x0;
    (&DAT_0105d28c)[iVar3 * 6] = param_2;
    (&DAT_0105d290)[iVar3 * 6] = 0;
    (&DAT_0105d294)[iVar3 * 6] = 0;
    if (bVar5) {
      do {
        while (puVar4 = puVar1, param_2 <= (float)puVar4[3]) {
          puVar1 = (undefined4 *)puVar4[4];
          if ((undefined4 *)puVar4[4] == (undefined4 *)0x0) {
            puVar4[4] = puVar2;
            return;
          }
        }
        puVar1 = (undefined4 *)puVar4[5];
      } while ((undefined4 *)puVar4[5] != (undefined4 *)0x0);
      puVar4[5] = puVar2;
      return;
    }
  }
  DAT_0105d270 = puVar2;
  return;
}


//// FUNCTION FUN_009cc650 @ 009cc650 ////

void __fastcall FUN_009cc650(int param_1)

{
  (**(code **)(*g_pDirect3DDevice + 0xcc))
            (g_pDirect3DDevice,*(undefined4 *)(param_1 + 0x68),param_1);
  (**(code **)(*g_pDirect3DDevice + 0xd4))(g_pDirect3DDevice,*(undefined4 *)(param_1 + 0x68),1);
  if (DAT_01059214 != 1) {
    DAT_01059214 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x89,1);
  }
  return;
}


//// FUNCTION FUN_009cc6b0 @ 009cc6b0 ////

void __thiscall FUN_009cc6b0(void *this,float *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  *(float *)((int)this + 0x34) = *param_1;
  *(float *)((int)this + 0x38) = param_1[1];
  *(float *)((int)this + 0x3c) = param_1[2];
  local_c = -*param_1;
  local_8 = -param_1[1];
  local_4 = -param_1[2];
  FUN_00412e20(&local_c);
  *(float *)((int)this + 0x40) = local_c;
  *(float *)((int)this + 0x44) = local_8;
  *(float *)((int)this + 0x48) = local_4;
  return;
}


//// FUNCTION FUN_009cc750 @ 009cc750 ////
// DECOMPILE FAILED: 
Low-level Error: Cannot properly adjust input varnodes

//// FUNCTION FUN_009cc830 @ 009cc830 ////

void FUN_009cc830(void)

{
  if (g_pDirect3DDevice != 0) {
    FUN_009cc750(0x707080,0,&DAT_0105c3a8,3,0x447a0000,1);
    FUN_009cc650(0x105c7e0);
    return;
  }
  return;
}


//// FUNCTION FUN_009cc890 @ 009cc890 ////

undefined4 __fastcall FUN_009cc890(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0x45dde000;
  local_8 = 0xc6115000;
  local_4 = 0x46674000;
  FUN_009cc750(0xffffff,0x606060,&local_c,3,0x447a0000,0);
  return param_1;
}


//// FUNCTION FUN_009cc940 @ 009cc940 ////

int __thiscall FUN_009cc940(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(int *)this = *param_1;
  *(char *)((int)this + 4) = (char)param_1[1];
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)((int)param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)((int)param_1 + 7);
  *(char *)((int)this + 8) = (char)param_1[2];
  *(undefined1 *)((int)this + 9) = *(undefined1 *)((int)param_1 + 9);
  *(undefined2 *)((int)this + 10) = *(undefined2 *)((int)param_1 + 10);
  piVar2 = param_1 + 3;
  piVar3 = (int *)((int)this + 0xc);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_009ac040((char *)((int)this + 0xc));
  piVar2 = param_1 + 0xb;
  piVar3 = (int *)((int)this + 0x2c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_009ac040((char *)((int)this + 0x2c));
  piVar2 = param_1 + 0x13;
  piVar3 = (int *)((int)this + 0x4c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_009ac040((char *)((int)this + 0x4c));
  piVar2 = param_1 + 0x1b;
  piVar3 = (int *)((int)this + 0x6c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_009ac040((char *)((int)this + 0x6c));
  piVar2 = param_1 + 0x24;
  *(int *)((int)this + 0x8c) = param_1[0x23];
  if (*(int *)this < 7) {
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  else {
    *(int *)((int)this + 0x90) = *piVar2;
    *(int *)((int)this + 0x94) = param_1[0x25];
    *(int *)((int)this + 0x98) = param_1[0x26];
    *(int *)((int)this + 0x9c) = param_1[0x27];
    *(int *)((int)this + 0xa0) = param_1[0x28];
    piVar2 = param_1 + 0x29;
  }
  if ((*(byte *)((int)this + 4) & 2) != 0) {
    *(int *)((int)this + 0xa4) = *piVar2;
    return (int)piVar2 + (4 - (int)param_1);
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  return (int)piVar2 - (int)param_1;
}


//// FUNCTION FUN_009cca90 @ 009cca90 ////

undefined4 * __fastcall FUN_009cca90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_009a2210(param_1 + 0x15);
  puVar2 = param_1;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[8] = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 8;
  param_1[9] = 0x3f000000;
  param_1[10] = 1;
  return param_1;
}


//// FUNCTION FUN_009ccaf0 @ 009ccaf0 ////

undefined4 * __fastcall FUN_009ccaf0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_009a2210(param_1 + 0x15);
  puVar2 = param_1;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(byte *)((int)param_1 + 0x21) = *(byte *)((int)param_1 + 0x21) | 6;
  return param_1;
}


//// FUNCTION FUN_009ccb60 @ 009ccb60 ////

uint __fastcall FUN_009ccb60(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xa4) >> 7 & 0x1f;
  uVar2 = 0;
  if ((uVar1 != 0) &&
     (uVar2 = uVar1 * 0x78 + -0x78 + *(int *)(param_1 + 200), *(char *)(uVar2 + 0x20) == '\x04')) {
    return CONCAT31((int3)(uVar2 >> 8),*(int *)(uVar2 + 0x2c) != 0);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009ccba0 @ 009ccba0 ////

void __fastcall FUN_009ccba0(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0x80] = 0;
  *param_1 = 0;
  param_1[0x20] = 0;
  param_1[0x40] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffe0002 | 2;
  return;
}


//// FUNCTION FUN_009ccc30 @ 009ccc30 ////

void __thiscall FUN_009ccc30(void *this,int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  if (*(undefined4 **)((int)this + 0xc0) != (undefined4 *)0x0) {
    FUN_009d2b50(*(undefined4 **)((int)this + 0xc0));
    *(undefined4 *)((int)this + 0xc0) = 0;
  }
  *(int *)((int)this + 0xc0) = param_1;
  return;
}


//// FUNCTION FUN_009cccc0 @ 009cccc0 ////

void __thiscall FUN_009cccc0(void *this,int param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  char local_108;
  undefined4 local_107;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if ((((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0x28))) &&
     (*(int *)(*(int *)(iVar1 + 0x2c) + 4 + param_1 * 0x2c) == 7)) {
    local_108 = '\0';
    puVar3 = &local_107;
    for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_009d8a20(param_2,&local_108);
    pcVar2 = &local_108;
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    iVar1 = 5;
    bVar5 = true;
    pcVar2 = pcVar4 + -4;
    pcVar4 = ".msh";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      _sprintf(param_3,"Thumbs/Hair/%s");
      do {
        pcVar2 = param_3;
        param_3 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      _sprintf(pcVar2 + -3,(char *)&PTR_DAT_00d1e2c0);
    }
  }
  return;
}


//// FUNCTION FUN_009ccd90 @ 009ccd90 ////

void __thiscall FUN_009ccd90(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *_Dest;
  
  if (*(int *)((int)this + 0xcc) != 0) {
    _sprintf(param_3,"Thumbs/CostumeOptions/cos_latex_head_%i_%i",param_1,param_2);
    do {
      _Dest = param_3;
      param_3 = _Dest + 1;
    } while (*_Dest != '\0');
    _sprintf(_Dest,".dds");
  }
  return;
}


//// FUNCTION FUN_009ccde0 @ 009ccde0 ////

void __thiscall FUN_009ccde0(void *this,undefined4 param_1,char *param_2,char *param_3)

{
  char *_Dest;
  
  if (*(int *)((int)this + 0xcc) != 0) {
    _sprintf(param_2,param_3,param_1);
    do {
      _Dest = param_2;
      param_2 = _Dest + 1;
    } while (*_Dest != '\0');
    _sprintf(_Dest,".dds");
  }
  return;
}


//// FUNCTION FUN_009cce30 @ 009cce30 ////

float10 __thiscall FUN_009cce30(uint *param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0xcc) != 0)) {
    switch(param_1[1]) {
    case 0:
      return (float10)*(float *)((*param_1 & 0xff) * 0x78 + 0x24 + *(int *)(param_2 + 0xc4));
    case 1:
      return (float10)*(float *)((*param_1 & 0xff) * 0x78 + 0x24 + *(int *)(param_2 + 200));
    case 2:
      return (float10)0.89;
    case 3:
      return (float10)0.9;
    case 4:
      return (float10)0.86;
    case 5:
      return (float10)0.85;
    case 6:
      return (float10)0.81;
    case 7:
      return (float10)0.98;
    case 8:
      return (float10)0.94;
    case 9:
      return (float10)0.88;
    case 10:
    case 0xb:
      return (float10)0.91;
    case 0xd:
      return (float10)0.6;
    }
  }
  return (float10)0.5;
}


//// FUNCTION FUN_009ccf60 @ 009ccf60 ////

bool __fastcall FUN_009ccf60(int param_1)

{
  return *(int *)(param_1 + 4) == 7;
}


//// FUNCTION FUN_009cd020 @ 009cd020 ////

uint __thiscall FUN_009cd020(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  pbVar8 = (byte *)(param_1 + 0x80);
  pbVar4 = (byte *)((int)this + 0x80);
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_009cd069:
      uVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_009cd06e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_009cd069;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_009cd06e:
  if (uVar5 == 0) {
    iVar2 = *(int *)((int)this + 0xcc);
    if (iVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(iVar2 + 0x28);
    }
    iVar3 = *(int *)(param_1 + 0xcc);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar3 + 0x28);
    }
    if (uVar7 == uVar5) {
      if ((iVar2 != 0) && (iVar3 != 0)) {
        uVar5 = FUN_00433f70((int)this);
        iVar6 = uVar5 * 0x2c;
        bVar11 = true;
        pcVar9 = *(char **)(iVar2 + 0x2c);
        pcVar10 = *(char **)(iVar3 + 0x2c);
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar11 = *pcVar9 == *pcVar10;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar11);
        if (!bVar11) goto LAB_009cd072;
      }
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
LAB_009cd072:
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_009cd120 @ 009cd120 ////

uint * __cdecl FUN_009cd120(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  uVar3 = *param_1;
  puVar1 = operator_new(uVar3);
  puVar4 = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar4 = (char)*param_1;
    param_1 = (uint *)((int)param_1 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  if (puVar1[10] != 0) {
    puVar1[0xb] = (uint)(puVar1 + 0xc);
    return puVar1;
  }
  puVar1[0xb] = 0;
  return puVar1;
}


//// FUNCTION FUN_009cd170 @ 009cd170 ////

int __thiscall FUN_009cd170(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 0xcc);
  if (((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x28), iVar1 != 0)) && (-1 < param_2)) {
    iVar4 = 0;
    iVar3 = 0;
    if (0 < iVar1) {
      iVar2 = *(int *)(iVar2 + 0x2c);
      do {
        if (param_1 == *(int *)(iVar2 + 4)) {
          if (iVar4 == param_2) {
            return iVar2;
          }
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar3 < iVar1);
    }
    return 0;
  }
  return 0;
}


//// FUNCTION FUN_009cd1f0 @ 009cd1f0 ////

byte * __thiscall FUN_009cd1f0(void *this,char *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  byte local_40 [64];
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  _sprintf((char *)local_40,param_1);
  pbVar5 = local_40;
  do {
    pbVar6 = pbVar5;
    pbVar5 = pbVar6 + 1;
  } while (*pbVar6 != 0);
  _sprintf((char *)(pbVar6 + -3),(char *)&PTR_DAT_00d1e2c0);
  uVar2 = 0;
  uVar7 = *(uint *)((int)this + 0xa4) >> 2 & 0x1f;
  if (uVar7 != 0) {
    pbVar5 = *(byte **)((int)this + 0xc4);
    do {
      if ((pbVar5[0x50] & 2) != 0) {
        pbVar6 = local_40;
        pbVar3 = pbVar5;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_009cd294:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_009cd299;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_009cd294;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_009cd299:
        if (iVar4 == 0) {
          return *(byte **)((int)this + 0xc4) + uVar2 * 0x78;
        }
      }
      uVar2 = uVar2 + 1;
      pbVar5 = pbVar5 + 0x78;
    } while (uVar2 < uVar7);
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_009cd2d0 @ 009cd2d0 ////

uint __cdecl FUN_009cd2d0(char *param_1)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  int iVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    in_EAX = (int)pcVar2 - (int)(param_1 + 1);
    if ((((0xb < (int)in_EAX) && (param_1[in_EAX - 0xb] == '_')) && (param_1[in_EAX - 10] == 'x'))
       && (('/' < param_1[in_EAX - 9] && (param_1[in_EAX - 9] < ':')))) {
      iVar3 = _strncmp(param_1 + (in_EAX - 8),"_v00.",4);
      return CONCAT31((int3)((uint)-iVar3 >> 8),'\x01' - (iVar3 != 0));
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009cd330 @ 009cd330 ////

int __cdecl FUN_009cd330(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar1 = param_1;
  if ((param_1 != (char *)0x0) && (uVar2 = FUN_009cd2d0(param_1), (char)uVar2 != '\0')) {
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    param_1 = (char *)0xffffffff;
    FUN_009b7af0(pcVar3 + -9,(int *)&param_1,(int *)0x0);
    return (int)param_1;
  }
  return -1;
}


//// FUNCTION FUN_009cd380 @ 009cd380 ////

bool __cdecl FUN_009cd380(char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    uVar1 = FUN_009cd2d0(param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = FUN_009cd330(param_1);
      return param_2 == iVar2;
    }
  }
  return false;
}


//// FUNCTION FUN_009cd3c0 @ 009cd3c0 ////

undefined4 __thiscall FUN_009cd3c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0x28))) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x2c) + 4 + param_1 * 0x2c);
  }
  return 0xe;
}


//// FUNCTION FUN_009cd430 @ 009cd430 ////

int __thiscall FUN_009cd430(void *this,int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if ((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x28), iVar2 == 0)) {
    return param_1;
  }
  uVar5 = *(uint *)((int)this + 0xa4) >> 7 & 0x1f;
  if ((uVar5 == 0) ||
     (iVar4 = uVar5 * 0x78 + -0x78 + *(int *)((int)this + 200), *(char *)(iVar4 + 0x20) != '\x04'))
  {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(iVar4 + 0x2c) != 0;
  }
  iVar4 = param_1;
LAB_009cd4b2:
  do {
    iVar4 = iVar4 + (uint)(param_2 != '\0') * 2 + -1;
    bVar3 = false;
    if (iVar4 < iVar2) {
      if (iVar4 < 0) {
        iVar4 = iVar2 + -1;
      }
    }
    else {
      iVar4 = 0;
    }
    if (param_1 == iVar4) {
      return param_1;
    }
    puVar6 = (uint *)(iVar4 * 0x2c + *(int *)(iVar1 + 0x2c));
    if (bVar7) {
      uVar5 = puVar6[1];
      if ((((((uVar5 == 2) || (uVar5 == 3)) || (uVar5 == 4)) || ((uVar5 == 5 || (uVar5 == 6)))) ||
          (uVar5 == 0xd)) ||
         (((uVar5 == 10 || (uVar5 == 0xb)) ||
          ((uVar5 == 0xc || (((uVar5 == 7 || (uVar5 == 8)) || (uVar5 == 9)))))))) {
        bVar3 = true;
      }
      if ((uVar5 == 1) &&
         (*(char *)((*puVar6 & 0xff) * 0x78 + 0x20 + *(int *)((int)this + 200)) == '\x01')) {
        bVar3 = true;
      }
    }
    if (DAT_0105ea88 != '\0') {
      uVar5 = puVar6[1];
      if ((uVar5 == 1) &&
         (*(char *)((*puVar6 & 0xff) * 0x78 + 0x20 + *(int *)((int)this + 200)) == '\x04')) {
        bVar3 = true;
      }
      if (((((uVar5 == 2) || (uVar5 == 3)) || (uVar5 == 4)) ||
          (((uVar5 == 5 || (uVar5 == 6)) || ((uVar5 == 0xd || ((uVar5 == 7 || (uVar5 == 8)))))))) ||
         (uVar5 == 9)) goto LAB_009cd4b2;
    }
    if (!bVar3) {
      return iVar4;
    }
  } while( true );
}


//// FUNCTION FUN_009cd5e0 @ 009cd5e0 ////

undefined4 __cdecl FUN_009cd5e0(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return 1;
  default:
    return 0;
  case 4:
    return 2;
  case 5:
    return 3;
  case 6:
    return 8;
  case 10:
    return 5;
  case 0xb:
    return 6;
  case 0xc:
    return 7;
  case 0xd:
    return 4;
  }
}


//// FUNCTION FUN_009cd660 @ 009cd660 ////

undefined4 __thiscall FUN_009cd660(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0x28))) {
    switch(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 4 + param_1 * 0x2c)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_009cd820 @ 009cd820 ////

int __thiscall FUN_009cd820(void *this,undefined4 *param_1)

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
  return (int)(param_1 + 6) + (0xc - (int)param_1);
}


//// FUNCTION FUN_009cd880 @ 009cd880 ////

int __thiscall FUN_009cd880(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_009ac040(this);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  puVar2 = param_1 + 0xc;
  pcVar4 = (char *)((int)this + 0x30);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    pcVar4 = pcVar4 + 4;
  }
  puVar2 = param_1 + 0x14;
  FUN_009ac040((char *)((int)this + 0x30));
  if (DAT_00e682bc < 6) {
    *(undefined1 *)((int)this + 0x50) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x50) = *(undefined1 *)puVar2;
    *(undefined1 *)((int)this + 0x51) = *(undefined1 *)((int)param_1 + 0x51);
    *(undefined2 *)((int)this + 0x52) = *(undefined2 *)((int)param_1 + 0x52);
    puVar2 = param_1 + 0x15;
  }
  FUN_009ad890(this,(int *)((int)this + 0x28),(int *)((int)this + 0x2c));
  if ((*(byte *)((int)this + 0x50) & 1) != 0) {
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x28);
  }
  iVar1 = _strncmp(this,"com_",4);
  if (iVar1 != 0) {
    *(byte *)((int)this + 0x50) = *(byte *)((int)this + 0x50) | 2;
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  if ((*(byte *)((int)this + 0x50) & 8) != 0) {
    iVar1 = FUN_009cd820((undefined4 *)((int)this + 0x54),puVar2);
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  }
  return (int)puVar2 - (int)param_1;
}


//// FUNCTION FUN_009cd980 @ 009cd980 ////

int __thiscall FUN_009cd980(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_009ac040(this);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  puVar2 = param_1 + 0xc;
  pcVar4 = (char *)((int)this + 0x30);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    pcVar4 = pcVar4 + 4;
  }
  puVar2 = param_1 + 0x14;
  FUN_009ac040((char *)((int)this + 0x30));
  if ((*(byte *)((int)this + 0x21) & 0x11) != 0) {
    *(undefined4 *)((int)this + 0x2c) = 1;
  }
  if ((*(byte *)((int)this + 0x21) & 2) != 0) {
    *(undefined4 *)((int)this + 0x50) = *puVar2;
    puVar2 = param_1 + 0x15;
  }
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
  if ((*(byte *)((int)this + 0x21) & 4) != 0) {
    iVar1 = FUN_009cd820((undefined4 *)((int)this + 0x54),puVar2);
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
  }
  iVar1 = _strncmp(this,"acc_glasses_",0xc);
  if ((iVar1 == 0) && (*(char *)((int)this + 0x20) == '\0')) {
    *(undefined1 *)((int)this + 0x20) = 5;
  }
  return (int)puVar2 - (int)param_1;
}


//// FUNCTION FUN_009cda70 @ 009cda70 ////

undefined4 * __thiscall FUN_009cda70(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7bf6;
  local_c = ExceptionList;
  puVar4 = this;
  ExceptionList = &local_c;
  for (iVar2 = 0x36; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_009ccba0(this);
  uVar3 = *(uint *)((int)this + 0xa4) ^ (param_1 * 4 ^ *(uint *)((int)this + 0xa4)) & 0x7c;
  uVar5 = uVar3 >> 2 & 0x1f;
  *(uint *)((int)this + 0xa4) = uVar3;
  if (uVar5 != 0) {
    pvVar1 = operator_new(uVar5 * 0x78);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar1,0x78,uVar5,FUN_009cca90);
    }
    local_4 = 0xffffffff;
    *(void **)((int)this + 0xc4) = pvVar1;
  }
  uVar3 = *(uint *)((int)this + 0xa4) ^ (param_2 << 7 ^ *(uint *)((int)this + 0xa4)) & 0xf80;
  uVar5 = uVar3 >> 7 & 0x1f;
  *(uint *)((int)this + 0xa4) = uVar3;
  if (uVar5 != 0) {
    pvVar1 = operator_new(uVar5 * 0x78);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar1,0x78,uVar5,FUN_009ccaf0);
    }
    *(void **)((int)this + 200) = pvVar1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009cdb80 @ 009cdb80 ////

void __fastcall FUN_009cdb80(int param_1)

{
  if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
    FUN_009d2b50(*(undefined4 **)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc4));
}


//// FUNCTION FUN_009cdc00 @ 009cdc00 ////

int __thiscall FUN_009cdc00(void *this,int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xcc);
  if (((iVar3 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar3 + 0x28))) {
    uVar1 = *(undefined4 *)(param_1 * 0x2c + 4 + *(int *)(iVar3 + 0x2c));
    puVar2 = (uint *)(param_1 * 0x2c + *(int *)(iVar3 + 0x2c));
    switch(uVar1) {
    case 0:
      iVar3 = (*puVar2 & 0xff) * 0x78;
      return (*(byte *)(*(int *)((int)this + 0xc4) + iVar3 + 0x50) & 1) +
             *(int *)(*(int *)((int)this + 0xc4) + 0x28 + iVar3);
    case 1:
      return *(int *)((*puVar2 & 0xff) * 0x78 + 0x28 + *(int *)((int)this + 200));
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      iVar3 = FUN_009cd5e0(uVar1);
      iVar3 = FUN_00a5ef20(iVar3);
      return iVar3;
    case 7:
      iVar3 = FUN_009d7620();
      return iVar3;
    case 8:
      iVar3 = FUN_009d7110();
      return iVar3;
    case 9:
      iVar3 = FUN_00a6a840();
      return iVar3;
    }
  }
  return 0;
}


//// FUNCTION FUN_009cdce0 @ 009cdce0 ////

void __fastcall FUN_009cdce0(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  float10 fVar17;
  char *_Format;
  int local_40;
  uint local_2c [11];
  
  uVar6 = *(uint *)(param_1 + 0xa4);
  iVar10 = 0;
  local_40 = 0;
  if ((uVar6 & 0x7c) != 0) {
    pbVar5 = (byte *)(*(int *)(param_1 + 0xc4) + 0x50);
    uVar7 = uVar6 >> 2 & 0x1f;
    do {
      bVar1 = *pbVar5;
      if (((bVar1 & 4) != 0) ||
         (((bVar1 & 2) == 0 && ((1 < *(int *)(pbVar5 + -0x28) || ((bVar1 & 1) != 0)))))) {
        iVar10 = iVar10 + 1;
      }
      pbVar5 = pbVar5 + 0x78;
      uVar7 = uVar7 - 1;
      local_40 = iVar10;
    } while (uVar7 != 0);
  }
  if ((uVar6 & 0xf80) != 0) {
    local_40 = local_40 + (*(uint *)(param_1 + 0xa4) >> 7 & 0x1f);
  }
  if ((uVar6 & 0x1000) == 0) {
    local_40 = local_40 + 0xb;
  }
  if (local_40 != 0) {
    uVar7 = local_40 * 0x2c + 0x30;
    puVar3 = operator_new(uVar7);
    puVar13 = puVar3;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    puVar3[1] = uVar7;
    puVar3[10] = local_40;
    puVar3[0xb] = puVar3 + 0xc;
    *puVar3 = 1;
    *(undefined4 **)(param_1 + 0xcc) = puVar3;
    puVar2 = (uint *)puVar3[0xb];
    uVar6 = 0;
    iVar10 = 0;
    if ((*(uint *)(param_1 + 0xa4) & 0x7c) != 0) {
      local_40 = 0;
      puVar4 = puVar2 + 1;
      do {
        iVar14 = *(int *)(param_1 + 0xc4) + local_40;
        bVar1 = *(byte *)(iVar14 + 0x50);
        if (((bVar1 & 4) != 0) ||
           (((bVar1 & 2) == 0 && ((1 < *(int *)(iVar14 + 0x28) || ((bVar1 & 1) != 0)))))) {
          *(char *)((int)puVar4 + -3) = (char)iVar10;
          *(char *)(puVar4 + -1) = (char)uVar6;
          *puVar4 = 0;
          puVar4[1] = *(uint *)(local_40 + 0x2c + *(int *)(param_1 + 0xc4));
          iVar10 = iVar10 + 1;
          puVar4 = puVar4 + 0xb;
        }
        local_40 = local_40 + 0x78;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (*(uint *)(param_1 + 0xa4) >> 2 & 0x1f));
    }
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0xa4) & 0xf80) != 0) {
      puVar4 = puVar2 + iVar10 * 0xb + 1;
      do {
        *(char *)((int)puVar4 + -3) = (char)iVar10;
        *(char *)(puVar4 + -1) = (char)uVar6;
        *puVar4 = 1;
        iVar10 = iVar10 + 1;
        puVar4 = puVar4 + 0xb;
        uVar6 = uVar6 + 1;
      } while (uVar6 < (*(uint *)(param_1 + 0xa4) >> 7 & 0x1f));
    }
    if ((*(uint *)(param_1 + 0xa4) & 0x1000) == 0) {
      *(char *)((int)puVar2 + iVar10 * 0x2c + 1) = (char)iVar10;
      iVar14 = iVar10 + 1;
      puVar2[iVar10 * 0xb + 1] = 3;
      *(char *)((int)puVar2 + iVar14 * 0x2c + 1) = (char)iVar14;
      puVar2[iVar14 * 0xb + 1] = 2;
      puVar2[iVar14 * 0xb + 2] = 1;
      _sprintf((char *)(puVar2 + iVar14 * 0xb + 3),"mup_eyes_v00.dds");
      iVar14 = iVar10 + 2;
      *(char *)(iVar14 * 0x2c + 1 + (int)puVar2) = (char)iVar14;
      puVar2[iVar14 * 0xb + 1] = 4;
      iVar14 = iVar10 + 3;
      *(char *)((int)puVar2 + iVar14 * 0x2c + 1) = (char)iVar14;
      iVar8 = iVar10 + 4;
      puVar2[iVar14 * 0xb + 1] = 6;
      *(char *)(iVar8 * 0x2c + 1 + (int)puVar2) = (char)iVar8;
      iVar14 = iVar10 + 5;
      puVar2[iVar8 * 0xb + 1] = 0xd;
      *(char *)((int)puVar2 + iVar14 * 0x2c + 1) = (char)iVar14;
      puVar2[iVar14 * 0xb + 1] = 5;
      iVar14 = iVar10 + 6;
      if ((*(uint *)(param_1 + 0xa4) & 0x6000) == 0) {
        puVar4 = puVar2 + iVar14 * 0xb;
        puVar4[1] = 10;
        _Format = "mup_meyebrow_v00.dds";
      }
      else {
        puVar4 = puVar2 + iVar14 * 0xb;
        puVar4[1] = 0xb;
        _Format = "mup_feyebrow_v00.dds";
      }
      puVar4[2] = 1;
      *(char *)((int)puVar4 + 1) = (char)iVar14;
      _sprintf((char *)(puVar4 + 3),_Format);
      iVar14 = iVar10 + 7;
      *(char *)(iVar14 * 0x2c + 1 + (int)puVar2) = (char)iVar14;
      puVar2[iVar14 * 0xb + 1] = 0xc;
      iVar14 = iVar10 + 8;
      *(char *)((int)puVar2 + iVar14 * 0x2c + 1) = (char)iVar14;
      iVar8 = iVar10 + 9;
      puVar2[iVar14 * 0xb + 1] = 7;
      *(char *)((int)puVar2 + iVar8 * 0x2c + 1) = (char)iVar8;
      iVar10 = iVar10 + 10;
      puVar2[iVar8 * 0xb + 1] = 8;
      puVar2[iVar8 * 0xb + 2] = 0xffffffff;
      *(char *)((int)puVar2 + iVar10 * 0x2c + 1) = (char)iVar10;
      puVar2[iVar10 * 0xb + 1] = 9;
    }
    iVar10 = 0;
    puVar4 = puVar2;
    while( true ) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(*(int *)(param_1 + 0xcc) + 0x28);
      }
      if (iVar14 + -1 <= iVar10) break;
      iVar10 = iVar10 + 1;
      puVar9 = puVar4;
      local_40 = iVar10;
      while( true ) {
        puVar9 = puVar9 + 0xb;
        if (*(int *)(param_1 + 0xcc) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(int *)(*(int *)(param_1 + 0xcc) + 0x28);
        }
        if (iVar14 <= local_40) break;
        fVar16 = FUN_009cce30(puVar4,param_1);
        fVar17 = FUN_009cce30(puVar9,param_1);
        if (fVar17 < (float10)(float)fVar16) {
          puVar11 = puVar4;
          puVar15 = local_2c;
          for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar11 = puVar9;
          puVar15 = puVar4;
          for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
          puVar11 = local_2c;
          puVar15 = puVar9;
          for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar15 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          }
        }
        local_40 = local_40 + 1;
      }
      puVar4 = puVar4 + 0xb;
    }
    puVar12 = (undefined1 *)((int)puVar2 + 1);
    iVar10 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0xcc) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(*(int *)(param_1 + 0xcc) + 0x28);
      }
      if (iVar14 <= iVar10) break;
      *puVar12 = (char)iVar10;
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 0x2c;
    }
  }
  return;
}


//// FUNCTION FUN_009ce080 @ 009ce080 ////

void __thiscall FUN_009ce080(void *this,int param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint *puVar7;
  uint local_108;
  undefined4 local_104;
  byte local_100 [256];
  
  *param_2 = 0;
  *param_3 = 1;
  iVar4 = *(int *)(*(int *)((int)this + 0xcc) + 0x2c);
  puVar7 = (uint *)(param_1 * 0x2c + iVar4);
  if (*(int *)((int)this + 0xcc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar7 - iVar4) / 0x2c;
  }
  local_104 = FUN_009cdc00(this,iVar4);
  if ((puVar7[1] == 1) && (local_104 != 0)) {
    local_104 = local_104 + -1;
    FUN_009ad980(&DAT_0105ef50,(char *)local_100,
                 (char *)((*puVar7 & 0xff) * 0x78 + *(int *)((int)this + 200)),&local_104);
    pbVar2 = local_100;
    local_108 = local_108 & 0xffffff00;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if (4 < (uint)((int)pbVar2 - (int)(local_100 + 1))) {
      pbVar2 = local_100;
      do {
        pbVar3 = pbVar2;
        pbVar2 = pbVar3 + 1;
      } while (*pbVar3 != 0);
      pbVar3[-4] = 0;
      pbVar2 = local_100;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      iVar4 = (int)pbVar2 - (int)(local_100 + 1);
      if ((((4 < iVar4) && (local_100[iVar4 + -4] == 0x5f)) && (local_100[iVar4 + -3] == 0x76)) &&
         ((uVar5 = FUN_009ac000(local_100[iVar4 + -2]), (char)uVar5 != '\0' &&
          (uVar5 = FUN_009ac000(local_100[iVar4 + -1]), (char)uVar5 != '\0')))) {
        local_108 = CONCAT31(local_108._1_3_,1);
      }
    }
    if (((*(void **)((int)this + 0xc0) != (void *)0x0) &&
        (iVar4 = FUN_009d1530(*(void **)((int)this + 0xc0),local_100,(char)local_108), iVar4 != 0))
       && (pcVar6 = FUN_009da470(iVar4), pcVar6 != (char *)0x0)) {
      FUN_009ad890(pcVar6,param_3,(int *)&local_108);
      *param_2 = puVar7[3];
    }
  }
  return;
}


//// FUNCTION FUN_009ce200 @ 009ce200 ////

void __thiscall FUN_009ce200(void *this,uint param_1,void *param_2)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char local_148 [64];
  char local_108;
  undefined4 local_107;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_2 + 0xcc) == 0) {
    return;
  }
  local_108 = '\0';
  puVar11 = &local_107;
  for (iVar9 = 0x3f; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = 0;
  *(undefined1 *)((int)puVar11 + 2) = 0;
  switch(*(undefined4 *)((int)this + 4)) {
  case 0:
    *(uint *)((int)this + 8) = param_1;
    pcVar10 = (char *)((*(uint *)this & 0xff) * 0x78 + *(int *)((int)param_2 + 0xc4));
    puVar2 = (uint *)(pcVar10 + 0x2c);
    *puVar2 = param_1;
    if (((*(byte *)((int)param_2 + 0xa4) & 1) == 0) || (*(int *)((int)param_2 + 0xc0) == 0)) {
LAB_009ce29f:
      if ((pcVar10[0x50] & 4U) == 0) {
        return;
      }
    }
    else if ((pcVar10[0x50] & 4U) == 0) {
      puVar1 = (uint *)(*(int *)((int)param_2 + 0xc0) + 0x10);
      *puVar1 = *puVar1 | 2;
      goto LAB_009ce29f;
    }
    if (((*(int *)((int)param_2 + 0xc0) != 0) &&
        (pvVar4 = (void *)FUN_0097e350(*(void **)(*(int *)((int)param_2 + 0xc0) + 8),0),
        pvVar4 != (void *)0x0)) && (iVar9 = FUN_009da040(pvVar4,pcVar10), iVar9 != -1)) {
      uVar5 = FUN_009cd2d0(pcVar10);
      if ((char)uVar5 == '\0') {
        FUN_009ad980(&DAT_010b9588,local_148,pcVar10,(int *)puVar2);
        pvVar4 = FUN_0099bb50(local_148,0,0,0,'\0');
        FUN_00981c50(*(void **)(*(int *)((int)param_2 + 0xc0) + 8),iVar9,(int)pvVar4,-1);
        if (pvVar4 != (void *)0x0) {
          FUN_0099b400(pvVar4);
          return;
        }
      }
      else {
        iVar9 = FUN_009cd330(pcVar10);
        if (0 < *(int *)((int)pvVar4 + 0x38)) {
          iVar8 = 0;
          do {
            bVar3 = FUN_009cd380(*(char **)(*(int *)((int)pvVar4 + 0x3c) + iVar8 * 4),iVar9);
            if (bVar3) {
              FUN_009ad980(&DAT_010b9588,local_148,
                           *(char **)(*(int *)((int)pvVar4 + 0x3c) + iVar8 * 4),(int *)puVar2);
              pvVar6 = FUN_0099bb50(local_148,0,0,0,'\0');
              FUN_00981c50(*(void **)(*(int *)((int)param_2 + 0xc0) + 8),iVar8,(int)pvVar6,-1);
              if (pvVar6 != (void *)0x0) {
                FUN_0099b400(pvVar6);
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)((int)pvVar4 + 0x38));
          return;
        }
      }
    }
    break;
  case 1:
    *(uint *)((int)this + 8) = param_1;
    *(uint *)((*(uint *)this & 0xff) * 0x78 + 0x2c + *(int *)((int)param_2 + 200)) = param_1;
    *(undefined4 *)((*(uint *)this & 0xff) * 0x78 + 0x50 + *(int *)((int)param_2 + 200)) =
         *(undefined4 *)((int)this + 0xc);
    if (*(int *)((int)param_2 + 0xc0) != 0) {
      FUN_009d20c0(*(int *)((int)param_2 + 0xc0));
    }
    iVar9 = (*(uint *)this & 0xff) * 0x78;
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(*(int *)((int)param_2 + 200) + 0x50 + iVar9);
    if (*(int *)((int)param_2 + 0xc0) != 0) {
      pbVar7 = FUN_009cd1f0(param_2,(char *)(*(int *)((int)param_2 + 200) + iVar9));
      if (pbVar7 != (byte *)0x0) {
        puVar2 = (uint *)(*(int *)((int)param_2 + 0xc0) + 0x10);
        *puVar2 = *puVar2 | 2;
      }
      if (*(char *)((*(uint *)this & 0xff) * 0x78 + 0x20 + *(int *)((int)param_2 + 200)) == '\x04')
      {
        puVar2 = (uint *)(*(int *)((int)param_2 + 0xc0) + 0x10);
        *puVar2 = *puVar2 | 2;
        return;
      }
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    iVar8 = FUN_009cd5e0(*(undefined4 *)((int)this + 4));
    FUN_00a5ee00(iVar8,param_1,&local_108);
    iVar9 = *(int *)((int)param_2 + 0xc0);
    if (local_108 == '\0') {
      if (iVar9 != 0) {
        *(undefined1 *)(iVar8 * 0x20 + 0x128 + iVar9) = 0;
      }
      *(undefined1 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      if (iVar9 != 0) {
        _sprintf((char *)(iVar8 * 0x20 + 0x128 + iVar9),&local_108);
      }
      _sprintf((char *)((int)this + 0xc),&local_108);
      *(uint *)((int)this + 8) = param_1;
    }
    if (*(int *)((int)param_2 + 0xc0) != 0) {
      if (*(int *)((int)this + 4) == 0xd) {
        puVar2 = (uint *)(*(int *)((int)param_2 + 0xc0) + 0x10);
        *puVar2 = *puVar2 | 2;
        iVar9 = *(int *)((int)param_2 + 0xc0);
        uVar5 = *(uint *)(iVar9 + 0x10);
      }
      else {
        iVar9 = *(int *)((int)param_2 + 0xc0);
        uVar5 = *(uint *)(iVar9 + 0x10);
        if (*(int *)((int)this + 4) == 0xc) {
          *(uint *)(iVar9 + 0x10) = uVar5 | 2;
          return;
        }
      }
      *(uint *)(iVar9 + 0x10) = uVar5 | 4;
      return;
    }
    break;
  case 7:
    FUN_009d8a20(param_1,&local_108);
    _sprintf((char *)((int)this + 0xc),&local_108);
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)((int)param_2 + 0xc0) != (void *)0x0) {
      FUN_009d60a0(*(void **)((int)param_2 + 0xc0),(char *)((int)this + 0xc));
      return;
    }
    break;
  case 8:
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)((int)param_2 + 0xc0) != (void *)0x0) {
      FUN_009d1330(*(void **)((int)param_2 + 0xc0),param_1);
      return;
    }
    break;
  case 9:
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)((int)param_2 + 0xc0) != (void *)0x0) {
      FUN_009d13b0(*(void **)((int)param_2 + 0xc0),param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009ce610 @ 009ce610 ////

uint __thiscall FUN_009ce610(void *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_ECX;
  
  if (param_1 != 0) {
    switch(*(undefined4 *)((int)this + 4)) {
    case 0:
      return *(uint *)((*(uint *)this & 0xff) * 0x78 + 0x2c + *(int *)(param_1 + 0xc4));
    case 1:
      return *(uint *)((*(uint *)this & 0xff) * 0x78 + 0x2c + *(int *)(param_1 + 200));
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      uVar1 = FUN_009cd5e0(*(undefined4 *)((int)this + 4));
      uVar2 = FUN_00a5ef30((char *)(extraout_ECX + 0xc),uVar1);
      return uVar2;
    case 7:
      uVar2 = FUN_009d8a60((char *)((int)this + 0xc));
      return uVar2;
    case 8:
    case 9:
      return *(uint *)((int)this + 8);
    default:
      return 0;
    }
  }
  return 0;
}


//// FUNCTION FUN_009ce790 @ 009ce790 ////

uint * __fastcall FUN_009ce790(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_2c [11];
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*(int *)(param_1 + 0xcc) + 0x28);
  }
  uVar8 = uVar6 * 0x2c + 0x30;
  puVar1 = operator_new(uVar8);
  puVar9 = puVar1;
  for (uVar3 = uVar8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  iVar4 = 0;
  puVar1[1] = 0;
  *puVar1 = uVar8;
  puVar1[10] = uVar6;
  if (uVar6 == 0) {
    puVar1[0xb] = 0;
  }
  else {
    puVar1[0xb] = (uint)(puVar1 + 0xc);
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 != 0) {
    iVar7 = 0;
    if (0 < *(int *)(iVar2 + 0x28)) {
      do {
        puVar9 = (uint *)(*(int *)(iVar2 + 0x2c) + iVar4);
        puVar10 = local_2c;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if ((local_2c[1] == 1) &&
           (local_2c[2] != *(int *)((local_2c[0] & 0xff) * 0x78 + 0x2c + *(int *)(param_1 + 200))))
        {
          iVar2 = *(int *)(*(int *)(param_1 + 0xcc) + 0x2c);
          *(undefined4 *)(iVar2 + iVar4 + 8) =
               *(undefined4 *)
                ((*(uint *)(iVar2 + iVar4) & 0xff) * 0x78 + 0x2c + *(int *)(param_1 + 200));
        }
        iVar2 = *(int *)(param_1 + 0xcc);
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar7 < *(int *)(iVar2 + 0x28));
    }
    puVar9 = *(uint **)(*(int *)(param_1 + 0xcc) + 0x2c);
    puVar10 = puVar1 + 0xc;
    for (uVar6 = (uint)(*(int *)(*(int *)(param_1 + 0xcc) + 0x28) * 0x2c) >> 2; uVar6 != 0;
        uVar6 = uVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(char *)puVar10 = (char)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    }
  }
  _sprintf((char *)(puVar1 + 2),(char *)(param_1 + 0x80));
  return puVar1;
}


//// FUNCTION FUN_009ce8c0 @ 009ce8c0 ////

void __cdecl FUN_009ce8c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = 0x40400000;
    param_1[4] = 0;
    *param_1 = 0x3e89ba5e;
    param_1[1] = 0x3f000011;
    param_1[2] = 0x41a00000;
    param_1[5] = &DAT_3fd33333;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = &DAT_3fd33333;
  }
  return;
}


//// FUNCTION FUN_009ce940 @ 009ce940 ////

int __thiscall FUN_009ce940(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (((iVar1 == 0) || (param_1 < 0)) || (*(int *)(iVar1 + 0x28) <= param_1)) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x2c) + 4 + param_1 * 0x2c);
  if (iVar1 == 9) {
    return 8;
  }
  if (iVar1 == 4) {
    return 7;
  }
  iVar1 = FUN_009cdc00(this,param_1);
  return iVar1;
}


//// FUNCTION FUN_009ce990 @ 009ce990 ////

uint __thiscall FUN_009ce990(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0x28))) {
    uVar2 = FUN_009ce610((void *)(param_1 * 0x2c + *(int *)(iVar1 + 0x2c)),(int)this);
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_009ce9d0 @ 009ce9d0 ////

void __thiscall FUN_009ce9d0(void *this,uint param_1)

{
  uint *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar2 = *(int *)((int)this + 0xcc);
  iVar3 = 0;
  if (((iVar2 != 0) && (-1 < (int)param_1)) && (local_4 = 0, 0 < *(int *)(iVar2 + 0x28))) {
    do {
      iVar1 = *(int *)(iVar2 + 0x2c);
      this_00 = (uint *)(iVar1 + iVar3);
      if ((*(int *)(iVar1 + 4 + iVar3) == 1) &&
         (*(char *)((*this_00 & 0xff) * 0x78 + 0x20 + *(int *)((int)this + 200)) == '\x01')) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = ((int)this_00 - iVar1) / 0x2c;
        }
        iVar2 = FUN_009cdc00(this,iVar2);
        if (iVar2 <= (int)param_1) {
          param_1 = 0;
        }
        FUN_009ce200(this_00,param_1,this);
      }
      iVar2 = *(int *)((int)this + 0xcc);
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (local_4 < *(int *)(iVar2 + 0x28));
  }
  return;
}


//// FUNCTION FUN_009cea90 @ 009cea90 ////

bool __thiscall FUN_009cea90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x28)) {
    this_00 = *(void **)(iVar1 + 0x2c);
    do {
      if (*(int *)((int)this_00 + 4) == param_1) {
        uVar3 = FUN_009ce610(this_00,(int)this);
        return 0 < (int)uVar3;
      }
      iVar2 = iVar2 + 1;
      this_00 = (void *)((int)this_00 + 0x2c);
    } while (iVar2 < *(int *)(iVar1 + 0x28));
  }
  return false;
}


//// FUNCTION FUN_009ceae0 @ 009ceae0 ////

void __fastcall FUN_009ceae0(void *param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)((int)param_1 + 0xcc) != 0) {
    iVar5 = 0;
    iVar4 = 0;
    while( true ) {
      iVar1 = *(int *)((int)param_1 + 0xcc);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x28);
      }
      if (iVar3 <= iVar5) break;
      if (((iVar1 != 0) && (-1 < iVar4)) && (iVar5 < *(int *)(iVar1 + 0x28))) {
        this = (void *)(*(int *)(iVar1 + 0x2c) + iVar4);
        iVar3 = *(int *)((int)this + 4);
        if ((((iVar3 == 7) || (iVar3 == 8)) || (iVar3 == 9)) && (iVar5 < *(int *)(iVar1 + 0x28))) {
          if (*(int *)((int)this + 4) == 9) {
            iVar1 = 8;
          }
          else if (*(int *)((int)this + 4) == 4) {
            iVar1 = 7;
          }
          else {
            iVar1 = FUN_009cdc00(param_1,iVar5);
            if (iVar1 == 0) goto LAB_009cebb4;
          }
          uVar2 = FUN_00990d30(0,iVar1);
          if (*(int *)((int)this + 4) == 7) {
            uVar6 = FUN_00433c10();
            uVar2 = FUN_009d8b10((uint)((*(uint *)((int)param_1 + 0xa4) & 0x6000) != 0),(int)uVar6);
          }
          FUN_009ce200(this,uVar2,param_1);
        }
      }
LAB_009cebb4:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x2c;
    }
  }
  return;
}


//// FUNCTION FUN_009cebd0 @ 009cebd0 ////

byte * __thiscall FUN_009cebd0(void *this,int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  if ((*(uint *)((int)this + 0xa4) & 0x6000) == 0) {
    pbVar1 = Anim_LoadByName("mannequin_male.anm");
    *param_1 = DAT_0105ea94;
    DAT_0105ea94 = DAT_0105ea94 + 1;
    if ((pbVar1[0x34] & 2) == 0) {
      uVar2 = *(uint *)(pbVar1 + 0x30) & 0xffff;
    }
    else {
      uVar2 = (int)((*(uint *)(pbVar1 + 0x30) & 0xffff) - 1) / 3 + 1;
    }
    if ((int)uVar2 <= DAT_0105ea94) {
      DAT_0105ea94 = 0;
      return pbVar1;
    }
  }
  else {
    pbVar1 = Anim_LoadByName("mannequin_fem.anm");
    *param_1 = DAT_0105ea90;
    DAT_0105ea90 = DAT_0105ea90 + 1;
    if ((pbVar1[0x34] & 2) == 0) {
      uVar2 = *(uint *)(pbVar1 + 0x30) & 0xffff;
    }
    else {
      uVar2 = (int)((*(uint *)(pbVar1 + 0x30) & 0xffff) - 1) / 3 + 1;
    }
    if ((int)uVar2 <= DAT_0105ea90) {
      DAT_0105ea90 = 0;
    }
  }
  return pbVar1;
}


//// FUNCTION FUN_009cecb0 @ 009cecb0 ////

void __fastcall FUN_009cecb0(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_009cecc0 @ 009cecc0 ////

void __cdecl FUN_009cecc0(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0xc) = 0x25;
  if (*(int *)((int)param_1 + 0x1c) != DAT_0105ea80) {
    FUN_00994bc0(param_1,DAT_0105ea80);
  }
  return;
}


//// FUNCTION FUN_009cece0 @ 009cece0 ////

void * __thiscall FUN_009cece0(void *this,byte param_1)

{
  FUN_009cdb80((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009ced00 @ 009ced00 ////

undefined4 * __cdecl FUN_009ced00(int param_1,int param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_009cda70(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009ced70 @ 009ced70 ////

undefined4 * __thiscall FUN_009ced70(void *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  void *pvVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  bool bVar19;
  uint local_2f4;
  undefined4 *local_2f0;
  void *local_2ec;
  int *local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  uint local_2dc;
  char local_2d8 [52];
  undefined4 local_2a4;
  byte local_2a0;
  byte local_29f;
  byte local_29e;
  byte local_29d;
  byte local_29c;
  byte local_29b;
  undefined4 local_298 [8];
  undefined4 local_278 [8];
  undefined4 local_258 [8];
  undefined4 local_238 [8];
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  int local_200;
  undefined4 local_1fc [8];
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  byte local_1ac;
  undefined4 local_1a8 [9];
  undefined4 local_184 [8];
  byte local_163;
  undefined4 local_130 [9];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7c80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009ccba0(this);
  _sprintf(local_10c,"Data\\Costume\\Datas\\%s");
  local_2e4 = local_2d8;
  pcVar8 = local_10c;
  local_2d8[0] = '\0';
  local_2e0 = 0;
  local_2dc = 0x14;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar9 = (int)pcVar8 - (int)(local_10c + 1);
  if (0x13 < uVar9) {
    local_2dc = uVar9 + 0x20 & 0xffffffe0;
    local_2e4 = _malloc(local_2dc);
  }
  _strncpy(local_2e4,local_10c,uVar9);
  local_2e4[uVar9] = '\0';
  local_4 = 0;
  local_2e0 = uVar9;
  uVar9 = FUN_009d3720(&local_2e4);
  local_4 = 0xffffffff;
  if (0x14 < local_2dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2e4);
  }
  if (uVar9 == 0) {
    ExceptionList = local_c;
    return this;
  }
  _strncpy((char *)((int)this + 0x80),param_1,0x1f);
  piVar4 = operator_new(uVar9);
  local_2e4 = local_2d8;
  pcVar8 = local_10c;
  local_2d8[0] = '\0';
  local_2e0 = 0;
  local_2dc = 0x14;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar10 = (int)pcVar8 - (int)(local_10c + 1);
  local_2e8 = piVar4;
  if (0x13 < uVar10) {
    local_2dc = uVar10 + 0x20 & 0xffffffe0;
    local_2e4 = _malloc(local_2dc);
  }
  _strncpy(local_2e4,local_10c,uVar10);
  local_2e4[uVar10] = '\0';
  local_4 = 1;
  local_2e0 = uVar10;
  FUN_009d3ca0(&local_2e4,piVar4,uVar9,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_2dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2e4);
  }
  puVar14 = &local_2a4;
  for (iVar11 = 0x2a; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar11 = FUN_009cc940(&local_2a4,piVar4);
  DAT_00e682bc = local_2a4;
  puVar14 = (undefined4 *)(iVar11 + (int)piVar4);
  uVar9 = (((((local_29c & 3) << 1 | local_29d & 1) << 5 | local_218 & 0x1f) << 5 | local_29e & 0x1f
           ) << 1 | local_29f & 1) << 1;
  uVar10 = *(uint *)((int)this + 0xa4) & 0xffff8000;
  *(undefined4 *)((int)this + 0xac) = local_210;
  *(undefined4 *)((int)this + 0xa8) = local_214;
  *(undefined4 *)((int)this + 0xb4) = local_208;
  *(undefined4 *)((int)this + 0xb0) = local_20c;
  *(uint *)((int)this + 0xa4) = uVar9 | local_2a0 & 1 | uVar10;
  *(undefined4 *)((int)this + 0xb8) = local_204;
  *(uint *)((int)this + 0xbc) = (uint)local_29b;
  if ((local_29e & 0x1f) == 0) {
    *(uint *)((int)this + 0xa4) = uVar9 | uVar10;
  }
  puVar15 = local_298;
  puVar18 = this;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar15 = local_278;
  puVar18 = (undefined4 *)((int)this + 0x20);
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar15 = local_258;
  puVar18 = (undefined4 *)((int)this + 0x40);
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar15 = local_238;
  puVar18 = (undefined4 *)((int)this + 0x60);
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar9 = *(uint *)((int)this + 0xa4) >> 2 & 0x1f;
  local_2f0 = puVar14;
  if (uVar9 != 0) {
    pvVar5 = operator_new(uVar9 * 0x78);
    local_4 = 2;
    local_2ec = pvVar5;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar5,0x78,uVar9,FUN_009cca90);
    }
    local_4 = 0xffffffff;
    *(void **)((int)this + 0xc4) = pvVar5;
    local_2f4 = 0;
    if ((*(uint *)((int)this + 0xa4) & 0x7c) != 0) {
      local_2f0 = (undefined4 *)0x0;
      puVar15 = local_2f0;
      do {
        local_2f0 = puVar15;
        FUN_009a2210(local_1a8);
        puVar15 = local_1fc;
        for (iVar11 = 0x1e; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        local_1ac = local_1ac | 8;
        local_1dc = 0;
        local_1d8 = 0x3f000000;
        local_1d4 = 1;
        iVar11 = FUN_009cd880(local_1fc,puVar14);
        puVar15 = local_1fc;
        puVar18 = (undefined4 *)(*(int *)((int)this + 0xc4) + (int)local_2f0);
        for (iVar12 = 0x1e; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar15 = (undefined4 *)((int)local_2f0 + 0x78);
        puVar14 = (undefined4 *)((int)puVar14 + iVar11);
        local_2f4 = local_2f4 + 1;
        local_2f0 = puVar14;
      } while (local_2f4 < (*(uint *)((int)this + 0xa4) >> 2 & 0x1f));
    }
  }
  uVar9 = *(uint *)((int)this + 0xa4);
  uVar10 = uVar9 >> 7 & 0x1f;
  bVar3 = false;
  if (uVar10 == 0) {
    if (((uVar9 & 0x1000) != 0) || (DAT_0105ea89 != '\0')) goto LAB_009cf3fa;
    pvVar5 = operator_new(0x78);
    local_4 = 4;
    local_2ec = pvVar5;
    if (pvVar5 == (void *)0x0) {
      local_4 = 0xffffffff;
      *(undefined4 *)((int)this + 200) = 0;
    }
    else {
      FUN_00401380(pvVar5,0x78,1,FUN_009ccaf0);
      local_4 = 0xffffffff;
      *(void **)((int)this + 200) = pvVar5;
    }
  }
  else {
    if (((uVar9 & 0x1000) == 0) && ((local_2a0 & 4) == 0)) {
      uVar10 = uVar10 + 1;
      bVar3 = true;
      *(uint *)((int)this + 0xa4) = uVar9 | 0x10000;
    }
    local_2ec = operator_new(uVar10 * 0x78);
    local_4 = 3;
    if (local_2ec == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = local_2ec;
      if (-1 < (int)(uVar10 - 1)) {
        pbVar16 = (byte *)((int)local_2ec + 0x21);
        do {
          FUN_009a2210((undefined4 *)(pbVar16 + 0x33));
          pbVar17 = pbVar16 + -0x21;
          for (iVar11 = 0x1e; iVar11 != 0; iVar11 = iVar11 + -1) {
            pbVar17[0] = 0;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17 = pbVar17 + 4;
          }
          *pbVar16 = *pbVar16 | 6;
          pbVar16 = pbVar16 + 0x78;
          uVar10 = uVar10 - 1;
          pvVar5 = local_2ec;
        } while (uVar10 != 0);
      }
    }
    *(void **)((int)this + 200) = pvVar5;
    local_4 = 0xffffffff;
    local_2f4 = 0;
    if ((*(uint *)((int)this + 0xa4) & 0xf80) != 0) {
      iVar11 = 0;
      do {
        FUN_009a2210(local_130);
        puVar14 = local_184;
        for (iVar12 = 0x1e; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        local_163 = local_163 | 6;
        iVar12 = FUN_009cd980(local_184,local_2f0);
        local_2f0 = (undefined4 *)((int)local_2f0 + iVar12);
        puVar14 = local_184;
        puVar15 = (undefined4 *)(*(int *)((int)this + 200) + iVar11);
        for (iVar12 = 0x1e; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        pcVar8 = (char *)(*(int *)((int)this + 200) + iVar11);
        piVar4 = (int *)(pcVar8 + 0x28);
        FUN_009ad890(pcVar8,piVar4,(int *)&local_2ec);
        if (*piVar4 == 0) {
          *piVar4 = 2;
        }
        else {
          *piVar4 = *piVar4 + 1;
        }
        if (0.8 < *(float *)(*(int *)((int)this + 200) + 0x24 + iVar11)) {
          FUN_009ce8c0((undefined4 *)(*(int *)((int)this + 200) + iVar11 + 0x54));
        }
        local_2f4 = local_2f4 + 1;
        iVar11 = iVar11 + 0x78;
      } while (local_2f4 < (*(uint *)((int)this + 0xa4) >> 7 & 0x1f));
    }
    if (!bVar3) goto LAB_009cf3fa;
  }
  pcVar8 = (char *)((*(uint *)((int)this + 0xa4) >> 7 & 0x1f) * 0x78 + *(int *)((int)this + 200));
  _sprintf(pcVar8,"latex_%c_head_v00.msh");
  pcVar8[0x20] = '\x04';
  pcVar8[0x24] = -0x33;
  pcVar8[0x25] = -0x34;
  pcVar8[0x26] = -0x74;
  pcVar8[0x27] = '?';
  _sprintf(pcVar8 + 0x30,"COS_LATEX_HEAD");
  FUN_009ce8c0((undefined4 *)(pcVar8 + 0x54));
  piVar4 = (int *)(pcVar8 + 0x28);
  FUN_009ad890(pcVar8,piVar4,(int *)&local_2ec);
  if (*piVar4 == 0) {
    *piVar4 = 2;
  }
  else {
    *piVar4 = *piVar4 + 1;
  }
  uVar9 = *(uint *)((int)this + 0xa4);
  *(uint *)((int)this + 0xa4) = ((uVar9 & 0xffffff80) + 0x80 ^ uVar9) & 0xf80 ^ uVar9;
LAB_009cf3fa:
  local_2ec = (void *)0x0;
  if ((*(uint *)((int)this + 0xa4) & 0x7c) != 0) {
    local_2f4 = 0;
    do {
      pcVar8 = (char *)(local_2f4 + *(int *)((int)this + 0xc4));
      bVar3 = false;
      if ((*(byte *)(local_2f4 + 0x50 + *(int *)((int)this + 0xc4)) & 2) != 0) {
        pcVar6 = pcVar8;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (4 < (uint)((int)pcVar6 - (int)(pcVar8 + 1))) {
          _sprintf((char *)&local_2e4,pcVar8);
          pcVar8 = (char *)&local_2e4;
          do {
            pcVar6 = pcVar8;
            pcVar8 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          _sprintf(pcVar6 + -3,"msh");
          if ((*(uint *)((int)this + 0xa4) & 0xf80) != 0) {
            pbVar16 = *(byte **)((int)this + 200);
            uVar9 = *(uint *)((int)this + 0xa4) >> 7 & 0x1f;
            do {
              pbVar17 = (byte *)&local_2e4;
              pbVar7 = pbVar16;
              do {
                bVar2 = *pbVar7;
                bVar19 = bVar2 < *pbVar17;
                if (bVar2 != *pbVar17) {
LAB_009cf4ca:
                  iVar11 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                  goto LAB_009cf4cf;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar7[1];
                bVar19 = bVar2 < pbVar17[1];
                if (bVar2 != pbVar17[1]) goto LAB_009cf4ca;
                pbVar7 = pbVar7 + 2;
                pbVar17 = pbVar17 + 2;
              } while (bVar2 != 0);
              iVar11 = 0;
LAB_009cf4cf:
              if (iVar11 == 0) {
                bVar3 = true;
              }
              pbVar16 = pbVar16 + 0x78;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            if (bVar3) goto LAB_009cf4fd;
          }
          *(byte *)(local_2f4 + 0x50 + *(int *)((int)this + 0xc4)) =
               *(byte *)(local_2f4 + 0x50 + *(int *)((int)this + 0xc4)) | 4;
        }
      }
LAB_009cf4fd:
      local_2ec = (void *)((int)local_2ec + 1);
      local_2f4 = local_2f4 + 0x78;
    } while (local_2ec < (void *)(*(uint *)((int)this + 0xa4) >> 2 & 0x1f));
  }
  if (local_200 != 0) {
    *(int *)((int)this + 0xd0) = local_200;
    pvVar5 = operator_new(local_200 << 6);
    *(void **)((int)this + 0xd4) = pvVar5;
    iVar11 = 0;
    if (0 < *(int *)((int)this + 0xd0)) {
      iVar12 = 0;
      do {
        puVar14 = local_2f0;
        puVar15 = (undefined4 *)(*(int *)((int)this + 0xd4) + iVar12);
        for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 0x40;
        local_2f0 = local_2f0 + 0x10;
      } while (iVar11 < *(int *)((int)this + 0xd0));
    }
  }
  FUN_009cdce0((int)this);
                    /* WARNING: Subroutine does not return */
  _free(local_2e8);
}


//// FUNCTION FUN_009cf5f0 @ 009cf5f0 ////

void __thiscall FUN_009cf5f0(void *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    fVar3 = FUN_009cce30(this,param_2);
    *(float *)(param_1 + 0x20) = (float)fVar3;
    *param_1 = '\0';
    switch(*(undefined4 *)((int)this + 4)) {
    case 0:
      _sprintf(param_1,(char *)((*(uint *)this & 0xff) * 0x78 + 0x30 + *(int *)(param_2 + 0xc4)));
      puVar2 = (undefined4 *)((*(uint *)this & 0xff) * 0x78 + 0x54 + *(int *)(param_2 + 0xc4));
      pcVar4 = param_1 + 0x24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pcVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar4 = pcVar4 + 4;
      }
      return;
    case 1:
      _sprintf(param_1,(char *)((*(uint *)this & 0xff) * 0x78 + 0x30 + *(int *)(param_2 + 200)));
      puVar2 = (undefined4 *)((*(uint *)this & 0xff) * 0x78 + 0x54 + *(int *)(param_2 + 200));
      pcVar4 = param_1 + 0x24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pcVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar4 = pcVar4 + 4;
      }
      return;
    case 2:
      pcVar4 = "MAKE_UP_EYES_COLOR";
      break;
    case 3:
      pcVar4 = "MAKE_UP_EYES_SHAPE";
      break;
    case 4:
      pcVar4 = "MAKE_UP_LIPS";
      break;
    case 5:
      pcVar4 = "MAKE_UP_BEARD";
      break;
    case 6:
      pcVar4 = "MAKE_UP_MASK";
      break;
    case 7:
      pcVar4 = "HAIR_STYLE";
      break;
    case 8:
      pcVar4 = "HAIR_COLOR";
      break;
    case 9:
      pcVar4 = "EYE_COLOR";
      break;
    case 10:
    case 0xb:
      pcVar4 = "MAKE_UP_EYEBROW";
      break;
    case 0xc:
      _sprintf(param_1,"MAKE_UP_NAILS");
      return;
    case 0xd:
      pcVar4 = "MAKE_UP_TATOO";
      break;
    default:
      goto switchD_009cf61d_default;
    }
    _sprintf(param_1,pcVar4);
    FUN_009ce8c0((undefined4 *)(param_1 + 0x24));
  }
switchD_009cf61d_default:
  return;
}


//// FUNCTION FUN_009cf760 @ 009cf760 ////

void __thiscall FUN_009cf760(void *this,uint *param_1,char param_2)

{
  uint *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *local_4;
  
  this_00 = param_1;
  local_4 = this;
  FUN_009ce080(this,((int)param_1 - *(int *)(*(int *)((int)this + 0xcc) + 0x2c)) / 0x2c,
               (uint *)&param_1,(int *)&local_4);
  uVar3 = (uint)(param_2 != '\0') * 2 + -1 + (int)param_1;
  uVar1 = FUN_009ce610(this_00,(int)this);
  if (((int)uVar3 <= (int)local_4 + -1) && (-1 < (int)uVar3)) {
    this_00[3] = uVar3;
    FUN_009ce200(this_00,uVar1,this);
    return;
  }
  if (param_2 == '\0') {
    uVar1 = uVar1 - 1;
  }
  else {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)((int)this + 0xcc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)this_00 - *(int *)(*(int *)((int)this + 0xcc) + 0x2c)) / 0x2c;
  }
  iVar2 = FUN_009cdc00(this,iVar2);
  if ((int)uVar1 < 0) {
    uVar1 = iVar2 - 1;
  }
  else if (iVar2 <= (int)uVar1) {
    uVar1 = 0;
  }
  if ((((*(byte *)((*this_00 & 0xff) * 0x78 + 0x21 + *(int *)((int)this + 200)) & 0x10) != 0) &&
      (uVar1 == 0)) && (uVar1 = 1, param_2 == '\0')) {
    uVar1 = iVar2 - 1;
  }
  this_00[3] = 0;
  if ((uVar1 != 0) && (param_2 == '\0')) {
    this_00[3] = 0xffffffff;
  }
  FUN_009ce200(this_00,uVar1,this);
  return;
}


//// FUNCTION FUN_009cf880 @ 009cf880 ////

void __thiscall FUN_009cf880(void *this,void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((this == (void *)0x0) || (*(int *)((int)this + 0xcc) == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((int)param_1 - *(int *)(*(int *)((int)this + 0xcc) + 0x2c)) / 0x2c;
  }
  uVar2 = FUN_009cdc00(this,iVar1);
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  else if ((int)uVar2 <= (int)param_2) {
    param_2 = uVar2;
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  FUN_009ce200(param_1,param_2,this);
  return;
}


//// FUNCTION FUN_009cf8f0 @ 009cf8f0 ////

undefined4 __thiscall FUN_009cf8f0(void *this,int param_1,uint param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  
  iVar2 = *(int *)((int)this + 0xcc);
  if (((iVar2 == 0) || (in_EAX = param_1, param_1 < 0)) || (*(int *)(iVar2 + 0x28) <= param_1)) {
    return in_EAX & 0xffffff00;
  }
  this_00 = (void *)(param_1 * 0x2c + *(int *)(iVar2 + 0x2c));
  if (*(int *)(param_1 * 0x2c + 4 + *(int *)(iVar2 + 0x2c)) == 1) {
    uVar1 = FUN_009cf880(this,this_00,param_2);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  iVar2 = FUN_009cdc00(this,param_1);
  if ((int)param_2 < 0) {
    uVar1 = FUN_009ce200(this_00,iVar2 - 1,this);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  if (iVar2 <= (int)param_2) {
    param_2 = 0;
  }
  uVar1 = FUN_009ce200(this_00,param_2,this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009cf970 @ 009cf970 ////

void __thiscall FUN_009cf970(void *this,int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  uint *this_00;
  char cVar3;
  
  iVar2 = *(int *)((int)this + 0xcc);
  if (((iVar2 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar2 + 0x28))) {
    this_00 = (uint *)(param_1 * 0x2c + *(int *)(iVar2 + 0x2c));
    cVar3 = (char)param_2;
    if (*(int *)(param_1 * 0x2c + 4 + *(int *)(iVar2 + 0x2c)) == 1) {
      FUN_009cf760(this,this_00,cVar3);
      return;
    }
    uVar1 = FUN_009ce610(this_00,(int)this);
    if (this_00[1] == 7) {
      uVar1 = FUN_009d8c00(param_2,uVar1,cVar3);
      FUN_009ce200(this_00,uVar1,this);
      return;
    }
    uVar1 = uVar1 + (uint)(cVar3 != '\0') * 2 + -1;
    iVar2 = FUN_009cdc00(this,param_1);
    if ((int)uVar1 < 0) {
      uVar1 = iVar2 - 1;
    }
    else if (iVar2 <= (int)uVar1) {
      uVar1 = 0;
    }
    if (((this_00[1] == 2) && (uVar1 == 0)) && (uVar1 = 1, cVar3 == '\0')) {
      uVar1 = iVar2 - 1;
    }
    FUN_009ce200(this_00,uVar1,this);
  }
  return;
}


//// FUNCTION FUN_009cfa50 @ 009cfa50 ////

undefined4 * __thiscall FUN_009cfa50(void *this,byte param_1)

{
  FUN_009cecb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009cfa70 @ 009cfa70 ////

void __fastcall FUN_009cfa70(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  param_1[9] = DAT_0105ea84;
  DAT_0105ea84 = param_1;
  param_1[8] = 0x44f00000;
  return;
}


//// FUNCTION FUN_009cfaa0 @ 009cfaa0 ////

undefined4 * __cdecl FUN_009cfaa0(char *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7c9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_009ced70(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009cfb00 @ 009cfb00 ////

void __fastcall FUN_009cfb00(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_009cdb80((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009cfb20 @ 009cfb20 ////

void __thiscall FUN_009cfb20(void *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(iVar1 + 0x28))) {
    FUN_009cf5f0((void *)(param_1 * 0x2c + *(int *)(iVar1 + 0x2c)),param_2,(int)this);
  }
  return;
}


//// FUNCTION FUN_009cfb50 @ 009cfb50 ////

void __thiscall
FUN_009cfb50(void *this,int param_1,undefined4 param_2,int param_3,int param_4,char *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint _Count;
  int local_358;
  char *local_350;
  uint local_34c;
  uint local_348;
  char local_344 [20];
  void *local_330 [2];
  uint local_328;
  undefined4 local_310 [18];
  int local_2c8;
  int local_2c4;
  undefined4 local_2bc [18];
  int local_274;
  int local_270;
  undefined4 local_268 [18];
  int local_220;
  int local_21c;
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7cdc;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xcc) != 0) {
    ExceptionList = &local_c;
    FUN_009c89a0(local_2bc);
    local_4 = 0;
    FUN_009ca9d0(local_2bc,"early_*.dds","Data\\Textures\\Thumbs\\CostumeOptions\\",
                 (undefined1 *)0x1);
    FUN_009c89a0(local_268);
    local_4._0_1_ = 1;
    FUN_009ca9d0(local_268,"mid_*.dds","Data\\Textures\\Thumbs\\CostumeOptions\\",(undefined1 *)0x1)
    ;
    FUN_009c89a0(local_310);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_009ca9d0(local_310,"late_*.dds","Data\\Textures\\Thumbs\\CostumeOptions\\",(undefined1 *)0x1
                );
    if (local_274 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_270 - local_274 >> 2;
    }
    iVar5 = param_3 - iVar5;
    if (local_220 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = local_21c - local_220 >> 2;
    }
    iVar6 = param_3 - iVar6;
    if (local_2c8 == 0) {
      local_358 = 0;
    }
    else {
      local_358 = local_2c4 - local_2c8 >> 2;
    }
    local_358 = param_3 - local_358;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (local_358 < 0) {
      local_358 = -local_358;
    }
    __splitpath((char *)((*(uint *)(param_4 * 0x2c + *(int *)(*(int *)((int)this + 0xcc) + 0x2c)) &
                         0xff) * 0x78 + *(int *)((int)this + 200)),(char *)0x0,(char *)0x0,local_214
                ,local_110);
    local_350 = local_344;
    pcVar7 = local_214;
    local_34c = 0;
    local_344[0] = '\0';
    local_348 = 0x14;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar7 - (int)(local_214 + 1);
    if (0x13 < _Count) {
      local_348 = _Count + 0x20 & 0xffffffe0;
      local_350 = _malloc(local_348);
    }
    _strncpy(local_350,local_214,_Count);
    local_350[_Count] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    pcVar7 = local_350;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_34c = _Count;
    puVar2 = FUN_00430770(&local_350,local_330,(uint)(pcVar7 + (-2 - (int)(local_350 + 1))),
                          0xffffffff);
    FUN_004015d0(&local_350,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_328) {
                    /* WARNING: Subroutine does not return */
      _free(local_330[0]);
    }
    lVar3 = _atol(local_350);
    if (param_1 != 0) {
      param_1 = param_1 + lVar3;
    }
    iVar4 = FUN_009cdc00(this,param_4);
    if (iVar4 <= param_1) {
      param_1 = param_1 % iVar4 + 1;
    }
    if ((iVar6 < local_358) || (iVar5 < local_358)) {
      if ((iVar5 < iVar6) || (local_358 <= iVar6)) {
        _sprintf(param_5,"Thumbs/CostumeOptions/early_glasses_%i_%i",param_1,param_2);
        do {
          cVar1 = *param_5;
          param_5 = param_5 + 1;
        } while (cVar1 != '\0');
      }
      else {
        _sprintf(param_5,"Thumbs/CostumeOptions/mid_glasses_%i_%i",param_1,param_2);
        do {
          cVar1 = *param_5;
          param_5 = param_5 + 1;
        } while (cVar1 != '\0');
      }
    }
    else {
      _sprintf(param_5,"Thumbs/CostumeOptions/late_glasses_%i_%i",param_1,param_2);
      do {
        cVar1 = *param_5;
        param_5 = param_5 + 1;
      } while (cVar1 != '\0');
    }
    _sprintf(param_5 + -1,".dds");
    if (0x14 < local_348) {
                    /* WARNING: Subroutine does not return */
      _free(local_350);
    }
    local_4._0_1_ = 1;
    FUN_009c8560(local_310);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009c8560(local_268);
    local_4 = 0xffffffff;
    FUN_009c8560(local_2bc);
  }
  ExceptionList = local_c;
  return;
}


