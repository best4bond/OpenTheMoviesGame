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


//// FUNCTION FUN_009cfed0 @ 009cfed0 ////

void __thiscall
FUN_009cfed0(void *this,int param_1,char *param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint *this_00;
  undefined4 *puVar11;
  char *local_238;
  uint local_234;
  uint local_230;
  char local_22c [20];
  char *local_218;
  uint local_214;
  uint local_210;
  char local_20c [20];
  void *local_1f8 [2];
  uint local_1f0;
  char local_1d8 [72];
  char local_190;
  undefined4 local_18f;
  undefined1 local_90 [33];
  byte local_6f;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf7d1d;
  local_14 = ExceptionList;
  bVar4 = false;
  bVar6 = false;
  iVar10 = *(int *)((int)this + 0xcc);
  if (iVar10 == 0) {
    return;
  }
  if (param_1 < 0) {
    return;
  }
  if (*(int *)(iVar10 + 0x28) <= param_1) {
    return;
  }
  this_00 = (uint *)(*(int *)(iVar10 + 0x2c) + param_1 * 0x2c);
  ExceptionList = &local_14;
  FUN_00433f30(local_1d8);
  FUN_009cf5f0(this_00,local_1d8,(int)this);
  local_218 = local_20c;
  pcVar8 = local_1d8;
  local_214 = 0;
  local_20c[0] = '\0';
  local_210 = 0x14;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar9 = (int)pcVar8 - (int)(local_1d8 + 1);
  if (0x13 < uVar9) {
    local_210 = uVar9 + 0x20 & 0xffffffe0;
    local_218 = _malloc(local_210);
  }
  _strncpy(local_218,local_1d8,uVar9);
  local_218[uVar9] = '\0';
  uVar3 = this_00[1];
  local_c = 0;
  local_214 = uVar9;
  if (uVar3 == 7) {
    FUN_009cccc0(this,param_1,param_3,param_2);
  }
  else if (uVar3 == 8) {
    FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/hair_color_%i_0");
  }
  else {
    if (uVar3 == 1) {
      FUN_00401de0(local_1f8,"COS_LATEX_HEAD",0xffffffff);
      bVar6 = false;
      uVar7 = FUN_00401ec0(&local_218,local_1f8);
      if ((char)uVar7 == '\0') {
        FUN_00401de0(&local_238,"cos_latex_head",0xffffffff);
        bVar4 = true;
        bVar6 = true;
        uVar7 = FUN_00401ec0(&local_218,&local_238);
        if ((char)uVar7 == '\0') goto LAB_009d0054;
      }
      bVar4 = true;
      bVar5 = true;
    }
    else {
LAB_009d0054:
      bVar5 = false;
    }
    if ((bVar6) && (0x14 < local_230)) {
                    /* WARNING: Subroutine does not return */
      _free(local_238);
    }
    if ((bVar4) && (0x14 < local_1f0)) {
                    /* WARNING: Subroutine does not return */
      _free(local_1f8[0]);
    }
    if (bVar5) {
      FUN_006785d0(local_90,(undefined4 *)
                            ((*(uint *)(param_1 * 0x2c + *(int *)(*(int *)((int)this + 0xcc) + 0x2c)
                                       ) & 0xff) * 0x78 + *(int *)((int)this + 200)));
      if ((local_6f & 0x10) == 0) {
        FUN_009ccd90(this,param_3,param_4,param_2);
      }
      else {
        _sprintf(param_2,"Thumbs/Hair/hair_20s_f1.dds");
      }
    }
    else {
      uVar9 = this_00[1];
      if (uVar9 == 9) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_eye_color_%i_0");
      }
      else if (uVar9 == 0xb) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/f_cos_eyebrow_%i_0");
      }
      else if (uVar9 == 10) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/m_cos_eyebrow_%i_0");
      }
      else if (uVar9 == 5) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_facialhair_%i_0");
      }
      else if (uVar9 == 4) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_lipstick_%i_0");
      }
      else if (uVar9 == 0xc) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_nails_%i_0");
      }
      else if (uVar9 == 0xd) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_tatoo_%i_0");
      }
      else if (uVar9 == 6) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_bodypaint_%i_0");
      }
      else if (uVar9 == 3) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_makeupshape_%i_0");
      }
      else if (uVar9 == 2) {
        FUN_009ccde0(this,param_3,param_2,"Thumbs/CostumeOptions/cos_makeupcolor_%i_0");
      }
      else if ((uVar9 == 1) &&
              (*(char *)((*this_00 & 0xff) * 0x78 + 0x20 + *(int *)((int)this + 200)) == '\x05')) {
        FUN_009cfb50(this,param_3,param_4,param_5,param_1,param_2);
      }
    }
  }
  bVar6 = false;
  local_190 = '\0';
  puVar11 = &local_18f;
  for (iVar10 = 0x3f; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = 0;
  *(undefined1 *)((int)puVar11 + 2) = 0;
  _sprintf(&local_190,"data/Textures/%s",param_2);
  pcVar8 = param_2;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (pcVar8 != param_2 + 1) {
    local_238 = local_22c;
    pcVar8 = &local_190;
    local_234 = 0;
    local_230 = 0x14;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar9 = (int)pcVar8 - (int)&local_18f;
    local_22c[0] = cVar1;
    if (0x13 < uVar9) {
      local_230 = uVar9 + 0x20 & 0xffffffe0;
      local_238 = _malloc(local_230);
    }
    _strncpy(local_238,&local_190,uVar9);
    local_238[uVar9] = '\0';
    bVar6 = true;
    local_c = CONCAT31(local_c._1_3_,1);
    local_234 = uVar9;
    uVar7 = FUN_009d3660(&local_238,(uint *)0x0);
    if ((char)uVar7 != '\0') {
      bVar4 = false;
      goto LAB_009d0356;
    }
  }
  bVar4 = true;
LAB_009d0356:
  if ((bVar6) && (0x14 < local_230)) {
                    /* WARNING: Subroutine does not return */
    _free(local_238);
  }
  if (bVar4) {
    _sprintf(param_2,"Thumbs/CostumeOptions/no_thumb.dds");
  }
  if (local_210 < 0x15) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_218);
}


//// FUNCTION FUN_009d03c0 @ 009d03c0 ////

undefined4 * __cdecl FUN_009d03c0(int param_1)

{
  undefined4 *this;
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  this = FUN_009cfaa0((char *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x28);
  local_8 = 0;
  if (0 < iVar1) {
    local_4 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x2c);
      iVar7 = local_4 + iVar5;
      iVar6 = 0;
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          if (iVar5 == iVar7) goto LAB_009d0428;
          if (*(int *)(iVar5 + 4) == *(int *)(iVar7 + 4)) {
            iVar6 = iVar6 + 1;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x2c;
        } while (iVar4 < iVar1);
      }
      iVar6 = -1;
LAB_009d0428:
      this_00 = (void *)FUN_009cd170(this,*(int *)(iVar7 + 4),iVar6);
      if (this_00 != (void *)0x0) {
        iVar1 = *(int *)((int)this_00 + 4);
        switch(iVar1) {
        case 0:
        case 1:
        case 8:
        case 9:
          if (iVar1 == 1) {
            *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
          }
          uVar3 = *(uint *)(iVar7 + 8);
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
          uVar2 = FUN_009cd5e0(iVar1);
          uVar3 = FUN_00a5ef30((char *)(iVar7 + 0xc),uVar2);
          break;
        case 7:
          uVar3 = FUN_009d8a60((char *)(iVar7 + 0xc));
          break;
        default:
          goto switchD_009d0449_default;
        }
        FUN_009ce200(this_00,uVar3,this);
      }
switchD_009d0449_default:
      iVar1 = *(int *)(param_1 + 0x28);
      local_8 = local_8 + 1;
      local_4 = local_4 + 0x2c;
    } while (local_8 < iVar1);
  }
  return this;
}


//// FUNCTION FUN_009d04e0 @ 009d04e0 ////

void FUN_009d04e0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_0105ea84;
  if (DAT_0105ea84 != (undefined4 *)0x0) {
    FUN_009cecb0(DAT_0105ea84);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105ea84 = (undefined4 *)0x0;
  if (DAT_0105ea80 != (void *)0x0) {
    FUN_0099b400(DAT_0105ea80);
    DAT_0105ea80 = (void *)0x0;
  }
  return;
}


//// FUNCTION FUN_009d0530 @ 009d0530 ////

undefined4 * __cdecl FUN_009d0530(undefined4 *param_1)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_009b91e0();
  sVar1 = FUN_00ace02d(L"\\The Movies\\CustomCostumes\\");
  FUN_0040cae0(&local_20,L"\\The Movies\\CustomCostumes\\",sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_009d05b0 @ 009d05b0 ////

undefined4 __fastcall FUN_009d05b0(undefined4 *param_1)

{
  size_t sVar1;
  float *pfVar2;
  float *_Memory;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d0530(local_2c);
  local_4 = 0;
  FUN_0040cae0(local_2c,(wchar_t *)*param_1,param_1[1]);
  sVar1 = FUN_00ace02d(L".dds");
  FUN_0040cae0(local_2c,L".dds",sVar1);
  pfVar2 = (float *)FUN_009d4900(local_2c);
  if (pfVar2 != (float *)0x0) {
    _Memory = operator_new((uint)pfVar2);
    FUN_009d4aa0(local_2c,_Memory,(size_t)pfVar2,(undefined1 *)0x0);
    FUN_0099ab10(_Memory,pfVar2);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_009d06a0 @ 009d06a0 ////

undefined4 * __cdecl FUN_009d06a0(int param_1)

{
  undefined4 *puVar1;
  uint *_Memory;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != 0) {
    _Memory = FUN_009ce790(param_1);
    puVar1 = FUN_009d03c0((int)_Memory);
    if (_Memory != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return puVar1;
}


//// FUNCTION FUN_009d06d0 @ 009d06d0 ////

void FUN_009d06d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  uint _Count;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  wchar_t *unaff_EDI;
  wchar_t *_Str;
  void *local_288 [2];
  uint local_280;
  undefined4 local_268 [18];
  int local_220;
  int local_21c [2];
  wchar_t local_214 [260];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7d66;
  local_c = ExceptionList;
  DAT_0105ea84 = (int *)0x0;
  if (DAT_0105be80 != '\0') {
    DAT_0105ea80 = (void *)0x0;
    return;
  }
  ExceptionList = &local_c;
  FUN_009f2760(local_268);
  local_4 = 0;
  puVar1 = FUN_009d0530(local_288);
  local_4._0_1_ = 1;
  FUN_009f34b0(local_268,L"ccs",(wchar_t *)*puVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (10 < local_280) {
                    /* WARNING: Subroutine does not return */
    _free(local_288[0]);
  }
  iVar7 = 0;
  while( true ) {
    if (local_220 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_21c[0] - local_220 >> 2;
    }
    if (iVar2 <= iVar7) break;
    piVar3 = operator_new(0x28);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)(piVar3 + 3);
      *(undefined2 *)(piVar3 + 3) = 0;
      piVar3[1] = 0;
      piVar3[2] = 10;
      piVar3[9] = (int)DAT_0105ea84;
      DAT_0105ea84 = piVar3;
      piVar3[8] = 0x44f00000;
    }
    _Str = *(wchar_t **)(local_220 + iVar7 * 4);
    pwVar4 = _wcsrchr(_Str,L'\\');
    if (pwVar4 != (wchar_t *)0x0) {
      _Str = pwVar4 + 1;
    }
    _swprintf(local_214,(size_t)_Str,unaff_EDI);
    iVar2 = FUN_00ace02d(local_214);
    if (4 < iVar2) {
      *(undefined2 *)((int)local_21c + iVar2 * 2) = 0;
    }
    _Count = FUN_00ace02d(local_214);
    if ((uint)piVar3[2] <= _Count) {
      if (10 < (uint)piVar3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      uVar5 = _Count + 0x20 & 0xffffffe0;
      piVar3[2] = uVar5;
      pvVar6 = _malloc(uVar5 * 2);
      *piVar3 = (int)pvVar6;
    }
    _wcsncpy((wchar_t *)*piVar3,local_214,_Count);
    piVar3[1] = _Count;
    *(undefined2 *)(*piVar3 + _Count * 2) = 0;
    iVar7 = iVar7 + 1;
  }
  DAT_0105ea80 = FUN_0099bb50("cos_thumb_alpha.dds",0,0,0,'\0');
  local_4 = 0xffffffff;
  FUN_009f2320(local_268);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009d08c0 @ 009d08c0 ////

void FUN_009d08c0(void)

{
  FUN_009d04e0();
  FUN_009d06d0();
  return;
}


//// FUNCTION FUN_009d08d0 @ 009d08d0 ////

void * __cdecl FUN_009d08d0(wchar_t *param_1,size_t param_2,uint param_3)

{
  wchar_t *_Memory;
  undefined1 *this;
  void **ppvVar1;
  bool bVar2;
  uint *puVar3;
  size_t sVar4;
  undefined4 *puVar5;
  size_t sVar6;
  uint uVar7;
  void *this_00;
  undefined1 *in_stack_00000024;
  void *in_stack_ffffff84;
  int in_stack_ffffff88;
  uint in_stack_ffffff8c;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = in_stack_00000024;
  puStack_8 = &LAB_00cf7d80;
  local_c = ExceptionList;
  local_4 = 0;
  _Memory = param_1;
  ppvVar1 = &local_c;
  if (((in_stack_00000024 != (undefined1 *)0x0) && (*(int *)(in_stack_00000024 + 0xc) != 0)) &&
     (ExceptionList = &local_c, puVar3 = FUN_009ce790(*(int *)(in_stack_00000024 + 0xc)),
     _Memory = param_1, ppvVar1 = ExceptionList, puVar3 != (uint *)0x0)) {
    FUN_009d0530(local_4c);
    sVar6 = param_2;
    _Memory = param_1;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0040cae0(local_4c,param_1,param_2);
    sVar4 = FUN_00ace02d(L".ccs");
    FUN_0040cae0(local_4c,L".ccs",sVar4);
    bVar2 = FUN_009d44d0(local_4c,puVar3,*puVar3);
    if (bVar2) {
      puVar5 = FUN_009d0530(local_2c);
      FUN_004036d0(local_4c,(wchar_t *)*puVar5,puVar5[1]);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      FUN_0040cae0(local_4c,_Memory,sVar6);
      sVar6 = FUN_00ace02d(L".dds");
      FUN_0040cae0(local_4c,L".dds",sVar6);
      in_stack_00000024 = &stack0xffffff84;
      FUN_00421290(&stack0xffffff84,local_4c);
      uVar7 = FUN_009d6610(this,in_stack_ffffff84,in_stack_ffffff88,in_stack_ffffff8c);
      if ((char)uVar7 != '\0') {
        puVar5 = operator_new(0x28);
        if (puVar5 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)FUN_009cfa70(puVar5);
        }
        FUN_00403e70(this_00,&param_1);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        ExceptionList = local_c;
        return this_00;
      }
      FUN_009d3590(local_4c);
      puVar5 = FUN_009d0530(local_2c);
      FUN_00403e70(local_4c,puVar5);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      FUN_0040d3a0(local_4c,&param_1);
      FUN_0040d3c0(local_4c,L".ccs");
      FUN_009d3590(local_4c);
      ppvVar1 = ExceptionList;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    else {
      ppvVar1 = ExceptionList;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
  }
  ExceptionList = ppvVar1;
  if (param_3 < 0xb) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009d0b40 @ 009d0b40 ////

undefined4 __fastcall FUN_009d0b40(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  uint *_Memory;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [20];
  void *local_6c [2];
  uint local_64;
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
  puStack_8 = &LAB_00cf7db3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d0530(local_6c);
  local_4 = 0;
  FUN_0040cae0(local_6c,(wchar_t *)*param_1,param_1[1]);
  sVar3 = FUN_00ace02d(L".ccs");
  FUN_0040cae0(local_6c,L".ccs",sVar3);
  uVar4 = FUN_009d4900(local_6c);
  if (uVar4 == 0) {
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    ExceptionList = local_c;
    return 0;
  }
  _Memory = operator_new(uVar4);
  FUN_009d4aa0(local_6c,_Memory,uVar4,(undefined1 *)0x0);
  puVar5 = FUN_009cd120(_Memory);
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 0x14;
  puVar6 = puVar5 + 2;
  do {
    uVar4 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar4 != '\0');
  FUN_004015d0(&local_8c,(char *)(puVar5 + 2),(int)puVar6 - ((int)puVar5 + 9));
  puVar7 = FUN_0040d6b0(local_2c,"data/costume/datas/",&local_8c);
  pcVar2 = (char *)*puVar7;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar8 = pcVar2;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar8 - (int)(pcVar2 + 1));
  local_4._0_1_ = 3;
  uVar4 = FUN_009d3720(&local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_009d0da0 @ 009d0da0 ////

void __fastcall FUN_009d0da0(int param_1)

{
  FUN_00a162e0(param_1);
  return;
}


//// FUNCTION FUN_009d0e50 @ 009d0e50 ////

void __thiscall FUN_009d0e50(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 4) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_009d0f30 @ 009d0f30 ////

void FUN_009d0f30(void)

{
  FUN_0099a640(0x200);
  return;
}


//// FUNCTION FUN_009d0f40 @ 009d0f40 ////

int __cdecl FUN_009d0f40(char param_1,char param_2)

{
  if (DAT_0105be80 != '\0') {
    return -1;
  }
  if (((DAT_0105eaac != '\0') || (param_2 != '\0')) && (DAT_0105be00 == 0)) {
    return -1;
  }
  return (-(uint)(param_1 != '\0') & 0x2000000) + 0x31545844;
}


//// FUNCTION FUN_009d0f80 @ 009d0f80 ////

ulonglong __fastcall
FUN_009d0f80(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ulonglong uVar1;
  
  switch(param_5) {
  case 0:
    return CONCAT44(param_2,0xff);
  case 1:
    uVar1 = FUN_00acd42c();
    return uVar1;
  case 2:
    uVar1 = FUN_00acd42c();
    return uVar1;
  case 3:
    uVar1 = FUN_00acd42c();
    return uVar1;
  default:
    return (ulonglong)param_2 << 0x20;
  }
}


//// FUNCTION FUN_009d1030 @ 009d1030 ////

void __fastcall FUN_009d1030(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff00;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


//// FUNCTION FUN_009d10b0 @ 009d10b0 ////

void * __thiscall FUN_009d10b0(void *this,byte param_1)

{
  FUN_00a13810((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d10d0 @ 009d10d0 ////

void FUN_009d10d0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0105eaa4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_009d6000(puVar1);
  }
  return;
}


//// FUNCTION FUN_009d10f0 @ 009d10f0 ////

void FUN_009d10f0(void)

{
  return;
}


//// FUNCTION FUN_009d1100 @ 009d1100 ////

void __thiscall FUN_009d1100(void *this,char param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint *this_00;
  int local_108;
  int local_104;
  char local_100 [256];
  
  pvVar4 = *(void **)((int)this + 0xc);
  if (((pvVar4 != (void *)0x0) && (iVar2 = *(int *)((int)pvVar4 + 0xcc), iVar2 != 0)) &&
     (local_104 = 0, 0 < *(int *)(iVar2 + 0x28))) {
    local_108 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x2c) + 4 + local_108);
      this_00 = (uint *)(*(int *)(iVar2 + 0x2c) + local_108);
      switch(uVar1) {
      case 1:
        pvVar4 = *(void **)((int)this + 0xc);
        uVar3 = *(uint *)((*this_00 & 0xff) * 0x78 + 0x2c + *(int *)((int)pvVar4 + 200));
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
        iVar2 = FUN_009cd5e0(uVar1);
        if (param_1 == '\0') {
          uVar3 = FUN_00a5ef30((char *)(this_00 + 3),iVar2);
          pvVar4 = *(void **)((int)this + 0xc);
        }
        else {
          if ((char)this_00[3] == '\0') {
            if ((*(char *)(iVar2 * 0x20 + 0x128 + (int)this) != '\0') && (this_00[1] != 6)) {
              uVar3 = FUN_00a5ef30((char *)(iVar2 * 0x20 + 0x128 + (int)this),iVar2);
              FUN_009ce200(this_00,uVar3,*(void **)((int)this + 0xc));
            }
            if ((char)this_00[3] == '\0') goto LAB_009d1289;
          }
          if (*(char *)(iVar2 * 0x20 + 0x128 + (int)this) != '\0') goto LAB_009d1289;
          uVar3 = FUN_00a5ef30((char *)(this_00 + 3),iVar2);
          pvVar4 = *(void **)((int)this + 0xc);
        }
        break;
      case 7:
        if ((char)this_00[3] == '\0') {
          if (*(int *)((int)this + 0x1c) != 0) {
            _sprintf(local_100,"%s.msh",*(int *)((int)this + 0x1c));
            uVar3 = FUN_009d8a60(local_100);
            pvVar4 = *(void **)((int)this + 0xc);
            break;
          }
        }
        else {
          uVar3 = FUN_009d8a60((char *)(this_00 + 3));
          if (uVar3 != 0xffffffff) {
            pvVar4 = *(void **)((int)this + 0xc);
            break;
          }
        }
        goto LAB_009d1289;
      case 8:
        uVar3 = this_00[2];
        if (uVar3 == 0xffffffff) {
          uVar3 = *(uint *)((int)this + 0x248);
        }
        break;
      default:
        uVar3 = this_00[2];
      }
      FUN_009ce200(this_00,uVar3,pvVar4);
LAB_009d1289:
      pvVar4 = *(void **)((int)this + 0xc);
      iVar2 = *(int *)((int)pvVar4 + 0xcc);
      local_104 = local_104 + 1;
      local_108 = local_108 + 0x2c;
    } while (local_104 < *(int *)(iVar2 + 0x28));
  }
  return;
}


//// FUNCTION FUN_009d12f0 @ 009d12f0 ////

void __thiscall FUN_009d12f0(void *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    FUN_009cf970(*(void **)((int)this + 0xc),param_1,param_2);
    for (puVar1 = DAT_0105eaa4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      FUN_009d6000(puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_009d1330 @ 009d1330 ////

void __thiscall FUN_009d1330(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 < 0) || (iVar2 = FUN_009d7110(), iVar2 <= param_1)) {
    param_1 = 0;
  }
  *(int *)((int)this + 0x248) = param_1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
  if (((*(int *)((int)this + 0xc) != 0) &&
      (iVar2 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar2 != 0)) &&
     (iVar3 = 0, 0 < *(int *)(iVar2 + 0x28))) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x2c);
      if (*(int *)(iVar1 + 4 + iVar2) == 8) {
        *(int *)(iVar1 + iVar2 + 8) = param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x28));
  }
  return;
}


//// FUNCTION FUN_009d13b0 @ 009d13b0 ////

void __thiscall FUN_009d13b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 < 0) || (iVar2 = FUN_00a6a840(), iVar2 <= param_1)) {
    param_1 = 0;
  }
  iVar2 = *(int *)((int)this + 0x24c);
  *(int *)((int)this + 0x24c) = param_1;
  if ((*(int *)((int)this + 0x14) != 0) && ((*(byte *)((int)this + 0x10) & 1) != 0)) {
    FUN_00a17250(*(int *)((int)this + 0x14),param_1,iVar2);
  }
  if (((*(int *)((int)this + 0xc) != 0) &&
      (iVar2 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar2 != 0)) &&
     (iVar3 = 0, 0 < *(int *)(iVar2 + 0x28))) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x2c);
      if (*(int *)(iVar1 + 4 + iVar2) == 9) {
        *(int *)(iVar1 + iVar2 + 8) = param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x28));
  }
  return;
}


//// FUNCTION FUN_009d1530 @ 009d1530 ////

undefined4 __thiscall FUN_009d1530(void *this,byte *param_1,char param_2)

{
  undefined4 *puVar1;
  
  if (*(void **)((int)this + 8) != (void *)0x0) {
    puVar1 = (undefined4 *)FUN_0097e520(*(void **)((int)this + 8),param_1,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}


//// FUNCTION FUN_009d1560 @ 009d1560 ////

void FUN_009d1560(void)

{
  if (DAT_0105ea9c != (void *)0x0) {
    FUN_009de3b0(DAT_0105ea9c);
    DAT_0105ea9c = (void *)0x0;
  }
  DAT_0105ea9c = FUN_009de1d0("hair_20s_f1.msh",1);
  return;
}


//// FUNCTION FUN_009d1590 @ 009d1590 ////

void __fastcall FUN_009d1590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_200 [256];
  char local_100 [256];
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0xcc) != 0)) &&
     (iVar1 = FUN_0097e350(*(void **)(param_1 + 8),0), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(int *)(iVar1 + 0xd0) != 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0xd0))) {
      iVar3 = 0;
      do {
        _sprintf((char *)local_200,"%s.dds",*(int *)(iVar1 + 0xd4) + iVar3);
        _sprintf(local_100,"%s.dds",*(int *)(*(int *)(param_1 + 0xc) + 0xd4) + 0x20 + iVar3);
        FUN_00981fc0(*(void **)(param_1 + 8),local_200,local_100,-1);
        iVar1 = *(int *)(param_1 + 0xc);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar2 < *(int *)(iVar1 + 0xd0));
    }
  }
  return;
}


//// FUNCTION FUN_009d1650 @ 009d1650 ////

void __thiscall FUN_009d1650(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *_Dest;
  
  _sprintf(param_1,(char *)(*(int *)((int)this + 0x108) * 0x40 + 0x20 + DAT_010c9ac0));
  _Dest = param_1 + 0x20;
  _sprintf(_Dest,(char *)(*(int *)((int)this + 0x10c) * 0x40 + 0x20 + DAT_010c9ac0));
  _sprintf(param_1 + 0x40,(char *)(*(int *)((int)this + 0x110) * 0x40 + 0x20 + DAT_010c9ac0));
  _sprintf(param_1 + 0x60,(char *)(*(int *)((int)this + 0x114) * 0x40 + 0x20 + DAT_010c9ac0));
  if ((*(int *)((int)this + 0x34) == 0) && (0.5 < *(float *)((int)this + 0x124))) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar2 - (int)(param_1 + 1) != 0) {
      _sprintf(param_1 + ((int)pcVar2 - (int)(param_1 + 1)) + -4,"_enh.dds");
    }
    do {
      cVar1 = *_Dest;
      _Dest = _Dest + 1;
    } while (cVar1 != '\0');
    if ((int)_Dest - (int)(param_1 + 0x21) != 0) {
      _sprintf(param_1 + ((int)_Dest - (int)(param_1 + 0x21)) + 0x1c,"_enh.dds");
    }
  }
  return;
}


//// FUNCTION FUN_009d1740 @ 009d1740 ////

undefined4 __thiscall FUN_009d1740(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint in_EAX;
  
  if ((*(void **)((int)this + 0xc) != (void *)0x0) &&
     (in_EAX = FUN_009cf8f0(*(void **)((int)this + 0xc),param_1,param_2), puVar1 = DAT_0105eaa4,
     (char)in_EAX != '\0')) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      in_EAX = FUN_009d6000(puVar1);
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009d1780 @ 009d1780 ////

uint __thiscall FUN_009d1780(void *this,int param_1)

{
  uint uVar1;
  
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    uVar1 = FUN_009ce990(*(void **)((int)this + 0xc),param_1);
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_009d17a0 @ 009d17a0 ////

void __thiscall FUN_009d17a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  return;
}


//// FUNCTION FUN_009d17f0 @ 009d17f0 ////

void __thiscall FUN_009d17f0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((-1 < (int)param_1) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
      while (*piVar3 != 5) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xb;
        if (*(int *)(iVar1 + 0x28) <= iVar2) {
          return;
        }
      }
      FUN_009d1740(this,iVar2,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009d1840 @ 009d1840 ////

void __thiscall FUN_009d1840(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((-1 < (int)param_1) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
      while (*piVar3 != 3) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xb;
        if (*(int *)(iVar1 + 0x28) <= iVar2) {
          return;
        }
      }
      FUN_009d1740(this,iVar2,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009d1890 @ 009d1890 ////

void __thiscall FUN_009d1890(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((-1 < (int)param_1) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
      while (*piVar3 != 2) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xb;
        if (*(int *)(iVar1 + 0x28) <= iVar2) {
          return;
        }
      }
      FUN_009d1740(this,iVar2,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009d18e0 @ 009d18e0 ////

void __thiscall FUN_009d18e0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (((-1 < (int)param_1) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar1 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
      while ((*piVar3 != 10 && (*piVar3 != 0xb))) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xb;
        if (*(int *)(iVar1 + 0x28) <= iVar2) {
          return;
        }
      }
      FUN_009d1740(this,iVar2,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009d1940 @ 009d1940 ////

void __thiscall FUN_009d1940(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((-1 < (int)param_1) && (*(int *)((int)this + 0xc) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar1 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x28)) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x2c) + 4);
      while (*piVar2 != 4) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0xb;
        if (*(int *)(iVar1 + 0x28) <= iVar3) {
          return;
        }
      }
      FUN_009d1740(this,iVar3,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009d1990 @ 009d1990 ////

void __thiscall FUN_009d1990(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int local_4;
  
  if ((((param_1 != (int *)0x0) && (iVar10 = *(int *)((int)this + 0xc), iVar10 != 0)) &&
      (*(int *)(iVar10 + 0xcc) != 0)) && ((this == (void *)param_1[1] && (iVar10 == *param_1)))) {
    iVar10 = 0;
    cVar12 = '\x01';
    if (0 < param_1[2]) {
      iVar11 = 0;
      do {
        *(uint *)(iVar11 + 0x20 + param_1[3]) = *(uint *)(iVar11 + 0x20 + param_1[3]) | 1;
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x28;
      } while (iVar10 < param_1[2]);
    }
    bVar5 = true;
    bVar4 = true;
    for (piVar2 = *(int **)(*(int *)(param_1[1] + 8) + 0x8c); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        this_00 = *(void **)*piVar2;
        uVar8 = *(uint *)((int)this_00 + 0xe4);
        if ((uVar8 & 0x200) != 0) {
          bVar5 = false;
        }
        if ((uVar8 & 0x400) != 0) {
          bVar4 = false;
        }
        bVar6 = FUN_009daa10(this_00,"[no bodypaint]");
        cVar12 = '\x01' - bVar6;
      }
    }
    iVar10 = *(int *)((int)this + 0xc);
    uVar8 = FUN_009ccb60(iVar10);
    cVar7 = (char)uVar8;
    if (cVar7 != '\0') {
      bVar5 = false;
    }
    iVar11 = 0;
    if ((*(int *)(iVar10 + 0xcc) != 0) && (local_4 = 0, 0 < param_1[2])) {
      iVar10 = 0;
      do {
        iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x2c);
        switch(*(undefined4 *)(iVar3 + 4 + iVar11)) {
        case 1:
          cVar1 = *(char *)((*(uint *)(iVar3 + iVar11) & 0xff) * 0x78 + 0x20 +
                           *(int *)(*(int *)((int)this + 0xc) + 200));
          if (cVar1 == '\x01') {
            if ((*(void **)((int)this + 0x1c) != (void *)0x0) &&
               ((bVar6 = FUN_009daa10(*(void **)((int)this + 0x1c),"[no hat]"), bVar6 ||
                (bVar6 = FUN_009daa10(*(void **)((int)this + 0x1c),"[no hair morph]"), bVar6)))) {
              *(uint *)(param_1[3] + 0x20 + iVar10) =
                   *(uint *)(param_1[3] + 0x20 + iVar10) & 0xfffffffe;
            }
            if (cVar7 != '\0') goto LAB_009d1b74;
          }
          else if ((cVar1 == '\x05') && (cVar7 != '\0')) {
            puVar9 = (uint *)(param_1[3] + 0x20 + iVar10);
            goto LAB_009d1b7b;
          }
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
        case 10:
        case 0xb:
          if (!bVar5) {
            puVar9 = (uint *)(param_1[3] + 0x20 + iVar10);
LAB_009d1b7b:
            *puVar9 = *puVar9 & 0xfffffffe;
          }
          break;
        case 6:
        case 0xc:
        case 0xd:
          if (cVar12 == '\0') {
LAB_009d1b74:
            puVar9 = (uint *)(param_1[3] + 0x20 + iVar10);
            goto LAB_009d1b7b;
          }
          break;
        case 7:
          if ((cVar7 != '\0') || (!bVar4)) {
            puVar9 = (uint *)(param_1[3] + 0x20 + iVar10);
            goto LAB_009d1b7b;
          }
        }
        local_4 = local_4 + 1;
        iVar11 = iVar11 + 0x2c;
        iVar10 = iVar10 + 0x28;
      } while (local_4 < param_1[2]);
    }
  }
  return;
}


//// FUNCTION FUN_009d1bd0 @ 009d1bd0 ////

void __thiscall FUN_009d1bd0(void *this,int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7dcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x2c) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x14);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00a13c40((int)pvVar1);
    }
    *(undefined4 *)((int)this + 0x2c) = uVar2;
  }
  local_4 = 0xffffffff;
  FUN_00a13d50(*(void **)((int)this + 0x2c),param_1,this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009d1c50 @ 009d1c50 ////

int __fastcall FUN_009d1c50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x6c);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_009d1cb0 @ 009d1cb0 ////

float10 __fastcall FUN_009d1cb0(byte *param_1)

{
  bool bVar1;
  
  if (DAT_0105be80 == '\0') {
    if ((*param_1 & 1) == 0) {
      return (float10)*(float *)(param_1 + 8);
    }
    bVar1 = **(char **)(param_1 + 0xac) == '\0';
  }
  else {
    bVar1 = *(int *)(param_1 + 0x30) == 0;
  }
  if (bVar1) {
    return (float10)0.0;
  }
  return (float10)*(float *)(param_1 + 4);
}


//// FUNCTION FUN_009d1ce0 @ 009d1ce0 ////

void __fastcall FUN_009d1ce0(int param_1)

{
  FUN_00434ae0(param_1 + 8);
  return;
}


//// FUNCTION FUN_009d1cf0 @ 009d1cf0 ////

void __thiscall FUN_009d1cf0(void *this,uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint *_Memory;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte local_198 [32];
  char local_178 [32];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  char local_14c [32];
  undefined4 local_12c [74];
  
  if (*(int *)((int)this + 0xc) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_009d1c50((int)local_198);
  if ((*(byte *)((int)this + 0x38) & 1) == 0) {
    pcVar1 = "";
  }
  else {
    pcVar1 = *(char **)((int)this + 0xc4);
  }
  _sprintf((char *)local_198,pcVar1);
  if ((*(byte *)((int)this + 0x38) & 1) == 0) {
    pcVar1 = "";
  }
  else {
    pcVar1 = *(char **)((int)this + 0xe4);
  }
  _sprintf(local_178,pcVar1);
  if (DAT_0105be80 == '\0') {
    if ((*(byte *)((int)this + 0x38) & 1) == 0) {
      local_158 = *(undefined4 *)((int)this + 0x40);
      goto LAB_009d1da0;
    }
    if (**(char **)((int)this + 0xe4) == '\0') {
      local_158 = 0;
      goto LAB_009d1da0;
    }
  }
  else if (*(int *)((int)this + 0x68) == 0) {
    local_158 = 0;
    goto LAB_009d1da0;
  }
  local_158 = *(undefined4 *)((int)this + 0x3c);
LAB_009d1da0:
  local_154 = *(undefined4 *)((int)this + 0x11c);
  local_150 = *(undefined4 *)((int)this + 0x248);
  _sprintf(local_14c,(char *)((int)this + 0x250));
  puVar4 = (undefined4 *)((int)this + 0x128);
  puVar5 = local_12c;
  for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_009ac1e0(local_198,0x18c);
  _Memory = FUN_009ce790(*(int *)((int)this + 0xc));
  if (_Memory == (uint *)0x0) {
    param_1[1] = 0;
    *param_1 = uVar2;
    return;
  }
  FUN_009ac1e0((byte *)_Memory,*_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009d1e80 @ 009d1e80 ////

void __thiscall FUN_009d1e80(void *this,float param_1)

{
  char *pcVar1;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if ((*(byte *)this & 1) == 0) {
    pcVar1 = *(char **)((int)this + 0x2c);
  }
  else if ((*(byte *)this & 1) == 0) {
    pcVar1 = "";
  }
  else {
    pcVar1 = *(char **)((int)this + 0xac);
  }
  if (*pcVar1 == '\0') {
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  *(float *)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_009d1ef0 @ 009d1ef0 ////

void __thiscall FUN_009d1ef0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && ((*(byte *)this & 1) == 0)) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0xc),param_1,(int)pcVar2 - (int)(param_1 + 1));
    FUN_004015d0((void *)((int)this + 0x2c),"",0);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_009d1f40 @ 009d1f40 ////

void __fastcall FUN_009d1f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7deb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  puVar2 = DAT_0105eaa4;
  do {
    ExceptionList = &pvStack_c;
    if (puVar2 == (undefined4 *)0x0) {
LAB_009d1f90:
      if ((void *)param_1[3] != (void *)0x0) {
        FUN_009cfb00((void *)param_1[3]);
        param_1[3] = 0;
      }
      if ((void *)param_1[5] != (void *)0x0) {
        FUN_009de3b0((void *)param_1[5]);
        param_1[5] = 0;
      }
      if ((void *)param_1[6] != (void *)0x0) {
        FUN_009de3b0((void *)param_1[6]);
        param_1[6] = 0;
      }
      if ((void *)param_1[7] != (void *)0x0) {
        FUN_009de3b0((void *)param_1[7]);
        param_1[7] = 0;
      }
      if ((void *)param_1[8] != (void *)0x0) {
        FUN_009de3b0((void *)param_1[8]);
        param_1[8] = 0;
      }
      puVar1 = (undefined4 *)param_1[2];
      if (puVar1 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(puVar1 + 4);
        uVar3 = DAT_0105b588;
        if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar3;
        param_1[2] = 0;
      }
      _Memory = (void *)param_1[0xb];
      if (_Memory != (void *)0x0) {
        FUN_00a13810((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      param_1[0xb] = 0;
      local_4 = 0xffffffff;
      FUN_00434ae0((int)(param_1 + 0xe));
      ExceptionList = pvStack_c;
      return;
    }
    if (puVar2 == param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        DAT_0105eaa4 = (undefined4 *)*param_1;
        ExceptionList = &pvStack_c;
      }
      else {
        ExceptionList = &pvStack_c;
        *puVar1 = *param_1;
      }
      goto LAB_009d1f90;
    }
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


//// FUNCTION FUN_009d20c0 @ 009d20c0 ////

void __fastcall FUN_009d20c0(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  char *pcVar12;
  float *pfVar13;
  bool bVar14;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1b8;
  undefined1 local_1b4;
  int iStack_1b0;
  int aiStack_1ac [4];
  float afStack_19c [33];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7e0b;
  local_c = ExceptionList;
  if (DAT_0105ea98 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  local_1b4 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar8 = *(int *)(param_1 + 0x14);
  }
  else {
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0xa4) & 0x1000) != 0) goto LAB_009d214f;
    MeshInstance_AddMeshWithChildren(*(void **)(param_1 + 8),*(int *)(param_1 + 0x14),0);
    iVar8 = *(int *)(param_1 + 0x1c);
  }
  MeshInstance_AddMeshWithChildren(*(void **)(param_1 + 8),iVar8,0);
LAB_009d214f:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    FUN_009de3b0(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = FUN_009ccb60(*(int *)(param_1 + 0xc));
    cVar3 = (char)uVar4;
    if (cVar3 != '\0') {
      FUN_00981b80(*(void **)(param_1 + 8),*(int *)(param_1 + 0x1c));
      FUN_00981b80(*(void **)(param_1 + 8),*(int *)(param_1 + 0x14));
    }
    uStack_1c4 = 0;
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0xa4) & 0xf80) != 0) {
      iStack_1c8 = 0;
      do {
        iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 200);
        pcVar10 = (char *)(iVar8 + iStack_1c8);
        if ((*(int *)(iVar8 + 0x2c + iStack_1c8) != 0) ||
           (bVar2 = false, (pcVar10[0x21] & 0x10U) != 0)) {
          bVar2 = true;
        }
        if (pcVar10[0x20] == '\x01') {
          if (cVar3 != '\0') {
            bVar2 = false;
          }
          if ((*(int *)(param_1 + 0x34) == 1) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
            iVar8 = 0x11;
            bVar14 = true;
            pcVar6 = pcVar10;
            pcVar12 = "hat_fhardhat.msh";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar14 = *pcVar6 == *pcVar12;
              pcVar6 = pcVar6 + 1;
              pcVar12 = pcVar12 + 1;
            } while (bVar14);
            if (!bVar14) {
              bVar2 = false;
            }
          }
          if ((*(void **)(param_1 + 0x1c) != (void *)0x0) &&
             ((bVar14 = FUN_009daa10(*(void **)(param_1 + 0x1c),"[no hat]"), bVar14 ||
              (bVar14 = FUN_009daa10(*(void **)(param_1 + 0x1c),"[no hair morph]"), bVar14)))) {
            bVar2 = false;
          }
        }
        if (((pcVar10[0x20] != '\x05') || (cVar3 == '\0')) && (bVar2)) {
          FUN_009ad890(pcVar10,&iStack_1b0,aiStack_1ac);
          pbVar5 = FUN_009cd1f0(*(void **)(param_1 + 0xc),pcVar10);
          if (pbVar5 != (byte *)0x0) {
            *(int *)(pbVar5 + 0x2c) = *(int *)(pcVar10 + 0x2c) + -1;
          }
          bVar1 = pcVar10[0x21];
          pcVar6 = pcVar10;
          if ((1 < *(int *)(pcVar10 + 0x2c)) && (1 < iStack_1b0)) {
            for (iStack_1b8 = *(int *)(pcVar10 + 0x2c) + -1 + aiStack_1ac[0];
                iStack_1b0 <= iStack_1b8; iStack_1b8 = iStack_1b8 - iStack_1b0) {
            }
            FUN_009ad980(&DAT_0105ef50,acStack_10c,pcVar10,&iStack_1b8);
            pcVar6 = acStack_10c;
          }
          pbVar5 = FUN_009de1d0(pcVar6,~(bVar1 >> 3) & 1);
          if (((pcVar10[0x21] & 8U) != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
            FUN_009dbd30(pbVar5,*(int *)(pbVar5 + 0x84),*(float *)(param_1 + 0x120),
                         *(float *)(param_1 + 0x124));
          }
          if (pbVar5 != (byte *)0x0) {
            if ((*(uint *)(pbVar5 + 0xe4) & 0x400) != 0) {
              FUN_00981b80(*(void **)(param_1 + 8),*(int *)(param_1 + 0x1c));
            }
            if ((*(uint *)(pbVar5 + 0xe4) & 0x200) != 0) {
              FUN_00981b80(*(void **)(param_1 + 8),*(int *)(param_1 + 0x14));
            }
          }
          iVar8 = MeshInstance_AddMeshWithChildren(*(void **)(param_1 + 8),(int)pbVar5,0);
          pcVar6 = FUN_009da470((int)pbVar5);
          if (pcVar6 != (char *)0x0) {
            FUN_00981ee0(*(void **)(param_1 + 8),iVar8,(int *)(pcVar10 + 0x50));
          }
          if (((pcVar10[0x20] == '\x05') &&
              (iVar7 = FUN_0097eef0(*(void **)(param_1 + 8),iVar8), *(int *)(pbVar5 + 0x40) == 0))
             && (iVar7 != 0)) {
            *(undefined1 *)(iVar7 + 9) = 0x1d;
            FUN_0040b670(afStack_19c);
            afStack_19c[0] = 0.0;
            afStack_19c[1] = 0.0;
            afStack_19c[2] = 1.0;
            afStack_19c[3] = -1.0;
            afStack_19c[4] = 0.0;
            afStack_19c[5] = 0.0;
            afStack_19c[6] = 0.0;
            afStack_19c[7] = -1.0;
            afStack_19c[8] = 0.0;
            afStack_19c[9] = 0.036299;
            afStack_19c[10] = 0.0;
            afStack_19c[0xb] = 1.658118;
            FUN_009aa670(afStack_19c);
            pfVar11 = afStack_19c;
            pfVar13 = (float *)(iVar7 + 0x10);
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *pfVar13 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
            }
          }
          if (pcVar10[0x20] == '\x01') {
            iVar7 = FUN_0097eef0(*(void **)(param_1 + 8),iVar8);
            if ((*(int *)(pbVar5 + 0x40) == 0) && (iVar7 != 0)) {
              *(undefined1 *)(iVar7 + 9) = 0x1d;
              FUN_0040b670(afStack_19c + 0xc);
              afStack_19c[0xc] = 0.0;
              afStack_19c[0xd] = 0.0;
              afStack_19c[0xe] = 1.0;
              afStack_19c[0xf] = -1.0;
              afStack_19c[0x10] = 0.0;
              afStack_19c[0x11] = 0.0;
              afStack_19c[0x12] = 0.0;
              afStack_19c[0x13] = -1.0;
              afStack_19c[0x14] = 0.0;
              afStack_19c[0x15] = 0.036299;
              afStack_19c[0x16] = 0.0;
              afStack_19c[0x17] = 1.658118;
              FUN_009aa670(afStack_19c + 0xc);
              pfVar11 = afStack_19c + 0xc;
              pfVar13 = (float *)(iVar7 + 0x10);
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                *pfVar13 = *pfVar11;
                pfVar11 = pfVar11 + 1;
                pfVar13 = pfVar13 + 1;
              }
            }
            if (*(void **)(param_1 + 0x20) != (void *)0x0) {
              FUN_009de3b0(*(void **)(param_1 + 0x20));
              *(undefined4 *)(param_1 + 0x20) = 0;
            }
            *(byte **)(param_1 + 0x20) = pbVar5;
            *(int *)(pbVar5 + 0x20) = *(int *)(pbVar5 + 0x20) + 1;
            *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
          }
          if ((pcVar10[0x20] == '\x03') &&
             (iVar8 = FUN_0097eef0(*(void **)(param_1 + 8),iVar8), iVar8 != 0)) {
            *(undefined1 *)(iVar8 + 9) = 3;
            FUN_0040b670(afStack_19c + 0x18);
            FUN_009ab3f0(afStack_19c + 0x18,1.5707964,-1.6537169,0.0);
            aiStack_1ac[3] = 0x3f9ba5e3;
            aiStack_1ac[1] = 0x3ce56042;
            aiStack_1ac[2] = 0;
            uStack_110 = 0x3f9ba5e3;
            uStack_118 = 0x3ce56042;
            uStack_114 = 0;
            FUN_009aa670(afStack_19c + 0x18);
            pfVar11 = afStack_19c + 0x18;
            pfVar13 = (float *)(iVar8 + 0x10);
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar13 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
            }
          }
          if (pbVar5 != (byte *)0x0) {
            FUN_009de3b0(pbVar5);
          }
        }
        uStack_1c4 = uStack_1c4 + 1;
        iStack_1c8 = iStack_1c8 + 0x78;
      } while (uStack_1c4 < (*(uint *)(*(int *)(param_1 + 0xc) + 0xa4) >> 7 & 0x1f));
    }
  }
  FUN_009d1590(param_1);
  DAT_0105cc5c = local_1b4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009d2620 @ 009d2620 ////

int * __thiscall FUN_009d2620(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char local_54 [32];
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  piVar7 = (int *)0x0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0xcc) != 0)) {
    *(int *)((int)this + 4) = param_1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    iVar8 = *(int *)(param_1 + 0xc);
    *(int *)this = iVar8;
    piVar4 = (int *)(iVar8 + 0xa0);
    *piVar4 = *piVar4 + 1;
    iVar8 = *(int *)(*(int *)(*(int *)this + 0xcc) + 0x28);
    *(int *)((int)this + 8) = iVar8;
    piVar4 = operator_new(iVar8 * 0x28 + 4);
    local_4 = 0;
    if (piVar4 != (int *)0x0) {
      piVar7 = piVar4 + 1;
      *piVar4 = iVar8;
      _eh_vector_constructor_iterator_(piVar7,0x28,iVar8,FUN_00676120,FUN_00675e70);
    }
    *(int **)((int)this + 0xc) = piVar7;
    iVar9 = 0;
    iVar8 = 0;
    local_4 = 0xffffffff;
    if (0 < *(int *)((int)this + 8)) {
      param_1 = 0;
      do {
        FUN_009a2210(&local_30);
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        local_54[0] = '\0';
        local_34 = 0;
        local_10 = 0;
        FUN_009cfb20(*(void **)this,iVar8,local_54);
        pcVar5 = local_54;
        do {
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        FUN_004015d0((void *)(*(int *)((int)this + 0xc) + iVar9),local_54,
                     (int)pcVar5 - (int)(local_54 + 1));
        if (*(void **)(iVar2 + 0xc) == (void *)0x0) {
          uVar6 = 1;
        }
        else {
          uVar6 = FUN_009cd660(*(void **)(iVar2 + 0xc),iVar8);
        }
        *(undefined4 *)(iVar9 + 0x24 + *(int *)((int)this + 0xc)) = uVar6;
        if ((*(int *)(*(int *)this + 0xcc) != 0) &&
           (*(int *)(*(int *)(*(int *)(*(int *)this + 0xcc) + 0x2c) + 4 + param_1) == 6)) {
          *(uint *)(iVar9 + 0x20 + *(int *)((int)this + 0xc)) =
               *(uint *)(iVar9 + 0x20 + *(int *)((int)this + 0xc)) | 2;
        }
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 0x2c;
        iVar9 = iVar9 + 0x28;
      } while (iVar8 < *(int *)((int)this + 8));
    }
    if ((((*(byte *)(*(int *)this + 0xa6) & 1) != 0) && (DAT_0105ea8c != (code *)0x0)) &&
       (cVar3 = (*DAT_0105ea8c)(), cVar3 == '\0')) {
      puVar1 = (uint *)(*(int *)(*(int *)(*(int *)this + 0xcc) + 0x2c) + -0x2c +
                       *(int *)((int)this + 8) * 0x2c);
      if (((puVar1[1] == 1) &&
          (*(char *)((*puVar1 & 0xff) * 0x78 + 0x20 + *(int *)(*(int *)this + 200)) == '\x04')) &&
         (puVar1[2] == 0)) {
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009d2880 @ 009d2880 ////

void __thiscall FUN_009d2880(void *this,uint *param_1)

{
  if ((param_1 != (uint *)0x0) && ((*(byte *)((int)this + 0x10) & 1) != 0)) {
    FUN_004356e0((void *)((int)this + 0x38),param_1);
    *(uint *)((int)this + 0x104) = *(uint *)((int)this + 0x104) & 0xfffffffe;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x36;
  }
  return;
}


//// FUNCTION FUN_009d28b0 @ 009d28b0 ////

void __thiscall FUN_009d28b0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 1) & 1) != 0)) {
    *(uint *)this = *(uint *)this | 1;
    pcVar2 = (char *)(param_1 + 0x4c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x4c),(char *)(param_1 + 0x4c),(int)pcVar2 - (param_1 + 0x4d))
    ;
    pcVar2 = (char *)(param_1 + 0x6c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x6c),(char *)(param_1 + 0x6c),(int)pcVar2 - (param_1 + 0x6d))
    ;
    pcVar2 = (char *)(param_1 + 0xc);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x8c),(char *)(param_1 + 0xc),(int)pcVar2 - (param_1 + 0xd));
    pcVar2 = (char *)(param_1 + 0x2c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0xac),(char *)(param_1 + 0x2c),(int)pcVar2 - (param_1 + 0x2d))
    ;
    FUN_009d1e80(this,*(float *)(param_1 + 0x8c));
    FUN_009d0e50(this,(float)*(ushort *)(param_1 + 2) * 1.5259022e-05);
  }
  return;
}


//// FUNCTION FUN_009d2990 @ 009d2990 ////

uint * __thiscall FUN_009d2990(void *this,char *param_1,char *param_2,float param_3)

{
  undefined4 *this_00;
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7e84;
  local_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 0xc);
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_(this_00,0x20,2,FUN_00401dc0,FUN_00401490);
  local_4 = 0;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x4c),0x20,2,FUN_00401dc0,FUN_00401490);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x8c),0x20,2,FUN_00401dc0,FUN_00401490);
  *(uint *)this = *(uint *)this & 0xfffffffe;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(this_00,param_1,(int)pcVar2 - (int)(param_1 + 1));
    FUN_009ac040((char *)*this_00);
    if (param_2 != (char *)0x0) {
      pcVar2 = param_2;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0((undefined4 *)((int)this + 0x2c),param_2,(int)pcVar2 - (int)(param_2 + 1));
      FUN_009ac040(*(char **)((int)this + 0x2c));
      FUN_009d0e50(this,param_3);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009d2aa0 @ 009d2aa0 ////

undefined4 * __fastcall FUN_009d2aa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_009d2990(param_1 + 2,(char *)0x0,(char *)0x0,0.0);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe9) = 0xff;
  *(undefined1 *)((int)param_1 + 0xea) = 0xff;
  *(undefined1 *)((int)param_1 + 0xeb) = 0xff;
  param_1[0x3a] = 0xffffffff;
  puVar2 = param_1 + 0x3e;
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return param_1;
}


//// FUNCTION FUN_009d2b50 @ 009d2b50 ////

void __fastcall FUN_009d2b50(undefined4 *param_1)

{
  int iVar1;
  
  if ((0 < (int)param_1[1]) && (iVar1 = param_1[1] + -1, param_1[1] = iVar1, iVar1 == 0)) {
    FUN_009d1f40(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009d2b70 @ 009d2b70 ////

void __fastcall FUN_009d2b70(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *_Memory;
  int iVar2;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x28,*(int *)((int)pvVar1 + -4),FUN_00675e70);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  _Memory = (undefined4 *)param_1[1];
  param_1[3] = 0;
  if (_Memory != (undefined4 *)0x0) {
    if ((0 < (int)_Memory[1]) && (iVar2 = _Memory[1] + -1, _Memory[1] = iVar2, iVar2 == 0)) {
      FUN_009d1f40(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[1] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_009cfb00((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_009d2be0 @ 009d2be0 ////

void __fastcall FUN_009d2be0(int param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 local_cc [204];
  
  iVar1 = FUN_00a19f90(*(char **)(param_1 + 0x44));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x34) == 1) {
      pcVar3 = "head_f_white_jane.hd";
    }
    else {
      pcVar3 = "head_m_white_joe.hd";
    }
    puVar2 = FUN_009d2990(local_cc,pcVar3,(char *)0x0,0.0);
    FUN_004356e0((void *)(param_1 + 0x38),puVar2);
    FUN_00434ae0((int)local_cc);
    return;
  }
  FUN_009d28b0((void *)(param_1 + 0x38),iVar1);
  FUN_00a162e0(iVar1);
  return;
}


//// FUNCTION FUN_009d2c50 @ 009d2c50 ////

void __thiscall FUN_009d2c50(void *this,void *param_1,char param_2,float param_3,float param_4)

{
  int *piVar1;
  undefined1 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 != -1.0) {
    FUN_009d63a0(this,param_3);
  }
  if (param_4 != -1.0) {
    FUN_009d6470(this,param_4);
  }
  if ((*(void **)((int)this + 0xc) != param_1) && (*(int *)((int)this + 8) != 0)) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    if (param_1 != (void *)0x0) {
      *(int *)((int)param_1 + 0xa0) = *(int *)((int)param_1 + 0xa0) + 1;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      piVar1 = (int *)(*(int *)((int)this + 0xc) + 0xa0);
      *piVar1 = *piVar1 + 1;
      FUN_009ccc30(*(void **)((int)this + 0xc),0);
      FUN_009cfb00(*(void **)((int)this + 0xc));
    }
    if (*(void **)((int)this + 0xc) != (void *)0x0) {
      FUN_009cfb00(*(void **)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    if (param_1 == (void *)0x0) {
      FUN_009d20c0((int)this);
      uVar2 = DAT_0105ea98;
    }
    else {
      *(void **)((int)this + 0xc) = param_1;
      FUN_009ccc30(param_1,(int)this);
      if (*(void **)((int)this + 0x18) != (void *)0x0) {
        FUN_009de3b0(*(void **)((int)this + 0x18));
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      FUN_00a6aae0(param_1,(int)this);
      FUN_009d20c0((int)this);
      FUN_009d1100(this,param_2);
      FUN_009d20c0((int)this);
      if ((*(uint *)((int)this + 0x10) & 1) != 0) {
        *(uint *)((int)this + 0x10) =
             (*(uint *)((int)param_1 + 0xa4) & 1 | 4) << 1 |
             *(uint *)((int)this + 0x10) & 0xfffffffd;
        if (*(int *)((int)this + 0x20) != 0) {
          FUN_009d9da0(*(int *)((int)this + 0x20));
        }
        if (*(int *)((int)this + 0x20) == 0) {
          pfVar3 = (float *)0x0;
        }
        else {
          pfVar3 = *(float **)(*(int *)((int)this + 0x20) + 100);
        }
        FUN_009d8320(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x14),pfVar3);
        *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xffffffef;
      }
      if (*(int *)((int)this + 0x24) != 0) {
        for (piVar1 = *(int **)(*(int *)((int)this + 8) + 0x8c); piVar1 != (int *)0x0;
            piVar1 = (int *)piVar1[1]) {
          if (((*(uint *)((int)*(void **)*piVar1 + 0xe4) & 0x2000) != 0) &&
             (iVar4 = FUN_009da040(*(void **)*piVar1,"dummy.dds"), iVar4 != -1)) {
            FUN_00981c50(*(void **)((int)this + 8),iVar4,*(int *)((int)this + 0x24),
                         *(int *)(*piVar1 + 0xc));
          }
        }
      }
      uVar2 = DAT_0105ea98;
      DAT_0105ea98 = 1;
      iVar4 = 0;
      while( true ) {
        iVar5 = *(int *)((int)*(void **)((int)this + 0xc) + 0xcc);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x28);
        }
        if (iVar5 <= iVar4) break;
        iVar5 = FUN_009cd3c0(*(void **)((int)this + 0xc),iVar4);
        if (iVar5 != 1) {
          uVar6 = FUN_009ce990(*(void **)((int)this + 0xc),iVar4);
          FUN_009cf8f0(*(void **)((int)this + 0xc),iVar4,uVar6);
        }
        iVar4 = iVar4 + 1;
      }
    }
    DAT_0105ea98 = uVar2;
    if ((0 < *(int *)((int)this + 4)) &&
       (iVar4 = *(int *)((int)this + 4) + -1, *(int *)((int)this + 4) = iVar4, iVar4 == 0)) {
      FUN_009d1f40(this);
                    /* WARNING: Subroutine does not return */
      _free(this);
    }
  }
  return;
}


//// FUNCTION FUN_009d2e50 @ 009d2e50 ////

void __thiscall
FUN_009d2e50(void *this,int param_1,undefined4 param_2,uint param_3,uint *param_4,char param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  char *pcVar11;
  
  FUN_009d1030((int)this);
  *(void **)this = DAT_0105eaa4;
  DAT_0105eaa4 = this;
  *(int *)((int)this + 0x30) = DAT_0105eaa8;
  DAT_0105eaa8 = DAT_0105eaa8 + 1;
  *(int *)((int)this + 8) = param_1;
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  *(undefined4 *)((int)this + 0x34) = param_2;
  *(uint *)((int)this + 0x10) =
       *(uint *)((int)this + 0x10) ^ (param_3 & 0xff ^ *(uint *)((int)this + 0x10)) & 1;
  if (param_4 != (uint *)0x0) {
    FUN_004356e0((void *)((int)this + 0x38),param_4);
  }
  iVar3 = _strncmp(*(char **)((int)this + 0x44),(char *)&PTR_LAB_005f6474_1_00d73408,3);
  if (iVar3 == 0) {
    FUN_009d2be0((int)this);
  }
  if ((*(byte *)((int)this + 0x10) & 1) != 0) {
    FUN_00a17070(this,param_5);
    FUN_00a17040(*(void **)((int)this + 0x14));
    goto LAB_009d3073;
  }
  if (*(int *)((int)this + 0x34) == 1) {
    pcVar11 = "head_f_white_jane.hd";
  }
  else {
    pcVar11 = "head_m_white_joe.hd";
  }
  FUN_009d1ef0((void *)((int)this + 0x38),pcVar11);
  pcVar11 = *(char **)((int)this + 0x44);
  pcVar4 = pcVar11;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = (int)pcVar4 - (int)(pcVar11 + 1);
  if (iVar3 < 6) {
LAB_009d2f38:
    if (*(int *)((int)this + 0x34) == 0) {
      pcVar11 = "generic_m_head.dds";
    }
    else {
      pcVar11 = "generic_f_head.dds";
    }
    pvVar6 = FUN_0099bb50(pcVar11,0,0,0,'\0');
    if (iVar3 < 6) {
LAB_009d2f89:
      if (*(int *)((int)this + 0x34) == 1) {
        pbVar5 = FUN_00a1aad0((wchar_t *)"head_f_white_jane.hd");
        pcVar11 = "head_f_white_jane.hd";
      }
      else {
        pbVar5 = FUN_009de1d0("generic_head.msh",1);
        pcVar11 = "head_m_white_joe.hd";
      }
      *(byte **)((int)this + 0x14) = pbVar5;
      FUN_009da710(pbVar5,(wchar_t *)pcVar11,(char *)0x0,(IAtlStringMgr *)0x0);
    }
    else {
      iVar7 = 4;
      bVar10 = true;
      pcVar11 = (char *)((int)*(wchar_t **)((int)this + 0x44) + iVar3 + -3);
      pcVar4 = ".hd";
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar10 = *pcVar11 == *pcVar4;
        pcVar11 = pcVar11 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar10);
      if (!bVar10) goto LAB_009d2f89;
      pbVar5 = FUN_00a1aad0(*(wchar_t **)((int)this + 0x44));
      *(byte **)((int)this + 0x14) = pbVar5;
    }
    bVar10 = false;
    uVar8 = 0;
    if (0 < *(int *)(*(int *)((int)this + 0x14) + 0x38)) {
      do {
        if (bVar10) break;
        iVar3 = _strncmp(*(char **)(*(int *)(*(int *)((int)this + 0x14) + 0x3c) + uVar8 * 4),"head_"
                         ,5);
        if (iVar3 == 0) {
          FUN_00a48e80(*(void **)((int)this + 0x14),uVar8,(int)pvVar6);
          bVar10 = true;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(*(int *)((int)this + 0x14) + 0x38));
    }
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
  }
  else {
    iVar7 = 5;
    bVar10 = true;
    pcVar4 = pcVar11 + iVar3 + -4;
    pcVar9 = ".msh";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar10 = *pcVar4 == *pcVar9;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar10);
    if (!bVar10) goto LAB_009d2f38;
    pbVar5 = FUN_009de1d0(pcVar11,1);
    *(byte **)((int)this + 0x14) = pbVar5;
  }
  if (*(int *)((int)this + 0x34) == 0) {
    if (*(void **)((int)this + 0x1c) != (void *)0x0) {
      FUN_009de3b0(*(void **)((int)this + 0x1c));
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = DAT_0105ea9c;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0x1c) + 0x20);
    *piVar1 = *piVar1 + 1;
    FUN_009d6600();
    return;
  }
LAB_009d3073:
  FUN_009d6600();
  return;
}


//// FUNCTION FUN_009d3080 @ 009d3080 ////

void * __thiscall
FUN_009d3080(void *this,int param_1,undefined4 param_2,uint param_3,uint *param_4,char param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7e9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d2aa0((undefined4 *)((int)this + 0x30));
  local_4 = 0;
  FUN_009d2e50(this,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009d30f0 @ 009d30f0 ////

void * __cdecl FUN_009d30f0(int param_1,int param_2,uint param_3,uint *param_4,char param_5)

{
  int iVar1;
  undefined4 *_Memory;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7ebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x78) == 0) {
    ExceptionList = &local_c;
    FUN_0097e2b0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  pvVar2 = operator_new(0x270);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = FUN_009d3080(pvVar2,param_1,(uint)(param_2 == 1),param_3,param_4,param_5);
  }
  _Memory = *(undefined4 **)(iVar1 + 0x178);
  local_4 = 0xffffffff;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00a31550(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00a01190(iVar1);
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 8;
  *(uint *)((int)pvVar2 + 0x10) =
       *(uint *)((int)pvVar2 + 0x10) ^
       ((uint)DAT_0105eaac << 7 ^ *(uint *)((int)pvVar2 + 0x10)) & 0x80;
  ExceptionList = local_c;
  return pvVar2;
}


//// FUNCTION FUN_009d32e0 @ 009d32e0 ////

char __cdecl FUN_009d32e0(uint *param_1)

{
  uint *_Str1;
  int iVar1;
  
  _Str1 = FUN_00acecd0(param_1,'.');
  if (_Str1 == (uint *)0x0) {
    return '\0';
  }
  iVar1 = __stricmp((char *)_Str1,".dds");
  if (iVar1 != 0) {
    iVar1 = __stricmp((char *)_Str1,".msh");
    if (iVar1 != 0) {
      iVar1 = __stricmp((char *)_Str1,".anm");
      return '\x01' - (iVar1 != 0);
    }
  }
  return '\x01';
}


//// FUNCTION FUN_009d3340 @ 009d3340 ////

void __cdecl FUN_009d3340(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_1 != (char *)0x0) && ((param_2 != (char *)0x0 || (param_3 != (char *)0x0)))) {
    pcVar5 = (char *)0x0;
    cVar2 = *param_1;
    pcVar3 = param_1;
    while (cVar2 != '\0') {
      if (cVar2 == '/') {
        pcVar3 = param_1 + 1;
      }
      else if (cVar2 == '\\') {
        pcVar3 = param_1 + 1;
      }
      else if (cVar2 == '.') {
        pcVar5 = param_1;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
    if (param_2 != (char *)0x0) {
      cVar2 = *pcVar3;
      for (iVar4 = 0; ((cVar2 != '\0' && (pcVar3 != pcVar5)) && (iVar4 < 0xfe)); iVar4 = iVar4 + 1)
      {
        *param_2 = *pcVar3;
        cVar2 = pcVar3[1];
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 1;
      }
      *param_2 = '\0';
    }
    if (param_3 != (char *)0x0) {
      for (iVar4 = 0; ((pcVar5 != (char *)0x0 && (*pcVar5 != '\0')) && (iVar4 < 0xfe));
          iVar4 = iVar4 + 1) {
        *param_3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        param_3 = param_3 + 1;
      }
      *param_3 = '\0';
    }
  }
  return;
}


//// FUNCTION FUN_009d34c0 @ 009d34c0 ////

bool __fastcall FUN_009d34c0(int *param_1)

{
  return *param_1 != 0;
}


//// FUNCTION FUN_009d34d0 @ 009d34d0 ////

void __fastcall FUN_009d34d0(undefined4 *param_1)

{
  if ((FILE *)*param_1 != (FILE *)0x0) {
    FUN_00a100d0((FILE *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009d3500 @ 009d3500 ////

bool __thiscall FUN_009d3500(void *this,void *param_1,size_t param_2)

{
  size_t sVar1;
  
  if (*(FILE **)this == (FILE *)0x0) {
    return false;
  }
  sVar1 = FUN_00a100f0(param_1,1,param_2,*(FILE **)this);
  return (bool)('\x01' - (sVar1 != param_2));
}


//// FUNCTION FUN_009d3530 @ 009d3530 ////

bool __thiscall FUN_009d3530(void *this,void *param_1,size_t param_2)

{
  size_t sVar1;
  
  if (*(FILE **)this == (FILE *)0x0) {
    return false;
  }
  sVar1 = FUN_00a10110(param_1,1,param_2,*(FILE **)this);
  return (bool)('\x01' - (sVar1 != param_2));
}


//// FUNCTION FUN_009d3580 @ 009d3580 ////

void __cdecl FUN_009d3580(undefined4 *param_1)

{
  FUN_00a10030((LPCSTR)*param_1);
  return;
}


//// FUNCTION FUN_009d3590 @ 009d3590 ////

void __cdecl FUN_009d3590(undefined4 *param_1)

{
  FUN_00a10260((LPCWSTR)*param_1);
  return;
}


//// FUNCTION FUN_009d35a0 @ 009d35a0 ////

int __cdecl FUN_009d35a0(undefined4 *param_1)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  LPCSTR local_20 [2];
  uint local_18;
  
  bVar1 = FUN_00a103f0((LPCWSTR)*param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return (uint)extraout_var << 8;
  }
  iVar2 = FUN_00ad3093((LPCWSTR)*param_1,0x80);
  if (iVar2 != 0) {
    FUN_009ad040(local_20,(wchar_t *)*param_1);
    FUN_00ad3052(local_20[0],0x80);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  uVar3 = FUN_00a10260((LPCWSTR)*param_1);
  return uVar3;
}


//// FUNCTION FUN_009d3620 @ 009d3620 ////

undefined4 __cdecl FUN_009d3620(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a10220((LPCSTR)*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00ad3052((LPCSTR)*param_1,0x80);
  uVar2 = FUN_00ad30d4((LPCSTR)*param_1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_009d3660 @ 009d3660 ////

undefined4 __cdecl FUN_009d3660(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00a10220((LPCSTR)*param_1);
  if (uVar1 != 0) {
    if (param_2 != (uint *)0x0) {
      uVar1 = FUN_00a101b0((uchar *)*param_1);
      *param_2 = uVar1;
    }
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  if (DAT_010b9351 != '\0') {
    uVar1 = FUN_00a10810((char *)*param_1);
    if (uVar1 != 0) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar1;
      }
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  return (uint)param_2 & 0xffffff00;
}


//// FUNCTION FUN_009d36d0 @ 009d36d0 ////

undefined4 __cdecl FUN_009d36d0(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_00a103f0((LPCWSTR)*param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (uVar2 != 0) {
    if (param_2 != (uint *)0x0) {
      uVar2 = FUN_00a10380((wchar_t *)*param_1);
      *param_2 = uVar2;
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  return (uint)param_2 & 0xffffff00;
}


//// FUNCTION FUN_009d3720 @ 009d3720 ////

uint __cdecl FUN_009d3720(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00a101b0((uchar *)*param_1);
  if (uVar1 == 0) {
    if ((DAT_010b9351 != '\0') && (uVar1 = FUN_00a10810((char *)*param_1), uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_009d3750 @ 009d3750 ////

void __fastcall FUN_009d3750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf7efb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((FILE *)*param_1 != (FILE *)0x0) {
    ExceptionList = &local_c;
    FUN_00a100d0((FILE *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009d37c0 @ 009d37c0 ////

HANDLE __cdecl FUN_009d37c0(undefined4 *param_1)

{
  HANDLE pvVar1;
  LPCSTR local_20 [2];
  uint local_18;
  
  pvVar1 = CreateFileW((LPCWSTR)*param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0)
  ;
  if ((pvVar1 == (HANDLE)0xffffffff) || (pvVar1 == (HANDLE)0x0)) {
    FUN_009ad040(local_20,(wchar_t *)*param_1);
    pvVar1 = CreateFileA(local_20[0],0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return pvVar1;
}


//// FUNCTION FUN_009d3840 @ 009d3840 ////

uint __cdecl FUN_009d3840(undefined4 *param_1,DWORD *param_2)

{
  HANDLE hFile;
  WINBOOL WVar1;
  _FILETIME local_30;
  _FILETIME local_28;
  _FILETIME local_20;
  _FILETIME local_18;
  _SYSTEMTIME local_10;
  
  hFile = FUN_009d37c0(param_1);
  if (hFile != (HANDLE)0xffffffff) {
    WVar1 = GetFileTime(hFile,&local_18,&local_20,&local_30);
    if (((WVar1 != 0) && (WVar1 = FileTimeToLocalFileTime(&local_30,&local_28), WVar1 != 0)) &&
       (WVar1 = FileTimeToSystemTime(&local_28,&local_10), WVar1 != 0)) {
      *param_2 = local_30.dwLowDateTime;
      param_2[1] = local_30.dwHighDateTime;
      WVar1 = CloseHandle(hFile);
      return CONCAT31((int3)((uint)WVar1 >> 8),1);
    }
    hFile = (HANDLE)CloseHandle(hFile);
  }
  return (uint)hFile & 0xffffff00;
}


//// FUNCTION FUN_009d38d0 @ 009d38d0 ////

undefined4 __cdecl FUN_009d38d0(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00a10220((LPCSTR)*param_1);
  if (iVar1 != 0) {
    return 4;
  }
  if (DAT_010b9351 != '\0') {
    puVar2 = FUN_00a105b0((char *)*param_1);
    iVar1 = FUN_00a106c0((int)puVar2);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x24);
    }
  }
  return 0;
}


//// FUNCTION FUN_009d3920 @ 009d3920 ////

undefined4 * __cdecl
FUN_009d3920(undefined4 *param_1,LPCSTR param_2,undefined4 param_3,uint param_4)

{
  BYTE BVar1;
  LONG LVar2;
  BYTE *pBVar3;
  uint _Count;
  HKEY hKey;
  char *lpSubKey;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  HKEY local_22c;
  DWORD local_228;
  char *local_224;
  uint local_220;
  uint local_21c;
  char local_218 [20];
  DWORD local_204;
  BYTE local_200 [512];
  
  local_224 = local_218;
  local_228 = 0;
  local_22c = (HKEY)0x0;
  local_218[0] = '\0';
  local_220 = 0;
  local_21c = 0x14;
  _strncpy(local_224,"",0);
  phkResult = &local_22c;
  samDesired = 0x20019;
  ulOptions = 0;
  lpSubKey = "Software\\Lionhead Studios Ltd\\TheMovies";
  local_220 = 0;
  hKey = (HKEY)&fdwControls_80000002;
  *local_224 = '\0';
  LVar2 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  if (LVar2 == 0) {
    local_228 = 0;
    local_204 = 0x200;
    LVar2 = RegQueryValueExA(local_22c,param_2,(LPDWORD)0x0,&local_228,local_200,&local_204);
    if (LVar2 == 0) {
      pBVar3 = local_200;
      do {
        BVar1 = *pBVar3;
        pBVar3 = pBVar3 + 1;
      } while (BVar1 != '\0');
      _Count = (int)pBVar3 - (int)(local_200 + 1);
      if (local_21c <= _Count) {
        if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
          _free(local_224);
        }
        local_21c = _Count + 0x20 & 0xffffffe0;
        local_224 = _malloc(local_21c);
      }
      _strncpy(local_224,(char *)local_200,_Count);
      local_224[_Count] = '\0';
      local_220 = _Count;
    }
    RegCloseKey(local_22c);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_224,local_220);
  if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
    _free(local_224);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  return param_1;
}


//// FUNCTION FUN_009d3a90 @ 009d3a90 ////

undefined4 * __cdecl FUN_009d3a90(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_104 [260];
  
  __splitpath(param_2,(char *)0x0,(char *)0x0,local_104,(char *)0x0);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  pcVar2 = local_104;
  param_1[1] = 0;
  param_1[2] = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,local_104,(int)pcVar2 - (int)(local_104 + 1));
  return param_1;
}


//// FUNCTION FUN_009d3b00 @ 009d3b00 ////

undefined4 * __fastcall FUN_009d3b00(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1 + 5;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0x14;
  FUN_004015d0(param_1 + 2,"",0);
  return param_1;
}


//// FUNCTION FUN_009d3b30 @ 009d3b30 ////

undefined4 * __thiscall FUN_009d3b30(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_009d3b70 @ 009d3b70 ////

void __thiscall FUN_009d3b70(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 8),(char *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_009d3b90 @ 009d3b90 ////

bool __thiscall FUN_009d3b90(void *this,undefined4 *param_1,int param_2)

{
  FILE *pFVar1;
  long lVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d3a90(local_2c,(char *)*param_1);
  local_4 = 0;
  if (*(FILE **)this != (FILE *)0x0) {
    FUN_00a100d0(*(FILE **)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 == 0) {
    pFVar1 = FUN_00a10060((char *)*param_1,"r");
    *(FILE **)this = pFVar1;
    if (pFVar1 == (FILE *)0x0) goto LAB_009d3c46;
    lVar2 = FUN_00a10170(pFVar1);
    *(long *)((int)this + 4) = lVar2;
  }
  else if (param_2 == 1) {
    pFVar1 = FUN_00a10060((char *)*param_1,"a");
    *(FILE **)this = pFVar1;
  }
  else {
    if (param_2 != 2) goto LAB_009d3c46;
    pFVar1 = FUN_00a10060((char *)*param_1,"w");
    *(FILE **)this = pFVar1;
  }
  if (*(int *)this != 0) {
    FUN_004015d0((void *)((int)this + 8),(char *)*param_1,param_1[1]);
  }
LAB_009d3c46:
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return *(int *)this != 0;
}


//// FUNCTION FUN_009d3c80 @ 009d3c80 ////

bool __thiscall FUN_009d3c80(void *this,int param_1)

{
  bool bVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return false;
  }
  bVar1 = FUN_009d3b90(this,(undefined4 *)((int)this + 8),param_1);
  return bVar1;
}


//// FUNCTION FUN_009d3ca0 @ 009d3ca0 ////

size_t __cdecl
FUN_009d3ca0(undefined4 *param_1,undefined4 *param_2,size_t param_3,undefined1 *param_4)

{
  bool bVar1;
  char cVar2;
  FILE *local_34;
  size_t local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7f38;
  local_c = ExceptionList;
  local_2c = local_20;
  local_34 = (FILE *)0x0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,"",0);
  local_4 = 0;
  bVar1 = FUN_009d3b90(&local_34,param_1,0);
  if (bVar1) {
    if ((int)local_30 < (int)param_3) {
      param_3 = local_30;
    }
    if (local_34 != (FILE *)0x0) {
      FUN_00a100f0(param_2,1,param_3,local_34);
      if (local_34 != (FILE *)0x0) {
        FUN_00a100d0(local_34);
      }
    }
    local_34 = (FILE *)0x0;
    local_30 = 0;
    cVar2 = FUN_009d32e0((uint *)*param_1);
    if (cVar2 != '\0') {
      DAT_0105eae0 = 1;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
LAB_009d3d68:
    local_4 = 0xffffffff;
    FUN_009d3750(&local_34);
    ExceptionList = local_c;
    return param_3;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (DAT_010b9351 != '\0') {
    param_3 = FUN_00a10c30((char *)*param_1,param_2,param_3);
    if (param_3 != 0) goto LAB_009d3d68;
  }
  local_4 = 0xffffffff;
  FUN_009d3750(&local_34);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_009d3de0 @ 009d3de0 ////

undefined4 __cdecl FUN_009d3de0(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  uint *puVar11;
  bool bVar12;
  LPCSTR pCVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined1 local_328 [8];
  uint local_320;
  uint *local_31c;
  char *local_318;
  int local_314;
  uint local_310;
  uint local_2f8;
  int local_2f4;
  void *local_2f0;
  int local_2ec;
  uint local_2e8;
  int local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  char *local_2c0;
  undefined4 local_2bc;
  uint local_2b8;
  char local_2b4 [20];
  int local_2a0 [4];
  int local_290 [4];
  uint local_280 [21];
  char cStack_229;
  char local_228;
  undefined4 local_227;
  undefined4 local_120;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf7f7c;
  local_14 = ExceptionList;
  local_2c0 = local_2b4;
  local_2b4[0] = '\0';
  local_2bc = 0;
  local_2b8 = 0x40;
  ExceptionList = &local_14;
  local_2c0 = _malloc(0x40);
  _strncpy(local_2c0,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_2bc = 0x27;
  local_2c0[0x27] = '\0';
  local_c = 0;
  FUN_00a05ff0(local_328,&local_2c0,1);
  if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c0);
  }
  pCVar13 = &stack0xfffffcac;
  uVar14 = 0;
  uVar15 = 0x14;
  FUN_004015d0(&stack0xfffffca0,"UserAccountName",0xf);
  FUN_009d3920(&local_2f0,pCVar13,uVar14,uVar15);
  pCVar13 = &stack0xfffffcac;
  uVar14 = 0;
  uVar15 = 0x14;
  FUN_004015d0(&stack0xfffffca0,"CDKey",5);
  FUN_009d3920(&local_318,pCVar13,uVar14,uVar15);
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_0048ad50((int *)&local_318);
  FUN_0048ad50((int *)&local_2f0);
  if ((local_314 == 0) || (local_2ec == 0)) {
    if (0x14 < local_310) {
                    /* WARNING: Subroutine does not return */
      _free(local_318);
    }
  }
  else {
    local_228 = '\x11';
    puVar3 = &local_227;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    for (; local_314 != 0; local_314 = local_314 + -1) {
    }
    _sprintf(&local_228,"%ld%ld");
    pcVar2 = local_318;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar9 = &cStack_229;
    do {
      pcVar7 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_318;
    for (uVar15 = (uint)((int)pcVar2 - (int)local_318) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar15 = (int)pcVar2 - (int)local_318 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar4 = 0;
    do {
      pcVar2 = &local_228 + iVar4;
      *(char *)((int)&local_120 + iVar4) = *pcVar2;
      iVar4 = iVar4 + 1;
    } while (*pcVar2 != '\0');
    local_2cc = 0;
    local_2c8 = 0;
    local_2c4 = 0;
    local_2f4 = 4;
    local_2d0 = 0;
    if (DAT_0105eae6 == '\0') {
      pcVar2 = &local_228;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_009687c0(&local_228,(int)pcVar2 - (int)&local_227,&local_2d0,'\x02');
    }
    *param_2 = 0;
    uVar15 = FUN_00a101b0((uchar *)*param_1);
    if ((uVar15 == 0) &&
       ((DAT_010b9351 == '\0' || (uVar15 = FUN_00a10810((char *)*param_1), uVar15 == 0)))) {
      if (0x14 < local_310) {
                    /* WARNING: Subroutine does not return */
        _free(local_318);
      }
    }
    else {
      puVar3 = operator_new(uVar15);
      uVar5 = uVar15;
      if (param_3 == '\x01') {
        uVar5 = uVar15 + 1;
      }
      local_31c = operator_new(uVar5);
      pcVar2 = (char *)&local_120;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar5 = (uint)((int)pcVar2 - ((int)&local_120 + 1)) % 0x11;
      if (uVar5 * 0x39c - uVar15 == 0 || (int)(uVar5 * 0x39c) < (int)uVar15) {
        FUN_009d3ca0(param_1,puVar3,uVar15,(undefined1 *)0x0);
        piVar6 = puVar3 + uVar5 * 0xe7;
        local_2a0[0] = *piVar6;
        local_2a0[1] = piVar6[1];
        local_2a0[2] = piVar6[2];
        local_2a0[3] = piVar6[3];
        iVar4 = uVar15 + uVar5 * -0x39c;
        local_320 = iVar4 - 0x10;
        FUN_00a24780(local_280);
        local_2f8 = iVar4 - 0x14;
        FUN_00a247b0(local_280,(uint *)(piVar6 + 5),local_2f8);
        pcVar2 = "styles.ini";
        do {
          pcVar9 = pcVar2;
          pcVar2 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        FUN_00a247b0(local_280,(uint *)"styles.ini",(uint)(pcVar9 + -0xd73454));
        pcVar2 = (char *)&local_120;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_00a247b0(local_280,&local_120,(int)pcVar2 - ((int)&local_120 + 1));
        FUN_00a24880(local_280,(int)local_290);
        iVar4 = 4;
        bVar12 = true;
        piVar8 = local_290;
        piVar10 = local_2a0;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar12 = *piVar8 == *piVar10;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (bVar12);
        if (!bVar12) {
                    /* WARNING: Subroutine does not return */
          _free(puVar3);
        }
        puVar11 = local_31c;
        for (uVar15 = local_320 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        for (uVar15 = local_320 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined1 *)puVar11 = 0;
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        if (piVar6[4] <= (int)(local_320 + 0x10)) {
          pcVar2 = (char *)&local_120;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          FUN_00968800((uint *)(piVar6 + 5),local_2f8,local_31c,(int)&local_228,&local_2f4,
                       (int)pcVar2 - ((int)&local_120 + 1),&local_2d0,'\x01');
                    /* WARNING: Subroutine does not return */
          _free(puVar3);
        }
                    /* WARNING: Subroutine does not return */
        _free(puVar3);
      }
      *param_2 = 0;
      if (0x14 < local_310) {
                    /* WARNING: Subroutine does not return */
        _free(local_318);
      }
    }
  }
  if (0x14 < local_2e8) {
                    /* WARNING: Subroutine does not return */
    _free(local_2f0);
  }
  local_c = 0xffffffff;
  FUN_00a05fe0((int)local_328);
  ExceptionList = local_14;
  return 0;
}


//// FUNCTION FUN_009d4370 @ 009d4370 ////

undefined4 __cdecl FUN_009d4370(undefined4 *param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  void *local_54 [2];
  uint local_4c;
  FILE *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7fa0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_34 = (FILE *)0x0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,"",0);
  local_4 = 0;
  FUN_009d3a90(local_54,(char *)*param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_34 != (FILE *)0x0) {
    FUN_00a100d0(local_34);
  }
  local_34 = (FILE *)0x0;
  local_30 = 0;
  local_34 = FUN_00a10060((char *)*param_1,"w");
  bVar3 = local_34 == (FILE *)0x0;
  if (!bVar3) {
    FUN_004015d0(&local_2c,(char *)*param_1,param_1[1]);
    bVar3 = local_34 == (FILE *)0x0;
  }
  local_4 = local_4 & 0xffffff00;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  if (!bVar3) {
    if (local_34 != (FILE *)0x0) {
      FUN_00a10110(param_2,1,param_3,local_34);
      if (local_34 != (FILE *)0x0) {
        FUN_00a100d0(local_34);
      }
    }
    local_34 = (FILE *)0x0;
    local_30 = 0;
    local_4 = 0xffffffff;
    uVar1 = FUN_009d3750(&local_34);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_009d3750(&local_34);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009d44d0 @ 009d44d0 ////

bool __cdecl FUN_009d44d0(undefined4 *param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  uint uVar5;
  wchar_t local_54 [4];
  undefined4 uStack_4c;
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7fb8;
  local_c = ExceptionList;
  pwVar3 = local_54;
  local_54[0] = L'\0';
  uVar4 = 0;
  uVar5 = 10;
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xffffffa0,(wchar_t *)&lpCaption_00d16918,uVar2);
  FUN_009f3dd0(local_34,pwVar3,uVar4,uVar5);
  pwVar3 = (wchar_t *)&stack0xffffffa8;
  uVar2 = 0;
  uVar4 = 10;
  local_4 = 0;
  FUN_004036d0(&stack0xffffff9c,(wchar_t *)*param_1,param_1[1]);
  bVar1 = FUN_009f3e50(local_34,pwVar3,uVar2,uVar4);
  if (bVar1) {
    uStack_4c = 0x9d457b;
    bVar1 = FUN_009f3d10(local_34,param_2,param_3);
    FUN_009f3cb0(local_34);
    local_4 = 0xffffffff;
    FUN_009f3d60(local_34);
    ExceptionList = local_c;
    return bVar1;
  }
  local_4 = 0xffffffff;
  FUN_009f3d60(local_34);
  ExceptionList = local_c;
  return false;
}


//// FUNCTION FUN_009d45d0 @ 009d45d0 ////

undefined4 * __cdecl FUN_009d45d0(undefined4 *param_1,wchar_t *param_2)

{
  uint uVar1;
  wchar_t local_208 [260];
  
  __wsplitpath(param_2,(wchar_t *)0x0,(wchar_t *)0x0,local_208,(wchar_t *)0x0);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar1 = FUN_00ace02d(local_208);
  FUN_004036d0(param_1,local_208,uVar1);
  return param_1;
}


//// FUNCTION FUN_009d4640 @ 009d4640 ////

bool __thiscall FUN_009d4640(void *this,undefined4 *param_1,int param_2)

{
  FILE *pFVar1;
  long lVar2;
  undefined4 *puVar3;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d45d0(local_2c,(wchar_t *)*param_1);
  local_4 = 0;
  if (*(FILE **)this != (FILE *)0x0) {
    FUN_00a100d0(*(FILE **)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 == 0) {
    pFVar1 = FUN_00a102d0((wchar_t *)*param_1,"r");
    *(FILE **)this = pFVar1;
    if (pFVar1 == (FILE *)0x0) goto LAB_009d4718;
    lVar2 = FUN_00a10170(pFVar1);
    *(long *)((int)this + 4) = lVar2;
  }
  else if (param_2 == 1) {
    pFVar1 = FUN_00a102d0((wchar_t *)*param_1,"a");
    *(FILE **)this = pFVar1;
  }
  else {
    if (param_2 != 2) goto LAB_009d4718;
    pFVar1 = FUN_00a102d0((wchar_t *)*param_1,"w");
    *(FILE **)this = pFVar1;
  }
  if (*(int *)this != 0) {
    puVar3 = FUN_009b8c30(local_4c,param_1);
    FUN_004015d0((void *)((int)this + 8),(char *)*puVar3,puVar3[1]);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
LAB_009d4718:
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return *(int *)this != 0;
}


//// FUNCTION FUN_009d4750 @ 009d4750 ////

undefined4 __cdecl FUN_009d4750(void *param_1)

{
  char cVar1;
  uint uVar2;
  UINT UVar3;
  undefined4 *puVar4;
  void *this;
  undefined4 uVar5;
  char *pcVar6;
  char *local_23c;
  uint local_238;
  uint local_234;
  char local_230 [20];
  CHAR local_21c [264];
  CHAR local_114 [264];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf7ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = GetTempPathA(0x104,local_114);
  if ((uVar2 != 0) && (uVar2 < 0x105)) {
    UVar3 = GetTempFileNameA(local_114,(LPCSTR)&lpPrefixString_00d73470,0,local_21c);
    uVar2 = 0;
    if (UVar3 != 0) {
      local_23c = local_230;
      pcVar6 = local_21c;
      local_230[0] = '\0';
      local_238 = 0;
      local_234 = 0x14;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar2 = (int)pcVar6 - (int)(local_21c + 1);
      if (0x13 < uVar2) {
        local_234 = uVar2 + 0x20 & 0xffffffe0;
        local_23c = _malloc(local_234);
      }
      _strncpy(local_23c,local_21c,uVar2);
      local_23c[uVar2] = '\0';
      local_4 = 0;
      local_238 = uVar2;
      FUN_00a10030(local_23c);
      if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
        _free(local_23c);
      }
      pcVar6 = local_21c;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(param_1,local_21c,(int)pcVar6 - (int)(local_21c + 1));
      puVar4 = FUN_00430770(param_1,&local_23c,0,*(int *)((int)param_1 + 4) - 4);
      FUN_004015d0(param_1,(char *)*puVar4,puVar4[1]);
      if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
        _free(local_23c);
      }
      this = FUN_004701b0(param_1,(uint)DAT_0105eae4);
      uVar5 = FUN_004073f0(this,".tmp",4);
      DAT_0105eae4 = DAT_0105eae4 + 1;
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009d4900 @ 009d4900 ////

uint __cdecl FUN_009d4900(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *local_6c;
  undefined4 local_68;
  uint local_64;
  wchar_t local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8020;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00a10380((wchar_t *)*param_1);
  if (uVar1 == 0) {
    if ((DAT_010b9351 != '\0') && (4 < (uint)param_1[1])) {
      FUN_00421290(local_4c,param_1);
      local_4 = 0;
      FUN_0055d180((int *)local_4c);
      local_6c = local_60;
      local_60[0] = L'\0';
      local_68 = 0;
      local_64 = 10;
      uVar1 = FUN_00ace02d(L"data");
      FUN_004036d0(&local_6c,L"data",uVar1);
      puVar2 = FUN_004211c0(local_4c,local_2c,0,4);
      iVar3 = _wcscmp((wchar_t *)*puVar2,local_6c);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (iVar3 == 0) {
        FUN_009b8c30(&local_6c,local_4c);
        local_4 = CONCAT31(local_4._1_3_,1);
        uVar1 = FUN_00a10810((char *)local_6c);
        if (uVar1 != 0) {
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          ExceptionList = local_c;
          return uVar1;
        }
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    uVar1 = 0;
  }
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_009d4aa0 @ 009d4aa0 ////

size_t __cdecl
FUN_009d4aa0(undefined4 *param_1,undefined4 *param_2,size_t param_3,undefined1 *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  wchar_t *local_94;
  undefined4 local_90;
  uint local_8c;
  wchar_t local_88 [10];
  void *local_74 [2];
  uint local_6c;
  undefined4 local_54 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf804b;
  local_c = ExceptionList;
  pwVar7 = (wchar_t *)&stack0xffffff40;
  uVar8 = 0;
  uVar9 = 10;
  ExceptionList = &local_c;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xffffff34,(wchar_t *)&lpCaption_00d16918,uVar3);
  FUN_009f3dd0(local_54,pwVar7,uVar8,uVar9);
  pwVar7 = (wchar_t *)&stack0xffffff3c;
  uVar3 = 0;
  uVar8 = 10;
  local_4 = 0;
  FUN_004036d0(&stack0xffffff30,(wchar_t *)*param_1,param_1[1]);
  bVar1 = FUN_009f3e50(local_54,pwVar7,uVar3,uVar8);
  if (bVar1) {
    iVar4 = FUN_009f3d40((int)local_54);
    if (iVar4 < (int)param_3) {
      param_3 = FUN_009f3d40((int)local_54);
    }
    FUN_009f3ce0(local_54,param_2,param_3);
    FUN_009f3cb0(local_54);
    puVar5 = FUN_009ac940(local_74,param_1);
    cVar2 = FUN_009d32e0((uint *)*puVar5);
    if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74[0]);
    }
    if (cVar2 != '\0') {
      DAT_0105eae0 = 1;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    local_4 = 0xffffffff;
    FUN_009f3d60(local_54);
  }
  else {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    if ((DAT_010b9351 != '\0') && (4 < (uint)param_1[1])) {
      FUN_00421290(local_74,param_1);
      local_4._0_1_ = 1;
      FUN_0055d180((int *)local_74);
      local_94 = local_88;
      local_88[0] = L'\0';
      local_90 = 0;
      local_8c = 10;
      uVar3 = FUN_00ace02d(L"data");
      FUN_004036d0(&local_94,L"data",uVar3);
      puVar5 = FUN_004211c0(local_74,local_2c,0,4);
      iVar4 = _wcscmp((wchar_t *)*puVar5,local_94);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (10 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      if (iVar4 == 0) {
        FUN_009b8c30(&local_94,local_74);
        local_4._0_1_ = 2;
        sVar6 = FUN_00a10c30((char *)local_94,param_2,param_3);
        if (sVar6 != 0) {
          if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
            _free(local_94);
          }
          if (local_6c < 0xb) {
            local_4 = 0xffffffff;
            FUN_009f3d60(local_54);
            ExceptionList = local_c;
            return sVar6;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_74[0]);
        }
        if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
      }
      if (10 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74[0]);
      }
    }
    local_4 = 0xffffffff;
    FUN_009f3d60(local_54);
    param_3 = 0;
  }
  ExceptionList = local_c;
  return param_3;
}


//// FUNCTION FUN_009d4d90 @ 009d4d90 ////

uint __cdecl FUN_009d4d90(undefined4 *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *local_334;
  undefined4 local_330;
  uint local_32c;
  char local_328 [20];
  void *local_314;
  uint local_310;
  char *local_30c;
  undefined4 local_308;
  uint local_304;
  char local_300 [20];
  undefined1 local_2ec [8];
  int local_2e4 [6];
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  char *local_2c0;
  int local_2bc;
  uint local_2b8;
  void *local_2a0;
  int local_29c;
  uint local_298;
  uint local_280 [21];
  char acStack_229 [2];
  undefined4 local_227;
  undefined4 local_120;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf80b8;
  local_14 = ExceptionList;
  local_334 = local_328;
  local_328[0] = '\0';
  local_330 = 0;
  local_32c = 0x40;
  ExceptionList = &local_14;
  local_334 = _malloc(0x40);
  _strncpy(local_334,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_330 = 0x27;
  local_334[0x27] = '\0';
  local_c = 0;
  FUN_00a05ff0(local_2ec,&local_334,1);
  if (0x14 < local_32c) {
                    /* WARNING: Subroutine does not return */
    _free(local_334);
  }
  local_30c = local_300;
  local_300[0] = '\0';
  local_308 = 0;
  local_304 = 0x14;
  _strncpy(local_30c,"",0);
  local_308 = 0;
  *local_30c = '\0';
  local_334 = local_328;
  local_328[0] = '\0';
  local_330 = 0;
  local_32c = 0x14;
  _strncpy(local_334,"UserAccountName",0xf);
  local_330 = 0xf;
  local_334[0xf] = '\0';
  local_c._0_1_ = 4;
  FUN_00a06260(local_2ec,&local_2a0,&local_334,&local_30c);
  if (0x14 < local_32c) {
                    /* WARNING: Subroutine does not return */
    _free(local_334);
  }
  if (0x14 < local_304) {
                    /* WARNING: Subroutine does not return */
    _free(local_30c);
  }
  local_334 = local_328;
  local_328[0] = '\0';
  local_330 = 0;
  local_32c = 0x14;
  _strncpy(local_334,"",0);
  local_330 = 0;
  *local_334 = '\0';
  local_30c = local_300;
  local_300[0] = '\0';
  local_308 = 0;
  local_304 = 0x14;
  _strncpy(local_30c,"CDKey",5);
  local_308 = 5;
  local_30c[5] = '\0';
  local_c._0_1_ = 9;
  FUN_00a06260(local_2ec,&local_2c0,&local_30c,&local_334);
  if (local_304 < 0x15) {
    local_c = CONCAT31(local_c._1_3_,0xb);
    if (0x14 < local_32c) {
                    /* WARNING: Subroutine does not return */
      _free(local_334);
    }
    FUN_0048ad50((int *)&local_2c0);
    FUN_0048ad50((int *)&local_2a0);
    acStack_229[1] = 0x11;
    puVar11 = &local_227;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    iVar4 = 0;
    if (local_2bc != 0) {
      pcVar5 = local_2c0;
      do {
        cVar1 = *pcVar5;
        if ((cVar1 < 'i') || ('z' < cVar1)) {
          if (('0' < cVar1) && (cVar1 < '9')) {
            iVar4 = iVar4 - cVar1;
          }
        }
        else {
          iVar4 = iVar4 + (int)(pcVar5 + (1 - (int)local_2c0)) * (int)cVar1;
        }
        pcVar5 = pcVar5 + 1;
        local_2bc = local_2bc + -1;
      } while (local_2bc != 0);
    }
    iVar8 = 0;
    _sprintf(acStack_229 + 1,"%ld%ld",iVar4,local_29c + 0xac);
    pcVar5 = local_2c0;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar12 = acStack_229;
    do {
      pcVar10 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = local_2c0;
    for (uVar6 = (uint)((int)pcVar5 - (int)local_2c0) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = (int)pcVar5 - (int)local_2c0 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    iVar4 = 0;
    do {
      cVar1 = acStack_229[iVar4 + 1];
      *(char *)((int)&local_120 + iVar4) = cVar1;
      iVar4 = iVar4 + 1;
    } while (cVar1 != '\0');
    local_2e4[2] = 0;
    local_2e4[3] = 0;
    local_2e4[4] = 0;
    local_2e4[0] = 4;
    local_2e4[1] = 0;
    if (DAT_0105eae7 == '\0') {
      pcVar5 = acStack_229 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_009687c0(acStack_229 + 1,(int)pcVar5 - (int)&local_227,local_2e4 + 1,'\x02');
    }
    pcVar5 = (char *)&local_120;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = (uint)((int)pcVar5 - ((int)&local_120 + 1)) % 0x11;
    iVar4 = uVar7 * 0x39c;
    local_310 = iVar4 + 0x1c + param_3;
    local_314 = operator_new(local_310);
    uVar6 = param_3;
    if (iVar4 != 0) {
      do {
        uVar6 = uVar6 * 0x19660d + 0x3c6ef35f;
        iVar9 = iVar8 + 1;
        *(char *)(iVar8 + (int)local_314) = (char)((ulonglong)uVar6 % 0xff);
        iVar8 = iVar9;
      } while (iVar9 < iVar4);
    }
    pcVar5 = (char *)&local_120;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    puVar11 = (undefined4 *)((int)local_314 + iVar4);
    FUN_00968800(param_2,param_3,puVar11 + 5,(int)(acStack_229 + 1),local_2e4,
                 (int)pcVar5 - ((int)&local_120 + 1),local_2e4 + 1,'\0');
    iVar4 = local_310 + uVar7 * -0x39c;
    FUN_00a24780(local_280);
    FUN_00a247b0(local_280,puVar11 + 5,iVar4 - 0x14);
    pcVar5 = "styles.ini";
    do {
      pcVar12 = pcVar5;
      pcVar5 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    FUN_00a247b0(local_280,(uint *)"styles.ini",(uint)(pcVar12 + -0xd73454));
    pcVar5 = (char *)&local_120;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00a247b0(local_280,&local_120,(int)pcVar5 - ((int)&local_120 + 1));
    FUN_00a24880(local_280,(int)(local_2e4 + 5));
    *puVar11 = local_2e4[5];
    puVar11[1] = local_2cc;
    puVar11[2] = local_2c8;
    puVar11[3] = local_2c4;
    puVar11[4] = param_3;
    uVar2 = FUN_009d4370(param_1,local_314,local_310);
    if (local_2b8 < 0x15) {
      if (local_298 < 0x15) {
        local_c = 0xffffffff;
        uVar3 = FUN_00a05fe0((int)local_2ec);
        ExceptionList = local_14;
        return CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar2);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2a0);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_30c);
}


//// FUNCTION FUN_009d5330 @ 009d5330 ////

void __fastcall FUN_009d5330(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    FUN_00a509f0(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_009d5350 @ 009d5350 ////

void __fastcall FUN_009d5350(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009d5370 @ 009d5370 ////

void __thiscall FUN_009d5370(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)this) {
    do {
      *(uint *)(*(int *)((int)this + 4) + iVar1 * 8) =
           (uint)*(ushort *)(param_1 + *(int *)(*(int *)((int)this + 4) + iVar1 * 8) * 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)this);
  }
  return;
}


//// FUNCTION FUN_009d53c0 @ 009d53c0 ////

void __fastcall FUN_009d53c0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009d54c0 @ 009d54c0 ////

void __thiscall FUN_009d54c0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_8;
  
  if (*(void **)((int)this + 0x34) != (void *)0x0) {
    FUN_009d5370(*(void **)((int)this + 0x34),param_1);
  }
  if (*(int *)((int)this + 0x2c) == 0) goto LAB_009d5707;
  puVar5 = *(uint **)(*(int *)((int)this + 0x28) + 0x24);
  if ((puVar5 != (uint *)0x0) && ((puVar5[6] & 1) == 0)) {
    pvVar2 = (void *)FUN_00a50e20(puVar5);
    *(uint *)((int)pvVar2 + 0x18) = *(uint *)((int)pvVar2 + 0x18) | 1;
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      iVar7 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)this + iVar7);
        puVar9 = (undefined4 *)
                 (*(int *)((int)pvVar2 + 0x14) + (uint)*(ushort *)(param_1 + iVar3 * 2) * 0x14);
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        puVar9[3] = puVar8[3];
        puVar9[4] = puVar8[4];
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar3 < *(int *)((int)this + 0x2c));
    }
    FUN_00a50730((int)pvVar2);
    pvVar4 = (void *)FUN_00a50e80(*(int *)((int)pvVar2 + 0xc),*(int *)((int)pvVar2 + 0x10));
    if (pvVar4 == (void *)0x0) {
      *(void **)((int)pvVar2 + 4) = DAT_010bb4e8;
      DAT_010bb4e8 = pvVar2;
    }
    else {
      *(int *)((int)pvVar4 + 8) = *(int *)((int)pvVar4 + 8) + 1;
      FUN_00a50650(pvVar2);
      pvVar2 = pvVar4;
    }
    pvVar4 = *(void **)(*(int *)((int)this + 0x28) + 0x24);
    if (pvVar4 != (void *)0x0) {
      FUN_00a50650(pvVar4);
      *(undefined4 *)(*(int *)((int)this + 0x28) + 0x24) = 0;
    }
    *(void **)(*(int *)((int)this + 0x28) + 0x24) = pvVar2;
    *(undefined4 *)this = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 0x24) + 0x14);
  }
  if ((*(int *)((int)this + 0x2c) == 0) ||
     ((*(byte *)(*(undefined4 **)((int)this + 0x28) + 10) & 2) != 0)) goto LAB_009d5707;
  puVar5 = FUN_00a50f00(*(undefined4 **)((int)this + 0x28));
  puVar5[10] = puVar5[10] | 2;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    local_8 = 0;
    do {
      puVar9 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 0x10) + local_8);
      puVar8 = (undefined4 *)((uint)*(ushort *)(param_1 + iVar3 * 2) * 0x20 + puVar5[4]);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar7 = *(int *)(*(int *)((int)this + 0x28) + 0x14);
      if ((iVar7 != 0) && (uVar1 = puVar5[5], uVar1 != 0)) {
        uVar10 = (uint)*(ushort *)(param_1 + iVar3 * 2);
        *(undefined4 *)(uVar1 + uVar10 * 8) = *(undefined4 *)(iVar7 + iVar3 * 8);
        *(undefined4 *)(uVar1 + 4 + uVar10 * 8) = *(undefined4 *)(iVar7 + 4 + iVar3 * 8);
      }
      iVar7 = *(int *)(*(int *)((int)this + 0x28) + 0x18);
      if ((iVar7 != 0) && (puVar5[6] != 0)) {
        *(undefined1 *)((uint)*(ushort *)(param_1 + iVar3 * 2) + puVar5[6]) =
             *(undefined1 *)(iVar7 + iVar3);
      }
      iVar7 = *(int *)(*(int *)((int)this + 0x28) + 0x1c);
      if ((iVar7 != 0) && (puVar5[7] != 0)) {
        *(undefined2 *)(puVar5[7] + (uint)*(ushort *)(param_1 + iVar3 * 2) * 2) =
             *(undefined2 *)(iVar7 + iVar3 * 2);
      }
      iVar3 = iVar3 + 1;
      local_8 = local_8 + 0x20;
    } while (iVar3 < *(int *)((int)this + 0x2c));
  }
  if (DAT_00e68310 == '\0') {
LAB_009d56c6:
    puVar5[8] = (uint)DAT_010bb4e4;
    DAT_010bb4e4 = puVar5;
  }
  else {
    FUN_00a50750(puVar5);
    puVar6 = (uint *)FUN_00a50ec0(*puVar5,puVar5[1]);
    if (puVar6 == (uint *)0x0) goto LAB_009d56c6;
    puVar6[2] = puVar6[2] + 1;
    FUN_00a511e0(puVar5);
    puVar5 = puVar6;
  }
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    FUN_00a511e0(*(void **)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  *(uint **)((int)this + 0x28) = puVar5;
  *(uint *)((int)this + 0x30) = puVar5[4];
  if (puVar5[9] == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    *(undefined4 *)this = *(undefined4 *)(puVar5[9] + 0x14);
  }
LAB_009d5707:
  local_8 = 0;
  do {
    puVar9 = *(undefined4 **)((int)this + local_8 * 4 + 0xc);
    if (((puVar9 != (undefined4 *)0x0) && (*(int *)((int)this + 0x1c) != 0)) &&
       ((*(byte *)(puVar9 + 3) & 1) == 0)) {
      puVar5 = FUN_00a51010(puVar9);
      puVar5[3] = puVar5[3] | 1;
      if (0 < *(int *)((int)this + 0x1c)) {
        iVar3 = 0;
        iVar7 = 0;
        do {
          *(undefined2 *)(iVar3 + puVar5[5]) =
               *(undefined2 *)(param_1 + (uint)*(ushort *)(*(int *)((int)this + 0x20) + iVar3) * 2);
          *(undefined2 *)(puVar5[5] + 2 + iVar3) =
               *(undefined2 *)
                (param_1 + (uint)*(ushort *)(*(int *)((int)this + 0x20) + 2 + iVar3) * 2);
          *(undefined2 *)(iVar3 + 4 + puVar5[5]) =
               *(undefined2 *)
                (param_1 + (uint)*(ushort *)(*(int *)((int)this + 0x20) + 4 + iVar3) * 2);
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 6;
        } while (iVar7 < *(int *)((int)this + 0x1c));
      }
      FUN_00a50770(puVar5);
      puVar6 = (uint *)FUN_00a50fd0(*puVar5,puVar5[1]);
      if (puVar6 == (uint *)0x0) {
        puVar5[6] = (uint)DAT_010bb4e0;
        DAT_010bb4e0 = puVar5;
      }
      else {
        puVar6[2] = puVar6[2] + 1;
        FUN_00a509f0(puVar5);
        puVar5 = puVar6;
      }
      FUN_00a509f0(puVar9);
      *(uint **)((int)this + local_8 * 4 + 0xc) = puVar5;
      if (local_8 == 0) {
        *(uint *)((int)this + 0x20) = puVar5[5];
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  return;
}


//// FUNCTION FUN_009d5810 @ 009d5810 ////

void __fastcall FUN_009d5810(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + 3;
  iVar2 = 4;
  do {
    if ((void *)*puVar3 != (void *)0x0) {
      FUN_00a509f0((void *)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[8] = 0;
  if ((void *)param_1[10] != (void *)0x0) {
    FUN_00a511e0((void *)param_1[10]);
    param_1[10] = 0;
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1[0xd] + 4));
  }
  pvVar1 = (void *)param_1[9];
  param_1[0xd] = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_009d5330);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  param_1[9] = 0;
  puVar3 = param_1;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0;
  param_1[0x18] = 0x3f800000;
  return;
}


//// FUNCTION FUN_009d58b0 @ 009d58b0 ////

void __fastcall FUN_009d58b0(undefined4 *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  
  DAT_0105eae8 = 1;
  if (param_1[0x12] != 0) {
    FUN_009a1480(&DAT_0105c2e8,param_1 + 6,'\x01');
    DAT_0105eb48 = param_1[0x15];
    DAT_01050c48 = param_1[0x16];
    DAT_0105eaf8 = param_1;
    if ((void *)param_1[0x16] != (void *)0x0) {
      FUN_00981410((void *)param_1[0x16],'\x01');
    }
    LH_DispatchPrimitiveDraw((undefined4 *)param_1[0x12]);
    if ((void *)param_1[0x16] != (void *)0x0) {
      FUN_00981410((void *)param_1[0x16],'\0');
    }
  }
  DAT_0105eaf8 = (undefined4 *)0x0;
  DAT_0105eaf0 = 0;
  DAT_0105eaec = 0;
  DAT_0105eae8 = 0;
  DAT_01050c48 = 0;
  LVar2 = InterlockedDecrement(param_1 + 4);
  uVar1 = DAT_0105b588;
  if (LVar2 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*param_1)(1);
  }
  DAT_0105b588 = uVar1;
  return;
}


//// FUNCTION FUN_009d5960 @ 009d5960 ////

void FUN_009d5960(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  
  puVar1 = DAT_0105eaec;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x14];
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    DAT_0105b588 = uVar3;
    if (LVar4 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*puVar2)(1);
      DAT_0105b588 = uVar3;
    }
  }
  DAT_0105eaf0 = 0;
  DAT_0105eaec = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_009d5a10 @ 009d5a10 ////

int __thiscall FUN_009d5a10(void *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int local_4;
  
  pfVar4 = param_2;
  pfVar3 = param_1;
  pfVar8 = *(float **)((int)this + 0x30);
  iVar7 = 1;
  local_4 = 0;
  param_1 = (float *)SQRT((*pfVar8 - *param_1) * (*pfVar8 - *param_1) +
                          (pfVar8[1] - param_1[1]) * (pfVar8[1] - param_1[1]) +
                          (pfVar8[2] - param_1[2]) * (pfVar8[2] - param_1[2]));
  param_2 = (float *)((pfVar8[6] - *param_2) * (pfVar8[6] - *param_2) +
                     (pfVar8[7] - param_2[1]) * (pfVar8[7] - param_2[1]));
  if (*(int *)((int)this + 0x2c) < 2) {
    return 0;
  }
  pfVar6 = pfVar8 + 0xf;
  do {
    pfVar8 = pfVar8 + 8;
    pfVar1 = (float *)SQRT((*pfVar8 - *pfVar3) * (*pfVar8 - *pfVar3) +
                           (pfVar6[-6] - pfVar3[1]) * (pfVar6[-6] - pfVar3[1]) +
                           (pfVar6[-5] - pfVar3[2]) * (pfVar6[-5] - pfVar3[2]));
    if ((float)param_1 <= (float)pfVar1) {
      pfVar2 = param_2;
      iVar5 = local_4;
      if ((ABS((float)pfVar1 - (float)param_1) < 0.001) &&
         (pfVar2 = (float *)((pfVar6[-1] - *pfVar4) * (pfVar6[-1] - *pfVar4) +
                            (*pfVar6 - pfVar4[1]) * (*pfVar6 - pfVar4[1])), iVar5 = iVar7,
         (float)param_2 <= (float)pfVar2)) goto LAB_009d5adb;
    }
    else {
      param_2 = (float *)((pfVar6[-1] - *pfVar4) * (pfVar6[-1] - *pfVar4) +
                         (*pfVar6 - pfVar4[1]) * (*pfVar6 - pfVar4[1]));
      param_1 = pfVar1;
      local_4 = iVar7;
LAB_009d5adb:
      pfVar2 = param_2;
      iVar5 = local_4;
    }
    local_4 = iVar5;
    param_2 = pfVar2;
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 8;
    if (*(int *)((int)this + 0x2c) <= iVar7) {
      return local_4;
    }
  } while( true );
}


//// FUNCTION FUN_009d5b40 @ 009d5b40 ////

int __thiscall FUN_009d5b40(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  
  pfVar4 = param_1;
  pfVar1 = *(float **)((int)this + 0x30);
  iVar6 = 1;
  iVar5 = 0;
  param_1 = (float *)SQRT((*pfVar1 - *param_1) * (*pfVar1 - *param_1) +
                          (pfVar1[1] - param_1[1]) * (pfVar1[1] - param_1[1]) +
                          (pfVar1[2] - param_1[2]) * (pfVar1[2] - param_1[2]));
  if (1 < *(int *)((int)this + 0x2c)) {
    do {
      fVar2 = pfVar1[8] - *pfVar4;
      pfVar3 = (float *)SQRT(fVar2 * fVar2 +
                             (pfVar1[9] - pfVar4[1]) * (pfVar1[9] - pfVar4[1]) +
                             (pfVar1[10] - pfVar4[2]) * (pfVar1[10] - pfVar4[2]));
      if ((float)pfVar3 < (float)param_1) {
        iVar5 = iVar6;
        param_1 = pfVar3;
      }
      iVar6 = iVar6 + 1;
      pfVar1 = pfVar1 + 8;
    } while (iVar6 < *(int *)((int)this + 0x2c));
  }
  return iVar5;
}


//// FUNCTION FUN_009d5be0 @ 009d5be0 ////

int __thiscall FUN_009d5be0(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_4;
  
  pfVar3 = param_1;
  pfVar5 = *(float **)((int)this + 0x30);
  iVar7 = 1;
  iVar6 = 0;
  local_4 = SQRT((pfVar5[6] - param_1[6]) * (pfVar5[6] - param_1[6]) +
                 (pfVar5[7] - param_1[7]) * (pfVar5[7] - param_1[7]));
  if (1 < *(int *)((int)this + 0x2c)) {
    pfVar4 = pfVar5 + 0xf;
    param_1 = (float *)SQRT((*pfVar5 - *param_1) * (*pfVar5 - *param_1) +
                            (pfVar5[1] - param_1[1]) * (pfVar5[1] - param_1[1]) +
                            (pfVar5[2] - param_1[2]) * (pfVar5[2] - param_1[2]));
    do {
      pfVar5 = pfVar5 + 8;
      pfVar1 = (float *)SQRT((*pfVar5 - *pfVar3) * (*pfVar5 - *pfVar3) +
                             (pfVar4[-6] - pfVar3[1]) * (pfVar4[-6] - pfVar3[1]) +
                             (pfVar4[-5] - pfVar3[2]) * (pfVar4[-5] - pfVar3[2]));
      if ((float)param_1 <= (float)pfVar1) {
        if (((float)pfVar1 == (float)param_1) &&
           (fVar2 = SQRT((pfVar4[-1] - pfVar3[6]) * (pfVar4[-1] - pfVar3[6]) +
                         (*pfVar4 - pfVar3[7]) * (*pfVar4 - pfVar3[7])), fVar2 < local_4)) {
          iVar6 = iVar7;
          local_4 = fVar2;
        }
      }
      else {
        iVar6 = iVar7;
        param_1 = pfVar1;
        local_4 = SQRT((pfVar4[-1] - pfVar3[6]) * (pfVar4[-1] - pfVar3[6]) +
                       (*pfVar4 - pfVar3[7]) * (*pfVar4 - pfVar3[7]));
      }
      iVar7 = iVar7 + 1;
      pfVar4 = pfVar4 + 8;
    } while (iVar7 < *(int *)((int)this + 0x2c));
  }
  return iVar6;
}


//// FUNCTION FUN_009d5d10 @ 009d5d10 ////

void __fastcall FUN_009d5d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf80d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d73488;
  puVar1 = (undefined4 *)param_1[0x16];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x16] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    FUN_009de3b0((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00999aa0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009d5db0 @ 009d5db0 ////

undefined4 * __fastcall FUN_009d5db0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x18] = 0x3f800000;
  param_1[1] = 1;
  return param_1;
}


//// FUNCTION FUN_009d5df0 @ 009d5df0 ////

int * __thiscall FUN_009d5df0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf80f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  *(undefined ***)this = &PTR_FUN_00d73488;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0;
  *(int *)((int)this + 0x58) = param_2;
  if (param_2 != 0) {
    InterlockedIncrement((LONG *)(param_2 + 0x10));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  pvVar1 = this;
  if (DAT_0105eaf0 != (void *)0x0) {
    *(void **)((int)DAT_0105eaf0 + 0x50) = this;
    pvVar1 = DAT_0105eaec;
  }
  DAT_0105eaec = pvVar1;
  puVar3 = &DAT_0105c4f8;
  puVar4 = (undefined4 *)((int)this + 0x18);
  DAT_0105eaf0 = this;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(int *)((int)this + 0x48) = param_1;
  iVar2 = DAT_0105eb48;
  bVar5 = DAT_0105eb48 != 0;
  *(int *)((int)this + 0x54) = DAT_0105eb48;
  if (bVar5) {
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (*(int *)((int)this + 0x58) != 0) {
    *(uint *)((int)this + 0x4c) = *(uint *)(*(int *)((int)this + 0x58) + 0x9c) >> 10 & 7;
  }
  FUN_00999900(this,4);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009d5ee0 @ 009d5ee0 ////

undefined4 * __thiscall FUN_009d5ee0(void *this,byte param_1)

{
  FUN_009d5d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d5f00 @ 009d5f00 ////

int * __cdecl FUN_009d5f00(int param_1,int param_2)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf811b;
  local_c = ExceptionList;
  if ((((*(uint *)(param_2 + 0xa0) & 0x1000) != 0) || (DAT_010bb254 == 0)) ||
     ((*(uint *)(DAT_010bb254 + 0x28) & 0x400) == 0)) {
    ExceptionList = &local_c;
    this = operator_new(0x5c);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_009d5df0(this,param_1,param_2);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_009d5f90 @ 009d5f90 ////

void FUN_009d5f90(void)

{
  if (DAT_0105eb00 == '\0') {
    FUN_00a1c5b0();
    FUN_00a32bb0();
    FUN_00a71db0();
    FUN_009d06d0();
    FUN_009d1560();
    return;
  }
  return;
}


//// FUNCTION FUN_009d5fc0 @ 009d5fc0 ////

void FUN_009d5fc0(void)

{
  if (DAT_0105eb00 == '\0') {
    if (DAT_0105ea9c != (void *)0x0) {
      FUN_009de3b0(DAT_0105ea9c);
      DAT_0105ea9c = (void *)0x0;
    }
    FUN_009d04e0();
    FUN_00a71b00();
    FUN_00a327f0();
    FUN_00a1b030();
    return;
  }
  return;
}


//// FUNCTION FUN_009d6000 @ 009d6000 ////

void __fastcall FUN_009d6000(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(int *)((int)param_1 + 0xc) != 0)) {
    if (((uVar1 >> 2 & 1) != 0) || ((uVar1 & 0x30) != 0)) {
      FUN_00a1a0a0(param_1,(byte)(uVar1 >> 2) & 1,(byte)(uVar1 >> 5) & 1,(byte)(uVar1 >> 4) & 1);
    }
    if ((*(byte *)((int)*(void **)((int)param_1 + 0xc) + 0xa4) & 1) != 0) {
      if ((*(byte *)((int)param_1 + 0x10) & 2) != 0) {
        FUN_00a6aea0(*(void **)((int)param_1 + 0xc),param_1);
      }
      if ((*(byte *)((int)param_1 + 0x10) & 8) != 0) {
        FUN_00a6ac00(*(void **)((int)param_1 + 0xc),(int)param_1);
      }
    }
  }
  *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) & 0xffffffd1;
  return;
}


//// FUNCTION FUN_009d60a0 @ 009d60a0 ////

void __thiscall FUN_009d60a0(void *this,char *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  int local_11c;
  byte local_118;
  undefined4 local_117;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar2 = DAT_0105cc5c;
  puStack_10 = &LAB_00cf813b;
  local_14 = ExceptionList;
  DAT_0105cc5c = 0;
  iVar6 = 0;
  local_c = 0;
  if ((*(byte *)((int)this + 0x10) & 1) != 0) {
    local_118 = 0;
    puVar7 = &local_117;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    ExceptionList = &local_14;
    if (param_1 != (char *)0x0) {
      ExceptionList = &local_14;
      _sprintf((char *)&local_118,param_1);
      FUN_009ac040((char *)&local_118);
    }
    pbVar8 = (byte *)((int)this + 0x250);
    pbVar3 = &local_118;
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_009d614c:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_009d6151;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_009d614c;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_009d6151:
    if (iVar4 != 0) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 4;
      if (((*(int *)((int)this + 0xc) != 0) &&
          (iVar4 = *(int *)(*(int *)((int)this + 0xc) + 0xcc), iVar4 != 0)) &&
         (local_11c = 0, 0 < *(int *)(iVar4 + 0x28))) {
        do {
          iVar4 = *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x2c);
          iVar5 = iVar4 + iVar6;
          if (*(int *)(iVar4 + 4 + iVar6) == 7) {
            pbVar8 = &local_118;
            do {
              bVar1 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar1 != 0);
            if ((uint)((int)pbVar8 - (int)&local_117) < 0x20) {
              _sprintf((char *)(iVar5 + 0xc),(char *)&local_118);
            }
            else {
              *(undefined1 *)(iVar5 + 0xc) = 0;
            }
          }
          local_11c = local_11c + 1;
          iVar6 = iVar6 + 0x2c;
        } while (local_11c < *(int *)(*(int *)(*(int *)((int)this + 0xc) + 0xcc) + 0x28));
      }
      if (*(void **)((int)this + 0x1c) != (void *)0x0) {
        FUN_009de3b0(*(void **)((int)this + 0x1c));
        *(undefined4 *)((int)this + 0x1c) = 0;
      }
      if (local_118 != 0) {
        _strncpy((char *)((int)this + 0x250),(char *)&local_118,0x20);
        DAT_0105ead0 = *(undefined4 *)((int)this + 0x24);
        DAT_0105ead4 = 1;
        pbVar8 = FUN_009de1d0((char *)&local_118,0);
        *(byte **)((int)this + 0x1c) = pbVar8;
        FUN_009d7080((int)pbVar8);
        DAT_0105ead0 = 0;
        DAT_0105ead4 = 0;
        FUN_009d8320(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x14),(float *)0x0);
      }
      FUN_009d20c0((int)this);
    }
  }
  DAT_0105cc5c = uVar2;
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_009d6280 @ 009d6280 ////

void FUN_009d6280(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0105eaa4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puVar1[4] = puVar1[4] | 6;
  }
  return;
}


//// FUNCTION FUN_009d62a0 @ 009d62a0 ////

void __cdecl FUN_009d62a0(char param_1)

{
  if (param_1 == '\0') {
    if (DAT_01058f30 != DAT_0105eb0c) {
      DAT_01058f30 = DAT_0105eb0c;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,8,DAT_0105eb0c);
    }
    if (DAT_01058f28 != 2) {
      DAT_01058f28 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,2);
    }
    if (DAT_01058f24 != 2) {
      DAT_01058f24 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,2);
    }
  }
  else {
    DAT_0105eb0c = DAT_01058f30;
    if (DAT_01058f30 != 0) {
      DAT_01058f30 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,8,0);
    }
    if (DAT_01058f28 != 1) {
      DAT_01058f28 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,1);
    }
    if (DAT_01058f24 != 1) {
      DAT_01058f24 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009d63a0 @ 009d63a0 ////

void __thiscall FUN_009d63a0(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (18.0 <= param_1) {
    if (param_1 <= 70.0) {
      fVar1 = 0.0;
      if (param_1 < 30.0) goto LAB_009d6421;
    }
    else {
      param_1 = 70.0;
    }
    fVar1 = (param_1 - 30.0) * 0.025;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
LAB_009d6421:
  if (DAT_0105be88 == '\0') {
    fVar2 = 0.01;
  }
  else {
    fVar2 = 0.1;
  }
  if (fVar2 < ABS(fVar1 - *(float *)((int)this + 0x11c))) {
    *(float *)((int)this + 0x11c) = fVar1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x26;
    return;
  }
  return;
}


//// FUNCTION FUN_009d6470 @ 009d6470 ////

void __thiscall FUN_009d6470(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (60.0 <= param_1) {
    if (100.0 < param_1) {
      param_1 = 100.0;
    }
  }
  else {
    param_1 = 60.0;
  }
  fVar1 = (param_1 - 60.0) * 0.025;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (DAT_0105be88 == '\0') {
    fVar2 = 0.01;
  }
  else {
    fVar2 = 0.1;
  }
  if (fVar2 < ABS(fVar1 - *(float *)((int)this + 0x120))) {
    *(float *)((int)this + 0x120) = fVar1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x28;
    return;
  }
  return;
}


//// FUNCTION FUN_009d6530 @ 009d6530 ////

void __thiscall FUN_009d6530(void *this,float param_1)

{
  float fVar1;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  if (DAT_0105be88 == '\0') {
    fVar1 = 0.01;
  }
  else {
    fVar1 = 0.1;
  }
  if (fVar1 < ABS(param_1 - *(float *)((int)this + 0x124))) {
    *(float *)((int)this + 0x124) = param_1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x28;
    return;
  }
  return;
}


//// FUNCTION FUN_009d65c0 @ 009d65c0 ////

void __thiscall FUN_009d65c0(void *this,undefined4 *param_1)

{
  if (DAT_0105eaa0 != '\0') {
    *(undefined1 *)((int)param_1 + 1) = 0xff;
    *(undefined1 *)((int)param_1 + 2) = 0xff;
    *(undefined1 *)((int)param_1 + 3) = 0xff;
    *(undefined1 *)((int)param_1 + 3) = 0xff;
    *(undefined1 *)((int)param_1 + 2) = 0x80;
    *(undefined1 *)((int)param_1 + 1) = 0x80;
    *(undefined1 *)param_1 = 0x80;
    return;
  }
  *param_1 = *(undefined4 *)((int)this + 0x118);
  return;
}


//// FUNCTION FUN_009d6600 @ 009d6600 ////

undefined1 FUN_009d6600(void)

{
  return 0;
}


//// FUNCTION FUN_009d6610 @ 009d6610 ////

uint __thiscall FUN_009d6610(void *this,void *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  byte *pbVar3;
  void *this_00;
  uint uVar4;
  undefined4 *_Memory;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined *local_c4;
  undefined4 uStack_a8;
  undefined1 *local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98 [4];
  undefined4 *puStack_88;
  undefined4 uStack_84;
  void *pvStack_80;
  char *pcStack_7c;
  undefined4 local_78;
  uint uStack_74;
  char acStack_70 [20];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined *local_38;
  float afStack_34 [9];
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf8170;
  local_c = ExceptionList;
  uVar4 = *(uint *)((int)this + 0xc);
  local_4 = 0;
  if (((uVar4 == 0) || (param_2 == 0)) || (iVar6 = *(int *)((int)this + 8), uVar4 = 0, iVar6 == 0))
  {
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      local_c4 = &UNK_009d6b06;
      ExceptionList = &local_c;
      _free(param_1);
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    local_40 = *(undefined4 *)(iVar6 + 0x3c);
    local_3c = *(undefined4 *)(iVar6 + 0x40);
    local_c4 = *(undefined **)(iVar6 + 0x44);
    local_78 = *(undefined4 *)(iVar6 + 0x80);
    local_a4 = (undefined1 *)&local_c4;
    uStack_a8 = CONCAT13((char)(*(uint *)(iVar6 + 0x9c) >> 3),(undefined3)uStack_a8) & 0x1ffffff;
    ExceptionList = &local_c;
    local_38 = local_c4;
    fVar9 = FUN_004012c0(0.0);
    local_c4 = (undefined *)(float)fVar9;
    local_98[0] = 0.0;
    local_98[1] = 0.0;
    local_98[2] = 0.0;
    (**(code **)(**(int **)((int)this + 8) + 0x20))();
    puVar1 = (uint *)(*(int *)((int)this + 8) + 0x9c);
    *puVar1 = *puVar1 & 0xfffffff7;
    if (*(int *)(*(int *)((int)this + 8) + 0x78) == 0) {
      FUN_0097e2b0(*(int *)((int)this + 8));
    }
    pvStack_80 = (void *)**(int **)(*(int *)((int)this + 8) + 0x78);
    if (pvStack_80 != (void *)0x0) {
      FUN_00984680((int)pvStack_80);
    }
    uStack_a8 = 0;
    pbVar3 = FUN_009cebd0(*(void **)((int)this + 0xc),&uStack_a8);
    FUN_00a019d0(*(void **)(*(int *)((int)this + 8) + 0x78),(void *)0x0,0xffffffff);
    FUN_00a03180(*(void **)(*(int *)((int)this + 8) + 0x78),uStack_a8 * 100);
    FUN_00a019d0(*(void **)(*(int *)((int)this + 8) + 0x78),pbVar3,0xffffffff);
    FUN_009d10d0();
    uVar2 = DAT_00e67b8c;
    DAT_00e67b8c = 0;
    FUN_009a2270(&local_40);
    uStack_10 = 1;
    fVar9 = FUN_004012c0(0.5235988);
    FUN_009a1950(&DAT_0105c2e8,(float)fVar9);
    FUN_009a6070(&DAT_0105c2e8,0.3);
    local_a4 = (undefined1 *)0x3dcf7694;
    uStack_a0 = 0xbd801361;
    uStack_9c = 0x3f7101f7;
    local_98[0] = 5.2013044;
    local_98[1] = 2.0069063;
    local_98[2] = 1.7795612;
    FUN_009a2830(&DAT_0105c2e8,local_98,(float *)&local_a4,0.0);
    FUN_009a1bf0(&DAT_0105c3a8);
    FUN_009a56b0(0xffdbd2b2,'\x01');
    FUN_009a4f10();
    uStack_50 = 0;
    fStack_58 = DAT_0105c404;
    fStack_5c = DAT_0105c400 * 0.5 - DAT_0105c404 * 0.25;
    fStack_54 = DAT_0105c404 * 0.5 + fStack_5c;
    FUN_009a22d0("BluePrint\\thumb_backg.dds",&fStack_5c,(undefined4 *)0x0);
    DAT_0105eae8 = 1;
    (**(code **)(**(int **)((int)this + 8) + 8))();
    DAT_0105eae8 = 0;
    FUN_009a4fb0();
    this_00 = FUN_0099bb50("thumb_costume",0x31545844,0x80,0x100,'\0');
    uVar5 = DAT_0105ca60;
    DAT_0105ca60 = DAT_0105ca68;
    FUN_009a56e0((int)this_00);
    local_98[3] = 0.0;
    puStack_88 = (undefined4 *)0x0;
    DAT_0105ca60 = uVar5;
    MediaPlayer_LockVideoBuffer(this_00,local_98 + 3);
    if (puStack_88 != (undefined4 *)0x0) {
      pcStack_7c = acStack_70;
      acStack_70[0] = '\0';
      local_78 = 0;
      uStack_74 = 0x40;
      pcStack_7c = _malloc(0x40);
      _strncpy(pcStack_7c,"Data\\Textures\\BluePrint\\thumb_cos.dds",0x25);
      local_78 = 0x25;
      pcStack_7c[0x25] = '\0';
      uStack_10 = 2;
      uVar4 = FUN_009d3720(&pcStack_7c);
      uStack_10 = 1;
      if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_7c);
      }
      if (uVar4 == 0x4080) {
        _Memory = operator_new(0x4080);
        FUN_00401de0(&pcStack_7c,"Data\\Textures\\BluePrint\\thumb_cos.dds",0xffffffff);
        uStack_10 = 3;
        FUN_009d3ca0(&pcStack_7c,_Memory,0x4080,(undefined1 *)0x0);
        uStack_10 = 1;
        if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_7c);
        }
        puVar7 = puStack_88;
        puVar8 = _Memory + 0x20;
        for (iVar6 = 0x1000; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_009d44d0(&puStack_8,_Memory,0x4080);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    MediaPlayer_UnlockVideoBuffer((int)this_00);
    if (pvStack_80 != (void *)0x0) {
      FUN_00985de0(pvStack_80);
    }
    if (pbVar3 != (byte *)0x0) {
      FUN_00985de0(pbVar3);
    }
    if (this_00 != (void *)0x0) {
      FUN_0099b400(this_00);
    }
    local_98[0] = 7100.0;
    local_98[1] = -9300.0;
    local_98[2] = 14800.0;
    DAT_00e67b8c = uVar2;
    FUN_009a1bf0(local_98);
    FUN_009a56b0(0xff000000,'\x01');
    (**(code **)(**(int **)((int)this + 8) + 0x20))(auStack_4c,uStack_84);
    uVar4 = *(uint *)(*(int *)((int)this + 8) + 0x9c);
    *(uint *)(*(int *)((int)this + 8) + 0x9c) = uVar4 ^ ((uStack_a8 >> 0x18) << 3 ^ uVar4) & 8;
    local_4 = local_4 & 0xffffff00;
    uVar5 = FUN_009a2da0(afStack_34);
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      local_c4 = &UNK_009d6ae6;
      _free(param_1);
    }
    uVar4 = CONCAT31((int3)((uint)uVar5 >> 8),uStack_a8._1_1_);
  }
  ExceptionList = local_c;
  return uVar4;
}


//// FUNCTION FUN_009d6b30 @ 009d6b30 ////

/* WARNING: Removing unreachable block (ram,0x009d6ea7) */
/* WARNING: Removing unreachable block (ram,0x009d6e4f) */
/* WARNING: Removing unreachable block (ram,0x009d6e33) */
/* WARNING: Removing unreachable block (ram,0x009d6f11) */
/* WARNING: Removing unreachable block (ram,0x009d6f16) */
/* WARNING: Removing unreachable block (ram,0x009d6f73) */
/* WARNING: Removing unreachable block (ram,0x009d6eae) */
/* WARNING: Removing unreachable block (ram,0x009d6f36) */
/* WARNING: Removing unreachable block (ram,0x009d6f0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_009d6b30(int param_1)

{
  undefined1 uVar1;
  int *this;
  byte *pbVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  uint uVar7;
  float10 fVar8;
  char acStack_a0 [20];
  float afStack_8c [6];
  undefined1 *puStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float afStack_60 [10];
  void *apvStack_38 [2];
  uint uStack_30;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8193;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_00433eb0();
  FUN_0097e2b0((int)this);
  FUN_00982950(this,*(int *)(param_1 + 8));
  FUN_004012c0(0.0);
  afStack_8c[3] = 0.0;
  afStack_8c[4] = 0.0;
  afStack_8c[5] = 0.0;
  (**(code **)(*this + 0x20))();
  this[0x27] = this[0x27] & 0xfffffff7;
  pbVar2 = Anim_LoadByName("idle_male.anm");
  FUN_00a019d0((void *)this[0x1e],(void *)0x0,0xffffffff);
  FUN_00a03180((void *)this[0x1e],100);
  FUN_00a019d0((void *)this[0x1e],pbVar2,0xffffffff);
  FUN_009d10d0();
  DAT_00e67b8c = 0;
  FUN_009a2270(afStack_60);
  puStack_74 = &stack0xffffff38;
  uStack_10 = 0;
  fVar8 = FUN_004012c0((float)_DAT_00e682ec * 0.017453292);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar8);
  FUN_009a6070(&DAT_0105c2e8,0.1);
  afStack_8c[0] = -0.143;
  afStack_8c[1] = -0.071;
  afStack_8c[2] = 1.687;
  afStack_8c[3] = 1.176;
  afStack_8c[4] = 0.393;
  afStack_8c[5] = 1.756;
  FUN_009a2830(&DAT_0105c2e8,afStack_8c + 3,afStack_8c,0.0);
  FUN_009a1bf0(&DAT_0105c3a8);
  FUN_009a56b0(0xffdbd2b2,'\x01');
  FUN_009a4f10();
  fStack_70 = DAT_0105c400 * 0.5 - DAT_0105c404 * 0.5;
  uStack_64 = 0;
  fStack_6c = DAT_0105c404;
  fStack_68 = DAT_0105c404 + fStack_70;
  FUN_009a22d0("BluePrint\\thumb_actor.dds",&fStack_70,(undefined4 *)0x0);
  (**(code **)(*this + 8))();
  FUN_009a4fb0();
  pvVar3 = FUN_0099bb50("thumb_costume",0x31545844,0x40,0x40,'\0');
  acStack_a0[0] = '\0';
  _strncpy(acStack_a0,"",0);
  uVar4 = DAT_0105ca60;
  acStack_a0[0] = '\0';
  uStack_10 = CONCAT31(uStack_10._1_3_,1);
  if ((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x24) != 0)) {
    puStack_74 = &stack0xffffff38;
    DAT_0105ca60 = DAT_0105ca68;
    FUN_009a56e0((int)pvVar3);
    DAT_0105ca60 = uVar4;
    uVar4 = FUN_009d4750(&stack0xffffff54);
    if ((char)uVar4 != '\0') {
      puVar5 = FUN_00430770(&stack0xffffff54,apvStack_38,0,0xfffffffc);
      FUN_004015d0(&stack0xffffff54,(char *)*puVar5,puVar5[1]);
      if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_38[0]);
      }
      FUN_004073f0(&stack0xffffff54,".jpg",4);
      (**(code **)(**(int **)((int)pvVar3 + 0x24) + 0x48))(*(int **)((int)pvVar3 + 0x24),0);
    }
  }
  if (pbVar2 != (byte *)0x0) {
    FUN_00985de0(pbVar2);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  LVar6 = InterlockedDecrement(this + 4);
  uVar1 = DAT_0105b588;
  if (LVar6 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*this)();
  }
  uStack_10 = 0xffffffff;
  DAT_0105b588 = uVar1;
  uVar7 = FUN_009a2da0(afStack_60);
  ExceptionList = pvStack_18;
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_009d6ff0 @ 009d6ff0 ////

void __fastcall FUN_009d6ff0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009d7040 @ 009d7040 ////

void __fastcall FUN_009d7040(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009d7080 @ 009d7080 ////

void __cdecl FUN_009d7080(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1;
  if ((param_1 != 0) && (piVar1 = (int *)(param_1 + 0x28), param_1 = 0, 0 < *piVar1)) {
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + 0x2c) + param_1 * 4);
      if (0 < *piVar1) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar4 + 0x34) +
                  (*(uint *)(*(int *)(piVar1[1] + iVar5 * 4) + 8) & 0xff) * 0x24;
          uVar3 = *(uint *)(iVar2 + 0x10);
          *(uint *)(iVar2 + 0x10) = uVar3 | 0x2000000;
          if ((*(char *)(iVar2 + 0xc) == '\x06') || (*(char *)(iVar2 + 0xc) == '\x05')) {
            *(undefined1 *)(iVar2 + 0xe) = 0x32;
            *(uint *)(iVar2 + 0x10) = uVar3 | 0x62000000;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *piVar1);
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar4 + 0x28));
  }
  return;
}


//// FUNCTION FUN_009d7110 @ 009d7110 ////

undefined4 FUN_009d7110(void)

{
  return 6;
}


//// FUNCTION FUN_009d71f0 @ 009d71f0 ////

void __cdecl FUN_009d71f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009d7310 @ 009d7310 ////

void __thiscall FUN_009d7310(void *this,float *param_1,float *param_2)

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
  float fVar15;
  
  fVar14 = param_2[1];
  fVar1 = *(float *)((int)this + 0x20);
  fVar2 = *(float *)((int)this + 0x14);
  fVar3 = *(float *)((int)this + 0x24);
  fVar4 = *(float *)((int)this + 0x18);
  fVar5 = *(float *)((int)this + 0x2c);
  fVar6 = *(float *)((int)this + 0x14);
  fVar7 = *(float *)((int)this + 0x30);
  fVar8 = *(float *)((int)this + 0x18);
  fVar9 = param_2[2];
  fVar15 = *param_2;
  fVar10 = *(float *)((int)this + 4);
  fVar11 = *(float *)((int)this + 8);
  fVar12 = *(float *)((int)this + 0x14);
  fVar13 = *(float *)((int)this + 0x18);
  *param_1 = fVar15 * (*(float *)((int)this + 0x1c) - *(float *)((int)this + 0x10)) +
             *(float *)((int)this + 0x10) +
             fVar14 * (*(float *)((int)this + 0x28) - *(float *)((int)this + 0x10)) +
             fVar9 * *(float *)this;
  param_1[1] = (fVar1 - fVar2) * fVar15 + fVar12 + (fVar5 - fVar6) * fVar14 + fVar9 * fVar10;
  param_1[2] = (fVar3 - fVar4) * fVar15 + fVar13 + (fVar7 - fVar8) * fVar14 + fVar9 * fVar11;
  return;
}


//// FUNCTION FUN_009d7400 @ 009d7400 ////

void __cdecl FUN_009d7400(undefined4 *param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (param_3 != 0) {
    *param_1 = 0x3d75c28f;
    param_1[2] = 0x3fe00000;
    param_1[1] = 0;
    return;
  }
  fVar1 = *(float *)(param_2 + 8);
  if (fVar1 < 1.6) {
    *param_1 = 0x3d4ccccd;
    param_1[2] = 0x3fcccccd;
    param_1[1] = 0;
    return;
  }
  if (1.85 < fVar1) {
    fVar1 = 1.85;
  }
  param_1[2] = fVar1;
  *param_1 = 0x3d4ccccd;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009d7480 @ 009d7480 ////

void __thiscall FUN_009d7480(void *this,float *param_1,float *param_2)

{
  undefined4 uVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_2 + *(float *)this;
  local_14 = param_2[1] + *(float *)((int)this + 4);
  local_10 = param_2[2] + *(float *)((int)this + 8);
  uVar1 = FUN_009a43c0(this,param_2,&local_18,&local_c);
  if ((char)uVar1 != '\0') {
    *param_1 = local_c;
    param_1[1] = local_8;
    param_1[2] = local_4;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


//// FUNCTION FUN_009d74f0 @ 009d74f0 ////

int * __thiscall FUN_009d74f0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf81ab;
  local_c = ExceptionList;
  iVar1 = *param_1;
  ExceptionList = &local_c;
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    piVar2 = operator_new(iVar1 * 6);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_00401380(piVar2,6,iVar1,&LAB_009d72d0);
    }
    iVar1 = *(int *)this;
    *(int **)((int)this + 4) = piVar2;
    for (uVar3 = (uint)(iVar1 * 6) >> 2; param_1 = param_1 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar2 = *param_1;
      piVar2 = piVar2 + 1;
    }
    for (uVar3 = iVar1 * 6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar2 = (char)*param_1;
      param_1 = (int *)((int)param_1 + 1);
      piVar2 = (int *)((int)piVar2 + 1);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009d7590 @ 009d7590 ////

void __fastcall FUN_009d7590(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_009d75d0 @ 009d75d0 ////

void __thiscall FUN_009d75d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  puVar3 = (undefined4 *)((((int)this + 8) - (int)this) + (int)param_1);
  iVar2 = 2;
  puVar4 = (undefined4 *)((int)this + 8);
  do {
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar1 = puVar3 + 2;
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + -1;
    puVar4[2] = *puVar1;
    puVar4 = puVar4 + 3;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_009d7620 @ 009d7620 ////

int FUN_009d7620(void)

{
  if (DAT_0105eb28 == 0) {
    return 0;
  }
  return DAT_0105eb2c - DAT_0105eb28 >> 2;
}


//// FUNCTION FUN_009d7640 @ 009d7640 ////

void __fastcall FUN_009d7640(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_009d76f0 @ 009d76f0 ////

void __cdecl FUN_009d76f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009d7770 @ 009d7770 ////

void __thiscall FUN_009d7770(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 / SQRT(*(float *)((int)this + 8) * *(float *)((int)this + 8) +
                         *(float *)((int)this + 4) * *(float *)((int)this + 4) +
                         *(float *)this * *(float *)this);
  *(float *)this = fVar1 * *(float *)this;
  *(float *)((int)this + 4) = fVar1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar1 * *(float *)((int)this + 8);
  return;
}


//// FUNCTION FUN_009d77b0 @ 009d77b0 ////

void __fastcall FUN_009d77b0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_009d7860 @ 009d7860 ////

undefined4 * __thiscall FUN_009d7860(void *this,byte param_1)

{
  FUN_009d7640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d7880 @ 009d7880 ////

void FUN_009d7880(void)

{
  uint uVar1;
  void *this;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *_Memory;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf81c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pbVar3 = FUN_009de1d0("generic_head_hair_b.msh",1);
  pbVar4 = FUN_009de1d0("generic_head.msh",1);
  this = (void *)**(undefined4 **)(**(int **)(pbVar4 + 0x2c) + 4);
  iVar5 = FUN_009d9b70((int)pbVar3);
  uVar1 = iVar5 * 6 + 4;
  _Memory = operator_new(uVar1);
  puVar10 = _Memory;
  for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  puVar10 = _Memory + 1;
  local_48 = 0;
  local_58 = puVar10;
  if (0 < *(int *)(pbVar3 + 0x28)) {
    do {
      piVar2 = *(int **)(*(int *)(pbVar3 + 0x2c) + local_48 * 4);
      local_4c = 0;
      if (0 < *piVar2) {
        do {
          iVar5 = *(int *)(piVar2[1] + local_4c * 4);
          *_Memory = *(undefined4 *)(iVar5 + 0x1c);
          local_50 = 0;
          if (0 < *(int *)(iVar5 + 0x1c)) {
            local_54 = 0;
            do {
              iVar9 = (*(int *)(iVar5 + 0x20) + local_54) - (int)puVar10;
              iVar8 = 3;
              do {
                iVar6 = FUN_009d5be0(this,(float *)((uint)*(ushort *)((int)puVar10 + iVar9) * 0x20 +
                                                   *(int *)(iVar5 + 0x30)));
                *(short *)puVar10 = (short)iVar6;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
              local_54 = local_54 + 6;
              puVar10 = (undefined4 *)((int)local_58 + 6);
              local_50 = local_50 + 1;
              local_58 = puVar10;
            } while (local_50 < *(int *)(iVar5 + 0x1c));
          }
          local_4c = local_4c + 1;
        } while (local_4c < *piVar2);
      }
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(pbVar3 + 0x28));
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"Data\\Hairs\\head_shape.dat",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 0;
  FUN_009d4370(&local_2c,_Memory,uVar1);
  local_4 = 0xffffffff;
  if (local_24 < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_009d7aa0 @ 009d7aa0 ////

void __thiscall FUN_009d7aa0(void *this,float *param_1,float *param_2,float *param_3)

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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*param_2 + *param_1 + *param_3) * 0.33333334;
  local_8 = (param_2[1] + param_1[1] + param_3[1]) * 0.33333334;
  local_4 = (param_3[2] + param_2[2] + param_1[2]) * 0.33333334;
  fVar4 = *param_1 - local_c;
  fVar6 = param_1[1] - local_8;
  fVar1 = param_1[2] - local_4;
  fVar7 = *param_2 - local_c;
  fVar8 = param_2[1] - local_8;
  fVar2 = param_2[2] - local_4;
  fVar9 = *param_3 - local_c;
  fVar10 = param_3[1] - local_8;
  fVar3 = param_3[2] - local_4;
  fVar5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar1 * fVar1);
  fVar5 = (fVar5 + 0.001) / fVar5;
  fVar11 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar2 * fVar2);
  fVar11 = (fVar11 + 0.001) / fVar11;
  fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar3 * fVar3);
  fVar12 = (fVar12 + 0.001) / fVar12;
  local_24 = fVar4 * fVar5 + local_c;
  local_20 = fVar6 * fVar5 + local_8;
  local_1c = fVar1 * fVar5 + local_4;
  local_18 = fVar7 * fVar11 + local_c;
  local_14 = fVar8 * fVar11 + local_8;
  local_10 = fVar2 * fVar11 + local_4;
  local_c = fVar9 * fVar12 + local_c;
  local_8 = fVar10 * fVar12 + local_8;
  local_4 = fVar3 * fVar12 + local_4;
  *(float *)((int)this + 0x10) = local_24;
  *(float *)((int)this + 0x14) = local_20;
  *(float *)((int)this + 0x18) = local_1c;
  *(float *)((int)this + 0x1c) = local_18;
  *(float *)((int)this + 0x20) = local_14;
  *(float *)((int)this + 0x24) = local_10;
  *(float *)((int)this + 0x28) = local_c;
  *(float *)((int)this + 0x2c) = local_8;
  *(float *)((int)this + 0x30) = local_4;
  FUN_009a3f80(this,&local_24,&local_18,&local_c);
  return;
}


//// FUNCTION FUN_009d7d70 @ 009d7d70 ////

void __thiscall FUN_009d7d70(void *this,float *param_1,float *param_2)

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
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_78 = *(float *)((int)this + 0x1c) - *(float *)((int)this + 0x10);
  local_74 = *(float *)((int)this + 0x20) - *(float *)((int)this + 0x14);
  local_70 = *(float *)((int)this + 0x24) - *(float *)((int)this + 0x18);
  FUN_00412e20(&local_78);
  FUN_00412fd0(&local_6c,this,&local_78);
  FUN_00412e20(&local_6c);
  local_30 = local_78;
  local_24 = local_6c;
  local_2c = local_74;
  local_28 = local_70;
  local_20 = local_68;
  local_18 = *(float *)this;
  local_1c = local_64;
  local_14 = *(float *)((int)this + 4);
  local_10 = *(undefined4 *)((int)this + 8);
  local_4 = *(undefined4 *)((int)this + 0x18);
  local_c = *(float *)((int)this + 0x10);
  local_8 = *(float *)((int)this + 0x14);
  FUN_009aa670(&local_30);
  local_4c = *(float *)((int)this + 0x18);
  local_54 = *(float *)((int)this + 0x10) * local_30 +
             local_4c * local_18 + *(float *)((int)this + 0x14) * local_24 + local_c;
  local_50 = local_2c * *(float *)((int)this + 0x10) +
             local_4c * local_14 + *(float *)((int)this + 0x14) * local_20 + local_8;
  local_40 = *(float *)((int)this + 0x24);
  local_34 = *(float *)((int)this + 0x30);
  local_48 = *(float *)((int)this + 0x1c) * local_30 +
             local_40 * local_18 + *(float *)((int)this + 0x20) * local_24 + local_c;
  local_44 = local_2c * *(float *)((int)this + 0x1c) +
             local_40 * local_14 + *(float *)((int)this + 0x20) * local_20 + local_8;
  local_3c = *(float *)((int)this + 0x28) * local_30 +
             local_34 * local_18 + *(float *)((int)this + 0x2c) * local_24 + local_c;
  local_38 = local_2c * *(float *)((int)this + 0x28) +
             local_34 * local_14 + *(float *)((int)this + 0x2c) * local_20 + local_8;
  FUN_009d7480(this,&local_78,param_2);
  local_48 = local_48 - local_54;
  fVar8 = (local_78 * local_30 + local_70 * local_18 + local_74 * local_24 + local_c) - local_54;
  fVar9 = (((local_2c * local_78 + local_70 * local_14 + local_74 * local_20 + local_8) - local_50)
           * local_48 - fVar8 * (local_44 - local_50)) /
          ((local_38 - local_50) * local_48 - (local_3c - local_54) * (local_44 - local_50));
  fVar1 = param_2[2];
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[1];
  fVar4 = *(float *)((int)this + 4);
  fVar5 = *param_2;
  fVar6 = *(float *)this;
  fVar7 = *(float *)((int)this + 0xc);
  *param_1 = (fVar8 - (local_3c - local_54) * fVar9) / local_48;
  param_1[1] = fVar9;
  param_1[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  return;
}


//// FUNCTION FUN_009d81b0 @ 009d81b0 ////

void * __cdecl FUN_009d81b0(void *param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *this;
  int iVar5;
  int *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [3];
  float local_2c [3];
  int local_20 [8];
  
  FUN_009d77b0(local_20);
  if ((DAT_0105eb18 != (int *)0x0) && (DAT_0105eb1c != 0)) {
    local_60 = local_20 + 2;
    iVar4 = 0;
    piVar3 = DAT_0105eb18;
    do {
      FUN_009d7400(&local_5c,(int)param_2,iVar4);
      local_50 = *param_2 - local_5c;
      local_4c = param_2[1] - local_58;
      local_48 = param_2[2] - local_54;
      FUN_00412e20(&local_50);
      iVar5 = 0;
      local_44 = local_50 + local_5c;
      local_40 = local_4c + local_58;
      local_3c = local_48 + local_54;
      if (0 < *piVar3) {
        do {
          this = (void *)(iVar5 * 0x34 + DAT_0105eb1c);
          uVar2 = FUN_009a4b70((float *)((int)this + 0x10),(float *)((int)this + 0x1c),
                               (float *)((int)this + 0x28),&local_5c,&local_44,local_38);
          if ((char)uVar2 != '\0') {
            local_20[iVar4] = iVar5;
            piVar3 = (int *)FUN_009d7d70(this,local_2c,param_2);
            iVar5 = *DAT_0105eb18;
            *local_60 = *piVar3;
            iVar1 = piVar3[2];
            local_60[1] = piVar3[1];
            local_60[2] = iVar1;
          }
          iVar5 = iVar5 + 1;
          piVar3 = DAT_0105eb18;
        } while (iVar5 < *DAT_0105eb18);
      }
      iVar4 = iVar4 + 1;
      local_60 = local_60 + 3;
    } while (iVar4 < 2);
    FUN_009d75d0(param_1,local_20);
    return param_1;
  }
  FUN_009d75d0(param_1,local_20);
  return param_1;
}


//// FUNCTION FUN_009d8320 @ 009d8320 ////

void __cdecl FUN_009d8320(void *param_1,void *param_2,float *param_3)

{
  ushort *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  float10 fVar12;
  float *local_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int *local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_9c;
  float local_98 [3];
  float local_8c [3];
  float local_80 [3];
  float local_74 [3];
  undefined1 local_68 [16];
  undefined1 local_58 [36];
  undefined1 local_34 [52];
  
  if ((((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) &&
      (*(int *)((int)param_1 + 0x90) != 0)) &&
     (bVar5 = FUN_009daa10(param_1,"[no hair morph]"), !bVar5)) {
    local_cc = FUN_009d9d50(param_2,0);
    local_f0 = 0;
    if (0 < *(int *)((int)param_1 + 0x28)) {
      do {
        piVar8 = *(int **)(*(int *)((int)param_1 + 0x2c) + local_f0 * 4);
        local_f8 = 0;
        local_ec = piVar8;
        if (0 < *piVar8) {
          do {
            local_f4 = *(int *)(piVar8[1] + local_f8 * 4);
            if ((*(int *)(local_f4 + 0x34) != 0) &&
               (iVar9 = *(int *)(*(int *)(local_f4 + 0x34) + 8), iVar9 != 0)) {
              iVar3 = *(int *)(local_cc + 0x30);
              local_e4 = 0;
              local_e0 = 0;
              local_dc = 0x3f800000;
              puVar10 = local_58;
              iVar11 = 2;
              do {
                *(undefined4 *)(puVar10 + -0x10) = local_e4;
                *(undefined4 *)(puVar10 + -0xc) = local_e0;
                *(undefined4 *)(puVar10 + -8) = local_dc;
                *(undefined4 *)(puVar10 + -4) = 0;
                FUN_00401380(puVar10,0xc,3,&LAB_00403370);
                puVar10 = puVar10 + 0x34;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
              local_e8 = 0;
              piVar8 = local_ec;
              if (0 < *(int *)(local_f4 + 0x2c)) {
                local_10c = (float *)(iVar9 + 0x14);
                local_fc = 0;
                do {
                  iVar11 = 0;
                  puVar10 = local_68;
                  do {
                    iVar4 = *(int *)(iVar9 + iVar11 * 4);
                    puVar1 = (ushort *)(*(int *)(DAT_0105eb18 + 4) + iVar4 * 6);
                    FUN_009d7aa0(puVar10,(float *)((uint)*puVar1 * 0x20 + iVar3),
                                 (float *)((uint)puVar1[1] * 0x20 + iVar3),
                                 (float *)((uint)*(ushort *)
                                                  (*(int *)(DAT_0105eb18 + 4) + 4 + iVar4 * 6) *
                                           0x20 + iVar3));
                    iVar11 = iVar11 + 1;
                    puVar10 = puVar10 + 0x34;
                  } while (iVar11 < 2);
                  local_c8 = local_10c[-3];
                  local_c4 = local_10c[-2];
                  local_c0 = local_10c[-1];
                  local_bc = *local_10c;
                  local_b8 = local_10c[1];
                  local_b4 = local_10c[2];
                  pfVar6 = (float *)FUN_009d7310(local_34,local_98,&local_bc);
                  pfVar7 = (float *)FUN_009d7310(local_68,local_80,&local_c8);
                  local_a8 = pfVar6[2] + pfVar7[2];
                  local_108 = (*pfVar6 + *pfVar7) * 0.5;
                  local_104 = (pfVar6[1] + pfVar7[1]) * 0.5;
                  local_100 = local_a8 * 0.5;
                  if (param_3 != (float *)0x0) {
                    fVar12 = FUN_00a483d0(param_3,&local_108);
                    fVar2 = (float)fVar12;
                    if ((fVar2 != 0.0) && (fVar2 <= local_100 + 0.03)) {
                      local_c0 = 0.0;
                      local_b4 = 0.0;
                      pfVar6 = (float *)FUN_009d7310(local_34,local_74,&local_bc);
                      pfVar7 = (float *)FUN_009d7310(local_68,local_8c,&local_c8);
                      local_9c = pfVar7[2] + pfVar6[2];
                      local_108 = (*pfVar7 + *pfVar6) * 0.5;
                      local_104 = (pfVar7[1] + pfVar6[1]) * 0.5;
                      local_d0 = local_9c * 0.5;
                      local_100 = fVar2;
                      local_d8 = local_108;
                      local_d4 = local_104;
                    }
                  }
                  pfVar6 = (float *)(*(int *)(local_f4 + 0x30) + local_fc);
                  *pfVar6 = local_108;
                  pfVar6[1] = local_104;
                  pfVar6[2] = local_100;
                  local_fc = local_fc + 0x20;
                  local_e8 = local_e8 + 1;
                  local_10c = local_10c + 8;
                  iVar9 = iVar9 + 0x20;
                  piVar8 = local_ec;
                } while (local_e8 < *(int *)(local_f4 + 0x2c));
              }
            }
            local_f8 = local_f8 + 1;
          } while (local_f8 < *piVar8);
        }
        local_f0 = local_f0 + 1;
      } while (local_f0 < *(int *)((int)param_1 + 0x28));
    }
  }
  return;
}


//// FUNCTION FUN_009d86b0 @ 009d86b0 ////

/* WARNING: Removing unreachable block (ram,0x009d86e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009d86b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    if (DAT_00e682f8 == 0) {
      DAT_00e682f8 = 0x20;
      PTR_DAT_00e682f0 = _malloc(0x20);
    }
    _strncpy(PTR_DAT_00e682f0,"",0);
    _DAT_00e682f4 = 0;
    *PTR_DAT_00e682f0 = 0;
    return;
  }
  pcVar2 = (char *)(param_1 + 0x250);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&PTR_DAT_00e682f0,(char *)(param_1 + 0x250),(int)pcVar2 - (param_1 + 0x251));
  return;
}


//// FUNCTION FUN_009d8790 @ 009d8790 ////

void * FUN_009d8790(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009d87c0 @ 009d87c0 ////

void __cdecl FUN_009d87c0(char *param_1)

{
  byte *pbVar1;
  char local_100 [256];
  
  if (param_1 != (char *)0x0) {
    _sprintf(local_100,param_1);
    FUN_009ac040(local_100);
    pbVar1 = FUN_009de1d0(local_100,0);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(pbVar1 + 0x90));
  }
  return;
}


//// FUNCTION FUN_009d89c0 @ 009d89c0 ////

void __fastcall FUN_009d89c0(int param_1)

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


//// FUNCTION FUN_009d89f0 @ 009d89f0 ////

undefined4 * FUN_009d89f0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009d8a20 @ 009d8a20 ////

void __cdecl FUN_009d8a20(int param_1,char *param_2)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (DAT_0105eb28 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_0105eb2c - DAT_0105eb28 >> 2;
    }
    if ((param_1 < iVar1) && (param_2 != (char *)0x0)) {
      _sprintf(param_2,(char *)**(undefined4 **)(DAT_0105eb28 + param_1 * 4));
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009d8a60 @ 009d8a60 ////

uint __cdecl FUN_009d8a60(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_100 [256];
  
  if (*param_1 == '\0') {
    return 0xffffffff;
  }
  _sprintf((char *)local_100,param_1);
  FUN_009ac040((char *)local_100);
  uVar4 = 0;
  do {
    if ((DAT_0105eb28 == 0) || ((uint)(DAT_0105eb2c - DAT_0105eb28 >> 2) <= uVar4)) {
      return 0;
    }
    pbVar2 = (byte *)**(undefined4 **)(DAT_0105eb28 + uVar4 * 4);
    pbVar5 = local_100;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_009d8ae4:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_009d8ae9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_009d8ae4;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_009d8ae9:
    if (iVar3 == 0) {
      return uVar4;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_009d8b10 @ 009d8b10 ////

int __cdecl FUN_009d8b10(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(*DAT_0105eb28 + 0x24);
  if ((iVar2 <= param_2) &&
     (iVar2 = param_2,
     *(int *)(DAT_0105eb28[(DAT_0105eb2c - (int)DAT_0105eb28 >> 2) + -1] + 0x24) < param_2)) {
    iVar2 = *(int *)(DAT_0105eb28[(DAT_0105eb2c - (int)DAT_0105eb28 >> 2) + -1] + 0x24);
  }
  iVar3 = 0;
  iVar4 = -2;
  iVar5 = -2;
  do {
    if (DAT_0105eb2c - (int)DAT_0105eb28 >> 2 <= iVar3) {
LAB_009d8b8a:
      if ((iVar4 < 0) || (iVar5 < 0)) {
        return 0;
      }
      if (iVar5 != iVar4) {
        iVar3 = FUN_00990d30(iVar4,iVar5 + 1);
        iVar2 = iVar4;
        if ((iVar4 <= iVar3) && (iVar2 = iVar3, iVar5 < iVar3)) {
          iVar2 = iVar5;
        }
        iVar3 = iVar2;
        if ((*(byte *)(DAT_0105eb28[iVar2] + 0x20) & 2) != 0) {
          return iVar2;
        }
        while( true ) {
          iVar3 = iVar3 + 1;
          if (iVar5 < iVar3) {
            iVar3 = iVar4;
          }
          if (iVar3 == iVar2) break;
          if ((*(byte *)(DAT_0105eb28[iVar3] + 0x20) & 2) != 0) {
            return iVar3;
          }
        }
      }
      return iVar4;
    }
    if (param_1 == (*(uint *)(DAT_0105eb28[iVar3] + 0x20) & 1)) {
      iVar1 = *(int *)(DAT_0105eb28[iVar3] + 0x24);
      if (iVar1 != iVar2 && iVar2 <= iVar1) {
        iVar5 = iVar3 + -1;
        goto LAB_009d8b8a;
      }
      if (((iVar1 == iVar2) || (iVar1 == iVar2 + -1)) && (iVar5 = iVar3, iVar4 < 0)) {
        iVar4 = iVar3;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


//// FUNCTION FUN_009d8c00 @ 009d8c00 ////

int __thiscall FUN_009d8c00(void *this,int param_1,char param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)(this);
  }
  uVar8 = FUN_00acd42c();
  if ((int)uVar8 < 2) {
    iVar9 = 2;
  }
  else {
    if (DAT_0105bea4 != (code *)0x0) {
      (*DAT_0105bea4)();
    }
    uVar8 = FUN_00acd42c();
    iVar9 = (int)uVar8;
  }
  if (-1 < param_1) {
    if (DAT_0105eb28 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_0105eb2c - DAT_0105eb28 >> 2;
    }
    if (param_1 < iVar3) goto LAB_009d8cbe;
  }
  param_1 = 0;
LAB_009d8cbe:
  iVar3 = param_1;
  if (param_2 == '\0') {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        if (DAT_0105eb28 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_0105eb2c - DAT_0105eb28 >> 2;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 < param_1) {
          return param_1;
        }
        do {
          puVar2 = *(undefined4 **)(DAT_0105eb28 + iVar3 * 4);
          if ((int)puVar2[9] <= iVar9) {
            return iVar3;
          }
          pbVar6 = (byte *)*puVar2;
          pbVar5 = PTR_DAT_00e682f0;
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_009d8e35:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_009d8e3a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_009d8e35;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_009d8e3a:
          if (iVar4 == 0) {
            return iVar3;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 < param_1) {
            return param_1;
          }
        } while( true );
      }
      puVar2 = *(undefined4 **)(DAT_0105eb28 + iVar3 * 4);
      if ((int)puVar2[9] <= iVar9) {
        return iVar3;
      }
      pbVar6 = (byte *)*puVar2;
      pbVar5 = PTR_DAT_00e682f0;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_009d8dd8:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009d8ddd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_009d8dd8;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_009d8ddd:
    } while (iVar4 != 0);
  }
  else {
    do {
      iVar3 = iVar3 + 1;
      if (DAT_0105eb28 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_0105eb2c - DAT_0105eb28 >> 2;
      }
      if (iVar4 <= iVar3) {
        iVar3 = 0;
        if (param_1 == -1 || param_1 + 1 < 0) {
          return param_1;
        }
        do {
          puVar2 = *(undefined4 **)(DAT_0105eb28 + iVar3 * 4);
          if ((int)puVar2[9] <= iVar9) {
            return iVar3;
          }
          pbVar6 = (byte *)*puVar2;
          pbVar5 = PTR_DAT_00e682f0;
          do {
            bVar1 = *pbVar5;
            bVar7 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_009d8d7b:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_009d8d80;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar7 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_009d8d7b;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_009d8d80:
          if (iVar4 == 0) {
            return iVar3;
          }
          iVar3 = iVar3 + 1;
          if (param_1 + 1 <= iVar3) {
            return param_1;
          }
        } while( true );
      }
      puVar2 = *(undefined4 **)(DAT_0105eb28 + iVar3 * 4);
      if ((int)puVar2[9] <= iVar9) {
        return iVar3;
      }
      pbVar6 = (byte *)*puVar2;
      pbVar5 = PTR_DAT_00e682f0;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_009d8d24:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009d8d29;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_009d8d24;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_009d8d29:
    } while (iVar4 != 0);
  }
  return iVar3;
}


//// FUNCTION FUN_009d8e60 @ 009d8e60 ////

void __fastcall FUN_009d8e60(int param_1)

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


//// FUNCTION FUN_009d8e90 @ 009d8e90 ////

void __fastcall FUN_009d8e90(int param_1)

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


//// FUNCTION FUN_009d8f70 @ 009d8f70 ////

void FUN_009d8f70(void)

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
  puStack_8 = &LAB_00cf8208;
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


//// FUNCTION FUN_009d9030 @ 009d9030 ////

void __thiscall FUN_009d9030(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009d8f70();
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
      _Dst = FUN_009d89f0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009d8790(param_1,iVar5,param_1 + param_2);
      FUN_009d89f0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009d71f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009d8790(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009d76f0(param_1,(int)pvVar3,iVar5);
    FUN_009d71f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009d9820 @ 009d9820 ////

void FUN_009d9820(void)

{
  return;
}


//// FUNCTION FUN_009d9830 @ 009d9830 ////

void __cdecl FUN_009d9830(DWORD param_1)

{
  Sleep(param_1);
  return;
}


//// FUNCTION FUN_009d9840 @ 009d9840 ////

void __fastcall FUN_009d9840(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009d9860 @ 009d9860 ////

undefined4 * FUN_009d9860(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf827b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_009d5db0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009d98c0 @ 009d98c0 ////

void __thiscall FUN_009d98c0(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == *(int *)((int)this + 0x2c)) {
    if (*(int *)((int)this + 0x34) == 0) {
      puVar1 = operator_new(0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined4 **)((int)this + 0x34) = puVar1;
        puVar1[2] = param_2;
        return;
      }
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    *(undefined4 *)(*(int *)((int)this + 0x34) + 8) = param_2;
  }
  return;
}


//// FUNCTION FUN_009d9970 @ 009d9970 ////

void __fastcall FUN_009d9970(char *param_1)

{
  DAT_0105ef70 = DAT_0105ef70 + 1;
  _sprintf(param_1,"UNKNOWN %d!",DAT_0105ef70);
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = '\0';
  param_1[0xaf] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe6] = '\0';
  param_1[0xe7] = '\0';
  return;
}


//// FUNCTION FUN_009d9a50 @ 009d9a50 ////

int * __thiscall FUN_009d9a50(void *this,byte param_1)

{
  FUN_00a46b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d9ad0 @ 009d9ad0 ////

void * __thiscall FUN_009d9ad0(void *this,byte param_1)

{
  FUN_00a15760((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d9af0 @ 009d9af0 ////

void * __thiscall FUN_009d9af0(void *this,byte param_1)

{
  FUN_00a48190((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009d9b70 @ 009d9b70 ////

int __fastcall FUN_009d9b70(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar1 = 0;
  if (0 < iVar5) {
    piVar4 = *(int **)(param_1 + 0x2c);
    do {
      iVar3 = *(int *)*piVar4;
      if (0 < iVar3) {
        piVar2 = (int *)((int *)*piVar4)[1];
        do {
          iVar1 = iVar1 + *(int *)(*piVar2 + 0x1c);
          piVar2 = piVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar1;
}


//// FUNCTION FUN_009d9bb0 @ 009d9bb0 ////

int __fastcall FUN_009d9bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar1 = 0;
  if (0 < iVar5) {
    piVar4 = *(int **)(param_1 + 0x2c);
    do {
      iVar3 = *(int *)*piVar4;
      if (0 < iVar3) {
        piVar2 = (int *)((int *)*piVar4)[1];
        do {
          iVar1 = iVar1 + *(int *)(*piVar2 + 0x2c);
          piVar2 = piVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar1;
}


//// FUNCTION FUN_009d9bf0 @ 009d9bf0 ////

int __fastcall FUN_009d9bf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar1 = 0;
  if (0 < iVar3) {
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    do {
      iVar1 = iVar1 + *(int *)*puVar2;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


//// FUNCTION FUN_009d9c10 @ 009d9c10 ////

undefined4 __thiscall FUN_009d9c10(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)((int)this + 0x44) == 0) {
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0x28);
  iVar5 = 0;
  if (0 < (int)uVar4) {
    iVar6 = 0;
    do {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = _strncmp((char *)(*(int *)((int)this + 0x44) + iVar6),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
      if (iVar3 == 0) {
        if (*(int *)((int)this + 0x9c) != 0) {
          *param_2 = *(undefined4 *)(*(int *)((int)this + 0x9c) + 0xc);
          return 1;
        }
        *param_2 = 0;
        return 1;
      }
      uVar4 = *(uint *)((int)this + 0x28);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x80;
    } while (iVar5 < (int)uVar4);
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_009d9ca0 @ 009d9ca0 ////

int __thiscall FUN_009d9ca0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    piVar4 = *(int **)((int)this + 0x2c);
    do {
      iVar1 = *(int *)*piVar4;
      iVar3 = 0;
      if (0 < iVar1) {
        piVar5 = (int *)((int *)*piVar4)[1];
        do {
          iVar2 = *(int *)(*piVar5 + 0x2c);
          if (param_1 < iVar2) {
            return param_1 * 0x20 + *(int *)(*piVar5 + 0x30);
          }
          param_1 = param_1 - iVar2;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar3 < iVar1);
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(int *)((int)this + 0x28));
  }
  return 0;
}


//// FUNCTION FUN_009d9d50 @ 009d9d50 ////

undefined4 __thiscall FUN_009d9d50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)((int)this + 0x2c);
    do {
      iVar2 = *(int *)*piVar4;
      if (param_1 < iVar2) {
        return *(undefined4 *)(((int *)*piVar4)[1] + param_1 * 4);
      }
      param_1 = param_1 - iVar2;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


//// FUNCTION FUN_009d9da0 @ 009d9da0 ////

void __fastcall FUN_009d9da0(int param_1)

{
  undefined4 *puVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf829b;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x58) != 0)) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x18);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_00a48590(puVar1);
    }
    local_4 = 0xffffffff;
    *(void **)(param_1 + 100) = this;
    FUN_00a488c0(this,*(int *)(param_1 + 0x58));
    if (*(void **)(param_1 + 0x58) != (void *)0x0) {
      FUN_009e6b00(*(void **)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009d9e70 @ 009d9e70 ////

char __fastcall FUN_009d9e70(char *param_1)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,"cos_f_",6);
  if (iVar1 == 0) {
    return '\x01';
  }
  iVar1 = _strncmp(param_1,"cos_m_",6);
  if (iVar1 != 0) {
    iVar1 = _strncmp(param_1,"head_f_",7);
    if (iVar1 == 0) {
      return '\x01';
    }
    iVar1 = _strncmp(param_1,"head_m_",7);
    if ((iVar1 != 0) && (iVar1 = _strncmp(param_1,"latex_m_head_v",0xe), iVar1 != 0)) {
      iVar1 = _strncmp(param_1,"latex_f_head_v",0xe);
      return (iVar1 != 0) + '\x01';
    }
  }
  return '\0';
}


//// FUNCTION FUN_009d9f00 @ 009d9f00 ////

bool __fastcall FUN_009d9f00(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar1 = _strncmp(param_1,"cos_f_",6);
  iVar2 = _strncmp(param_1,"cos_m_",6);
  if ((iVar2 == 0) || (iVar1 == 0)) {
    do {
      pcVar3 = param_1;
      param_1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    iVar1 = _strncmp(pcVar3 + -4,"_fat",4);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = _strncmp(pcVar3 + -4,"_enh",4);
    return iVar1 != 0;
  }
  iVar1 = _strncmp(param_1,"head_f_",7);
  if ((iVar1 != 0) && (iVar1 = _strncmp(param_1,"head_m_",7), iVar1 != 0)) {
    iVar1 = 0xd;
    bVar5 = true;
    pcVar3 = param_1;
    pcVar4 = "generic_head";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if ((!bVar5) && (iVar1 = FUN_009ac120(param_1,"latex_m_head_v"), iVar1 == -1)) {
      iVar1 = FUN_009ac120(param_1,"latex_f_head_v");
      return iVar1 != -1;
    }
  }
  return true;
}


//// FUNCTION FUN_009d9ff0 @ 009d9ff0 ////

int __thiscall FUN_009d9ff0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x38);
  iVar3 = 0;
  while( true ) {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return -1;
      }
      iVar2 = _strncmp(*(char **)(*(int *)((int)this + 0x3c) + iVar1 * 4),(char *)&PTR_LAB_00d71474,
                       3);
    } while (iVar2 != 0);
    if (iVar3 == param_1) break;
    iVar3 = iVar3 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_009da040 @ 009da040 ////

int __thiscall FUN_009da040(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x38);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return -1;
    }
    iVar2 = __stricmp(*(char **)(*(int *)((int)this + 0x3c) + iVar1 * 4),param_1);
  } while (iVar2 != 0);
  return iVar1;
}


//// FUNCTION FUN_009da080 @ 009da080 ////

int __thiscall FUN_009da080(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 < *(int *)((int)this + 0x38)) {
    do {
      iVar1 = _strncmp(*(char **)(*(int *)((int)this + 0x3c) + param_1 * 4),"bd_",3);
      if (iVar1 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 0x38));
  }
  return -1;
}


//// FUNCTION FUN_009da0d0 @ 009da0d0 ////

undefined4 __fastcall FUN_009da0d0(int param_1)

{
  if (*(int *)(param_1 + 0x88) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x88) + 8);
}


//// FUNCTION FUN_009da0e0 @ 009da0e0 ////

undefined1 * __thiscall FUN_009da0e0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x88);
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 <= *(int *)(iVar1 + 8))) {
    iVar2 = param_1 * 0x2c;
    *param_2 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 8 + iVar2);
    iVar1 = *(int *)(*(int *)((int)this + 0x88) + 0xc);
    *param_3 = *(undefined4 *)(iVar1 + iVar2);
    param_3[1] = *(undefined4 *)(iVar1 + 4 + iVar2);
    return (undefined1 *)(*(int *)(*(int *)((int)this + 0x88) + 0xc) + 0xc + iVar2);
  }
  return &lpClass_00d16914;
}


//// FUNCTION FUN_009da140 @ 009da140 ////

uint __thiscall FUN_009da140(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_EAX;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  byte local_20 [32];
  
  if ((param_1 == (undefined4 *)0x0) || (in_EAX = 0, *(int *)((int)this + 0x88) == 0)) {
    return in_EAX & 0xffffff00;
  }
  pbVar9 = local_20;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar9 = *param_1;
    param_1 = param_1 + 1;
    pbVar9 = pbVar9 + 4;
  }
  FUN_009ac040((char *)local_20);
  uVar7 = *(uint *)((int)this + 0x88);
  piVar1 = (int *)(uVar7 + 8);
  iVar8 = 0;
  if (0 < *piVar1) {
    piVar2 = (int *)(uVar7 + 0xc);
    pbVar9 = (byte *)(*piVar2 + 0xc);
    do {
      pbVar6 = local_20;
      pbVar10 = pbVar9;
      do {
        bVar3 = *pbVar6;
        bVar11 = bVar3 < *pbVar10;
        if (bVar3 != *pbVar10) {
LAB_009da1c4:
          uVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_009da1c9;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar6[1];
        bVar11 = bVar3 < pbVar10[1];
        if (bVar3 != pbVar10[1]) goto LAB_009da1c4;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar3 != 0);
      uVar7 = 0;
LAB_009da1c9:
      if (uVar7 == 0) {
        iVar8 = iVar8 * 0x2c;
        *param_2 = *(undefined4 *)(*piVar2 + 8 + iVar8);
        iVar4 = *(int *)(*(int *)((int)this + 0x88) + 0xc);
        *param_3 = *(undefined4 *)(iVar4 + iVar8);
        uVar5 = *(undefined4 *)(iVar4 + 4 + iVar8);
        param_3[1] = uVar5;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      iVar8 = iVar8 + 1;
      pbVar9 = pbVar9 + 0x2c;
    } while (iVar8 < *piVar1);
  }
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_009da230 @ 009da230 ////

undefined4 * __thiscall FUN_009da230(void *this,undefined4 param_1)

{
  FUN_009b38a0(this);
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_FUN_00d735cc;
  return this;
}


//// FUNCTION FUN_009da250 @ 009da250 ////

undefined4 * __thiscall FUN_009da250(void *this,byte param_1)

{
  FUN_009da270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009da270 @ 009da270 ////

void __fastcall FUN_009da270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d735cc;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_009da2e0 @ 009da2e0 ////

int __thiscall FUN_009da2e0(void *this,int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  int local_8;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar3 = 0;
  iVar2 = 0;
  local_c = -1.0;
  local_8 = 0;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x2c) + iVar2 * 4);
      iVar4 = 0;
      if (0 < *piVar1) {
        do {
          fVar5 = FUN_00a6c880(param_1,*(void **)(piVar1[1] + iVar4 * 4));
          if ((local_c == -1.0) || (fVar5 < (float10)local_c)) {
            local_c = (float)fVar5;
            *param_2 = iVar2;
            *param_3 = iVar4;
            local_8 = iVar3;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *piVar1);
      }
      iVar2 = iVar2 + 1;
      iVar4 = local_8;
    } while (iVar2 < *(int *)((int)this + 0x28));
  }
  return iVar4;
}


//// FUNCTION FUN_009da390 @ 009da390 ////

void __thiscall FUN_009da390(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (param_1 != 0) {
    uVar6 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      puVar3 = *(undefined4 **)((int)this + 0x2c);
      iVar5 = *(int *)((int)this + 0x28);
      do {
        uVar6 = uVar6 + *(int *)*puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (uVar6 == *(ushort *)(param_1 + 0xc)) {
      iVar5 = 0;
      *(int *)((int)this + 0x90) = param_1;
      if (0 < (int)uVar6) {
        do {
          iVar7 = *(int *)(*(int *)(*(int *)((int)this + 0x90) + 0x10) + iVar5 * 4);
          uVar8 = *(undefined4 *)(iVar7 + 8);
          iVar7 = *(int *)(iVar7 + 4);
          pvVar4 = (void *)FUN_009d9d50(this,iVar5);
          FUN_009d98c0(pvVar4,iVar7,uVar8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar6);
      }
      param_1 = 0;
      if (0 < *(int *)((int)this + 0x28)) {
        do {
          piVar1 = *(int **)(*(int *)((int)this + 0x2c) + param_1 * 4);
          iVar5 = 0;
          if (0 < *piVar1) {
            do {
              pvVar4 = *(void **)(piVar1[1] + iVar5 * 4);
              bVar2 = FUN_00990f60(*(int *)((int)this + 0x34) +
                                   (*(uint *)((int)pvVar4 + 8) & 0xff) * 0x24);
              if (bVar2) {
                FUN_00a70e20(pvVar4,(int)this);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *piVar1);
          }
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)((int)this + 0x28));
      }
      *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x400000;
    }
  }
  return;
}


//// FUNCTION FUN_009da470 @ 009da470 ////

char * __fastcall FUN_009da470(int param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      pcVar1 = *(char **)(*(int *)(param_1 + 0x3c) + iVar3 * 4);
      bVar2 = FUN_009ada70(pcVar1);
      if (bVar2) {
        return pcVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return (char *)0x0;
}


//// FUNCTION FUN_009da4b0 @ 009da4b0 ////

void __thiscall FUN_009da4b0(void *this,int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa8));
  }
  return;
}


//// FUNCTION FUN_009da4e0 @ 009da4e0 ////

void __thiscall FUN_009da4e0(void *this,int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x94));
  }
  return;
}


//// FUNCTION FUN_009da510 @ 009da510 ////

void __thiscall FUN_009da510(void *this,int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x98));
  }
  return;
}


//// FUNCTION FUN_009da540 @ 009da540 ////

void __thiscall FUN_009da540(void *this,int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x9c));
  }
  return;
}


//// FUNCTION FUN_009da570 @ 009da570 ////

void __fastcall FUN_009da570(byte *param_1)

{
  if (*(int *)(param_1 + 0xac) == 0) {
    FUN_00a72a60(param_1);
  }
  return;
}


//// FUNCTION FUN_009da5b0 @ 009da5b0 ////

void __thiscall FUN_009da5b0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x74)) {
    iVar1 = 0;
    do {
      FUN_00a4c370((void *)(*(int *)((int)this + 0x78) + iVar1),param_1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x40;
    } while (iVar2 < *(int *)((int)this + 0x74));
  }
  return;
}


//// FUNCTION FUN_009da5f0 @ 009da5f0 ////

byte * __thiscall FUN_009da5f0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_1 == (byte *)0x0) || (iVar2 = *(int *)((int)this + 0x94), iVar2 == 0)) {
    return (byte *)0x0;
  }
  iVar8 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    pbVar3 = *(byte **)(iVar2 + 0x10);
    pbVar6 = pbVar3;
    pbVar7 = param_1;
    pbVar5 = pbVar3;
LAB_009da626:
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 == *pbVar7) {
        if (bVar1 != 0) {
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_009da64a;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
          if (bVar1 != 0) goto LAB_009da626;
        }
        iVar4 = 0;
      }
      else {
LAB_009da64a:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 == 0) {
        return pbVar3 + iVar8 * 0x44 + 0x20;
      }
      iVar8 = iVar8 + 1;
      pbVar6 = pbVar5 + 0x44;
      pbVar7 = param_1;
      pbVar5 = pbVar6;
    } while (iVar8 < *(int *)(iVar2 + 0xc));
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_009da710 @ 009da710 ////

void __thiscall FUN_009da710(void *this,wchar_t *param_1,char *param_2,IAtlStringMgr *param_3)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this_00;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf82bb;
  local_c = ExceptionList;
  if (*(void **)((int)this + 0xb0) != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00a30fc0(*(void **)((int)this + 0xb0),(char *)param_1,param_2,(float)param_3);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  this_00 = operator_new(0x44);
  local_4 = 0;
  if (this_00 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)0x0) {
    uVar1 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
            CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                      (this_00,param_1,(int)param_2,param_3);
    *(undefined4 *)((int)this + 0xb0) = uVar1;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009da7c0 @ 009da7c0 ////

void __fastcall FUN_009da7c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
      if (0 < *piVar1) {
        iVar3 = 0;
        do {
          FUN_00a6c3c0(*(int *)(piVar1[1] + iVar3 * 4));
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  return;
}


//// FUNCTION FUN_009da800 @ 009da800 ////

void __thiscall FUN_009da800(void *this,int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  piVar3 = *(int **)((int)this + 0x70);
  if (piVar3 != (int *)0x0) {
    iVar8 = 0;
    if (0 < *piVar3) {
      pbVar6 = (byte *)(piVar3[1] + 4);
      do {
        pbVar7 = (byte *)(param_1 + 0xc);
        pbVar4 = pbVar6;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_009da864:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_009da869;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_009da864;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_009da869:
        if (iVar5 == 0) {
          iVar8 = iVar8 * 0x90;
          *(undefined4 *)(piVar3[1] + 0x84 + iVar8) = *(undefined4 *)(param_1 + 0x38);
          iVar5 = *(int *)(*(int *)((int)this + 0x70) + 4);
          *(undefined4 *)(iVar5 + 0x7c + iVar8) = *(undefined4 *)(param_1 + 0x3c);
          *(undefined4 *)(iVar5 + 0x80 + iVar8) = *(undefined4 *)(param_1 + 0x40);
          puVar1 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x70 + iVar8);
          *puVar1 = *(undefined4 *)(param_1 + 0x2c);
          puVar1[1] = *(undefined4 *)(param_1 + 0x30);
          puVar1[2] = *(undefined4 *)(param_1 + 0x34);
          *(undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x78 + iVar8) = 0;
          return;
        }
        iVar8 = iVar8 + 1;
        pbVar6 = pbVar6 + 0x90;
        if (*piVar3 <= iVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}


//// FUNCTION FUN_009daa10 @ 009daa10 ////

bool __thiscall FUN_009daa10(void *this,char *param_1)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*(int *)((int)this + 0xa4) != 0)) {
    iVar1 = FUN_009ac120(*(char **)(*(int *)((int)this + 0xa4) + 0x10),param_1);
    return iVar1 != -1;
  }
  return false;
}


//// FUNCTION FUN_009daa50 @ 009daa50 ////

void __fastcall FUN_009daa50(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  void *_Memory;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    iVar2 = 0;
    if (0 < iVar4) {
      puVar3 = *(undefined4 **)(param_1 + 0x2c);
      iVar5 = iVar4;
      do {
        iVar2 = iVar2 + *(int *)*puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0xc) == iVar2) {
      local_10 = 0;
      local_c = 0;
      if (0 < iVar4) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + local_c * 4);
          iVar4 = 0;
          if (0 < *piVar1) {
            do {
              this = *(void **)(piVar1[1] + iVar4 * 4);
              iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x10) + local_10 * 4);
              if (*(int *)((int)this + 0x2c) == *(int *)(iVar2 + 4)) {
                _Memory = operator_new(*(int *)(iVar2 + 4) * 2);
                iVar4 = 0;
                if (0 < *(int *)(iVar2 + 4)) {
                  do {
                    *(short *)((int)_Memory +
                              (uint)*(ushort *)(*(int *)(iVar2 + 0x48) + iVar4 * 2) * 2) =
                         (short)iVar4;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(iVar2 + 4));
                }
                *(uint *)(*(int *)((int)this + 0x28) + 0x28) =
                     *(uint *)(*(int *)((int)this + 0x28) + 0x28) & 0xfffffffd;
                FUN_009d54c0(this,(int)_Memory);
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
              iVar4 = iVar4 + 1;
              local_10 = local_10 + 1;
            } while (iVar4 < *piVar1);
          }
          local_c = local_c + 1;
        } while (local_c < *(int *)(param_1 + 0x28));
      }
    }
  }
  return;
}


//// FUNCTION FUN_009dab70 @ 009dab70 ////

void __fastcall FUN_009dab70(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    pcVar2 = *(char **)(*(int *)(param_1 + 0xa4) + 0x10);
    while( true ) {
      if (DAT_0105be08 == 0) {
        pcVar3 = "[sli:";
      }
      else {
        pcVar3 = "[smi:";
      }
      local_c = FUN_009ac120(pcVar2,pcVar3);
      if (local_c == -1) break;
      pcVar2 = pcVar2 + local_c + 5;
      uVar1 = FUN_009b7af0(pcVar2,&local_8,&local_c);
      if ((char)uVar1 == '\0') {
        return;
      }
      local_c = FUN_009ac120(pcVar2,",");
      if (local_c == -1) {
        return;
      }
      pcVar2 = pcVar2 + local_c + 1;
      uVar1 = FUN_009b7af0(pcVar2,&local_4,&local_c);
      if ((char)uVar1 == '\0') {
        return;
      }
      if (((-1 < local_8) && (-1 < local_4)) && (local_8 < *(int *)(param_1 + 0x28))) {
        *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + local_8 * 4) + 0x2c) = local_4;
      }
    }
  }
  return;
}


//// FUNCTION FUN_009dac90 @ 009dac90 ////

void __thiscall FUN_009dac90(void *this,float *param_1)

{
  *(float *)this = *param_1 * *(float *)this;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * *param_1;
  *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) * *param_1;
  *(float *)((int)this + 0x24) = *(float *)((int)this + 0x24) * *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * param_1[1];
  *(float *)((int)this + 0x10) = param_1[1] * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x1c) = param_1[1] * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x28) = param_1[1] * *(float *)((int)this + 0x28);
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * param_1[2];
  *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * param_1[2];
  *(float *)((int)this + 0x20) = *(float *)((int)this + 0x20) * param_1[2];
  *(float *)((int)this + 0x2c) = *(float *)((int)this + 0x2c) * param_1[2];
  return;
}


//// FUNCTION LH_LoadVertexQuantizationBounds @ 009dad00 ////

int __thiscall LH_LoadVertexQuantizationBounds(void *this,undefined4 *param_1)

{
                    /* CONFIRMED: reads the 14-float (0x38/56-byte) vertex-quantization reference
                       block into LH_LoadMeshPrimitiveHeader's own OUTPUT STRUCT - a temporary stack
                       staging buffer local to LH_LoadMeshBinary, NOT the same struct as the
                       persistent runtime primitive object that rendering code operates on (that one
                       is a separate operator_new(100)-allocated heap object, constructed later via
                       FUN_009d5db0, with its own different offset scheme - e.g. its +0x1c is
                       TriangleCount, unrelated to this staging struct's +0x1c). Don't confuse
                       "this+N" here with "primitive+N" seen in rendering-side functions
                       (FUN_00a49770, FUN_00a6c920, FUN_00a71490, etc.) - same small numbers,
                       different structs.
                       
                       Called from LH_LoadMeshPrimitiveHeader when its flags byte (this+0xc in ITS
                       OWN struct) bit 0x20 is set (i.e. "this primitive has compressed/quantized
                       vertex data"). Straight sequential float copy, no math - the 14 floats land
                       at staging-struct-offset +0x1c through +0x54:
                         +0x1c..+0x24 (3 floats) Position BBoxMin (x,y,z)
                         +0x28..+0x30 (3 floats) Position BBoxMax (x,y,z)
                         +0x34         UMin
                         +0x38         VMin
                         +0x3c         UMax
                         +0x40         VMax
                         +0x44..+0x50 (4 floats) UNCONFIRMED - not read by the vertex dequantizer
                       FUN_00a39e80 (which only uses the first 10 floats above). Candidates: a
                       second UV channel's bounds (lightmap UVs, given the room/area-lightmap system
                       found elsewhere in this codebase), or a bounding-sphere center+radius.
                       
                       This exact 10-float subset (BBoxMin/BBoxMax/UVMin/UVMax) is passed as the
                       reference array to FUN_00a39e80 to reconstruct each compressed vertex's
                       position/UV via LERP, entirely within the loader - these values are consumed
                       immediately during parsing and may or may not be retained anywhere in the
                       final persistent primitive object (not checked). */
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (int)(param_1 + 10) + (0x10 - (int)param_1);
}


//// FUNCTION LH_LoadMeshHeader @ 009dadd0 ////

int __thiscall LH_LoadMeshHeader(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
                    /* CONFIRMED: reads the fixed .msh file header (called from FUN_009deb10, the
                       real mesh parser). Maps raw file bytes to output struct fields (this+N below
                       = file offset N, since it's a straight sequential copy):
                       
                       file 0x00 dword FormatVersion (must be 10 - caller aborts otherwise)
                       file 0x04 dword NumTextureNames
                       file 0x08 dword NumMaterials
                       file 0x0c dword NumSubmeshes
                       file 0x10-0x13  four flag/data bytes, meaning not decoded
                       file 0x14 byte  flags folded into mesh+0xe4 bits (0x38/0x40 mask) - likely
                       skeletal/attachment related
                       file 0x15 byte  flag/data byte, meaning not decoded
                       file 0x16 byte  CONTROL byte: bit1 -> optional dword present, bit6 ->
                       optional dword present,
                                       bit7(sign) -> optional dword present. Every real file checked
                       has this = 0xC2
                                       (all three optional dwords present, all three always read as
                       0)
                       file 0x17 byte  read but unused
                       file 0x18/0x1c/0x20 dword each, present per control-byte bits above (all = 0
                       in every real file checked)
                       
                       For every sample checked (control byte 0xC2), this makes the header exactly
                       0x24 (36) bytes; variable-length
                       data (the texture name table) starts immediately at file offset 0x24. */
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
  *(undefined1 *)((int)this + 0x16) = *(undefined1 *)((int)param_1 + 0x16);
  *(undefined1 *)((int)this + 0x17) = *(undefined1 *)((int)param_1 + 0x17);
  bVar1 = *(byte *)((int)this + 0x16);
  puVar2 = param_1 + 6;
  if ((bVar1 & 2) == 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = *puVar2;
    puVar2 = param_1 + 7;
  }
  if ((bVar1 & 0x40) == 0) {
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = *puVar2;
    puVar2 = puVar2 + 1;
  }
  if ((char)bVar1 < '\0') {
    *(undefined4 *)((int)this + 0x20) = *puVar2;
    return (int)puVar2 + (4 - (int)param_1);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  return (int)puVar2 - (int)param_1;
}


//// FUNCTION LH_LoadMeshMaterial @ 009daeb0 ////

int __thiscall LH_LoadMeshMaterial(void *this,undefined1 *param_1)

{
                    /* CONFIRMED: per-material record parser for the .msh binary format (0x14 or
                       0x18 bytes on disk, depending on flag S2/file+0xE bit2 - see below). Called
                       from LH_LoadMeshBinary once per entry in the material table; that caller
                       immediately expands this raw record into a 0x24 (36) byte in-memory material
                       entry (array at mesh+0x34, count at mesh+0x30, stride confirmed via
                       local_1f4+=9 dwords=36 bytes).
                       
                       RAW ON-DISK RECORD FIELDS (byte offsets relative to this function's own
                       param_1, i.e. the material record start):
                         +0x00 byte  S0 = Texture0 index (0xFF = no texture0) into the mesh's
                       texture array (mesh+0x3c)
                         +0x01 byte  S1 = copied to matEntry+0x09 (gated, see below) - meaning not
                       confirmed
                         +0x02 byte  S2 = Texture1 index (0xFF = no texture1) into mesh+0x3c
                         +0x03 byte  S3 = copied to matEntry+0x0B (gated) - meaning not confirmed
                         +0x04 dword D1 = flag bits: bit0->matEntry+0x10 bit25, bit1->matEntry+0x14
                       bit8, bit2->forces matEntry+0x0C(TypeCode)=0xB (checked last, overrides
                       everything), byte3(D1b3)->if nonzero, TypeCode=5
                         +0x08 dword D2 = flag bits: bit0->matEntry+0x10 bit29,
                       byte1(D2b1)bit0->matEntry+0x14 bit1 (also gates whether S1/D3b1/S3 get copied
                       to matEntry+0x09/0x0F/0x0B), byte2/byte3(D2b2/D2b3) nonzero-check->triggers a
                       material refresh (FUN_00995ab0) + conditionally sets matEntry+0x14 bit5,
                       always sets bit4
                         +0x0c dword D3 = flag bits: byte0(D3b0=file+0xC) nonzero->TypeCode=0x18,
                       forces matEntry+0x10 bit24 clear;
                                          byte2(D3b2=file+0xE): bit0->TypeCode=0x1B + clears
                       matEntry+0x10 bit24 + sets matEntry+0x14 bit3;
                                            bit1(inverted)->matEntry+0x10 bit30;
                       bit3(inverted)->matEntry+0x10 bit24 (initial value, may be
                                            overridden by D3b0/D3b2.bit0 above); bit4->matEntry+0x14
                       bit3 (same bit as D3b2.bit0, effectively OR'd);
                                            bit5->matEntry+0x14 bit6; bit6->matEntry+0x14 bit7
                       (which if set ORs mesh+0xe4 bit21); sign
                                            bit7, combined with TypeCode==3 or 5, forces TypeCode=7
                         +0x10 dword D4 = copied VERBATIM to matEntry+0x00 (dword) - likely a color
                       (RGBA) or material ID, not decoded further
                         +0x14 dword D5 = OPTIONAL (present only if D3b2/file+0xE bit2 set - true in
                       every real file checked): byte0/1/2
                                          copied to matEntry+0x10 bytes 0/1/2 (matEntry+0x11!=0 ->
                       sets matEntry+0x10 bit28; matEntry+0x10
                                          byte0!=0 -> sets bit27)
                       
                       IN-MEMORY MATERIAL ENTRY (matEntry, 0x24=36 bytes):
                         +0x00 dword  = D4, direct copy (color/ID?)
                         +0x08 byte   = Texture0 raw index (S0)
                         +0x09 byte   = S1 (gated copy)
                         +0x0A byte   = Texture1 raw index (S2)
                         +0x0B byte   = S3 (gated copy)
                         +0x0C byte   = "TypeCode" - an enum-like state byte, observed values 0 (no
                       texture0), 3 (has texture0, baseline),
                                        5 (has texture0 + D1b3 set), 7 (TypeCode was 3/5 AND D3b2
                       sign bit set), 0x18/24 (D3b0 nonzero),
                                        0x1B/27 (D3b2 bit0 set), 0xB/11 (D1 bit2 set, checked
                       last/highest priority) - exact render-mode
                                        meaning of each value not confirmed (would need the renderer
                       code that switches on this byte)
                         +0x0F byte   = D3 byte1 (gated copy)
                         +0x10 dword  = packed flags: byte0/1/2 = D5 (if present),
                       bit24=NOT(D3b2.bit3) or cleared by D3b0/D3b2.bit0,
                                        bit25=D1.bit0, bit26="has texture1" (set when S2!=0xFF and
                       global DAT_0105be08 set), bit27=(D5 byte0!=0),
                                        bit28=(D5 byte1!=0), bit29=D2.bit0, bit30=NOT(D3b2.bit1)
                         +0x14 dword  = packed flags: bit1=D2b1.bit0, bit3=D3b2.bit4 OR D3b2.bit0,
                       bit4=set whenever D2b2/D2b3 nonzero,
                                        bit5=D2b3!=0, bit6=D3b2.bit5, bit7=D3b2.bit6, bit8=D1.bit1
                         +0x18 dword  = Texture0 resolved resource pointer (via
                       Engine_SetResourceReference, looked up from mesh+0x3c[S0])
                         +0x1C dword  = Texture1 resolved resource pointer (via FUN_00994bc0, looked
                       up from mesh+0x3c[S2]) - only if
                                        "has texture1" (S2!=0xFF and DAT_0105be08 set); also sets
                       mesh+0xe4 bit25 ("mesh has multi-texture material")
                       
                       Side effects on the owning mesh object: mesh+0xe4 bit21 set if matEntry+0x14
                       bit7 ends up set; mesh+0xe4 bit25 set if any material has a second texture.
                        */
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_1[3];
  *(undefined1 *)((int)this + 4) = param_1[4];
  *(undefined1 *)((int)this + 5) = param_1[5];
  *(undefined1 *)((int)this + 6) = param_1[6];
  *(undefined1 *)((int)this + 7) = param_1[7];
  *(undefined1 *)((int)this + 8) = param_1[8];
  *(undefined1 *)((int)this + 9) = param_1[9];
  *(undefined1 *)((int)this + 10) = param_1[10];
  *(undefined1 *)((int)this + 0xb) = param_1[0xb];
  *(undefined1 *)((int)this + 0xc) = param_1[0xc];
  *(undefined1 *)((int)this + 0xd) = param_1[0xd];
  *(undefined1 *)((int)this + 0xe) = param_1[0xe];
  *(undefined1 *)((int)this + 0xf) = param_1[0xf];
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  if ((*(byte *)((int)this + 0xe) & 4) != 0) {
    *(undefined1 *)((int)this + 0x14) = param_1[0x14];
    *(undefined1 *)((int)this + 0x15) = param_1[0x15];
    *(undefined1 *)((int)this + 0x16) = param_1[0x16];
    *(undefined1 *)((int)this + 0x17) = param_1[0x17];
    return 0x18;
  }
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  return (int)(param_1 + 0x14) - (int)param_1;
}


//// FUNCTION FUN_009dafd0 @ 009dafd0 ////

void * __thiscall FUN_009dafd0(void *this,byte param_1)

{
  FUN_00a71e90((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009db0b0 @ 009db0b0 ////

void * __thiscall FUN_009db0b0(void *this,byte param_1)

{
  FUN_00a73660((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009db1e0 @ 009db1e0 ////

uint __fastcall FUN_009db1e0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0xe4) >> 6;
  if ((uVar1 & 1) == 0) {
    return (*(uint *)(param_1 + 0xe4) >> 0xe) << 8;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar2 = *(uint **)(param_1 + 0x3c);
    do {
      uVar1 = *puVar2;
      if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x54) & 8) == 0)) {
        return uVar1 & 0xffffff00;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_009db220 @ 009db220 ////

void __thiscall FUN_009db220(void *this,int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int local_5c;
  int local_58;
  
  fVar10 = 1.0 - param_3;
  local_58 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piVar5 = *(int **)(*(int *)((int)this + 0x2c) + local_58 * 4);
      local_5c = 0;
      if (0 < *piVar5) {
        do {
          iVar6 = *(int *)(piVar5[1] + local_5c * 4);
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + local_58 * 4) + 4) +
                          local_5c * 4);
          iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x2c) + local_58 * 4) + 4) +
                          local_5c * 4);
          iVar14 = 0;
          if (0 < *(int *)(iVar6 + 0x2c)) {
            iVar15 = 0;
            do {
              iVar9 = *(int *)(iVar8 + 0x30);
              iVar11 = iVar9 + iVar15;
              fVar1 = *(float *)(iVar11 + 4);
              fVar2 = *(float *)(iVar11 + 8);
              pfVar12 = (float *)(*(int *)(iVar7 + 0x30) + iVar15);
              fVar3 = pfVar12[1];
              fVar4 = pfVar12[2];
              pfVar13 = (float *)(*(int *)(iVar6 + 0x30) + iVar15);
              *pfVar13 = fVar10 * *pfVar12 + param_3 * *(float *)(iVar9 + iVar15);
              pfVar13[1] = fVar10 * fVar3 + param_3 * fVar1;
              pfVar13[2] = fVar10 * fVar4 + param_3 * fVar2;
              iVar11 = *(int *)(iVar8 + 0x30);
              iVar9 = iVar11 + 0xc + iVar15;
              fVar1 = *(float *)(iVar9 + 4);
              pfVar12 = (float *)(iVar15 + 0xc + *(int *)(iVar6 + 0x30));
              fVar2 = *(float *)(iVar9 + 8);
              pfVar13 = (float *)(*(int *)(iVar7 + 0x30) + 0xc + iVar15);
              fVar3 = pfVar13[1];
              fVar4 = pfVar13[2];
              *pfVar12 = fVar10 * *pfVar13 + param_3 * *(float *)(iVar11 + 0xc + iVar15);
              pfVar12[1] = fVar10 * fVar3 + param_3 * fVar1;
              pfVar12[2] = fVar10 * fVar4 + param_3 * fVar2;
              FUN_00412e20((float *)(iVar15 + 0xc + *(int *)(iVar6 + 0x30)));
              iVar14 = iVar14 + 1;
              iVar15 = iVar15 + 0x20;
            } while (iVar14 < *(int *)(iVar6 + 0x2c));
          }
          local_5c = local_5c + 1;
        } while (local_5c < *piVar5);
      }
      local_58 = local_58 + 1;
    } while (local_58 < *(int *)((int)this + 0x28));
  }
  return;
}


//// FUNCTION FUN_009db400 @ 009db400 ////

float * __thiscall FUN_009db400(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int local_4;
  
  pfVar2 = param_1;
  piVar4 = *(int **)((int)this + 0x2c);
  pfVar7 = *(float **)(**(int **)(*piVar4 + 4) + 0x30);
  local_4 = *(int *)((int)this + 0x28);
  param_1 = (float *)SQRT((*pfVar7 - *param_1) * (*pfVar7 - *param_1) +
                          (pfVar7[1] - param_1[1]) * (pfVar7[1] - param_1[1]) +
                          (pfVar7[2] - param_1[2]) * (pfVar7[2] - param_1[2]));
  if (0 < local_4) {
    do {
      iVar6 = *(int *)*piVar4;
      if (0 < iVar6) {
        piVar8 = (int *)((int *)*piVar4)[1];
        do {
          iVar5 = *(int *)(*piVar8 + 0x2c);
          if (0 < iVar5) {
            pfVar3 = *(float **)(*piVar8 + 0x30);
            do {
              pfVar1 = (float *)SQRT((*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2) +
                                     (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
                                     (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]));
              if ((float)pfVar1 < (float)param_1) {
                pfVar7 = pfVar3;
                param_1 = pfVar1;
              }
              pfVar3 = pfVar3 + 8;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          piVar8 = piVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      piVar4 = piVar4 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return pfVar7;
}


//// FUNCTION FUN_009db4f0 @ 009db4f0 ////

uint __thiscall FUN_009db4f0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_14;
  int local_10;
  
  local_14 = FUN_009da7c0((int)this);
  if ((param_1 != 0) &&
     (local_14 = *(uint *)((int)this + 0x28), local_14 == *(uint *)(param_1 + 0x28))) {
    local_10 = 0;
    if (0 < (int)local_14) {
      do {
        local_14 = *(uint *)((int)this + 0x2c);
        piVar1 = *(int **)(local_14 + local_10 * 4);
        piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + local_10 * 4);
        if (*piVar1 != *piVar2) goto LAB_009db5db;
        local_14 = 0;
        if (0 < *piVar1) {
          do {
            iVar3 = *(int *)(piVar1[1] + local_14 * 4);
            iVar4 = *(int *)(piVar2[1] + local_14 * 4);
            if (*(int *)(iVar3 + 0x2c) != *(int *)(iVar4 + 0x2c)) goto LAB_009db5db;
            iVar7 = 0;
            if (0 < *(int *)(iVar3 + 0x2c)) {
              iVar5 = 0;
              do {
                puVar8 = (undefined4 *)(*(int *)(iVar4 + 0x30) + iVar5);
                puVar9 = (undefined4 *)(*(int *)(iVar3 + 0x30) + iVar5);
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar9 = puVar9 + 1;
                }
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + 0x20;
              } while (iVar7 < *(int *)(iVar3 + 0x2c));
            }
            local_14 = local_14 + 1;
          } while ((int)local_14 < *piVar1);
        }
        local_14 = *(uint *)((int)this + 0x28);
        local_10 = local_10 + 1;
      } while (local_10 < (int)local_14);
    }
    return CONCAT31((int3)(local_14 >> 8),1);
  }
LAB_009db5db:
  return local_14 & 0xffffff00;
}


//// FUNCTION FUN_009db5f0 @ 009db5f0 ////

void __thiscall
FUN_009db5f0(void *this,float *param_1,float *param_2,float param_3,float param_4,float param_5,
            int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  float *local_128;
  int local_110;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float *local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a0;
  float local_94;
  float local_88;
  float local_84;
  float local_7c;
  float local_70;
  float local_6c;
  float local_64;
  float local_58;
  float local_4c;
  float local_40;
  float local_34;
  float local_28;
  float local_1c;
  float local_18;
  float local_c;
  
  if (param_1 != (float *)0x0) {
    if (param_2 == (float *)0x0) {
      local_134 = 0;
      pfVar9 = param_1;
      if (0 < *(int *)((int)this + 0x28)) {
        do {
          piVar5 = *(int **)(*(int *)((int)this + 0x2c) + local_134 * 4);
          local_138 = 0;
          if (0 < *piVar5) {
            do {
              iVar12 = 0;
              iVar6 = *(int *)(piVar5[1] + local_138 * 4);
              local_130 = 0;
              if (0 < *(int *)(iVar6 + 0x2c)) {
                pfVar7 = pfVar9 + param_6 * 6 + 2;
                pfVar10 = pfVar9 + 5;
                pfVar11 = pfVar9 + param_6 * 0xc + 2;
                do {
                  pfVar8 = (float *)(*(int *)(iVar6 + 0x30) + iVar12);
                  fVar1 = pfVar11[-1];
                  local_58 = param_5 * *pfVar11;
                  fVar2 = pfVar7[-1];
                  local_94 = param_4 * *pfVar7;
                  fVar3 = pfVar10[-4];
                  fVar4 = pfVar10[-3];
                  *pfVar8 = param_4 * pfVar7[-2] + *pfVar9 + param_5 * pfVar11[-2];
                  pfVar8[1] = param_4 * fVar2 + fVar3 + param_5 * fVar1;
                  pfVar8[2] = local_94 + fVar4 + local_58;
                  fVar1 = pfVar11[2];
                  local_88 = param_5 * pfVar11[3];
                  fVar2 = pfVar7[2];
                  local_70 = param_4 * pfVar7[3];
                  fVar3 = pfVar10[-1];
                  fVar4 = *pfVar10;
                  pfVar8[3] = param_4 * pfVar7[1] + pfVar10[-2] + param_5 * pfVar11[1];
                  pfVar8[4] = param_4 * fVar2 + fVar3 + param_5 * fVar1;
                  pfVar8[5] = local_70 + fVar4 + local_88;
                  FUN_00412e20(pfVar8 + 3);
                  pfVar9 = param_1 + 6;
                  pfVar11 = pfVar11 + 6;
                  pfVar7 = pfVar7 + 6;
                  pfVar10 = pfVar10 + 6;
                  local_130 = local_130 + 1;
                  iVar12 = iVar12 + 0x20;
                  param_1 = pfVar9;
                } while (local_130 < *(int *)(iVar6 + 0x2c));
              }
              local_138 = local_138 + 1;
            } while (local_138 < *piVar5);
          }
          local_134 = local_134 + 1;
        } while (local_134 < *(int *)((int)this + 0x28));
      }
    }
    else {
      local_130 = 0;
      pfVar9 = param_1;
      pfVar10 = param_2;
      if (0 < *(int *)((int)this + 0x28)) {
        do {
          piVar5 = *(int **)(*(int *)((int)this + 0x2c) + local_130 * 4);
          local_12c = 0;
          if (0 < *piVar5) {
            do {
              iVar6 = *(int *)(piVar5[1] + local_12c * 4);
              local_134 = 0;
              if (0 < *(int *)(iVar6 + 0x2c)) {
                fVar1 = 1.0 - param_3;
                local_128 = pfVar10 + 5;
                local_110 = 0;
                pfVar11 = pfVar10 + param_6 * 6 + 2;
                pfVar7 = pfVar9 + 5;
                pfVar8 = pfVar10 + param_6 * 0xc + 2;
                pfVar14 = pfVar9 + param_6 * 6 + 2;
                pfVar13 = pfVar9 + param_6 * 0xc + 2;
                do {
                  local_b8 = (float *)(*(int *)(iVar6 + 0x30) + local_110);
                  local_40 = param_5 * *pfVar13;
                  local_1c = param_4 * *pfVar14;
                  local_84 = param_4 * pfVar14[-2] + *param_1;
                  local_7c = local_1c + pfVar7[-3];
                  local_18 = local_84 + param_5 * pfVar13[-2];
                  local_4c = param_5 * *pfVar8;
                  local_34 = param_4 * *pfVar11;
                  local_6c = param_4 * pfVar11[-2] + *param_2;
                  local_64 = local_34 + local_128[-3];
                  local_c = local_6c + param_5 * pfVar8[-2];
                  local_c4 = local_c * param_3;
                  local_c0 = (param_4 * pfVar11[-1] + local_128[-4] + param_5 * pfVar8[-1]) *
                             param_3;
                  local_bc = (local_64 + local_4c) * param_3;
                  local_b4 = local_18 * fVar1;
                  local_b0 = (param_4 * pfVar14[-1] + pfVar7[-4] + param_5 * pfVar13[-1]) * fVar1;
                  *local_b8 = local_b4 + local_c4;
                  local_b8[1] = local_b0 + local_c0;
                  local_b8[2] = (local_7c + local_40) * fVar1 + local_bc;
                  local_88 = param_5 * pfVar13[3];
                  local_28 = param_4 * pfVar14[3];
                  local_a8 = param_4 * pfVar14[1] + pfVar7[-2];
                  local_a0 = local_28 + *pfVar7;
                  local_d0 = local_a8 + param_5 * pfVar13[1];
                  local_cc = param_4 * pfVar14[2] + pfVar7[-1] + param_5 * pfVar13[2];
                  local_c8 = local_a0 + local_88;
                  FUN_00412e20(&local_d0);
                  local_58 = param_5 * pfVar8[3];
                  local_70 = param_4 * pfVar11[3];
                  local_dc = param_4 * pfVar11[1] + local_128[-2] + param_5 * pfVar8[1];
                  local_d8 = param_4 * pfVar11[2] + local_128[-1] + param_5 * pfVar8[2];
                  local_d4 = local_70 + *local_128 + local_58;
                  FUN_00412e20(&local_dc);
                  local_94 = local_d4 * param_3;
                  local_b8[3] = fVar1 * local_d0 + local_dc * param_3;
                  local_b8[4] = local_cc * fVar1 + local_d8 * param_3;
                  local_b8[5] = local_c8 * fVar1 + local_94;
                  FUN_00412e20(local_b8 + 3);
                  pfVar7 = pfVar7 + 6;
                  local_128 = local_128 + 6;
                  pfVar9 = param_1 + 6;
                  pfVar10 = param_2 + 6;
                  local_110 = local_110 + 0x20;
                  pfVar13 = pfVar13 + 6;
                  pfVar14 = pfVar14 + 6;
                  pfVar8 = pfVar8 + 6;
                  pfVar11 = pfVar11 + 6;
                  local_134 = local_134 + 1;
                  param_1 = pfVar9;
                  param_2 = pfVar10;
                } while (local_134 < *(int *)(iVar6 + 0x2c));
              }
              local_12c = local_12c + 1;
            } while (local_12c < *piVar5);
          }
          local_130 = local_130 + 1;
        } while (local_130 < *(int *)((int)this + 0x28));
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_009dbd30 @ 009dbd30 ////

void __thiscall FUN_009dbd30(void *this,int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *local_b0;
  float *local_ac;
  int local_a8;
  int local_9c;
  int local_98;
  int local_90;
  
  if ((param_1 != 0) && (iVar12 = FUN_009d9bb0((int)this), iVar12 == *(int *)(param_1 + 8))) {
    pfVar14 = *(float **)(param_1 + 0xc);
    local_b0 = pfVar14 + *(int *)(param_1 + 8) * 6;
    pfVar16 = pfVar14 + *(int *)(param_1 + 8) * 0xc;
    local_90 = 0;
    local_ac = pfVar14;
    if (0 < *(int *)((int)this + 0x28)) {
      do {
        piVar9 = *(int **)(*(int *)((int)this + 0x2c) + local_90 * 4);
        local_98 = 0;
        if (0 < *piVar9) {
          do {
            iVar12 = *(int *)(piVar9[1] + local_98 * 4);
            local_9c = 0;
            if (0 < *(int *)(iVar12 + 0x2c)) {
              fVar10 = 1.0 - param_3;
              local_a8 = 0;
              pfVar17 = pfVar14 + 5;
              pfVar18 = local_b0 + 5;
              pfVar15 = pfVar16 + 5;
              fVar11 = 1.0 - param_2;
              do {
                pfVar13 = (float *)(*(int *)(iVar12 + 0x30) + local_a8);
                fVar1 = pfVar15[-4];
                fVar2 = pfVar15[-3];
                fVar3 = pfVar18[-4];
                fVar4 = pfVar18[-3];
                fVar5 = pfVar17[-4];
                fVar6 = pfVar17[-3];
                *pfVar13 = param_2 * *local_b0 + *pfVar14 + param_3 * *pfVar16;
                pfVar13[1] = param_2 * fVar3 + fVar5 + param_3 * fVar1;
                pfVar13[2] = param_2 * fVar4 + fVar6 + param_3 * fVar2;
                fVar1 = pfVar15[-1];
                fVar2 = *pfVar15;
                fVar3 = pfVar17[-1];
                fVar4 = *pfVar17;
                fVar5 = pfVar18[-1];
                fVar6 = *pfVar18;
                fVar7 = pfVar17[-1];
                fVar8 = *pfVar17;
                pfVar13[3] = fVar11 * pfVar17[-2] + param_2 * pfVar18[-2] + fVar10 * pfVar17[-2] +
                             param_3 * pfVar15[-2];
                pfVar13[4] = fVar11 * fVar7 + param_2 * fVar5 + fVar10 * fVar3 + param_3 * fVar1;
                pfVar13[5] = fVar11 * fVar8 + param_2 * fVar6 + fVar10 * fVar4 + param_3 * fVar2;
                FUN_00412e20(pfVar13 + 3);
                pfVar14 = local_ac + 6;
                local_a8 = local_a8 + 0x20;
                local_b0 = local_b0 + 6;
                pfVar17 = pfVar17 + 6;
                pfVar18 = pfVar18 + 6;
                pfVar16 = pfVar16 + 6;
                pfVar15 = pfVar15 + 6;
                local_9c = local_9c + 1;
                local_ac = pfVar14;
              } while (local_9c < *(int *)(iVar12 + 0x2c));
            }
            local_98 = local_98 + 1;
          } while (local_98 < *piVar9);
        }
        local_90 = local_90 + 1;
      } while (local_90 < *(int *)((int)this + 0x28));
    }
  }
  return;
}


//// FUNCTION FUN_009dc040 @ 009dc040 ////

uint __cdecl FUN_009dc040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint in_EAX;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int local_18;
  
  if ((param_1 == 0) || (in_EAX = 0, param_2 == 0)) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != *(int *)(param_2 + 0x28)) {
    return param_2 & 0xffffff00;
  }
  local_18 = 0;
  if (0 < iVar1) {
    puVar10 = *(undefined4 **)(param_2 + 0x2c);
    iVar11 = *(int *)(param_1 + 0x2c) - (int)puVar10;
    do {
      piVar8 = *(int **)(iVar11 + (int)puVar10);
      iVar2 = *piVar8;
      if (iVar2 != *(int *)*puVar10) {
LAB_009dc182:
        return (uint)piVar8 & 0xffffff00;
      }
      param_1 = 0;
      if (0 < iVar2) {
        piVar12 = (int *)((int *)*puVar10)[1];
        iVar7 = piVar8[1] - (int)piVar12;
        do {
          piVar8 = *(int **)(iVar7 + (int)piVar12);
          iVar3 = *piVar12;
          if ((piVar8[0xb] != *(int *)(iVar3 + 0x2c)) ||
             (iVar4 = piVar8[7], iVar4 != *(int *)(iVar3 + 0x1c))) goto LAB_009dc182;
          iVar9 = 0;
          bVar6 = true;
          if (0 < iVar4) {
            iVar3 = *(int *)(iVar3 + 0x20);
            iVar5 = piVar8[8];
            do {
              piVar8 = (int *)(iVar9 * 6);
              if (((*(short *)(iVar5 + (int)piVar8) != *(short *)(iVar3 + (int)piVar8)) ||
                  (*(short *)(iVar5 + 2 + (int)piVar8) != *(short *)(iVar3 + 2 + (int)piVar8))) ||
                 (*(short *)(iVar5 + 4 + (int)piVar8) != *(short *)(iVar3 + 4 + (int)piVar8))) {
                bVar6 = false;
                iVar9 = iVar4;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar4);
            if (!bVar6) goto LAB_009dc182;
          }
          param_1 = param_1 + 1;
          piVar12 = piVar12 + 1;
        } while (param_1 < iVar2);
      }
      param_2 = local_18 + 1;
      puVar10 = puVar10 + 1;
      local_18 = param_2;
    } while (param_2 < iVar1);
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


//// FUNCTION FUN_009dc1a0 @ 009dc1a0 ////

void __fastcall FUN_009dc1a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *this;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar3 = 0;
    do {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x34) + 8 + iVar3);
      this = (void *)(*(int *)(param_1 + 0x34) + iVar3);
      if ((bVar1 != 0xff) &&
         (iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + (uint)bVar1 * 4),
         *(int *)((int)this + 0x18) != iVar2)) {
        Engine_SetResourceReference(this,iVar2);
      }
      if ((*(byte *)((int)this + 10) != 0xff) &&
         (iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)((int)this + 10) * 4),
         *(int *)((int)this + 0x1c) != iVar2)) {
        FUN_00994bc0(this,iVar2);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}


//// FUNCTION FUN_009dc210 @ 009dc210 ////

uint __thiscall FUN_009dc210(void *this,float *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_EAX;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  fVar3 = param_2 * param_2;
  param_2 = 0.0;
  if (0 < *(int *)((int)this + 0x28)) {
    piVar6 = *(int **)((int)this + 0x2c);
    do {
      iVar2 = *(int *)*piVar6;
      iVar9 = 0;
      if (0 < iVar2) {
        piVar10 = (int *)((int *)*piVar6)[1];
        do {
          iVar5 = *piVar10;
          piVar1 = (int *)(iVar5 + 0x2c);
          iVar8 = 0;
          if (0 < *piVar1) {
            pfVar7 = *(float **)(iVar5 + 0x30);
            do {
              fVar4 = (*pfVar7 - *param_1) * (*pfVar7 - *param_1) +
                      (pfVar7[1] - param_1[1]) * (pfVar7[1] - param_1[1]) +
                      (pfVar7[2] - param_1[2]) * (pfVar7[2] - param_1[2]);
              iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),
                               (ushort)(fVar4 < fVar3) << 8 |
                               (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                               (ushort)(fVar4 == fVar3) << 0xe);
              if (fVar4 < fVar3) {
                return CONCAT31((int3)((uint)iVar5 >> 8),1);
              }
              iVar8 = iVar8 + 1;
              pfVar7 = pfVar7 + 8;
            } while (iVar8 < *piVar1);
          }
          iVar9 = iVar9 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar9 < iVar2);
      }
      in_EAX = (float)((int)param_2 + 1);
      piVar6 = piVar6 + 1;
      param_2 = in_EAX;
    } while ((int)in_EAX < *(int *)((int)this + 0x28));
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009dc300 @ 009dc300 ////

void __fastcall FUN_009dc300(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  while ((uVar1 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar1 = *(uint *)(param_1 + 0xe4);
  }
  return;
}


//// FUNCTION FUN_009dc330 @ 009dc330 ////

void __thiscall FUN_009dc330(void *this,undefined4 param_1)

{
  int *piVar1;
  void *_Memory;
  
  _Memory = *(void **)((int)this + 0xa0);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)((int)this + 0xa0) = param_1;
    return;
  }
  piVar1 = (int *)((int)_Memory + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa0) = param_1;
  return;
}


//// FUNCTION FUN_009dc380 @ 009dc380 ////

void __fastcall FUN_009dc380(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xa4));
}


//// FUNCTION LH_ExportMeshDebugText @ 009dc3e0 ////

undefined4 __cdecl LH_ExportMeshDebugText(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  uint in_EAX;
  FILE *_File;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  float10 fVar6;
  char *_Format;
  int *local_12c;
  float local_128;
  float local_124;
  int local_120;
  uint local_11c;
  float local_118;
  float local_114;
  float local_110;
  int local_10c;
  char local_108 [260];
  
                    /* CONFIRMED: this is Lionhead's own text-format mesh debug exporter/dumper, NOT
                       used by any shipped .msh (every real game file is pure binary from byte 0).
                       Writes "// The Movies generic mesh file format" plus
                       [SUBMESH]/[PRIMITIVE]/[VERTICES]/POS(...)/UV(...)/NORM(...)/BONES(...)/[TRIANGLES]/IND(...)/[MATERIAL]/[BONE]
                       tags via fwprintf.
                       
                       Valuable as ground truth for the in-memory mesh object layout, which matches
                       the real binary parser (FUN_009deb10) exactly: mesh+0x28=SubmeshCount,
                       +0x2c=SubmeshArray; submesh+0x00=PrimitiveCount, +0x04=PrimitiveArray;
                       primitive+0x1c=TriangleCount, +0x2c=VertexCount, +0x30=VertexArray (32-byte
                       stride: Pos3f@0x00, Norm3f@0x0c, UV2f@0x18); mesh+0x30=MaterialCount,
                       +0x34=MaterialArray. */
  if (((param_1 != 0) && (param_2 != 0)) && (in_EAX = 0, param_3 != 0)) {
    _sprintf(local_108,"%s\\%s.%s");
    _File = _fopen(local_108,"wt");
    in_EAX = 0;
    if (_File != (FILE *)0x0) {
      FID_conflict__fwprintf(_File,"// The Movies generic mesh file format\n\n");
      local_120 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        local_128 = 0.0;
        do {
          piVar5 = *(int **)(*(int *)(param_1 + 0x2c) + local_120 * 4);
          local_12c = piVar5;
          FID_conflict__fwprintf(_File,"[SUBMESH]\n");
          if (*(int *)(param_1 + 0x44) == 0) {
            _Format = "NAME = %s\n\n";
          }
          else {
            _Format = "NAME = \"%s\"\n\n";
          }
          FID_conflict__fwprintf(_File,_Format);
          local_10c = 0;
          if (0 < *piVar5) {
            do {
              pfVar1 = *(float **)(piVar5[1] + local_10c * 4);
              FID_conflict__fwprintf(_File,"[PRIMITIVE]\n");
              FID_conflict__fwprintf(_File,"MATERIAL_ID = %i\n\n");
              FID_conflict__fwprintf(_File,"[VERTICES]\n");
              local_110 = *pfVar1;
              local_11c = 0;
              if (0 < (int)pfVar1[0xb]) {
                local_118 = 0.0;
                local_114 = local_110;
                do {
                  fVar4 = local_118;
                  pfVar2 = (float *)((int)pfVar1[0xc] + (int)local_118);
                  FID_conflict__fwprintf
                            (_File,"POS( %f, %f, %f )\t",(double)*pfVar2,(double)pfVar2[1],
                             (double)*(float *)((int)pfVar1[0xc] + 8 + (int)local_118));
                  FID_conflict__fwprintf
                            (_File,"UV( %f, %f )\t",
                             (double)*(float *)((int)fVar4 + 0x18 + (int)pfVar1[0xc]),
                             (double)*(float *)((int)fVar4 + 0x1c + (int)pfVar1[0xc]));
                  pfVar2 = (float *)((int)fVar4 + 0xc + (int)pfVar1[0xc]);
                  FID_conflict__fwprintf
                            (_File,"NORM( %f, %f, %f )\t",(double)*pfVar2,(double)pfVar2[1],
                             (double)*(float *)((int)fVar4 + 0x14 + (int)pfVar1[0xc]));
                  if (((*(byte *)(param_1 + 0xe4) & 1) == 0) || (local_110 == 0.0)) {
                    FID_conflict__fwprintf(_File,"\n");
                  }
                  else {
                    iVar3 = 0;
                    local_124 = local_114;
                    do {
                      FID_conflict__fwprintf(_File,"BONES( %d, %f )\t");
                      iVar3 = iVar3 + 1;
                      local_124 = (float)((int)local_124 + 4);
                    } while (iVar3 < 4);
                    FID_conflict__fwprintf(_File,"\n");
                    fVar4 = local_118;
                  }
                  local_11c = local_11c + 1;
                  local_118 = (float)((int)fVar4 + 0x20);
                  local_114 = (float)((int)local_114 + 0x14);
                } while ((int)local_11c < (int)pfVar1[0xb]);
              }
              FID_conflict__fwprintf(_File,"[END_VERTICES]\n\n");
              FID_conflict__fwprintf(_File,"[TRIANGLES]\n");
              iVar3 = 0;
              if (0 < (int)pfVar1[7]) {
                local_124 = 0.0;
                do {
                  FID_conflict__fwprintf(_File,"IND( %i, %i, %i )\n");
                  iVar3 = iVar3 + 1;
                  local_124 = (float)((int)local_124 + 6);
                } while (iVar3 < (int)pfVar1[7]);
              }
              FID_conflict__fwprintf(_File,"[END_TRIANGLES]\n\n");
              FID_conflict__fwprintf(_File,"[END_PRIMITIVE]\n\n");
              local_10c = local_10c + 1;
              piVar5 = local_12c;
            } while (local_10c < *local_12c);
          }
          FID_conflict__fwprintf(_File,"[END_SUBMESH]\n\n");
          local_120 = local_120 + 1;
          local_128 = (float)((int)local_128 + 0x80);
        } while (local_120 < *(int *)(param_1 + 0x28));
      }
      local_12c = (int *)0x0;
      if (0 < *(int *)(param_1 + 0x30)) {
        do {
          FID_conflict__fwprintf(_File,"[MATERIAL]\n");
          FID_conflict__fwprintf(_File,"TYPE = \"%s\"\n");
          FID_conflict__fwprintf(_File,"DIFFUSE_TEXTURE_NAME = \"%s\"\n");
          FID_conflict__fwprintf(_File,"[END_MATERIAL]\n\n");
          local_12c = (int *)((int)local_12c + 1);
        } while ((int)local_12c < *(int *)(param_1 + 0x30));
      }
      if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
        FID_conflict__fwprintf(_File,"[BONE]\n");
        FID_conflict__fwprintf(_File,"NAME = \"%s\"\n");
        FID_conflict__fwprintf(_File,"PARENT_NAME = \"\"\n");
        FID_conflict__fwprintf(_File,"POS( 0.0, 0.0, 0.0 )\t ROT( 0.0, 0.0, 0.0 )\n");
        FID_conflict__fwprintf(_File,"[END_BONE]\n\n");
        local_11c = 0;
        if ((*(uint *)(*(int *)(param_1 + 0x40) + 8) & 0xff) != 0) {
          fVar6 = FUN_004012c0(0.0);
          local_110 = (float)fVar6;
          local_120 = 0;
          do {
            FID_conflict__fwprintf(_File,"[BONE]\n");
            iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0xc) + local_120;
            FID_conflict__fwprintf(_File,"NAME = \"%s\"\n");
            FID_conflict__fwprintf(_File,"PARENT_NAME = \"%s\"\n");
            local_128 = local_110;
            local_118 = 0.0;
            local_12c = (int *)0x0;
            FUN_009ab850((void *)(iVar3 + 0x28),&local_118,(float *)&local_12c,&local_128);
            FID_conflict__fwprintf
                      (_File,"POS( %f, %f, %f )\t ROT( %f, %f, %f )\n",
                       (double)*(float *)(iVar3 + 0x4c),(double)*(float *)(iVar3 + 0x50),
                       (double)*(float *)(iVar3 + 0x54),(double)local_118,(double)(float)local_12c,
                       (double)local_128);
            FID_conflict__fwprintf(_File,"[END_BONE]\n\n");
            local_120 = local_120 + 0x88;
            local_11c = local_11c + 1;
          } while (local_11c < (*(uint *)(*(int *)(param_1 + 0x40) + 8) & 0xff));
        }
      }
      iVar3 = _fclose(_File);
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_009dc930 @ 009dc930 ////

bool __fastcall FUN_009dc930(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  while ((uVar1 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar1 = *(uint *)(param_1 + 0xe4);
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    return true;
  }
  iVar2 = FUN_009ac120(*(char **)(*(int *)(param_1 + 0xa4) + 0x10),"[no backdrops]");
  return iVar2 == -1;
}


//// FUNCTION FUN_009dc990 @ 009dc990 ////

void __thiscall FUN_009dc990(void *this,byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_4;
  
  if ((((*(int *)((int)this + 0x28) == 0) || (iVar6 = *(int *)((int)this + 0x2c), iVar6 == 0)) ||
      (*(int *)((int)this + 0x30) == 0)) ||
     ((*(int *)((int)this + 0x34) == 0 || (local_4 = 0, *(int *)((int)this + 0x30) < 1)))) {
    return;
  }
  puVar9 = (undefined4 *)(*(int *)((int)this + 0x34) + 0x18);
  do {
    pbVar4 = (byte *)*puVar9;
    pbVar7 = param_1;
    do {
      bVar2 = *pbVar4;
      bVar10 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_009dca04:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_009dca09;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar10 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_009dca04;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_009dca09:
    if (iVar5 == 0) {
      if (local_4 == 0xffffffff) {
        return;
      }
      iVar5 = 0;
      if (*(int *)((int)this + 0x28) < 1) {
        return;
      }
      do {
        iVar8 = 0;
        if (0 < **(int **)(iVar6 + iVar5 * 4)) {
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + iVar5 * 4) + 4) + iVar8 * 4);
            uVar3 = *(uint *)(iVar6 + 8);
            if ((uVar3 & 0xff) == local_4) {
              *(uint *)(iVar6 + 8) = uVar3 & 0xffffefff;
              puVar1 = (uint *)(*(int *)((int)this + 0x34) + 0x10 + (uVar3 & 0xff) * 0x24);
              *puVar1 = *puVar1 | 0x20000000;
            }
            iVar6 = *(int *)((int)this + 0x2c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < **(int **)(iVar6 + iVar5 * 4));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)this + 0x28));
      return;
    }
    local_4 = local_4 + 1;
    puVar9 = puVar9 + 9;
    if (*(int *)((int)this + 0x30) <= (int)local_4) {
      return;
    }
  } while( true );
}


//// FUNCTION LH_LoadMeshPrimitiveHeader @ 009dcb40 ////

int __thiscall LH_LoadMeshPrimitiveHeader(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_38 [14];
  
                    /* CONFIRMED: per-primitive header decoder, called from the real .msh binary
                       parser FUN_009deb10 while walking a submesh's primitive list. Decodes a
                       packed record from the file buffer into TriangleCount and VertexCount (among
                       other still-unlabeled packed flag fields) and returns bytes consumed so the
                       caller can advance its read pointer. The caller then reads TriangleCount*6
                       bytes as the triangle/index buffer (FUN_00a50940) and VertexCount vertices
                       (FUN_00a39e80 for a compact 16-byte/vertex packed format, or a direct
                       32-byte/vertex float format, chosen by a flag bit). */
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  puVar3 = param_1 + 4;
  if ((*(byte *)((int)this + 0xc) & 0x10) == 0) {
    uVar2 = 0xffffffff;
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    uVar2 = param_1[6];
    puVar3 = param_1 + 7;
  }
  *(undefined4 *)((int)this + 0x18) = uVar2;
  if ((*(byte *)((int)this + 0xc) & 0x20) == 0) {
    puVar4 = local_38;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = local_38;
    puVar5 = (undefined4 *)((int)this + 0x1c);
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    iVar1 = LH_LoadVertexQuantizationBounds((void *)((int)this + 0x1c),puVar3);
    puVar3 = (undefined4 *)((int)puVar3 + iVar1);
  }
  if ((*(byte *)((int)this + 0xc) & 0x40) == 0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    return (int)puVar3 - (int)param_1;
  }
  *(undefined4 *)((int)this + 0x54) = *puVar3;
  return (int)puVar3 + (4 - (int)param_1);
}


//// FUNCTION FUN_009dcc10 @ 009dcc10 ////

void __fastcall FUN_009dcc10(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    FUN_00a71e90((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009dcc30 @ 009dcc30 ////

void __fastcall FUN_009dcc30(char *param_1)

{
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = -0x80;
  param_1[0x43] = '?';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = -0x80;
  param_1[0x33] = '?';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = -0x80;
  param_1[0x23] = '?';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = -0x80;
  param_1[0x73] = '?';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = -0x80;
  param_1[99] = '?';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = -0x80;
  param_1[0x53] = '?';
  builtin_strncpy(param_1,"UNKNOWN",8);
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = -0x80;
  param_1[0x43] = '?';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = -0x80;
  param_1[0x33] = '?';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = -0x80;
  param_1[0x23] = '?';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = -0x80;
  param_1[0x73] = '?';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = -0x80;
  param_1[99] = '?';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = -0x80;
  param_1[0x53] = '?';
  return;
}


//// FUNCTION FUN_009dcce0 @ 009dcce0 ////

void __fastcall FUN_009dcce0(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    FUN_00a73660((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009dcd60 @ 009dcd60 ////

void __fastcall FUN_009dcd60(int param_1)

{
  int *_Memory;
  void **ppvVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf82de;
  pvStack_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      _Memory = *(int **)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
      if (_Memory != (int *)0x0) {
        FUN_00a46b90(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  ExceptionList = ppvVar1;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x2c));
}


//// FUNCTION LH_ComputeMeshBounds @ 009dd0d0 ////

void __fastcall LH_ComputeMeshBounds(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float local_4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  bVar3 = false;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + iVar5 * 4);
      FUN_00a472b0(piVar2);
      pfVar6 = (float *)(piVar2 + 2);
      if (bVar3) {
        FUN_00a47ec0((void *)(param_1 + 200),pfVar6);
      }
      else {
        pfVar7 = (float *)(param_1 + 200);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar7 = pfVar7 + 1;
        }
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar5 = 0;
    local_4 = -3.4028235e+38;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        iVar4 = 0;
        if (0 < **(int **)(*(int *)(param_1 + 0x2c) + iVar5 * 4)) {
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar5 * 4) + 4) +
                            iVar4 * 4);
            fVar8 = FUN_00a6c450(iVar1,(float *)(param_1 + 200));
            if ((float10)local_4 <= fVar8) {
              fVar8 = FUN_00a6c450(iVar1,(float *)(param_1 + 200));
              local_4 = (float)fVar8;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < **(int **)(*(int *)(param_1 + 0x2c) + iVar5 * 4));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x28));
    }
    if (SQRT(local_4) < *(float *)(param_1 + 0xe0)) {
      *(float *)(param_1 + 0xe0) = SQRT(local_4);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009dd190 @ 009dd190 ////

void * __thiscall FUN_009dd190(void *this,byte param_1)

{
  FUN_009dcd60((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009dd1b0 @ 009dd1b0 ////

byte * __thiscall FUN_009dd1b0(void *this,char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *local_130;
  char *local_12c;
  uint local_128;
  char local_124 [20];
  void *local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf8331;
  local_c = ExceptionList;
  bVar3 = false;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  local_110 = this;
  FUN_009d9820();
  FUN_009d9970(this);
  FUN_009d3340(param_1,local_10c,(char *)0x0);
  FUN_009ac040(local_10c);
  _strncpy(this,local_10c,0x20);
  *(undefined1 *)((int)this + 0x1f) = 0;
  bVar1 = false;
  iVar5 = _strncmp(this,"set_",4);
  if ((iVar5 == 0) &&
     (*(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x100000, DAT_0105be08 == 0)) {
    bVar1 = true;
  }
  bVar2 = false;
  if (DAT_0105be08 == 0) {
    if ((*(uint *)((int)this + 0xe4) & 0x100000) == 0) {
      iVar5 = _strncmp(this,"fac_",4);
      if (iVar5 != 0) {
        iVar5 = _strncmp(this,"lot_",4);
        if (iVar5 != 0) {
          iVar5 = _strncmp(this,"p_",2);
          if (iVar5 == 0) {
            uVar6 = FUN_0099dcd0(this);
            if ((char)uVar6 != '\0') {
              bVar2 = true;
            }
          }
          goto LAB_009dd2ed;
        }
      }
    }
    bVar1 = true;
  }
LAB_009dd2ed:
  pcVar11 = &DAT_0105eb50;
  do {
    pcVar9 = pcVar11;
    pcVar11 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  if ((pcVar9 == &DAT_0105eb50) || ((param_1[1] == ':' && (param_1[2] == '\\')))) {
    iVar5 = (int)&DAT_0105bed8 - (int)param_1;
    do {
      cVar4 = *param_1;
      param_1[iVar5] = cVar4;
      param_1 = param_1 + 1;
    } while (cVar4 != '\0');
  }
  else if (bVar1) {
    _sprintf(&DAT_0105bed8,"%s\\%s",&DAT_0105eb50,param_1);
    pcVar11 = param_1 + 1;
    do {
      cVar4 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar4 != '\0');
    pcVar9 = &DAT_0105bed8;
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    (&DAT_0105bed9)[(int)(pcVar10 + (-0x105bed8 - ((int)param_1 - (int)pcVar11)))] = 0x6c;
    (&DAT_0105beda)[(int)(pcVar10 + (-0x105bed8 - ((int)param_1 - (int)pcVar11)))] = 100;
  }
  else if (bVar2) {
    _sprintf(&DAT_0105bed8,"%s\\l%s",&DAT_0105eb50,param_1);
  }
  else {
    _sprintf(&DAT_0105bed8,"%s\\%s",&DAT_0105eb50,param_1);
  }
  *(void **)((int)this + 0x24) = DAT_0105eb44;
  DAT_0105eb44 = this;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  FUN_00a48ba0();
  cVar4 = FUN_00a48b80();
  if (cVar4 == '\0') {
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = (char *)0x0;
    local_128 = 0x14;
    pcVar11 = &DAT_0105bed8;
    do {
      pcVar9 = pcVar11;
      pcVar11 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    pcVar11 = pcVar9 + -0x105bed8;
    if ((char *)0x13 < pcVar11) {
      local_128 = (uint)(pcVar9 + -0x105beb8) & 0xffffffe0;
      local_130 = _malloc(local_128);
    }
    _strncpy(local_130,&DAT_0105bed8,(size_t)pcVar11);
    local_130[(int)pcVar11] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    bVar3 = true;
    local_12c = pcVar11;
    uVar7 = FUN_009d3660(&local_130,(uint *)0x0);
    bVar1 = false;
    if ((char)uVar7 == '\0') goto LAB_009dd46c;
  }
  bVar1 = true;
LAB_009dd46c:
  local_4 = 0;
  if ((bVar3) && (0x14 < local_128)) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  if (bVar1) {
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
    cVar4 = FUN_00a48b70();
    if (cVar4 == '\0') {
      piVar8 = operator_new(0x58);
      local_4._0_1_ = 2;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        FUN_009b38a0(piVar8);
        *piVar8 = (int)&PTR_FUN_00d735cc;
        piVar8[0x15] = (int)this;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      pcVar11 = &DAT_0105bed8;
      do {
        pcVar9 = pcVar11;
        pcVar11 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      FUN_004015d0(piVar8 + 1,&DAT_0105bed8,(uint)(pcVar9 + -0x105bed8));
      uVar6 = FUN_009d3720(piVar8 + 1);
      piVar8[0xb] = uVar6;
      AsyncLoadJob_ExecuteSync(piVar8);
    }
  }
  else {
    *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0xc0;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009dd550 @ 009dd550 ////

void __fastcall FUN_009dd550(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8356;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      puVar4 = *(undefined4 **)(param_1 + 0x2c);
      iVar6 = *(int *)(param_1 + 0x28);
      do {
        iVar3 = iVar3 + *(int *)*puVar4;
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0xc) == iVar3) {
      local_2c = (undefined4 *)0x0;
      local_18 = (undefined4 *)0x0;
      ExceptionList = &local_c;
      iVar3 = FUN_009d9bb0(param_1);
      pvVar1 = *(void **)(param_1 + 0x84);
      if (pvVar1 != (void *)0x0) {
        iVar6 = *(int *)((int)pvVar1 + 8);
        if (iVar6 != iVar3) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        local_2c = *(undefined4 **)((int)pvVar1 + 0xc);
        local_18 = operator_new(iVar6 * 0x48);
        local_4 = 0;
        if (local_18 == (undefined4 *)0x0) {
          local_4 = 0xffffffff;
          local_18 = (undefined4 *)0x0;
        }
        else {
          FUN_00401380(local_18,0x18,iVar6 * 3,&LAB_009dc2f0);
          local_4 = 0xffffffff;
        }
      }
      local_1c = 0;
      local_10 = 0;
      local_30 = local_18;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + local_10 * 4);
          local_20 = 0;
          if (0 < *piVar2) {
            do {
              pvVar1 = *(void **)(piVar2[1] + local_20 * 4);
              puVar4 = operator_new(0x24);
              local_4 = 1;
              if (puVar4 == (undefined4 *)0x0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                puVar7 = puVar4 + 1;
                *puVar4 = 4;
                _eh_vector_constructor_iterator_(puVar7,8,4,FUN_009d9840,FUN_009d5330);
              }
              *(undefined4 **)((int)pvVar1 + 0x24) = puVar7;
              iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x10) + local_1c * 4);
              local_4 = 0xffffffff;
              iVar6 = 0;
              piVar8 = (int *)(iVar3 + 0xc);
              do {
                FUN_00a50da0((void *)(*(int *)((int)pvVar1 + 0x24) + iVar6),piVar8[-1],*piVar8,
                             (undefined4 *)piVar8[2],*piVar8 * 6,piVar8[1]);
                iVar6 = iVar6 + 8;
                piVar8 = piVar8 + 4;
              } while (iVar6 < 0x20);
              if (*(int *)((int)pvVar1 + 0x2c) == *(int *)(iVar3 + 4)) {
                FUN_009d54c0(pvVar1,*(int *)(iVar3 + 0x48));
              }
              if (local_2c != (undefined4 *)0x0) {
                iVar6 = 0;
                if (0 < *(int *)((int)pvVar1 + 0x2c)) {
                  local_24 = local_2c;
                  do {
                    puVar4 = local_30 + (uint)*(ushort *)(*(int *)(iVar3 + 0x48) + iVar6 * 2) * 6;
                    *puVar4 = *local_24;
                    puVar4[1] = local_24[1];
                    puVar4[2] = local_24[2];
                    puVar4[3] = local_24[3];
                    puVar4[4] = local_24[4];
                    puVar4[5] = local_24[5];
                    iVar5 = *(int *)(*(int *)(param_1 + 0x84) + 8);
                    puVar4 = local_2c + (iVar5 + iVar6) * 6;
                    puVar7 = local_30 +
                             ((uint)*(ushort *)(*(int *)(iVar3 + 0x48) + iVar6 * 2) + iVar5) * 6;
                    *puVar7 = *puVar4;
                    puVar7[1] = puVar4[1];
                    puVar7[2] = puVar4[2];
                    puVar7[3] = puVar4[3];
                    puVar7[4] = puVar4[4];
                    puVar7[5] = puVar4[5];
                    iVar5 = iVar5 + *(int *)(*(int *)(param_1 + 0x84) + 8);
                    puVar4 = local_2c + (iVar5 + iVar6) * 6;
                    puVar7 = local_30 +
                             ((uint)*(ushort *)(*(int *)(iVar3 + 0x48) + iVar6 * 2) + iVar5) * 6;
                    *puVar7 = *puVar4;
                    puVar7[1] = puVar4[1];
                    puVar7[2] = puVar4[2];
                    puVar7[3] = puVar4[3];
                    puVar7[4] = puVar4[4];
                    puVar7[5] = puVar4[5];
                    iVar6 = iVar6 + 1;
                    local_24 = local_24 + 6;
                  } while (iVar6 < *(int *)((int)pvVar1 + 0x2c));
                }
                local_2c = local_2c + *(int *)((int)pvVar1 + 0x2c) * 6;
                local_30 = local_30 + *(int *)((int)pvVar1 + 0x2c) * 6;
              }
              local_20 = local_20 + 1;
              local_1c = local_1c + 1;
            } while (local_20 < *piVar2);
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(param_1 + 0x28));
      }
      iVar3 = *(int *)(param_1 + 0x84);
      if (iVar3 != 0) {
        puVar4 = local_18;
        puVar7 = *(undefined4 **)(iVar3 + 0xc);
        for (iVar6 = (*(int *)(iVar3 + 8) * 9 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  return;
}


//// FUNCTION FUN_009dd8d0 @ 009dd8d0 ////

void __thiscall FUN_009dd8d0(void *this,float *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  bool bVar9;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_30 [4];
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  while ((uVar1 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar1 = *(uint *)((int)this + 0xe4);
  }
  local_48 = *(float *)((int)this + 200) - *(float *)((int)this + 0xd4);
  local_44 = *(float *)((int)this + 0xcc) - *(float *)((int)this + 0xd8);
  local_54 = *(float *)((int)this + 0xd4) + *(float *)((int)this + 200);
  local_50 = *(float *)((int)this + 0xd8) + *(float *)((int)this + 0xcc);
  iVar4 = *(int *)((int)this + 0x88);
  if ((iVar4 != 0) && (iVar6 = *(int *)(iVar4 + 8), 0 < iVar6)) {
    pfVar5 = *(float **)(iVar4 + 0xc);
    do {
      iVar4 = 8;
      bVar9 = true;
      pfVar7 = pfVar5 + 3;
      pcVar8 = "_fp_min";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *(char *)pfVar7 == *pcVar8;
        pfVar7 = (float *)((int)pfVar7 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        local_48 = *pfVar5;
        local_44 = pfVar5[1];
      }
      else {
        iVar4 = 8;
        bVar9 = true;
        pfVar7 = pfVar5 + 3;
        pcVar8 = "_fp_max";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *(char *)pfVar7 == *pcVar8;
          pfVar7 = (float *)((int)pfVar7 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          local_54 = *pfVar5;
          local_50 = pfVar5[1];
        }
      }
      pfVar5 = pfVar5 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  fVar2 = (local_54 + local_48) * 0.5;
  fVar3 = (local_50 + local_44) * 0.5;
  local_54 = local_54 - fVar2;
  local_50 = local_50 - fVar3;
  local_30[0] = 1.0 / (local_54 + local_54);
  local_20 = 1.0 / (local_50 + local_50);
  local_30[3] = local_30[0] * 0.0;
  local_18 = local_30[0] * 0.0;
  local_c = local_30[0] * (local_54 - fVar2);
  local_30[1] = local_20 * 0.0;
  local_14 = local_20 * 0.0;
  local_8 = local_20 * (local_50 - fVar3);
  local_30[2] = -NAN;
  local_1c = 0xffc00000;
  local_10 = 0x7f800000;
  local_4 = 0xffc00000;
  pfVar5 = local_30;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_009ddc70 @ 009ddc70 ////

/* WARNING: Removing unreachable block (ram,0x009dddbd) */
/* WARNING: Removing unreachable block (ram,0x009dde57) */
/* WARNING: Removing unreachable block (ram,0x009dde8c) */

int * __thiscall FUN_009ddc70(void *this,int *param_1,char param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  uint _Size;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  char *local_230;
  uint local_22c;
  uint local_228;
  char local_224 [20];
  undefined4 local_210;
  char local_20c [256];
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf838b;
  local_c = ExceptionList;
  local_230 = local_224;
  local_210 = 0;
  local_224[0] = '\0';
  local_228 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_230,"",0);
  local_224[0] = '\0';
  local_4 = 0;
  pcVar2 = this;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - ((int)this + 1)) < 5) {
    *param_1 = (int)(param_1 + 3);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_230,0);
  }
  else {
    if (param_2 == '\0') {
      _sprintf(local_20c,"%s_mv1",this);
      FUN_009ac0b0(local_20c);
      cVar1 = FUN_009b09f0((int)local_20c);
      if (cVar1 == '\0') {
        FUN_009ddc70(this,param_1,'\x01',param_3);
        ExceptionList = local_c;
        return param_1;
      }
      FUN_009ac0b0(local_20c);
      pcVar2 = local_20c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_22c = (int)pcVar2 - (int)(local_20c + 1);
      if (0x13 < local_22c) {
        local_228 = local_22c + 0x20 & 0xffffffe0;
        local_230 = _malloc(local_228);
      }
      _strncpy(local_230,local_20c,local_22c);
      local_230[local_22c] = '\0';
    }
    else {
      *param_3 = -1;
      uVar5 = FUN_00433c10();
      for (iVar4 = (int)uVar5; 0 < iVar4; iVar4 = iVar4 + -1) {
        _sprintf(acStack_10c,"%s_%d",this,iVar4);
        FUN_009ac0b0(acStack_10c);
        cVar1 = FUN_009b09f0((int)acStack_10c);
        if (cVar1 != '\0') {
          *param_3 = iVar4;
          break;
        }
      }
      if (*param_3 == -1) {
        *param_3 = 0;
      }
      _sprintf(local_20c,"%s_%d",this,*param_3);
      FUN_009ac0b0(local_20c);
      pcVar2 = local_20c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_22c = (int)pcVar2 - (int)(local_20c + 1);
      if (0x13 < local_22c) {
        local_228 = local_22c + 0x20 & 0xffffffe0;
        local_230 = _malloc(local_228);
      }
      _strncpy(local_230,local_20c,local_22c);
      local_230[local_22c] = '\0';
    }
    param_1[2] = 0x14;
    *param_1 = (int)(param_1 + 3);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    if (0x13 < local_22c) {
      _Size = local_22c + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar3 = _malloc(_Size);
      *param_1 = (int)pvVar3;
    }
    _strncpy((char *)*param_1,local_230,local_22c);
    param_1[1] = local_22c;
    *(undefined1 *)(local_22c + *param_1) = 0;
    if (0x14 < local_228) {
                    /* WARNING: Subroutine does not return */
      _free(local_230);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009ddf60 @ 009ddf60 ////

undefined4 * __thiscall FUN_009ddf60(void *this,undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  size_t _Count;
  char local_100 [256];
  
  uVar2 = *(uint *)((int)this + 0xe4);
  while ((uVar2 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar2 = *(uint *)((int)this + 0xe4);
  }
  if ((param_2 == (char *)0x0) || (*(int *)((int)this + 0xa4) == 0)) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
    return param_1;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_2 + 1);
  if ((pcVar3 == param_2 + 1) ||
     (iVar5 = FUN_009ac120(*(char **)(*(int *)((int)this + 0xa4) + 0x10),param_2), iVar5 == -1)) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
    return param_1;
  }
  pcVar3 = (char *)(*(int *)(*(int *)((int)this + 0xa4) + 0x10) + iVar5);
  iVar5 = FUN_009ac120(pcVar3,":");
  if (((iVar5 != -1) && (iVar5 == iVar4)) ||
     ((iVar5 = FUN_009ac120(pcVar3,"="), iVar5 != -1 && (iVar5 == iVar4)))) {
    _Count = FUN_009ac120(pcVar3 + iVar5 + 1,"]");
    if ((_Count != 0xffffffff) && ((int)_Count < 0x20)) {
      _strncpy(local_100,pcVar3 + iVar5 + 1,_Count);
      pcVar3 = local_100;
      local_100[_Count] = '\0';
      goto LAB_009de07a;
    }
  }
  pcVar3 = "";
LAB_009de07a:
  FUN_00401de0(param_1,pcVar3,0xffffffff);
  return param_1;
}


//// FUNCTION FUN_009de0e0 @ 009de0e0 ////

long __fastcall FUN_009de0e0(void *param_1)

{
  uint uVar1;
  long lVar2;
  char *local_20;
  int local_1c;
  uint local_18;
  
  uVar1 = *(uint *)((int)param_1 + 0xe4);
  while ((uVar1 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar1 = *(uint *)((int)param_1 + 0xe4);
  }
  FUN_009ddf60(param_1,&local_20,"set dressing");
  if (local_1c != 0) {
    lVar2 = _atol(local_20);
    if (local_18 < 0x15) {
      return lVar2;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (local_18 < 0x15) {
    return 9;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_009de1d0 @ 009de1d0 ////

byte * __cdecl FUN_009de1d0(char *param_1,byte param_2)

{
  byte bVar1;
  void *this;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf83ae;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  ExceptionList = &local_c;
  FUN_009d3340(param_1,(char *)local_10c,(char *)0x0);
  FUN_009ac040((char *)local_10c);
  pbVar4 = (byte *)(-(uint)(param_2 != 0) & DAT_0105eb44);
  do {
    if (pbVar4 == (byte *)0x0) {
      iVar3 = _strncmp((char *)local_10c,"set_",4);
      if (((iVar3 == 0) || (iVar3 = _strncmp((char *)local_10c,"fac_",4), iVar3 == 0)) &&
         (param_2 == 0)) {
        param_2 = 1;
      }
      DAT_00e68310 = param_2;
      this = operator_new(0xe8);
      local_4 = 0;
      if (this == (void *)0x0) {
        pbVar4 = (byte *)0x0;
      }
      else {
        pbVar4 = FUN_009dd1b0(this,param_1);
      }
      uVar6 = *(uint *)(pbVar4 + 0xe4) ^ ((uint)param_2 << 1 ^ *(uint *)(pbVar4 + 0xe4)) & 2;
      *(uint *)(pbVar4 + 0xe4) = uVar6;
      if (((uVar6 & 2) != 0) && (DAT_0105c2e0 == '\0')) {
        *(int *)(pbVar4 + 0x20) = *(int *)(pbVar4 + 0x20) + 1;
      }
      if ((DAT_010b956d != '\0') || (DAT_010b956d = 0, (uVar6 & 0x8000000) != 0)) {
        DAT_010b956d = 1;
      }
      ExceptionList = local_c;
      return pbVar4;
    }
    if ((pbVar4[0xe4] & 2) != 0) {
      pbVar5 = local_10c;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_009de274:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009de279;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_009de274;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_009de279:
      if (iVar3 == 0) {
        *(int *)(pbVar4 + 0x20) = *(int *)(pbVar4 + 0x20) + 1;
        if ((DAT_010b956d != '\0') ||
           (DAT_010b956d = 0, (*(uint *)(pbVar4 + 0xe4) & 0x8000000) != 0)) {
          DAT_010b956d = 1;
        }
        ExceptionList = local_c;
        return pbVar4;
      }
    }
    pbVar4 = *(byte **)(pbVar4 + 0x24);
  } while( true );
}


//// FUNCTION FUN_009de3b0 @ 009de3b0 ////

void __fastcall FUN_009de3b0(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x20) + -1;
  *(int *)((int)param_1 + 0x20) = iVar1;
  if (((DAT_0105c2e0 == '\0') && ((*(byte *)((int)param_1 + 0xe4) & 2) != 0)) && (iVar1 == 1)) {
    *(undefined4 *)((int)param_1 + 0xc0) = DAT_0105be98;
    return;
  }
  if (iVar1 == 0) {
    FUN_009dcd60((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009de400 @ 009de400 ////

void __thiscall FUN_009de400(void *this,int param_1,char *param_2)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar10 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf83d6;
  local_c = ExceptionList;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (iVar9 = *(int *)(param_1 + 0xc), iVar9 == 0))
  {
    return;
  }
  ExceptionList = &local_c;
  param_2 = operator_new(iVar9 * 0x54);
  local_4 = 0;
  if (param_2 == (char *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    FUN_00401380(param_2,0x54,iVar9,&LAB_009ddaf0);
  }
  iVar9 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0xc)) {
    pcVar7 = param_2 + 0x50;
    do {
      pcVar2 = pcVar10;
      pcVar13 = pcVar7 + -0x50;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar13 = pcVar13 + 4;
      }
      pcVar2 = pcVar10 + 0x20;
      pcVar13 = pcVar7 + -0x30;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar13 = pcVar13 + 4;
      }
      *pcVar7 = pcVar10[0x50];
      pcVar2 = pcVar10 + 0x52;
      pcVar7[1] = pcVar10[0x51];
      pcVar10 = pcVar10 + 0x54;
      *(undefined2 *)(pcVar7 + 2) = *(undefined2 *)pcVar2;
      iVar9 = iVar9 + 1;
      pcVar7 = pcVar7 + 0x54;
    } while (iVar9 < *(int *)(param_1 + 0xc));
  }
  if (*(int *)((int)this + 0x48) == 0) {
    iVar9 = *(int *)(param_1 + 0xc);
    *(int *)((int)this + 0x48) = iVar9;
    pvVar4 = operator_new(iVar9 * 0x50);
    local_4 = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar4,0x50,iVar9,&LAB_009dcb10);
    }
    *(void **)((int)this + 0x4c) = pvVar4;
    local_10 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar9 = 0;
      pcVar10 = param_2;
      do {
        _sprintf((char *)(*(int *)((int)this + 0x4c) + iVar9),pcVar10);
        pcVar7 = pcVar10 + 0x20;
        puVar6 = (undefined4 *)(*(int *)((int)this + 0x4c) + 0x20 + iVar9);
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar6 = puVar6 + 1;
        }
        local_10 = local_10 + 1;
        pcVar10 = pcVar10 + 0x54;
        iVar9 = iVar9 + 0x50;
      } while (local_10 < *(int *)(param_1 + 0xc));
    }
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0xc);
    local_10 = 0;
    if (0 < (int)puVar6) {
      pbVar8 = (byte *)(param_2 + 0x50);
      local_1c = puVar6;
      do {
        *pbVar8 = *pbVar8 & 0xfe;
        local_18 = 0;
        if (0 < *(int *)((int)this + 0x48)) {
          local_14 = 0;
          do {
            pbVar11 = (byte *)(local_14 + *(int *)((int)this + 0x4c));
            pbVar3 = pbVar8 + -0x50;
            pbVar12 = pbVar11;
            do {
              bVar1 = *pbVar3;
              bVar15 = bVar1 < *pbVar12;
              if (bVar1 != *pbVar12) {
LAB_009de554:
                iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_009de559;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar15 = bVar1 < pbVar12[1];
              if (bVar1 != pbVar12[1]) goto LAB_009de554;
              pbVar3 = pbVar3 + 2;
              pbVar12 = pbVar12 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_009de559:
            if (iVar9 == 0) {
              pbVar3 = pbVar8 + -0x30;
              pbVar12 = pbVar11 + 0x20;
              for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(undefined4 *)pbVar12 = *(undefined4 *)pbVar3;
                pbVar3 = pbVar3 + 4;
                pbVar12 = pbVar12 + 4;
              }
              local_1c = (undefined4 *)((int)local_1c + -1);
              *pbVar8 = *pbVar8 | 1;
            }
            local_18 = local_18 + 1;
            local_14 = local_14 + 0x50;
            puVar6 = local_1c;
          } while (local_18 < *(int *)((int)this + 0x48));
        }
        local_10 = local_10 + 1;
        pbVar8 = pbVar8 + 0x54;
      } while (local_10 < *(int *)(param_1 + 0xc));
    }
    if (puVar6 != (undefined4 *)0x0) {
      iVar9 = *(int *)((int)this + 0x48) + (int)puVar6;
      local_1c = operator_new(iVar9 * 0x50);
      if (local_1c == (undefined4 *)0x0) {
        local_1c = (undefined4 *)0x0;
      }
      else if (-1 < iVar9 + -1) {
        puVar6 = local_1c + 0x12;
        do {
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[-1] = 0;
          puVar6[-3] = 0;
          puVar6[-4] = 0;
          puVar6[-5] = 0;
          puVar6[-7] = 0;
          puVar6[-8] = 0;
          puVar6[-9] = 0;
          puVar6[-2] = 0x3f800000;
          puVar6[-6] = 0x3f800000;
          puVar6[-10] = 0x3f800000;
          *(undefined1 *)(puVar6 + -0x12) = 0;
          puVar6 = puVar6 + 0x14;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      puVar6 = *(undefined4 **)((int)this + 0x4c);
      puVar14 = local_1c;
      for (iVar9 = (*(int *)((int)this + 0x48) * 5 & 0xfffffffU) << 2; iVar9 != 0;
          iVar9 = iVar9 + -1) {
        *puVar14 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar14 = puVar14 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined1 *)puVar14 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      local_10 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        pcVar10 = param_2 + 0x20;
        do {
          if ((pcVar10[0x30] & 1U) == 0) {
            _sprintf((char *)(local_1c + *(int *)((int)this + 0x48) * 0x14),pcVar10 + -0x20);
            pcVar7 = pcVar10;
            puVar6 = local_1c + *(int *)((int)this + 0x48) * 0x14 + 8;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar6 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              puVar6 = puVar6 + 1;
            }
            *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
          }
          local_10 = local_10 + 1;
          pcVar10 = pcVar10 + 0x54;
        } while (local_10 < *(int *)(param_1 + 0xc));
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x4c));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_009de790 @ 009de790 ////

void FUN_009de790(void)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((DAT_0105c2e0 == '\0') &&
     (DAT_0105ef74 = DAT_0105ef74 + DAT_0105becc, pvVar1 = DAT_0105eb44, 9999 < DAT_0105ef74)) {
    while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((int)pvVar2 + 0x24);
      if ((((DAT_0105c2e0 == '\0') && ((*(byte *)((int)pvVar2 + 0xe4) & 2) != 0)) &&
          (*(int *)((int)pvVar2 + 0x20) == 1)) &&
         (20000 < DAT_0105be98 - *(int *)((int)pvVar2 + 0xc0))) {
        FUN_009de3b0(pvVar2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_009de800 @ 009de800 ////

bool __thiscall FUN_009de800(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  byte *local_4c [2];
  uint local_44;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf83e8;
  uVar4 = *(uint *)((int)this + 0xe4);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while ((uVar4 >> 6 & 1) == 0) {
    FUN_009b3890();
    uVar4 = *(uint *)((int)this + 0xe4);
  }
  FUN_009ddf60(this,local_4c,"weather");
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy((char *)local_2c,"",0);
  local_28 = 0;
  *local_2c = 0;
  pbVar2 = local_2c;
  pbVar5 = local_4c[0];
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_009de8bb:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_009de8c0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_009de8bb;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009de8c0:
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar3 == 0) {
    if ((((param_1 == 1) || (param_1 == 4)) &&
        ((*(int *)((int)this + 0xa4) == 0 ||
         (iVar3 = FUN_009ac120(*(char **)(*(int *)((int)this + 0xa4) + 0x10),"[no rain]"),
         iVar3 == -1)))) ||
       ((param_1 == 2 &&
        ((*(int *)((int)this + 0xa4) == 0 ||
         (iVar3 = FUN_009ac120(*(char **)(*(int *)((int)this + 0xa4) + 0x10),"[no fog]"),
         iVar3 == -1)))))) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_44 < 0x15) {
      ExceptionList = local_c;
      return bVar6;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  uVar4 = FUN_00413450(local_4c,"all",0,3);
  if (uVar4 != 0xffffffff) {
    if (local_44 < 0x15) {
      ExceptionList = local_c;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  switch(param_1) {
  case 1:
    iVar3 = FUN_004155b0(local_4c,"rain",0);
    bVar6 = iVar3 != -1;
    break;
  case 2:
    iVar3 = FUN_004155b0(local_4c,"fog",0);
    if (local_44 < 0x15) {
      ExceptionList = local_c;
      return iVar3 != -1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  case 3:
    iVar3 = FUN_004155b0(local_4c,"wind",0);
    if (local_44 < 0x15) {
      ExceptionList = local_c;
      return iVar3 != -1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  case 4:
    iVar3 = FUN_004155b0(local_4c,"rain",0);
    if ((iVar3 == -1) && (iVar3 = FUN_004155b0(local_4c,"interior",0), iVar3 == -1)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    break;
  default:
    if (local_44 < 0x15) {
      ExceptionList = local_c;
      return false;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION LH_LoadMeshBinary @ 009deb10 ////

void __thiscall LH_LoadMeshBinary(void *this,uint *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  void *pvVar15;
  undefined3 extraout_var;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint *puVar24;
  bool bVar25;
  byte local_1f7;
  byte local_1f6;
  byte local_1f5;
  uint *local_1f4;
  undefined4 *puStack_1f0;
  char local_1e9;
  int local_1e8;
  char local_1e1;
  uint *local_1e0;
  char local_1d9;
  uint *puStack_1d8;
  int *piStack_1d4;
  uint *puStack_1d0;
  uint *puStack_1cc;
  uint *puStack_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  uint *puStack_18c;
  uint uStack_188;
  uint *local_184;
  int local_180;
  int local_17c;
  uint local_178;
  int iStack_174;
  char cStack_170;
  char cStack_16f;
  byte bStack_16e;
  char local_16d;
  byte local_16b;
  byte local_16a;
  byte bStack_169;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  float fStack_154;
  char acStack_14f [7];
  int iStack_148;
  int iStack_144;
  byte bStack_140;
  byte bStack_13f;
  byte bStack_13e;
  byte bStack_13d;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  float afStack_130 [10];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int iStack_f8;
  undefined1 auStack_4c [16];
  int iStack_3c;
  float afStack_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* CONFIRMED: this is the real .msh binary mesh parser (MV::MyAsyncMesh).
                       Reached via the async load job's vtable slot+4 (00d735d0 ->
                       MyAsyncMesh_OnLoadComplete -> here), called as
                       LH_LoadMeshBinary(meshObject=this, fileBuffer=param_1) after
                       AsyncLoadJob_ExecuteSync reads the whole file into memory.
                       
                       Checks for a "zcmp" 4-byte tag at buffer start (whole-file compression,
                       decompressed via FUN_00afb9d0 if present - not seen in any real sample
                       checked). Calls LH_LoadMeshHeader to read the fixed 0x24-byte header and
                       requires FormatVersion==10 or aborts.
                       
                       Header counts: NumTextureNames@file+0x04 -> mesh+0x38/+0x3c,
                       NumMaterials@file+0x08 -> mesh+0x30/+0x34, NumSubmeshes@file+0x0c ->
                       mesh+0x28/+0x2c. The header's third optional trailing dword (present per the
                       control-byte bit layout, see LH_LoadMeshHeader's comment) is RoomCount, only
                       nonzero for set_*.msh building meshes.
                       
                       Section order after the header: 32-byte texture name entries, then 36-byte
                       material records (LH_LoadMeshMaterial), then (set_*.msh only) the ROOM LIST,
                       then the submesh/primitive array.
                       
                       ROOM LIST (mesh+0x70, gated by RoomCount != 0): mesh+0x70 points to a
                       0x14-byte holder [0]=RoomCount, [4]=RoomArray ptr (rest reserved/zero).
                       RoomArray is RoomCount entries of 0x90 (144) bytes each:
                         +0x00 dword RoomIndex - filled in AFTER sorting (sequential
                       0..RoomCount-1), zero while reading
                         +0x04..+0x23 (32 bytes) Name - read directly from the file, null-padded
                       ASCII (same fixed-name-buffer convention used for texture names/pak entries
                       elsewhere)
                         +0x64 pointer - a small indexed polygon chunk (the room's floor/boundary
                       shape: VertexCount+IndexCount+Vector3 array+triangle-index array), read via
                       FUN_009e7270 (see its own comment - NOT a text string, corrected an earlier
                       assumption)
                         +0x6c dword Flags: bit1(2)="room_"-prefixed name; bit3(8)="window"
                       substring found anywhere in the name (via FUN_009ac120, a strstr equivalent);
                       bit0 is an unclassified-sentinel cleared once either match is made
                       Processing per room, in order: (1) classify by name (room_/window flags
                       above); (2) after all rooms read, swap array[0] with the LAST
                       "room_"-matching entry (ensures slot 0 holds a real room, not a
                       window/generic entry); (3) for set_*-prefixed mesh filenames only,
                       bubble-sort adjacent rooms by the NUMERIC SUFFIX in their name (extracted via
                       FUN_009b7af0, a leading-digits-to-int parser, reading from name-offset+9 i.e.
                       right after "room_") - this gives natural numeric ordering (room_2 before
                       room_10) rather than alphabetical; (4) two finalization passes (FUN_00a14510
                       then FUN_00a14bd0, the second also stamping the final RoomIndex).
                       
                       This room-list system is per-room dynamic-lighting/interaction metadata for
                       building-interior set meshes - ties together with the mesh-context
                       "area"/lightmap-blending code seen in the base draw pass (FUN_00a71490) and
                       the per-submesh light-channel masking in FUN_00a46a70.
                       
                       Also has up to 5 optional per-mesh auxiliary polygon chunks (same
                       FUN_009e7270 format) at mesh+0x50/0x54/0x58/0x5c/0x60, gated by header flag
                       bits - purpose of each not individually confirmed (LOD/impostor cage?
                       collision hull? sound-occlusion volume?); two of the flag-gated reads discard
                       their result immediately, suggesting deprecated/legacy fields kept only for
                       byte-stream compatibility.
                       
                       Continuing after the room list: submesh array (NumSubmeshes @
                       mesh+0x28/+0x2c). Each submesh holds one or more primitives, each parsed via
                       LH_LoadMeshPrimitiveHeader (yields TriangleCount+VertexCount among other
                       packed fields); triangle/index data is TriangleCount*6 bytes (3x uint16 per
                       tri, built by FUN_00a50940); vertex data is either a compact 16-byte/vertex
                       packed format (decoded by FUN_00a39e80) or a direct 32-byte/vertex float
                       format (Pos3f@0x00+Norm3f@0x0c+UV2f@0x18 - confirmed independently via the
                       text-mode exporter LH_ExportMeshDebugText), selected by a header flag bit. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8469;
  local_c = ExceptionList;
  iVar20 = 0;
  local_1f7 = DAT_0105be08 == 0;
  local_184 = (uint *)0x0;
  ExceptionList = &local_c;
  if (((((char)*param_1 == 'z') && (ExceptionList = &local_c, *(char *)((int)param_1 + 1) == 'c'))
      && (ExceptionList = &local_c, *(char *)((int)param_1 + 2) == 'm')) &&
     (ExceptionList = &local_c, *(char *)((int)param_1 + 3) == 'p')) {
    ExceptionList = &local_c;
    param_1 = (uint *)FUN_00afb9d0((int)(param_1 + 1));
    local_184 = param_1;
  }
  local_1e1 = '\0';
  iVar4 = _strncmp(this,"acc_glasses_",0xc);
  if (iVar4 == 0) {
    local_1e1 = '\x01';
    *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x800000;
  }
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x40;
  FUN_00a48b90();
  iVar4 = LH_LoadMeshHeader(&local_180,param_1);
  param_1 = (uint *)((int)param_1 + iVar4);
  if (local_180 != 10) {
    ExceptionList = local_c;
    return;
  }
  *(uint *)((int)this + 0xe4) =
       ((local_16b & 0x40) << 1 | local_16b & 0x38) << 6 | *(uint *)((int)this + 0xe4) & 0xffffd1ff;
  *(int *)((int)this + 0x38) = local_17c;
  local_1e9 = '\0';
  if (local_17c == 0) {
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  else {
    puVar5 = operator_new(local_17c * 4);
    *(undefined4 **)((int)this + 0x3c) = puVar5;
    for (uVar16 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    if (0 < *(int *)((int)this + 0x38)) {
      do {
        puVar10 = param_1;
        param_1 = param_1 + 8;
        FUN_009ac040((char *)puVar10);
        iVar4 = _strncmp((char *)puVar10,"cos_",4);
        local_1d9 = '\x01' - (iVar4 != 0);
        iVar4 = _strncmp((char *)puVar10,"head_",5);
        local_1f6 = 1 - (iVar4 != 0);
        iVar4 = _strncmp((char *)puVar10,"hair_",5);
        if ((iVar4 == 0) &&
           ((*(char *)((int)puVar10 + 9) == 'f' || (*(char *)((int)puVar10 + 9) == 'm')))) {
          local_1f5 = '\x01';
        }
        else {
          local_1f5 = '\0';
        }
        if (local_1d9 != '\0') {
          if ((local_1e9 != '\0') && (DAT_0105ead4 != '\0')) {
            local_1d9 = '\0';
          }
          local_1e9 = '\x01';
        }
        if ((DAT_0105ead4 == '\0') ||
           (((local_1d9 == '\0' && (local_1f6 == 0)) && (local_1f5 == '\0')))) {
          if ((DAT_0105bebc == 0) || (iVar4 = _strncmp((char *)puVar10,"logo_",5), iVar4 != 0)) {
            DAT_010b6ff8 = 1;
            if ((local_1f7 == 0) ||
               (iVar4 = _strncmp((char *)&PTR_LAB_00d71474,(char *)puVar10,3), iVar4 != 0)) {
              pvVar9 = FUN_0099bb50((char *)puVar10,0,0,0,'\0');
              *(void **)(*(int *)((int)this + 0x3c) + iVar20 * 4) = pvVar9;
            }
            else {
              pvVar9 = FUN_0099bb50("dummy.dds",0,0,0,'\0');
              *(void **)(*(int *)((int)this + 0x3c) + iVar20 * 4) = pvVar9;
            }
            DAT_010b6ff8 = 0;
          }
          else {
            *(int *)(*(int *)((int)this + 0x3c) + iVar20 * 4) = DAT_0105bebc;
            if (DAT_0105bebc != 0) {
              *(int *)(DAT_0105bebc + 0x30) = *(int *)(DAT_0105bebc + 0x30) + 1;
            }
          }
        }
        else {
          puVar6 = puVar10;
          do {
            uVar16 = *puVar6;
            *(char *)((int)puVar6 + ((int)&DAT_0105eab0 - (int)puVar10)) = (char)uVar16;
            puVar6 = (uint *)((int)puVar6 + 1);
          } while ((char)uVar16 != '\0');
          if (local_1d9 != '\0') {
            cVar2 = '\0';
            uVar7 = FUN_009d0f30();
            uVar8 = FUN_009d0f30();
            pvVar9 = FUN_0099bb50("costume",DAT_0105ead8,uVar8,uVar7,cVar2);
            *(void **)(*(int *)((int)this + 0x3c) + iVar20 * 4) = pvVar9;
            DAT_0105ead0 = *(int *)(*(int *)((int)this + 0x3c) + iVar20 * 4);
          }
          if (local_1f6 != 0) {
            cVar2 = '\0';
            uVar7 = FUN_009d0f30();
            uVar8 = FUN_009d0f30();
            pvVar9 = FUN_0099bb50("head",DAT_0105ead8,uVar8,uVar7,cVar2);
            *(void **)(*(int *)((int)this + 0x3c) + iVar20 * 4) = pvVar9;
            DAT_0105ead0 = *(int *)(*(int *)((int)this + 0x3c) + iVar20 * 4);
          }
          if (local_1f5 != '\0') {
            if (DAT_0105ead0 != 0) {
              *(int *)(DAT_0105ead0 + 0x30) = *(int *)(DAT_0105ead0 + 0x30) + 1;
            }
            *(int *)(*(int *)((int)this + 0x3c) + iVar20 * 4) = DAT_0105ead0;
            _sprintf(*(char **)(*(int *)((int)this + 0x3c) + iVar20 * 4),(char *)puVar10);
          }
          *(uint *)(DAT_0105ead0 + 0x54) = *(uint *)(DAT_0105ead0 + 0x54) | 0x400;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)((int)this + 0x38));
    }
  }
  *(uint *)((int)this + 0x30) = local_178;
  if (local_178 == 0) {
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  else {
    local_1e0 = operator_new(local_178 * 0x24 + 4);
    local_4 = 0;
    if (local_1e0 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = local_1e0 + 1;
      *local_1e0 = local_178;
      _eh_vector_constructor_iterator_(puVar10,0x24,local_178,FUN_009910f0,FUN_00990ec0);
    }
    local_4 = 0xffffffff;
    *(uint **)((int)this + 0x34) = puVar10;
    local_1e8 = 0;
    if (0 < *(int *)((int)this + 0x30)) {
      local_1f4 = (uint *)0x0;
      do {
        local_1c4 = (char *)0x0;
        local_1c0 = 0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1b4 = 0;
        local_1b0 = 0;
        iVar4 = LH_LoadMeshMaterial(&local_1c4,(undefined1 *)param_1);
        uVar16 = local_1c0;
        iVar20 = *(int *)((int)this + 0x34);
        param_1 = (uint *)((int)param_1 + iVar4);
        bVar3 = local_1b8._2_1_;
        uVar21 = (uint)local_1b8._2_1_;
        *(char *)(iVar20 + 0x10 + (int)local_1f4) = (char)local_1b0;
        puVar5 = (undefined4 *)(iVar20 + (int)local_1f4);
        *(char *)((int)puVar5 + 0x11) = (char)((uint)local_1b0 >> 8);
        *(undefined1 *)((int)puVar5 + 0x12) = local_1b0._2_1_;
        puVar5[4] = puVar5[4] ^ (~(uint)(local_1b8._2_1_ >> 3) << 0x18 ^ puVar5[4]) & 0x1000000;
        *puVar5 = local_1b4;
        puVar5[5] = ((local_1c0 & 2) << 6 | uVar21 & 0x20) << 1 | local_1b8._2_1_ >> 1 & 8 |
                    puVar5[5] & 0xfffffeb7;
        if ((byte)local_1c4 == -1) {
          if (puVar5[6] != 0) {
            Engine_SetResourceReference(puVar5,0);
          }
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        else {
          iVar20 = *(int *)(*(int *)((int)this + 0x3c) + ((uint)local_1c4 & 0xff) * 4);
          if (puVar5[6] != iVar20) {
            Engine_SetResourceReference(puVar5,iVar20);
          }
          *(undefined1 *)(puVar5 + 3) = 3;
          *(byte *)(puVar5 + 2) = (byte)local_1c4;
        }
        uVar17 = puVar5[4] ^ (~(uint)(bVar3 >> 1) << 0x1e ^ puVar5[4]) & 0x40000000;
        puVar5[4] = uVar17;
        if (local_1c0._3_1_ != '\0') {
          *(undefined1 *)(puVar5 + 3) = 5;
        }
        uVar16 = ((local_1bc & 1) << 4 | uVar16 & 1) << 0x19 | uVar17 & 0xddffffff;
        puVar5[4] = uVar16;
        *(byte *)((int)puVar5 + 10) = local_1c4._2_1_;
        if ((local_1c4._2_1_ != 0xff) && (DAT_0105be08 != 0)) {
          puVar5[4] = uVar16 | 0x4000000;
          iVar20 = *(int *)(*(int *)((int)this + 0x3c) + (uint)local_1c4._2_1_ * 4);
          if (puVar5[7] != iVar20) {
            FUN_00994bc0(puVar5,iVar20);
          }
          *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x2000000;
        }
        uVar16 = puVar5[5] ^ ((local_1bc >> 8 & 0xff) << 1 ^ puVar5[5]) & 2;
        puVar5[5] = uVar16;
        if ((DAT_0105be08 != 0) || ((uVar16 & 2) != 0)) {
          *(undefined1 *)((int)puVar5 + 9) = local_1c4._1_1_;
          *(char *)((int)puVar5 + 0xf) = (char)(local_1b8 >> 8);
          *(undefined1 *)((int)puVar5 + 0xb) = local_1c4._3_1_;
        }
        if ((char)local_1b8 != '\0') {
          *(undefined1 *)(puVar5 + 3) = 0x18;
          puVar5[4] = puVar5[4] & 0xfeffffff;
        }
        if (((puVar5[4] & 0x4000000) != 0) && (*(char *)((int)puVar5 + 10) != -1)) {
          puVar5[4] = puVar5[4] & 0xfeffffff;
        }
        if ((local_1bc._2_1_ != '\0') || (local_1bc._3_1_ != '\0')) {
          iVar20 = puVar5[7];
          local_1f7 = (byte)((uint)puVar5[4] >> 0x1a) & 1;
          LH_ApplyWaterMaterialOverride(puVar5);
          puVar5[4] = puVar5[4] ^ ((uint)local_1f7 << 0x1a ^ puVar5[4]) & 0x4000000;
          if (puVar5[7] != iVar20) {
            FUN_00994bc0(puVar5,iVar20);
          }
          if (local_1bc._3_1_ != '\0') {
            puVar5[5] = puVar5[5] | 0x20;
          }
          puVar5[5] = puVar5[5] | 0x10;
        }
        if ((local_1b8 & 0x10000) != 0) {
          *(undefined1 *)(puVar5 + 3) = 0x1b;
          puVar5[4] = puVar5[4] & 0xfeffffff;
          puVar5[5] = puVar5[5] | 8;
        }
        if ((char)puVar5[4] != '\0') {
          puVar5[4] = puVar5[4] | 0x8000000;
        }
        if (*(char *)((int)puVar5 + 0x11) != '\0') {
          puVar5[4] = puVar5[4] | 0x10000000;
        }
        puVar5[5] = puVar5[5] ^ (uVar21 * 2 ^ puVar5[5]) & 0x80;
        if (*(char *)(puVar5 + 5) < '\0') {
          *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x200000;
        }
        if (((char)local_1b8._2_1_ < '\0') &&
           ((*(char *)(puVar5 + 3) == '\x03' || (*(char *)(puVar5 + 3) == '\x05')))) {
          *(undefined1 *)(puVar5 + 3) = 7;
        }
        if ((local_1c0 & 4) != 0) {
          *(undefined1 *)(puVar5 + 3) = 0xb;
        }
        local_1e8 = local_1e8 + 1;
        local_1f4 = local_1f4 + 9;
      } while (local_1e8 < *(int *)((int)this + 0x30));
    }
  }
  if (local_16d != '\0') {
    puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
    *(uint **)((int)this + 0x50) = puVar10;
  }
  if ((local_16a & 0x10) != 0) {
    puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
    *(uint **)((int)this + 0x58) = puVar10;
  }
  if ((local_16a & 8) != 0) {
    puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
    *(uint **)((int)this + 0x54) = puVar10;
  }
  if (((local_16b & 4) != 0) &&
     (puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1), puVar10 != (uint *)0x0)) {
    FUN_009e6b00(puVar10);
  }
  if (((local_16a & 4) != 0) &&
     (puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1), puVar10 != (uint *)0x0)) {
    FUN_009e6b00(puVar10);
  }
  if ((local_16b & 2) != 0) {
    puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
    *(uint **)((int)this + 0x5c) = puVar10;
  }
  if ((local_16a & 1) != 0) {
    puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
    *(uint **)((int)this + 0x60) = puVar10;
  }
  if (iStack_160 != 0) {
    piVar11 = operator_new(0x14);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      *piVar11 = 0;
      piVar11[1] = 0;
      piVar11[2] = 0;
      piVar11[3] = 0;
      piVar11[4] = 0;
    }
    *(int **)((int)this + 0x70) = piVar11;
    *piVar11 = iStack_160;
    uVar16 = **(uint **)((int)this + 0x70);
    local_1e0 = operator_new(uVar16 * 0x90 + 4);
    local_4 = 1;
    if (local_1e0 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = local_1e0 + 1;
      *local_1e0 = uVar16;
      _eh_vector_constructor_iterator_(puVar10,0x90,uVar16,FUN_00a14b30,FUN_00a147d0);
    }
    *(uint **)(*(int *)((int)this + 0x70) + 4) = puVar10;
    local_4 = 0xffffffff;
    puStack_1d0 = (uint *)0xffffffff;
    local_1f4 = (uint *)0x0;
    if (0 < **(int **)((int)this + 0x70)) {
      iVar20 = 0;
      do {
        puVar10 = param_1;
        puVar6 = (uint *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 4 + iVar20);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
        }
        param_1 = param_1 + 8;
        puVar10 = LH_LoadAuxPolygonChunk((uint *)&param_1);
        *(uint **)(*(int *)(*(int *)((int)this + 0x70) + 4) + 100 + iVar20) = puVar10;
        FUN_009e6cf0(*(int **)(*(int *)(*(int *)((int)this + 0x70) + 4) + 100 + iVar20));
        iVar4 = 6;
        bVar25 = true;
        pcVar13 = (char *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 4 + iVar20);
        pcVar22 = "room_";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar13 == *pcVar22;
          pcVar13 = pcVar13 + 1;
          pcVar22 = pcVar22 + 1;
        } while (bVar25);
        if (bVar25) {
          iVar4 = *(int *)(*(int *)((int)this + 0x70) + 4);
          *(uint *)(iVar4 + 0x6c + iVar20) = *(uint *)(iVar4 + 0x6c + iVar20) | 2;
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x6c + iVar20);
          puStack_1d0 = local_1f4;
          *puVar10 = *puVar10 & 0xfffffffe;
        }
        iVar4 = FUN_009ac120((char *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 4 + iVar20),
                             "window");
        if (iVar4 != -1) {
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x6c + iVar20);
          *puVar10 = *puVar10 | 8;
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x6c + iVar20);
          *puVar10 = *puVar10 & 0xfffffffe;
        }
        local_1f4 = (uint *)((int)local_1f4 + 1);
        iVar20 = iVar20 + 0x90;
      } while ((int)local_1f4 < **(int **)((int)this + 0x70));
      if (0 < (int)puStack_1d0) {
        puVar12 = operator_new(0x90);
        puVar5 = *(undefined4 **)(*(int *)((int)this + 0x70) + 4);
        puVar14 = puVar12;
        for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar14 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar5 = *(undefined4 **)(*(int *)((int)this + 0x70) + 4);
        puVar14 = puVar5 + (int)puStack_1d0 * 0x24;
        for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar5 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar5 = puVar12;
        puVar14 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + (int)puStack_1d0 * 0x90)
        ;
        for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar14 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar14 = puVar14 + 1;
        }
                    /* WARNING: Subroutine does not return */
        _free(puVar12);
      }
    }
    iVar20 = _strncmp(this,"set_",4);
    if (iVar20 == 0) {
      do {
        local_1f6 = 0;
        piStack_1d4 = (int *)0x0;
        if (**(int **)((int)this + 0x70) == 1 || **(int **)((int)this + 0x70) + -1 < 0) break;
        iVar20 = 0;
        do {
          local_1e8 = 0;
          puStack_1d8 = (uint *)0x1;
          FUN_009b7af0((char *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 9 + iVar20),&local_1e8,
                       (int *)0x0);
          FUN_009b7af0((char *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x99 + iVar20),
                       (int *)&puStack_1d8,(int *)0x0);
          if ((int)puStack_1d8 < local_1e8) {
            puVar12 = operator_new(0x90);
            puVar5 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + 0x90 + iVar20);
            puVar14 = puVar12;
            for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar14 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar5 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + iVar20);
            puVar14 = puVar5 + 0x24;
            for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar14 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar5 = puVar12;
            puVar14 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x70) + 4) + iVar20);
            for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar14 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar14 = puVar14 + 1;
            }
                    /* WARNING: Subroutine does not return */
            _free(puVar12);
          }
          piStack_1d4 = (int *)((int)piStack_1d4 + 1);
          iVar20 = iVar20 + 0x90;
        } while ((int)piStack_1d4 < **(int **)((int)this + 0x70) + -1);
      } while (local_1f6 != 0);
      iVar20 = 0;
      if (0 < **(int **)((int)this + 0x70)) {
        iVar4 = 0;
        do {
          FUN_00a14510(*(int *)(*(int *)((int)this + 0x70) + 4) + iVar4);
          iVar20 = iVar20 + 1;
          iVar4 = iVar4 + 0x90;
        } while (iVar20 < **(int **)((int)this + 0x70));
      }
    }
    iVar20 = 0;
    if (0 < **(int **)((int)this + 0x70)) {
      iVar4 = 0;
      do {
        *(int *)(iVar4 + *(int *)(*(int *)((int)this + 0x70) + 4)) = iVar20;
        FUN_00a14bd0(*(int *)(*(int *)((int)this + 0x70) + 4) + iVar4);
        iVar20 = iVar20 + 1;
        iVar4 = iVar4 + 0x90;
      } while (iVar20 < **(int **)((int)this + 0x70));
    }
  }
  *(int *)((int)this + 0x28) = iStack_174;
  if ((cStack_16f != '\0') || ((bStack_169 & 1) != 0)) {
    pcVar13 = operator_new(iStack_174 << 7);
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar22 = pcVar13;
      iVar20 = iStack_174;
      if (-1 < iStack_174 + -1) {
        do {
          FUN_009dcc30(pcVar22);
          iVar20 = iVar20 + -1;
          pcVar22 = pcVar22 + 0x80;
        } while (iVar20 != 0);
      }
    }
    *(char **)((int)this + 0x44) = pcVar13;
  }
  local_1f6 = 0;
  local_1f5 = 0;
  iVar20 = _strncmp(this,"sky_box_city",0xc);
  local_1f7 = 1 - (iVar20 != 0);
  if (*(int *)((int)this + 0x28) != 0) {
    pvVar9 = operator_new(*(int *)((int)this + 0x28) * 4);
    *(void **)((int)this + 0x2c) = pvVar9;
    local_1e8 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      do {
        local_1c4 = (char *)CONCAT31(local_1c4._1_3_,(char)*param_1);
        bVar3 = *(byte *)((int)param_1 + 3);
        local_1c4 = (char *)CONCAT13(bVar3,CONCAT12(*(undefined1 *)((int)param_1 + 2),
                                                    (undefined2)local_1c4));
        puVar6 = &local_1c0;
        puVar10 = param_1;
        for (iVar20 = 0xc; puVar10 = puVar10 + 1, iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 1;
        }
        puVar10 = param_1 + 0xd;
        if ((bVar3 & 0x10) == 0) {
          uStack_18e = 0;
          uStack_190 = 0;
        }
        else {
          uStack_190 = (undefined2)*puVar10;
          uStack_18e = *(undefined2 *)((int)param_1 + 0x36);
          puVar10 = param_1 + 0xe;
        }
        param_1 = puVar10;
        local_1e0 = operator_new(0x30);
        local_4 = 2;
        if (local_1e0 == (uint *)0x0) {
          puVar10 = (uint *)0x0;
        }
        else {
          puVar10 = FUN_00a46cc0(local_1e0);
        }
        *(uint **)(*(int *)((int)this + 0x2c) + local_1e8 * 4) = puVar10;
        local_4 = 0xffffffff;
        puStack_1d8 = puVar10;
        if (*(int *)((int)this + 0x44) != 0) {
          puVar5 = &local_1c0;
          puVar14 = (undefined4 *)(local_1e8 * 0x80 + 0x20 + *(int *)((int)this + 0x44));
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar14 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar14 = puVar14 + 1;
          }
          iVar20 = local_1e8 * 0x80 + *(int *)((int)this + 0x44);
          FUN_009aa500((void *)(iVar20 + 0x50),(float *)(iVar20 + 0x20));
        }
        *(undefined2 *)(puVar10 + 9) = uStack_190;
        *(undefined2 *)((int)puVar10 + 0x26) = uStack_18e;
        uVar16 = ((uint)local_1c4 >> 0x10 & 2 | (uint)local_1c4 >> 0x18 & 0xc) << 1 |
                 puVar10[10] & 0xffffffe3;
        puVar10[10] = uVar16;
        local_1f5 = local_1f5 | (byte)(uVar16 >> 2) & 1;
        cVar2 = FUN_00a48b40();
        if (cVar2 == '\0') {
          FUN_00a48b50();
          cVar2 = FUN_00a48b30();
          bVar3 = 0;
          if (cVar2 != '\0') goto LAB_009df805;
        }
        else {
LAB_009df805:
          bVar3 = (byte)local_1c4;
        }
        uVar16 = (uint)bVar3;
        *puVar10 = uVar16;
        if (uVar16 == 0) {
          puVar10[1] = 0;
        }
        else {
          pvVar9 = operator_new(uVar16 * 4);
          puVar10[1] = (uint)pvVar9;
          piStack_1d4 = (int *)0x0;
          if (0 < (int)*puVar10) {
            local_1e0 = (uint *)((local_1f7 & 3) << 0x17);
            do {
              pfVar19 = afStack_130;
              for (iVar20 = 0xe; iVar20 != 0; iVar20 = iVar20 + -1) {
                *pfVar19 = 0.0;
                pfVar19 = pfVar19 + 1;
              }
              iVar20 = LH_LoadMeshPrimitiveHeader(acStack_14f + 3,param_1);
              param_1 = (uint *)((int)param_1 + iVar20);
              puStack_1f0 = operator_new(100);
              local_4 = 3;
              if (puStack_1f0 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                puVar5 = FUN_009d5db0(puStack_1f0);
              }
              *(undefined4 **)(puStack_1d8[1] + (int)piStack_1d4 * 4) = puVar5;
              puVar5 = *(undefined4 **)(puStack_1d8[1] + (int)piStack_1d4 * 4);
              *(char *)(puVar5 + 2) = acStack_14f[3];
              puVar5[0xb] = 0;
              uVar16 = puVar5[2] ^ ((uint)bStack_13d << 10 ^ puVar5[2]) & 0x400;
              puVar5[2] = uVar16;
              uVar16 = ((uint)bStack_13f << 8 ^ uVar16) & 0x800 ^ uVar16;
              puVar5[2] = uVar16;
              uVar16 = ((uint)bStack_13f << 0x13 ^ uVar16) & 0x300000 ^ uVar16;
              local_4 = 0xffffffff;
              puVar5[2] = uVar16;
              if ((uVar16 & 0x300000) != 0) {
                *(uint *)(*(int *)((int)this + 0x34) + 0x10 + (uVar16 & 0xff) * 0x24) =
                     *(uint *)(*(int *)((int)this + 0x34) + 0x10 + (uVar16 & 0xff) * 0x24) &
                     0xf7ffffff;
                *(uint *)(*(int *)((int)this + 0x34) + 0x10 + (puVar5[2] & 0xff) * 0x24) =
                     *(uint *)(*(int *)((int)this + 0x34) + 0x10 + (puVar5[2] & 0xff) * 0x24) &
                     0xefffffff;
              }
              uVar16 = puVar5[2] ^ ((uint)bStack_140 << 0xc ^ puVar5[2]) & 0x2000;
              puVar5[2] = uVar16;
              uVar16 = ((uint)bStack_140 << 0xc ^ uVar16) & 0x4000 ^ uVar16;
              puVar5[2] = uVar16;
              puVar5[2] = (bStack_140 & 0xffffff80) << 0xb | uVar16 & 0xfffbffff;
              if ((bStack_140 & 0x80) != 0) {
                *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x4000;
              }
              uVar16 = puVar5[2] ^ ((uint)bStack_140 << 0xc ^ puVar5[2]) & 0x8000;
              puVar5[2] = uVar16;
              iVar20 = *(int *)((int)this + 0x34) + (uVar16 & 0xff) * 0x24;
              if (*(char *)(iVar20 + 0xc) == '\x05') {
                if ((*(uint *)(iVar20 + 0x10) & 0x40000000) == 0) {
                  if ((*(char **)(iVar20 + 0x18) != (char *)0x0) &&
                     (iVar20 = _strncmp("mbp_",*(char **)(iVar20 + 0x18),4), iVar20 == 0)) {
                    puVar5[2] = puVar5[2] | 0x1000;
                  }
                }
                else {
                  puVar5[2] = uVar16 | 0x1000;
                }
              }
              if ((*(byte *)(*(int *)((int)this + 0x34) + 0x14 + (puVar5[2] & 0xff) * 0x24) & 2) !=
                  0) {
                puVar5[2] = puVar5[2] | 0x1000;
              }
              if (((puVar5[2] & 0x2000) != 0) && (DAT_0105be08 != 0)) {
                *(undefined1 *)(*(int *)((int)this + 0x34) + 0xc + (puVar5[2] & 0xff) * 0x24) = 5;
                *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 4;
              }
              if (iStack_148 != 0) {
                uVar21 = iStack_148 * 6;
                uVar16 = uStack_13c;
                if (uStack_13c == 0xffffffff) {
                  uVar16 = FUN_009ac1e0((byte *)param_1,uVar21);
                }
                piVar11 = LH_BuildPrimitiveIndexBuffer(uVar21,uVar16,iStack_148,param_1,'\x01');
                puVar5[3] = piVar11;
                puVar5[8] = piVar11[5];
                puVar5[7] = piVar11[4];
                param_1 = (uint *)((int)param_1 + iStack_148 * 6);
              }
              param_1 = (uint *)FUN_009ac020((uint)param_1);
              if (iStack_144 != 0) {
                iVar20 = 0;
                uStack_188 = iStack_144 * 0x20;
                local_1f4 = (uint *)0x0;
                puStack_18c = (uint *)0x0;
                puStack_1c8 = param_1;
                if ((bStack_140 & 0x20) == 0) {
                  puVar6 = param_1 + iStack_144 * 8;
                  uVar16 = uStack_188;
                  puVar10 = (uint *)0x0;
                  if ((bStack_13f & 1) != 0) {
                    uVar16 = iStack_144 * 0x28;
                    puVar10 = puVar6;
                    puVar6 = puVar6 + iStack_144 * 2;
                  }
                }
                else {
                  if ((bStack_13f & 1) != 0) {
                    iVar20 = iStack_144 * 8;
                  }
                  local_1f4 = operator_new(iVar20 + uStack_188);
                  puStack_1f0 = (undefined4 *)0x0;
                  puVar10 = param_1 + iStack_144 * 4;
                  puStack_1c8 = local_1f4;
                  if (0 < iStack_144) {
                    puStack_1d0 = param_1;
                    param_1 = param_1 + iStack_144 * 4;
                    puStack_1cc = local_1f4;
                    do {
                      puVar10 = (uint *)LH_DequantizeVertex(puStack_1d0,afStack_2c,afStack_130);
                      puVar6 = puStack_1cc;
                      for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                        *puVar6 = *puVar10;
                        puVar10 = puVar10 + 1;
                        puVar6 = puVar6 + 1;
                      }
                      puStack_1f0 = (undefined4 *)((int)puStack_1f0 + 1);
                      puStack_1d0 = puStack_1d0 + 4;
                      puStack_1cc = puStack_1cc + 8;
                      puVar10 = param_1;
                    } while ((int)puStack_1f0 < iStack_144);
                  }
                  param_1 = puVar10;
                  if ((bStack_13f & 1) != 0) {
                    puStack_1cc = (uint *)(fStack_fc - fStack_104);
                    puStack_18c = local_1f4 + iStack_144 * 8;
                    iVar20 = 0;
                    fStack_154 = fStack_100 - fStack_108;
                    puVar10 = param_1;
                    if (0 < iStack_144) {
                      do {
                        iVar20 = iVar20 + 1;
                        puStack_18c[iVar20 * 2 + -2] =
                             (uint)((float)(ushort)*puVar10 * 1.5259022e-05 * fStack_154 +
                                   fStack_108);
                        puStack_1f0 = (undefined4 *)(uint)*(ushort *)((int)puVar10 + 2);
                        puStack_18c[iVar20 * 2 + -1] =
                             (uint)((float)(int)puStack_1f0 * 1.5259022e-05 * (float)puStack_1cc +
                                   fStack_104);
                        puVar10 = puVar10 + 1;
                      } while (iVar20 < iStack_144);
                    }
                    param_1 = param_1 + iStack_144;
                    uStack_188 = uStack_188 + iStack_144 * 8;
                  }
                  puVar6 = (uint *)FUN_009ac020((uint)param_1);
                  uVar16 = uStack_188;
                  puVar10 = puStack_18c;
                }
                param_1 = puVar6;
                if (uStack_138 == 0xffffffff) {
                  if (DAT_00e68310 != '\0') {
                    uStack_138 = FUN_009ac1e0((byte *)puStack_1c8,uVar16);
                    goto LAB_009dfd33;
                  }
                }
                else {
LAB_009dfd33:
                  if (DAT_00e68310 != '\0') goto LAB_009dfd40;
                }
                uStack_138 = 0xffffffff;
LAB_009dfd40:
                piVar11 = FUN_00a50cd0(uVar16,uStack_138,iStack_144,puStack_1c8,puVar10);
                puVar5[10] = piVar11;
                puVar5[0xb] = piVar11[3];
                puVar5[0xc] = piVar11[4];
                    /* WARNING: Subroutine does not return */
                _free(local_1f4);
              }
              if ((bStack_140 & 1) != 0) {
                if (local_1e1 == '\0') {
                  uVar16 = puVar5[2] | 0x10000;
                  puVar5[2] = uVar16;
                  local_1f6 = 1;
                  puVar5[2] = ((uint)bStack_13e << 8 ^ uVar16) & 0x300 ^ uVar16;
                  if (puVar5[10] != 0) {
                    iVar20 = puVar5[0xb];
                    uVar16 = uStack_134;
                    if (uStack_134 == 0xffffffff) {
                      uVar16 = FUN_009ac1e0((byte *)param_1,iVar20 * 0x14);
                    }
                    pvVar9 = *(void **)(puVar5[10] + 0x24);
                    uVar7 = FUN_00a50de0(iVar20 * 0x14,uVar16,puVar5[0xb],param_1);
                    *(undefined4 *)(puVar5[10] + 0x24) = uVar7;
                    if (pvVar9 != (void *)0x0) {
                      FUN_00a50650(pvVar9);
                    }
                    *puVar5 = *(undefined4 *)(*(int *)(puVar5[10] + 0x24) + 0x14);
                  }
                }
                param_1 = param_1 + puVar5[0xb] * 5;
              }
              if (iStack_f8 != 0) {
                if (puVar5[0xd] == 0) {
                  puVar14 = operator_new(0xc);
                  if (puVar14 == (undefined4 *)0x0) {
                    puVar14 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar14 = 0;
                    puVar14[1] = 0;
                    puVar14[2] = 0;
                  }
                  puVar5[0xd] = puVar14;
                }
                *(int *)puVar5[0xd] = iStack_f8;
                iVar20 = *(int *)puVar5[0xd];
                puVar14 = operator_new(iVar20 * 8);
                if (puVar14 == (undefined4 *)0x0) {
                  puVar14 = (undefined4 *)0x0;
                }
                else {
                  iVar20 = iVar20 + -1;
                  if (-1 < iVar20) {
                    puVar12 = puVar14;
                    for (uVar16 = iVar20 * 8 + 8U >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                    for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
                      *(undefined1 *)puVar12 = 0;
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                  }
                }
                *(undefined4 **)(puVar5[0xd] + 4) = puVar14;
                uVar16 = *(uint *)puVar5[0xd];
                puVar10 = param_1;
                puVar6 = (uint *)((uint *)puVar5[0xd])[1];
                for (iVar20 = (uVar16 & 0x1fffffff) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *puVar6 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar6 = puVar6 + 1;
                }
                for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
                  *(char *)puVar6 = (char)*puVar10;
                  puVar10 = (uint *)((int)puVar10 + 1);
                  puVar6 = (uint *)((int)puVar6 + 1);
                }
                param_1 = param_1 + uVar16 * 2;
              }
              if (*(char *)(*(int *)((int)this + 0x34) + 0xc + (puVar5[2] & 0xff) * 0x24) == '\x18')
              {
                FUN_00a770e0(auStack_4c,(int)puVar5);
                local_4 = 4;
                pvVar9 = operator_new(puVar5[0xb]);
                *(void **)(puVar5[10] + 0x18) = pvVar9;
                iVar20 = 0;
                if (0 < (int)puVar5[0xb]) {
                  do {
                    pbVar1 = (byte *)(*(int *)(puVar5[10] + 0x18) + iVar20);
                    bVar3 = *pbVar1;
                    *pbVar1 = bVar3 ^ (*(char *)(iStack_3c + iVar20) == '\0' ^ bVar3) & 1;
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < (int)puVar5[0xb]);
                }
                local_4 = 0xffffffff;
                FUN_00a76e60((int)auStack_4c);
              }
              pcVar13 = *(char **)(*(int *)((int)this + 0x34) + 0x18 + (puVar5[2] & 0xff) * 0x24);
              if ((pcVar13 != (char *)0x0) &&
                 (puVar14 = (undefined4 *)_strncmp("mbp_",pcVar13,4), puVar14 == (undefined4 *)0x0))
              {
                puStack_1f0 = puVar14;
                FUN_009ad890(pcVar13,&iStack_15c,(int *)&puStack_1f0);
                puVar5[2] = puVar5[2] ^ ((int)puStack_1f0 << 0x19 ^ puVar5[2]) & 0x6000000U;
              }
              puVar5[2] = puVar5[2] & 0xfe7fffff | (uint)local_1e0;
              piStack_1d4 = (int *)((int)piStack_1d4 + 1);
            } while ((int)piStack_1d4 < (int)*puStack_1d8);
          }
        }
        FUN_00a48b60();
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < *(int *)((int)this + 0x28));
    }
    iVar20 = *(int *)((int)this + 0x44);
    if (iVar20 != 0) {
      iVar18 = 1;
      iVar4 = 0;
      puStack_1f0 = (undefined4 *)
                    SQRT(*(float *)(iVar20 + 0x4c) * *(float *)(iVar20 + 0x4c) +
                         *(float *)(iVar20 + 0x48) * *(float *)(iVar20 + 0x48) +
                         *(float *)(iVar20 + 0x44) * *(float *)(iVar20 + 0x44));
      if (1 < *(int *)((int)this + 0x28)) {
        pfVar19 = (float *)(iVar20 + 200);
        do {
          puVar5 = (undefined4 *)
                   SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1] + pfVar19[-1] * pfVar19[-1]);
          if ((float)puVar5 < (float)puStack_1f0) {
            iVar4 = iVar18;
            puStack_1f0 = puVar5;
          }
          iVar18 = iVar18 + 1;
          pfVar19 = pfVar19 + 0x20;
        } while (iVar18 < *(int *)((int)this + 0x28));
      }
      if (local_1f5 == 0) {
        puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar4 * 4) + 0x28);
        *puVar10 = *puVar10 | 4;
      }
    }
  }
  if (cStack_170 != '\0') {
    FUN_00a76d40(&iStack_15c,param_1);
    param_1 = param_1 + 2;
    iVar20 = FUN_009ac120(this,"_ks");
    if ((iVar20 == 0) || ((local_1f6 != 0 && (local_1e1 == '\0')))) {
      iVar20 = 0xe;
      bVar25 = true;
      pcVar13 = this;
      pcVar22 = "fac_gatehouse";
      do {
        if (iVar20 == 0) break;
        iVar20 = iVar20 + -1;
        bVar25 = *pcVar13 == *pcVar22;
        pcVar13 = pcVar13 + 1;
        pcVar22 = pcVar22 + 1;
      } while (bVar25);
      if (!bVar25) {
        piVar11 = Skeleton_GetOrCreateShared(&iStack_15c,param_1);
        *(int **)((int)this + 0x40) = piVar11;
      }
    }
    param_1 = param_1 + iStack_158 * 0x15;
  }
  if ((cStack_16f != '\0') || ((bStack_169 & 1) != 0)) {
    iVar20 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      local_1f4 = (uint *)0x0;
      do {
        puVar10 = param_1;
        puVar6 = (uint *)(*(int *)((int)this + 0x44) + (int)local_1f4);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
        }
        param_1 = param_1 + 8;
        iVar4 = FUN_009ac120((char *)(*(int *)((int)this + 0x44) + (int)local_1f4),"_sa_");
        if (iVar4 == -1) {
          iVar4 = FUN_009ac120((char *)(*(int *)((int)this + 0x44) + (int)local_1f4),"_ca_");
          if (iVar4 != -1) {
            puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
            *puVar10 = *puVar10 | 1;
            iVar4 = *(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4);
            uVar16 = *(uint *)(iVar4 + 0x28) | 2;
            goto LAB_009e0218;
          }
        }
        else {
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
          *puVar10 = *puVar10 | 1;
          iVar4 = *(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4);
          uVar16 = *(uint *)(iVar4 + 0x28) & 0xfffffffd;
LAB_009e0218:
          *(uint *)(iVar4 + 0x28) = uVar16;
        }
        iVar20 = iVar20 + 1;
        local_1f4 = local_1f4 + 0x20;
      } while (iVar20 < *(int *)((int)this + 0x28));
    }
    iVar20 = 0;
    if (0 < *(int *)((int)this + 0x28)) {
      local_1e8 = 0;
      do {
        pcVar13 = (char *)(*(int *)((int)this + 0x44) + local_1e8);
        iVar4 = 0xc;
        bVar25 = true;
        pcVar22 = pcVar13;
        pcVar23 = "carbody_ca_";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar22 == *pcVar23;
          pcVar22 = pcVar22 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar25);
        if (bVar25) {
          *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x10000;
          if (*(int *)((int)this + 0x40) != 0) {
            puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
            *puVar10 = *puVar10 | 0x200;
          }
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
          *puVar10 = *puVar10 | 0x400;
        }
        iVar4 = 0xc;
        bVar25 = true;
        pcVar22 = pcVar13;
        pcVar23 = "flwheel_ca_";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar22 == *pcVar23;
          pcVar22 = pcVar22 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar25);
        if (bVar25) {
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
          *puVar10 = *puVar10 | 0x40;
        }
        iVar4 = 0xc;
        bVar25 = true;
        pcVar22 = pcVar13;
        pcVar23 = "frwheel_ca_";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar22 == *pcVar23;
          pcVar22 = pcVar22 + 1;
          pcVar23 = pcVar23 + 1;
        } while (bVar25);
        if (bVar25) {
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
          *puVar10 = *puVar10 | 0x80;
        }
        iVar4 = 0xf;
        bVar25 = true;
        pcVar22 = "rearwheels_ca_";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar13 == *pcVar22;
          pcVar13 = pcVar13 + 1;
          pcVar22 = pcVar22 + 1;
        } while (bVar25);
        if (bVar25) {
          puVar10 = (uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
          *puVar10 = *puVar10 | 0x100;
        }
        uVar16 = *(uint *)(*(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4) + 0x28);
        if (((uVar16 & 0xc0) == 0) && ((uVar16 & 0x100) == 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
        iVar18 = *(int *)(*(int *)((int)this + 0x2c) + iVar20 * 4);
        uVar16 = *(uint *)(iVar18 + 0x28);
        *(uint *)(iVar18 + 0x28) = uVar16 ^ (iVar4 << 5 ^ uVar16) & 0x20;
        iVar20 = iVar20 + 1;
        local_1e8 = local_1e8 + 0x80;
      } while (iVar20 < *(int *)((int)this + 0x28));
    }
  }
  if (bStack_16e != 0) {
    uVar16 = (uint)bStack_16e;
    *(uint *)((int)this + 0x48) = uVar16;
    pvVar9 = operator_new(uVar16 * 0x50);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else if (-1 < (int)(uVar16 - 1)) {
      puVar5 = (undefined4 *)((int)pvVar9 + 0x48);
      do {
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[-1] = 0;
        puVar5[-3] = 0;
        puVar5[-4] = 0;
        puVar5[-5] = 0;
        puVar5[-7] = 0;
        puVar5[-8] = 0;
        puVar5[-9] = 0;
        puVar5[-2] = 0x3f800000;
        puVar5[-6] = 0x3f800000;
        puVar5[-10] = 0x3f800000;
        *(undefined1 *)(puVar5 + -0x12) = 0;
        puVar5 = puVar5 + 0x14;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    *(void **)((int)this + 0x4c) = pvVar9;
    puStack_1f0 = (undefined4 *)0x0;
    if (0 < *(int *)((int)this + 0x48)) {
      iVar20 = 0;
      do {
        iVar4 = FUN_00a76d90((void *)((int)pvVar9 + iVar20),param_1);
        param_1 = (uint *)((int)param_1 + iVar4);
        pvVar9 = *(void **)((int)this + 0x4c);
        iVar4 = 0xf;
        bVar25 = true;
        pcVar13 = (char *)((int)pvVar9 + iVar20);
        pcVar22 = "_sp_pavement_0";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar25 = *pcVar13 == *pcVar22;
          pcVar13 = pcVar13 + 1;
          pcVar22 = pcVar22 + 1;
        } while (bVar25);
        if (bVar25) {
          *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x20000;
        }
        puStack_1f0 = (undefined4 *)((int)puStack_1f0 + 1);
        iVar20 = iVar20 + 0x50;
      } while ((int)puStack_1f0 < *(int *)((int)this + 0x48));
    }
  }
  if ((char)local_16b < '\0') {
    pvVar9 = operator_new(*param_1);
    *(void **)((int)this + 0xc4) = pvVar9;
    iVar20 = LH_LoadMeshCollisionHullSet(pvVar9,param_1);
    param_1 = (uint *)((int)param_1 + iVar20);
  }
  puVar10 = param_1;
  if (iStack_168 != 0) {
    *(int *)((int)this + 0x74) = iStack_168;
    local_1e0 = operator_new(iStack_168 << 6);
    if (local_1e0 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
    }
    else {
      puVar10 = local_1e0;
      if (-1 < iStack_168 + -1) {
        puVar6 = local_1e0 + 0xb;
        do {
          puVar6[-2] = 0x3f800000;
          puVar6[-6] = 0x3f800000;
          puVar6[-10] = 0x3f800000;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[-1] = 0;
          puVar6[-3] = 0;
          puVar6[-4] = 0;
          puVar6[-5] = 0;
          puVar6[-7] = 0;
          puVar6[-8] = 0;
          puVar6[-9] = 0;
          puVar24 = puVar6 + -0xb;
          puVar6 = puVar6 + 0x10;
          iStack_168 = iStack_168 + -1;
          for (iVar20 = 0x10; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar24 = 0;
            puVar24 = puVar24 + 1;
          }
        } while (iStack_168 != 0);
      }
    }
    *(uint **)((int)this + 0x78) = puVar10;
    iVar20 = 0;
    puVar10 = param_1;
    if (0 < *(int *)((int)this + 0x74)) {
      iVar4 = 0;
      do {
        param_1 = puVar10;
        puVar10 = param_1;
        puVar6 = (uint *)(*(int *)((int)this + 0x78) + iVar4);
        for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
          *puVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar20 = iVar20 + 1;
        iVar4 = iVar4 + 0x40;
        puVar10 = param_1 + 0x10;
        local_1e0 = param_1;
      } while (iVar20 < *(int *)((int)this + 0x74));
    }
  }
  param_1 = puVar10;
  *(int *)((int)this + 0xb8) = iStack_164;
  if (iStack_164 != 0) {
    puVar6 = operator_new(iStack_164 << 5);
    *(uint **)((int)this + 0xbc) = puVar6;
    puVar10 = param_1;
    for (iVar20 = (*(uint *)((int)this + 0xb8) & 0x7ffffff) << 3; iVar20 != 0; iVar20 = iVar20 + -1)
    {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
      *(char *)puVar6 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    param_1 = param_1 + *(int *)((int)this + 0xb8) * 8;
  }
  LH_ComputeMeshBounds((int)this);
  puVar5 = (undefined4 *)0x0;
  *(uint *)((int)this + 0xe4) =
       *(uint *)((int)this + 0xe4) ^
       ((uint)(*(int *)((int)this + 0x40) != 0) ^ *(uint *)((int)this + 0xe4)) & 1;
  if (0 < *(int *)((int)this + 0x38)) {
    do {
      iVar20 = _strncmp(*(char **)(*(int *)((int)this + 0x3c) + (int)puVar5 * 4),"bd_",3);
      if (iVar20 == 0) goto LAB_009e05c1;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while ((int)puVar5 < *(int *)((int)this + 0x38));
  }
  puStack_1f0 = (undefined4 *)0xffffffff;
  puVar5 = puStack_1f0;
LAB_009e05c1:
  puStack_1f0 = puVar5;
  puStack_1d8 = (uint *)0x0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piStack_1d4 = *(int **)(*(int *)((int)this + 0x2c) + (int)puStack_1d8 * 4);
      local_1e8 = 0;
      if (0 < *piStack_1d4) {
        do {
          puVar10 = *(uint **)(piStack_1d4[1] + local_1e8 * 4);
          local_1f4 = puVar10;
          uVar7 = FUN_00a6c160(puVar10,(char *)&local_1f7,(char *)&local_1f6);
          if (((char)uVar7 != '\0') && ((puVar10[2] & 0x300000) == 0)) {
            uVar16 = puVar10[2] & 0xff;
            *(uint *)(*(int *)((int)this + 0x34) + 0x10 + uVar16 * 0x24) =
                 *(uint *)(*(int *)((int)this + 0x34) + 0x10 + uVar16 * 0x24) |
                 (local_1f7 & 1) << 0x1b;
            puVar6 = (uint *)(*(int *)((int)this + 0x34) + 0x10 + (puVar10[2] & 0xff) * 0x24);
            *puVar6 = *puVar6 | (local_1f6 & 1) << 0x1c;
          }
          pvVar9 = (void *)(*(int *)((int)this + 0x34) + (puVar10[2] & 0xff) * 0x24);
          if (*(char **)((int)pvVar9 + 0x18) != (char *)0x0) {
            iVar20 = _strncmp(*(char **)((int)pvVar9 + 0x18),"hair_",5);
            if (iVar20 == 0) {
              _sprintf(acStack_14f + 3,"Data\\Textures\\Hair\\%s",
                       *(undefined4 *)((int)pvVar9 + 0x18));
              pcVar13 = acStack_14f + 3;
              do {
                cVar2 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar2 != '\0');
              _sprintf(pcVar13 + (int)afStack_130 + (-0x20 - (int)(acStack_14f + 4)),"_sp.dds");
              local_1c4 = (char *)&local_1b8;
              pcVar13 = acStack_14f + 3;
              local_1b8 = local_1b8 & 0xffffff00;
              local_1c0 = 0;
              local_1bc = 0x14;
              do {
                cVar2 = *pcVar13;
                pcVar13 = pcVar13 + 1;
              } while (cVar2 != '\0');
              uVar16 = (int)pcVar13 - (int)(acStack_14f + 4);
              if (0x13 < uVar16) {
                local_1bc = uVar16 + 0x20 & 0xffffffe0;
                local_1c4 = _malloc(local_1bc);
              }
              _strncpy(local_1c4,acStack_14f + 3,uVar16);
              local_1c4[uVar16] = '\0';
              local_4 = 5;
              local_1c0 = uVar16;
              uVar7 = FUN_009d3660(&local_1c4,(uint *)0x0);
              local_1e9 = (char)uVar7;
              local_4 = 0xffffffff;
              if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
                _free(local_1c4);
              }
              if (local_1e9 != '\0') {
                _sprintf(acStack_14f + 3,*(char **)((int)pvVar9 + 0x18));
                pcVar13 = acStack_14f + 3;
                do {
                  cVar2 = *pcVar13;
                  pcVar13 = pcVar13 + 1;
                } while (cVar2 != '\0');
                _sprintf(pcVar13 + (int)afStack_130 + (-0x20 - (int)(acStack_14f + 4)),"_sp.dds");
                pvVar15 = FUN_0099bb50(acStack_14f + 3,0,0,0,'\0');
                if (*(void **)((int)pvVar9 + 0x1c) != pvVar15) {
                  FUN_00994bc0(pvVar9,(int)pvVar15);
                }
                if (pvVar15 != (void *)0x0) {
                  FUN_0099b400(pvVar15);
                }
                local_1f4[2] = local_1f4[2] | 0x400000;
              }
            }
            iVar20 = _strncmp(*(char **)((int)pvVar9 + 0x18),"bd_",3);
            puVar10 = local_1f4;
            if (iVar20 == 0) {
              *(uint *)((int)pvVar9 + 0x10) = *(uint *)((int)pvVar9 + 0x10) | 0x8000000;
              local_1f4[2] = local_1f4[2] | 0x80000;
            }
            iVar20 = _strncmp(*(char **)((int)pvVar9 + 0x18),"mbp_",4);
            if (iVar20 == 0) {
              *(uint *)((int)pvVar9 + 0x10) = *(uint *)((int)pvVar9 + 0x10) | 0x8000000;
              puVar6 = puVar10 + 2;
              *puVar6 = *puVar6 | 0x20000;
              FUN_009ad890(*(char **)((int)pvVar9 + 0x18),&iStack_15c,(int *)&local_1e0);
              puStack_1c8 = (uint *)((int)local_1e0 + 1);
              puVar10[0x18] = (uint)(float)(int)puStack_1c8;
            }
          }
          if ((*(int *)((int)pvVar9 + 0x18) != 0) &&
             ((*(byte *)(*(int *)((int)pvVar9 + 0x18) + 0x54) & 0x10) != 0)) {
            *(uint *)((int)pvVar9 + 0x10) = *(uint *)((int)pvVar9 + 0x10) & 0xe7ffffff;
          }
          if ((puStack_1f0 == (undefined4 *)(uint)*(byte *)((int)pvVar9 + 8)) &&
             ((local_1f4[2] & 0x800) == 0)) {
            local_1f4[2] = local_1f4[2] | 0x20000;
          }
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < *piStack_1d4);
      }
      puStack_1d8 = (uint *)((int)puStack_1d8 + 1);
    } while ((int)puStack_1d8 < *(int *)((int)this + 0x28));
  }
  bVar25 = FUN_009d9f00(this);
  if (bVar25) {
    cVar2 = FUN_009d9e70(this);
    FUN_00a48f10(this,CONCAT31(extraout_var,cVar2));
  }
  FUN_00a4ae60(this);
  FUN_009dab70((int)this);
  if ((*(int *)((int)this + 0x28) != 0) &&
     ((*(byte *)(**(int **)((int)this + 0x2c) + 0x28) & 8) != 0)) {
    *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 0x1000;
    iVar20 = 0;
    if (0 < *(int *)**(int **)((int)this + 0x2c)) {
      do {
        FUN_00a6c130(*(void **)(*(int *)(**(int **)((int)this + 0x2c) + 4) + iVar20 * 4),
                     *(int *)((int)this + 0x34));
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)**(undefined4 **)((int)this + 0x2c));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_184);
}


//// FUNCTION FUN_009e0e80 @ 009e0e80 ////

/* WARNING: Removing unreachable block (ram,0x009e0ebf) */

void FUN_009e0e80(void)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = DAT_0105eb44;
  do {
    _Memory = pvVar1;
    if (_Memory == (void *)0x0) {
      return;
    }
    pvVar1 = *(void **)((int)_Memory + 0x24);
  } while (((DAT_0105c2e0 != '\0') || ((*(byte *)((int)_Memory + 0xe4) & 2) == 0)) ||
          (*(int *)((int)_Memory + 0x20) != 1));
  *(undefined4 *)((int)_Memory + 0x20) = 0;
  FUN_009dcd60((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION MyAsyncMesh_OnLoadComplete @ 009e0ef0 ////

uint __fastcall MyAsyncMesh_OnLoadComplete(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* CONFIRMED: this is the async mesh-load job's vtable slot+4 (the job object's
                       own vtable at 00d735cc; slot 0 = destructor FUN_009da250, this is slot+4 at
                       00d735d0). It is NOT auto-typed as a pointer by Ghidra's analysis
                       (get_xrefs_from on 00d735d0 finds nothing) even though the Listing view
                       resolves it correctly - found by manual GUI lookup, not via any xref tool.
                       
                       Called from FUN_009b3530 right after the raw .msh file bytes are read into
                       memory, with param_1+0x54 = the mesh object and param_1+0x30 = the loaded
                       file buffer. Dispatches to FUN_009deb10(meshObject, fileBuffer) - the actual
                       binary .msh parser. This is effectively the "on load complete, parse the
                       buffer" callback for MV::MyAsyncMesh. */
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = FUN_009de3b0(*(void **)(param_1 + 0x54));
    return uVar1 & 0xffffff00;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x54) + 0xe4);
  *(uint *)(*(int *)(param_1 + 0x54) + 0xe4) =
       uVar1 ^ ((uint)*(byte *)(param_1 + 0x3d) << 0x1b ^ uVar1) & 0x8000000;
  if ((DAT_010b956d != '\0') || (DAT_010b956d = 0, *(char *)(param_1 + 0x3d) != '\0')) {
    DAT_010b956d = 1;
  }
  LH_LoadMeshBinary(*(void **)(param_1 + 0x54),*(uint **)(param_1 + 0x30));
  uVar2 = FUN_009de3b0(*(void **)(param_1 + 0x54));
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_009e0f90 @ 009e0f90 ////

uint __thiscall FUN_009e0f90(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(byte *)(uVar1 + (int)this) & 0xf) == param_1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_009e0fc0 @ 009e0fc0 ////

int __thiscall FUN_009e0fc0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 + (int)this) & 0xf) == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0xf;
}


//// FUNCTION FUN_009e0ff0 @ 009e0ff0 ////

byte __thiscall FUN_009e0ff0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(byte *)(iVar1 + (int)this) & 0xf) == param_1) {
      return *(byte *)(iVar1 + (int)this) >> 4 & 3;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 0;
}


//// FUNCTION FUN_009e1050 @ 009e1050 ////

void __fastcall FUN_009e1050(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009e1110 @ 009e1110 ////

void __fastcall FUN_009e1110(undefined4 *param_1)

{
  FUN_00a78280(param_1);
  param_1[3] = param_1[3] | 0x10000;
  return;
}


//// FUNCTION FUN_009e1180 @ 009e1180 ////

byte * __thiscall FUN_009e1180(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while (((*(byte *)(iVar1 + (int)this) & 0xf) != param_1 &&
         ((*(byte *)(iVar1 + (int)this) & 0xf) != 0xf))) {
    iVar1 = iVar1 + 1;
    if (2 < iVar1) {
      iVar1 = -(uint)((*(byte *)this & 0xf) < (*(byte *)((int)this + 1) & 0xf));
      iVar2 = iVar1 + 1;
      if ((*(byte *)((int)this + 2) & 0xf) < (*(byte *)(iVar1 + 1 + (int)this) & 0xf)) {
        iVar2 = 2;
      }
      return (byte *)((uint)(iVar2 + (int)this) &
                     ((int)param_1 < (int)(*(byte *)(iVar2 + (int)this) & 0xf)) - 1);
    }
  }
  return (byte *)(iVar1 + (int)this);
}


//// FUNCTION FUN_009e11f0 @ 009e11f0 ////

char * __thiscall FUN_009e11f0(void *this,int param_1,char *param_2)

{
  void *pvVar1;
  char local_100 [256];
  
  _strncpy(this,param_2,0x20);
  *(char *)((int)this + 0x20) = (char)param_1;
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x100;
  _sprintf(local_100,"%s.dds",param_2);
  pvVar1 = FUN_0099bb50(local_100,0,0,0,'\0');
  *(void **)((int)this + 0x24) = pvVar1;
  if (param_1 != 0) {
    _sprintf(local_100,"Alpha Landscape %d",*(uint *)((int)this + 0x20) & 0xff);
    pvVar1 = FUN_0099bb50(local_100,0x1a,0x100,0x100,'\0');
    *(void **)((int)this + 0x28) = pvVar1;
    return this;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  return this;
}


//// FUNCTION FUN_009e12b0 @ 009e12b0 ////

void __fastcall FUN_009e12b0(int param_1)

{
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


//// FUNCTION FUN_009e12e0 @ 009e12e0 ////

void __cdecl FUN_009e12e0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = 0x101;
  do {
    iVar2 = 0x101;
    do {
      uVar3 = FUN_00acd42c();
      *param_1 = (char)uVar3;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_009e1370 @ 009e1370 ////

uint __thiscall FUN_009e1370(void *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  uVar2 = 0;
  do {
    if ((*(byte *)(uVar2 + (int)this) & 0xf) == param_1) {
      uVar2 = *(byte *)(uVar2 + (int)this) >> 4 & 3;
      if (uVar2 == 3) {
        uVar2 = 0;
        while ((*(byte *)(uVar2 + 4 + (int)this) & 0xf) != param_1) {
          uVar2 = uVar2 + 1;
          if (2 < (int)uVar2) {
            return uVar2 & 0xffffff00;
          }
        }
        uVar2 = *(byte *)(uVar2 + 4 + (int)this) >> 4 & 3;
        if (uVar2 == 3) {
          bVar1 = FUN_009e0ff0((void *)((int)this + 0x404),param_1);
          uVar2 = CONCAT31(extraout_var,bVar1);
          if (uVar2 == 3) {
            bVar1 = FUN_009e0ff0((void *)((int)this + 0x408),param_1);
            return CONCAT31(extraout_var_00,CONCAT31(extraout_var_00,bVar1) == 3);
          }
        }
      }
      return uVar2 & 0xffffff00;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009e1410 @ 009e1410 ////

uint __thiscall FUN_009e1410(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  
  uVar2 = 0;
  while (uVar1 = uVar2, (*(byte *)(uVar2 + (int)this) & 0xf) != param_1) {
    uVar2 = uVar2 + 1;
    if (2 < (int)uVar2) {
      return uVar2 & 0xffffff00;
    }
  }
  do {
    do {
      uVar1 = uVar1 + 1;
      if (2 < (int)uVar1) {
        return uVar2 & 0xffffff00;
      }
      uVar2 = *(byte *)((int)this + uVar1) & 0xf;
    } while (uVar2 == 0xf);
    uVar3 = FUN_009e1370(this,uVar2);
    cVar4 = (char)uVar3 != '\0';
    uVar3 = FUN_009e1370((void *)((int)this + -4),uVar2);
    if ((char)uVar3 != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    uVar3 = FUN_009e1370((void *)((int)this + -0x404),uVar2);
    if ((char)uVar3 != '\0') {
      cVar4 = cVar4 + '\x01';
    }
    uVar2 = FUN_009e1370((void *)((int)this + -0x408),uVar2);
    if ((char)uVar2 != '\0') {
      cVar4 = cVar4 + '\x01';
    }
  } while (cVar4 != '\x04');
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_009e14c0 @ 009e14c0 ////

void __fastcall FUN_009e14c0(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uStack_4;
  
  bVar4 = *param_1;
  bVar3 = param_1[2];
  bVar2 = param_1[1];
  do {
    uStack_4 = (uint)bVar3 << 0x10;
    while( true ) {
      uVar1 = uStack_4;
      uStack_4 = uStack_4 & 0xffffff;
      bVar3 = bVar2;
      if ((bVar2 & 0xf) < (bVar4 & 0xf)) {
        uStack_4 = CONCAT13(1,(int3)uVar1);
        bVar3 = bVar4;
        bVar4 = bVar2;
      }
      bVar2 = uStack_4._2_1_;
      if ((uStack_4._2_1_ & 0xf) < (bVar3 & 0xf)) break;
      bVar2 = bVar3;
      if (uStack_4._3_1_ == '\0') {
        param_1[1] = bVar3;
        param_1[2] = uStack_4._2_1_;
        *param_1 = bVar4;
        if (((bVar4 & 0xf) != 0xf) && (DAT_0105f8e0 == '\0')) {
          *param_1 = bVar4 | 0x30;
        }
        return;
      }
    }
  } while( true );
}


//// FUNCTION FUN_009e1540 @ 009e1540 ////

void __cdecl FUN_009e1540(int param_1,char *param_2)

{
  void *this;
  char *pcVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf848b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  this = operator_new(0x2c);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar1 = FUN_009e11f0(this,param_1,param_2);
    (&DAT_0105f890)[param_1] = pcVar1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  (&DAT_0105f890)[param_1] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}


//// FUNCTION FUN_009e15c0 @ 009e15c0 ////

void __fastcall FUN_009e15c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_1[6] & 0xfffffffe | 6;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_009e15e0 @ 009e15e0 ////

void __fastcall FUN_009e15e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_1[6] & 0xfffffffe | 6;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_009e1610 @ 009e1610 ////

undefined4 * __thiscall FUN_009e1610(void *this,byte param_1)

{
  FUN_00a79570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009e1630 @ 009e1630 ////

undefined4 * __thiscall FUN_009e1630(void *this,byte param_1)

{
  FUN_00a78280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009e1650 @ 009e1650 ////

void * __thiscall FUN_009e1650(void *this,byte param_1)

{
  FUN_00a79680((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009e16b0 @ 009e16b0 ////

void __cdecl FUN_009e16b0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *local_8;
  
  uVar1 = param_3;
  puVar9 = &DAT_0105ef88;
  for (iVar4 = 0x242; iVar8 = g_OccupancyGrid256_A, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (param_3 == DAT_0105f8d4 - 1U) {
    param_3 = 0xffffffff;
    iVar4 = param_1 * 0x100 + -0x100;
    local_8 = (undefined1 *)0x105ef89;
    do {
      iVar5 = -1;
      iVar10 = param_2 + -1;
      do {
        if (((-1 < (int)(param_3 + param_1)) && ((int)(param_3 + param_1) < 0x100)) &&
           ((-1 < iVar10 &&
            ((iVar10 < 0x100 &&
             (iVar7 = iVar4 + iVar10, iVar3 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar8 + iVar3) & (byte)(1 << ((char)iVar7 + (char)iVar3 * -8 & 0x1fU))) != 0
             )))))) {
          *(undefined1 *)((int)local_8 + iVar5) = 0xff;
        }
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar5 < 0x21);
      local_8 = (undefined1 *)((int)local_8 + 0x22);
      param_3 = param_3 + 1;
      iVar4 = iVar4 + 0x100;
    } while ((int)local_8 < 0x105f40d);
LAB_009e1925:
    puVar9 = &DAT_0105ef88;
    puVar11 = &DAT_0105f40c;
    for (iVar4 = 0x121; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    return;
  }
  iVar4 = (param_1 * 0x101 + param_2) * 4;
  param_3 = 0;
  local_8 = &DAT_0105efab;
LAB_009e1704:
  iVar7 = 0;
  iVar5 = param_3 + param_1;
  iVar8 = param_2;
  iVar10 = iVar4;
LAB_009e1720:
  iVar3 = 0;
  do {
    if ((*(byte *)(DAT_0105f8d0 + iVar10 + iVar3) & 0xf) == uVar1) goto LAB_009e17f0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    if ((*(byte *)(DAT_0105f8d0 + iVar10 + 4 + iVar3) & 0xf) == uVar1) goto LAB_009e17f0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar10 + 0x404 + DAT_0105f8d0 + iVar3) & 0xf) == uVar1) goto LAB_009e17f0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    if ((*(byte *)(iVar10 + 0x408 + DAT_0105f8d0 + iVar3) & 0xf) == uVar1) goto LAB_009e17f0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  cVar2 = '\0';
  goto LAB_009e17ab;
LAB_009e17f0:
  if ((((iVar5 < 0) || (0xff < iVar5)) || (iVar8 < 0)) || (0xff < iVar8)) {
    cVar2 = -1;
  }
  else {
    iVar6 = iVar5 * 0x100 + iVar8;
    iVar3 = (int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3;
    cVar2 = ((*(byte *)(g_OccupancyGrid256_A + iVar3) &
             (byte)(1 << ((char)iVar6 + (char)iVar3 * -8 & 0x1fU))) != 0) + -1;
  }
LAB_009e17ab:
  local_8[iVar7] = cVar2;
  iVar7 = iVar7 + 1;
  iVar10 = iVar10 + 4;
  iVar8 = iVar8 + 1;
  if (0x1f < iVar7) goto code_r0x009e17c0;
  goto LAB_009e1720;
code_r0x009e17c0:
  local_8 = local_8 + 0x22;
  param_3 = param_3 + 1;
  iVar4 = iVar4 + 0x404;
  if (0x105f3ea < (int)local_8) goto LAB_009e1925;
  goto LAB_009e1704;
}


//// FUNCTION FUN_009e1980 @ 009e1980 ////

void __cdecl FUN_009e1980(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  
  iVar3 = *param_1;
  if ((((-1 < iVar3) && (iVar3 < 0x100)) && (iVar2 = param_1[1], -1 < iVar2)) && (iVar2 < 0x100)) {
    iVar2 = iVar3 * 0x100 + iVar2;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    if (DAT_0105ef80 == '\0') {
      bVar5 = '\x01' << ((char)iVar2 + (char)iVar3 * -8 & 0x1fU);
      *(byte *)(g_OccupancyGrid256_B + iVar3) = *(byte *)(g_OccupancyGrid256_B + iVar3) & ~bVar5;
    }
    else {
      bVar5 = '\x01' << ((char)iVar2 + (char)iVar3 * -8 & 0x1fU);
      *(byte *)(g_OccupancyGrid256_B + iVar3) = *(byte *)(g_OccupancyGrid256_B + iVar3) | bVar5;
    }
    *(byte *)(g_OccupancyGrid256_A + iVar3) = *(byte *)(g_OccupancyGrid256_A + iVar3) | bVar5;
    iVar3 = *param_1;
    if (((iVar3 < 0) || (0xff < iVar3)) || ((iVar2 = param_1[1], iVar2 < 0 || (0xff < iVar2)))) {
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar6 = (byte *)(DAT_0105f8d0 + (iVar3 * 0x101 + iVar2) * 4);
    }
    cVar8 = (*pbVar6 & 0xf) != 0xf;
    if ((pbVar6[1] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if ((pbVar6[2] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 == '\0') {
      *pbVar6 = *pbVar6 & 0xf0 | 0x30;
    }
    FUN_009e14c0(pbVar6);
    pbVar1 = pbVar6 + 4;
    cVar8 = (pbVar6[4] & 0xf) != 0xf;
    if ((pbVar6[5] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if ((pbVar6[6] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 == '\0') {
      *pbVar1 = *pbVar1 & 0xf0 | 0x30;
    }
    FUN_009e14c0(pbVar1);
    pbVar1 = pbVar6 + 0x404;
    cVar8 = (pbVar6[0x404] & 0xf) != 0xf;
    if ((pbVar6[0x405] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if ((pbVar6[0x406] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 == '\0') {
      *pbVar1 = *pbVar1 & 0xf0 | 0x30;
    }
    FUN_009e14c0(pbVar1);
    pbVar1 = pbVar6 + 0x408;
    cVar8 = (pbVar6[0x408] & 0xf) != 0xf;
    if ((pbVar6[0x409] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if ((pbVar6[0x40a] & 0xf) != 0xf) {
      cVar8 = cVar8 + '\x01';
    }
    if (cVar8 == '\0') {
      *pbVar1 = *pbVar1 & 0xf0 | 0x30;
    }
    FUN_009e14c0(pbVar1);
    iVar3 = 0;
    do {
      iVar2 = *(int *)((int)&DAT_00e6855c + iVar3) + *param_1;
      iVar7 = *(int *)((int)&DAT_00e68538 + iVar3) + param_1[1];
      iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
      iVar2 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
      if (((-1 < iVar4) && (iVar4 < 8)) &&
         ((-1 < iVar2 && ((iVar2 < 8 && (iVar2 = iVar2 + iVar4 * 8, iVar2 * 0x1c != -0x105f8f8))))))
      {
        (&DAT_0105f910)[iVar2 * 7] = (&DAT_0105f910)[iVar2 * 7] | 2;
      }
      iVar2 = *(int *)((int)&DAT_00e68560 + iVar3) + *param_1;
      iVar7 = *(int *)((int)&DAT_00e6853c + iVar3) + param_1[1];
      iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
      iVar2 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
      if ((((-1 < iVar4) && (iVar4 < 8)) && (-1 < iVar2)) &&
         ((iVar2 < 8 && (iVar2 = iVar2 + iVar4 * 8, iVar2 * 0x1c != -0x105f8f8)))) {
        (&DAT_0105f910)[iVar2 * 7] = (&DAT_0105f910)[iVar2 * 7] | 2;
      }
      iVar2 = *(int *)((int)&DAT_00e68564 + iVar3) + *param_1;
      iVar7 = *(int *)((int)&DAT_00e68540 + iVar3) + param_1[1];
      iVar4 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
      iVar2 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
      if (((-1 < iVar4) && (iVar4 < 8)) &&
         ((-1 < iVar2 && ((iVar2 < 8 && (iVar2 = iVar2 + iVar4 * 8, iVar2 * 0x1c != -0x105f8f8))))))
      {
        (&DAT_0105f910)[iVar2 * 7] = (&DAT_0105f910)[iVar2 * 7] | 2;
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 < 0x24);
    DAT_0105f8e8 = 1;
  }
  return;
}


//// FUNCTION FUN_009e1c90 @ 009e1c90 ////

void FUN_009e1c90(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0105f904;
  do {
    iVar2 = 8;
    do {
      if (((*(byte *)(puVar1 + 3) & 1) != 0) && ((int *)*puVar1 != (int *)0x0)) {
        FUN_009e5b40((int *)*puVar1);
      }
      puVar1 = puVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while ((int)puVar1 < 0x1060004);
  return;
}


//// FUNCTION FUN_009e1cd0 @ 009e1cd0 ////

void __thiscall FUN_009e1cd0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  if ((((param_1 != (void *)0x0) && (*(char *)((int)param_1 + 0x9c) < '\0')) &&
      (iVar5 = FUN_0097e350(param_1,0), iVar5 != 0)) && ((*(byte *)(iVar5 + 0xe4) & 0x40) != 0)) {
    FUN_00a557a0(&local_18,param_1);
    iVar2 = *(int *)((int)this + 4);
    iVar3 = *(int *)this;
    for (iVar5 = iVar2 + -1; iVar4 = iVar3 + -1, iVar5 <= iVar2 + 1; iVar5 = iVar5 + 1) {
      for (; iVar4 <= iVar3 + 1; iVar4 = iVar4 + 1) {
        if (((-1 < iVar5) && (iVar5 < 8)) && ((-1 < iVar4 && (iVar4 < 8)))) {
          iVar1 = iVar4 + iVar5 * 8;
          if ((((int *)(&DAT_0105f8f8 + iVar1 * 0x1c) != (int *)0x0) &&
              ((&DAT_0105f904)[iVar1 * 7] != 0)) &&
             ((FUN_00a54ed0(&local_30,(&DAT_0105f904)[iVar1 * 7]), local_30 <= local_c &&
              (((local_2c <= local_8 && (local_18 <= local_24)) && (local_14 <= local_20)))))) {
            FUN_00a56650((int *)(&DAT_0105f8f8 + iVar1 * 0x1c));
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009e1de0 @ 009e1de0 ////

void __fastcall FUN_009e1de0(int *param_1)

{
  undefined4 *puVar1;
  
  if (((*(byte *)(param_1 + 6) & 4) != 0) && (DAT_0105be08 != 0)) {
    puVar1 = (undefined4 *)param_1[4];
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = operator_new(0x10);
      if (puVar1 == (undefined4 *)0x0) {
        param_1[4] = 0;
      }
      else {
        puVar1[3] = puVar1[3] | 0x10000;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = param_1;
        *(undefined2 *)(puVar1 + 3) = 0;
        param_1[4] = (int)puVar1;
      }
    }
    else {
      FUN_00a78280(puVar1);
      puVar1[3] = puVar1[3] | 0x10000;
    }
    FUN_009e16b0(param_1[1] << 5,*param_1 << 5,DAT_0105f8d4 - 1);
    FUN_00a79370((void *)param_1[4]);
    FUN_00a79170((undefined4 *)param_1[4]);
    FUN_00a79370((void *)param_1[4]);
    return;
  }
  return;
}


//// FUNCTION FUN_009e1e80 @ 009e1e80 ////

uint FUN_009e1e80(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)&DAT_0105ef88;
  while ((((*(char *)((int)&DAT_0105ef88 + iVar2) == '\0' && ((&DAT_0105f368)[iVar2] == '\0')) &&
          (*pcVar1 == '\0')) && (pcVar1[0x1f] == '\0'))) {
    pcVar1 = pcVar1 + 0x20;
    iVar2 = iVar2 + 1;
    if (0x105f387 < (int)pcVar1) {
      return (uint)pcVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)pcVar1 >> 8),1);
}


//// FUNCTION FUN_009e1ed0 @ 009e1ed0 ////

void __fastcall FUN_009e1ed0(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00a79680((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_009e1f10 @ 009e1f10 ////

void __thiscall FUN_009e1f10(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = ((*(byte *)(param_1 + (int)this) & 0x30) >> 4) - 1;
  if (iVar1 < 0) {
    *(byte *)(param_1 + (int)this) = *(byte *)(param_1 + (int)this) | 0xf;
    iVar1 = 0;
  }
  *(byte *)(param_1 + (int)this) =
       *(byte *)(param_1 + (int)this) ^ ((char)iVar1 << 4 ^ *(byte *)(param_1 + (int)this)) & 0x30;
  return;
}


//// FUNCTION FUN_009e1f40 @ 009e1f40 ////

void __thiscall FUN_009e1f40(void *this,int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + (int)this);
  uVar3 = ((bVar1 & 0x30) >> 4) + 1;
  cVar2 = (char)uVar3;
  if (3 < uVar3) {
    cVar2 = '\x03';
  }
  *(byte *)(param_1 + (int)this) = (cVar2 << 4 ^ bVar1) & 0x30 ^ bVar1;
  return;
}


//// FUNCTION FUN_009e1f70 @ 009e1f70 ////

int __fastcall FUN_009e1f70(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = (*param_1 & 0x30) >> 4;
  iVar2 = 1;
  do {
    if ((param_1[iVar2] & 0xf) == 0xf) {
      return iVar2;
    }
    uVar3 = (param_1[iVar2] & 0x30) >> 4;
    if (uVar3 < uVar1) {
      iVar4 = iVar2;
      uVar1 = uVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return iVar4;
}


//// FUNCTION FUN_009e1ff0 @ 009e1ff0 ////

void __cdecl FUN_009e1ff0(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  if ((((-1 < iVar2) && (iVar2 < 0x100)) && (iVar1 = param_1[1], -1 < iVar1)) && (iVar1 < 0x100)) {
    iVar1 = iVar2 * 0x100 + iVar1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    bVar3 = ~('\x01' << ((char)iVar1 + (char)iVar2 * -8 & 0x1fU));
    *(byte *)(g_OccupancyGrid256_A + iVar2) = *(byte *)(g_OccupancyGrid256_A + iVar2) & bVar3;
    *(byte *)(g_OccupancyGrid256_B + iVar2) = *(byte *)(g_OccupancyGrid256_B + iVar2) & bVar3;
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)&DAT_00e685a4 + iVar2) + *param_1;
      iVar5 = *(int *)((int)&DAT_00e68580 + iVar2) + param_1[1];
      iVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
      iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
      if (((-1 < iVar4) && (iVar4 < 8)) &&
         ((-1 < iVar1 && ((iVar1 < 8 && (iVar1 = iVar1 + iVar4 * 8, iVar1 * 0x1c != -0x105f8f8))))))
      {
        (&DAT_0105f910)[iVar1 * 7] = (&DAT_0105f910)[iVar1 * 7] | 2;
      }
      iVar1 = *(int *)((int)&DAT_00e685a8 + iVar2) + *param_1;
      iVar5 = *(int *)((int)&DAT_00e68584 + iVar2) + param_1[1];
      iVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
      iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
      if ((((-1 < iVar4) && (iVar4 < 8)) && (-1 < iVar1)) &&
         ((iVar1 < 8 && (iVar1 = iVar1 + iVar4 * 8, iVar1 * 0x1c != -0x105f8f8)))) {
        (&DAT_0105f910)[iVar1 * 7] = (&DAT_0105f910)[iVar1 * 7] | 2;
      }
      iVar1 = *(int *)((int)&DAT_00e685ac + iVar2) + *param_1;
      iVar5 = *(int *)((int)&DAT_00e68588 + iVar2) + param_1[1];
      iVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
      iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
      if (((-1 < iVar4) && (iVar4 < 8)) &&
         ((-1 < iVar1 && ((iVar1 < 8 && (iVar1 = iVar1 + iVar4 * 8, iVar1 * 0x1c != -0x105f8f8))))))
      {
        (&DAT_0105f910)[iVar1 * 7] = (&DAT_0105f910)[iVar1 * 7] | 2;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 < 0x24);
    DAT_0105f8e8 = 1;
  }
  return;
}


//// FUNCTION FUN_009e23b0 @ 009e23b0 ////

float10 __cdecl FUN_009e23b0(float param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < (int)param_1) && ((int)param_1 < 0x100)) && (-1 < (int)param_2)) &&
     (((int)param_2 < 0x100 &&
      (iVar1 = DAT_0105f8d0 + ((int)param_1 * 0x101 + (int)param_2) * 4, iVar1 != 0)))) {
    param_1 = 1.0;
    iVar2 = 2;
    while (0.0 < param_1) {
      if (iVar2 == 0) {
        param_2 = 1.0;
      }
      else {
        param_2 = ((float)(*(byte *)(iVar2 + iVar1) >> 4 & 3) + 1.0) * 0.25;
      }
      if ((*(byte *)(iVar2 + iVar1) & 0xf) == param_3) {
        return (float10)param_2 * (float10)param_1;
      }
      if ((*(byte *)(iVar2 + iVar1) & 0xf) != 0xf) {
        param_1 = (1.0 - param_2) * param_1;
      }
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return (float10)0.0;
      }
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_009e2490 @ 009e2490 ////

void __cdecl FUN_009e2490(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if ((((-1 < param_1) && (param_1 < 0x100)) && (-1 < param_2)) &&
     ((param_2 < 0x100 && (iVar1 = DAT_0105f8d0 + (param_1 * 0x101 + param_2) * 4, iVar1 != 0)))) {
    fVar2 = 1.0;
    iVar4 = 2;
    do {
      if (fVar2 <= 0.0) {
        return;
      }
      if (iVar4 == 0) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = ((float)(*(byte *)(iVar4 + iVar1) >> 4 & 3) + 1.0) * 0.25;
      }
      if ((*(byte *)(iVar4 + iVar1) & 0xf) != 0xf) {
        param_3[*(byte *)(iVar4 + iVar1) & 0xf] = fVar3 * fVar2;
        fVar2 = (1.0 - fVar3) * fVar2;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return;
  }
  param_3[4] = 0x3f800000;
  return;
}


//// FUNCTION FUN_009e2580 @ 009e2580 ////

void FUN_009e2580(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(DAT_0105f8d0 + 3);
  iVar2 = 0x10000;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_009e25a0 @ 009e25a0 ////

void __cdecl FUN_009e25a0(uint param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_00450840(param_1,param_2);
  cVar2 = (char)uVar3;
  while ((((cVar2 != '\0' && (-1 < (int)param_1)) && ((int)param_1 < 0x100)) &&
         (((-1 < param_2 && (param_2 < 0x100)) &&
          ((iVar1 = DAT_0105f8d0 + (param_1 * 0x101 + param_2) * 4, iVar1 != 0 &&
           (*(char *)(iVar1 + 3) == '\0'))))))) {
    *(undefined1 *)(iVar1 + 3) = 1;
    FUN_009e25a0(param_1 - 1,param_2);
    FUN_009e25a0(param_1 + 1,param_2);
    FUN_009e25a0(param_1,param_2 + -1);
    param_2 = param_2 + 1;
    uVar3 = FUN_00450840(param_1,param_2);
    cVar2 = (char)uVar3;
  }
  return;
}


//// FUNCTION FUN_009e2630 @ 009e2630 ////

undefined4 __cdecl FUN_009e2630(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < param_1) && (param_1 < 0x100)) && (-1 < param_2)) &&
     (((param_2 < 0x100 && (iVar1 = DAT_0105f8d0 + (param_1 * 0x101 + param_2) * 4, iVar1 != 0)) &&
      (*(char *)(iVar1 + 3) != '\0')))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  iVar1 = param_1 + -1;
  if (((((iVar1 < 0) || (0xff < iVar1)) ||
       ((param_2 < 0 ||
        (((0xff < param_2 || (iVar2 = DAT_0105f8d0 + (iVar1 * 0x101 + param_2) * 4, iVar2 == 0)) ||
         (*(char *)(iVar2 + 3) == '\0')))))) &&
      (((iVar2 = param_2 + -1, param_1 < 0 || (0xff < param_1)) ||
       ((iVar2 < 0 ||
        (((0xff < iVar2 || (param_1 = DAT_0105f8d0 + (param_1 * 0x101 + iVar2) * 4, param_1 == 0))
         || (*(char *)(param_1 + 3) == '\0')))))))) &&
     (((((iVar1 < 0 || (0xff < iVar1)) || (iVar2 < 0)) ||
       ((0xff < iVar2 || (param_1 = DAT_0105f8d0 + (iVar1 * 0x101 + iVar2) * 4, param_1 == 0)))) ||
      (*(char *)(param_1 + 3) == '\0')))) {
    return param_1 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_009e2750 @ 009e2750 ////

undefined4 FUN_009e2750(void)

{
  if (DAT_0105be14 == 0) {
    return 0x80;
  }
  if ((DAT_0105be14 != 1) && (DAT_0105be14 == 2)) {
    return 0x200;
  }
  return 0x100;
}


//// FUNCTION FUN_009e27f0 @ 009e27f0 ////

void __cdecl FUN_009e27f0(uint param_1,undefined1 *param_2)

{
  byte *this;
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_009e12e0(param_2);
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  do {
    iVar5 = 0;
    iVar4 = local_c;
    local_18 = local_10;
    do {
      bVar1 = param_2[local_18];
      if (bVar1 < 0xab) {
        if (bVar1 == 0xaa) {
          cVar2 = '\x02';
        }
        else {
          if ((bVar1 == 0) || (bVar1 != 0x55)) goto LAB_009e284d;
          cVar2 = '\x01';
        }
      }
      else if (bVar1 == 0xff) {
        cVar2 = '\x03';
      }
      else {
LAB_009e284d:
        cVar2 = '\0';
      }
      if (cVar2 != '\0') {
        if (param_1 == DAT_0105f8d4 - 1U) {
          local_8 = local_14;
          local_4 = iVar5;
          FUN_009e1980(&local_8);
        }
        else {
          this = (byte *)(DAT_0105f8d0 + iVar4);
          pbVar3 = FUN_009e1180(this,param_1);
          if (pbVar3 != (byte *)0x0) {
            *pbVar3 = cVar2 << 4 | *pbVar3 & 0xc0 | (byte)param_1 & 0xf;
            FUN_009e14c0(this);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      local_18 = local_18 + 1;
    } while (iVar5 < 0x100);
    local_10 = local_10 + 0x101;
    local_14 = local_14 + 1;
    local_c = local_c + 0x404;
    if (0x100ff < local_10) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_009e2950 @ 009e2950 ////

void __thiscall FUN_009e2950(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf84b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 < 2) {
    ExceptionList = &local_c;
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffb;
  }
  if (param_1 < 1) {
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffb;
  }
  if (6 < param_1) {
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffb;
  }
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_1;
  iVar1 = DAT_0105f8d4;
  if ((*(byte *)((int)this + 0x18) & 4) != 0) {
    piVar2 = operator_new(DAT_0105f8d4 * 8 + 4);
    piVar4 = (int *)0x0;
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      piVar4 = piVar2 + 1;
      *piVar2 = iVar1;
      _eh_vector_constructor_iterator_(piVar4,8,iVar1,FUN_009e1050,FUN_009e1ed0);
    }
    *(int **)((int)this + 8) = piVar4;
    local_4 = 0xffffffff;
    if (DAT_0105be08 != 0) {
      puVar3 = operator_new(0x18);
      local_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00a79550(puVar3);
      }
      local_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0xc) = puVar3;
      FUN_009e5c60(puVar3,param_1,param_2);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009e2ab0 @ 009e2ab0 ////

void __fastcall FUN_009e2ab0(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),FUN_009e1ed0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00a79570(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00a78280(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_009e2b20 @ 009e2b20 ////

void __fastcall FUN_009e2b20(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  if (0 < DAT_0105f8d4) {
    do {
      local_1c = 0;
      if (local_18 == DAT_0105f8d4 - 1U) {
        iVar3 = param_1[1] << 0xd;
        local_10 = 0;
        do {
          iVar4 = param_1[1] * 0x20 + local_10;
          local_14 = 8;
          iVar2 = *param_1 * 0x20 + 1;
          do {
            if ((-1 < iVar4) && (iVar4 < 0x100)) {
              iVar5 = iVar2 + -1;
              if ((-1 < iVar5) &&
                 ((iVar5 < 0x100 &&
                  (iVar5 = iVar3 + iVar5, iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                  (*(byte *)(g_OccupancyGrid256_A + iVar1) &
                  (byte)(1 << ((char)iVar5 + (char)iVar1 * -8 & 0x1fU))) != 0)))) {
                local_1c = local_1c + 1;
              }
              if (iVar4 < 0x100) {
                if (((-1 < iVar2) && (iVar2 < 0x100)) &&
                   (iVar5 = iVar3 + iVar2, iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                   (*(byte *)(g_OccupancyGrid256_A + iVar1) &
                   (byte)(1 << ((char)iVar5 + (char)iVar1 * -8 & 0x1fU))) != 0)) {
                  local_1c = local_1c + 1;
                }
                if (iVar4 < 0x100) {
                  iVar5 = iVar2 + 1;
                  if (((-1 < iVar5) && (iVar5 < 0x100)) &&
                     (iVar5 = iVar3 + iVar5, iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                     (*(byte *)(g_OccupancyGrid256_A + iVar1) &
                     (byte)(1 << ((char)iVar5 + (char)iVar1 * -8 & 0x1fU))) != 0)) {
                    local_1c = local_1c + 1;
                  }
                  if (((iVar4 < 0x100) && (iVar5 = iVar2 + 2, -1 < iVar5)) &&
                     ((iVar5 < 0x100 &&
                      (iVar5 = iVar3 + iVar5, iVar1 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                      (*(byte *)(g_OccupancyGrid256_A + iVar1) &
                      (byte)(1 << ((char)iVar5 + (char)iVar1 * -8 & 0x1fU))) != 0)))) {
                    local_1c = local_1c + 1;
                  }
                }
              }
            }
            iVar2 = iVar2 + 4;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
          local_10 = local_10 + 1;
          iVar3 = iVar3 + 0x100;
        } while (local_10 < 0x20);
      }
      else {
        iVar4 = (param_1[1] * 0x101 + *param_1) * 0x80 + DAT_0105f8d0;
        iVar3 = 0x21;
        do {
          iVar5 = 0x21;
          iVar2 = iVar4;
          do {
            iVar1 = 0;
            do {
              if ((*(byte *)(iVar2 + iVar1) & 0xf) == local_18) {
                local_1c = local_1c + 1;
                break;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < 3);
            iVar2 = iVar2 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          iVar4 = iVar4 + 0x404;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(int *)(param_1[2] + 4 + local_18 * 8) = local_1c;
      local_18 = local_18 + 1;
    } while ((int)local_18 < DAT_0105f8d4);
  }
  return;
}


//// FUNCTION FUN_009e2d70 @ 009e2d70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009e2d70(void)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float local_10;
  float local_c;
  uint *local_8;
  int local_4;
  
  pfVar3 = (float *)(DAT_0105be8c + 2);
  puVar7 = (uint *)(DAT_0105be8c + 0x30002);
  local_8 = (uint *)0x0;
  do {
    fVar6 = ((float)(int)local_8 - 4.0) * 64.0;
    *pfVar3 = ((_DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6) - _DAT_0105c474 * 256.0) + _DAT_0105c48c
    ;
    pfVar3[1] = ((_DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6) - _DAT_0105c478 * 256.0) +
                _DAT_0105c490;
    fVar5 = ((_DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470) - _DAT_0105c47c * 256.0) + _DAT_0105c494;
    pfVar3[2] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = 1;
    }
    if (*pfVar3 <= pfVar3[2]) {
      if (*pfVar3 < -pfVar3[2]) {
        uVar2 = *puVar7 | 0x10;
        goto LAB_009e2e67;
      }
    }
    else {
      uVar2 = *puVar7 | 0x20;
LAB_009e2e67:
      *puVar7 = uVar2;
    }
    if (pfVar3[1] <= pfVar3[2]) {
      if (pfVar3[1] < -pfVar3[2]) {
        uVar2 = *puVar7 | 4;
        goto LAB_009e2e91;
      }
    }
    else {
      uVar2 = *puVar7 | 8;
LAB_009e2e91:
      *puVar7 = uVar2;
    }
    if (*puVar7 == 0) {
      fVar5 = pfVar3[2];
      pfVar3[2] = 1.0 / fVar5;
      *pfVar3 = ((1.0 / fVar5) * *pfVar3 + 1.0) * _DAT_0105c410;
      pfVar3[1] = _DAT_0105c414 - pfVar3[2] * pfVar3[1] * _DAT_0105c414;
      pfVar3[2] = 1.0 - _DAT_0105c3f4 * pfVar3[2];
    }
    pfVar4 = pfVar3 + 3;
    puVar8 = puVar7 + 1;
    *pfVar4 = ((_DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6) - _DAT_0105c474 * 192.0) + _DAT_0105c48c
    ;
    pfVar3[4] = ((_DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6) - _DAT_0105c478 * 192.0) +
                _DAT_0105c490;
    fVar5 = ((_DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470) - _DAT_0105c47c * 192.0) + _DAT_0105c494;
    pfVar3[5] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[5]) {
      if (*pfVar4 < -pfVar3[5]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e2fa8;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e2fa8:
      *puVar8 = uVar2;
    }
    if (pfVar3[4] <= pfVar3[5]) {
      if (pfVar3[4] < -pfVar3[5]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e2fd2;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e2fd2:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[5];
      pfVar3[5] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[4] = _DAT_0105c414 - pfVar3[5] * pfVar3[4] * _DAT_0105c414;
      pfVar3[5] = 1.0 - _DAT_0105c3f4 * pfVar3[5];
    }
    pfVar4 = pfVar3 + 6;
    puVar8 = puVar7 + 2;
    *pfVar4 = ((_DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6) - _DAT_0105c474 * 128.0) + _DAT_0105c48c
    ;
    pfVar3[7] = ((_DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6) - _DAT_0105c478 * 128.0) +
                _DAT_0105c490;
    fVar5 = ((_DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470) - _DAT_0105c47c * 128.0) + _DAT_0105c494;
    pfVar3[8] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[8]) {
      if (*pfVar4 < -pfVar3[8]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e30e9;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e30e9:
      *puVar8 = uVar2;
    }
    if (pfVar3[7] <= pfVar3[8]) {
      if (pfVar3[7] < -pfVar3[8]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3113;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3113:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[8];
      pfVar3[8] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[7] = _DAT_0105c414 - pfVar3[8] * pfVar3[7] * _DAT_0105c414;
      pfVar3[8] = 1.0 - _DAT_0105c3f4 * pfVar3[8];
    }
    pfVar4 = pfVar3 + 9;
    puVar8 = puVar7 + 3;
    *pfVar4 = ((_DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6) - _DAT_0105c474 * 64.0) + _DAT_0105c48c;
    pfVar3[10] = ((_DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6) - _DAT_0105c478 * 64.0) +
                 _DAT_0105c490;
    fVar5 = ((_DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470) - _DAT_0105c47c * 64.0) + _DAT_0105c494;
    pfVar3[0xb] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0xb]) {
      if (*pfVar4 < -pfVar3[0xb]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e322a;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e322a:
      *puVar8 = uVar2;
    }
    if (pfVar3[10] <= pfVar3[0xb]) {
      if (pfVar3[10] < -pfVar3[0xb]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3254;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3254:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[0xb];
      pfVar3[0xb] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[10] = _DAT_0105c414 - pfVar3[0xb] * pfVar3[10] * _DAT_0105c414;
      pfVar3[0xb] = 1.0 - _DAT_0105c3f4 * pfVar3[0xb];
    }
    pfVar4 = pfVar3 + 0xc;
    puVar8 = puVar7 + 4;
    *pfVar4 = DAT_0105c468 * fVar6 + (_DAT_0105c480 + _DAT_0105c474) * 0.0 + _DAT_0105c48c;
    pfVar3[0xd] = DAT_0105c46c * fVar6 + (_DAT_0105c484 + _DAT_0105c478) * 0.0 + _DAT_0105c490;
    fVar5 = _DAT_0105c470 * fVar6 + (_DAT_0105c488 + _DAT_0105c47c) * 0.0 + _DAT_0105c494;
    pfVar3[0xe] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0xe]) {
      if (*pfVar4 < -pfVar3[0xe]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e3357;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e3357:
      *puVar8 = uVar2;
    }
    if (pfVar3[0xd] <= pfVar3[0xe]) {
      if (pfVar3[0xd] < -pfVar3[0xe]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3381;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3381:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[0xe];
      pfVar3[0xe] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[0xd] = _DAT_0105c414 - pfVar3[0xe] * pfVar3[0xd] * _DAT_0105c414;
      pfVar3[0xe] = 1.0 - _DAT_0105c3f4 * pfVar3[0xe];
    }
    pfVar4 = pfVar3 + 0xf;
    puVar8 = puVar7 + 5;
    *pfVar4 = _DAT_0105c474 * 64.0 + _DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6 + _DAT_0105c48c;
    pfVar3[0x10] = _DAT_0105c478 * 64.0 + _DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6 + _DAT_0105c490
    ;
    fVar5 = _DAT_0105c47c * 64.0 + _DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470 + _DAT_0105c494;
    pfVar3[0x11] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0x11]) {
      if (*pfVar4 < -pfVar3[0x11]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e3498;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e3498:
      *puVar8 = uVar2;
    }
    if (pfVar3[0x10] <= pfVar3[0x11]) {
      if (pfVar3[0x10] < -pfVar3[0x11]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e34c2;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e34c2:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[0x11];
      pfVar3[0x11] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[0x10] = _DAT_0105c414 - pfVar3[0x11] * pfVar3[0x10] * _DAT_0105c414;
      pfVar3[0x11] = 1.0 - _DAT_0105c3f4 * pfVar3[0x11];
    }
    pfVar4 = pfVar3 + 0x12;
    puVar8 = puVar7 + 6;
    *pfVar4 = _DAT_0105c474 * 128.0 + _DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6 + _DAT_0105c48c;
    pfVar3[0x13] = _DAT_0105c478 * 128.0 + _DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6 +
                   _DAT_0105c490;
    fVar5 = _DAT_0105c47c * 128.0 + _DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470 + _DAT_0105c494;
    pfVar3[0x14] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0x14]) {
      if (*pfVar4 < -pfVar3[0x14]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e35d9;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e35d9:
      *puVar8 = uVar2;
    }
    if (pfVar3[0x13] <= pfVar3[0x14]) {
      if (pfVar3[0x13] < -pfVar3[0x14]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3603;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3603:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[0x14];
      pfVar3[0x14] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[0x13] = _DAT_0105c414 - pfVar3[0x14] * pfVar3[0x13] * _DAT_0105c414;
      pfVar3[0x14] = 1.0 - _DAT_0105c3f4 * pfVar3[0x14];
    }
    pfVar4 = pfVar3 + 0x15;
    puVar8 = puVar7 + 7;
    *pfVar4 = _DAT_0105c474 * 192.0 + _DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6 + _DAT_0105c48c;
    pfVar3[0x16] = _DAT_0105c478 * 192.0 + _DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6 +
                   _DAT_0105c490;
    fVar5 = _DAT_0105c47c * 192.0 + _DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470 + _DAT_0105c494;
    pfVar3[0x17] = fVar5;
    if (DAT_0105c3e0 <= fVar5) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0x17]) {
      if (*pfVar4 < -pfVar3[0x17]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e371a;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e371a:
      *puVar8 = uVar2;
    }
    if (pfVar3[0x16] <= pfVar3[0x17]) {
      if (pfVar3[0x16] < -pfVar3[0x17]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3744;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3744:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar5 = pfVar3[0x17];
      pfVar3[0x17] = 1.0 / fVar5;
      *pfVar4 = ((1.0 / fVar5) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[0x16] = _DAT_0105c414 - pfVar3[0x17] * pfVar3[0x16] * _DAT_0105c414;
      pfVar3[0x17] = 1.0 - _DAT_0105c3f4 * pfVar3[0x17];
    }
    pfVar4 = pfVar3 + 0x18;
    puVar8 = puVar7 + 8;
    *pfVar4 = _DAT_0105c474 * 256.0 + _DAT_0105c480 * 0.0 + DAT_0105c468 * fVar6 + _DAT_0105c48c;
    pfVar3[0x19] = _DAT_0105c478 * 256.0 + _DAT_0105c484 * 0.0 + DAT_0105c46c * fVar6 +
                   _DAT_0105c490;
    fVar6 = _DAT_0105c47c * 256.0 + _DAT_0105c488 * 0.0 + fVar6 * _DAT_0105c470 + _DAT_0105c494;
    pfVar3[0x1a] = fVar6;
    if (DAT_0105c3e0 <= fVar6) {
      *puVar8 = 0;
    }
    else {
      *puVar8 = 1;
    }
    if (*pfVar4 <= pfVar3[0x1a]) {
      if (*pfVar4 < -pfVar3[0x1a]) {
        uVar2 = *puVar8 | 0x10;
        goto LAB_009e3859;
      }
    }
    else {
      uVar2 = *puVar8 | 0x20;
LAB_009e3859:
      *puVar8 = uVar2;
    }
    if (pfVar3[0x19] <= pfVar3[0x1a]) {
      if (pfVar3[0x19] < -pfVar3[0x1a]) {
        uVar2 = *puVar8 | 4;
        goto LAB_009e3883;
      }
    }
    else {
      uVar2 = *puVar8 | 8;
LAB_009e3883:
      *puVar8 = uVar2;
    }
    if (*puVar8 == 0) {
      fVar6 = pfVar3[0x1a];
      pfVar3[0x1a] = 1.0 / fVar6;
      *pfVar4 = ((1.0 / fVar6) * *pfVar4 + 1.0) * _DAT_0105c410;
      pfVar3[0x19] = _DAT_0105c414 - pfVar3[0x1a] * pfVar3[0x19] * _DAT_0105c414;
      pfVar3[0x1a] = 1.0 - _DAT_0105c3f4 * pfVar3[0x1a];
    }
    piVar1 = DAT_0105be8c;
    puVar7 = puVar7 + 9;
    pfVar3 = pfVar3 + 0x1b;
    local_8 = (uint *)((int)local_8 + 1);
    if (8 < (int)local_8) {
      *DAT_0105be8c = 0;
      piVar1[1] = 0x51;
      local_8 = (uint *)(DAT_0105be8c + 0x3000b);
      local_c = 0.0;
      puVar7 = &DAT_0105f910;
      do {
        local_4 = 8;
        puVar8 = puVar7;
        puVar9 = local_8;
        fVar6 = local_c;
        local_10 = local_c;
        do {
          fVar5 = (float)((int)fVar6 + 1);
          uVar2 = 1;
          if (((puVar9[-9] != 0 || puVar9[-8] != 0) || puVar9[1] != 0) || *puVar9 != 0) {
            if ((*puVar9 & puVar9[-9] & puVar9[-8] & puVar9[1]) == 0) {
              *DAT_0105be8c = 0;
              FUN_00a58290(DAT_0105be8c,local_10,fVar5,(float)((int)fVar6 + 9),4.48416e-44);
              FUN_00a58290(DAT_0105be8c,fVar5,(float)((int)fVar6 + 10),(float)((int)fVar6 + 9),
                           4.48416e-44);
              if (*DAT_0105be8c != 0) goto LAB_009e3986;
            }
            uVar2 = 0;
          }
LAB_009e3986:
          puVar7 = puVar8 + 7;
          *puVar8 = *puVar8 ^ (uVar2 ^ *puVar8) & 1;
          local_10 = (float)((int)local_10 + 1);
          puVar9 = puVar9 + 1;
          local_4 = local_4 + -1;
          puVar8 = puVar7;
          fVar6 = fVar5;
        } while (local_4 != 0);
        local_c = (float)((int)local_c + 9);
        local_8 = local_8 + 9;
        if (0x106000f < (int)puVar7) {
          return;
        }
      } while( true );
    }
  } while( true );
}


//// FUNCTION FUN_009e39e0 @ 009e39e0 ////

void __cdecl FUN_009e39e0(void *param_1)

{
  float fVar1;
  char *pcVar2;
  undefined *this;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (((param_1 != (void *)0x0) && (pcVar2 = (char *)FUN_0097e350(param_1,0), pcVar2 != (char *)0x0)
      ) && ((pcVar2[0xe4] & 0x40U) != 0)) {
    pcVar5 = "Bfac_publicity_office";
    iVar3 = 0x15;
    bVar6 = true;
    pcVar4 = pcVar2;
    do {
      pcVar5 = pcVar5 + 1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
    } while (bVar6);
    if (bVar6) {
      DAT_0105ef79 = 1;
    }
    FUN_00a468b0(param_1);
    if ((char)((uint)*(undefined4 *)(pcVar2 + 0xe4) >> 8) < '\0') {
      fVar1 = *(float *)((int)param_1 + 0x80);
      iVar3 = 0;
      if (fVar1 <= 0.7853982) {
        if (-2.3561945 <= fVar1) {
          if (fVar1 < -0.7853982) {
            iVar3 = 3;
          }
        }
        else {
          iVar3 = 2;
        }
      }
      else if (fVar1 <= 2.3561945) {
        iVar3 = 1;
      }
      else {
        iVar3 = 2;
      }
      FUN_00982a90(param_1,iVar3);
    }
    FUN_00980c10(param_1,'\x01');
    this = FUN_0097f110();
    if (this != (undefined *)0x0) {
      FUN_009e1cd0(this,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009e3ad0 @ 009e3ad0 ////

void __thiscall FUN_009e3ad0(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (void *)0x0) && ((*(byte *)((int)param_1 + 0x9c) & 0x40) == 0)) {
    InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    puVar1 = (undefined4 *)FUN_0097ee30();
    puVar1[1] = *(undefined4 *)((int)this + 0x14);
    *(undefined4 **)((int)this + 0x14) = puVar1;
    *puVar1 = param_1;
    *(uint *)((int)param_1 + 0x9c) = *(uint *)((int)param_1 + 0x9c) | 0x40;
    FUN_009e1cd0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_009e3b20 @ 009e3b20 ////

void __thiscall FUN_009e3b20(void *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  if ((-1 < (int)param_1) && ((int)param_1 < DAT_0105f8d4)) {
    uVar2 = FUN_009e0f90(this,param_1);
    if ((char)uVar2 == '\0') {
      iVar3 = FUN_009e1f70(this);
      bVar4 = (byte)param_1;
      if (param_1 == DAT_0105f8d4 - 2U) {
        if (iVar3 == 0) {
          bVar1 = *(byte *)this | 0x30;
          *(byte *)this = bVar1;
          *(byte *)this = *(byte *)this ^ (bVar1 ^ bVar4) & 0xf;
        }
        else {
          *(byte *)this = *(byte *)this & 0xcf;
          if (iVar3 == 1) {
            bVar1 = *(byte *)((int)this + 1) | 0x30;
            *(byte *)((int)this + 1) = bVar1;
            *(byte *)((int)this + 1) = bVar1 ^ (bVar1 ^ bVar4) & 0xf;
            goto LAB_009e3be7;
          }
        }
        *(byte *)((int)this + 1) = *(byte *)((int)this + 1) & 0xcf;
        if (iVar3 == 2) {
          bVar1 = *(byte *)((int)this + 2) | 0x30;
          *(byte *)((int)this + 2) = bVar1;
          *(byte *)((int)this + 2) = bVar1 ^ (bVar1 ^ bVar4) & 0xf;
          FUN_009e14c0(this);
          return;
        }
LAB_009e3be7:
        *(byte *)((int)this + 2) = *(byte *)((int)this + 2) & 0xcf;
        FUN_009e14c0(this);
        return;
      }
      iVar5 = 0;
      do {
        if (iVar5 == iVar3) {
          *(byte *)(iVar3 + (int)this) = *(byte *)(iVar3 + (int)this) & 0xc0 | bVar4 & 0xf;
        }
        else if ((int)param_1 < (int)(*(byte *)((int)this + iVar5) & 0xf)) {
          FUN_009e1f10(this,iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
    }
    else {
      iVar3 = FUN_009e0fc0(this,param_1);
      if (iVar3 != 0xf) {
        iVar5 = 0;
        do {
          if (param_1 == DAT_0105f8d4 - 2U) {
            if (iVar5 == iVar3) {
              *(byte *)(iVar5 + (int)this) = *(byte *)(iVar5 + (int)this) | 0x30;
            }
            else {
              *(byte *)(iVar5 + (int)this) = *(byte *)(iVar5 + (int)this) & 0xcf;
            }
          }
          else if (iVar5 == iVar3) {
            FUN_009e1f40(this,iVar5);
          }
          else if ((int)param_1 < (int)(*(byte *)(iVar5 + (int)this) & 0xf)) {
            FUN_009e1f10(this,iVar5);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
        FUN_009e14c0(this);
        return;
      }
    }
    FUN_009e14c0(this);
  }
  return;
}


//// FUNCTION FUN_009e3c90 @ 009e3c90 ////

void __cdecl FUN_009e3c90(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_0097e350(param_1,0);
    if ((iVar1 != 0) &&
       ((((*(uint *)(iVar1 + 0xe4) & 0x1000) != 0 || ((*(byte *)((int)param_1 + 0x9f) & 1) != 0)) ||
        (*(char *)((int)param_1 + 0x9a) != '\0')))) {
      *(void **)((int)param_1 + 0xfc) = DAT_0105ef84;
      DAT_0105ef84 = param_1;
      InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    }
  }
  return;
}


//// FUNCTION FUN_009e3cf0 @ 009e3cf0 ////

void __cdecl FUN_009e3cf0(char param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *this;
  undefined1 uVar2;
  int iVar3;
  LONG LVar4;
  
  puVar1 = DAT_0105ef84;
joined_r0x009e3cf9:
  this = puVar1;
  if (this == (undefined4 *)0x0) {
    if (param_1 == '\0') {
      DAT_0105ef84 = (undefined4 *)0x0;
    }
    return;
  }
  puVar1 = (undefined4 *)this[0x3f];
  iVar3 = FUN_0097e350(this,0);
  if (iVar3 == 0) goto LAB_009e3d2b;
  if (param_2 != '\0') {
    if ((*(byte *)(iVar3 + 0xe7) & 1) != 0) {
LAB_009e3d24:
      FUN_0097e5e0(this);
    }
    goto LAB_009e3d2b;
  }
  if (param_1 != '\0') {
    if ((*(byte *)(iVar3 + 0xe7) & 1) == 0) goto LAB_009e3d24;
    goto LAB_009e3d2b;
  }
  if (((*(byte *)((int)this + 0x9f) & 1) != 0) || (*(char *)((int)this + 0x9a) != '\0')) {
    FUN_00982360(this);
  }
  goto LAB_009e3d33;
LAB_009e3d2b:
  if (param_1 == '\0') {
LAB_009e3d33:
    this[0x3f] = 0;
    LVar4 = InterlockedDecrement(this + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar4 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*this)(1);
      DAT_0105b588 = uVar2;
    }
  }
  goto joined_r0x009e3cf9;
}


//// FUNCTION FUN_009e3dc0 @ 009e3dc0 ////

void FUN_009e3dc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  
  puVar1 = DAT_0105ef84;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x3f];
    puVar2[0x3f] = 0;
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    DAT_0105b588 = uVar3;
    if (LVar4 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*puVar2)(1);
      DAT_0105b588 = uVar3;
    }
  }
  DAT_0105ef84 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_009e3e20 @ 009e3e20 ////

void FUN_009e3e20(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar4 = FUN_00acd42c();
  iVar2 = DAT_0105ef7c;
  if ((int)uVar4 != DAT_0105ef7c) {
    puVar3 = &DAT_0105f90c;
    do {
      iVar2 = 8;
      do {
        for (puVar1 = (undefined4 *)*puVar3; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[1]) {
          FUN_00981260((void *)*puVar1,1,0,'\x01',0.0);
        }
        puVar3 = puVar3 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = (int)uVar4;
    } while ((int)puVar3 < 0x106000c);
  }
  DAT_0105ef7c = iVar2;
  return;
}


//// FUNCTION FUN_009e3eb0 @ 009e3eb0 ////

float10 __fastcall FUN_009e3eb0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = DAT_0105c3a8 - (*(float *)(*(int *)(param_1 + 0xc) + 0xc) + 32.0);
  fVar2 = (float10)DAT_0105c3ac -
          ((float10)*(float *)(*(int *)(param_1 + 0xc) + 0x10) + (float10)32.0);
  fVar2 = SQRT((float10)fVar1 * (float10)fVar1 +
               fVar2 * fVar2 + (float10)DAT_0105c3b0 * (float10)DAT_0105c3b0);
  if (fVar2 < (float10)0.001) {
    fVar2 = (float10)0.001;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    fVar2 = fVar2 + (float10)1e+06;
  }
  return fVar2;
}


//// FUNCTION FUN_009e3f20 @ 009e3f20 ////

void __cdecl FUN_009e3f20(uint param_1)

{
  byte *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  local_8 = 0x408;
  iVar2 = DAT_0105f8d0;
  do {
    local_4 = 0xff;
    iVar4 = local_8;
    do {
      this = (byte *)(iVar2 + iVar4);
      uVar1 = FUN_009e1410(this,param_1);
      if ((char)uVar1 != '\0') {
        iVar2 = 0;
        do {
          if ((this[iVar2] & 0xf) == param_1) {
            this[iVar2] = this[iVar2] & 0xcf | 0xf;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 3);
        FUN_009e14c0(this);
        iVar2 = DAT_0105f8d0;
      }
      iVar4 = iVar4 + 4;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    local_8 = local_8 + 0x404;
    if (0x40403 < local_8) {
      iVar4 = 0;
      iVar3 = 0x101;
      while( true ) {
        do {
          *(byte *)(iVar4 + iVar2) = *(byte *)(iVar4 + iVar2) | 0x30;
          iVar4 = iVar4 + 4;
          iVar3 = iVar3 + -1;
          iVar2 = DAT_0105f8d0;
        } while (iVar3 != 0);
        if (0x40803 < iVar4) break;
        iVar3 = 0x101;
      }
      return;
    }
  } while( true );
}


//// FUNCTION FUN_009e3ff0 @ 009e3ff0 ////

void __fastcall FUN_009e3ff0(int *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf84cb;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 6) & 4) != 0) {
    ExceptionList = &local_c;
    FUN_009e2b20(param_1);
    uVar5 = 0;
    if (0 < DAT_0105f8d4) {
      do {
        pvVar2 = *(void **)(param_1[2] + uVar5 * 8);
        piVar1 = (int *)(param_1[2] + uVar5 * 8);
        if (pvVar2 != (void *)0x0) {
          FUN_00a79680((int)pvVar2);
                    /* WARNING: Subroutine does not return */
          _free(pvVar2);
        }
        *piVar1 = 0;
        if (piVar1[1] != 0) {
          FUN_009e16b0(param_1[1] << 5,*param_1 << 5,uVar5);
          pvVar2 = operator_new(0x54);
          local_4 = 0;
          if (pvVar2 == (void *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = FUN_00a79a30(pvVar2,uVar5,0x105ef88);
          }
          *piVar1 = (int)piVar3;
          piVar3[2] = *(int *)((&DAT_0105f890)[uVar5] + 0x24);
          local_4 = 0xffffffff;
          *(undefined4 *)(*piVar1 + 0xc) = *(undefined4 *)((&DAT_0105f890)[uVar5] + 0x28);
        }
        if ((uVar5 == DAT_0105f8d4 - 1U) &&
           (((uVar4 = FUN_009e1e80(), (char)uVar4 == '\0' && (piVar1[1] == 0)) ||
            (FUN_009e1de0(param_1), piVar1[1] == 0)))) {
          _Memory = (undefined4 *)param_1[4];
          if (_Memory != (undefined4 *)0x0) {
            FUN_00a78280(_Memory);
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          param_1[4] = 0;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < DAT_0105f8d4);
    }
    param_1[6] = param_1[6] & 0xfffffffd;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009e4130 @ 009e4130 ////

undefined4 * __thiscall FUN_009e4130(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  *(undefined4 *)this = 0;
  if (param_1 != 0) {
    uVar6 = FUN_00acd42c();
    uVar7 = FUN_00acd42c();
    uVar8 = FUN_00acd42c();
    uVar9 = FUN_00acd42c();
    for (iVar5 = (int)uVar9; iVar3 = (int)uVar6, iVar5 <= (int)uVar7; iVar5 = iVar5 + 1) {
      for (; iVar3 <= (int)uVar8; iVar3 = iVar3 + 1) {
        if ((((-1 < iVar5) && (iVar5 < 8)) && (-1 < iVar3)) &&
           ((iVar3 < 8 && (iVar1 = iVar3 + iVar5 * 8, iVar1 * 0x1c != -0x105f8f8)))) {
          for (puVar2 = (undefined4 *)(&DAT_0105f90c)[iVar1 * 7]; puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)puVar2[1]) {
            puVar4 = (undefined4 *)FUN_0097ee30();
            puVar4[1] = *(undefined4 *)this;
            *(undefined4 **)this = puVar4;
            *puVar4 = *puVar2;
          }
        }
      }
    }
    return this;
  }
  return this;
}


//// FUNCTION FUN_009e42d0 @ 009e42d0 ////

void __fastcall FUN_009e42d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
    puVar1 = (uint *)puVar3[2];
    puVar2 = (undefined4 *)puVar3[1];
    if (puVar1 != (uint *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar4 = (int)puVar3 + (-8 - (int)puVar1);
      uVar5 = 1 << (((char)(iVar4 / 0xc) + (char)(iVar4 >> 0x1f)) -
                    (char)((longlong)iVar4 * 0x2aaaaaab >> 0x3f) & 0x1fU);
      *puVar1 = *puVar1 | uVar5;
      puVar1[1] = puVar1[1] | (int)uVar5 >> 0x1f;
    }
  }
  return;
}


//// FUNCTION FUN_009e4330 @ 009e4330 ////

void __cdecl FUN_009e4330(void *param_1)

{
  undefined *this;
  
  if (param_1 != (void *)0x0) {
    this = FUN_0097f110();
    if (this != (undefined *)0x0) {
      FUN_009e3ad0(this,param_1);
    }
    FUN_009e39e0(param_1);
    FUN_00981260(param_1,1,0,'\0',0.0);
  }
  return;
}


//// FUNCTION FUN_009e4370 @ 009e4370 ////

void __thiscall FUN_009e4370(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)(param_1 + 0x27) & 0x40) != 0)) {
    piVar3 = *(int **)((int)this + 0x14);
    piVar2 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      while ((undefined4 *)*piVar3 != param_1) {
        piVar1 = piVar3 + 1;
        piVar2 = piVar3;
        piVar3 = (int *)*piVar1;
        if ((int *)*piVar1 == (int *)0x0) {
          FUN_0040a5b0(param_1);
          return;
        }
      }
      if (piVar2 == (int *)0x0) {
        *(int *)((int)this + 0x14) = piVar3[1];
      }
      else {
        piVar2[1] = piVar3[1];
      }
      FUN_00981580(piVar3);
      param_1[0x27] = param_1[0x27] & 0xffffffbf;
      FUN_009e1cd0(this,param_1);
    }
    FUN_0040a5b0(param_1);
  }
  return;
}


//// FUNCTION FUN_009e43e0 @ 009e43e0 ////

void __cdecl FUN_009e43e0(char *param_1)

{
  undefined4 *puVar1;
  void *this;
  FILE *_File;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf84e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _File = _fopen(param_1,"w");
  puVar2 = &DAT_0105f90c;
  do {
    local_50 = 8;
    do {
      puVar1 = (undefined4 *)*puVar2;
      while (puVar1 != (undefined4 *)0x0) {
        this = (void *)*puVar1;
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"",0);
        local_28 = 0;
        *local_2c = '\0';
        local_4 = 0;
        uVar3 = FUN_0097e350(this,0);
        FID_conflict__fwprintf(_File,"[%s]  ",uVar3);
        local_44 = *(float *)((int)this + 0x3c);
        local_40 = *(undefined4 *)((int)this + 0x40);
        local_3c = *(undefined4 *)((int)this + 0x44);
        local_38 = local_44 * 1000.0;
        uVar5 = FUN_00acd42c();
        uVar3 = (undefined4)uVar5;
        uVar5 = FUN_00acd42c();
        uVar4 = (undefined4)uVar5;
        uVar5 = FUN_00acd42c();
        FID_conflict__fwprintf(_File,"[%d %d %d]  ",(int)uVar5,uVar4,uVar3);
        FUN_0097fc20(this,&local_48);
        uVar5 = FUN_00acd42c();
        FID_conflict__fwprintf(_File,"[%d]  ",(int)uVar5);
        uVar5 = FUN_00acd42c();
        FID_conflict__fwprintf(_File,"[%d]  ",(int)uVar5);
        FID_conflict__fwprintf(_File,"\n");
        puVar1 = (undefined4 *)puVar1[1];
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      puVar2 = puVar2 + 7;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  } while ((int)puVar2 < 0x106000c);
  _fclose(_File);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009e45b0 @ 009e45b0 ////

void __cdecl FUN_009e45b0(undefined4 *param_1)

{
  undefined *this;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_00a463a0((int)param_1);
    FUN_00981260(param_1,0,0,'\0',0.0);
    this = FUN_0097f110();
    if (this != (undefined *)0x0) {
      FUN_009e4370(this,param_1);
    }
    pcVar1 = (char *)FUN_0097e350(param_1,0);
    if (pcVar1 != (char *)0x0) {
      if ((pcVar1[0xe4] & 0x40U) != 0) {
        FUN_00980c10(param_1,'\0');
      }
      pcVar3 = "Bfac_publicity_office";
      iVar2 = 0x15;
      bVar4 = true;
      do {
        pcVar3 = pcVar3 + 1;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + 1;
      } while (bVar4);
      if (bVar4) {
        DAT_0105ef79 = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_009e46e0 @ 009e46e0 ////

void __fastcall FUN_009e46e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf8508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a3a8f0(param_1 + 0x18);
  local_4 = 0xffffffff;
  FUN_00a3a8e0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009e4740 @ 009e4740 ////

void * __thiscall FUN_009e4740(void *this,byte param_1)

{
  FUN_009e12b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009e4760 @ 009e4760 ////

void __cdecl FUN_009e4760(uint param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_24 [6];
  int local_c;
  int local_8;
  int local_4;
  
  iVar10 = *param_2;
  iVar7 = param_2[1];
  iVar8 = 0;
  do {
    iVar5 = *(int *)((int)&DAT_00e685f0 + iVar8) + iVar10;
    iVar11 = *(int *)((int)&DAT_00e685cc + iVar8) + iVar7;
    iVar9 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
    iVar5 = (int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5;
    if ((((iVar9 < 0) || (7 < iVar9)) || (iVar5 < 0)) || (7 < iVar5)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = &DAT_0105f8f8 + (iVar5 + iVar9 * 8) * 0x1c;
    }
    iVar5 = *(int *)((int)&DAT_00e685d0 + iVar8);
    *(undefined **)((int)local_24 + iVar8) = puVar6;
    iVar9 = *(int *)((int)&DAT_00e685f4 + iVar8) + iVar10;
    iVar5 = iVar5 + iVar7;
    iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
    if (((iVar9 < 0) || (7 < iVar9)) || ((iVar5 < 0 || (7 < iVar5)))) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = &DAT_0105f8f8 + (iVar5 + iVar9 * 8) * 0x1c;
    }
    iVar5 = *(int *)((int)&DAT_00e685d4 + iVar8);
    *(undefined **)((int)local_24 + iVar8 + 4) = puVar6;
    iVar9 = *(int *)((int)&DAT_00e685f8 + iVar8) + iVar10;
    iVar5 = iVar5 + iVar7;
    iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
    if (((iVar9 < 0) || (7 < iVar9)) || ((iVar5 < 0 || (7 < iVar5)))) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = &DAT_0105f8f8 + (iVar5 + iVar9 * 8) * 0x1c;
    }
    *(undefined **)((int)local_24 + iVar8 + 8) = puVar6;
    iVar8 = iVar8 + 0xc;
  } while (iVar8 < 0x24);
  if (local_24[0] != 0) {
    if ((((-1 < iVar10) && (iVar10 < 0x100)) && (-1 < iVar7)) &&
       ((iVar7 < 0x100 &&
        (pbVar1 = (byte *)(DAT_0105f8d0 + (iVar10 * 0x101 + iVar7) * 4), pbVar1 != (byte *)0x0)))) {
      bVar2 = pbVar1[1];
      bVar3 = pbVar1[2];
      bVar4 = *pbVar1;
      FUN_009e3b20(pbVar1,param_1);
      *(uint *)(local_24[0] + 0x18) = *(uint *)(local_24[0] + 0x18) | 2;
      if (local_24[1] != 0) {
        *(uint *)(local_24[1] + 0x18) = *(uint *)(local_24[1] + 0x18) | 2;
      }
      if (local_24[2] != 0) {
        *(uint *)(local_24[2] + 0x18) = *(uint *)(local_24[2] + 0x18) | 2;
      }
      if (local_24[3] != 0) {
        *(uint *)(local_24[3] + 0x18) = *(uint *)(local_24[3] + 0x18) | 2;
      }
      if (local_24[4] != 0) {
        *(uint *)(local_24[4] + 0x18) = *(uint *)(local_24[4] + 0x18) | 2;
      }
      if (local_24[5] != 0) {
        *(uint *)(local_24[5] + 0x18) = *(uint *)(local_24[5] + 0x18) | 2;
      }
      if (local_c != 0) {
        *(uint *)(local_c + 0x18) = *(uint *)(local_c + 0x18) | 2;
      }
      if (local_8 != 0) {
        *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | 2;
      }
      if (local_4 != 0) {
        *(uint *)(local_4 + 0x18) = *(uint *)(local_4 + 0x18) | 2;
      }
      if ((bVar4 & 0xf) != 0xf) {
        *(uint *)((&DAT_0105f890)[bVar4 & 0xf] + 0x20) =
             *(uint *)((&DAT_0105f890)[bVar4 & 0xf] + 0x20) | 0x100;
      }
      if ((bVar2 & 0xf) != 0xf) {
        *(uint *)((&DAT_0105f890)[bVar2 & 0xf] + 0x20) =
             *(uint *)((&DAT_0105f890)[bVar2 & 0xf] + 0x20) | 0x100;
      }
      if ((bVar3 & 0xf) != 0xf) {
        *(uint *)((&DAT_0105f890)[bVar3 & 0xf] + 0x20) =
             *(uint *)((&DAT_0105f890)[bVar3 & 0xf] + 0x20) | 0x100;
      }
      *(uint *)((&DAT_0105f890)[param_1] + 0x20) =
           *(uint *)((&DAT_0105f890)[param_1] + 0x20) | 0x100;
    }
    iVar10 = 0;
    do {
      iVar7 = *(int *)((int)&DAT_00e685f0 + iVar10) + *param_2;
      iVar8 = *(int *)((int)&DAT_00e685cc + iVar10) + param_2[1];
      if (((-1 < iVar7) && (iVar7 < 0x100)) &&
         ((-1 < iVar8 &&
          ((iVar8 < 0x100 &&
           (pbVar1 = (byte *)(DAT_0105f8d0 + (iVar7 * 0x101 + iVar8) * 4), pbVar1 != (byte *)0x0))))
         )) {
        if ((*pbVar1 & 0xf) != 0xf) {
          *(uint *)((&DAT_0105f890)[*pbVar1 & 0xf] + 0x20) =
               *(uint *)((&DAT_0105f890)[*pbVar1 & 0xf] + 0x20) | 0x100;
        }
        if ((pbVar1[1] & 0xf) != 0xf) {
          *(uint *)((&DAT_0105f890)[pbVar1[1] & 0xf] + 0x20) =
               *(uint *)((&DAT_0105f890)[pbVar1[1] & 0xf] + 0x20) | 0x100;
        }
        if ((pbVar1[2] & 0xf) != 0xf) {
          *(uint *)((&DAT_0105f890)[pbVar1[2] & 0xf] + 0x20) =
               *(uint *)((&DAT_0105f890)[pbVar1[2] & 0xf] + 0x20) | 0x100;
        }
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0x24);
  }
  return;
}


//// FUNCTION FUN_009e4a30 @ 009e4a30 ////

undefined4 * __cdecl FUN_009e4a30(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = 8;
  uVar1 = DAT_0105f8d4 * 0x20 + 0x3460b;
  *param_1 = uVar1;
  puVar2 = operator_new(uVar1);
  uVar1 = *param_1;
  puVar7 = puVar2;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *puVar2 = 2;
  puVar2[1] = DAT_0105f8d4;
  puVar7 = puVar2 + 2;
  iVar3 = 0;
  puVar6 = puVar7;
  if (0 < DAT_0105f8d4) {
    do {
      puVar7 = puVar6 + 8;
      puVar8 = (undefined4 *)(&DAT_0105f890)[iVar3];
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar7;
    } while (iVar3 < DAT_0105f8d4);
  }
  iVar3 = 0;
  do {
    puVar6 = puVar7;
    *(undefined1 *)puVar6 = *(undefined1 *)(iVar3 + DAT_0105f8d0);
    *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)(iVar3 + 1 + DAT_0105f8d0);
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)(iVar3 + 2 + DAT_0105f8d0);
    iVar3 = iVar3 + 4;
    puVar7 = (undefined4 *)((int)puVar6 + 3);
  } while (iVar3 < 0x40804);
  puVar7 = g_OccupancyGrid256_A;
  puVar8 = (undefined4 *)((int)puVar6 + 3);
  for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = g_OccupancyGrid256_B;
  puVar6 = (undefined4 *)((int)puVar6 + 0x2003);
  for (iVar3 = 0x800; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  return puVar2;
}


//// FUNCTION FUN_009e4b10 @ 009e4b10 ////

void __cdecl FUN_009e4b10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_1;
  iVar3 = FUN_009e2750();
  iVar4 = param_1[1];
  if ((iVar4 != 0) && (piVar1 = (int *)(iVar3 + -1), param_1 = piVar1, 0 < (int)piVar1)) {
    do {
      iVar3 = 0;
      if (0 < (int)piVar1) {
        do {
          iVar5 = *piVar2 + iVar3;
          *(char *)(iVar3 + iVar4) =
               (char)((int)((uint)*(byte *)(iVar3 + 1 + iVar4) + (uint)*(byte *)(iVar5 + 1 + iVar4)
                            + (uint)*(byte *)(iVar5 + iVar4) + (uint)*(byte *)(iVar3 + iVar4)) >> 2)
          ;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)piVar1);
      }
      iVar4 = iVar4 + *piVar2;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_009e4b80 @ 009e4b80 ////

void __thiscall FUN_009e4b80(void *this,float param_1)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 0xc) = param_1 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x18) = param_1 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x24) = param_1 * *(float *)((int)this + 0x24);
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 0x10) = param_1 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x1c) = param_1 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x28) = param_1 * *(float *)((int)this + 0x28);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  *(float *)((int)this + 0x14) = param_1 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x20) = param_1 * *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x2c) = param_1 * *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_009e4ce0 @ 009e4ce0 ////

void FUN_009e4ce0(void)

{
  if (DAT_01060068 != (void *)0x0) {
    FUN_0099b400(DAT_01060068);
    DAT_01060068 = (void *)0x0;
  }
  DAT_0105ef79 = 0;
  FUN_00a55c60();
  FUN_009f15c0();
  FUN_009e3dc0();
                    /* WARNING: Subroutine does not return */
  _free(g_OccupancyGrid256_A);
}


//// FUNCTION FUN_009e4e50 @ 009e4e50 ////

void __fastcall FUN_009e4e50(int *param_1)

{
  char cVar1;
  
  if (*param_1 != 0) {
    if (param_1[2] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[2] + 0x24));
    }
    if (param_1[3] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,1,*(undefined4 *)(param_1[3] + 0x24));
    }
    cVar1 = FUN_00a3b330(param_1 + 4,2);
    if (cVar1 != '\0') {
      (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,*(undefined4 *)param_1[0xe]);
      (**(code **)(*g_pDirect3DDevice + 0x148))
                (g_pDirect3DDevice,4,DAT_010c9cd8,0,0x441,param_1[0xc],*param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009e4f40 @ 009e4f40 ////

void __cdecl FUN_009e4f40(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  puVar2 = &DAT_0105c328;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00990f90(local_40,1.0 / param_1);
  (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,local_40);
  return;
}


//// FUNCTION FUN_009e4f90 @ 009e4f90 ////

void __cdecl FUN_009e4f90(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  undefined4 *local_4;
  
  iVar6 = 0;
  if ((param_1 != (void *)0x0) &&
     ((*(int *)((int)param_1 + 0x3c) == 0x32 || (*(int *)((int)param_1 + 0x3c) == 0x18)))) {
    local_8 = 0;
    local_4 = (undefined4 *)0x0;
    MediaPlayer_LockVideoBuffer(param_1,&local_8);
    if (local_4 != (undefined4 *)0x0) {
      if (*(int *)((int)param_1 + 0x3c) == 0x18) {
        iVar6 = 0;
        if (0 < *(int *)((int)param_1 + 0x48)) {
          iVar4 = *(int *)((int)param_1 + 0x44);
          puVar5 = local_4;
          do {
            iVar1 = 0;
            if (0 < iVar4) {
              do {
                *(undefined2 *)((int)puVar5 + iVar1 * 2) = 0xdef7;
                iVar4 = *(int *)((int)param_1 + 0x44);
                iVar1 = iVar1 + 1;
              } while (iVar1 < iVar4);
            }
            puVar5 = (undefined4 *)((int)puVar5 + (local_8 / 2) * 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)((int)param_1 + 0x48));
        }
      }
      else if ((*(int *)((int)param_1 + 0x3c) == 0x32) &&
              (puVar5 = local_4, 0 < *(int *)((int)param_1 + 0x48))) {
        do {
          uVar3 = *(uint *)((int)param_1 + 0x44);
          puVar7 = puVar5;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar7 = 0xbebebebe;
            puVar7 = puVar7 + 1;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar7 = 0xbe;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          puVar5 = (undefined4 *)((int)puVar5 + local_8);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)((int)param_1 + 0x48));
        MediaPlayer_UnlockVideoBuffer((int)param_1);
        return;
      }
    }
    MediaPlayer_UnlockVideoBuffer((int)param_1);
  }
  return;
}


//// FUNCTION FUN_009e5070 @ 009e5070 ////

void __cdecl FUN_009e5070(uint param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  *(uint *)((&DAT_0105f890)[param_1] + 0x20) =
       *(uint *)((&DAT_0105f890)[param_1] + 0x20) & 0xfffffeff;
  if ((param_1 != 0) &&
     (this = *(void **)((&DAT_0105f890)[param_1] + 0x28), *(int *)((int)this + 0x24) != 0)) {
    local_8 = 0;
    local_4 = 0;
    MediaPlayer_LockVideoBuffer(this,&local_8);
    if (local_4 != 0) {
      local_14 = 0;
      do {
        iVar6 = 0;
        iVar5 = local_14;
        do {
          iVar1 = (iVar4 * local_8) / 2 + iVar6;
          iVar2 = 0;
          do {
            if ((*(byte *)(iVar2 + DAT_0105f8d0 + iVar5) & 0xf) == param_1) {
              pbVar3 = (byte *)(iVar2 + DAT_0105f8d0 + iVar5);
              if (pbVar3 != (byte *)0x0) {
                switch(*pbVar3 >> 4 & 3) {
                case 0:
                  *(undefined2 *)(local_4 + iVar1 * 2) = 0x4000;
                  break;
                case 1:
                  *(undefined2 *)(local_4 + iVar1 * 2) = 0x8000;
                  break;
                case 2:
                  *(undefined2 *)(local_4 + iVar1 * 2) = 0xc000;
                  break;
                case 3:
                  *(undefined2 *)(local_4 + iVar1 * 2) = 0xf000;
                  break;
                default:
                  *(undefined2 *)(local_4 + iVar1 * 2) = 0;
                }
                goto LAB_009e511e;
              }
              break;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 3);
          *(undefined2 *)(local_4 + iVar1 * 2) = 0;
LAB_009e511e:
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar6 < 0x100);
        local_14 = local_14 + 0x404;
        iVar4 = iVar4 + 1;
      } while (local_14 < 0x40400);
    }
    MediaPlayer_UnlockVideoBuffer((int)this);
  }
  return;
}


//// FUNCTION FUN_009e5400 @ 009e5400 ////

void __cdecl FUN_009e5400(char *param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  undefined *this_00;
  undefined4 *unaff_FS_OFFSET;
  int iVar3;
  int local_60 [21];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8528;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00a7a4d0(local_60);
  local_4 = 0;
  FUN_00a7abd0(local_60,param_1);
  uVar1 = 0;
  DAT_0105f8d4 = local_60[0];
  if (0 < local_60[0]) {
    do {
      iVar3 = -2;
      this = (void *)FUN_00a7a530(local_60,uVar1);
      iVar3 = FUN_00a79d80(this,iVar3);
      FUN_009e27f0(uVar1,*(undefined1 **)(iVar3 + 4));
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < DAT_0105f8d4);
  }
  uVar1 = 0;
  if (0 < DAT_0105f8d4) {
    do {
      FUN_009e3f20(uVar1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < DAT_0105f8d4);
  }
  uVar1 = 0;
  if (0 < DAT_0105f8d4) {
    do {
      iVar3 = FUN_00a7a530(local_60,uVar1);
      FUN_009e1540(uVar1,(char *)(iVar3 + 0x2c));
      FUN_009e5070(uVar1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < DAT_0105f8d4);
  }
  iVar3 = 0;
  this_00 = &DAT_0105f8f8;
  do {
    iVar2 = 0;
    do {
      FUN_009e2950(this_00,iVar3,iVar2);
      iVar2 = iVar2 + 1;
      this_00 = this_00 + 0x1c;
    } while (iVar2 < 8);
    iVar3 = iVar3 + 1;
  } while ((int)this_00 < 0x105fff8);
  local_4 = 0xffffffff;
  FUN_00a7aa90(local_60);
  *unaff_FS_OFFSET = uStack_c;
  return;
}


//// FUNCTION FUN_009e5510 @ 009e5510 ////

void FUN_009e5510(void *param_1)

{
  undefined4 *_Memory;
  uint local_4;
  
  _Memory = FUN_009e4a30(&local_4);
  FUN_00989500(param_1,_Memory,local_4);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009e5540 @ 009e5540 ////

void __cdecl FUN_009e5540(int *param_1,char param_2)

{
  void **ppvVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf854b;
  local_c = ExceptionList;
  DAT_00e685c8 = 0;
  pbVar5 = (byte *)(param_1 + 2);
  if (param_2 == '\0') {
    DAT_0105f8d4 = param_1[1];
    iVar2 = 0;
    pbVar6 = pbVar5;
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (0 < DAT_0105f8d4) {
      do {
        local_4 = 0xffffffff;
        pbVar5 = pbVar6 + 0x20;
        this = operator_new(0x2c);
        local_4 = 0;
        if (this == (void *)0x0) {
          pcVar3 = (char *)0x0;
        }
        else {
          pcVar3 = FUN_009e11f0(this,iVar2,(char *)pbVar6);
        }
        (&DAT_0105f890)[iVar2] = pcVar3;
        iVar2 = iVar2 + 1;
        pbVar6 = pbVar5;
        ppvVar1 = ExceptionList;
      } while (iVar2 < DAT_0105f8d4);
    }
  }
  else {
    if (DAT_0105f8d4 != param_1[1]) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    iVar2 = 0;
    ppvVar1 = &local_c;
    ExceptionList = &local_c;
    if (0 < DAT_0105f8d4) {
      do {
        pbVar5 = pbVar5 + 0x20;
        *(uint *)((&DAT_0105f890)[iVar2] + 0x20) = *(uint *)((&DAT_0105f890)[iVar2] + 0x20) | 0x100;
        iVar2 = iVar2 + 1;
        ppvVar1 = ExceptionList;
      } while (iVar2 < DAT_0105f8d4);
    }
  }
  ExceptionList = ppvVar1;
  local_4 = 0xffffffff;
  iVar2 = 0;
  do {
    pbVar4 = (byte *)(DAT_0105f8d0 + iVar2);
    *pbVar4 = *pbVar5 & 0x3f;
    pbVar4[1] = pbVar5[1] & 0x3f;
    pbVar6 = pbVar5 + 2;
    iVar2 = iVar2 + 4;
    pbVar5 = pbVar5 + 3;
    pbVar4[2] = *pbVar6 & 0x3f;
  } while (iVar2 < 0x40804);
  puVar9 = g_OccupancyGrid256_A;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    puVar9 = puVar9 + 1;
  }
  if (1 < *param_1) {
    puVar9 = g_OccupancyGrid256_B;
    for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  uVar7 = 0;
  if (0 < DAT_0105f8d4) {
    do {
      FUN_009e5070(uVar7);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < DAT_0105f8d4);
  }
  iVar2 = 0;
  puVar8 = &DAT_0105f910;
  do {
    iVar10 = 0;
    do {
      if (param_2 == '\0') {
        FUN_009e2950(puVar8 + -6,iVar2,iVar10);
      }
      else {
        if (puVar8[-3] != 0) {
          FUN_00a56650((int *)(puVar8 + -6));
        }
        *puVar8 = *puVar8 | 2;
      }
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 7;
    } while (iVar10 < 8);
    iVar2 = iVar2 + 1;
  } while ((int)puVar8 < 0x1060010);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009e56f0 @ 009e56f0 ////

void FUN_009e56f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_70 [3];
  undefined1 local_64;
  uint local_60;
  void *local_58;
  undefined4 auStack_4c [13];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* NOT a mesh submesh drawer (checked while hunting for the real one, ruled
                       out). Draws a standalone "land_sand00.dds" quad using the WATER blend recipe
                       (TypeCode 6, see LH_ApplyMeshMaterial's case 6) with scrolling UV animation
                       (1/12-per-frame matrix advance) - a shoreline/wet-sand visual effect, built
                       from a fresh local material record, not from any mesh object's
                       material/submesh arrays. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8568;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_01060068 == (void *)0x0) {
    ExceptionList = &pvStack_c;
    DAT_01060068 = FUN_0099bb50("land_sand00.dds",0,0,0,'\0');
  }
  FUN_009910f0(local_70);
  local_4 = 0;
  local_64 = 6;
  if (local_58 != DAT_01060068) {
    Engine_SetResourceReference(local_70,(int)DAT_01060068);
  }
  local_60 = local_60 & 0xbcffffff | 0x18000000;
  LH_ApplyMeshMaterial(local_70);
  if (DAT_01059364 != 0x20000) {
    DAT_01059364 = 0x20000;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice);
  }
  if (DAT_01059398 != 2) {
    DAT_01059398 = 2;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice);
  }
  puVar2 = &DAT_0105c328;
  puVar3 = auStack_4c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00990f90(auStack_4c,0.083333336);
  (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10);
  uStack_10 = 0xffffffff;
  FUN_00990ec0((int)&stack0xffffff84);
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_009e5820 @ 009e5820 ////

void __fastcall FUN_009e5820(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


//// FUNCTION FUN_009e5860 @ 009e5860 ////

void __cdecl FUN_009e5860(char param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  float afStack_d0 [21];
  float fStack_7c;
  float fStack_78;
  int local_70 [3];
  char local_64;
  uint local_60;
  undefined1 auStack_4c [52];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* NOT a mesh submesh drawer (checked while hunting for the real one, ruled
                       out). Draws a standalone quad, TypeCode toggled between 3 (plain textured)
                       and 0xB (dual-texture blend) by its parameter, with its own
                       texture-coordinate transform animation - looks like a water-surface
                       overlay/reflection-style effect, built from a fresh local material record
                       rather than a mesh object's arrays. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009910f0(local_70);
  local_60 = local_60 & 0xbdffffff | 0x18000000;
  local_4 = 0;
  local_64 = (param_1 == '\0') * '\b' + '\x03';
  LH_ApplyMeshMaterial(local_70);
  cVar3 = FUN_00a3b330((int *)&DAT_010c9cd0,1);
  piVar2 = g_pDirect3DDevice;
  if (cVar3 != '\0') {
    iVar1 = *g_pDirect3DDevice;
    uVar4 = FUN_008d9510(DAT_010c9d08);
    (**(code **)(iVar1 + 400))(piVar2,0,*(undefined4 *)(DAT_010c9ce0 + 4),0,uVar4);
    piVar2 = g_pDirect3DDevice;
    iVar1 = *g_pDirect3DDevice;
    uVar4 = FUN_008d9580(DAT_010c9d08);
    (**(code **)(iVar1 + 0x164))(piVar2,uVar4);
  }
  if (DAT_01059364 != 0x20000) {
    DAT_01059364 = 0x20000;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0x20000);
  }
  if (DAT_010593e8 != 0x20000) {
    DAT_010593e8 = 0x20000;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,0x20000);
  }
  FUN_009aa2c0(afStack_d0 + 0xc,&DAT_0105c328);
  fStack_7c = fStack_7c + 256.0;
  fStack_78 = fStack_78 + 256.0;
  FUN_009e4b80(afStack_d0 + 0xc,0.001953125);
  fStack_7c = fStack_7c + 0.001953125;
  afStack_d0[0xb] = 0.0;
  afStack_d0[10] = 0.0;
  afStack_d0[9] = 0.0;
  fStack_78 = fStack_78 + 0.001953125;
  afStack_d0[7] = 0.0;
  afStack_d0[6] = 0.0;
  afStack_d0[5] = 0.0;
  afStack_d0[2] = 0.0;
  afStack_d0[8] = 1.0;
  afStack_d0[0] = 0.0;
  afStack_d0[4] = 0.0;
  afStack_d0[3] = 1.0;
  afStack_d0[1] = 1.0;
  FUN_009aa830(afStack_d0 + 0xc,afStack_d0);
  FUN_009aa310(auStack_4c,afStack_d0 + 0xc);
  (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x11,auStack_4c);
  if (DAT_01059398 != 2) {
    DAT_01059398 = 2;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,2);
  }
  if (DAT_0105941c != 2) {
    DAT_0105941c = 2;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,2);
  }
  if (DAT_01058f4c != 3) {
    DAT_01058f4c = 3;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
  }
  if (DAT_01058f50 != 3) {
    DAT_01058f50 = 3;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
  }
  if (DAT_01059214 != 0) {
    DAT_01059214 = 0;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x89,0);
  }
  uStack_10 = 0xffffffff;
  FUN_00990ec0((int)&fStack_7c);
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_009e5b40 @ 009e5b40 ////

void __fastcall FUN_009e5b40(int *param_1)

{
  char cVar1;
  int local_60 [3];
  undefined1 local_54;
  uint local_50;
  int local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* NOT a mesh submesh drawer (checked while hunting for the real one, ruled
                       out). Draws a standalone decal-style quad (TypeCode 9) via
                       DrawIndexedPrimitive (vtable+0x148) using a small hardcoded 2-triangle
                       index/vertex set (DAT_01060070/78/90), built from a fresh local material
                       record. Takes param_1[3]/[4] as a world position. Just shares this source
                       file/address region with the real mesh loader (LH_LoadMeshBinary) and its
                       material utilities - not part of the submesh render path itself. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf85a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009910f0(local_60);
  local_4 = 0;
  local_54 = 9;
  if (local_48 != *param_1) {
    Engine_SetResourceReference(local_60,*param_1);
  }
  local_50 = local_50 & 0xbfffffff;
  LH_ApplyMeshMaterial(local_60);
  local_14 = param_1[4];
  local_18 = param_1[3];
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_1c = 0x3f800000;
  local_2c = 0x3f800000;
  local_3c = 0x3f800000;
  local_10 = 0;
  FUN_009a1480(&DAT_0105c2e8,&local_3c,'\x01');
  cVar1 = FUN_00a3b330((int *)&DAT_01060070,3);
  if (cVar1 != '\0') {
    (**(code **)(*g_pDirect3DDevice + 0x148))(g_pDirect3DDevice,4,DAT_01060078,0,4,DAT_01060090,2);
  }
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_60);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009e5c60 @ 009e5c60 ////

void __thiscall FUN_009e5c60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  char cVar8;
  float local_160 [10];
  float local_138;
  undefined4 local_134;
  float local_130 [12];
  char local_100 [256];
  
  *(int *)((int)this + 4) = param_2;
  *(float *)((int)this + 0xc) = (float)param_1 * 64.0 - 256.0;
  *(int *)((int)this + 8) = param_1;
  *(float *)((int)this + 0x10) = (float)param_2 * 64.0 - 256.0;
  _sprintf(local_100,"landlight %d %d",param_1,param_2);
  cVar8 = '\0';
  uVar2 = FUN_009e2750();
  uVar3 = FUN_009e2750();
  pvVar4 = FUN_0099bb50(local_100,DAT_0105c2dc,uVar3,uVar2,cVar8);
  *(void **)this = pvVar4;
  FUN_009e4f90(pvVar4);
  local_160[9] = -*(float *)((int)this + 0xc);
  local_138 = -*(float *)((int)this + 0x10);
  local_160[7] = 0.0;
  local_160[6] = 0.0;
  local_160[5] = 0.0;
  local_160[3] = 0.0;
  local_160[2] = 0.0;
  local_160[1] = 0.0;
  local_160[8] = 1.0;
  local_160[4] = 1.0;
  local_160[0] = 1.0;
  local_134 = 0;
  FUN_009e4b80(local_160,0.015625);
  local_130[0xb] = 0.0;
  local_130[10] = 0.0;
  local_130[9] = 0.0;
  local_130[7] = 0.0;
  local_130[6] = 0.0;
  local_130[5] = 0.0;
  local_130[2] = 0.0;
  local_130[8] = 1.0;
  local_130[4] = 0.0;
  local_130[0] = 0.0;
  local_130[3] = 1.0;
  local_130[1] = 1.0;
  FUN_009aa830(local_160,local_130);
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
    FUN_00a44920(*(void **)((int)this + 0x14),*(int *)this);
    puVar1 = (uint *)(*(int *)((int)this + 0x14) + 0x80);
    *puVar1 = *puVar1 | 1;
    pfVar6 = local_160;
    pfVar7 = (float *)(*(int *)((int)this + 0x14) + 0x4c);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    Camera_InitCachedTransform(*(int *)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_009e5e10 @ 009e5e10 ////

void FUN_009e5e10(char *param_1)

{
  char cVar1;
  undefined4 *_Memory;
  char *pcVar2;
  size_t local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf85c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Memory = FUN_009e4a30(&local_30);
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
  local_4 = 0;
  FUN_009d4370(&local_2c,_Memory,local_30);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009e5ec0 @ 009e5ec0 ////

void __cdecl FUN_009e5ec0(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int *_Memory;
  size_t sVar4;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf85f0;
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
    return;
  }
  _Memory = operator_new(uVar3);
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
  sVar4 = FUN_009d3ca0(&local_2c,_Memory,uVar3,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (sVar4 != 0) {
    FUN_009e5540(_Memory,param_2);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009e6000 @ 009e6000 ////

void __cdecl FUN_009e6000(undefined4 *param_1,char param_2)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = FUN_009894f0((int)param_1);
  if (uVar1 != 0) {
    _Memory = operator_new(uVar1);
    piVar2 = (int *)FUN_009894d0(param_1);
    piVar4 = _Memory;
    for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)piVar4 = (char)*piVar2;
      piVar2 = (int *)((int)piVar2 + 1);
      piVar4 = (int *)((int)piVar4 + 1);
    }
    FUN_009e5540(_Memory,param_2);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_009e6060 @ 009e6060 ////

void __cdecl FUN_009e6060(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009e6000(param_1,'\x01');
  }
  return;
}


//// FUNCTION OccupancyGrid_InitGlobals @ 009e6080 ////

void OccupancyGrid_InitGlobals(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf860e;
  pvStack_c = ExceptionList;
  DAT_0105ef79 = 0;
  ExceptionList = &pvStack_c;
  FUN_00a55c60();
  FUN_009d9820();
  g_OccupancyGrid256_A = operator_new(0x2000);
  puVar2 = g_OccupancyGrid256_A;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  g_OccupancyGrid256_B = operator_new(0x2000);
  puVar2 = g_OccupancyGrid256_B;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a79600();
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105f8d0);
}


//// FUNCTION FUN_009e6680 @ 009e6680 ////

void __cdecl FUN_009e6680(int *param_1)

{
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e668a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}


//// FUNCTION FUN_009e6690 @ 009e6690 ////

void FUN_009e6690(void)

{
  DAT_010600b8 = FUN_00452010();
  return;
}


//// FUNCTION FUN_009e66a0 @ 009e66a0 ////

void FUN_009e66a0(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  
  puVar2 = DAT_010600b8;
  if (DAT_010600b8 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_010600b8 + 4);
    uVar1 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_010600b8 = (undefined4 *)0x0;
    DAT_0105b588 = uVar1;
  }
  return;
}


//// FUNCTION FUN_009e66f0 @ 009e66f0 ////

void __fastcall FUN_009e66f0(undefined4 *param_1)

{
  if ((param_1[8] != 0) && (param_1[9] != 0)) {
    FUN_00a24ef0((int)param_1);
    if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
      FUN_0040a5b0(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009e6720 @ 009e6720 ////

void __thiscall FUN_009e6720(void *this,int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8636;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x18) < param_1) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28));
  }
  if (*(int *)((int)this + 0x1c) < param_2) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(int *)((int)this + 0x20) = param_1;
  *(int *)((int)this + 0x24) = param_2;
  return;
}


//// FUNCTION FUN_009e6830 @ 009e6830 ////

undefined4 * __thiscall FUN_009e6830(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)((int)this + 4) = param_1;
  uVar3 = param_1 * param_2;
  *(int *)((int)this + 8) = param_2;
  puVar1 = operator_new(uVar3);
  *(undefined4 **)this = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  return this;
}


//// FUNCTION FUN_009e6880 @ 009e6880 ////

void __thiscall FUN_009e6880(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  if (*(int *)this + 3 < 0x10001) {
    *(undefined2 *)((int)this + *(int *)this * 2 + 0x100008) = param_1;
    iVar1 = *(int *)this;
    *(int *)this = iVar1 + 1;
    *(undefined2 *)((int)this + (iVar1 + 1) * 2 + 0x100008) = param_2;
    iVar1 = *(int *)this;
    *(int *)this = iVar1 + 1;
    *(undefined2 *)((int)this + (iVar1 + 1) * 2 + 0x100008) = param_3;
    *(int *)this = *(int *)this + 1;
  }
  return;
}


//// FUNCTION FUN_009e68d0 @ 009e68d0 ////

void __thiscall FUN_009e68d0(void *this,undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  
  *param_1 = *(undefined2 *)((int)this + 4);
  iVar1 = *(int *)((int)this + 4) + 1;
  if (0xfffe < iVar1) {
    iVar1 = 0xffff;
  }
  *(int *)((int)this + 4) = iVar1;
  *param_2 = (short)iVar1;
  iVar1 = *(int *)((int)this + 4) + 1;
  if (0xfffe < iVar1) {
    iVar1 = 0xffff;
  }
  *(int *)((int)this + 4) = iVar1;
  if (0xffff < iVar1) {
    *param_2 = 0;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_009e6990 @ 009e6990 ////

void FUN_009e6990(void)

{
  return;
}


//// FUNCTION FUN_009e6b00 @ 009e6b00 ////

void __fastcall FUN_009e6b00(void *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_009e6b20 @ 009e6b20 ////

undefined4 __fastcall FUN_009e6b20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if ((int)param_1[5] < 0) {
    iVar2 = param_1[2] * param_1[1];
    pcVar3 = (char *)*param_1;
    param_1[5] = 0;
    if (0 < iVar2) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 != '\0') {
          param_1[5] = param_1[5] + 1;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return param_1[5];
}


//// FUNCTION FUN_009e6b60 @ 009e6b60 ////

uint __thiscall FUN_009e6b60(void *this,float *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  iVar3 = 0;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    do {
      iVar1 = FUN_009a4cb0((void *)(*(int *)((int)this + 0xc) + iVar4),param_1,
                           *(int *)((int)this + 8));
      if ((char)iVar1 != '\0') {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      uVar2 = *(uint *)((int)this + 4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 6;
    } while (iVar3 < (int)uVar2);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009e6bb0 @ 009e6bb0 ////

uint __thiscall FUN_009e6bb0(void *this,ushort *param_1)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_28;
  ushort local_24 [2];
  undefined1 local_20 [16];
  float *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a744b0(local_24,3);
  iVar6 = 0;
  local_4 = 0;
  local_28 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar3 = *(int *)((int)this + 0xc) + iVar6;
      pfVar1 = (float *)(*(int *)((int)this + 8) +
                        (uint)*(ushort *)(*(int *)((int)this + 0xc) + iVar6) * 0xc);
      *local_10 = *pfVar1;
      local_10[1] = pfVar1[1];
      local_10[2] = pfVar1[2];
      pfVar1 = (float *)(*(int *)((int)this + 8) + (uint)*(ushort *)(iVar3 + 2) * 0xc);
      local_10[3] = *pfVar1;
      local_10[4] = pfVar1[1];
      local_10[5] = pfVar1[2];
      pfVar1 = (float *)(*(int *)((int)this + 8) + (uint)*(ushort *)(iVar3 + 4) * 0xc);
      local_10[6] = *pfVar1;
      local_10[7] = pfVar1[1];
      local_10[8] = pfVar1[2];
      FUN_00a73ab0(local_20,local_10,(uint)local_24[0]);
      cVar2 = FUN_00a75f70(local_24,param_1);
      if (cVar2 != '\0') {
        local_4 = 0xffffffff;
        uVar5 = FUN_00a73d20((int)local_24);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      local_28 = local_28 + 1;
      iVar6 = iVar6 + 6;
    } while (local_28 < *(int *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_00a73d20((int)local_24);
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_009e6cf0 @ 009e6cf0 ////

void __fastcall FUN_009e6cf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + 8 + param_1[2]) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *param_1);
  }
  return;
}


//// FUNCTION FUN_009e6d20 @ 009e6d20 ////

uint __thiscall FUN_009e6d20(void *this,float *param_1,float *param_2)

{
  uint in_EAX;
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)this == 0) {
    return in_EAX & 0xffffff00;
  }
  pfVar2 = *(float **)((int)this + 8);
  *param_1 = *pfVar2;
  param_1[1] = pfVar2[1];
  param_1[2] = pfVar2[2];
  pfVar2 = *(float **)((int)this + 8);
  *param_2 = *pfVar2;
  param_2[1] = pfVar2[1];
  param_2[2] = pfVar2[2];
  iVar1 = *(int *)this;
  iVar4 = 1;
  if (1 < iVar1) {
    iVar3 = 0xc;
    do {
      pfVar2 = (float *)(*(int *)((int)this + 8) + iVar3);
      if (*param_1 <= *(float *)(*(int *)((int)this + 8) + iVar3)) {
        if (*param_2 < *pfVar2) {
          *param_2 = *pfVar2;
        }
      }
      else {
        *param_1 = *pfVar2;
      }
      if (param_1[1] <= pfVar2[1]) {
        if (param_2[1] < pfVar2[1]) {
          param_2[1] = pfVar2[1];
        }
      }
      else {
        param_1[1] = pfVar2[1];
      }
      if (param_1[2] <= pfVar2[2]) {
        if (param_2[2] < pfVar2[2]) {
          param_2[2] = pfVar2[2];
        }
      }
      else {
        param_1[2] = pfVar2[2];
      }
      iVar1 = *(int *)this;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_009e6e90 @ 009e6e90 ////

void __cdecl FUN_009e6e90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  
  puVar11 = operator_new(0xb8);
  puVar11[1] = 0xc;
  *puVar11 = 8;
  puVar11[2] = puVar11 + 4;
  puVar11[3] = puVar11 + 0x1c;
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xdc);
  fVar2 = *(float *)(param_1 + 0xd8);
  fVar8 = -fVar1;
  fVar9 = -fVar2;
  fVar10 = -fVar5;
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  puVar11[4] = fVar8 + *(float *)(param_1 + 200);
  puVar11[5] = fVar9 + fVar3;
  puVar11[6] = fVar10 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0xc) = fVar1 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x10) = fVar9 + fVar3;
  *(float *)(iVar6 + 0x14) = fVar10 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0x18) = fVar8 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x1c) = fVar2 + fVar3;
  *(float *)(iVar6 + 0x20) = fVar10 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0x24) = fVar1 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x28) = fVar2 + fVar3;
  *(float *)(iVar6 + 0x2c) = fVar10 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0x30) = fVar8 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x34) = fVar9 + fVar3;
  *(float *)(iVar6 + 0x38) = fVar5 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0x3c) = fVar1 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x40) = fVar9 + fVar3;
  *(float *)(iVar6 + 0x44) = fVar5 + fVar4;
  iVar6 = puVar11[2];
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  *(float *)(iVar6 + 0x48) = fVar8 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x4c) = fVar2 + fVar3;
  *(float *)(iVar6 + 0x50) = fVar5 + fVar4;
  fVar3 = *(float *)(param_1 + 0xcc);
  fVar4 = *(float *)(param_1 + 0xd0);
  iVar6 = puVar11[2];
  *(float *)(iVar6 + 0x54) = fVar1 + *(float *)(param_1 + 200);
  *(float *)(iVar6 + 0x58) = fVar2 + fVar3;
  *(float *)(iVar6 + 0x5c) = fVar5 + fVar4;
  puVar7 = (undefined4 *)puVar11[3];
  *puVar7 = 0x40000;
  *(undefined2 *)(puVar7 + 1) = 5;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 6) = 0x50000;
  *(undefined2 *)(iVar6 + 10) = 1;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0xc) = 0x50001;
  *(undefined2 *)(iVar6 + 0x10) = 7;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x12) = 0x70001;
  *(undefined2 *)(iVar6 + 0x16) = 3;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x18) = 0x30002;
  *(undefined2 *)(iVar6 + 0x1c) = 6;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x1e) = 0x60003;
  *(undefined2 *)(iVar6 + 0x22) = 7;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x24) = 0x20000;
  *(undefined2 *)(iVar6 + 0x28) = 4;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x2a) = 0x40002;
  *(undefined2 *)(iVar6 + 0x2e) = 6;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x30) = 0x50004;
  *(undefined2 *)(iVar6 + 0x34) = 6;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x36) = 0x60005;
  *(undefined2 *)(iVar6 + 0x3a) = 7;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x3c) = 0x10000;
  *(undefined2 *)(iVar6 + 0x40) = 2;
  iVar6 = puVar11[3];
  *(undefined4 *)(iVar6 + 0x42) = 0x20001;
  *(undefined2 *)(iVar6 + 0x46) = 3;
  return;
}


//// FUNCTION LH_LoadAuxPolygonChunk @ 009e7270 ////

uint * __cdecl LH_LoadAuxPolygonChunk(uint *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
                    /* CONFIRMED: reads a small indexed polygon chunk from the raw .msh buffer, NOT
                       a string (a WORD vertex-count and WORD index-count are read first, then
                       vertexCount*12 bytes as Vector3 floats, then indexCount*6 bytes as
                       triangle-index triples - same 12-byte-vertex/6-byte-triangle shape as the
                       main mesh geometry, just a separate smaller chunk). Returns a newly-allocated
                       struct: [0]=VertexCount, [1]=IndexCount, [2]=VertexArray ptr, [3]=IndexArray
                       ptr. Advances the caller's buffer cursor past the chunk (via FUN_009ac020,
                       likely 4-byte alignment padding).
                       
                       Called from LH_LoadMeshBinary for: (a) up to 5 optional per-mesh auxiliary
                       polygon attachments gated by header flag bits, stored at
                       mesh+0x50/0x54/0x58/0x5c/0x60 (purpose of each not individually confirmed -
                       candidates: LOD/impostor cage, collision hull, sound-occlusion volume) - two
                       of the flag-gated reads (local_16b bit2, local_16a bit4) don't even store the
                       result, just read-and-discard via FUN_009e6b00, suggesting those two are
                       deprecated/unused fields kept only for stream-alignment compatibility; and
                       (b) once per room in the set_*.msh room-list block, at roomRecord+0x64 - each
                       room's defining floor-shape/boundary polygon. */
  puVar2 = (ushort *)*param_1;
  uVar1 = puVar2[2];
  uVar9 = (uint)*puVar2;
  uVar3 = (uint)uVar1 * 6;
  puVar8 = (uint *)(puVar2 + 4);
  puVar4 = operator_new(uVar3 + 0x10 + uVar9 * 0xc);
  puVar5 = puVar4 + 4;
  puVar10 = puVar8;
  puVar11 = puVar5;
  for (iVar6 = uVar9 * 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(char *)puVar11 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar11 = (uint *)((int)puVar11 + 1);
  }
  puVar10 = puVar8 + uVar9 * 3;
  puVar11 = puVar5 + uVar9 * 3;
  for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar11 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar11 = (uint *)((int)puVar11 + 1);
  }
  puVar4[2] = (uint)puVar5;
  puVar4[1] = (uint)uVar1;
  *puVar4 = uVar9;
  puVar4[3] = (uint)(puVar5 + uVar9 * 3);
  uVar3 = FUN_009ac020((uint)(uVar3 + (int)(puVar8 + uVar9 * 3)));
  *param_1 = uVar3;
  return puVar4;
}


//// FUNCTION FUN_009e7320 @ 009e7320 ////

void __cdecl FUN_009e7320(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  iVar4 = 0;
  param_3[2] = 0.0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    pfVar2 = (float *)(param_1 + 0x14);
    do {
      iVar3 = iVar3 + -1;
      *param_3 = pfVar2[-5] + *param_3;
      param_3[1] = pfVar2[-4] + param_3[1];
      param_3[2] = pfVar2[-3] + param_3[2];
      *param_3 = pfVar2[-2] + *param_3;
      param_3[1] = pfVar2[-1] + param_3[1];
      param_3[2] = param_3[2] + *pfVar2;
      *param_3 = pfVar2[1] + *param_3;
      param_3[1] = pfVar2[2] + param_3[1];
      param_3[2] = pfVar2[3] + param_3[2];
      *param_3 = pfVar2[4] + *param_3;
      param_3[1] = pfVar2[5] + param_3[1];
      param_3[2] = pfVar2[6] + param_3[2];
      pfVar2 = pfVar2 + 0xc;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    iVar3 = param_2 - iVar4;
    pfVar2 = (float *)(param_1 + 8 + iVar4 * 0xc);
    do {
      iVar3 = iVar3 + -1;
      *param_3 = pfVar2[-2] + *param_3;
      param_3[1] = pfVar2[-1] + param_3[1];
      param_3[2] = param_3[2] + *pfVar2;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 != 0);
  }
  fVar1 = 1.0 / (float)param_2;
  *param_3 = fVar1 * *param_3;
  param_3[1] = fVar1 * param_3[1];
  param_3[2] = fVar1 * param_3[2];
  return;
}


//// FUNCTION FUN_009e7440 @ 009e7440 ////

void __cdecl FUN_009e7440(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = *param_4 - *param_2;
  local_20 = param_4[1] - param_2[1];
  local_1c = param_4[2] - param_2[2];
  local_18 = *param_3 - *param_2;
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  FUN_00412fd0(&local_c,&local_18,&local_24);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_009e74c0 @ 009e74c0 ////

float10 __cdecl
FUN_009e74c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4)

{
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = *param_3;
  local_8 = param_3[1];
  local_4 = param_3[2];
  FUN_009e7320((int)&local_24,3,&local_30);
  return SQRT(((float10)*param_4 - (float10)local_30) * ((float10)*param_4 - (float10)local_30) +
              ((float10)param_4[1] - (float10)local_2c) * ((float10)param_4[1] - (float10)local_2c)
              + ((float10)param_4[2] - (float10)local_28) *
                ((float10)param_4[2] - (float10)local_28));
}


//// FUNCTION FUN_009e7550 @ 009e7550 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009e7550(ushort param_1,ushort param_2,ushort param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)(DAT_0105be8c + 8 + (uint)param_2 * 0xc);
  pfVar3 = (float *)(DAT_0105be8c + 8 + (uint)param_3 * 0xc);
  pfVar6 = (float *)(DAT_0105be8c + 8 + (uint)param_1 * 0xc);
  if (*(int *)(DAT_0105be8c + 0xc0008 + (uint)param_1 * 4) == 0) {
    local_4 = 1.0 / ((1.0 - pfVar6[2]) / _DAT_0105c3f4);
    local_c = ((*pfVar6 - _DAT_0105c410) / _DAT_0105c410) * local_4;
    pfVar1 = pfVar6 + 1;
    pfVar6 = &local_c;
    local_8 = ((_DAT_0105c414 - *pfVar1) / _DAT_0105c414) * local_4;
  }
  fVar4 = (pfVar6[2] - DAT_0105c3e0) / ((pfVar6[2] - DAT_0105c3e0) - (pfVar2[2] - DAT_0105c3e0));
  fVar5 = 1.0 - fVar4;
  *pfVar3 = fVar5 * *pfVar6 + fVar4 * *pfVar2;
  pfVar3[1] = fVar4 * pfVar2[1] + fVar5 * pfVar6[1];
  fVar4 = 1.0 / (fVar4 * pfVar2[2] + fVar5 * pfVar6[2]);
  pfVar3[2] = fVar4;
  *pfVar3 = (fVar4 * *pfVar3 + 1.0) * _DAT_0105c410;
  pfVar3[1] = _DAT_0105c414 - pfVar3[2] * pfVar3[1] * _DAT_0105c414;
  pfVar3[2] = 1.0 - _DAT_0105c3f4 * pfVar3[2];
  return;
}


//// FUNCTION FUN_009e7660 @ 009e7660 ////

void __cdecl FUN_009e7660(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = (int)uVar1;
  uVar1 = FUN_00acd42c();
  *param_2 = (int)uVar1;
  return;
}


//// FUNCTION FUN_009e76c0 @ 009e76c0 ////

void __fastcall FUN_009e76c0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  float *in_EAX;
  short sVar15;
  short sVar16;
  short sVar17;
  short local_24;
  
  iVar11 = *param_1;
  iVar12 = param_1[1];
  pfVar6 = (float *)(param_1[2] + iVar11 * 0xc);
  *param_1 = iVar11 + 6;
  param_1[1] = iVar12 + 8;
  puVar7 = (undefined4 *)(param_1[3] + iVar12 * 6);
  *pfVar6 = 0.0;
  pfVar6[1] = 0.0;
  pfVar6[2] = 0.15;
  pfVar1 = pfVar6 + 3;
  *pfVar1 = 0.0;
  pfVar6[4] = -0.13;
  pfVar6[5] = -0.075;
  pfVar2 = pfVar6 + 6;
  *pfVar2 = 0.0;
  pfVar6[7] = 0.13;
  pfVar6[8] = -0.075;
  pfVar3 = pfVar6 + 9;
  *pfVar3 = 1.0;
  pfVar6[10] = 0.0;
  pfVar6[0xb] = 0.15;
  pfVar4 = pfVar6 + 0xc;
  *pfVar4 = 1.0;
  pfVar6[0xd] = -0.13;
  pfVar6[0xe] = -0.075;
  pfVar5 = pfVar6 + 0xf;
  *pfVar5 = 1.0;
  pfVar6[0x10] = 0.13;
  pfVar6[0x11] = -0.075;
  fVar8 = *pfVar6;
  fVar9 = pfVar6[1];
  fVar10 = pfVar6[2];
  *pfVar6 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[1] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  pfVar6[2] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  fVar8 = *pfVar1;
  fVar9 = pfVar6[4];
  fVar10 = pfVar6[5];
  *pfVar1 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[4] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  pfVar6[5] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  fVar8 = *pfVar2;
  fVar9 = pfVar6[7];
  fVar10 = pfVar6[8];
  *pfVar2 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[7] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  pfVar6[8] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  fVar8 = *pfVar3;
  fVar9 = pfVar6[10];
  fVar10 = pfVar6[0xb];
  *pfVar3 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[10] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  pfVar6[0xb] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  fVar8 = *pfVar4;
  fVar9 = pfVar6[0xd];
  fVar10 = pfVar6[0xe];
  *pfVar4 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[0xd] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  sVar16 = (short)iVar11;
  sVar17 = sVar16 + 1;
  pfVar6[0xe] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  fVar8 = *pfVar5;
  fVar9 = pfVar6[0x10];
  fVar10 = pfVar6[0x11];
  *pfVar5 = fVar8 * *in_EAX + fVar9 * in_EAX[3] + fVar10 * in_EAX[6] + in_EAX[9];
  pfVar6[0x10] = fVar9 * in_EAX[4] + fVar10 * in_EAX[7] + fVar8 * in_EAX[1] + in_EAX[10];
  sVar14 = sVar16 + 2;
  pfVar6[0x11] = fVar9 * in_EAX[5] + fVar10 * in_EAX[8] + fVar8 * in_EAX[2] + in_EAX[0xb];
  *puVar7 = CONCAT22(sVar17,sVar16);
  sVar13 = sVar16 + 4;
  local_24 = sVar16 + 5;
  *(short *)(puVar7 + 1) = sVar14;
  sVar15 = sVar16 + 3;
  *(uint *)((int)puVar7 + 6) = CONCAT22(sVar13,sVar15);
  *(short *)((int)puVar7 + 10) = local_24;
  puVar7[3] = CONCAT22(sVar17,sVar16);
  *(short *)(puVar7 + 4) = sVar15;
  *(uint *)((int)puVar7 + 0x12) = CONCAT22(sVar17,sVar13);
  *(short *)((int)puVar7 + 0x16) = sVar15;
  puVar7[6] = CONCAT22(sVar14,sVar16);
  *(short *)(puVar7 + 7) = sVar15;
  *(uint *)((int)puVar7 + 0x1e) = CONCAT22(sVar14,local_24);
  *(short *)((int)puVar7 + 0x22) = sVar15;
  puVar7[9] = CONCAT22(sVar14,sVar13);
  *(short *)(puVar7 + 10) = sVar17;
  *(uint *)((int)puVar7 + 0x2a) = CONCAT22(sVar14,sVar13);
  *(short *)((int)puVar7 + 0x2e) = local_24;
  return;
}


//// FUNCTION FUN_009e7af0 @ 009e7af0 ////

void __thiscall
FUN_009e7af0(void *this,int *param_1,int *param_2,int *param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 local_1c;
  
  local_1c = 0;
  if (0 < *(int *)this) {
    do {
      uVar4 = FUN_00acd42c();
      iVar1 = (int)uVar4;
      uVar4 = FUN_00acd42c();
      iVar2 = (int)uVar4;
      if (param_5 == '\0') {
        if (iVar1 < *param_1) {
          *param_1 = iVar1;
        }
        if (*param_2 < iVar1) {
          *param_2 = iVar1;
        }
        if (iVar2 < *param_3) {
          *param_3 = iVar2;
        }
        piVar3 = param_4;
        if (*param_4 < iVar2) goto LAB_009e7c2b;
      }
      else {
        *param_2 = iVar1;
        *param_1 = iVar1;
        param_5 = '\0';
        *param_4 = iVar2;
        piVar3 = param_3;
LAB_009e7c2b:
        *piVar3 = iVar2;
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)this);
  }
  return;
}


//// FUNCTION FUN_009e7c60 @ 009e7c60 ////

void __thiscall
FUN_009e7c60(void *this,int param_1,undefined4 param_2,void *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  int local_7c;
  int local_48;
  int local_44 [17];
  
  local_7c = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      local_44[2] = 0xffffffff;
      local_44[8] = 0xffffffff;
      local_44[0xe] = 0xffffffff;
      local_44[4] = 0;
      local_44[3] = 0;
      local_44[1] = 0;
      local_44[0] = 0;
      local_48 = 0;
      local_44[10] = 0;
      local_44[9] = 0;
      local_44[7] = 0;
      local_44[6] = 0;
      local_44[5] = 0;
      local_44[0x10] = 0;
      local_44[0xf] = 0;
      local_44[0xd] = 0;
      local_44[0xc] = 0;
      local_44[0xb] = 0;
      uVar5 = FUN_00acd42c();
      local_44[0] = (int)uVar5;
      uVar5 = FUN_00acd42c();
      local_48 = (int)uVar5;
      uVar5 = FUN_00acd42c();
      local_44[6] = (int)uVar5;
      uVar5 = FUN_00acd42c();
      local_44[5] = (int)uVar5;
      uVar5 = FUN_00acd42c();
      local_44[0xc] = (int)uVar5;
      uVar5 = FUN_00acd42c();
      local_44[0xb] = (int)uVar5;
      piVar3 = local_44;
      iVar4 = 3;
      do {
        iVar1 = piVar3[-1];
        iVar2 = *piVar3;
        piVar3[-1] = iVar1 - param_5;
        *piVar3 = iVar2 - param_4;
        if (iVar1 - param_5 < 0) {
          piVar3[-1] = 0;
        }
        if (param_7 + -1 < piVar3[-1]) {
          piVar3[-1] = param_7 + -1;
        }
        if (iVar2 - param_4 < 0) {
          *piVar3 = 0;
        }
        if (param_6 + -1 < *piVar3) {
          *piVar3 = param_6 + -1;
        }
        piVar3[2] = param_1 << 0x10;
        piVar3 = piVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00a53b00(param_3,&local_48,local_44 + 5,local_44 + 0xb);
      local_7c = local_7c + 1;
    } while (local_7c < *(int *)((int)this + 4));
  }
  return;
}


//// FUNCTION FUN_009e8060 @ 009e8060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_009e8060(void *param_1,int *param_2,void *param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  undefined4 *local_74;
  undefined4 local_70 [9];
  float local_4c;
  float local_48;
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cf8673;
  local_c = ExceptionList;
  if ((param_1 == (void *)0x0) ||
     (ExceptionList = &local_c, iVar2 = FUN_0097e350(param_1,0), iVar2 == 0)) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  if (param_3 == (void *)0x0) {
    if (param_4 == (void *)0x0) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
    local_74 = (undefined4 *)((int)param_1 + 0x18);
    FUN_009e7af0(param_4,&local_80,&local_7c,&local_84,(int *)&local_78,'\x01');
    puVar5 = local_74;
  }
  else {
    puVar5 = (undefined4 *)((int)param_1 + 0x18);
    local_74 = puVar5;
    FUN_009e7af0(param_3,&local_80,&local_7c,&local_84,(int *)&local_78,'\x01');
    if (param_4 != (void *)0x0) {
      FUN_009e7af0(param_4,&local_80,&local_7c,&local_84,(int *)&local_78,'\0');
    }
  }
  iVar4 = (local_7c - local_80) + 1;
  iVar2 = (int)local_78 + (1 - local_84);
  local_78 = param_2;
  if (param_2 != (int *)0x0) {
    param_2[1] = iVar4;
    param_2[2] = iVar2;
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_2);
  }
  local_74 = operator_new(0x18);
  local_4 = param_2;
  if (local_74 == (void *)0x0) {
    local_78 = (int *)0x0;
  }
  else {
    local_78 = FUN_009e6830(local_74,iVar4,iVar2);
  }
  piVar1 = local_78;
  local_4 = (int *)0xffffffff;
  local_78[3] = (int)((float)local_80 * 0.5);
  local_78[4] = (int)((float)local_84 * 0.5);
  FUN_00a547a0(local_40);
  local_4 = (int *)0x1;
  FUN_00a54110(local_40,iVar2,iVar4,iVar2,*piVar1,DAT_0105be8c);
  FUN_00a54740(local_40,0);
  puVar6 = local_70;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_4c = _DAT_00e68618 + local_4c;
  local_48 = _DAT_00e68614 + local_48;
  if (param_4 != (void *)0x0) {
    FUN_009e7c60(param_4,2,local_70,local_40,local_80,local_84,iVar4,iVar2);
  }
  if (param_3 != (void *)0x0) {
    FUN_009e7c60(param_3,3,local_70,local_40,local_80,local_84,iVar4,iVar2);
  }
  local_4 = (int *)0xffffffff;
  FUN_00a53bc0((int)local_40);
  ExceptionList = local_c;
  return local_78;
}


//// FUNCTION FUN_009e8300 @ 009e8300 ////

uint __thiscall FUN_009e8300(void *this,float param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint local_20;
  float local_18 [4];
  float local_8;
  float local_4;
  
  uVar5 = *(uint *)((int)this + 4);
  puVar11 = *(ushort **)((int)this + 0xc);
  local_20 = 0;
  uVar9 = uVar5;
  if (0 < (int)uVar5) {
    iVar6 = *(int *)((int)this + 8);
    do {
      pfVar2 = (float *)(iVar6 + (uint)*puVar11 * 0xc);
      pfVar3 = (float *)(iVar6 + (uint)puVar11[1] * 0xc);
      pfVar4 = (float *)(iVar6 + (uint)puVar11[2] * 0xc);
      local_18[0] = *pfVar2 - param_1;
      local_18[1] = pfVar2[1] - param_2;
      local_18[2] = *pfVar3 - param_1;
      local_18[3] = pfVar3[1] - param_2;
      local_8 = *pfVar4 - param_1;
      local_4 = pfVar4[1] - param_2;
      fVar7 = local_18[3] * (*pfVar2 - param_1) - local_18[2] * (pfVar2[1] - param_2);
      uVar8 = CONCAT22((short)((uint)pfVar2 >> 0x10),
                       (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                       (ushort)(fVar7 == 0.0) << 0xe);
      iVar10 = 1;
      if (fVar7 < 0.0 == 0 && (fVar7 == 0.0) == 0) {
        do {
          if (2 < iVar10) goto LAB_009e8439;
          iVar1 = iVar10 + 1;
          fVar7 = local_18[iVar10 * 2] * local_18[(iVar1 % 3) * 2 + 1] -
                  local_18[iVar10 * 2 + 1] * local_18[(iVar1 % 3) * 2];
          uVar8 = CONCAT22((short)((uint)(iVar1 / 3) >> 0x10),
                           (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                           (ushort)(fVar7 == 0.0) << 0xe);
          iVar10 = iVar1;
        } while (fVar7 >= 0.0);
      }
      else {
        do {
          if (2 < iVar10) {
LAB_009e8439:
            return CONCAT31((int3)((uint)uVar8 >> 8),1);
          }
          iVar1 = iVar10 + 1;
          fVar7 = local_18[iVar10 * 2] * local_18[(iVar1 % 3) * 2 + 1] -
                  local_18[iVar10 * 2 + 1] * local_18[(iVar1 % 3) * 2];
          uVar8 = CONCAT22((short)((uint)(iVar1 / 3) >> 0x10),
                           (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                           (ushort)(fVar7 == 0.0) << 0xe);
          iVar10 = iVar1;
        } while (fVar7 < 0.0 != 0 || (fVar7 == 0.0) != 0);
      }
      uVar9 = local_20 + 1;
      puVar11 = puVar11 + 3;
      local_20 = uVar9;
    } while ((int)uVar9 < (int)uVar5);
  }
  return uVar9 & 0xffffff00;
}


//// FUNCTION FUN_009e8450 @ 009e8450 ////

void __cdecl FUN_009e8450(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort local_4 [2];
  
  pvVar2 = DAT_0105be8c;
  iVar1 = *(int *)((int)DAT_0105be8c + (param_2 & 0xffff) * 4 + 0xc0008);
  uVar5 = (ushort)param_3;
  uVar4 = (ushort)param_2;
  uVar3 = (ushort)param_1;
  if (*(int *)((int)DAT_0105be8c + (param_1 & 0xffff) * 4 + 0xc0008) == 0) {
    if (iVar1 != 0) {
      FUN_009e68d0(DAT_0105be8c,local_4,(undefined2 *)&param_1);
      uVar5 = (ushort)param_3;
      if (*(int *)((int)pvVar2 + (param_3 & 0xffff) * 4 + 0xc0008) != 0) {
        FUN_009e7550(uVar3,uVar4,local_4[0]);
        uVar4 = (ushort)param_1;
        FUN_009e7550(uVar3,uVar5,uVar4);
        FUN_009e6880(DAT_0105be8c,uVar3,local_4[0],uVar4);
        return;
      }
      FUN_009e7550(uVar3,uVar4,local_4[0]);
      FUN_009e7550(uVar5,uVar4,(ushort)param_1);
      FUN_009e6880(DAT_0105be8c,uVar3,local_4[0],uVar5);
      FUN_009e6880(DAT_0105be8c,local_4[0],(short)param_1,uVar5);
      return;
    }
    if (*(int *)((int)DAT_0105be8c + (param_3 & 0xffff) * 4 + 0xc0008) != 0) {
      FUN_009e68d0(DAT_0105be8c,local_4,(undefined2 *)&param_1);
      FUN_009e7550(uVar3,uVar5,local_4[0]);
      FUN_009e7550(uVar4,uVar5,(ushort)param_1);
      FUN_009e6880(DAT_0105be8c,local_4[0],uVar3,uVar4);
      FUN_009e6880(DAT_0105be8c,local_4[0],uVar4,(short)param_1);
      return;
    }
    FUN_009e6880(DAT_0105be8c,uVar3,uVar4,uVar5);
  }
  else {
    if (iVar1 == 0) {
      FUN_009e68d0(DAT_0105be8c,local_4,(undefined2 *)&param_1);
      uVar5 = (ushort)param_3;
      if (*(int *)((int)pvVar2 + (param_3 & 0xffff) * 4 + 0xc0008) != 0) {
        FUN_009e7550(uVar4,uVar3,local_4[0]);
        uVar3 = (ushort)param_1;
        FUN_009e7550(uVar4,uVar5,uVar3);
        FUN_009e6880(DAT_0105be8c,local_4[0],uVar4,uVar3);
        return;
      }
      FUN_009e7550(uVar4,uVar3,local_4[0]);
      FUN_009e7550(uVar5,uVar3,(ushort)param_1);
      FUN_009e6880(DAT_0105be8c,local_4[0],uVar4,uVar5);
      FUN_009e6880(DAT_0105be8c,local_4[0],uVar5,(short)param_1);
      return;
    }
    if (*(int *)((int)DAT_0105be8c + (param_3 & 0xffff) * 4 + 0xc0008) == 0) {
      FUN_009e68d0(DAT_0105be8c,(undefined2 *)&param_1,local_4);
      uVar6 = (ushort)param_1;
      FUN_009e7550(uVar5,uVar3,uVar6);
      FUN_009e7550(uVar5,uVar4,local_4[0]);
      FUN_009e6880(DAT_0105be8c,uVar5,uVar6,local_4[0]);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009e8660 @ 009e8660 ////

int * __cdecl FUN_009e8660(int param_1)

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
  int *piVar11;
  float10 fVar12;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar11 = operator_new(0x5b0);
  piVar11[2] = (int)(piVar11 + 4);
  piVar11[1] = 0;
  *piVar11 = 0;
  piVar11[3] = (int)(piVar11 + 0xdc);
  fVar3 = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xd4);
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  fVar4 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 0xd8);
  local_28 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_10 = 1.0;
  fVar5 = *(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xdc);
  fVar6 = *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0xd4);
  fVar7 = *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xd8);
  fVar8 = *(float *)(param_1 + 0xdc) + *(float *)(param_1 + 0xdc);
  local_30 = fVar6;
  local_c = fVar3;
  local_8 = fVar4;
  local_4 = fVar5;
  FUN_009e76c0(piVar11);
  fVar9 = fVar4 + fVar7;
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_10 = 1.0;
  local_34 = fVar5;
  local_30 = fVar6;
  local_c = fVar3;
  local_8 = fVar9;
  local_4 = fVar5;
  FUN_009e76c0(piVar11);
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  fVar10 = fVar5 + fVar8;
  local_10 = 1.0;
  local_34 = fVar10;
  local_30 = fVar6;
  local_c = fVar3;
  local_8 = fVar9;
  local_4 = fVar10;
  FUN_009e76c0(piVar11);
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_10 = 1.0;
  local_34 = fVar10;
  local_30 = fVar6;
  local_c = fVar3;
  local_8 = fVar4;
  local_4 = fVar10;
  FUN_009e76c0(piVar11);
  fVar12 = (float10)fcos((float10)-1.5707963705062866);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_1c = 0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_3c = 1.0;
  local_38 = 1.0;
  local_10 = (float)fVar12;
  fVar1 = (float)fVar12;
  local_30 = (float)fVar12;
  fVar12 = (float10)fsin((float10)-1.5707963705062866);
  local_18 = (float)fVar12;
  fVar2 = (float)fVar12;
  local_28 = (float)-fVar12;
  local_34 = fVar8;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar3;
  local_8 = local_8 + fVar4;
  local_4 = local_4 + fVar5;
  FUN_009e76c0(piVar11);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_28 = -fVar2;
  local_14 = 0;
  local_1c = 0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_3c = 1.0;
  local_38 = 1.0;
  local_34 = fVar8;
  local_30 = fVar1;
  local_18 = fVar2;
  local_10 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar3;
  local_8 = fVar9 + local_8;
  local_4 = fVar5 + local_4;
  local_34 = fVar5;
  FUN_009e76c0(piVar11);
  local_28 = -fVar2;
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_1c = 0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_3c = 1.0;
  local_38 = 1.0;
  local_34 = fVar8;
  local_30 = fVar1;
  local_18 = fVar2;
  local_10 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  fVar6 = fVar3 + fVar6;
  local_c = local_c + fVar6;
  local_8 = fVar9 + local_8;
  local_4 = fVar5 + local_4;
  local_34 = fVar5;
  FUN_009e76c0(piVar11);
  local_4 = 0.0;
  local_8 = 0.0;
  local_28 = -fVar2;
  local_c = 0.0;
  local_14 = 0;
  local_1c = 0;
  local_24 = 0.0;
  local_2c = 0.0;
  local_20 = 1.0;
  local_3c = 1.0;
  local_38 = 1.0;
  local_34 = fVar8;
  local_30 = fVar1;
  local_18 = fVar2;
  local_10 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar6;
  local_8 = fVar4 + local_8;
  local_4 = fVar5 + local_4;
  local_34 = fVar5;
  FUN_009e76c0(piVar11);
  fVar12 = (float10)fcos((float10)1.5707963705062866);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_28 = 0.0;
  local_10 = 1.0;
  local_3c = 1.0;
  local_34 = 1.0;
  local_20 = (float)fVar12;
  fVar1 = (float)fVar12;
  local_30 = (float)fVar12;
  fVar12 = (float10)fsin((float10)1.5707963705062866);
  local_2c = (float)fVar12;
  fVar2 = (float)fVar12;
  local_24 = (float)-fVar12;
  local_38 = fVar7;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar3;
  local_8 = local_8 + fVar4;
  local_4 = local_4 + fVar5;
  FUN_009e76c0(piVar11);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_24 = -fVar2;
  local_18 = 0.0;
  local_1c = 0;
  local_28 = 0.0;
  local_10 = 1.0;
  local_3c = 1.0;
  local_34 = 1.0;
  local_38 = fVar7;
  local_30 = fVar1;
  local_2c = fVar2;
  local_20 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar6;
  local_8 = fVar4 + local_8;
  local_4 = fVar5 + local_4;
  local_34 = fVar5;
  FUN_009e76c0(piVar11);
  local_24 = -fVar2;
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_18 = 0.0;
  local_1c = 0;
  local_28 = 0.0;
  local_10 = 1.0;
  local_3c = 1.0;
  local_34 = 1.0;
  local_38 = fVar7;
  local_30 = fVar1;
  local_2c = fVar2;
  local_20 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar6;
  local_8 = fVar4 + local_8;
  local_4 = fVar10 + local_4;
  local_34 = fVar10;
  FUN_009e76c0(piVar11);
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  local_14 = 0;
  local_18 = 0.0;
  local_24 = -fVar2;
  local_1c = 0;
  local_28 = 0.0;
  local_10 = 1.0;
  local_3c = 1.0;
  local_34 = 1.0;
  local_38 = fVar7;
  local_30 = fVar1;
  local_2c = fVar2;
  local_20 = fVar1;
  FUN_009dac90(&local_30,&local_3c);
  local_c = local_c + fVar3;
  local_8 = fVar4 + local_8;
  local_4 = fVar10 + local_4;
  local_34 = fVar10;
  FUN_009e76c0(piVar11);
  return piVar11;
}


//// FUNCTION FUN_009e8ed0 @ 009e8ed0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_009e8ed0(void *this,undefined4 *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  float fVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  void *pvVar14;
  float *pfVar15;
  int iVar16;
  ushort *puVar17;
  int *piVar18;
  int *piVar19;
  void *pvVar20;
  int local_28;
  float local_18 [4];
  float local_8;
  float local_4;
  
  *param_1 = 0x7f7fffff;
  pfVar15 = *(float **)((int)this + 8);
  iVar16 = 0;
  pfVar13 = (float *)(DAT_0105be8c + 2);
  piVar18 = DAT_0105be8c + 0x30002;
  if (0 < *(int *)this) {
    do {
      *pfVar13 = _DAT_0105c540 * pfVar15[2] + _DAT_0105c534 * pfVar15[1] + DAT_0105c528 * *pfVar15 +
                 _DAT_0105c54c;
      pfVar13[1] = _DAT_0105c544 * pfVar15[2] + _DAT_0105c538 * pfVar15[1] + DAT_0105c52c * *pfVar15
                   + _DAT_0105c550;
      fVar9 = _DAT_0105c548 * pfVar15[2] + _DAT_0105c53c * pfVar15[1] + _DAT_0105c530 * *pfVar15 +
              _DAT_0105c554;
      pfVar13[2] = fVar9;
      if (fVar9 < DAT_0105c3e0) {
        *piVar18 = 1;
      }
      else {
        *piVar18 = 0;
        fVar9 = 1.0 / pfVar13[2];
        pfVar13[2] = fVar9;
        *pfVar13 = (fVar9 * *pfVar13 + 1.0) * _DAT_0105c410;
        pfVar13[1] = _DAT_0105c414 - fVar9 * pfVar13[1] * _DAT_0105c414;
        pfVar13[2] = 1.0 - fVar9 * _DAT_0105c3f4;
      }
      piVar18 = piVar18 + 1;
      pfVar13 = pfVar13 + 3;
      pfVar15 = pfVar15 + 3;
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)this);
  }
  piVar18 = DAT_0105be8c;
  pvVar14 = *(void **)this;
  *DAT_0105be8c = 0;
  piVar18[1] = (int)pvVar14;
  piVar18 = DAT_0105be8c;
  puVar17 = *(ushort **)((int)this + 0xc);
  local_28 = 0;
  piVar19 = DAT_0105be8c;
  pvVar20 = this;
  if (0 < *(int *)((int)this + 4)) {
    do {
      uVar4 = *puVar17;
      pvVar20 = (void *)CONCAT22((short)((uint)pvVar20 >> 0x10),uVar4);
      uVar5 = puVar17[1];
      uVar6 = puVar17[2];
      if (piVar18[uVar4 + 0x30002] == 0) {
        if ((piVar18[uVar5 + 0x30002] == 0) && (piVar18[uVar6 + 0x30002] == 0)) {
          if (*piVar19 + 3 < 0x10001) {
            *(ushort *)((int)piVar19 + *piVar19 * 2 + 0x100008) = uVar4;
            pvVar20 = (void *)(*piVar19 + 1);
            *piVar19 = (int)pvVar20;
            *(ushort *)((int)piVar19 + (int)pvVar20 * 2 + 0x100008) = uVar5;
            iVar16 = *piVar19;
            *piVar19 = iVar16 + 1;
            *(ushort *)((int)piVar19 + (iVar16 + 1) * 2 + 0x100008) = uVar6;
            *piVar19 = *piVar19 + 1;
            piVar19 = DAT_0105be8c;
          }
        }
        else {
LAB_009e9209:
          FUN_009e8450((uint)pvVar20,CONCAT22((short)((uint)pvVar14 >> 0x10),uVar5),
                       CONCAT22((short)((uint)pfVar15 >> 0x10),uVar6));
          piVar19 = DAT_0105be8c;
        }
      }
      else if ((piVar18[uVar5 + 0x30002] == 0) || (piVar18[uVar6 + 0x30002] == 0))
      goto LAB_009e9209;
      pfVar15 = *(float **)((int)this + 4);
      puVar17 = puVar17 + 3;
      local_28 = local_28 + 1;
      pvVar14 = this;
    } while (local_28 < (int)pfVar15);
  }
  puVar8 = (undefined4 *)(*piVar19 / 3);
  puVar12 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    puVar17 = (ushort *)(piVar19 + 0x40002);
    param_1 = (undefined4 *)0x0;
    fVar9 = DAT_0105c430 - (float)_DAT_0105c408;
    fVar10 = DAT_0105c434 - (float)_DAT_0105c40c;
    if (0 < (int)puVar8) {
      do {
        puVar1 = puVar17 + 1;
        pfVar13 = (float *)(piVar19 + (uint)*puVar17 * 3 + 2);
        puVar2 = puVar17 + 2;
        local_18[0] = *pfVar13 - fVar9;
        puVar17 = puVar17 + 3;
        local_18[1] = pfVar13[1] - fVar10;
        local_18[2] = (float)piVar19[(uint)*puVar1 * 3 + 2] - fVar9;
        local_18[3] = (float)(piVar19 + (uint)*puVar1 * 3 + 2)[1] - fVar10;
        local_8 = (float)piVar19[(uint)*puVar2 * 3 + 2] - fVar9;
        local_4 = (float)(piVar19 + (uint)*puVar2 * 3 + 2)[1] - fVar10;
        fVar7 = local_18[3] * (*pfVar13 - fVar9) - local_18[2] * (pfVar13[1] - fVar10);
        uVar11 = CONCAT22((short)((uint)pfVar13 >> 0x10),
                          (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                          (ushort)(fVar7 == 0.0) << 0xe);
        iVar16 = 1;
        if (fVar7 < 0.0 == 0 && (fVar7 == 0.0) == 0) {
          do {
            if (2 < iVar16) {
LAB_009e9276:
              return CONCAT31((int3)((uint)uVar11 >> 8),1);
            }
            iVar3 = iVar16 + 1;
            fVar7 = local_18[iVar16 * 2] * local_18[(iVar3 % 3) * 2 + 1] -
                    local_18[iVar16 * 2 + 1] * local_18[(iVar3 % 3) * 2];
            uVar11 = CONCAT22((short)((uint)(iVar3 / 3) >> 0x10),
                              (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                              (ushort)(fVar7 == 0.0) << 0xe);
            iVar16 = iVar3;
          } while (fVar7 >= 0.0);
        }
        else {
          do {
            if (2 < iVar16) goto LAB_009e9276;
            iVar3 = iVar16 + 1;
            fVar7 = local_18[iVar16 * 2] * local_18[(iVar3 % 3) * 2 + 1] -
                    local_18[iVar16 * 2 + 1] * local_18[(iVar3 % 3) * 2];
            uVar11 = CONCAT22((short)((uint)(iVar3 / 3) >> 0x10),
                              (ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                              (ushort)(fVar7 == 0.0) << 0xe);
            iVar16 = iVar3;
          } while (fVar7 < 0.0 != 0 || (fVar7 == 0.0) != 0);
        }
        puVar12 = (undefined4 *)((int)param_1 + 1);
        param_1 = puVar12;
      } while ((int)puVar12 < (int)puVar8);
    }
  }
  return (uint)puVar12 & 0xffffff00;
}


//// FUNCTION FUN_009e9290 @ 009e9290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_009e9290(int *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  ushort *puVar18;
  ushort *puVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  float10 fVar23;
  float local_50;
  int local_4c;
  int local_48;
  int local_38;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [4];
  float local_8;
  float local_4;
  
  pfVar17 = (float *)param_1[2];
  iVar21 = 0;
  pfVar15 = (float *)(DAT_0105be8c + 2);
  piVar20 = DAT_0105be8c + 0x30002;
  if (0 < *param_1) {
    do {
      *pfVar15 = _DAT_0105c540 * pfVar17[2] + _DAT_0105c534 * pfVar17[1] + DAT_0105c528 * *pfVar17 +
                 _DAT_0105c54c;
      pfVar15[1] = _DAT_0105c544 * pfVar17[2] + _DAT_0105c538 * pfVar17[1] + DAT_0105c52c * *pfVar17
                   + _DAT_0105c550;
      fVar11 = _DAT_0105c548 * pfVar17[2] + _DAT_0105c53c * pfVar17[1] + _DAT_0105c530 * *pfVar17 +
               _DAT_0105c554;
      pfVar15[2] = fVar11;
      if (fVar11 < DAT_0105c3e0) {
        *piVar20 = 1;
      }
      else {
        *piVar20 = 0;
        fVar11 = 1.0 / pfVar15[2];
        pfVar15[2] = fVar11;
        *pfVar15 = (fVar11 * *pfVar15 + 1.0) * _DAT_0105c410;
        pfVar15[1] = _DAT_0105c414 - fVar11 * pfVar15[1] * _DAT_0105c414;
        pfVar15[2] = (1.0 - fVar11) * _DAT_0105c3f4;
      }
      piVar20 = piVar20 + 1;
      pfVar15 = pfVar15 + 3;
      pfVar17 = pfVar17 + 3;
      iVar21 = iVar21 + 1;
    } while (iVar21 < *param_1);
  }
  piVar14 = DAT_0105be8c;
  iVar21 = *param_1;
  *DAT_0105be8c = 0;
  piVar14[1] = iVar21;
  piVar14 = DAT_0105be8c;
  iVar21 = param_1[1];
  puVar18 = (ushort *)param_1[3];
  local_38 = 0;
  piVar22 = DAT_0105be8c;
  if (0 < iVar21) {
    do {
      uVar7 = *puVar18;
      piVar20 = (int *)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
      uVar8 = puVar18[1];
      uVar9 = puVar18[2];
      if (piVar14[uVar7 + 0x30002] == 0) {
        if ((piVar14[uVar8 + 0x30002] == 0) && (piVar14[uVar9 + 0x30002] == 0)) {
          if (*piVar22 + 3 < 0x10001) {
            *(ushort *)((int)piVar22 + *piVar22 * 2 + 0x100008) = uVar7;
            iVar21 = *piVar22;
            *piVar22 = iVar21 + 1;
            *(ushort *)((int)piVar22 + (iVar21 + 1) * 2 + 0x100008) = uVar8;
            piVar20 = (int *)(*piVar22 + 1);
            *piVar22 = (int)piVar20;
            *(ushort *)((int)piVar22 + (int)piVar20 * 2 + 0x100008) = uVar9;
            *piVar22 = *piVar22 + 1;
            piVar22 = DAT_0105be8c;
          }
        }
        else {
LAB_009e9480:
          FUN_009e8450((uint)piVar20,CONCAT22((short)((uint)iVar21 >> 0x10),uVar8),
                       CONCAT22((short)((uint)pfVar17 >> 0x10),uVar9));
          piVar22 = DAT_0105be8c;
        }
      }
      else if ((piVar14[uVar8 + 0x30002] == 0) || (piVar14[uVar9 + 0x30002] == 0))
      goto LAB_009e9480;
      pfVar17 = (float *)param_1[1];
      puVar18 = puVar18 + 3;
      iVar21 = local_38 + 1;
      local_38 = iVar21;
    } while (iVar21 < (int)pfVar17);
  }
  iVar21 = *piVar22 / 3;
  local_48 = -1;
  if (iVar21 != 0) {
    local_24 = DAT_0105c3a8;
    fVar11 = DAT_0105c430 - (float)_DAT_0105c408;
    puVar18 = (ushort *)(piVar22 + 0x40002);
    local_50 = 0.0;
    bVar13 = true;
    local_20 = DAT_0105c3ac;
    fVar12 = DAT_0105c434 - (float)_DAT_0105c40c;
    local_1c = DAT_0105c3b0;
    local_4c = 0;
    if (0 < iVar21) {
      iVar10 = param_1[2];
      puVar19 = (ushort *)param_1[3];
      do {
        puVar1 = puVar18 + 1;
        puVar2 = puVar18 + 2;
        local_18[0] = (float)piVar22[(uint)*puVar18 * 3 + 2] - fVar11;
        local_18[1] = (float)(piVar22 + (uint)*puVar18 * 3 + 2)[1] - fVar12;
        puVar18 = puVar18 + 3;
        local_18[2] = (float)piVar22[(uint)*puVar1 * 3 + 2] - fVar11;
        puVar4 = (undefined4 *)(iVar10 + (uint)*puVar19 * 0xc);
        local_18[3] = (float)(piVar22 + (uint)*puVar1 * 3 + 2)[1] - fVar12;
        local_8 = (float)piVar22[(uint)*puVar2 * 3 + 2] - fVar11;
        puVar5 = (undefined4 *)(iVar10 + (uint)puVar19[1] * 0xc);
        local_4 = (float)(piVar22 + (uint)*puVar2 * 3 + 2)[1] - fVar12;
        puVar6 = (undefined4 *)(iVar10 + (uint)puVar19[2] * 0xc);
        iVar16 = 1;
        if (local_18[3] * local_18[0] - local_18[2] * local_18[1] <= 0.0) {
          do {
            iVar3 = iVar16 + 1;
            if (0.0 < local_18[iVar16 * 2] * local_18[(iVar3 % 3) * 2 + 1] -
                      local_18[iVar16 * 2 + 1] * local_18[(iVar3 % 3) * 2]) goto LAB_009e9768;
            iVar16 = iVar3;
          } while (iVar3 < 3);
          if (bVar13) {
            local_48 = local_4c;
            bVar13 = false;
            fVar23 = FUN_009e74c0(puVar4,puVar5,puVar6,&local_24);
            local_50 = (float)ABS(fVar23);
          }
          else {
            fVar23 = FUN_009e74c0(puVar4,puVar5,puVar6,&local_24);
            if (ABS(fVar23) < (float10)local_50) {
              local_50 = (float)ABS(fVar23);
              local_48 = local_4c;
            }
          }
        }
        else {
          do {
            iVar3 = iVar16 + 1;
            if (local_18[iVar16 * 2] * local_18[(iVar3 % 3) * 2 + 1] -
                local_18[iVar16 * 2 + 1] * local_18[(iVar3 % 3) * 2] < 0.0) goto LAB_009e9768;
            iVar16 = iVar3;
          } while (iVar3 < 3);
          if (bVar13) {
            local_48 = local_4c;
            bVar13 = false;
            fVar23 = FUN_009e74c0(puVar4,puVar5,puVar6,&local_24);
            local_50 = (float)ABS(fVar23);
          }
          else {
            fVar23 = FUN_009e74c0(puVar4,puVar5,puVar6,&local_24);
            if (ABS(fVar23) < (float10)local_50) {
              local_50 = (float)ABS(fVar23);
              local_48 = local_4c;
            }
          }
        }
LAB_009e9768:
        local_4c = local_4c + 1;
        puVar19 = puVar19 + 3;
        if (iVar21 <= local_4c) {
          return local_48;
        }
      } while( true );
    }
  }
  return -1;
}


//// FUNCTION FUN_009e98d0 @ 009e98d0 ////

void __fastcall FUN_009e98d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x297a4) + 0x150))
            (*(int **)(param_1 + 0x297a4),4,0,*(int *)(param_1 + 0x2978c),
             *(int *)(param_1 + 0x2978c) / 2,&DAT_01072228,0x65,param_1 + 0x4c,0x1c);
  *(undefined4 *)(param_1 + 0x2978c) = 0;
  return;
}


//// FUNCTION FUN_009e9920 @ 009e9920 ////

void __fastcall FUN_009e9920(int param_1)

{
  int *piVar1;
  
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x297a4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x297a4) = 0;
  }
  return;
}


//// FUNCTION FUN_009e9960 @ 009e9960 ////

void * __thiscall FUN_009e9960(void *this,byte param_1)

{
  int *piVar1;
  
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0x30));
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar1 = *(int **)((int)this + 0x297a4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x297a4) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009e99b0 @ 009e99b0 ////

void __cdecl FUN_009e99b0(float *param_1,float param_2,float param_3)

{
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(DAT_0105beb0,&local_8);
  *param_1 = (float)local_8.x * param_2;
  param_1[1] = (float)local_8.y * param_3;
  return;
}


//// FUNCTION FUN_009e9a10 @ 009e9a10 ////

void __cdecl FUN_009e9a10(float *param_1,float *param_2)

{
  float local_8;
  float local_4;
  
  local_8 = *param_2;
  local_4 = param_2[1];
  FUN_00412c90(&local_8);
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_009e9a80 @ 009e9a80 ////

void __thiscall FUN_009e9a80(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x29794) = param_1;
  *(undefined4 *)((int)this + 0x29798) = param_2;
  return;
}


//// FUNCTION FUN_009e9ab0 @ 009e9ab0 ////

void __thiscall FUN_009e9ab0(void *this,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)((int)this + 0x2978c) * 0x1c + 0x5c + (int)this) =
       *(undefined4 *)((int)this + 0x29790);
  *(undefined4 *)(*(int *)((int)this + 0x2978c) * 0x1c + 0x60 + (int)this) =
       *(undefined4 *)((int)this + 0x29794);
  *(undefined4 *)(*(int *)((int)this + 0x2978c) * 0x1c + 100 + (int)this) =
       *(undefined4 *)((int)this + 0x29798);
  iVar2 = *(int *)((int)this + 0x2978c) * 0x1c;
  fVar1 = *(float *)((int)this + 0x297a0);
  *(float *)(iVar2 + 0x4c + (int)this) = param_1 * *(float *)((int)this + 0x2979c);
  *(float *)(iVar2 + 0x50 + (int)this) = param_2 * fVar1;
  *(undefined4 *)((*(int *)((int)this + 0x2978c) + 3) * 0x1c + (int)this) = 0x3f000000;
  *(undefined4 *)(*(int *)((int)this + 0x2978c) * 0x1c + 0x58 + (int)this) = 0x3f000000;
  *(int *)((int)this + 0x2978c) = *(int *)((int)this + 0x2978c) + 1;
  return;
}


//// FUNCTION FUN_009e9b50 @ 009e9b50 ////

void __thiscall
FUN_009e9b50(void *this,float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  *(undefined4 *)((int)this + 0x29794) = param_5;
  *(undefined4 *)((int)this + 0x29798) = param_6;
  FUN_009e9ab0(this,param_1 - 0.5,param_2 - 0.5);
  *(undefined4 *)((int)this + 0x29798) = param_6;
  *(undefined4 *)((int)this + 0x29794) = param_7;
  FUN_009e9ab0(this,param_3 - 0.5,param_2 - 0.5);
  if (param_9 != '\0') {
    *(undefined4 *)((int)this + 0x29790) = 0xffffffff;
  }
  *(undefined4 *)((int)this + 0x29794) = param_7;
  *(undefined4 *)((int)this + 0x29798) = param_8;
  FUN_009e9ab0(this,param_3 - 0.5,param_4 - 0.5);
  *(undefined4 *)((int)this + 0x29794) = param_5;
  *(undefined4 *)((int)this + 0x29798) = param_8;
  FUN_009e9ab0(this,param_1 - 0.5,param_4 - 0.5);
  return;
}


//// FUNCTION LH_StudioCamera_UpdateAndRender @ 009e9c70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall LH_StudioCamera_UpdateAndRender(void *param_1)

{
  SHORT SVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float unaff_EBX;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int *piVar29;
  float fVar30;
  float fStack_35c;
  float *pfStack_358;
  float fStack_350;
  float *pfStack_34c;
  float *pfStack_344;
  int iStack_33c;
  float fStack_334;
  float fStack_330;
  int iStack_32c;
  tagPOINT tStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  uint uStack_2bc;
  float fStack_2b8;
  undefined4 uStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined4 uStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  float fStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_190;
  float fStack_188;
  float fStack_180;
  float fStack_178;
  float fStack_170;
  float fStack_168;
  float fStack_160;
  float fStack_158;
  float fStack_150;
  float fStack_148;
  float fStack_138;
  float fStack_130;
  float fStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_108;
  float fStack_100;
  float fStack_f8;
  float fStack_e8;
  float fStack_e0;
  float fStack_d8;
  float fStack_cc;
  float fStack_c0;
  float fStack_b8;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  float fStack_a4;
  void *pvStack_74;
  undefined4 uStack_6c;
  int aiStack_68 [3];
  undefined1 uStack_5c;
  uint uStack_58;
  int iStack_50;
  int local_24;
  int iStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8688;
  pvStack_c = ExceptionList;
                    /* // GraphicsDevice vtable call */
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0xc0))
            (*(int **)((int)param_1 + 0x297a4),&local_24);
  fVar9 = (float)local_24;
  if (local_24 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  *(float *)((int)param_1 + 0x2979c) = fVar9 * 0.00078125;
  fVar9 = (float)iStack_20;
  if (iStack_20 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  *(undefined1 *)param_1 = 0;
  *(float *)((int)param_1 + 0x297a0) = fVar9 * 0.0009765625;
  uStack_2bc = __control87(0,0);
  __control87(0x20000,0x30000);
  iVar10 = *(int *)((int)param_1 + 0x20);
  iVar14 = *(int *)((int)param_1 + 0x24) + 1;
  *(int *)((int)param_1 + 0x24) = iVar14;
  if ((iVar10 < 1) || (iVar14 <= *(int *)((int)param_1 + 4))) {
    if ((iVar10 != 0) && (iVar14 < *(int *)((int)param_1 + 4))) {
      *(int *)((int)param_1 + 4) = iVar14;
    }
  }
  else {
    *(int *)((int)param_1 + 0x20) = iVar10 + -1;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x21), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x1c) = *(float *)((int)param_1 + 0x1c) + 0.001;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x22), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x1c) = *(float *)((int)param_1 + 0x1c) - 0.001;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x25), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x3c) = *(float *)((int)param_1 + 0x3c) - 0.2;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x27), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x3c) = *(float *)((int)param_1 + 0x3c) + 0.2;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x26), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x40) = *(float *)((int)param_1 + 0x40) - 0.2;
  }
  pHVar2 = GetForegroundWindow();
  if ((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x28), SVar1 < 0)) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x40) = *(float *)((int)param_1 + 0x40) + 0.2;
  }
  if ((_DAT_010b6fc8 & 1) == 0) {
    _DAT_010b6fc8 = _DAT_010b6fc8 | 1;
  }
  fStack_314 = 1.0 / *(float *)((int)param_1 + 0x297a0);
  fVar9 = *(float *)((int)param_1 + 0x2979c);
  GetCursorPos(&tStack_320);
  ScreenToClient(DAT_0105beb0,&tStack_320);
  tStack_320.y = (LONG)((float)tStack_320.y * fStack_314);
  tStack_320.x = (LONG)((float)tStack_320.x * (1.0 / fVar9));
  pHVar2 = GetForegroundWindow();
  if (((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(4), SVar1 < 0)) ||
     ((pHVar2 = GetForegroundWindow(), pHVar2 == DAT_0105beb0 &&
      (SVar1 = GetAsyncKeyState(2), SVar1 < 0)))) {
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    *(float *)((int)param_1 + 0x1c) =
         ((float)tStack_320.x - _DAT_010b6fc0) * 0.0003 + *(float *)((int)param_1 + 0x1c);
  }
  _DAT_010b6fc0 = (float)tStack_320.x;
  _DAT_010b6fc4 = (float)tStack_320.y;
  pHVar2 = GetForegroundWindow();
  if (((pHVar2 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(1), SVar1 < 0)) ||
     (((pHVar2 = GetForegroundWindow(), pHVar2 == DAT_0105beb0 &&
       (SVar1 = GetAsyncKeyState(4), SVar1 < 0)) ||
      ((pHVar2 = GetForegroundWindow(), pHVar2 == DAT_0105beb0 &&
       (SVar1 = GetAsyncKeyState(2), SVar1 < 0)))))) {
    fStack_314 = 1.0 / *(float *)((int)param_1 + 0x297a0);
    *(undefined4 *)((int)param_1 + 0x20) = 100;
    fVar9 = *(float *)((int)param_1 + 0x2979c);
    GetCursorPos(&tStack_320);
    ScreenToClient(DAT_0105beb0,&tStack_320);
    *(float *)((int)param_1 + 0x3c) =
         ((float)tStack_320.x * (1.0 / fVar9) - *(float *)((int)param_1 + 0x34)) * 0.001 +
         *(float *)((int)param_1 + 0x3c);
    *(float *)((int)param_1 + 0x40) =
         ((float)tStack_320.y * fStack_314 - *(float *)((int)param_1 + 0x38)) * 0.001 +
         *(float *)((int)param_1 + 0x40);
  }
  iVar10 = *(int *)((int)param_1 + 0x24);
  if ((iVar10 < *(int *)((int)param_1 + 4)) && (*(int *)((int)param_1 + 0x20) == 0)) {
    fVar17 = (float10)fcos((float10)(iVar10 * 10) * (float10)0.002);
    *(float *)((int)param_1 + 0x3c) =
         (float)((fVar17 * (float10)180.144) / (float10)(iVar10 + 1000) +
                (float10)*(float *)((int)param_1 + 0x3c));
  }
  *(float *)((int)param_1 + 0x3c) = *(float *)((int)param_1 + 0x3c) * 0.96;
  *(float *)((int)param_1 + 0x40) = *(float *)((int)param_1 + 0x40) * 0.96;
  *(float *)((int)param_1 + 0x34) =
       *(float *)((int)param_1 + 0x3c) + *(float *)((int)param_1 + 0x34);
  *(float *)((int)param_1 + 0x38) =
       *(float *)((int)param_1 + 0x40) + *(float *)((int)param_1 + 0x38);
  fVar9 = *(float *)((int)param_1 + 0x1c) * 0.95;
  *(float *)((int)param_1 + 0x1c) = fVar9;
  if (*(int *)((int)param_1 + 0x20) == 0) {
    iVar10 = *(int *)((int)param_1 + 4);
    iVar14 = *(int *)((int)param_1 + 0x24);
    if ((iVar10 + 100 < iVar14) && (iVar14 < iVar10 + 0xe6)) {
      uVar3 = iVar14 - iVar10;
      if (((int)uVar3 < 1) || ((int)uVar3 < 100)) {
        fStack_2f4 = (float)(((int)uVar3 < 1) - 1 & uVar3);
      }
      else {
        fStack_2f4 = 1.4013e-43;
      }
      *(float *)((int)param_1 + 0x1c) = fVar9 - (float)(int)fStack_2f4 * 1.71e-05;
    }
  }
  fVar17 = (float10)*(float *)((int)param_1 + 0x18);
  if (fVar17 <= (float10)3.1415927) {
    if (fVar17 < (float10)-3.1415927) {
      fVar17 = fVar17 + (float10)6.2831855;
    }
  }
  else {
    fVar17 = fVar17 - (float10)6.2831855;
  }
  fVar17 = (float10)*(float *)((int)param_1 + 0x1c) - fVar17 * (float10)0.00013;
  *(float *)((int)param_1 + 0x1c) = (float)fVar17;
  fVar17 = ((float10)*(float *)((int)param_1 + 0x18) -
           (float10)*(float *)((int)param_1 + 0x3c) * (float10)0.001) + fVar17;
  *(float *)((int)param_1 + 0x18) = (float)fVar17;
  iVar10 = DAT_00e6862c;
  fVar18 = (float10)fcos(fVar17);
  fStack_310 = (float)fVar18;
  fVar17 = (float10)fsin(fVar17);
  fStack_2f8 = (float)fVar17;
  fStack_2b0 = -fStack_2f8;
  if ((((*(int *)((int)param_1 + 4) + -0x32 < *(int *)((int)param_1 + 0x24)) &&
       (*(int *)((int)param_1 + 0x24) < *(int *)((int)param_1 + 4) + 0x96)) &&
      (*(int *)((int)param_1 + 0x20) == 0)) && (0 < DAT_00e6862c)) {
    pfVar12 = (float *)&DAT_01076894;
    iVar14 = DAT_00e6862c;
    do {
      fStack_350 = (pfVar12[2] * 0.0025 + 0.5) * 0.5;
      fVar9 = (pfVar12[3] * 0.0025 + 0.5) * 0.55 - 0.05;
      if ((fStack_350 <= 0.01) || (fStack_350 < 0.49)) {
        if (fStack_350 <= 0.01) {
          fStack_350 = 0.01;
        }
      }
      else {
        fStack_350 = 0.49;
      }
      if ((fVar9 <= 0.01) || (fVar9 < 0.49)) {
        if (fVar9 <= 0.01) {
          fVar9 = 0.01;
        }
      }
      else {
        fVar9 = 0.49;
      }
      iVar14 = iVar14 + -1;
      *pfVar12 = (fStack_350 - *pfVar12) * 0.03 + *pfVar12;
      pfVar12[1] = (fVar9 - pfVar12[1]) * 0.03 + pfVar12[1];
      pfVar12 = pfVar12 + 10;
    } while (iVar14 != 0);
  }
  iVar14 = 0xff - (*(int *)((int)param_1 + 0x2c) * 0x200) / 0xff;
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  fStack_314 = (float)(iVar14 << 0x18 | 0xffffff);
  fStack_2f4 = 0.0;
  fStack_2ac = fStack_310;
  fStack_230 = fStack_310;
  fStack_22c = fStack_2f8;
  if (0 < DAT_00e68624) {
    do {
      if ((int)fStack_2f4 < 2) {
        puVar15 = &DAT_01071288;
        for (iVar10 = 1000; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        puVar15 = &DAT_01065e88;
        for (iVar10 = 0x2d00; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar15 = 0xffffffff;
          puVar15 = puVar15 + 1;
        }
        iVar14 = 0;
        iVar10 = (int)(DAT_00e6862c + (DAT_00e6862c >> 0x1f & 3U)) >> 2;
        iStack_32c = 0;
        if (0 < iVar10) {
          pfVar12 = (float *)&DAT_010768d4;
          do {
            fStack_2b8 = pfVar12[-0xb] + pfVar12[-0x15] + pfVar12[-1] + pfVar12[9];
            fStack_350 = (pfVar12[-10] + pfVar12[-0x14] + *pfVar12 + pfVar12[10]) * 0.25;
            tStack_320.x = (LONG)(fStack_2b8 * 0.25);
            fStack_298 = pfVar12[-0xb] - pfVar12[-0x15];
            unaff_EBX = (pfVar12[-10] - pfVar12[-0x14]) + (*pfVar12 - pfVar12[10]);
            fStack_2a0 = pfVar12[-1] - pfVar12[-0xb];
            fStack_334 = (*pfVar12 - pfVar12[-10]) + (pfVar12[10] - pfVar12[-0x14]) +
                         fStack_298 + (pfVar12[-1] - pfVar12[9]);
            fStack_330 = unaff_EBX - (fStack_2a0 + (pfVar12[9] - pfVar12[-0x15]));
            fVar9 = fStack_334 * fStack_334 + fStack_330 * fStack_330;
            if (fVar9 < 1.0) {
              fStack_2dc = 1.0;
              fVar9 = 1.0;
              fStack_2d8 = 0.0;
              fStack_334 = 1.0;
              fStack_330 = 0.0;
            }
            fStack_334 = fStack_334 * (_DAT_00e68628 / SQRT(fVar9));
            fStack_330 = (_DAT_00e68628 / SQRT(fVar9)) * fStack_330;
            *(LONG *)((int)&DAT_010b1200 + iVar14) = tStack_320.x;
            fStack_308 = -fStack_330;
            *(float *)((int)&DAT_010b1204 + iVar14) = fStack_350;
            *(float *)((int)&DAT_010b1208 + iVar14) = fStack_334;
            *(float *)((int)&DAT_010b120c + iVar14) = fStack_330;
            tStack_320.y = (LONG)fStack_350;
            fStack_304 = fStack_334;
            fStack_2ec = fStack_308;
            fStack_2e8 = fStack_334;
            uVar19 = FUN_00acd42c();
            uVar3 = (uint)uVar19 & ((int)(uint)uVar19 < 1) - 1;
            if (0x3e6 < (int)uVar3) {
              uVar3 = 999;
            }
            *(undefined4 *)((int)&DAT_010600c8 + iVar14) = (&DAT_01071288)[uVar3];
            (&DAT_01071288)[uVar3] = iStack_32c;
            uVar19 = FUN_00acd42c();
            iVar5 = (int)uVar19;
            uVar19 = FUN_00acd42c();
            iVar4 = (int)uVar19;
            *(int *)((int)&DAT_010600d0 + iVar14) = iVar5;
            *(int *)((int)&DAT_010600d4 + iVar14) = iVar4;
            if ((((-1 < iVar5) && (-1 < iVar4)) && (iVar5 < 0x80)) && (iVar4 < 0x5a)) {
              iVar5 = iVar4 * 0x80 + iVar5;
              *(undefined4 *)((int)&DAT_010600cc + iVar14) = (&DAT_01065e88)[iVar5];
              (&DAT_01065e88)[iVar5] = iStack_32c;
            }
            iVar14 = iVar14 + 0x10;
            fStack_2c8 = (fStack_350 - fStack_330) - fStack_304;
            fStack_2cc = ((float)tStack_320.x - fStack_334) - fStack_308;
            pfVar12[-0x15] = fStack_2cc;
            pfVar12[-0x14] = fStack_2c8;
            fStack_2e0 = (fStack_330 + fStack_350) - fStack_304;
            fStack_2e4 = ((float)tStack_320.x + fStack_334) - fStack_308;
            pfVar12[-0xb] = fStack_2e4;
            pfVar12[-10] = fStack_2e0;
            fStack_2d0 = fStack_330 + fStack_350 + fStack_304;
            fStack_2d4 = (float)tStack_320.x + fStack_334 + fStack_308;
            pfVar12[-1] = fStack_2d4;
            *pfVar12 = fStack_2d0;
            fStack_2c0 = (fStack_350 - fStack_330) + fStack_304;
            fStack_2c4 = ((float)tStack_320.x - fStack_334) + fStack_308;
            pfVar12[9] = fStack_2c4;
            pfVar12[10] = fStack_2c0;
            iStack_32c = iStack_32c + 1;
            pfVar12[-0xc] = pfVar12[-0xc] + 0.1;
            pfVar12 = pfVar12 + 0x28;
          } while (iStack_32c < iVar10);
        }
      }
      pfStack_358 = (float *)&DAT_01072224;
      do {
        iVar10 = DAT_00e6862c;
        for (fVar9 = *pfStack_358; DAT_00e6862c = iVar10, -1 < (int)fVar9;
            fVar9 = (float)(&DAT_010600c8)[(int)fVar9 * 4]) {
          uVar3 = (&DAT_010600d0)[(int)fVar9 * 4] - 1;
          uVar3 = ((int)uVar3 < 1) - 1 & uVar3;
          if (0x7f < (int)uVar3) {
            uVar3 = 0x80;
          }
          uVar11 = (&DAT_010600d0)[(int)fVar9 * 4] + 2;
          uVar11 = ((int)uVar11 < 1) - 1 & uVar11;
          if (0x7f < (int)uVar11) {
            uVar11 = 0x80;
          }
          uVar6 = (&DAT_010600d4)[(int)fVar9 * 4] - 1;
          uVar6 = ((int)uVar6 < 1) - 1 & uVar6;
          if (0x59 < (int)uVar6) {
            uVar6 = 0x5a;
          }
          uVar7 = (&DAT_010600d4)[(int)fVar9 * 4] + 2;
          uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
          if (0x59 < (int)uVar7) {
            uVar7 = 0x5a;
          }
          if ((((int)uVar3 < (int)uVar11) && ((int)uVar6 < (int)uVar7)) &&
             (iVar10 = uVar7 - 1, (int)uVar6 <= iVar10)) {
            fStack_318 = (float)(uVar11 - uVar3);
            pfStack_34c = (float *)(&DAT_01065e88 + iVar10 * 0x80 + uVar3);
            iStack_33c = (iVar10 - uVar6) + 1;
            do {
              pfStack_344 = pfStack_34c;
              fVar8 = fStack_318;
              do {
                for (fStack_350 = *pfStack_344; -1 < (int)fStack_350;
                    fStack_350 = (float)(&DAT_010600cc)[(int)fStack_350 * 4]) {
                  if (fStack_350 != fVar9) {
                    fStack_300 = (float)(&DAT_010b1204)[(int)fStack_350 * 4] -
                                 (float)(&DAT_010b1204)[(int)fVar9 * 4];
                    fVar24 = (float)(&DAT_010b1200)[(int)fStack_350 * 4] -
                             (float)(&DAT_010b1200)[(int)fVar9 * 4];
                    fStack_30c = fVar24 * fVar24 + fStack_300 * fStack_300;
                    if ((fStack_30c < _DAT_00e68640 * _DAT_00e68640) && (0.0 < fStack_30c)) {
                      fStack_2a8 = (float)(&DAT_01076880)[(int)fVar9 * 0x28] -
                                   (float)(&DAT_01076888)[(int)fVar9 * 0x28];
                      if (0.0 <= (((float)(&DAT_01076884)[(int)fVar9 * 0x28] -
                                  (float)(&DAT_0107688c)[(int)fVar9 * 0x28]) -
                                 ((float)(&DAT_01076884)[(int)fStack_350 * 0x28] -
                                 (float)(&DAT_0107688c)[(int)fStack_350 * 0x28])) * fStack_300 +
                                 fVar24 * (fStack_2a8 -
                                          ((float)(&DAT_01076880)[(int)fStack_350 * 0x28] -
                                          (float)(&DAT_01076888)[(int)fStack_350 * 0x28]))) {
                        fVar28 = SQRT(fStack_30c);
                        fVar20 = 1.0 / fVar28;
                        fVar24 = fVar24 * fVar20;
                        fVar20 = fVar20 * fStack_300;
                        fVar30 = ABS(fVar24 * (float)(&DAT_010b1208)[(int)fVar9 * 4] +
                                     fVar20 * (float)(&DAT_010b120c)[(int)fVar9 * 4]);
                        fVar27 = ABS(fVar24 * (float)(&DAT_010b120c)[(int)fVar9 * 4] -
                                     fVar20 * (float)(&DAT_010b1208)[(int)fVar9 * 4]);
                        if (fVar30 <= fVar27) {
                          fVar30 = fVar27;
                        }
                        fStack_30c = _DAT_00e6863c * _DAT_00e68628;
                        fVar27 = ABS(fVar24 * (float)(&DAT_010b1208)[(int)fStack_350 * 4] +
                                     fVar20 * (float)(&DAT_010b120c)[(int)fStack_350 * 4]);
                        fStack_300 = ABS(fVar24 * (float)(&DAT_010b120c)[(int)fStack_350 * 4] -
                                         fVar20 * (float)(&DAT_010b1208)[(int)fStack_350 * 4]);
                        if (fVar27 <= fStack_300) {
                          fVar27 = fStack_300;
                        }
                        fVar28 = (fStack_30c / fVar27 + fStack_30c / fVar30) - fVar28;
                        if (0.0 < fVar28) {
                          fVar28 = fVar28 * 0.25;
                          fVar24 = fVar24 * fVar28;
                          fVar28 = fVar28 * fVar20;
                          (&DAT_010b1200)[(int)fVar9 * 4] =
                               (float)(&DAT_010b1200)[(int)fVar9 * 4] - fVar24;
                          (&DAT_010b1204)[(int)fVar9 * 4] =
                               (float)(&DAT_010b1204)[(int)fVar9 * 4] - fVar28;
                          (&DAT_010b1200)[(int)fStack_350 * 4] =
                               fVar24 + (float)(&DAT_010b1200)[(int)fStack_350 * 4];
                          (&DAT_010b1204)[(int)fStack_350 * 4] =
                               fVar28 + (float)(&DAT_010b1204)[(int)fStack_350 * 4];
                          if ((1.0 <= (float)(&DAT_010768a4)[(int)fVar9 * 0x28]) &&
                             (200.0 <= (float)(&DAT_01076884)[(int)fVar9 * 0x28])) {
                            *(float *)((int)param_1 + 0x48) = *(float *)((int)param_1 + 0x48) + 1.0;
                          }
                          if ((1.0 <= (float)(&DAT_010768a4)[(int)fStack_350 * 0x28]) &&
                             (200.0 < (float)(&DAT_01076884)[(int)fStack_350 * 0x28])) {
                            *(float *)((int)param_1 + 0x48) = *(float *)((int)param_1 + 0x48) + 1.0;
                          }
                          (&DAT_010768a4)[(int)fVar9 * 0x28] = 0;
                          (&DAT_010768a4)[(int)fStack_350 * 0x28] = 0;
                          iVar10 = 4;
                          pfVar12 = (float *)(&DAT_01076880 + (int)fVar9 * 0x28);
                          pfVar13 = (float *)(&DAT_01076880 + (int)fStack_350 * 0x28);
                          do {
                            iVar10 = iVar10 + -1;
                            *pfVar12 = *pfVar12 - fVar24;
                            pfVar12[1] = pfVar12[1] - fVar28;
                            *pfVar13 = fVar24 + *pfVar13;
                            pfVar13[1] = fVar28 + pfVar13[1];
                            pfVar12 = pfVar12 + 10;
                            pfVar13 = pfVar13 + 10;
                          } while (iVar10 != 0);
                        }
                      }
                    }
                  }
                }
                pfStack_344 = pfStack_344 + 1;
                fVar8 = (float)((int)fVar8 + -1);
              } while (fVar8 != 0.0);
              pfStack_34c = pfStack_34c + -0x80;
              iStack_33c = iStack_33c + -1;
              unaff_EBX = 0.0;
            } while (iStack_33c != 0);
          }
          iVar10 = DAT_00e6862c;
        }
        pfStack_358 = pfStack_358 + -1;
      } while (0x1071287 < (int)pfStack_358);
      fStack_2f4 = (float)((int)fStack_2f4 + 1);
    } while ((int)fStack_2f4 < DAT_00e68624);
  }
  uVar3 = 0;
  if (0 < iVar10) {
    pfVar12 = (float *)&DAT_01076884;
    do {
      fStack_334 = pfVar12[-1];
      fVar9 = *pfVar12;
      pfVar12[3] = fStack_314;
      iVar10 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 3U)) >> 2;
      fVar8 = (pfVar12[-1] - pfVar12[1]) + pfVar12[-1];
      pfVar12[-1] = fVar8;
      fVar24 = (*pfVar12 - pfVar12[2]) + 0.3 + *pfVar12;
      *pfVar12 = fVar24;
      fVar24 = fVar24 - pfVar12[2];
      fVar8 = fVar8 - pfVar12[1];
      fStack_318 = fVar8 * fVar8 + fVar24 * fVar24;
      if (576.0 < fStack_318) {
        fVar27 = 1.0 / (SQRT(fStack_318) * 0.041666668);
        fStack_2c0 = fVar27 * fVar24 + pfVar12[2];
        fStack_2c4 = fVar27 * fVar8 + pfVar12[1];
        pfVar12[-1] = fStack_2c4;
        *pfVar12 = fStack_2c0;
      }
      fVar8 = *pfVar12 - *(float *)((int)param_1 + 0x38);
      fVar24 = pfVar12[-1] - *(float *)((int)param_1 + 0x34);
      fStack_2d0 = fVar8 * fStack_310 + fVar24 * fStack_2b0;
      fStack_2d4 = fVar8 * fStack_2f8 + fVar24 * fStack_310;
      fVar8 = fVar9 - *(float *)((int)param_1 + 0x38);
      fVar24 = fStack_334 - *(float *)((int)param_1 + 0x34);
      fStack_304 = fVar8 * fStack_310 + fVar24 * fStack_2b0;
      fStack_308 = fVar8 * fStack_2f8 + fVar24 * fStack_310;
      bVar16 = false;
      unaff_EBX = fStack_2d4;
      fStack_35c = fStack_2d0;
      if (*(float *)((int)param_1 + 0x28) < 20.0) {
        if (((ABS((float)(&DAT_0107689c)[iVar10 * 0x28]) < 203.0 ==
              (ABS((float)(&DAT_0107689c)[iVar10 * 0x28]) == 203.0)) ||
            ((float)(&DAT_010768a0)[iVar10 * 0x28] < 203.0 ==
             ((float)(&DAT_010768a0)[iVar10 * 0x28] == 203.0))) ||
           ((float)(&DAT_010768a0)[iVar10 * 0x28] < -212.0)) {
          if (((210.0 <= fStack_2d0) || (fStack_2d0 <= -210.0)) ||
             ((-200.0 < fStack_2d4 && (fStack_2d4 < 200.0)))) goto LAB_009eb011;
          if ((-200.0 <= fStack_2d4) || (fStack_2d4 <= -210.0)) {
            if (-200.0 <= fStack_2d0) {
LAB_009eae08:
              if ((fStack_2d4 <= 200.0) || (210.0 <= fStack_2d4)) {
                if ((fStack_2d0 <= 200.0) || (210.0 <= ABS(fStack_2d4))) goto LAB_009eb011;
                fStack_35c = 210.0;
                bVar16 = true;
              }
              else {
                bVar16 = true;
                unaff_EBX = 210.0;
              }
            }
            else if ((fStack_2d4 <= 200.0) || (210.0 <= fStack_2d4)) {
              if ((-200.0 <= fStack_2d4) || (fStack_2d4 <= -210.0)) goto LAB_009eae08;
              fStack_35c = -210.0;
              bVar16 = true;
            }
            else {
              fStack_35c = -210.0;
              bVar16 = true;
            }
          }
          else {
            bVar16 = true;
            unaff_EBX = -210.0;
          }
        }
        else {
          if (200.0 < fStack_2d0) {
            fStack_35c = 200.0;
          }
          bVar16 = 200.0 < fStack_2d0;
          if (fStack_2d4 <= 200.0) {
            if (-200.0 <= fStack_2d4) {
              if (fStack_2d0 <= 200.0) goto LAB_009eb011;
            }
            else {
              bVar16 = true;
              unaff_EBX = -200.0;
            }
          }
          else {
            bVar16 = true;
            unaff_EBX = 200.0;
          }
        }
        fVar8 = fVar9 - *pfVar12;
        fVar24 = fStack_334 - pfVar12[-1];
        fStack_2c8 = fStack_35c * fStack_310;
        fStack_2cc = fStack_35c * fStack_2b0;
        fStack_2e8 = unaff_EBX * fStack_2f8;
        fStack_2ec = unaff_EBX * fStack_310;
        tStack_320.y = (LONG)(fStack_2c8 + fStack_2e8 + *(float *)((int)param_1 + 0x38));
        tStack_320.x = (LONG)(fStack_2cc + fStack_2ec + *(float *)((int)param_1 + 0x34));
        fStack_2f0 = fStack_304 * fStack_310;
        fStack_2f4 = fStack_304 * fStack_2b0;
        pfStack_34c = (float *)(fStack_308 * fStack_310);
        fStack_2b8 = (float)pfStack_34c + *(float *)((int)param_1 + 0x34);
        fVar9 = fStack_308 * fStack_2f8 + *(float *)((int)param_1 + 0x38) + fStack_2f0;
        fStack_334 = fStack_2f4 + fStack_2b8;
        pfVar12[-1] = (float)tStack_320.x;
        *pfVar12 = (float)tStack_320.y;
        *(float *)((int)param_1 + 0x1c) =
             *(float *)((int)param_1 + 0x1c) -
             ((fVar8 - (fVar9 - (float)tStack_320.y)) *
              (pfVar12[-1] - *(float *)((int)param_1 + 0x34)) -
             (*pfVar12 - *(float *)((int)param_1 + 0x38)) *
             (fVar24 - (fStack_334 - (float)tStack_320.x))) * 1.3e-09;
        fStack_300 = fStack_334;
        fStack_2fc = fVar9;
        fStack_2dc = fStack_2ec;
        fStack_2d8 = fStack_2e8;
      }
LAB_009eb011:
      if ((*pfVar12 <= 850.0) || (*(float *)((int)param_1 + 0x28) != 0.0)) {
        if (bVar16) goto LAB_009eb052;
      }
      else {
        *pfVar12 = 850.0;
        fStack_334 = (fStack_334 - pfVar12[-1]) * 0.4 + pfVar12[-1];
LAB_009eb052:
        uVar11 = uVar3 & 0x80000003;
        bVar16 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar16 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (bVar16) {
          if (1.0 <= pfVar12[8]) {
            *(float *)((int)param_1 + 0x48) = *(float *)((int)param_1 + 0x48) + 1.0;
          }
          pfVar12[8] = 0.0;
        }
      }
      pfVar12[1] = fStack_334;
      pfVar12[7] = fStack_35c;
      iVar10 = DAT_00e6862c;
      pfVar12[2] = fVar9;
      pfVar12[6] = unaff_EBX;
      uVar3 = uVar3 + 1;
      pfVar12 = pfVar12 + 10;
      fStack_2e4 = fStack_308;
      fStack_2e0 = fStack_304;
    } while ((int)uVar3 < iVar10);
  }
  (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x170))(*(int **)((int)param_1 + 0x297a4),0);
  (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x164))(*(int **)((int)param_1 + 0x297a4),0x144)
  ;
  piVar29 = *(int **)((int)param_1 + 0x297a4);
  (**(code **)(*piVar29 + 0x1ac))(piVar29,0);
  FUN_009910f0(aiStack_68);
  uStack_58 = uStack_58 & 0x3dffffff | 0x2000000;
  local_24 = 0;
  uStack_5c = 6;
  if (iStack_50 != *(int *)((int)param_1 + 0x30)) {
    Engine_SetResourceReference(aiStack_68,*(int *)((int)param_1 + 0x30));
  }
  LH_ApplyMeshMaterial(aiStack_68);
  *(undefined4 *)((int)param_1 + 0x29790) = 0xffffffff;
  FUN_009e9b50(param_1,0.0,0.0,1280.0,1024.0,0x3f400000,0,0x3f400000,0x3f800000,'\0');
  fVar8 = *(float *)((int)param_1 + 0x2978c);
  fVar9 = (float)((int)fVar8 / 2);
  fVar28 = 0.0;
  fVar27 = 5.60519e-45;
  (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x150))(*(int **)((int)param_1 + 0x297a4));
  *(undefined4 *)((int)param_1 + 0x2978c) = 0;
  fVar24 = _DAT_00e68644 * *(float *)((int)param_1 + 0x48);
  *(float *)((int)param_1 + 0x48) = fVar24;
  if (1.0 < fVar24) {
    *(undefined4 *)((int)param_1 + 0x48) = 0x3f800000;
  }
  if ((-1 < DAT_00e6861c) && (0x32 < *(int *)((int)param_1 + 0x24))) {
    FUN_009b10a0(DAT_00e6861c,*(float *)((int)param_1 + 0x48) * 0.7);
  }
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  if ((*(int *)((int)param_1 + 4) + 0x15e < *(int *)((int)param_1 + 0x24)) &&
     (*(int *)((int)param_1 + 0x20) == 0)) {
    if (*(int *)((int)param_1 + 0x2c) < 0xff) {
      *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 1;
    }
    if (0 < *(int *)((int)param_1 + 0x2c)) {
      if (*(float *)((int)param_1 + 0x28) == 0.0) {
        *(undefined1 *)param_1 = 1;
      }
      *(float *)((int)param_1 + 0x28) = *(float *)((int)param_1 + 0x28) + 1.05;
    }
  }
  iVar10 = 0;
  if ((*(char *)((int)param_1 + 0x44) != '\0') != 0xffffffff) {
    uStack_214 = 0x3ba0c49c;
    uStack_210 = 0x3ba0c49c;
    uStack_1f4 = 0x3b800000;
    uStack_1f0 = 0x3ba0c49c;
    uStack_2b4 = 0x3ba0c49c;
    fStack_2b0 = 0.00390625;
    uStack_2a4 = 0x3b800000;
    fStack_2a0 = 0.00390625;
    uStack_294 = 0x3ba0c49c;
    uStack_290 = 0x3ba0c49c;
    fStack_284 = 0.00390625;
    fStack_280 = 0.00490625;
    fStack_274 = 0.00490625;
    fStack_270 = 0.00390625;
    uStack_20c = 0;
    uStack_208 = 0x3f008000;
    uStack_2bc = 0x3f100000;
    fStack_2b8 = 0.5019531;
    uStack_29c = 0x3f100000;
    fStack_298 = 0.75;
    fStack_27c = 0.0;
    fStack_278 = 0.75;
    fStack_2cc = 0.00390625;
    fStack_2c8 = 0.00390625;
    fStack_244 = 0.00490625;
    fStack_240 = 0.00490625;
    fStack_2e4 = 0.00390625;
    fStack_2e0 = 0.00490625;
    fStack_2d4 = 0.00490625;
    fStack_2d0 = 0.00390625;
    do {
      if (*(char *)((int)param_1 + 0x44) != '\0') {
        uStack_1ec = 0;
        fStack_1e8 = 0.0;
        uVar19 = FUN_00acd42c();
        uStack_1e4 = (undefined4)uVar19;
        uVar19 = FUN_00acd42c();
        fStack_1e0 = (float)uVar19;
        if (iVar10 != 0) {
          fStack_1e8 = fStack_1e0;
          uVar19 = FUN_00acd42c();
          fStack_1e0 = (float)uVar19;
        }
        (**(code **)(**(int **)((int)param_1 + 0x297a4) + 300))
                  (*(int **)((int)param_1 + 0x297a4),&uStack_1ec);
        (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0xe4))
                  (*(int **)((int)param_1 + 0x297a4),0xae,1);
      }
      fVar24 = *(float *)((int)param_1 + 0x34);
      *(uint *)((int)param_1 + 0x29790) = *(int *)((int)param_1 + 0x2c) << 0x18 | 0xffffff;
      fVar26 = *(float *)((int)param_1 + 0x38);
      fVar30 = 200.0;
      fVar20 = fStack_26c;
      fVar21 = fStack_268;
      fVar25 = fStack_2ec;
      fVar23 = fStack_2e8;
      if (0.0 < *(float *)((int)param_1 + 0x28)) {
        fVar17 = (float10)*(float *)((int)param_1 + 0x28) * (float10)0.003921569;
        if ((float10)1.0 < fVar17) {
          fVar17 = (float10)1.0;
        }
        fVar17 = (float10)fcos(fVar17 * (float10)3.1415927);
        fVar17 = (float10)0.5 - fVar17 * (float10)0.5;
        fVar24 = (float)(fVar17 * ((float10)640.0 - (float10)*(float *)((int)param_1 + 0x34)) +
                        (float10)fVar24);
        fVar26 = fVar26 + (float)(fVar17 * ((float10)312.0 -
                                           (float10)*(float *)((int)param_1 + 0x38)));
        fVar9 = (float)(fVar17 * -(float10)fStack_334);
        fVar20 = (float)((float10)fStack_26c + fVar17 * ((float10)1.0 - (float10)(float)pfStack_34c)
                        );
        fVar21 = fStack_268 + fVar9;
        if ((fVar20 != 0.0) || (fVar21 != 0.0)) {
          fVar30 = 1.0 / SQRT(fVar20 * fVar20 + fVar21 * fVar21);
          fVar20 = fVar20 * fVar30;
          fVar21 = fVar21 * fVar30;
        }
        fVar25 = -fVar21;
        fVar30 = (float)(fVar17 * (float10)40.0 + (float10)200.0);
        fVar23 = fVar20;
        fStack_300 = fVar25;
        fStack_2fc = fVar20;
      }
      if (0 < *(int *)((int)param_1 + 0x2c)) {
        piVar29 = (int *)(-fVar30 - 10.0);
        fStack_19c = fVar20 * (float)piVar29;
        fStack_a4 = fStack_19c + fVar24;
        fStack_30c = fVar26 + fVar21 * (float)piVar29 + fVar23 * (float)piVar29;
        fStack_310 = fStack_a4 + (float)piVar29 * fVar25;
        fVar9 = fStack_30c;
        if (iVar10 != 0) {
          fVar9 = 1275.0 - fStack_30c * 0.5;
        }
        tStack_320.x = 0;
        *(undefined4 *)((int)param_1 + 0x29794) = 0;
        tStack_320.y = 0;
        *(undefined4 *)((int)param_1 + 0x29798) = 0;
        FUN_009e9ab0(param_1,fStack_310,fVar9);
        fVar30 = fVar30 + 10.0;
        fStack_1cc = fVar20 * fVar30;
        fStack_ac = fStack_1cc * 10.0 * 0.125 + fVar24;
        fStack_304 = fVar26 + fVar21 * fVar30 * 10.0 * 0.125 + fVar23 * (float)piVar29;
        fStack_308 = fStack_ac + (float)piVar29 * fVar25;
        fVar9 = fStack_304;
        if (iVar10 != 0) {
          fVar9 = 1275.0 - fStack_304 * 0.5;
        }
        *(undefined4 *)((int)param_1 + 0x29794) = 0x3f100000;
        *(undefined4 *)((int)param_1 + 0x29798) = 0;
        FUN_009e9ab0(param_1,fStack_308,fVar9);
        fStack_1bc = fVar20 * fVar30;
        fStack_11c = fStack_1bc * 10.0 * 0.125 + fVar24;
        fStack_314 = fVar26 + fVar21 * fVar30 * 10.0 * 0.125 + fVar23 * fVar30;
        fStack_318 = fStack_11c + fVar30 * fVar25;
        fVar9 = fStack_314;
        if (iVar10 != 0) {
          fVar9 = 1275.0 - fStack_314 * 0.5;
        }
        fStack_35c = 0.5625;
        *(undefined4 *)((int)param_1 + 0x29794) = 0x3f100000;
        *(undefined4 *)((int)param_1 + 0x29798) = 0x3eff0000;
        FUN_009e9ab0(param_1,fStack_318,fVar9);
        fVar9 = fVar23 * fVar30;
        fStack_1ac = fVar20 * (float)piVar29;
        fStack_cc = fStack_1ac + fVar24;
        fVar24 = fVar26 + fVar21 * (float)piVar29 + fVar9;
        if (iVar10 != 0) {
          fVar24 = 1275.0 - fVar24 * 0.5;
        }
        *(undefined4 *)((int)param_1 + 0x29794) = 0;
        unaff_EBX = 0.49804688;
        *(undefined4 *)((int)param_1 + 0x29798) = 0x3eff0000;
        FUN_009e9ab0(param_1,fStack_cc + fVar30 * fVar25,fVar24);
      }
      iVar14 = 0;
      if (iVar10 == 0) {
        if (0 < DAT_00e6862c) {
          pfVar12 = (float *)((int)param_1 + 0x74c);
          pfVar13 = (float *)&DAT_01076894;
          do {
            iVar14 = iVar14 + 1;
            *pfVar12 = pfVar13[-5] * *(float *)((int)param_1 + 0x2979c);
            fVar24 = pfVar13[-4];
            fVar20 = *(float *)((int)param_1 + 0x297a0);
            pfVar12[4] = fStack_350;
            pfVar12[1] = fVar24 * fVar20;
            pfVar12[5] = *pfVar13;
            pfVar12[6] = pfVar13[1];
            pfVar12[2] = 0.5;
            pfVar12[3] = 0.5;
            pfVar12 = pfVar12 + 7;
            pfVar13 = pfVar13 + 10;
          } while (iVar14 < DAT_00e6862c);
        }
      }
      else if (0 < DAT_00e6862c) {
        pfVar13 = (float *)&DAT_01076884;
        pfVar12 = (float *)((int)param_1 + 0x750);
        do {
          fVar24 = *pfVar13;
          pfVar13 = pfVar13 + 10;
          iVar14 = iVar14 + 1;
          *pfVar12 = (1275.0 - fVar24 * 0.5) * *(float *)((int)param_1 + 0x297a0);
          pfVar12 = pfVar12 + 7;
        } while (iVar14 < DAT_00e6862c);
      }
      fVar25 = 3.92364e-44;
      fVar24 = (float)((int)param_1 + 0x74c);
      (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x150))
                (*(int **)((int)param_1 + 0x297a4),4,0,DAT_00e6862c,DAT_00e6862c / 2,&DAT_01072228,
                 0x65);
      fVar20 = -(float)piVar29;
      fVar30 = fVar20 - 9.0;
      *(float *)((int)param_1 + 0x29794) = unaff_EBX;
      *(undefined4 *)((int)param_1 + 0x29790) = 0xffffffff;
      *(float *)((int)param_1 + 0x29798) = fStack_35c;
      fVar26 = fVar20 - 10.0;
      fStack_200 = fVar24 * fVar26;
      fStack_130 = fStack_200 + fVar27;
      fStack_244 = fVar28 + fVar25 * fVar26 + fVar9 * fVar30;
      fStack_248 = fStack_130 + fVar30 * fVar8;
      fVar21 = fStack_244;
      if (iVar10 != 0) {
        fVar21 = 1275.0 - fStack_244 * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_248,fVar21);
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_234;
      *(undefined4 *)((int)param_1 + 0x29794) = uStack_238;
      fStack_1b0 = fVar24 * fVar20;
      fStack_b8 = fStack_1b0 + fVar27;
      fStack_224 = fVar28 + fVar25 * fVar20 + fVar9 * fVar30;
      fStack_228 = fStack_b8 + fVar30 * fVar8;
      fVar21 = fStack_224;
      if (iVar10 != 0) {
        fVar21 = 1275.0 - fStack_224 * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_228,fVar21);
      fVar21 = (float)piVar29 + 10.0;
      *(undefined4 *)((int)param_1 + 0x29794) = uStack_218;
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_214;
      fStack_1a0 = fVar24 * fVar20;
      fStack_120 = fStack_1a0 + fVar27;
      fStack_26c = fVar28 + fVar25 * fVar20 + fVar9 * fVar21;
      fStack_270 = fStack_120 + fVar21 * fVar8;
      fVar20 = fStack_26c;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_26c * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_270,fVar20);
      *(float *)((int)param_1 + 0x29798) = fStack_2d4;
      *(float *)((int)param_1 + 0x29794) = fStack_2d8;
      fStack_190 = fVar24 * fVar26;
      fStack_e0 = fStack_190 + fVar27;
      fStack_274 = fVar28 + fVar25 * fVar26 + fVar9 * fVar21;
      fStack_278 = fStack_e0 + fVar21 * fVar8;
      fVar20 = fStack_274;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_274 * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_278,fVar20);
      fVar20 = fVar9 * (float)piVar29;
      *(float *)((int)param_1 + 0x29794) = fStack_2c8;
      *(float *)((int)param_1 + 0x29798) = fStack_2c4;
      fVar23 = (float)piVar29 * fVar8;
      fStack_180 = fVar24 * fVar26;
      fStack_110 = fStack_180 + fVar27;
      fStack_23c = fVar28 + fVar25 * fVar26 + fVar20;
      fStack_240 = fStack_110 + fVar23;
      fVar22 = fStack_23c;
      if (iVar10 != 0) {
        fVar22 = 1275.0 - fStack_23c * 0.5;
      }
      fStack_170 = fVar23;
      FUN_009e9ab0(param_1,fStack_240,fVar22);
      fStack_c0 = fVar24 * fVar21;
      *(float *)((int)param_1 + 0x29794) = fStack_2b8;
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_2b4;
      fStack_160 = fStack_c0 + fVar27;
      fStack_25c = fVar28 + fVar25 * fVar21 + fVar20;
      fStack_260 = fStack_160 + fVar23;
      fVar20 = fStack_25c;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_25c * 0.5;
      }
      fStack_100 = fVar23;
      FUN_009e9ab0(param_1,fStack_260,fVar20);
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_2a4;
      *(float *)((int)param_1 + 0x29794) = fStack_2a8;
      fStack_150 = fVar24 * fVar21;
      fStack_1f8 = fStack_150 + fVar27;
      fStack_21c = fVar28 + fVar25 * fVar21 + fVar9 * fVar21;
      fStack_220 = fStack_1f8 + fVar21 * fVar8;
      fVar20 = fStack_21c;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_21c * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_220,fVar20);
      *(float *)((int)param_1 + 0x29794) = fStack_298;
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_294;
      fStack_1e8 = fVar24 * fVar26;
      fStack_1d8 = fStack_1e8 + fVar27;
      fStack_24c = fVar28 + fVar25 * fVar26 + fVar9 * fVar21;
      fStack_250 = fStack_1d8 + fVar21 * fVar8;
      fVar20 = fStack_24c;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_24c * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_250,fVar20);
      fStack_1c8 = fVar24 * fVar26;
      fStack_1b8 = fStack_1c8 + fVar27;
      fStack_284 = fVar28 + fVar25 * fVar26 + fVar9 * fVar21;
      fStack_288 = fStack_1b8 + fVar21 * fVar8;
      fVar20 = fStack_284;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_284 * 0.5;
      }
      *(float *)((int)param_1 + 0x29794) = fStack_230;
      *(float *)((int)param_1 + 0x29798) = fStack_22c;
      FUN_009e9ab0(param_1,fStack_288,fVar20);
      fStack_1a8 = fVar24 * fVar21;
      fStack_198 = fStack_1a8 * 10.0 * 0.125 + fVar27;
      fStack_2e4 = fVar28 + fVar25 * fVar21 * 10.0 * 0.125 + fVar9 * fVar21;
      fStack_2e8 = fStack_198 + fVar21 * fVar8;
      fVar20 = fStack_2e4;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_2e4 * 0.5;
      }
      *(float *)((int)param_1 + 0x29794) = fStack_2e0;
      *(float *)((int)param_1 + 0x29798) = fStack_2dc;
      FUN_009e9ab0(param_1,fStack_2e8,fVar20);
      fVar20 = (float)piVar29 + (float)piVar29 + 10.0;
      fStack_188 = fVar24 * fVar21;
      fStack_178 = fStack_188 * 10.0 * 0.125 + fVar27;
      fStack_2cc = fVar28 + fVar25 * fVar21 * 10.0 * 0.125 + fVar9 * fVar20;
      fStack_2d0 = fStack_178 + fVar20 * fVar8;
      fVar23 = fStack_2cc;
      if (iVar10 != 0) {
        fVar23 = 1275.0 - fStack_2cc * 0.5;
      }
      *(float *)((int)param_1 + 0x29794) = fStack_2c0;
      *(uint *)((int)param_1 + 0x29798) = uStack_2bc;
      FUN_009e9ab0(param_1,fStack_2d0,fVar23);
      fStack_168 = fVar24 * fVar26;
      fStack_158 = fStack_168 + fVar27;
      fStack_2ac = fVar28 + fVar25 * fVar26 + fVar9 * fVar20;
      fStack_2b0 = fStack_158 + fVar20 * fVar8;
      fVar20 = fStack_2ac;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_2ac * 0.5;
      }
      *(float *)((int)param_1 + 0x29794) = fStack_2a0;
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_29c;
      FUN_009e9ab0(param_1,fStack_2b0,fVar20);
      *(float *)((int)param_1 + 0x29798) = fStack_2ec;
      *(float *)((int)param_1 + 0x29794) = fStack_2f0;
      fStack_148 = fVar24 * (float)piVar29;
      fStack_138 = fStack_148 + fVar27;
      fStack_27c = fVar28 + fVar25 * (float)piVar29 + fVar9 * fVar30;
      fStack_280 = fStack_138 + fVar30 * fVar8;
      fVar20 = fStack_27c;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_27c * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_280,fVar20);
      *(float *)((int)param_1 + 0x29794) = fStack_268;
      *(undefined4 *)((int)param_1 + 0x29798) = uStack_264;
      fStack_128 = fVar24 * fVar21;
      fStack_118 = fStack_128 + fVar27;
      fStack_254 = fVar28 + fVar25 * fVar21 + fVar9 * fVar30;
      fStack_258 = fStack_118 + fVar30 * fVar8;
      fVar20 = fStack_254;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_254 * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_258,fVar20);
      *(float *)((int)param_1 + 0x29798) = fStack_304;
      *(float *)((int)param_1 + 0x29794) = fStack_308;
      fStack_108 = fVar24 * fVar21;
      fStack_f8 = fStack_108 + fVar27;
      fStack_2fc = fVar28 + fVar25 * fVar21 + fVar9 * fVar21;
      fStack_300 = fStack_f8 + fVar21 * fVar8;
      fVar20 = fStack_2fc;
      if (iVar10 != 0) {
        fVar20 = 1275.0 - fStack_2fc * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_300,fVar20);
      *(float *)((int)param_1 + 0x29794) = fStack_2f8;
      *(float *)((int)param_1 + 0x29798) = fStack_2f4;
      fStack_e8 = fVar24 * (float)piVar29;
      fStack_d8 = fStack_e8 + fVar27;
      fStack_314 = fVar28 + fVar25 * (float)piVar29 + fVar9 * fVar21;
      fStack_318 = fStack_d8 + fVar21 * fVar8;
      fVar24 = fStack_314;
      if (iVar10 != 0) {
        fVar24 = 1275.0 - fStack_314 * 0.5;
      }
      FUN_009e9ab0(param_1,fStack_318,fVar24);
      (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x150))
                (*(int **)((int)param_1 + 0x297a4),4,0,*(int *)((int)param_1 + 0x2978c),
                 *(int *)((int)param_1 + 0x2978c) / 2,&DAT_01072228,0x65,(int)param_1 + 0x4c,0x1c);
      *(undefined4 *)((int)param_1 + 0x2978c) = 0;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)((*(char *)((int)param_1 + 0x44) != '\0') + 1));
  }
  *(undefined4 *)((int)param_1 + 0x29790) = 0x50ffffff;
  FUN_009e9b50(param_1,0.0,0.0,1280.0,1024.0,0x3f400000,0,0x3f400000,0x3f800000,'\x01');
  (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0x150))
            (*(int **)((int)param_1 + 0x297a4),4,0,*(int *)((int)param_1 + 0x2978c),
             *(int *)((int)param_1 + 0x2978c) / 2,&DAT_01072228,0x65,(int)param_1 + 0x4c,0x1c);
  *(undefined4 *)((int)param_1 + 0x2978c) = 0;
  if (*(char *)((int)param_1 + 0x44) != '\0') {
    (**(code **)(**(int **)((int)param_1 + 0x297a4) + 0xe4))
              (*(int **)((int)param_1 + 0x297a4),0xae,0);
  }
  __control87(tStack_320.y,0xfffff);
  uStack_6c = 0xffffffff;
  FUN_00990ec0((int)auStack_b0);
  ExceptionList = pvStack_74;
  return;
}


//// FUNCTION FUN_009ec720 @ 009ec720 ////

undefined4 FUN_009ec720(void)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  int *piVar4;
  void *_Memory;
  SHORT SVar5;
  HWND pHVar6;
  undefined2 extraout_var;
  int iVar7;
  tagPOINT local_10;
  float local_8;
  float local_4;
  
  DAT_0105c430 = (float)DAT_010c9d28;
  DAT_0105c434 = (float)DAT_010c9d2c;
  local_10.x = (LONG)DAT_0105c430;
  local_10.y = (LONG)DAT_0105c434;
  GetCursorPos(&local_10);
  ScreenToClient(DAT_0105beb0,&local_10);
  local_8 = (float)local_10.x;
  local_4 = (float)local_10.y;
  FUN_009abae0(&local_8);
  FUN_009abb50(0 < *(int *)((int)DAT_010600c0 + 0x20));
  DAT_01076878 = DAT_01076878 + 0x10;
  if ((-2 < DAT_00e68634) && (255.0 < *(float *)((int)DAT_010600c0 + 0x28))) {
    FUN_009b10a0(DAT_00e68634,1.0 - (*(float *)((int)DAT_010600c0 + 0x28) - 255.0) * 0.0068965517);
  }
  pHVar6 = GetForegroundWindow();
  if ((pHVar6 != DAT_0105beb0) || (SVar5 = GetAsyncKeyState(0x1b), -1 < SVar5)) {
    pHVar6 = GetForegroundWindow();
    if (pHVar6 == DAT_0105beb0) {
      SVar5 = GetAsyncKeyState(0x20);
      pHVar6 = (HWND)CONCAT31((int3)(CONCAT22(extraout_var,SVar5) >> 8),SVar5 < 0);
      if (SVar5 < 0) goto LAB_009ec845;
    }
    fVar2 = *(float *)((int)DAT_010600c0 + 0x28);
    if (fVar2 < 400.0) {
      return CONCAT22((short)((uint)pHVar6 >> 0x10),
                      (ushort)(fVar2 < 400.0) << 8 | (ushort)NAN(fVar2) << 10 |
                      (ushort)(fVar2 == 400.0) << 0xe);
    }
  }
LAB_009ec845:
  _Memory = DAT_010600c0;
  if (DAT_010600c0 == (void *)0x0) {
    DAT_010600c0 = (void *)0x0;
    FUN_009abb50(1);
    local_10.x = 0;
    local_10.y = 0;
    FUN_009abae0(&local_10.x);
    FUN_009abde0();
    if (-1 < DAT_00e68634) {
      FUN_009b11d0(DAT_00e68634);
      DAT_00e68634 = -1;
    }
    iVar7 = DAT_00e6861c;
    if (-1 < DAT_00e6861c) {
      iVar7 = FUN_009b11d0(DAT_00e6861c);
      DAT_00e6861c = -1;
    }
    return CONCAT31((int3)((uint)iVar7 >> 8),1);
  }
  puVar1 = (undefined4 *)((int)DAT_010600c0 + 0x30);
  pvVar3 = (void *)*puVar1;
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
    *puVar1 = 0;
  }
  piVar4 = *(int **)((int)_Memory + 0x297a4);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)((int)_Memory + 0x297a4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION LH_State_IntroSplashScreen @ 009ec8f0 ////

void LH_State_IntroSplashScreen(void)

{
  SHORT SVar1;
  DWORD DVar2;
  HWND pHVar3;
  
  DVar2 = GetTickCount();
  if (DVar2 < DAT_01076878) {
    do {
      pHVar3 = GetForegroundWindow();
      if (((pHVar3 == DAT_0105beb0) && (SVar1 = GetAsyncKeyState(0x1b), SVar1 < 0)) ||
         ((pHVar3 = GetForegroundWindow(), pHVar3 == DAT_0105beb0 &&
          (SVar1 = GetAsyncKeyState(0x20), SVar1 < 0)))) break;
      Sleep(0);
      DVar2 = GetTickCount();
    } while (DVar2 < DAT_01076878);
  }
  LH_StudioCamera_UpdateAndRender(DAT_010600c0);
  return;
}


//// FUNCTION StudioRenderer_Initialize @ 009ec970 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __thiscall StudioRenderer_Initialize(void *this,int *param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  FILE *_File;
  short *psVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  float10 fVar12;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  float fStack_8;
  
  *(undefined4 *)((int)this + 0x48) = 0;
  if (DAT_0105be08 < 2) {
    DAT_00e68624 = 4;
    _DAT_00e68628 = 7.0;
    DAT_00e6862c = 0xdac;
    PTR_s_data_intro_uvs_dat_00d73b03_1_00e68630 = s_data_intro_uvs_minspec_dat_00d73b78;
    _DAT_00e68638 = 49.0;
    _DAT_00e6863c = 8.1;
  }
  else {
    _DAT_00e68638 = _DAT_00e68628 * _DAT_00e68628;
    _DAT_00e6863c = _DAT_00e68628 + 1.0;
  }
  *(undefined1 *)this = 0;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined4 *)((int)this + 0x2978c) = 0;
  *(int **)((int)this + 0x297a4) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  pvVar2 = FUN_0099bb50("ui\\intro.dds",0,0,0,'\0');
  *(void **)((int)this + 0x30) = pvVar2;
  FUN_00ad0036(0x17);
  iVar3 = (int)(DAT_00e6862c + (DAT_00e6862c >> 0x1f & 3U)) >> 2;
  iVar9 = 0;
  if (0 < iVar3) {
    psVar6 = &DAT_0107222a;
    do {
      sVar1 = (short)iVar9 * 4;
      *psVar6 = sVar1 + 1;
      psVar6[1] = sVar1 + 2;
      psVar6[2] = sVar1 + 2;
      psVar6[-1] = sVar1;
      psVar6[3] = sVar1 + 3;
      psVar6[4] = sVar1;
      iVar9 = iVar9 + 1;
      psVar6 = psVar6 + 6;
    } while (iVar9 < iVar3);
  }
  *(undefined4 *)((int)this + 4) = 100000;
  *(float *)((int)this + 0x34) = DAT_00e68620;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  *(undefined4 *)((int)this + 0x38) = 0x43c80000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  param_1 = (int *)0x0;
  if (0 < DAT_00e6862c) {
    fVar8 = 0.0;
    pfVar10 = (float *)&DAT_01076880;
    do {
      piVar11 = param_1;
      pfVar10[5] = 0.1;
      pfVar10[6] = 0.1;
      uVar4 = (uint)param_1 & 0x80000003;
      pfVar10[4] = -NAN;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      switch(uVar4) {
      case 0:
        iStack_50 = _rand();
        fStack_4c = (float)iStack_50 * 3.051851e-05 * 20.0 - 10.0;
        param_1 = (int *)(float)(int)param_1;
        iStack_50 = _rand();
        fStack_44 = ((float)iStack_50 * 3.051851e-05 * 200.0 + 100.0) - (float)param_1;
        fVar12 = (float10)fsin((float10)(float)param_1 * (float10)0.002);
        fVar8 = (float)(fVar12 * (float10)90.0 + (float10)DAT_00e68620 + (float10)fStack_4c);
        fStack_c = -_DAT_00e68628;
        fVar7 = fVar8 + fStack_c;
        fVar5 = fStack_44 + fStack_c;
        fStack_48 = fVar8;
        fStack_40 = fVar8;
        fStack_3c = fStack_44;
        fStack_38 = fVar7;
        fStack_34 = fVar5;
        goto LAB_009ecc42;
      case 1:
        fStack_2c = -_DAT_00e68628;
        fStack_30 = fStack_48 + _DAT_00e68628;
        *pfVar10 = fStack_30;
        fStack_2c = fStack_2c + fStack_44;
        pfVar10[1] = fStack_2c;
        break;
      case 2:
        fStack_28 = fStack_48 + _DAT_00e68628;
        *pfVar10 = fStack_28;
        fStack_24 = fStack_44 + _DAT_00e68628;
        pfVar10[1] = fStack_24;
        break;
      case 3:
        fVar7 = -_DAT_00e68628 + fStack_48;
        fVar5 = fStack_44 + _DAT_00e68628;
        fStack_20 = fVar7;
        fStack_1c = fVar5;
LAB_009ecc42:
        *pfVar10 = fVar7;
        pfVar10[1] = fVar5;
      }
      iVar3 = (int)((int)piVar11 + ((int)piVar11 >> 0x1f & 3U)) >> 2;
      (&DAT_010b1200)[iVar3 * 4] = fVar8;
      (&DAT_010b1204)[iVar3 * 4] = fStack_44;
      param_1 = (int *)_rand();
      fStack_8 = ((float)(int)param_1 * 3.051851e-05 + (float)(int)param_1 * 3.051851e-05) - 1.0;
      iVar3 = _rand();
      param_1 = (int *)((int)piVar11 + 1);
      fStack_18 = fStack_8 + *pfVar10;
      fStack_14 = (((float)iVar3 * 3.051851e-05 + (float)iVar3 * 3.051851e-05) - 1.0) + pfVar10[1];
      pfVar10[2] = fStack_18;
      pfVar10[3] = fStack_14;
      pfVar10 = pfVar10 + 10;
    } while ((int)param_1 < DAT_00e6862c);
  }
  iVar3 = 0;
  _File = _fopen(PTR_s_data_intro_uvs_dat_00d73b03_1_00e68630,"rb");
  if (_File != (FILE *)0x0) {
    if (0 < DAT_00e6862c) {
      piVar11 = &DAT_01076898;
      do {
        param_1 = (int *)0x3dcccccd;
        iStack_50 = 0x3dcccccd;
        _fread(&param_1,1,4,_File);
        _fread(&iStack_50,1,4,_File);
        iVar9 = DAT_00e6862c;
        piVar11[-1] = (int)param_1;
        *piVar11 = iStack_50;
        iVar3 = iVar3 + 1;
        piVar11 = piVar11 + 10;
      } while (iVar3 < iVar9);
    }
    _fread((void *)((int)this + 4),1,4,_File);
    _fclose(_File);
  }
  *(undefined4 *)((int)this + 0x297a0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2979c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return this;
}


//// FUNCTION LogoScreen_Initialize @ 009ecda0 ////

void LogoScreen_Initialize(void)

{
  undefined1 uVar1;
  void *this;
  char *local_54;
  undefined4 local_50;
  uint local_4c;
  char local_48 [20];
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
  puStack_8 = &LAB_00cf86bb;
  local_c = ExceptionList;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = 0xffffffff;
  ExceptionList = &local_c;
  local_30 = FUN_009b01a0("LOGO_SCREEN_MUSIC");
  local_34 = local_34 & 0xfffffffe;
  DAT_00e68634 = FUN_009b1530((byte *)&local_34,3,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
  local_30 = FUN_009b01a0("LOGO_SCREEN_BEADS");
  local_34 = local_34 & 0xfffffffe;
  DAT_00e6861c = FUN_009b1530((byte *)&local_34,3,0,'\0',&DAT_00d17518,'\0',0,0.0);
  if (-1 < DAT_00e6861c) {
    FUN_009b10a0(DAT_00e6861c,0);
  }
  uVar1 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_54 = local_48;
  local_4 = 0;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x14;
  _strncpy(local_54,"ui/cursor.dds",0xd);
  local_50 = 0xd;
  local_54[0xd] = '\0';
  local_4._0_1_ = 1;
  FUN_009abe60(0x42000000,&local_54);
  local_4._0_1_ = 0;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  FUN_009d9820();
  this = operator_new(0x297a8);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (this == (void *)0x0) {
    DAT_010600c0 = (undefined1 *)0x0;
  }
  else {
    DAT_010600c0 = StudioRenderer_Initialize(this,g_pDirect3DDevice);
  }
  DAT_01076878 = GetTickCount();
  DAT_0105cc5c = uVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ecff0 @ 009ecff0 ////

void __fastcall FUN_009ecff0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d73bfc;
  return;
}


//// FUNCTION FUN_009ed150 @ 009ed150 ////

void __fastcall FUN_009ed150(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_009ed170 @ 009ed170 ////

void __fastcall FUN_009ed170(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_009ed250 @ 009ed250 ////

int __cdecl FUN_009ed250(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int *piStack_4;
  
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2,&local_c);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8,&local_c);
    while (iVar1 == 0) {
      iVar1 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,&local_10);
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      unaff_EDI = (int *)0x0;
      if (((iVar1 == -0x7ffbfdf7) &&
          (iVar1 = (**(code **)(*param_2 + 0x24))(param_2,&local_8), iVar1 == 0)) && (local_8 == 1))
      {
        iVar1 = (**(code **)(*piStack_4 + 0x30))(piStack_4,param_2);
      }
      (**(code **)(*param_2 + 8))(param_2);
      if (iVar1 < 0) break;
      iVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8,&local_c);
    }
  }
  (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  return iVar1;
}


//// FUNCTION FUN_009ed340 @ 009ed340 ////

void __thiscall FUN_009ed340(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (*(int *)((int)this + 4) != 0) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)((int)this + 4) + 0x28))(*(int **)((int)this + 4),10,&param_1);
      iVar2 = iVar2 + 1;
      if (iVar1 == param_1) {
        return;
      }
    } while (iVar2 < 10);
  }
  return;
}


//// FUNCTION FUN_009ed380 @ 009ed380 ////

uint __fastcall FUN_009ed380(void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    uVar2 = FUN_009d9820();
    return uVar2 & 0xffffff00;
  }
  if ((*(int *)((int)param_1 + 4) != 0) &&
     (piVar1 = *(int **)((int)param_1 + 8), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    (**(code **)(**(int **)((int)param_1 + 4) + 0x1c))(*(int **)((int)param_1 + 4));
    FUN_009ed340(param_1,2);
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
    uVar3 = FUN_009d9820();
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar2 = FUN_009d9820();
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009ed400 @ 009ed400 ////

uint __fastcall FUN_009ed400(void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    uVar2 = FUN_009d9820();
    return uVar2 & 0xffffff00;
  }
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  FUN_009ed340(param_1,1);
  *(undefined4 *)((int)param_1 + 0x1c) = 2;
  uVar3 = FUN_009d9820();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_009ed450 @ 009ed450 ////

uint __fastcall FUN_009ed450(void *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    uVar2 = FUN_009d9820();
    return uVar2 & 0xffffff00;
  }
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  FUN_009ed340(param_1,0);
  *(undefined4 *)((int)param_1 + 0x1c) = 3;
  uVar3 = FUN_009d9820();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_009ed4a0 @ 009ed4a0 ////

float10 __fastcall FUN_009ed4a0(int param_1)

{
  int *piVar1;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    return (float10)0.0;
  }
  piVar1 = *(int **)(param_1 + 8);
  local_8 = 0;
  (**(code **)(*piVar1 + 0x1c))();
  return (float10)(double)CONCAT44(&local_8,piVar1);
}


//// FUNCTION FUN_009ed520 @ 009ed520 ////

/* WARNING: Type propagation algorithm not settling */

float10 __fastcall FUN_009ed520(int param_1)

{
  int *piVar1;
  double *pdVar2;
  double local_10 [2];
  
  if (*(int *)(param_1 + 8) == 0) {
    local_10[0] = (double)((ulonglong)local_10[0] & 0xffffffff00000000);
  }
  else {
    local_10[0] = 0.0;
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),local_10);
    local_10[0] = (double)CONCAT44(local_10[0]._4_4_,(float)local_10[0]);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    pdVar2 = local_10 + 1;
    local_10[1] = 0.0;
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    if ((float10)local_10[0] != (float10)0.0) {
      return (float10)(float)pdVar2 / (float10)local_10[0];
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_009ed5a0 @ 009ed5a0 ////

uint __fastcall FUN_009ed5a0(void *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined2 extraout_var;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = *(int *)((int)param_1 + 0x1c);
  if ((iVar1 != 1) && (iVar1 != 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  fVar4 = FUN_009ed520((int)param_1);
  fVar2 = (float10)0.99999;
  uVar3 = CONCAT22(extraout_var,
                   (ushort)(fVar4 < fVar2) << 8 | (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                   (ushort)(fVar4 == fVar2) << 0xe);
  if (fVar4 >= fVar2 && (fVar4 == fVar2) == 0) {
    FUN_009d9820();
    uVar3 = FUN_009ed450(param_1);
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009ed5e0 @ 009ed5e0 ////

void __fastcall FUN_009ed5e0(int *param_1)

{
  int *piVar1;
  
  if (param_1[7] != 0) {
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))(piVar1);
    }
    FUN_009ed340(param_1,0);
    param_1[7] = 3;
  }
  FUN_009d9820();
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if ((char)param_1[8] == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009ed674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}


//// FUNCTION FUN_009ed680 @ 009ed680 ////

undefined4 __fastcall FUN_009ed680(void *param_1)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_009ed520((int)param_1);
  fVar3 = (float10)1.0;
  uVar1 = CONCAT22(extraout_var,
                   (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                   (ushort)(fVar3 == fVar2) << 0xe);
  if (fVar3 == fVar2) {
    if (*(int *)((int)param_1 + 0x18) == 0) {
      uVar1 = FUN_009ed380(param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    uVar1 = FUN_009ed450(param_1);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009ed710 @ 009ed710 ////

undefined4 * __thiscall FUN_009ed710(void *this,int param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf86d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00dadb70_00c8d960(this,(undefined4 *)&DAT_00d73e38,0,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00d73d74;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00d73d34;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d73d18;
  *(undefined ***)((int)this + 0xe0) = &PTR_LAB_00d73cf0;
  *(undefined ***)((int)this + 0xe4) = &PTR_LAB_00d73cd8;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x16c),0x10,2,FUN_009ed150,FUN_009ed170);
  *param_2 = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009ed7c0 @ 009ed7c0 ////

void __fastcall FUN_009ed7c0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf86f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_LAB_00d73d74;
  param_1[3] = (int)&PTR_FUN_00d73d34;
  param_1[4] = (int)&PTR_LAB_00d73d18;
  param_1[0x38] = (int)&PTR_LAB_00d73cf0;
  param_1[0x39] = (int)&PTR_LAB_00d73cd8;
  local_4 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x5b,0x10,2,FUN_009ed170);
  local_4 = 0xffffffff;
  Dtor_00c8d910(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ed880 @ 009ed880 ////

bool __fastcall FUN_009ed880(LPVOID *param_1)

{
  LPVOID *ppv;
  HRESULT HVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_EDI;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int *local_24;
  int *piStack_20;
  void *pvStack_1c;
  undefined1 auStack_18 [4];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf871b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_1 + 0x22e) == '\0') {
    ExceptionList = &local_c;
    HVar1 = CoInitialize((LPVOID)0x0);
    if (HVar1 < 0) {
      ExceptionList = local_c;
      return false;
    }
    *(undefined1 *)((int)param_1 + 0x22e) = 1;
  }
  ppv = param_1 + 1;
  local_24 = (int *)0x0;
  CoCreateInstance((IID *)&rclsid_00db0abc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf37c,ppv);
  CoCreateInstance((IID *)&rclsid_00db0afc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf34c,param_1);
  piVar6 = *ppv;
  (**(code **)(*(int *)*param_1 + 0xc))(*param_1);
  pvStack_1c = operator_new(400);
  local_c = (void *)0x0;
  if (pvStack_1c == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_009ed710(pvStack_1c,0,(undefined4 *)&stack0xffffffd4);
  }
  local_c = (void *)0xffffffff;
  param_1[8] = puVar2;
  if (-1 < unaff_ESI) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar2 + 3;
    }
    param_1[4] = puVar2;
    iVar3 = (**(code **)(*(int *)*ppv + 0xc))(*ppv,puVar2,L"TEXTURERENDERER");
    if (-1 < iVar3) {
      piStack_20 = (int *)0x0;
      CoCreateInstance((IID *)&rclsid_00db06ec,(LPUNKNOWN)0x0,3,(IID *)&riid_00daf54c,&piStack_20);
      local_24 = (int *)0x0;
      (**(code **)(*piStack_20 + 0xc))(piStack_20,&DAT_00db06cc,&local_24,0);
      if (local_24 != (int *)0x0) {
        piVar5 = local_24;
        iVar3 = (**(code **)(*local_24 + 0xc))(local_24,1,&stack0xffffffd8,auStack_18);
        if (iVar3 == 0) {
          (**(code **)(*piVar6 + 0x20))(piVar6,0,0,&riid_00daf4dc,param_1 + 6);
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        (**(code **)(*(int *)*ppv + 0xc))(*ppv,param_1[6],L"Capture");
        pvVar4 = param_1[6];
        (**(code **)(*(int *)*param_1 + 0x1c))
                  (*param_1,&DAT_00dafdfc,&DAT_00db11cc,pvVar4,0,param_1[4]);
        (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00dafacc,param_1 + 2);
        (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00dafabc,param_1 + 3);
        piVar6 = param_1[2];
        iVar3 = (**(code **)(*piVar6 + 0x1c))(piVar6);
        ExceptionList = pvVar4;
        return -1 < iVar3;
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}


//// FUNCTION FUN_009eda80 @ 009eda80 ////

void __fastcall FUN_009eda80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
    (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[3] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[7] = 0;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  if (*(char *)((int)param_1 + 0x22e) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x009edb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoUninitialize();
    return;
  }
  return;
}


//// FUNCTION FUN_009edb80 @ 009edb80 ////

uint __fastcall FUN_009edb80(int param_1)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar4;
  undefined8 local_8;
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x18) != 1) && (uVar3 = *(int *)(param_1 + 0x18) - 2, uVar3 == 0)) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    fVar4 = FUN_009ed520((int)pvVar1);
    if ((float10)1.0 == fVar4) {
      if (*(int *)((int)pvVar1 + 0x18) == 0) {
        FUN_009ed380(pvVar1);
      }
      else {
        FUN_009ed450(pvVar1);
      }
    }
    local_8 = 0;
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 8);
    uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,&local_8);
    *(float *)(param_1 + 0x10) = (float)(double)CONCAT44(unaff_ESI,unaff_EDI);
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009edd80 @ 009edd80 ////

void __cdecl FUN_009edd80(int *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x2c))();
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x009edd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}


//// FUNCTION FUN_009eddb0 @ 009eddb0 ////

undefined4 __fastcall FUN_009eddb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  FUN_009a1510(0xe);
  uVar1 = FUN_009ed450(*(void **)(param_1 + 4));
  return uVar1;
}


//// FUNCTION FUN_009ede70 @ 009ede70 ////

void __fastcall FUN_009ede70(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  ulonglong uVar2;
  undefined8 uStack_1c;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 4) != 0) {
    uStack_1c._4_4_ = (undefined1 *)0x9ede82;
    uVar2 = FUN_00990ae0(param_1,param_2);
    if (*(uint *)(param_1 + 0x18) < (uint)uVar2) {
      uStack_1c._4_4_ = (undefined1 *)0x9ede8c;
      uVar2 = FUN_00990ae0(extraout_ECX,(int)(uVar2 >> 0x20));
      *(int *)(param_1 + 0x18) = (int)uVar2 + 0xfa;
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xc);
      uStack_1c._4_4_ = local_8;
      uStack_1c._0_4_ = local_10;
      (**(code **)(*piVar1 + 0x3c))(piVar1);
      uVar2 = FUN_00acd42c();
      uStack_1c = uVar2 + CONCAT44(uStack_1c._4_4_,(undefined1 *)uStack_1c);
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xc);
      (**(code **)(*piVar1 + 0x38))(piVar1,&uStack_1c,1,0,0);
    }
  }
  return;
}


//// FUNCTION MediaPlayer_Constructor @ 009edf00 ////

undefined4 * MediaPlayer_Constructor(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00d73ea4;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[9] = 0x3f800000;
    puVar1[6] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009edfa0 @ 009edfa0 ////

int * __thiscall FUN_009edfa0(void *this,int *param_1)

{
  int *piVar1;
  
  if (this == (void *)0x0) {
    return (int *)0x0;
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)this = param_1;
  return param_1;
}


//// FUNCTION FUN_009ee080 @ 009ee080 ////

int * __thiscall FUN_009ee080(void *this,int *param_1)

{
  int *piVar1;
  
  if (this == (void *)0x0) {
    return (int *)0x0;
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)this = param_1;
  return param_1;
}


//// FUNCTION FUN_009ee1e0 @ 009ee1e0 ////

void FUN_009ee1e0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009ee1ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + -8))();
  return;
}


//// FUNCTION FUN_009ee1f0 @ 009ee1f0 ////

void FUN_009ee1f0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009ee1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 4))();
  return;
}


//// FUNCTION FUN_009ee200 @ 009ee200 ////

void FUN_009ee200(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009ee20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 8))();
  return;
}


//// FUNCTION FUN_009ee260 @ 009ee260 ////

void __fastcall FUN_009ee260(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_009ee270 @ 009ee270 ////

void __fastcall FUN_009ee270(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_009ee280 @ 009ee280 ////

void __fastcall FUN_009ee280(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_009ee290 @ 009ee290 ////

int * __thiscall FUN_009ee290(void *this,byte param_1)

{
  FUN_009ed7c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009ee310 @ 009ee310 ////

undefined4 __thiscall FUN_009ee310(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x34);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x44) + 0x38);
  uVar4 = (int)uVar2 >> 0x1f;
  iVar5 = (uVar2 ^ uVar4) - uVar4;
  uVar2 = iVar5 * iVar1 * 3;
  puVar6 = (undefined4 *)((int)this + 0x174);
  param_1 = 2;
  do {
    puVar6[-2] = iVar1;
    puVar6[-1] = iVar5;
    puVar3 = operator_new(uVar2);
    *puVar6 = puVar3;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar6[1] = 1;
    puVar6 = puVar6 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(int *)((int)this + 0x164) = iVar5;
  *(int *)((int)this + 0x160) = iVar1;
  return 0;
}


//// FUNCTION FUN_009ee430 @ 009ee430 ////

void __fastcall FUN_009ee430(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_009ee440 @ 009ee440 ////

void __fastcall FUN_009ee440(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_009ee450 @ 009ee450 ////

void __fastcall FUN_009ee450(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d73e7c;
  if (param_1[6] == 1) {
    FUN_009eda80((int *)param_1[8]);
  }
  else if (param_1[6] == 2) {
    FUN_009ed5e0((int *)param_1[7]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[8]);
}


//// FUNCTION MediaPlayer_DecodeAndBlitFrame @ 009ee520 ////

void __fastcall MediaPlayer_DecodeAndBlitFrame(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_8 = 0;
  local_4 = (undefined1 *)0x0;
  MediaPlayer_LockVideoBuffer(*(void **)(param_1 + 8),&local_8);
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14);
  iVar1 = *(int *)(iVar4 + 0x160);
  local_c = *(int *)(iVar4 + 0x164);
  if (local_4 != (undefined1 *)0x0) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    puVar3 = *(undefined1 **)
              ((uint)(*(int *)(iVar4 + 0x178) < *(int *)(iVar4 + 0x188)) * 0x10 + 0x174 + iVar4);
    puVar2 = local_4;
    if (0 < local_c) {
      do {
        iVar4 = iVar1;
        if (0 < iVar1) {
          do {
            *puVar2 = *puVar3;
            puVar2[1] = puVar3[1];
            puVar2[2] = puVar3[2];
            puVar2[3] = 0xff;
            puVar3 = puVar3 + 3;
            puVar2 = puVar2 + 4;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  MediaPlayer_UnlockVideoBuffer(*(int *)(param_1 + 8));
  return;
}


//// FUNCTION MediaPlayer_UpdateAndRenderFrame @ 009ee5d0 ////

void __fastcall MediaPlayer_UpdateAndRenderFrame(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x14) != '\0')) &&
     (*(char *)(param_1 + 0x15) == '\0')) {
    MediaPlayer_DecodeAndBlitFrame(param_1);
    BuildAndDrawPrimitive(*(int *)(param_1 + 0x10));
    return;
  }
  return;
}


//// FUNCTION MediaPlayer_ReleaseResources @ 009ee600 ////

void __fastcall MediaPlayer_ReleaseResources(int *param_1)

{
  void *pvVar1;
  
  (**(code **)(*param_1 + 0x1c))();
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if ((void *)param_1[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((int)pvVar1 + 0x18) != 0) {
      Engine_SetResourceReference(pvVar1,0);
    }
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    param_1[3] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    FUN_0099b400((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_009ed5e0((int *)param_1[1]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_009ee690 @ 009ee690 ////

undefined4 __fastcall FUN_009ee690(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    local_4 = local_4 & 0xfffffffe | 2;
    local_10 = FUN_009edd80;
    local_c = 0xe;
    local_8 = param_1;
    FUN_009a14d0((int *)&local_10);
  }
  uVar1 = FUN_009ed380(*(void **)(param_1 + 4));
  return uVar1;
}


//// FUNCTION MediaPlayer_ForceUpdateOrFlush @ 009ee6f0 ////

void __fastcall MediaPlayer_ForceUpdateOrFlush(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x14) != '\0')) {
    MediaPlayer_DecodeAndBlitFrame(param_1);
    BuildAndDrawPrimitive(*(int *)(param_1 + 0x10));
    return;
  }
  return;
}


//// FUNCTION FUN_009ee740 @ 009ee740 ////

void __fastcall FUN_009ee740(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_009ee800 @ 009ee800 ////

/* WARNING: Removing unreachable block (ram,0x009ee921) */
/* WARNING: Removing unreachable block (ram,0x009ee9cb) */
/* WARNING: Removing unreachable block (ram,0x009ee96d) */
/* WARNING: Removing unreachable block (ram,0x009ee8ba) */
/* WARNING: Removing unreachable block (ram,0x009eea5a) */

uint __thiscall FUN_009ee800(void *this,wchar_t *param_1)

{
  bool bVar1;
  uint uVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_EBX;
  int *unaff_EDI;
  int *piVar10;
  undefined *_Memory;
  int *piStack_2b4;
  int *piVar11;
  int *_Memory_00;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *local_270 [2];
  undefined4 uStack_268;
  int *local_260;
  int *local_25c;
  undefined4 local_258;
  int aiStack_220 [3];
  wchar_t local_214 [212];
  undefined4 uStack_6c;
  wchar_t *pwStack_64;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf87a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x20) == '\0') {
    ExceptionList = &local_c;
    uVar2 = CoInitialize((LPVOID)0x0);
    if ((int)uVar2 < 0) {
      ExceptionList = local_c;
      return uVar2 & 0xffffff00;
    }
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  local_25c = (int *)0x0;
  local_258 = 0;
  local_4 = 2;
  bVar1 = false;
  pwVar3 = _wcsstr(param_1,L".wmv");
  if ((pwVar3 != (wchar_t *)0x0) || (pwVar3 = _wcsstr(param_1,L".asf"), pwVar3 != (wchar_t *)0x0)) {
    bVar1 = true;
  }
  local_270[0] = (int *)0x0;
  local_270[0] = (int *)CoCreateInstance((IID *)&rclsid_00db0abc,(LPUNKNOWN)0x0,1,
                                         (IID *)&riid_00daf37c,this);
  if ((int)local_270[0] < 0) {
    uVar2 = 0;
  }
  else {
    _wcscpy(local_214,param_1);
    local_260 = operator_new(400);
    local_4._0_1_ = 3;
    if (local_260 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_009ed710(local_260,0,local_270);
    }
    local_4._0_1_ = 2;
    *(undefined4 **)((int)this + 0x14) = puVar4;
    if ((int)local_270[0] < 0) {
      uVar2 = 0;
    }
    else {
      if (puVar4 == (undefined4 *)0x0) {
        local_260 = (int *)0x0;
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = puVar4 + 3;
        local_260 = piVar10;
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 4))();
        }
      }
      local_25c = piVar10;
      local_270[0] = (int *)(**(code **)(**(int **)this + 0xc))();
      if ((int)local_270[0] < 0) {
        uVar2 = 0;
        local_4 = 0xffffffff;
        if (piVar10 != (int *)0x0) {
          uVar2 = (**(code **)(*piVar10 + 8))();
        }
        uVar2 = uVar2 & 0xffffff00;
      }
      else {
        uStack_268 = 0;
        piVar14 = &DAT_00d73f30;
        local_4 = CONCAT31(local_4._1_3_,4);
        piVar13 = piVar10;
        iVar5 = (**(code **)(*piVar10 + 0x2c))();
        if (iVar5 < 0) {
          uStack_10 = CONCAT31(uStack_10._1_3_,1);
          if (unaff_EBX != (int *)0x0) {
            (**(code **)(*unaff_EBX + 8))();
          }
          uStack_10 = 0xffffffff;
          uVar2 = (**(code **)(*piVar10 + 8))();
          uVar2 = uVar2 & 0xffffff00;
        }
        else {
          if (bVar1) {
            local_270[0] = (int *)0x0;
            uStack_10 = CONCAT31(uStack_10._1_3_,5);
            piVar6 = (int *)CoCreateInstance((IID *)&rclsid_00db084c,(LPUNKNOWN)0x0,1,
                                             (IID *)&riid_00daf4dc,local_270);
            if ((int)piVar6 < 0) {
              uStack_10._0_1_ = 4;
              if (local_270[0] != (int *)0x0) {
                (**(code **)(*local_270[0] + 8))();
              }
              uStack_10 = CONCAT31(uStack_10._1_3_,1);
              if (unaff_EBX != (int *)0x0) {
                (**(code **)(*unaff_EBX + 8))();
              }
              uStack_10 = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            _Memory_00 = *(int **)this;
            piVar12 = local_270[0];
            piVar7 = (int *)(**(code **)(*_Memory_00 + 0xc))();
            if ((int)piVar7 < 0) {
              uStack_1c._0_1_ = 4;
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 8))();
              }
              uStack_1c._0_1_ = 2;
              if (unaff_EBX != (int *)0x0) {
                (**(code **)(*unaff_EBX + 8))();
              }
              uStack_1c = CONCAT31(uStack_1c._1_3_,1);
              if (piVar14 != (int *)0x0) {
                (**(code **)(*piVar14 + 8))();
              }
              uStack_1c = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            piVar11 = (int *)&DAT_00daf3ac;
            uStack_1c = CONCAT31(uStack_1c._1_3_,6);
            piStack_2b4 = piVar13;
            piVar8 = (int *)(**(code **)*piVar6)();
            if ((int)piVar8 < 0) {
              uStack_28._0_1_ = 5;
              if (piStack_2b4 != (int *)0x0) {
                (**(code **)(*piStack_2b4 + 8))();
              }
              uStack_28._0_1_ = 4;
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 8))();
              }
              uStack_28._0_1_ = 2;
              if (piVar14 != (int *)0x0) {
                (**(code **)(*piVar14 + 8))();
              }
              uStack_28 = CONCAT31(uStack_28._1_3_,1);
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 8))();
              }
              uStack_28 = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            iVar5 = (**(code **)(*piStack_2b4 + 0xc))();
            if (iVar5 < 0) {
              uStack_34._0_1_ = 5;
              if (_Memory_00 != (int *)0x0) {
                (**(code **)(*_Memory_00 + 8))();
              }
              uStack_34._0_1_ = 4;
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 8))();
              }
              uStack_34._0_1_ = 2;
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 8))();
              }
              uStack_34 = CONCAT31(uStack_34._1_3_,1);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 8))();
              }
              uStack_34 = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            iVar5 = FUN_009ed250(*(undefined4 *)this,piVar8);
            uStack_34._0_1_ = 5;
            if (iVar5 < 0) {
              if (_Memory_00 != (int *)0x0) {
                (**(code **)(*_Memory_00 + 8))();
              }
              uStack_34._0_1_ = 4;
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 8))();
              }
              uStack_34._0_1_ = 2;
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 8))();
              }
              uStack_34 = CONCAT31(uStack_34._1_3_,1);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 8))();
              }
              uStack_34 = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            if (_Memory_00 != (int *)0x0) {
              (**(code **)(*_Memory_00 + 8))();
            }
            uStack_34 = CONCAT31(uStack_34._1_3_,4);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 8))();
            }
          }
          else {
            piStack_2b4 = (int *)&stack0xfffffd80;
            _Memory_00 = aiStack_220;
            iVar5 = (**(code **)(**(int **)this + 0x38))();
            if (iVar5 < 0) {
              uStack_20._0_1_ = 2;
              if (unaff_EDI != (int *)0x0) {
                (**(code **)(*unaff_EDI + 8))();
              }
              uStack_20 = CONCAT31(uStack_20._1_3_,1);
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 8))();
              }
              uStack_20 = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            piVar14 = (int *)&stack0xfffffd78;
            uStack_20 = CONCAT31(uStack_20._1_3_,7);
            piVar6 = (int *)(**(code **)(*piVar13 + 0x2c))();
            if ((int)piVar6 < 0) {
              uStack_2c._0_1_ = 4;
              if (piStack_2b4 != (int *)0x0) {
                (**(code **)(*piStack_2b4 + 8))();
              }
              uStack_2c._0_1_ = 2;
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 8))();
              }
              uStack_2c = CONCAT31(uStack_2c._1_3_,1);
              if (_Memory_00 != (int *)0x0) {
                (**(code **)(*_Memory_00 + 8))();
              }
              uStack_2c = 0xffffffff;
              uVar2 = (**(code **)(*piVar10 + 8))();
              ExceptionList = local_c;
              return uVar2 & 0xffffff00;
            }
            piVar13 = *(int **)this;
            iVar5 = *piVar13;
            piVar8 = piStack_2b4;
            if ((char)uStack_20 == '\0') {
              iVar5 = (**(code **)(iVar5 + 0x2c))();
              if (iVar5 < 0) {
                uStack_34._0_1_ = 4;
                if (_Memory_00 != (int *)0x0) {
                  (**(code **)(*_Memory_00 + 8))();
                }
                uStack_34._0_1_ = 2;
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 8))();
                }
                uStack_34 = CONCAT31(uStack_34._1_3_,1);
                if (piVar14 != (int *)0x0) {
                  (**(code **)(*piVar14 + 8))();
                }
                uStack_34 = 0xffffffff;
                uVar2 = (**(code **)(*piVar10 + 8))();
                ExceptionList = local_c;
                return uVar2 & 0xffffff00;
              }
            }
            else {
              (**(code **)(iVar5 + 0x30))();
              piStack_2b4 = piVar13;
            }
            uStack_34 = CONCAT31(uStack_34._1_3_,4);
            if (_Memory_00 != (int *)0x0) {
              (**(code **)(*_Memory_00 + 8))();
            }
          }
          _Memory = &DAT_00dafacc;
          (**(code **)**(undefined4 **)this)(*(undefined4 **)this);
          piVar14 = &DAT_00dafa9c;
          (**(code **)**(undefined4 **)this)(*(undefined4 **)this,&DAT_00dafa9c,(int)this + 8);
          piVar10 = (int *)((int)this + 0xc);
          (**(code **)**(undefined4 **)this)(*(undefined4 **)this,&DAT_00daf44c);
          piVar13 = (int *)((int)this + 0x10);
          (**(code **)**(undefined4 **)this)(*(undefined4 **)this,&DAT_00dafa8c);
          (**(code **)(*(int *)*piVar13 + 0x1c))((int *)*piVar13,0);
          FUN_00421240(&stack0xfffffd44,pwStack_64,0xffffffff);
          uStack_6c._0_1_ = 8;
          FUN_009ac940((undefined4 *)&stack0xfffffd64,(undefined4 *)&stack0xfffffd44);
          uStack_6c._0_1_ = 9;
          FUN_009d9820();
          if (&DAT_00000014 < piVar8) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory_00);
          }
          if (&lpType_0000000a < piStack_2b4) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          *(undefined4 *)((int)this + 0x1c) = 3;
          uStack_6c._0_1_ = 2;
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 8))(piVar10);
          }
          uStack_6c = CONCAT31(uStack_6c._1_3_,1);
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))(piVar13);
          }
          uStack_6c = 0xffffffff;
          uVar9 = (**(code **)(*piVar14 + 8))(piVar14);
          uVar2 = CONCAT31((int3)((uint)uVar9 >> 8),1);
        }
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION MediaPlayer_Destructor @ 009ef220 ////

void __fastcall MediaPlayer_Destructor(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf87d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00d73ea4;
  local_4 = 0;
  MediaPlayer_ReleaseResources(param_1);
  *param_1 = (int)&PTR_LAB_00d73bfc;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ef530 @ 009ef530 ////

void __fastcall FUN_009ef530(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009ee450(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009ef550 @ 009ef550 ////

int * __thiscall FUN_009ef550(void *this,byte param_1)

{
  MediaPlayer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009ef640 @ 009ef640 ////

void __cdecl FUN_009ef640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009ef720 @ 009ef720 ////

void __fastcall FUN_009ef720(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_009ef730 @ 009ef730 ////

int FUN_009ef730(void)

{
  if (DAT_010b6fd4 == 0) {
    return 0;
  }
  return DAT_010b6fd8 - DAT_010b6fd4 >> 2;
}


//// FUNCTION FUN_009ef750 @ 009ef750 ////

void FUN_009ef750(void)

{
  if (DAT_0105bebc != 0) {
    *(int *)(DAT_0105bebc + 0x30) = *(int *)(DAT_0105bebc + 0x30) + 1;
  }
  return;
}


//// FUNCTION FUN_009ef760 @ 009ef760 ////

void FUN_009ef760(void)

{
  float *pfVar1;
  float *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf8818;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  pfVar1 = (float *)FUN_009d4900((undefined4 *)&stack0x00000004);
  _Memory = operator_new((uint)pfVar1);
  FUN_009d4aa0((undefined4 *)&stack0x00000004,_Memory,(size_t)pfVar1,(undefined1 *)0x0);
  FUN_0099ab10(_Memory,pfVar1);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009ef880 @ 009ef880 ////

void __cdecl FUN_009ef880(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009ef900 @ 009ef900 ////

undefined4 * __thiscall FUN_009ef900(void *this,byte param_1)

{
  FUN_009ef720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009ef920 @ 009ef920 ////

undefined4 * __thiscall FUN_009ef920(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,param_1,param_2);
  *(undefined1 *)((int)this + 0x20) = 0;
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return this;
}


//// FUNCTION FUN_009ef9c0 @ 009ef9c0 ////

void * FUN_009ef9c0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009efa00 @ 009efa00 ////

void __fastcall FUN_009efa00(int param_1)

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


//// FUNCTION FUN_009efa30 @ 009efa30 ////

undefined4 * FUN_009efa30(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009efa60 @ 009efa60 ////

int __cdecl FUN_009efa60(wchar_t *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (DAT_010b6fd4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010b6fd8 - DAT_010b6fd4 >> 2;
    }
    if (iVar1 <= iVar2) break;
    iVar1 = _wcscmp((wchar_t *)**(undefined4 **)(DAT_010b6fd4 + iVar2 * 4),param_1);
    if (iVar1 == 0) {
      if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return 0;
}


//// FUNCTION FUN_009efad0 @ 009efad0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009efad0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c [2];
  undefined4 uStack_18;
  
  if (-1 < param_1) {
    if (DAT_010b6fd4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_010b6fd8 - DAT_010b6fd4 >> 2;
    }
    if (param_1 < iVar3) goto LAB_009efaf9;
  }
  param_1 = 0;
LAB_009efaf9:
  puVar1 = *(undefined4 **)(DAT_010b6fd4 + param_1 * 4);
  _DAT_010b6fcc = param_1;
  if (*(char *)(puVar1 + 8) == '\0') {
    FUN_009a1530(param_1);
    return;
  }
  local_28 = local_1c;
  local_1c[0] = 0;
  local_24 = 0;
  local_20 = 10;
  FUN_004036d0(&local_28,(wchar_t *)*puVar1,puVar1[1]);
  pvVar2 = (void *)FUN_009ef760();
  uStack_18 = 0x9efb51;
  FUN_0099a9b0(DAT_0105bebc,0,(uint)pvVar2,0);
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
    return;
  }
  return;
}


//// FUNCTION FUN_009efb70 @ 009efb70 ////

void * __cdecl FUN_009efb70(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *local_50;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8838;
  local_c = ExceptionList;
  if (-1 < param_1) {
    if (DAT_010b6fd4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_010b6fd8 - DAT_010b6fd4 >> 2;
    }
    if (param_1 < iVar3) goto LAB_009efbb0;
  }
  param_1 = 0;
LAB_009efbb0:
  puVar2 = *(undefined4 **)(DAT_010b6fd4 + param_1 * 4);
  if (*(char *)(puVar2 + 8) != '\0') {
    local_50 = &stack0xffffffbc;
    ExceptionList = &local_c;
    FUN_004036d0(&local_50,(wchar_t *)*puVar2,puVar2[1]);
    pvVar1 = (void *)FUN_009ef760();
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_009ac940(local_2c,*(undefined4 **)(DAT_010b6fd4 + param_1 * 4));
  local_4 = 0;
  local_50 = (undefined1 *)0x9efc26;
  pvVar1 = FUN_0099bb50((char *)*puVar2,0,0,0,'\0');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return pvVar1;
}


//// FUNCTION FUN_009efc60 @ 009efc60 ////

undefined4 * __cdecl FUN_009efc60(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < param_2) {
    if (DAT_010b6fd4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010b6fd8 - DAT_010b6fd4 >> 2;
    }
    if (param_2 < iVar2) goto LAB_009efc8e;
  }
  param_2 = 0;
LAB_009efc8e:
  puVar1 = *(undefined4 **)(DAT_010b6fd4 + param_2 * 4);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  return param_1;
}


//// FUNCTION FUN_009efcd0 @ 009efcd0 ////

void __fastcall FUN_009efcd0(int param_1)

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


//// FUNCTION FUN_009efd00 @ 009efd00 ////

void __fastcall FUN_009efd00(int param_1)

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


//// FUNCTION FUN_009efd30 @ 009efd30 ////

void FUN_009efd30(void)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (DAT_010b6fd4 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010b6fd8 - (int)DAT_010b6fd4 >> 2;
    }
    if (iVar1 <= iVar2) break;
    _Memory = *(undefined4 **)((int)DAT_010b6fd4 + iVar2 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_009ef720(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)DAT_010b6fd4 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  }
  if (DAT_010b6fd4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b6fd4);
  }
  DAT_010b6fd4 = (void *)0x0;
  DAT_010b6fd8 = 0;
  DAT_010b6fdc = 0;
  return;
}


//// FUNCTION FUN_009efdb0 @ 009efdb0 ////

void FUN_009efdb0(void)

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
  puStack_8 = &LAB_00cf8858;
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


//// FUNCTION FUN_009efe70 @ 009efe70 ////

void __thiscall FUN_009efe70(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009efdb0();
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
      _Dst = FUN_009efa30((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009ef9c0(param_1,iVar5,param_1 + param_2);
      FUN_009efa30(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009ef640(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009ef9c0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009ef880(param_1,(int)pvVar3,iVar5);
    FUN_009ef640(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009f0100 @ 009f0100 ////

/* WARNING: Removing unreachable block (ram,0x009f0204) */
/* WARNING: Removing unreachable block (ram,0x009f03c9) */

void FUN_009f0100(void)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  wchar_t *pwVar9;
  int local_a8;
  wchar_t *local_a4;
  uint local_9c;
  wchar_t local_98 [10];
  int *local_84;
  wchar_t *local_80 [2];
  uint local_78;
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b91e0();
  local_4 = 0;
  sVar1 = FUN_00ace02d(L"\\The Movies\\Logos\\");
  FUN_0040cae0(local_80,L"\\The Movies\\Logos\\",sVar1);
  FUN_009f2760(local_60);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009f34b0(local_60,L"dds",L"Data\\Textures\\ui\\logos\\");
  local_a8 = 0;
  do {
    if (local_18 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_14 - local_18 >> 2;
    }
    if (iVar2 <= local_a8) {
      local_4 = local_4 & 0xffffff00;
      FUN_009f2320(local_60);
      FUN_009f2760(local_60);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_009f34b0(local_60,L"dds",local_80[0]);
      iVar2 = 0;
      while( true ) {
        if (local_18 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_14 - local_18 >> 2;
        }
        if (iVar8 <= iVar2) break;
        piVar3 = operator_new(0x24);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          pwVar9 = *(wchar_t **)(local_18 + iVar2 * 4);
          local_a4 = local_98;
          local_98[0] = L'\0';
          local_9c = 10;
          uVar5 = FUN_00ace02d(pwVar9);
          if (9 < uVar5) {
            local_9c = uVar5 + 0x20 & 0xffffffe0;
            local_a4 = _malloc(local_9c * 2);
          }
          _wcsncpy(local_a4,pwVar9,uVar5);
          local_a4[uVar5] = L'\0';
          *piVar3 = (int)(piVar3 + 3);
          *(undefined2 *)(piVar3 + 3) = 0;
          piVar3[1] = 0;
          piVar3[2] = 10;
          if (9 < uVar5) {
            uVar6 = uVar5 + 0x20 & 0xffffffe0;
            piVar3[2] = uVar6;
            pvVar7 = _malloc(uVar6 * 2);
            *piVar3 = (int)pvVar7;
          }
          _wcsncpy((wchar_t *)*piVar3,local_a4,uVar5);
          piVar3[1] = uVar5;
          *(undefined2 *)(*piVar3 + uVar5 * 2) = 0;
          *(undefined1 *)(piVar3 + 8) = 0;
          if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
            _free(local_a4);
          }
        }
        *(undefined1 *)(piVar3 + 8) = 1;
        local_84 = piVar3;
        if ((DAT_010b6fd4 == 0) ||
           ((uint)(DAT_010b6fdc - DAT_010b6fd4 >> 2) <=
            (uint)((int)DAT_010b6fd8 - DAT_010b6fd4 >> 2))) {
          FUN_009efe70(&DAT_010b6fd0,DAT_010b6fd8,1,&local_84);
          iVar2 = iVar2 + 1;
        }
        else {
          *DAT_010b6fd8 = piVar3;
          iVar2 = iVar2 + 1;
          DAT_010b6fd8 = DAT_010b6fd8 + 1;
        }
      }
      local_4 = local_4 & 0xffffff00;
      FUN_009f2320(local_60);
      if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_80[0]);
      }
      ExceptionList = local_c;
      return;
    }
    piVar3 = operator_new(0x24);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      pwVar9 = *(wchar_t **)(local_18 + local_a8 * 4);
      pwVar4 = _wcsrchr(pwVar9,L'\\');
      if (pwVar4 != (wchar_t *)0x0) {
        pwVar9 = pwVar4 + 1;
      }
      local_a4 = local_98;
      local_98[0] = L'\0';
      local_9c = 10;
      uVar5 = FUN_00ace02d(pwVar9);
      if (9 < uVar5) {
        local_9c = uVar5 + 0x20 & 0xffffffe0;
        local_a4 = _malloc(local_9c * 2);
      }
      _wcsncpy(local_a4,pwVar9,uVar5);
      local_a4[uVar5] = L'\0';
      *piVar3 = (int)(piVar3 + 3);
      *(undefined2 *)(piVar3 + 3) = 0;
      piVar3[1] = 0;
      piVar3[2] = 10;
      if (9 < uVar5) {
        uVar6 = uVar5 + 0x20 & 0xffffffe0;
        piVar3[2] = uVar6;
        pvVar7 = _malloc(uVar6 * 2);
        *piVar3 = (int)pvVar7;
      }
      _wcsncpy((wchar_t *)*piVar3,local_a4,uVar5);
      piVar3[1] = uVar5;
      *(undefined2 *)(*piVar3 + uVar5 * 2) = 0;
      *(undefined1 *)(piVar3 + 8) = 0;
      if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a4);
      }
    }
    local_84 = piVar3;
    if ((DAT_010b6fd4 == 0) ||
       ((uint)(DAT_010b6fdc - DAT_010b6fd4 >> 2) <= (uint)((int)DAT_010b6fd8 - DAT_010b6fd4 >> 2)))
    {
      FUN_009efe70(&DAT_010b6fd0,DAT_010b6fd8,1,&local_84);
      local_a8 = local_a8 + 1;
    }
    else {
      *DAT_010b6fd8 = piVar3;
      local_a8 = local_a8 + 1;
      DAT_010b6fd8 = DAT_010b6fd8 + 1;
    }
  } while( true );
}


//// FUNCTION FUN_009f0520 @ 009f0520 ////

undefined4 * __thiscall FUN_009f0520(void *this,byte param_1)

{
  FUN_00a7b050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009f0580 @ 009f0580 ////

void __cdecl FUN_009f0580(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  for (puVar2 = DAT_010b6fe0; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[6]) {
    if (param_1 == '\0') {
      if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[1])();
      }
      puVar1 = (undefined4 *)puVar2[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  return;
}


//// FUNCTION FUN_009f0680 @ 009f0680 ////

void __fastcall FUN_009f0680(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)0x0;
  puVar2 = DAT_010b6fe0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
LAB_009f06b4:
      puVar1 = (undefined4 *)*param_1;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00a7b050(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      puVar1 = (undefined4 *)param_1[1];
      *param_1 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00a7b050(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      puVar1 = (undefined4 *)param_1[2];
      param_1[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00a7b050(puVar1);
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      param_1[2] = 0;
      return;
    }
    if (puVar2 == param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        DAT_010b6fe0 = (undefined4 *)param_1[6];
      }
      else {
        puVar1[6] = param_1[6];
      }
      goto LAB_009f06b4;
    }
    puVar1 = puVar2;
    puVar2 = (undefined4 *)puVar2[6];
  } while( true );
}


//// FUNCTION FUN_009f0710 @ 009f0710 ////

uint __cdecl FUN_009f0710(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_010b6fe0;
  do {
    if (uVar1 == 0) {
      return 1;
    }
    switch(*(undefined4 *)(uVar1 + 0x14)) {
    case 0:
    case 1:
      if (param_1 == *(int *)(uVar1 + 0xc)) {
        iVar2 = *(int *)(uVar1 + 0x10);
LAB_009f0744:
        if (param_2 == iVar2) {
          return uVar1 & 0xffffff00;
        }
      }
      break;
    case 2:
    case 3:
      if (param_1 == *(int *)(uVar1 + 0xc)) {
        iVar2 = *(int *)(uVar1 + 0x10) + 1;
        goto LAB_009f0744;
      }
    }
    uVar1 = *(uint *)(uVar1 + 0x18);
  } while( true );
}


//// FUNCTION FUN_009f0770 @ 009f0770 ////

uint __cdecl FUN_009f0770(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_010b6fe0;
  do {
    if (uVar1 == 0) {
      return 1;
    }
    switch(*(undefined4 *)(uVar1 + 0x14)) {
    case 0:
    case 3:
      iVar2 = *(int *)(uVar1 + 0xc);
      break;
    case 1:
    case 2:
      iVar2 = *(int *)(uVar1 + 0xc) + 1;
      break;
    default:
      goto switchD_009f078a_default;
    }
    if ((param_2 == iVar2) && (param_1 == *(int *)(uVar1 + 0x10))) {
      return uVar1 & 0xffffff00;
    }
switchD_009f078a_default:
    uVar1 = *(uint *)(uVar1 + 0x18);
  } while( true );
}


//// FUNCTION FUN_009f07d0 @ 009f07d0 ////

int * __thiscall FUN_009f07d0(void *this,int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  float *pfVar11;
  int iVar12;
  short *psVar13;
  undefined2 *puVar14;
  short sVar15;
  float *pfVar16;
  uint uVar17;
  short sVar18;
  int iVar19;
  float10 fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 local_f0;
  float local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_b8;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_90;
  int local_8c;
  undefined4 local_88;
  float local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
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
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf88ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)((int)this + 0x18) = DAT_010b6fe0;
  local_30 = param_2 + -0x80;
  DAT_010b6fe0 = this;
  *(int *)((int)this + 0xc) = local_30;
  local_20 = param_3 + -0x80;
  *(int *)((int)this + 0x10) = local_20;
  *(int *)((int)this + 0x14) = param_1;
  local_b0 = 0x40000000;
  local_ac = 2.0;
  local_a8 = 0.0;
  local_90 = operator_new(0x58);
  sVar18 = 0;
  local_4 = 0;
  if (local_90 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_00a7b0f0(local_90,0x24,0x1c,&DAT_0105fff8);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)this = puVar9;
  local_90 = operator_new(0x58);
  local_4 = 1;
  if (local_90 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_00a7b0f0(local_90,6,8,&DAT_0105fff8);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 4) = puVar9;
  local_90 = operator_new(0x58);
  local_4 = 2;
  if (local_90 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = FUN_00a7b0f0(local_90,0xc,0xe,&DAT_01060040);
  }
  *(undefined4 **)((int)this + 8) = puVar9;
  puVar9 = *(undefined4 **)(*(int *)((int)this + 4) + 0x10);
  *puVar9 = local_b0;
  puVar9[1] = local_ac;
  local_4 = 0xffffffff;
  puVar9[2] = local_a8;
  local_a4 = 0;
  local_2c = 1.95;
  local_28 = 0.0;
  local_24 = 0.0;
  local_9c = (float)CONCAT13(0xff,(undefined3)local_9c);
  local_3c = 1.975;
  local_38 = 0.0;
  local_34 = 0.0;
  local_a0 = (float)CONCAT13(0xff,(undefined3)local_a0);
  local_60 = 2.025;
  local_5c = 0.0;
  local_58 = 0.0;
  local_98 = (float)CONCAT13(0xff,(undefined3)local_98);
  local_54 = 2.05;
  local_50 = 0.0;
  local_4c = 0.0;
  local_88 = (float)CONCAT13(0xff,(undefined3)local_88);
  local_ac = 0.0;
  local_a8 = 0.0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_94 = 0;
  local_8c = 0;
  do {
    local_84 = (float)local_a4;
    local_e4 = 1.0 - local_84 * 0.16666667;
    if (param_1 == 1) {
      local_e4 = 1.0;
    }
    else if ((param_1 != 2) && (local_e4 = local_84 * 0.16666667, param_1 == 3)) {
      local_e4 = 0.0;
    }
    uVar21 = FUN_00acd42c();
    iVar12 = (int)uVar21;
    uVar22 = FUN_00acd42c();
    local_1c = (int)uVar22;
    uVar22 = FUN_00acd42c();
    local_90 = (void *)uVar22;
    uVar22 = FUN_00acd42c();
    local_e4 = (float)uVar22;
    pfVar16 = (float *)(*(int *)(*(int *)this + 0x10) + local_8c);
    *pfVar16 = local_2c;
    pfVar16[1] = local_28;
    pfVar16[2] = local_24;
    uVar8 = (undefined1)uVar21;
    if (iVar12 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar8;
      if (0xff < iVar12) {
        uVar7 = 0xff;
      }
    }
    if (iVar12 < 0) {
      uVar8 = 0;
    }
    else if (0xff < iVar12) {
      uVar8 = 0xff;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    else if (0xff < iVar12) {
      iVar12 = 0xff;
    }
    local_9c = (float)CONCAT31(CONCAT21(CONCAT11(local_9c._3_1_,uVar7),uVar8),(char)iVar12);
    pfVar16[3] = local_9c;
    pfVar16[6] = local_3c;
    pfVar16[7] = local_38;
    pfVar16[8] = local_34;
    uVar8 = (undefined1)local_1c;
    if (local_1c < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar8;
      if (0xff < local_1c) {
        uVar7 = 0xff;
      }
    }
    if (local_1c < 0) {
      uVar8 = 0;
    }
    else if (0xff < local_1c) {
      uVar8 = 0xff;
    }
    if (local_1c < 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = local_1c;
      if (0xff < local_1c) {
        iVar12 = 0xff;
      }
    }
    local_a0 = (float)CONCAT31(CONCAT21(CONCAT11(local_a0._3_1_,uVar7),uVar8),(char)iVar12);
    pfVar16[9] = local_a0;
    pfVar11 = pfVar16 + 0xc;
    *pfVar11 = local_60;
    pfVar16[0xd] = local_5c;
    pfVar16[0xe] = local_58;
    uVar8 = SUB41(local_90,0);
    if ((int)local_90 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar8;
      if (0xff < (int)local_90) {
        uVar7 = 0xff;
      }
    }
    if ((int)local_90 < 0) {
      uVar8 = 0;
    }
    else if (0xff < (int)local_90) {
      uVar8 = 0xff;
    }
    if ((int)local_90 < 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = local_90;
      if (0xff < (int)local_90) {
        pvVar10 = (void *)0xff;
      }
    }
    local_98 = (float)CONCAT31(CONCAT21(CONCAT11(local_98._3_1_,uVar7),uVar8),(char)pvVar10);
    pfVar16[0xf] = local_98;
    pfVar1 = pfVar16 + 0x12;
    *pfVar1 = local_54;
    pfVar16[0x13] = local_50;
    pfVar16[0x14] = local_4c;
    uVar8 = (undefined1)uVar22;
    if ((int)local_e4 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar8;
      if (0xff < (int)local_e4) {
        uVar7 = 0xff;
      }
    }
    if ((int)local_e4 < 0) {
      uVar8 = 0;
    }
    else if (0xff < (int)local_e4) {
      uVar8 = 0xff;
    }
    if ((int)local_e4 < 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = (int)local_e4;
      if (0xff < (int)local_e4) {
        iVar12 = 0xff;
      }
    }
    local_88 = (float)CONCAT31(CONCAT21(CONCAT11(local_88._3_1_,uVar7),uVar8),(char)iVar12);
    pfVar16[0x15] = local_88;
    local_ec = local_84 * 0.5 * 0.25;
    pfVar16[4] = 0.0;
    pfVar16[5] = local_ec;
    pfVar16[10] = 0.083333336;
    pfVar16[0xb] = local_ec;
    pfVar16[0x10] = 0.16666667;
    pfVar16[0x11] = local_ec;
    local_f0 = 0x3e800000;
    pfVar16[0x16] = 0.25;
    fVar20 = (float10)fcos((float10)local_84 * (float10)0.2617994);
    pfVar16[0x17] = local_ec;
    local_d0 = (float)fVar20;
    fVar20 = (float10)fsin((float10)local_84 * (float10)0.2617994);
    local_dc = (float)fVar20;
    local_d4 = (float)-fVar20;
    fVar2 = *pfVar16;
    fVar3 = pfVar16[1];
    fVar5 = pfVar16[2] * 0.0;
    *pfVar16 = local_d0 * fVar2 + local_d4 * fVar3 + fVar5 + 2.0;
    pfVar16[1] = local_dc * fVar2 + local_d0 * fVar3 + fVar5 + 2.0;
    pfVar16[2] = (fVar3 + fVar2) * 0.0 + pfVar16[2];
    fVar2 = pfVar16[6];
    fVar3 = pfVar16[7];
    fVar5 = pfVar16[8] * 0.0;
    pfVar16[6] = local_d0 * fVar2 + local_d4 * fVar3 + fVar5 + 2.0;
    pfVar16[7] = local_dc * fVar2 + local_d0 * fVar3 + fVar5 + 2.0;
    pfVar16[8] = (fVar3 + fVar2) * 0.0 + pfVar16[8];
    fVar2 = *pfVar11;
    fVar3 = pfVar16[0xd];
    fVar5 = pfVar16[0xe] * 0.0;
    *pfVar11 = local_d0 * fVar2 + local_d4 * fVar3 + fVar5 + 2.0;
    pfVar16[0xd] = local_dc * fVar2 + local_d0 * fVar3 + fVar5 + 2.0;
    pfVar16[0xe] = (fVar3 + fVar2) * 0.0 + pfVar16[0xe];
    fVar2 = *pfVar1;
    fVar3 = pfVar16[0x13];
    fVar5 = pfVar16[0x14] * 0.0;
    *pfVar1 = local_d0 * fVar2 + local_d4 * fVar3 + fVar5 + 2.0;
    pfVar16[0x13] = local_dc * fVar2 + local_d0 * fVar3 + fVar5 + 2.0;
    pfVar16[0x14] = (fVar3 + fVar2) * 0.0 + pfVar16[0x14];
    pfVar11 = (float *)(*(int *)(*(int *)((int)this + 8) + 0x10) + local_94);
    fVar5 = local_84 * 0.5 * 2.173913;
    pfVar11[4] = 0.5;
    pfVar11[3] = -NAN;
    pfVar11[5] = fVar5;
    *pfVar11 = 2.0;
    pfVar11[1] = local_ac;
    pfVar11[2] = local_a8;
    fVar2 = *pfVar11;
    fVar3 = pfVar11[1];
    local_b0 = 0x400eb852;
    fVar6 = pfVar11[2] * 0.0;
    *pfVar11 = local_d0 * fVar2 + local_d4 * fVar3 + fVar6 + 2.0;
    pfVar11[1] = local_dc * fVar2 + local_d0 * fVar3 + fVar6 + 2.0;
    pfVar11[2] = (fVar3 + fVar2) * 0.0 + pfVar11[2];
    iVar12 = *(int *)(*(int *)((int)this + 8) + 0x10) + local_94;
    *(undefined4 *)(iVar12 + 0x28) = 0x3f800000;
    *(float *)(iVar12 + 0x2c) = fVar5;
    *(undefined4 *)(iVar12 + 0x24) = 0xffffffff;
    pfVar11 = (float *)(iVar12 + 0x18);
    *pfVar11 = 2.23;
    *(float *)(iVar12 + 0x1c) = local_ac;
    *(float *)(iVar12 + 0x20) = local_a8;
    fVar2 = *pfVar11;
    fVar3 = *(float *)(iVar12 + 0x1c);
    fVar5 = *(float *)(iVar12 + 0x20) * 0.0;
    *pfVar11 = local_d0 * fVar2 + local_d4 * fVar3 + fVar5 + 2.0;
    *(float *)(iVar12 + 0x1c) = local_dc * fVar2 + local_d0 * fVar3 + fVar5 + 2.0;
    *(float *)(iVar12 + 0x20) = (fVar3 + fVar2) * 0.0 + *(float *)(iVar12 + 0x20);
    fVar2 = pfVar16[1];
    local_10 = pfVar16[2] * 0.5;
    local_68 = pfVar16[0x13] * 0.5;
    local_64 = pfVar16[0x14] * 0.5;
    pfVar11 = (float *)(*(int *)(*(int *)((int)this + 4) + 0x10) + 0x18 + local_70);
    local_48 = *pfVar1 * 0.5 + *pfVar16 * 0.5;
    *pfVar11 = local_48;
    local_44 = local_68 + fVar2 * 0.5;
    pfVar11[1] = local_44;
    local_40 = local_64 + local_10;
    pfVar11[2] = local_40;
    *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x10) + 0x20 + local_70) = 0;
    if (local_8c < 0x240) {
      psVar13 = (short *)(*(int *)(*(int *)this + 0xc) + local_78);
      *psVar13 = sVar18;
      psVar13[3] = sVar18;
      sVar15 = sVar18 + 5;
      psVar13[1] = sVar15;
      psVar13[5] = sVar15;
      psVar13[8] = sVar15;
      psVar13[2] = sVar18 + 4;
      sVar15 = sVar18 + 1;
      psVar13[4] = sVar15;
      psVar13[6] = sVar15;
      psVar13[9] = sVar15;
      sVar15 = sVar18 + 2;
      psVar13[10] = sVar15;
      psVar13[0xc] = sVar15;
      psVar13[0xf] = sVar15;
      sVar15 = sVar18 + 6;
      psVar13[7] = sVar15;
      psVar13[0xb] = sVar15;
      psVar13[0xe] = sVar15;
      psVar13[0xd] = sVar18 + 7;
      psVar13[0x11] = sVar18 + 7;
      psVar13[0x10] = sVar18 + 3;
      puVar14 = (undefined2 *)(*(int *)(*(int *)((int)this + 4) + 0xc) + local_80);
      *puVar14 = 0;
      puVar14[1] = (short)local_a4 + 1;
      puVar14[2] = (short)local_a4 + 2;
      psVar13 = (short *)(*(int *)(*(int *)((int)this + 8) + 0xc) + local_7c);
      sVar15 = (short)local_74;
      psVar13[1] = sVar15 + 1;
      psVar13[2] = sVar15 + 3;
      psVar13[4] = sVar15 + 3;
      *psVar13 = sVar15;
      psVar13[3] = sVar15;
      psVar13[5] = sVar15 + 2;
    }
    local_a4 = local_a4 + 1;
    local_94 = local_94 + 0x30;
    local_70 = local_70 + 0x18;
    local_8c = local_8c + 0x60;
    local_78 = local_78 + 0x24;
    local_80 = local_80 + 6;
    local_7c = local_7c + 0xc;
    local_74 = local_74 + 2;
    sVar18 = sVar18 + 4;
  } while (local_8c < 0x2a0);
  iVar12 = 0;
  do {
    iVar4 = *(int *)(*(int *)((int)this + 4) + 0x10);
    iVar19 = iVar4 + iVar12;
    local_6c = *(float *)(iVar4 + iVar12) * 0.25;
    *(undefined4 *)(iVar19 + 0xc) = 0xffffffff;
    local_68 = *(float *)(iVar19 + 4) * 0.25;
    local_64 = *(float *)(iVar19 + 8) * 0.25;
    FUN_009840b0(&local_f0,&local_6c);
    iVar12 = iVar12 + 0x18;
    *(undefined4 *)(iVar19 + 0x10) = local_f0;
    *(float *)(iVar19 + 0x14) = local_ec;
  } while (iVar12 < 0xc0);
  fVar2 = 0.0;
  local_b8 = 0.0;
  local_d4 = 0.0;
  local_dc = 0.0;
  local_d0 = 1.0;
  local_e0 = 1.0;
  switch(param_1) {
  case 0:
    local_d4 = 0.0;
    local_dc = 0.0;
    local_d0 = 1.0;
    local_e0 = 1.0;
    local_b8 = -2.0;
    goto LAB_009f1330;
  case 1:
    local_b8 = -2.0;
    fVar20 = (float10)fcos((float10)1.5707963705062866);
    local_d0 = (float)fVar20;
    local_e0 = (float)fVar20;
    fVar20 = (float10)fsin((float10)1.5707963705062866);
    local_dc = (float)fVar20;
    local_d4 = (float)-fVar20;
    fVar2 = 4.0;
    break;
  case 2:
    local_b8 = 4.0;
    fVar20 = (float10)fcos((float10)3.1415927410125732);
    local_d0 = (float)fVar20;
    local_e0 = (float)fVar20;
    fVar20 = (float10)fsin((float10)3.1415927410125732);
    local_dc = (float)fVar20;
    local_d4 = (float)-fVar20;
    fVar2 = 4.0;
    break;
  case 3:
    local_b8 = 4.0;
    fVar20 = (float10)fcos((float10)-1.5707963705062866);
    local_d0 = (float)fVar20;
    local_e0 = (float)fVar20;
    fVar20 = (float10)fsin((float10)-1.5707963705062866);
    local_dc = (float)fVar20;
    local_d4 = (float)-fVar20;
LAB_009f1330:
    fVar2 = -2.0;
  }
  fVar2 = fVar2 + (float)local_30 + (float)local_30;
  local_b8 = (float)local_20 + (float)local_20 + local_b8;
  if ((*(ushort *)(*(int *)this + 10) & 0x7fff) != 0) {
    iVar12 = 0;
    uVar17 = 0;
    do {
      pfVar16 = (float *)(*(int *)(*(int *)this + 0x10) + iVar12);
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      uVar17 = uVar17 + 1;
      fVar6 = pfVar16[2] * 0.0;
      iVar12 = iVar12 + 0x18;
      *pfVar16 = fVar5 * local_d4 + fVar3 * local_e0 + fVar6 + fVar2;
      pfVar16[1] = fVar5 * local_d0 + local_dc * fVar3 + fVar6 + local_b8;
      pfVar16[2] = (fVar5 + fVar3) * 0.0 + pfVar16[2];
    } while (uVar17 < (*(ushort *)(*(int *)this + 10) & 0x7fff));
  }
  uVar17 = 0;
  if ((*(ushort *)(*(int *)((int)this + 4) + 10) & 0x7fff) != 0) {
    iVar12 = 0;
    do {
      pfVar16 = (float *)(*(int *)(*(int *)((int)this + 4) + 0x10) + iVar12);
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      uVar17 = uVar17 + 1;
      fVar6 = pfVar16[2] * 0.0;
      iVar12 = iVar12 + 0x18;
      *pfVar16 = fVar5 * local_d4 + fVar3 * local_e0 + fVar6 + fVar2;
      pfVar16[1] = fVar5 * local_d0 + local_dc * fVar3 + fVar6 + local_b8;
      pfVar16[2] = (fVar5 + fVar3) * 0.0 + pfVar16[2];
    } while (uVar17 < (*(ushort *)(*(int *)((int)this + 4) + 10) & 0x7fff));
  }
  uVar17 = 0;
  if ((*(ushort *)(*(int *)((int)this + 8) + 10) & 0x7fff) != 0) {
    iVar12 = 0;
    do {
      pfVar16 = (float *)(*(int *)(*(int *)((int)this + 8) + 0x10) + iVar12);
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      uVar17 = uVar17 + 1;
      fVar6 = pfVar16[2] * 0.0;
      iVar12 = iVar12 + 0x18;
      *pfVar16 = fVar5 * local_d4 + fVar3 * local_e0 + fVar2 + fVar6;
      pfVar16[1] = fVar5 * local_d0 + local_dc * fVar3 + local_b8 + fVar6;
      pfVar16[2] = (fVar5 + fVar3) * 0.0 + pfVar16[2];
    } while (uVar17 < (*(ushort *)(*(int *)((int)this + 8) + 10) & 0x7fff));
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009f15c0 @ 009f15c0 ////

void FUN_009f15c0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_010b6fe0;
  if ((DAT_010b6fe0 != (undefined4 *)0x0) && (DAT_010b6fe0 != (undefined4 *)0x0)) {
    FUN_009f0680(DAT_010b6fe0);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_009f1610 @ 009f1610 ////

void __cdecl FUN_009f1610(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t *_Str1;
  
  pwVar1 = _wcsrchr(param_1,L'\\');
  _Str1 = pwVar1 + 1;
  if (pwVar1 == (wchar_t *)0x0) {
    _Str1 = param_1;
  }
  pwVar1 = _wcsrchr(param_2,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    __wcsicmp(_Str1,pwVar1 + 1);
    return;
  }
  __wcsicmp(_Str1,param_2);
  return;
}


//// FUNCTION FUN_009f16f0 @ 009f16f0 ////

bool __cdecl FUN_009f16f0(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  
  sVar1 = *param_2;
  psVar4 = (short *)0x0;
  psVar3 = (short *)0x0;
  while( true ) {
    if (sVar1 == 0) goto LAB_009f172a;
    sVar2 = *param_1;
    if (sVar2 == 0x2a) break;
    if ((sVar2 != sVar1) && (sVar2 != 0x3f)) {
      return false;
    }
    sVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  sVar1 = *param_2;
  while (sVar1 != 0) {
    sVar2 = *param_1;
    if (sVar2 == 0x2a) {
      psVar3 = param_1 + 1;
      if (*psVar3 == 0) {
        return true;
      }
      param_1 = psVar3;
      psVar4 = param_2 + 1;
    }
    else if ((sVar2 == sVar1) || (sVar2 == 0x3f)) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    else {
      param_1 = psVar3;
      param_2 = psVar4;
      psVar4 = psVar4 + 1;
    }
    sVar1 = *param_2;
  }
LAB_009f172a:
  sVar1 = *param_1;
  while (sVar1 == 0x2a) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return *param_1 == 0;
}


//// FUNCTION FUN_009f1850 @ 009f1850 ////

void __cdecl FUN_009f1850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009f1ab0 @ 009f1ab0 ////

void __cdecl FUN_009f1ab0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009f1ba0 @ 009f1ba0 ////

void __fastcall FUN_009f1ba0(int param_1)

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


//// FUNCTION FUN_009f1bd0 @ 009f1bd0 ////

void * FUN_009f1bd0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009f1c40 @ 009f1c40 ////

void __thiscall FUN_009f1c40(void *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  size_t sVar3;
  
  pwVar1 = _wcsrchr(param_1,L'*');
  if (pwVar1 == (wchar_t *)0x0) {
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(this,(wchar_t *)&lpCaption_00d16918,uVar2);
    sVar3 = FUN_00ace02d((short *)&DAT_00d18358);
    FUN_0040cae0(this,L"*",sVar3);
    sVar3 = FUN_00ace02d(param_1);
    FUN_0040cae0(this,param_1,sVar3);
    return;
  }
  uVar2 = FUN_00ace02d(param_1);
  FUN_004036d0(this,param_1,uVar2);
  return;
}


