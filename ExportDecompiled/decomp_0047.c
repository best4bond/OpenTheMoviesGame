//// FUNCTION FUN_00a111a0 @ 00a111a0 ////

void __fastcall FUN_00a111a0(undefined4 *param_1)

{
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = &DAT_010b9370;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = &DAT_010b9370;
  *param_1 = &PTR_FUN_00d74bb8;
  return;
}


//// FUNCTION FUN_00a111d0 @ 00a111d0 ////

undefined4 * __thiscall FUN_00a111d0(void *this,byte param_1)

{
  FUN_00a11220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a11220 @ 00a11220 ////

void __fastcall FUN_00a11220(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d74bb8;
  if ((undefined1 *)param_1[0x16] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x16]);
  }
  if ((undefined1 *)param_1[0x13] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x13]);
  }
  FUN_00a12850(param_1);
  return;
}


//// FUNCTION FUN_00a11260 @ 00a11260 ////

void __thiscall FUN_00a11260(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x5c) = 0;
  FUN_00a10df0((void *)((int)this + 0x58),(undefined4 *)(param_1 + 0x58));
  *(void **)((int)this + 4) = this;
  *(undefined4 *)((int)this + 0x50) = 0;
  FUN_00a10df0((void *)((int)this + 0x4c),(undefined4 *)(param_1 + 0x4c));
  iVar2 = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (0 < *(int *)((int)this + 0x70)) {
    puVar1 = (undefined4 *)((int)this + 0x74);
    do {
      puVar3 = (undefined4 *)((param_1 - (int)this) + (int)puVar1);
      iVar2 = iVar2 + 1;
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      puVar1[3] = puVar3[3];
      puVar1 = puVar1 + 4;
    } while (iVar2 < *(int *)((int)this + 0x70));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)((int)this + 0xc);
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = *(undefined4 *)((int)puVar1 + (param_1 - (int)this));
      puVar1[1] = *(undefined4 *)((int)puVar1 + (param_1 - (int)this) + 4);
      puVar1 = puVar1 + 2;
    } while (iVar2 < *(int *)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00a11310 @ 00a11310 ////

void __thiscall FUN_00a11310(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(uint **)((int)this + 100) != (uint *)0x0) {
    puVar4 = FUN_00acecd0(*(uint **)((int)this + 100),'%');
    *(uint **)((int)this + 100) = puVar4;
    while (puVar4 != (uint *)0x0) {
      iVar2 = *(int *)((int)this + 100);
      pcVar7 = (char *)(iVar2 + 1);
      *(char **)((int)this + 100) = pcVar7;
      if (*pcVar7 != '%') break;
      puVar4 = (uint *)(iVar2 + 2);
      *(uint **)((int)this + 100) = puVar4;
      puVar4 = FUN_00acecd0(puVar4,'%');
      *(uint **)((int)this + 100) = puVar4;
    }
    if ((*(uint **)((int)this + 100) != (uint *)0x0) &&
       (puVar4 = FUN_00acecd0(*(uint **)((int)this + 100),'%'), puVar4 != (uint *)0x0)) {
      iVar2 = *(int *)((int)this + 100);
      if (*(int *)((int)this + 0x70) == 10) {
        *(undefined4 *)((int)this + 0x70) = 9;
      }
      piVar1 = (int *)(*(int *)((int)this + 0x70) * 0x10 + 0x74 + (int)this);
      *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
      *piVar1 = iVar2;
      piVar1[1] = (int)puVar4 - iVar2;
      piVar1[2] = *(int *)((int)this + 0x50);
      piVar1[3] = param_1[1];
      uVar6 = param_1[1];
      puVar8 = (undefined4 *)*param_1;
      uVar3 = *(uint *)((int)this + 0x50);
      *(uint *)((int)this + 0x50) = uVar3 + uVar6;
      if (*(int *)((int)this + 0x54) < (int)(uVar3 + uVar6)) {
        FUN_00a10e50((int *)((int)this + 0x4c),uVar3);
      }
      puVar9 = (undefined4 *)(uVar3 + *(int *)((int)this + 0x4c));
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(int *)((int)this + 100) = (int)puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a11660 @ 00a11660 ////

void __fastcall FUN_00a11660(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d242cc;
  return;
}


//// FUNCTION FUN_00a11760 @ 00a11760 ////

void FUN_00a11760(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    FID_conflict__wprintf((wchar_t *)&DAT_00e68b1c,iVar2);
    piVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar2 = *piVar1;
  }
  return;
}


//// FUNCTION FUN_00a11b60 @ 00a11b60 ////

void __cdecl FUN_00a11b60(int param_1,void *param_2,void *param_3)

{
  uint uVar1;
  uint *this;
  char *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1c) & 0xf;
  if ((uVar1 != 1) && (uVar1 != 0xc)) {
    pcVar2 = *(char **)(param_1 + 0x10);
    this = FUN_00a10f50(param_3,(int *)&DAT_00e6d570);
    FUN_00a11000(this,pcVar2);
    return;
  }
  pcVar2 = (char *)FUN_00a9db30(param_2,s_P4EDITOR_00e68b80);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = _getenv(s_EDITOR_00e68b78), pcVar2 == (char *)0x0)) {
    pcVar2 = _getenv(s_SHELL_00e68b70);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = s_notepad_00e68b68;
    }
    else {
      pcVar2 = &DAT_00e68b64;
    }
  }
  FUN_00a11f70(pcVar2,*(wchar_t **)(param_1 + 0x10),(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,
               (char *)0x0,param_3);
  return;
}


//// FUNCTION FUN_00a11f70 @ 00a11f70 ////

void __cdecl
FUN_00a11f70(char *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5,
            char *param_6,void *param_7)

{
  int iVar1;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  wchar_t *local_80 [32];
  
  local_84 = 0;
  local_88 = 0;
  local_8c = &DAT_010b9370;
  _fflush((FILE *)&DAT_00e99dd0);
  FUN_00a9f810();
  if (param_6 == (char *)0x0) {
    FUN_00a10d90(&local_8c,param_1);
    iVar1 = FUN_00a9c9e0(&local_8c,local_80,0x20);
    if (param_2 != (wchar_t *)0x0) {
      local_80[iVar1] = param_2;
      iVar1 = iVar1 + 1;
    }
    if (param_3 != (wchar_t *)0x0) {
      local_80[iVar1] = param_3;
      iVar1 = iVar1 + 1;
    }
    if (param_4 != (wchar_t *)0x0) {
      local_80[iVar1] = param_4;
      iVar1 = iVar1 + 1;
    }
    if (param_5 != (wchar_t *)0x0) {
      local_80[iVar1] = param_5;
      iVar1 = iVar1 + 1;
    }
    local_80[iVar1] = (wchar_t *)0x0;
    iVar1 = FUN_00c9b73e(0,local_80[0],local_80);
    if (iVar1 < 0) {
      FUN_00a9f950(param_7,(char *)local_80[0],(char *)param_2);
    }
    FUN_00a9f820();
    if (local_8c != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  else {
    FUN_00a10d90(&local_8c,param_1);
    if (param_2 != (wchar_t *)0x0) {
      FUN_00a10d90(&local_8c,&DAT_00e68be0);
      FUN_00a10d90(&local_8c,(char *)param_2);
      FUN_00a10d90(&local_8c,&DAT_00e68bdc);
    }
    if (param_3 != (wchar_t *)0x0) {
      FUN_00a10d90(&local_8c,&DAT_00e68be0);
      FUN_00a10d90(&local_8c,(char *)param_3);
      FUN_00a10d90(&local_8c,&DAT_00e68bdc);
    }
    if (param_4 != (wchar_t *)0x0) {
      FUN_00a10d90(&local_8c,&DAT_00e68be0);
      FUN_00a10d90(&local_8c,(char *)param_4);
      FUN_00a10d90(&local_8c,&DAT_00e68bdc);
    }
    if (param_5 != (wchar_t *)0x0) {
      FUN_00a10d90(&local_8c,&DAT_00e68be0);
      FUN_00a10d90(&local_8c,(char *)param_5);
      FUN_00a10d90(&local_8c,&DAT_00e68bdc);
    }
    FUN_00a10d90(&local_8c,&DAT_00e68bd8);
    FUN_00a10d90(&local_8c,param_6);
    FID_conflict___wsystem(local_8c);
    FUN_00a9f820();
    if (local_8c != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  return;
}


//// FUNCTION FUN_00a12230 @ 00a12230 ////

undefined4 * __fastcall FUN_00a12230(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00d74bd0;
  puVar1 = operator_new(0x180);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00a9fa70(puVar1);
    param_1[1] = puVar1;
    param_1[2] = 0;
    return param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


//// FUNCTION FUN_00a12270 @ 00a12270 ////

undefined4 * __thiscall FUN_00a12270(void *this,byte param_1)

{
  FUN_00a122e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a12290 @ 00a12290 ////

undefined4 * __thiscall FUN_00a12290(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  *(undefined ***)this = &PTR_FUN_00d74bd0;
  puVar1 = operator_new(0x180);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00a9fa70(puVar1);
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 *)((int)this + 8) = param_1;
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  return this;
}


//// FUNCTION FUN_00a122e0 @ 00a122e0 ////

void __fastcall FUN_00a122e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d74bd0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  FUN_00a12850(param_1);
  return;
}


//// FUNCTION FUN_00a12330 @ 00a12330 ////

void __thiscall FUN_00a12330(void *this,int *param_1)

{
  FUN_00a9fde0(*(void **)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00a12360 @ 00a12360 ////

void __thiscall FUN_00a12360(void *this,char *param_1,int param_2)

{
  FUN_00a9fe30(*(void **)((int)this + 4),param_1,param_2);
  return;
}


//// FUNCTION FUN_00a12380 @ 00a12380 ////

void __thiscall FUN_00a12380(void *this,int *param_1)

{
  FUN_00a9ffc0(*(void **)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00a12850 @ 00a12850 ////

void __fastcall FUN_00a12850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d74be8;
  return;
}


//// FUNCTION FUN_00a12860 @ 00a12860 ////

undefined4 * __thiscall FUN_00a12860(void *this,byte param_1)

{
  FUN_00a12850(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a12950 @ 00a12950 ////

void __thiscall FUN_00a12950(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  (**(code **)(*(int *)this + 8))(&local_8,&DAT_010b9368);
  return;
}


//// FUNCTION FUN_00a12990 @ 00a12990 ////

void __thiscall FUN_00a12990(void *this,char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *local_28;
  int local_24;
  undefined1 local_20 [32];
  
  FUN_00a10cd0(local_20,param_2);
  uVar2 = 0xffffffff;
  local_28 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_24 = ~uVar2 - 1;
  (**(code **)(*(int *)this + 8))(&local_28,local_20);
  return;
}


//// FUNCTION FUN_00a129e0 @ 00a129e0 ////

void __thiscall FUN_00a129e0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *local_10;
  int local_c;
  char *local_8;
  int local_4;
  
  if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffff;
    local_10 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    local_c = ~uVar2 - 1;
    local_8 = param_1;
    uVar2 = 0xffffffff;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar2 - 1;
    (**(code **)(*(int *)this + 8))(&local_8,&local_10);
  }
  return;
}


//// FUNCTION FUN_00a12aa0 @ 00a12aa0 ////

void __thiscall FUN_00a12aa0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  (**(code **)(*(int *)this + 0xc))(&local_8);
  return;
}


//// FUNCTION FUN_00a12ad0 @ 00a12ad0 ////

void __thiscall FUN_00a12ad0(void *this,char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    local_8 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar2 - 1;
    (**(code **)(*(int *)this + 8))(&local_8,param_2);
  }
  return;
}


//// FUNCTION FUN_00a12b10 @ 00a12b10 ////

void __thiscall FUN_00a12b10(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  (**(code **)(*(int *)this + 8))(&local_8,param_2);
  return;
}


//// FUNCTION FUN_00a12b50 @ 00a12b50 ////

void __thiscall FUN_00a12b50(void *this,int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *local_8;
  int local_4;
  
  if (0 < param_1) {
    do {
      local_8 = (char *)*param_2;
      uVar2 = 0xffffffff;
      pcVar3 = local_8;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      local_4 = ~uVar2 - 1;
      (**(code **)(*(int *)this + 8))(&DAT_010b9368,&local_8);
      param_2 = param_2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


//// FUNCTION FUN_00a12c30 @ 00a12c30 ////

void __thiscall FUN_00a12c30(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_48 [72];
  
  iVar1 = *(int *)this;
  piVar2 = FUN_00a13040(local_48,param_1,param_2);
  (**(code **)(iVar1 + 4))(piVar2);
  return;
}


//// FUNCTION FUN_00a12c90 @ 00a12c90 ////

void __thiscall FUN_00a12c90(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  (**(code **)(*(int *)this + 4))(&local_8);
  return;
}


//// FUNCTION FUN_00a12cc0 @ 00a12cc0 ////

int __thiscall FUN_00a12cc0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *local_8;
  int local_4;
  
  uVar3 = 0xffffffff;
  local_8 = param_1;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar3 - 1;
  iVar2 = (**(code **)(*(int *)this + 4))(&local_8);
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x14))(&stack0xfffffff4,param_1);
  }
  return iVar2;
}


//// FUNCTION FUN_00a12f40 @ 00a12f40 ////

void FUN_00a12f40(undefined4 *param_1,void *param_2)

{
  uint *this;
  
  this = FUN_00a10f50(param_2,(int *)&DAT_00e6de90);
  FUN_00a10fe0(this,param_1);
  return;
}


//// FUNCTION FUN_00a13040 @ 00a13040 ////

int * __thiscall FUN_00a13040(void *this,undefined4 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_20;
  int local_1c;
  
  iVar3 = param_1[1];
  pcVar1 = (char *)((int)this + 8);
  pcVar6 = (char *)*param_1;
  pcVar7 = pcVar1;
  for (uVar4 = iVar3 + 1U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = iVar3 + 1U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_00a10cd0(&local_20,param_2);
  uVar4 = 0xffffffff;
  pcVar6 = pcVar1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  pcVar6 = pcVar1 + (~uVar4 - 1);
  for (uVar5 = local_1c + 1U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)local_20;
    local_20 = local_20 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = local_1c + 1U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *local_20;
    local_20 = local_20 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = pcVar1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  *(char **)this = pcVar1;
  *(uint *)((int)this + 4) = ~uVar4 - 1;
  return this;
}


//// FUNCTION FUN_00a130c0 @ 00a130c0 ////

bool __thiscall FUN_00a130c0(void *this,int param_1)

{
  return param_1 == *(int *)((int)this + 0x10);
}


//// FUNCTION FUN_00a13280 @ 00a13280 ////

void __cdecl FUN_00a13280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a13360 @ 00a13360 ////

void __fastcall FUN_00a13360(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a13420 @ 00a13420 ////

void __cdecl FUN_00a13420(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a135a0 @ 00a135a0 ////

undefined4 * __thiscall FUN_00a135a0(void *this,byte param_1)

{
  FUN_00a13360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a13610 @ 00a13610 ////

void * FUN_00a13610(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a13640 @ 00a13640 ////

undefined4 * __cdecl FUN_00a13640(undefined4 *param_1)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_009b91e0();
  sVar1 = FUN_00ace02d(L"\\The Movies\\TempTextures\\");
  FUN_0040cae0(&local_20,L"\\The Movies\\TempTextures\\",sVar1);
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


//// FUNCTION FUN_00a136d0 @ 00a136d0 ////

void __fastcall FUN_00a136d0(int param_1)

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


//// FUNCTION FUN_00a13700 @ 00a13700 ////

undefined4 * FUN_00a13700(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a13730 @ 00a13730 ////

void __fastcall FUN_00a13730(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - iVar1 >> 2;
    }
    if (iVar3 <= iVar4) break;
    pvVar2 = *(void **)(iVar4 * 4 + iVar1);
    if (pvVar2 != (void *)0x0) {
      FUN_0099b400(pvVar2);
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}


//// FUNCTION FUN_00a13780 @ 00a13780 ////

void __fastcall FUN_00a13780(int param_1)

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


//// FUNCTION FUN_00a137b0 @ 00a137b0 ////

void __fastcall FUN_00a137b0(int param_1)

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


//// FUNCTION FUN_00a137e0 @ 00a137e0 ////

void __fastcall FUN_00a137e0(int param_1)

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


//// FUNCTION FUN_00a13810 @ 00a13810 ////

void __fastcall FUN_00a13810(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9808;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a13730(param_1);
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a13870 @ 00a13870 ////

void FUN_00a13870(void)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (DAT_010b937c == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010b9380 - (int)DAT_010b937c >> 2;
    }
    if (iVar1 <= iVar2) break;
    _Memory = *(undefined4 **)((int)DAT_010b937c + iVar2 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_00a13360(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)DAT_010b937c + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  }
  if (DAT_010b937c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b937c);
  }
  DAT_010b937c = (void *)0x0;
  DAT_010b9380 = 0;
  DAT_010b9384 = 0;
  return;
}


//// FUNCTION FUN_00a138f0 @ 00a138f0 ////

void FUN_00a138f0(void)

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
  puStack_8 = &LAB_00cf9828;
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


//// FUNCTION FUN_00a139b0 @ 00a139b0 ////

void __thiscall FUN_00a139b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a138f0();
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
      _Dst = FUN_00a13700((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a13610(param_1,iVar5,param_1 + param_2);
      FUN_00a13700(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a13280(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a13610(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a13420(param_1,(int)pvVar3,iVar5);
    FUN_00a13280(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a13c40 @ 00a13c40 ////

void __fastcall FUN_00a13c40(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a13c60 @ 00a13c60 ////

void __thiscall FUN_00a13c60(void *this,undefined4 *param_1)

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
  FUN_0094a860(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a13d00 @ 00a13d00 ////

void __thiscall FUN_00a13d00(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    param_1 = param_1 + -(int)pcVar1;
    if (param_1 != (char *)0x0) {
      param_1 = FUN_0099bb50(pcVar3,0,0,0,'\0');
      FUN_00a13c60(this,&param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00a13d50 @ 00a13d50 ////

void __thiscall FUN_00a13d50(void *this,int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int local_2c;
  int local_28;
  undefined4 local_24;
  char local_20 [32];
  
  if (*(int *)((int)this + 0x10) != param_1) {
    *(int *)((int)this + 0x10) = param_1;
    FUN_00a13730((int)this);
    FUN_009d9820();
    pcVar8 = param_2;
    iVar9 = 0;
    if (param_1 != 0) {
      iVar10 = *(int *)(param_1 + 0xcc);
      if (iVar10 != 0) {
        iVar2 = *(int *)(iVar10 + 0x28);
        local_28 = 0;
        if (0 < iVar2) {
          do {
            iVar5 = iVar9 * 0x2c + *(int *)(iVar10 + 0x2c);
            if (*(int *)(iVar5 + 4) == 8) {
              local_28 = *(int *)(iVar5 + 8);
              iVar9 = iVar2;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar2);
        }
        local_24 = (char *)0x0;
        if (0 < iVar2) {
          local_2c = 0;
          do {
            iVar9 = *(int *)(iVar10 + 0x2c) + local_2c;
            switch(*(undefined4 *)(*(int *)(iVar10 + 0x2c) + 4 + local_2c)) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
              pcVar7 = (char *)(iVar9 + 0xc);
              if (pcVar7 != (char *)0x0) {
                pcVar6 = pcVar7;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                param_2 = pcVar6 + -(iVar9 + 0xd);
                if (param_2 != (char *)0x0) {
                  param_2 = FUN_0099bb50(pcVar7,0,0,0,'\0');
                  FUN_00a13c60(this,&param_2);
                }
              }
              break;
            case 7:
              _sprintf(local_20,(char *)(iVar9 + 0xc));
              pcVar7 = local_20;
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              if ((int)pcVar7 - (int)(local_20 + 1) != 0) {
                local_20[((int)pcVar7 - (int)(local_20 + 1)) + -4] = '\0';
                pcVar7 = local_20;
                do {
                  pcVar6 = pcVar7;
                  pcVar7 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                _sprintf(pcVar6,"%s%s",&DAT_00e68c00 + local_28 * 4,&DAT_00d1ef54);
                FUN_00a13d00(this,local_20);
                if ((pcVar8 == (char *)0x0) || (*(float *)(pcVar8 + 0x11c) != 0.0)) {
                  _sprintf(pcVar6,"_gy.dds");
                  FUN_00a13d00(this,local_20);
                }
                _sprintf(pcVar6,"a.dds");
                FUN_00a13d00(this,local_20);
              }
            }
            iVar10 = *(int *)(param_1 + 0xcc);
            local_24 = local_24 + 1;
            local_2c = local_2c + 0x2c;
          } while ((int)local_24 < *(int *)(iVar10 + 0x28));
        }
      }
      iVar9 = 0;
      if ((*(uint *)(param_1 + 0xa4) >> 2 & 0x1f) != 0) {
        iVar10 = 0;
        do {
          param_2 = *(char **)(*(int *)(param_1 + 0xc4) + 0x2c + iVar10);
          pcVar8 = (char *)(*(int *)(param_1 + 0xc4) + iVar10);
          bVar4 = false;
          if (((pcVar8[0x50] & 1U) != 0) && (param_2 == *(char **)(pcVar8 + 0x28))) {
            bVar4 = true;
          }
          if (((pcVar8[0x50] & 2U) == 0) && (!bVar4)) {
            if (*(int *)(pcVar8 + 0x28) < 2) {
              _sprintf(local_20,pcVar8);
            }
            else {
              FUN_009ad980(&DAT_010b9588,local_20,pcVar8,(int *)&param_2);
            }
            local_24 = local_20;
            do {
              cVar1 = *local_24;
              local_24 = local_24 + 1;
            } while (cVar1 != '\0');
            local_24 = local_24 + -(int)(local_20 + 1);
            if (local_24 != (char *)0x0) {
              local_24 = FUN_0099bb50(local_20,0,0,0,'\0');
              iVar2 = *(int *)((int)this + 4);
              if ((iVar2 == 0) ||
                 ((uint)(*(int *)((int)this + 0xc) - iVar2 >> 2) <=
                  (uint)(*(int *)((int)this + 8) - iVar2 >> 2))) {
                FUN_0094a860(this,*(undefined4 **)((int)this + 8),1,&local_24);
              }
              else {
                puVar3 = *(undefined4 **)((int)this + 8);
                *puVar3 = local_24;
                *(undefined4 **)((int)this + 8) = puVar3 + 1;
              }
            }
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0x78;
        } while (iVar9 < (int)(*(uint *)(param_1 + 0xa4) >> 2 & 0x1f));
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a14060 @ 00a14060 ////

void __thiscall FUN_00a14060(void *this,byte *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint _Size;
  void *pvVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  char in_stack_00000024;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9848;
  local_c = ExceptionList;
  local_4 = 0;
  iVar7 = 0;
  do {
    if (DAT_010b937c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)DAT_010b9380 - DAT_010b937c >> 2;
    }
    local_10 = this;
    if (iVar3 <= iVar7) {
      ExceptionList = &local_c;
      piVar5 = operator_new(0x24);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar1 = piVar5 + 3;
        *piVar5 = (int)piVar1;
        *(undefined1 *)piVar1 = 0;
        piVar5[2] = 0x14;
        piVar5[1] = 0;
        *(undefined1 *)piVar1 = 0;
        *(undefined1 *)(piVar5 + 8) = 0;
        *(undefined1 *)((int)piVar5 + 0x21) = 0;
      }
      local_10 = piVar5;
      if ((uint)piVar5[2] <= param_2) {
        if (0x14 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar5);
        }
        _Size = param_2 + 0x20 & 0xffffffe0;
        piVar5[2] = _Size;
        pvVar6 = _malloc(_Size);
        *piVar5 = (int)pvVar6;
      }
      _strncpy((char *)*piVar5,(char *)param_1,param_2);
      piVar5[1] = param_2;
      *(undefined1 *)(param_2 + *piVar5) = 0;
      if (in_stack_00000024 == '\0') {
        *(undefined1 *)((int)piVar5 + 0x21) = 1;
      }
      else {
        *(undefined1 *)(piVar5 + 8) = 1;
      }
      if ((DAT_010b937c == 0) ||
         ((uint)(DAT_010b9384 - DAT_010b937c >> 2) <= (uint)((int)DAT_010b9380 - DAT_010b937c >> 2))
         ) {
        FUN_00a139b0(&DAT_010b9378,DAT_010b9380,1,&local_10);
      }
      else {
        *DAT_010b9380 = piVar5;
        DAT_010b9380 = DAT_010b9380 + 1;
      }
      goto LAB_00a141d9;
    }
    pbVar4 = (byte *)**(undefined4 **)(DAT_010b937c + iVar7 * 4);
    pbVar8 = param_1;
    do {
      bVar2 = *pbVar4;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_00a140cb:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00a140d0;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00a140cb;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_00a140d0:
    if (iVar3 == 0) {
      if (in_stack_00000024 == '\0') {
        ExceptionList = &local_c;
        *(undefined1 *)(*(int *)(DAT_010b937c + iVar7 * 4) + 0x21) = 1;
      }
      else {
        ExceptionList = &local_c;
        *(undefined1 *)(*(int *)(DAT_010b937c + iVar7 * 4) + 0x20) = 1;
      }
LAB_00a141d9:
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    iVar7 = iVar7 + 1;
  } while( true );
}


//// FUNCTION FUN_00a14200 @ 00a14200 ////

void FUN_00a14200(void)

{
  char cVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte *_Dest;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  wchar_t *_Str;
  char *pcVar7;
  bool bVar8;
  uint _Size;
  int local_1cc;
  int local_1c8;
  wchar_t *local_1c0;
  uint local_1bc;
  uint local_1b8;
  wchar_t local_1b4 [10];
  wchar_t *local_1a0 [2];
  uint local_198;
  void *local_180 [2];
  uint local_178;
  undefined4 local_160 [18];
  int local_118;
  int local_114;
  char local_10c [17];
  char local_fb [239];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9881;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009f2760(local_160);
  local_4 = 0;
  FUN_00a13640(local_1a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009f34b0(local_160,L"*.dds",local_1a0[0]);
  if (local_118 == 0) {
    local_1cc = 0;
  }
  else {
    local_1cc = local_114 - local_118 >> 2;
  }
  local_1c8 = 0;
  if (0 < local_1cc) {
    do {
      _Str = *(wchar_t **)(local_118 + local_1c8 * 4);
      pwVar2 = _wcsrchr(_Str,L'\\');
      if (pwVar2 != (wchar_t *)0x0) {
        _Str = pwVar2 + 1;
      }
      local_1c0 = local_1b4;
      local_1b4[0] = L'\0';
      local_1bc = 0;
      local_1b8 = 10;
      uVar3 = FUN_00ace02d(_Str);
      if (local_1b8 <= uVar3) {
        if (10 < local_1b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c0);
        }
        local_1b8 = uVar3 + 0x20 & 0xffffffe0;
        local_1c0 = _malloc(local_1b8 * 2);
      }
      _wcsncpy(local_1c0,_Str,uVar3);
      local_1c0[uVar3] = L'\0';
      local_4._0_1_ = 2;
      local_1bc = uVar3;
      puVar4 = FUN_009ac940(local_180,&local_1c0);
      _sprintf(local_10c,(char *)*puVar4);
      if (0x14 < local_178) {
                    /* WARNING: Subroutine does not return */
        _free(local_180[0]);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (10 < local_1b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c0);
      }
      pcVar5 = local_10c;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (0x11 < (int)pcVar5 - (int)(local_10c + 1)) {
        iVar6 = 9;
        bVar8 = true;
        pcVar5 = local_fb;
        pcVar7 = "body.dds";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar8 = *pcVar5 == *pcVar7;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          local_fb[0] = '\0';
          _Dest = &stack0xfffffe0c;
          pcVar5 = local_10c;
          _Size = 0x14;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          uVar3 = (int)pcVar5 - (int)(local_10c + 1);
          if (0x13 < uVar3) {
            _Size = uVar3 + 0x20 & 0xffffffe0;
            _Dest = _malloc(_Size);
          }
          _strncpy((char *)_Dest,local_10c,uVar3);
          _Dest[uVar3] = 0;
          this = extraout_ECX;
        }
        else {
          iVar6 = 9;
          bVar8 = true;
          pcVar5 = local_fb;
          pcVar7 = "head.dds";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar8 = *pcVar5 == *pcVar7;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (!bVar8) goto LAB_00a1448f;
          local_fb[0] = '\0';
          _Dest = &stack0xfffffe0c;
          pcVar5 = local_10c;
          uVar3 = 0;
          _Size = 0x14;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004015d0(&stack0xfffffe00,local_10c,(int)pcVar5 - (int)(local_10c + 1));
          this = extraout_ECX_00;
        }
        FUN_00a14060(this,_Dest,uVar3,_Size);
      }
LAB_00a1448f:
      local_1c8 = local_1c8 + 1;
    } while (local_1c8 < local_1cc);
  }
  if (local_198 < 0xb) {
    local_4 = 0xffffffff;
    FUN_009f2320(local_160);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1a0[0]);
}


//// FUNCTION FUN_00a144f0 @ 00a144f0 ////

void __thiscall FUN_00a144f0(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00a4c710(*(void **)((int)this + 100),param_2,param_1,0,param_3);
  return;
}


//// FUNCTION FUN_00a14510 @ 00a14510 ////

void __fastcall FUN_00a14510(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar1 = FUN_009ac120((char *)(param_1 + 9),"_");
  if (iVar1 != -1) {
    pcVar3 = (char *)(iVar1 + 10 + param_1);
    iVar1 = 6;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "earth";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      return;
    }
    iVar1 = 5;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "sand";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 2;
      return;
    }
    iVar1 = 6;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "water";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 3;
      return;
    }
    iVar1 = 6;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "grass";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 4;
      return;
    }
    iVar1 = 6;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "metal";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 5;
      return;
    }
    iVar1 = 5;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "wood";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 6;
      return;
    }
    iVar1 = 7;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "carpet";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 7;
      return;
    }
    iVar1 = 9;
    bVar5 = true;
    pcVar2 = pcVar3;
    pcVar4 = "concrete";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar2 == *pcVar4;
      pcVar2 = pcVar2 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 8;
      return;
    }
    iVar1 = 5;
    bVar5 = true;
    pcVar2 = "tile";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *pcVar3 == *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar5);
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x68) = 9;
    }
  }
  return;
}


//// FUNCTION FUN_00a14640 @ 00a14640 ////

void __thiscall FUN_00a14640(void *this,float *param_1)

{
  *(float *)((int)this + 0x24) =
       *param_1 * *(float *)this +
       *(float *)((int)this + 0x18) * param_1[2] + *(float *)((int)this + 0xc) * param_1[1] +
       *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) =
       *(float *)((int)this + 0x1c) * param_1[2] +
       *(float *)((int)this + 4) * *param_1 + *(float *)((int)this + 0x10) * param_1[1] +
       *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) =
       *(float *)((int)this + 0x20) * param_1[2] +
       *(float *)((int)this + 8) * *param_1 + *(float *)((int)this + 0x14) * param_1[1] +
       *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_00a146b0 @ 00a146b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a146b0(void)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf989b;
  local_c = ExceptionList;
  if (DAT_00e68bfa != '\0') {
    ExceptionList = &local_c;
    this = operator_new(0x7c);
    local_4 = 0;
    if (this == (void *)0x0) {
      DAT_010b93a0 = (int *)0x0;
    }
    else {
      DAT_010b93a0 = FUN_009a8a00(this,"default",0x28,0,0);
    }
    local_4 = 0xffffffff;
    DAT_010b939c = FUN_0099bb50("room_no_select.dds",0,0,0,'\0');
    DAT_010b938c = FUN_0099bb50("room_default.dds",0,0,0,'\0');
    DAT_010b9390 = FUN_0099bb50("room_corridor.dds",0,0,0,'\0');
    DAT_010b9394 = FUN_0099bb50("room_door.dds",0,0,0,'\0');
    DAT_010b9398 = FUN_0099bb50("room_dot.dds",0,0,0,'\0');
    _DAT_010b9388 = FUN_0040a690(1,'\x01');
    *(byte *)(_DAT_010b9388 + 9) = *(byte *)(_DAT_010b9388 + 9) | 0x40;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a147d0 @ 00a147d0 ////

void __fastcall FUN_00a147d0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 100));
}


//// FUNCTION FUN_00a14810 @ 00a14810 ////

void __thiscall FUN_00a14810(void *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf98bb;
  local_c = ExceptionList;
  if (((*(uint *)((int)this + 0x10) & 1) == 0) &&
     ((param_1 == 0 || ((*(byte *)(param_1 + 0xe4) & 0x40) != 0)))) {
    ExceptionList = &local_c;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 != 0) {
      local_14 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        param_1 = 0;
        do {
          pcVar1 = (char *)(*(int *)(iVar2 + 0xc) + param_1 + 0xc);
          iVar3 = _strncmp(pcVar1,"_fp_tt_",7);
          if (iVar3 != 0) {
            iVar3 = 8;
            bVar8 = true;
            pcVar6 = pcVar1;
            pcVar7 = "_fp_min";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar6 == *pcVar7;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar8);
            if (!bVar8) {
              iVar3 = 8;
              bVar8 = true;
              pcVar6 = pcVar1;
              pcVar7 = "_fp_max";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *pcVar6 == *pcVar7;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar8);
              if ((!bVar8) && (iVar3 = _strncmp(pcVar1,"_fp_",4), iVar3 == 0)) {
                *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
              }
            }
          }
          local_14 = local_14 + 1;
          param_1 = param_1 + 0x2c;
        } while (local_14 < *(int *)(iVar2 + 8));
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        pvVar4 = operator_new(iVar3 * 8);
        local_4 = 0;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          FUN_00401380(pvVar4,8,iVar3,&LAB_00a146a0);
        }
        *(void **)((int)this + 0xc) = pvVar4;
        *(undefined4 *)((int)this + 8) = 0;
        local_14 = 0;
        if (0 < *(int *)(iVar2 + 8)) {
          param_1 = 0;
          do {
            iVar5 = *(int *)(iVar2 + 0xc) + param_1;
            pcVar1 = (char *)(iVar5 + 0xc);
            iVar3 = _strncmp(pcVar1,"_fp_tt_",7);
            if (iVar3 != 0) {
              iVar3 = 8;
              bVar8 = true;
              pcVar6 = pcVar1;
              pcVar7 = "_fp_min";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar8 = *pcVar6 == *pcVar7;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar8);
              if (!bVar8) {
                iVar3 = 8;
                bVar8 = true;
                pcVar6 = pcVar1;
                pcVar7 = "_fp_max";
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar8 = *pcVar6 == *pcVar7;
                  pcVar6 = pcVar6 + 1;
                  pcVar7 = pcVar7 + 1;
                } while (bVar8);
                if ((!bVar8) && (iVar3 = _strncmp(pcVar1,"_fp_",4), iVar3 == 0)) {
                  *(int *)(*(int *)((int)this + 0xc) + 4 + *(int *)((int)this + 8) * 8) = iVar5;
                  iVar3 = _strncmp(pcVar1,"_fp_door",8);
                  if (iVar3 == 0) {
                    *(undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 8) = 0;
                  }
                  iVar3 = _strncmp(pcVar1,"_fp_dot",7);
                  if (iVar3 == 0) {
                    *(undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 8) = 1;
                  }
                  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
                }
              }
            }
            local_14 = local_14 + 1;
            param_1 = param_1 + 0x2c;
          } while (local_14 < *(int *)(iVar2 + 8));
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a14a50 @ 00a14a50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a14a50(void)

{
  int iVar1;
  undefined1 uVar2;
  int *_Memory;
  LONG LVar3;
  undefined4 *puVar4;
  
  if (DAT_00e68bfa != '\0') {
    puVar4 = &DAT_010b938c;
    do {
      if ((void *)*puVar4 != (void *)0x0) {
        FUN_0099b400((void *)*puVar4);
        *puVar4 = 0;
      }
      _Memory = DAT_010b93a0;
      puVar4 = puVar4 + 1;
    } while ((int)puVar4 < 0x10b93a0);
    if (DAT_010b93a0 != (int *)0x0) {
      iVar1 = DAT_010b93a0[1];
      DAT_010b93a0[1] = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      DAT_010b93a0 = (int *)0x0;
    }
    puVar4 = _DAT_010b9388;
    if (_DAT_010b9388 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(_DAT_010b9388 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      _DAT_010b9388 = (undefined4 *)0x0;
      DAT_0105b588 = uVar2;
    }
    _DAT_010b93ac = 0;
    *DAT_010b93a8 = 0;
    _DAT_010b93cc = 0;
    *DAT_010b93c8 = 0;
    _DAT_010b93ec = 0;
    *DAT_010b93e8 = 0;
    _DAT_010b940c = 0;
    *DAT_010b9408 = 0;
  }
  return;
}


//// FUNCTION FUN_00a14b30 @ 00a14b30 ////

undefined4 * __fastcall FUN_00a14b30(undefined4 *param_1)

{
  float10 fVar1;
  
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[9] = param_1 + 0xc;
  param_1[0xb] = 10;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 10;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x14;
  param_1[0x21] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[10] = 0;
  *(undefined2 *)param_1[9] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)param_1[0x11] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = param_1[0x1b] & 0xffffffc1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  fVar1 = FUN_004012c0(0.0);
  param_1[0x21] = (float)fVar1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1a] = 1;
  param_1[0x1b] = param_1[0x1b] & 0xfffff03f | 1;
  return param_1;
}


//// FUNCTION FUN_00a14bd0 @ 00a14bd0 ////

void __fastcall FUN_00a14bd0(int param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  undefined4 local_50;
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
  puStack_8 = &LAB_00cf98f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009e6d20(*(void **)(param_1 + 100),&local_7c,&local_64);
  local_68 = 0.0;
  local_6c = (local_78 - 1.0) - (local_60 + 1.0);
  local_70 = (local_64 - 1.0) - (local_7c + 1.0);
  fVar2 = local_60 - local_78;
  local_58 = local_64 - local_7c;
  fVar10 = FUN_009a4140(&local_70);
  fVar10 = FUN_004012c0((float)fVar10);
  pfVar1 = (float *)(param_1 + 0x70);
  *pfVar1 = local_7c;
  *(float *)(param_1 + 0x84) = (float)fVar10;
  *(float *)(param_1 + 0x74) = local_78;
  *(undefined4 *)(param_1 + 0x78) = local_74;
  *(undefined4 *)(param_1 + 0x80) = 0x3fc00000;
  if (0.3 <= ABS(1.0 - local_58 / fVar2)) {
    if (fVar2 <= local_58) {
      *(float *)(param_1 + 0x7c) = local_58;
      fVar10 = FUN_004012c0(0.0);
      *(float *)(param_1 + 0x84) = (float)fVar10;
      local_58 = local_7c;
      local_54 = fVar2 * 0.5 + local_78;
      local_50 = local_74;
      goto LAB_00a14dc0;
    }
    *(float *)(param_1 + 0x7c) = fVar2;
    fVar10 = FUN_004012c0(-1.5707964);
    *(float *)(param_1 + 0x84) = (float)fVar10;
    local_50 = 0;
    local_58 = local_58 * 0.5 + local_7c;
    *pfVar1 = local_58;
    local_54 = local_60;
    *(float *)(param_1 + 0x74) = local_60;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    *(float *)(param_1 + 0x7c) =
         SQRT(local_6c * local_6c + local_68 * local_68 + local_70 * local_70);
    fVar10 = FUN_004012c0(-0.7853982);
    *(float *)(param_1 + 0x84) = (float)fVar10;
    local_58 = local_7c;
    local_54 = local_60;
    local_50 = 0;
LAB_00a14dc0:
    *pfVar1 = local_58;
    *(float *)(param_1 + 0x74) = local_54;
    *(undefined4 *)(param_1 + 0x78) = local_50;
  }
  pcVar6 = (char *)(param_1 + 4);
  iVar4 = FUN_009ac120(pcVar6,"hall");
  if (iVar4 != -1) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 4;
  }
  bVar3 = false;
  iVar4 = FUN_009ac120(pcVar6,"_fire");
  if (iVar4 == -1) {
    iVar4 = FUN_009ac120(pcVar6,"_canit");
    if (iVar4 != -1) goto LAB_00a14e18;
  }
  else {
LAB_00a14e18:
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x80;
    bVar3 = true;
  }
  iVar4 = 0x12;
  bVar9 = true;
  pcVar8 = "room_ss_starmaker";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar6 == *pcVar8;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if ((bVar9) &&
     (((DAT_010b951c == 0 || (DAT_010b9520 - DAT_010b951c >> 2 == 0)) && (DAT_0105bed2 == '\0')))) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 4;
  }
  pcVar6 = (char *)(param_1 + 4);
  iVar4 = 0xf;
  bVar9 = true;
  pcVar8 = pcVar6;
  pcVar7 = "room_cso_blank";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 4;
  }
  iVar4 = 0x12;
  bVar9 = true;
  pcVar8 = pcVar6;
  pcVar7 = "room_prod_release";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x100;
    bVar3 = true;
  }
  iVar4 = 0x14;
  bVar9 = true;
  pcVar8 = pcVar6;
  pcVar7 = "room_preprod_extras";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (!bVar9) {
    pcVar8 = "Croom_preprod_crew";
    iVar4 = 0x12;
    bVar9 = true;
    do {
      pcVar8 = pcVar8 + 1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar6 == *pcVar8;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (!bVar9) goto LAB_00a14eba;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x400;
LAB_00a14eba:
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((bVar3) && (DAT_010b9448 == '\0')) {
    local_4c = local_40;
    DAT_010b9448 = '\x01';
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"ROOM_FIRE_STAFF",0xf);
    local_48 = 0xf;
    local_4c[0xf] = '\0';
    local_4 = 0;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&DAT_010b93a8,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
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
    _strncpy(local_4c,"ROOM_FIRE_SCRIPT",0x10);
    local_48 = 0x10;
    local_4c[0x10] = '\0';
    local_4 = 1;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&DAT_010b93c8,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
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
    _strncpy(local_4c,"ROOM_FIRE_WANABE",0x10);
    local_48 = 0x10;
    local_4c[0x10] = '\0';
    local_4 = 2;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&DAT_010b93e8,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
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
    _strncpy(local_4c,"ROOM_PROD_PR_DONE",0x11);
    local_48 = 0x11;
    local_4c[0x11] = '\0';
    local_4 = 3;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&DAT_010b9408,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
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
    _strncpy(local_4c,"ROOM_TRAILER_RELAX",0x12);
    local_48 = 0x12;
    local_4c[0x12] = '\0';
    local_4 = 4;
    puVar5 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&DAT_010b9428,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a151a0 @ 00a151a0 ////

void __thiscall FUN_00a151a0(void *this,ushort *param_1,char param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1 != (ushort *)0x0) {
    iVar2 = FUN_00ace02d((short *)param_1);
    if (iVar2 != 0) {
      local_40 = 0.0;
      local_3c = 0.0;
      if ((DAT_010b93a0 != (int *)0x0) && (*DAT_010b93a0 != 0)) {
        fVar5 = (float)*(int *)(*DAT_010b93a0 + 0x2c);
        fVar3 = (float)FUN_00ace02d((short *)param_1);
        pfVar4 = (float *)FUN_00a5af60((void *)*DAT_010b93a0,&local_38,param_1,fVar3,fVar5);
        local_40 = *pfVar4;
        local_3c = pfVar4[1];
      }
      local_38 = 0.0;
      local_30[0] = *(float *)((int)this + 0x80) / local_3c;
      local_34 = 0.0;
      local_40 = local_40 * local_30[0];
      local_3c = local_3c * local_30[0];
      fVar5 = local_40 / *(float *)((int)this + 0x7c);
      if (fVar5 <= 1.0) {
        local_38 = (*(float *)((int)this + 0x7c) - fVar5 * *(float *)((int)this + 0x7c)) * 0.5;
      }
      else {
        fVar5 = 1.0 / fVar5;
        local_40 = local_40 * fVar5;
        local_3c = fVar5 * local_3c;
        local_34 = (*(float *)((int)this + 0x80) -
                   ((fVar5 * local_30[0]) / local_30[0]) * *(float *)((int)this + 0x80)) * 0.5;
        local_30[0] = fVar5 * local_30[0];
      }
      local_30[1] = 0.0;
      local_30[2] = 0.0;
      local_30[3] = 0.0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_4 = 0.0;
      local_30[4] = local_30[0];
      local_10 = local_30[0];
      if (param_2 == '\0') {
        local_c = local_38;
        local_8 = local_34;
        FUN_00527db0(local_30,*(float *)((int)this + 0x84));
      }
      else {
        local_8 = 0.0;
        local_c = 0.0;
        FUN_00527db0(local_30,3.1415927);
        local_c = local_c + local_40 + local_38;
        local_8 = local_8 + local_3c + local_34;
        FUN_00527db0(local_30,*(float *)((int)this + 0x84));
      }
      local_c = local_c + *(float *)((int)this + 0x70);
      local_8 = local_8 + *(float *)((int)this + 0x74);
      local_4 = local_4 + *(float *)((int)this + 0x78);
      FUN_00a14640(local_30,(float *)&stack0x00000014);
      FUN_009aa830(local_30,(float *)(param_3 + 0x18));
      uVar1 = *(uint *)(DAT_010c97e4 + 0x10);
      *(uint *)(DAT_010c97e4 + 0x10) = uVar1 | 0x80000000;
      FUN_009a7dc0((short *)param_1,param_4,local_30,DAT_010b93a0);
      *(uint *)(DAT_010c97e4 + 0x10) =
           uVar1 & 0x80000000 | *(uint *)(DAT_010c97e4 + 0x10) & 0x7fffffff;
    }
  }
  return;
}


//// FUNCTION FUN_00a15420 @ 00a15420 ////

void __thiscall FUN_00a15420(void *this,undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_40 = 0;
  local_58[2] = 1.0;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_60 = 0xbf800000;
  local_5c = 0xbf800000;
  local_34 = 0;
  FUN_009a1a20(&DAT_0105c2e8,param_2,local_58 + 3,DAT_0105c3e0);
  uVar1 = FUN_009a43c0(&local_40,(float *)&DAT_0105c3a8,local_58 + 3,local_58);
  if ((char)uVar1 != '\0') {
    local_30[0] = *(float *)((int)this + 0x7c);
    local_30[4] = *(float *)((int)this + 0x80);
    local_4 = 0.0;
    local_8 = 0.0;
    local_c = 0.0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_30[3] = 0.0;
    local_30[2] = 0.0;
    local_30[1] = 0.0;
    local_10 = 0x3f800000;
    FUN_00527db0(local_30,*(float *)((int)this + 0x84));
    local_c = local_c + *(float *)((int)this + 0x70);
    local_8 = local_8 + *(float *)((int)this + 0x74);
    local_4 = local_4 + *(float *)((int)this + 0x78);
    FUN_009aa670(local_30);
    FUN_0040b490(local_30,local_58);
    FUN_009840b0(&local_60,local_58);
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  return;
}


//// FUNCTION FUN_00a15580 @ 00a15580 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a15580(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 local_30 [3];
  undefined1 local_24;
  uint local_20;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9918;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00a14810(this,DAT_0105eb48);
  FUN_009910f0(local_30);
  local_20 = local_20 & 0x3effffff;
  local_24 = 6;
  iVar8 = 0;
  _DAT_010b9388[6] = (int)local_30;
  local_4 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      puVar4 = *(undefined4 **)(*(int *)((int)this + 0xc) + 4 + iVar8 * 8);
      puVar5 = (undefined4 *)_DAT_010b9388[8];
      *puVar5 = *puVar4;
      puVar5[1] = puVar4[1];
      puVar5[2] = 0;
      pfVar6 = (float *)_DAT_010b9388[8];
      fVar1 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = fVar2 * *(float *)(param_1 + 0x24) +
                fVar3 * *(float *)(param_1 + 0x30) + fVar1 * *(float *)(param_1 + 0x18) +
                *(float *)(param_1 + 0x3c);
      pfVar6[1] = fVar2 * *(float *)(param_1 + 0x28) +
                  fVar3 * *(float *)(param_1 + 0x34) + fVar1 * *(float *)(param_1 + 0x1c) +
                  *(float *)(param_1 + 0x40);
      pfVar6[2] = fVar2 * *(float *)(param_1 + 0x2c) +
                  fVar3 * *(float *)(param_1 + 0x38) + fVar1 * *(float *)(param_1 + 0x20) +
                  *(float *)(param_1 + 0x44);
      iVar7 = *(int *)(*(int *)((int)this + 0xc) + iVar8 * 8);
      if (iVar7 == 0) {
        *(undefined4 *)(_DAT_010b9388[8] + 0x24) = 0x3f0ccccd;
        *(float *)(_DAT_010b9388[8] + 0x28) =
             *(float *)(param_1 + 0x80) +
             *(float *)(*(int *)(*(int *)((int)this + 0xc) + 4 + iVar8 * 8) + 8);
        *(undefined4 *)(_DAT_010b9388[8] + 0x2c) = 0xff3e3e6b;
        iVar7 = DAT_010b9394;
LAB_00a15709:
        if (local_18 != iVar7) {
          Engine_SetResourceReference(local_30,iVar7);
        }
      }
      else if (iVar7 == 1) {
        *(undefined4 *)(_DAT_010b9388[8] + 0x24) = 0x3eb33333;
        *(undefined4 *)(_DAT_010b9388[8] + 0x2c) = 0xff3e3e6b;
        iVar7 = DAT_010b9398;
        goto LAB_00a15709;
      }
      (**(code **)(*_DAT_010b9388 + 8))();
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 8));
  }
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_30);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a15760 @ 00a15760 ////

void __fastcall FUN_00a15760(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x90,*(int *)((int)pvVar1 + -4),FUN_00a147d0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_00a157b0 @ 00a157b0 ////

void __thiscall FUN_00a157b0(void *this,int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 **ppuVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 auStackY_e8 [4];
  undefined4 uStackY_d8;
  char *local_9c;
  undefined4 local_98;
  uint local_94;
  char local_90 [20];
  undefined1 *local_7c [2];
  uint uStack_74;
  undefined1 auStack_70 [24];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  wchar_t *pwStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  wchar_t awStack_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9966;
  local_c = ExceptionList;
  uVar2 = *(uint *)((int)this + 0x6c);
  if (((uVar2 & 1) != 0) && ((uVar2 & 4) == 0)) {
    ExceptionList = &local_c;
    if (((uVar2 & 0x10) != 0) && (ExceptionList = &local_c, *(int *)this != 0)) {
      ExceptionList = &local_c;
      if (DAT_010b944c == (int *)0x0) {
        ExceptionList = &local_c;
        DAT_010b944c = FUN_00433eb0();
        pbVar5 = FUN_009de1d0("room_text_shape.msh",1);
        (**(code **)(*DAT_010b944c + 0x18))();
        if (pbVar5 != (byte *)0x0) {
          FUN_009de3b0(pbVar5);
        }
      }
      FUN_0040b670(local_7c);
      FUN_0097eb40(local_7c,*(undefined4 *)((int)this + 0x7c),*(undefined4 *)((int)this + 0x80),
                   0x3f800000);
      FUN_00527db0(local_7c,*(float *)((int)this + 0x84));
      fStack_58 = fStack_58 + *(float *)((int)this + 0x70);
      fStack_54 = fStack_54 + *(float *)((int)this + 0x74);
      fStack_50 = fStack_50 + *(float *)((int)this + 0x78);
      FUN_009aa830(local_7c,(float *)(param_1 + 0x18));
      ppuVar9 = local_7c;
      puVar7 = auStackY_e8;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar7 = *ppuVar9;
        ppuVar9 = ppuVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      (**(code **)(*DAT_010b944c + 0x24))();
      (**(code **)(*DAT_010b944c + 8))();
    }
    if ((*(uint *)((int)this + 0x6c) & 0xa0) == 0) {
      local_9c = local_90;
      local_90[0] = '\0';
      local_98 = 0;
      local_94 = 0x14;
      pcVar6 = (char *)((int)this + 4);
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_9c,(char *)((int)this + 4),(int)pcVar6 - ((int)this + 5));
      local_7c[0] = auStack_70;
      uStack_74 = 0x14;
      uStack_4 = 0;
      auStack_70[0] = 0;
      local_7c[1] = (undefined1 *)0x0;
      pcVar6 = local_9c;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(local_7c,local_9c,(int)pcVar6 - (int)(local_9c + 1));
      uStack_4._0_1_ = 1;
      puVar7 = FUN_009b5030(apvStack_2c,local_7c);
      FUN_004036d0((void *)((int)this + 0x24),(wchar_t *)*puVar7,puVar7[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c[0]);
      }
      *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) | 0x20;
      FUN_00407630(&local_9c,"_2");
      local_7c[0] = auStack_70;
      auStack_70[0] = 0;
      local_7c[1] = (undefined1 *)0x0;
      uStack_74 = 0x14;
      pcVar6 = local_9c;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(local_7c,local_9c,(int)pcVar6 - (int)(local_9c + 1));
      uStack_4._0_1_ = 2;
      bVar4 = FUN_009b46b0(local_7c);
      if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c[0]);
      }
      if (bVar4) {
        FUN_00401de0(local_7c,local_9c,0xffffffff);
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        puVar7 = FUN_009b5030(apvStack_2c,local_7c);
        FUN_00403e70((void *)((int)this + 0x44),puVar7);
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (0x14 < uStack_74) {
                    /* WARNING: Subroutine does not return */
          _free(local_7c[0]);
        }
        *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) | 0x40;
      }
      uStack_4 = 0xffffffff;
      if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_9c);
      }
    }
    fVar12 = FUN_009a4140((float *)&DAT_0105c3c0);
    fVar12 = FUN_004012c0((float)fVar12);
    fVar13 = FUN_004012c0(*(float *)(param_1 + 0x80) + *(float *)((int)this + 0x84));
    fVar12 = FUN_004012c0((float)((float10)(float)fVar12 - fVar13));
    pwVar3 = DAT_010b9428;
    bVar4 = fVar12 < (float10)0.0;
    uVar2 = *(uint *)((int)this + 0x6c);
    pwVar10 = *(wchar_t **)((int)this + 0x24);
    pwVar11 = *(wchar_t **)((int)this + 0x44);
    if ((char)uVar2 < '\0') {
      pwVar10 = (wchar_t *)(&DAT_010b93a8)[DAT_010b93a4 * 8];
      pwVar11 = (wchar_t *)0x0;
    }
    if (((uVar2 & 0x100) != 0) && (DAT_0105ef79 != '\0')) {
      pwVar11 = (wchar_t *)0x0;
      pwVar10 = DAT_010b9408;
    }
    if ((uVar2 & 0x200) != 0) {
      pwVar11 = (wchar_t *)0x0;
      *(uint *)((int)this + 0x6c) = uVar2 & 0xfffffdff;
      pwVar10 = pwVar3;
    }
    pwStack_4c = awStack_40;
    awStack_40[0] = L'\0';
    uStack_48 = 0;
    uStack_44 = 10;
    uStack_4 = 4;
    if (((*(uint *)((int)this + 0x6c) & 0x400) != 0) && ((*(uint *)((int)this + 0x6c) & 0x800) != 0)
       ) {
      FUN_00403e90(&pwStack_4c,pwVar10);
      local_9c = local_90;
      local_90[0] = '\0';
      local_98 = 0;
      local_94 = 0x14;
      _strncpy(local_9c," ",1);
      local_98 = 1;
      local_9c[1] = '\0';
      uStack_4._0_1_ = 5;
      FUN_004701b0(&local_9c,*(undefined4 *)((int)this + 0x88));
      FUN_00407630(&local_9c,"/");
      FUN_004701b0(&local_9c,*(undefined4 *)((int)this + 0x8c));
      puVar7 = FUN_009acf60(apvStack_2c,&local_9c);
      FUN_0040cae0(&pwStack_4c,(wchar_t *)*puVar7,puVar7[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      pwVar10 = pwStack_4c;
      if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_9c);
      }
    }
    if ((*(byte *)((int)this + 0x6c) & 0x40) != 0) {
      if (bVar4) {
        uStackY_d8 = 0xa15cc0;
        FUN_00a151a0(this,(ushort *)pwVar10,bVar4,param_1,param_2);
        pwVar10 = pwVar11;
      }
      else {
        uStackY_d8 = 0xa15cfe;
        FUN_00a151a0(this,(ushort *)pwVar10,'\0',param_1,param_2);
        bVar4 = false;
        pwVar10 = pwVar11;
      }
    }
    uStackY_d8 = 0xa15d4e;
    FUN_00a151a0(this,(ushort *)pwVar10,bVar4,param_1,param_2);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a15d80 @ 00a15d80 ////

undefined4 * __cdecl FUN_00a15d80(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  _strncpy(local_20,"FOOTSTEP_",9);
  local_1c = 9;
  local_20[9] = '\0';
  switch(param_2) {
  case 1:
    pcVar1 = "EARTH";
    break;
  case 2:
    pcVar1 = "SAND";
    break;
  case 3:
    pcVar1 = "WATER";
    break;
  case 4:
    pcVar1 = "GRASS";
    break;
  case 5:
    pcVar1 = "METAL";
    break;
  case 6:
    pcVar1 = "WOOD";
    break;
  case 7:
    pcVar1 = "CARPET";
    break;
  case 8:
    pcVar1 = "CONCRETE";
    break;
  case 9:
    pcVar1 = "TILE";
    break;
  default:
    goto switchD_00a15dce_default;
  }
  FUN_00407630(&local_20,pcVar1);
switchD_00a15dce_default:
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_20,local_1c);
  if (local_18 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_00a15f20 @ 00a15f20 ////

uint * FUN_00a15f20(uint *param_1)

{
  _Ctypevec *p_Var1;
  _Ctypevec local_10;
  
  p_Var1 = __Getctype(&local_10);
  *param_1 = p_Var1->_Page;
  param_1[1] = (uint)p_Var1->_Table;
  param_1[2] = p_Var1->_Delfl;
  param_1[3] = (uint)p_Var1->_LocaleName;
  return param_1;
}


//// FUNCTION FUN_00a15fb0 @ 00a15fb0 ////

void __fastcall FUN_00a15fb0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00acbfc6(&local_4,0);
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_00acbfe9(&local_4);
  return;
}


//// FUNCTION FUN_00a15fe0 @ 00a15fe0 ////

uint __fastcall FUN_00a15fe0(uint param_1)

{
  int iVar1;
  uint local_4;
  
  local_4 = param_1;
  FUN_00acbfc6(&local_4,0);
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_00acbfe9((int *)&local_4);
  return param_1 & (iVar1 != 0) - 1;
}


//// FUNCTION FUN_00a16020 @ 00a16020 ////

void __fastcall FUN_00a16020(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d74e94;
  return;
}


//// FUNCTION FUN_00a16070 @ 00a16070 ////

void __fastcall FUN_00a16070(uint *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00a15fe0(*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


//// FUNCTION FUN_00a160e0 @ 00a160e0 ////

void __fastcall FUN_00a160e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d74e94;
  return;
}


//// FUNCTION FUN_00a16120 @ 00a16120 ////

undefined4 * __thiscall FUN_00a16120(void *this,byte param_1)

{
  FUN_00a160e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a16160 @ 00a16160 ////

void __fastcall FUN_00a16160(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d74e94;
  return;
}


//// FUNCTION FUN_00a16170 @ 00a16170 ////

undefined4 * __thiscall FUN_00a16170(void *this,byte param_1)

{
  FUN_00a16160(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a161a0 @ 00a161a0 ////

void __fastcall FUN_00a161a0(int param_1)

{
  _Ctypevec *p_Var1;
  _Ctypevec local_10;
  
  p_Var1 = __Getctype(&local_10);
  *(uint *)(param_1 + 8) = p_Var1->_Page;
  *(short **)(param_1 + 0xc) = p_Var1->_Table;
  *(int *)(param_1 + 0x10) = p_Var1->_Delfl;
  *(wchar_t **)(param_1 + 0x14) = p_Var1->_LocaleName;
  return;
}


//// FUNCTION FUN_00a16270 @ 00a16270 ////

int * __thiscall FUN_00a16270(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  iVar1 = **(int **)((int)this + 0x24);
  *param_1 = iVar1;
  FUN_00acbfc6(&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_00acbfe9((int *)&param_1);
  return piVar2;
}


//// FUNCTION FUN_00a162c0 @ 00a162c0 ////

ios_base * __thiscall FUN_00a162c0(void *this,byte param_1)

{
  FUN_00acc705(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a162e0 @ 00a162e0 ////

void __cdecl FUN_00a162e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_010b9450;
  if (DAT_010b9450 != 0) {
    while (*(int *)(iVar2 + 0x28) != param_1) {
      piVar1 = (int *)(iVar2 + 0x2c);
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return;
      }
    }
    piVar1 = (int *)(iVar2 + 0x24);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00a16320 @ 00a16320 ////

uint __cdecl FUN_00a16320(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    uVar3 = FUN_009d9820();
    return uVar3 & 0xffffff00;
  }
  if (*(int *)**(int **)(param_1 + 0x2c) != 3) {
    uVar3 = FUN_009d9820();
    return uVar3 & 0xffffff00;
  }
  piVar1 = (int *)((int *)**(int **)(param_1 + 0x2c))[1];
  if (*(int *)(*piVar1 + 0x1c) == 0x526) {
    if (*(int *)(*piVar1 + 0x2c) == 0x2f8) {
      if (*(int *)(piVar1[1] + 0x1c) != 0x60) goto LAB_00a16386;
      if (*(int *)(piVar1[1] + 0x2c) == 0x3a) {
        iVar2 = piVar1[2];
        if (*(int *)(iVar2 + 0x1c) != 0xa4) goto LAB_00a16386;
        if (*(int *)(iVar2 + 0x2c) == 0xb2) {
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
      }
    }
    uVar3 = FUN_009d9820();
    return uVar3 & 0xffffff00;
  }
LAB_00a16386:
  uVar3 = FUN_009d9820();
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a163c0 @ 00a163c0 ////

void __cdecl FUN_00a163c0(byte param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0xe4);
  if ((uVar1 >> 5 & 1) == (uint)param_1) {
    return;
  }
  *(uint *)(param_2 + 0xe4) = ((uint)param_1 << 5 ^ uVar1) & 0x20 ^ uVar1;
  iVar2 = **(int **)(param_2 + 0x2c);
  puVar3 = (undefined4 *)**(int **)(iVar2 + 4);
  iVar4 = (uint)(param_1 != 0) * 0xc;
  puVar3[2] = puVar3[2] ^ (*(int *)(&DAT_010b9454 + iVar4) << 8 ^ puVar3[2]) & 0x300U;
  uVar5 = DAT_010b94f8;
  if (param_1 == 0) {
LAB_00a1644d:
    *puVar3 = uVar5;
  }
  else {
    DAT_010b94f8 = *puVar3;
    if (DAT_010b9478 != 0) {
      uVar5 = *(undefined4 *)(DAT_010b9478 + 0x14);
      goto LAB_00a1644d;
    }
  }
  puVar3 = *(undefined4 **)(*(int *)(iVar2 + 4) + 4);
  puVar3[2] = puVar3[2] ^ (*(int *)(&DAT_010b9458 + iVar4) << 8 ^ puVar3[2]) & 0x300U;
  uVar5 = DAT_010b94fc;
  if (param_1 != 0) {
    DAT_010b94fc = *puVar3;
    if (DAT_010b947c == 0) goto LAB_00a16491;
    uVar5 = *(undefined4 *)(DAT_010b947c + 0x14);
  }
  *puVar3 = uVar5;
LAB_00a16491:
  puVar3 = *(undefined4 **)(*(int *)(iVar2 + 4) + 8);
  puVar3[2] = puVar3[2] ^ (*(int *)(&DAT_010b945c + iVar4) << 8 ^ puVar3[2]) & 0x300U;
  if (param_1 == 0) {
    *puVar3 = DAT_010b9500;
  }
  else {
    DAT_010b9500 = *puVar3;
    if (DAT_010b9480 != 0) {
      *puVar3 = *(undefined4 *)(DAT_010b9480 + 0x14);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a164e0 @ 00a164e0 ////

void __cdecl FUN_00a164e0(void *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_009d9d50(param_1,2);
  piVar3 = &DAT_00e68c1c;
  do {
    puVar1 = (undefined2 *)(*(int *)(iVar2 + 0x20) + piVar3[-1] * 6);
    puVar1[2] = *puVar1;
    puVar1[1] = *puVar1;
    puVar1 = (undefined2 *)(*(int *)(iVar2 + 0x20) + *piVar3 * 6);
    piVar3 = piVar3 + 2;
    puVar1[2] = *puVar1;
    puVar1[1] = *puVar1;
  } while ((int)piVar3 < 0xe68d14);
  return;
}


//// FUNCTION FUN_00a16550 @ 00a16550 ////

void __fastcall FUN_00a16550(int param_1)

{
  *(undefined ***)(*(int *)(*(int *)(param_1 + -4) + 4) + -4 + param_1) = &PTR_LAB_00d74f24;
  return;
}


//// FUNCTION FUN_00a16560 @ 00a16560 ////

void __fastcall FUN_00a16560(ios_base *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00d74f2c;
  FUN_00acc705(param_1);
  return;
}


//// FUNCTION FUN_00a165a0 @ 00a165a0 ////

uint * __thiscall FUN_00a165a0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)this != 0) {
    puVar1 = (undefined4 *)FUN_00a15fe0(*(uint *)this);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a165d0 @ 00a165d0 ////

ios_base * __thiscall FUN_00a165d0(void *this,byte param_1)

{
  FUN_00a16560(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a166b0 @ 00a166b0 ////

void __fastcall FUN_00a166b0(int param_1)

{
  **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
  **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + 1;
  return;
}


//// FUNCTION FUN_00a16730 @ 00a16730 ////

int * __thiscall FUN_00a16730(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  iVar1 = **(int **)((int)this + 0x38);
  *param_1 = iVar1;
  FUN_00acbfc6(&param_1,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_00acbfe9((int *)&param_1);
  return piVar2;
}


//// FUNCTION FUN_00a16870 @ 00a16870 ////

void __fastcall FUN_00a16870(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
    return;
  }
  return;
}


//// FUNCTION FUN_00a16930 @ 00a16930 ////

void __cdecl FUN_00a16930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a16970 @ 00a16970 ////

void __cdecl FUN_00a16970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a16c40 @ 00a16c40 ////

void __cdecl FUN_00a16c40(undefined4 *param_1,int param_2)

{
  if (((DAT_010c986c != 0) && (-1 < param_2)) && (param_2 <= DAT_010c9890)) {
    *param_1 = *(undefined4 *)(DAT_010c986c + 4 + param_2 * 8);
    return;
  }
  *(undefined1 *)param_1 = 0xff;
  *(undefined1 *)((int)param_1 + 1) = 0xff;
  *(undefined1 *)((int)param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a16cb0 @ 00a16cb0 ////

undefined4 * __thiscall FUN_00a16cb0(void *this,int param_1,char param_2,undefined4 param_3)

{
  _Ctypevec *p_Var1;
  _Ctypevec local_90;
  _Locinfo local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf997b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_3;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d74f34;
  std::_Locinfo::_Locinfo(local_80,"C");
  p_Var1 = __Getctype(&local_90);
  *(uint *)((int)this + 8) = p_Var1->_Page;
  *(short **)((int)this + 0xc) = p_Var1->_Table;
  *(int *)((int)this + 0x10) = p_Var1->_Delfl;
  *(wchar_t **)((int)this + 0x14) = p_Var1->_LocaleName;
  std::_Locinfo::~_Locinfo(local_80);
  if (param_1 != 0) {
    if (0 < *(int *)((int)this + 0x14)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x10));
    }
    if (*(int *)((int)this + 0x14) < 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x10));
    }
    *(int *)((int)this + 0x10) = param_1;
    *(uint *)((int)this + 0x14) = -(uint)(param_2 != '\0');
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a16db0 @ 00a16db0 ////

byte * __thiscall FUN_00a16db0(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Tolower((uint)*param_1,(_Ctypevec *)((int)this + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


//// FUNCTION FUN_00a16e00 @ 00a16e00 ////

byte * __thiscall FUN_00a16e00(void *this,byte *param_1,byte *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    do {
      iVar1 = __Toupper((uint)*param_1,(_Ctypevec *)((int)this + 8));
      *param_1 = (byte)iVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


//// FUNCTION FUN_00a16eb0 @ 00a16eb0 ////

undefined4 __cdecl FUN_00a16eb0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf999b;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_c;
    this = operator_new(0x18);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00a16cb0(this,0,'\0',0);
    }
    *param_1 = (int)puVar1;
  }
  ExceptionList = local_c;
  return 2;
}


//// FUNCTION FUN_00a16f20 @ 00a16f20 ////

undefined4 * __thiscall FUN_00a16f20(void *this,byte param_1)

{
  FUN_00a16f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a16f40 @ 00a16f40 ////

void __fastcall FUN_00a16f40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d74f34;
  if (0 < (int)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  if ((int)param_1[5] < 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  *param_1 = &PTR_LAB_00d74e94;
  return;
}


//// FUNCTION FUN_00a16f80 @ 00a16f80 ////

void __fastcall FUN_00a16f80(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a16fe0 @ 00a16fe0 ////

void __fastcall FUN_00a16fe0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x28));
}


//// FUNCTION FUN_00a17010 @ 00a17010 ////

void FUN_00a17010(void)

{
  if (DAT_010b9450 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(DAT_010b9450 + 0x28));
  }
  return;
}


//// FUNCTION FUN_00a17040 @ 00a17040 ////

uint __cdecl FUN_00a17040(void *param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (param_1 != (void *)0x0) {
    in_EAX = FUN_00a16320((int)param_1);
    if ((char)in_EAX != '\0') {
      uVar1 = FUN_00a164e0(param_1);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a17070 @ 00a17070 ////

void __cdecl FUN_00a17070(IAtlStringMgr *param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  IAtlStringMgr *this;
  byte *pbVar4;
  wchar_t *pwVar5;
  void *pvVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  uVar2 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf99b8;
  local_c = ExceptionList;
  if (((byte)param_1[0x10] & 1) != 0) {
    DAT_0105cc5c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0105ead8 = FUN_009d0f40('\x01',param_2);
    uVar3 = DAT_0105eb3a;
    DAT_0105ead4 = 1;
    DAT_0105ead0 = 0;
    DAT_0105eb3a = 1;
    pbVar4 = FUN_009de1d0("generic_head.msh",0);
    *(byte **)(param_1 + 0x14) = pbVar4;
    if (((byte)param_1[0x38] & 1) == 0) {
      param_1 = *(IAtlStringMgr **)(param_1 + 0x40);
    }
    else {
      param_1 = (IAtlStringMgr *)0x0;
    }
    if (((byte)this[0x38] & 1) == 0) {
      pcVar7 = *(char **)(this + 100);
    }
    else {
      pcVar7 = *(char **)(this + 0xa4);
    }
    if (((byte)this[0x38] & 1) == 0) {
      pwVar5 = *(wchar_t **)(this + 0x44);
    }
    else {
      pwVar5 = *(wchar_t **)(this + 0x84);
    }
    DAT_0105eb3a = uVar3;
    FUN_009da710(*(void **)(this + 0x14),pwVar5,pcVar7,param_1);
    pvVar6 = FUN_0099bb50("eyesold.dds",0,0,0,'\0');
    iVar1 = *(int *)(this + 0x14);
    if ((iVar1 != 0) && (2 < *(int *)(iVar1 + 0x30))) {
      FUN_00994ca0((void *)(*(int *)(iVar1 + 0x34) + 0x24),pvVar6);
      FUN_00994ca0((void *)(*(int *)(*(int *)(this + 0x14) + 0x34) + 0x48),pvVar6);
    }
    if (pvVar6 != (void *)0x0) {
      FUN_0099b400(pvVar6);
    }
    DAT_0105ead4 = 0;
    *(undefined4 *)(this + 0x24) = DAT_0105ead0;
    if (param_2 == '\0') {
      if (*(int *)(this + 0x34) == 0) {
        pcVar7 = "hair_20s_m3.msh";
      }
      else {
        pcVar7 = "hair_20s_f1.msh";
      }
      FUN_009d60a0(this,pcVar7);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x34;
  }
  ExceptionList = local_c;
  DAT_0105cc5c = uVar2;
  return;
}


//// FUNCTION FUN_00a17250 @ 00a17250 ////

void __cdecl FUN_00a17250(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != 0) {
    iVar4 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    iVar5 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    iVar3 = *(int *)(*(int *)(**(int **)(param_1 + 0x2c) + 4) + 4);
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0x2c)) {
      iVar7 = 0;
      do {
        pfVar1 = (float *)(*(int *)(iVar3 + 0x30) + 0x18 + iVar7);
        pfVar2 = (float *)(*(int *)(iVar3 + 0x30) + 0x18 + iVar7);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x20;
        *pfVar2 = (float)(((iVar4 - iVar5) * 4 - param_3) + param_2) * 0.25 + *pfVar1;
        pfVar2[1] = (float)(iVar5 - iVar4) * 0.25 + pfVar2[1];
      } while (iVar6 < *(int *)(iVar3 + 0x2c));
    }
  }
  return;
}


//// FUNCTION FUN_00a17300 @ 00a17300 ////

/* WARNING: Removing unreachable block (ram,0x00a1761a) */

int __cdecl FUN_00a17300(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  char *pcVar9;
  uint3 uVar10;
  char cVar11;
  ulonglong uVar12;
  char *local_60;
  int local_5c;
  char local_50 [32];
  undefined4 local_30 [3];
  undefined1 local_24;
  void *local_18;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar4 = param_1;
  uVar3 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf99e0;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  local_60 = (char *)0x0;
  local_5c = 0;
  ExceptionList = &local_c;
  do {
    pcVar9 = (char *)(iVar4 + 0x128) + local_5c * 0x20;
    pcVar5 = local_60;
    if ((*pcVar9 != '\0') && (pcVar5 = (char *)(iVar4 + 0x128), local_5c != 0)) {
      if (local_5c == 3) {
        _sprintf(local_50,(char *)(iVar4 + 0x188));
        pcVar9 = local_50;
        do {
          pcVar6 = pcVar9;
          pcVar9 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        _sprintf(pcVar6 + -4,"%s%s");
        pvVar7 = FUN_0099bb50(local_50,0,0,0,'\0');
        FUN_009a57d0((int)pvVar7,0,0xffffffff,0,(undefined4 *)0x0);
        if (pvVar7 != (void *)0x0) {
          FUN_0099b400(pvVar7);
        }
        pcVar5 = local_60;
        if (*(float *)(iVar4 + 0x11c) != 0.0) {
          _sprintf(pcVar6 + -4,"_gy.dds");
          pvVar7 = FUN_0099bb50(local_50,0,0,0,'\0');
          uVar12 = FUN_00acd42c();
          iVar8 = (int)uVar12;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
          param_1 = CONCAT13((char)iVar8,0xff0000);
          param_1 = CONCAT22(param_1._2_2_,0xff00);
          param_1 = CONCAT31(param_1._1_3_,0xff);
          FUN_009a57d0((int)pvVar7,0,param_1,0,(undefined4 *)0x0);
          if (pvVar7 != (void *)0x0) {
            FUN_0099b400(pvVar7);
          }
        }
      }
      else if (local_5c == 1) {
        pcVar5 = local_60;
        if (local_60 != (char *)0x0) {
          FUN_009910f0(local_30);
          local_4 = CONCAT31(local_4._1_3_,1);
          local_24 = 0x25;
          pvVar7 = FUN_0099bb50((char *)(iVar4 + 0x148),0,0,0,'\0');
          if (local_18 != pvVar7) {
            Engine_SetResourceReference(local_30,(int)pvVar7);
          }
          if (pvVar7 != (void *)0x0) {
            FUN_0099b400(pvVar7);
          }
          pvVar7 = FUN_0099bb50(local_60,0,0,0,'\0');
          if (local_14 != pvVar7) {
            FUN_00994bc0(local_30,(int)pvVar7);
          }
          if (pvVar7 != (void *)0x0) {
            FUN_0099b400(pvVar7);
          }
          FUN_009a5900((int)local_30);
          local_4 = local_4 & 0xffffff00;
          FUN_00990ec0((int)local_30);
        }
      }
      else {
        pcVar5 = local_60;
        if (local_5c != 7) {
          pvVar7 = FUN_0099bb50(pcVar9,0,0,0,'\0');
          FUN_009a57d0((int)pvVar7,0,0xffffffff,0,(undefined4 *)0x0);
          if (pvVar7 != (void *)0x0) {
            FUN_0099b400(pvVar7);
          }
        }
      }
    }
    local_60 = pcVar5;
    local_5c = local_5c + 1;
  } while (local_5c < 9);
  pcVar9 = (char *)(iVar4 + 0x1a8);
  cVar11 = '\0';
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (((((int)pcVar9 - (iVar4 + 0x1a9) == 0x11) &&
       (FUN_009b7af0((char *)(iVar4 + 0x1b3),&param_1,(int *)0x0), DAT_010c9894 != 0)) &&
      (-1 < param_1)) &&
     ((param_1 <= DAT_010c9880 && (*(char *)(DAT_010c9894 + param_1 * 8) != '\0')))) {
    *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 2;
  }
  pcVar9 = (char *)(iVar4 + 0x228);
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if ((((int)pcVar9 - (iVar4 + 0x229) == 0x10) &&
      (FUN_009b7af0((char *)(iVar4 + 0x232),&param_1,(int *)0x0), DAT_010c986c != 0)) &&
     ((-1 < param_1 &&
      ((param_1 <= DAT_010c9890 && (*(char *)(DAT_010c986c + param_1 * 8) != '\0')))))) {
    *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 2;
    cVar11 = '\x01';
  }
  uVar2 = *(uint *)(iVar4 + 0x10);
  uVar10 = (uint3)(uVar2 >> 8);
  if ((uVar2 & 0x40) != 0) {
    if (cVar11 == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar2 | 2;
      DAT_0105cc5c = uVar3;
      ExceptionList = local_c;
      return (uint)uVar10 << 8;
    }
    DAT_0105cc5c = uVar3;
    ExceptionList = local_c;
    return CONCAT31(uVar10,cVar11);
  }
  DAT_0105cc5c = uVar3;
  ExceptionList = local_c;
  return CONCAT31(uVar10,cVar11);
}


//// FUNCTION FUN_00a176d0 @ 00a176d0 ////

void __cdecl FUN_00a176d0(int param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  char *_Dest;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf99f8;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  if ((param_1 != 0) && (*(char **)(param_1 + 0x1c) != (char *)0x0)) {
    ExceptionList = &local_c;
    _sprintf(local_2c,*(char **)(param_1 + 0x1c));
    pcVar2 = local_2c;
    do {
      _Dest = pcVar2;
      pcVar2 = _Dest + 1;
    } while (*_Dest != '\0');
    _sprintf(_Dest,"%s%s");
    pvVar3 = FUN_0099bb50(local_2c,0,0,0,'\0');
    FUN_009a57d0((int)pvVar3,0,0xffffffff,0,(undefined4 *)0x0);
    if (pvVar3 != (void *)0x0) {
      FUN_0099b400(pvVar3);
    }
    if (*(float *)(param_1 + 0x11c) != 0.0) {
      _sprintf(_Dest,"_gy.dds");
      pvVar3 = FUN_0099bb50(local_2c,0,0,0,'\0');
      uVar5 = FUN_00acd42c();
      iVar4 = (int)uVar5;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      param_1 = CONCAT13((char)iVar4,0xff0000);
      param_1 = CONCAT22(param_1._2_2_,0xff00);
      param_1 = CONCAT31(param_1._1_3_,0xff);
      FUN_009a57d0((int)pvVar3,0,param_1,0,(undefined4 *)0x0);
      if (pvVar3 != (void *)0x0) {
        FUN_0099b400(pvVar3);
      }
    }
    FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
    _sprintf(_Dest,"a.dds");
    pvVar3 = FUN_0099bb50(local_2c,0,0,0,'\0');
    FUN_009a57d0((int)pvVar3,1,0xffffffff,0,(undefined4 *)0x0);
    if (pvVar3 != (void *)0x0) {
      FUN_0099b400(pvVar3);
    }
    DAT_0105cc5c = uVar1;
    ExceptionList = local_c;
    return;
  }
  DAT_0105cc5c = uVar1;
  return;
}


//// FUNCTION FUN_00a178e0 @ 00a178e0 ////

void __fastcall FUN_00a178e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf9a2e;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(param_1 + 0x1b,0x20,2,FUN_00401490);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0xb,0x20,2,FUN_00401490);
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a17980 @ 00a17980 ////

void __fastcall FUN_00a17980(undefined4 *param_1)

{
  uint *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  _Memory = (uint *)param_1[0xe];
  *param_1 = &PTR_FUN_00d74f7c;
  local_4 = param_1;
  if (_Memory != (uint *)0x0) {
    uVar1 = *_Memory;
    if (uVar1 != 0) {
      FUN_00acbfc6(&local_4,0);
      iVar2 = *(int *)(uVar1 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar1 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(uVar1 & (*(int *)(uVar1 + 4) != 0) - 1);
      FUN_00acbfe9((int *)&local_4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00accb24(param_1 + 1);
  return;
}


//// FUNCTION uflow @ 00a17a60 ////

/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::uflow(void)
   
   Library: Visual Studio 2003 Release */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if (iVar1 == -1) {
    return -1;
  }
  pbVar2 = (byte *)_Gninc(this);
  return (uint)*pbVar2;
}


//// FUNCTION _Gninc @ 00a17a80 ////

/* Library Function - Single Match
    protected: char * __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::_Gninc(void)
   
   Library: Visual Studio 2003 Release */

char * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Gninc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  char *pcVar1;
  
  **(int **)(this + 0x30) = **(int **)(this + 0x30) + -1;
  pcVar1 = (char *)**(int **)(this + 0x20);
  **(int **)(this + 0x20) = (int)(pcVar1 + 1);
  return pcVar1;
}


//// FUNCTION FUN_00a17c70 @ 00a17c70 ////

undefined4 * __thiscall FUN_00a17c70(void *this,byte param_1)

{
  FUN_00a17980(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a17da0 @ 00a17da0 ////

void __fastcall FUN_00a17da0(int param_1)

{
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(int *)(param_1 + 0x24) = param_1 + 0x1c;
  *(int *)(param_1 + 0x10) = param_1 + 8;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0x34) = param_1 + 0x2c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x24) = 0;
  **(undefined4 **)(param_1 + 0x34) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  return;
}


//// FUNCTION FUN_00a17ec0 @ 00a17ec0 ////

facet * __cdecl FUN_00a17ec0(locale *param_1)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  facet *local_24;
  int local_20;
  int local_1c;
  exception local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00acbfc6(&local_1c,0);
  pfVar1 = DAT_010b950c;
  local_4 = 0;
  local_24 = DAT_010b950c;
  if (DAT_010cbaf0 == 0) {
    FUN_00acbfc6(&local_20,0);
    if (DAT_010cbaf0 == 0) {
      DAT_010cbae8 = DAT_010cbae8 + 1;
      DAT_010cbaf0 = DAT_010cbae8;
    }
    FUN_00acbfe9(&local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_010cbaf0);
  if ((this == (facet *)0x0) && (this = pfVar1, pfVar1 == (facet *)0x0)) {
    iVar2 = FUN_00a16eb0((int *)&local_24);
    this = local_24;
    if (iVar2 == -1) {
      FUN_00ace1fb(local_18);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00e398b8);
    }
    DAT_010b950c = local_24;
    FUN_00acbfc6(&local_20,0);
    if (*(int *)(this + 4) != -1) {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
    FUN_00acbfe9(&local_20);
    std::locale::facet::_Register(this);
  }
  local_4 = 0xffffffff;
  FUN_00acbfe9(&local_1c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a17fe0 @ 00a17fe0 ////

void __cdecl FUN_00a17fe0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a18020 @ 00a18020 ////

void __cdecl FUN_00a18020(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a18050 @ 00a18050 ////

undefined4 * __thiscall FUN_00a18050(void *this,undefined4 param_1)

{
  _Locinfo local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9a6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d74fc0;
  std::_Locinfo::_Locinfo(local_80,"C");
  std::_Locinfo::~_Locinfo(local_80);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a18130 @ 00a18130 ////

undefined4 * __thiscall FUN_00a18130(void *this,byte param_1)

{
  FUN_00a18150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a18150 @ 00a18150 ////

void __fastcall FUN_00a18150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d74e94;
  return;
}


//// FUNCTION FUN_00a182c0 @ 00a182c0 ////

void __cdecl FUN_00a182c0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a18380 @ 00a18380 ////

undefined4 * __fastcall FUN_00a18380(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9a9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  local_4 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0xb,0x20,2,FUN_00401dc0,FUN_00401490);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(param_1 + 0x1b,0x20,2,FUN_00401dc0,FUN_00401490);
  puVar1 = param_1 + 0x2d;
  *(undefined1 *)puVar1 = 0xff;
  *(undefined1 *)((int)param_1 + 0xb5) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb6) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb7) = 0xff;
  *puVar1 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb9) = 0xff;
  *(undefined1 *)((int)param_1 + 0xba) = 0xff;
  *(undefined1 *)((int)param_1 + 0xbb) = 0xff;
  param_1[0x2e] = 0xffffffff;
  param_1[1] = 0;
  *(undefined2 *)*param_1 = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)param_1[0xb] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)param_1[0x1b] = 0;
  *puVar1 = 0;
  param_1[0x14] = 0;
  *(undefined1 *)param_1[0x13] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)param_1[0x23] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a184b0 @ 00a184b0 ////

undefined4 * __thiscall FUN_00a184b0(void *this,byte param_1)

{
  FUN_00a16f80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a184d0 @ 00a184d0 ////

void __cdecl FUN_00a184d0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = DAT_010b9450;
  while( true ) {
    do {
      iVar3 = iVar1;
      iVar2 = iVar4;
      if (iVar3 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0x2c);
      iVar4 = iVar3;
    } while (*(int *)(iVar3 + 0x24) != 0);
    if (10.0 < *(float *)(iVar3 + 0x20)) break;
    *(float *)(iVar3 + 0x20) = param_1 + *(float *)(iVar3 + 0x20);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x2c) = iVar1;
    iVar1 = DAT_010b9450;
  }
  DAT_010b9450 = iVar1;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar3 + 0x28));
}


//// FUNCTION FUN_00a18540 @ 00a18540 ////

uint __cdecl FUN_00a18540(undefined4 *param_1)

{
  float *pfVar1;
  char cVar2;
  wchar_t *_Source;
  undefined4 *_Memory;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  float *pfVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9ab8;
  local_c = ExceptionList;
  piVar11 = param_1 + 8;
  piVar6 = piVar11;
  if (((param_1[8] == 0) || (piVar6 = (int *)0x0, param_1[9] == 0)) ||
     (piVar6 = (int *)0x0, param_1[10] == 0)) {
    return (uint)piVar6 & 0xffffff00;
  }
  ExceptionList = &local_c;
  _Memory = operator_new(0x118b4);
  puVar14 = _Memory;
  for (iVar7 = 0x462d; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  iVar7 = 0;
  piVar6 = piVar11;
  do {
    uVar3 = FUN_00a16320(*piVar6);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return uVar3 & 0xffffff00;
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar7 < 3);
  *(undefined1 *)_Memory = 4;
  *(byte *)((int)_Memory + 1) =
       *(byte *)((int)_Memory + 1) ^ (*(byte *)(param_1 + 0x2f) ^ *(byte *)((int)_Memory + 1)) & 1;
  _Memory[0x23] = param_1[0x2b];
  uVar15 = FUN_00acd42c();
  local_44 = param_1 + 0x2d;
  *(short *)((int)_Memory + 2) = (short)uVar15;
  iVar7 = 0;
  puVar14 = param_1 + 0x1b;
  local_40 = _Memory;
  do {
    local_40 = local_40 + 1;
    pcVar12 = (char *)puVar14[-0x10];
    if ((iVar7 < 0) || (iVar8 = iVar7, 1 < iVar7)) {
      iVar8 = 0;
    }
    pcVar9 = (char *)(_Memory + iVar8 * 8 + 3);
    do {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar9 = cVar2;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar12 = (char *)*puVar14;
    if ((iVar7 < 0) || (iVar8 = iVar7, 1 < iVar7)) {
      iVar8 = 0;
    }
    pcVar9 = (char *)(_Memory + iVar8 * 8 + 0x13);
    do {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar9 = cVar2;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    *local_40 = *local_44;
    iVar7 = iVar7 + 1;
    local_44 = local_44 + 1;
    puVar14 = puVar14 + 8;
  } while (iVar7 < 2);
  pfVar10 = (float *)(_Memory + 0x25);
  local_44 = (undefined4 *)0x0;
  do {
    local_40 = (undefined4 *)0x0;
    if (0 < *(int *)(*piVar11 + 0x28)) {
      do {
        piVar6 = *(int **)(*(int *)(*piVar11 + 0x2c) + (int)local_40 * 4);
        local_3c = 0;
        if (0 < *piVar6) {
          do {
            iVar7 = *(int *)(piVar6[1] + local_3c * 4);
            iVar8 = 0;
            if (0 < *(int *)(iVar7 + 0x2c)) {
              iVar13 = 0;
              pfVar4 = pfVar10;
              do {
                pfVar10 = (float *)(*(int *)(iVar7 + 0x30) + iVar13);
                *pfVar4 = *pfVar10;
                pfVar4[1] = pfVar10[1];
                pfVar4[2] = pfVar10[2];
                if (local_44 != (undefined4 *)0x0) {
                  pfVar10 = (float *)((int)pfVar4 - (int)local_44);
                  *pfVar4 = *pfVar4 - *pfVar10;
                  pfVar4[1] = pfVar4[1] - pfVar10[1];
                  pfVar4[2] = pfVar4[2] - pfVar10[2];
                }
                pfVar1 = (float *)(iVar13 + 0xc + *(int *)(iVar7 + 0x30));
                pfVar4[3] = *pfVar1;
                pfVar4[4] = pfVar1[1];
                pfVar10 = pfVar4 + 6;
                pfVar4[5] = pfVar1[2];
                iVar8 = iVar8 + 1;
                iVar13 = iVar13 + 0x20;
                pfVar4 = pfVar10;
              } while (iVar8 < *(int *)(iVar7 + 0x2c));
            }
            local_3c = local_3c + 1;
          } while (local_3c < *piVar6);
        }
        local_40 = (undefined4 *)((int)local_40 + 1);
      } while ((int)local_40 < *(int *)(*piVar11 + 0x28));
    }
    local_44 = (undefined4 *)((int)local_44 + 0x5d60);
    piVar11 = piVar11 + 1;
  } while ((int)local_44 < 0x11820);
  _Source = (wchar_t *)*param_1;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  uVar3 = FUN_00ace02d(_Source);
  if (local_24 <= uVar3) {
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    uVar5 = uVar3 + 0x20 >> 5;
    local_24 = uVar5 << 5;
    local_2c = _malloc(uVar5 * 0x40);
  }
  _wcsncpy(local_2c,_Source,uVar3);
  local_2c[uVar3] = L'\0';
  local_4 = 0;
  local_28 = uVar3;
  FUN_009d44d0(&local_2c,_Memory,0x118b4);
  if (local_24 < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a18890 @ 00a18890 ////

int * __fastcall FUN_00a18890(int *param_1)

{
  int iVar1;
  ios_base *this;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 8) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(this + 8) | uVar2;
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  return param_1;
}


//// FUNCTION FUN_00a18940 @ 00a18940 ////

undefined4 * __thiscall FUN_00a18940(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int **)this = param_1;
  iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  if (iVar1 != 0) {
    FUN_00accb39((undefined4 *)(iVar1 + 4));
  }
  local_4 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) &&
     (piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x2c), piVar2 != (int *)0x0)) {
    FUN_00a18890(piVar2);
  }
  *(bool *)((int)this + 4) = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a18a00 @ 00a18a00 ////

undefined4 * __fastcall FUN_00a18a00(undefined4 *param_1)

{
  locale *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d74f7c;
  FUN_00accb0c(param_1 + 1);
  local_4 = 0;
  this = operator_new(4);
  if (this == (locale *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = std::locale::locale(this);
  }
  param_1[0xe] = uVar1;
  FUN_00a17da0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a18a80 @ 00a18a80 ////

void __thiscall FUN_00a18a80(void *this,undefined4 param_1)

{
  int iVar1;
  locale *plVar2;
  facet *pfVar3;
  undefined4 *puVar4;
  uint local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9b18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  plVar2 = (locale *)FUN_00a16270(this,(int *)&local_14);
  local_4 = 0;
  pfVar3 = FUN_00a17ec0(plVar2);
  local_4 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00acbfc6(&local_10,0);
    iVar1 = *(int *)(local_14 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(local_14 + 4) = iVar1 + -1;
    }
    puVar4 = (undefined4 *)(local_14 & (*(int *)(local_14 + 4) != 0) - 1);
    FUN_00acbfe9((int *)&local_10);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  (**(code **)(*(int *)pfVar3 + 0x18))(param_1);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a18b70 @ 00a18b70 ////

void * FUN_00a18b70(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a18ba0 @ 00a18ba0 ////

void * FUN_00a18ba0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a18bd0 @ 00a18bd0 ////

undefined4 __cdecl FUN_00a18bd0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9b3b;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_c;
    this = operator_new(8);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00a18050(this,0);
    }
    *param_1 = (int)puVar1;
  }
  ExceptionList = local_c;
  return 2;
}


//// FUNCTION FUN_00a18c40 @ 00a18c40 ////

void __cdecl FUN_00a18c40(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar3 = (int)param_3 - (int)param_1 >> 2;
  uVar1 = *param_1;
  if (iVar3 < 0x29) {
    uVar2 = *param_2;
    if (uVar2 < uVar1) {
      *param_2 = *param_1;
      *param_1 = uVar2;
    }
    uVar1 = *param_3;
    if (uVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar1;
      return;
    }
  }
  else {
    iVar3 = iVar3 + 1;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
    uVar2 = param_1[iVar3];
    if (uVar2 < uVar1) {
      param_1[iVar3] = uVar1;
      *param_1 = uVar2;
    }
    uVar1 = param_1[iVar3 * 2];
    if (uVar1 < param_1[iVar3]) {
      param_1[iVar3 * 2] = param_1[iVar3];
      param_1[iVar3] = uVar1;
    }
    uVar1 = param_1[iVar3];
    if (uVar1 < *param_1) {
      param_1[iVar3] = *param_1;
      *param_1 = uVar1;
    }
    uVar1 = *param_2;
    puVar4 = param_2 + -iVar3;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = param_2[iVar3];
    if (uVar1 < *param_2) {
      param_2[iVar3] = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < *puVar4) {
      *param_2 = *puVar4;
      *puVar4 = uVar1;
    }
    puVar4 = param_3 + -iVar3;
    puVar5 = param_3 + iVar3 * -2;
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_3;
    if (uVar1 < *puVar4) {
      *param_3 = *puVar4;
      *puVar4 = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *puVar5) {
      *puVar4 = *puVar5;
      *puVar5 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = uVar1;
    }
    uVar1 = *puVar4;
    if (uVar1 < *param_2) {
      *puVar4 = *param_2;
      *param_2 = uVar1;
    }
    uVar1 = *param_2;
    if (uVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = uVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a18d80 @ 00a18d80 ////

void __cdecl FUN_00a18d80(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if (*(uint *)(param_1 + iVar3 * 4) < *(uint *)(param_1 + -4 + iVar3 * 4)) {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    uVar2 = *(uint *)(param_1 + iVar3 * 4);
    if (param_4 <= uVar2) break;
    *(uint *)(param_1 + iVar1 * 4) = uVar2;
    iVar1 = iVar3;
  }
  *(uint *)(param_1 + iVar1 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00a18e50 @ 00a18e50 ////

char * __thiscall FUN_00a18e50(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
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
  puStack_8 = &LAB_00cf9b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)((int)this + 0x2c) = DAT_010b9450;
  DAT_010b9450 = this;
  _sprintf(this,param_1);
  local_6c = local_60;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  iVar2 = _strncmp(param_1,(char *)&PTR_LAB_005f6474_1_00d73408,3);
  if (iVar2 == 0) {
    puVar3 = FUN_00a1d8e0(&local_4c);
    FUN_004036d0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    pcVar4 = param_1 + 3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,param_1 + 3,(int)pcVar4 - (int)(param_1 + 4));
    local_4._0_1_ = 1;
    puVar3 = FUN_009acf60(local_2c,&local_4c);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    sVar5 = FUN_00ace02d(L"\\star.hd");
    FUN_0040cae0(&local_6c,L"\\star.hd",sVar5);
  }
  else {
    uVar6 = FUN_00ace02d(L"Data\\Heads\\");
    FUN_004036d0(&local_6c,L"Data\\Heads\\",uVar6);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,param_1,(int)pcVar4 - (int)(param_1 + 1));
    local_4._0_1_ = 2;
    puVar3 = FUN_009acf60(local_2c,&local_4c);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_009d4900(&local_6c);
  if (uVar6 != 0) {
    puVar3 = operator_new(uVar6);
    sVar5 = FUN_009d4aa0(&local_6c,puVar3,uVar6,(undefined1 *)0x0);
    if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
    puVar3[0x24] = puVar3 + 0x25;
    FUN_00a6a8d0(puVar3,DAT_010c9acc);
    *(undefined4 **)((int)this + 0x28) = puVar3;
  }
  if (local_64 < 0xb) {
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_00a19580 @ 00a19580 ////

void __fastcall FUN_00a19580(int param_1)

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


//// FUNCTION FUN_00a195b0 @ 00a195b0 ////

undefined4 * FUN_00a195b0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a195e0 @ 00a195e0 ////

void __fastcall FUN_00a195e0(int param_1)

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


//// FUNCTION FUN_00a19610 @ 00a19610 ////

undefined4 * FUN_00a19610(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a19640 @ 00a19640 ////

undefined4 * __thiscall FUN_00a19640(void *this,int param_1)

{
  undefined4 uVar1;
  
  FUN_00a18a00(this);
  *(undefined ***)this = &PTR_FUN_00d7503c;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  FUN_00a17da0((int)this);
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1 + 8;
    *(int *)((int)this + 0x14) = param_1 + 8;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x24) = param_1;
    *(int *)((int)this + 0x30) = param_1 + 4;
    *(int *)((int)this + 0x34) = param_1 + 4;
  }
  *(int *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 0x50) = DAT_010b9508;
  uVar1 = DAT_010b9508;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  return this;
}


//// FUNCTION FUN_00a196f0 @ 00a196f0 ////

uint __thiscall FUN_00a196f0(void *this,uint param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = **(uint **)((int)this + 0x20);
  if (((uVar2 != 0) && (**(uint **)((int)this + 0x10) < uVar2)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_1)))) {
    FUN_00a19790((int)this);
    return (param_1 == 0xffffffff) - 1 & param_1;
  }
  if ((*(FILE **)((int)this + 0x58) != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if ((*(int *)((int)this + 0x3c) == 0) &&
       (iVar3 = _ungetc(param_1 & 0xff,*(FILE **)((int)this + 0x58)), iVar3 != -1)) {
      return param_1;
    }
    puVar1 = (undefined1 *)((int)this + 0x44);
    if ((undefined1 *)**(int **)((int)this + 0x20) != puVar1) {
      *puVar1 = (char)param_1;
      **(int **)((int)this + 0x10) = (int)puVar1;
      **(int **)((int)this + 0x20) = (int)puVar1;
      **(int **)((int)this + 0x30) = (int)this + (0x45 - (int)puVar1);
      return param_1;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00a19790 @ 00a19790 ////

undefined4 __fastcall FUN_00a19790(int param_1)

{
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + 1;
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -1;
  return **(undefined4 **)(param_1 + 0x20);
}


//// FUNCTION FUN_00a197a0 @ 00a197a0 ////

uint __fastcall FUN_00a197a0(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[8];
  if ((pbVar1 != (byte *)0x0) && (uVar2 = *(uint *)param_1[8], uVar2 < *(int *)param_1[0xc] + uVar2)
     ) {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x14))();
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (**(code **)(*param_1 + 8))(uVar2);
  return uVar2;
}


//// FUNCTION FUN_00a197f0 @ 00a197f0 ////

undefined4 __fastcall FUN_00a197f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x16] != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = _fflush((FILE *)param_1[0x16]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00a19820 @ 00a19820 ////

void __fastcall FUN_00a19820(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9bd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  bVar3 = thunk_FUN_00ad7ee7();
  if ((!bVar3) &&
     (piVar1 = (int *)*param_1, (*(byte *)(*(int *)(*piVar1 + 4) + 0x10 + (int)piVar1) & 2) != 0)) {
    FUN_00a18890(piVar1);
  }
  iVar2 = *(int *)(*(int *)(*(int *)*param_1 + 4) + 0x28 + *param_1);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_00accb42((undefined4 *)(iVar2 + 4));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a19890 @ 00a19890 ////

void __thiscall FUN_00a19890(void *this,undefined4 param_1,char param_2)

{
  undefined1 uVar1;
  
  std::ios_base::_Init(this);
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar1 = FUN_00a18a80(this,0x20);
  *(undefined1 *)((int)this + 0x30) = uVar1;
  if (*(int *)((int)this + 0x28) == 0) {
    std::ios_base::clear(this,*(uint *)((int)this + 8) | 4,false);
  }
  if (param_2 != '\0') {
    std::ios_base::_Addstd(this);
    return;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


//// FUNCTION FUN_00a198f0 @ 00a198f0 ////

int * __cdecl FUN_00a198f0(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ios_base *this;
  int iVar9;
  int local_24;
  char local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf9bf8;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  iVar9 = 0;
  local_18 = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)(param_2 + 1);
  iVar7 = *(int *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
  if ((0 < iVar7) && (iVar5 < iVar7)) {
    iVar9 = iVar7 - iVar5;
  }
  ExceptionList = &pvStack_10;
  local_1c = iVar9;
  FUN_00a18940(&local_24,param_1);
  if (local_20 == '\0') {
    this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
    local_8 = 0;
    std::ios_base::clear(this,*(uint *)(this + 8) | 4,false);
    local_8 = 0xffffffff;
    FUN_00a19820(&local_24);
    ExceptionList = pvStack_10;
    return param_1;
  }
  local_8 = 1;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x10 + (int)param_1) & 0x1c0) != 0x40) {
    while (0 < iVar9) {
      bVar2 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
      if ((*(uint *)piVar8[9] == 0) ||
         (uVar6 = *(uint *)piVar8[9], iVar9 = local_1c, *(int *)piVar8[0xd] + uVar6 <= uVar6)) {
        uVar6 = (**(code **)(*piVar8 + 4))(bVar2);
      }
      else {
        *(int *)piVar8[0xd] = *(int *)piVar8[0xd] + -1;
        pbVar3 = *(byte **)piVar8[9];
        *(byte **)piVar8[9] = pbVar3 + 1;
        *pbVar3 = bVar2;
        uVar6 = (uint)bVar2;
      }
      if (uVar6 == 0xffffffff) {
        local_18 = local_18 | 4;
        break;
      }
      iVar9 = iVar9 + -1;
      local_1c = iVar9;
    }
    if (local_18 != 0) goto LAB_00a199fb;
  }
  iVar7 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1) + 0x1c))
                    (param_2,iVar5);
  if (iVar7 == iVar5) {
    for (; 0 < iVar9; iVar9 = iVar9 + -1) {
      bVar2 = *(byte *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
      piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
      if ((*(uint *)piVar8[9] == 0) ||
         (uVar6 = *(uint *)piVar8[9], *(int *)piVar8[0xd] + uVar6 <= uVar6)) {
        uVar6 = (**(code **)(*piVar8 + 4))(bVar2);
      }
      else {
        *(int *)piVar8[0xd] = *(int *)piVar8[0xd] + -1;
        pbVar3 = *(byte **)piVar8[9];
        *(byte **)piVar8[9] = pbVar3 + 1;
        *pbVar3 = bVar2;
        uVar6 = (uint)bVar2;
      }
      if (uVar6 == 0xffffffff) {
        local_18 = local_18 | 4;
        *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
        piVar8 = (int *)FUN_00a19aab();
        return piVar8;
      }
    }
  }
  else {
    local_18 = 4;
  }
LAB_00a199fb:
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
  piVar8 = (int *)FUN_00a19aab();
  return piVar8;
}


//// FUNCTION FUN_00a19aab @ 00a19aab ////

void FUN_00a19aab(void)

{
  uint uVar1;
  ios_base *this;
  int unaff_EBP;
  int *unaff_ESI;
  
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x14) != 0) {
    uVar1 = *(uint *)(this + 8) | *(uint *)(unaff_EBP + -0x14);
    if (*(int *)(this + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    std::ios_base::clear(this,uVar1,false);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00a19820((int *)(unaff_EBP + -0x20));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00a19b00 @ 00a19b00 ////

facet * __cdecl FUN_00a19b00(locale *param_1)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  facet *local_24;
  int local_20;
  int local_1c;
  exception local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00acbfc6(&local_1c,0);
  pfVar1 = DAT_010b9510;
  local_4 = 0;
  local_24 = DAT_010b9510;
  if (DAT_010b9514 == 0) {
    FUN_00acbfc6(&local_20,0);
    if (DAT_010b9514 == 0) {
      DAT_010b9514 = DAT_010cbae8 + 1;
      DAT_010cbae8 = DAT_010b9514;
    }
    FUN_00acbfe9(&local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_010b9514);
  if ((this == (facet *)0x0) && (this = pfVar1, pfVar1 == (facet *)0x0)) {
    iVar2 = FUN_00a18bd0((int *)&local_24);
    this = local_24;
    if (iVar2 == -1) {
      FUN_00ace1fb(local_18);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00e398b8);
    }
    DAT_010b9510 = local_24;
    FUN_00acbfc6(&local_20,0);
    if (*(int *)(this + 4) != -1) {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
    FUN_00acbfe9(&local_20);
    std::locale::facet::_Register(this);
  }
  local_4 = 0xffffffff;
  FUN_00acbfe9(&local_1c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a19c10 @ 00a19c10 ////

void __cdecl FUN_00a19c10(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00a18c40(param_2,puVar5,param_3 + -1);
  puVar6 = puVar5 + 1;
  for (; ((param_2 < puVar5 &&
          (uVar1 = puVar5[-1], uVar2 = *puVar5, uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); puVar5 = puVar5 + -1) {
  }
  puVar7 = puVar6;
  puVar3 = puVar5;
  if (puVar6 < param_3) {
    uVar1 = *puVar5;
    do {
      uVar2 = *puVar6;
      puVar7 = puVar6;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x00a19c75:
  do {
    puVar4 = puVar5;
    if (param_3 <= puVar6) {
joined_r0x00a19c9d:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar4 = puVar4 + -1;
        if (*puVar3 <= *puVar4) {
          if (*puVar3 < *puVar4) break;
          uVar1 = puVar3[-1];
          puVar3 = puVar3 + -1;
          *puVar3 = *puVar4;
          *puVar4 = uVar1;
        }
      }
      if (puVar5 == param_2) {
        if (puVar6 == param_3) {
          param_1[1] = puVar7;
          *param_1 = puVar3;
          return;
        }
        if (puVar7 != puVar6) {
          uVar1 = *puVar3;
          *puVar3 = *puVar7;
          *puVar7 = uVar1;
        }
        uVar1 = *puVar3;
        *puVar3 = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar6 == param_3) {
          puVar3 = puVar3 + -1;
          if (puVar5 != puVar3) {
            uVar1 = *puVar5;
            *puVar5 = *puVar3;
            *puVar3 = uVar1;
          }
          uVar1 = *puVar3;
          *puVar3 = puVar7[-1];
          puVar7[-1] = uVar1;
          puVar7 = puVar7 + -1;
        }
        else {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          puVar6 = puVar6 + 1;
          *puVar5 = uVar1;
        }
      }
      goto joined_r0x00a19c75;
    }
    if (*puVar6 <= *puVar3) {
      if (*puVar6 < *puVar3) goto joined_r0x00a19c9d;
      uVar1 = *puVar7;
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}


//// FUNCTION FUN_00a19d60 @ 00a19d60 ////

void __cdecl FUN_00a19d60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_00a18d80(param_1,iVar2,iVar3,*(uint *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00a19e00 @ 00a19e00 ////

float10 __cdecl FUN_00a19e00(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9c38;
  local_c = ExceptionList;
  if (param_1[1] == 0) {
    return (float10)0.5;
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_009ac040((char *)local_4c);
  uVar2 = FUN_00413450(&local_4c,".",0,1);
  if (uVar2 != 0xffffffff) {
    puVar3 = FUN_00430770(&local_4c,local_2c,0,uVar2);
    FUN_004015d0(&local_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  iVar6 = 0;
  do {
    if (DAT_010b94ec == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = DAT_010b94f0 - DAT_010b94ec >> 2;
    }
    if (iVar4 <= iVar6) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      ExceptionList = local_c;
      return (float10)0.5;
    }
    puVar3 = *(undefined4 **)(DAT_010b94ec + iVar6 * 4);
    pbVar5 = (byte *)*puVar3;
    pbVar7 = local_4c;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00a19f16:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00a19f1b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00a19f16;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00a19f1b:
    if (iVar4 == 0) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      ExceptionList = local_c;
      return (float10)(float)puVar3[8];
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


//// FUNCTION FUN_00a19f90 @ 00a19f90 ////

undefined4 __cdecl FUN_00a19f90(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  void *this;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  bool bVar8;
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9c5e;
  local_c = ExceptionList;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  ExceptionList = &local_c;
  _sprintf((char *)local_10c,param_1);
  FUN_009ac040((char *)local_10c);
  pbVar2 = DAT_010b9450;
  do {
    if (pbVar2 == (byte *)0x0) {
      this = operator_new(0x30);
      local_4 = 0;
      uVar6 = uRam00000028;
      if (this != (void *)0x0) {
        pcVar5 = FUN_00a18e50(this,param_1);
        uVar6 = *(undefined4 *)(pcVar5 + 0x28);
      }
      ExceptionList = local_c;
      return uVar6;
    }
    pbVar7 = local_10c;
    pbVar3 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00a1a01e:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00a1a023;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00a1a01e;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00a1a023:
    if (iVar4 == 0) {
      *(int *)(pbVar2 + 0x24) = *(int *)(pbVar2 + 0x24) + 1;
      ExceptionList = local_c;
      return *(undefined4 *)(pbVar2 + 0x28);
    }
    pbVar2 = *(byte **)(pbVar2 + 0x2c);
  } while( true );
}


//// FUNCTION FUN_00a1a0a0 @ 00a1a0a0 ////

void __cdecl FUN_00a1a0a0(void *param_1,char param_2,char param_3,char param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  char *pcVar9;
  void *pvVar10;
  float *pfVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte *pbVar12;
  int iVar13;
  float10 fVar14;
  ulonglong uVar15;
  char *pcVar16;
  int iVar17;
  undefined4 uVar18;
  uint local_1a8;
  undefined4 local_1a4;
  char local_19d;
  float local_19c;
  void *local_198;
  float local_194;
  byte *local_190 [2];
  int local_188;
  int local_184;
  char local_180 [32];
  char local_160 [32];
  char local_140 [32];
  char local_120 [32];
  byte local_100 [256];
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x14) == 0) {
    return;
  }
  iVar13 = 0;
  local_184 = 0;
  if (**(char **)((int)param_1 + 0x44) == '\0') {
    if (*(int *)((int)param_1 + 0x34) == 0) {
      pcVar16 = "head_m_white_joe.hd";
    }
    else {
      pcVar16 = "head_f_white_jane.hd";
    }
    FUN_009d1ef0((void *)((int)param_1 + 0x38),pcVar16);
  }
  iVar5 = FUN_00a19f90(*(char **)((int)param_1 + 0x44));
  local_188 = iVar5;
  if (**(char **)((int)param_1 + 100) != '\0') {
    iVar13 = FUN_00a19f90(*(char **)((int)param_1 + 100));
    local_184 = iVar13;
  }
  if (iVar5 == 0) {
    return;
  }
  bVar4 = false;
  local_190[1] = (byte *)0x0;
  if (((*(byte *)((int)param_1 + 0x38) & 1) == 0) || (**(char **)((int)param_1 + 0xc4) == '\0')) {
    bVar4 = true;
    pbVar12 = (byte *)(iVar5 + 0xc);
  }
  else if ((*(byte *)((int)param_1 + 0x38) & 1) == 0) {
    pbVar12 = &lpClass_00d16914;
  }
  else {
    pbVar12 = *(byte **)((int)param_1 + 0xc4);
  }
  if (((*(byte *)((int)param_1 + 0x38) & 1) == 0) || (**(char **)((int)param_1 + 0xe4) == '\0')) {
    if (bVar4) {
      if (iVar13 == 0) {
        local_190[1] = (byte *)0x0;
      }
      else {
        local_190[1] = (byte *)(iVar13 + 0xc);
      }
    }
  }
  else if ((*(byte *)((int)param_1 + 0x38) & 1) == 0) {
    local_190[1] = &lpClass_00d16914;
  }
  else {
    local_190[1] = *(byte **)((int)param_1 + 0xe4);
  }
  local_190[0] = pbVar12;
  if ((*(byte *)((int)param_1 + 0x104) & 1) == 0) {
    if (pbVar12 != (byte *)0x0) {
      *(uint *)((int)param_1 + 0x104) = *(uint *)((int)param_1 + 0x104) | 1;
      iVar6 = FUN_00a6a850(pbVar12);
      *(int *)((int)param_1 + 0x108) = iVar6;
      _sprintf((char *)local_100,(char *)pbVar12);
      pbVar12 = local_100;
      do {
        pbVar7 = pbVar12;
        pbVar12 = pbVar7 + 1;
      } while (*pbVar7 != 0);
      _sprintf((char *)(pbVar7 + -4),"_old.dds");
      iVar6 = FUN_00a6a850(local_100);
      *(int *)((int)param_1 + 0x110) = iVar6;
    }
    pbVar12 = local_190[1];
    if (local_190[1] != (byte *)0x0) {
      iVar6 = FUN_00a6a850(local_190[1]);
      *(int *)((int)param_1 + 0x10c) = iVar6;
      _sprintf((char *)local_100,(char *)pbVar12);
      pbVar12 = local_100;
      do {
        pbVar7 = pbVar12;
        pbVar12 = pbVar7 + 1;
      } while (*pbVar7 != 0);
      _sprintf((char *)(pbVar7 + -4),"_old.dds");
      iVar6 = FUN_00a6a850(local_100);
      *(int *)((int)param_1 + 0x114) = iVar6;
    }
  }
  if (param_3 != '\0') {
    if (iVar13 == 0) {
      pfVar11 = (float *)0x0;
    }
    else {
      pfVar11 = *(float **)(iVar13 + 0x90);
    }
    local_1a4 = *(float *)((int)param_1 + 0x11c);
    local_198 = *(void **)((int)param_1 + 0x120);
    if ((*(byte *)((int)param_1 + 0x38) & 1) == 0) {
      local_19c = *(float *)((int)param_1 + 0x40);
    }
    else {
      local_19c = 0.0;
    }
    FUN_009db5f0(*(void **)((int)param_1 + 0x14),*(float **)(iVar5 + 0x90),pfVar11,local_19c,
                 (float)local_198,local_1a4,0x3e4);
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x14) + 0xe4);
    *puVar1 = *puVar1 & 0xfff7ffff;
    FUN_00a6a8c0();
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x14) + 0xb0);
    if (iVar6 != 0) {
      if ((*(byte *)((int)param_1 + 0x38) & 1) == 0) {
        uVar18 = *(undefined4 *)((int)param_1 + 0x40);
      }
      else {
        uVar18 = 0;
      }
      *(undefined4 *)(iVar6 + 0x40) = uVar18;
      if (((*(int *)((int)param_1 + 8) != 0) &&
          (iVar6 = *(int *)(*(int *)((int)param_1 + 8) + 0x78), iVar6 != 0)) &&
         (iVar6 = *(int *)(iVar6 + 0x178), iVar6 != 0)) {
        if ((*(byte *)((int)param_1 + 0x38) & 1) == 0) {
          uVar18 = *(undefined4 *)((int)param_1 + 0x40);
        }
        else {
          uVar18 = 0;
        }
        *(undefined4 *)(iVar6 + 8) = uVar18;
      }
    }
  }
  if (param_2 == '\0') goto LAB_00a1a9a6;
  DAT_0105bde0 = 1;
  local_120[0] = '\0';
  local_180[0] = '\0';
  local_160[0] = '\0';
  fVar14 = FUN_009d1cb0((byte *)((int)param_1 + 0x38));
  if ((float10)0.0 == fVar14) {
    local_19d = '\0';
LAB_00a1a4d0:
    local_1a4 = *(float *)((int)param_1 + 0x11c);
    bVar2 = *(byte *)(iVar5 + 8);
  }
  else {
    local_19d = '\x01';
    if (iVar13 == 0) goto LAB_00a1a4d0;
    fVar14 = FUN_009d1cb0((byte *)((int)param_1 + 0x38));
    local_194 = (float)fVar14;
    local_1a4 = *(float *)((int)param_1 + 0x11c);
    local_198 = (void *)(1.0 - local_194);
    bVar2 = *(byte *)(iVar13 + 4);
  }
  local_19c = 1.0 - local_1a4;
  local_1a8 = (uint)bVar2;
  uVar15 = FUN_00acd42c();
  iVar6 = (int)uVar15;
  uVar15 = FUN_00acd42c();
  iVar17 = (int)uVar15;
  uVar15 = FUN_00acd42c();
  puVar8 = (undefined4 *)FUN_00412ab0(&local_1a8,(int)uVar15,iVar17,iVar6);
  *(undefined4 *)((int)param_1 + 0x118) = *puVar8;
  local_19c = 0.0;
  local_1a4 = (float)((local_19d != '\0') + 1);
  if (local_1a4 != 0.0) {
    iVar6 = 0;
    do {
      pbVar12 = local_190[(int)local_19c];
      pcVar16 = local_140 + iVar6;
      *pcVar16 = '\0';
      local_180[iVar6] = '\0';
      if (pbVar12 != (byte *)0x0) {
        _sprintf(pcVar16,(char *)pbVar12);
        pcVar9 = pcVar16;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        local_1a8 = (int)pcVar9 - (int)(local_140 + iVar6 + 1);
        if (local_1a8 != 0) {
          _sprintf(local_180 + iVar6,pcVar16);
          _sprintf(local_180 + local_1a8 + iVar6 + -4,"_old.dds");
        }
      }
      local_19c = (float)((int)local_19c + 1);
      iVar6 = iVar6 + 0x20;
      iVar13 = local_184;
      iVar5 = local_188;
    } while ((int)local_19c < (int)local_1a4);
  }
  iVar17 = -1;
  iVar6 = FUN_009d0f30();
  FUN_009a63a0(iVar6,iVar17);
  FUN_009d62a0('\x01');
  DAT_0105beb4 = 1;
  FUN_009a6fb0('\x01');
  FUN_009a4f10();
  pvVar10 = FUN_0099bb50(local_140,0,0,0,'\0');
  FUN_009a57d0((int)pvVar10,0,0xffffffff,0,(undefined4 *)0x0);
  if (pvVar10 != (void *)0x0) {
    FUN_0099b400(pvVar10);
  }
  if (local_19d == '\0') {
    if (*(float *)((int)param_1 + 0x11c) != 0.0) {
      pvVar10 = FUN_0099bb50(local_180,0,0,0,'\0');
      uVar15 = FUN_00acd42c();
      iVar6 = (int)uVar15;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_1a4 = (float)CONCAT13((char)iVar6,0xff0000);
      local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
      goto LAB_00a1a89f;
    }
  }
  else {
    local_1a8 = *(uint *)((int)param_1 + 0x11c);
    uVar18 = 1;
    fVar14 = FUN_009d1cb0((byte *)((int)param_1 + 0x38));
    uVar15 = FUN_009d0f80(local_1a8,extraout_EDX,local_1a8,(float)fVar14,uVar18);
    iVar6 = (int)uVar15;
    if (iVar6 != 0) {
      pvVar10 = FUN_0099bb50(local_180,0,0,0,'\0');
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_1a4 = (float)CONCAT13((char)iVar6,0xff0000);
      local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
      local_1a4 = (float)CONCAT31(local_1a4._1_3_,0xff);
      local_198 = pvVar10;
      FUN_009a57d0((int)pvVar10,0,local_1a4,0,(undefined4 *)0x0);
      if (pvVar10 != (void *)0x0) {
        FUN_0099b400(pvVar10);
      }
    }
    local_1a8 = *(uint *)((int)param_1 + 0x11c);
    uVar18 = 2;
    fVar14 = FUN_009d1cb0((byte *)((int)param_1 + 0x38));
    uVar15 = FUN_009d0f80(extraout_ECX,local_1a8,local_1a8,(float)fVar14,uVar18);
    iVar6 = (int)uVar15;
    if (iVar6 != 0) {
      local_198 = FUN_0099bb50(local_120,0,0,0,'\0');
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_1a4 = (float)CONCAT13((char)iVar6,0xff0000);
      local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
      local_1a4 = (float)CONCAT31(local_1a4._1_3_,0xff);
      FUN_009a57d0((int)local_198,0,local_1a4,0,(undefined4 *)0x0);
      if (local_198 != (void *)0x0) {
        FUN_0099b400(local_198);
      }
    }
    local_1a8 = *(uint *)((int)param_1 + 0x11c);
    uVar18 = 3;
    fVar14 = FUN_009d1cb0((byte *)((int)param_1 + 0x38));
    uVar15 = FUN_009d0f80(extraout_ECX_00,extraout_EDX_00,local_1a8,(float)fVar14,uVar18);
    iVar6 = (int)uVar15;
    if (iVar6 != 0) {
      pvVar10 = FUN_0099bb50(local_160,0,0,0,'\0');
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_1a4 = (float)CONCAT13((char)iVar6,0xff0000);
      local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
      local_198 = pvVar10;
LAB_00a1a89f:
      local_1a4 = (float)CONCAT31(local_1a4._1_3_,0xff);
      FUN_009a57d0((int)pvVar10,0,local_1a4,0,(undefined4 *)0x0);
      if (pvVar10 != (void *)0x0) {
        FUN_0099b400(pvVar10);
      }
    }
  }
  pvVar10 = FUN_0099bb50("skin_blend_head.dds",0,0,0,'\0');
  puVar8 = (undefined4 *)FUN_009d65c0(param_1,&local_1a8);
  FUN_009a57d0((int)pvVar10,0,*puVar8,0,(undefined4 *)0x0);
  iVar6 = FUN_00a17300((int)param_1);
  if ((char)iVar6 != '\0') {
    FUN_009b7af0((char *)((int)param_1 + 0x232),(int *)&local_1a8,(int *)0x0);
    puVar8 = (undefined4 *)FUN_00a16c40(&local_19c,local_1a8);
    FUN_009a57d0((int)pvVar10,0,*puVar8,0,(undefined4 *)0x0);
  }
  if (pvVar10 != (void *)0x0) {
    FUN_0099b400(pvVar10);
  }
  FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
  FUN_00a176d0((int)param_1);
  FUN_009a4fb0();
  FUN_009a56e0(*(int *)((int)param_1 + 0x24));
  FUN_009a6fb0('\0');
  FUN_009d62a0('\0');
  DAT_0105bde0 = 0;
LAB_00a1a9a6:
  FUN_009d0da0(iVar5);
  if (iVar13 != 0) {
    FUN_009d0da0(iVar13);
  }
  DAT_0105beb4 = 0;
  uVar15 = FUN_00acd42c();
  iVar13 = (int)uVar15;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (0xff < iVar13) {
    iVar13 = 0xff;
  }
  local_1a4 = (float)CONCAT13((char)iVar13,0xff0000);
  local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
  local_1a4 = (float)CONCAT31(local_1a4._1_3_,0xff);
  *(float *)(*(int *)(*(int *)((int)param_1 + 0x14) + 0x34) + 0x28) = local_1a4;
  uVar15 = FUN_00acd42c();
  iVar13 = (int)uVar15;
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (0xff < iVar13) {
    iVar13 = 0xff;
  }
  local_1a4 = (float)CONCAT13((char)iVar13,0xff0000);
  local_1a4 = (float)CONCAT22(local_1a4._2_2_,0xff00);
  local_1a4 = (float)CONCAT31(local_1a4._1_3_,0xff);
  *(float *)(*(int *)(*(int *)((int)param_1 + 0x14) + 0x34) + 0x4c) = local_1a4;
  if ((param_4 != '\0') || (param_3 != '\0')) {
    if (*(int *)((int)param_1 + 0x20) != 0) {
      FUN_009d9da0(*(int *)((int)param_1 + 0x20));
    }
    if (*(int *)((int)param_1 + 0x20) == 0) {
      pfVar11 = (float *)0x0;
    }
    else {
      pfVar11 = *(float **)(*(int *)((int)param_1 + 0x20) + 100);
    }
    FUN_009d8320(*(void **)((int)param_1 + 0x1c),*(void **)((int)param_1 + 0x14),pfVar11);
    *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) & 0xffffffef;
  }
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_00a48f10(*(void **)((int)param_1 + 0x14),
                 *(uint *)(*(int *)((int)param_1 + 0xc) + 0xa4) >> 0xd & 3);
    return;
  }
  FUN_00a48f10(*(void **)((int)param_1 + 0x14),*(int *)((int)param_1 + 0x34));
  return;
}


//// FUNCTION FUN_00a1aad0 @ 00a1aad0 ////

byte * __cdecl FUN_00a1aad0(wchar_t *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf9c7b;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  _sprintf((char *)local_10c,(char *)param_1);
  FUN_009ac040((char *)local_10c);
  for (pbVar10 = DAT_0105eb44; pbVar10 != (byte *)0x0; pbVar10 = *(byte **)(pbVar10 + 0x24)) {
    if ((pbVar10[0xe4] & 2) != 0) {
      pbVar9 = local_10c;
      pbVar7 = pbVar10;
      do {
        bVar2 = *pbVar7;
        bVar12 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00a1ab66:
          iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00a1ab6b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar12 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00a1ab66;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_00a1ab6b:
      if (iVar8 == 0) {
        *(int *)(pbVar10 + 0x20) = *(int *)(pbVar10 + 0x20) + 1;
        DAT_0105cc5c = uVar3;
        ExceptionList = local_c;
        return pbVar10;
      }
    }
  }
  pbVar10 = (byte *)0x0;
  iVar8 = FUN_00a19f90((char *)local_10c);
  uVar4 = DAT_0105eb3a;
  if (iVar8 != 0) {
    DAT_0105eb3a = 1;
    pbVar10 = FUN_009de1d0("generic_head.msh",0);
    DAT_0105eb3a = uVar4;
    *(uint *)(pbVar10 + 0xe4) = *(uint *)(pbVar10 + 0xe4) | 2;
    FUN_009db5f0(pbVar10,*(float **)(iVar8 + 0x90),(float *)0x0,0.0,0.0,0.0,0x3e4);
    _strncpy((char *)pbVar10,(char *)local_10c,0x20);
    pvVar5 = FUN_0099bb50((char *)(iVar8 + 0xc),0,0,0,'\0');
    bVar12 = false;
    uVar11 = 0;
    if (0 < *(int *)(pbVar10 + 0x38)) {
      do {
        if (bVar12) break;
        iVar6 = _strncmp(*(char **)(*(int *)(pbVar10 + 0x3c) + uVar11 * 4),"head_",5);
        if (iVar6 == 0) {
          FUN_00a48e80(pbVar10,uVar11,(int)pvVar5);
          bVar12 = true;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(pbVar10 + 0x38));
    }
    iVar6 = DAT_010b9450;
    if (pvVar5 != (void *)0x0) {
      FUN_0099b400(pvVar5);
      iVar6 = DAT_010b9450;
    }
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x2c)) {
      if (*(int *)(iVar6 + 0x28) == iVar8) {
        piVar1 = (int *)(iVar6 + 0x24);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(iVar6 + 0x20) = 0;
        }
        break;
      }
    }
  }
  FUN_009da710(pbVar10,param_1,(char *)0x0,(IAtlStringMgr *)0x0);
  iVar8 = _strncmp((char *)param_1,"head_f_",7);
  FUN_00a48f10(pbVar10,(uint)(iVar8 == 0));
  DAT_0105cc5c = uVar3;
  ExceptionList = local_c;
  return pbVar10;
}


//// FUNCTION FUN_00a1ad00 @ 00a1ad00 ////

void __fastcall FUN_00a1ad00(int param_1)

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


//// FUNCTION FUN_00a1ad30 @ 00a1ad30 ////

void __fastcall FUN_00a1ad30(int param_1)

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


//// FUNCTION FUN_00a1ad60 @ 00a1ad60 ////

void __fastcall FUN_00a1ad60(int param_1)

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


//// FUNCTION FUN_00a1ad90 @ 00a1ad90 ////

int * __thiscall FUN_00a1ad90(void *this,undefined4 param_1,char param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9cac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_00d75084;
    *(undefined ***)((int)this + 4) = &PTR_FUN_00d74f2c;
    local_4 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_LAB_00d74f24;
  FUN_00a19890((void *)(*(int *)(*(int *)this + 4) + (int)this),param_1,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a1ae10 @ 00a1ae10 ////

void __thiscall FUN_00a1ae10(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 != '\0') {
    *(undefined4 *)((int)this + 0x3c) = 0;
    return;
  }
  *(int **)((int)this + 0x3c) = param_1;
  FUN_00a17da0((int)this);
  if (*(int *)((int)this + 0x48) == 0) {
    pvVar2 = operator_new(0x1c);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((int)pvVar2 + 0x18) = 0xf;
      *(undefined4 *)((int)pvVar2 + 0x14) = 0;
      *(undefined1 *)((int)pvVar2 + 4) = 0;
      *(void **)((int)this + 0x48) = pvVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return;
}


//// FUNCTION FUN_00a1ae80 @ 00a1ae80 ////

void * __thiscall FUN_00a1ae80(void *this,uint param_1,undefined1 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0xffffffff) {
    FUN_00acbcb4();
  }
  else if (param_1 != 0xffffffff) goto LAB_00a1aea0;
  FUN_00acbcb4();
LAB_00a1aea0:
  if (*(uint *)((int)this + 0x18) < param_1) {
    FUN_00404ef0(this,param_1);
  }
  else if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (0xf < *(uint *)((int)this + 0x18)) {
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    *(undefined1 *)((int)this + 4) = 0;
    return this;
  }
  if (param_1 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar2 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 4);
    }
    for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = param_2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(uint *)((int)this + 0x14) = param_1;
    if (0xf < *(uint *)((int)this + 0x18)) {
      *(undefined1 *)(*(int *)((int)this + 4) + param_1) = 0;
      return this;
    }
    *(undefined1 *)((int)this + param_1 + 4) = 0;
  }
  return this;
}


//// FUNCTION FUN_00a1af70 @ 00a1af70 ////

void __cdecl FUN_00a1af70(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x00a1af84:
    puVar4 = puVar4 + 1;
    if (puVar4 != param_2) {
      uVar2 = *puVar4;
      puVar5 = param_1;
      if (*param_1 <= uVar2) goto LAB_00a1afa1;
      goto joined_r0x00a1afbe;
    }
  }
  return;
LAB_00a1afa1:
  puVar3 = puVar4;
  if (uVar2 < puVar4[-1]) {
    do {
      puVar5 = puVar3 + -1;
      puVar1 = puVar3 + -2;
      puVar3 = puVar5;
    } while (uVar2 < *puVar1);
joined_r0x00a1afbe:
    if ((puVar5 != puVar4) && (puVar4 != puVar4 + 1)) {
      FUN_00a182c0((int)puVar5,(int)puVar4,puVar4 + 1);
    }
  }
  goto joined_r0x00a1af84;
}


//// FUNCTION FUN_00a1b030 @ 00a1b030 ////

void FUN_00a1b030(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010c9ac0);
}


//// FUNCTION FUN_00a1b130 @ 00a1b130 ////

uint __fastcall FUN_00a1b130(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  void *this;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_9;
  int local_8;
  undefined1 local_4 [4];
  
  if ((**(uint **)(param_1 + 0x20) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x30), uVar3 = **(uint **)(param_1 + 0x20),
     uVar3 < *piVar1 + uVar3)) {
    *piVar1 = *piVar1 + -1;
    pbVar2 = (byte *)**(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x20) = (int)(pbVar2 + 1);
    return (uint)*pbVar2;
  }
  if (*(FILE **)(param_1 + 0x58) != (FILE *)0x0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x50);
      FUN_00404e70(*(void **)(param_1 + 0x48),0,0xffffffff);
      iVar4 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
      do {
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        FUN_00966e20(*(void **)(param_1 + 0x48),1,(char)iVar4);
        iVar4 = *(int *)(param_1 + 0x48);
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          iVar6 = iVar4 + 4;
        }
        else {
          iVar6 = *(int *)(iVar4 + 4);
        }
        if (*(uint *)(iVar4 + 0x18) < 0x10) {
          iVar5 = iVar4 + 4;
        }
        else {
          iVar5 = *(int *)(iVar4 + 4);
        }
        iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))
                          (param_1 + 0x50,iVar5,iVar6 + *(int *)(iVar4 + 0x14),&local_8,&local_9,
                           &local_8,local_4);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x48);
          if (*(uint *)(iVar4 + 0x18) < 0x10) {
            iVar6 = iVar4 + 4;
          }
          else {
            iVar6 = *(int *)(iVar4 + 4);
          }
          for (iVar6 = (*(int *)(iVar4 + 0x14) - local_8) + iVar6; 0 < iVar6; iVar6 = iVar6 + -1) {
            _ungetc((int)*(char *)(iVar6 + -1 + local_8),*(FILE **)(param_1 + 0x58));
          }
          return (uint)local_9;
        }
        if (iVar4 == 1) {
          this = *(void **)(param_1 + 0x48);
          if (*(uint *)((int)this + 0x18) < 0x10) {
            iVar4 = (int)this + 4;
          }
          else {
            iVar4 = *(int *)((int)this + 4);
          }
          FUN_00404e70(this,0,local_8 - iVar4);
        }
        else {
          if (iVar4 != 3) {
            return 0xffffffff;
          }
          if (*(int *)(*(int *)(param_1 + 0x48) + 0x14) != 0) {
            iVar4 = *(int *)(param_1 + 0x48);
            if (*(uint *)(iVar4 + 0x18) < 0x10) {
              return (uint)*(byte *)(iVar4 + 4);
            }
            return (uint)**(byte **)(iVar4 + 4);
          }
        }
        iVar4 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
      } while( true );
    }
    uVar3 = FID_conflict__getc(*(FILE **)(param_1 + 0x58));
    if (uVar3 != 0xffffffff) {
      return uVar3 & 0xff;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00a1b310 @ 00a1b310 ////

void * __thiscall FUN_00a1b310(void *this,uint param_1,undefined1 param_2)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_00a1ae80(this,param_1,param_2);
  return this;
}


//// FUNCTION FUN_00a1b340 @ 00a1b340 ////

void * __thiscall FUN_00a1b340(void *this,char *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  _iobuf *p_Var3;
  locale *plVar4;
  facet *pfVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9cc8;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x58) == 0) {
    ExceptionList = &local_c;
    p_Var3 = std::_Fiopen(param_1,param_2,param_3);
    if (p_Var3 != (_iobuf *)0x0) {
      *(undefined1 *)((int)this + 0x54) = 1;
      *(undefined1 *)((int)this + 0x4c) = 0;
      FUN_00a17da0((int)this);
      *(int **)((int)this + 0x30) = &p_Var3->_cnt;
      *(int **)((int)this + 0x34) = &p_Var3->_cnt;
      *(char ***)((int)this + 0x10) = &p_Var3->_base;
      *(char ***)((int)this + 0x14) = &p_Var3->_base;
      *(_iobuf **)((int)this + 0x20) = p_Var3;
      *(_iobuf **)((int)this + 0x24) = p_Var3;
      *(_iobuf **)((int)this + 0x58) = p_Var3;
      *(undefined4 *)((int)this + 0x50) = DAT_010b9508;
      *(undefined4 *)((int)this + 0x40) = DAT_010b9508;
      *(undefined4 *)((int)this + 0x3c) = 0;
      plVar4 = (locale *)FUN_00a16730(this,(int *)&param_3);
      local_4 = 0;
      pfVar5 = FUN_00a19b00(plVar4);
      FUN_00a1ae10(this,(int *)pfVar5);
      uVar2 = param_3;
      local_4 = 0xffffffff;
      if (param_3 != 0) {
        FUN_00acbfc6(&param_2,0);
        iVar1 = *(int *)(uVar2 + 4);
        if ((iVar1 != 0) && (iVar1 != -1)) {
          *(int *)(uVar2 + 4) = iVar1 + -1;
        }
        puVar6 = (undefined4 *)(uVar2 & (*(int *)(uVar2 + 4) != 0) - 1);
        FUN_00acbfe9(&param_2);
        if (puVar6 != (undefined4 *)0x0) {
          (**(code **)*puVar6)(1);
        }
      }
      ExceptionList = local_c;
      return this;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}


//// FUNCTION FUN_00a1b470 @ 00a1b470 ////

undefined4 __fastcall FUN_00a1b470(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ***pppuVar3;
  size_t sVar4;
  uint uVar5;
  int unaff_EBX;
  size_t _Size;
  undefined1 auStack_2c [4];
  undefined4 **ppuStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  int iStack_18;
  uint uStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9ce8;
  local_c = ExceptionList;
  if ((param_1[0xf] == 0) || ((char)param_1[0x13] == '\0')) {
    return CONCAT31((int3)((uint)param_1[0xf] >> 8),1);
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 4))(0xffffffff);
  uStack_14 = 0xf;
  ppuStack_28 = (undefined4 ***)0x0;
  uStack_24 = 0;
  iStack_18 = 8;
  uStack_20 = 0;
  puStack_8 = (undefined1 *)0x0;
  do {
    pppuVar3 = (undefined4 ***)ppuStack_28;
    if (uStack_14 < 0x10) {
      pppuVar3 = &ppuStack_28;
    }
    iVar1 = (**(code **)(*(int *)param_1[0xf] + 0x18))
                      (param_1 + 0x14,pppuVar3,iStack_18 + (int)pppuVar3,&stack0xffffffd0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    else if (iVar1 != 1) {
      if (iVar1 != 3) goto LAB_00a1b58f;
LAB_00a1b51c:
      uVar2 = FUN_00405a80((int)auStack_2c);
      ExceptionList = pvStack_10;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    pppuVar3 = (undefined4 ***)ppuStack_28;
    if (uStack_14 < 0x10) {
      pppuVar3 = &ppuStack_28;
    }
    _Size = unaff_EBX - (int)pppuVar3;
    if (_Size != 0) {
      pppuVar3 = (undefined4 ***)ppuStack_28;
      if (uStack_14 < 0x10) {
        pppuVar3 = &ppuStack_28;
      }
      sVar4 = _fwrite(pppuVar3,_Size,1,(FILE *)param_1[0x16]);
      if (_Size != sVar4) {
LAB_00a1b58f:
        uVar5 = FUN_00405a80((int)auStack_2c);
        ExceptionList = pvStack_10;
        return uVar5 & 0xffffff00;
      }
    }
    if ((char)param_1[0x13] == '\0') goto LAB_00a1b51c;
    FUN_00966e20(auStack_2c,8,0);
  } while( true );
}


//// FUNCTION FUN_00a1b5c0 @ 00a1b5c0 ////

void __cdecl FUN_00a1b5c0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(uint *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00a18d80((int)param_1,0,iVar2 + -4 >> 2,uVar1);
  }
  return;
}


//// FUNCTION FUN_00a1b8d0 @ 00a1b8d0 ////

void __thiscall FUN_00a1b8d0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = **(uint **)((int)this + 0x20);
  if (((uVar1 < **(int **)((int)this + 0x30) + uVar1) &&
      (**(uint **)((int)this + 0x20) == (int)this + 0x44U)) && (param_3 == 1)) {
    if (*(int *)((int)this + 0x3c) == 0) {
      param_2 = param_2 + -1;
    }
    else {
      iVar4 = *(int *)(*(int *)((int)this + 0x48) + 0x14);
      while (0 < iVar4) {
        iVar2 = *(int *)((int)this + 0x48);
        iVar4 = iVar4 + -1;
        if (*(uint *)(iVar2 + 0x18) < 0x10) {
          iVar2 = iVar2 + 4;
        }
        else {
          iVar2 = *(int *)(iVar2 + 4);
        }
        _ungetc((int)*(char *)(iVar2 + iVar4),*(FILE **)((int)this + 0x58));
      }
      FUN_00404e70(*(void **)((int)this + 0x48),0,0xffffffff);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x40);
    }
  }
  if ((((*(int *)((int)this + 0x58) != 0) && (uVar3 = FUN_00a1b470(this), (char)uVar3 != '\0')) &&
      (((param_2 == 0 && (param_3 == 1)) ||
       (iVar4 = _fseek(*(FILE **)((int)this + 0x58),param_2,param_3), iVar4 == 0)))) &&
     (iVar4 = _fgetpos(*(FILE **)((int)this + 0x58),(fpos_t *)&local_8), iVar4 == 0)) {
    iVar4 = (int)this + 0x44;
    if (**(int **)((int)this + 0x20) == iVar4) {
      **(int **)((int)this + 0x10) = iVar4;
      **(int **)((int)this + 0x20) = iVar4;
      **(int **)((int)this + 0x30) = (int)this + (0x44 - iVar4);
    }
    param_1[4] = *(undefined4 *)((int)this + 0x50);
    *param_1 = 0;
    param_1[2] = local_8;
    param_1[3] = local_4;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[2] = DAT_010cbb08;
  param_1[3] = DAT_010cbb0c;
  param_1[4] = DAT_010b9504;
  return;
}


//// FUNCTION FUN_00a1ba10 @ 00a1ba10 ////

void __thiscall
FUN_00a1ba10(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_4;
  local_4 = param_5;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = FUN_00a1b470(this);
    if ((char)uVar1 != '\0') {
      iVar2 = _fsetpos(*(FILE **)((int)this + 0x58),(fpos_t *)&local_8);
      if (iVar2 == 0) {
        if (param_2 != 0) {
          iVar2 = _fseek(*(FILE **)((int)this + 0x58),param_2,1);
          if (iVar2 != 0) goto LAB_00a1bae6;
        }
        iVar2 = _fgetpos(*(FILE **)((int)this + 0x58),(fpos_t *)&local_8);
        if (iVar2 == 0) {
          if (*(void **)((int)this + 0x48) != (void *)0x0) {
            *(int *)((int)this + 0x50) = param_6;
            FUN_00404e70(*(void **)((int)this + 0x48),0,0xffffffff);
          }
          iVar2 = (int)this + 0x44;
          if (**(int **)((int)this + 0x20) == iVar2) {
            **(int **)((int)this + 0x10) = iVar2;
            **(int **)((int)this + 0x20) = iVar2;
            **(int **)((int)this + 0x30) = (int)this + (0x44 - iVar2);
          }
          param_1[4] = *(undefined4 *)((int)this + 0x50);
          *param_1 = 0;
          param_1[2] = local_8;
          param_1[3] = local_4;
          return;
        }
      }
    }
  }
LAB_00a1bae6:
  *param_1 = 0xffffffff;
  param_1[2] = DAT_010cbb08;
  param_1[3] = DAT_010cbb0c;
  param_1[4] = DAT_010b9504;
  return;
}


//// FUNCTION FUN_00a1bb20 @ 00a1bb20 ////

int * __fastcall FUN_00a1bb20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x16] != 0) {
    uVar1 = FUN_00a1b470(param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = _fclose((FILE *)param_1[0x16]);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x15) = 0;
        *(undefined1 *)(param_1 + 0x13) = 0;
        FUN_00a17da0((int)param_1);
        param_1[0x16] = 0;
        param_1[0x14] = DAT_010b9508;
        iVar2 = DAT_010b9508;
        param_1[0xf] = 0;
        param_1[0x10] = iVar2;
        return param_1;
      }
    }
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00a1bb80 @ 00a1bb80 ////

void __cdecl FUN_00a1bb80(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint *local_8;
  uint *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00a1bc03:
      if (1 < iVar2) {
        FUN_00a1af70(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00a19d60((int)param_1,(int)param_2);
        }
        FUN_00a1b5c0(param_1,(int)param_2);
        return;
      }
      goto LAB_00a1bc03;
    }
    FUN_00a19c10(&local_8,param_1,param_2);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00a1bb80(param_1,local_8,param_3);
      param_1 = puVar1;
    }
    else {
      FUN_00a1bb80(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00a1bc50 @ 00a1bc50 ////

void __fastcall FUN_00a1bc50(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = FUN_00a1bb20(param_1 + 1);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)(*param_1 + 4);
    uVar2 = *(uint *)(iVar1 + 8 + (int)param_1);
    uVar4 = uVar2 | 2;
    if (*(int *)(iVar1 + 0x28 + (int)param_1) == 0) {
      uVar4 = uVar2 | 6;
    }
    std::ios_base::clear((ios_base *)(iVar1 + (int)param_1),uVar4,false);
  }
  return;
}


//// FUNCTION FUN_00a1bc90 @ 00a1bc90 ////

void __fastcall FUN_00a1bc90(int *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00d7503c;
  local_4 = 0;
  if ((char)param_1[0x15] != '\0') {
    FUN_00a1bb20(param_1);
  }
  _Memory = (void *)param_1[0x12];
  if (_Memory != (void *)0x0) {
    if (0xf < *(uint *)((int)_Memory + 0x18)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)_Memory + 4));
    }
    *(undefined4 *)((int)_Memory + 0x18) = 0xf;
    *(undefined4 *)((int)_Memory + 0x14) = 0;
    *(undefined1 *)((int)_Memory + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  FUN_00a17980(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a1bd20 @ 00a1bd20 ////

int * __thiscall FUN_00a1bd20(void *this,byte param_1)

{
  FUN_00a1bc90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a1bd40 @ 00a1bd40 ////

void FUN_00a1bd40(void)

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
  puStack_8 = &LAB_00cf9d48;
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


//// FUNCTION FUN_00a1bdb0 @ 00a1bdb0 ////

void FUN_00a1bdb0(void)

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
  puStack_8 = &LAB_00cf9d68;
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


//// FUNCTION FUN_00a1be40 @ 00a1be40 ////

int * __thiscall FUN_00a1be40(void *this,int param_1)

{
  undefined4 *puVar1;
  ios_base iVar2;
  ios_base *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9da7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_00d75094;
    *(undefined ***)((int)this + 0x60) = &PTR_FUN_00d74f2c;
    local_4 = 0;
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00d74f24;
  this_00 = (ios_base *)(*(int *)(*(int *)this + 4) + (int)this);
  std::ios_base::_Init(this_00);
  puVar1 = (undefined4 *)((int)this + 4);
  *(undefined4 **)(this_00 + 0x28) = puVar1;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  iVar2 = (ios_base)FUN_00a18a80(this_00,0x20);
  this_00[0x30] = iVar2;
  if (*(int *)(this_00 + 0x28) == 0) {
    std::ios_base::clear(this_00,*(uint *)(this_00 + 8) | 4,false);
  }
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00d75090;
  local_4 = 2;
  FUN_00a18a00(puVar1);
  *puVar1 = &PTR_FUN_00d7503c;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  FUN_00a17da0((int)puVar1);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = DAT_010b9508;
  *(undefined4 *)((int)this + 0x44) = DAT_010b9508;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a1bf40 @ 00a1bf40 ////

void __fastcall FUN_00a1bf40(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9dcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x60) + 4) + -0x60 + param_1) = &PTR_LAB_00d75090;
  local_4 = 0;
  FUN_00a1bc90((int *)(param_1 + -0x5c));
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x60) + 4) + -4 + param_1 + -0x5c) =
       &PTR_LAB_00d74f24;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a1c040 @ 00a1c040 ////

void __thiscall FUN_00a1c040(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a1bd40();
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
      _Dst = FUN_00a195b0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a18b70(param_1,iVar5,param_1 + param_2);
      FUN_00a195b0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a16930(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a18b70(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a17fe0(param_1,(int)pvVar3,iVar5);
    FUN_00a16930(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a1c220 @ 00a1c220 ////

void __thiscall FUN_00a1c220(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a1bdb0();
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
      _Dst = FUN_00a19610((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a18ba0(param_1,iVar5,param_1 + param_2);
      FUN_00a19610(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a16970(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a18ba0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a18020(param_1,(int)pvVar3,iVar5);
    FUN_00a16970(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a1c400 @ 00a1c400 ////

void __fastcall FUN_00a1c400(int param_1)

{
  FUN_00a1bf40(param_1 + 0x60);
  FUN_00a16560((ios_base *)(param_1 + 0x60));
  return;
}


//// FUNCTION FUN_00a1c5b0 @ 00a1c5b0 ////

void FUN_00a1c5b0(void)

{
  uint uVar1;
  char *_Memory;
  int iVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  char *local_a4;
  undefined4 local_a0;
  uint local_9c;
  char local_98 [140];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9e1f;
  pvStack_c = ExceptionList;
  local_a4 = local_98;
  local_98[0] = '\0';
  local_a0 = 0;
  local_9c = 0x20;
  ExceptionList = &pvStack_c;
  local_a4 = _malloc(0x20);
  _strncpy(local_a4,"Data\\Heads\\heads_body.txt",0x19);
  local_a0 = 0x19;
  local_a4[0x19] = '\0';
  local_4 = 0;
  uVar1 = FUN_009d3720(&local_a4);
  local_4 = 0xffffffff;
  if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  uVar6 = uVar1 + 1;
  _Memory = operator_new(uVar6);
  pcVar7 = _Memory;
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  local_a4 = local_98;
  local_98[0] = '\0';
  local_a0 = 0;
  local_9c = 0x20;
  local_a4 = _malloc(0x20);
  _strncpy(local_a4,"Data\\Heads\\heads_body.txt",0x19);
  local_a0 = 0x19;
  local_a4[0x19] = '\0';
  local_4 = 1;
  FUN_009d3ca0(&local_a4,(undefined4 *)_Memory,uVar6,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (local_9c < 0x15) {
    iVar8 = 0;
    DAT_010c9ac4 = 0;
    if (0 < (int)uVar1) {
      do {
        iVar2 = _strncmp(_Memory + iVar8,"head_",5);
        if (iVar2 == 0) {
          DAT_010c9ac4 = DAT_010c9ac4 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar1);
    }
    uVar5 = DAT_010c9ac4;
    DAT_010c9ac0 = operator_new(DAT_010c9ac4 << 6);
    if (DAT_010c9ac0 == (undefined4 *)0x0) {
      DAT_010c9ac0 = (undefined4 *)0x0;
    }
    else if (-1 < (int)(uVar5 - 1)) {
      puVar9 = DAT_010c9ac0;
      for (iVar8 = (uVar5 & 0x3ffffff) << 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if (0 < (int)uVar1) {
      iVar8 = 0;
      pcVar7 = _Memory;
      do {
        iVar2 = _strncmp(pcVar7,"head_",5);
        if (iVar2 == 0) {
          iVar2 = FUN_009ac120(pcVar7,".dds");
          if (0 < iVar2) {
            sVar3 = iVar2 + 4;
            if (0x20 < (int)sVar3) {
              sVar3 = 0x20;
            }
            _strncpy((char *)((int)DAT_010c9ac0 + iVar8),pcVar7,sVar3);
          }
          iVar2 = FUN_009ac120(pcVar7,"skin_");
          if (iVar2 < 1) {
            _sprintf((char *)((int)DAT_010c9ac0 + iVar8 + 0x20),"skin_m_white.dds");
          }
          else {
            iVar4 = FUN_009ac120(pcVar7 + iVar2,".dds");
            sVar3 = iVar4 + 4;
            if (0x20 < (int)sVar3) {
              sVar3 = 0x20;
            }
            _strncpy((char *)((int)DAT_010c9ac0 + iVar8 + 0x20),pcVar7 + iVar2,sVar3);
          }
          iVar8 = iVar8 + 0x40;
        }
        pcVar7 = pcVar7 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_a4);
}


//// FUNCTION FUN_00a1ce00 @ 00a1ce00 ////

/* WARNING: Type propagation algorithm not settling */

void FUN_00a1ce00(void)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *_Memory;
  uint *puVar6;
  undefined ***pppuVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char *local_428;
  undefined ***local_424;
  undefined1 local_420 [4];
  uint *local_41c;
  uint *local_418;
  int local_414;
  undefined1 local_410 [4];
  uint *local_40c;
  uint *local_408;
  int local_404;
  int local_400;
  undefined1 local_3fc [4];
  uint uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  undefined4 uStack_3e4;
  undefined4 **ppuStack_3e0;
  undefined4 *puStack_3dc;
  undefined4 ****appppuStack_3d8 [4];
  undefined4 ****ppppuStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 uStack_3a8;
  FILE *pFStack_3a4;
  undefined **appuStack_3a0 [13];
  undefined4 local_36c [18];
  int local_324;
  int local_320;
  char local_318 [260];
  char local_214 [260];
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9e6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009c89a0(local_36c);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  FUN_009ca9d0(local_36c,"head_*.hd","C:\\movies\\Dev\\Build\\Data\\Heads\\",(undefined1 *)0x1);
  local_41c = (uint *)0x0;
  local_418 = (uint *)0x0;
  local_414 = 0;
  _Memory = (uint *)0x0;
  puVar6 = (uint *)0x0;
  local_40c = (uint *)0x0;
  local_408 = (uint *)0x0;
  local_404 = 0;
  local_4._0_1_ = 2;
  if ((local_324 != 0) &&
     (local_424 = (undefined ***)(local_320 - local_324 >> 2), local_424 != (undefined ***)0x0)) {
    pppuVar7 = (undefined ***)0x0;
    if (local_424 != (undefined ***)0x0) {
      do {
        __splitpath(*(char **)(local_324 + (int)pppuVar7 * 4),(char *)0x0,(char *)0x0,local_110,
                    local_214);
        _sprintf(local_318,"%s%s",local_110,local_214);
        FUN_009ac040(local_318);
        iVar1 = _strncmp(local_318,"head_m",6);
        if (iVar1 == 0) {
          local_428 = local_318;
          if ((local_41c == (uint *)0x0) ||
             ((uint)(local_414 - (int)local_41c >> 2) <= (uint)((int)puVar9 - (int)local_41c >> 2)))
          {
            FUN_00a1c220(local_420,puVar9,1,&local_428);
            puVar9 = local_418;
          }
          else {
            *puVar9 = (uint)local_318;
            local_418 = puVar9 + 1;
            puVar9 = local_418;
          }
        }
        else {
          iVar1 = _strncmp(local_318,"head_f",6);
          if (iVar1 == 0) {
            local_428 = local_318;
            if ((_Memory == (uint *)0x0) ||
               ((uint)(local_404 - (int)_Memory >> 2) <= (uint)((int)puVar6 - (int)_Memory >> 2))) {
              FUN_00a1c220(local_410,puVar6,1,&local_428);
              _Memory = local_40c;
              puVar6 = local_408;
            }
            else {
              *puVar6 = (uint)local_318;
              local_408 = puVar6 + 1;
              puVar6 = local_408;
            }
          }
        }
        pppuVar7 = (undefined ***)((int)pppuVar7 + 1);
      } while (pppuVar7 < local_424);
    }
    uVar8 = (int)puVar9 - (int)local_41c >> 2;
    FUN_00a1bb80(local_41c,puVar9,uVar8);
    uVar10 = (int)puVar6 - (int)_Memory >> 2;
    FUN_00a1bb80(_Memory,puVar6,uVar10);
    FUN_00a1be40(&local_400,1);
    local_4 = CONCAT31(local_4._1_3_,3);
    pvVar2 = FUN_00a1b340(local_3fc,"C:\\movies\\Dev\\Build\\Data\\Heads\\heads.ini",2,0x1b6);
    if (pvVar2 == (void *)0x0) {
      iVar1 = *(int *)(local_400 + 4);
      uVar3 = *(uint *)((int)&uStack_3f8 + iVar1) | 2;
      if (*(int *)((int)appppuStack_3d8 + iVar1) == 0) {
        uVar3 = *(uint *)((int)&uStack_3f8 + iVar1) | 6;
      }
      std::ios_base::clear((ios_base *)((int)&local_400 + iVar1),uVar3,false);
    }
    FUN_00a198f0(&local_400,"[male]");
    for (uVar3 = 0; (local_41c != (uint *)0x0 && (uVar3 < uVar8)); uVar3 = uVar3 + 1) {
      pcVar11 = (char *)local_41c[uVar3];
      pcVar12 = "\n";
      piVar4 = FUN_00a198f0(&local_400,"\t");
      piVar4 = FUN_00a198f0(piVar4,pcVar11);
      FUN_00a198f0(piVar4,pcVar12);
    }
    FUN_00a198f0(&local_400,"\n[female]");
    for (uVar8 = 0; (_Memory != (uint *)0x0 && (uVar8 < uVar10)); uVar8 = uVar8 + 1) {
      pcVar11 = (char *)_Memory[uVar8];
      pcVar12 = "\n";
      piVar4 = FUN_00a198f0(&local_400,"\t");
      piVar4 = FUN_00a198f0(piVar4,pcVar11);
      FUN_00a198f0(piVar4,pcVar12);
    }
    if (((pFStack_3a4 == (FILE *)0x0) ||
        (uVar5 = FUN_00a1b470((int *)local_3fc), (char)uVar5 == '\0')) ||
       (iVar1 = _fclose(pFStack_3a4), iVar1 != 0)) {
      iVar1 = *(int *)(local_400 + 4);
      uVar8 = *(uint *)((int)&uStack_3f8 + iVar1) | 2;
      if (*(int *)((int)appppuStack_3d8 + iVar1) == 0) {
        uVar8 = *(uint *)((int)&uStack_3f8 + iVar1) | 6;
      }
      std::ios_base::clear((ios_base *)((int)&local_400 + iVar1),uVar8,false);
    }
    else {
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      iStack_3ec = (int)&uStack_3f4;
      iStack_3e8 = (int)&uStack_3f0;
      puStack_3dc = &uStack_3e4;
      appppuStack_3d8[0] = (undefined4 ****)&ppuStack_3e0;
      appppuStack_3d8[3] = appppuStack_3d8 + 1;
      ppppuStack_3c8 = appppuStack_3d8 + 2;
      uStack_3f0 = 0;
      ppuStack_3e0 = (undefined4 **)0x0;
      appppuStack_3d8[2] = (undefined4 ****)0x0;
      uStack_3f4 = 0;
      uStack_3e4 = 0;
      appppuStack_3d8[1] = (undefined4 ****)0x0;
      pFStack_3a4 = (FILE *)0x0;
      uStack_3ac = DAT_010b9508;
      uStack_3bc = DAT_010b9508;
      uStack_3c0 = 0;
    }
    local_424 = appuStack_3a0;
    *(undefined ***)((int)&local_400 + *(int *)(local_400 + 4)) = &PTR_LAB_00d75090;
    local_4._0_1_ = 4;
    FUN_00a1bc90((int *)local_3fc);
    *(undefined ***)((int)&local_400 + *(int *)(local_400 + 4)) = &PTR_LAB_00d74f24;
    local_4 = CONCAT31(local_4._1_3_,2);
    appuStack_3a0[0] = &PTR_FUN_00d74f2c;
    FUN_00acc705((ios_base *)appuStack_3a0);
    if (_Memory != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if (local_41c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_41c);
    }
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_36c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a1d350 @ 00a1d350 ////

void __cdecl FUN_00a1d350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a1d430 @ 00a1d430 ////

void __fastcall FUN_00a1d430(undefined4 *param_1)

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


//// FUNCTION FUN_00a1d460 @ 00a1d460 ////

int * __cdecl FUN_00a1d460(void *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9e88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_009d4900(&param_1);
  if (uVar1 == 0) {
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = local_c;
    return (int *)0x0;
  }
  _Memory = operator_new(uVar1);
  FUN_009d4aa0(&param_1,_Memory,uVar1,(undefined1 *)0x0);
  if (*_Memory != 2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  _Memory[0x5f] = (int)(_Memory + 0x60);
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return _Memory;
}


//// FUNCTION FUN_00a1d540 @ 00a1d540 ////

void __cdecl FUN_00a1d540(void *param_1,int param_2)

{
  FUN_009d60a0(param_1,*(char **)(param_2 + 0x9c));
  FUN_009d1330(param_1,*(int *)(param_2 + 0x98));
  FUN_009d17f0(param_1,*(uint *)(param_2 + 0x90));
  FUN_009d13b0(param_1,*(int *)(param_2 + 0x80));
  FUN_009d1840(param_1,*(uint *)(param_2 + 0x88));
  FUN_009d1890(param_1,*(uint *)(param_2 + 0x8c));
  FUN_009d18e0(param_1,*(uint *)(param_2 + 0x84));
  FUN_009d1940(param_1,*(uint *)(param_2 + 0x94));
  return;
}


//// FUNCTION FUN_00a1d640 @ 00a1d640 ////

void __cdecl FUN_00a1d640(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a1d6f0 @ 00a1d6f0 ////

undefined4 * __thiscall FUN_00a1d6f0(void *this,byte param_1)

{
  FUN_00a1d430(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a1d760 @ 00a1d760 ////

undefined4 * __thiscall FUN_00a1d760(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x24) = (undefined1 *)((int)this + 0x30);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x24),(char *)param_1[9],param_1[10]);
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x74) = param_1[0x1d];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  return this;
}


//// FUNCTION FUN_00a1d820 @ 00a1d820 ////

undefined4 * __thiscall FUN_00a1d820(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = (undefined1 *)((int)this + 0x28);
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x1c),(char *)param_1[7],param_1[8]);
  return this;
}


//// FUNCTION FUN_00a1d8b0 @ 00a1d8b0 ////

void * FUN_00a1d8b0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a1d8e0 @ 00a1d8e0 ////

undefined4 * __cdecl FUN_00a1d8e0(undefined4 *param_1)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_009b91e0();
  sVar1 = FUN_00ace02d(L"\\The Movies\\StarMaker\\");
  FUN_0040cae0(&local_20,L"\\The Movies\\StarMaker\\",sVar1);
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


//// FUNCTION FUN_00a1d960 @ 00a1d960 ////

undefined4 __fastcall FUN_00a1d960(int param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *_Memory;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b91e0();
  local_4 = 0;
  sVar1 = FUN_00ace02d(L"\\The Movies\\StarMaker\\");
  FUN_0040cae0(local_4c,L"\\The Movies\\StarMaker\\",sVar1);
  puVar2 = FUN_009acf60(local_2c,(undefined4 *)(param_1 + 0x20));
  FUN_0040cae0(local_4c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\thumb.dds");
  FUN_0040cae0(local_4c,L"\\thumb.dds",sVar1);
  uVar3 = FUN_009d4900(local_4c);
  if (uVar3 == 0x2080) {
    _Memory = operator_new(0x2080);
    sVar1 = FUN_009d4aa0(local_4c,_Memory,0x2080,(undefined1 *)0x0);
    if (sVar1 == 0x2080) {
      FUN_0099ab10(_Memory,(float *)0x2080);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00a1db30 @ 00a1db30 ////

void __fastcall FUN_00a1db30(int param_1)

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


//// FUNCTION FUN_00a1db60 @ 00a1db60 ////

undefined4 * FUN_00a1db60(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION Timeline_InterpolateGenreColumnsAtDate @ 00a1db90 ////

void * __cdecl Timeline_InterpolateGenreColumnsAtDate(void *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int *_Memory;
  int *piVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 local_130 [2];
  undefined4 uStack_12c;
  undefined2 *local_108;
  undefined4 local_104;
  uint local_100;
  undefined2 local_fc [10];
  undefined1 local_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d8 [20];
  float local_c4;
  float local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  wchar_t *local_4c;
  uint local_48;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9ed3;
  local_c = ExceptionList;
  local_108 = local_fc;
  local_e4 = local_d8;
  local_6c = local_60;
  local_fc[0] = 0;
  local_104 = 0;
  local_100 = 10;
  local_d8[0] = 0;
  local_e0 = 0;
  local_dc = 0x14;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  if (-1 < param_2) {
    if (DAT_010b951c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010b9520 - DAT_010b951c >> 2;
    }
    if (param_2 < iVar2) {
      puVar1 = *(undefined4 **)(DAT_010b951c + param_2 * 4);
      ExceptionList = &local_c;
      FUN_00a1d8e0(&local_4c);
      local_4 = CONCAT31(local_4._1_3_,1);
      uStack_12c = 0xa1dc6a;
      puVar3 = FUN_009acf60(local_2c,puVar1 + 8);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      sVar4 = FUN_00ace02d(L"\\info.sm");
      FUN_0040cae0(&local_4c,L"\\info.sm",sVar4);
      puVar6 = local_130;
      local_130[0] = 0;
      uVar7 = 0;
      uVar8 = 10;
      FUN_004036d0(&stack0xfffffec4,local_4c,local_48);
      _Memory = FUN_00a1d460(puVar6,uVar7,uVar8);
      puVar3 = FUN_0040d6b0(local_2c,(char *)&PTR_LAB_005f6474_1_00d73408,puVar1 + 8);
      FUN_004015d0(&local_e4,(char *)*puVar3,puVar3[1]);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      FUN_004036d0(&local_108,(wchar_t *)*puVar1,puVar1[1]);
      local_e8 = _Memory[3] != 0;
      local_c4 = (float)_Memory[0x2d] * 47.0 + 18.0;
      local_c0 = (1.0 - (float)_Memory[5]) * 0.5 * 40.0 + 60.0;
      local_bc = _Memory[4];
      local_b8 = _Memory[6];
      local_b4 = _Memory[7];
      local_b0 = _Memory[8];
      local_ac = _Memory[9];
      local_a8 = _Memory[10];
      local_a4 = _Memory[0xb];
      local_a0 = _Memory[0xc];
      local_9c = _Memory[0xd];
      local_98 = _Memory[0xe];
      local_94 = _Memory[0xf];
      local_90 = _Memory[0x10];
      local_8c = _Memory[0x11];
      local_88 = _Memory[0x2c];
      local_84 = _Memory[0x2f];
      local_80 = _Memory[0x30];
      local_7c = _Memory[0x31];
      local_78 = _Memory[0x32];
      local_74 = _Memory[0x33];
      local_70 = _Memory[0x2e];
      piVar5 = _Memory + 0x22;
      do {
        iVar2 = *piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar2 != '\0');
      FUN_004015d0(&local_6c,(char *)(_Memory + 0x22),(int)piVar5 - ((int)_Memory + 0x89));
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = &local_c;
  FUN_00a1d760(param_1,&local_108);
  FUN_00a1d820((void *)((int)param_1 + 0x80),&local_88);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_e4);
  }
  if (10 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a1df40 @ 00a1df40 ////

void __fastcall FUN_00a1df40(int param_1)

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


//// FUNCTION FUN_00a1df70 @ 00a1df70 ////

void __fastcall FUN_00a1df70(int param_1)

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


//// FUNCTION FUN_00a1dfa0 @ 00a1dfa0 ////

void FUN_00a1dfa0(void)

{
  undefined4 *_Memory;
  uint uVar1;
  
  if ((DAT_0105be88 != '\0') || (DAT_0105be80 != '\0')) {
    uVar1 = 0;
    while (DAT_010b951c != (void *)0x0) {
      if ((uint)(DAT_010b9520 - (int)DAT_010b951c >> 2) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_010b951c);
      }
      _Memory = *(undefined4 **)((int)DAT_010b951c + uVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_00a1d430(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)((int)DAT_010b951c + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    }
    DAT_010b951c = (void *)0x0;
    DAT_010b9520 = 0;
    DAT_010b9524 = 0;
  }
  return;
}


//// FUNCTION FUN_00a1e020 @ 00a1e020 ////

void FUN_00a1e020(void)

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
  puStack_8 = &LAB_00cf9ee8;
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


//// FUNCTION FUN_00a1e0e0 @ 00a1e0e0 ////

void __thiscall FUN_00a1e0e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a1e020();
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
      _Dst = FUN_00a1db60((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a1d8b0(param_1,iVar5,param_1 + param_2);
      FUN_00a1db60(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a1d350(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a1d8b0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a1d640(param_1,(int)pvVar3,iVar5);
    FUN_00a1d350(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a1e370 @ 00a1e370 ////

void FUN_00a1e370(void)

{
  char *_Source;
  wchar_t *_Source_00;
  undefined1 *puVar1;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  int *_Memory;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  wchar_t *pwVar9;
  int *_Memory_00;
  int iVar10;
  int iVar11;
  wchar_t local_118 [6];
  undefined4 uStack_10c;
  int local_cc;
  int local_c8;
  int *local_c4 [2];
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  wchar_t *local_b0;
  uint local_ac;
  uint local_a8;
  wchar_t local_a4 [10];
  wchar_t *local_90;
  uint local_8c;
  uint local_88;
  wchar_t local_84 [10];
  wchar_t *local_70;
  uint local_6c;
  uint local_68;
  undefined1 *local_50;
  char *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9f47;
  local_c = ExceptionList;
  if ((DAT_0105be88 != '\0') || (DAT_0105be80 != '\0')) {
    ExceptionList = &local_c;
    FUN_009b91e0();
    local_4._0_1_ = 0;
    local_4._1_3_ = 0;
    sVar2 = FUN_00ace02d(L"\\The Movies\\StarMaker\\");
    FUN_0040cae0(&local_70,L"\\The Movies\\StarMaker\\",sVar2);
    if ((DAT_00e68f28 != '\0') && (DAT_0105be88 != '\0')) {
      local_b0 = local_a4;
      DAT_00e68f28 = '\0';
      local_a4[0] = L'\0';
      local_ac = 0;
      local_a8 = 10;
      FUN_004036d0(&local_b0,local_70,local_6c);
      local_4._0_1_ = 1;
      sVar2 = FUN_00ace02d((short *)&DAT_00d2b89c);
      FUN_0040cae0(&local_b0,L"_",sVar2);
      uVar3 = FUN_009d36d0(&local_b0,(uint *)0x0);
      pwVar9 = local_b0;
      if ((char)uVar3 == '\0') {
        local_90 = local_84;
        local_cc = 0;
        local_84[0] = L'\0';
        local_8c = 0;
        local_88 = 10;
        uVar4 = FUN_00ace02d(local_b0);
        FUN_004036d0(&local_90,pwVar9,uVar4);
        local_4._0_1_ = 2;
        FUN_009d44d0(&local_90,&local_cc,4);
        if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
      }
      if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
    }
    local_bc = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    local_b4 = 0;
    local_c4[0] = (int *)&stack0xffffff00;
    local_4._0_1_ = 3;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    uStack_10c = 0xa1e51c;
    FUN_004036d0(&stack0xffffff00,(wchar_t *)&lpCaption_00d16918,uVar4);
    local_c4[0] = (int *)&stack0xfffffedc;
    pwVar9 = local_118;
    local_118[0] = L'\0';
    uVar3 = 0;
    uVar4 = 10;
    FUN_004036d0(&stack0xfffffedc,local_70,local_6c);
    FUN_009f2ac0(pwVar9,uVar3,uVar4);
    if (local_bc == (undefined4 *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (int)local_b8 - (int)local_bc >> 5;
    }
    if (-1 < iVar10 + -1) {
      iVar11 = (iVar10 + -1) * 0x20;
      local_cc = iVar10;
      do {
        local_c8 = iVar11;
        FUN_009ac940(local_4c,(undefined4 *)((int)local_bc + iVar11));
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_009d9820();
        iVar10 = _strncmp("\\",local_4c[0],1);
        _Memory = operator_new(0x40);
        if (_Memory == (int *)0x0) {
          _Memory = (int *)0x0;
        }
        else {
          *_Memory = (int)(_Memory + 3);
          *(undefined2 *)(_Memory + 3) = 0;
          _Memory[2] = 10;
          _Memory[1] = 0;
          _Memory[8] = (int)(_Memory + 0xb);
          *(undefined1 *)(_Memory + 0xb) = 0;
          _Memory[9] = 0;
          _Memory[10] = 0x14;
        }
        pwVar9 = (wchar_t *)(*(int *)((int)local_bc + iVar11) + (uint)(iVar10 == 0) * 2);
        local_90 = local_84;
        local_84[0] = L'\0';
        local_8c = 0;
        local_88 = 10;
        local_c4[0] = _Memory;
        uVar4 = FUN_00ace02d(pwVar9);
        if (local_88 <= uVar4) {
          if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          local_88 = uVar4 + 0x20 & 0xffffffe0;
          local_90 = _malloc(local_88 * 2);
        }
        _wcsncpy(local_90,pwVar9,uVar4);
        local_90[uVar4] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,5);
        local_8c = uVar4;
        puVar5 = FUN_009ac940(local_2c,&local_90);
        uVar4 = puVar5[1];
        _Source = (char *)*puVar5;
        if ((uint)_Memory[10] <= uVar4) {
          if (0x14 < (uint)_Memory[10]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)_Memory[8]);
          }
          uVar6 = uVar4 + 0x20 & 0xffffffe0;
          _Memory[10] = uVar6;
          pvVar7 = _malloc(uVar6);
          _Memory[8] = (int)pvVar7;
        }
        _strncpy((char *)_Memory[8],_Source,uVar4);
        uVar6 = local_6c;
        pwVar9 = local_70;
        _Memory[9] = uVar4;
        *(undefined1 *)(uVar4 + _Memory[8]) = 0;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        local_a8 = 10;
        local_b0 = local_a4;
        local_a4[0] = L'\0';
        local_ac = 0;
        if (9 < local_6c) {
          local_a8 = local_6c + 0x20 & 0xffffffe0;
          local_b0 = _malloc(local_a8 * 2);
        }
        _wcsncpy(local_b0,pwVar9,uVar6);
        local_ac = uVar6;
        local_b0[uVar6] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_0040cae0(&local_b0,*(wchar_t **)((int)local_bc + local_c8),
                     *(size_t *)((int)local_bc + local_c8 + 4));
        sVar2 = FUN_00ace02d(L"\\info.sm");
        FUN_0040cae0(&local_b0,L"\\info.sm",sVar2);
        uVar4 = local_ac;
        _Source_00 = local_b0;
        local_50 = &stack0xffffff04;
        pwVar9 = (wchar_t *)&stack0xffffff10;
        uVar6 = 10;
        puVar1 = &stack0xffffff04;
        if (9 < local_ac) {
          uVar8 = local_ac + 0x20 >> 5;
          uVar6 = uVar8 << 5;
          pwVar9 = _malloc(uVar8 * 0x40);
          puVar1 = local_50;
        }
        local_50 = puVar1;
        uStack_10c = 0xa1e817;
        _wcsncpy(pwVar9,_Source_00,uVar4);
        pwVar9[uVar4] = L'\0';
        _Memory_00 = FUN_00a1d460(pwVar9,uVar4,uVar6);
        if (_Memory_00 != (int *)0x0) {
          pwVar9 = (wchar_t *)_Memory_00[0x5f];
          uVar4 = FUN_00ace02d(pwVar9);
          if ((uint)_Memory[2] <= uVar4) {
            if (10 < (uint)_Memory[2]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*_Memory);
            }
            uVar6 = uVar4 + 0x20 >> 5;
            _Memory[2] = uVar6 << 5;
            pvVar7 = _malloc(uVar6 * 0x40);
            *_Memory = (int)pvVar7;
          }
          _wcsncpy((wchar_t *)*_Memory,pwVar9,uVar4);
          _Memory[1] = uVar4;
          *(undefined2 *)(*_Memory + uVar4 * 2) = 0;
          if ((DAT_010b951c == 0) ||
             ((uint)(DAT_010b9524 - DAT_010b951c >> 2) <=
              (uint)((int)DAT_010b9520 - DAT_010b951c >> 2))) {
            FUN_00a1e0e0(&DAT_010b9518,DAT_010b9520,1,local_c4);
          }
          else {
            *DAT_010b9520 = _Memory;
            DAT_010b9520 = DAT_010b9520 + 1;
          }
          iVar10 = FUN_00ace02d((short *)*_Memory);
          if ((iVar10 == 0x13) &&
             ((uVar4 = FUN_009ac1e0((byte *)*_Memory,0x26), uVar4 == 0x56492fce ||
              (uVar4 == 0x10c5103e)))) {
            DAT_01050b4d = 1;
          }
                    /* WARNING: Subroutine does not return */
          _free(_Memory_00);
        }
        if (_Memory != (int *)0x0) {
          if (0x14 < (uint)_Memory[10]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)_Memory[8]);
          }
          if ((uint)_Memory[2] < 0xb) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*_Memory);
        }
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_4._0_1_ = 3;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        iVar11 = local_c8 + -0x20;
        local_cc = local_cc + -1;
      } while (local_cc != 0);
      local_cc = 0;
      local_c8 = iVar11;
    }
    puVar5 = local_bc;
    if (local_bc != (undefined4 *)0x0) {
      while( true ) {
        if (puVar5 == local_b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_bc);
        }
        if (10 < (uint)puVar5[2]) break;
        puVar5 = puVar5 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar5);
    }
    local_bc = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    local_b4 = 0;
    if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a1ea10 @ 00a1ea10 ////

int __cdecl FUN_00a1ea10(short *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar5 = -1;
  if (param_1 == (short *)0x0) {
    return -1;
  }
  iVar3 = FUN_00ace02d(param_1);
  fVar1 = 0.0;
  local_c = 0;
  if (3 < iVar3) {
    local_8 = 2;
    psVar4 = param_1 + 2;
    do {
      if ((psVar4[-2] == 0x20) &&
         ((fVar2 = (float)(iVar3 / 2) - (float)local_c, fVar2 = fVar2 * fVar2, iVar5 == -1 ||
          (fVar2 < fVar1)))) {
        iVar5 = local_c;
        fVar1 = fVar2;
      }
      if (psVar4[-1] == 0x20) {
        fVar2 = (float)(iVar3 / 2) - (float)(local_8 + -1);
        fVar2 = fVar2 * fVar2;
        if ((iVar5 == -1) || (fVar2 < fVar1)) {
          iVar5 = local_8 + -1;
          fVar1 = fVar2;
        }
      }
      if ((*psVar4 == 0x20) &&
         ((fVar2 = (float)(iVar3 / 2) - (float)local_8, fVar2 = fVar2 * fVar2, iVar5 == -1 ||
          (fVar2 < fVar1)))) {
        iVar5 = local_8;
        fVar1 = fVar2;
      }
      if (psVar4[1] == 0x20) {
        fVar2 = (float)(iVar3 / 2) - (float)(local_8 + 1);
        fVar2 = fVar2 * fVar2;
        if ((iVar5 == -1) || (fVar2 < fVar1)) {
          iVar5 = local_8 + 1;
          fVar1 = fVar2;
        }
      }
      local_c = local_c + 4;
      local_8 = local_8 + 4;
      psVar4 = psVar4 + 4;
    } while (local_c < iVar3 + -3);
  }
  for (; local_c < iVar3; local_c = local_c + 1) {
    if ((param_1[local_c] == 0x20) &&
       ((fVar2 = (float)(iVar3 / 2) - (float)local_c, fVar2 = fVar2 * fVar2, iVar5 == -1 ||
        (fVar2 < fVar1)))) {
      iVar5 = local_c;
      fVar1 = fVar2;
    }
  }
  return iVar5;
}


//// FUNCTION FUN_00a1ebe0 @ 00a1ebe0 ////

void * FUN_00a1ebe0(void)

{
  void *this;
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  this = DAT_01050c4c;
  do {
    if (this == (void *)0x0) {
      return (void *)0x0;
    }
    pcVar1 = (char *)FUN_0097e350(this,0);
    if (pcVar1 != (char *)0x0) {
      iVar2 = 10;
      bVar4 = true;
      pcVar3 = "p_debug12";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar4 = *pcVar1 == *pcVar3;
        pcVar1 = pcVar1 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        return this;
      }
    }
    this = *(void **)((int)this + 0x10c);
  } while( true );
}


//// FUNCTION FUN_00a1ec50 @ 00a1ec50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a1ec50(int param_1)

{
  float fVar1;
  void *this;
  int *this_00;
  int *unaff_ESI;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  float local_44 [2];
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9f6b;
  local_c = ExceptionList;
  if (unaff_ESI == (int *)0x0) {
    return;
  }
  if (*unaff_ESI == 0) {
    return;
  }
  ExceptionList = &local_c;
  this = operator_new(0x7c);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
    FUN_00acd42c();
    uVar2 = FUN_009a8150();
    this_00 = FUN_009a8a00(this,"",(int)uVar2,uVar3,iVar4);
  }
  local_4 = 0xffffffff;
  FUN_009a8180(this_00,local_44,(ushort *)*unaff_ESI);
  DAT_0105cb28 = 1;
  if (local_44[0] <= (float)unaff_ESI[3]) {
    if (param_1 == 0) {
      fStack_3c = ((float)unaff_ESI[3] - local_44[0]) * 0.5;
    }
    else {
      if (param_1 == 1) {
        FUN_0040b460((undefined4 *)&DAT_00e67bac);
        goto LAB_00a1edde;
      }
      fStack_3c = (float)unaff_ESI[3] - local_44[0];
    }
    fStack_38 = 0.0;
    uStack_34 = 0;
    FUN_004d5340(&DAT_00e67bac,&fStack_3c);
  }
  else {
    fVar1 = (float)unaff_ESI[3];
    fStack_3c = -(float)unaff_ESI[1];
    fStack_38 = -(float)unaff_ESI[2];
    uStack_34 = 0;
    FUN_004d5340(&DAT_00e67bac,&fStack_3c);
    FUN_009e4b80(&DAT_00e67bac,fVar1 / local_44[0]);
    _DAT_00e67bd0 = (float)unaff_ESI[1] + _DAT_00e67bd0;
    _DAT_00e67bd4 =
         ((float)unaff_ESI[4] - (fVar1 / local_44[0]) * (float)unaff_ESI[4]) * 0.5 +
         (float)unaff_ESI[2] + _DAT_00e67bd4;
  }
LAB_00a1edde:
  iVar4 = *unaff_ESI;
  iStack_2c = 0xffffffff;
  FUN_009a8100(&iStack_30);
  iStack_24 = unaff_ESI[2];
  iStack_28 = unaff_ESI[1];
  iStack_2c = unaff_ESI[5];
  uStack_20 = 0;
  iStack_30 = iVar4;
  piStack_1c = this_00;
  FUN_009a85a0(&iStack_30);
  DAT_0105cb28 = 0;
  if (this_00 == (int *)0x0) {
    DAT_0105cb28 = 0;
    ExceptionList = local_c;
    return;
  }
  FUN_009a7db0(this_00);
                    /* WARNING: Subroutine does not return */
  _free(this_00);
}


//// FUNCTION CCinema_RenderSignTexture @ 00a1eeb0 ////

void * __cdecl
CCinema_RenderSignTexture(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
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
  puStack_8 = &LAB_00cf9f90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = FUN_0099bb50("cinema_sign.dds",0x33545844,0x200,0x200,'\0');
  iVar2 = DAT_00e67ba4;
  iVar1 = DAT_00e67ba0;
  FUN_009a63a0(*(int *)((int)pvVar3 + 0x44),-1);
  pvVar4 = FUN_0099bb50("BluePrint\\cinama_sign.dds",0,0,0,'\0');
  pvVar5 = FUN_0099bb50("BluePrint\\cinama_sign_alpha.dds",0,0,0,'\0');
  FUN_009a6fb0('\x01');
  FUN_009a56b0(0xffffffff,'\x01');
  FUN_009a4f10();
  FUN_009a57d0((int)pvVar4,0,0xffffffff,0,(undefined4 *)0x0);
  if (param_1 == 0) {
    FUN_00a1ec50(0);
  }
  else {
    FUN_00a1ec50(0);
    FUN_00a1ec50(0);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"MISC_DIRECTED_BY",0x10);
  local_48 = 0x10;
  local_4c[0x10] = '\0';
  local_4 = 0;
  FUN_009b5030(local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_00a1ec50(0);
  FUN_00a1ec50(0);
  if (param_4 == 0) {
    FUN_00a1ec50(1);
  }
  else {
    FUN_00a1ec50(1);
    FUN_00a1ec50(1);
  }
  FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
  FUN_009a57d0((int)pvVar5,1,0xffffffff,0,(undefined4 *)0x0);
  FUN_009a4fb0();
  FUN_009a56e0((int)pvVar3);
  FUN_009a6fb0('\0');
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  FUN_009a63a0(iVar1,iVar2);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return pvVar3;
}


//// FUNCTION CCinema_BuildAndApplySignTexture @ 00a1f390 ////

void __cdecl
CCinema_BuildAndApplySignTexture(wchar_t *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined2 *puVar5;
  void *pvVar6;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9fb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = FUN_00a1ebe0();
  if (pvVar1 != (void *)0x0) {
    local_4c = local_40;
    puVar5 = (undefined2 *)0x0;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    local_4 = 1;
    if (((param_1 != (wchar_t *)0x0) && (uVar2 = FUN_00ace02d(param_1), 0xf < uVar2)) &&
       (iVar3 = FUN_00a1ea10(param_1), iVar3 != -1)) {
      FUN_00403e90(&local_4c,param_1);
      FUN_00403e90(&local_2c,local_4c + iVar3);
      local_4c[iVar3] = 0;
      puVar5 = local_2c;
    }
    pvVar4 = CCinema_RenderSignTexture((int)puVar5,param_2,param_3,param_4);
    uVar2 = FUN_00980b70(pvVar1,(byte *)"olot_cinema_sign.dds");
    if (uVar2 == 0xffffffff) {
      uVar2 = FUN_00980b70(pvVar1,(byte *)"cinema_sign.dds");
    }
    if (pvVar4 != (void *)0x0) {
      pvVar6 = pvVar4;
      pvVar1 = (void *)FUN_0097e350(pvVar1,0);
      FUN_00a48e80(pvVar1,uVar2,(int)pvVar6);
      FUN_0099b400(pvVar4);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a1f5f0 @ 00a1f5f0 ////

void __cdecl FUN_00a1f5f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a1f780 @ 00a1f780 ////

void __fastcall FUN_00a1f780(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00a1f7d0 @ 00a1f7d0 ////

float10 __cdecl FUN_00a1f7d0(void *param_1)

{
  int iVar1;
  float local_c [3];
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_0097e350(param_1,0);
    if (iVar1 != 0) {
      iVar1 = FUN_0097e350(param_1,0);
      local_c[0] = 0.0;
      local_c[2] = *(float *)(iVar1 + 0xdc) * 0.9 + *(float *)(iVar1 + 0xd0);
      local_c[1] = 0.0;
      FUN_0040b490((void *)((int)param_1 + 0x18),local_c);
      return (float10)local_c[2];
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00a1f840 @ 00a1f840 ////

int * __thiscall FUN_00a1f840(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_00a1f970 @ 00a1f970 ////

void __cdecl FUN_00a1f970(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a1fc70 @ 00a1fc70 ////

void __fastcall FUN_00a1fc70(int param_1)

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


//// FUNCTION FUN_00a1fcc0 @ 00a1fcc0 ////

void * FUN_00a1fcc0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a1ff90 @ 00a1ff90 ////

void __fastcall FUN_00a1ff90(int param_1)

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


//// FUNCTION FUN_00a1fff0 @ 00a1fff0 ////

void __fastcall FUN_00a1fff0(int param_1)

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


//// FUNCTION FUN_00a20020 @ 00a20020 ////

undefined4 * FUN_00a20020(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a20050 @ 00a20050 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a20050(void)

{
  if (DAT_010b953c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b953c);
  }
  DAT_010b953c = (void *)0x0;
  DAT_010b9540 = 0;
  _DAT_010b9544 = 0;
  DAT_010b9530 = 0;
  DAT_010b952c = 0;
  _DAT_010b9534 = 0;
  _DAT_00e68f58 = 0;
  _DAT_00e68f54 = 0;
  _DAT_00e68f50 = 0;
  _DAT_00e68f48 = 0;
  _DAT_00e68f44 = 0;
  _DAT_00e68f40 = 0;
  _DAT_00e68f38 = 0;
  _DAT_00e68f34 = 0;
  _DAT_00e68f30 = 0;
  _DAT_00e68f4c = 0x3f800000;
  _DAT_00e68f3c = 0x3f800000;
  _DAT_00e68f2c = 0x3f800000;
  return;
}


//// FUNCTION FUN_00a20110 @ 00a20110 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a20110(void)

{
  int *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  uint uVar4;
  
  puVar1 = DAT_010b9530;
  if (DAT_010b9530 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_010b9530 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_010b9530 = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  puVar1 = DAT_010b952c;
  if (DAT_010b952c != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_010b952c + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_010b952c = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  uVar4 = 0;
  while( true ) {
    if (DAT_010b953c == (void *)0x0) {
      DAT_010b953c = (void *)0x0;
      DAT_010b9540 = 0;
      _DAT_010b9544 = 0;
      return;
    }
    if ((uint)(DAT_010b9540 - (int)DAT_010b953c >> 2) <= uVar4) break;
    _Memory = *(int **)((int)DAT_010b953c + uVar4 * 4);
    if (_Memory != (int *)0x0) {
      puVar1 = (undefined4 *)*_Memory;
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar2;
        *_Memory = 0;
      }
      puVar1 = (undefined4 *)*_Memory;
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar2;
        *_Memory = 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010b953c);
}


//// FUNCTION FUN_00a20270 @ 00a20270 ////

void __cdecl FUN_00a20270(int param_1)

{
  FUN_00a20110();
  FUN_00a20050();
  DAT_010b952c = FUN_00433eb0();
  DAT_010b9530 = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 0x10));
  }
  return;
}


//// FUNCTION FUN_00a202a0 @ 00a202a0 ////

void __cdecl FUN_00a202a0(int param_1)

{
  void *_Src;
  void *_Dst;
  int *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_010b953c != 0) && (uVar4 = DAT_010b9540 - DAT_010b953c >> 2, uVar4 != 0)) {
    for (uVar5 = 0; uVar5 < uVar4; uVar5 = uVar5 + 1) {
      _Memory = *(int **)(DAT_010b953c + uVar5 * 4);
      if (*_Memory == param_1) {
        puVar1 = (undefined4 *)*_Memory;
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 4);
          uVar2 = DAT_0105b588;
          if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          DAT_0105b588 = uVar2;
          *_Memory = 0;
        }
        _Dst = (void *)(DAT_010b953c + uVar5 * 4);
        _Src = (void *)((int)_Dst + 4);
        _memmove(_Dst,_Src,(DAT_010b9540 - (int)_Src >> 2) << 2);
        DAT_010b9540 = DAT_010b9540 + -4;
        puVar1 = (undefined4 *)*_Memory;
        if (puVar1 != (undefined4 *)0x0) {
          LVar3 = InterlockedDecrement(puVar1 + 4);
          uVar2 = DAT_0105b588;
          if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          DAT_0105b588 = uVar2;
          *_Memory = 0;
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a20390 @ 00a20390 ////

void FUN_00a20390(void)

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
  puStack_8 = &LAB_00cf9fe8;
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


//// FUNCTION FUN_00a20450 @ 00a20450 ////

void __thiscall FUN_00a20450(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a20390();
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
      _Dst = FUN_00a20020((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a1fcc0(param_1,iVar5,param_1 + param_2);
      FUN_00a20020(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a1f5f0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a1fcc0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a1f970(param_1,(int)pvVar3,iVar5);
    FUN_00a1f5f0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a20690 @ 00a20690 ////

void __thiscall FUN_00a20690(void *this,undefined4 *param_1)

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
  FUN_00a20450(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a206e0 @ 00a206e0 ////

void __cdecl FUN_00a206e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_0097e350(param_1,0);
    if (iVar2 != 0) {
      InterlockedIncrement(puVar1 + 4);
      param_1 = operator_new(4);
      if (param_1 == (undefined4 *)0x0) {
        param_1 = (undefined4 *)0x0;
      }
      else {
        *param_1 = 0;
      }
      *param_1 = puVar1;
      FUN_00a20690(&DAT_010b9538,&param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00a20730 @ 00a20730 ////

void __fastcall FUN_00a20730(int *param_1)

{
  uint uVar1;
  void *this;
  bool bVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    bVar2 = true;
    while( true ) {
      uVar1 = *(uint *)(*param_1 + 0x50);
      if (((uVar1 >> 0xe & 1) != 0) || ((uVar1 & 0x2000000) != 0)) {
        FUN_00977590((void *)*param_1);
        FUN_00978cd0((void *)*param_1,*(uint *)(*param_1 + 0x74),1);
        this = (void *)((undefined4 *)*param_1)[0x96];
        if (this != (void *)0x0) {
          FUN_009fe620(this,(undefined4 *)*param_1);
        }
        *(uint *)(*param_1 + 0x50) = *(uint *)(*param_1 + 0x50) & 0xfdffffff;
      }
      FUN_00977c80((void *)*param_1);
      iVar3 = FUN_00971f10(*param_1);
      if (((iVar3 == 0) || (!bVar2)) || (bVar2 = false, (*(uint *)(iVar3 + 0x88) & 0x20000) == 0))
      break;
      *(uint *)(*param_1 + 0x50) = *(uint *)(*param_1 + 0x50) | 0x2000000;
    }
    iVar3 = *param_1;
    if (*(int *)(iVar3 + 0x8c) == *(int *)(iVar3 + 0x78)) {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x2000000;
    }
    FUN_00a04170();
    return;
  }
  return;
}


//// FUNCTION FUN_00a207e0 @ 00a207e0 ////

void __thiscall FUN_00a207e0(void *this,int param_1,void *param_2,char param_3)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(void **)this != (void *)0x0) {
    FUN_00978310(*(void **)this,0,param_1,param_2);
    *(uint *)(*(int *)this + 0x50) = *(uint *)(*(int *)this + 0x50) | 0x2000000;
    pvVar1 = *(void **)this;
    if (param_3 != '\0') {
      uVar2 = *(uint *)((int)pvVar1 + 0x8c);
      FUN_00977c80(pvVar1);
      FUN_00978cd0(*(void **)this,uVar2,1);
      return;
    }
    FUN_00977c80(pvVar1);
  }
  return;
}


//// FUNCTION FUN_00a20840 @ 00a20840 ////

void __cdecl FUN_00a20840(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float local_14;
  int local_10;
  int local_c;
  
  fVar1 = 3.4028235e+38;
  local_14 = 1.1754944e-38;
  if (1 < param_3 + -1) {
    local_10 = param_3 + -2;
    pfVar8 = (float *)(param_1 + 8 + param_2 * 4);
    iVar7 = param_2;
    do {
      iVar9 = 1;
      if (3 < param_2 + -2) {
        iVar6 = (param_2 - 6U >> 2) + 1;
        iVar9 = iVar6 * 4 + 1;
        pfVar5 = pfVar8;
        do {
          if (local_14 < pfVar5[-1]) {
            local_14 = pfVar5[-1];
          }
          if (pfVar5[-1] < fVar1) {
            fVar1 = pfVar5[-1];
          }
          if (local_14 < *pfVar5) {
            local_14 = *pfVar5;
          }
          if (*pfVar5 < fVar1) {
            fVar1 = *pfVar5;
          }
          if (local_14 < pfVar5[1]) {
            local_14 = pfVar5[1];
          }
          if (pfVar5[1] < fVar1) {
            fVar1 = pfVar5[1];
          }
          if (local_14 < pfVar5[2]) {
            local_14 = pfVar5[2];
          }
          if (pfVar5[2] < fVar1) {
            fVar1 = pfVar5[2];
          }
          pfVar5 = pfVar5 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (iVar9 < param_2 + -1) {
        pfVar5 = (float *)(param_1 + (iVar7 + iVar9) * 4);
        iVar9 = (param_2 + -1) - iVar9;
        do {
          if (local_14 < *pfVar5) {
            local_14 = *pfVar5;
          }
          if (*pfVar5 < fVar1) {
            fVar1 = *pfVar5;
          }
          pfVar5 = pfVar5 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      pfVar8 = pfVar8 + param_2;
      iVar7 = iVar7 + param_2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  fVar1 = fVar1 * 1.3;
  fVar2 = (local_14 - local_14 * 0.3) - fVar1;
  if (0 < param_3) {
    iVar7 = 0;
    pfVar8 = (float *)(param_1 + 8);
    local_c = param_3;
    do {
      iVar9 = 1;
      if (3 < param_2 + -1) {
        fVar3 = 1.0 / fVar2;
        iVar6 = (param_2 - 5U >> 2) + 1;
        iVar9 = iVar6 * 4 + 1;
        pfVar5 = pfVar8;
        do {
          fVar4 = (pfVar5[-1] - fVar1) * fVar3;
          pfVar5[-1] = fVar4;
          if (0.0 <= fVar4) {
            if (1.0 < fVar4) {
              pfVar5[-1] = 1.0;
            }
          }
          else {
            pfVar5[-1] = 0.0;
          }
          fVar4 = (*pfVar5 - fVar1) * fVar3;
          *pfVar5 = fVar4;
          if (0.0 <= fVar4) {
            if (1.0 < fVar4) {
              *pfVar5 = 1.0;
            }
          }
          else {
            *pfVar5 = 0.0;
          }
          fVar4 = (pfVar5[1] - fVar1) * fVar3;
          pfVar5[1] = fVar4;
          if (0.0 <= fVar4) {
            if (1.0 < fVar4) {
              pfVar5[1] = 1.0;
            }
          }
          else {
            pfVar5[1] = 0.0;
          }
          fVar4 = (pfVar5[2] - fVar1) * fVar3;
          pfVar5[2] = fVar4;
          if (0.0 <= fVar4) {
            if (1.0 < fVar4) {
              pfVar5[2] = 1.0;
            }
          }
          else {
            pfVar5[2] = 0.0;
          }
          pfVar5 = pfVar5 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (iVar9 < param_2) {
        pfVar5 = (float *)(param_1 + (iVar7 + iVar9) * 4);
        iVar9 = param_2 - iVar9;
        do {
          fVar3 = (*pfVar5 - fVar1) * (1.0 / fVar2);
          *pfVar5 = fVar3;
          if (0.0 <= fVar3) {
            if (1.0 < fVar3) {
              *pfVar5 = 1.0;
            }
          }
          else {
            *pfVar5 = 0.0;
          }
          pfVar5 = pfVar5 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar7 = iVar7 + param_2;
      pfVar8 = pfVar8 + param_2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


//// FUNCTION FUN_00a20bb0 @ 00a20bb0 ////

void FUN_00a20bb0(float *param_1,int param_2)

{
  float *pfVar1;
  undefined4 *_Memory;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int unaff_EBX;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  float *local_2c;
  float *local_28;
  float *local_24;
  int local_20;
  int local_10;
  int local_c;
  
  local_10 = param_2;
  pfVar1 = param_1;
  _Memory = operator_new((int)param_1 * param_2 * 4);
  puVar12 = _Memory;
  for (uVar4 = (int)param_1 * param_2 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  iVar5 = param_2 + -1;
  if (1 < iVar5) {
    local_28 = (float *)(_Memory + (int)param_1 + 3);
    pfVar3 = (float *)(unaff_EBX + 8 + (int)param_1 * 4);
    pfVar9 = (float *)(unaff_EBX + 8);
    local_24 = (float *)(unaff_EBX + 4 + (int)param_1 * 8);
    local_c = param_2 + -2;
    local_2c = param_1;
    local_20 = 0;
    do {
      param_2 = 1;
      if (3 < (int)param_1 + -2) {
        iVar11 = ((int)param_1 - 6U >> 2) + 1;
        param_2 = iVar11 * 4 + 1;
        pfVar2 = local_24;
        pfVar6 = pfVar3;
        pfVar8 = pfVar9;
        pfVar10 = local_28;
        do {
          iVar11 = iVar11 + -1;
          pfVar10[-2] = pfVar8[-2] + pfVar2[-1] + pfVar6[-2] + pfVar8[-1] + *pfVar2 + *pfVar6 +
                        pfVar6[-1] + pfVar2[1] + *pfVar8;
          *(float *)((int)pfVar6 + ((int)_Memory - unaff_EBX)) =
               pfVar8[-1] + *pfVar2 + pfVar8[1] + pfVar6[-1] + pfVar6[1] + *pfVar6 + pfVar2[1] +
               pfVar2[2] + *pfVar8;
          *pfVar10 = pfVar8[2] + pfVar6[2] + pfVar2[3] + pfVar8[1] + *pfVar6 + pfVar6[1] + pfVar2[1]
                     + *pfVar8 + pfVar2[2];
          pfVar10[1] = pfVar8[3] + pfVar6[3] + pfVar8[2] + pfVar6[2] + pfVar8[1] + pfVar2[3] +
                       pfVar6[1] + pfVar2[2] + pfVar2[4];
          pfVar2 = pfVar2 + 4;
          pfVar6 = pfVar6 + 4;
          pfVar8 = pfVar8 + 4;
          pfVar10 = pfVar10 + 4;
        } while (iVar11 != 0);
      }
      if (param_2 < (int)param_1 + -1) {
        iVar11 = (int)param_1 + (-1 - param_2);
        pfVar2 = (float *)(unaff_EBX + 4 + (local_20 + param_2) * 4);
        pfVar6 = (float *)(unaff_EBX + 4 + ((int)local_2c + param_2 + (int)param_1) * 4);
        pfVar8 = (float *)(((int)local_2c + param_2) * 4 + 4 + unaff_EBX);
        pfVar10 = (float *)(_Memory + (int)local_2c + param_2);
        do {
          iVar11 = iVar11 + -1;
          *pfVar10 = pfVar2[-2] + pfVar2[-1] + pfVar6[-2] + pfVar6[-1] + pfVar8[-2] + pfVar8[-1] +
                     *pfVar6 + *pfVar8 + *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        } while (iVar11 != 0);
      }
      local_2c = (float *)((int)local_2c + (int)param_1);
      local_28 = local_28 + (int)param_1;
      local_24 = local_24 + (int)param_1;
      pfVar9 = pfVar9 + (int)param_1;
      pfVar3 = pfVar3 + (int)param_1;
      local_20 = local_20 + (int)param_1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (1 < iVar5) {
      iVar5 = (int)param_1 + -2;
      pfVar9 = (float *)(_Memory + (int)param_1 + 3);
      local_10 = local_10 + -2;
      param_2 = (int)param_1;
      param_1 = (float *)(unaff_EBX + 4 + (int)param_1 * 4);
      do {
        iVar11 = 1;
        if (3 < iVar5) {
          iVar7 = ((int)pfVar1 - 6U >> 2) + 1;
          iVar11 = iVar7 * 4 + 1;
          pfVar3 = param_1;
          pfVar2 = pfVar9;
          do {
            iVar7 = iVar7 + -1;
            *pfVar3 = *(float *)((int)pfVar3 + ((int)_Memory - unaff_EBX)) * 0.11111111;
            pfVar3[1] = pfVar2[-1] * 0.11111111;
            pfVar3[2] = *pfVar2 * 0.11111111;
            pfVar3[3] = pfVar2[1] * 0.11111111;
            pfVar3 = pfVar3 + 4;
            pfVar2 = pfVar2 + 4;
          } while (iVar7 != 0);
        }
        if (iVar11 < (int)pfVar1 + -1) {
          iVar7 = ((int)pfVar1 + -1) - iVar11;
          pfVar3 = (float *)(unaff_EBX + (param_2 + iVar11) * 4);
          do {
            iVar7 = iVar7 + -1;
            *pfVar3 = *(float *)(((int)_Memory - unaff_EBX) + (int)pfVar3) * 0.11111111;
            pfVar3 = pfVar3 + 1;
          } while (iVar7 != 0);
        }
        param_2 = param_2 + (int)pfVar1;
        pfVar9 = pfVar9 + (int)pfVar1;
        param_1 = param_1 + (int)pfVar1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a21370 @ 00a21370 ////

float10 __fastcall FUN_00a21370(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return (float10)0.0;
  }
  fVar2 = (float10)*(int *)(iVar1 + 0x74);
  if ((float10)*(int *)(iVar1 + 0x78) != fVar2) {
    fVar3 = (float10)*(int *)(iVar1 + 0x8c);
    if (*(int *)(iVar1 + 0x8c) < 0) {
      fVar3 = fVar3 + (float10)4.2949673e+09;
    }
    fVar2 = (fVar3 - fVar2) / ((float10)*(int *)(iVar1 + 0x78) - fVar2);
    if ((float10)0.0 <= fVar2) {
      if ((float10)1.0 < fVar2) {
        fVar2 = (float10)1.0;
      }
      return fVar2;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00a213f0 @ 00a213f0 ////

void __fastcall FUN_00a213f0(undefined4 *param_1)

{
  void *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  this = (void *)*param_1;
  uVar1 = *(uint *)((int)this + 0x78);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar4 = FUN_00acd42c();
  uVar3 = (uint)uVar4;
  if ((int)uVar2 <= (int)uVar3) {
    if ((int)uVar1 < (int)uVar3) {
      uVar3 = uVar1;
    }
    FUN_00978cd0(this,uVar3,1);
    return;
  }
  FUN_00978cd0(this,uVar2,1);
  return;
}


//// FUNCTION FUN_00a21480 @ 00a21480 ////

int __fastcall FUN_00a21480(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if ((DAT_0105be08 != 0) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    iVar1 = FUN_0097e350(*(void **)(param_1 + 4),0);
    if (iVar1 != 0) {
      pbVar2 = (byte *)FUN_0097e350(*(void **)(param_1 + 4),0);
      iVar1 = FUN_00a57290(pbVar2);
      return iVar1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00a214c0 @ 00a214c0 ////

void __thiscall FUN_00a214c0(void *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  if ((DAT_0105be08 != 0) && (*(void **)((int)this + 4) != (void *)0x0)) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 4),0);
    if (iVar1 != 0) {
      pbVar2 = (byte *)FUN_0097e350(*(void **)((int)this + 4),0);
      iVar1 = FUN_00a57290(pbVar2);
      goto LAB_00a214f5;
    }
  }
  iVar1 = 0;
LAB_00a214f5:
  if (param_1 < 0) {
    FUN_009779a0(*(void **)this,0);
    return;
  }
  if (iVar1 + 4 <= param_1) {
    param_1 = iVar1 + 3;
  }
  FUN_009779a0(*(void **)this,param_1);
  return;
}


//// FUNCTION FUN_00a21530 @ 00a21530 ////

undefined4 __fastcall FUN_00a21530(undefined4 param_1)

{
  DAT_010b9556 = 1;
  return param_1;
}


//// FUNCTION FUN_00a21540 @ 00a21540 ////

void FUN_00a21540(void)

{
  DAT_010b9556 = 0;
  return;
}


//// FUNCTION FUN_00a21550 @ 00a21550 ////

void __cdecl FUN_00a21550(void *param_1)

{
  bool bVar1;
  void *this;
  
  if (param_1 != (void *)0x0) {
    this = (void *)FUN_0097e350(param_1,0);
    if (this != (void *)0x0) {
      bVar1 = FUN_009daa10(this,"[no flat shadow]");
      if (bVar1) {
        DAT_010b9548 = 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a21580 @ 00a21580 ////

void __thiscall FUN_00a21580(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)this + 2);
  if (uVar2 < 0x80) {
    iVar1 = (int)(param_1[2] * uVar2) >> 7;
  }
  else {
    iVar1 = 0xff - ((int)((0xff - (uint)param_1[2]) * (0xff - uVar2)) >> 7);
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  uVar2 = (uint)*(byte *)((int)this + 1);
  *(char *)((int)this + 2) = (char)iVar1;
  if (uVar2 < 0x80) {
    iVar1 = (int)(param_1[1] * uVar2) >> 7;
  }
  else {
    iVar1 = 0xff - ((int)((0xff - (uint)param_1[1]) * (0xff - uVar2)) >> 7);
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  uVar2 = (uint)*(byte *)this;
  *(char *)((int)this + 1) = (char)iVar1;
  if (uVar2 < 0x80) {
    iVar1 = (int)(*param_1 * uVar2) >> 7;
  }
  else {
    iVar1 = 0xff - ((int)((0xff - (uint)*param_1) * (0xff - uVar2)) >> 7);
  }
  if (iVar1 < 0) {
    *(undefined1 *)this = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *(char *)this = (char)iVar1;
  return;
}


//// FUNCTION FUN_00a21660 @ 00a21660 ////

int * __thiscall
FUN_00a21660(void *this,char *param_1,int param_2,int param_3,char param_4,uint param_5)

{
  int *piVar1;
  bool bVar2;
  void *this_00;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (param_1 != (char *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    this_00 = FUN_0097c450(param_1,0,(undefined4 *)0x0,0);
    *(void **)this = this_00;
    if (this_00 != (void *)0x0) {
      if ((char)param_5 != '\0') {
        FUN_009766f0(this_00,param_5);
      }
      *(uint *)(*(int *)this + 0x50) = *(uint *)(*(int *)this + 0x50) | 0x80000000;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      param_1 = (char *)0x0;
      *(int *)((int)this + 4) = param_2;
      if (param_2 != 0) {
        local_c = *(undefined4 *)(param_2 + 0x3c);
        local_8 = *(undefined4 *)(param_2 + 0x40);
        local_4 = *(undefined4 *)(param_2 + 0x44);
        param_1 = *(char **)(param_2 + 0x80);
        FUN_00a214c0(this,0);
      }
      uVar5 = *(undefined4 *)((int)this + 4);
      fVar4 = FUN_004012c0((float)param_1);
      FUN_00978350(*(void **)this,&local_c,(float)fVar4,uVar5);
      if ((param_4 != '\0') && (uVar3 = 0, *(char *)(*(int *)this + 0x4d) != '\0')) {
        do {
          piVar1 = *(int **)(*(int *)(*(int *)this + 0x5c) + uVar3 * 4);
          bVar2 = FUN_00972030(piVar1[2]);
          if (bVar2) {
            (**(code **)(*piVar1 + 0x28))(0);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(byte *)(*(int *)this + 0x4d));
      }
      FUN_009777b0(*(int *)this);
      FUN_0097b260(*(void **)this,param_3);
      FUN_00976050(*(void **)this,1);
      FUN_00977590(*(void **)this);
      FUN_00978cd0(*(void **)this,*(uint *)((int)*(void **)this + 0x74),1);
      if (*(int *)((int)this + 4) != 0) {
        InterlockedIncrement((LONG *)(*(int *)((int)this + 4) + 0x10));
      }
      FUN_00a00f10(*(void **)this);
    }
  }
  return this;
}


//// FUNCTION FUN_00a217d0 @ 00a217d0 ////

void __fastcall FUN_00a217d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[3] = 0;
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[4] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_00971df0((void *)*param_1);
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION FUN_00a218b0 @ 00a218b0 ////

/* WARNING: Removing unreachable block (ram,0x00a22053) */
/* WARNING: Removing unreachable block (ram,0x00a22020) */
/* WARNING: Removing unreachable block (ram,0x00a2203c) */
/* WARNING: Removing unreachable block (ram,0x00a22032) */
/* WARNING: Removing unreachable block (ram,0x00a22048) */
/* WARNING: Removing unreachable block (ram,0x00a2205f) */

void FUN_00a218b0(undefined4 *param_1,float *param_2,int param_3,char param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined1 uStack00000013;
  float local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  float *local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  int local_4;
  
  pfVar3 = param_2;
  puVar4 = operator_new((int)param_2 * param_3 * 4);
  fVar1 = 3.4028235e+38;
  puVar13 = puVar4;
  for (uVar8 = (int)param_2 * param_3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  local_1c = 1.1754944e-38;
  if (0 < param_3 + -1) {
    local_c = (byte *)((int)param_1 + 5);
    local_14 = (float *)(puVar4 + 1);
    local_10 = (byte *)((int)param_2 * 4 + 5 + (int)param_1);
    local_8 = 0;
    local_4 = param_3 + -1;
    do {
      iVar9 = 0;
      if (3 < (int)param_2 + -1) {
        iVar14 = ((int)param_2 - 5U >> 2) + 1;
        iVar9 = iVar14 * 4;
        pbVar10 = local_c;
        pbVar11 = local_10;
        pfVar12 = local_14;
        do {
          fVar2 = (float)((uint)pbVar10[-5] + (uint)pbVar10[-4] + (uint)pbVar10[-3]) * 0.33333334;
          local_20 = ((fVar2 - (float)((uint)pbVar11[1] + (uint)pbVar11[-1] + (uint)*pbVar11) *
                               0.33333334) +
                     (fVar2 - (float)((uint)pbVar10[1] + (uint)pbVar10[-1] + (uint)*pbVar10) *
                              0.33333334) +
                     (fVar2 - (float)((uint)pbVar11[-5] + (uint)pbVar11[-4] + (uint)pbVar11[-3]) *
                              0.33333334)) * 0.33333334;
          if (local_1c < local_20) {
            local_1c = local_20;
          }
          if (local_20 < fVar1) {
            fVar1 = local_20;
          }
          if (local_20 < 0.0) {
            local_20 = local_20 * -1.0;
          }
          pfVar12[-1] = local_20 * 0.00390625;
          fVar2 = (float)((uint)pbVar10[1] + (uint)pbVar10[-1] + (uint)*pbVar10) * 0.33333334;
          local_20 = ((fVar2 - (float)((uint)pbVar11[5] + (uint)pbVar11[4] + (uint)pbVar11[3]) *
                               0.33333334) +
                     (fVar2 - (float)((uint)pbVar11[1] + (uint)pbVar11[-1] + (uint)*pbVar11) *
                              0.33333334) +
                     (fVar2 - (float)((uint)pbVar10[5] + (uint)pbVar10[4] + (uint)pbVar10[3]) *
                              0.33333334)) * 0.33333334;
          if (local_1c < local_20) {
            local_1c = local_20;
          }
          if (local_20 < fVar1) {
            fVar1 = local_20;
          }
          if (local_20 < 0.0) {
            local_20 = local_20 * -1.0;
          }
          *pfVar12 = local_20 * 0.00390625;
          fVar2 = (float)((uint)pbVar10[5] + (uint)pbVar10[4] + (uint)pbVar10[3]) * 0.33333334;
          local_20 = ((fVar2 - (float)((uint)pbVar11[9] + (uint)pbVar11[8] + (uint)pbVar11[7]) *
                               0.33333334) +
                     (fVar2 - (float)((uint)pbVar11[5] + (uint)pbVar11[4] + (uint)pbVar11[3]) *
                              0.33333334) +
                     (fVar2 - (float)((uint)pbVar10[9] + (uint)pbVar10[8] + (uint)pbVar10[7]) *
                              0.33333334)) * 0.33333334;
          if (local_1c < local_20) {
            local_1c = local_20;
          }
          if (local_20 < fVar1) {
            fVar1 = local_20;
          }
          if (local_20 < 0.0) {
            local_20 = local_20 * -1.0;
          }
          pfVar12[1] = local_20 * 0.00390625;
          fVar2 = (float)((uint)pbVar10[9] + (uint)pbVar10[8] + (uint)pbVar10[7]) * 0.33333334;
          local_20 = ((fVar2 - (float)((uint)pbVar11[0xd] + (uint)pbVar11[0xc] + (uint)pbVar11[0xb])
                               * 0.33333334) +
                     (fVar2 - (float)((uint)pbVar11[9] + (uint)pbVar11[8] + (uint)pbVar11[7]) *
                              0.33333334) +
                     (fVar2 - (float)((uint)pbVar10[0xd] + (uint)pbVar10[0xc] + (uint)pbVar10[0xb])
                              * 0.33333334)) * 0.33333334;
          if (local_1c < local_20) {
            local_1c = local_20;
          }
          if (local_20 < fVar1) {
            fVar1 = local_20;
          }
          if (local_20 < 0.0) {
            local_20 = local_20 * -1.0;
          }
          pbVar10 = pbVar10 + 0x10;
          pbVar11 = pbVar11 + 0x10;
          iVar14 = iVar14 + -1;
          pfVar12[2] = local_20 * 0.00390625;
          pfVar12 = pfVar12 + 4;
        } while (iVar14 != 0);
      }
      if (iVar9 < (int)param_2 + -1) {
        pbVar10 = (byte *)((int)param_1 + (iVar9 + local_8 + (int)param_2) * 4 + 5);
        pbVar11 = (byte *)((iVar9 + local_8) * 4 + 5 + (int)param_1);
        iVar14 = ((int)param_2 + -1) - iVar9;
        pfVar12 = (float *)(puVar4 + iVar9 + local_8);
        do {
          fVar2 = (float)((uint)pbVar11[-5] + (uint)pbVar11[-4] + (uint)pbVar11[-3]) * 0.33333334;
          local_20 = ((fVar2 - (float)((uint)pbVar10[-1] + (uint)pbVar10[1] + (uint)*pbVar10) *
                               0.33333334) +
                     (fVar2 - (float)((uint)pbVar11[-1] + (uint)pbVar11[1] + (uint)*pbVar11) *
                              0.33333334) +
                     (fVar2 - (float)((uint)pbVar10[-5] + (uint)pbVar10[-4] + (uint)pbVar10[-3]) *
                              0.33333334)) * 0.33333334;
          if (local_1c < local_20) {
            local_1c = local_20;
          }
          if (local_20 < fVar1) {
            fVar1 = local_20;
          }
          if (local_20 < 0.0) {
            local_20 = local_20 * -1.0;
          }
          pbVar11 = pbVar11 + 4;
          pbVar10 = pbVar10 + 4;
          iVar14 = iVar14 + -1;
          *pfVar12 = local_20 * 0.00390625;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 != 0);
      }
      local_8 = local_8 + (int)param_2;
      local_14 = local_14 + (int)param_2;
      local_10 = local_10 + (int)param_2 * 4;
      local_c = local_c + (int)param_2 * 4;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    local_4 = 0;
  }
  if (DAT_0105be88 == '\0') {
    DAT_00e68f60 = 3;
  }
  iVar9 = 0;
  iVar14 = param_3;
  puVar13 = puVar4;
  for (iVar15 = DAT_00e68f5c; local_18 = puVar13, iVar15 != 0; iVar15 = iVar15 + -1) {
    if (iVar9 < DAT_00e68f60) {
      FUN_00a20bb0(param_2,param_3);
      puVar4 = puVar13;
      iVar14 = param_5;
    }
    FUN_00a20840((int)puVar4,(int)param_2,iVar14);
    iVar9 = iVar9 + 1;
    puVar13 = local_18;
  }
  if (0 < iVar14) {
    local_8 = (int)param_2 * 4;
    puVar4 = param_1 + 1;
    local_4 = param_3;
    do {
      if (1 < (int)param_2) {
        local_1c = (float)CONCAT13(0xff,(undefined3)local_1c);
        iVar9 = (int)param_2 + -1;
        puVar13 = puVar4;
        do {
          uVar17 = FUN_00acd42c();
          iVar14 = (int)uVar17;
          uVar7 = (undefined1)uVar17;
          if (iVar14 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar7;
            if (0xff < iVar14) {
              uVar6 = 0xff;
            }
          }
          if (iVar14 < 0) {
            uVar7 = 0;
          }
          else if (0xff < iVar14) {
            uVar7 = 0xff;
          }
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          else if (0xff < iVar14) {
            iVar14 = 0xff;
          }
          local_1c = (float)CONCAT31(CONCAT21(CONCAT11(local_1c._3_1_,uVar6),uVar7),(char)iVar14);
          FUN_00a21580(puVar13,(byte *)&local_1c);
          puVar13 = puVar13 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      puVar4 = (undefined4 *)((int)puVar4 + local_8);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  iVar9 = DAT_010b954c;
  if ((param_4 != '\0') && (0 < param_3)) {
    param_2 = (float *)param_1;
    do {
      if (0 < (int)pfVar3) {
        _param_4 = -1.7014118e+38;
        pfVar12 = param_2;
        pfVar16 = pfVar3;
        do {
          uVar17 = FUN_00acd42c();
          iVar14 = (int)uVar17;
          if (iVar14 < 0x100) {
            if (iVar14 < 1) {
              iVar14 = 0;
            }
          }
          else {
            iVar14 = 0xff;
          }
          iVar15 = iVar9 + iVar14 * 2;
          puVar5 = (undefined1 *)(iVar14 + iVar15);
          _param_4 = (float)CONCAT31(CONCAT21(CONCAT11(uStack00000013,*puVar5),puVar5[1]),
                                     *(undefined1 *)(iVar14 + 2 + iVar15));
          *pfVar12 = _param_4;
          pfVar12 = pfVar12 + 1;
          pfVar16 = (float *)((int)pfVar16 + -1);
        } while (pfVar16 != (float *)0x0);
      }
      param_2 = param_2 + (int)pfVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_00a220b0 @ 00a220b0 ////

void __thiscall FUN_00a220b0(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  LONG LVar8;
  void *this_00;
  int *piVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = DAT_010b9550;
  uVar4 = DAT_0105bec4;
  if (*(int *)this != 0) {
    DAT_0105bec4 = 1;
    DAT_010b9550 = (byte)(*(uint *)((int)this + 8) >> 1) & 1;
    if ((*(byte *)((int)this + 8) & 2) != 0) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_8 = 0;
      local_4 = 0;
      local_c = 0x3f9c61ab;
      uVar7 = FUN_00971f40(*(void **)this,&local_28);
      if ((char)uVar7 != '\0') {
        FUN_00a25410((int)&local_28);
      }
    }
    puVar1 = *(undefined4 **)((int)this + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar1 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar8 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar3;
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    puVar1 = *(undefined4 **)((int)this + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      piVar9 = puVar1 + 0x12;
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    if (param_1 == '\0') {
      FUN_009cc380();
    }
    FUN_00a00660(*(void **)this,(byte)(*(uint *)((int)this + 8) >> 1) & 1);
    Model_UpdateVisuals(*(void **)this);
    if (((*(void **)(*(int *)this + 0x148) != (void *)0x0) &&
        (this_00 = (void *)FUN_0097e350(*(void **)(*(int *)this + 0x148),0), this_00 != (void *)0x0)
        ) && (bVar6 = FUN_009daa10(this_00,"[no flat shadow]"), bVar6)) {
      DAT_010b9548 = 1;
    }
    FUN_009a1420();
    DAT_0105bec5 = 1;
    piVar9 = FUN_009cc3f0();
    if (piVar9 != (int *)0x0) {
      if (*piVar9 == 1) {
        iVar2 = piVar9[1];
        *(int *)((int)this + 0xc) = iVar2;
        if (iVar2 != 0) {
          InterlockedIncrement((LONG *)(iVar2 + 0x10));
        }
      }
      else if (*piVar9 == 3) {
        iVar2 = piVar9[1];
        *(int *)((int)this + 0x10) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        }
      }
    }
  }
  DAT_0105bec4 = uVar4;
  DAT_010b9550 = uVar5;
  return;
}


//// FUNCTION FUN_00a22250 @ 00a22250 ////

void __cdecl FUN_00a22250(int *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int *this;
  byte *pbVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  LONG LVar9;
  undefined4 **ppuVar10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint unaff_retaddr;
  void *pvStack_5c;
  int *piStack_58;
  int local_54;
  int iStack_50;
  int iStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this = FUN_00433eb0();
  iVar6 = *this;
  pbVar3 = FUN_009de1d0("floor.msh",1);
  (**(code **)(iVar6 + 0x18))();
  pvVar4 = (void *)FUN_0097e350(this,0);
  if (pvVar4 != (void *)0x0) {
    FUN_009de3b0(pvVar4);
  }
  pvStack_5c = (void *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    FUN_00978cd0((void *)*param_1,unaff_retaddr,1);
    FUN_00a20730(param_1);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_10 = 0x3f9c61ab;
    uVar5 = FUN_00971f40((void *)*param_1,&uStack_2c);
    if ((char)uVar5 != '\0') {
      FUN_00a25410((int)&uStack_2c);
    }
    bVar1 = false;
    iVar6 = FUN_0097e350((void *)param_1[1],0);
    if (iVar6 != 0) {
      FUN_0097e350((void *)param_1[1],0);
      FUN_009d9820();
      pcVar7 = (char *)FUN_0097e350((void *)param_1[1],0);
      iVar6 = 0xd;
      bVar18 = true;
      pcVar16 = "set_wwstreet";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar18 = *pcVar7 == *pcVar16;
        pcVar7 = pcVar7 + 1;
        pcVar16 = pcVar16 + 1;
      } while (bVar18);
      this = piStack_58;
      if (bVar18) {
        bVar1 = true;
      }
    }
    uVar8 = FUN_009a6fb0('\x01');
    if ((char)uVar8 != '\0') {
      local_54 = 2;
      do {
        FUN_009a56b0(0xff000000,'\x01');
        FUN_009a1410();
        if (bVar1) {
          (**(code **)(*this + 0x10))(0,1);
        }
        FUN_00a220b0(param_1,'\0');
        FUN_009a1460();
        local_54 = local_54 + -1;
      } while (local_54 != 0);
      pvStack_5c = FUN_0099bb50("copy_render",0x15,DAT_00e67ba0,DAT_00e67ba4,'\0');
      FUN_009a56e0((int)pvStack_5c);
      FUN_009a6fb0('\0');
    }
    iStack_44 = 0;
    puStack_40 = (undefined4 *)0x0;
    MediaPlayer_LockVideoBuffer(pvStack_5c,&iStack_44);
    if (puStack_40 != (undefined4 *)0x0) {
      FUN_00a218b0(puStack_40,DAT_00e67ba0,DAT_00e67ba4,'\0',(int)pbVar3);
    }
    MediaPlayer_UnlockVideoBuffer((int)pvStack_5c);
    pvVar4 = FUN_0099bb50("thumb_flm",0x15,0x100,0x80,'\0');
    uStack_30 = 0x42e00000;
    uStack_3c = 0;
    uStack_34 = 0x44000000;
    uStack_38 = 0x43c80000;
    FUN_0099a9b0(pvVar4,0,(uint)pvStack_5c,(int)&uStack_3c);
    MediaPlayer_LockVideoBuffer(pvVar4,&iStack_44);
    if (puStack_40 != (undefined4 *)0x0) {
      iStack_50 = 0x80;
      puVar12 = param_2;
      puVar13 = puStack_40;
      do {
        puVar14 = puVar13;
        puVar17 = puVar12;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar17 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar17 = puVar17 + 1;
        }
        ppuVar10 = (undefined4 **)((int)puVar12 + 2);
        iVar6 = 0x40;
        do {
          *(byte *)((int)ppuVar10 + 1) = 0xff;
          ppuVar11 = ppuVar10;
          if (*(byte *)ppuVar10 < 2) {
            param_2 = (undefined4 *)CONCAT31(param_2._1_3_,1);
            ppuVar11 = &param_2;
          }
          *(byte *)ppuVar10 = *(byte *)ppuVar11;
          pbVar3 = (byte *)((int)ppuVar10 + -1);
          if (*(byte *)((int)ppuVar10 + -1) < 2) {
            pbVar3 = &stack0xffffffa2;
          }
          *(byte *)((int)ppuVar10 + -1) = *pbVar3;
          pbVar3 = (byte *)((int)ppuVar10 + -2);
          if (*(byte *)((int)ppuVar10 + -2) < 2) {
            pbVar3 = &stack0xffffffa3;
          }
          *(byte *)((int)ppuVar10 + -2) = *pbVar3;
          *(byte *)((int)ppuVar10 + 5) = 0xff;
          ppuVar11 = ppuVar10 + 1;
          if (*(byte *)(ppuVar10 + 1) < 2) {
            param_2 = (undefined4 *)CONCAT31(param_2._1_3_,1);
            ppuVar11 = &param_2;
          }
          *(byte *)(ppuVar10 + 1) = *(byte *)ppuVar11;
          pbVar3 = (byte *)((int)ppuVar10 + 3);
          if (*(byte *)((int)ppuVar10 + 3) < 2) {
            pbVar3 = &stack0xffffffa2;
          }
          *(byte *)((int)ppuVar10 + 3) = *pbVar3;
          pbVar3 = (byte *)((int)ppuVar10 + 2);
          if (*(byte *)((int)ppuVar10 + 2) < 2) {
            pbVar3 = &stack0xffffffa3;
          }
          *(byte *)((int)ppuVar10 + 2) = *pbVar3;
          *(byte *)((int)ppuVar10 + 9) = 0xff;
          ppuVar11 = ppuVar10 + 2;
          if (*(byte *)(ppuVar10 + 2) < 2) {
            param_2 = (undefined4 *)CONCAT31(param_2._1_3_,1);
            ppuVar11 = &param_2;
          }
          *(byte *)(ppuVar10 + 2) = *(byte *)ppuVar11;
          pbVar3 = (byte *)((int)ppuVar10 + 7);
          if (*(byte *)((int)ppuVar10 + 7) < 2) {
            pbVar3 = &stack0xffffffa2;
          }
          *(byte *)((int)ppuVar10 + 7) = *pbVar3;
          pbVar3 = (byte *)((int)ppuVar10 + 6);
          if (*(byte *)((int)ppuVar10 + 6) < 2) {
            pbVar3 = &stack0xffffffa3;
          }
          *(byte *)((int)ppuVar10 + 6) = *pbVar3;
          *(byte *)((int)ppuVar10 + 0xd) = 0xff;
          ppuVar11 = ppuVar10 + 3;
          if (*(byte *)(ppuVar10 + 3) < 2) {
            param_2 = (undefined4 *)CONCAT31(param_2._1_3_,1);
            ppuVar11 = &param_2;
          }
          *(byte *)(ppuVar10 + 3) = *(byte *)ppuVar11;
          pbVar3 = (byte *)((int)ppuVar10 + 0xb);
          if (*(byte *)((int)ppuVar10 + 0xb) < 2) {
            pbVar3 = &stack0xffffffa2;
          }
          *(byte *)((int)ppuVar10 + 0xb) = *pbVar3;
          pbVar3 = (byte *)((int)ppuVar10 + 10);
          pbVar15 = pbVar3;
          if (*(byte *)((int)ppuVar10 + 10) < 2) {
            pbVar15 = &stack0xffffffa3;
          }
          ppuVar10 = ppuVar10 + 4;
          iVar6 = iVar6 + -1;
          *pbVar3 = *pbVar15;
        } while (iVar6 != 0);
        puVar13 = puVar13 + ((int)(iStack_44 + (iStack_44 >> 0x1f & 3U)) >> 2);
        puVar12 = puVar12 + param_3;
        iStack_50 = iStack_50 + -1;
        this = piStack_58;
      } while (iStack_50 != 0);
    }
    MediaPlayer_UnlockVideoBuffer((int)pvVar4);
    if (pvStack_5c != (void *)0x0) {
      FUN_0099b400(pvStack_5c);
    }
    if (pvVar4 != (void *)0x0) {
      FUN_0099b400(pvVar4);
    }
    LVar9 = InterlockedDecrement(this + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar9 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*piStack_58)(1);
      DAT_0105b588 = uVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00a22cc0 @ 00a22cc0 ////

byte * __cdecl FUN_00a22cc0(char *param_1,char param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  char local_20 [32];
  
  if ((param_1 == (char *)0x0) && (param_2 == '\0')) {
    if (DAT_01050b68 != (code *)0x0) {
      pcVar2 = (char *)(*DAT_01050b68)("costume_actor",param_3);
      if (pcVar2 != (char *)0x0) {
        pcVar2 = (char *)FUN_009cfaa0(pcVar2);
        if (pcVar2 != (char *)0x0) {
          DAT_00e68f64 = (byte)(*(uint *)(pcVar2 + 0xa4) >> 0xc) & 1;
          pbVar3 = FUN_009de1d0(pcVar2,1);
          return pbVar3;
        }
      }
    }
    pbVar3 = FUN_009de1d0("woodenman.msh",1);
    return pbVar3;
  }
  DAT_00e68f64 = 1;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (0x1f < (int)pcVar2 - (int)(param_1 + 1)) {
    return (byte *)0x0;
  }
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)(local_20 + -(int)param_1)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_009ac040(local_20);
  iVar5 = 5;
  bVar6 = true;
  pcVar2 = local_20 + ((int)pcVar2 - (int)(param_1 + 1)) + -4;
  pcVar4 = ".msh";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar6 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar6);
  if (bVar6) {
    pbVar3 = FUN_009de1d0(local_20,1);
    return pbVar3;
  }
  if (param_2 != '\0') {
    if (DAT_01050b64 != (code *)0x0) {
      pcVar2 = (char *)(*DAT_01050b64)(param_1);
      if (pcVar2 != (char *)0x0) {
        if (param_4 != 0) {
          *(uint *)(param_4 + 0x48) = *(uint *)(param_4 + 0x48) | 0x4000000;
        }
        pbVar3 = FUN_009de1d0(pcVar2,1);
        return pbVar3;
      }
    }
    pbVar3 = FUN_009de1d0("marine.msh",1);
    return pbVar3;
  }
  if (DAT_01050b68 != (code *)0x0) {
    pcVar2 = (char *)(*DAT_01050b68)(param_1,param_3);
    if (pcVar2 != (char *)0x0) {
      pcVar2 = (char *)FUN_009cfaa0(pcVar2);
      if (pcVar2 != (char *)0x0) {
        DAT_00e68f64 = (byte)(*(uint *)(pcVar2 + 0xa4) >> 0xc) & 1;
        pbVar3 = FUN_009de1d0(pcVar2,1);
        return pbVar3;
      }
    }
  }
  pbVar3 = FUN_009de1d0("woodenman.msh",1);
  return pbVar3;
}


//// FUNCTION FUN_00a22e60 @ 00a22e60 ////

void FUN_00a22e60(void)

{
  DAT_010b955c = 0;
  return;
}


//// FUNCTION FUN_00a22e70 @ 00a22e70 ////

void FUN_00a22e70(void)

{
  if (DAT_010b955c != (void *)0x0) {
    DAT_010b9558 = DAT_010b9558 - *(int *)((int)DAT_010b955c + 0x24);
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b955c);
  }
  DAT_010b955c = (void *)0x0;
  return;
}


//// FUNCTION FUN_00a22eb0 @ 00a22eb0 ////

byte * __cdecl FUN_00a22eb0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar2 = DAT_010b955c;
  do {
    pbVar3 = param_1;
    pbVar5 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
      return (byte *)0x0;
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a22eee:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a22ef3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a22eee;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00a22ef3:
    if (iVar4 == 0) {
      *(undefined4 *)(pbVar2 + 0x20) = DAT_0105be98;
      return pbVar2;
    }
    pbVar2 = *(byte **)(pbVar2 + 0x28);
  } while( true );
}


//// FUNCTION FUN_00a22f20 @ 00a22f20 ////

undefined1 FUN_00a22f20(void)

{
  return 0;
}


//// FUNCTION FUN_00a22f30 @ 00a22f30 ////

void FUN_00a22f30(void)

{
  void *pvVar1;
  void *pvVar2;
  void *_Memory;
  void *pvVar3;
  void *pvVar4;
  
  if (0x18fff < DAT_010b9558) {
    pvVar3 = (void *)0x0;
    pvVar4 = (void *)0x0;
    pvVar1 = DAT_010b955c;
    _Memory = DAT_010b955c;
    if (DAT_010b955c != (void *)0x0) {
      do {
        pvVar2 = pvVar1;
        if (*(uint *)((int)pvVar2 + 0x20) < *(uint *)((int)_Memory + 0x20)) {
          _Memory = pvVar2;
          pvVar4 = pvVar3;
        }
        pvVar1 = *(void **)((int)pvVar2 + 0x28);
        pvVar3 = pvVar2;
      } while (*(void **)((int)pvVar2 + 0x28) != (void *)0x0);
      if (_Memory != (void *)0x0) {
        if (pvVar4 == (void *)0x0) {
          DAT_010b955c = *(void **)((int)_Memory + 0x28);
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x28) = *(undefined4 *)((int)_Memory + 0x28);
        }
        DAT_010b9558 = DAT_010b9558 - *(int *)((int)_Memory + 0x24);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a22fa0 @ 00a22fa0 ////

uint FUN_00a22fa0(void)

{
  uint uVar1;
  
  uVar1 = FUN_00761480();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  return (uint)(DAT_010b9555 == '\0');
}


//// FUNCTION FUN_00a22ff0 @ 00a22ff0 ////

bool FUN_00a22ff0(void)

{
  if (DAT_010b9554 != '\0') {
    return false;
  }
  if (DAT_010b9556 == '\0') {
    return true;
  }
  if (DAT_010b9780 == 0) {
    return true;
  }
  return DAT_010b9784 - DAT_010b9780 >> 2 == 0;
}


//// FUNCTION FUN_00a23030 @ 00a23030 ////

undefined4 __cdecl FUN_00a23030(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *local_23c;
  undefined4 local_238;
  uint local_234;
  undefined1 local_230 [20];
  uint local_21c;
  char local_218 [12];
  char local_20c [256];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa076;
  local_c = ExceptionList;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  ExceptionList = &local_c;
  FUN_009d3340((char *)param_1,local_10c,local_218);
  _sprintf(local_20c,"%s%s",local_10c,local_218);
  FUN_009ac040(local_20c);
  pbVar3 = FUN_00a22eb0(param_1);
  if (pbVar3 != (byte *)0x0) {
    ExceptionList = local_c;
    return *(undefined4 *)(pbVar3 + 0x2c);
  }
  local_23c = local_230;
  local_230[0] = 0;
  local_238 = 0;
  local_234 = 0x14;
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  FUN_004015d0(&local_23c,(char *)param_1,(int)pbVar3 - (int)(param_1 + 1));
  local_4 = 0;
  uVar4 = FUN_009d3720(&local_23c);
  local_4 = 0xffffffff;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    local_21c = uVar4 + 0x30;
    pvVar6 = operator_new(local_21c);
    local_23c = local_230;
    *(undefined4 **)((int)pvVar6 + 0x2c) = (undefined4 *)((int)pvVar6 + 0x30);
    local_230[0] = 0;
    local_238 = 0;
    local_234 = 0x14;
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    FUN_004015d0(&local_23c,(char *)param_1,(int)pbVar3 - (int)(param_1 + 1));
    local_4 = 1;
    FUN_009d3ca0(&local_23c,(undefined4 *)((int)pvVar6 + 0x30),uVar4,(undefined1 *)0x0);
    if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
      _free(local_23c);
    }
    *(void **)((int)pvVar6 + 0x28) = DAT_010b955c;
    uVar5 = DAT_0105be98;
    pcVar7 = local_20c;
    iVar8 = (int)pvVar6 - (int)pcVar7;
    do {
      cVar2 = *pcVar7;
      pcVar7[iVar8] = cVar2;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    DAT_010b955c = pvVar6;
    *(uint *)((int)pvVar6 + 0x24) = local_21c;
    *(undefined4 *)((int)pvVar6 + 0x20) = uVar5;
    DAT_010b9558 = DAT_010b9558 + local_21c;
    uVar5 = *(undefined4 *)((int)pvVar6 + 0x2c);
  }
  ExceptionList = local_c;
  return uVar5;
}


//// FUNCTION FUN_00a23370 @ 00a23370 ////

undefined4 __cdecl FUN_00a23370(void *param_1,undefined4 param_2,uint param_3)

{
  HANDLE hFile;
  va_list *nSize;
  DWORD dwMessageId;
  WINBOOL WVar1;
  LPFILETIME in_stack_00000024;
  DWORD dwLanguageId;
  HLOCAL *lpBuffer;
  va_list *Arguments;
  HLOCAL local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa088;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  hFile = FUN_009d37c0(&param_1);
  if (hFile == (HANDLE)0xffffffff) {
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = local_c;
    return 0xffffff00;
  }
  nSize = (va_list *)GetFileTime(hFile,in_stack_00000024,(LPFILETIME)0x0,(LPFILETIME)0x0);
  if (nSize == (va_list *)0x0) {
    lpBuffer = &local_10;
    dwLanguageId = 0x400;
    Arguments = nSize;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,(DWORD)nSize,
                   Arguments);
    LocalFree(local_10);
    WVar1 = CloseHandle(hFile);
  }
  else {
    WVar1 = CloseHandle(hFile);
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)WVar1 >> 8),1);
}


//// FUNCTION FUN_00a23450 @ 00a23450 ////

void __fastcall FUN_00a23450(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a23460 @ 00a23460 ////

undefined4 FUN_00a23460(void)

{
  return DAT_010b9568;
}


//// FUNCTION FUN_00a23530 @ 00a23530 ////

void __fastcall FUN_00a23530(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00a235e0 @ 00a235e0 ////

undefined4 * __thiscall FUN_00a235e0(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


//// FUNCTION FUN_00a23630 @ 00a23630 ////

void * __thiscall FUN_00a23630(void *this,byte param_1)

{
  FUN_00a23530((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a23650 @ 00a23650 ////

void FUN_00a23650(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_00a23680 @ 00a23680 ////

undefined4 * __thiscall
FUN_00a23680(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = (undefined2 *)((int)this + 0x14);
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 10;
  FUN_004036d0((undefined4 *)((int)this + 8),(wchar_t *)*param_3,param_3[1]);
  *(undefined4 *)((int)this + 0x28) = param_3[8];
  *(undefined4 *)((int)this + 0x2c) = param_3[9];
  return this;
}


//// FUNCTION FUN_00a236f0 @ 00a236f0 ////

int * __cdecl FUN_00a236f0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  wchar_t local_34 [10];
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  
  puVar1 = (undefined4 *)*DAT_010b9564;
  iVar3 = 0;
  while( true ) {
    if (puVar1 == DAT_010b9564) {
      *param_1 = (int)(param_1 + 3);
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 10;
      uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if ((uint)param_1[2] <= uVar4) {
        if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar5 = uVar4 + 0x20 & 0xffffffe0;
        param_1[2] = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        *param_1 = (int)pvVar6;
      }
      _wcsncpy((wchar_t *)*param_1,(wchar_t *)&lpCaption_00d16918,uVar4);
      param_1[1] = uVar4;
      *(undefined2 *)(*param_1 + uVar4 * 2) = 0;
      return param_1;
    }
    if (iVar3 == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar3 = iVar3 + 1;
  }
  uVar4 = puVar1[3];
  pwVar2 = (wchar_t *)puVar1[2];
  local_40 = local_34;
  local_34[0] = L'\0';
  local_3c = 0;
  local_38 = 10;
  if (9 < uVar4) {
    uVar5 = uVar4 + 0x20 >> 5;
    local_38 = uVar5 << 5;
    local_40 = _malloc(uVar5 * 0x40);
  }
  _wcsncpy(local_40,pwVar2,uVar4);
  local_40[uVar4] = L'\0';
  local_3c = uVar4;
  FUN_004211c0(&local_40,&local_20,0,uVar4 - 4);
  pwVar2 = local_20;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < local_1c) {
    uVar4 = local_1c + 0x20 & 0xffffffe0;
    param_1[2] = uVar4;
    pvVar6 = _malloc(uVar4 * 2);
    *param_1 = (int)pvVar6;
  }
  _wcsncpy((wchar_t *)*param_1,pwVar2,local_1c);
  param_1[1] = local_1c;
  *(undefined2 *)(*param_1 + local_1c * 2) = 0;
  if (local_18 < 0xb) {
    if (local_38 < 0xb) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_00a23890 @ 00a23890 ////

int __fastcall FUN_00a23890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a23650();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a238c0 @ 00a238c0 ////

void * FUN_00a238c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *this;
  
  this = operator_new(0x30);
  if (this != (void *)0x0) {
    FUN_00a23680(this,param_1,param_2,param_3);
  }
  return this;
}


//// FUNCTION FUN_00a238f0 @ 00a238f0 ////

void __fastcall FUN_00a238f0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
    FUN_00a23530((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00a23930 @ 00a23930 ////

void __fastcall FUN_00a23930(int param_1)

{
  FUN_00a238f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a23950 @ 00a23950 ////

void __fastcall FUN_00a23950(int param_1)

{
  FUN_00a238f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a23970 @ 00a23970 ////

void __thiscall FUN_00a23970(void *this,uint param_1)

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
  puStack_8 = &LAB_00cfa0a8;
  local_c = ExceptionList;
  if (0x6666666U - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_00a23a90 @ 00a23a90 ////

void __cdecl FUN_00a23a90(wchar_t *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined2 local_80 [4];
  undefined4 uStack_78;
  void *local_54 [2];
  uint local_4c;
  undefined2 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined2 local_28 [10];
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa0d0;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 10;
  local_4 = 1;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_34,(wchar_t *)&lpCaption_00d16918,uVar1);
  puVar2 = FUN_009d45d0(local_54,param_1);
  FUN_0040cae0(&local_34,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L".jad");
  FUN_0040cae0(&local_34,L".jad",sVar3);
  if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  puVar5 = local_80;
  local_80[0] = 0;
  uVar6 = 0;
  uVar1 = 10;
  FUN_004036d0(&stack0xffffff74,param_1,param_2);
  uVar6 = FUN_00a23370(puVar5,uVar6,uVar1);
  if ((char)uVar6 == '\0') {
    if (10 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
  }
  else {
    puVar2 = (undefined4 *)*DAT_010b9564;
    while( true ) {
      if (local_10 < (uint)puVar2[0xb]) break;
      if (((local_10 <= (uint)puVar2[0xb]) && (local_14 <= (uint)puVar2[10])) ||
         (puVar2 = (undefined4 *)*puVar2, puVar2 == DAT_010b9564)) break;
    }
    uStack_78 = 0xa23bc8;
    pvVar4 = FUN_00a238c0(puVar2,puVar2[1],&local_34);
    FUN_00a23970(&DAT_010b9560,1);
    puVar2[1] = pvVar4;
    **(undefined4 **)((int)pvVar4 + 4) = pvVar4;
    if (10 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
  }
  if (param_3 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00a23c20 @ 00a23c20 ////

/* WARNING: Removing unreachable block (ram,0x00a23d12) */

void FUN_00a23c20(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint _Count;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint local_cc;
  uint local_a8;
  wchar_t *local_a4;
  uint local_9c;
  wchar_t local_98 [10];
  undefined1 *local_84;
  wchar_t *local_80 [2];
  uint local_78;
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa0fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a238f0(0x10b9560);
  FUN_009f2760(local_60);
  local_4 = 0;
  puVar2 = FUN_009b91e0();
  local_cc = 0xa23c75;
  FUN_0043be60(local_80,puVar2,L"\\The Movies\\Saved Games\\");
  local_4 = CONCAT31(local_4._1_3_,1);
  if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  FUN_009f34b0(local_60,L"*.jad",local_80[0]);
  local_a8 = 0;
  while( true ) {
    if ((local_18 == 0) || ((uint)(local_14 - local_18 >> 2) <= local_a8)) {
      if (local_78 < 0xb) {
        local_4 = 0xffffffff;
        FUN_009f2320(local_60);
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_80[0]);
    }
    pwVar5 = *(wchar_t **)(local_18 + local_a8 * 4);
    local_a4 = local_98;
    local_98[0] = L'\0';
    local_9c = 10;
    _Count = FUN_00ace02d(pwVar5);
    if (9 < _Count) {
      uVar3 = _Count + 0x20 >> 5;
      local_9c = uVar3 << 5;
      local_a4 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_a4,pwVar5,_Count);
    local_a4[_Count] = L'\0';
    local_84 = &stack0xffffff28;
    pwVar5 = (wchar_t *)&local_cc;
    local_cc = local_cc & 0xffff0000;
    uVar3 = 10;
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar1 = &stack0xffffff28;
    if (9 < _Count) {
      uVar4 = _Count + 0x20 >> 5;
      uVar3 = uVar4 << 5;
      pwVar5 = _malloc(uVar4 * 0x40);
      puVar1 = local_84;
    }
    local_84 = puVar1;
    _wcsncpy(pwVar5,local_a4,_Count);
    pwVar5[_Count] = L'\0';
    FUN_00a23a90(pwVar5,_Count,uVar3);
    if (10 < local_9c) break;
    local_a8 = local_a8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_a4);
}


//// FUNCTION FUN_00a23e30 @ 00a23e30 ////

void __thiscall FUN_00a23e30(void *this,int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_40 [16];
  
  iVar7 = 0;
  puVar5 = (undefined2 *)((int)this + 2);
  do {
    uVar1 = *(undefined1 *)(puVar5 + 2);
    local_40[iVar7] =
         CONCAT31(CONCAT21(*puVar5,*(undefined1 *)((int)puVar5 + -1)),*(undefined1 *)(puVar5 + -1));
    uVar2 = *(undefined1 *)(puVar5 + 4);
    local_40[iVar7 + 1] =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)puVar5 + 5),uVar1),
                           *(undefined1 *)((int)puVar5 + 3)),*(undefined1 *)(puVar5 + 1));
    uVar1 = *(undefined1 *)(puVar5 + 6);
    local_40[iVar7 + 2] =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)puVar5 + 9),uVar2),
                           *(undefined1 *)((int)puVar5 + 7)),*(undefined1 *)(puVar5 + 3));
    local_40[iVar7 + 3] =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)puVar5 + 0xd),uVar1),
                           *(undefined1 *)((int)puVar5 + 0xb)),*(undefined1 *)(puVar5 + 5));
    iVar7 = iVar7 + 4;
    puVar5 = puVar5 + 8;
  } while (iVar7 < 0x10);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar6 = (~uVar3 & *(uint *)(param_1 + 0x14) | uVar8 & uVar3) + local_40[0] + -0x28955b88 +
          *(int *)(param_1 + 8);
  uVar4 = (uVar6 >> 0x19 | uVar6 * 0x80) + uVar3;
  uVar6 = (~uVar4 & uVar8 | uVar3 & uVar4) + local_40[1] + -0x173848aa + *(uint *)(param_1 + 0x14);
  uVar6 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar4;
  uVar8 = (~uVar6 & uVar3 | uVar6 & uVar4) + local_40[2] + 0x242070db + uVar8;
  uVar8 = (uVar8 >> 0xf | uVar8 * 0x20000) + uVar6;
  uVar3 = (~uVar8 & uVar4 | uVar6 & uVar8) + local_40[3] + -0x3e423112 + uVar3;
  uVar8 = (uVar3 * 0x400000 | uVar3 >> 10) + uVar8;
  uVar4 = (~uVar8 & uVar6 | uVar8 & uVar8) + local_40[4] + -0xa83f051 + uVar4;
  uVar8 = (uVar4 >> 0x19 | uVar4 * 0x80) + uVar8;
  uVar6 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[5] + 0x4787c62a + uVar6;
  uVar8 = (uVar6 >> 0x14 | uVar6 * 0x1000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[6] + -0x57cfb9ed + uVar8;
  uVar8 = (uVar8 >> 0xf | uVar8 * 0x20000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[7] + -0x2b96aff + uVar8;
  uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[8] + 0x698098d8 + uVar8;
  uVar8 = (uVar8 >> 0x19 | uVar8 * 0x80) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[9] + -0x74bb0851 + uVar8;
  uVar8 = (uVar8 >> 0x14 | uVar8 * 0x1000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[10] + -0xa44f + uVar8;
  uVar8 = (uVar8 >> 0xf | uVar8 * 0x20000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xb] + -0x76a32842 + uVar8;
  uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xc] + 0x6b901122 + uVar8;
  uVar8 = (uVar8 >> 0x19 | uVar8 * 0x80) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xd] + -0x2678e6d + uVar8;
  uVar8 = (uVar8 >> 0x14 | uVar8 * 0x1000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xe] + -0x5986bc72 + uVar8;
  uVar8 = (uVar8 >> 0xf | uVar8 * 0x20000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xf] + 0x49b40821 + uVar8;
  uVar8 = (uVar8 * 0x400000 | uVar8 >> 10) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[1] + -0x9e1da9e + uVar8;
  uVar8 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[6] + -0x3fbf4cc0 + uVar8;
  uVar8 = (uVar8 >> 0x17 | uVar8 * 0x200) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xb] + 0x265e5a51 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0] + -0x16493856 + uVar8;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[5] + -0x29d0efa3 + uVar8;
  uVar8 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[10] + 0x2441453 + uVar8;
  uVar8 = (uVar8 >> 0x17 | uVar8 * 0x200) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xf] + -0x275e197f + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[4] + -0x182c0438 + uVar8;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[9] + 0x21e1cde6 + uVar8;
  uVar8 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xe] + -0x3cc8f82a + uVar8;
  uVar8 = (uVar8 >> 0x17 | uVar8 * 0x200) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[3] + -0xb2af279 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[8] + 0x455a14ed + uVar8;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xd] + -0x561c16fb + uVar8;
  uVar8 = (uVar8 >> 0x1b | uVar8 * 0x20) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[2] + -0x3105c08 + uVar8;
  uVar8 = (uVar8 >> 0x17 | uVar8 * 0x200) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[7] + 0x676f02d9 + uVar8;
  uVar8 = (uVar8 >> 0x12 | uVar8 * 0x4000) + uVar8;
  uVar8 = (~uVar8 & uVar8 | uVar8 & uVar8) + local_40[0xc] + -0x72d5b376 + uVar8;
  uVar8 = (uVar8 * 0x100000 | uVar8 >> 0xc) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[5] + -0x5c6be + uVar8;
  uVar8 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[8] + -0x788e097f + uVar8;
  uVar8 = (uVar8 >> 0x15 | uVar8 * 0x800) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0xb] + 0x6d9d6122 + uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0xe] + -0x21ac7f4 + uVar8;
  uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[1] + -0x5b4115bc + uVar8;
  uVar8 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[4] + 0x4bdecfa9 + uVar8;
  uVar8 = (uVar8 >> 0x15 | uVar8 * 0x800) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[7] + -0x944b4a0 + uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[10] + -0x41404390 + uVar8;
  uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0xd] + 0x289b7ec6 + uVar8;
  uVar8 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0] + -0x155ed806 + uVar8;
  uVar8 = (uVar8 >> 0x15 | uVar8 * 0x800) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[3] + -0x2b10cf7b + uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[6] + 0x4881d05 + uVar8;
  uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[9] + -0x262b2fc7 + uVar8;
  uVar8 = (uVar8 >> 0x1c | uVar8 * 0x10) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0xc] + -0x1924661b + uVar8;
  uVar8 = (uVar8 >> 0x15 | uVar8 * 0x800) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[0xf] + 0x1fa27cf8 + uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8 * 0x10000) + uVar8;
  uVar8 = (uVar8 ^ uVar8 ^ uVar8) + local_40[2] + -0x3b53a99b + uVar8;
  uVar8 = (uVar8 * 0x800000 | uVar8 >> 9) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0] + -0xbd6ddbc + uVar8;
  uVar8 = (uVar8 >> 0x1a | uVar8 * 0x40) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[7] + 0x432aff97 + uVar8;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0xe] + -0x546bdc59 + uVar8;
  uVar8 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[5] + -0x36c5fc7 + uVar8;
  uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0xc] + 0x655b59c3 + uVar8;
  uVar8 = (uVar8 >> 0x1a | uVar8 * 0x40) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[3] + -0x70f3336e + uVar8;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[10] + -0x100b83 + uVar8;
  uVar8 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[1] + -0x7a7ba22f + uVar8;
  uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[8] + 0x6fa87e4f + uVar8;
  uVar8 = (uVar8 >> 0x1a | uVar8 * 0x40) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0xf] + -0x1d31920 + uVar8;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[6] + -0x5cfebcec + uVar8;
  uVar8 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0xd] + 0x4e0811a1 + uVar8;
  uVar8 = (uVar8 * 0x200000 | uVar8 >> 0xb) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[4] + -0x8ac817e + uVar8;
  uVar8 = (uVar8 >> 0x1a | uVar8 * 0x40) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[0xb] + -0x42c50dcb + uVar8;
  uVar8 = (uVar8 >> 0x16 | uVar8 * 0x400) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[2] + 0x2ad7d2bb + uVar8;
  uVar8 = (uVar8 >> 0x11 | uVar8 * 0x8000) + uVar8;
  uVar8 = ((~uVar8 | uVar8) ^ uVar8) + local_40[9] + -0x14792c6f + uVar8;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar8;
  *(uint *)(param_1 + 0xc) = (uVar8 * 0x200000 | uVar8 >> 0xb) + *(int *)(param_1 + 0xc) + uVar8;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar8;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar8;
  return;
}


//// FUNCTION FUN_00a24780 @ 00a24780 ////

void __cdecl FUN_00a24780(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0x67452301;
  param_1[3] = 0xefcdab89;
  param_1[4] = 0x98badcfe;
  param_1[5] = 0x10325476;
  return;
}


//// FUNCTION FUN_00a247b0 @ 00a247b0 ////

void __cdecl FUN_00a247b0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1 >> 3 & 0x3f;
  if (0 < (int)param_3) {
    *param_1 = *param_1 + param_3 * 8;
    param_1[1] = param_1[1] + ((int)param_3 >> 0x1d);
    if (*param_1 < param_3 * 8) {
      param_1[1] = param_1[1] + 1;
    }
    if (uVar1 != 0) {
      uVar2 = param_3;
      if (0x40 < (int)(uVar1 + param_3)) {
        uVar2 = 0x40 - uVar1;
      }
      puVar4 = param_2;
      puVar5 = (uint *)(uVar1 + 0x18 + (int)param_1);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar5 = (char)*puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      if ((int)(uVar1 + uVar2) < 0x40) {
        return;
      }
      param_3 = param_3 - uVar2;
      param_2 = (uint *)(uVar2 + (int)param_2);
      FUN_00a23e30(param_1 + 6,(int)param_1);
    }
    if (0x3f < (int)param_3) {
      uVar1 = param_3 >> 6;
      param_3 = param_3 + uVar1 * -0x40;
      do {
        FUN_00a23e30(param_2,(int)param_1);
        param_2 = param_2 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (param_3 != 0) {
      puVar4 = param_1 + 6;
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(char *)puVar4 = (char)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a24880 @ 00a24880 ////

void __cdecl FUN_00a24880(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar1 = *param_1;
  local_7 = (undefined1)(uVar1 >> 8);
  local_5 = (undefined1)(uVar1 >> 0x18);
  uVar2 = param_1[1];
  local_6 = (undefined1)(uVar1 >> 0x10);
  local_4 = (undefined1)uVar2;
  local_3 = (undefined1)(uVar2 >> 8);
  local_1 = (undefined1)(uVar2 >> 0x18);
  local_8 = (undefined1)uVar1;
  local_2 = (undefined1)(uVar2 >> 0x10);
  FUN_00a247b0(param_1,(uint *)&DAT_00d756f0,(-(uVar1 >> 3) - 9 & 0x3f) + 1);
  FUN_00a247b0(param_1,(uint *)&local_8,8);
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(char *)(uVar1 + param_2) = (char)(param_1[((int)uVar1 >> 2) + 2] >> (sbyte)((uVar1 & 3) << 3))
    ;
    uVar1 = uVar2;
  } while ((int)uVar2 < 0x10);
  return;
}


//// FUNCTION FUN_00a24930 @ 00a24930 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00a24930(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int local_8 [2];
  
  local_8[1] = 0;
  puVar1 = (undefined4 *)FUN_00a3ac00(*(int **)(param_1 + 0x20),(int)(local_8 + 1));
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  local_8[0] = 0;
  if ((DAT_010bb234 != (int *)0x0) &&
     (puVar2 = (undefined4 *)FUN_00a3a530(DAT_010bb234,*(int *)(param_1 + 0x24) * 3,local_8),
     puVar2 != (undefined4 *)0x0)) {
    puVar7 = *(undefined4 **)(param_1 + 0x28);
    for (iVar3 = (*(int *)(param_1 + 0x20) * 3 & 0x1fffffffU) << 1; iVar3 != 0; iVar3 = iVar3 + -1)
    {
      *puVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    uVar4 = *(int *)(param_1 + 0x24) * 6;
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if (DAT_010bb234 != (int *)0x0) {
      FUN_00a3a5d0(DAT_010bb234);
    }
    FUN_00a3a4e0();
    if ((*(byte *)(param_1 + 0x30) & 8) != 0) {
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
    }
    (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x142);
    if (DAT_010bb230 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(DAT_010bb230 + 4);
    }
    uVar9 = 0;
    piVar8 = g_pDirect3DDevice;
    (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar6,0,0x18);
    if (DAT_010bb234 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *DAT_010bb234;
    }
    (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar3);
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      LH_ApplyMeshMaterial(*(int **)(param_1 + 0x40));
    }
    (**(code **)(*g_pDirect3DDevice + 0x148))
              (g_pDirect3DDevice,4,uVar9,0,*(undefined4 *)(param_1 + 0x20),piVar8,
               *(undefined4 *)(param_1 + 0x24));
    return;
  }
  FUN_00a3a4e0();
  return;
}


//// FUNCTION FUN_00a24a80 @ 00a24a80 ////

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_00a24a80(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  uint in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_ESI;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8 [2];
  
  if ((param_1 != (int *)0x0) && (param_3 != 0)) {
    local_8[1] = 0;
    puVar1 = (undefined4 *)FUN_00a3ac00(param_1,(int)(local_8 + 1));
    in_EAX = 0;
    if (puVar1 != (undefined4 *)0x0) {
      for (uVar3 = (uint)((int)param_1 * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *param_2;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      uVar3 = FUN_00a3a4e0();
      local_8[0] = 0;
      if (DAT_010bb234 != (int *)0x0) {
        puVar1 = (undefined4 *)FUN_00a3a530(DAT_010bb234,param_3 * 3,local_8);
        uVar3 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          for (uVar3 = (uint)(param_3 * 6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar1 = *param_4;
            param_4 = param_4 + 1;
            puVar1 = puVar1 + 1;
          }
          for (uVar3 = param_3 * 6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar1 = *(undefined1 *)param_4;
            param_4 = (undefined4 *)((int)param_4 + 1);
            puVar1 = (undefined4 *)((int)puVar1 + 1);
          }
          if (DAT_010bb234 != (int *)0x0) {
            FUN_00a3a5d0(DAT_010bb234);
          }
          FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
          (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x144);
          if (DAT_010bb230 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(DAT_010bb230 + 4);
          }
          uVar6 = 0x1c;
          uVar5 = 0;
          (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar2,0,0x1c);
          if (DAT_010bb234 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *DAT_010bb234;
          }
          (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar4);
          if (unaff_ESI != (int *)0x0) {
            LH_ApplyMeshMaterial(unaff_ESI);
          }
          uVar2 = (**(code **)(*g_pDirect3DDevice + 0x148))
                            (g_pDirect3DDevice,4,uVar2,0,uVar6,uVar5,param_3);
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
      return uVar3 & 0xffffff00;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a24be0 @ 00a24be0 ////

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a24be0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int local_14 [2];
  undefined4 *local_c;
  float local_8;
  float local_4;
  
  local_14[1] = 0;
  pfVar1 = (float *)FUN_00a3ac00(*(int **)(param_1 + 0x20),(int)(local_14 + 1));
  if (pfVar1 != (float *)0x0) {
    local_14[0] = 0;
    if ((DAT_010bb234 == (int *)0x0) ||
       (local_c = (undefined4 *)FUN_00a3a530(DAT_010bb234,*(int *)(param_1 + 0x24) * 3,local_14),
       local_c == (undefined4 *)0x0)) {
      FUN_00a3a4e0();
      return;
    }
    pfVar2 = *(float **)(param_1 + 0x28);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        *pfVar1 = *pfVar2;
        pfVar1[1] = pfVar2[1];
        pfVar1[2] = 0.0;
        pfVar1[3] = 1.0;
        pfVar1[4] = pfVar2[3];
        pfVar1[5] = pfVar2[4];
        pfVar1[6] = pfVar2[5];
        iVar6 = iVar6 + 1;
        local_8 = (_DAT_0105955c + *pfVar2) * _DAT_01059564;
        local_4 = (_DAT_01059560 + pfVar2[1]) * _DAT_01059568;
        pfVar1[7] = local_8;
        pfVar1[8] = local_4;
        pfVar2 = pfVar2 + 6;
        pfVar1 = pfVar1 + 9;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
    uVar3 = *(int *)(param_1 + 0x24) * 6;
    puVar7 = *(undefined4 **)(param_1 + 0x2c);
    puVar8 = local_c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (DAT_010bb234 != (int *)0x0) {
      FUN_00a3a5d0(DAT_010bb234);
    }
    FUN_00a3a4e0();
    (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x244);
    if (DAT_010bb230 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(DAT_010bb230 + 4);
    }
    uVar9 = 0;
    (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar5,0,0x24);
    if (DAT_010bb234 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *DAT_010bb234;
    }
    (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar6);
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      LH_ApplyMeshMaterial(*(int **)(param_1 + 0x40));
    }
    (**(code **)(*g_pDirect3DDevice + 0x148))
              (g_pDirect3DDevice,4,uVar5,0,*(undefined4 *)(param_1 + 0x20),uVar9,
               *(undefined4 *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00a24d70 @ 00a24d70 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00a24d70(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_c [2];
  undefined4 *local_4;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (*(char *)(*(int *)(param_1 + 0x40) + 0xc) == '$')) {
    FUN_00a24be0(param_1);
    return;
  }
  local_c[1] = 0;
  puVar1 = (undefined4 *)FUN_00a3ac00(*(int **)(param_1 + 0x20),(int)(local_c + 1));
  if (puVar1 != (undefined4 *)0x0) {
    local_c[0] = 0;
    if ((DAT_010bb234 == (int *)0x0) ||
       (local_4 = (undefined4 *)FUN_00a3a530(DAT_010bb234,*(int *)(param_1 + 0x24) * 3,local_c),
       local_4 == (undefined4 *)0x0)) {
      FUN_00a3a4e0();
      return;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = 0;
        puVar1[3] = 0x3f800000;
        puVar1[4] = puVar2[3];
        puVar1[5] = puVar2[4];
        puVar1[6] = puVar2[5];
        iVar6 = iVar6 + 1;
        puVar2 = puVar2 + 6;
        puVar1 = puVar1 + 7;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
    uVar3 = *(int *)(param_1 + 0x24) * 6;
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    puVar2 = local_4;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if (DAT_010bb234 != (int *)0x0) {
      FUN_00a3a5d0(DAT_010bb234);
    }
    FUN_00a3a4e0();
    (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x144);
    if (DAT_010bb230 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(DAT_010bb230 + 4);
    }
    uVar7 = 0;
    (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar5,0,0x1c);
    if (DAT_010bb234 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *DAT_010bb234;
    }
    (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar6);
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      LH_ApplyMeshMaterial(*(int **)(param_1 + 0x40));
    }
    (**(code **)(*g_pDirect3DDevice + 0x148))
              (g_pDirect3DDevice,4,uVar5,0,*(undefined4 *)(param_1 + 0x20),uVar7,
               *(undefined4 *)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00a24ef0 @ 00a24ef0 ////

void __fastcall FUN_00a24ef0(int param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    FUN_00a24d70(param_1);
    return;
  }
  FUN_00a24930(param_1);
  return;
}


//// FUNCTION FUN_00a24f50 @ 00a24f50 ////

void __thiscall FUN_00a24f50(void *this,undefined4 *param_1)

{
  FUN_00972010(this,param_1);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)((int)param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)((int)param_1 + 0x23);
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  return;
}


//// FUNCTION FUN_00a25010 @ 00a25010 ////

int __fastcall FUN_00a25010(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x28);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 8) != 7)) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00a25030 @ 00a25030 ////

undefined4 __thiscall FUN_00a25030(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_00a43f10(this,param_1);
  bVar3 = *(byte *)(param_1 + 0x19);
  *param_1 = 7;
  puVar4 = (undefined4 *)((int)this + 0x60);
  puVar5 = param_1 + 0xf;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(byte *)(param_1 + 0x19) = bVar3 ^ (*(byte *)((int)this + 0x8a) ^ bVar3) & 1;
  *(byte *)((int)param_1 + 0x65) = (byte)(*(uint *)((int)this + 0x88) >> 0x11) & 1;
  *(undefined2 *)((int)param_1 + 0x66) = *(undefined2 *)((int)this + 0x88);
  *(byte *)(param_1 + 0x19) =
       ((byte)(*(uint *)((int)this + 0x88) >> 0x13) & 1 | 2) << 1 | *(byte *)(param_1 + 0x19) & 0xfd
  ;
  param_1[0x1b] = *(undefined4 *)((int)this + 0x244);
  param_1[0x1c] = *(undefined4 *)((int)this + 0x248);
  param_1[0x1d] = *(undefined4 *)((int)this + 0x24c);
  bVar3 = *(byte *)(param_1 + 0x19) ^
          ((char)(*(uint *)((int)this + 0x88) >> 0x14) << 3 ^ *(byte *)(param_1 + 0x19)) & 8;
  *(byte *)(param_1 + 0x19) = bVar3;
  bVar3 = ((char)(*(uint *)((int)this + 0x88) >> 0x16) << 4 ^ bVar3) & 0x10 ^ bVar3;
  *(byte *)(param_1 + 0x19) = bVar3;
  *(byte *)(param_1 + 0x19) =
       ((char)(*(uint *)((int)this + 0x88) >> 0x15) << 5 ^ bVar3) & 0x20 ^ bVar3;
  if (*(int *)((int)this + 0x240) != 0) {
    param_1[0x1a] = *(undefined4 *)(*(int *)((int)this + 0x240) + 4);
    param_1[0x1e] = *(undefined4 *)((int)this + 0x250);
    return uVar1;
  }
  param_1[0x1a] = 0xffffffff;
  param_1[0x1e] = *(undefined4 *)((int)this + 0x250);
  return uVar1;
}


//// FUNCTION FUN_00a25140 @ 00a25140 ////

void __fastcall FUN_00a25140(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00971c80(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x23c));
  *(int *)(param_1 + 0x240) = iVar1;
  return;
}


//// FUNCTION FUN_00a251e0 @ 00a251e0 ////

void __thiscall FUN_00a251e0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00a24f50(this,param_1);
  puVar5 = (undefined4 *)((int)this + 0x3c);
  if (DAT_00e68f68 < 0x11) {
    *puVar5 = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    iVar2 = 8;
    puVar5 = (undefined4 *)((int)this + 0xdc);
    iVar1 = 0x20;
  }
  else {
    iVar2 = 10;
    iVar1 = 0x28;
  }
  puVar3 = (undefined1 *)((int)(param_1 + 0xf) + iVar1);
  puVar4 = param_1 + 0xf;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)this + 100) = *puVar3;
  *(undefined1 *)((int)this + 0x65) = puVar3[1];
  *(undefined2 *)((int)this + 0x66) = *(undefined2 *)(puVar3 + 2);
  if ((*(byte *)((int)this + 100) & 4) != 0) {
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(puVar3 + 8);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(puVar3 + 0xc);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(puVar3 + 0x10);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(puVar3 + 0x14);
    return;
  }
  *(undefined4 *)((int)this + 0x68) = 0xffffffff;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00a25290 @ 00a25290 ////

void __fastcall FUN_00a25290(int param_1)

{
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffcffff;
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfff3ffff;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xff8fffff;
  return;
}


//// FUNCTION FUN_00a252f0 @ 00a252f0 ////

void __fastcall FUN_00a252f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d75744;
  if ((void *)param_1[0x95] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x95]);
  }
  FUN_00a43a90(param_1);
  return;
}


//// FUNCTION FUN_00a25410 @ 00a25410 ////

void __fastcall FUN_00a25410(int param_1)

{
  float10 fVar1;
  
  FUN_009a6070(&DAT_0105c2e8,*(float *)(param_1 + 0x20));
  fVar1 = FUN_004012c0(*(float *)(param_1 + 0x1c));
  FUN_009a1950(&DAT_0105c2e8,(float)fVar1);
  FUN_009a2830(&DAT_0105c2e8,(float *)(param_1 + 4),(float *)(param_1 + 0x10),
               *(float *)(param_1 + 0x24));
  return;
}


//// FUNCTION FUN_00a25460 @ 00a25460 ////

undefined4 * __thiscall FUN_00a25460(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_88 [7];
  undefined4 local_6c;
  undefined4 local_4c [10];
  byte local_24;
  byte local_23;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa11b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  *(undefined ***)this = &PTR_FUN_00d75744;
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
  *(undefined4 *)((int)this + 0x7c) = 0x3f9c61ab;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_6c = 0;
  puVar3 = local_88;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_4c[3] = 0;
  local_4c[4] = 0;
  local_4c[5] = 0;
  local_4c[6] = 0;
  local_4c[8] = 0;
  local_4c[9] = 0;
  local_4c[7] = 0x3f9c61ab;
  puVar3 = local_88;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_00a251e0(local_88,param_1);
  FUN_00a444f0(this,param_1);
  FUN_00a25290((int)this);
  uVar1 = (uint)local_24;
  puVar3 = local_4c;
  puVar4 = (undefined4 *)((int)this + 0x60);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(uint *)((int)this + 0x88) =
       ((local_23 & 1) << 1 | uVar1 & 1) << 0x10 | *(uint *)((int)this + 0x88) & 0xfffcffff;
  *(undefined4 *)((int)this + 0x23c) = local_20;
  *(undefined2 *)((int)this + 0x88) = local_22;
  *(undefined4 *)((int)this + 0x244) = local_1c;
  *(undefined4 *)((int)this + 0x248) = local_18;
  *(undefined4 *)((int)this + 0x24c) = local_14;
  *(undefined4 *)((int)this + 0x250) = local_10;
  uVar1 = (((uVar1 & 0x12) << 1 | uVar1 & 8) << 1 | uVar1 & 0x20) << 0x10 |
          *(uint *)((int)this + 0x88) & 0xff87ffff;
  *(uint *)((int)this + 0x88) = uVar1;
  if ((*(float *)((int)this + 0x68) * *(float *)((int)this + 0x68) +
       *(float *)((int)this + 100) * *(float *)((int)this + 100) +
       *(float *)((int)this + 0x6c) * *(float *)((int)this + 0x6c) == 0.0) &&
     (*(float *)((int)this + 0x74) * *(float *)((int)this + 0x74) +
      *(float *)((int)this + 0x70) * *(float *)((int)this + 0x70) +
      *(float *)((int)this + 0x78) * *(float *)((int)this + 0x78) == 0.0)) {
    *(uint *)((int)this + 0x88) = uVar1 | 0x40000;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a259f0 @ 00a259f0 ////

undefined4 * __thiscall FUN_00a259f0(void *this,byte param_1)

{
  FUN_00a252f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a25a10 @ 00a25a10 ////

/* WARNING: Removing unreachable block (ram,0x00a25aaf) */

undefined4 __fastcall FUN_00a25a10(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  void *pvVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float10 fVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [12];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((*(byte *)(param_1 + 0x8a) & 1) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1c) + 0x50);
    *puVar1 = *puVar1 | 0x2000;
  }
  if ((*(uint *)(param_1 + 0x88) & 0x20000) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1c) + 0x50);
    *puVar1 = *puVar1 | 0x4000;
  }
  if ((**(int **)(param_1 + 0x28) != 0) && (*(int *)(**(int **)(param_1 + 0x28) + 8) == 7)) {
    uVar5 = *(uint *)(param_1 + 0x88) & 0xffff;
    if (uVar5 == 0) {
      iVar8 = *(int *)(param_1 + 0x240);
      if ((((iVar8 != 0) && (iVar2 = *(int *)(iVar8 + 0x40), (*(byte *)(iVar8 + 0x4c) & 8) != 0)) &&
          (iVar2 != 0)) && ((*(uint *)(*(int *)(param_1 + 0x1c) + 0x50) & 0xc00000) == 0)) {
        fVar10 = (float10)FUN_00429520();
        if ((float10)0.001 < fVar10) {
          local_64 = *(float *)(iVar2 + 0x3c);
          local_60 = *(float *)(iVar2 + 0x40);
          local_5c = *(float *)(iVar2 + 0x44);
          if (*(int *)(iVar2 + 0xd0) != 0) {
            pfVar7 = (float *)(*(int *)(iVar2 + 0xd0) + 0x90);
            pfVar9 = local_58;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *pfVar9 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              pfVar9 = pfVar9 + 1;
            }
            FUN_009aa670(local_58);
            FUN_0040b490(local_58,&local_64);
          }
          iVar8 = FUN_00ace790(*(int **)(param_1 + 0x240),0,&FS::CObject::RTTI_Type_Descriptor,
                               &FS::Character::RTTI_Type_Descriptor,0);
          if (iVar8 != 0) {
            local_5c = local_5c + 1.5;
          }
          iVar8 = FUN_00a25010(param_1);
          FUN_00973060(&local_28,(undefined4 *)(iVar8 + 0xe8));
          puVar12 = (undefined4 *)(param_1 + 0x11c);
          fVar3 = *(float *)(*(int *)(param_1 + 0x1c) + 0x1a4) * 0.001;
          FUN_00415910(puVar12,local_64 + *(float *)(param_1 + 0x244),0.0,fVar3);
          FUN_004137b0(puVar12,100.0);
          local_18 = *puVar12;
          puVar12 = (undefined4 *)(param_1 + 0x14c);
          FUN_00415910(puVar12,local_60 + *(float *)(param_1 + 0x248),0.0,fVar3);
          FUN_004137b0(puVar12,100.0);
          local_14 = *puVar12;
          puVar12 = (undefined4 *)(param_1 + 0x17c);
          FUN_00415910(puVar12,local_5c + *(float *)(param_1 + 0x24c),0.0,fVar3);
          FUN_004137b0(puVar12,100.0);
          local_10 = *puVar12;
          puVar12 = &local_28;
          pvVar6 = (void *)FUN_00a25010(param_1);
          FUN_00a3fd10(pvVar6,puVar12);
        }
      }
    }
    else {
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      local_58[2] = 0.0;
      local_58[3] = 0.0;
      local_58[4] = 0.0;
      local_58[5] = 0.0;
      local_58[6] = 0.0;
      local_58[7] = 0.0;
      local_58[8] = 0.0;
      local_58[9] = 0.0;
      if ((*(uint *)(param_1 + 0x88) & 0x80000) == 0) {
        FUN_004137b0((float *)(param_1 + 0x8c),100.0);
        local_58[1] = *(float *)(param_1 + 0x8c);
        FUN_004137b0((float *)(param_1 + 0xbc),100.0);
        local_58[2] = *(float *)(param_1 + 0xbc);
        FUN_004137b0((float *)(param_1 + 0xec),100.0);
        local_58[3] = *(float *)(param_1 + 0xec);
        FUN_004137b0((float *)(param_1 + 0x11c),100.0);
        local_58[4] = *(float *)(param_1 + 0x11c);
        FUN_004137b0((float *)(param_1 + 0x14c),100.0);
        local_58[5] = *(float *)(param_1 + 0x14c);
        FUN_004137b0((float *)(param_1 + 0x17c),100.0);
        local_58[6] = *(float *)(param_1 + 0x17c);
        FUN_004137b0((float *)(param_1 + 0x1ac),100.0);
        local_58[7] = *(float *)(param_1 + 0x1ac);
        FUN_004137b0((float *)(param_1 + 0x1dc),100.0);
        local_58[8] = *(float *)(param_1 + 0x1dc);
        FUN_004137b0((float *)(param_1 + 0x20c),100.0);
        local_58[9] = *(float *)(param_1 + 0x20c);
      }
      else {
        fVar3 = (float)*(int *)(param_1 + 0x3c) / (float)uVar5;
        if ((fVar3 <= 0.0) || (fVar3 < 1.0)) {
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
        }
        else {
          fVar3 = 1.0;
        }
        fVar4 = 1.0 - fVar3;
        local_58[1] = fVar3 * *(float *)(param_1 + 0x90) + fVar4 * *(float *)(param_1 + 0x8c);
        local_58[2] = fVar3 * *(float *)(param_1 + 0xc0) + fVar4 * *(float *)(param_1 + 0xbc);
        local_58[3] = fVar3 * *(float *)(param_1 + 0xf0) + fVar4 * *(float *)(param_1 + 0xec);
        local_58[4] = fVar3 * *(float *)(param_1 + 0x120) + fVar4 * *(float *)(param_1 + 0x11c);
        local_58[5] = fVar3 * *(float *)(param_1 + 0x150) + fVar4 * *(float *)(param_1 + 0x14c);
        local_58[6] = fVar3 * *(float *)(param_1 + 0x180) + fVar4 * *(float *)(param_1 + 0x17c);
        local_58[7] = fVar3 * *(float *)(param_1 + 0x1b0) + fVar4 * *(float *)(param_1 + 0x1ac);
        local_58[8] = fVar3 * *(float *)(param_1 + 0x1e0) + fVar4 * *(float *)(param_1 + 0x1dc);
        local_58[9] = fVar3 * *(float *)(param_1 + 0x210) + fVar4 * *(float *)(param_1 + 0x20c);
      }
      pvVar6 = (void *)**(int **)(param_1 + 0x28);
      if ((pvVar6 == (void *)0x0) || (*(int *)((int)pvVar6 + 8) != 7)) {
        pvVar6 = (void *)0x0;
      }
      FUN_00a3fd10(pvVar6,local_58);
    }
    if (*(int *)(param_1 + 0x254) != 0) {
      iVar8 = *(int *)(param_1 + 0x3c) * 100 + DAT_01050b60;
      if ((*(uint *)(param_1 + 0x88) & 0x400000) != 0) {
        uVar11 = FUN_009ac450();
        if ((int)uVar11 < iVar8) {
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x1000000;
          iVar8 = (int)uVar11;
        }
      }
      local_28 = 0;
      local_24 = 0.0;
      local_20 = 0;
      local_1c = 0;
      local_58[0] = 0.0;
      local_18 = 0;
      local_58[1] = 0.0;
      local_14 = 0;
      local_58[2] = 0.0;
      local_10 = 0;
      local_58[3] = 0.0;
      local_58[4] = 0.0;
      local_8 = 0;
      local_58[5] = 0.0;
      uStack_4 = 0;
      local_58[6] = 0.0;
      local_c = 0x3f9c61ab;
      local_58[7] = 0.0;
      FUN_009acc20(*(void **)(param_1 + 0x254),local_58,iVar8,'\x01');
      local_24 = local_58[0];
      local_20 = local_58[1];
      local_1c = local_58[2];
      local_18 = local_58[3];
      local_14 = local_58[4];
      local_10 = local_58[5];
      local_c = local_58[6];
      local_8 = 0x3e99999a;
      pvVar6 = (void *)**(int **)(param_1 + 0x28);
      if ((pvVar6 == (void *)0x0) || (*(int *)((int)pvVar6 + 8) != 7)) {
        pvVar6 = (void *)0x0;
      }
      FUN_00a3fd10(pvVar6,&local_28);
    }
    if (((*(int *)(param_1 + 0x34) == -1) || (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x34)))
       && ((*(byte *)(param_1 + 0x4b) & 1) == 0)) {
      return 1;
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfeffffff;
  }
  return 2;
}


//// FUNCTION FUN_00a25f80 @ 00a25f80 ////

/* WARNING: Removing unreachable block (ram,0x00a25fca) */

void __thiscall FUN_00a25f80(void *this,int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  void *this_00;
  float *pfVar10;
  float afStack_28 [9];
  float fStack_4;
  
  if ((param_1 != (int *)0x0) && (cVar6 = (**(code **)(*param_1 + 0x24))(), cVar6 == '\0')) {
    param_1 = (int *)0x0;
  }
  FUN_00a43b70(this,param_1,param_2);
  uVar7 = *(uint *)((int)this + 0x88) & 0xffff;
  if (uVar7 != 0) {
    fVar5 = (float)uVar7 * 100.0;
    afStack_28[1] = *(float *)((int)this + 100);
    afStack_28[2] = *(float *)((int)this + 0x68);
    afStack_28[3] = *(float *)((int)this + 0x6c);
    afStack_28[4] = *(float *)((int)this + 0x70);
    afStack_28[5] = *(float *)((int)this + 0x74);
    afStack_28[6] = *(float *)((int)this + 0x78);
    fStack_4 = *(float *)((int)this + 0x84);
    afStack_28[7] = *(float *)((int)this + 0x7c);
    afStack_28[8] = *(float *)((int)this + 0x80);
    if (((int *)**(int **)((int)this + 0x24) != (int *)0x0) &&
       (cVar6 = (**(code **)(*(int *)**(int **)((int)this + 0x24) + 0x58))(), cVar6 != '\0')) {
      pfVar9 = (float *)(**(int **)((int)this + 0x24) + 0x60);
      pfVar10 = afStack_28;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      }
    }
    uVar1 = *(undefined4 *)((int)this + 100);
    *(undefined4 *)((int)this + 0x90) = uVar1;
    *(undefined4 *)((int)this + 0x8c) = uVar1;
    *(undefined4 *)((int)this + 0xa8) = uVar1;
    *(undefined4 *)((int)this + 0xa4) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x8c),afStack_28[1],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0xc0) = uVar1;
    *(undefined4 *)((int)this + 0xbc) = uVar1;
    *(undefined4 *)((int)this + 0xd8) = uVar1;
    *(undefined4 *)((int)this + 0xd4) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
    FUN_00415910((undefined4 *)((int)this + 0xbc),afStack_28[2],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0xf0) = uVar1;
    *(undefined4 *)((int)this + 0xec) = uVar1;
    *(undefined4 *)((int)this + 0x108) = uVar1;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x118) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x10c) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
    FUN_00415910((undefined4 *)((int)this + 0xec),afStack_28[3],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)((int)this + 0x120) = uVar1;
    *(undefined4 *)((int)this + 0x11c) = uVar1;
    *(undefined4 *)((int)this + 0x138) = uVar1;
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined4 *)((int)this + 0x130) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x144) = 0;
    *(undefined4 *)((int)this + 300) = 0;
    *(undefined4 *)((int)this + 0x140) = 0;
    *(undefined4 *)((int)this + 0x128) = 0;
    *(undefined4 *)((int)this + 0x13c) = 0;
    *(undefined4 *)((int)this + 0x124) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x11c),afStack_28[4],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x74);
    *(undefined4 *)((int)this + 0x150) = uVar1;
    *(undefined4 *)((int)this + 0x14c) = uVar1;
    *(undefined4 *)((int)this + 0x168) = uVar1;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x160) = 0;
    *(undefined4 *)((int)this + 0x178) = 0;
    *(undefined4 *)((int)this + 0x174) = 0;
    *(undefined4 *)((int)this + 0x15c) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    *(undefined4 *)((int)this + 0x154) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x14c),afStack_28[5],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x78);
    *(undefined4 *)((int)this + 0x180) = uVar1;
    *(undefined4 *)((int)this + 0x17c) = uVar1;
    *(undefined4 *)((int)this + 0x198) = uVar1;
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 400) = 0;
    *(undefined4 *)((int)this + 0x1a8) = 0;
    *(undefined4 *)((int)this + 0x1a4) = 0;
    *(undefined4 *)((int)this + 0x18c) = 0;
    *(undefined4 *)((int)this + 0x1a0) = 0;
    *(undefined4 *)((int)this + 0x188) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0;
    *(undefined4 *)((int)this + 0x184) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x17c),afStack_28[6],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x1b0) = uVar1;
    *(undefined4 *)((int)this + 0x1ac) = uVar1;
    *(undefined4 *)((int)this + 0x1c8) = uVar1;
    *(undefined4 *)((int)this + 0x1c4) = 0;
    *(undefined4 *)((int)this + 0x1c0) = 0;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(undefined4 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1b4) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x1ac),afStack_28[7],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x1e0) = uVar1;
    *(undefined4 *)((int)this + 0x1dc) = uVar1;
    *(undefined4 *)((int)this + 0x1f8) = uVar1;
    *(undefined4 *)((int)this + 500) = 0;
    *(undefined4 *)((int)this + 0x1f0) = 0;
    *(undefined4 *)((int)this + 0x208) = 0;
    *(undefined4 *)((int)this + 0x204) = 0;
    *(undefined4 *)((int)this + 0x1ec) = 0;
    *(undefined4 *)((int)this + 0x200) = 0;
    *(undefined4 *)((int)this + 0x1e8) = 0;
    *(undefined4 *)((int)this + 0x1fc) = 0;
    *(undefined4 *)((int)this + 0x1e4) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x1dc),afStack_28[8],0.0,fVar5);
    uVar1 = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x210) = uVar1;
    *(undefined4 *)((int)this + 0x224) = 0;
    *(undefined4 *)((int)this + 0x20c) = uVar1;
    *(undefined4 *)((int)this + 0x220) = 0;
    *(undefined4 *)((int)this + 0x228) = uVar1;
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x234) = 0;
    *(undefined4 *)((int)this + 0x21c) = 0;
    *(undefined4 *)((int)this + 0x230) = 0;
    *(undefined4 *)((int)this + 0x218) = 0;
    *(undefined4 *)((int)this + 0x22c) = 0;
    *(undefined4 *)((int)this + 0x214) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x20c),fStack_4,0.0,fVar5);
  }
  this_00 = (void *)**(int **)((int)this + 0x28);
  if ((this_00 == (void *)0x0) || (*(int *)((int)this_00 + 8) != 7)) {
    this_00 = (void *)0x0;
  }
  if (*(int *)((int)this + 0x240) != 0) {
    uVar1 = *(undefined4 *)((int)this + 100);
    uVar2 = *(undefined4 *)((int)this + 0x70);
    uVar3 = *(undefined4 *)((int)this + 0x74);
    uVar4 = *(undefined4 *)((int)this + 0x78);
    *(undefined4 *)((int)this + 0x90) = uVar1;
    *(undefined4 *)((int)this + 0x8c) = uVar1;
    *(undefined4 *)((int)this + 0xa4) = 0;
    *(undefined4 *)((int)this + 0xa8) = uVar1;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0xc0) = uVar1;
    *(undefined4 *)((int)this + 0xd4) = 0;
    *(undefined4 *)((int)this + 0xbc) = uVar1;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd8) = uVar1;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0xf0) = uVar1;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0xec) = uVar1;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x108) = uVar1;
    *(undefined4 *)((int)this + 0x118) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x10c) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
    *(undefined4 *)((int)this + 0x120) = uVar2;
    *(undefined4 *)((int)this + 0x134) = 0;
    *(undefined4 *)((int)this + 0x130) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x144) = 0;
    *(undefined4 *)((int)this + 300) = 0;
    *(undefined4 *)((int)this + 0x140) = 0;
    *(undefined4 *)((int)this + 0x128) = 0;
    *(undefined4 *)((int)this + 0x13c) = 0;
    *(undefined4 *)((int)this + 0x124) = 0;
    *(undefined4 *)((int)this + 0x11c) = uVar2;
    *(undefined4 *)((int)this + 0x138) = uVar2;
    *(undefined4 *)((int)this + 0x150) = uVar3;
    *(undefined4 *)((int)this + 0x14c) = uVar3;
    *(undefined4 *)((int)this + 0x168) = uVar3;
    *(undefined4 *)((int)this + 0x164) = 0;
    *(undefined4 *)((int)this + 0x160) = 0;
    *(undefined4 *)((int)this + 0x178) = 0;
    *(undefined4 *)((int)this + 0x174) = 0;
    *(undefined4 *)((int)this + 0x15c) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)((int)this + 0x16c) = 0;
    *(undefined4 *)((int)this + 0x154) = 0;
    *(undefined4 *)((int)this + 0x180) = uVar4;
    *(undefined4 *)((int)this + 0x17c) = uVar4;
    *(undefined4 *)((int)this + 0x198) = uVar4;
    *(undefined4 *)((int)this + 0x194) = 0;
    *(undefined4 *)((int)this + 400) = 0;
    *(undefined4 *)((int)this + 0x1a8) = 0;
    *(undefined4 *)((int)this + 0x1a4) = 0;
    *(undefined4 *)((int)this + 0x18c) = 0;
    *(undefined4 *)((int)this + 0x1a0) = 0;
    *(undefined4 *)((int)this + 0x188) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0;
    *(undefined4 *)((int)this + 0x184) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x1b0) = uVar1;
    *(undefined4 *)((int)this + 0x1c4) = 0;
    *(undefined4 *)((int)this + 0x1ac) = uVar1;
    *(undefined4 *)((int)this + 0x1c0) = 0;
    *(undefined4 *)((int)this + 0x1c8) = uVar1;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    *(undefined4 *)((int)this + 0x1bc) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(undefined4 *)((int)this + 0x1b8) = 0;
    *(undefined4 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1b4) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x1e0) = uVar1;
    *(undefined4 *)((int)this + 500) = 0;
    *(undefined4 *)((int)this + 0x1dc) = uVar1;
    *(undefined4 *)((int)this + 0x1f0) = 0;
    *(undefined4 *)((int)this + 0x1f8) = uVar1;
    *(undefined4 *)((int)this + 0x208) = 0;
    *(undefined4 *)((int)this + 0x204) = 0;
    *(undefined4 *)((int)this + 0x1ec) = 0;
    *(undefined4 *)((int)this + 0x200) = 0;
    *(undefined4 *)((int)this + 0x1e8) = 0;
    *(undefined4 *)((int)this + 0x1fc) = 0;
    *(undefined4 *)((int)this + 0x1e4) = 0;
    uVar1 = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x210) = uVar1;
    *(undefined4 *)((int)this + 0x224) = 0;
    *(undefined4 *)((int)this + 0x20c) = uVar1;
    *(undefined4 *)((int)this + 0x220) = 0;
    *(undefined4 *)((int)this + 0x228) = uVar1;
    *(undefined4 *)((int)this + 0x238) = 0;
    *(undefined4 *)((int)this + 0x234) = 0;
    *(undefined4 *)((int)this + 0x21c) = 0;
    *(undefined4 *)((int)this + 0x230) = 0;
    *(undefined4 *)((int)this + 0x218) = 0;
    *(undefined4 *)((int)this + 0x22c) = 0;
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  if (*(void **)((int)this + 0x254) != (void *)0x0) {
    afStack_28[0] = 0.0;
    afStack_28[1] = 0.0;
    afStack_28[2] = 0.0;
    afStack_28[3] = 0.0;
    afStack_28[4] = 0.0;
    afStack_28[5] = 0.0;
    afStack_28[6] = 0.0;
    afStack_28[7] = 0.0;
    FUN_009acc20(*(void **)((int)this + 0x254),afStack_28,
                 *(int *)((int)this + 0x3c) * 100 + DAT_01050b60,'\x01');
    *(float *)((int)this + 100) = afStack_28[0];
    *(float *)((int)this + 0x68) = afStack_28[1];
    *(float *)((int)this + 0x6c) = afStack_28[2];
    *(float *)((int)this + 0x70) = afStack_28[3];
    *(float *)((int)this + 0x74) = afStack_28[4];
    *(float *)((int)this + 0x78) = afStack_28[5];
    *(float *)((int)this + 0x7c) = afStack_28[6];
    *(undefined4 *)((int)this + 0x80) = 0x3e99999a;
  }
  if (this_00 != (void *)0x0) {
    FUN_00a3fce0(this_00,(undefined4 *)((int)this + 0x60));
  }
  return;
}


//// FUNCTION FUN_00a266c0 @ 00a266c0 ////

void FUN_00a266c0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  DAT_010b956d = 0;
  iVar1 = DAT_0105eb44;
  do {
    if (iVar1 == 0) {
      return;
    }
    if (((*(uint *)(iVar1 + 0xe4) & 0x8000000) == 0) && (iVar2 = 0, 0 < *(int *)(iVar1 + 0x38))) {
      piVar3 = *(int **)(iVar1 + 0x3c);
      do {
        if ((*(uint *)(*piVar3 + 0x54) & 0x800) != 0) {
          *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) | 0x8000000;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x38));
    }
    iVar1 = *(int *)(iVar1 + 0x24);
  } while( true );
}


//// FUNCTION FUN_00a26770 @ 00a26770 ////

undefined4 * __fastcall FUN_00a26770(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = operator_new(0x30);
  puVar3 = puVar1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = 0x30;
  puVar1[1] = 0x13;
  puVar1[2] = 0;
  if (*(uint *)(param_1 + 0x1fc) < 0x20) {
    _sprintf((char *)(puVar1 + 3),*(char **)(param_1 + 0x1f8));
  }
  return puVar1;
}


//// FUNCTION FUN_00a26880 @ 00a26880 ////

void __fastcall FUN_00a26880(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0xffff) != 0) {
    do {
      pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x60) + iVar2 * 4) + 0x4c);
      *pbVar1 = *pbVar1 | 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(*(uint *)(param_1 + 0x48) & 0xffff));
  }
  for (uVar3 = 0;
      (iVar2 = *(int *)(param_1 + 0x3c), iVar2 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x40) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
    FUN_00a26880(*(int *)(iVar2 + uVar3 * 4));
  }
  return;
}


//// FUNCTION FUN_00a268e0 @ 00a268e0 ////

void __fastcall FUN_00a268e0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0xffff) != 0) {
    do {
      iVar2 = FUN_00a43b20(*(int *)(*(int *)(param_1 + 0x60) + iVar3 * 4));
      if (((iVar2 != 0) && ((*(uint *)(param_1 + 0x50) >> 0xd & 1) != 0)) &&
         ((*(uint *)(param_1 + 0x50) >> 0xe & 1) == 0)) {
        pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x60) + iVar3 * 4) + 0x4c);
        *pbVar1 = *pbVar1 & 0xfe;
        FUN_009d9820();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*(uint *)(param_1 + 0x48) & 0xffff));
  }
  for (uVar4 = 0;
      (iVar3 = *(int *)(param_1 + 0x3c), iVar3 != 0 &&
      (uVar4 < (uint)(*(int *)(param_1 + 0x40) - iVar3 >> 2))); uVar4 = uVar4 + 1) {
    FUN_00a268e0(*(int *)(iVar3 + uVar4 * 4));
  }
  return;
}


//// FUNCTION FUN_00a26a70 @ 00a26a70 ////

void __fastcall FUN_00a26a70(undefined1 *param_1)

{
  void *_Memory;
  undefined4 *_Memory_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
    }
    _Memory = *(void **)(param_1 + 8);
    if (iVar1 <= iVar2) break;
    _Memory_00 = *(undefined4 **)((int)_Memory + iVar2 * 4);
    if (_Memory_00 != (undefined4 *)0x0) {
      if (0x14 < (uint)_Memory_00[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*_Memory_00);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a26b10 @ 00a26b10 ////

undefined1 * __fastcall FUN_00a26b10(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}


//// FUNCTION FUN_00a26b40 @ 00a26b40 ////

void __fastcall FUN_00a26b40(char *param_1)

{
  char cVar1;
  char *_Source;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint _Count;
  uint _Size;
  void *pvVar6;
  int local_38;
  int *local_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa148;
  local_c = ExceptionList;
  if (*param_1 == '\0') {
    ExceptionList = &local_c;
    *param_1 = '\x01';
    local_28 = (void *)0x0;
    local_24 = 0;
    local_20 = 0;
    local_4 = 0;
    FUN_009ad7a0((int)local_2c);
    local_4 = 1;
    FUN_009ade80(local_2c,"Data\\Textures\\Miniatures\\",".dds",'\x01');
    local_38 = 0;
    while( true ) {
      if (local_28 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = local_24 - (int)local_28 >> 2;
      }
      if (iVar3 <= local_38) break;
      piVar4 = operator_new(0x20);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        _Source = *(char **)((int)local_28 + local_38 * 4);
        *piVar4 = (int)(piVar4 + 3);
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar4[1] = 0;
        piVar4[2] = 0x14;
        pcVar5 = _Source;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        _Count = (int)pcVar5 - (int)(_Source + 1);
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          piVar4[2] = _Size;
          pvVar6 = _malloc(_Size);
          *piVar4 = (int)pvVar6;
        }
        _strncpy((char *)*piVar4,_Source,_Count);
        piVar4[1] = _Count;
        *(undefined1 *)(_Count + *piVar4) = 0;
      }
      iVar3 = *(int *)(param_1 + 8);
      local_30 = piVar4;
      if ((iVar3 == 0) ||
         ((uint)(*(int *)(param_1 + 0x10) - iVar3 >> 2) <=
          (uint)(*(int *)(param_1 + 0xc) - iVar3 >> 2))) {
        FUN_00979760(param_1 + 4,*(undefined4 **)(param_1 + 0xc),1,&local_30);
        local_38 = local_38 + 1;
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0xc);
        *puVar2 = piVar4;
        *(undefined4 **)(param_1 + 0xc) = puVar2 + 1;
        local_38 = local_38 + 1;
      }
    }
    local_4 = 2;
    FUN_009ad7a0((int)local_2c);
    if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a26d00 @ 00a26d00 ////

void __fastcall FUN_00a26d00(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x54);
  while ((bVar1 & 8) == 0) {
    FUN_009d9830(1);
    FUN_009b3890();
    bVar1 = *(byte *)(param_1 + 0x54);
  }
  return;
}


//// FUNCTION FUN_00a26d40 @ 00a26d40 ////

void FUN_00a26d40(void)

{
  void *pvVar1;
  void *pvVar2;
  
  DAT_010b9584 = 1;
  pvVar1 = DAT_0105bdec;
  while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 0x40);
    if (((*(int *)((int)pvVar2 + 0x3c) == 0) && (*(int *)((int)pvVar2 + 0x30) == 1)) &&
       (*(int *)((int)pvVar2 + 0x38) + DAT_00e68f9c < DAT_0105be98)) {
      FUN_0099b400(pvVar2);
    }
  }
  DAT_010b9584 = 0;
  return;
}


//// FUNCTION FUN_00a26d90 @ 00a26d90 ////

void FUN_00a26d90(void)

{
  void *pvVar1;
  void *pvVar2;
  
  DAT_010b9584 = 1;
  pvVar2 = DAT_0105bdec;
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar2 + 0x40);
    if (*(int *)((int)pvVar2 + 0x3c) == 0) {
      if (*(int *)((int)pvVar2 + 0x30) != 1) {
        FUN_009d9820();
      }
      FUN_0099b400(pvVar2);
      pvVar2 = pvVar1;
    }
    else {
      FUN_009d9820();
      pvVar2 = pvVar1;
    }
  }
  DAT_010b9584 = 0;
  return;
}


//// FUNCTION FUN_00a26e10 @ 00a26e10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a26e10(byte param_1,char param_2)

{
  if (param_2 != '\0') {
    _DAT_010b9744 = _DAT_010b9744 | 1 << (param_1 & 0x1f);
    return;
  }
  _DAT_010b9744 = _DAT_010b9744 & ~(1 << (param_1 & 0x1f));
  return;
}


//// FUNCTION FUN_00a26e50 @ 00a26e50 ////

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a26e50(uint *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int local_c;
  
  if (((DAT_010b9744 & 1) != 0) &&
     (local_c = 0, puVar7 = param_1, puVar11 = param_1, iVar8 = param_3, 0.0 < _DAT_010b96f0 * 5.0))
  {
    do {
      while (iVar8 + -1 != 0) {
        puVar11 = puVar11 + param_2;
        uVar9 = puVar11[1 - param_2];
        uVar4 = *puVar7;
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        puVar10 = puVar7;
        puVar12 = puVar11;
        iVar2 = param_2;
        while (uVar3 = uVar9, iVar2 = iVar2 + -1, iVar2 != 0) {
          *puVar10 = (uVar4 >> 2 & 0x3fc000) + (uVar3 >> 2 & 0x3fc000) + (uVar5 >> 2 & 0x3fc000) +
                     (uVar6 >> 2 & 0x3fc000) & 0xffff00ff |
                     (uVar4 >> 2 & 0x3fc0) + (uVar3 >> 2 & 0x3fc0) + (uVar5 >> 2 & 0x3fc0) +
                     (uVar6 >> 2 & 0x3fc0) & 0xffffff00 |
                     (uVar6 & 0xff) + (uVar5 & 0xff) + (uVar3 & 0xff) + (uVar4 & 0xff) >> 2 |
                     0xff000000;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
          uVar9 = *puVar10;
          uVar4 = uVar3;
          uVar5 = uVar6;
          uVar6 = *puVar12;
        }
        puVar7 = puVar7 + param_2;
        iVar8 = iVar8 + -1;
      }
      local_c = local_c + 1;
      fVar1 = (float)local_c;
      if (local_c < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      puVar7 = param_1;
      puVar11 = param_1;
      iVar8 = param_3;
    } while (fVar1 < _DAT_010b96f0 * 5.0);
  }
  return;
}


//// FUNCTION FUN_00a27050 @ 00a27050 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a27050(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((_DAT_010b9744 >> 8 & 1) != 0) {
    for (iVar2 = param_2 * param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = (uint)*(byte *)((int)param_1 + 1);
      *param_1 = ((uVar1 | 0xffffff00) << 8 | (uVar1 * 9) / 10) << 8 | uVar1 * 3 >> 2;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a270b0 @ 00a270b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a270b0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((_DAT_010b9744 >> 1 & 1) != 0) {
    for (iVar2 = param_2 * param_3; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_1;
      uVar1 = (uVar1 >> 9 & 0x7f) + (uVar1 >> 0x12 & 0x3f) + (uVar1 >> 2 & 0x3f);
      *param_1 = ((uVar1 | 0xffffff00) << 8 | uVar1) << 8 | uVar1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a27110 @ 00a27110 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a27110(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((_DAT_010b9744 >> 9 & 1) != 0) {
    for (iVar3 = param_2 * param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_1;
      uVar2 = (uVar1 >> 8 & 0xff) + (uVar1 & 0xff) >> 1;
      *param_1 = ((uVar1 >> 0x10 & 0xff | 0xffffff00) << 8 | uVar2) << 8 | uVar2;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a27170 @ 00a27170 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a27170(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_4;
  
  if ((_DAT_010b9744 >> 0xd & 1) != 0) {
    uVar8 = FUN_00acd42c();
    iVar2 = (int)uVar8;
    uVar8 = FUN_00acd42c();
    local_4 = param_2 * param_3;
    uVar7 = -(int)uVar8 - 0x80;
    if ((int)uVar7 < 1) {
      iVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
      if (local_4 != 0) {
        iVar1 = iVar4 * 8;
        do {
          uVar7 = *param_1;
          *param_1 = (((uVar7 >> 0x10 & 0xff) * iVar2 & 0xfffffff8) + iVar1) * 0x2000 |
                     (((uVar7 >> 8 & 0xff) * iVar2 & 0xfffffff8) + iVar1) * 0x20 |
                     ((uVar7 & 0xff) * iVar2 >> 3) + iVar4 | 0xff000000;
          param_1 = param_1 + 1;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
    }
    else if (local_4 != 0) {
      do {
        uVar5 = *param_1;
        uVar3 = ((uVar5 >> 0x10 & 0xff) * iVar2 >> 3) - uVar7;
        if ((int)uVar3 < 0) {
          uVar3 = 0;
        }
        else if (0xff < (int)uVar3) {
          uVar3 = 0xff;
        }
        uVar6 = ((uVar5 >> 8 & 0xff) * iVar2 >> 3) - uVar7;
        if ((int)uVar6 < 0) {
          uVar6 = 0;
        }
        else if (0xff < (int)uVar6) {
          uVar6 = 0xff;
        }
        uVar5 = ((uVar5 & 0xff) * iVar2 >> 3) - uVar7;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if (0xff < (int)uVar5) {
          uVar5 = 0xff;
        }
        *param_1 = ((uVar3 | 0xffffff00) << 8 | uVar6) << 8 | uVar5;
        param_1 = param_1 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a272f0 @ 00a272f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a272f0(uint *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((_DAT_010b9744 >> 0xe & 1) == 0) {
    if (1.0 <= _DAT_010b95b0) {
      return;
    }
    fVar1 = _DAT_010b95b0 * 0.5;
  }
  else {
    fVar1 = _DAT_010b9728 * _DAT_010b95b0;
  }
  iVar5 = param_2 * param_3;
  if ((fVar1 - 0.5) * 510.0 <= 0.0) {
    uVar7 = FUN_00acd42c();
    iVar2 = (int)uVar7;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar4 = *param_1;
      uVar3 = (uVar4 & 0xff) + iVar2;
      uVar6 = (uVar4 >> 0x10 & 0xff) + iVar2;
      uVar4 = (uVar4 >> 8 & 0xff) + iVar2;
      *param_1 = ((((int)uVar6 < 0) - 1 & uVar6 | 0xffffff00) << 8 | ((int)uVar4 < 0) - 1 & uVar4)
                 << 8 | ((int)uVar3 < 0) - 1 & uVar3;
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar7 = FUN_00acd42c();
    iVar2 = (int)uVar7;
    if (iVar5 != 0) {
      do {
        uVar4 = *param_1;
        uVar3 = (uVar4 >> 0x10 & 0xff) + iVar2;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        uVar6 = (uVar4 >> 8 & 0xff) + iVar2;
        if (0xff < uVar6) {
          uVar6 = 0xff;
        }
        uVar4 = (uVar4 & 0xff) + iVar2;
        if (0xff < uVar4) {
          uVar4 = 0xff;
        }
        *param_1 = ((uVar3 | 0xffffff00) << 8 | uVar6) << 8 | uVar4;
        param_1 = param_1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a27430 @ 00a27430 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a27430(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((_DAT_010b9744 >> 3 & 1) != 0) {
    puVar1 = param_1 + param_2 * param_3;
    uVar6 = FUN_00acd42c();
    uVar3 = (uint)uVar6;
    if (6 < uVar3) {
      uVar3 = 6;
    }
    uVar5 = 0x3f >> (6U - (char)uVar3 & 0x1f);
    uVar3 = DAT_010b9764;
    uVar2 = DAT_010b9764;
    if (DAT_010b9760 != 0) {
      uVar3 = _rand();
      uVar2 = uVar3;
      DAT_010b9764 = uVar3;
    }
    for (; param_1 != puVar1; param_1 = param_1 + 1) {
      iVar4 = (uVar2 & uVar5) + (0xff - uVar5);
      uVar2 = *param_1;
      uVar3 = uVar3 * 0x41c64e6d + 0x3039;
      *param_1 = ((uVar2 >> 0x10 & 0xff) * iVar4 & 0xffffff00) << 8 |
                 (uVar2 >> 8 & 0xff) * iVar4 & 0xffffff00 | (uVar2 & 0xff) * iVar4 >> 8 | 0xff000000
      ;
      uVar2 = uVar3 >> 0x10;
    }
  }
  return;
}


//// FUNCTION FUN_00a27550 @ 00a27550 ////

/* WARNING: Removing unreachable block (ram,0x00a276af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a27550(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  uint local_8;
  int local_4;
  
  if ((_DAT_010b9744 >> 5 & 1) != 0) {
    if (DAT_010b973c == 0) {
      if (DAT_00e68fa8 == 0) {
        _rand();
        _rand();
        uVar5 = FUN_00acd42c();
        DAT_010b973c = (int)uVar5;
        DAT_010b96a8 = param_3 >> 2;
        _DAT_010b9740 = DAT_010b973c;
        uVar5 = FUN_00acd42c();
        DAT_00e68fa8 = (int)uVar5;
        _rand();
        uVar5 = FUN_00acd42c();
        DAT_00e68fa8 = DAT_00e68fa8 + (int)uVar5;
        return;
      }
      if (DAT_010b9760 != 0) {
        DAT_00e68fa8 = DAT_00e68fa8 + -1;
        return;
      }
    }
    else {
      puVar3 = param_1;
      puVar4 = DAT_010b9730;
      for (uVar1 = param_2 * param_3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      local_8 = 0;
      if (param_3 != 0) {
        local_4 = 0;
        do {
          puVar3 = (undefined4 *)(local_4 + (int)DAT_010b9730);
          puVar4 = param_1 + ((DAT_010b96a8 + local_8) % param_3) * param_2;
          for (uVar1 = param_2 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
            puVar4 = (undefined4 *)((int)puVar4 + 1);
          }
          local_8 = local_8 + 1;
          local_4 = local_4 + param_2 * 4;
        } while (local_8 < param_3);
      }
      puVar3 = param_1 + (DAT_010b96a8 % param_3) * param_2;
      for (uVar1 = param_2 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0x80808080;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = 0x80;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      puVar3 = param_1 + ((DAT_010b96a8 + 1) % param_3) * param_2;
      for (uVar1 = param_2 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0xa0a0a0a0;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = 0xa0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      puVar3 = param_1 + ((DAT_010b96a8 + 2) % param_3) * param_2;
      for (uVar1 = param_2 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0x80808080;
        puVar3 = puVar3 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar3 = 0x80;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      if (DAT_010b9760 != 0) {
        FUN_00acd42c();
        uVar5 = FUN_00acd42c();
        DAT_010b96a8 = (uint)uVar5;
        DAT_010b973c = DAT_010b973c + -1;
        if (extraout_ST0 < (float10)0.7) {
          DAT_010b973c = 0;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a277c0 @ 00a277c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a277c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  int local_8;
  
  if (((_DAT_010b9744 >> 7 & 1) != 0) && (DAT_010b9734 != 0)) {
    if (DAT_00e68fb0 == 0) {
      uVar8 = FUN_00acd42c();
      DAT_00e68fb0 = (int)uVar8;
      _rand();
      uVar8 = FUN_00acd42c();
      DAT_00e68fb0 = DAT_00e68fb0 + (int)uVar8;
      if (DAT_010b9760 == 0) {
        DAT_00e68fb0 = DAT_00e68fb0 + 1;
      }
      uVar1 = _rand();
      uVar1 = uVar1 & 0x80000007;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
      }
      local_8 = (&DAT_010b95c8)[uVar1 * 2];
      pbVar6 = (byte *)(&DAT_010b95cc)[uVar1 * 2];
      _rand();
      uVar8 = FUN_00acd42c();
      uVar1 = (uint)uVar8;
      if (param_2 - 0x40U <= (uint)uVar8) {
        uVar1 = param_2 - 0x40U;
      }
      _rand();
      uVar8 = FUN_00acd42c();
      uVar2 = (uint)uVar8;
      if ((uint)(param_3 - local_8) <= (uint)uVar8) {
        uVar2 = param_3 - local_8;
      }
      if (local_8 != 0) {
        puVar3 = (uint *)(param_1 + (uVar2 * param_2 + uVar1) * 4);
        do {
          iVar7 = 0x10;
          puVar4 = puVar3;
          do {
            uVar1 = *puVar4;
            uVar5 = (uint)*pbVar6;
            uVar2 = puVar4[1];
            *puVar4 = (((uVar1 >> 0x10 & 0xff) * uVar5 & 0xffffff00) << 8 |
                       (uVar1 >> 8 & 0xff) * uVar5 | uVar1 & 0xff0000ff) & 0xffffff00 |
                      (uVar1 & 0xff) * uVar5 >> 8;
            uVar5 = (uint)pbVar6[1];
            uVar1 = puVar4[2];
            puVar4[1] = (((uVar2 >> 0x10 & 0xff) * uVar5 & 0xffffff00) << 8 |
                         (uVar2 >> 8 & 0xff) * uVar5 | uVar2 & 0xff0000ff) & 0xffffff00 |
                        (uVar2 & 0xff) * uVar5 >> 8;
            uVar5 = (uint)pbVar6[2];
            uVar2 = puVar4[3];
            puVar4[2] = (((uVar1 >> 0x10 & 0xff) * uVar5 & 0xffffff00) << 8 |
                         (uVar1 >> 8 & 0xff) * uVar5 | uVar1 & 0xff0000ff) & 0xffffff00 |
                        (uVar1 & 0xff) * uVar5 >> 8;
            uVar1 = (uint)pbVar6[3];
            pbVar6 = pbVar6 + 4;
            puVar4[3] = (((uVar2 >> 0x10 & 0xff) * uVar1 & 0xffffff00) << 8 |
                         (uVar2 >> 8 & 0xff) * uVar1 | uVar2 & 0xff0000ff) & 0xffffff00 |
                        (uVar2 & 0xff) * uVar1 >> 8;
            puVar4 = puVar4 + 4;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          puVar3 = puVar3 + param_2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
    }
    else if (DAT_010b9760 != 0) {
      DAT_00e68fb0 = DAT_00e68fb0 + -1;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a27a90 @ 00a27a90 ////

/* WARNING: Removing unreachable block (ram,0x00a27b0a) */
/* WARNING: Removing unreachable block (ram,0x00a27ad9) */
/* WARNING: Removing unreachable block (ram,0x00a27b30) */

void __cdecl FUN_00a27a90(uint *param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_4 != 1.0) {
    for (iVar1 = param_2 * param_3; iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar2 = FUN_00acd42c();
      uVar3 = FUN_00acd42c();
      uVar4 = FUN_00acd42c();
      *param_1 = (((uint)uVar2 | 0xffffff00) << 8 | (uint)uVar3) << 8 | (uint)uVar4;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a27b60 @ 00a27b60 ////

void FUN_00a27b60(void)

{
  void *pvVar1;
  int iVar2;
  
  DAT_010b9750 = 0;
  if (DAT_010b9730 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b9730);
  }
  if (DAT_010b9738 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b9738);
  }
  if (DAT_010b9734 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b9734);
  }
  if (((DAT_010b95bc != (void *)0x0) && (DAT_010b95b8 != 0)) && (DAT_010b95b4 != 0)) {
    iVar2 = 0;
    if (0 < DAT_010b974c) {
      do {
        pvVar1 = *(void **)((int)DAT_010b95bc + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        pvVar1 = *(void **)(DAT_010b95b8 + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        pvVar1 = *(void **)(DAT_010b95b4 + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_010b974c);
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b95bc);
  }
  return;
}


//// FUNCTION FUN_00a27c70 @ 00a27c70 ////

void __cdecl FUN_00a27c70(byte *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_8;
  
  fVar1 = (float)*param_1 * 0.003921569;
  fVar2 = (float)param_1[1] * 0.003921569;
  fVar3 = (float)param_1[2] * 0.003921569;
  if (((fVar2 < fVar1) || (fVar4 = fVar2, fVar2 <= fVar3)) && (fVar4 = fVar3, fVar3 < fVar1)) {
    fVar4 = fVar1;
  }
  if (((fVar1 < fVar2) || (fVar6 = fVar2, fVar3 <= fVar2)) && (fVar6 = fVar3, fVar1 < fVar3)) {
    fVar6 = fVar1;
  }
  local_8 = fVar6 + fVar4;
  fVar7 = local_8 * 0.5;
  if (fVar4 == fVar6) {
    local_8 = 0.0;
    fVar5 = -1.0;
  }
  else {
    fVar5 = fVar4 - fVar6;
    if (fVar7 < 0.5 == (fVar7 == 0.5)) {
      local_8 = (2.0 - fVar4) - fVar6;
    }
    local_8 = fVar5 / local_8;
    if (fVar1 == fVar4) {
      fVar5 = (fVar2 - fVar3) / fVar5;
    }
    else if (fVar2 == fVar4) {
      fVar5 = (fVar3 - fVar1) / fVar5 + 2.0;
    }
    else {
      fVar5 = (fVar1 - fVar2) / fVar5 + 4.0;
    }
    fVar5 = fVar5 * 60.0;
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 360.0;
    }
  }
  *param_2 = fVar5;
  param_2[1] = fVar7;
  param_2[2] = local_8;
  return;
}


//// FUNCTION FUN_00a27e30 @ 00a27e30 ////

float10 __cdecl FUN_00a27e30(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  if (fVar1 <= (float10)360.0) {
    if (fVar1 < (float10)0.0) {
      fVar1 = fVar1 + (float10)360.0;
    }
  }
  else {
    fVar1 = fVar1 - (float10)360.0;
  }
  if (fVar1 < (float10)60.0) {
    return ((float10)param_2 - (float10)param_1) * fVar1 * (float10)0.016666668 + (float10)param_1;
  }
  if (fVar1 < (float10)180.0) {
    return (float10)param_2;
  }
  if (fVar1 < (float10)240.0) {
    return ((float10)240.0 - fVar1) * ((float10)param_2 - (float10)param_1) * (float10)0.016666668 +
           (float10)param_1;
  }
  return (float10)param_1;
}


//// FUNCTION FUN_00a27ed0 @ 00a27ed0 ////

void __cdecl FUN_00a27ed0(float *param_1,undefined1 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  float extraout_EDX_00;
  ulonglong uVar5;
  
  fVar2 = param_1[1];
  fVar1 = param_1[2];
  fVar3 = *param_1;
  if (fVar2 < 0.5 == (fVar2 == 0.5)) {
    fVar4 = (fVar2 + fVar1) - fVar1 * fVar2;
  }
  else {
    fVar4 = (fVar1 + 1.0) * fVar2;
  }
  if (fVar1 != 0.0) {
    FUN_00a27e30((fVar2 + fVar2) - fVar4,fVar4,fVar3 + 120.0);
    FUN_00a27e30(extraout_EDX,extraout_ECX,fVar3);
    FUN_00a27e30(extraout_EDX_00,extraout_ECX_00,fVar3 - 120.0);
  }
  uVar5 = FUN_00acd42c();
  *param_2 = (char)uVar5;
  uVar5 = FUN_00acd42c();
  param_2[1] = (char)uVar5;
  uVar5 = FUN_00acd42c();
  param_2[2] = (char)uVar5;
  return;
}


//// FUNCTION FUN_00a28000 @ 00a28000 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00a28000(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((DAT_010b9750 != '\0') && ((_DAT_010b9744 >> 0xf & 1) != 0)) {
    iVar1 = _rand();
    uVar3 = DAT_010b9754 + -4 + iVar1 % 9;
    DAT_010b9754 = uVar3;
    uVar4 = FUN_00acd42c();
    uVar2 = 0xf - (int)uVar4;
    if (uVar3 < uVar2) {
      uVar3 = uVar2;
      DAT_010b9754 = uVar2;
    }
    if (0xf < uVar3) {
      uVar3 = 0xf;
      DAT_010b9754 = 0xf;
    }
    return uVar3;
  }
  return DAT_010b9758;
}


//// FUNCTION FUN_00a28070 @ 00a28070 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a28070(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((DAT_010b9750 != '\0') && ((_DAT_010b9744 >> 0xc & 1) != 0)) {
    local_18 = *param_2 - *param_1;
    local_14 = param_2[1] - param_1[1];
    local_10 = param_2[2] - param_1[2];
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    FUN_00412e20(&local_c);
    local_20 = 0.0;
    local_24 = 0.0;
    local_1c = 1.0;
    FUN_00412fd0(&local_18,&local_c,&local_24);
    FUN_00412e20(&local_18);
    FUN_00412fd0(&local_24,&local_18,&local_c);
    if (DAT_010b9760 != 0) {
      iVar6 = _rand();
      iVar6 = DAT_010b975c + iVar6 % 100;
      fVar7 = (float10)iVar6;
      if (iVar6 < 0) {
        fVar7 = fVar7 + (float10)4.2949673e+09;
      }
      fVar8 = (float10)fsin((float10)0.005 * fVar7);
      _DAT_010b9770 = (float)(fVar8 * (float10)0.005);
      fVar7 = (float10)fsin(fVar7 * (float10)0.007);
      _DAT_010b9774 = (float)(fVar7 * (float10)0.005);
    }
    fVar3 = local_14 * _DAT_010b9770;
    fVar1 = local_10 * _DAT_010b9770;
    fVar2 = _DAT_010b9770 * local_18 + *param_1;
    *param_1 = fVar2;
    fVar3 = fVar3 + param_1[1];
    param_1[1] = fVar3;
    fVar1 = fVar1 + param_1[2];
    param_1[2] = fVar1;
    fVar4 = local_20 * _DAT_010b9774;
    fVar5 = _DAT_010b9774 * local_1c;
    *param_1 = fVar2 + _DAT_010b9774 * local_24;
    param_1[1] = fVar3 + fVar4;
    param_1[2] = fVar1 + fVar5;
    local_14 = local_14 * _DAT_010b9770;
    local_10 = local_10 * _DAT_010b9770;
    fVar1 = *param_2 - _DAT_010b9770 * local_18;
    *param_2 = fVar1;
    local_14 = param_2[1] - local_14;
    param_2[1] = local_14;
    local_10 = param_2[2] - local_10;
    param_2[2] = local_10;
    local_20 = local_20 * _DAT_010b9774;
    local_1c = _DAT_010b9774 * local_1c;
    *param_2 = fVar1 - _DAT_010b9774 * local_24;
    param_2[1] = local_14 - local_20;
    param_2[2] = local_10 - local_1c;
  }
  return;
}


//// FUNCTION FUN_00a28280 @ 00a28280 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a28280(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (((_DAT_010b9744 >> 0xb & 1) != 0) && (DAT_010b9738 != 0)) {
    if (DAT_00e68fb4 == 0) {
      uVar7 = FUN_00acd42c();
      DAT_00e68fb4 = (int)uVar7;
      _rand();
      uVar7 = FUN_00acd42c();
      DAT_00e68fb4 = DAT_00e68fb4 + (0x28 - (int)uVar7);
      uVar2 = _rand();
      uVar2 = uVar2 & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      iVar3 = uVar2 * 0x100 + DAT_010b9738;
      iVar5 = param_2 * 4 + -0x12;
      iVar6 = 0x10;
      do {
        iVar4 = 0;
        do {
          cVar1 = *(char *)(iVar3 + iVar4);
          if (cVar1 != '\0') {
            *(uint *)(param_1 + (iVar5 + iVar4) * 4) = (uint)CONCAT21(CONCAT11(cVar1,cVar1),cVar1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x10);
        iVar3 = iVar3 + 0x10;
        iVar5 = iVar5 + param_2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    if (DAT_010b9760 != 0) {
      DAT_00e68fb4 = DAT_00e68fb4 + -1;
    }
  }
  return;
}


//// FUNCTION FUN_00a28390 @ 00a28390 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a28390(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = DAT_00e68fc4;
  if ((_DAT_010b9744 >> 10 & 1) != 0) {
    uVar7 = DAT_00e68fc0;
    uVar5 = DAT_00e68fc0;
    for (iVar2 = param_2 * param_3; DAT_00e68fc0 = uVar5, iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar4 = *param_1;
      uVar3 = uVar4 >> 0x10 & 0xff;
      uVar6 = uVar4 >> 8 & 0xff;
      uVar4 = uVar4 & 0xff;
      if (((DAT_00e68fbc < uVar3) && (uVar6 < uVar3 - iVar1)) && (uVar4 < uVar3 - iVar1)) {
LAB_00a283fd:
        *param_1 = ((uVar3 | 0xffffff00) << 8 | uVar6) << 8 | uVar4;
      }
      else if (((uVar3 < uVar6 - iVar1) && (uVar7 = uVar5, uVar5 < uVar6)) &&
              (uVar4 < uVar6 - iVar1)) {
        *param_1 = ((uVar3 | 0xffffff00) << 8 | uVar6) << 8 | uVar4;
      }
      else {
        if (((((uVar3 < uVar4 - iVar1) && (uVar6 < uVar4 - iVar1)) && (uVar7 < uVar4)) ||
            (((uVar7 < uVar3 && (uVar6 < DAT_00e68fb8)) && (DAT_00e68fb8 < uVar4)))) ||
           (((uVar3 < DAT_00e68fb8 && (uVar7 < uVar6)) && (uVar7 < uVar4)))) goto LAB_00a283fd;
        uVar5 = (uVar4 >> 2) + (uVar6 >> 1) + (uVar3 >> 2);
        *param_1 = ((uVar5 | 0xffffff00) << 8 | uVar5) << 8 | uVar5;
      }
      param_1 = param_1 + 1;
      uVar5 = DAT_00e68fc0;
    }
  }
  return;
}


//// FUNCTION FUN_00a284b0 @ 00a284b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a284b0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  float10 fVar10;
  float10 extraout_ST0;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *local_18;
  uint local_14;
  uint local_10;
  int local_8;
  
  if ((_DAT_010b9744 >> 2 & 1) != 0) {
    fVar10 = (float10)DAT_010b975c;
    if (DAT_010b975c < 0) {
      fVar10 = fVar10 + (float10)4.2949673e+09;
    }
    fsin((float10)0.014925373 * fVar10);
    uVar11 = FUN_00acd42c();
    fsin(extraout_ST0 * (float10)0.01);
    uVar12 = FUN_00acd42c();
    uVar8 = ((int)uVar12 - (int)uVar11) + param_2 / 5;
    uVar11 = FUN_00acd42c();
    iVar4 = (int)uVar11;
    if (param_3 != 0) {
      uVar7 = param_2 - uVar8;
      local_18 = param_1 + uVar7;
      local_8 = param_3;
      do {
        uVar2 = uVar7;
        puVar3 = local_18;
        if (uVar8 != 0) {
          local_14 = 0;
          puVar9 = param_1;
          local_10 = uVar8;
          do {
            iVar5 = iVar4 - local_14 / uVar8;
            uVar1 = *puVar9;
            uVar6 = (uint)(iVar5 * iVar5) >> 8;
            iVar5 = 0xff - uVar6;
            *puVar9 = (((uVar1 >> 0x10 & 0xff) * iVar5 & 0xffffff00) + uVar6 * 0x100) * 0x100 |
                      ((uVar1 >> 8 & 0xff) * iVar5 & 0xffffff00) + uVar6 * 0x100 |
                      ((uVar1 & 0xff) * iVar5 >> 8) + uVar6 | 0xff000000;
            puVar9 = puVar9 + 1;
            local_14 = local_14 + iVar4;
            local_10 = local_10 - 1;
          } while (local_10 != 0);
        }
        for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
          iVar5 = iVar4 - ((param_2 - uVar2) * iVar4) / uVar8;
          uVar1 = *puVar3;
          uVar6 = (uint)(iVar5 * iVar5) >> 8;
          iVar5 = 0xff - uVar6;
          *puVar3 = (((uVar1 >> 0x10 & 0xff) * iVar5 & 0xffffff00) + uVar6 * 0x100) * 0x100 |
                    ((uVar1 >> 8 & 0xff) * iVar5 & 0xffffff00) + uVar6 * 0x100 |
                    ((uVar1 & 0xff) * iVar5 >> 8) + uVar6 | 0xff000000;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + param_2;
        local_18 = local_18 + param_2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00a286e0 @ 00a286e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a286e0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_10;
  int local_c;
  int local_8;
  
  if ((_DAT_010b9744 >> 4 & 1) != 0) {
    if (DAT_010b9760 != 0) {
      DAT_010b9768 = _rand();
    }
    DAT_010b976c = DAT_010b9768;
    puVar6 = &DAT_010b96ac;
    local_8 = 5;
    iVar3 = DAT_010b9768;
    iVar5 = DAT_010b9760;
    do {
      if (puVar6[1] != 0) {
        if (iVar5 != 0) {
          _rand();
          uVar7 = FUN_00acd42c();
          uVar2 = (int)uVar7 + *puVar6;
          *puVar6 = uVar2;
          uVar4 = param_2 - 4U;
          if (uVar2 < param_2 - 4U) {
            uVar4 = uVar2;
          }
          *puVar6 = uVar4;
          *puVar6 = -(uint)(uVar4 != 0) & uVar4;
          iVar3 = DAT_010b976c;
        }
        if (param_3 != 0) {
          local_10 = 0;
          local_c = param_3;
          do {
            uVar4 = *puVar6;
            if (uVar4 < puVar6[2] + uVar4) {
              iVar5 = param_1 + 1 + (local_10 + uVar4) * 4;
              DAT_010b976c = iVar3;
              do {
                DAT_010b976c = DAT_010b976c * 0x41c64e6d + 0x3039;
                uVar7 = FUN_00acd42c();
                bVar1 = *(byte *)(iVar5 + 2);
                uVar8 = FUN_00acd42c();
                uVar9 = FUN_00acd42c();
                *(uint *)(iVar5 + -1) =
                     (((uint)uVar7 | (uint)bVar1 << 8) << 8 | (uint)uVar8) << 8 | (uint)uVar9;
                uVar4 = uVar4 + 1;
                iVar5 = iVar5 + 4;
                iVar3 = DAT_010b976c;
              } while (uVar4 < puVar6[2] + *puVar6);
            }
            local_10 = local_10 + param_2;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        iVar5 = DAT_010b9760;
        if (DAT_010b9760 != 0) {
          puVar6[1] = puVar6[1] - 1;
        }
      }
      puVar6 = puVar6 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if ((iVar5 != 0) && (iVar5 = _rand(), (float)iVar5 * 3.051851e-05 < _DAT_010b9700)) {
      iVar5 = 0;
      uVar4 = 0;
      while (*(int *)((int)&DAT_010b96b0 + uVar4) != 0) {
        uVar4 = uVar4 + 0xc;
        iVar5 = iVar5 + 1;
        if (0x3b < uVar4) {
          return;
        }
      }
      _rand();
      uVar7 = FUN_00acd42c();
      (&DAT_010b96ac)[iVar5 * 3] = (int)uVar7 + -4;
      _rand();
      uVar7 = FUN_00acd42c();
      iVar3 = (int)uVar7;
      (&DAT_010b96b4)[iVar5 * 3] = iVar3;
      if (3 < iVar3) {
        iVar3 = 4;
      }
      (&DAT_010b96b4)[iVar5 * 3] = iVar3;
      _rand();
      uVar7 = FUN_00acd42c();
      (&DAT_010b96b0)[iVar5 * 3] = (int)uVar7;
    }
  }
  return;
}


//// FUNCTION FUN_00a28990 @ 00a28990 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a28990(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_10;
  int local_8;
  
  if ((_DAT_010b9744 >> 6 & 1) != 0) {
    piVar7 = &DAT_010b960c;
    local_8 = 5;
    do {
      if (piVar7[-1] != 0) {
        if (DAT_010b9760 != 0) {
          iVar2 = _rand();
          piVar7[6] = (int)(((float)iVar2 * 3.051851e-05 * 4.0 + (float)piVar7[6]) - 2.0);
        }
        iVar2 = *piVar7;
        iVar5 = piVar7[1];
        local_10 = 0;
        if (0 < piVar7[5]) {
          do {
            if ((char)piVar7[4] == '\0') {
              uVar8 = FUN_00acd42c();
              iVar2 = iVar2 + (int)uVar8;
              fsin((float10)local_10 * (float10)0.017453294);
              uVar8 = FUN_00acd42c();
              iVar5 = (int)uVar8;
              iVar3 = piVar7[1];
            }
            else {
              fsin((float10)local_10 * (float10)0.017453294);
              uVar8 = FUN_00acd42c();
              iVar2 = (int)uVar8 + *piVar7;
              uVar8 = FUN_00acd42c();
              iVar3 = (int)uVar8;
            }
            iVar5 = iVar5 + iVar3;
            if ((((-1 < iVar2) && (iVar2 < param_2)) && (-1 < iVar5)) && (iVar5 < param_3)) {
              uVar8 = FUN_00acd42c();
              uVar9 = FUN_00acd42c();
              uVar10 = FUN_00acd42c();
              *(uint *)(param_1 + (iVar5 * param_2 + iVar2) * 4) =
                   (((uint)uVar8 | 0xffffff00) << 8 | (uint)uVar9) << 8 | (uint)uVar10;
            }
            local_10 = local_10 + 1;
          } while (local_10 < piVar7[5]);
        }
        if (DAT_010b9760 != 0) {
          piVar7[-1] = piVar7[-1] + -1;
        }
      }
      piVar7 = piVar7 + 8;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (DAT_00e68fac == 0) {
      uVar6 = 0;
      piVar7 = &DAT_010b9608;
      do {
        if (*piVar7 == 0) {
          _rand();
          uVar8 = FUN_00acd42c();
          (&DAT_010b960c)[uVar6 * 8] = (int)uVar8;
          _rand();
          uVar8 = FUN_00acd42c();
          (&DAT_010b9610)[uVar6 * 8] = (int)uVar8;
          uVar4 = _rand();
          if ((uVar4 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          else {
            uVar1 = 0xbf800000;
          }
          (&DAT_010b9614)[uVar6 * 8] = uVar1;
          uVar4 = _rand();
          if ((uVar4 & 1) == 0) {
            uVar1 = 0x3f800000;
          }
          else {
            uVar1 = 0xbf800000;
          }
          (&DAT_010b9618)[uVar6 * 8] = uVar1;
          _rand();
          uVar8 = FUN_00acd42c();
          (&DAT_010b9620)[uVar6 * 8] = 0x1e - (int)uVar8;
          _rand();
          uVar8 = FUN_00acd42c();
          (&DAT_010b9608)[uVar6 * 8] = (int)uVar8;
          (&DAT_010b9624)[uVar6 * 8] = (float)(int)(&DAT_010b9620)[uVar6 * 8] * 0.1 + 15.0;
          iVar2 = _rand();
          (&DAT_010b961c)[uVar6 * 0x20] = (byte)iVar2 & 1;
          uVar8 = FUN_00acd42c();
          DAT_00e68fac = (int)uVar8;
          _rand();
          uVar8 = FUN_00acd42c();
          DAT_00e68fac = DAT_00e68fac + (int)uVar8;
          return;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 8;
      } while (uVar6 < 5);
      return;
    }
    if (DAT_010b9760 != 0) {
      DAT_00e68fac = DAT_00e68fac + -1;
    }
  }
  return;
}


//// FUNCTION FUN_00a28d10 @ 00a28d10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a28d10(uint *param_1,uint param_2,uint param_3,int param_4)

{
  DAT_010b975c = DAT_010b975c + param_4;
  DAT_010b9760 = param_4;
  FUN_00a28280((int)param_1,param_2);
  FUN_00a26e50(param_1,param_2,param_3);
  FUN_00a27050(param_1,param_2,param_3);
  FUN_00a270b0(param_1,param_2,param_3);
  FUN_00a27110(param_1,param_2,param_3);
  FUN_00a28390(param_1,param_2,param_3);
  FUN_00a272f0(param_1,param_2,param_3);
  FUN_00a27170(param_1,param_2,param_3);
  FUN_00a284b0(param_1,param_2,param_3);
  FUN_00a27430(param_1,param_2,param_3);
  FUN_00a286e0((int)param_1,param_2,param_3);
  FUN_00a27550(param_1,param_2,param_3);
  FUN_00a28990((int)param_1,param_2,param_3);
  FUN_00a277c0((int)param_1,param_2,param_3);
  _DAT_010b95b0 = 0x3f800000;
  return;
}


//// FUNCTION FUN_00a28dc0 @ 00a28dc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00a28dc0(float param_1,int param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa168;
  local_c = ExceptionList;
  puVar7 = &DAT_010b96ac;
  ExceptionList = &local_c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  _DAT_010b95ac = param_2;
  _DAT_010b95a8 = param_3;
  if (DAT_010b9730 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b9730);
  }
  DAT_010b9730 = _malloc(param_2 * param_3 * 4);
  puVar7 = &DAT_010b9608;
  for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x40;
  local_2c = _malloc(0x40);
  _strncpy(local_2c,"data/textures/ui/postproc/choles.raw",0x24);
  local_28 = 0x24;
  local_2c[0x24] = '\0';
  local_4 = 0;
  uVar1 = FUN_009d3720(&local_2c);
  DAT_010b9738 = _malloc(uVar1);
  if (DAT_010b9738 != (undefined4 *)0x0) {
    FUN_009d3ca0(&local_2c,DAT_010b9738,uVar1,(undefined1 *)0x0);
  }
  if (local_24 < 0x27) {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_24 = 0x40;
    local_2c = _malloc(0x40);
  }
  _strncpy(local_2c,"data/textures/ui/postproc/blotches.raw",0x26);
  local_28 = 0x26;
  local_2c[0x26] = '\0';
  uVar1 = FUN_009d3720(&local_2c);
  DAT_010b9734 = _malloc(uVar1);
  if (DAT_010b9734 != (char *)0x0) {
    sVar2 = FUN_009d3ca0(&local_2c,(undefined4 *)DAT_010b9734,uVar1,(undefined1 *)0x0);
    if (sVar2 != 0) {
      iVar3 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 0x3fU)) >> 6;
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = &DAT_010b95cc;
        pcVar5 = DAT_010b9734;
        pcVar8 = DAT_010b9734;
        do {
          if (*pcVar5 == '\0') {
            piVar4[-1] = iVar6;
            *piVar4 = (int)pcVar8;
            piVar4 = piVar4 + 2;
            pcVar8 = pcVar5 + 0x40;
            iVar6 = 0;
          }
          else {
            iVar6 = iVar6 + 1;
          }
          pcVar5 = pcVar5 + 0x40;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  uVar9 = FUN_00acd42c();
  DAT_010b9754 = (undefined4)uVar9;
  _DAT_010b96e8 = 20.0 / param_1;
  DAT_010b9758 = DAT_010b9754;
  DAT_010b95bc = 0;
  DAT_010b95b8 = 0;
  DAT_010b95b4 = 0;
  DAT_010b9750 = 1;
  _DAT_010b9774 = 0;
  _DAT_010b9770 = 0;
  _DAT_010b95b0 = 0x3f800000;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar9 >> 8),1);
}


//// FUNCTION FUN_00a290b0 @ 00a290b0 ////

void __cdecl FUN_00a290b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a29230 @ 00a29230 ////

void __cdecl FUN_00a29230(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a29300 @ 00a29300 ////

void * FUN_00a29300(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a29340 @ 00a29340 ////

void __fastcall FUN_00a29340(int param_1)

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


//// FUNCTION FUN_00a29370 @ 00a29370 ////

undefined4 * FUN_00a29370(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a293a0 @ 00a293a0 ////

void __cdecl FUN_00a293a0(int param_1,int param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (-1 < param_1) {
    if (DAT_010b9780 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010b9784 - DAT_010b9780 >> 2;
    }
    if ((param_1 < iVar1) && (DAT_010b9778 != 0)) {
      iVar1 = *(int *)(param_1 * 4 + DAT_010b9780);
      *(int *)(iVar1 + 8) = param_2;
      iVar2 = 0;
      if (*(byte *)(DAT_010b9778 + 0x4d) != 0) {
        piVar3 = *(int **)(DAT_010b9778 + 0x5c);
        while (*(int *)(*piVar3 + 200) != *(int *)(iVar1 + 4)) {
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
          if ((int)(uint)*(byte *)(DAT_010b9778 + 0x4d) <= iVar2) {
            return;
          }
        }
        this = *(void **)(*piVar3 + 0x40);
        if ((this != (void *)0x0) && (*(int *)((int)this + 0x78) != 0)) {
          FUN_00980490(this,**(int **)(param_1 * 4 + DAT_010b9780),param_2);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a29440 @ 00a29440 ////

void __cdecl FUN_00a29440(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_010b9778 = param_1;
  iVar3 = 0;
  iVar2 = DAT_010b9780;
  while( true ) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_010b9784 - iVar2 >> 2;
    }
    if (iVar1 <= iVar3) break;
    iVar1 = *(int *)(iVar2 + iVar3 * 4);
    if (*(int *)(iVar1 + 8) != -1) {
      FUN_00a293a0(iVar3,*(int *)(iVar1 + 8));
      iVar2 = DAT_010b9780;
    }
    iVar3 = iVar3 + 1;
  }
  if (param_1 != (void *)0x0) {
    FUN_00a00f10(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00a294a0 @ 00a294a0 ////

int __cdecl FUN_00a294a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (DAT_010b9780 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010b9784 - DAT_010b9780 >> 2;
    }
    if (iVar2 <= iVar1) break;
    if (**(int **)(DAT_010b9780 + iVar1 * 4) == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  return -1;
}


//// FUNCTION FUN_00a294e0 @ 00a294e0 ////

void __fastcall FUN_00a294e0(int param_1)

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


//// FUNCTION FUN_00a29510 @ 00a29510 ////

void __fastcall FUN_00a29510(int param_1)

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


//// FUNCTION FUN_00a29540 @ 00a29540 ////

void __cdecl FUN_00a29540(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a294a0(param_1);
  FUN_00a293a0(iVar1,param_2);
  return;
}


//// FUNCTION FUN_00a29560 @ 00a29560 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a29560(void)

{
  if (DAT_010b9780 == (undefined4 *)0x0) {
    DAT_010b9780 = (undefined4 *)0x0;
    DAT_010b9784 = 0;
    _DAT_010b9788 = 0;
    return;
  }
  if (DAT_010b9784 - (int)DAT_010b9780 >> 2 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*DAT_010b9780);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010b9780);
}


//// FUNCTION FUN_00a295c0 @ 00a295c0 ////

void FUN_00a295c0(void)

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
  puStack_8 = &LAB_00cfa188;
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


//// FUNCTION FUN_00a29680 @ 00a29680 ////

void __thiscall FUN_00a29680(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a295c0();
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
      _Dst = FUN_00a29370((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a29300(param_1,iVar5,param_1 + param_2);
      FUN_00a29370(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a290b0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a29300(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a29230(param_1,(int)pvVar3,iVar5);
    FUN_00a290b0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a298c0 @ 00a298c0 ////

void __thiscall FUN_00a298c0(void *this,undefined4 *param_1)

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
  FUN_00a29680(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a29910 @ 00a29910 ////

void __cdecl FUN_00a29910(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    param_1 = operator_new(0xc);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[2] = -1;
    }
    *param_1 = (int)piVar1;
    param_1[1] = param_2;
    FUN_00a298c0(&DAT_010b977c,&param_1);
  }
  return;
}


//// FUNCTION FUN_00a29960 @ 00a29960 ////

void __fastcall FUN_00a29960(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a29970 @ 00a29970 ////

uint * __fastcall FUN_00a29970(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = operator_new(*param_1);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[5] = param_1[5];
  puVar1[6] = param_1[6];
  puVar5 = param_1 + 6;
  puVar1[7] = param_1[7];
  puVar1[8] = param_1[8];
  puVar4 = puVar1 + 9;
  iVar3 = 3;
  do {
    iVar2 = FUN_00aa1810((void *)*puVar5,puVar4);
    puVar4 = (uint *)((int)puVar4 + iVar2);
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return puVar1;
}


//// FUNCTION FUN_00a29a00 @ 00a29a00 ////

int __thiscall FUN_00a29a00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = param_1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  puVar3 = (undefined4 *)((int)this + 0x18);
  *puVar3 = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  puVar4 = param_1 + 9;
  param_1 = (undefined4 *)0x3;
  do {
    this_00 = (void *)(((int)puVar4 - (int)puVar1) + (int)this);
    *puVar3 = this_00;
    iVar2 = FUN_00aa1890(this_00,puVar4);
    puVar4 = (undefined4 *)((int)puVar4 + iVar2);
    puVar3 = puVar3 + 1;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x14) = 1;
  return (int)puVar4 - (int)puVar1;
}


//// FUNCTION FUN_00a29aa0 @ 00a29aa0 ////

void __thiscall FUN_00a29aa0(void *this,undefined4 *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  if ((0.0 <= param_2) && (param_2 <= 1.0)) {
    iVar2 = 0;
    piVar3 = (int *)((int)this + 0x18);
    do {
      fVar4 = FUN_00aa1910(*piVar3,param_2);
      param_1[iVar2] = (float)fVar4;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 3);
    fVar1 = (float)param_1[1] * 1.5;
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    param_1[1] = fVar1;
    return;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a29b30 @ 00a29b30 ////

undefined4 * __cdecl FUN_00a29b30(uint *param_1)

{
  undefined4 *this;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *param_1;
  this = operator_new(uVar2);
  puVar3 = this;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  FUN_00a29a00(this,param_1);
  return this;
}


//// FUNCTION FUN_00a29b70 @ 00a29b70 ////

void __fastcall FUN_00a29b70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x18);
  iVar1 = 3;
  do {
    FUN_00aa1a30(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_00a29bd0 @ 00a29bd0 ////

undefined4 __cdecl FUN_00a29bd0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint *_Memory;
  undefined4 *this;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa1b0;
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
    return 0;
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
  FUN_009d3ca0(&local_2c,_Memory,uVar3,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar3 = *_Memory;
  this = operator_new(uVar3);
  puVar5 = this;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_00a29a00(this,_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a29d30 @ 00a29d30 ////

uint __thiscall FUN_00a29d30(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa1c8;
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
  sVar5 = *(size_t *)this;
  local_4 = 0;
  puVar3 = FUN_00a29970(this);
  uVar4 = FUN_009d4370(&local_2c,puVar3,sVar5);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_24 >> 8),(char)uVar4);
}


//// FUNCTION FUN_00a29dd0 @ 00a29dd0 ////

void __fastcall FUN_00a29dd0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a29df0 @ 00a29df0 ////

void __fastcall FUN_00a29df0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a29e40 @ 00a29e40 ////

void FUN_00a29e40(void)

{
  FUN_00aa1ab0();
  return;
}


//// FUNCTION FUN_00a29e50 @ 00a29e50 ////

undefined4 FUN_00a29e50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa1f6;
  local_c = ExceptionList;
  iVar2 = CONCAT31((int3)((uint)ExceptionList >> 8),DAT_010b97d0);
  if (DAT_010b97d0 == '\0') {
    ExceptionList = &local_c;
    FUN_00aa3950();
    FUN_00aa37f0(&DAT_010b97f0,0x400);
    DAT_010b979c = 0;
    DAT_010b97a0 = 0;
    DAT_010b97a4 = 0;
    DAT_010b97a8 = 0;
    DAT_010b97ac = 0;
    puVar5 = &DAT_010b979c;
    do {
      puVar3 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00aa2290(puVar3);
      }
      uStack_4 = 0xffffffff;
      *puVar5 = uVar4;
      puVar3 = operator_new(0x850);
      uStack_4 = 1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00aa2d20(puVar3);
      }
      puVar1 = (undefined4 *)*puVar5;
      puVar5 = puVar5 + 1;
      uStack_4 = 0xffffffff;
      *puVar1 = puVar3;
    } while ((int)puVar5 < 0x10b97b0);
    *(int *)(DAT_010b979c + 4) = DAT_010b97a0;
    *(int *)(DAT_010b97a0 + 4) = DAT_010b97a4;
    *(int *)(DAT_010b97a4 + 4) = DAT_010b97a8;
    *(int *)(DAT_010b97a8 + 4) = DAT_010b97ac;
    *(int *)(DAT_010b97ac + 4) = DAT_010b979c;
    *(int *)(DAT_010b97ac + 8) = DAT_010b97a8;
    *(int *)(DAT_010b97a8 + 8) = DAT_010b97a4;
    *(int *)(DAT_010b97a4 + 8) = DAT_010b97a0;
    *(int *)(DAT_010b97a0 + 8) = DAT_010b979c;
    iVar2 = DAT_010b97ac;
    *(int *)(DAT_010b979c + 8) = DAT_010b97ac;
    DAT_010b97d4 = DAT_010b979c;
    DAT_010b97d0 = '\x01';
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00a29fd0 @ 00a29fd0 ////

undefined4 * __thiscall FUN_00a29fd0(void *this,byte param_1)

{
  FUN_00aa2d70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2a010 @ 00a2a010 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00a2a010(undefined4 param_1,uint param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  FUN_00aa3340((int *)&DAT_010b97f0,param_2,DAT_010b9814,DAT_010b9790,'\x01');
  fVar1 = FUN_00aa3340((int *)&DAT_010b97f0,DAT_010b9810,DAT_010b9790,DAT_010b9810,'\x01');
  fVar2 = FUN_00aa3340((int *)&DAT_010b97f0,DAT_010b9814,DAT_010b9814,DAT_010b9810,'\x01');
  if (((float10)1.0 - (float10)_DAT_00e6e1d4) * fVar2 < (float10)(double)fVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00a2a090 @ 00a2a090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a2a090(undefined4 param_1,uint param_2,float *param_3)

{
  double dVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = FUN_00aa3340((int *)&DAT_010b97f0,param_2,DAT_00e6e1a8,DAT_00e6e1ac,'\0');
  dVar1 = (double)(SQRT(fVar3) * (float10)_DAT_00e6e1b0);
  fVar3 = FUN_00aa3340((int *)&DAT_010b97f0,DAT_00e6e1b8,DAT_00e6e1b4,DAT_00e6e1b8,'\0');
  fVar2 = (float)(SQRT(fVar3) * (float10)_DAT_00e6e1bc);
  fVar3 = FUN_00aa3340((int *)&DAT_010b97f0,DAT_00e6e1c0,DAT_00e6e1c0,DAT_00e6e1c4,'\0');
  fVar3 = SQRT(fVar3) * (float10)_DAT_00e6e1c8;
  fVar4 = (float10)_DAT_00e6e1d8;
  if (((float10)fVar2 <= fVar4) || (fVar3 <= fVar4)) {
    if ((fVar4 < (float10)fVar2) || (fVar4 < fVar3)) {
      fVar4 = (float10)dVar1 * (float10)0.3333333333333333;
    }
    else {
      fVar4 = (float10)dVar1 * (float10)0.5;
    }
  }
  else {
    fVar4 = (float10)dVar1 * (float10)0.25;
  }
  *param_3 = (float)fVar3;
  param_3[1] = (float)fVar4;
  param_3[2] = fVar2;
  return;
}


//// FUNCTION FUN_00a2a180 @ 00a2a180 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a2a180(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == 0) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return;
  }
  if (param_3 == 2) {
    *param_1 = _DAT_00e6e214;
    param_1[1] = DAT_00e6e218;
    param_1[2] = DAT_00e6e21c;
    return;
  }
  param_3 = param_2;
  if (param_2 == 0) {
    param_3 = 1;
  }
  fVar2 = 1.0 / (float)param_3;
  fVar1 = *param_1;
  *param_1 = fVar2 * fVar1;
  fVar1 = fVar2 * fVar1 * _DAT_010b9794;
  *param_1 = fVar1;
  if (DAT_00e6e1ec < fVar1) {
    *param_1 = DAT_00e6e1ec;
  }
  fVar1 = param_1[1];
  param_1[1] = fVar2 * fVar1;
  fVar1 = fVar2 * fVar1 * _DAT_010b9794;
  param_1[1] = fVar1;
  if (DAT_00e6e1ec < fVar1) {
    param_1[1] = DAT_00e6e1ec;
  }
  fVar1 = param_1[2];
  param_1[2] = fVar2 * fVar1;
  fVar1 = fVar2 * fVar1 * _DAT_010b9794;
  param_1[2] = fVar1;
  if (DAT_00e6e1ec < fVar1) {
    param_1[2] = DAT_00e6e1ec;
  }
  return;
}


//// FUNCTION FUN_00a2a280 @ 00a2a280 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2a280(void)

{
  _DAT_010b97c8 = SQRT(_DAT_010b97c8);
  if (_DAT_010b97c8 == 0.0) {
    _DAT_010b97c8 = 1.0;
  }
  DAT_010b9790 = 0xdac;
  _DAT_010b9794 = _DAT_00e6e1dc / (float)_DAT_010b97c8;
  return;
}


//// FUNCTION FUN_00a2a2d0 @ 00a2a2d0 ////

void FUN_00a2a2d0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_010b97d8;
  if (DAT_010b97d8 != (undefined4 *)0x0) {
    FUN_00aa2d70(DAT_010b97d8);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010b97d8 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_00a2a310 @ 00a2a310 ////

void FUN_00a2a310(void)

{
  undefined4 *puVar1;
  
  if (DAT_010b979c != 0) {
    puVar1 = &DAT_010b979c;
    do {
      FUN_00aa2b50((undefined4 *)*puVar1);
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 0x10b97b0);
  }
  return;
}


//// FUNCTION FUN_00a2a340 @ 00a2a340 ////

uint FUN_00a2a340(void)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),DAT_010b97d1);
  if (((DAT_010b97d1 != '\0') &&
      (uVar1 = DAT_010b97e8, (uint)(DAT_010b97bc + DAT_010b97b8) < DAT_010b97e8)) &&
     (DAT_010b97b4 < DAT_010b97e8)) {
    return DAT_010b97e8 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00a2a3d0 @ 00a2a3d0 ////

void __fastcall FUN_00a2a3d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00a2a3d0(*(int *)(param_1 + 4));
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)**(undefined4 **)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a2a410 @ 00a2a410 ////

void FUN_00a2a410(void)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  DAT_010b97d1 = 0;
  FUN_00aa41a0();
  FUN_00aa2e40((undefined4 *)&DAT_010b97f0);
  FUN_00a2a2d0();
  FUN_00aa1cd0(0x10b9818);
  puVar1 = &DAT_010b979c;
  do {
    _Memory = (undefined4 *)*puVar1;
    if (_Memory != (undefined4 *)0x0) {
      FUN_00aa2d70(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10b97b0);
  DAT_010b97d0 = 0;
  return;
}


//// FUNCTION FUN_00a2a480 @ 00a2a480 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00a2a480(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float10 fVar3;
  ulonglong uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa20b;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (DAT_010b97bc <= (uint)param_1[1])) {
    DAT_010b97e4 = *param_1;
    DAT_010b97ec = param_1[2];
    _DAT_010b97c8 = 0.0;
    DAT_010b97bc = DAT_010b97fc / 2;
    _DAT_010b97c4 = 0;
    _DAT_010b97c0 = 0;
    DAT_010b97e8 = param_1[1];
    ExceptionList = &local_c;
    FUN_00aa30f0(&DAT_010b97f0,DAT_010b97ec / 2);
    FUN_00aa41a0();
    DAT_00e6e274 = 0x3f800000;
    DAT_00e6e26c = 1;
    FUN_00aa2e70((undefined4 *)&DAT_010b97f0);
    FUN_00a2a2d0();
    puVar1 = operator_new(0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_010b97d8 = 0;
    }
    else {
      DAT_010b97d8 = FUN_00aa2290(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b97dc = DAT_010b97d8;
    FUN_00aa1ce0(&DAT_010b9818);
    FUN_00a2a310();
    fVar3 = FUN_00aa3030(DAT_010b97e4,DAT_010b97e8);
    _DAT_010b97c8 = (double)fVar3;
    FUN_00a2a280();
    FUN_00aa2ad0(&DAT_010ba280);
    DAT_010b97b8 = 0;
    DAT_010b97b4 = DAT_010b97bc;
    uVar4 = FUN_00acd42c();
    DAT_010b97b0 = (undefined4)uVar4;
    DAT_010b97d1 = 1;
    uVar2 = FUN_009d9820();
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return (uint)param_1 & 0xffffff00;
}


//// FUNCTION FUN_00a2a610 @ 00a2a610 ////

int * FUN_00a2a610(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  float fStack_18;
  int local_c [3];
  
  DAT_010b97d1 = 0;
  FUN_00aa5890(*(int **)(DAT_010b97d8 + 4),DAT_010b97ec);
  uVar6 = FUN_00aa41e0((int)local_c);
  if ((char)uVar6 == '\0') {
    return (int *)0x0;
  }
  piVar7 = operator_new(0x100000);
  piVar12 = piVar7;
  for (iVar8 = 0x40000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  fVar4 = (float)DAT_010b97e8;
  if (DAT_010b97e8 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  iVar8 = 0;
  piVar12 = piVar7 + 6;
  piVar7[2] = (int)((fVar4 / (float)DAT_010b97ec) * 1000.0);
  piVar7[3] = DAT_00e6e1ec;
  piVar7[4] = DAT_00e6e274;
  pfVar9 = (float *)(piVar7 + 9);
  do {
    *piVar12 = (int)pfVar9;
    piVar1 = (int *)local_c[iVar8];
    pfVar10 = pfVar9 + 4;
    fStack_18 = 0.0;
    for (piVar3 = piVar1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 != 0) {
        iVar2 = *(int *)(*piVar3 + 4);
        fVar4 = (float)iVar2;
        if (iVar2 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (fStack_18 < fVar4) {
          fStack_18 = fVar4;
        }
      }
    }
    fVar4 = (float)DAT_010b97e8;
    if (DAT_010b97e8 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      pfVar11 = pfVar10;
      if ((int *)*piVar1 != (int *)0x0) {
        iVar2 = *(int *)*piVar1;
        fVar5 = (float)iVar2;
        if (iVar2 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        *pfVar10 = fVar5 * (1.0 / fVar4);
        fVar5 = (float)*(int *)(*piVar1 + 4);
        if (*(int *)(*piVar1 + 4) < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        pfVar11 = pfVar10 + 6;
        pfVar10[1] = fVar5 * (1.0 / fVar4);
        pfVar10[2] = *(float *)(*piVar1 + 8);
        pfVar10[3] = *(float *)(*piVar1 + 0xc);
        pfVar10[4] = *(float *)(*piVar1 + 0x10);
        pfVar10[5] = *(float *)(*piVar1 + 0x14);
        pfVar9[1] = (float)((int)pfVar9[1] + 1);
      }
      pfVar10 = pfVar11;
    }
    iVar8 = iVar8 + 1;
    piVar12 = piVar12 + 1;
    pfVar9 = pfVar10;
  } while (iVar8 < 3);
  *piVar7 = (int)pfVar10 - (int)piVar7;
  iVar8 = 0;
  while( true ) {
    iVar2 = local_c[iVar8];
    if (*(int *)(iVar2 + 4) != 0) {
      FUN_00a2a3d0(*(int *)(iVar2 + 4));
      if (*(undefined4 **)(iVar2 + 4) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)**(undefined4 **)(iVar2 + 4));
      }
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    if ((undefined4 *)local_c[iVar8] != (undefined4 *)0x0) break;
    local_c[iVar8] = 0;
    iVar8 = iVar8 + 1;
    if (2 < iVar8) {
      return piVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)local_c[iVar8]);
}


//// FUNCTION FUN_00a2a646 @ 00a2a646 ////

int * FUN_00a2a646(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  int *piStack00000004;
  
  piStack00000004 = operator_new(0x100000);
  piVar9 = piStack00000004;
  for (iVar5 = 0x40000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  fVar10 = (float)DAT_010b97e8;
  if (DAT_010b97e8 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  iVar5 = 0;
  piVar9 = piStack00000004 + 6;
  piStack00000004[2] = (int)((fVar10 / (float)DAT_010b97ec) * 1000.0);
  piStack00000004[3] = DAT_00e6e1ec;
  piStack00000004[4] = DAT_00e6e274;
  pfVar6 = (float *)(piStack00000004 + 9);
  do {
    *piVar9 = (int)pfVar6;
    pfVar7 = pfVar6 + 4;
    fVar10 = 0.0;
    piVar1 = *(int **)(&stack0x0000000c + iVar5 * 4);
    for (piVar3 = piVar1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 != 0) {
        iVar2 = *(int *)(*piVar3 + 4);
        fVar4 = (float)iVar2;
        if (iVar2 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (fVar10 < fVar4) {
          fVar10 = fVar4;
        }
      }
    }
    fVar10 = (float)DAT_010b97e8;
    if (DAT_010b97e8 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      pfVar8 = pfVar7;
      if ((int *)*piVar1 != (int *)0x0) {
        iVar2 = *(int *)*piVar1;
        fVar4 = (float)iVar2;
        if (iVar2 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        *pfVar7 = fVar4 * (1.0 / fVar10);
        fVar4 = (float)*(int *)(*piVar1 + 4);
        if (*(int *)(*piVar1 + 4) < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        pfVar8 = pfVar7 + 6;
        pfVar7[1] = fVar4 * (1.0 / fVar10);
        pfVar7[2] = *(float *)(*piVar1 + 8);
        pfVar7[3] = *(float *)(*piVar1 + 0xc);
        pfVar7[4] = *(float *)(*piVar1 + 0x10);
        pfVar7[5] = *(float *)(*piVar1 + 0x14);
        pfVar6[1] = (float)((int)pfVar6[1] + 1);
      }
      pfVar7 = pfVar8;
    }
    iVar5 = iVar5 + 1;
    piVar9 = piVar9 + 1;
    pfVar6 = pfVar7;
  } while (iVar5 < 3);
  *piStack00000004 = (int)pfVar7 - (int)piStack00000004;
  iVar5 = 0;
  while( true ) {
    iVar2 = *(int *)(&stack0x0000000c + iVar5 * 4);
    if (*(int *)(iVar2 + 4) != 0) {
      FUN_00a2a3d0(*(int *)(iVar2 + 4));
      if (*(undefined4 **)(iVar2 + 4) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)**(undefined4 **)(iVar2 + 4));
      }
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    if (*(undefined4 **)(&stack0x0000000c + iVar5 * 4) != (undefined4 *)0x0) break;
    *(undefined4 *)(&stack0x0000000c + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return piStack00000004;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)**(undefined4 **)(&stack0x0000000c + iVar5 * 4));
}


//// FUNCTION FUN_00a2a8a0 @ 00a2a8a0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2a8a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  uint extraout_EDX;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 in_stack_ffffde8c;
  float in_stack_ffffdeac;
  float in_stack_ffffdeb0;
  float in_stack_ffffdeb4;
  float in_stack_ffffdeb8;
  float in_stack_ffffdebc;
  float in_stack_ffffdec0;
  float in_stack_ffffdec4;
  float in_stack_ffffdec8;
  float in_stack_ffffdecc;
  float in_stack_ffffded0;
  float in_stack_ffffded4;
  float in_stack_ffffded8;
  float local_1914;
  float local_1910;
  float local_190c;
  int local_1908;
  uint local_1904 [4];
  float local_18f4;
  float local_18f0;
  float local_18ec;
  float local_18e8;
  float local_18e4;
  float local_18e0;
  undefined4 local_18dc [524];
  undefined4 local_10ac [532];
  undefined4 local_85c [531];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar7 = DAT_010b97b8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa241;
  local_c = ExceptionList;
  uStack_10 = 0xa2a8bf;
  if (DAT_010b97b4 < DAT_010b97bc) {
    ExceptionList = &local_c;
    FUN_00aa2d20(local_10ac);
    puVar8 = local_10ac;
    puVar9 = &DAT_010ba280;
    for (iVar4 = 0x214; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = local_10ac;
    puVar9 = (undefined4 *)&stack0xffffde8c;
    for (iVar4 = 0x214; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_4 = 0;
    FUN_00aa2bf0(DAT_010b97dc,in_stack_ffffde8c);
    DAT_010b97dc = *(void **)((int)DAT_010b97dc + 4);
    DAT_010b97b8 = DAT_010b97b8 + DAT_010b97b0 / DAT_00e6e1e8;
    DAT_010b97b4 = DAT_010b97b0 + DAT_010b97b8;
  }
  else {
    local_1908 = (int)DAT_010b97bc / DAT_00e6e1e0;
    uVar5 = DAT_010b97b4 - DAT_010b97bc;
    local_1914 = 0.0;
    local_1910 = 0.0;
    local_190c = 0.0;
    local_18f4 = 0.0;
    local_18f0 = 0.0;
    local_18ec = 0.0;
    ExceptionList = &local_c;
    FUN_00aa2320(local_18dc);
    local_1904[0] = 0;
    local_1904[1] = 0;
    local_1904[2] = 0;
    local_4 = 1;
    local_1904[3] = 0;
    while( true ) {
      FUN_00aa2cb0(&DAT_010b9818,(float *)(DAT_010b97e4 + uVar7 * 2),DAT_010b97bc);
      uVar1 = FUN_00aa3660(&DAT_010b97f0,(undefined4 *)(DAT_010b97e4 + uVar7 * 2),DAT_010b97bc,1.0);
      if ((char)uVar1 != '\0') {
        fVar10 = FUN_00aa2eb0(DAT_010b97e4 + uVar7 * 2,DAT_010b97bc);
        _DAT_010b97c4 = (float)SQRT(fVar10);
      }
      puVar8 = &DAT_010b9818;
      puVar9 = (undefined4 *)&stack0xffffdeac;
      for (iVar4 = 0x20c; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_00aa1b40(local_18dc,in_stack_ffffdeac,in_stack_ffffdeb0,in_stack_ffffdeb4,
                   in_stack_ffffdeb8,in_stack_ffffdebc,in_stack_ffffdec0,in_stack_ffffdec4,
                   in_stack_ffffdec8,in_stack_ffffdecc,in_stack_ffffded0,in_stack_ffffded4,
                   in_stack_ffffded8);
      if (_DAT_00e6e1cc <= _DAT_010b97c4) {
        uVar2 = FUN_00a2a010(extraout_ECX,extraout_EDX);
        bVar3 = 1U - ((char)uVar2 != '\0') & _DAT_00e6e1d0 < _DAT_010b97c4;
        if (bVar3 == 0) {
          local_1904[2] = local_1904[2] + 1;
        }
        else {
          local_1904[1] = local_1904[1] + 1;
          local_18e8 = 0.0;
          local_18e4 = 0.0;
          local_18e0 = 0.0;
          FUN_00a2a090(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),bVar3),local_1904[1],&local_18e8)
          ;
          local_1914 = local_18e8 + local_1914;
          local_1910 = local_18e4 + local_1910;
          local_190c = local_18e0 + local_190c;
        }
      }
      else {
        local_1904[0] = local_1904[0] + 1;
      }
      if (uVar7 == uVar5) break;
      uVar7 = uVar7 + local_1908;
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
    }
    uVar5 = local_1904[2];
    if ((int)local_1904[2] < (int)local_1904[1]) {
      uVar5 = local_1904[1];
    }
    if ((int)uVar5 <= (int)local_1904[0]) {
      uVar5 = local_1904[0];
    }
    iVar4 = 0;
    do {
      if (uVar5 == local_1904[iVar4]) goto LAB_00a2ab33;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar4 = -1;
LAB_00a2ab33:
    local_1908 = local_1904[2] + local_1904[1] + local_1904[0];
    if (local_1908 == 0) {
      local_1908 = 1;
    }
    FUN_00a2a180(&local_1914,local_1908,iVar4);
    FUN_00aa1c60(local_18dc,(float)local_1908);
    local_18ec = local_190c;
    local_18f0 = local_1910;
    local_18f4 = local_1914;
    puVar8 = local_18dc;
    puVar9 = (undefined4 *)&stack0xffffdeac;
    for (iVar6 = 0x20c; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00aa2d90(DAT_010b97d4,uVar7,iVar4,&local_1914,&local_18f4);
    DAT_010b97d4 = *(void **)((int)DAT_010b97d4 + 4);
    puVar8 = local_18dc;
    puVar9 = (undefined4 *)&stack0xffffdeac;
    for (iVar6 = 0x20c; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00aa2a50(local_85c,uVar7,iVar4,&local_1914,&local_18f4);
    puVar8 = local_85c;
    puVar9 = &DAT_010ba280;
    for (iVar4 = 0x214; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = local_85c;
    puVar9 = (undefined4 *)&stack0xffffde8c;
    for (iVar4 = 0x214; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_4._0_1_ = 2;
    FUN_00aa2bf0(DAT_010b97dc,in_stack_ffffde8c);
    DAT_010b97dc = *(void **)((int)DAT_010b97dc + 4);
    local_4 = CONCAT31(local_4._1_3_,1);
    DAT_010b97b8 = DAT_010b97b8 + DAT_010b97b0 / DAT_00e6e1e8;
    DAT_010b97b4 = DAT_010b97b0 + DAT_010b97b8;
    FUN_00aa1ab0();
  }
  local_4 = 0xffffffff;
  FUN_00aa1ab0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2acc0 @ 00a2acc0 ////

void FUN_00a2acc0(void)

{
  uint *_Memory;
  
  _Memory = (uint *)FUN_00a2a610();
  FUN_00a29b30(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a2ae50 @ 00a2ae50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a2ae50(void *this,int param_1)

{
  uint uVar1;
  
  if (DAT_010bab18 != 0) {
    *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xfffdffff;
    _DAT_010baae4 = FUN_009720b0();
    DAT_010baae0 = param_1;
    if (param_1 != 0) {
      FUN_00976050(this,1);
      uVar1 = 0;
      if (*(char *)((int)this + 0x4d) != '\0') {
        do {
          FUN_00a3b7a0(*(int *)(*(int *)((int)this + 0x5c) + uVar1 * 4));
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(byte *)((int)this + 0x4d));
      }
      FUN_00978cd0(this,*(uint *)(param_1 + 4),1);
      FUN_00a28dc0((float)*(int *)(DAT_010bab18 + 0x838),*(int *)(DAT_010bab18 + 0x82c),
                   *(int *)(DAT_010bab18 + 0x830));
    }
  }
  return;
}


//// FUNCTION FUN_00a2aef0 @ 00a2aef0 ////

void FUN_00a2aef0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00a2aef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_010bab18 + 8))();
  return;
}


//// FUNCTION FUN_00a2af00 @ 00a2af00 ////

void FUN_00a2af00(void)

{
  DAT_010bab04 = 0;
  DAT_010bab08 = 0;
  DAT_010bab0c = 0;
  DAT_010bab10 = 0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_010baafc);
}


//// FUNCTION FUN_00a2af50 @ 00a2af50 ////

undefined4 __fastcall FUN_00a2af50(void *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x8c) < *(int *)(DAT_010baae0 + 8)) {
    uVar1 = FUN_00978930(param_1,0,DAT_010baae0);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return DAT_010baae0 & 0xffffff00;
}


//// FUNCTION FUN_00a2af80 @ 00a2af80 ////

void __cdecl FUN_00a2af80(uint *param_1,uint param_2,uint param_3)

{
  FUN_00a28d10(param_1,param_2,param_3,0x32);
  FUN_00a27a90(param_1,param_2,param_3,DAT_00e68fa4);
  return;
}


//// FUNCTION FUN_00a2afb0 @ 00a2afb0 ////

void FUN_00a2afb0(void)

{
  FUN_00a2be00();
  if (DAT_01050b58 != (void *)0x0) {
    FUN_0099b400(DAT_01050b58);
    DAT_01050b58 = (void *)0x0;
  }
  if (DAT_01050b54 != (void *)0x0) {
    FUN_0099b400(DAT_01050b54);
    DAT_01050b54 = (void *)0x0;
  }
  return;
}


//// FUNCTION FUN_00a2b010 @ 00a2b010 ////

void __cdecl FUN_00a2b010(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  int unaff_retaddr;
  uint *puStack_2c;
  uint *local_20;
  undefined1 local_14 [8];
  int *piStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00cfa266;
  piStack_c = ExceptionList;
  local_20 = (uint *)0x0;
  ExceptionList = &piStack_c;
  FUN_009a52c0();
  iVar2 = (**(code **)(*param_1 + 0x34))(param_1,local_14);
  uVar1 = DAT_010bab04;
  if (iVar2 == 0) {
    if ((*(uint *)(DAT_010bab18 + 0x82c) != DAT_010bab0c) ||
       (*(uint **)(DAT_010bab18 + 0x830) != DAT_010bab10)) {
      DAT_010bab10 = *(uint **)(DAT_010bab18 + 0x830);
      DAT_010bab0c = *(uint *)(DAT_010bab18 + 0x82c);
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bab00);
    }
    if ((DAT_010bab04 != unaff_retaddr - (int)puStack_8) ||
       (DAT_010bab08 != (uint *)((int)param_1 - iStack_4))) {
      DAT_010bab04 = unaff_retaddr - (int)puStack_8;
      DAT_010bab08 = (uint *)((int)param_1 - iStack_4);
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baafc);
    }
    iVar2 = DAT_00e67ba0 * iStack_4;
    if (0 < (int)DAT_010bab08) {
      puStack_2c = DAT_010bab08;
      puVar5 = DAT_010baafc;
      do {
        puVar6 = (uint *)((int)(puStack_8 + iVar2) * 4 + 0x10);
        puVar7 = puVar5;
        for (uVar3 = uVar1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(char *)puVar7 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        puVar5 = puVar5 + uVar1;
        puStack_2c = (uint *)((int)puStack_2c + -1);
      } while (puStack_2c != (uint *)0x0);
    }
    FUN_00aa5fe0(DAT_010baafc,DAT_010bab04,DAT_010bab08,DAT_010bab00,DAT_010bab0c,DAT_010bab10);
    uVar1 = DAT_010bab0c;
    param_1 = piStack_c;
    if (0 < (int)DAT_010bab10) {
      puStack_2c = DAT_010bab10;
      puVar5 = DAT_010bab00;
      do {
        puVar6 = puVar5;
        puVar7 = local_20;
        for (uVar3 = uVar1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = puVar5 + uVar1;
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(char *)puVar7 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
        local_20 = local_20 + ((int)(unaff_ESI + (unaff_ESI >> 0x1f & 3U)) >> 2);
        puStack_2c = (uint *)((int)puStack_2c + -1);
      } while (puStack_2c != (uint *)0x0);
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  FUN_009a5310();
  ExceptionList = (void *)0x0;
  return;
}


//// FUNCTION FUN_00a2b290 @ 00a2b290 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a2b290(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iStack_40;
  undefined4 *puStack_3c;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (DAT_01050b58 == 0) {
    return;
  }
  if (*(int *)(DAT_01050b58 + 0x24) == 0) {
    return;
  }
  if (DAT_01050b54 == 0) {
    return;
  }
  if (*(int *)(DAT_01050b54 + 0x24) == 0) {
    return;
  }
  puStack_3c = &local_2c;
  local_2c = 0;
  piVar4 = *(int **)(DAT_01050b58 + 0x24);
  iStack_40 = 0;
  (**(code **)(*piVar4 + 0x48))(piVar4);
  ppuVar3 = &puStack_3c;
  puStack_3c = (undefined4 *)0x0;
  (**(code **)(**(int **)(DAT_01050b54 + 0x24) + 0x48))(*(int **)(DAT_01050b54 + 0x24));
  FUN_00acd42c();
  iVar1 = DAT_00e67ba0;
  uVar2 = FUN_00acd42c();
  local_2c = (undefined4)uVar2;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_20 = DAT_010bab18[0x20b];
  iStack_1c = DAT_010bab18[0x20c];
  if (((0x200 < iVar1) && (iVar1 != DAT_00e67ba4)) && (DAT_010baad0 != '\0')) {
    local_2c = 400;
  }
  if (DAT_010bab14 == '\0') {
    iVar1 = (**(code **)(*g_pDirect3DDevice + 0x88))
                      (g_pDirect3DDevice,DAT_0105ca60,&stack0xffffffc8,piVar4,&uStack_28,2);
    if (iVar1 == 0) {
      if (DAT_010bab14 == '\0') {
        (**(code **)(*g_pDirect3DDevice + 0x80))(g_pDirect3DDevice,piVar4,ppuVar3);
        goto LAB_00a2b416;
      }
    }
    else {
      DAT_010bab14 = '\x01';
    }
  }
  FUN_00a2b010((int *)ppuVar3);
LAB_00a2b416:
  piVar6 = (int *)&DAT_00000010;
  piVar5 = (int *)0x0;
  piVar4 = &iStack_40;
  iVar1 = (*(code *)puStack_3c[0xd])();
  if (iVar1 == 0) {
    if (DAT_01050b4d != '\0') {
      FUN_00a218b0((undefined4 *)0x0,(float *)DAT_010bab18[0x20b],DAT_010bab18[0x20c],'\0',
                   (int)ppuVar3);
    }
    FUN_00a2af80((uint *)0x0,DAT_010bab18[0x20b],DAT_010bab18[0x20c]);
    (**(code **)(*DAT_010bab18 + 0xc))(0);
    (**(code **)(*piVar4 + 0x38))(piVar4);
    (**(code **)(*g_pDirect3DDevice + 0x78))(g_pDirect3DDevice,ppuVar3,0,piVar4,0);
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  return;
}


//// FUNCTION FUN_00a2b4d0 @ 00a2b4d0 ////

undefined4 __thiscall FUN_00a2b4d0(void *this,char param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  uVar4 = 1;
  uVar3 = 1;
  FUN_009a6fb0('\x01');
  DAT_0105bec4 = 1;
  cVar1 = (*DAT_010baad4)(param_3,uVar3,uVar4,uVar5);
  if (cVar1 == '\0') {
    if (*(int *)((int)this + 0x8c) < *(int *)(DAT_010baae0 + 8)) {
      FUN_00978930(this,0,DAT_010baae0);
      *param_2 = 1;
      uVar3 = FUN_00a2b290();
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    if (param_1 != '\0') {
      cVar1 = (*DAT_010baad8)(param_3);
      if (cVar1 != '\0') goto LAB_00a2b544;
    }
    DAT_0105bec4 = 0;
    uVar2 = FUN_009a6fb0('\0');
    if (param_1 != '\0') {
      FUN_00a27b60();
      uVar2 = FUN_00978cd0(this,0,1);
    }
    return uVar2 & 0xffffff00;
  }
LAB_00a2b544:
  *param_2 = 1;
  uVar3 = FUN_00a2b290();
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00a2b590 @ 00a2b590 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a2b590(ushort *param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void **ppvVar5;
  int iVar6;
  int in_stack_00000024;
  ushort *local_58;
  int local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  void *local_44;
  float local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa278;
  local_c = ExceptionList;
  local_4 = 0;
  ppvVar5 = &local_c;
  if (param_2 != 0) {
    local_54 = -1;
    ExceptionList = &local_c;
    FUN_009a8100(&local_58);
    local_34[3] = DAT_0105c400 * 0.001953125;
    local_44 = DAT_010baae8;
    local_58 = param_1;
    local_34[8] = 0.0;
    local_34[9] = 0.0;
    iVar6 = 0;
    fVar2 = ((DAT_0105c404 * 0.5 + _DAT_00e68fec * local_34[3]) -
            (float)in_stack_00000024 * _DAT_00e68fe8 * local_34[3]) + (float)_DAT_0105c40c;
    fVar3 = (float)_DAT_0105c408 + local_34[3] * 4.0;
    fVar1 = _DAT_00e68fe8 * local_34[3];
    fVar4 = DAT_0105c400 - local_34[3] * 4.0;
    local_34[0] = -local_34[3];
    local_34[1] = local_34[0];
    local_34[2] = local_34[0];
    local_34[4] = local_34[3];
    local_34[5] = local_34[0];
    local_34[6] = local_34[3];
    local_34[7] = local_34[3];
    do {
      local_4c = fVar2 + local_34[iVar6 * 2 + 1];
      local_50 = fVar3 + local_34[iVar6 * 2];
      local_48 = 0;
      FUN_009a85c0(local_44,fVar3 + local_34[iVar6 * 2],fVar2 + local_34[iVar6 * 2 + 1],
                   fVar3 + fVar4 + local_34[iVar6 * 2],fVar2 + fVar1 + local_34[iVar6 * 2 + 1],
                   local_58);
      local_54 = ((iVar6 != 4) - 1 & 0xffffff) - 0x1000000;
      FUN_009a85a0((int *)&local_58);
      iVar6 = iVar6 + 1;
      DAT_0105cb28 = 0;
      ppvVar5 = ExceptionList;
    } while (iVar6 < 5);
  }
  ExceptionList = ppvVar5;
  if (param_3 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00a2b7b0 @ 00a2b7b0 ////

void __cdecl FUN_00a2b7b0(wchar_t *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *pwVar4;
  void *local_868 [2];
  uint local_860;
  wchar_t local_848 [520];
  wchar_t local_438 [260];
  wchar_t local_230 [262];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_009720b0();
  pwVar4 = local_848;
  for (iVar3 = 0x212; iVar3 != 0; iVar3 = iVar3 + -1) {
    pwVar4[0] = L'\0';
    pwVar4[1] = L'\0';
    pwVar4 = pwVar4 + 2;
  }
  local_20 = (int)(iVar1 * 9 + (iVar1 * 9 >> 0x1f & 0xfU)) >> 4;
  local_18 = 0x1e;
  if (DAT_01050b48 != 1.0) {
    local_18 = 0x14;
  }
  local_1c = 0x20;
  local_10 = DAT_01050b48;
  local_14 = 0;
  local_c = 0xac44;
  local_8 = 0x10;
  local_4 = 1;
  local_24 = iVar1;
  _wcscpy(local_848,param_1);
  _wcscpy(local_230,L"Microsoft ADPCM");
  if (DAT_00e67b8d == '\0') {
    _wcscpy(local_438,L"DivX");
  }
  else {
    puVar2 = FUN_009acf60(local_868,&PTR_DAT_00e66f0c);
    _wcscpy(local_438,(wchar_t *)*puVar2);
    if (10 < local_860) {
                    /* WARNING: Subroutine does not return */
      _free(local_868[0]);
    }
  }
  FUN_00a2f1f0((undefined4 *)local_848);
  return;
}


//// FUNCTION FUN_00a2b900 @ 00a2b900 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a2b900(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *unaff_ESI;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int aiStack_8 [2];
  
  _DAT_01050b6c = *param_1;
  _DAT_01050b70 = param_1[1];
  iVar1 = FUN_009720b0();
  (**(code **)(*DAT_010bab18 + 4))();
  if ((char)DAT_010bab18[1] != '\0') {
    DAT_01050b58 = FUN_0099bb50("BufferTrailer",-1,iVar1,iVar1,'\0');
    DAT_01050b54 = FUN_0099bb50("BufferTrailer",-2,iVar1,iVar1,'\0');
    (**(code **)(**(int **)((int)DAT_01050b58 + 0x24) + 0x48))();
    piVar8 = aiStack_8;
    aiStack_8[0] = 0;
    piVar4 = *(int **)((int)DAT_01050b54 + 0x24);
    uVar7 = 0;
    (**(code **)(*piVar4 + 0x48))(piVar4,0);
    piVar6 = (int *)0x0;
    puVar5 = &stack0xffffffe0;
    iVar2 = (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,puVar5,0,0x10);
    if (iVar2 == 0) {
      for (uVar3 = iVar1 * iVar1 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)piVar4 = 0;
        piVar4 = (int *)((int)piVar4 + 1);
      }
      (**(code **)(*piVar8 + 0x38))(piVar8);
      (**(code **)(*g_pDirect3DDevice + 0x78))(g_pDirect3DDevice,uVar7,0,puVar5,0);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))(piVar8,unaff_ESI,puVar5,0);
    }
  }
  DAT_01050b50 = 0;
  return;
}


//// FUNCTION FUN_00a2ba20 @ 00a2ba20 ////

int * __cdecl FUN_00a2ba20(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int *_Memory;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfa2ae;
  local_c = ExceptionList;
  local_4 = 0;
  pbVar3 = PTR_DAT_00e68ff0;
  pbVar5 = param_1;
  ExceptionList = &local_c;
  if (DAT_010baae8 == (int *)0x0) {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x7c);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      DAT_010baae8 = (int *)0x0;
    }
    else {
      DAT_010baae8 = FUN_009a8a00(pvVar2,(char *)param_1,0x18,0,0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004015d0(&PTR_DAT_00e68ff0,(char *)param_1,param_2);
    pbVar3 = PTR_DAT_00e68ff0;
    if (DAT_010baae8 == (int *)0x0) goto LAB_00a2bb6e;
  }
  do {
    _Memory = DAT_010baae8;
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a2bae7:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a2baec;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a2bae7;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a2baec:
  if (iVar4 != 0) {
    if (DAT_010baae8 != (int *)0x0) {
      FUN_009a7db0(DAT_010baae8);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_010baae8 = (int *)0x0;
    pvVar2 = operator_new(0x7c);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar2 == (void *)0x0) {
      DAT_010baae8 = (int *)0x0;
    }
    else {
      DAT_010baae8 = FUN_009a8a00(pvVar2,(char *)param_1,0x18,0,0);
    }
    FUN_004015d0(&PTR_DAT_00e68ff0,(char *)param_1,param_2);
  }
LAB_00a2bb6e:
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return DAT_010baae8;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00a2bba0 @ 00a2bba0 ////

void __fastcall FUN_00a2bba0(int param_1)

{
  char *_Source;
  uint _Count;
  wchar_t *_Source_00;
  byte *_Dest;
  uint uVar1;
  wchar_t *_Dest_00;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  byte local_2c [16];
  uint uStack_1c;
  
  puVar3 = *(undefined4 **)(param_1 + 0x1d4);
  if (puVar3 != (undefined4 *)0x0) {
    while( true ) {
      _Dest = local_2c;
      local_2c[0] = 0;
      uVar5 = 0x14;
      uVar2 = puVar3[0x19];
      _Source = (char *)puVar3[0x18];
      if (0x13 < uVar2) {
        uVar5 = uVar2 + 0x20 & 0xffffffe0;
        _Dest = _malloc(uVar5);
      }
      _strncpy((char *)_Dest,_Source,uVar2);
      _Dest[uVar2] = 0;
      FUN_00a2ba20(_Dest,uVar2,uVar5);
      if (((uint)puVar3[0x22] <= *(uint *)(param_1 + 0x8c)) &&
         (*(uint *)(param_1 + 0x8c) < (uint)puVar3[0x23])) break;
      puVar3 = (undefined4 *)puVar3[0x24];
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
    }
    uVar2 = (uint)(puVar3[1] != 0);
    if (puVar3[9] != 0) {
      uVar2 = uVar2 + 1;
    }
    uVar5 = uVar2;
    if (puVar3[0x11] != 0) {
      uVar2 = uVar2 + 1;
      uVar5 = uVar2;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      _Dest_00 = (wchar_t *)&stack0xffffffd0;
      uVar4 = 10;
      _Count = puVar3[1];
      _Source_00 = (wchar_t *)*puVar3;
      uStack_1c = uVar2;
      if (9 < _Count) {
        uVar1 = _Count + 0x20 >> 5;
        uVar4 = uVar1 << 5;
        _Dest_00 = _malloc(uVar1 * 0x40);
      }
      _wcsncpy(_Dest_00,_Source_00,_Count);
      _Dest_00[_Count] = L'\0';
      FUN_00a2b590((ushort *)_Dest_00,_Count,uVar4);
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 8;
    }
  }
  return;
}


//// FUNCTION FUN_00a2bd10 @ 00a2bd10 ////

void __fastcall FUN_00a2bd10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x24), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x28) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    (**(code **)(**(int **)(iVar1 + uVar2 * 4) + 0x10))(0,1);
  }
  return;
}


//// FUNCTION FUN_00a2bd40 @ 00a2bd40 ////

void __fastcall FUN_00a2bd40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d76ad8;
  return;
}


//// FUNCTION FUN_00a2be00 @ 00a2be00 ////

void FUN_00a2be00(void)

{
  if (DAT_010bab18 != (undefined4 *)0x0) {
    (**(code **)*DAT_010bab18)(1);
  }
  DAT_010bab18 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_00a2be20 @ 00a2be20 ////

void __fastcall FUN_00a2be20(int param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int **ppiStack_14;
  int *local_8;
  int iStack_4;
  
  piStack_18 = *(int **)(param_1 + 0x858);
  if (piStack_18 != (int *)0x0) {
    ppiStack_14 = &local_8;
    local_8 = (int *)0x0;
    uStack_1c = 0xa2be42;
    iVar1 = (**(code **)(*piStack_18 + 0x14))();
    if (-1 < iVar1) {
      ppiStack_14 = (int **)0x0;
      piStack_18 = &iStack_4;
      uStack_1c = 1;
      iStack_4 = 0;
      piStack_20 = local_8;
      iVar1 = (**(code **)(*local_8 + 0xc))();
      ppiVar2 = ppiStack_14;
      while (ppiStack_14 = ppiVar2, iVar1 == 0) {
        (**(code **)(**(int **)(param_1 + 0x858) + 0x10))(*(int **)(param_1 + 0x858));
        (**(code **)(*piStack_20 + 0x14))(piStack_20);
        iVar1 = (**(code **)((int)*ppiVar2 + 0xc))(ppiVar2,1,&piStack_20,0);
        ppiVar2 = ppiStack_14;
      }
      (**(code **)(*piStack_18 + 8))(piStack_18);
    }
  }
  iVar1 = *(int *)(param_1 + 0x868);
  if (iVar1 != 0) {
    ppiStack_14 = (int **)(iVar1 + 0xc);
    piStack_18 = (int *)0xa2beaf;
    (**(code **)(*(int *)(iVar1 + 0xc) + 8))();
    *(undefined4 *)(param_1 + 0x868) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x86c);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bec5;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x86c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x870);
  if (iVar1 != 0) {
    ppiStack_14 = (int **)(iVar1 + 0xc);
    piStack_18 = (int *)0xa2bedf;
    (**(code **)(*(int *)(iVar1 + 0xc) + 8))();
    *(undefined4 *)(param_1 + 0x870) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x874);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bef5;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x874) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x878);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf0b;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x878) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x87c);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf21;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x87c) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x880);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf37;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x880) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x884);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf4d;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x858);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf63;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x858) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x85c);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf79;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x85c) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x864);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bf8f;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x864) = 0;
  }
  ppiStack_14 = *(int ***)(param_1 + 0x860);
  if (ppiStack_14 != (int **)0x0) {
    piStack_18 = (int *)0xa2bfa5;
    (**(code **)((int)*ppiStack_14 + 8))();
    *(undefined4 *)(param_1 + 0x860) = 0;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00a2bfc0 @ 00a2bfc0 ////

void FUN_00a2bfc0(void)

{
  DWORD DVar1;
  LPCSTR local_4;
  
  DVar1 = GetLastError();
  DVar1 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPSTR)&local_4,0,(va_list *)0x0);
  if (DVar1 != 0) {
    MessageBoxA(DAT_0105beb0,local_4,"Error",0);
    LocalFree(local_4);
  }
  return;
}


//// FUNCTION FUN_00a2c010 @ 00a2c010 ////

/* WARNING: Removing unreachable block (ram,0x00a2c0d6) */
/* WARNING: Removing unreachable block (ram,0x00a2c05d) */
/* WARNING: Removing unreachable block (ram,0x00a2c07f) */
/* WARNING: Removing unreachable block (ram,0x00a2c08c) */
/* WARNING: Removing unreachable block (ram,0x00a2c0a6) */
/* WARNING: Removing unreachable block (ram,0x00a2c0b2) */
/* WARNING: Removing unreachable block (ram,0x00a2c0ea) */

undefined4 __fastcall FUN_00a2c010(int param_1)

{
  int *piVar1;
  undefined4 in_EAX;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 4));
  if ((*(char *)(param_1 + 4) != '\0') && (uVar2 = 0, *(int *)(param_1 + 0x864) != 0)) {
    piVar1 = *(int **)(param_1 + 0x860);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))(piVar1);
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00a2c110 @ 00a2c110 ////

bool __fastcall FUN_00a2c110(int param_1)

{
  LPVOID *ppv;
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  
  ppv = (LPVOID *)(param_1 + 0x858);
  HVar2 = CoCreateInstance((IID *)&rclsid_00db0abc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf37c,ppv);
  if (HVar2 < 0) {
    return false;
  }
  HVar2 = CoCreateInstance((IID *)&rclsid_00db0afc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf34c,
                           (LPVOID *)(param_1 + 0x85c));
  if (-1 < HVar2) {
    piVar1 = *(LPVOID *)(param_1 + 0x85c);
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,*ppv);
    if (-1 < iVar3) {
      iVar3 = (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00dafacc,param_1 + 0x860);
      if (-1 < iVar3) {
        iVar3 = (*(code *)**(undefined4 **)*ppv)(*ppv,&DAT_00dafabc,param_1 + 0x864);
        return -1 < iVar3;
      }
    }
  }
  return false;
}


//// FUNCTION FUN_00a2c1b0 @ 00a2c1b0 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00a2c1b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int *unaff_EDI;
  int *in_stack_00000014;
  int *piStack_24;
  int *piStack_20;
  int local_10;
  int *local_c;
  int local_8;
  
  local_10 = 0;
  local_c = (int *)0x0;
  local_8 = 0;
  if ((param_1 == (int *)0x0) || (in_stack_00000014 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  piStack_20 = &local_10;
  *in_stack_00000014 = 0;
  piStack_24 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
    iVar1 = local_8;
    while (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)*in_stack_00000014 + 0x18))
                        ((int *)*in_stack_00000014,&piStack_24);
      if (piStack_24 != (int *)0x0) {
        (**(code **)(*piStack_24 + 8))(piStack_24);
        piStack_24 = (int *)0x0;
      }
      if (iVar2 == -0x7ffbfdf7) {
        if (iVar1 == 0) {
LAB_00a2c24b:
          iVar2 = (**(code **)(*(int *)*in_stack_00000014 + 0x24))
                            ((int *)*in_stack_00000014,&stack0xffffffec);
          if ((iVar2 == 0) && (unaff_EBX == local_10)) {
            iVar2 = 0;
            if (piStack_20 == local_c) break;
            piStack_20 = (int *)((int)piStack_20 + 1);
          }
        }
      }
      else if ((iVar2 == 0) && (iVar1 != 0)) goto LAB_00a2c24b;
      (**(code **)(*(int *)*in_stack_00000014 + 8))((int *)*in_stack_00000014);
      iVar2 = (**(code **)(*in_stack_00000014 + 0xc))(in_stack_00000014,1);
    }
    (*(code *)local_c[2])(&local_c);
  }
  return iVar2;
}


//// FUNCTION FUN_00a2c2c0 @ 00a2c2c0 ////

/* WARNING: Removing unreachable block (ram,0x00a2c3d3) */
/* WARNING: Removing unreachable block (ram,0x00a2c3e5) */
/* WARNING: Removing unreachable block (ram,0x00a2c3ed) */
/* WARNING: Removing unreachable block (ram,0x00a2c3aa) */
/* WARNING: Removing unreachable block (ram,0x00a2c3bc) */
/* WARNING: Removing unreachable block (ram,0x00a2c3c4) */
/* WARNING: Removing unreachable block (ram,0x00a2c3fc) */
/* WARNING: Removing unreachable block (ram,0x00a2c40e) */
/* WARNING: Removing unreachable block (ram,0x00a2c41f) */
/* WARNING: Removing unreachable block (ram,0x00a2c427) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00a2c32a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __fastcall FUN_00a2c2c0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_stack_ffffffcc;
  undefined4 local_30;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 0x86c) != (int *)0x0) {
    local_30 = (int *)0x0;
    iVar4 = -0x7fffbffb;
    (**(code **)(**(int **)(param_1 + 0x86c) + 0x28))();
    iVar1 = (**(code **)(_DAT_00000000 + 0xc))();
    while (iVar1 == 0) {
      iVar4 = (*(code *)*in_stack_ffffffcc)();
      (*_DAT_00000009)();
      if (-1 < iVar4) break;
      iVar1 = (**(code **)(_DAT_00000000 + 0xc))();
    }
    (**(code **)(_DAT_00000000 + 8))();
    if (iVar4 < 0) {
      uVar2 = (**(code **)(_DAT_00000000 + 8))();
      return uVar2 & 0xffffff00;
    }
    iVar4 = (**(code **)(_DAT_00000000 + 0x2c))(0,0,0);
    if (-1 < iVar4) {
      uVar3 = (**(code **)(*local_30 + 8))(local_30);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    uVar2 = (**(code **)(*local_30 + 8))(local_30);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00a2c470 @ 00a2c470 ////

undefined1 FUN_00a2c470(void)

{
  HRESULT HVar1;
  int iVar2;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  int *local_4;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    return 0;
  }
  local_c = (int *)0x0;
  local_4 = (int *)0x0;
  local_8 = (int *)0x0;
  local_d = 0;
  HVar1 = CoCreateInstance((IID *)&rclsid_00db0abc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf37c,&local_c);
  if (-1 < HVar1) {
    HVar1 = CoCreateInstance((IID *)&rclsid_00db0afc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf34c,&local_4
                            );
    if (-1 < HVar1) {
      iVar2 = (**(code **)(*local_4 + 0xc))(local_4,local_c);
      if (-1 < iVar2) {
        HVar1 = CoCreateInstance((IID *)&rclsid_00db083c,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                                 &local_8);
        if (-1 < HVar1) {
          iVar2 = (**(code **)(*local_c + 0xc))(local_c,local_8,L"ASF Enc/Writer");
          if (-1 < iVar2) {
            local_d = 1;
          }
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
    local_4 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  CoUninitialize();
  return local_d;
}


//// FUNCTION FUN_00a2c560 @ 00a2c560 ////

undefined4 __fastcall FUN_00a2c560(int *param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_4;
  
  uVar5 = 0;
  piVar4 = (int *)0x0;
  ppiVar3 = &local_4;
  piVar1 = param_1 + 0x12;
  local_4 = param_1;
  iVar2 = (**(code **)(param_1[0x12] + 0x40))(ppiVar3,0,0,0);
  if (iVar2 < 0) {
    return 0x80004002;
  }
  iVar2 = (**(code **)(*param_1 + 8))(uVar5);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x44))();
    (*(code *)(*ppiVar3)[2])(ppiVar3);
    return 0;
  }
  if (iVar2 == 1) {
    (**(code **)(*piVar4 + 8))();
    (**(code **)(*piVar1 + 0x4c))();
    return 1;
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar1 + 0x4c))();
  FUN_00c8de20((void *)param_1[0x3a],3,iVar2,0);
  return 3;
}


//// FUNCTION FUN_00a2c630 @ 00a2c630 ////

void __fastcall FUN_00a2c630(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa2c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d76be4;
  param_1[3] = &PTR_FUN_00d76ba4;
  param_1[4] = &PTR_LAB_00d76b8c;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1[0x1c] + 0x16c));
}


//// FUNCTION FUN_00a2c750 @ 00a2c750 ////

void __fastcall FUN_00a2c750(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa2e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d76c64;
  param_1[3] = &PTR_FUN_00d76c24;
  param_1[4] = &PTR_LAB_00d76c0c;
  local_4 = 0;
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 4))(1);
  }
  param_1[0x1c] = 0;
  local_4 = 0xffffffff;
  FUN_00c93230(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a2c7c0 @ 00a2c7c0 ////

void __thiscall FUN_00a2c7c0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x15c) = *param_1;
    *(undefined4 *)(iVar1 + 0x160) = param_1[1];
    *(undefined4 *)(iVar1 + 0x164) = param_1[2];
  }
  return;
}


//// FUNCTION FUN_00a2ca20 @ 00a2ca20 ////

LPCRITICAL_SECTION __fastcall FUN_00a2ca20(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return param_1;
}


//// FUNCTION FUN_00a2ca30 @ 00a2ca30 ////

void __fastcall FUN_00a2ca30(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00a2ca60 @ 00a2ca60 ////

undefined4 * __thiscall FUN_00a2ca60(void *this,LPCRITICAL_SECTION param_1)

{
  *(LPCRITICAL_SECTION *)this = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return this;
}


//// FUNCTION FUN_00a2ca80 @ 00a2ca80 ////

void __fastcall FUN_00a2ca80(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}


//// FUNCTION FUN_00a2cab0 @ 00a2cab0 ////

void FUN_00a2cab0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2cabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + -8))();
  return;
}


//// FUNCTION FUN_00a2cac0 @ 00a2cac0 ////

void FUN_00a2cac0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2cacd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 4))();
  return;
}


//// FUNCTION FUN_00a2cad0 @ 00a2cad0 ////

void FUN_00a2cad0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2cadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 8))();
  return;
}


//// FUNCTION FUN_00a2cb40 @ 00a2cb40 ////

undefined4 * __fastcall FUN_00a2cb40(undefined4 *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + 2;
  for (iVar2 = 0x212; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = &PTR_FUN_00d76cd8;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    *(undefined1 *)(param_1 + 0x214) = 0;
    FUN_00a2bfc0();
    return param_1;
  }
  *(undefined1 *)(param_1 + 0x214) = 1;
  return param_1;
}


//// FUNCTION FUN_00a2cbd0 @ 00a2cbd0 ////

undefined4 FUN_00a2cbd0(void)

{
  int iVar1;
  DWORD DVar2;
  HLOCAL pvVar3;
  uint uVar4;
  HLOCAL local_30;
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009ad040(local_2c,(wchar_t *)(DAT_010bab18 + 0x210));
  local_4 = 0;
  iVar1 = FID_conflict___access(local_2c[0],2);
  if (iVar1 != 0) {
    DVar2 = GetLastError();
    if (DVar2 == 2) {
      FUN_009d9820();
      uVar4 = local_24;
      goto joined_r0x00a2cc37;
    }
    DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,0x400,(LPSTR)&local_30,0,(va_list *)0x0);
    if (DVar2 != 0) {
      pvVar3 = LocalFree(local_30);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      ExceptionList = local_c;
      return (uint)pvVar3 & 0xffffff00;
    }
  }
  uVar4 = 0;
joined_r0x00a2cc37:
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00a2ccc0 @ 00a2ccc0 ////

void __fastcall FUN_00a2ccc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00a2ccd0 @ 00a2ccd0 ////

void __fastcall FUN_00a2ccd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00a2cd10 @ 00a2cd10 ////

void __fastcall FUN_00a2cd10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00a2cd20 @ 00a2cd20 ////

void __fastcall FUN_00a2cd20(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


//// FUNCTION FUN_00a2cd30 @ 00a2cd30 ////

/* WARNING: Enum "tagCALLCONV": Some values do not have unique names */

bool FUN_00a2cd30(char param_1)

{
  HRESULT HVar1;
  int iVar2;
  wchar_t *pwVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  LPVOID *in_stack_00000014;
  int in_stack_00000018;
  int *piStack_48;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *local_18 [2];
  undefined1 uStack_10;
  wchar_t *pwStack_c;
  
  if (in_stack_00000018 == 0) {
    HVar1 = CoCreateInstance((IID *)&rclsid_00db06fc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                             in_stack_00000014);
    return -1 < HVar1;
  }
  local_18[0] = (int *)0x0;
  *in_stack_00000014 = (LPVOID)0x0;
  HVar1 = CoCreateInstance((IID *)&rclsid_00db06ec,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf54c,local_18);
  if (-1 < HVar1) {
    uVar6 = (int *)0x0;
    iVar2 = (**(code **)(*local_18[0] + 0xc))();
    if (iVar2 == 0) {
      piStack_48 = (int *)0x1;
      uVar5 = (int *)0x0;
      iVar2 = (**(code **)(*(int *)uVar6 + 0xc))(uVar6);
      while ((iVar2 == 0 && (param_1 != '\0'))) {
        piStack_48 = (int *)&stack0xffffffd4;
        iVar2 = (**(code **)(*(int *)uVar5 + 0x24))(uVar5,0,0,&DAT_00db18ec);
        piVar4 = unaff_EBP;
        if (-1 < iVar2) {
          VariantInit((VARIANTARG *)&stack0xffffffcc);
          iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,L"FriendlyName",&stack0xffffffcc,0);
          if ((-1 < iVar2) &&
             (pwVar3 = _wcsstr((wchar_t *)unaff_EDI,pwStack_c), pwVar3 != (wchar_t *)0x0)) {
            (**(code **)(*piStack_48 + 0x20))(piStack_48,0,0,&riid_00daf4dc);
            uStack_10 = 0;
          }
          VariantClear((VARIANTARG *)&stack0xffffffcc);
          piVar4 = (int *)0x0;
          if (unaff_EBP != (int *)0x0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            piVar4 = (int *)0x0;
          }
        }
        if (piStack_48 != (int *)0x0) {
          (**(code **)(*piStack_48 + 8))(piStack_48);
          piStack_48 = (int *)0x0;
        }
        iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&piStack_48,&stack0xffffffc8);
        unaff_EBP = piVar4;
      }
      if ((int *)uVar6 != (int *)0x0) {
        (**(code **)(*(int *)uVar6 + 8))();
      }
    }
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))();
    }
    return param_1 == '\0';
  }
  return false;
}


//// FUNCTION FUN_00a2cee0 @ 00a2cee0 ////

/* WARNING: Enum "tagCALLCONV": Some values do not have unique names */

uint __cdecl FUN_00a2cee0(undefined4 param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  HRESULT HVar3;
  int iVar4;
  int *cbMultiByte;
  LPSTR lpMultiByteStr;
  LPSTR pCVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int *unaff_EBX;
  int *unaff_ESI;
  LPSTR pCVar8;
  int *unaff_EDI;
  CHAR *pCVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined4 uStack_30;
  int *local_2c;
  int *local_28;
  _union_2524 _Stack_24;
  undefined1 auStack_14 [12];
  int iStack_8;
  wchar_t *pwStack_4;
  
  *param_2 = 0xffffffff;
  uStack_30 = (uint)(uint3)uStack_30;
  local_2c = (int *)0x0;
  _Stack_24._8_4_ = (LPCWCH)0x0;
  local_28 = (int *)0x0;
  HVar3 = CoCreateInstance((IID *)&rclsid_00db06ec,(LPUNKNOWN)0x0,3,(IID *)&riid_00daf54c,&local_28)
  ;
  if (HVar3 == 0) {
    switch(param_1) {
    case 0:
      HVar3 = (**(code **)(*local_28 + 0xc))(local_28,&DAT_00db068c,&local_2c,0);
      break;
    case 1:
      HVar3 = (**(code **)(*local_28 + 0xc))(local_28,&DAT_00db066c,&local_2c,0);
      break;
    case 2:
    case 3:
      HVar3 = (**(code **)(*local_28 + 0xc))(local_28,&DAT_00db06ac,&local_2c,0);
      break;
    default:
      HVar3 = 1;
    }
  }
  if (param_3 != (char *)0x0) {
    _sprintf(param_3,"");
  }
  if (HVar3 == 0) {
    _Stack_24._0_4_ = (int *)0x0;
    iVar4 = (**(code **)(*local_2c + 0xc))(local_2c,1,&_Stack_24,auStack_14);
    while (iVar4 == 0) {
      iVar4 = (**(code **)(*(int *)_Stack_24._0_4_ + 0x24))
                        (_Stack_24._0_4_,0,0,&DAT_00db18ec,&_Stack_24.field0.wReserved2);
      if (-1 < iVar4) {
        VariantInit((VARIANTARG *)&_Stack_24.field0);
        iVar4 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,L"FriendlyName",&_Stack_24,0);
        if (-1 < iVar4) {
          cbMultiByte = (int *)WideCharToMultiByte(0,0,(LPCWCH)_Stack_24._8_4_,-1,(LPSTR)0x0,0,
                                                   (LPCCH)0x0,(LPBOOL)0x0);
          local_2c = cbMultiByte;
          if (pwStack_4 != (wchar_t *)0x0) {
            _wcsstr((wchar_t *)_Stack_24._8_4_,pwStack_4);
          }
          if (param_3 != (char *)0x0) {
            lpMultiByteStr = operator_new((int)cbMultiByte + 1);
            WideCharToMultiByte(0,0,(LPCWCH)_Stack_24._8_4_,-1,lpMultiByteStr,(int)cbMultiByte,
                                (LPCCH)0x0,(LPBOOL)0x0);
            pCVar5 = lpMultiByteStr;
            do {
              cVar2 = *pCVar5;
              pCVar5 = pCVar5 + 1;
            } while (cVar2 != '\0');
            pCVar9 = (CHAR *)(iStack_8 + -1);
            do {
              pcVar1 = pCVar9 + 1;
              pCVar9 = pCVar9 + 1;
            } while (*pcVar1 != '\0');
            pCVar8 = lpMultiByteStr;
            for (uVar7 = (uint)((int)pCVar5 - (int)lpMultiByteStr) >> 2; uVar7 != 0;
                uVar7 = uVar7 - 1) {
              *(undefined4 *)pCVar9 = *(undefined4 *)pCVar8;
              pCVar8 = pCVar8 + 4;
              pCVar9 = pCVar9 + 4;
            }
            for (uVar7 = (int)pCVar5 - (int)lpMultiByteStr & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pCVar9 = *pCVar8;
              pCVar8 = pCVar8 + 1;
              pCVar9 = pCVar9 + 1;
            }
            if (pwStack_4 != (wchar_t *)0x0) {
              pwVar6 = _wcsstr((wchar_t *)_Stack_24._8_4_,pwStack_4);
              puVar10 = (undefined4 *)(iStack_8 + -1);
              if (pwVar6 == (wchar_t *)0x0) {
                do {
                  pcVar1 = (char *)((int)puVar10 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                } while (*pcVar1 != '\0');
                *puVar10 = 0x4f4b3a;
              }
              else {
                do {
                  pcVar1 = (char *)((int)puVar10 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                } while (*pcVar1 != '\0');
                *puVar10 = &LAB_004b4f3a;
              }
            }
            puVar11 = (undefined2 *)(iStack_8 + -1);
            do {
              pcVar1 = (char *)((int)puVar11 + 1);
              puVar11 = (undefined2 *)((int)puVar11 + 1);
            } while (*pcVar1 != '\0');
            *puVar11 = 10;
                    /* WARNING: Subroutine does not return */
            _free(lpMultiByteStr);
          }
          uStack_30 = uStack_30 + 5 + (int)cbMultiByte;
        }
        VariantClear((VARIANTARG *)&_Stack_24.field0);
        if (unaff_EBX != (int *)0x0) {
          (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          unaff_EBX = (int *)0x0;
        }
      }
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      unaff_ESI = (int *)0x0;
      iVar4 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&stack0xffffffc8,&local_28);
    }
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 8))(local_2c);
      local_2c = (int *)0x0;
    }
  }
  if (local_28 != (int *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
    local_28 = (int *)0x0;
  }
  if (DAT_010bab18 != (undefined4 *)0x0) {
    (**(code **)*DAT_010bab18)(1);
  }
  DAT_010bab18 = (undefined4 *)0x0;
  *param_2 = _Stack_24._8_4_;
  return CONCAT31((int3)((uint)_Stack_24._8_4_ >> 8),uStack_30._3_1_);
}


//// FUNCTION FUN_00a2d1c0 @ 00a2d1c0 ////

undefined4 * __thiscall FUN_00a2d1c0(void *this,undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c93420(this,0,param_1,param_2,(undefined4 *)L"Video OutPut");
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d76dec;
  *(undefined ***)((int)this + 0x48) = &PTR_FUN_00d76d8c;
  *(undefined ***)((int)this + 0x54) = &PTR_FUN_00d76d3c;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_00d76d20;
  FUN_00c94f10((undefined4 *)((int)this + 0xf0));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x138));
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a2d280 @ 00a2d280 ////

void FUN_00a2d280(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2d28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + -8))();
  return;
}


//// FUNCTION FUN_00a2d290 @ 00a2d290 ////

void FUN_00a2d290(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2d29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 4))();
  return;
}


//// FUNCTION FUN_00a2d2a0 @ 00a2d2a0 ////

void FUN_00a2d2a0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2d2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + -8) + 8))();
  return;
}


//// FUNCTION FUN_00a2d2f0 @ 00a2d2f0 ////

void __fastcall FUN_00a2d2f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa348;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d76dec;
  param_1[0x12] = &PTR_FUN_00d76d8c;
  param_1[0x15] = &PTR_FUN_00d76d3c;
  param_1[0x16] = &PTR_LAB_00d76d20;
  local_4 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4e));
  FUN_00c94ed0((int)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  FUN_00c93030(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2d590 @ 00a2d590 ////

uint __thiscall FUN_00a2d590(void *this,undefined4 *param_1)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa388;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)((int)this + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  uVar1 = FUN_00c8e2d0(this,param_1);
  if (-1 < (int)uVar1) {
    if (*(int *)((int)this + 0x78) == 0) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0x8000ffff;
    }
    uVar1 = (uint)*(ushort *)(*(int *)((int)this + 0x78) + 0x3e);
    if ((((uVar1 == 8) || (uVar1 == 0x18)) || (uVar1 == 0x20)) &&
       (*(uint *)((int)this + 0x114) == uVar1)) {
      FUN_00c95210((void *)((int)this + 0xa8),param_1);
      uVar1 = 0;
    }
    else {
      FUN_009d9820();
      uVar1 = 0x80070057;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00a2d930 @ 00a2d930 ////

undefined4 * __thiscall FUN_00a2d930(void *this,int param_1,uint *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa3f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c93190(this,0,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d76be4;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00d76ba4;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d76b8c;
  this_00 = operator_new(0x170);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00a2d1c0(this_00,param_2,this);
  }
  *(undefined4 **)((int)this + 0x70) = puVar1;
  if (param_2 != (uint *)0x0) {
    *param_2 = (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a2da00 @ 00a2da00 ////

undefined4 * __thiscall FUN_00a2da00(void *this,byte param_1)

{
  FUN_00a2c630(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2da20 @ 00a2da20 ////

void FUN_00a2da20(int param_1,uint *param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa40b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x78);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00a2d930(this,param_1,param_2);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2dab0 @ 00a2dab0 ////

undefined4 __thiscall FUN_00a2dab0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  pvVar2 = *(void **)((int)this + 0x70);
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = FUN_00c94800(pvVar2,3);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  if (*(int *)((int)pvVar2 + 0xc0) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(*(int *)((int)pvVar2 + 0xc0) + 0x44);
  }
  if ((*(int *)((int)pvVar2 + 0x16c) == 0) && (uVar4 != 0)) {
    pvVar2 = operator_new(uVar4);
    *(void **)(*(int *)((int)this + 0x70) + 0x16c) = pvVar2;
    puVar5 = *(undefined4 **)(*(int *)((int)this + 0x70) + 0x16c);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar5 = *(undefined4 **)(*(int *)((int)this + 0x70) + 0x16c);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar1 = FUN_00c94800(*(void **)((int)this + 0x70),2);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00a2db50 @ 00a2db50 ////

undefined4 * __thiscall FUN_00a2db50(void *this,undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c93420(this,0,param_1,param_2,(undefined4 *)L"Audio OutPut");
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d76f2c;
  *(undefined ***)((int)this + 0x48) = &PTR_FUN_00d76ecc;
  *(undefined ***)((int)this + 0x54) = &PTR_FUN_00d76e7c;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_00d76e64;
  FUN_00c94f10((undefined4 *)((int)this + 0xf0));
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x138));
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a2dc20 @ 00a2dc20 ////

void __fastcall FUN_00a2dc20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d76f2c;
  param_1[0x12] = &PTR_FUN_00d76ecc;
  param_1[0x15] = &PTR_FUN_00d76e7c;
  param_1[0x16] = &PTR_LAB_00d76e64;
  local_4 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4e));
  FUN_00c94ed0((int)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  FUN_00c93030(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2dde2 @ 00a2dde2 ////

undefined4 __fastcall FUN_00a2dde2(undefined4 param_1,int param_2)

{
  short *psVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  piVar3 = in_EAX;
  piVar4 = &DAT_00db11bc;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (((bVar5) && (in_EAX[8] != 0)) && (in_EAX + 4 != (int *)0x0)) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = in_EAX + 4;
    piVar4 = &DAT_00db0c7c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = in_EAX + 0xb;
      piVar4 = &DAT_00db04ec;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (((((bVar5) && (in_EAX[0x10] == 0x12)) &&
           ((psVar1 = (short *)in_EAX[0x11], psVar1 != (short *)0x0 &&
            ((*psVar1 == 1 && ((uint)(ushort)psVar1[1] == *(uint *)(param_2 + 0x11c))))))) &&
          (*(int *)(psVar1 + 2) == *(int *)(param_2 + 0x114))) &&
         ((uint)(ushort)psVar1[7] == *(uint *)(param_2 + 0x118))) {
        return 0;
      }
    }
  }
  return 0x80070057;
}


//// FUNCTION FUN_00a2de80 @ 00a2de80 ////

uint __thiscall FUN_00a2de80(void *this,undefined4 *param_1)

{
  uint uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa488;
  local_c = ExceptionList;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)((int)this + 0xa0) + 0x58);
  ExceptionList = &local_c;
  EnterCriticalSection(lpCriticalSection);
  local_4 = 0;
  uVar1 = FUN_00c8e2d0(this,param_1);
  if (-1 < (int)uVar1) {
    if (*(int *)((int)this + 0x78) == 0) {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_c;
      return 0x8000ffff;
    }
    FUN_00c95210((void *)((int)this + 0xa8),param_1);
    uVar1 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00a2e040 @ 00a2e040 ////

undefined4 __fastcall FUN_00a2e040(int *param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  undefined4 uVar5;
  int *local_4;
  
  local_4 = param_1;
  if ((uint)param_1[0x5b] <= (uint)param_1[0x55]) {
    if (DAT_010bab20 == '\0') {
      (**(code **)(param_1[0x12] + 0x4c))();
      DAT_010bab20 = '\x01';
    }
    return 0;
  }
  uVar5 = 0;
  piVar4 = (int *)0x0;
  ppiVar3 = &local_4;
  piVar1 = param_1 + 0x12;
  iVar2 = (**(code **)(param_1[0x12] + 0x40))(ppiVar3,0,0,0);
  if (iVar2 < 0) {
    return 0x80004002;
  }
  iVar2 = (**(code **)(*param_1 + 8))(uVar5);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x44))();
    (*(code *)(*ppiVar3)[2])(ppiVar3);
    return 0;
  }
  if (iVar2 == 1) {
    (**(code **)(*piVar4 + 8))();
    (**(code **)(*piVar1 + 0x4c))();
    return 1;
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar1 + 0x4c))();
  FUN_00c8de20((void *)param_1[0x3a],3,iVar2,0);
  return 3;
}


//// FUNCTION FUN_00a2e2e0 @ 00a2e2e0 ////

undefined4 * __thiscall FUN_00a2e2e0(void *this,int param_1,uint *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa4f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c93190(this,0,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d76c64;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_00d76c24;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d76c0c;
  this_00 = operator_new(0x178);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00a2db50(this_00,param_2,this);
  }
  *(undefined4 **)((int)this + 0x70) = puVar1;
  if (param_2 != (uint *)0x0) {
    *param_2 = (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a2e3b0 @ 00a2e3b0 ////

undefined4 * __thiscall FUN_00a2e3b0(void *this,byte param_1)

{
  FUN_00a2c750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2e3d0 @ 00a2e3d0 ////

void FUN_00a2e3d0(int param_1,uint *param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa50b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x78);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00a2e2e0(this,param_1,param_2);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = (puVar1 != (undefined4 *)0x0) - 1 & 0x8007000e;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2e440 @ 00a2e440 ////

void __thiscall FUN_00a2e440(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  
  if (*(int *)((int)this + 0x70) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x70) + 0x168) = param_1;
    *(undefined4 *)(*(int *)((int)this + 0x70) + 0x16c) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x70) + 0x170) = param_3;
    while (this_00 = *(void **)((int)this + 0x70),
          *(uint *)((int)this_00 + 0x154) < *(uint *)((int)this_00 + 0x16c)) {
      FUN_00c94800(this_00,2);
    }
  }
  return;
}


//// FUNCTION FUN_00a2e4b0 @ 00a2e4b0 ////

undefined4 * __thiscall FUN_00a2e4b0(void *this,int *param_1)

{
  *(int **)this = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return this;
}


//// FUNCTION FUN_00a2e610 @ 00a2e610 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl FUN_00a2e610(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int *local_24;
  int *local_20;
  void *local_1c;
  int local_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  puStack_8 = &LAB_00cfa550;
  pvStack_c = ExceptionList;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    local_4 = (int *)0x0;
    ExceptionList = &pvStack_c;
    if (param_1 != (int *)0x0) {
      ExceptionList = &pvStack_c;
      (**(code **)(*param_1 + 8))(param_1);
    }
    local_4 = (int *)0xffffffff;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    ExceptionList = pvStack_c;
    return -0x7ff8ffa9;
  }
  local_18 = 0;
  local_1c = (void *)0x0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_4 = (int *)0x5;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if ((iVar2 < 0) || (iVar2 = (**(code **)(*param_2 + 0x28))(param_2,&local_24), iVar2 < 0)) {
    pvStack_c._0_1_ = 4;
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    pvStack_c._0_1_ = 3;
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    pvStack_c._0_1_ = 2;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))(local_24);
    }
    pvStack_c._0_1_ = 1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    (**(code **)(*param_1 + 8))(param_1);
    iVar3 = *param_2;
  }
  else {
    bVar1 = false;
    local_18 = 0;
    do {
      do {
        if (unaff_EBX != (int *)0x0) {
          (**(code **)(*unaff_EBX + 8))(unaff_EBX);
          unaff_EBX = (int *)0x0;
        }
        iVar2 = (**(code **)(*local_20 + 0xc))(local_20,1,&stack0xffffffd8,&local_18);
        if (iVar2 != 0) {
          local_1c._0_1_ = 4;
          if (!bVar1) {
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
            }
            local_1c._0_1_ = 3;
            if (&local_18 != (int *)0x0) {
              (**(code **)(local_18 + 8))(&local_18);
            }
            local_1c._0_1_ = 2;
            if (unaff_ESI != (int *)0x0) {
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            }
            local_1c._0_1_ = 1;
            if (unaff_EDI != (int *)0x0) {
              (**(code **)(*unaff_EDI + 8))(unaff_EDI);
            }
            local_1c = (void *)((uint)local_1c._1_3_ << 8);
            (**(code **)(*param_1 + 8))(param_1);
            local_20 = (int *)0xffffffff;
            (**(code **)(*piStack_14 + 8))(piStack_14);
            ExceptionList = unaff_EBP;
            return -0x7fffbffb;
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
          }
          local_1c._0_1_ = 3;
          if (&local_18 != (int *)0x0) {
            (**(code **)(local_18 + 8))(&local_18);
          }
          local_1c._0_1_ = 2;
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          }
          local_1c._0_1_ = 1;
          if (unaff_EDI != (int *)0x0) {
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
          }
          local_1c = (void *)((uint)local_1c._1_3_ << 8);
          (**(code **)(*param_1 + 8))(param_1);
          local_20 = (int *)0xffffffff;
          (**(code **)(*piStack_14 + 8))(piStack_14);
          ExceptionList = unaff_EBP;
          return 0;
        }
        iVar2 = (**(code **)(local_18 + 0x24))(&local_18,&stack0xffffffd4);
      } while ((iVar2 < 0) || (local_1c == (void *)0x0));
      do {
        if (unaff_EBP != (int *)0x0) {
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          unaff_EBP = (int *)0x0;
        }
        iVar2 = (**(code **)(*local_24 + 0xc))(local_24,1,&stack0xffffffd4,&local_18);
        if (iVar2 != 0) goto LAB_00a2e7d3;
        iVar2 = (**(code **)(*unaff_EBP + 0x24))(unaff_EBP,&local_1c);
      } while (((iVar2 < 0) || (local_1c == (void *)0x1)) ||
              (iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,unaff_EBX,unaff_EBP), iVar2 < 0));
      bVar1 = true;
LAB_00a2e7d3:
      iVar2 = (**(code **)(*local_24 + 0x14))(local_24);
    } while (-1 < iVar2);
    pvStack_c._0_1_ = 4;
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    pvStack_c._0_1_ = 3;
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    pvStack_c._0_1_ = 2;
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 8))(local_24);
    }
    pvStack_c._0_1_ = 1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    (**(code **)(*param_1 + 8))(param_1);
    iVar3 = *local_4;
    param_2 = local_4;
  }
  uStack_10 = 0xffffffff;
  (**(code **)(iVar3 + 8))(param_2);
  ExceptionList = local_1c;
  return iVar2;
}


//// FUNCTION WMA_ExportEncodeProfile @ 00a2e980 ////

int __cdecl WMA_ExportEncodeProfile(int *param_1,void *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *_Memory;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar1 = param_1;
  puStack_8 = &LAB_00cfa570;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    if (0x14 < param_4) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    return -0x7fffbffd;
  }
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1 = (int *)0x0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar2 = WMCreateProfileManager(&param_1);
  if (iVar2 < 0) {
    FUN_009d9820();
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,0x70000,piVar1);
    if (-1 < iVar2) {
      uVar3 = FUN_009d3720(&param_2);
      if (uVar3 != 0) {
        _Memory = operator_new(uVar3);
        puVar5 = _Memory;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        FUN_009d3ca0(&param_2,_Memory,uVar3,(undefined1 *)0x0);
        (**(code **)(*param_1 + 0x14))(param_1,_Memory,piVar1);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
        _free(param_2);
      }
      ExceptionList = local_c;
      return 0;
    }
    FUN_009d9820();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION FUN_00a2eb30 @ 00a2eb30 ////

uint __fastcall FUN_00a2eb30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_4;
  
  uVar3 = *(uint *)(param_1 + 0x868);
  if (uVar3 == 0) {
    local_4 = 1;
    uVar3 = FUN_00a2da20(0,&local_4);
    *(uint *)(param_1 + 0x868) = uVar3;
    if (-1 < (int)local_4) {
      iVar1 = *(int *)(uVar3 + 0x70);
      *(undefined4 *)(iVar1 + 0x154) = *(undefined4 *)(param_1 + 0x82c);
      *(undefined4 *)(iVar1 + 0x158) = *(undefined4 *)(param_1 + 0x830);
      *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(param_1 + 0x834);
      *(undefined4 *)(iVar1 + 0x160) = *(undefined4 *)(param_1 + 0x838);
      *(undefined4 *)(iVar1 + 0x164) = *(undefined4 *)(param_1 + 0x83c);
      uVar2 = *(undefined4 *)(param_1 + 0x840);
      *(undefined4 *)(iVar1 + 0x168) = uVar2;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a2ecd0 @ 00a2ecd0 ////

undefined1 FUN_00a2ecd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBX;
  int *unaff_EBP;
  int *piVar5;
  undefined4 unaff_retaddr;
  int *piVar6;
  int *local_38;
  int *local_34;
  int *local_30;
  int *piStack_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  void *local_18;
  undefined4 local_14;
  undefined1 *puStack_10;
  int *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa580;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(DAT_010bab18 + 0x828) = 0;
  uVar1 = FUN_00a2cbd0();
  if ((char)uVar1 != '\0') {
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_20 = (int *)0x0;
    local_24 = (int *)0x0;
    local_18 = (void *)0x0;
    local_1c = 0;
    local_28 = (int *)0x0;
    local_14 = 0;
    local_38 = (int *)CoCreateInstance((IID *)&rclsid_00db0abc,(LPUNKNOWN)0x0,1,
                                       (IID *)&riid_00daf37c,&local_34);
    if (((((int)local_38 < 0) ||
         (local_38 = (int *)CoCreateInstance((IID *)&rclsid_00db0afc,(LPUNKNOWN)0x0,1,
                                             (IID *)&riid_00daf34c,&local_20), (int)local_38 < 0))
        || (local_38 = (int *)(**(code **)(*local_20 + 0xc))(), (int)local_38 < 0)) ||
       (((local_38 = (int *)(**(code **)*local_34)(), (int)local_38 < 0 ||
         (local_38 = (int *)(**(code **)*local_34)(), (int)local_38 < 0)) ||
        (this = (void *)FUN_00a2e3d0(0,(uint *)&local_38), (int)local_38 < 0)))) {
      FUN_00a2bfc0();
      ExceptionList = local_c;
      return 0;
    }
    FUN_00a2c7c0(this,(undefined4 *)(DAT_010bab18 + 0x844));
    puVar2 = FUN_00aa64c0(0,(int *)&local_38);
    if ((-1 < (int)local_38) &&
       (local_38 = (int *)CoCreateInstance((IID *)&rclsid_00db089c,(LPUNKNOWN)0x0,1,
                                           (IID *)&riid_00daf4dc,&local_28), -1 < (int)local_38)) {
      piVar4 = &local_1c;
      (**(code **)*local_28)();
      (**(code **)(*local_28 + 0xc))(local_28,unaff_EBX + 0x210,0);
      if (this == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)this + 0xc;
      }
      local_38 = (int *)(**(code **)(*piVar4 + 0xc))(piVar4,iVar3,L"Movies Audio Source");
      if ((((int)local_38 < 0) ||
          (local_38 = (int *)(**(code **)(*local_34 + 0xc))(), (int)local_38 < 0)) ||
         (local_38 = (int *)(**(code **)(*local_34 + 0xc))(), (int)local_38 < 0)) {
        FUN_00a2bfc0();
        ExceptionList = local_c;
        return 0;
      }
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = puVar2 + 3;
      }
      if (this == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)((int)this + 0xc);
      }
      puStack_10 = &stack0xffffffb0;
      piVar6 = local_34;
      FUN_00a2e4b0(&stack0xffffffb0,piVar4);
      puStack_10 = &stack0xffffffac;
      piVar4 = extraout_ECX;
      FUN_00a2e4b0(&stack0xffffffac,piVar5);
      local_38 = (int *)FUN_00a2e610(piVar4,piVar6);
      if (-1 < (int)local_38) {
        if (puVar2 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = puVar2 + 3;
        }
        puStack_10 = &stack0xffffffb0;
        piVar6 = extraout_ECX_00;
        FUN_00a2e4b0(&stack0xffffffb0,local_28);
        puStack_10 = &stack0xffffffac;
        piVar5 = extraout_ECX_01;
        FUN_00a2e4b0(&stack0xffffffac,piVar4);
        local_38 = (int *)FUN_00a2e610(piVar5,piVar6);
        if (-1 < (int)local_38) {
          iVar3 = (**(code **)(*local_24 + 0x1c))();
          if (iVar3 < 0) {
            FUN_00a2bfc0();
          }
          else {
            FUN_00a2e440(this,unaff_retaddr,param_1,param_2);
            iVar3 = (**(code **)(*local_28 + 0x3c))();
            if (iVar3 < 0) {
              FUN_00a2bfc0();
            }
            else {
              *(undefined1 *)(DAT_010bab18 + 0x828) = 1;
            }
          }
          local_30 = (int *)0x0;
          piVar4 = (int *)(**(code **)(*local_38 + 0x14))();
          if (-1 < (int)piVar4) {
            iVar3 = (**(code **)(*local_38 + 0xc))(local_38,1,&stack0x00000000,0);
            while (iVar3 == 0) {
              (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,0);
              (**(code **)(*unaff_EBP + 0x14))(unaff_EBP);
              if (local_c != (int *)0x0) {
                (**(code **)(*local_c + 8))(local_c);
                local_c = (int *)0x0;
              }
              iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4,1,&local_c,0);
            }
            if (local_38 != (int *)0x0) {
              (**(code **)(*local_38 + 8))(local_38);
              local_38 = (int *)0x0;
            }
          }
          if (local_34 != (int *)0x0) {
            (**(code **)(*local_34 + 8))(local_34);
            local_34 = (int *)0x0;
          }
          if (unaff_EBP != (int *)0x0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          if (piStack_2c != (int *)0x0) {
            (**(code **)(*piStack_2c + 8))(piStack_2c);
            piStack_2c = (int *)0x0;
          }
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 8))(local_24);
            local_24 = (int *)0x0;
          }
          if (local_30 != (int *)0x0) {
            (**(code **)(*local_30 + 8))(local_30);
            local_30 = (int *)0x0;
          }
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 8))(local_28);
          }
          ExceptionList = local_18;
          return *(undefined1 *)(DAT_010bab18 + 0x828);
        }
      }
    }
    FUN_00a2bfc0();
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00a2f0f0 @ 00a2f0f0 ////

undefined4 * __thiscall FUN_00a2f0f0(void *this,byte param_1)

{
  FUN_00a2d2f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2f110 @ 00a2f110 ////

undefined4 * __thiscall FUN_00a2f110(void *this,byte param_1)

{
  FUN_00a2dc20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2f1c0 @ 00a2f1c0 ////

undefined4 * __thiscall FUN_00a2f1c0(void *this,undefined4 *param_1)

{
  FUN_009ee740(this);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_00d77028,this);
  }
  return this;
}


//// FUNCTION FUN_00a2f1f0 @ 00a2f1f0 ////

undefined4 __cdecl FUN_00a2f1f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  char *pcStack_67c;
  undefined4 uStack_678;
  uint uStack_674;
  char acStack_670 [20];
  wchar_t awStack_65c [4];
  undefined2 *puStack_654;
  undefined4 uStack_650;
  uint uStack_64c;
  undefined2 auStack_648 [10];
  wchar_t *apwStack_634 [2];
  uint uStack_62c;
  wchar_t awStack_614 [260];
  wchar_t awStack_40c [256];
  wchar_t awStack_20c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa5b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_010bab18 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_010bab18)(1);
    DAT_010bab18 = (undefined4 *)0x0;
  }
  puVar1 = operator_new(0x888);
  if (puVar1 == (undefined4 *)0x0) {
    DAT_010bab18 = (undefined4 *)0x0;
  }
  else {
    DAT_010bab18 = FUN_00a2cb40(puVar1);
  }
  puVar1 = DAT_010bab18 + 2;
  for (iVar5 = 0x212; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  __wsplitpath((wchar_t *)(DAT_010bab18 + 2),awStack_65c,awStack_614,awStack_40c,awStack_20c);
  pcStack_67c = acStack_670;
  acStack_670[0] = '\0';
  uStack_678 = 0;
  uStack_674 = 0x14;
  _strncpy(pcStack_67c,"",0);
  uStack_678 = 0;
  *pcStack_67c = '\0';
  uStack_4 = 0;
  uVar2 = FUN_009d4750(&pcStack_67c);
  if ((char)uVar2 != '\0') {
    uVar3 = FUN_004302c0(&pcStack_67c,&DAT_00d1835c,0xffffffff,1);
    if (uVar3 != 0xffffffff) {
      puVar1 = FUN_00430770(&pcStack_67c,&puStack_654,0,uVar3);
      FUN_004015d0(&pcStack_67c,(char *)*puVar1,puVar1[1]);
      if (0x14 < uStack_64c) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_654);
      }
      FUN_004073f0(&pcStack_67c,"\\The Movies\\",0xc);
    }
  }
  FUN_009ad240(apwStack_634,pcStack_67c,'\0');
  _swprintf((wchar_t *)(DAT_010bab18 + 0x84),0xd77068,apwStack_634[0],DAT_010bab1c);
  DAT_010bab1c = DAT_010bab1c + 1;
  pwVar4 = _wcsstr((wchar_t *)(DAT_010bab18 + 0x106),L"Windows Media Format");
  if (pwVar4 == (wchar_t *)0x0) {
    DAT_010bab18[0x20f] = 0;
    pwVar4 = L"%s%s%s.avi";
  }
  else {
    DAT_010bab18[0x20f] = 1;
    pwVar4 = L"%s%s%s.wmv";
  }
  _swprintf((wchar_t *)(DAT_010bab18 + 2),(size_t)pwVar4,awStack_65c,awStack_614,awStack_40c);
  pwVar4 = (wchar_t *)(DAT_010bab18 + 2);
  puStack_654 = auStack_648;
  auStack_648[0] = 0;
  uStack_650 = 0;
  uStack_64c = 10;
  uVar3 = FUN_00ace02d(pwVar4);
  FUN_004036d0(&puStack_654,pwVar4,uVar3);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FUN_009d35a0(&puStack_654);
  if (10 < uStack_64c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_654);
  }
  if (10 < uStack_62c) {
                    /* WARNING: Subroutine does not return */
    _free(apwStack_634[0]);
  }
  if (0x14 < uStack_674) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_67c);
  }
  ExceptionList = pvStack_c;
  return CONCAT31((int3)(uStack_64c >> 8),1);
}


//// FUNCTION FUN_00a2f490 @ 00a2f490 ////

void __fastcall FUN_00a2f490(undefined4 *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa5d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d76cd8;
  local_4 = 0;
  FUN_00a2c010((int)param_1);
  FUN_00a2be20((int)param_1);
  if (*(char *)(param_1 + 0x214) != '\0') {
    CoUninitialize();
  }
  local_20[0] = 0;
  local_28 = 0;
  pwVar2 = (wchar_t *)(DAT_010bab18 + 0x210);
  local_2c = local_20;
  local_24 = 10;
  uVar1 = FUN_00ace02d(pwVar2);
  FUN_004036d0(&local_2c,pwVar2,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009d35a0(&local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *param_1 = &PTR_LAB_00d76ad8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a2f550 @ 00a2f550 ////

uint __fastcall FUN_00a2f550(int param_1)

{
  uint uVar1;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *piVar2;
  int *piVar3;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))();
  if ((((-1 < (int)uVar1) &&
       (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)) &&
      ((*(char *)(param_1 + 0x828) == '\0' ||
       (((uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1 &&
         (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)) &&
        (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))
                           (*(int **)(param_1 + 0x858),*(undefined4 *)(param_1 + 0x874),
                            L"Audio Compressor"), -1 < (int)uVar1)))))) &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)) {
    if (*(int *)(param_1 + 0x868) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(param_1 + 0x868) + 0xc);
    }
    piVar3 = *(int **)(param_1 + 0x86c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar1 = FUN_00a2e610(piVar2,piVar3);
    if (-1 < (int)uVar1) {
      piVar3 = extraout_ECX;
      FUN_00a2e4b0(&stack0xffffffc8,*(int **)(param_1 + 0x880));
      piVar2 = extraout_ECX_00;
      FUN_00a2e4b0(&stack0xffffffc4,*(int **)(param_1 + 0x86c));
      uVar1 = FUN_00a2e610(piVar2,piVar3);
      if (-1 < (int)uVar1) {
        uVar1 = CONCAT31((int3)(uVar1 >> 8),*(char *)(param_1 + 0x828));
        if (*(char *)(param_1 + 0x828) == '\0') {
LAB_00a2f761:
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
        piVar3 = extraout_ECX_01;
        FUN_00a2e4b0(&stack0xffffffc8,*(int **)(param_1 + 0x87c));
        piVar2 = extraout_ECX_02;
        FUN_00a2e4b0(&stack0xffffffc4,*(int **)(param_1 + 0x878));
        uVar1 = FUN_00a2e610(piVar2,piVar3);
        if (-1 < (int)uVar1) {
          piVar3 = extraout_ECX_03;
          FUN_00a2e4b0(&stack0xffffffc8,*(int **)(param_1 + 0x874));
          piVar2 = extraout_ECX_04;
          FUN_00a2e4b0(&stack0xffffffc4,*(int **)(param_1 + 0x87c));
          uVar1 = FUN_00a2e610(piVar2,piVar3);
          if (-1 < (int)uVar1) {
            piVar3 = extraout_ECX_05;
            FUN_00a2e4b0(&stack0xffffffc8,*(int **)(param_1 + 0x880));
            piVar2 = extraout_ECX_06;
            FUN_00a2e4b0(&stack0xffffffc4,*(int **)(param_1 + 0x874));
            uVar1 = FUN_00a2e610(piVar2,piVar3);
            if (-1 < (int)uVar1) goto LAB_00a2f761;
          }
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00a2f770 @ 00a2f770 ////

undefined4 * __cdecl FUN_00a2f770(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x20;
  local_20 = _malloc(0x20);
  _strncpy(local_20,"Data\\Video\\WMVProfile_",0x16);
  local_1c = 0x16;
  local_20[0x16] = '\0';
  uVar1 = FUN_00acd42c();
  switch((int)uVar1) {
  case 0:
    FUN_00430a20(&local_20,"Upload");
    break;
  case 1:
    FUN_00430a20(&local_20,"Small");
    break;
  case 2:
    FUN_00430a20(&local_20,"Medium");
    break;
  case 3:
    FUN_00430a20(&local_20,"High");
    break;
  case 4:
    FUN_00430a20(&local_20,"Best");
    break;
  default:
    FUN_004073f0(&local_20,"Best",4);
  }
  if (*(char *)(param_2 + 0x820) == '\0') {
    FUN_004073f0(&local_20,"_NA",3);
  }
  FUN_004073f0(&local_20,".prx",4);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_20,local_1c);
  if (local_18 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_00a2f8c0 @ 00a2f8c0 ////

bool __fastcall FUN_00a2f8c0(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x86c) != 0) {
    return false;
  }
  bVar1 = FUN_00a2cd30('`');
  return bVar1;
}


//// FUNCTION FUN_00a2f920 @ 00a2f920 ////

bool __fastcall FUN_00a2f920(int param_1)

{
  bool bVar1;
  WINBOOL WVar2;
  HRESULT HVar3;
  
  if (*(int *)(param_1 + 0x874) != 0) {
    return false;
  }
  WVar2 = IsDebuggerPresent();
  if (WVar2 == 1) {
    HVar3 = CoCreateInstance((IID *)&rclsid_00db08ec,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                             (LPVOID *)(param_1 + 0x874));
    return -1 < HVar3;
  }
  bVar1 = FUN_00a2cd30('a');
  return bVar1;
}


//// FUNCTION FUN_00a2f9b0 @ 00a2f9b0 ////

undefined4 * __thiscall FUN_00a2f9b0(void *this,byte param_1)

{
  FUN_00a2f490(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a2f9d0 @ 00a2f9d0 ////

uint __fastcall FUN_00a2f9d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  HRESULT HVar7;
  undefined3 extraout_var_00;
  int *piStack_50;
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
  puStack_8 = &LAB_00cfa5f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_00a2eb30(param_1);
  if ((char)uVar4 == '\0') {
    ExceptionList = local_c;
    return uVar4;
  }
  if (*(int *)(param_1 + 0x83c) == 0) {
    bVar3 = FUN_00a2f8c0(param_1);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (!bVar3) goto LAB_00a2fbc7;
    uVar5 = FUN_00a2c2c0(param_1);
    if ((char)uVar5 == '\0') {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar4 = FUN_00ace02d((wchar_t *)(param_1 + 0x418));
      FUN_004036d0(&local_4c,(wchar_t *)(param_1 + 0x418),uVar4);
      local_4 = 0;
      FUN_009b8c30(local_2c,&local_4c);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_009d9820();
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x85c) + 0x14))
                      (*(int **)(param_1 + 0x85c),&DAT_00db0cfc,param_1 + 8,param_1 + 0x880,0);
    if ((int)uVar4 < 0) {
      ExceptionList = local_c;
      return uVar4 & 0xffffff00;
    }
  }
  else {
    uVar4 = CoCreateInstance((IID *)&rclsid_00db083c,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                             (LPVOID *)(param_1 + 0x880));
    if ((int)uVar4 < 0) goto LAB_00a2fbc7;
    puVar1 = *(LPVOID *)(param_1 + 0x880);
    uVar4 = (**(code **)*puVar1)(puVar1,&DAT_00daf39c,(undefined4 *)(param_1 + 0x884));
    if (((int)uVar4 < 0) ||
       (piVar2 = *(int **)(param_1 + 0x884),
       uVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1 + 8,0), (int)uVar4 < 0))
    goto LAB_00a2fbc7;
  }
  uVar4 = CONCAT31((int3)(uVar4 >> 8),*(char *)(param_1 + 0x828));
  if (*(char *)(param_1 + 0x828) == '\0') {
LAB_00a2fc17:
    ExceptionList = local_c;
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  uVar4 = CoCreateInstance((IID *)&rclsid_00db08dc,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                           (LPVOID *)(param_1 + 0x878));
  if (-1 < (int)uVar4) {
    FUN_00a2f1c0(&piStack_50,*(LPVOID *)(param_1 + 0x878));
    local_4 = 2;
    iVar6 = (**(code **)(*piStack_50 + 0xc))(piStack_50,param_1 + 0x210,0);
    if (-1 < iVar6) {
      HVar7 = CoCreateInstance((IID *)&rclsid_00d75a00,(LPUNKNOWN)0x0,1,(IID *)&riid_00daf4dc,
                               (LPVOID *)(param_1 + 0x87c));
      local_4 = 0xffffffff;
      if (-1 < HVar7) {
        if (piStack_50 != (int *)0x0) {
          (**(code **)(*piStack_50 + 8))(piStack_50);
        }
        bVar3 = FUN_00a2f920(param_1);
        uVar4 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3) goto LAB_00a2fc17;
        goto LAB_00a2fbc7;
      }
    }
    local_4 = 0xffffffff;
    uVar4 = 0;
    if (piStack_50 != (int *)0x0) {
      uVar4 = (**(code **)(*piStack_50 + 8))(piStack_50);
    }
  }
LAB_00a2fbc7:
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00a2fc30 @ 00a2fc30 ////

/* WARNING: Removing unreachable block (ram,0x00a2ff24) */
/* WARNING: Removing unreachable block (ram,0x00a2fed4) */
/* WARNING: Removing unreachable block (ram,0x00a2feea) */
/* WARNING: Removing unreachable block (ram,0x00a2ff3a) */
/* WARNING: Removing unreachable block (ram,0x00a2fd99) */
/* WARNING: Removing unreachable block (ram,0x00a2fdb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00a2fc30(int param_1)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *piVar3;
  void *in_stack_ffffff90;
  undefined4 in_stack_ffffff94;
  uint in_stack_ffffff98;
  int *piVar4;
  int *piVar5;
  void *apvStack_38 [2];
  uint uStack_30;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa628;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))();
  if ((-1 < (int)uVar1) &&
     (((*(char *)(param_1 + 0x828) == '\0' ||
       (((uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1 &&
         (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)) &&
        (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)))) &&
      (uVar1 = (**(code **)(**(int **)(param_1 + 0x858) + 0xc))(), -1 < (int)uVar1)))) {
    uVar1 = 0;
    uStack_10 = 0;
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x880))();
    if (-1 < iVar2) {
      FUN_00a2f770(apvStack_38,param_1 + 8);
      uStack_10._0_1_ = 2;
      FUN_00403de0(&stack0xffffff90,apvStack_38);
      iVar2 = WMA_ExportEncodeProfile
                        ((int *)&stack0xffffffc0,in_stack_ffffff90,in_stack_ffffff94,
                         in_stack_ffffff98);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(_DAT_00000000 + 0x1c))();
        if (iVar2 < 0) {
          if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_38[0]);
          }
          goto LAB_00a2fef0;
        }
        if (*(int *)(param_1 + 0x868) == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)(*(int *)(param_1 + 0x868) + 0xc);
        }
        piVar5 = extraout_ECX;
        FUN_00a2e4b0(&stack0xffffffa8,*(int **)(param_1 + 0x880));
        piVar4 = extraout_ECX_00;
        FUN_00a2e4b0(&stack0xffffffa4,piVar3);
        iVar2 = FUN_00a2e610(piVar4,piVar5);
        if (-1 < iVar2) {
          if (*(char *)(param_1 + 0x828) == '\0') {
LAB_00a2ff04:
            if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_38[0]);
            }
            ExceptionList = pvStack_18;
            return 1;
          }
          piVar4 = extraout_ECX_01;
          FUN_00a2e4b0(&stack0xffffffa8,*(int **)(param_1 + 0x87c));
          piVar3 = extraout_ECX_02;
          FUN_00a2e4b0(&stack0xffffffa4,*(int **)(param_1 + 0x878));
          iVar2 = FUN_00a2e610(piVar3,piVar4);
          if (-1 < iVar2) {
            piVar4 = extraout_ECX_03;
            FUN_00a2e4b0(&stack0xffffffa8,*(int **)(param_1 + 0x874));
            piVar3 = extraout_ECX_04;
            FUN_00a2e4b0(&stack0xffffffa4,*(int **)(param_1 + 0x87c));
            iVar2 = FUN_00a2e610(piVar3,piVar4);
            if (-1 < iVar2) {
              piVar4 = extraout_ECX_05;
              FUN_00a2e4b0(&stack0xffffffa8,*(int **)(param_1 + 0x880));
              piVar3 = extraout_ECX_06;
              FUN_00a2e4b0(&stack0xffffffa4,*(int **)(param_1 + 0x874));
              iVar2 = FUN_00a2e610(piVar3,piVar4);
              if (-1 < iVar2) goto LAB_00a2ff04;
            }
          }
        }
      }
      if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_38[0]);
      }
    }
    uVar1 = 0;
  }
LAB_00a2fef0:
  ExceptionList = pvStack_18;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00a2ff60 @ 00a2ff60 ////

uint __fastcall FUN_00a2ff60(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_00a2c110(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    uVar2 = FUN_00a2f9d0(param_1);
    if ((char)uVar2 != '\0') {
      if (*(int *)(param_1 + 0x83c) == 1) {
        uVar2 = FUN_00a2fc30(param_1);
        if ((char)uVar2 == '\0') {
          return uVar2;
        }
      }
      else {
        uVar2 = FUN_00a2f550(param_1);
        if ((char)uVar2 == '\0') goto LAB_00a2ff96;
      }
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_00a2ff96:
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00a2ffa0 @ 00a2ffa0 ////

uint __fastcall FUN_00a2ffa0(int param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar1 = FUN_00a2c110(param_1);
  if ((bVar1) && (uVar3 = FUN_00a2f9d0(param_1), (char)uVar3 != '\0')) {
    if (*(int *)(param_1 + 0x83c) == 1) {
      uVar4 = FUN_00a2fc30(param_1);
      cVar2 = (char)uVar4;
    }
    else {
      uVar4 = FUN_00a2f550(param_1);
      cVar2 = (char)uVar4;
    }
    if (cVar2 != '\0') {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x860) + 0x1c))(*(int **)(param_1 + 0x860));
      if (-1 < iVar5) {
        *(undefined1 *)(param_1 + 4) = 1;
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
      uVar3 = FUN_00a2bfc0();
      return uVar3 & 0xffffff00;
    }
  }
  FUN_00a2bfc0();
  uVar3 = FUN_00a2be20(param_1);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a30010 @ 00a30010 ////

void __fastcall FUN_00a30010(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_00985de0((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    FUN_00985de0((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION FUN_00a30170 @ 00a30170 ////

void __fastcall FUN_00a30170(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  fVar1 = FUN_00990e30(*(float *)(param_1 + 0xc),*(float *)(param_1 + 0x10));
  *(float *)(param_1 + 0x2c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


//// FUNCTION FUN_00a301a0 @ 00a301a0 ////

void __thiscall FUN_00a301a0(void *this,float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_00990e30(*(float *)((int)this + 0x14),param_1 * *(float *)((int)this + 0x18));
  *(float *)((int)this + 0x34) = (float)fVar1;
  fVar1 = FUN_00990e30(*(float *)((int)this + 0x1c),*(float *)((int)this + 0x20));
  *(float *)((int)this + 0x38) = (float)fVar1;
  fVar1 = FUN_00990e30(*(float *)((int)this + 0x24),*(float *)((int)this + 0x28));
  *(float *)((int)this + 0x3c) = (float)fVar1;
  return;
}


//// FUNCTION FUN_00a30280 @ 00a30280 ////

float10 __fastcall FUN_00a30280(int param_1)

{
  if (*(float *)(param_1 + 4) < 200.0) {
    return (float10)*(float *)(param_1 + 4) * (float10)0.005 * (float10)*(float *)(param_1 + 0xc);
  }
  return ((float10)1.0 - ((float10)*(float *)(param_1 + 4) - (float10)200.0) * (float10)0.005) *
         (float10)*(float *)(param_1 + 0xc);
}


//// FUNCTION FUN_00a302c0 @ 00a302c0 ////

float10 __fastcall FUN_00a302c0(int param_1)

{
  float10 fVar1;
  
  if (200.0 <= *(float *)(param_1 + 4)) {
    fVar1 = (float10)*(float *)(param_1 + 4) - (float10)200.0;
  }
  else {
    fVar1 = (float10)200.0 - (float10)*(float *)(param_1 + 4);
  }
  fVar1 = fVar1 * (float10)0.005;
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      return (float10)1.0;
    }
    if ((float10)0.2 < fVar1) {
      return fVar1;
    }
  }
  return (float10)0.2;
}


//// FUNCTION FUN_00a30330 @ 00a30330 ////

void __fastcall FUN_00a30330(undefined4 *param_1)

{
  if ((void *)param_1[4] != (void *)0x0) {
    FUN_00a29960((void *)param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00a30360 @ 00a30360 ////

void __cdecl FUN_00a30360(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_100 [5];
  undefined1 local_fb [251];
  
  if (param_2 != (char *)0x0) {
    if (param_1 == (char *)0x0) {
LAB_00a303c6:
      *param_2 = '\0';
      return;
    }
    _sprintf(local_100,param_1);
    FUN_009ac040(local_100);
    iVar2 = _strncmp(local_100,"head_f_",7);
    if (iVar2 != 0) {
      iVar2 = _strncmp(local_100,"head_m_",7);
      if (iVar2 != 0) goto LAB_00a303c6;
    }
    _sprintf(param_2,"fe_%s",local_fb);
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = _strncmp(param_2 + (int)(pcVar3 + (-3 - (int)(param_2 + 1))),".hd",3);
    if (iVar2 != 0) {
      *param_2 = '\0';
      return;
    }
    _sprintf(param_2 + (int)(pcVar3 + (-2 - (int)(param_2 + 1))),"anm");
  }
  return;
}


//// FUNCTION FUN_00a304f0 @ 00a304f0 ////

void __thiscall FUN_00a304f0(void *this,int param_1,undefined4 param_2,int param_3)

{
  int extraout_ECX;
  void *extraout_EDX;
  void *extraout_EDX_00;
  float10 fVar1;
  
  if (((-1 < param_1) && (param_1 < 0x35)) &&
     ((*(int *)((int)this + 0x184) != param_1 ||
      ((param_3 != -1 || ((*(byte *)((int)this + 0x18c) & 2) == 0)))))) {
    if ((*(int *)((int)this + 0x184) != 0) &&
       (fVar1 = FUN_00a30280((int)this + 0x17c), this = extraout_EDX, (float10)0.0 != fVar1)) {
      *(undefined4 *)((int)extraout_EDX + 400) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x194) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x198) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x19c) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x1a0) = 0;
      *(undefined4 *)((int)extraout_EDX + 400) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x194) = 0x43480000;
      *(undefined4 *)((int)extraout_EDX + 0x198) = *(undefined4 *)((int)extraout_EDX + 0x184);
      fVar1 = FUN_00a30280(extraout_ECX);
      *(float *)((int)extraout_EDX_00 + 0x19c) = (float)fVar1;
      *(uint *)((int)extraout_EDX_00 + 0x1a0) = *(uint *)((int)extraout_EDX_00 + 0x1a0) | 1;
      this = extraout_EDX_00;
    }
    if (param_3 == -1) {
      *(uint *)((int)this + 0x18c) = *(uint *)((int)this + 0x18c) | 2;
      *(undefined4 *)((int)this + 0x17c) = 0x47c35000;
    }
    else {
      *(uint *)((int)this + 0x18c) = *(uint *)((int)this + 0x18c) & 0xfffffffd;
      *(float *)((int)this + 0x17c) = (float)param_3 * 10.0;
      if ((param_1 != 0) && ((float)param_3 * 10.0 < 400.0)) {
        *(undefined4 *)((int)this + 0x17c) = 0x43c80000;
      }
    }
    *(undefined4 *)((int)this + 0x180) = 0;
    *(int *)((int)this + 0x184) = param_1;
    *(undefined4 *)((int)this + 0x188) = param_2;
  }
  return;
}


//// FUNCTION FUN_00a30610 @ 00a30610 ////

undefined4 FUN_00a30610(void)

{
  return CONCAT31((int3)((uint)DAT_010bab2c >> 8),DAT_010bab2c != 0);
}


//// FUNCTION FUN_00a30620 @ 00a30620 ////

void __fastcall FUN_00a30620(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  piVar1 = (int *)((int)param_1 + 0x20);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (DAT_010bab28 != '\0') {
      pvVar4 = (void *)0x0;
      pvVar2 = DAT_010bab34;
      if (DAT_010bab34 != (void *)0x0) {
        while (pvVar3 = pvVar2, pvVar3 != param_1) {
          pvVar2 = *(void **)((int)pvVar3 + 0x2c);
          pvVar4 = pvVar3;
          if (*(void **)((int)pvVar3 + 0x2c) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(param_1);
          }
        }
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)((int)pvVar4 + 0x2c) = *(undefined4 *)((int)param_1 + 0x2c);
                    /* WARNING: Subroutine does not return */
          _free(param_1);
        }
        DAT_010bab34 = *(void **)((int)param_1 + 0x2c);
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x20) = 1;
  }
  return;
}


//// FUNCTION FUN_00a30760 @ 00a30760 ////

void __cdecl FUN_00a30760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a30840 @ 00a30840 ////

void __thiscall FUN_00a30840(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0xc) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x18) +
              fVar2 * (float10)*(float *)((int)this + 0xc));
  *(float *)((int)this + 0x18) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x18) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x10) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x1c) +
              fVar2 * (float10)*(float *)((int)this + 0x10));
  *(float *)((int)this + 0x1c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x1c) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x14) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x20) +
              fVar2 * (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 0x20) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x20) -
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00a30900 @ 00a30900 ////

void __fastcall FUN_00a30900(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  float10 fVar3;
  
  puVar2 = param_1;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  fVar3 = FUN_00990e30((float)param_1[5],(float)param_1[6]);
  param_1[0xd] = (uint)(float)fVar3;
  fVar3 = FUN_00990e30((float)param_1[7],(float)param_1[8]);
  param_1[0xe] = (uint)(float)fVar3;
  fVar3 = FUN_00990e30((float)param_1[9],(float)param_1[10]);
  param_1[0xf] = (uint)(float)fVar3;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  *param_1 = *param_1 | 1;
  return;
}


//// FUNCTION FUN_00a30990 @ 00a30990 ////

void __thiscall
FUN_00a30990(void *this,int param_1,int param_2,undefined4 param_3,int param_4,float param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  uint local_30 [4];
  float local_20;
  undefined4 local_1c;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = param_6;
  if (*(int *)((int)this + 8) == 4) {
    param_5 = 1.0;
  }
  if (*(float *)((int)this + 0x34) == 0.0) {
    fVar2 = *(float *)((int)this + 0x2c) * 0.5;
    if (fVar2 != 0.0) {
      iVar5 = *(int *)((int)param_6 + 0x4c);
      puVar6 = local_30;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_30[2] = param_4 + 0x5a0;
      local_30[1] = 0;
      iVar5 = *(int *)(iVar5 + 0x78);
      if (iVar5 == 0) {
        local_4 = 0;
      }
      else {
        local_4 = *(undefined4 *)(iVar5 + 0x10);
      }
      local_1c = *(undefined4 *)((int)this + 4);
      local_14 = *(undefined2 *)((int)this + 8);
      local_30[0] = (local_30[0] & 0xfffffff0 | 0x30) & 0xffffffdf;
      local_12 = 0;
      local_10 = 0;
      if (param_2 != 0) {
        iVar5 = 0;
        if (*(char *)(param_2 + 0x33) == '\0') {
          local_c = 0;
        }
        else {
          if (*(char *)(param_2 + 0x33) == '\0') {
            iVar5 = -1;
          }
          local_c = *(undefined4 *)(param_2 + 0x6c + iVar5 * 4);
        }
        local_8 = param_3;
      }
      if (fVar2 <= *(float *)((int)this + 0x30)) {
        fVar3 = 1.0 - (*(float *)((int)this + 0x30) - fVar2) / fVar2;
      }
      else {
        fVar3 = *(float *)((int)this + 0x30) / fVar2;
      }
      local_20 = fVar3 * *(float *)((int)this + 0x3c) * param_5;
      if (local_20 != 0.0) {
        FUN_009880c0(*(void **)(param_1 + 0x6c),local_30);
      }
    }
    if ((fVar2 < *(float *)((int)this + 0x30)) && (0.0 < *(float *)((int)this + 0x38))) {
      *(float *)((int)this + 0x38) =
           *(float *)((int)this + 0x38) - (float)*(int *)((int)param_6 + 0x140);
      return;
    }
    if (((*(int *)((int)param_6 + 0x184) == 0) ||
        (fVar7 = FUN_00a30280((int)param_6 + 0x17c), fVar7 <= (float10)0.3)) ||
       (param_6 = 5.0, (*(byte *)this & 1) == 0)) {
      param_6 = 1.0;
    }
    fVar1 = (float)*(int *)((int)fVar1 + 0x140) + *(float *)((int)this + 0x30);
    *(float *)((int)this + 0x30) = fVar1;
    if (*(float *)((int)this + 0x2c) < fVar1) {
      FUN_00a301a0(this,param_6);
    }
  }
  else {
    fVar1 = *(float *)((int)this + 0x34) - (float)*(int *)((int)param_6 + 0x140);
    *(float *)((int)this + 0x34) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)((int)this + 0x34) = 0;
      fVar7 = FUN_00990e30(*(float *)((int)this + 0xc),*(float *)((int)this + 0x10));
      *(float *)((int)this + 0x2c) = (float)fVar7;
      *(undefined4 *)((int)this + 0x30) = 0;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a30bb0 @ 00a30bb0 ////

void __thiscall FUN_00a30bb0(void *this,int param_1,int param_2,undefined4 param_3)

{
  int extraout_ECX;
  void *extraout_EDX;
  void *extraout_EDX_00;
  float10 fVar1;
  
  if ((-1 < param_1) && (param_1 < 0x35)) {
    if ((*(int *)((int)this + 0x15c) != 0) &&
       (fVar1 = FUN_00a30280((int)this + 0x154), this = extraout_EDX, (float10)0.0 != fVar1)) {
      *(undefined4 *)((int)extraout_EDX + 0x168) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x16c) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x170) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x174) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x178) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x168) = 0;
      *(undefined4 *)((int)extraout_EDX + 0x16c) = 0x43480000;
      *(undefined4 *)((int)extraout_EDX + 0x170) = *(undefined4 *)((int)extraout_EDX + 0x15c);
      fVar1 = FUN_00a30280(extraout_ECX);
      *(float *)((int)extraout_EDX_00 + 0x174) = (float)fVar1;
      *(uint *)((int)extraout_EDX_00 + 0x178) = *(uint *)((int)extraout_EDX_00 + 0x178) | 1;
      this = extraout_EDX_00;
    }
    if (param_2 == -1) {
      *(uint *)((int)this + 0x164) = *(uint *)((int)this + 0x164) | 2;
      *(undefined4 *)((int)this + 0x154) = 0x47c35000;
    }
    else {
      *(uint *)((int)this + 0x164) = *(uint *)((int)this + 0x164) & 0xfffffffd;
      *(float *)((int)this + 0x154) = (float)param_2 * 10.0;
      if ((param_1 != 0) && ((float)param_2 * 10.0 < 400.0)) {
        *(undefined4 *)((int)this + 0x154) = 0x43c80000;
      }
    }
    *(undefined4 *)((int)this + 0x158) = 0;
    *(int *)((int)this + 0x15c) = param_1;
    *(undefined4 *)((int)this + 0x160) = param_3;
  }
  return;
}


//// FUNCTION FUN_00a30cb0 @ 00a30cb0 ////

void __thiscall
FUN_00a30cb0(void *this,int param_1,int param_2,float param_3,int param_4,float param_5,int param_6)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint local_30 [4];
  float local_20;
  undefined4 local_1c;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if (*(int *)((int)this + 8) != 0) {
    puVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_30[2] = param_4 + 0x5a0;
    local_30[1] = 0;
    iVar2 = *(int *)(*(int *)(param_6 + 0x4c) + 0x78);
    if (iVar2 == 0) {
      local_4 = 0;
    }
    else {
      local_4 = *(undefined4 *)(iVar2 + 0x10);
    }
    local_14 = *(undefined2 *)((int)this + 8);
    local_30[0] = (local_30[0] & 0xfffffff0 | 0x30) & 0xffffffdf;
    local_12 = 0;
    local_10 = 0;
    local_1c = 0;
    if ((param_2 != 0) && (0.0 < param_3)) {
      iVar2 = 0;
      if (*(char *)(param_2 + 0x33) == '\0') {
        local_c = 0;
      }
      else {
        if (*(char *)(param_2 + 0x33) == '\0') {
          iVar2 = -1;
        }
        local_c = *(undefined4 *)(param_2 + 0x6c + iVar2 * 4);
      }
      local_8 = param_3;
    }
    if (200.0 <= *(float *)((int)this + 4)) {
      fVar1 = 1.0 - (*(float *)((int)this + 4) - 200.0) * 0.005;
    }
    else {
      fVar1 = *(float *)((int)this + 4) * 0.005;
    }
    local_20 = fVar1 * *(float *)((int)this + 0xc) * param_5;
    FUN_009880c0(*(void **)(param_1 + 0x6c),local_30);
    if ((200.0 <= *(float *)((int)this + 4)) && (0.0 < *(float *)this)) {
      fVar1 = *(float *)this - (float)*(int *)(param_6 + 0x140);
      *(float *)this = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        if ((*(byte *)((int)this + 0x10) & 2) != 0) {
          *(undefined4 *)this = 0x47c35000;
          *(undefined4 *)((int)this + 4) = 0x43480000;
          return;
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0x43480000;
      return;
    }
    fVar1 = (float)*(int *)(param_6 + 0x140) + *(float *)((int)this + 4);
    *(float *)((int)this + 4) = fVar1;
    if (*(float *)this != 0.0) {
      if (200.0 <= fVar1) {
        fVar1 = 200.0;
      }
      *(float *)((int)this + 4) = fVar1;
      return;
    }
    if (400.0 < fVar1) {
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00a30ef0 @ 00a30ef0 ////

void __fastcall FUN_00a30ef0(undefined4 *param_1)

{
  if ((void *)param_1[4] != (void *)0x0) {
    FUN_00a29960((void *)param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00a30f20 @ 00a30f20 ////

void __thiscall FUN_00a30f20(void *this,int param_1,int param_2)

{
  float10 fVar1;
  
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    FUN_00a29960(*(void **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((param_1 != -1) && (param_2 != 0)) {
    *(int *)this = param_1;
    *(int *)((int)this + 0x10) = param_2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    if (DAT_010bab2c != (code *)0x0) {
      fVar1 = (float10)(*DAT_010bab2c)();
      *(float *)((int)this + 0x18) = (float)fVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a30fc0 @ 00a30fc0 ////

void __thiscall FUN_00a30fc0(void *this,char *param_1,char *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  char local_145;
  undefined4 local_144 [17];
  char local_100 [256];
  
  puVar4 = this;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (0.0 <= param_3) {
    if (1.0 < param_3) {
      param_3 = 1.0;
    }
  }
  else {
    param_3 = 0.0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_145 = '\0';
  }
  else {
    FUN_00a30360(param_1,local_100);
    uVar1 = FUN_00986800(local_100);
    local_145 = (char)uVar1;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    cVar3 = '\0';
  }
  else {
    FUN_00a30360(param_2,local_100);
    uVar1 = FUN_00986800(local_100);
    cVar3 = (char)uVar1;
  }
  if (local_145 == '\0') {
    if (cVar3 == '\0') {
      FUN_00a30fc0(local_144,"head_m_white_joe.hd",(char *)0x0,0.0);
      puVar4 = local_144;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)this = *puVar4;
        puVar4 = puVar4 + 1;
        this = (undefined4 *)((int)this + 4);
      }
      return;
    }
    param_3 = 0.0;
    param_1 = param_2;
  }
  if ((param_1 == (char *)0x0) || (local_145 == '\0')) {
    param_1 = "head_m_white_joe.hd";
  }
  _sprintf(this,param_1);
  if ((param_2 == (char *)0x0) || (cVar3 == '\0')) {
    param_2 = "head_m_white_joe.hd";
  }
  _sprintf((char *)((int)this + 0x20),param_2);
  *(float *)((int)this + 0x40) = param_3;
  return;
}


//// FUNCTION FUN_00a31110 @ 00a31110 ////

void __thiscall FUN_00a31110(void *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char local_100 [256];
  
  if (*(void **)this != (void *)0x0) {
    FUN_00985de0(*(void **)this);
    *(undefined4 *)this = 0;
  }
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_00985de0(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x40);
  FUN_00a30360(param_1,local_100);
  pbVar2 = Anim_LoadByName(local_100);
  *(byte **)this = pbVar2;
  iVar5 = 0;
  if (pbVar2[0x33] != 0) {
    do {
      bVar1 = *(byte *)(*(int *)this + 0x33);
      if (bVar1 == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = 0;
        }
        if ((int)(uint)bVar1 <= iVar4) {
          iVar4 = bVar1 - 1;
        }
        puVar3 = *(uint **)(*(int *)this + 0x6c + iVar4 * 4);
      }
      Anim_ExpandSetPoses(puVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(*(int *)this + 0x33));
  }
  if (param_1[0x20] != '\0') {
    FUN_00a30360(param_1 + 0x20,local_100);
    pbVar2 = Anim_LoadByName(local_100);
    *(byte **)((int)this + 4) = pbVar2;
    iVar5 = 0;
    if (pbVar2[0x33] != 0) {
      do {
        bVar1 = *(byte *)(*(int *)((int)this + 4) + 0x33);
        if (bVar1 == 0) {
          puVar3 = (uint *)0x0;
        }
        else {
          iVar4 = iVar5;
          if (iVar5 < 0) {
            iVar4 = 0;
          }
          if ((int)(uint)bVar1 <= iVar4) {
            iVar4 = bVar1 - 1;
          }
          puVar3 = *(uint **)(*(int *)((int)this + 4) + 0x6c + iVar4 * 4);
        }
        Anim_ExpandSetPoses(puVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(byte *)(*(int *)((int)this + 4) + 0x33));
    }
  }
  return;
}


//// FUNCTION FUN_00a31220 @ 00a31220 ////

undefined1 __thiscall FUN_00a31220(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  
  this_00 = param_1;
  if (*(int *)((int)param_1 + 0x148) == -1) {
    *(undefined4 *)((int)param_1 + 0x148) = 0;
    *(undefined4 *)((int)param_1 + 0x14c) = 0;
    FUN_00a30bb0(param_1,**(int **)((int)this + 0x30),-1,(*(int **)((int)this + 0x30))[1]);
    return 0;
  }
  iVar3 = *(int *)((int)param_1 + 0x140) + *(int *)((int)param_1 + 0x148);
  *(int *)((int)param_1 + 0x148) = iVar3;
  iVar4 = *(int *)((int)this + 0x30);
  iVar5 = 0;
  param_1._0_1_ = 0;
  if ((*(int *)((int)this_00 + 0x150) != -1) &&
     (*(int *)((int)this_00 + 0x150) <= *(int *)((int)this_00 + 0x148) / 100)) {
    param_1._0_1_ = 1;
  }
  iVar2 = *(int *)((int)this + 0x24);
  if (0 < iVar2) {
    do {
      if ((iVar3 % (*(int *)((int)this + 0x28) * 100)) / 100 <= *(int *)(iVar4 + 0xc)) break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 < iVar2);
  }
  if (iVar2 <= iVar5) {
    iVar5 = iVar2 + -1;
  }
  if (iVar5 != *(int *)((int)this_00 + 0x14c)) {
    if ((iVar5 < *(int *)((int)this_00 + 0x14c)) && (*(int *)((int)this_00 + 0x150) == -1)) {
      return 1;
    }
    *(int *)((int)this_00 + 0x14c) = iVar5;
    piVar1 = (int *)(*(int *)((int)this + 0x30) + iVar5 * 0x14);
    FUN_00a30bb0(this_00,*piVar1,-1,piVar1[1]);
  }
  return param_1._0_1_;
}


//// FUNCTION FUN_00a31320 @ 00a31320 ////

float10 __cdecl FUN_00a31320(int param_1,undefined1 *param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST1;
  ulonglong uVar4;
  
  if (DAT_010bab30 == (code *)0x0) {
    fVar2 = FUN_009b07d0(param_1,param_2);
    return fVar2;
  }
  if ((((DAT_010b9780 == 0) || (DAT_010b9784 - DAT_010b9780 >> 2 == 0)) &&
      (DAT_010bab2c != (code *)0x0)) && ((param_3 != 0 && (*(int *)(param_3 + 0x10) != 0)))) {
    fVar2 = (float10)(*DAT_010bab2c)();
    fVar1 = (float)fVar2;
    if (*(float *)(param_3 + 0x18) < fVar1 != (*(float *)(param_3 + 0x18) == fVar1)) {
      fVar2 = (float10)*(float *)(*(int *)(param_3 + 0x10) + 8);
      fVar3 = ((float10)fVar1 - (float10)*(float *)(param_3 + 0x18)) * (float10)100.0;
      if (fVar2 < fVar3) {
        uVar4 = FUN_00acd42c();
        fVar3 = extraout_ST0 - (float10)(int)uVar4 * extraout_ST1;
        fVar2 = extraout_ST1;
      }
      return fVar3 / fVar2;
    }
    *param_2 = 0;
    return (float10)0.0;
  }
  fVar2 = (float10)(*DAT_010bab30)(param_1,param_2);
  return fVar2;
}


//// FUNCTION FUN_00a31490 @ 00a31490 ////

void __cdecl FUN_00a31490(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a31550 @ 00a31550 ////

void __fastcall FUN_00a31550(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa648;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((void *)param_1[0x51] != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00a30620((void *)param_1[0x51]);
    param_1[0x51] = 0;
  }
  if ((void *)param_1[0x4d] != (void *)0x0) {
    FUN_00a29960((void *)param_1[0x4d]);
    param_1[0x4d] = 0;
  }
  param_1[0x49] = 0xffffffff;
  param_1[0x4f] = 0;
  local_4 = 0xffffffff;
  if ((void *)*param_1 != (void *)0x0) {
    FUN_00985de0((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    FUN_00985de0((void *)param_1[1]);
    param_1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a315e0 @ 00a315e0 ////

void __fastcall FUN_00a315e0(int *param_1)

{
  void *this;
  float10 fVar1;
  char local_5;
  float local_4;
  
  if (((*(byte *)(param_1 + 5) & 1) != 0) || ((param_1[4] != 0 && (*param_1 != -1)))) {
    fVar1 = FUN_00a31320(*param_1,&local_5,(int)param_1);
    this = (void *)param_1[4];
    local_4 = (float)(fVar1 + (float10)0.007);
    if (local_5 != '\0') {
      FUN_00a29aa0(this,param_1 + 1,local_4);
      return;
    }
    if (this != (void *)0x0) {
      FUN_00a29960(this);
      param_1[4] = 0;
    }
    *param_1 = -1;
    param_1[6] = 0;
  }
  return;
}


//// FUNCTION CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> @ 00a31660 ////

/* Library Function - Single Match
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >(wchar_t const *,int,struct ATL::IAtlStringMgr *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this,wchar_t *param_1,
          int param_2,IAtlStringMgr *param_3)

{
  FUN_00a30fc0(this,(char *)param_1,(char *)param_2,(float)param_3);
  return this;
}


//// FUNCTION FUN_00a316d0 @ 00a316d0 ////

byte * __cdecl FUN_00a316d0(char *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint _Count;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  char *local_450;
  uint local_44c;
  uint local_448;
  char local_444 [20];
  int *local_430;
  byte local_42c [32];
  char local_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa676;
  local_c = ExceptionList;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar4 - (int)(param_1 + 1)) < 0x20) {
      ExceptionList = &local_c;
      _sprintf((char *)local_42c,param_1);
      FUN_009ac040((char *)local_42c);
      pbVar3 = DAT_010bab34;
      do {
        if ((pbVar3 == (byte *)0x0) || (param_2 == '\0')) {
          _sprintf(local_40c,"Data\\Animations\\Facials\\%s.fan",param_1);
          local_450 = local_444;
          pcVar4 = local_40c;
          local_444[0] = '\0';
          local_44c = 0;
          local_448 = 0x14;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar4 - (int)(local_40c + 1);
          if (0x13 < uVar8) {
            local_448 = uVar8 + 0x20 & 0xffffffe0;
            local_450 = _malloc(local_448);
          }
          _strncpy(local_450,local_40c,uVar8);
          local_450[uVar8] = '\0';
          local_4 = 0;
          local_44c = uVar8;
          uVar8 = FUN_009d3720(&local_450);
          local_4 = 0xffffffff;
          if (0x14 < local_448) {
                    /* WARNING: Subroutine does not return */
            _free(local_450);
          }
          if (uVar8 == 0) {
            ExceptionList = local_c;
            return (byte *)0x0;
          }
          piVar5 = operator_new(uVar8);
          local_450 = local_444;
          pcVar4 = local_40c;
          local_444[0] = '\0';
          local_44c = 0;
          local_448 = 0x14;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          _Count = (int)pcVar4 - (int)(local_40c + 1);
          local_430 = piVar5;
          if (0x13 < _Count) {
            local_448 = _Count + 0x20 & 0xffffffe0;
            local_450 = _malloc(local_448);
          }
          _strncpy(local_450,local_40c,_Count);
          local_450[_Count] = '\0';
          local_4 = 1;
          local_44c = _Count;
          FUN_009d3ca0(&local_450,piVar5,uVar8,(undefined1 *)0x0);
          local_4 = 0xffffffff;
          if (local_448 < 0x15) {
            iVar7 = *piVar5;
            piVar5 = local_430 + 2;
            pcVar4 = operator_new(iVar7 * 0x14 + 0x34);
            _sprintf(pcVar4,(char *)local_42c);
            pcVar4[0x20] = '\x01';
            pcVar4[0x21] = '\0';
            pcVar4[0x22] = '\0';
            pcVar4[0x23] = '\0';
            *(int *)(pcVar4 + 0x24) = iVar7;
            *(byte **)(pcVar4 + 0x2c) = DAT_010bab34;
            DAT_010bab34 = (byte *)pcVar4;
            *(char **)(pcVar4 + 0x30) = pcVar4 + 0x34;
            if (0 < iVar7) {
              iVar10 = 0;
              do {
                piVar9 = (int *)(*(int *)(pcVar4 + 0x30) + iVar10);
                *piVar9 = *piVar5;
                piVar9[1] = piVar5[1];
                piVar9[2] = piVar5[2];
                piVar9[3] = piVar5[3];
                iVar10 = iVar10 + 0x14;
                iVar7 = iVar7 + -1;
                piVar9[4] = piVar5[4];
                piVar5 = piVar5 + 5;
              } while (iVar7 != 0);
            }
            iVar7 = 0;
            pcVar4[0x28] = '\0';
            pcVar4[0x29] = '\0';
            pcVar4[0x2a] = '\0';
            pcVar4[0x2b] = '\0';
            if (0 < *(int *)(pcVar4 + 0x24)) {
              piVar5 = (int *)(*(int *)(pcVar4 + 0x30) + 8);
              do {
                *(int *)(pcVar4 + 0x28) = *(int *)(pcVar4 + 0x28) + (piVar5[1] - *piVar5);
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 5;
              } while (iVar7 < *(int *)(pcVar4 + 0x24));
            }
                    /* WARNING: Subroutine does not return */
            _free(local_430);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_450);
        }
        pbVar6 = local_42c;
        pbVar11 = pbVar3;
        do {
          bVar2 = *pbVar6;
          bVar12 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_00a31784:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00a31789;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar12 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_00a31784;
          pbVar6 = pbVar6 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_00a31789:
        if (iVar7 == 0) {
          *(int *)(pbVar3 + 0x20) = *(int *)(pbVar3 + 0x20) + 1;
          ExceptionList = local_c;
          return pbVar3;
        }
        pbVar3 = *(byte **)(pbVar3 + 0x2c);
      } while( true );
    }
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_00a319f0 @ 00a319f0 ////

void __thiscall FUN_00a319f0(void *this,char param_1)

{
  uint uVar1;
  char cVar2;
  int *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int local_134;
  char *local_12c;
  uint local_128;
  uint local_124;
  char local_120 [20];
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa68b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009ac040(this);
  uVar1 = *(int *)((int)this + 0x24) * 0x14 + 8;
  _Memory = operator_new(uVar1);
  piVar5 = _Memory;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((int)piVar5 + 1);
  }
  iVar4 = *(int *)((int)this + 0x24);
  iVar7 = 0;
  piVar5 = _Memory + 2;
  *_Memory = iVar4;
  if (0 < iVar4) {
    local_134 = 0;
    do {
      piVar8 = (int *)(*(int *)((int)this + 0x30) + local_134);
      *piVar5 = *piVar8;
      piVar5[1] = piVar8[1];
      piVar5[2] = piVar8[2];
      piVar5[3] = piVar8[3];
      piVar5[4] = piVar8[4];
      piVar5 = piVar5 + 5;
      iVar7 = iVar7 + 1;
      local_134 = local_134 + 0x14;
    } while (iVar7 < *_Memory);
  }
  _sprintf(local_10c,"C:\\movies\\Dev\\Build\\Data\\Animations\\Facials\\%s.fan",this);
  if (param_1 != '\0') {
    FUN_00a60930();
    FUN_00a628d0((undefined4 *)local_10c);
  }
  local_12c = local_120;
  pcVar6 = local_10c;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = (int)pcVar6 - (int)(local_10c + 1);
  if (0x13 < uVar3) {
    local_124 = uVar3 + 0x20 & 0xffffffe0;
    local_12c = _malloc(local_124);
  }
  _strncpy(local_12c,local_10c,uVar3);
  local_12c[uVar3] = '\0';
  local_4 = 0;
  local_128 = uVar3;
  FUN_009d4370(&local_12c,_Memory,uVar1);
  local_4 = 0xffffffff;
  if (local_124 < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_12c);
}


//// FUNCTION FUN_00a31bb0 @ 00a31bb0 ////

void __thiscall FUN_00a31bb0(void *this,char *param_1,int param_2,char param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int extraout_ECX;
  byte *pbVar4;
  bool bVar5;
  float10 fVar6;
  byte local_100 [256];
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    if (*(void **)((int)this + 0x144) != (void *)0x0) {
      FUN_00a30620(*(void **)((int)this + 0x144));
      *(undefined4 *)((int)this + 0x144) = 0;
    }
    *(undefined4 *)((int)this + 0x148) = 0xffffffff;
    *(undefined4 *)((int)this + 0x14c) = 0;
    *(undefined4 *)((int)this + 0x150) = 0xffffffff;
    if (*(int *)((int)this + 0x15c) != 0) {
      fVar6 = FUN_00a30280((int)this + 0x154);
      if ((float10)0.0 != fVar6) {
        *(undefined4 *)((int)this + 0x168) = 0;
        *(undefined4 *)((int)this + 0x16c) = 0;
        *(undefined4 *)((int)this + 0x170) = 0;
        *(undefined4 *)((int)this + 0x174) = 0;
        *(undefined4 *)((int)this + 0x178) = 0;
        *(undefined4 *)((int)this + 0x168) = 0;
        *(undefined4 *)((int)this + 0x16c) = 0x43480000;
        *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x15c);
        fVar6 = FUN_00a30280(extraout_ECX);
        *(float *)((int)this + 0x174) = (float)fVar6;
        *(uint *)((int)this + 0x178) = *(uint *)((int)this + 0x178) | 1;
      }
    }
    *(undefined4 *)((int)this + 0x154) = 0;
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)((int)this + 0x15c) = 0;
    *(undefined4 *)((int)this + 0x160) = 0;
    *(uint *)((int)this + 0x164) = *(uint *)((int)this + 0x164) & 0xfffffffd;
    return;
  }
  _sprintf((char *)local_100,param_1);
  FUN_009ac040((char *)local_100);
  if ((param_3 != '\0') && (pbVar2 = *(byte **)((int)this + 0x144), pbVar2 != (byte *)0x0)) {
    pbVar4 = local_100;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00a31c34:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00a31c39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00a31c34;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a31c39:
    if (iVar3 == 0) {
      *(undefined4 *)((int)this + 0x14c) = 0;
      *(int *)((int)this + 0x150) = param_2;
      *(undefined4 *)((int)this + 0x148) = 0xffffffff;
      return;
    }
  }
  if (*(void **)((int)this + 0x144) != (void *)0x0) {
    FUN_00a30620(*(void **)((int)this + 0x144));
    *(undefined4 *)((int)this + 0x144) = 0;
  }
  *(undefined4 *)((int)this + 0x148) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(int *)((int)this + 0x150) = param_2;
  pbVar2 = FUN_00a316d0((char *)local_100,param_3);
  *(byte **)((int)this + 0x144) = pbVar2;
  return;
}


//// FUNCTION FUN_00a31dd0 @ 00a31dd0 ////

void * FUN_00a31dd0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a31e00 @ 00a31e00 ////

undefined4 * __thiscall FUN_00a31e00(void *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  int local_5c;
  char local_50 [68];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa6b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  puVar3 = (uint *)((int)this + 0xc);
  local_4 = 0;
  local_5c = 4;
  do {
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    FUN_00a30900(puVar3);
    puVar3 = puVar3 + 0x11;
    local_5c = local_5c + -1;
  } while (local_5c != 0);
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 1;
  *(undefined4 *)((int)this + 0x148) = 0xffffffff;
  *(undefined4 *)((int)this + 0x150) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(int *)((int)this + 0x4c) = param_1;
  *(int *)((int)this + 0x90) = param_1;
  *(int *)((int)this + 0xd4) = param_1;
  *(int *)((int)this + 0x118) = param_1;
  *(undefined4 *)((int)this + 0xa0) = 0x42c80000;
  *(undefined4 *)((int)this + 0xa4) = 0x43480000;
  *(undefined4 *)((int)this + 0xa8) = 0x43fa0000;
  *(undefined4 *)((int)this + 0xac) = 0x44fa0000;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x98) = 5;
  *(undefined4 *)((int)this + 0x9c) = 4;
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) & 0xfffffffe;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x10) = 4;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x1c) = 0x447a0000;
  *(undefined4 *)((int)this + 0x20) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x24) = 0x44fa0000;
  *(undefined4 *)((int)this + 0x28) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x2c) = 0x44fa0000;
  *(undefined4 *)((int)this + 0x30) = 0x3f000000;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x54) = 3;
  *(undefined4 *)((int)this + 0x58) = 3;
  *(undefined4 *)((int)this + 0x5c) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x60) = 0x447a0000;
  *(undefined4 *)((int)this + 100) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x68) = 0x44fa0000;
  *(undefined4 *)((int)this + 0x6c) = 0x43fa0000;
  *(undefined4 *)((int)this + 0x70) = 0x44fa0000;
  *(undefined4 *)((int)this + 0x74) = 0x3f000000;
  *(undefined4 *)((int)this + 0x78) = 0x3f800000;
  *(undefined4 *)((int)this + 0xdc) = 4;
  *(undefined4 *)((int)this + 0xe4) = 0x43fa0000;
  *(undefined4 *)((int)this + 0xe8) = 0x447a0000;
  *(undefined4 *)((int)this + 0xec) = 0x447a0000;
  *(undefined4 *)((int)this + 0xf0) = 0x44fa0000;
  *(undefined4 *)((int)this + 0xf4) = 0x43960000;
  *(undefined4 *)((int)this + 0xf8) = 0x43c80000;
  *(undefined4 *)((int)this + 0xe0) = 5;
  *(undefined4 *)((int)this + 0xfc) = 0x3f000000;
  *(undefined4 *)((int)this + 0x100) = 0x3f800000;
  if (param_1 != 0) {
    iVar1 = FUN_009806b0(param_1);
    if ((iVar1 != 0) && (pcVar2 = *(char **)(iVar1 + 0xb0), pcVar2 != (char *)0x0))
    goto LAB_00a321a2;
  }
  FUN_00a30fc0(local_50,"head_m_white_joe.hd",(char *)0x0,0.0);
  pcVar2 = local_50;
LAB_00a321a2:
  FUN_00a31110(this,pcVar2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a321d0 @ 00a321d0 ////

void __thiscall FUN_00a321d0(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float *pfVar10;
  undefined2 *puVar11;
  undefined4 *this_00;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  float10 fVar17;
  float10 fVar18;
  float local_80;
  float *local_7c;
  int local_74;
  uint local_60 [2];
  undefined4 *local_58;
  float local_50;
  undefined4 local_4c;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_34;
  uint local_30 [7];
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_4;
  
  if (((*(int *)((int)this + 0x178) != 0) && (DAT_010c9ac8 != 0)) &&
     (bVar6 = FUN_0097eaa0(*(int *)((int)this + 0x78)), bVar6)) {
    if (DAT_0105bed2 == '\0') {
      iVar8 = *(int *)(*(int *)((int)this + 0x78) + 0xd0);
      uVar9 = DAT_0105becc;
      if (iVar8 != 0) {
        uVar9 = *(undefined4 *)(iVar8 + 0x88);
      }
      *(undefined4 *)(*(int *)((int)this + 0x178) + 0x140) = uVar9;
    }
    else {
      *(undefined4 *)(*(int *)((int)this + 0x178) + 0x140) = DAT_0105becc;
    }
    piVar1 = *(int **)((int)this + 0x178);
    iVar8 = piVar1[1];
    local_80 = (float)piVar1[2];
    iVar14 = *piVar1;
    if ((iVar8 == 0) || (iVar14 = iVar8, iVar12 = *piVar1, 1.0 <= local_80)) {
      local_80 = 0.0;
      iVar12 = iVar14;
    }
    if (iVar12 != 0) {
      piVar1 = (int *)(*(int *)((int)this + 0x178) + 0x11c);
      *piVar1 = *piVar1 + *(int *)(*(int *)((int)this + 0x178) + 0x140);
      this_00 = (undefined4 *)(param_1 + 0x5a0);
      FUN_00a013d0(local_30,0,*(uint *)(*(int *)((int)this + 0x178) + 0x11c),(uint)this_00);
      local_4 = *(undefined4 *)((int)this + 0x10);
      local_30[0] = local_30[0] | 0x30;
      local_14 = 0;
      local_12 = 0;
      local_10 = 0;
      FUN_009880c0(*(void **)(iVar12 + 0x6c),local_30);
      pvVar2 = *(void **)((int)this + 0x178);
      if ((*(int *)((int)pvVar2 + 0x144) != 0) &&
         (cVar7 = FUN_00a31220(*(void **)((int)pvVar2 + 0x144),pvVar2), cVar7 != '\0')) {
        iVar14 = *(int *)((int)this + 0x178);
        if (*(void **)(iVar14 + 0x144) != (void *)0x0) {
          FUN_00a30620(*(void **)(iVar14 + 0x144));
          *(undefined4 *)(iVar14 + 0x144) = 0;
        }
        uVar9 = 0;
        *(undefined4 *)(iVar14 + 0x148) = 0xffffffff;
        *(undefined4 *)(iVar14 + 0x14c) = 0;
        *(undefined4 *)(iVar14 + 0x150) = 0xffffffff;
        if ((*(int *)(iVar14 + 0x15c) != 0) &&
           (fVar17 = FUN_00a30280(iVar14 + 0x154), uVar9 = extraout_EDX, (float10)0.0 != fVar17)) {
          *(undefined4 *)(iVar14 + 0x168) = 0;
          *(undefined4 *)(iVar14 + 0x16c) = 0;
          *(undefined4 *)(iVar14 + 0x170) = 0;
          *(undefined4 *)(iVar14 + 0x174) = 0;
          *(undefined4 *)(iVar14 + 0x178) = 0;
          *(undefined4 *)(iVar14 + 0x168) = 0;
          *(undefined4 *)(iVar14 + 0x16c) = 0x43480000;
          *(undefined4 *)(iVar14 + 0x170) = *(undefined4 *)(iVar14 + 0x15c);
          fVar17 = FUN_00a30280(iVar14 + 0x154);
          *(float *)(iVar14 + 0x174) = (float)fVar17;
          *(uint *)(iVar14 + 0x178) = *(uint *)(iVar14 + 0x178) | 1;
          uVar9 = 0;
        }
        *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) & 0xfffffffd;
        *(undefined4 *)(iVar14 + 0x154) = uVar9;
        *(undefined4 *)(iVar14 + 0x158) = uVar9;
        *(undefined4 *)(iVar14 + 0x15c) = uVar9;
        *(undefined4 *)(iVar14 + 0x160) = uVar9;
      }
      iVar14 = *(int *)((int)this + 0x178) + 0x154;
      fVar17 = FUN_00a302c0(iVar14);
      fVar18 = FUN_00a302c0(extraout_EDX_00 + 0x17c);
      if (fVar18 <= (float10)(float)fVar17) {
        iVar14 = extraout_EDX_01 + 0x17c;
      }
      fVar17 = FUN_00a302c0(iVar14);
      piVar1 = (int *)(extraout_EDX_02 + 0x124);
      local_7c = (float *)(float)fVar17;
      uVar9 = FUN_009716d0(piVar1);
      if (((char)uVar9 != '\0') ||
         ((*(uint *)(*(int *)((int)this + 0x78) + 0x9c) & 0x40000000) != 0)) {
        local_7c = (float *)0x0;
      }
      if (DAT_010bab38 == '\0') {
        FUN_00a30cb0((void *)(*(int *)((int)this + 0x178) + 0x168),iVar12,iVar8,local_80,param_1,1.0
                     ,*(int *)((int)this + 0x178));
        FUN_00a30cb0((void *)(*(int *)((int)this + 0x178) + 0x154),iVar12,iVar8,local_80,param_1,1.0
                     ,*(int *)((int)this + 0x178));
        FUN_00a30cb0((void *)(*(int *)((int)this + 0x178) + 400),iVar12,iVar8,local_80,param_1,1.0,
                     *(int *)((int)this + 0x178));
        FUN_00a30cb0((void *)(*(int *)((int)this + 0x178) + 0x17c),iVar12,iVar8,local_80,param_1,1.0
                     ,*(int *)((int)this + 0x178));
        iVar14 = 0;
        do {
          FUN_00a30990((void *)(iVar14 + 0xc + (int)*(float *)((int)this + 0x178)),iVar12,iVar8,
                       local_80,param_1,(float)local_7c,*(float *)((int)this + 0x178));
          iVar14 = iVar14 + 0x44;
        } while (iVar14 < 0x110);
      }
      if (((*(byte *)(extraout_EDX_02 + 0x138) & 1) != 0) ||
         ((*(int *)(extraout_EDX_02 + 0x134) != 0 && (*piVar1 != -1)))) {
        FUN_00a315e0(piVar1);
        pfVar10 = (float *)(extraout_EDX_02 + 0x128);
        puVar11 = &DAT_00e69240;
        do {
          if (*pfVar10 != 0.0) {
            fVar3 = *pfVar10;
            puVar15 = local_60;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            local_34 = *(undefined4 *)((int)this + 0x10);
            local_60[0] = local_60[0] & 0xffffffd0 | 0x10;
            local_44 = *puVar11;
            local_60[1] = 0;
            local_42 = 0;
            local_40 = 0;
            local_4c = 4;
            local_58 = this_00;
            local_50 = fVar3;
            FUN_009880c0(*(void **)(iVar12 + 0x6c),local_60);
          }
          puVar11 = puVar11 + 2;
          pfVar10 = pfVar10 + 1;
        } while ((int)puVar11 < 0xe6924c);
      }
      FUN_00985500((int)local_30,(uint)*(byte *)(*(int *)(iVar12 + 0x6c) + 2));
      if ((*(byte *)((int)this + 0xbc) & 1) != 0) {
        local_7c = (float *)(*(int *)(DAT_010c9ac8 + 0xc) + 0x1048);
        local_74 = 0x1e;
        do {
          FUN_009aa830(this_00,(float *)(param_1 + 0x570));
          if ((local_74 == 0x32) || (local_74 == 0x33)) {
            uVar9 = this_00[9];
            uVar4 = this_00[10];
            uVar5 = this_00[0xb];
            puVar13 = (undefined4 *)((int)this + 0x8c);
            puVar16 = this_00;
            for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar16 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar16 = puVar16 + 1;
            }
            FUN_009ab130(this_00,(float *)&DAT_00e6924c);
            this_00[9] = uVar9;
            this_00[10] = uVar4;
            this_00[0xb] = uVar5;
          }
          FUN_009aafb0(this_00,local_7c);
          local_74 = local_74 + 1;
          local_7c = local_7c + 0x22;
          this_00 = this_00 + 0xc;
        } while (local_74 < 0x41);
        return;
      }
      pfVar10 = (float *)(*(int *)(DAT_010c9ac8 + 0xc) + 0x1048);
      iVar8 = 0x23;
      do {
        FUN_009aa830(this_00,(float *)(param_1 + 0x570));
        FUN_009aafb0(this_00,pfVar10);
        this_00 = this_00 + 0xc;
        pfVar10 = pfVar10 + 0x22;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00a32730 @ 00a32730 ////

void __fastcall FUN_00a32730(int param_1)

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


//// FUNCTION FUN_00a32760 @ 00a32760 ////

undefined4 * FUN_00a32760(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a32790 @ 00a32790 ////

void __fastcall FUN_00a32790(int param_1)

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


//// FUNCTION FUN_00a327c0 @ 00a327c0 ////

void __fastcall FUN_00a327c0(int param_1)

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


//// FUNCTION FUN_00a327f0 @ 00a327f0 ////

void FUN_00a327f0(void)

{
  void *pvVar1;
  int iVar2;
  void *_Memory;
  int iVar3;
  
  DAT_010bab28 = 1;
  iVar3 = 0;
  _Memory = DAT_010bb1e4;
  while( true ) {
    if (_Memory == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010bb1e8 - (int)_Memory >> 2;
    }
    if (iVar2 <= iVar3) break;
    pvVar1 = *(void **)((int)_Memory + iVar3 * 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00a30620(pvVar1);
      *(undefined4 *)((int)DAT_010bb1e4 + iVar3 * 4) = 0;
      _Memory = DAT_010bb1e4;
    }
    iVar3 = iVar3 + 1;
  }
  DAT_010bab28 = 0;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010bb1e4 = (void *)0x0;
  DAT_010bb1e8 = 0;
  DAT_010bb1ec = 0;
  return;
}


//// FUNCTION FUN_00a32860 @ 00a32860 ////

void FUN_00a32860(void)

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
  puStack_8 = &LAB_00cfa6c8;
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


//// FUNCTION FUN_00a32920 @ 00a32920 ////

void __thiscall FUN_00a32920(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a32860();
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
      _Dst = FUN_00a32760((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a31dd0(param_1,iVar5,param_1 + param_2);
      FUN_00a32760(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a30760(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a31dd0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a31490(param_1,(int)pvVar3,iVar5);
    FUN_00a30760(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a32bb0 @ 00a32bb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a32bb0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  byte *local_370;
  undefined4 local_36c [18];
  int local_324;
  int local_320;
  char local_318 [260];
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar3 = (float10)fcos((float10)3.1415927410125732);
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa6eb;
  local_c = ExceptionList;
  _DAT_00e69278 = 0;
  _DAT_00e69274 = 0;
  _DAT_00e69270 = 0;
  _DAT_00e69268 = 0;
  _DAT_00e69260 = 0;
  _DAT_00e69258 = 0;
  _DAT_00e69250 = 0;
  _DAT_00e6925c = 0x3f800000;
  _DAT_00e6926c = (float)fVar3;
  _DAT_00e6924c = (float)fVar3;
  fVar3 = (float10)fsin((float10)3.1415927410125732);
  _DAT_00e69264 = (float)fVar3;
  _DAT_00e69254 = (float)-fVar3;
  ExceptionList = &local_c;
  FUN_004d5390(&DAT_00e6924c,-1.5707964);
  FUN_00a30840(&DAT_00e6924c,1.5707964);
  if (DAT_010bab48 < 7) {
    if (0x14 < DAT_010bab48) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bab40);
    }
    DAT_010bab48 = 0x20;
    DAT_010bab40 = _malloc(0x20);
  }
  _strncpy(DAT_010bab40,"_NONE_",6);
  _DAT_010bab44 = 6;
  DAT_010bab40[6] = '\0';
  if (DAT_010bab68 < 0xd) {
    if (0x14 < DAT_010bab68) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bab60);
    }
    DAT_010bab68 = 0x20;
    DAT_010bab60 = _malloc(0x20);
  }
  _strncpy(DAT_010bab60,"LITTLE_SMILE",0xc);
  _DAT_010bab64 = 0xc;
  DAT_010bab60[0xc] = '\0';
  if (DAT_010bab88 < 10) {
    if (0x14 < DAT_010bab88) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bab80);
    }
    DAT_010bab88 = 0x20;
    DAT_010bab80 = _malloc(0x20);
  }
  _strncpy(DAT_010bab80,"BIG_SMILE",9);
  _DAT_010bab84 = 9;
  DAT_010bab80[9] = '\0';
  if (DAT_010baba8 < 4) {
    if (0x14 < DAT_010baba8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baba0);
    }
    DAT_010baba8 = 0x20;
    DAT_010baba0 = _malloc(0x20);
  }
  _strncpy(DAT_010baba0,"SAD",3);
  _DAT_010baba4 = 3;
  DAT_010baba0[3] = '\0';
  if (DAT_010babc8 < 6) {
    if (0x14 < DAT_010babc8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010babc0);
    }
    DAT_010babc8 = 0x20;
    DAT_010babc0 = _malloc(0x20);
  }
  _strncpy(DAT_010babc0,"BLINK",5);
  _DAT_010babc4 = 5;
  DAT_010babc0[5] = '\0';
  if (DAT_010babe8 < 7) {
    if (0x14 < DAT_010babe8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010babe0);
    }
    DAT_010babe8 = 0x20;
    DAT_010babe0 = _malloc(0x20);
  }
  _strncpy(DAT_010babe0,"BREATH",6);
  _DAT_010babe4 = 6;
  DAT_010babe0[6] = '\0';
  if (DAT_010bac08 < 6) {
    if (0x14 < DAT_010bac08) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bac00);
    }
    DAT_010bac08 = 0x20;
    DAT_010bac00 = _malloc(0x20);
  }
  _strncpy(DAT_010bac00,"AHHHH",5);
  _DAT_010bac04 = 5;
  DAT_010bac00[5] = '\0';
  if (DAT_010bac28 < 6) {
    if (0x14 < DAT_010bac28) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bac20);
    }
    DAT_010bac28 = 0x20;
    DAT_010bac20 = _malloc(0x20);
  }
  _strncpy(DAT_010bac20,"SNEER",5);
  _DAT_010bac24 = 5;
  DAT_010bac20[5] = '\0';
  if (DAT_010bac48 < 6) {
    if (0x14 < DAT_010bac48) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bac40);
    }
    DAT_010bac48 = 0x20;
    DAT_010bac40 = _malloc(0x20);
  }
  _strncpy(DAT_010bac40,"SHOCK",5);
  _DAT_010bac44 = 5;
  DAT_010bac40[5] = '\0';
  if (DAT_010bac68 < 7) {
    if (0x14 < DAT_010bac68) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bac60);
    }
    DAT_010bac68 = 0x20;
    DAT_010bac60 = _malloc(0x20);
  }
  _strncpy(DAT_010bac60,"HORROR",6);
  _DAT_010bac64 = 6;
  DAT_010bac60[6] = '\0';
  if (DAT_010bac88 < 6) {
    if (0x14 < DAT_010bac88) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bac80);
    }
    DAT_010bac88 = 0x20;
    DAT_010bac80 = _malloc(0x20);
  }
  _strncpy(DAT_010bac80,"AGONY",5);
  _DAT_010bac84 = 5;
  DAT_010bac80[5] = '\0';
  if (DAT_010baca8 < 5) {
    if (0x14 < DAT_010baca8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baca0);
    }
    DAT_010baca8 = 0x20;
    DAT_010baca0 = _malloc(0x20);
  }
  _strncpy(DAT_010baca0,"RAGE",4);
  _DAT_010baca4 = 4;
  DAT_010baca0[4] = '\0';
  if (DAT_010bacc8 < 8) {
    if (0x14 < DAT_010bacc8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bacc0);
    }
    DAT_010bacc8 = 0x20;
    DAT_010bacc0 = _malloc(0x20);
  }
  _strncpy(DAT_010bacc0,"RESOLVE",7);
  _DAT_010bacc4 = 7;
  DAT_010bacc0[7] = '\0';
  if (DAT_010bace8 < 7) {
    if (0x14 < DAT_010bace8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bace0);
    }
    DAT_010bace8 = 0x20;
    DAT_010bace0 = _malloc(0x20);
  }
  _strncpy(DAT_010bace0,"SNEEKY",6);
  _DAT_010bace4 = 6;
  DAT_010bace0[6] = '\0';
  if (DAT_010bad08 < 5) {
    if (0x14 < DAT_010bad08) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bad00);
    }
    DAT_010bad08 = 0x20;
    DAT_010bad00 = _malloc(0x20);
  }
  _strncpy(DAT_010bad00,"KISS",4);
  _DAT_010bad04 = 4;
  DAT_010bad00[4] = '\0';
  if (DAT_010bad28 < 6) {
    if (0x14 < DAT_010bad28) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bad20);
    }
    DAT_010bad28 = 0x20;
    DAT_010bad20 = _malloc(0x20);
  }
  _strncpy(DAT_010bad20,"LAUGH",5);
  _DAT_010bad24 = 5;
  DAT_010bad20[5] = '\0';
  if (DAT_010bad48 < 10) {
    if (0x14 < DAT_010bad48) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bad40);
    }
    DAT_010bad48 = 0x20;
    DAT_010bad40 = _malloc(0x20);
  }
  _strncpy(DAT_010bad40,"DASTARDLY",9);
  _DAT_010bad44 = 9;
  DAT_010bad40[9] = '\0';
  if (DAT_010bad68 < 7) {
    if (0x14 < DAT_010bad68) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bad60);
    }
    DAT_010bad68 = 0x20;
    DAT_010bad60 = _malloc(0x20);
  }
  _strncpy(DAT_010bad60,"SNEEZE",6);
  _DAT_010bad64 = 6;
  DAT_010bad60[6] = '\0';
  if (DAT_010bad88 < 7) {
    if (0x14 < DAT_010bad88) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bad80);
    }
    DAT_010bad88 = 0x20;
    DAT_010bad80 = _malloc(0x20);
  }
  _strncpy(DAT_010bad80,"NAUSEA",6);
  _DAT_010bad84 = 6;
  DAT_010bad80[6] = '\0';
  if (DAT_010bada8 < 5) {
    if (0x14 < DAT_010bada8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bada0);
    }
    DAT_010bada8 = 0x20;
    DAT_010bada0 = _malloc(0x20);
  }
  _strncpy(DAT_010bada0,"BURP",4);
  _DAT_010bada4 = 4;
  DAT_010bada0[4] = '\0';
  if (DAT_010badc8 < 5) {
    if (0x14 < DAT_010badc8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010badc0);
    }
    DAT_010badc8 = 0x20;
    DAT_010badc0 = _malloc(0x20);
  }
  _strncpy(DAT_010badc0,"PITY",4);
  _DAT_010badc4 = 4;
  DAT_010badc0[4] = '\0';
  if (DAT_010bade8 < 5) {
    if (0x14 < DAT_010bade8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bade0);
    }
    DAT_010bade8 = 0x20;
    DAT_010bade0 = _malloc(0x20);
  }
  _strncpy(DAT_010bade0,"HIGH",4);
  _DAT_010bade4 = 4;
  DAT_010bade0[4] = '\0';
  if (DAT_010bae08 < 0x10) {
    if (0x14 < DAT_010bae08) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bae00);
    }
    DAT_010bae08 = 0x20;
    DAT_010bae00 = _malloc(0x20);
  }
  _strncpy(DAT_010bae00,"THOUGHTFULLNESS",0xf);
  _DAT_010bae04 = 0xf;
  DAT_010bae00[0xf] = '\0';
  if (DAT_010bae28 < 9) {
    if (0x14 < DAT_010bae28) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bae20);
    }
    DAT_010bae28 = 0x20;
    DAT_010bae20 = _malloc(0x20);
  }
  _strncpy(DAT_010bae20,"SURPRISE",8);
  _DAT_010bae24 = 8;
  DAT_010bae20[8] = '\0';
  if (DAT_010bae48 < 6) {
    if (0x14 < DAT_010bae48) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bae40);
    }
    DAT_010bae48 = 0x20;
    DAT_010bae40 = _malloc(0x20);
  }
  _strncpy(DAT_010bae40,"ANGRY",5);
  _DAT_010bae44 = 5;
  DAT_010bae40[5] = '\0';
  if (DAT_010bae68 < 10) {
    if (0x14 < DAT_010bae68) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bae60);
    }
    DAT_010bae68 = 0x20;
    DAT_010bae60 = _malloc(0x20);
  }
  _strncpy(DAT_010bae60,"CONFUSION",9);
  _DAT_010bae64 = 9;
  DAT_010bae60[9] = '\0';
  if (DAT_010bae88 < 2) {
    if (0x14 < DAT_010bae88) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bae80);
    }
    DAT_010bae88 = 0x20;
    DAT_010bae80 = _malloc(0x20);
  }
  _strncpy(DAT_010bae80,"O",1);
  _DAT_010bae84 = 1;
  DAT_010bae80[1] = '\0';
  if (DAT_010baea8 < 2) {
    if (0x14 < DAT_010baea8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baea0);
    }
    DAT_010baea8 = 0x20;
    DAT_010baea0 = _malloc(0x20);
  }
  _strncpy(DAT_010baea0,"E",1);
  _DAT_010baea4 = 1;
  DAT_010baea0[1] = '\0';
  if (DAT_010baec8 < 2) {
    if (0x14 < DAT_010baec8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baec0);
    }
    DAT_010baec8 = 0x20;
    DAT_010baec0 = _malloc(0x20);
  }
  _strncpy(DAT_010baec0,"A",1);
  _DAT_010baec4 = 1;
  DAT_010baec0[1] = '\0';
  if (DAT_010baee8 < 0xc) {
    if (0x14 < DAT_010baee8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baee0);
    }
    DAT_010baee8 = 0x20;
    DAT_010baee0 = _malloc(0x20);
  }
  _strncpy(DAT_010baee0,"BLINK_RIGHT",0xb);
  _DAT_010baee4 = 0xb;
  DAT_010baee0[0xb] = '\0';
  if (DAT_010baf08 < 0xb) {
    if (0x14 < DAT_010baf08) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baf00);
    }
    DAT_010baf08 = 0x20;
    DAT_010baf00 = _malloc(0x20);
  }
  _strncpy(DAT_010baf00,"BLINK_LEFT",10);
  _DAT_010baf04 = 10;
  DAT_010baf00[10] = '\0';
  if (DAT_010baf28 < 7) {
    if (0x14 < DAT_010baf28) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baf20);
    }
    DAT_010baf28 = 0x20;
    DAT_010baf20 = _malloc(0x20);
  }
  _strncpy(DAT_010baf20,"CRYING",6);
  _DAT_010baf24 = 6;
  DAT_010baf20[6] = '\0';
  if (DAT_010baf48 < 7) {
    if (0x14 < DAT_010baf48) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baf40);
    }
    DAT_010baf48 = 0x20;
    DAT_010baf40 = _malloc(0x20);
  }
  _strncpy(DAT_010baf40,"SQUINT",6);
  _DAT_010baf44 = 6;
  DAT_010baf40[6] = '\0';
  if (DAT_010baf68 < 6) {
    if (0x14 < DAT_010baf68) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baf60);
    }
    DAT_010baf68 = 0x20;
    DAT_010baf60 = _malloc(0x20);
  }
  _strncpy(DAT_010baf60,"FROWN",5);
  _DAT_010baf64 = 5;
  DAT_010baf60[5] = '\0';
  if (DAT_010baf88 < 6) {
    if (0x14 < DAT_010baf88) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010baf80);
    }
    DAT_010baf88 = 0x20;
    DAT_010baf80 = _malloc(0x20);
  }
  _strncpy(DAT_010baf80,"SHOUT",5);
  _DAT_010baf84 = 5;
  DAT_010baf80[5] = '\0';
  if (DAT_010bafa8 < 10) {
    if (0x14 < DAT_010bafa8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bafa0);
    }
    DAT_010bafa8 = 0x20;
    DAT_010bafa0 = _malloc(0x20);
  }
  _strncpy(DAT_010bafa0,"LOOK_LEFT",9);
  _DAT_010bafa4 = 9;
  DAT_010bafa0[9] = '\0';
  if (DAT_010bafc8 < 0xb) {
    if (0x14 < DAT_010bafc8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bafc0);
    }
    DAT_010bafc8 = 0x20;
    DAT_010bafc0 = _malloc(0x20);
  }
  _strncpy(DAT_010bafc0,"LOOK_RIGHT",10);
  _DAT_010bafc4 = 10;
  DAT_010bafc0[10] = '\0';
  if (DAT_010bafe8 < 8) {
    if (0x14 < DAT_010bafe8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bafe0);
    }
    DAT_010bafe8 = 0x20;
    DAT_010bafe0 = _malloc(0x20);
  }
  _strncpy(DAT_010bafe0,"LOOK_UP",7);
  _DAT_010bafe4 = 7;
  DAT_010bafe0[7] = '\0';
  if (DAT_010bb008 < 10) {
    if (0x14 < DAT_010bb008) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb000);
    }
    DAT_010bb008 = 0x20;
    DAT_010bb000 = _malloc(0x20);
  }
  _strncpy(DAT_010bb000,"LOOK_DOWN",9);
  _DAT_010bb004 = 9;
  DAT_010bb000[9] = '\0';
  if (DAT_010bb028 < 9) {
    if (0x14 < DAT_010bb028) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb020);
    }
    DAT_010bb028 = 0x20;
    DAT_010bb020 = _malloc(0x20);
  }
  _strncpy(DAT_010bb020,"ZOMBIE A",8);
  _DAT_010bb024 = 8;
  DAT_010bb020[8] = '\0';
  if (DAT_010bb048 < 9) {
    if (0x14 < DAT_010bb048) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb040);
    }
    DAT_010bb048 = 0x20;
    DAT_010bb040 = _malloc(0x20);
  }
  _strncpy(DAT_010bb040,"ZOMBIE B",8);
  _DAT_010bb044 = 8;
  DAT_010bb040[8] = '\0';
  if (DAT_010bb068 < 4) {
    if (0x14 < DAT_010bb068) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb060);
    }
    DAT_010bb068 = 0x20;
    DAT_010bb060 = _malloc(0x20);
  }
  _strncpy(DAT_010bb060,"OLD",3);
  _DAT_010bb064 = 3;
  DAT_010bb060[3] = '\0';
  if (DAT_010bb088 < 0xb) {
    if (0x14 < DAT_010bb088) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb080);
    }
    DAT_010bb088 = 0x20;
    DAT_010bb080 = _malloc(0x20);
  }
  _strncpy(DAT_010bb080,"PUNCH LEFT",10);
  _DAT_010bb084 = 10;
  DAT_010bb080[10] = '\0';
  if (DAT_010bb0a8 < 0xc) {
    if (0x14 < DAT_010bb0a8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb0a0);
    }
    DAT_010bb0a8 = 0x20;
    DAT_010bb0a0 = _malloc(0x20);
  }
  _strncpy(DAT_010bb0a0,"PUNCH RIGHT",0xb);
  _DAT_010bb0a4 = 0xb;
  DAT_010bb0a0[0xb] = '\0';
  if (DAT_010bb0c8 < 9) {
    if (0x14 < DAT_010bb0c8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb0c0);
    }
    DAT_010bb0c8 = 0x20;
    DAT_010bb0c0 = _malloc(0x20);
  }
  _strncpy(DAT_010bb0c0,"UPPERCUT",8);
  _DAT_010bb0c4 = 8;
  DAT_010bb0c0[8] = '\0';
  if (DAT_010bb0e8 < 7) {
    if (0x14 < DAT_010bb0e8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb0e0);
    }
    DAT_010bb0e8 = 0x20;
    DAT_010bb0e0 = _malloc(0x20);
  }
  _strncpy(DAT_010bb0e0,"CLOSED",6);
  _DAT_010bb0e4 = 6;
  DAT_010bb0e0[6] = '\0';
  if (DAT_010bb108 < 0x10) {
    if (0x14 < DAT_010bb108) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb100);
    }
    DAT_010bb108 = 0x20;
    DAT_010bb100 = _malloc(0x20);
  }
  _strncpy(DAT_010bb100,"SHOOT NOT ANGRY",0xf);
  _DAT_010bb104 = 0xf;
  DAT_010bb100[0xf] = '\0';
  if (DAT_010bb128 < 0x11) {
    if (0x14 < DAT_010bb128) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb120);
    }
    DAT_010bb128 = 0x20;
    DAT_010bb120 = _malloc(0x20);
  }
  _strncpy(DAT_010bb120,"SHOOT EYES CLOSE",0x10);
  _DAT_010bb124 = 0x10;
  DAT_010bb120[0x10] = '\0';
  if (DAT_010bb148 < 0x10) {
    if (0x14 < DAT_010bb148) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb140);
    }
    DAT_010bb148 = 0x20;
    DAT_010bb140 = _malloc(0x20);
  }
  _strncpy(DAT_010bb140,"SHOOT EYES SHUT",0xf);
  _DAT_010bb144 = 0xf;
  DAT_010bb140[0xf] = '\0';
  if (DAT_010bb168 < 0x10) {
    if (0x14 < DAT_010bb168) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb160);
    }
    DAT_010bb168 = 0x20;
    DAT_010bb160 = _malloc(0x20);
  }
  _strncpy(DAT_010bb160,"RAGE MOUTH OPEN",0xf);
  _DAT_010bb164 = 0xf;
  DAT_010bb160[0xf] = '\0';
  if (DAT_010bb188 < 8) {
    if (0x14 < DAT_010bb188) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb180);
    }
    DAT_010bb188 = 0x20;
    DAT_010bb180 = _malloc(0x20);
  }
  _strncpy(DAT_010bb180,"SNIFF A",7);
  _DAT_010bb184 = 7;
  DAT_010bb180[7] = '\0';
  if (DAT_010bb1a8 < 8) {
    if (0x14 < DAT_010bb1a8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb1a0);
    }
    DAT_010bb1a8 = 0x20;
    DAT_010bb1a0 = _malloc(0x20);
  }
  _strncpy(DAT_010bb1a0,"SNIFF B",7);
  _DAT_010bb1a4 = 7;
  DAT_010bb1a0[7] = '\0';
  if (DAT_010bb1c8 < 7) {
    if (0x14 < DAT_010bb1c8) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_010bb1c0);
    }
    DAT_010bb1c8 = 0x20;
    DAT_010bb1c0 = _malloc(0x20);
  }
  _strncpy(DAT_010bb1c0,"PLEASE",6);
  _DAT_010bb1c4 = 6;
  DAT_010bb1c0[6] = '\0';
  FUN_009c89a0(local_36c);
  iVar2 = 0;
  local_4 = 0;
  FUN_009ca9d0(local_36c,"*.fan","data\\animations\\facials\\",(undefined1 *)0x1);
  if (local_324 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_320 - local_324 >> 2;
  }
  if (0 < iVar1) {
    do {
      __splitpath(*(char **)(local_324 + iVar2 * 4),(char *)0x0,(char *)0x0,local_214,local_110);
      _sprintf(local_318,"%s",local_214);
      FUN_009ac040(local_318);
      local_370 = FUN_00a316d0(local_318,'\x01');
      if (local_370 != (byte *)0x0) {
        if ((DAT_010bb1e4 == 0) ||
           ((uint)(DAT_010bb1ec - DAT_010bb1e4 >> 2) <=
            (uint)((int)DAT_010bb1e8 - DAT_010bb1e4 >> 2))) {
          FUN_00a32920(&DAT_010bb1e0,DAT_010bb1e8,1,&local_370);
        }
        else {
          *DAT_010bb1e8 = local_370;
          DAT_010bb1e8 = DAT_010bb1e8 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_36c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a34010 @ 00a34010 ////

void __fastcall FUN_00a34010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d77450;
  return;
}


//// FUNCTION FUN_00a34060 @ 00a34060 ////

LPCRITICAL_SECTION __fastcall FUN_00a34060(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return param_1;
}


//// FUNCTION FUN_00a340c0 @ 00a340c0 ////

void __fastcall FUN_00a340c0(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  return;
}


//// FUNCTION FUN_00a340e0 @ 00a340e0 ////

undefined4 * __thiscall FUN_00a340e0(void *this,byte param_1)

{
  FUN_00a34350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a34140 @ 00a34140 ////

undefined4 __fastcall FUN_00a34140(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_1 + 0x18))(0,0);
  iVar1 = 0;
  if ((param_1[0x16] != 0) && (iVar1 = 0, param_1[0x17] != 0)) {
    FUN_009b11d0(param_1[0x15]);
    iVar1 = FUN_009b1d00(param_1[0x17],param_1[0x16],0,4,0,param_1[2],1,0x3f800000,0,'\0');
    param_1[0x15] = iVar1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00a341c0 @ 00a341c0 ////

void __fastcall FUN_00a341c0(int param_1)

{
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa708;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009b11d0(*(undefined4 *)(param_1 + 0x54));
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  _Memory = DAT_010bb1f8;
  local_4 = 0;
  DAT_010bb1fc = 0;
  if (DAT_010bb1f8 != (undefined4 *)0x0) {
    FUN_00a34350(DAT_010bb1f8);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010bb1f8 = (undefined4 *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x58));
}


//// FUNCTION FUN_00a34260 @ 00a34260 ////

uint __fastcall FUN_00a34260(int *param_1)

{
  MMRESULT MVar1;
  int iVar2;
  int *piVar3;
  
  FUN_009b11d0(param_1[0x15]);
  (**(code **)(*param_1 + 0xc))();
  FUN_00a341c0((int)param_1);
  MVar1 = waveInReset((HWAVEIN)param_1[0x12]);
  if (MVar1 != 0) {
    return MVar1 & 0xffffff00;
  }
  piVar3 = param_1 + 0x13;
  iVar2 = 2;
  do {
    waveInUnprepareHeader((HWAVEIN)param_1[0x12],(LPWAVEHDR)*piVar3,0x20);
    GlobalUnlock((HGLOBAL)*piVar3);
    GlobalFree((HGLOBAL)*piVar3);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  MVar1 = waveInClose((HWAVEIN)param_1[0x12]);
  return CONCAT31((int3)(-MVar1 >> 8),'\x01' - (MVar1 != 0));
}


//// FUNCTION FUN_00a34320 @ 00a34320 ////

undefined4 * __fastcall FUN_00a34320(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  DAT_010bb1fc = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  return param_1;
}


//// FUNCTION FUN_00a34350 @ 00a34350 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a34350(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  local_4 = 0;
  if (DAT_010bb1fc == param_1) {
    DAT_010bb1fc = (undefined4 *)0x0;
  }
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00a34350(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  _DAT_010bb200 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a343e0 @ 00a343e0 ////

void __fastcall FUN_00a343e0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  DAT_010bb1fc = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  return;
}


//// FUNCTION FUN_00a34410 @ 00a34410 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a34410(void *this,undefined2 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  while( true ) {
    if (uVar1 < 0x6baa8) {
      _DAT_010bb200 = _DAT_010bb200 + 1;
      *(undefined2 *)((int)this + *(int *)((int)this + 8) * 2 + 0xc) = param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return;
    }
    if (*(int *)this != 0) break;
    puVar2 = operator_new(0xd755c);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_00a34320(puVar2);
    }
    *(int **)this = piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
    uVar1 = piVar3[2];
    this = piVar3;
  }
  return;
}


