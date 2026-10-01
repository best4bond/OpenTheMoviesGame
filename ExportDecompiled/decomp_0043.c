//// FUNCTION FUN_00983b80 @ 00983b80 ////

void __thiscall FUN_00983b80(void *this,char *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)((int)this + 0xf4) != 0) {
    return;
  }
  pcVar3 = (char *)FUN_0097e350(this,0);
  if (pcVar3 != param_1) {
    if (*(int *)((int)this + 0xf8) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(*(int *)((int)this + 0xf8) + 4));
    }
    *(undefined4 *)((int)this + 0xf8) = 0;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xf0));
  }
  FUN_00981ad0((int)this);
  MeshInstance_AddMeshWithChildren(this,(int)param_1,0);
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) & 0xfffdffff;
  if (param_1 != (char *)0x0) {
    bVar2 = FUN_009daa10(param_1,"[isdrawinlist2notlist1]");
    *(uint *)((int)this + 0x9c) =
         *(uint *)((int)this + 0x9c) ^
         ((uint)bVar2 << 0x17 ^ *(uint *)((int)this + 0x9c)) & 0x800000;
    iVar4 = _strncmp(param_1,"fac_",4);
    if ((iVar4 == 0) || (iVar4 = _strncmp(param_1,"set_",4), iVar4 == 0)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    *(uint *)((int)this + 0x9c) =
         *(uint *)((int)this + 0x9c) ^ (iVar4 << 0x1d ^ *(uint *)((int)this + 0x9c)) & 0x20000000;
    pcVar3 = "?p_fire";
    iVar4 = 7;
    bVar2 = true;
    pcVar5 = param_1;
    do {
      pcVar3 = pcVar3 + 1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar2 = *pcVar5 == *pcVar3;
      pcVar5 = pcVar5 + 1;
    } while (bVar2);
    if (bVar2) {
      FUN_00980430(this);
      goto LAB_00983ce4;
    }
  }
  if ((*(undefined4 **)((int)this + 0x100) != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x100), puVar1 != (undefined4 *)0x0)) {
    FUN_0040a5b0(puVar1);
    **(undefined4 **)((int)this + 0x100) = 0;
  }
LAB_00983ce4:
  if ((param_1 != (char *)0x0) && ((*(uint *)(param_1 + 0xe4) & 0x800) != 0)) {
    FUN_009820a0(this);
  }
  FUN_0097e8f0((int)this);
  return;
}


//// FUNCTION FUN_00983d10 @ 00983d10 ////

uint __fastcall FUN_00983d10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  ulonglong uVar5;
  char local_51;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30 [9];
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = FUN_0097e350(param_1,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    local_51 = '\0';
    uVar2 = FUN_009833d0(param_1,local_30,(byte *)"_sp_pavement_0",(int)&local_51);
    uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),local_51);
    if (local_51 != '\0') {
      local_3c = local_c;
      local_38 = local_8;
      local_34 = local_4;
      uVar5 = FUN_00acd42c();
      local_50 = (-0x80 - (int)uVar5) * 2;
      uVar5 = FUN_00acd42c();
      local_4c = (-0x80 - (int)uVar5) * 2;
      local_40 = param_1[0x11];
      local_48 = (((float)local_50 + (float)param_1[0xf]) - local_3c) + 1.0;
      uVar2 = 0x3f800000;
      local_44 = (((float)local_4c + (float)param_1[0x10]) - local_38) + 1.0;
      fVar4 = FUN_004012c0(0.0);
      uVar2 = (**(code **)(*param_1 + 0x20))(&local_48,(float)fVar4,uVar2);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00983e20 @ 00983e20 ////

void __fastcall FUN_00983e20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5a28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d70b04;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x27) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
  local_4 = 0xffffffff;
  FUN_00999aa0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00984090 @ 00984090 ////

undefined4 * __thiscall FUN_00984090(void *this,byte param_1)

{
  FUN_00983e20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009840b0 @ 009840b0 ////

void __thiscall FUN_009840b0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


//// FUNCTION FUN_00984190 @ 00984190 ////

float * __thiscall FUN_00984190(void *this,float *param_1)

{
  float10 fVar1;
  
  if (*(float *)this != 0.0) {
    fVar1 = (float10)fpatan((float10)*(float *)((int)this + 4),(float10)*(float *)this);
    fVar1 = FUN_004012c0((float)fVar1);
    *param_1 = (float)fVar1;
    return param_1;
  }
  if (0.0 < *(float *)((int)this + 4)) {
    fVar1 = FUN_004012c0(1.5707964);
    *param_1 = (float)fVar1;
    return param_1;
  }
  fVar1 = FUN_004012c0(-1.5707964);
  *param_1 = (float)fVar1;
  return param_1;
}


//// FUNCTION FUN_00984240 @ 00984240 ////

int __thiscall FUN_00984240(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = *param_1;
  iVar2 = param_1[1];
  *(int *)((int)this + 4) = iVar2;
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (iVar2 == -1) {
    *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 2);
    *(undefined1 *)((int)this + 10) = *(undefined1 *)((int)param_1 + 10);
    *(undefined1 *)((int)this + 0xb) = *(undefined1 *)((int)param_1 + 0xb);
    puVar1 = param_1 + 3;
    puVar3 = (undefined4 *)((int)this + 0xc);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = param_1 + 0x13;
    if ((*(byte *)((int)this + 10) & 1) != 0) {
      *(undefined4 *)((int)this + 0x4c) = *puVar1;
      *(undefined4 *)((int)this + 4) = 0xffffffff;
      return 0x50;
    }
  }
  else {
    *(undefined2 *)((int)this + 8) = *(undefined2 *)((int)this + 4);
    puVar1 = param_1 + 2;
    puVar3 = (undefined4 *)((int)this + 0xc);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1 = param_1 + 10;
  }
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  return (int)puVar1 - (int)param_1;
}


//// FUNCTION FUN_00984380 @ 00984380 ////

uint * __thiscall FUN_00984380(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)this = param_1;
  if (param_1 != 0) {
    puVar1 = operator_new(param_1 << 2);
    *(undefined4 **)((int)this + 4) = puVar1;
    for (uVar2 = *(uint *)this & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}


//// FUNCTION FUN_009843d0 @ 009843d0 ////

void __fastcall FUN_009843d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      puVar1 = *(undefined4 **)(param_1[1] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1[1] + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}


//// FUNCTION FUN_00984420 @ 00984420 ////

int * __thiscall FUN_00984420(void *this,byte param_1)

{
  FUN_00a4e130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00984440 @ 00984440 ////

void __cdecl FUN_00984440(undefined4 param_1)

{
  DAT_0105139c = param_1;
  return;
}


//// FUNCTION FUN_00984450 @ 00984450 ////

void FUN_00984450(void)

{
  DAT_0105139c = 0;
  return;
}


//// FUNCTION FUN_00984460 @ 00984460 ////

void __cdecl FUN_00984460(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = s_Data_Animations_00e66fe8;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  if ((pcVar3 != s_Data_Animations_00e66fe8) && ((param_1[1] != ':' || (param_1[2] != '\\')))) {
    iVar4 = _strncmp(param_1,"aa_",3);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\AutoAnimated\\%s",s_Data_Animations_00e66fe8,param_1);
      return;
    }
    _sprintf(&DAT_0105bed8,"%s\\%s",s_Data_Animations_00e66fe8,param_1);
    return;
  }
  iVar4 = (int)&DAT_0105bed8 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar4] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_009844f0 @ 009844f0 ////

int * __thiscall FUN_009844f0(void *this,byte param_1)

{
  FUN_009843d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00984510 @ 00984510 ////

char * __fastcall FUN_00984510(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  builtin_strncpy(param_1,"UNKNOWN",8);
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = ' ';
  param_1[0x27] = 'A';
  return param_1;
}


//// FUNCTION FUN_00984540 @ 00984540 ////

void __fastcall FUN_00984540(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x28));
}


//// FUNCTION FUN_00984560 @ 00984560 ////

void FUN_00984560(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c78);
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  _sprintf(s_Data_Animations_00e66fe8,"Data\\Animations\\High");
  FUN_00a4e9b0();
  iVar1 = 0;
  do {
    (&DAT_01050c98)[iVar1] = 1;
    (&DAT_01050d98)[iVar1] = 0;
    (&DAT_01050e98)[iVar1] = 0;
    (&DAT_01050f98)[iVar1] = 0;
    (&DAT_01051098)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  DAT_01050d98 = 1;
  DAT_01050dad = 1;
  DAT_01050dae = 1;
  DAT_01050daf = 1;
  DAT_01050db0 = 1;
  DAT_01050db1 = 1;
  DAT_01050db2 = 1;
  DAT_01050db3 = 1;
  DAT_01050db4 = 1;
  DAT_01050fad = 1;
  DAT_01050fac = 1;
  DAT_01050fb2 = 1;
  DAT_01050fb1 = 1;
  DAT_01050fb0 = 1;
  DAT_01050faf = 1;
  DAT_01050fb9 = 1;
  DAT_01050fb8 = 1;
  DAT_01050fb7 = 1;
  DAT_01050fb5 = 1;
  puVar3 = (undefined4 *)&DAT_01050f98;
  puVar4 = &DAT_01051198;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_010511ad = 0;
  DAT_010511ac = 0;
  puVar2 = &DAT_01050e98;
  do {
    iVar1 = 0;
    do {
      puVar2[iVar1] = puVar2[iVar1 + -0x100] == '\0';
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x100);
    puVar2 = puVar2 + 0x200;
  } while ((int)puVar2 < 0x1051398);
  return;
}


//// FUNCTION FUN_00984680 @ 00984680 ////

void __fastcall FUN_00984680(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  return;
}


//// FUNCTION Anim_FindTrackByName @ 00984760 ////

byte * __thiscall Anim_FindTrackByName(void *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  byte local_100 [256];
  
  if ((param_1 == (char *)0x0) || (*(int *)((int)this + 0x2c) == 0)) {
    return (byte *)0x0;
  }
  _sprintf((char *)local_100,param_1);
  FUN_009ac040((char *)local_100);
  if (*(byte *)((int)this + 0x32) != 0) {
    uVar6 = 0;
    pbVar4 = *(byte **)((int)this + 0x2c);
    do {
      pbVar5 = local_100;
      pbVar2 = pbVar4;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_009847da:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009847df;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_009847da;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_009847df:
      if (iVar3 == 0) {
        return *(byte **)((int)this + 0x2c) + uVar6 * 0x2c;
      }
      uVar6 = uVar6 + 1;
      pbVar4 = pbVar4 + 0x2c;
    } while (uVar6 < *(byte *)((int)this + 0x32));
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_00984820 @ 00984820 ////

bool __cdecl FUN_00984820(char *param_1)

{
  if (((*param_1 == 'z') && (param_1[1] == 'c')) && (param_1[2] == 'm')) {
    return param_1[3] == 'p';
  }
  return false;
}


//// FUNCTION FUN_00984890 @ 00984890 ////

void __thiscall FUN_00984890(void *this,float *param_1)

{
  *(float *)this = *param_1 * *(float *)this;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * *param_1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * *param_1;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) * param_1[1];
  *(float *)((int)this + 0x10) = param_1[1] * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = param_1[1] * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = param_1[2] * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x1c) * param_1[2];
  *(float *)((int)this + 0x20) = *(float *)((int)this + 0x20) * param_1[2];
  return;
}


//// FUNCTION FUN_009848f0 @ 009848f0 ////

ulonglong __cdecl FUN_009848f0(float param_1)

{
  ulonglong uVar1;
  
  if ((param_1 + 1.0) * 32767.0 < 0.0) {
    uVar1 = FUN_00acd42c();
    return uVar1;
  }
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_009849d0 @ 009849d0 ////

void * __thiscall FUN_009849d0(void *this,ushort *param_1,ushort *param_2,float param_3)

{
  float local_20 [4];
  float local_10 [4];
  
  FUN_009aa0c0(local_10,param_1);
  FUN_009aa0c0(local_20,param_2);
  FUN_009a9cf0(this,local_10,local_20,param_3);
  return this;
}


//// FUNCTION Anim_ReadTrackHeader @ 00984a30 ////

int __thiscall Anim_ReadTrackHeader(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
  if ((*(byte *)((int)this + 0x20) & 2) != 0) {
    *(undefined4 *)((int)this + 0x24) = param_1[9];
    return 0x28;
  }
  *(undefined4 *)((int)this + 0x24) = 0x41200000;
  return (int)(param_1 + 9) - (int)param_1;
}


//// FUNCTION FUN_00984a90 @ 00984a90 ////

void __thiscall FUN_00984a90(void *this,float *param_1)

{
  float10 fVar1;
  
  *(float *)this = param_1[9];
  *(float *)((int)this + 4) = param_1[10];
  *(float *)((int)this + 8) = param_1[0xb];
  fVar1 = FUN_009a4140(param_1);
  fVar1 = FUN_004012c0((float)fVar1);
  *(float *)((int)this + 0xc) = (float)fVar1;
  return;
}


//// FUNCTION Anim_ReadHeader @ 00984ad0 ////

int __thiscall Anim_ReadHeader(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(int *)this = *param_1;
  *(char *)((int)this + 4) = (char)param_1[1];
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)param_1 + 6);
  piVar2 = param_1 + 2;
  piVar3 = (int *)((int)this + 8);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  if (0xb < *(int *)this) {
    *(char *)((int)this + 0x38) = (char)param_1[0xe];
    *(undefined1 *)((int)this + 0x39) = *(undefined1 *)((int)param_1 + 0x39);
    *(undefined2 *)((int)this + 0x3a) = *(undefined2 *)((int)param_1 + 0x3a);
    return 0x3c;
  }
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x39) = 0;
  *(undefined2 *)((int)this + 0x3a) = 0;
  return (int)(param_1 + 0xe) - (int)param_1;
}


//// FUNCTION Anim_ReadSetHeader @ 00984b40 ////

int __thiscall Anim_ReadSetHeader(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)((int)param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)((int)param_1 + 7);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  if ((*(byte *)((int)this + 7) & 2) != 0) {
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    return 0x1c;
  }
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  return (int)(param_1 + 6) - (int)param_1;
}


//// FUNCTION FUN_00984bc0 @ 00984bc0 ////

void __thiscall FUN_00984bc0(void *this,float *param_1,int param_2,int param_3,float param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  if (*(short *)((int)this + param_2 * 8) == 0) {
    iVar5 = *(int *)((int)this + param_2 * 8 + 4);
    uVar2 = *(ushort *)(iVar5 + 4 + param_3 * 6);
    puVar1 = (ushort *)(iVar5 + param_3 * 6);
    uVar3 = puVar1[1];
    uVar4 = *puVar1;
  }
  else {
    uVar2 = *(ushort *)((int)this + param_2 * 8 + 6);
    uVar3 = *(ushort *)((int)this + param_2 * 8 + 4);
    uVar4 = *(ushort *)((int)this + param_2 * 8 + 2);
  }
  *param_1 = ((float)uVar4 * 3.051851e-05 - 1.0) * param_4;
  param_1[1] = ((float)uVar3 * 3.051851e-05 - 1.0) * param_4;
  param_1[2] = ((float)uVar2 * 3.051851e-05 - 1.0) * param_4;
  return;
}


//// FUNCTION FUN_00984cb0 @ 00984cb0 ////

int __thiscall FUN_00984cb0(void *this,int param_1)

{
  if (((*(int *)((int)this + 0x2c) != 0) && (-1 < param_1)) &&
     (param_1 < (int)(uint)*(byte *)((int)this + 2))) {
    return *(int *)((int)this + 0x2c) + (*(uint *)this & 0x7fff) * param_1 * 0xc;
  }
  return 0;
}


//// FUNCTION FUN_00984d30 @ 00984d30 ////

undefined4 __thiscall FUN_00984d30(void *this,int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x33);
  if (bVar1 == 0) {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if ((int)(uint)bVar1 <= param_1) {
    param_1 = bVar1 - 1;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x6c);
}


//// FUNCTION FUN_00984df0 @ 00984df0 ////

char * __thiscall FUN_00984df0(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  iVar2 = param_1[2];
  puVar6 = param_1 + 3;
  *(int *)((int)this + 8) = iVar2;
  if (iVar2 < -1) {
    *(undefined4 *)((int)this + 0xc) = *puVar6;
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    puVar6 = param_1 + 6;
  }
  else {
    *(int *)((int)this + 0x10) = iVar2;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  pcVar7 = (char *)(puVar6 + 1);
  *(int *)((int)this + 0x18) = (int)this + 0x1c;
  pcVar3 = pcVar7;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_009ac020((uint)(pcVar3 + (1 - ((int)puVar6 + 5))));
  pcVar3 = pcVar7;
  pcVar8 = *(char **)((int)this + 0x18);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3 = pcVar7;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = FUN_009ac020((uint)(pcVar3 + (1 - ((int)puVar6 + 5))));
  return pcVar7 + (uVar4 - (int)param_1);
}


//// FUNCTION FUN_00984ec0 @ 00984ec0 ////

void __fastcall FUN_00984ec0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x30));
}


//// FUNCTION FUN_00984fc0 @ 00984fc0 ////

void * __thiscall FUN_00984fc0(void *this,byte param_1)

{
  FUN_00984ec0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Anim_ReadVectorTrack @ 00984fe0 ////

undefined4 * __thiscall Anim_ReadVectorTrack(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char local_28 [32];
  byte local_8;
  undefined1 local_7;
  undefined4 local_4;
  
  iVar2 = Anim_ReadTrackHeader(local_28,param_1);
  pcVar3 = local_28;
  iVar6 = (int)this - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[iVar6] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(uint *)((int)this + 0x20) =
       *(uint *)((int)this + 0x20) ^ ((uint)local_8 << 0xd ^ *(uint *)((int)this + 0x20)) & 0x2000;
  *(undefined1 *)((int)this + 0x20) = local_7;
  *(undefined4 *)((int)this + 0x24) = local_4;
  *(uint *)((int)this + 0x20) =
       *(uint *)((int)this + 0x20) ^ ((uint)local_8 << 6 ^ *(uint *)((int)this + 0x20)) & 0x1f00;
  puVar4 = operator_new(param_2 * 0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else if (-1 < param_2 + -1) {
    puVar7 = puVar4;
    for (uVar5 = (param_2 + -1) * 3 + 3U & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  *(undefined4 **)((int)this + 0x28) = puVar4;
  puVar7 = (undefined4 *)((int)param_1 + iVar2);
  for (uVar5 = param_2 * 3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return (undefined4 *)((int)param_1 + iVar2) + param_2 * 3;
}


//// FUNCTION Anim_ApplyTrackToSubmesh @ 009850c0 ////

uint __cdecl
Anim_ApplyTrackToSubmesh(uint *param_1,void *param_2,char param_3,byte param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  int local_10;
  byte *local_4;
  
  bVar11 = false;
  do {
    uVar6 = 0;
    if (param_1 == (uint *)0x0) {
      if ((((*(uint *)(DAT_01050c48 + 0x9c) & 0x200000) == 0) &&
          ((DAT_0105eb48 == 0 || ((*(uint *)(DAT_0105eb48 + 0xe4) & 0x20000000) == 0)))) || (bVar11)
         ) {
        return 0;
      }
      bVar11 = true;
      uVar7 = DAT_01050c48;
    }
    else {
      uVar7 = *param_1;
    }
    if ((uVar7 != 0) &&
       ((param_3 != '\0' ||
        (lVar12 = __allshl(param_4,0),
        ((uint)lVar12 & *(uint *)(uVar7 + 0x90)) != 0 ||
        ((uint)((ulonglong)lVar12 >> 0x20) & *(uint *)(uVar7 + 0x94)) != 0)))) {
      if (*(int **)(uVar7 + 0x78) == (int *)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = **(int **)(uVar7 + 0x78);
      }
      if ((local_10 != 0) && (*(byte *)(local_10 + 0x32) != 0)) {
        pbVar5 = *(byte **)(local_10 + 0x2c);
        do {
          if (pbVar5 != (byte *)0x0) {
            pbVar2 = (byte *)(param_5 * 0x80 + *(int *)(DAT_0105eb48 + 0x44));
            pbVar8 = pbVar5;
            do {
              bVar1 = *pbVar8;
              bVar10 = bVar1 < *pbVar2;
              if (bVar1 != *pbVar2) {
LAB_009851c8:
                iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_009851cd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar10 = bVar1 < pbVar2[1];
              if (bVar1 != pbVar2[1]) goto LAB_009851c8;
              pbVar8 = pbVar8 + 2;
              pbVar2 = pbVar2 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_009851cd:
            if (iVar3 == 0) {
              local_4 = pbVar5;
              if ((((*(uint *)(pbVar5 + 0x20) & 0x1000) == 0) || (DAT_01050c48 == 0)) ||
                 ((*(byte *)(DAT_01050c48 + 0x9b) & 0xf) == 0)) goto LAB_00985290;
              uVar6 = uVar6 + 1;
              if (*(byte *)(local_10 + 0x32) <= uVar6) goto LAB_00985290;
              pbVar8 = (byte *)(uVar6 * 0x2c + *(int *)(local_10 + 0x2c));
              goto LAB_00985235;
            }
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 0x2c;
        } while (uVar6 < *(byte *)(local_10 + 0x32));
      }
    }
    if (param_1 != (uint *)0x0) {
      param_1 = (uint *)param_1[1];
    }
  } while( true );
LAB_00985235:
  do {
    pbVar2 = pbVar5;
    pbVar9 = pbVar8;
    if (pbVar8 != (byte *)0x0) {
      do {
        bVar1 = *pbVar2;
        bVar11 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00985264:
          iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00985269;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar11 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00985264;
        pbVar2 = pbVar2 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00985269:
      if ((iVar3 == 0) &&
         (local_4 = pbVar8,
         (*(uint *)(pbVar8 + 0x20) >> 8 & 0xf) == (*(byte *)(DAT_01050c48 + 0x9b) & 0xf))) break;
    }
    uVar6 = uVar6 + 1;
    pbVar8 = pbVar8 + 0x2c;
    local_4 = pbVar5;
  } while (uVar6 < *(byte *)(local_10 + 0x32));
LAB_00985290:
  uVar4 = AnimPlayer_SampleTrack(*(void **)(uVar7 + 0x78),local_4,param_2);
  return -(uint)((char)uVar4 != '\0') & uVar7;
}


//// FUNCTION Anim_BuildTranslationTable @ 009852c0 ////

void * __cdecl Anim_BuildTranslationTable(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ulonglong uVar7;
  
  iVar1 = param_3;
  iVar4 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    do {
      if ((*(byte *)(*(int *)(param_1 + iVar2 * 4) + 0x18) & 1) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  pvVar3 = operator_new(param_2 * 8 + (param_2 - iVar4) * param_3 * 6);
  puVar6 = (ushort *)(param_2 * 8 + (int)pvVar3);
  param_3 = 0;
  if (0 < param_2) {
    puVar5 = (undefined4 *)((int)pvVar3 + 4);
    do {
      iVar2 = *(int *)(param_1 + param_3 * 4);
      if ((*(byte *)(iVar2 + 0x18) & 1) == 0) {
        *(undefined2 *)(puVar5 + -1) = 0;
        *puVar5 = puVar6;
        Anim_DecodeRleArray(*(void **)(iVar2 + 0xc),puVar6,iVar1,6);
        Anim_DecodeRleArray(*(void **)(iVar2 + 0x10),puVar6 + 1,iVar1,6);
        Anim_DecodeRleArray(*(void **)(iVar2 + 0x14),puVar6 + 2,iVar1,6);
        puVar6 = puVar6 + iVar1 * 3;
      }
      else {
        *(undefined2 *)(puVar5 + -1) = 1;
        uVar7 = FUN_00acd42c();
        *(short *)((int)puVar5 + -2) = (short)uVar7;
        uVar7 = FUN_00acd42c();
        *(short *)puVar5 = (short)uVar7;
        if (0.0 <= ((1.0 / param_4) * *(float *)(iVar2 + 0x14) + 1.0) * 32767.0) {
          uVar7 = FUN_00acd42c();
          *(short *)((int)puVar5 + 2) = (short)uVar7;
        }
        else {
          uVar7 = FUN_00acd42c();
          *(short *)((int)puVar5 + 2) = (short)uVar7;
        }
      }
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 2;
    } while (param_3 < param_2);
  }
  return pvVar3;
}


//// FUNCTION FUN_00985490 @ 00985490 ////

void FUN_00985490(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_010513c8;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1[-3] = 0;
    puVar1[-4] = 0;
    puVar1[-5] = 0;
    puVar1[-7] = 0;
    puVar1[-8] = 0;
    puVar1[-9] = 0;
    puVar1[-2] = 0x3f800000;
    puVar1[-6] = 0x3f800000;
    puVar1[-10] = 0x3f800000;
    puVar1 = puVar1 + 0xc;
  } while ((int)puVar1 < 0x10543c8);
  return;
}


//// FUNCTION FUN_009854d0 @ 009854d0 ////

undefined4 * __thiscall FUN_009854d0(void *this,byte param_1)

{
  FUN_009854f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009854f0 @ 009854f0 ////

void __fastcall FUN_009854f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d70bc4;
  return;
}


//// FUNCTION FUN_00985500 @ 00985500 ////

void __cdecl FUN_00985500(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  void *this;
  
  if ((param_1 != 0) && (this = *(void **)(param_1 + 8), this != (void *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((iVar3 < 0) || (0xf < iVar3)) {
      iVar3 = 0;
    }
    pfVar4 = (float *)(&DAT_01054470 + iVar3 * 0xf5);
    if (0 < param_2) {
      puVar1 = (undefined4 *)((int)this + 0x24);
      puVar2 = &DAT_01054480 + iVar3 * 0xf5;
      param_1 = param_2;
      do {
        FUN_009aa380(this,pfVar4);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        this = (void *)((int)this + 0x30);
        puVar1 = puVar1 + 0xc;
        pfVar4 = pfVar4 + 7;
        puVar2 = puVar2 + 7;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  return;
}


//// FUNCTION AnimTrack_SampleInterpolated @ 00985580 ////

void __thiscall
AnimTrack_SampleInterpolated(void *this,int param_1,int param_2,float param_3,void *param_4)

{
  float fVar1;
  float local_90 [4];
  float local_80 [4];
  float local_70 [4];
  float local_60 [9];
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [9];
  float local_c;
  float local_8;
  float local_4;
  
  if (param_4 != (void *)0x0) {
    Matrix_FromPackedPoseSample
              (local_30,*(int *)((int)this + 0x28) + param_1 * 0xc,*(float *)((int)this + 0x24));
    Matrix_FromPackedPoseSample
              (local_60,*(int *)((int)this + 0x28) + param_2 * 0xc,*(float *)((int)this + 0x24));
    FUN_009a9a70(local_80,local_30);
    FUN_009a9a70(local_70,local_60);
    FUN_009a9cf0(local_90,local_80,local_70,param_3);
    FUN_009aa380(param_4,local_90);
    fVar1 = 1.0 - param_3;
    *(float *)((int)param_4 + 0x24) = local_c * fVar1 + local_3c * param_3;
    *(float *)((int)param_4 + 0x28) = local_8 * fVar1 + local_38 * param_3;
    *(float *)((int)param_4 + 0x2c) = local_4 * fVar1 + local_34 * param_3;
  }
  return;
}


//// FUNCTION FUN_009856c0 @ 009856c0 ////

undefined4 * FUN_009856c0(void)

{
  undefined4 *puVar1;
  
  if ((((DAT_01050c48 == 0) || (-1 < *(int *)(DAT_01050c48 + 0x9c))) ||
      (*(int *)(DAT_01050c48 + 0x78) == 0)) ||
     (puVar1 = *(undefined4 **)(*(int *)(DAT_01050c48 + 0x78) + 0x84), puVar1 == (undefined4 *)0x0))
  {
    puVar1 = &DAT_010513a0;
  }
  return puVar1;
}


//// FUNCTION Anim_EulerSampleToPackedQuat @ 009856f0 ////

void __thiscall Anim_EulerSampleToPackedQuat(void *this,int param_1)

{
  float local_40 [4];
  float local_30 [12];
  
  local_30[0xb] = 0.0;
  local_30[10] = 0.0;
  local_30[9] = 0.0;
  local_30[7] = 0.0;
  local_30[6] = 0.0;
  local_30[5] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_30[8] = 1.0;
  local_30[4] = 1.0;
  local_30[0] = 1.0;
  FUN_009ab3f0(local_30,(((float)*(ushort *)(param_1 + 6) - 0.5) * 3.0517578e-05 - 1.0) * 3.1415927,
               (((float)*(ushort *)(param_1 + 8) - 0.5) * 3.0517578e-05 - 1.0) * 3.1415927,
               (((float)*(ushort *)(param_1 + 10) - 0.5) * 3.0517578e-05 - 1.0) * 3.1415927);
  FUN_009a9a70(local_40,local_30);
  FUN_009a9f60(this,local_40);
  return;
}


//// FUNCTION FUN_00985920 @ 00985920 ////

undefined4 * __thiscall FUN_00985920(void *this,byte param_1)

{
  FUN_00985940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00985940 @ 00985940 ////

void __fastcall FUN_00985940(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  *param_1 = &PTR_LAB_00d70bc4;
  return;
}


//// FUNCTION FUN_00985960 @ 00985960 ////

void __thiscall FUN_00985960(void *this,uint param_1,undefined1 param_2)

{
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(uint *)this = *(uint *)this & 0xffff0000 | param_1 & 0x7fff;
  *(undefined1 *)((int)this + 2) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)this = *(uint *)this & 0xf1ffffff | 0x1000000;
  *(undefined4 *)((int)this + 8) = 0x41200000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return;
}


//// FUNCTION Anim_ReadTrackSet @ 009859c0 ////

uint * __cdecl Anim_ReadTrackSet(undefined4 *param_1,uint param_2)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *local_2c;
  uint local_28;
  ushort local_24;
  byte local_22;
  byte local_21;
  float local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5a4b;
  local_c = ExceptionList;
  local_2c = (uint *)*param_1;
  local_14 = 0;
  ExceptionList = &local_c;
  iVar3 = Anim_ReadSetHeader(&local_28,local_2c);
  local_2c = (uint *)((int)local_2c + iVar3);
  pvVar4 = operator_new(0x34);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)FUN_00985960(pvVar4,local_28,(char)local_24);
  }
  pfVar1 = (float *)(puVar5 + 4);
  *pfVar1 = local_20;
  puVar5[5] = local_1c;
  puVar5[6] = local_18;
  puVar5[7] = local_14;
  uVar8 = ((local_22 & 3) << 10 | param_2 & 1) << 0xf | *puVar5 & 0xf9ff7fff;
  *puVar5 = uVar8;
  *puVar5 = ((uint)(0.1 < SQRT((float)puVar5[6] * (float)puVar5[6] +
                               (float)puVar5[5] * (float)puVar5[5] + *pfVar1 * *pfVar1)) << 0x1b ^
            uVar8) & 0x8000000 ^ uVar8;
  puVar5[3] = local_10;
  puVar5[2] = 0x41200000;
  if ((local_21 & 1) != 0) {
    puVar5[2] = *local_2c;
    local_2c = local_2c + 1;
  }
  puVar6 = operator_new((uint)*(byte *)((int)puVar5 + 2));
  bVar2 = *(byte *)((int)puVar5 + 2);
  puVar5[0xc] = (uint)puVar6;
  puVar10 = local_2c;
  for (uVar8 = (uint)(bVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar8 = bVar2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(char *)puVar6 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  local_2c = (uint *)((int)local_2c + (uint)*(byte *)((int)puVar5 + 2));
  local_2c = (uint *)FUN_009ac020((uint)local_2c);
  pvVar4 = operator_new((uint)*(byte *)((int)puVar5 + 2) << 2);
  puVar5[8] = (uint)pvVar4;
  uVar8 = 0;
  if (*(char *)((int)puVar5 + 2) != '\0') {
    do {
      pvVar4 = operator_new(0x1c);
      local_4 = 0;
      if (pvVar4 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = Anim_ReadChannel(pvVar4,(uint *)&local_2c,*puVar5 & 0x7fff);
      }
      *(undefined4 **)(puVar5[8] + uVar8 * 4) = puVar7;
      uVar8 = uVar8 + 1;
      local_4 = 0xffffffff;
    } while (uVar8 < *(byte *)((int)puVar5 + 2));
  }
  local_2c = (uint *)FUN_009ac020((uint)local_2c);
  uVar8 = *puVar5;
  if ((char)(uVar8 >> 8) < '\0') {
    param_2 = (int)((uVar8 & 0x7fff) - 1) / 3 + 1;
  }
  else {
    param_2 = uVar8 & 0x7fff;
  }
  puVar5[1] = (uint)(SQRT((float)puVar5[6] * (float)puVar5[6] +
                          (float)puVar5[5] * (float)puVar5[5] + *pfVar1 * *pfVar1) /
                    ((float)(int)param_2 * 0.1));
  if ((local_21 & 4) != 0) {
    iVar3 = local_24 * local_28;
    puVar6 = operator_new(iVar3 * 0xc);
    puVar5[0xb] = (uint)puVar6;
    puVar10 = local_2c;
    for (uVar8 = iVar3 * 3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(char *)puVar6 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    *param_1 = local_2c + iVar3 * 3;
    ExceptionList = local_c;
    return puVar5;
  }
  *param_1 = local_2c;
  ExceptionList = local_c;
  return puVar5;
}


//// FUNCTION FUN_00985c70 @ 00985c70 ////

void __thiscall FUN_00985c70(void *this,int param_1,int *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)this;
  uVar4 = uVar1 & 0x7fff;
  uVar3 = uVar4;
  if ((char)(uVar1 >> 8) < '\0') {
    uVar3 = (int)(uVar4 - 1) / 3 + 1;
  }
  iVar2 = uVar3 * 100 + -100;
  if (iVar2 < param_1) {
    if ((uVar1 & 0x1000000) != 0) {
      uVar5 = FUN_00acd42c();
      param_1 = param_1 - (int)uVar5 * iVar2;
      if (param_1 < iVar2) goto LAB_00985cd9;
    }
    param_1 = iVar2;
  }
LAB_00985cd9:
  *param_4 = ((float)(int)(uVar4 - 1) * (float)param_1) / (float)iVar2;
  uVar5 = FUN_00acd42c();
  uVar1 = (int)uVar5 + 1;
  *param_2 = (int)uVar5;
  *param_3 = uVar1;
  uVar3 = *(uint *)this & 0x7fff;
  if (uVar1 == uVar3) {
    if ((*(uint *)this & 0x1000000) == 0) {
      *param_3 = uVar3 - 1;
    }
    else {
      *param_3 = 0;
    }
  }
  if (DAT_0105be81 == '\0') {
    *param_4 = *param_4 - (float)*param_2;
    return;
  }
  *param_4 = 0.0;
  return;
}


//// FUNCTION FUN_00985db0 @ 00985db0 ////

void __fastcall FUN_00985db0(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00985de0 @ 00985de0 ////

void __fastcall FUN_00985de0(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  piVar1 = (int *)((int)param_1 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
    return;
  }
  pvVar3 = DAT_01051398;
  if (DAT_01051398 != param_1) {
    do {
      pvVar2 = pvVar3;
      pvVar3 = *(void **)((int)pvVar2 + 0x20);
    } while (pvVar3 != param_1);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)((int)pvVar3 + 0x20);
      goto LAB_00985e1e;
    }
  }
  DAT_01051398 = *(void **)((int)pvVar3 + 0x20);
LAB_00985e1e:
  uVar4 = (uint)*(byte *)((int)param_1 + 0x33);
  if (uVar4 != 0) {
    puVar5 = (undefined4 *)((int)param_1 + 0x6c);
    do {
      pvVar3 = (void *)*puVar5;
      if (pvVar3 != (void *)0x0) {
        FUN_00984ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  pvVar3 = *(void **)((int)param_1 + 0x2c);
  if (pvVar3 == (void *)0x0) {
    piVar1 = *(int **)((int)param_1 + 0x68);
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)((int)param_1 + 0x68) = 0;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    FUN_009843d0(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  _eh_vector_destructor_iterator_(pvVar3,0x2c,*(int *)((int)pvVar3 + -4),FUN_00984540);
                    /* WARNING: Subroutine does not return */
  _free((void *)((int)pvVar3 + -4));
}


//// FUNCTION FUN_00985eb0 @ 00985eb0 ////

void __thiscall FUN_00985eb0(void *this,int param_1,int *param_2,uint *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_0059ee40((int)this);
  if (iVar1 < param_1) {
    iVar3 = 0;
    if (*(char *)((int)this + 0x33) == '\0') {
LAB_00985eed:
      uVar4 = FUN_00acd42c();
      param_1 = param_1 - (int)uVar4 * iVar1;
      if (param_1 < iVar1) goto LAB_00985f0b;
    }
    else {
      if (*(char *)((int)this + 0x33) == '\0') {
        iVar3 = -1;
      }
      iVar3 = *(int *)((int)this + iVar3 * 4 + 0x6c);
      if ((iVar3 == 0) || ((*(byte *)(iVar3 + 3) & 1) != 0)) goto LAB_00985eed;
    }
    param_1 = iVar1;
  }
LAB_00985f0b:
  *param_4 = ((float)(int)((*(uint *)((int)this + 0x30) & 0xffff) - 1) * (float)param_1) /
             (float)iVar1;
  uVar4 = FUN_00acd42c();
  *param_2 = (int)uVar4;
  uVar2 = (int)uVar4 + 1;
  *param_3 = uVar2;
  if (uVar2 == (*(uint *)((int)this + 0x30) & 0xffff)) {
    iVar1 = 0;
    if (*(char *)((int)this + 0x33) != '\0') {
      if (*(char *)((int)this + 0x33) == '\0') {
        iVar1 = -1;
      }
      iVar1 = *(int *)((int)this + iVar1 * 4 + 0x6c);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 3) & 1) == 0)) {
        *param_3 = (*(uint *)((int)this + 0x30) & 0xffff) - 1;
        goto LAB_00985f8d;
      }
    }
    *param_3 = 0;
    *param_4 = *param_4 - (float)*param_2;
    return;
  }
LAB_00985f8d:
  *param_4 = *param_4 - (float)*param_2;
  return;
}


//// FUNCTION FUN_00985ff0 @ 00985ff0 ////

undefined4 * __thiscall FUN_00985ff0(void *this,byte param_1)

{
  FUN_00986010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00986010 @ 00986010 ////

void __fastcall FUN_00986010(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  *param_1 = &PTR_LAB_00d70bc4;
  return;
}


//// FUNCTION FUN_00986030 @ 00986030 ////

int __thiscall FUN_00986030(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = *(void **)((int)this + *(int *)this * 4 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_00985de0(pvVar1);
  }
  *(int *)((int)this + *(int *)this * 4 + 4) = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  iVar2 = *(int *)this;
  *(int *)this = (iVar2 + 1) % 0x32;
  return (iVar2 + 1) / 0x32;
}


//// FUNCTION Anim_ExpandSetPoses @ 009860b0 ////

uint __fastcall Anim_ExpandSetPoses(uint *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *local_4;
  
  uVar6 = 0;
  if (param_1[9] != 0) {
    return param_1[9];
  }
  if (param_1[8] != 0) {
    pvVar2 = Anim_BuildTranslationTable
                       (param_1[8],(uint)*(byte *)((int)param_1 + 2),*param_1 & 0x7fff,
                        (float)param_1[2]);
    param_1[10] = (uint)pvVar2;
    iVar4 = (*param_1 & 0x7fff) * 4;
    iVar1 = (uint)*(byte *)((int)param_1 + 2) * 8 + 0xc;
    pvVar2 = operator_new((*param_1 & 0x7fff) * iVar1 + iVar4);
    param_1[9] = (uint)pvVar2;
    pvVar2 = (void *)((int)pvVar2 + iVar4);
    uVar3 = 0;
    if ((*param_1 & 0x7fff) != 0) {
      do {
        *(void **)(param_1[9] + uVar3 * 4) = pvVar2;
        uVar3 = uVar3 + 1;
        pvVar2 = (void *)((int)pvVar2 + iVar1);
      } while (uVar3 < (*param_1 & 0x7fff));
    }
    uVar3 = *param_1;
    local_4 = operator_new((uVar3 & 0x7fff) * 0xc);
    if (local_4 == (ushort *)0x0) {
      local_4 = (ushort *)0x0;
    }
    else {
      iVar4 = (uVar3 & 0x7fff) - 1;
      if (-1 < iVar4) {
        puVar5 = local_4;
        for (uVar3 = iVar4 * 3 + 3U & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
          puVar5[0] = 0;
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (ushort *)((int)puVar5 + 1);
        }
      }
    }
    if (*(char *)((int)param_1 + 2) != '\0') {
      do {
        Anim_ExpandChannel(*(void **)(param_1[8] + uVar6 * 4),local_4,*param_1 & 0x7fff);
        uVar3 = 0;
        puVar5 = local_4;
        if ((*param_1 & 0x7fff) != 0) {
          do {
            **(uint **)(param_1[9] + uVar3 * 4) = uVar3;
            *(uint *)(*(int *)(param_1[9] + uVar3 * 4) + 8) = param_1[10];
            Anim_EulerSampleToPackedQuat
                      ((void *)(*(int *)(param_1[9] + uVar3 * 4) + 0xc + uVar6 * 8),(int)puVar5);
            *(uint *)(*(int *)(param_1[9] + uVar3 * 4) + 4) = param_1[2];
            uVar3 = uVar3 + 1;
            puVar5 = puVar5 + 6;
          } while (uVar3 < (*param_1 & 0x7fff));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)((int)param_1 + 2));
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4);
  }
  return 0;
}


//// FUNCTION FUN_00986800 @ 00986800 ////

uint __cdecl FUN_00986800(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *local_2c;
  char *local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5a68;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    return (uint)ExceptionList & 0xffffff00;
  }
  pcVar5 = s_Data_Animations_00e66fe8;
  do {
    pcVar2 = pcVar5;
    pcVar5 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if ((pcVar2 == s_Data_Animations_00e66fe8) || ((param_1[1] == ':' && (param_1[2] == '\\')))) {
    iVar3 = (int)&DAT_0105bed8 - (int)param_1;
    ExceptionList = &local_c;
    do {
      cVar1 = *param_1;
      param_1[iVar3] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  else {
    ExceptionList = &local_c;
    iVar3 = _strncmp(param_1,"aa_",3);
    if (iVar3 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\AutoAnimated\\%s",s_Data_Animations_00e66fe8,param_1);
    }
    else {
      _sprintf(&DAT_0105bed8,"%s\\%s",s_Data_Animations_00e66fe8,param_1);
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = (char *)0x0;
  local_24 = 0x14;
  pcVar5 = &DAT_0105bed8;
  do {
    pcVar2 = pcVar5;
    pcVar5 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar5 = pcVar2 + -0x105bed8;
  if ((char *)0x13 < pcVar5) {
    local_24 = (uint)(pcVar2 + -0x105beb8) & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,&DAT_0105bed8,(size_t)pcVar5);
  local_2c[(int)pcVar5] = '\0';
  local_4 = 0;
  local_28 = pcVar5;
  uVar4 = FUN_009d3660(&local_2c,(uint *)0x0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_24 >> 8),(char)uVar4);
}


//// FUNCTION FUN_00986950 @ 00986950 ////

undefined4 __cdecl FUN_00986950(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  uint in_EAX;
  FILE *_File;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  uint local_26c;
  int local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0 [6];
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124 [3];
  float local_118;
  float local_114;
  char local_108 [260];
  
  if ((((param_1 != 0) && (param_2 != 0)) && (in_EAX = param_3, param_3 != 0)) &&
     (*(char *)(param_1 + 0x33) != '\0')) {
    _sprintf(local_108,"%s\\%s.%s");
    _File = _fopen(local_108,"wt");
    in_EAX = 0;
    if (_File != (FILE *)0x0) {
      FID_conflict__fwprintf(_File,"// The Movies generic animation file format\n\n");
      local_25c = (float)(**(uint **)(param_1 + 0x6c) & 0x7fff);
      FID_conflict__fwprintf(_File,"FRAME_COUNT = %d\n\n");
      local_26c = 0;
      if (*(char *)(param_1 + 0x33) != '\0') {
        do {
          FID_conflict__fwprintf(_File,"[ANIMATION]\n");
          puVar1 = *(uint **)(param_1 + 0x6c + local_26c * 4);
          FID_conflict__fwprintf(_File,"BONE_COUNT = %d\n");
          FID_conflict__fwprintf(_File,"BONE_PARENTS = ");
          FID_conflict__fwprintf(_File,"%d ",0xffffffff);
          uVar7 = 0;
          if (*(char *)((int)puVar1 + 2) != '\0') {
            do {
              FID_conflict__fwprintf(_File,"%d ");
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(byte *)((int)puVar1 + 2));
          }
          FID_conflict__fwprintf(_File,"\n\n");
          local_154 = 0.0;
          local_158 = 0.0;
          local_15c = 0.0;
          local_164 = 0;
          local_168 = 0;
          local_16c = 0;
          local_174 = 0;
          local_178 = 0;
          local_17c = 0;
          local_160 = 0x3f800000;
          local_170 = 0x3f800000;
          local_180 = 0x3f800000;
          local_210 = 0.0;
          local_214 = 0.0;
          local_218 = 0.0;
          local_220 = 0;
          local_224 = 0;
          local_228 = 0;
          local_230 = 0.0;
          local_234 = 0;
          local_238 = 0.0;
          local_21c = 0x3f800000;
          local_22c = 1.0;
          local_23c = 1.0;
          local_1e0 = 0;
          local_1e4 = 0;
          local_1e8 = 0;
          local_1f0 = 0;
          local_1f4 = 0;
          local_1f8 = 0;
          local_200 = 0.0;
          local_204 = 0;
          local_208 = 0.0;
          local_1ec = 0x3f800000;
          local_1fc = 1.0;
          local_20c = 1.0;
          if (local_26c != 0) {
            fVar8 = (float10)*(float *)(*(int *)(param_1 + 0x28) + -4 + local_26c * 0x10);
            iVar5 = *(int *)(param_1 + 0x28) + local_26c * 0x10;
            fVar9 = (float10)fcos(fVar8);
            local_1f0 = 0;
            local_1f4 = 0;
            local_1f8 = 0;
            local_204 = 0;
            local_1ec = 0x3f800000;
            local_1fc = (float)fVar9;
            local_20c = (float)fVar9;
            fVar8 = (float10)fsin(fVar8);
            local_208 = (float)fVar8;
            local_200 = (float)-fVar8;
            local_1e8 = *(undefined4 *)(iVar5 + -0x10);
            local_1e4 = *(undefined4 *)(iVar5 + -0xc);
            local_1e0 = *(undefined4 *)(iVar5 + -8);
            fVar8 = (float10)fcos((float10)(float)puVar1[7]);
            local_220 = 0;
            local_224 = 0;
            local_228 = 0;
            local_234 = 0;
            local_21c = 0x3f800000;
            local_22c = (float)fVar8;
            local_23c = (float)fVar8;
            fVar8 = (float10)fsin((float10)(float)puVar1[7]);
            local_238 = (float)fVar8;
            local_230 = (float)-fVar8;
            local_218 = (float)puVar1[4];
            local_214 = (float)puVar1[5];
            local_210 = (float)puVar1[6];
            FUN_009aa830(&local_180,&local_20c);
            FUN_009aa830(&local_23c,&local_20c);
          }
          local_268 = -1;
          do {
            FID_conflict__fwprintf(_File,"[BONE]\n");
            local_270 = 0.0;
            if (local_25c != 0.0) {
              do {
                fVar4 = local_270;
                if (local_268 == -1) {
                  local_280 = (float)(int)local_270;
                  if ((int)local_270 < 0) {
                    local_280 = local_280 + 4.2949673e+09;
                  }
                  local_260 = (float)((int)local_25c - 1);
                  fVar3 = (float)(int)local_260;
                  if ((int)local_260 < 0) {
                    fVar3 = fVar3 + 4.2949673e+09;
                  }
                  local_280 = local_280 / fVar3;
                  if (local_280 <= 1.0) {
                    if (local_280 < 0.0) {
                      local_280 = 0.0;
                    }
                  }
                  else {
                    local_280 = 1.0;
                  }
                  local_1b0 = 0.0;
                  local_1b4 = 0.0;
                  local_1b8 = 0.0;
                  local_1c0 = 0;
                  local_1c4 = 0;
                  local_1c8 = 0;
                  local_1d0 = 0.0;
                  local_1d4 = 0;
                  local_1d8 = 0.0;
                  local_1bc = 0x3f800000;
                  local_1cc = 1.0;
                  local_1dc = 1.0;
                  if (local_26c == 0) {
                    local_1a0[1] = 0.0;
                    local_27c = 0.0;
                    local_1a0[2] = 0.0;
                    local_1a0[3] = 0.0;
                    local_278 = 0.0;
                    local_258 = (float)puVar1[4];
                    local_274 = 0.0;
                    local_254 = (float)puVar1[5];
                    local_250 = (float)puVar1[6];
                    fVar8 = FUN_004012c0(0.0);
                    local_24c = (float)fVar8;
                    fVar3 = 0.0;
                  }
                  else {
                    local_27c = local_15c;
                    local_278 = local_158;
                    local_274 = local_154;
                    local_258 = local_218;
                    local_254 = local_214;
                    local_250 = local_210;
                    local_260 = 0.0;
                    local_1a0[0] = 0.0;
                    local_270 = 0.0;
                    FUN_009ab850(&local_180,&local_260,local_1a0,&local_270);
                    fVar8 = FUN_004012c0(local_270);
                    local_24c = (float)fVar8;
                    local_264 = 0.0;
                    local_1a0[4] = 0.0;
                    local_248 = 0.0;
                    FUN_009ab850(&local_23c,&local_264,local_1a0 + 4,&local_248);
                    fVar3 = local_248;
                  }
                  fVar8 = FUN_004012c0(fVar3);
                  local_244 = (float)fVar8;
                  local_118 = local_250 - local_274;
                  local_114 = (local_258 - local_27c) * local_280;
                  local_27c = local_114 + local_27c;
                  local_278 = (local_254 - local_278) * local_280 + local_278;
                  local_274 = local_118 * local_280 + local_274;
                  local_1a0[5] = local_27c;
                  local_188 = local_278;
                  local_184 = local_274;
                  pfVar6 = FUN_00429400(local_124,local_24c,local_244,local_280);
                  local_240 = *pfVar6;
                  fVar8 = (float10)fcos((float10)local_240);
                  local_1c0 = 0;
                  local_1c4 = 0;
                  local_1c8 = 0;
                  local_1d4 = 0;
                  local_1bc = 0x3f800000;
                  local_1cc = (float)fVar8;
                  local_1dc = (float)fVar8;
                  fVar8 = (float10)fsin((float10)local_240);
                  local_1d8 = (float)fVar8;
                  local_1d0 = (float)-fVar8;
                  local_1b8 = local_27c;
                  local_1b4 = local_278;
                  local_1b0 = local_274;
                  local_1ac = local_27c;
                  local_1a8 = local_278;
                  local_1a4 = local_274;
                  FUN_009a9a70(&local_144,&local_1dc);
                  FID_conflict__fwprintf
                            (_File,"POS( %f, %f, %f )\tQUAT( %f, %f, %f, %f )\n",(double)local_1ac,
                             (double)local_1a8,(double)local_1a4,(double)local_144,(double)local_140
                             ,(double)local_13c,(double)local_138);
                  local_270 = fVar4;
                }
                else {
                  uVar7 = Anim_ExpandSetPoses(puVar1);
                  piVar2 = *(int **)(uVar7 + (int)fVar4 * 4);
                  FUN_009aa0c0(&local_134,(ushort *)(piVar2 + local_268 * 2 + 3));
                  FUN_00984bc0((void *)piVar2[2],&local_150,local_268,*piVar2,(float)piVar2[1]);
                  FID_conflict__fwprintf
                            (_File,"POS( %f, %f, %f )\tQUAT( %f, %f, %f, %f )\n",(double)local_150,
                             (double)local_14c,(double)local_148,(double)local_134,(double)local_130
                             ,(double)local_12c,(double)local_128);
                }
                local_270 = (float)((int)local_270 + 1);
              } while ((uint)local_270 < (uint)local_25c);
            }
            FID_conflict__fwprintf(_File,"[END_BONE]\n\n");
            uVar7 = local_26c;
            local_268 = local_268 + 1;
          } while (local_268 < (int)(uint)*(byte *)((int)puVar1 + 2));
          FID_conflict__fwprintf(_File,"[END_ANIMATION]\n\n");
          local_26c = uVar7 + 1;
        } while (local_26c < *(byte *)(param_1 + 0x33));
      }
      iVar5 = _fclose(_File);
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00987270 @ 00987270 ////

void __fastcall FUN_00987270(int param_1)

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


//// FUNCTION FUN_009872a0 @ 009872a0 ////

uint __thiscall FUN_009872a0(void *this,byte *param_1)

{
  char cVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  ushort *puVar8;
  ushort *puVar9;
  void *this_00;
  uint uVar10;
  ushort *local_d8;
  float *local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float *local_c0;
  float local_bc;
  undefined1 *local_b8;
  ushort *local_b4;
  ushort *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  void *local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c [4];
  float local_7c;
  float local_74;
  float local_70;
  float local_68;
  float local_64 [4];
  float local_54 [4];
  float local_44 [3];
  float local_38 [4];
  float local_28;
  float local_14;
  float local_10 [4];
  
  if (*(int *)((int)this + 0x24) == 0) {
    Anim_ExpandSetPoses(this);
  }
  if ((*(uint *)this & 0x7fff) != 0) {
    if ((*param_1 & 0x10) == 0) {
      FUN_00985c70(this,*(int *)(param_1 + 4),(int *)&local_b4,&local_9c,&local_d0);
      puVar8 = local_b4;
    }
    else {
      local_9c = (uint)*(ushort *)(param_1 + 0x1e);
      local_d0 = *(float *)(param_1 + 0x20);
      puVar8 = (ushort *)(uint)*(ushort *)(param_1 + 0x1c);
    }
    local_b8 = &DAT_01050c98 + *(int *)(param_1 + 0x14) * 0x100;
    local_b4 = *(ushort **)(param_1 + 0xc);
    if (local_b4 == (ushort *)0x0) {
      cVar1 = *(char *)((int)this + 2);
      if (local_d0 == 0.0) {
        if (*(int *)((int)this + 0x2c) == 0) {
          local_d8 = *(ushort **)(param_1 + 8);
          puVar9 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + (int)puVar8 * 4) + 0xc);
          uVar10 = 0;
          if (cVar1 != '\0') {
            local_d4 = (float *)((int)local_d8 + 0x24);
            local_b4 = (ushort *)0x0;
            do {
              if (local_b8[uVar10] != '\0') {
                FUN_009aa0c0(local_8c,puVar9);
                FUN_009aa380(local_d8,local_8c);
                puVar3 = (undefined4 *)
                         FUN_00984bc0(*(void **)((int)this + 0x28),local_44,uVar10,(int)puVar8,
                                      *(float *)((int)this + 8));
                *local_d4 = (float)*puVar3;
                local_d4[1] = (float)puVar3[1];
                local_d4[2] = (float)puVar3[2];
              }
              local_d8 = (ushort *)((int)local_d8 + 0x30);
              uVar10 = uVar10 + 1;
              local_d4 = local_d4 + 0xc;
              puVar9 = puVar9 + 4;
            } while (uVar10 < *(byte *)((int)this + 2));
          }
        }
        else {
          this_00 = *(void **)(param_1 + 8);
          local_b4 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + (int)puVar8 * 4) + 0xc);
          uVar10 = 0;
          if (cVar1 != '\0') {
            local_d8 = (ushort *)((int)this_00 + 0x24);
            do {
              if (local_b8[uVar10] != '\0') {
                FUN_009aa0c0(local_8c,local_b4);
                FUN_009aa380(this_00,local_8c);
                puVar3 = (undefined4 *)
                         FUN_00984bc0(*(void **)((int)this + 0x28),local_44,uVar10,(int)puVar8,
                                      *(float *)((int)this + 8));
                *(undefined4 *)local_d8 = *puVar3;
                *(undefined4 *)((int)local_d8 + 4) = puVar3[1];
                *(undefined4 *)((int)local_d8 + 8) = puVar3[2];
                iVar4 = FUN_00984cb0(this,uVar10);
                FUN_00984890(this_00,(float *)(iVar4 + (int)puVar8 * 0xc));
              }
              uVar10 = uVar10 + 1;
              local_d8 = (ushort *)((int)local_d8 + 0x30);
              local_b4 = local_b4 + 4;
              this_00 = (void *)((int)this_00 + 0x30);
            } while (uVar10 < *(byte *)((int)this + 2));
            return (uint)puVar8;
          }
        }
      }
      else {
        local_c0 = (float *)(*(int *)(*(int *)((int)this + 0x24) + local_9c * 4) + 0xc);
        local_d8 = *(ushort **)(param_1 + 8);
        puVar9 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + (int)puVar8 * 4) + 0xc);
        uVar10 = 0;
        if (cVar1 != '\0') {
          local_d4 = (float *)((int)local_d8 + 0x24);
          local_b4 = (ushort *)0x0;
          do {
            if (local_b8[uVar10] != '\0') {
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_cc,uVar10,(int)puVar8,
                           *(float *)((int)this + 8));
              pfVar2 = (float *)FUN_00984bc0(*(void **)((int)this + 0x28),local_44,uVar10,local_9c,
                                             *(float *)((int)this + 8));
              fVar6 = pfVar2[1];
              local_74 = pfVar2[2] - local_c4;
              local_70 = (*pfVar2 - local_cc) * local_d0;
              local_ac = local_70 + local_cc;
              *local_d4 = local_ac;
              local_a8 = (fVar6 - local_c8) * local_d0 + local_c8;
              local_d4[1] = local_a8;
              local_a4 = local_74 * local_d0 + local_c4;
              local_d4[2] = local_a4;
              FUN_009aa0c0(local_64,puVar9);
              FUN_009aa0c0(local_8c,(ushort *)local_c0);
              FUN_009a9cf0(local_54,local_64,local_8c,local_d0);
              FUN_009aa380(local_d8,local_54);
            }
            local_d4 = local_d4 + 0xc;
            local_c0 = (float *)((int)local_c0 + 8);
            uVar10 = uVar10 + 1;
            local_d8 = (ushort *)((int)local_d8 + 0x30);
            puVar9 = puVar9 + 4;
          } while (uVar10 < *(byte *)((int)this + 2));
          return (uint)puVar8;
        }
      }
    }
    else {
      local_bc = 1.0 - *(float *)(param_1 + 0x10);
      local_b0 = local_b4 + 6;
      puVar5 = &DAT_01050c98 + *(int *)(param_1 + 0x18) * 0x100;
      if (local_d0 == 0.0) {
        local_d8 = *(ushort **)(param_1 + 8);
        puVar9 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + (int)puVar8 * 4) + 0xc);
        uVar10 = 0;
        if (*(char *)((int)this + 2) != '\0') {
          local_d4 = (float *)((int)local_d8 + 0x24);
          do {
            if (local_b8[uVar10] != '\0') {
              FUN_009aa0c0(local_8c,local_b0);
              FUN_009aa0c0(local_64,puVar9);
              FUN_009a9cf0(local_54,local_64,local_8c,local_bc);
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_cc,uVar10,(int)puVar8,
                           *(float *)((int)this + 8));
              FUN_00984bc0(*(void **)(local_b4 + 4),&local_98,uVar10,*(int *)local_b4,
                           *(float *)(local_b4 + 2));
              local_74 = local_90 - local_c4;
              local_70 = (local_98 - local_cc) * local_bc;
              local_ac = local_70 + local_cc;
              *local_d4 = local_ac;
              local_a8 = (local_94 - local_c8) * local_bc + local_c8;
              local_d4[1] = local_a8;
              local_a4 = local_74 * local_bc + local_c4;
              local_d4[2] = local_a4;
              FUN_009aa380(local_d8,local_54);
            }
            local_d8 = (ushort *)((int)local_d8 + 0x30);
            local_d4 = local_d4 + 0xc;
            uVar10 = uVar10 + 1;
            local_b0 = local_b0 + 4;
            puVar9 = puVar9 + 4;
          } while (uVar10 < *(byte *)((int)this + 2));
          return (uint)puVar8;
        }
      }
      else {
        local_d8 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + local_9c * 4) + 0xc);
        local_a0 = *(void **)(param_1 + 8);
        puVar9 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + (int)puVar8 * 4) + 0xc);
        uVar10 = 0;
        if (*(char *)((int)this + 2) != '\0') {
          local_c0 = (float *)((int)local_a0 + 0x24);
          local_b8 = (undefined1 *)((int)local_b8 - (int)puVar5);
          do {
            if (puVar5[(int)local_b8 + uVar10] != '\0') {
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_cc,uVar10,(int)puVar8,
                           *(float *)((int)this + 8));
              pfVar2 = (float *)FUN_00984bc0(*(void **)((int)this + 0x28),local_44,uVar10,local_9c,
                                             *(float *)((int)this + 8));
              local_14 = pfVar2[2] - local_c4;
              local_28 = (*pfVar2 - local_cc) * local_d0;
              local_cc = local_28 + local_cc;
              local_c8 = (pfVar2[1] - local_c8) * local_d0 + local_c8;
              local_c4 = local_14 * local_d0 + local_c4;
              FUN_009aa0c0(local_10,local_d8);
              FUN_009aa0c0(local_54,puVar9);
              FUN_009a9cf0(local_38,local_54,local_10,local_d0);
              if (puVar5[uVar10] == '\0') {
                FUN_009aa380(local_a0,local_38);
                *local_c0 = local_cc;
                fVar6 = local_c4;
                fVar7 = local_c8;
              }
              else {
                FUN_009aa0c0(local_64,local_b0);
                FUN_009a9cf0(local_8c,local_38,local_64,local_bc);
                FUN_009aa380(local_a0,local_8c);
                FUN_00984bc0(*(void **)(local_b4 + 4),&local_98,uVar10,*(int *)local_b4,
                             *(float *)(local_b4 + 2));
                local_68 = local_90 - local_c4;
                local_7c = (local_98 - local_cc) * local_bc;
                local_ac = local_7c + local_cc;
                *local_c0 = local_ac;
                local_a8 = (local_94 - local_c8) * local_bc + local_c8;
                local_a4 = local_68 * local_bc + local_c4;
                fVar6 = local_a4;
                fVar7 = local_a8;
              }
              local_c0[1] = fVar7;
              local_c0[2] = fVar6;
            }
            local_a0 = (void *)((int)local_a0 + 0x30);
            local_c0 = local_c0 + 0xc;
            local_d8 = local_d8 + 4;
            local_b0 = local_b0 + 4;
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 4;
          } while (uVar10 < *(byte *)((int)this + 2));
          return (uint)puVar8;
        }
      }
    }
    return (uint)puVar8;
  }
  return 0;
}


//// FUNCTION FUN_00987a00 @ 00987a00 ////

void __cdecl FUN_00987a00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5a88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00984460(param_1);
  FUN_00a50160(&DAT_0105bed8);
  FUN_009d3340(param_1,local_2c,(char *)0x0);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  FUN_004073f0(&local_4c,"Data\\Animations\\FX\\",0x13);
  pcVar2 = local_2c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_4c,local_2c,(int)pcVar2 - (int)(local_2c + 1));
  FUN_004073f0(&local_4c,".fx",3);
  FUN_00a50160(local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00987ae0 @ 00987ae0 ////

/* WARNING: Removing unreachable block (ram,0x00987af8) */

uint __thiscall FUN_00987ae0(void *this,uint *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x33);
  if (bVar1 != 0) {
    uVar2 = *param_1 & 0xf;
    if (bVar1 <= uVar2) {
      uVar2 = bVar1 - 1;
    }
    uVar2 = FUN_009872a0(*(void **)((int)this + uVar2 * 4 + 0x6c),(byte *)param_1);
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_00987b20 @ 00987b20 ////

undefined4 __thiscall FUN_00987b20(void *this,float param_1,uint param_2)

{
  uint uVar1;
  void *local_4;
  
  if (*(byte *)((int)this + 0x33) == 0) {
    return 0;
  }
  if (((int)param_2 < 0) ||
     (uVar1 = param_2, (int)(uint)*(byte *)((int)this + 0x33) <= (int)param_2)) {
    uVar1 = 0;
  }
  local_4 = this;
  FUN_00985eb0(this,(int)param_1,(int *)&local_4,&param_2,&param_1);
  uVar1 = Anim_ExpandSetPoses(*(uint **)((int)this + uVar1 * 4 + 0x6c));
  return *(undefined4 *)(uVar1 + param_2 * 4);
}


//// FUNCTION FUN_00987b80 @ 00987b80 ////

void FUN_00987b80(void)

{
  undefined4 *puVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c78);
  puVar1 = &DAT_010543a4;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      FUN_00985de0((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x105446c);
  thunk_FUN_00a4fbb0();
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  return;
}


//// FUNCTION FUN_00987bc0 @ 00987bc0 ////

void __thiscall FUN_00987bc0(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  void *pvVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  uint _Count;
  undefined4 *unaff_FS_OFFSET;
  bool bVar14;
  int local_188;
  char *local_17c;
  uint local_178;
  uint local_174;
  char local_170 [20];
  undefined4 local_15c [2];
  ushort local_154;
  char local_150 [64];
  uint local_110;
  char local_10c [256];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5ac4;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  piVar13 = *(int **)((int)this + 0x68);
  if (piVar13 != (int *)0x0) {
    FUN_009843d0(piVar13);
                    /* WARNING: Subroutine does not return */
    _free(piVar13);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  if (param_1 == '\0') {
    _sprintf(local_10c,"Data\\Animations\\FX\\%s.fx",this);
    uVar10 = FUN_00a4f3f0(local_10c);
  }
  else {
    _sprintf(local_10c,"Tools\\Viewer\\viewer.fx");
    local_178 = 0;
    local_17c = local_170;
    pcVar9 = local_10c;
    local_170[0] = '\0';
    local_174 = 0x14;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar10 = (int)pcVar9 - (int)(local_10c + 1);
    if (0x13 < uVar10) {
      local_174 = uVar10 + 0x20 & 0xffffffe0;
      local_17c = _malloc(local_174);
    }
    _strncpy(local_17c,local_10c,uVar10);
    local_17c[uVar10] = '\0';
    local_4 = 0;
    local_178 = uVar10;
    uVar10 = FUN_009d3720(&local_17c);
    local_4 = 0xffffffff;
    if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
      _free(local_17c);
    }
  }
  if (uVar10 == 0) {
    *unaff_FS_OFFSET = local_c;
    return;
  }
  puVar3 = operator_new(uVar10);
  if (param_1 == '\0') {
    sVar4 = FUN_00a50330(local_10c,puVar3,uVar10);
  }
  else {
    local_17c = local_170;
    pcVar9 = local_10c;
    local_170[0] = '\0';
    local_178 = 0;
    local_174 = 0x14;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar9 - (int)(local_10c + 1);
    if (0x13 < _Count) {
      local_174 = _Count + 0x20 & 0xffffffe0;
      local_17c = _malloc(local_174);
    }
    _strncpy(local_17c,local_10c,_Count);
    local_17c[_Count] = '\0';
    local_4 = 1;
    local_178 = _Count;
    sVar4 = FUN_009d3ca0(&local_17c,puVar3,uVar10,(undefined1 *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
      _free(local_17c);
    }
  }
  if (sVar4 != 0) {
    uVar10 = puVar3[1];
    piVar13 = puVar3 + 2;
    pvVar5 = operator_new(8);
    local_4 = 2;
    if (pvVar5 == (void *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = FUN_00984380(pvVar5,uVar10);
    }
    *(uint **)((int)this + 0x68) = puVar6;
    local_4 = 0xffffffff;
    local_188 = 0;
    if (0 < (int)*puVar6) {
      do {
        iVar12 = *piVar13;
        if (iVar12 == 1) {
          puVar7 = local_15c;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          iVar12 = FUN_00984240(local_15c,piVar13);
          piVar13 = (int *)((int)piVar13 + iVar12);
          puVar7 = operator_new(0x34);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = &PTR_FUN_00d70c44;
            puVar7[5] = puVar7 + 8;
            *(undefined1 *)(puVar7 + 8) = 0;
            puVar7[6] = 0;
            puVar7[7] = 0x14;
            puVar7[3] = 0xffffffff;
            puVar7[2] = 0xffffffff;
            puVar7[4] = puVar7[4] & 0xffffff80;
          }
          *(undefined4 **)(*(int *)(*(int *)((int)this + 0x68) + 4) + local_188 * 4) = puVar7;
          puVar7[4] = puVar7[4] ^ (puVar7[4] ^ local_110) & 0xf;
          puVar7[1] = (uint)local_154;
          iVar12 = _strncmp("GUN_HANDGUN_",local_150,0xc);
          if (iVar12 == 0) {
            _sprintf(local_150,"META_PROP_PISTOL");
          }
          iVar12 = 9;
          bVar14 = true;
          pcVar9 = local_150;
          pcVar11 = "FOOTSTEP";
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar14 = *pcVar9 == *pcVar11;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar14);
          if (bVar14) {
            puVar7[4] = puVar7[4] | 0x40;
          }
          iVar12 = _strncmp(local_150,"META_",5);
          if (iVar12 == 0) {
            puVar7[4] = puVar7[4] | 0x10;
            puVar7[2] = 0xffffffff;
            iVar12 = FUN_009ac120(local_150,"_CAR_");
            if (iVar12 != -1) {
              puVar7[4] = puVar7[4] | 0x20;
            }
            pcVar9 = local_150;
            do {
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_004015d0(puVar7 + 5,local_150,(int)pcVar9 - (int)(local_150 + 1));
          }
          else {
            uVar8 = FUN_009b01a0(local_150);
            puVar7[2] = uVar8;
          }
        }
        else if (iVar12 == 3) {
          iVar12 = piVar13[1];
          iVar2 = piVar13[2];
          piVar13 = piVar13 + 3;
          puVar7 = operator_new(0xc);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = &PTR_FUN_00d70c10;
          }
          *(undefined4 **)(*(int *)(*(int *)((int)this + 0x68) + 4) + local_188 * 4) = puVar7;
          puVar7[1] = iVar2;
          puVar7[2] = iVar12;
        }
        else if (iVar12 == 6) {
          uVar10 = piVar13[1];
          if (-2 < piVar13[2]) {
            uVar10 = uVar10 + 0xc;
          }
          pvVar5 = operator_new(uVar10);
          FUN_00984df0(pvVar5,piVar13);
          puVar3 = operator_new(0x2c);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            *puVar3 = &PTR_FUN_00d70c58;
            puVar3[2] = puVar3 + 5;
            *(undefined1 *)(puVar3 + 5) = 0;
            puVar3[3] = 0;
            puVar3[4] = 0x14;
          }
          *(undefined4 **)(*(int *)(*(int *)((int)this + 0x68) + 4) + local_188 * 4) = puVar3;
          puVar3[1] = *(undefined4 *)((int)pvVar5 + 0x10);
          puVar3[10] = *(undefined4 *)((int)pvVar5 + 0x14);
          pcVar9 = *(char **)((int)pvVar5 + 0x18);
          pcVar11 = pcVar9;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          FUN_004015d0(puVar3 + 2,pcVar9,(int)pcVar11 - (int)(pcVar9 + 1));
                    /* WARNING: Subroutine does not return */
          _free(pvVar5);
        }
        local_188 = local_188 + 1;
      } while (local_188 < **(int **)((int)this + 0x68));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar3);
}


//// FUNCTION FUN_009880c0 @ 009880c0 ////

uint __thiscall FUN_009880c0(void *this,uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  ushort *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  uint local_128;
  float local_124;
  float *local_120;
  float local_11c;
  ushort *local_118;
  ushort *local_114;
  float *local_110;
  uint *local_10c;
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
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ushort *local_d0;
  float *local_cc;
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [2];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [4];
  float local_30;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)((int)this + 0x24) == 0) {
    Anim_ExpandSetPoses(this);
  }
  if ((*(uint *)this & 0x7fff) == 0) {
    return 0;
  }
  uVar8 = *param_1;
  if ((uVar8 & 0x10) == 0) {
    FUN_00985c70(this,param_1[1],(int *)&local_128,&local_e0,&local_11c);
  }
  else {
    local_128 = (uint)(ushort)param_1[7];
    local_e0 = (uint)*(ushort *)((int)param_1 + 0x1e);
    local_11c = (float)param_1[8];
  }
  uVar7 = local_128;
  pfVar4 = (float *)(&DAT_01050c98 + param_1[5] * 0x100);
  if ((uVar8 & 0x20) == 0) {
    uVar8 = param_1[0xb];
    local_124 = 1.0 - (float)param_1[4];
    if (((int)uVar8 < 0) || (0xf < (int)uVar8)) {
      uVar8 = 0;
    }
    local_10c = (uint *)param_1[9];
    pfVar6 = (float *)(&DAT_01054470 + uVar8 * 0xf5);
    local_110 = pfVar4;
    if ((local_10c == (uint *)0x0) || ((float)param_1[10] <= 0.0)) {
      iVar1 = *(int *)((int)this + 0x24);
      if (local_11c == 0.0) {
        local_120 = (float *)(*(int *)(iVar1 + local_128 * 4) + 0xc);
        local_128 = 0;
        if (*(char *)((int)this + 2) != '\0') {
          pfVar3 = (float *)(&DAT_01054480 + uVar8 * 0xf5);
          do {
            if (*(char *)((int)pfVar4 + local_128) != '\0') {
              FUN_009aa0c0(local_40,(ushort *)local_120);
              FUN_009a9cf0(&local_f0,local_40,pfVar6,local_124);
              *pfVar6 = local_f0;
              pfVar6[1] = local_ec;
              pfVar6[2] = local_e8;
              pfVar6[3] = local_e4;
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_fc,local_128,uVar7,
                           *(float *)((int)this + 8));
              local_98 = pfVar3[2] - local_f4;
              local_64 = (*pfVar3 - local_fc) * local_124;
              local_108 = local_64 + local_fc;
              *pfVar3 = local_108;
              local_104 = (pfVar3[1] - local_f8) * local_124 + local_f8;
              pfVar3[1] = local_104;
              local_100 = local_98 * local_124 + local_f4;
              pfVar3[2] = local_100;
              pfVar4 = local_110;
            }
            local_128 = local_128 + 1;
            local_120 = (float *)((int)local_120 + 8);
            pfVar6 = pfVar6 + 7;
            pfVar3 = pfVar3 + 7;
          } while (local_128 < *(byte *)((int)this + 2));
          return uVar7;
        }
      }
      else {
        local_118 = (ushort *)(*(int *)(iVar1 + local_128 * 4) + 0xc);
        local_114 = (ushort *)(*(int *)(iVar1 + local_e0 * 4) + 0xc);
        local_120 = (float *)0x0;
        if (*(char *)((int)this + 2) != '\0') {
          pfVar3 = (float *)(&DAT_01054480 + uVar8 * 0xf5);
          do {
            if (*(char *)((int)pfVar4 + (int)local_120) != '\0') {
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_fc,(int)local_120,uVar7,
                           *(float *)((int)this + 8));
              pfVar4 = (float *)FUN_00984bc0(*(void **)((int)this + 0x28),&local_ac,(int)local_120,
                                             local_e0,*(float *)((int)this + 8));
              local_98 = pfVar4[2] - local_f4;
              local_64 = (*pfVar4 - local_fc) * local_11c;
              local_108 = local_64 + local_fc;
              local_104 = (pfVar4[1] - local_f8) * local_11c + local_f8;
              local_100 = local_98 * local_11c + local_f4;
              local_b8 = local_108;
              local_b4 = local_104;
              local_b0 = local_100;
              FUN_009aa0c0(&local_f0,local_118);
              FUN_009aa0c0(local_40,local_114);
              FUN_009a9cf0(local_c8,&local_f0,local_40,local_11c);
              FUN_009a9cf0(&local_f0,local_c8,pfVar6,local_124);
              *pfVar6 = local_f0;
              pfVar6[1] = local_ec;
              pfVar6[2] = local_e8;
              pfVar6[3] = local_e4;
              local_28 = pfVar3[2] - local_b0;
              local_24 = (*pfVar3 - local_b8) * local_124;
              local_dc = local_24 + local_b8;
              *pfVar3 = local_dc;
              local_d8 = (pfVar3[1] - local_b4) * local_124 + local_b4;
              pfVar3[1] = local_d8;
              local_d4 = local_28 * local_124 + local_b0;
              pfVar3[2] = local_d4;
              pfVar4 = local_110;
            }
            local_118 = local_118 + 4;
            local_114 = local_114 + 4;
            local_120 = (float *)((int)local_120 + 1);
            pfVar6 = pfVar6 + 7;
            pfVar3 = pfVar3 + 7;
          } while (local_120 < (uint)*(byte *)((int)this + 2));
          return uVar7;
        }
      }
    }
    else {
      if (local_10c[9] == 0) {
        Anim_ExpandSetPoses(local_10c);
      }
      if (local_11c == 0.0) {
        local_118 = (ushort *)(*(int *)(local_10c[9] + uVar7 * 4) + 0xc);
        local_114 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + uVar7 * 4) + 0xc);
        local_128 = 0;
        if (*(char *)((int)this + 2) != '\0') {
          local_120 = (float *)(&DAT_01054480 + uVar8 * 0xf5);
          do {
            if (*(char *)((int)local_110 + local_128) != '\0') {
              pfVar4 = pfVar6;
              fVar10 = local_124;
              pfVar3 = FUN_009849d0(local_40,local_114,local_118,(float)param_1[10]);
              FUN_009a9cf0(&local_f0,pfVar3,pfVar4,fVar10);
              *pfVar6 = local_f0;
              pfVar6[1] = local_ec;
              pfVar6[2] = local_e8;
              pfVar6[3] = local_e4;
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_94,local_128,uVar7,
                           *(float *)((int)this + 8));
              FUN_00984bc0((void *)local_10c[10],&local_ac,local_128,uVar7,(float)local_10c[2]);
              fVar10 = (float)param_1[10];
              local_78 = local_a8 * fVar10;
              local_74 = local_a4 * fVar10;
              local_100 = 1.0 - (float)param_1[10];
              local_108 = local_94 * local_100;
              local_104 = local_90 * local_100;
              local_100 = local_8c * local_100;
              local_dc = local_108 + local_ac * fVar10;
              local_68 = local_100 + local_74;
              local_98 = local_120[2] - local_68;
              local_88 = (*local_120 - local_dc) * local_124;
              local_80 = local_98 * local_124;
              local_dc = local_88 + local_dc;
              *local_120 = local_dc;
              local_d8 = (local_120[1] - (local_104 + local_78)) * local_124 + local_104 + local_78;
              local_120[1] = local_d8;
              local_d4 = local_80 + local_68;
              local_120[2] = local_d4;
            }
            local_120 = local_120 + 7;
            local_118 = local_118 + 4;
            local_128 = local_128 + 1;
            local_114 = local_114 + 4;
            pfVar6 = pfVar6 + 7;
          } while (local_128 < *(byte *)((int)this + 2));
          return uVar7;
        }
      }
      else {
        local_d0 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + uVar7 * 4) + 0xc);
        local_114 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + local_e0 * 4) + 0xc);
        local_120 = (float *)(*(int *)(local_10c[9] + local_e0 * 4) + 0xc);
        local_118 = (ushort *)(*(int *)(local_10c[9] + uVar7 * 4) + 0xc);
        uVar9 = 0;
        uVar7 = local_128;
        if (*(char *)((int)this + 2) != '\0') {
          local_cc = (float *)(&DAT_01054480 + uVar8 * 0xf5);
          do {
            if (*(char *)((int)local_110 + uVar9) != '\0') {
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_c,uVar9,local_128,
                           *(float *)((int)this + 8));
              FUN_00984bc0((void *)local_10c[10],&local_18,uVar9,local_128,(float)local_10c[2]);
              fVar10 = (float)param_1[10];
              local_6c = local_14 * fVar10;
              local_68 = local_10 * fVar10;
              local_50 = 1.0 - (float)param_1[10];
              local_58 = local_c * local_50;
              local_54 = local_8 * local_50;
              local_50 = local_4 * local_50;
              local_fc = local_58 + local_18 * fVar10;
              local_f8 = local_54 + local_6c;
              local_f4 = local_50 + local_68;
              FUN_00984bc0(*(void **)((int)this + 0x28),&local_7c,uVar9,local_e0,
                           *(float *)((int)this + 8));
              FUN_00984bc0((void *)local_10c[10],&local_88,uVar9,local_e0,(float)local_10c[2]);
              fVar10 = (float)param_1[10];
              local_90 = local_84 * fVar10;
              local_8c = local_80 * fVar10;
              local_44 = 1.0 - (float)param_1[10];
              local_4c = local_7c * local_44;
              local_48 = local_78 * local_44;
              local_44 = local_74 * local_44;
              local_1c = local_44 + local_8c;
              local_30 = (local_4c + local_88 * fVar10) - local_fc;
              local_ac = local_30 * local_11c;
              local_a8 = ((local_48 + local_90) - local_f8) * local_11c;
              local_dc = local_ac + local_fc;
              local_d8 = local_a8 + local_f8;
              local_d4 = (local_1c - local_f4) * local_11c + local_f4;
              local_b8 = local_dc;
              local_b4 = local_d8;
              local_b0 = local_d4;
              FUN_009849d0(&local_f0,local_d0,local_118,(float)param_1[10]);
              FUN_009849d0(local_40,local_114,(ushort *)local_120,(float)param_1[10]);
              FUN_009a9cf0(local_c8,&local_f0,local_40,local_11c);
              FUN_009a9cf0(&local_f0,local_c8,pfVar6,local_124);
              *pfVar6 = local_f0;
              pfVar6[1] = local_ec;
              pfVar6[2] = local_e8;
              pfVar6[3] = local_e4;
              local_5c = local_cc[2] - local_b0;
              local_a0[0] = (*local_cc - local_b8) * local_124;
              local_108 = local_a0[0] + local_b8;
              *local_cc = local_108;
              local_104 = (local_cc[1] - local_b4) * local_124 + local_b4;
              local_cc[1] = local_104;
              local_100 = local_5c * local_124 + local_b0;
              local_cc[2] = local_100;
            }
            local_cc = local_cc + 7;
            local_d0 = local_d0 + 4;
            local_114 = local_114 + 4;
            local_118 = local_118 + 4;
            local_120 = (float *)((int)local_120 + 8);
            uVar9 = uVar9 + 1;
            pfVar6 = pfVar6 + 7;
            uVar7 = local_128;
          } while (uVar9 < *(byte *)((int)this + 2));
        }
      }
    }
  }
  else {
    uVar8 = param_1[0xb];
    if (((int)uVar8 < 0) || (0xf < (int)uVar8)) {
      uVar8 = 0;
    }
    local_110 = (float *)(&DAT_01054470 + uVar8 * 0xf5);
    puVar5 = (ushort *)(*(int *)(*(int *)((int)this + 0x24) + local_128 * 4) + 0xc);
    uVar9 = 0;
    if (*(char *)((int)this + 2) != '\0') {
      local_10c = &DAT_01054480 + uVar8 * 0xf5;
      do {
        FUN_009aa0c0(&local_f0,puVar5);
        *local_110 = local_f0;
        local_110[1] = local_ec;
        local_110[2] = local_e8;
        local_110[3] = local_e4;
        puVar2 = (undefined4 *)
                 FUN_00984bc0(*(void **)((int)this + 0x28),local_a0,uVar9,uVar7,
                              *(float *)((int)this + 8));
        *local_10c = *puVar2;
        local_10c[1] = puVar2[1];
        local_10c[2] = puVar2[2];
        local_110 = local_110 + 7;
        uVar9 = uVar9 + 1;
        local_10c = local_10c + 7;
        puVar5 = puVar5 + 4;
      } while (uVar9 < *(byte *)((int)this + 2));
      return uVar7;
    }
  }
  return uVar7;
}


//// FUNCTION FUN_00988bb0 @ 00988bb0 ////

void __fastcall FUN_00988bb0(int param_1)

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


//// FUNCTION FUN_00988be0 @ 00988be0 ////

void __fastcall FUN_00988be0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5ad8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_009ad7a0(param_1);
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


//// FUNCTION FUN_00988c40 @ 00988c40 ////

void FUN_00988c40(void)

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
  puStack_8 = &LAB_00cf5af8;
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


//// FUNCTION FUN_00988d10 @ 00988d10 ////

int __fastcall FUN_00988d10(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_009ad7a0(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Anim_LoadByName @ 00988d60 ////

byte * __cdecl Anim_LoadByName(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int *_Memory;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined1 **ppuVar14;
  char *pcVar15;
  bool bVar16;
  undefined4 *local_1a8;
  int *local_1a4;
  uint *local_1a0;
  int local_19c;
  undefined1 *local_198 [2];
  uint local_190;
  undefined1 local_18c [36];
  int local_168;
  byte local_164;
  byte local_163;
  undefined2 local_162;
  undefined4 local_160 [12];
  byte local_130;
  char local_12c [32];
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5b49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0105139c != (void *)0x0) {
    local_198[0] = local_18c;
    local_18c[0] = 0;
    local_198[1] = (undefined1 *)0x0;
    local_190 = 0x14;
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_004015d0(local_198,param_1,(int)pcVar3 - (int)(param_1 + 1));
    local_4 = 0;
    FUN_0043a2d0(DAT_0105139c,local_198);
    local_4 = 0xffffffff;
    if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
      _free(local_198[0]);
    }
  }
  local_4 = 0xffffffff;
  if (DAT_01050c91 != '\0') {
    ExceptionList = local_c;
    return (byte *)0x0;
  }
  FUN_009d3340(param_1,(char *)local_10c,(char *)0x0);
  FUN_009ac040((char *)local_10c);
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
  pbVar8 = DAT_01051398;
  do {
    if (pbVar8 == (byte *)0x0) {
LAB_00988eaf:
      LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
      if (pbVar8 == (byte *)0x0) {
        FUN_00984460(param_1);
        uVar6 = FUN_00a4f3f0(&DAT_0105bed8);
        if (uVar6 != 0) {
          _Memory = operator_new(uVar6);
          local_1a4 = _Memory;
          uVar7 = FUN_00a50330(&DAT_0105bed8,_Memory,uVar6);
          if (uVar7 != uVar6) {
            _sprintf(&DAT_0105bed8,"Can\'t load anim %s\n",param_1);
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          bVar16 = FUN_00984820((char *)_Memory);
          if (bVar16) {
            local_1a4 = (int *)Pak_DecodeEntryData((int)(_Memory + 1));
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          FUN_00985db0((int)&local_168);
          iVar5 = Anim_ReadHeader(&local_168,_Memory);
          puVar11 = (undefined4 *)((int)_Memory + iVar5);
          local_1a8 = puVar11;
          if (local_168 < 0xb) {
            _sprintf(&DAT_0105bed8,"WRONG ANIM FILE FORMAT\n%s",param_1);
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          if (local_164 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = local_164 - 1;
          }
          local_1a0 = (uint *)(uint)local_164;
          uVar6 = (int)(local_1a0 + iVar5) * 4 + 0x6c;
          pcVar9 = operator_new(uVar6);
          pcVar3 = pcVar9;
          for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            pcVar3[0] = '\0';
            pcVar3[1] = '\0';
            pcVar3[2] = '\0';
            pcVar3[3] = '\0';
            pcVar3 = pcVar3 + 4;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pcVar3 = '\0';
            pcVar3 = pcVar3 + 1;
          }
          *(undefined2 *)(pcVar9 + 0x30) = local_162;
          *(uint *)(pcVar9 + 0x34) =
               *(uint *)(pcVar9 + 0x34) ^ (*(uint *)(pcVar9 + 0x34) ^ (uint)local_130) & 2;
          puVar13 = local_160;
          pcVar3 = pcVar9 + 0x38;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar3 = *puVar13;
            puVar13 = puVar13 + 1;
            pcVar3 = pcVar3 + 4;
          }
          pcVar9[0x68] = '\0';
          pcVar9[0x69] = '\0';
          pcVar9[0x6a] = '\0';
          pcVar9[0x6b] = '\0';
          EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
          *(byte **)(pcVar9 + 0x20) = DAT_01051398;
          DAT_01051398 = (byte *)pcVar9;
          LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
          puVar10 = local_1a0;
          if (local_164 < 2) {
            pcVar9[0x28] = '\0';
            pcVar9[0x29] = '\0';
            pcVar9[0x2a] = '\0';
            pcVar9[0x2b] = '\0';
          }
          else {
            *(char **)(pcVar9 + 0x28) = pcVar9 + (int)local_1a0 * 4 + 0x6c;
            FUN_0040b670(local_198);
            if (0 < (int)puVar10 + -1) {
              local_1a8 = (undefined4 *)0x0;
              local_19c = (int)puVar10 + -1;
              do {
                puVar13 = puVar11;
                ppuVar14 = local_198;
                for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *ppuVar14 = (undefined1 *)*puVar13;
                  puVar13 = puVar13 + 1;
                  ppuVar14 = ppuVar14 + 1;
                }
                puVar11 = puVar11 + 0xc;
                FUN_00984a90((void *)(*(int *)(pcVar9 + 0x28) + (int)local_1a8),(float *)local_198);
                local_1a8 = local_1a8 + 4;
                local_19c = local_19c + -1;
              } while (local_19c != 0);
              local_19c = 0;
              local_1a8 = puVar11;
            }
          }
          FUN_009d3340(param_1,local_12c,(char *)0x0);
          pcVar3 = local_12c;
          pcVar15 = pcVar9;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar15 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar15 = pcVar15 + 4;
          }
          FUN_009ac040(pcVar9);
          uVar6 = 0;
          *(uint *)(pcVar9 + 0x34) =
               *(uint *)(pcVar9 + 0x34) ^ (*(uint *)(pcVar9 + 0x34) ^ (uint)local_130) & 1;
          pcVar9[0x24] = '\0';
          pcVar9[0x25] = '\0';
          pcVar9[0x26] = '\0';
          pcVar9[0x27] = '\0';
          EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
          *(int *)(pcVar9 + 0x24) = *(int *)(pcVar9 + 0x24) + 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
          FUN_00986030(&DAT_010543a0,(int)pcVar9);
          pcVar9[0x33] = local_164;
          if (local_1a0 != (uint *)0x0) {
            pcVar3 = pcVar9 + 0x6c;
            do {
              puVar10 = Anim_ReadTrackSet(&local_1a8,*(uint *)(pcVar9 + 0x34) >> 1 & 0xffffff01);
              *(uint **)pcVar3 = puVar10;
              uVar6 = uVar6 + 1;
              pcVar3 = pcVar3 + 4;
              puVar11 = local_1a8;
            } while (uVar6 < (byte)pcVar9[0x33]);
          }
          puVar11 = (undefined4 *)FUN_009ac020((uint)puVar11);
          if (local_163 != 0) {
            uVar6 = (uint)local_163;
            pcVar9[0x32] = local_163;
            local_1a0 = operator_new(uVar6 * 0x2c + 4);
            local_4 = 1;
            if (local_1a0 == (uint *)0x0) {
              puVar10 = (uint *)0x0;
            }
            else {
              puVar10 = local_1a0 + 1;
              *local_1a0 = uVar6;
              _eh_vector_constructor_iterator_(puVar10,0x2c,uVar6,FUN_00984510,FUN_00984540);
            }
            local_4 = 0xffffffff;
            *(uint **)(pcVar9 + 0x2c) = puVar10;
            if (uVar6 != 0) {
              iVar5 = 0;
              do {
                puVar11 = Anim_ReadVectorTrack
                                    ((void *)(*(int *)(pcVar9 + 0x2c) + iVar5),puVar11,
                                     *(uint *)(pcVar9 + 0x30) & 0xffff);
                iVar5 = iVar5 + 0x2c;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
          }
                    /* WARNING: Subroutine does not return */
          _free(local_1a4);
        }
        pbVar8 = (byte *)0x0;
      }
      ExceptionList = local_c;
      return pbVar8;
    }
    pbVar4 = local_10c;
    pbVar12 = pbVar8;
    do {
      bVar2 = *pbVar4;
      bVar16 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00988e84:
        iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_00988e89;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar16 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00988e84;
      pbVar4 = pbVar4 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00988e89:
    if (iVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
      *(int *)(pbVar8 + 0x24) = *(int *)(pbVar8 + 0x24) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c60);
      goto LAB_00988eaf;
    }
    pbVar8 = *(byte **)(pbVar8 + 0x20);
  } while( true );
}


//// FUNCTION FUN_009893f0 @ 009893f0 ////

void FUN_009893f0(void)

{
  return;
}


//// FUNCTION FUN_00989400 @ 00989400 ////

void __fastcall FUN_00989400(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00989410 @ 00989410 ////

void __fastcall FUN_00989410(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00989430 @ 00989430 ////

void __fastcall FUN_00989430(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00989490 @ 00989490 ////

void __thiscall FUN_00989490(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_009894b0 @ 009894b0 ////

void __fastcall FUN_009894b0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_009894d0 @ 009894d0 ////

undefined4 __fastcall FUN_009894d0(undefined4 *param_1)

{
  return *param_1;
}


//// FUNCTION FUN_009894e0 @ 009894e0 ////

undefined4 __fastcall FUN_009894e0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_009894f0 @ 009894f0 ////

undefined4 __fastcall FUN_009894f0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00989500 @ 00989500 ////

undefined4 __thiscall FUN_00989500(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = param_2 + *(int *)((int)this + 8);
  if (*(uint *)((int)this + 4) < uVar3) {
    uVar3 = uVar3 + 0x2000;
    puVar1 = operator_new(uVar3);
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    uVar3 = *(uint *)((int)this + 8);
    puVar4 = *(undefined4 **)this;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  puVar1 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8));
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
  return CONCAT31((int3)(param_2 >> 8),1);
}


//// FUNCTION FUN_00989600 @ 00989600 ////

undefined4 __fastcall FUN_00989600(int *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  
  do {
    cVar1 = *(char *)(*param_1 + param_1[2]);
    while (cVar1 != '\n') {
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      cVar1 = *(char *)(*param_1 + iVar2 + 1);
    }
    iVar2 = param_1[2];
    param_1[2] = iVar2 + 1;
    puVar3 = FUN_00ace080((uint *)(*param_1 + iVar2),"\n[/OBJ]\n");
  } while (puVar3 == (uint *)0x0);
  param_1[2] = param_1[2] + 7;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}


//// FUNCTION FUN_00989650 @ 00989650 ////

void FUN_00989650(void)

{
  return;
}


//// FUNCTION FUN_00989660 @ 00989660 ////

void FUN_00989660(void)

{
  return;
}


//// FUNCTION FUN_009896a0 @ 009896a0 ////

undefined4 __fastcall FUN_009896a0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = param_1;
  if (DAT_010584fc + 3 <= DAT_010584f8) {
    local_4 = CONCAT13((char)((uint)param_1 >> 0x18),*(undefined3 *)(DAT_010584fc + DAT_010584f4));
    DAT_010584fc = DAT_010584fc + 3;
  }
  iVar1 = _strncmp((char *)&local_4,"\n#X",3);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}


//// FUNCTION FUN_009896f0 @ 009896f0 ////

bool __cdecl FUN_009896f0(char *param_1)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,"CP<",3);
  return iVar1 != 0;
}


//// FUNCTION FUN_00989710 @ 00989710 ////

void FUN_00989710(void)

{
  return;
}


//// FUNCTION FUN_00989720 @ 00989720 ////

void FUN_00989720(void)

{
  return;
}


//// FUNCTION FUN_00989730 @ 00989730 ////

void __thiscall FUN_00989730(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int **)this == (int *)0x0) {
    if (*(int **)((int)this + 4) != (int *)0x0) {
      **(int **)((int)this + 4) = param_1;
      if (param_1 != 0) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
    }
  }
  else {
    piVar1 = (int *)(**(code **)(**(int **)this + 8))();
    *piVar1 = param_1;
    if (param_1 != 0) {
      (**(code **)**(undefined4 **)this)();
      return;
    }
  }
  return;
}


//// FUNCTION ISerializable_NoOpDefault @ 00989770 ////

void ISerializable_NoOpDefault(void)

{
  return;
}


//// FUNCTION FUN_00989780 @ 00989780 ////

void FUN_00989780(void)

{
  return;
}


//// FUNCTION FUN_009897a0 @ 009897a0 ////

void FUN_009897a0(void)

{
  return;
}


//// FUNCTION FUN_009897b0 @ 009897b0 ////

void __cdecl FUN_009897b0(int param_1)

{
  if (DAT_010583e0 == 0) {
    FUN_0097cff0(param_1);
  }
  if (DAT_010583e0 == 1) {
    FUN_0097dff0(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_009897e0 @ 009897e0 ////

void __cdecl FUN_009897e0(undefined4 *param_1,uint param_2)

{
  DAT_010583f8 = DAT_010583f8 + param_2;
  FUN_00989500(&DAT_010584f4,param_1,param_2);
  return;
}


//// FUNCTION FUN_00989810 @ 00989810 ////

int __cdecl FUN_00989810(undefined4 *param_1,uint param_2)

{
  uint3 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = (uint3)(param_2 >> 8);
  if (DAT_010584f8 < DAT_010584fc + param_2) {
    return (uint)uVar1 << 8;
  }
  puVar3 = (undefined4 *)(DAT_010584f4 + DAT_010584fc);
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  DAT_010584fc = DAT_010584fc + param_2;
  return CONCAT31(uVar1,1);
}


//// FUNCTION FUN_00989880 @ 00989880 ////

int __fastcall FUN_00989880(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_009898a0 @ 009898a0 ////

int __fastcall FUN_009898a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_009898c0 @ 009898c0 ////

int __fastcall FUN_009898c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
}


//// FUNCTION FUN_00989e80 @ 00989e80 ////

void __cdecl FUN_00989e80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_00989f40 @ 00989f40 ////

void __cdecl FUN_00989f40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0098a000 @ 0098a000 ////

void __cdecl FUN_0098a000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098a100 @ 0098a100 ////

undefined4 * __fastcall FUN_0098a100(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5b6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1c4e4;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = 0;
  param_1[8] = param_1;
  FUN_00acdb9e(0xe67474);
  iVar1 = FUN_0097dda0();
  param_1[9] = iVar1;
  if (DAT_00e67470 != '\0') {
    iVar1 = 0x18;
    pcVar3 = "LoadedLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe67474);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e67470 = '\0';
  }
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 99999;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0098a1c0 @ 0098a1c0 ////

/* WARNING: Removing unreachable block (ram,0x0098a1ee) */

void __fastcall FUN_0098a1c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1c4e4;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[7] = param_1[6];
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1[6] + 4) = param_1[7];
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1[6] + 4) = param_1[7];
  }
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_0098a210 @ 0098a210 ////

void __fastcall FUN_0098a210(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0098a220 @ 0098a220 ////

undefined4 * __fastcall FUN_0098a220(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5b8e;
  local_c = ExceptionList;
  piVar1 = param_1 + 0x84;
  ExceptionList = &local_c;
  param_1[0x86] = 0;
  *piVar1 = 0;
  param_1[0x85] = 0;
  local_4 = 0;
  param_1[0x86] = param_1;
  FUN_00acdb9e(0xe67494);
  iVar2 = FUN_0097dda0();
  param_1[0x87] = iVar2;
  if (DAT_00e67490 != '\0') {
    iVar2 = 0x210;
    pcVar4 = "MyLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe67494);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e67490 = '\0';
  }
  param_1[0x85] = &DAT_01058454;
  *piVar1 = (int)DAT_01058454;
  *(int **)((int)DAT_01058454 + 4) = piVar1;
  DAT_01058454 = piVar1;
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0098a300 @ 0098a300 ////

/* WARNING: Removing unreachable block (ram,0x0098a33a) */

void __fastcall FUN_0098a300(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x214) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x210);
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x210) + 4) = *(undefined4 *)(param_1 + 0x214);
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  if (*(int *)(param_1 + 0x210) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x210) + 4) = *(undefined4 *)(param_1 + 0x214);
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  return;
}


//// FUNCTION FUN_0098a360 @ 0098a360 ////

void * __thiscall FUN_0098a360(void *this,byte param_1)

{
  FUN_0098a300((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098a380 @ 0098a380 ////

void __cdecl FUN_0098a380(undefined4 *param_1)

{
  DAT_010583f8 = DAT_010583f8 + 1;
  FUN_00989500(&DAT_010584f4,param_1,1);
  return;
}


//// FUNCTION FUN_0098a3a0 @ 0098a3a0 ////

void __cdecl FUN_0098a3a0(undefined4 *param_1)

{
  DAT_010583f8 = DAT_010583f8 + 4;
  FUN_00989500(&DAT_010584f4,param_1,4);
  return;
}


//// FUNCTION SLVAR_LoadByte @ 0098a3c0 ////

int __cdecl SLVAR_LoadByte(undefined1 *param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_010584fc >> 8);
  if (DAT_010584f8 < DAT_010584fc + 1U) {
    return (uint)uVar1 << 8;
  }
  *param_1 = *(undefined1 *)(DAT_010584fc + DAT_010584f4);
  DAT_010584fc = DAT_010584fc + 1;
  return CONCAT31(uVar1,1);
}


//// FUNCTION FUN_0098a3f0 @ 0098a3f0 ////

void __fastcall FUN_0098a3f0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0098a400 @ 0098a400 ////

void __fastcall FUN_0098a400(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION Serialization_WriteObjectID @ 0098a410 ////

void __fastcall Serialization_WriteObjectID(int param_1)

{
  DAT_010583f8 = DAT_010583f8 + 4;
  FUN_00989500(&DAT_010584f4,(undefined4 *)(param_1 + 0x10),4);
  return;
}


//// FUNCTION FUN_0098a430 @ 0098a430 ////

void __cdecl FUN_0098a430(undefined4 *param_1,uint param_2)

{
  if (DAT_010583e0 == 0) {
    DAT_010583f8 = DAT_010583f8 + param_2;
    FUN_00989500(&DAT_010584f4,param_1,param_2);
  }
  if (DAT_010583e0 == 1) {
    FUN_00989810(param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_0098a980 @ 0098a980 ////

undefined4 * __thiscall FUN_0098a980(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_0098a9c0 @ 0098a9c0 ////

undefined4 * __thiscall FUN_0098a9c0(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_0098aa00 @ 0098aa00 ////

undefined4 * __thiscall FUN_0098aa00(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return this;
}


//// FUNCTION FUN_0098aab0 @ 0098aab0 ////

void __cdecl FUN_0098aab0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0098ac50 @ 0098ac50 ////

undefined4 * __thiscall FUN_0098ac50(void *this,byte param_1)

{
  FUN_0098a210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098ac70 @ 0098ac70 ////

undefined4 * __thiscall FUN_0098ac70(void *this,byte param_1)

{
  FUN_0098a400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098ac90 @ 0098ac90 ////

undefined4 * __thiscall FUN_0098ac90(void *this,byte param_1)

{
  FUN_0098a3f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098ad10 @ 0098ad10 ////

uint __cdecl FUN_0098ad10(void *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf5bb0;
  local_c = ExceptionList;
  DAT_010584fc = DAT_010584fc - (param_2 + 3);
  local_4 = 0;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    if (DAT_010584fc + 3 <= DAT_010584f8) {
      local_30 = *(undefined2 *)(DAT_010584fc + DAT_010584f4);
      local_2e = *(undefined1 *)((undefined2 *)(DAT_010584fc + DAT_010584f4) + 1);
      DAT_010584fc = DAT_010584fc + 3;
    }
    uVar2 = _strncmp((char *)&local_30,"\n#X",3);
    if (uVar2 == 0) {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      iVar3 = 0;
      local_4._0_1_ = 1;
      if (DAT_010584fc + 4 <= DAT_010584f8) {
        iVar3 = *(int *)(DAT_010584fc + DAT_010584f4);
        DAT_010584fc = DAT_010584fc + 4;
      }
      bVar1 = FUN_009f3c70(iVar3,&param_1);
      if (bVar1) {
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if (param_3 < 0x15) {
          ExceptionList = local_c;
          return CONCAT31((int3)(local_24 >> 8),1);
        }
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      uVar2 = local_24;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    else {
      DAT_010584fc = DAT_010584fc - 2;
    }
    iVar4 = iVar4 + 1;
    if (99 < iVar4) {
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return uVar2 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  } while( true );
}


//// FUNCTION FUN_0098aec0 @ 0098aec0 ////

/* WARNING: Removing unreachable block (ram,0x0098af32) */

void __cdecl FUN_0098aec0(undefined4 *param_1)

{
  char local_14 [20];
  
  DAT_010583f8 = DAT_010583f8 + 0xc;
  FUN_00989500(&DAT_010584f4,param_1,0xc);
  if (DAT_00e67469 == '\0') {
    local_14[0] = '\0';
    _strncpy(local_14,"Saved V3",8);
  }
  return;
}


//// FUNCTION SLVAR_LoadVector3 @ 0098af50 ////

/* WARNING: Removing unreachable block (ram,0x0098afdd) */

uint __cdecl SLVAR_LoadVector3(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined3 uVar3;
  char local_14 [20];
  
  if (DAT_010584fc + 0xc <= DAT_010584f8) {
    puVar2 = (undefined4 *)(DAT_010584fc + DAT_010584f4);
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    uVar1 = puVar2[2];
    param_1[2] = uVar1;
    DAT_010584fc = DAT_010584fc + 0xc;
    uVar3 = (undefined3)((uint)uVar1 >> 8);
    if (DAT_00e67469 == '\0') {
      local_14[0] = '\0';
      _strncpy(local_14,"Loaded V3",9);
      uVar3 = 0;
    }
    return CONCAT31(uVar3,1);
  }
  return DAT_010584fc & 0xffffff00;
}


//// FUNCTION FUN_0098b120 @ 0098b120 ////

void * FUN_0098b120(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0098b1e0 @ 0098b1e0 ////

int * __cdecl FUN_0098b1e0(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x24);
    _Source = *(char **)(param_2 + -0x28);
    iVar3 = param_2 + -0x28;
    piVar2 = param_3 + -10;
    if ((uint)param_3[-8] <= _Count) {
      if (0x14 < (uint)param_3[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-8] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-9] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    param_3[-2] = *(int *)(param_2 + -8);
    param_3[-1] = *(int *)(param_2 + -4);
    param_3 = piVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return piVar2;
}


//// FUNCTION FUN_0098b270 @ 0098b270 ////

int * __cdecl FUN_0098b270(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x24);
    _Source = *(char **)(param_2 + -0x28);
    iVar3 = param_2 + -0x28;
    piVar2 = param_3 + -10;
    if ((uint)param_3[-8] <= _Count) {
      if (0x14 < (uint)param_3[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-8] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-9] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    param_3[-2] = *(int *)(param_2 + -8);
    param_3[-1] = *(int *)(param_2 + -4);
    param_3 = piVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return piVar2;
}


//// FUNCTION FUN_0098b300 @ 0098b300 ////

int * __cdecl FUN_0098b300(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x28);
    _Source = *(char **)(param_2 + -0x2c);
    iVar3 = param_2 + -0x2c;
    piVar2 = param_3 + -0xb;
    if ((uint)param_3[-9] <= _Count) {
      if (0x14 < (uint)param_3[-9]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-9] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-10] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    param_3[-3] = *(int *)(param_2 + -0xc);
    param_3[-2] = *(int *)(param_2 + -8);
    param_3[-1] = *(int *)(param_2 + -4);
    param_3 = piVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return piVar2;
}


//// FUNCTION FUN_0098b420 @ 0098b420 ////

void __cdecl FUN_0098b420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0098b490 @ 0098b490 ////

undefined4 __cdecl FUN_0098b490(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  uint *puVar7;
  int iVar8;
  uint local_70;
  undefined1 *local_50;
  char *local_4c;
  size_t local_48;
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
  puStack_8 = &LAB_00cf5bd0;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,param_1,(int)pcVar4 - (int)(param_1 + 1));
  uVar2 = DAT_010584fc;
  local_4 = 0;
  if (DAT_010583e0 == 0) {
    local_50 = (undefined1 *)CONCAT13(local_50._3_1_,0x580000);
    local_50 = (undefined1 *)CONCAT22(local_50._2_2_,0x230a);
    FUN_00989500(&DAT_010584f4,&local_50,3);
    local_50 = (undefined1 *)FUN_009f3c40(&local_4c);
    DAT_010583f8 = DAT_010583f8 + 4;
    uVar5 = FUN_00989500(&DAT_010584f4,&local_50,4);
  }
  else {
    uVar5 = DAT_010583e0;
    if (DAT_010583e0 != 1) {
LAB_0098b67c:
      DAT_010584fc = uVar2;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      ExceptionList = local_c;
      return uVar5 & 0xffffff00;
    }
    uVar6 = FUN_009896a0(extraout_ECX);
    if ((char)uVar6 != '\0') {
      local_50 = (undefined1 *)0x0;
      FUN_00989810(&local_50,4);
      local_70 = 0x98b580;
      bVar3 = FUN_009f3c70((int)local_50,&local_4c);
      uVar5 = CONCAT31(extraout_var,bVar3);
      if (bVar3) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        goto LAB_0098b657;
      }
    }
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004073f0(&local_2c,"failed to locate variable \'",0x1b);
    FUN_004073f0(&local_2c,local_4c,local_48);
    FUN_004073f0(&local_2c,"\' at expected position in save game. Will try to scan ahead",0x3b);
    local_50 = &stack0xffffff84;
    puVar7 = &local_70;
    local_70 = local_70 & 0xffffff00;
    iVar8 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff84,local_4c,local_48);
    uVar6 = FUN_0098ad10(puVar7,iVar8,uVar5);
    if ((char)uVar6 == '\0') {
      uVar5 = local_24;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      goto LAB_0098b67c;
    }
    uVar5 = local_24;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
LAB_0098b657:
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_0098b720 @ 0098b720 ////

undefined4 __cdecl FUN_0098b720(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_01058434;
  while( true ) {
    if (puVar1 == DAT_01058438) {
      return 0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = puVar1 + 4;
  }
  return *puVar1;
}


//// FUNCTION FUN_0098b750 @ 0098b750 ////

/* WARNING: Removing unreachable block (ram,0x0098b882) */

void FUN_0098b750(void)

{
  undefined4 *puVar1;
  int *_Memory;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [52];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5be8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"Remapping",9);
  iVar4 = 0;
  for (puVar1 = DAT_01058448; puVar1 != &DAT_01058454; puVar1 = (undefined4 *)puVar1[1]) {
    iVar4 = iVar4 + 1;
  }
  sVar2 = _sprintf((char *)&local_6c,(char *)&param_2_00d1b93c,iVar4);
  FUN_004073f0(&local_2c,(char *)&local_6c,sVar2);
  FUN_004073f0(&local_2c," Pointers...",0xc);
  if (DAT_01058448 == &DAT_01058454) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"Pointer Remapping completed\n",0x1c);
    local_68 = 0x1c;
    local_6c[0x1c] = '\0';
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (local_24 < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  _Memory = (int *)DAT_01058448[2];
  iVar4 = 0;
  piVar3 = DAT_01058434;
  if (_Memory[2] != 0) {
    for (; piVar3 != DAT_01058438; piVar3 = piVar3 + 4) {
      if (piVar3[2] == _Memory[2]) {
        iVar4 = *piVar3;
        goto LAB_0098b81e;
      }
    }
    iVar4 = 0;
  }
LAB_0098b81e:
  if ((int *)*_Memory == (int *)0x0) {
    if (((int *)_Memory[1] != (int *)0x0) && (*(int *)_Memory[1] = iVar4, iVar4 != 0)) {
      *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1;
    }
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*_Memory + 8))();
    *piVar3 = iVar4;
    if (iVar4 != 0) {
      (*(code *)**(undefined4 **)*_Memory)();
    }
  }
  if ((int *)_Memory[0x85] != (int *)0x0) {
    *(int *)_Memory[0x85] = _Memory[0x84];
  }
  if (_Memory[0x84] != 0) {
    *(int *)(_Memory[0x84] + 4) = _Memory[0x85];
  }
  _Memory[0x84] = 0;
  _Memory[0x85] = 0;
  if (_Memory[0x84] != 0) {
    *(int *)(_Memory[0x84] + 4) = _Memory[0x85];
  }
  _Memory[0x84] = 0;
  _Memory[0x85] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0098b940 @ 0098b940 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0098b940(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_34;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5c08;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_34 = 0;
  puVar7 = DAT_01058478;
  do {
    if (puVar7 == DAT_0105847c) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x40;
      ExceptionList = &pvStack_c;
      local_2c = _malloc(0x40);
      _strncpy(local_2c,"Failed To match type when loading",0x21);
      local_28 = 0x21;
      local_2c[0x21] = '\0';
      FUN_004073f0(&local_2c,(char *)param_1,param_2);
      FUN_004073f0(&local_2c,". Attempting to scan past. Have you SLREGISTERed it?",0x34);
      FUN_00989600(&DAT_010584f4);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
LAB_0098ba48:
      if (DAT_010583dc != (code *)0x0) {
        fVar2 = (float)DAT_010584fc;
        if (DAT_010584fc < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar3 = (float)DAT_010584f8;
        if (DAT_010584f8 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar2 = fVar2 / fVar3;
        if (0.25 < fVar2 - _DAT_010583ec) {
          (*DAT_010583dc)(fVar2);
          _DAT_010583ec = fVar2;
        }
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      if (0x13 < param_2) {
        local_24 = param_2 + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,(char *)param_1,param_2);
      local_28 = param_2;
      local_2c[param_2] = '\0';
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      ExceptionList = pvStack_c;
      return local_34;
    }
    pbVar4 = (byte *)*puVar7;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0098b9aa:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0098b9af;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0098b9aa;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0098b9af:
    if (iVar5 == 0) {
      if ((code *)puVar7[8] == (code *)0x0) {
        local_34 = 0;
        ExceptionList = &pvStack_c;
      }
      else {
        ExceptionList = &pvStack_c;
        local_34 = (*(code *)puVar7[8])();
      }
      goto LAB_0098ba48;
    }
    puVar7 = puVar7 + 10;
  } while( true );
}


//// FUNCTION FUN_0098bb60 @ 0098bb60 ////

void FUN_0098bb60(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  char *_Source;
  char *_Dest;
  undefined4 *puVar8;
  char *pcVar9;
  uint _Count;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  uint uStack_28;
  uint uStack_24;
  char acStack_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00cf5c28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ppvVar5 = &pvStack_c;
  if ((int **)DAT_01058404 != &DAT_01058410) {
    do {
      ExceptionList = ppvVar5;
      piVar4 = DAT_01058404;
      uStack_4 = 0xffffffff;
      piVar3 = (int *)DAT_01058404[2];
      piVar1 = DAT_01058404 + 1;
      if ((int *)DAT_01058404[1] != (int *)0x0) {
        *(int *)DAT_01058404[1] = *DAT_01058404;
      }
      iVar7 = *piVar4;
      if (iVar7 != 0) {
        *(int *)(iVar7 + 4) = *piVar1;
      }
      *piVar1 = 0;
      *piVar4 = 0;
      cVar6 = (**(code **)(*piVar3 + 0x18))();
      iVar7 = FUN_00ace3df(piVar3);
      _Source = (char *)FUN_00acdb9e(iVar7);
      _Dest = acStack_40;
      acStack_40[0] = '\0';
      uStack_44 = 0x14;
      pcVar9 = _Source;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      _Count = (int)pcVar9 - (int)(_Source + 1);
      if (0x13 < _Count) {
        uStack_44 = _Count + 0x20 & 0xffffffe0;
        _Dest = _malloc(uStack_44);
      }
      _strncpy(_Dest,_Source,_Count);
      _Dest[_Count] = '\0';
      pcStack_2c = acStack_20;
      uStack_4 = 0;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      if (0x13 < _Count) {
        uStack_24 = _Count + 0x20 & 0xffffffe0;
        pcStack_2c = _malloc(uStack_24);
      }
      _strncpy(pcStack_2c,_Dest,_Count);
      pcStack_2c[_Count] = '\0';
      uStack_28 = _Count;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      if (cVar6 == '\0') {
        piVar3[2] = piVar3[2] + 1;
        piVar1 = piVar3 + 6;
        piVar3[7] = (int)&DAT_01058410;
        *piVar1 = (int)DAT_01058410;
        *(int **)((int)DAT_01058410 + 4) = piVar1;
        DAT_01058410 = piVar1;
      }
      else if (((char)piVar3[1] != '\0') &&
              (puVar8 = (undefined4 *)
                        FUN_00ace790(piVar3,0,&MV::MVSaveable::RTTI_Type_Descriptor,
                                     &TM::TMRefCounted::RTTI_Type_Descriptor,0),
              puVar8 != (undefined4 *)0x0)) {
        piVar1 = puVar8 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar8)(1);
        }
      }
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      ppvVar5 = ExceptionList;
    } while ((int **)DAT_01058404 != &DAT_01058410);
  }
  uStack_4 = 0xffffffff;
  (*DAT_010583dc)(0x3f800000);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION SLVAR_LoadUint @ 0098bd50 ////

uint __cdecl SLVAR_LoadUint(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined3 uVar3;
  size_t sVar2;
  undefined3 extraout_var;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  if (DAT_010584f8 < DAT_010584fc + 4) {
    return DAT_010584fc & 0xffffff00;
  }
  uVar1 = *(undefined4 *)(DAT_010584fc + DAT_010584f4);
  *param_1 = uVar1;
  DAT_010584fc = DAT_010584fc + 4;
  uVar3 = (undefined3)((uint)uVar1 >> 8);
  if (DAT_00e67469 == '\0') {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x14;
    _strncpy(local_60,"Loaded Uint : ",0xe);
    local_5c = 0xe;
    local_60[0xe] = '\0';
    sVar2 = _sprintf(local_40,(char *)&param_2_00d1b93c,*param_1);
    FUN_004073f0(&local_60,local_40,sVar2);
    uVar3 = extraout_var;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  return CONCAT31(uVar3,1);
}


//// FUNCTION FUN_0098be10 @ 0098be10 ////

void __cdecl FUN_0098be10(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  puVar1 = param_1;
  param_1 = (undefined4 *)param_1[1];
  DAT_010583f8 = DAT_010583f8 + 4;
  FUN_00989500(&DAT_010584f4,&param_1,4);
  DAT_010583f8 = DAT_010583f8 + puVar1[1];
  FUN_00989500(&DAT_010584f4,(undefined4 *)*puVar1,puVar1[1]);
  if (DAT_00e67469 == '\0') {
    local_20 = local_14;
    local_14[0] = '\0';
    local_1c = 0;
    local_18 = 0x14;
    _strncpy(local_20,"Saved String: ",0xe);
    local_1c = 0xe;
    local_20[0xe] = '\0';
    FUN_004073f0(&local_20,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  return;
}


//// FUNCTION SLVAR_LoadString @ 0098bed0 ////

void __cdecl SLVAR_LoadString(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *_Memory;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint local_24;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  local_24 = 0;
  uVar3 = SLVAR_LoadUint(&local_24);
  uVar2 = local_24;
  if ((char)uVar3 == '\0') {
    return;
  }
  uVar3 = local_24 + 1;
  _Memory = _malloc(uVar3);
  pcVar5 = _Memory;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
  }
  uVar4 = FUN_00989810((undefined4 *)_Memory,uVar2);
  if ((char)uVar4 == '\0') {
    return;
  }
  pcVar5 = _Memory;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,_Memory,(int)pcVar5 - (int)(_Memory + 1));
  if (DAT_00e67469 == '\0') {
    local_20 = local_14;
    local_14[0] = '\0';
    local_1c = 0;
    local_18 = 0x14;
    _strncpy(local_20,"Loaded String: ",0xf);
    local_1c = 0xf;
    local_20[0xf] = '\0';
    FUN_004073f0(&local_20,(char *)*param_1,param_1[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0098bfd0 @ 0098bfd0 ////

void __cdecl FUN_0098bfd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5c48;
  local_c = ExceptionList;
  param_1 = (undefined4 *)(param_1[1] * 2 + 2);
  DAT_010583f8 = DAT_010583f8 + 4;
  ExceptionList = &local_c;
  FUN_00989500(&DAT_010584f4,&param_1,4);
  DAT_010583f8 = DAT_010583f8 + (int)param_1;
  FUN_00989500(&DAT_010584f4,(undefined4 *)*puVar1,(uint)param_1);
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    local_4 = 0;
    FUN_004073f0(&local_4c,"Saved WSTRING",0xd);
    puVar1 = FUN_009b8c30(local_2c,puVar1);
    FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_24) {
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


//// FUNCTION FUN_0098c0d0 @ 0098c0d0 ////

void FUN_0098c0d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_010584e8;
  if (DAT_010584e8 != DAT_010584ec) {
    do {
      (*(code *)*puVar1)();
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_010584ec);
  }
  return;
}


//// FUNCTION SLVAR_LoadWString @ 0098c0f0 ////

void __cdecl SLVAR_LoadWString(undefined4 *param_1)

{
  uint uVar1;
  wchar_t *_Memory;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_50;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = SLVAR_LoadUint(&local_50);
  if ((char)uVar1 == '\0') {
    ExceptionList = local_c;
    return;
  }
  _Memory = operator_new(local_50 + 1 & 0xfffffffe);
  uVar2 = FUN_00989810((undefined4 *)_Memory,local_50);
  if ((char)uVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  uVar1 = FUN_00ace02d(_Memory);
  FUN_004036d0(&local_4c,_Memory,uVar1);
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    local_40[0] = local_40[0] & 0xff00;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"Loaded WString: ",0x10);
    local_48 = 0x10;
    *(char *)(local_4c + 8) = '\0';
    local_4 = 0;
    puVar3 = FUN_009b8c30(local_2c,param_1);
    FUN_004073f0(&local_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0098c270 @ 0098c270 ////

void __cdecl FUN_0098c270(float *param_1)

{
  size_t sVar1;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  DAT_010583f8 = DAT_010583f8 + 4;
  FUN_00989500(&DAT_010584f4,param_1,4);
  if (DAT_00e67469 == '\0') {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x14;
    _strncpy(local_60,"Saved FLOAT: ",0xd);
    local_5c = 0xd;
    local_60[0xd] = '\0';
    sVar1 = _sprintf(local_40,"%.2f",(double)*param_1);
    FUN_004073f0(&local_60,local_40,sVar1);
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  return;
}


//// FUNCTION FUN_0098c320 @ 0098c320 ////

int __cdecl FUN_0098c320(int param_1)

{
  int *piVar1;
  size_t sVar2;
  char *pcVar3;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  piVar1 = DAT_01058434;
  if (DAT_00e67469 == '\0') {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x14;
    FUN_004073f0(&local_60,"Looking for a match for address: ",0x21);
    sVar2 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_1);
    FUN_004073f0(&local_60,local_40,sVar2);
    FUN_004073f0(&local_60,"\n",1);
    piVar1 = DAT_01058434;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  while( true ) {
    if (piVar1 == DAT_01058438) {
      if (DAT_00e67469 == '\0') {
        local_60 = local_54;
        local_54[0] = '\0';
        local_5c = 0;
        local_58 = 0x14;
        _strncpy(local_60,"",0);
        sVar2 = 0x22;
        local_5c = 0;
        pcVar3 = "Failed to get an ID from address: ";
        *local_60 = '\0';
        FUN_004073f0(&local_60,pcVar3,sVar2);
        sVar2 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_1);
        FUN_004073f0(&local_60,local_40,sVar2);
        if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
          _free(local_60);
        }
      }
      return 0;
    }
    if ((*piVar1 == param_1) || (piVar1[1] == param_1)) break;
    piVar1 = piVar1 + 4;
  }
  return piVar1[2];
}


//// FUNCTION SLVAR_LoadFloat @ 0098c460 ////

uint __cdecl SLVAR_LoadFloat(float *param_1)

{
  float fVar1;
  undefined3 uVar3;
  size_t sVar2;
  undefined3 extraout_var;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  if (DAT_010584f8 < DAT_010584fc + 4) {
    return DAT_010584fc & 0xffffff00;
  }
  fVar1 = *(float *)(DAT_010584fc + DAT_010584f4);
  *param_1 = fVar1;
  DAT_010584fc = DAT_010584fc + 4;
  uVar3 = (undefined3)((uint)fVar1 >> 8);
  if (DAT_00e67469 == '\0') {
    local_60 = local_54;
    local_54[0] = '\0';
    local_5c = 0;
    local_58 = 0x14;
    _strncpy(local_60,"Loaded FLOAT: ",0xe);
    local_5c = 0xe;
    local_60[0xe] = '\0';
    sVar2 = _sprintf(local_40,"%.2f",(double)*param_1);
    FUN_004073f0(&local_60,local_40,sVar2);
    uVar3 = extraout_var;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  return CONCAT31(uVar3,1);
}


//// FUNCTION FUN_0098c520 @ 0098c520 ////

void __cdecl FUN_0098c520(float *param_1)

{
  if (DAT_010583e0 == 0) {
    FUN_0098c270(param_1);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadFloat(param_1);
  }
  return;
}


//// FUNCTION FUN_0098c550 @ 0098c550 ////

void __cdecl FUN_0098c550(undefined4 *param_1)

{
  if (DAT_010583e0 == 0) {
    FUN_0098be10(param_1);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadString(param_1);
  }
  return;
}


//// FUNCTION FUN_0098c580 @ 0098c580 ////

void __cdecl FUN_0098c580(undefined4 *param_1)

{
  if (DAT_010583e0 == 0) {
    FUN_0098bfd0(param_1);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadWString(param_1);
  }
  return;
}


//// FUNCTION SLVAR_LoadTrackedUint @ 0098c5b0 ////

void __cdecl SLVAR_LoadTrackedUint(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5c8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SLVAR_LoadUint(&local_14);
  local_10 = operator_new(0x220);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0098a220(local_10);
  }
  *puVar1 = param_1;
  puVar1[2] = local_14;
  puVar1[0x83] = DAT_010581d4;
  _strncpy((char *)(puVar1 + 3),(char *)&DAT_010581d8,0x200);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098c640 @ 0098c640 ////

void __fastcall FUN_0098c640(int param_1)

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


//// FUNCTION FUN_0098c6a0 @ 0098c6a0 ////

void __fastcall FUN_0098c6a0(int param_1)

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


//// FUNCTION FUN_0098c6d0 @ 0098c6d0 ////

undefined4 * FUN_0098c6d0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098c700 @ 0098c700 ////

void __cdecl FUN_0098c700(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098c7a0 @ 0098c7a0 ////

void __cdecl FUN_0098c7a0(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098c840 @ 0098c840 ////

void __cdecl FUN_0098c840(int *param_1,int *param_2,undefined4 *param_3)

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
    param_1[10] = param_3[10];
    param_1 = param_1 + 0xb;
  } while( true );
}


//// FUNCTION FUN_0098c8e0 @ 0098c8e0 ////

void __cdecl FUN_0098c8e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0098c980 @ 0098c980 ////

int * __cdecl FUN_0098c980(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      param_3[9] = param_1[9];
    }
    param_1 = param_1 + 10;
    param_3 = param_3 + 10;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0098ca10 @ 0098ca10 ////

int * __cdecl FUN_0098ca10(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      param_3[9] = param_1[9];
    }
    param_1 = param_1 + 10;
    param_3 = param_3 + 10;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0098caa0 @ 0098caa0 ////

int * __cdecl FUN_0098caa0(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      *(undefined1 *)(*param_3 + _Count) = 0;
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
      param_3[10] = param_1[10];
    }
    param_1 = param_1 + 0xb;
    param_3 = param_3 + 0xb;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION ISerializable_WriteObjectHeader @ 0098cbe0 ////

void ISerializable_WriteObjectHeader(void)

{
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5ca8;
  local_c = ExceptionList;
  local_2c = local_20;
  DAT_010583f8 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"\n[OBJ]\n",7);
  local_28 = 7;
  local_2c[7] = '\0';
  local_4 = 0;
  FUN_0098be10(&local_2c);
  local_30 = 0;
  DAT_010583f4 = DAT_010584fc;
  if (DAT_010583e0 == 0) {
    DAT_010583f8 = DAT_010583f8 + 4;
    FUN_00989500(&DAT_010584f4,&local_30,4);
  }
  if (DAT_010583e0 == 1) {
    FUN_00989810(&local_30,4);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION Serialization_WriteObjectFooter @ 0098ccc0 ////

void __fastcall Serialization_WriteObjectFooter(int param_1)

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
  puStack_8 = &LAB_00cf5cc8;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = DAT_00e67464;
  *(undefined4 *)(param_1 + 8) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"\n[/OBJ]\n",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 0;
  FUN_0098be10(&local_2c);
  DAT_010583f8 = DAT_010583f8 + 1;
  FUN_00989500(&DAT_010584f4,(undefined4 *)(param_1 + 4),1);
  uVar1 = DAT_010584fc;
  DAT_010584fc = DAT_010583f4;
  if (DAT_010583e0 == 0) {
    DAT_010583f8 = DAT_010583f8 + 4;
    FUN_00989500(&DAT_010584f4,&DAT_010583f8,4);
  }
  if (DAT_010583e0 == 1) {
    FUN_00989810(&DAT_010583f8,4);
  }
  DAT_010584fc = uVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098cdd0 @ 0098cdd0 ////

void FUN_0098cdd0(void)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [52];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5ce8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  if (DAT_010584b8 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_010584bc - (int)DAT_010584b8 >> 2;
  }
  ExceptionList = &pvStack_c;
  FUN_004073f0(&local_2c,"Processing ",0xb);
  sVar2 = _sprintf((char *)&local_6c,(char *)&param_2_00d1b93c,iVar3);
  FUN_004073f0(&local_2c,(char *)&local_6c,sVar2);
  FUN_004073f0(&local_2c," Deferred pointers",0x12);
  while( true ) {
    if ((DAT_010584b8 == (int *)0x0) || (DAT_010584bc - (int)DAT_010584b8 >> 2 == 0)) break;
    piVar1 = (int *)*DAT_010584b8;
    if (piVar1[3] != DAT_00e67464) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x20;
      local_6c = _malloc(0x20);
      _strncpy(local_6c,"Saving Deferred object",0x16);
      local_68 = 0x16;
      local_6c[0x16] = '\0';
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      (**(code **)(*piVar1 + 4))();
    }
    _memmove(DAT_010584b8,DAT_010584b8 + 1,(DAT_010584bc - (int)(DAT_010584b8 + 1) >> 2) << 2);
    DAT_010584bc = DAT_010584bc + -4;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0098cf50 @ 0098cf50 ////

/* WARNING: Removing unreachable block (ram,0x0098d172) */
/* WARNING: Removing unreachable block (ram,0x0098d258) */
/* WARNING: Removing unreachable block (ram,0x0098d25e) */
/* WARNING: Removing unreachable block (ram,0x0098d26b) */
/* WARNING: Removing unreachable block (ram,0x0098d274) */
/* WARNING: Removing unreachable block (ram,0x0098d2f1) */
/* WARNING: Removing unreachable block (ram,0x0098d2f7) */
/* WARNING: Removing unreachable block (ram,0x0098d304) */
/* WARNING: Removing unreachable block (ram,0x0098d311) */

void FUN_0098cf50(void)

{
  byte bVar1;
  uint _Count;
  undefined1 *puVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint *_Dest;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  uint _Size;
  uint local_bc;
  char local_88 [2];
  undefined1 local_86;
  byte *local_74;
  undefined4 local_70;
  uint local_6c;
  byte local_68 [20];
  undefined4 local_54;
  byte *local_50;
  undefined4 local_4c;
  uint local_48;
  byte local_44 [20];
  char *local_30;
  uint local_2c;
  uint local_28;
  char local_24 [20];
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5d10;
  local_c = ExceptionList;
  local_30 = local_24;
  local_24[0] = '\0';
  local_2c = 0;
  local_28 = 0x14;
  local_50 = local_44;
  local_44[0] = 0;
  local_4c = 0;
  local_48 = 0x14;
  local_74 = local_68;
  local_4 = 1;
  local_68[0] = 0;
  local_70 = 0;
  local_6c = 0xa0;
  ExceptionList = &local_c;
  local_74 = _malloc(0xa0);
  local_bc = 0x98cfec;
  _strncpy((char *)local_74,
           "=============================================================================================================\n\n = = = = = = = = = =\n"
           ,0x84);
  local_70 = 0x84;
  local_74[0x84] = 0;
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  cVar3 = SLVAR_LoadString(&local_50);
  do {
    if (cVar3 == '\0') {
      (*DAT_010583dc)();
      local_88[0] = '\0';
      pcVar6 = _malloc(0x20);
      local_bc = 0x98d231;
      _strncpy(pcVar6,"**Finished Loading Objects***",0x1d);
      pcVar6[0x1d] = '\0';
                    /* WARNING: Subroutine does not return */
      _free(pcVar6);
    }
    local_74 = local_68;
    local_68[0] = 0;
    local_70 = 0;
    local_6c = 0x14;
    _strncpy((char *)local_74,"\n[/OBJECTS]\n",0xc);
    local_70 = 0xc;
    local_74[0xc] = 0;
    pbVar4 = local_50;
    pbVar7 = local_74;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0098d094:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0098d099;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0098d094;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0098d099:
    if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74);
    }
    if (iVar5 == 0) {
      local_88[0] = '\0';
      pcVar6 = _malloc(0x20);
      local_bc = 0x98d2ca;
      _strncpy(pcVar6,"ObjectList End detected",0x17);
      pcVar6[0x17] = '\0';
                    /* WARNING: Subroutine does not return */
      _free(pcVar6);
    }
    bVar8 = FUN_00430950(&local_50,"\n[OBJ]\n");
    if (bVar8) {
      if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
        _free(local_50);
      }
      if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
        _free(local_30);
      }
      ExceptionList = local_c;
      return;
    }
    if (DAT_010583e0 == 0) {
      DAT_010583f8 = DAT_010583f8 + 4;
      FUN_00989500(&DAT_010584f4,&local_54,4);
    }
    if ((DAT_010583e0 == 1) && (DAT_010584fc + 4 <= DAT_010584f8)) {
      local_54 = *(undefined4 *)(DAT_010584fc + DAT_010584f4);
      DAT_010584fc = DAT_010584fc + 4;
    }
    SLVAR_LoadString(&local_30);
    local_88[0] = '\0';
    local_bc = 0x98d158;
    _strncpy(local_88,"\n\n",2);
    _Count = local_2c;
    pcVar6 = local_30;
    local_86 = 0;
    local_10 = &stack0xffffff38;
    _Dest = &local_bc;
    local_bc = local_bc & 0xffffff00;
    _Size = 0x14;
    puVar2 = &stack0xffffff38;
    if (0x13 < local_2c) {
      _Size = local_2c + 0x20 & 0xffffffe0;
      _Dest = _malloc(_Size);
      puVar2 = local_10;
    }
    local_10 = puVar2;
    _strncpy((char *)_Dest,pcVar6,_Count);
    *(undefined1 *)((int)_Dest + _Count) = 0;
    FUN_0098b940((byte *)_Dest,_Count,_Size);
    cVar3 = SLVAR_LoadString(&local_50);
  } while( true );
}


//// FUNCTION FUN_0098d350 @ 0098d350 ////

void __fastcall FUN_0098d350(int param_1)

{
  int *piVar1;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  piVar1 = (int *)(param_1 + 0x18);
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(param_1 + 0x1c);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int ***)(param_1 + 0x1c) = &DAT_01058410;
  *piVar1 = (int)DAT_01058410;
  *(int **)((int)DAT_01058410 + 4) = piVar1;
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  DAT_01058410 = piVar1;
  SLVAR_LoadString(&local_20);
  if (DAT_010584fc + 1U <= DAT_010584f8) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(DAT_010584fc + DAT_010584f4);
    DAT_010584fc = DAT_010584fc + 1;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return;
}


//// FUNCTION SLVAR_LoadOrSaveStatics @ 0098d400 ////

/* WARNING: Removing unreachable block (ram,0x0098d63a) */
/* WARNING: Removing unreachable block (ram,0x0098d53e) */

void SLVAR_LoadOrSaveStatics(void)

{
  size_t sVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  size_t _Count;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint local_74;
  char *local_6c;
  size_t local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5d28;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  if (DAT_01058498 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = ((int)DAT_0105849c - (int)DAT_01058498) / 0x28;
  }
  ExceptionList = &local_c;
  FUN_004073f0(&local_6c,"Loading ",8);
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar8);
  FUN_004073f0(&local_6c,local_4c,sVar1);
  FUN_004073f0(&local_6c," Static vars",0xc);
  puVar11 = DAT_01058498;
  if (DAT_01058498 != DAT_0105849c) {
    do {
      uVar2 = FUN_0098b490((char *)*puVar11);
      if ((char)uVar2 != '\0') {
        switch(puVar11[9]) {
        case 0:
          SLVAR_LoadVector3((undefined4 *)puVar11[8]);
          break;
        case 1:
          SLVAR_LoadUint((undefined4 *)puVar11[8]);
          break;
        case 2:
          SLVAR_LoadByte((undefined1 *)puVar11[8]);
          break;
        case 3:
          SLVAR_LoadFloat((float *)puVar11[8]);
          break;
        case 4:
          SLVAR_LoadString((undefined4 *)puVar11[8]);
          break;
        case 5:
          SLVAR_LoadWString((undefined4 *)puVar11[8]);
          break;
        case 6:
          SLVAR_LoadTrackedUint(puVar11[8]);
        }
      }
      puVar11 = puVar11 + 10;
    } while (puVar11 != DAT_0105849c);
  }
  if (local_64 == 0) {
    local_64 = 0x20;
    local_6c = _malloc(0x20);
  }
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  if (DAT_010584c8 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)DAT_010584cc - (int)DAT_010584c8 >> 2;
  }
  FUN_004073f0(&local_6c,"Loading ",8);
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar8);
  FUN_004073f0(&local_6c,local_4c,sVar1);
  FUN_004073f0(&local_6c," Static lists",0xd);
  piVar5 = DAT_010584dc;
  piVar9 = DAT_010584c8;
  uVar13 = DAT_010583e8;
  if (DAT_010584c8 != DAT_010584cc) {
    do {
      for (piVar3 = DAT_010584d8; piVar3 != piVar5; piVar3 = piVar3 + 2) {
        if ((*piVar9 == *piVar3) && (uVar13 < (uint)piVar3[1])) goto LAB_0098d621;
      }
      FUN_0097dff0(*piVar9);
      piVar5 = DAT_010584dc;
      uVar13 = DAT_010583e8;
LAB_0098d621:
      piVar9 = piVar9 + 1;
    } while (piVar9 != DAT_010584cc);
  }
  if (local_64 == 0) {
    local_64 = 0x20;
    local_6c = _malloc(0x20);
  }
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  if (DAT_010584a8 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = ((int)DAT_010584ac - (int)DAT_010584a8) / 0x2c;
  }
  pcVar4 = local_6c;
  uVar13 = local_64;
  if (local_64 < 9) {
    pcVar4 = _malloc(0x20);
    _strncpy(pcVar4,local_6c,local_68);
    uVar13 = 0x20;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar13;
  local_6c = pcVar4;
  _strncpy(local_6c + local_68,"Loading ",8);
  local_6c[8] = '\0';
  local_68 = 8;
  _Count = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar8);
  uVar13 = local_68 + _Count;
  pcVar4 = local_6c;
  uVar6 = local_64;
  if (local_64 <= uVar13) {
    uVar6 = uVar13 + 0x20 & 0xffffffe0;
    pcVar4 = _malloc(uVar6);
    _strncpy(pcVar4,local_6c,local_68);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar6;
  local_6c = pcVar4;
  _strncpy(local_6c + local_68,local_4c,_Count);
  local_6c[uVar13] = '\0';
  uVar10 = uVar13 + 0xe;
  pcVar4 = local_6c;
  local_68 = uVar13;
  uVar6 = local_64;
  if (local_64 <= uVar10) {
    uVar6 = uVar13 + 0x2e & 0xffffffe0;
    pcVar4 = _malloc(uVar6);
    _strncpy(pcVar4,local_6c,local_68);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar6;
  local_6c = pcVar4;
  _strncpy(local_6c + local_68," Static arrays",0xe);
  local_6c[uVar10] = '\0';
  puVar11 = DAT_010584a8;
  local_68 = uVar10;
  if (DAT_010584a8 != DAT_010584ac) {
    do {
      uVar2 = FUN_0098b490((char *)*puVar11);
      if ((char)uVar2 != '\0') {
        puVar7 = (undefined4 *)puVar11[8];
        local_74 = 0;
        if (puVar11[10] != 0) {
          do {
            uVar13 = puVar11[9];
            if (DAT_010583e0 == 0) {
              DAT_010583f8 = DAT_010583f8 + uVar13;
              FUN_00989500(&DAT_010584f4,puVar7,uVar13);
            }
            if ((DAT_010583e0 == 1) && (DAT_010584fc + uVar13 <= DAT_010584f8)) {
              puVar12 = (undefined4 *)(DAT_010584fc + DAT_010584f4);
              puVar14 = puVar7;
              for (uVar6 = uVar13 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar14 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar14 = puVar14 + 1;
              }
              for (uVar6 = uVar13 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar14 = (undefined4 *)((int)puVar14 + 1);
              }
              DAT_010584fc = DAT_010584fc + uVar13;
            }
            puVar7 = (undefined4 *)((int)puVar7 + puVar11[9]);
            local_74 = local_74 + 1;
          } while (local_74 < (uint)puVar11[10]);
        }
      }
      puVar11 = puVar11 + 0xb;
    } while (puVar11 != DAT_010584ac);
  }
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0098d940 @ 0098d940 ////

void __fastcall FUN_0098d940(int param_1)

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


//// FUNCTION FUN_0098d9c0 @ 0098d9c0 ////

void __cdecl FUN_0098d9c0(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098da60 @ 0098da60 ////

void __cdecl FUN_0098da60(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0098db00 @ 0098db00 ////

void __cdecl FUN_0098db00(int *param_1,int param_2,undefined4 *param_3)

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
      param_1[10] = param_3[10];
    }
    param_1 = param_1 + 0xb;
  }
  return;
}


//// FUNCTION FUN_0098dcc0 @ 0098dcc0 ////

void FUN_0098dcc0(void)

{
  int *piVar1;
  
  piVar1 = DAT_01050be8;
  if (DAT_01050be8 != DAT_01050bec) {
    do {
      FUN_0097d4a0(*piVar1);
      piVar1 = piVar1 + 1;
    } while (piVar1 != DAT_01050bec);
  }
  if (DAT_01050be8 == (int *)0x0) {
    DAT_01050be8 = (int *)0x0;
    DAT_01050bec = (int *)0x0;
    DAT_01050bf0 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_01050be8);
}


//// FUNCTION FUN_0098dd20 @ 0098dd20 ////

void __fastcall FUN_0098dd20(int param_1)

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


//// FUNCTION FUN_0098dd50 @ 0098dd50 ////

undefined4 * FUN_0098dd50(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0098c8e0(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0098df00 @ 0098df00 ////

void __fastcall FUN_0098df00(int param_1)

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


//// FUNCTION FUN_0098df30 @ 0098df30 ////

void __fastcall FUN_0098df30(int param_1)

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


//// FUNCTION FUN_0098df60 @ 0098df60 ////

int * FUN_0098df60(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0098d9c0(param_1,param_2,param_3);
  return param_1 + param_2 * 10;
}


//// FUNCTION FUN_0098df90 @ 0098df90 ////

int * FUN_0098df90(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0098da60(param_1,param_2,param_3);
  return param_1 + param_2 * 10;
}


//// FUNCTION FUN_0098dfc0 @ 0098dfc0 ////

int * FUN_0098dfc0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0098db00(param_1,param_2,param_3);
  return param_1 + param_2 * 0xb;
}


//// FUNCTION FUN_0098dff0 @ 0098dff0 ////

void FUN_0098dff0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    FUN_0098a210(param_1);
  }
  return;
}


//// FUNCTION FUN_0098e020 @ 0098e020 ////

void FUN_0098e020(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    FUN_0098a400(param_1);
  }
  return;
}


//// FUNCTION FUN_0098e050 @ 0098e050 ////

void FUN_0098e050(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    FUN_0098a3f0(param_1);
  }
  return;
}


//// FUNCTION FUN_0098e080 @ 0098e080 ////

void __fastcall FUN_0098e080(int param_1)

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
    FUN_0098a210(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0098e0d0 @ 0098e0d0 ////

void __fastcall FUN_0098e0d0(int param_1)

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
    FUN_0098a400(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0098e120 @ 0098e120 ////

void __fastcall FUN_0098e120(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    FUN_0098a3f0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0098e170 @ 0098e170 ////

void FUN_0098e170(void)

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
  puStack_8 = &LAB_00cf5d48;
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


//// FUNCTION FUN_0098e1e0 @ 0098e1e0 ////

void FUN_0098e1e0(void)

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
  puStack_8 = &LAB_00cf5d68;
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


//// FUNCTION FUN_0098e250 @ 0098e250 ////

void FUN_0098e250(void)

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
  puStack_8 = &LAB_00cf5d88;
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


//// FUNCTION FUN_0098e2c0 @ 0098e2c0 ////

void FUN_0098e2c0(void)

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
  puStack_8 = &LAB_00cf5da8;
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


//// FUNCTION FUN_0098e330 @ 0098e330 ////

void FUN_0098e330(void)

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
  puStack_8 = &LAB_00cf5dc8;
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


//// FUNCTION FUN_0098e3a0 @ 0098e3a0 ////

void FUN_0098e3a0(void)

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
  puStack_8 = &LAB_00cf5de8;
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


//// FUNCTION FUN_0098e410 @ 0098e410 ////

void __fastcall FUN_0098e410(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d71140;
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


//// FUNCTION FUN_0098e460 @ 0098e460 ////

void __fastcall FUN_0098e460(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d7114c;
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


//// FUNCTION FUN_0098e4f0 @ 0098e4f0 ////

undefined4 * __thiscall FUN_0098e4f0(void *this,byte param_1)

{
  FUN_0098e410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098e510 @ 0098e510 ////

undefined4 * __thiscall FUN_0098e510(void *this,byte param_1)

{
  FUN_0098e460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0098e760 @ 0098e760 ////

void __thiscall FUN_0098e760(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf5e00;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd0;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 4;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_0098e1e0();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0xfffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = operator_new(uVar3 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0098b420(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0098c8e0(puVar5,param_2,&local_24);
      FUN_0098b420(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar7) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_0098b420(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_0098dd50(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_00989e80(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0098b420(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0098a000(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_00989e80(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0098e9d0 @ 0098e9d0 ////

void __thiscall FUN_0098e9d0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf5e18;
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
      FUN_0098e250();
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
        iVar2 = FUN_00989880((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_0098c980(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_0098d9c0(piVar4,param_2,&local_44);
      FUN_0098c980(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 10);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0098dff0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_0098c980(param_1,piVar3,param_1 + param_2 * 10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0098df60(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x28,&local_44);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x28;
        *(int *)((int)this + 8) = iVar2;
        FUN_0098c700(param_1,(int *)(iVar2 + param_2 * -0x28),&local_44);
      }
      else {
        piVar4 = FUN_0098c980(piVar3 + param_2 * -10,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_0098b1e0((int)param_1,(int)(piVar3 + param_2 * -10),piVar3);
        FUN_0098c700(param_1,param_1 + param_2 * 10,&local_44);
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


//// FUNCTION FUN_0098ecf0 @ 0098ecf0 ////

void __thiscall FUN_0098ecf0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf5e38;
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
      FUN_0098e2c0();
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
        iVar2 = FUN_009898a0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_0098ca10(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_0098da60(piVar4,param_2,&local_44);
      FUN_0098ca10(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 10);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0098e020(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_0098ca10(param_1,piVar3,param_1 + param_2 * 10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0098df90(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x28,&local_44);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x28;
        *(int *)((int)this + 8) = iVar2;
        FUN_0098c7a0(param_1,(int *)(iVar2 + param_2 * -0x28),&local_44);
      }
      else {
        piVar4 = FUN_0098ca10(piVar3 + param_2 * -10,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_0098b270((int)param_1,(int)(piVar3 + param_2 * -10),piVar3);
        FUN_0098c7a0(param_1,param_1 + param_2 * 10,&local_44);
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


//// FUNCTION FUN_0098f010 @ 0098f010 ////

void __thiscall FUN_0098f010(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 *local_48;
  undefined4 local_44;
  uint local_40;
  undefined1 local_3c [20];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf5e58;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_48 = local_3c;
  local_3c[0] = 0;
  local_44 = 0;
  local_40 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_48,(char *)*param_3,param_3[1]);
  local_28 = param_3[8];
  local_24 = param_3[9];
  local_20 = param_3[10];
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x2c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x2c;
    }
    if (0x5d1745dU - iVar1 < param_2) {
      FUN_0098e330();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x2c;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x5d1745d - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x2c;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_009898c0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x2c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_0098caa0(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_0098db00(piVar4,param_2,&local_48);
      FUN_0098caa0(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 0xb);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x2c;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0098e050(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 0xb;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 0xb;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x2c) < param_2) {
        FUN_0098caa0(param_1,piVar3,param_1 + param_2 * 0xb);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0098dfc0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x2c,&local_48);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x2c;
        *(int *)((int)this + 8) = iVar2;
        FUN_0098c840(param_1,(int *)(iVar2 + param_2 * -0x2c),&local_48);
      }
      else {
        piVar4 = FUN_0098caa0(piVar3 + param_2 * -0xb,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_0098b300((int)param_1,(int)(piVar3 + param_2 * -0xb),piVar3);
        FUN_0098c840(param_1,param_1 + param_2 * 0xb,&local_48);
      }
    }
  }
  if (0x14 < local_40) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0098f330 @ 0098f330 ////

void __thiscall FUN_0098f330(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0098e3a0();
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
      _Dst = FUN_0098c6d0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0098b120(param_1,iVar5,param_1 + param_2);
      FUN_0098c6d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00989f40(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0098b120(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0098aab0(param_1,(int)pvVar3,iVar5);
    FUN_00989f40(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0098f5d0 @ 0098f5d0 ////

void __thiscall FUN_0098f5d0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_0098f615;
    }
  }
  iVar1 = 0;
LAB_0098f615:
  FUN_0098e9d0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_0098f640 @ 0098f640 ////

void __thiscall FUN_0098f640(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_0098f685;
    }
  }
  iVar1 = 0;
LAB_0098f685:
  FUN_0098ecf0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_0098f6b0 @ 0098f6b0 ////

void __thiscall FUN_0098f6b0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x2c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x2c;
      goto LAB_0098f6f5;
    }
  }
  iVar1 = 0;
LAB_0098f6f5:
  FUN_0098f010(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x2c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0098f770 @ 0098f770 ////

void __thiscall FUN_0098f770(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0098c8e0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_0098e760(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0098f7e0 @ 0098f7e0 ////

void __thiscall FUN_0098f7e0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0098d9c0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 10;
    return;
  }
  FUN_0098f5d0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0098f870 @ 0098f870 ////

void __thiscall FUN_0098f870(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0098da60(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 10;
    return;
  }
  FUN_0098f640(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0098f900 @ 0098f900 ////

void __thiscall FUN_0098f900(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x2c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x2c))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0098db00(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0xb;
    return;
  }
  FUN_0098f6b0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0098f9e0 @ 0098f9e0 ////

void __cdecl FUN_0098f9e0(int param_1)

{
  int *piVar1;
  
  for (piVar1 = DAT_010584e8; piVar1 != DAT_010584ec; piVar1 = piVar1 + 1) {
    if (*piVar1 == param_1) {
      return;
    }
  }
  if ((DAT_010584e8 != (int *)0x0) &&
     ((uint)((int)DAT_010584ec - (int)DAT_010584e8 >> 2) <
      (uint)(DAT_010584f0 - (int)DAT_010584e8 >> 2))) {
    *DAT_010584ec = param_1;
    DAT_010584ec = DAT_010584ec + 1;
    return;
  }
  FUN_005e9ad0(&DAT_010584e4,DAT_010584ec,1,&param_1);
  return;
}


//// FUNCTION FUN_0098fa50 @ 0098fa50 ////

void __cdecl FUN_0098fa50(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [20];
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5e78;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  local_4 = 0;
  local_14 = param_1;
  ExceptionList = &local_c;
  FUN_004015d0(&local_34,(char *)*param_2,param_2[1]);
  local_10 = DAT_00e6746c;
  DAT_00e6746c = DAT_00e6746c + 1;
  FUN_0098f7e0(&DAT_01058474,&local_34);
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098fae0 @ 0098fae0 ////

void FUN_0098fae0(void)

{
  byte bVar1;
  byte *_Source;
  uint _Count;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  int local_5c;
  undefined4 local_58;
  byte *local_54;
  uint local_50;
  uint local_4c;
  byte local_48 [20];
  char *local_34;
  uint local_30;
  uint local_2c;
  char local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5ea0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0098e080(0x1058484);
  local_54 = local_48;
  local_48[0] = 0;
  local_50 = 0;
  local_4c = 0x14;
  local_4 = 0;
  SLVAR_LoadUint(&local_5c);
  local_34 = local_28;
  local_28[0] = '\0';
  local_30 = 0;
  local_2c = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = local_5c;
  if (local_5c != 0) {
    do {
      SLVAR_LoadUint(&local_58);
      SLVAR_LoadString(&local_54);
      _Count = local_50;
      _Source = local_54;
      local_14 = 0;
      for (puVar4 = DAT_01058478; puVar4 != DAT_0105847c; puVar4 = puVar4 + 10) {
        pbVar2 = (byte *)*puVar4;
        pbVar5 = local_54;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_0098fbb9:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0098fbbe;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0098fbb9;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0098fbbe:
        if (iVar3 == 0) {
          local_14 = puVar4[8];
          break;
        }
      }
      if (local_2c <= local_50) {
        if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_34);
        }
        local_2c = local_50 + 0x20 & 0xffffffe0;
        local_34 = _malloc(local_2c);
      }
      _strncpy(local_34,(char *)_Source,_Count);
      local_30 = _Count;
      local_34[_Count] = '\0';
      local_10 = local_58;
      FUN_0098f7e0(&DAT_01058484,&local_34);
      local_5c = local_5c + -1;
    } while (local_5c != 0);
    iVar3 = 0;
    if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
  }
  local_5c = iVar3;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098fc90 @ 0098fc90 ////

void __cdecl FUN_0098fc90(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5eb8;
  local_c = ExceptionList;
  local_38 = local_2c;
  local_2c[0] = 0;
  local_34 = 0;
  local_30 = 0x14;
  local_4 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_38,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_0098f900(&DAT_010584a4,&local_38);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098fd30 @ 0098fd30 ////

void __cdecl FUN_0098fd30(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5ed8;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  local_4 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_34,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_14 = param_2;
  local_10 = param_3;
  FUN_0098f870(&DAT_01058494,&local_34);
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098fdd0 @ 0098fdd0 ////

void __cdecl FUN_0098fdd0(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5ef8;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  local_4 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_34,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_14 = param_2;
  local_10 = 6;
  FUN_0098f870(&DAT_01058494,&local_34);
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0098fe70 @ 0098fe70 ////

undefined4 __cdecl FUN_0098fe70(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  char *local_a0;
  char *local_9c;
  uint local_98;
  char local_94 [20];
  char local_80 [64];
  char local_40 [64];
  
  if (DAT_00e67469 == '\0') {
    local_a0 = local_94;
    local_94[0] = '\0';
    local_9c = (char *)0x0;
    local_98 = 0x14;
    _strncpy(local_a0,"Loading THIS",0xc);
    local_9c = (char *)0xc;
    local_a0[0xc] = '\0';
    if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  SLVAR_LoadUint(param_1);
  local_98 = *param_1;
  local_a0 = param_2;
  local_9c = param_2;
  uVar1 = FUN_0098f770(&DAT_01058430,&local_a0);
  if (DAT_00e67469 == '\0') {
    local_a0 = local_94;
    local_94[0] = '\0';
    local_9c = (char *)0x0;
    local_98 = 0x14;
    FUN_004073f0(&local_a0,"Loaded this pointer: ",0x15);
    sVar2 = _sprintf(local_80,(char *)&param_2_00d1b93c,param_2);
    FUN_004073f0(&local_a0,local_80,sVar2);
    FUN_004073f0(&local_a0," as ID: ",8);
    sVar2 = _sprintf(local_40,(char *)&param_2_00d1b93c,*param_1);
    FUN_004073f0(&local_a0,local_40,sVar2);
    uVar1 = FUN_004073f0(&local_a0,"\n",1);
    if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Serialization_RegisterPointerMapEntry @ 0098ffc0 ////

void __cdecl Serialization_RegisterPointerMapEntry(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  char *local_e0;
  undefined4 local_dc;
  uint local_d8;
  char local_d4 [20];
  char local_c0 [64];
  char local_80 [64];
  char local_40 [64];
  
  local_d4[0] = '\0';
  if (*(int *)(param_1 + 0x14) == DAT_00e67464) {
    local_e0 = local_d4;
    local_dc = 0;
    local_d8 = 0x20;
    local_e0 = _malloc(0x20);
    _strncpy(local_e0,"ThisPtr alreaday registered",0x1b);
    local_dc = 0x1b;
    local_e0[0x1b] = '\0';
    if (0x14 < local_d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_e0);
    }
  }
  else {
    *(int *)(param_1 + 0x14) = DAT_00e67464;
    *(int *)(param_1 + 0x10) = DAT_00e67460;
    DAT_00e67460 = DAT_00e67460 + 1;
    local_d8 = *(uint *)(param_1 + 0x10);
    local_e0 = param_1;
    local_dc = param_2;
    FUN_0098f770(&DAT_01058430,&local_e0);
    if (DAT_00e67469 == '\0') {
      local_e0 = local_d4;
      local_d4[0] = '\0';
      local_dc = 0;
      local_d8 = 0x20;
      local_e0 = _malloc(0x20);
      _strncpy(local_e0,"Added PointerMap entry of ",0x1a);
      local_dc = 0x1a;
      local_e0[0x1a] = '\0';
      sVar1 = _sprintf(local_c0,(char *)&param_2_00d1b93c,param_1);
      FUN_004073f0(&local_e0,local_c0,sVar1);
      FUN_004073f0(&local_e0," to ",4);
      sVar1 = _sprintf(local_80,(char *)&param_2_00d1b93c,*(undefined4 *)(param_1 + 0x10));
      FUN_004073f0(&local_e0,local_80,sVar1);
      FUN_004073f0(&local_e0,"And Raw: ",9);
      sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_2);
      FUN_004073f0(&local_e0,local_40,sVar1);
      if (0x14 < local_d8) {
                    /* WARNING: Subroutine does not return */
        _free(local_e0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00990180 @ 00990180 ////

/* WARNING: Removing unreachable block (ram,0x00990231) */

void __cdecl FUN_00990180(int param_1)

{
  int *piVar1;
  char local_14 [20];
  
  piVar1 = DAT_010584b8;
  while( true ) {
    if (piVar1 == DAT_010584bc) {
      if ((DAT_010584b8 == (int *)0x0) ||
         ((uint)(DAT_010584c0 - (int)DAT_010584b8 >> 2) <=
          (uint)((int)DAT_010584bc - (int)DAT_010584b8 >> 2))) {
        FUN_0098f330(&DAT_010584b4,DAT_010584bc,1,&param_1);
      }
      else {
        *DAT_010584bc = param_1;
        DAT_010584bc = DAT_010584bc + 1;
      }
      local_14[0] = '\0';
      _strncpy(local_14,"Deffering Object",0x10);
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_00990250 @ 00990250 ////

void __fastcall FUN_00990250(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d71140;
  return;
}


//// FUNCTION FUN_009902b0 @ 009902b0 ////

void __fastcall FUN_009902b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d7114c;
  return;
}


//// FUNCTION FUN_00990310 @ 00990310 ////

void __cdecl FUN_00990310(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  param_1 = (char *)FUN_0098c320((int)param_1);
  if ((param_1 == (char *)0x0) && (pcVar1 != (char *)0x0)) {
    Serialization_RegisterPointerMapEntry(pcVar1,param_2);
    param_1 = (char *)FUN_0098c320((int)pcVar1);
  }
  DAT_010583f8 = DAT_010583f8 + 4;
  FUN_00989500(&DAT_010584f4,&param_1,4);
  if ((pcVar1 != (char *)0x0) && (*(int *)(pcVar1 + 0xc) != DAT_00e67464)) {
    FUN_00990180((int)pcVar1);
  }
  return;
}


//// FUNCTION FUN_00990380 @ 00990380 ////

void __cdecl FUN_00990380(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))();
  piVar1 = (int *)*puVar2;
  piVar3 = (int *)FUN_00ace790(piVar1,0,&TM::TMBase::RTTI_Type_Descriptor,
                               &MV::MVSaveable::RTTI_Type_Descriptor,0);
  if (piVar3 != (int *)0x0) {
    FUN_00ace790(piVar3,0,&MV::MVSaveable::RTTI_Type_Descriptor,&TM::CGenre::RTTI_Type_Descriptor,0)
    ;
  }
  FUN_00990310((char *)piVar3,piVar1);
  return;
}


//// FUNCTION FUN_009903d0 @ 009903d0 ////

/* WARNING: Removing unreachable block (ram,0x00990671) */
/* WARNING: Removing unreachable block (ram,0x0099055a) */

void FUN_009903d0(void)

{
  uint uVar1;
  float fVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t _Count;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fStack_74;
  char *local_6c;
  size_t local_68;
  uint local_64;
  char local_60 [20];
  char acStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_010583dc != (code *)0x0) {
    ExceptionList = &pvStack_c;
    (*DAT_010583dc)(0);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  if (DAT_01058498 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = ((int)DAT_0105849c - (int)DAT_01058498) / 0x28;
  }
  FUN_004073f0(&local_6c,"Saving ",7);
  sVar3 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,iVar8);
  FUN_004073f0(&local_6c,acStack_4c,sVar3);
  FUN_004073f0(&local_6c," Static vars",0xc);
  puVar11 = DAT_01058498;
  if (DAT_01058498 != DAT_0105849c) {
    do {
      uVar4 = FUN_0098b490((char *)*puVar11);
      if ((char)uVar4 != '\0') {
        switch(puVar11[9]) {
        case 0:
          FUN_0098aec0((undefined4 *)puVar11[8]);
          break;
        case 1:
          DAT_010583f8 = DAT_010583f8 + 4;
          FUN_00989500(&DAT_010584f4,(undefined4 *)puVar11[8],4);
          break;
        case 2:
          DAT_010583f8 = DAT_010583f8 + 1;
          FUN_00989500(&DAT_010584f4,(undefined4 *)puVar11[8],1);
          break;
        case 3:
          FUN_0098c270((float *)puVar11[8]);
          break;
        case 4:
          FUN_0098be10((undefined4 *)puVar11[8]);
          break;
        case 5:
          FUN_0098bfd0((undefined4 *)puVar11[8]);
          break;
        case 6:
          FUN_00990380((int *)puVar11[8]);
        }
      }
      puVar11 = puVar11 + 10;
    } while (puVar11 != DAT_0105849c);
  }
  if (local_64 == 0) {
    local_64 = 0x20;
    local_6c = _malloc(0x20);
  }
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  if (DAT_010584c8 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)DAT_010584cc - (int)DAT_010584c8 >> 2;
  }
  FUN_004073f0(&local_6c,"Saving ",7);
  sVar3 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,iVar8);
  FUN_004073f0(&local_6c,acStack_4c,sVar3);
  FUN_004073f0(&local_6c," Static lists",0xd);
  fStack_74 = 0.0;
  piVar9 = DAT_010584c8;
  if (DAT_010584c8 != DAT_010584cc) {
    do {
      if (DAT_010583dc != (code *)0x0) {
        if (DAT_010584c8 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)DAT_010584cc - (int)DAT_010584c8 >> 2;
        }
        fVar2 = (float)iVar8;
        if (iVar8 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        (*DAT_010583dc)(fStack_74 / fVar2);
      }
      FUN_0097cff0(*piVar9);
      fStack_74 = fStack_74 + 1.0;
      piVar9 = piVar9 + 1;
    } while (piVar9 != DAT_010584cc);
  }
  if (local_64 == 0) {
    local_64 = 0x20;
    local_6c = _malloc(0x20);
  }
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  if (DAT_010584a8 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = ((int)DAT_010584ac - (int)DAT_010584a8) / 0x2c;
  }
  pcVar5 = local_6c;
  uVar1 = local_64;
  if (local_64 < 8) {
    pcVar5 = _malloc(0x20);
    _strncpy(pcVar5,local_6c,local_68);
    uVar1 = 0x20;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar1;
  local_6c = pcVar5;
  _strncpy(local_6c + local_68,"Saving ",7);
  local_6c[7] = '\0';
  local_68 = 7;
  _Count = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,iVar8);
  uVar1 = local_68 + _Count;
  pcVar5 = local_6c;
  uVar6 = local_64;
  if (local_64 <= uVar1) {
    uVar6 = uVar1 + 0x20 & 0xffffffe0;
    pcVar5 = _malloc(uVar6);
    _strncpy(pcVar5,local_6c,local_68);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar6;
  local_6c = pcVar5;
  _strncpy(local_6c + local_68,acStack_4c,_Count);
  local_6c[uVar1] = '\0';
  uVar10 = uVar1 + 0xe;
  pcVar5 = local_6c;
  local_68 = uVar1;
  uVar6 = local_64;
  if (local_64 <= uVar10) {
    uVar6 = uVar1 + 0x2e & 0xffffffe0;
    pcVar5 = _malloc(uVar6);
    _strncpy(pcVar5,local_6c,local_68);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_64 = uVar6;
  local_6c = pcVar5;
  _strncpy(local_6c + local_68," Static arrays",0xe);
  local_6c[uVar10] = '\0';
  puVar11 = DAT_010584a8;
  local_68 = uVar10;
  if (DAT_010584a8 != DAT_010584ac) {
    do {
      uVar4 = FUN_0098b490((char *)*puVar11);
      if ((char)uVar4 != '\0') {
        puVar7 = (undefined4 *)puVar11[8];
        fStack_74 = 0.0;
        if (puVar11[10] != 0) {
          do {
            uVar1 = puVar11[9];
            if (DAT_010583e0 == 0) {
              DAT_010583f8 = DAT_010583f8 + uVar1;
              FUN_00989500(&DAT_010584f4,puVar7,uVar1);
            }
            if ((DAT_010583e0 == 1) && (DAT_010584fc + uVar1 <= DAT_010584f8)) {
              puVar12 = (undefined4 *)(DAT_010584fc + DAT_010584f4);
              puVar13 = puVar7;
              for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              }
              for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              DAT_010584fc = DAT_010584fc + uVar1;
            }
            puVar7 = (undefined4 *)((int)puVar7 + puVar11[9]);
            fStack_74 = (float)((int)fStack_74 + 1);
          } while ((uint)fStack_74 < (uint)puVar11[10]);
        }
      }
      puVar11 = puVar11 + 0xb;
    } while (puVar11 != DAT_010584ac);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00990970 @ 00990970 ////

void __cdecl FUN_00990970(int *param_1)

{
  if (DAT_010583e0 == 0) {
    FUN_00990380(param_1);
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadTrackedUint(param_1);
  }
  return;
}


//// FUNCTION FUN_009909a0 @ 009909a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009909a0(void)

{
  LARGE_INTEGER local_8;
  
  if (DAT_01058520 == 0 && DAT_01058524 == 0) {
    QueryPerformanceFrequency(&local_8);
    _DAT_0105852c = 1.0 / (float)CONCAT44(local_8.field0.HighPart,local_8.field0.LowPart);
    DAT_01058520 = local_8.field0.LowPart;
    DAT_01058524 = local_8.field0.HighPart;
    QueryPerformanceCounter((LARGE_INTEGER *)&lpPerformanceCount_01058518);
    QueryPerformanceCounter((LARGE_INTEGER *)&lpPerformanceCount_01058510);
  }
  return;
}


//// FUNCTION FUN_00990a00 @ 00990a00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00990a00(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  bVar3 = local_8.field0.LowPart < lpPerformanceCount_01058510;
  iVar2 = local_8.field0.LowPart - (int)lpPerformanceCount_01058510;
  iVar1 = local_8.field0.HighPart - DAT_01058514;
  lpPerformanceCount_01058510 = (LARGE_INTEGER *)local_8.field0.LowPart;
  bVar4 = local_8.field0.LowPart < lpPerformanceCount_01058518;
  local_8.field0.LowPart = local_8.field0.LowPart - (int)lpPerformanceCount_01058518;
  DAT_01058514 = local_8.field0.HighPart;
  _DAT_01058528 = (float)CONCAT44(iVar1 - (uint)bVar3,iVar2) * _DAT_0105852c * _DAT_00e6753c;
  local_8.field0.HighPart = (local_8.field0.HighPart - DAT_0105851c) - (uint)bVar4;
  uVar5 = FUN_00acd42c();
  DAT_01058530 = (int)uVar5;
  return;
}


//// FUNCTION FUN_00990aa0 @ 00990aa0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00990aa0(void)

{
  return (float10)_DAT_01058528;
}


//// FUNCTION FUN_00990ab0 @ 00990ab0 ////

LARGE_INTEGER FUN_00990ab0(void)

{
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  return (LARGE_INTEGER)((LARGE_INTEGER)local_8).QuadPart;
}


//// FUNCTION FUN_00990ae0 @ 00990ae0 ////

ulonglong __fastcall FUN_00990ae0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  LARGE_INTEGER local_8;
  
  if (DAT_0105be88 != '\0') {
    return CONCAT44(param_2,DAT_01058530);
  }
  QueryPerformanceCounter(&local_8);
  bVar1 = local_8.field0.LowPart < lpPerformanceCount_01058518;
  local_8.field0.LowPart = local_8.field0.LowPart - (int)lpPerformanceCount_01058518;
  local_8.field0.HighPart = (local_8.field0.HighPart - DAT_0105851c) - (uint)bVar1;
  uVar2 = FUN_00acd42c();
  return uVar2;
}


//// FUNCTION FUN_00990b40 @ 00990b40 ////

undefined4 * __fastcall FUN_00990b40(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar1;
  return param_1;
}


//// FUNCTION FUN_00990b60 @ 00990b60 ////

void __fastcall FUN_00990b60(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *param_1 = (int)uVar1;
  param_1[1] = (int)uVar1;
  return;
}


//// FUNCTION FUN_00990b70 @ 00990b70 ////

int __fastcall FUN_00990b70(int *param_1)

{
  return param_1[1] - *param_1;
}


//// FUNCTION FUN_00990b80 @ 00990b80 ////

void __fastcall FUN_00990b80(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 4) = (int)uVar1;
  return;
}


//// FUNCTION FUN_00990b90 @ 00990b90 ////

void __cdecl FUN_00990b90(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = param_1 | 1;
  DAT_00e67540 = 0;
  puVar2 = &DAT_01058544;
  iVar3 = 0x26f;
  DAT_01058540 = uVar1;
  do {
    uVar1 = uVar1 * 0x10dcd;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


//// FUNCTION FUN_00990bc0 @ 00990bc0 ////

uint FUN_00990bc0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = &DAT_01058540;
  puVar7 = &DAT_01058548;
  if (DAT_00e67540 < -1) {
    FUN_00990b90(0x1105);
  }
  DAT_00e67540 = 0x26f;
  DAT_01058538 = &DAT_01058544;
  iVar4 = 0xe3;
  uVar1 = DAT_01058544;
  uVar5 = DAT_01058540;
  do {
    uVar3 = uVar1;
    *puVar8 = ((uVar3 ^ uVar5) & 0x7ffffffe ^ uVar5) >> 1 ^ -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^
              puVar7[0x18b];
    uVar1 = *puVar7;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
    uVar5 = uVar3;
  } while (iVar4 != 0);
  puVar6 = &DAT_01058540;
  iVar4 = 0x18c;
  do {
    uVar2 = uVar1;
    *puVar8 = ((uVar2 ^ uVar3) & 0x7ffffffe ^ uVar3) >> 1 ^ -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^
              *puVar6;
    uVar5 = DAT_01058540;
    uVar1 = *puVar7;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
    iVar4 = iVar4 + -1;
    uVar3 = uVar2;
  } while (iVar4 != 0);
  *puVar8 = ((DAT_01058540 ^ uVar2) & 0x7ffffffe ^ uVar2) >> 1 ^
            -(uint)((DAT_01058540 & 1) != 0) & 0x9908b0df ^ *puVar6;
  uVar5 = uVar5 ^ uVar5 >> 0xb;
  uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
  uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
  return uVar5 >> 0x12 ^ uVar5;
}


//// FUNCTION FUN_00990ce0 @ 00990ce0 ////

uint FUN_00990ce0(void)

{
  uint uVar1;
  
  DAT_00e67540 = DAT_00e67540 + -1;
  if (DAT_00e67540 < 0) {
    uVar1 = FUN_00990bc0();
    return uVar1;
  }
  uVar1 = *DAT_01058538;
  DAT_01058538 = DAT_01058538 + 1;
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  return uVar1 >> 0x12 ^ uVar1;
}


//// FUNCTION FUN_00990d30 @ 00990d30 ////

int __cdecl FUN_00990d30(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar1 = FUN_00990ce0();
  return uVar1 % (uint)(param_2 - param_1) + param_1;
}


//// FUNCTION FUN_00990d60 @ 00990d60 ////

float10 FUN_00990d60(void)

{
  uint uVar1;
  float10 fVar2;
  
  DAT_00e67540 = DAT_00e67540 + -1;
  if (DAT_00e67540 < 0) {
    uVar1 = FUN_00990bc0();
  }
  else {
    uVar1 = *DAT_01058538;
    DAT_01058538 = DAT_01058538 + 1;
    uVar1 = uVar1 ^ uVar1 >> 0xb;
    uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
    uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
    uVar1 = uVar1 >> 0x12 ^ uVar1;
  }
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)2.3283064e-10;
}


//// FUNCTION FUN_00990dc0 @ 00990dc0 ////

float10 __cdecl FUN_00990dc0(float param_1)

{
  uint uVar1;
  float10 fVar2;
  
  DAT_00e67540 = DAT_00e67540 + -1;
  if (DAT_00e67540 < 0) {
    uVar1 = FUN_00990bc0();
  }
  else {
    uVar1 = *DAT_01058538;
    DAT_01058538 = DAT_01058538 + 1;
    uVar1 = uVar1 ^ uVar1 >> 0xb;
    uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
    uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
    uVar1 = uVar1 >> 0x12 ^ uVar1;
  }
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)2.3283064e-10 * (float10)param_1;
}


//// FUNCTION FUN_00990e30 @ 00990e30 ////

float10 __cdecl FUN_00990e30(float param_1,float param_2)

{
  uint uVar1;
  float10 fVar2;
  
  DAT_00e67540 = DAT_00e67540 + -1;
  if (DAT_00e67540 < 0) {
    uVar1 = FUN_00990bc0();
  }
  else {
    uVar1 = *DAT_01058538;
    DAT_01058538 = DAT_01058538 + 1;
    uVar1 = uVar1 ^ uVar1 >> 0xb;
    uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
    uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
    uVar1 = uVar1 >> 0x12 ^ uVar1;
  }
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return ((float10)param_2 - (float10)param_1) * fVar2 * (float10)2.3283064e-10 + (float10)param_1;
}


//// FUNCTION FUN_00990ea0 @ 00990ea0 ////

int __cdecl FUN_00990ea0(int param_1)

{
  return param_1 * 0x58ea12c9 + 0x79af7bc3;
}


//// FUNCTION FUN_00990ec0 @ 00990ec0 ////

void __fastcall FUN_00990ec0(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


//// FUNCTION FUN_00990f60 @ 00990f60 ////

bool __fastcall FUN_00990f60(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x05') {
    return true;
  }
  return *(char *)(param_1 + 0xc) == '\x06';
}


//// FUNCTION FUN_00990f70 @ 00990f70 ////

void __thiscall FUN_00990f70(void *this,undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *param_1;
    param_1 = param_1 + 1;
    this = (undefined4 *)((int)this + 4);
  }
  return;
}


//// FUNCTION FUN_00990f90 @ 00990f90 ////

void __thiscall FUN_00990f90(void *this,float param_1)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 0x10) = param_1 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x20) = param_1 * *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x30) = param_1 * *(float *)((int)this + 0x30);
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 0x14) = param_1 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x24) = param_1 * *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x34) = param_1 * *(float *)((int)this + 0x34);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  *(float *)((int)this + 0x18) = param_1 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x28) = param_1 * *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x38) = param_1 * *(float *)((int)this + 0x38);
  *(float *)((int)this + 0xc) = param_1 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x1c) = param_1 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x2c) = param_1 * *(float *)((int)this + 0x2c);
  *(float *)((int)this + 0x3c) = param_1 * *(float *)((int)this + 0x3c);
  return;
}


//// FUNCTION FUN_00991040 @ 00991040 ////

void __cdecl FUN_00991040(int param_1,int param_2,int param_3)

{
  if (3 < param_1) {
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,param_1,param_2,param_3);
    return;
  }
  if ((&DAT_01059338)[param_1 * 0x21 + param_2] != param_3) {
    (&DAT_01059338)[param_1 * 0x21 + param_2] = param_3;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,param_1,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_009910b0 @ 009910b0 ////

void __fastcall FUN_009910b0(undefined4 *param_1)

{
  param_1[2] = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_009910f0 @ 009910f0 ////

void __fastcall FUN_009910f0(undefined4 *param_1)

{
  *(undefined1 *)param_1 = 0xff;
  *(undefined1 *)((int)param_1 + 1) = 0xff;
  *(undefined1 *)((int)param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined1 *)((int)param_1 + 5) = 0xff;
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  *(undefined1 *)((int)param_1 + 7) = 0xff;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  *(undefined1 *)((int)param_1 + 10) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb) = 0xff;
  param_1[4] = param_1[4] & 0xffffff | 0xc1000000;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 100;
  param_1[5] = param_1[5] & 0xfffffe00;
  return;
}


//// FUNCTION FUN_00991170 @ 00991170 ////

void * __thiscall FUN_00991170(void *this,byte param_1)

{
  if (DAT_01059550 != (void *)0x0) {
    FUN_0099b400(DAT_01059550);
    DAT_01059550 = (void *)0x0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_ApplyMeshMaterial @ 009911b0 ////

void __fastcall LH_ApplyMeshMaterial(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_44;
  
                    /* CONFIRMED: this is the material render-state binder, called from ~30 places
                       across mesh, camera, and particle rendering. Three address-neighbors of
                       LH_LoadMeshBinary (FUN_009e56f0/009e5860/009e5b40) were checked as candidates
                       for "the mesh submesh drawer" and ruled out - all three build a fresh local
                       material record and draw a hardcoded quad (shoreline sand, water overlay, and
                       a decal effect respectively), none touch a real mesh object's
                       submesh/primitive arrays. The actual submesh-drawing function is still
                       unidentified among this function's other ~20 callers.
                       
                       param_1 is a material entry pointer in the exact layout LH_LoadMeshMaterial
                       builds (param_1[3] byte = "TypeCode" at matEntry+0xC, param_1[4]/[5] = the
                       two packed flag dwords at +0x10/+0x14, param_1[6]/[7] = Texture0/Texture1
                       resolved resource pointers at +0x18/+0x1C, each texture's underlying D3D
                       texture object read from resourcePtr+0x24).
                       
                       `switch((char)param_1[3])` at the top is THE material-type dispatch -
                       confirmed real IDirect3DDevice9 vtable offsets used throughout:
                       0xe4=SetRenderState, 0x104=SetTexture, 0x108=GetTextureStageState,
                       0x10c=SetTextureStageState, 0x114=SetSamplerState, 0xb0=SetTransform. Cases
                       go from 0 up to at least 0x2D (45) - shared infrastructure well beyond just
                       mesh materials - but the ones LH_LoadMeshMaterial's TypeCode byte can
                       actually produce are confirmed as:
                         0    = untextured (SetTexture(0,NULL), stage0 disabled) - matches "no
                       texture0" from the loader
                         1    = untextured variant (different ALPHAARG2, still no texture bound)
                         3    = textured: binds Texture0 to stage0; if "has texture1" flag
                       (matEntry+0x10 bit26) is set, adds a
                                second texture stage combining Texture1 (COLORARG1=TEXTURE,
                       essentially a detail/lightmap blend);
                                otherwise a plain single-texture modulate-with-diffuse setup
                         4    = textured variant similar to 3 but different blend-arg values
                       (COLORARG1=CURRENT-based) when texture1 present
                         5    = textured, with a distinct ALPHAARG2 (SELECTARG1-style) recipe -
                       matches loader's "has alpha" flag (D1 byte3)
                         6    = WATER (confirmed): binds Texture0 (the loader's "eau.dds" static
                       fallback) with its own distinct
                                COLORARG2/ALPHAARG4 blend recipe, different from 3/4/5.
                       SRCBLEND/DESTBLEND = SRCALPHA/INVSRCALPHA
                                (standard alpha blend).
                         7    = single-texture blend, distinct recipe again - matches loader's D3b2
                       sign-bit flag on top of TypeCode 3/5;
                                exact visual purpose (glow/emissive?) unconfirmed
                         0xB/0xC = dual-texture-stage blend using CURRENT-based combine args
                       (distinct formula from case 3's
                                texture1 path) - matches loader's D1 bit2 flag; plausibly used for
                       lit-window/glow-style materials
                         0x15/0x16 = PROCEDURAL BUMP-MAPPED WATER (CORRECTS an earlier guess on
                       FUN_00995ab0/LH_LoadMeshMaterial's
                                comment which said this "hides the material" - it does NOT). Instead
                       it binds a GLOBAL animated
                                water texture (DAT_01059550, the "Water.raw" resource loaded once by
                       FUN_00994f10) to stage 0 with
                                D3DTSS_BUMPENVMAT00/01/10/11 (texture stage states 7-10) driven by a
                       live-updated bump/wave matrix
                                (DAT_0105954c) for a rippling reflective-water effect - a completely
                       different, fancier water path
                                than the static "eau.dds" card used by case 6.
                         0x18 = animated/scrolling texture coordinates: loads a 4x4 matrix
                       (DAT_0105c328) into the texture-stage-0
                                transform (SetTransform(D3DTS_TEXTURE0,...)) after advancing it by a
                       fixed per-frame increment
                                (0.0833 = 1/12) - a scrolling-UV material, likely used for
                       waterfalls/conveyor-belt/flowing surfaces.
                                Matches the loader's D3b0 (file offset 0xC) flag.
                         0x1B = textured with BOTH color and alpha driven purely by the texture
                       (SELECTARG1/TEXTURE for both
                                COLOROP and ALPHAOP), stage1 explicitly disabled - no diffuse
                       modulation at all. SRCBLEND=1(ZERO)/
                                DESTBLEND=2(ONE), a different blend pair from water's
                       SRCALPHA/INVSRCALPHA. Matches the loader's
                                D3b2 bit0 flag (independent of the texture1/alpha flags that produce
                       3/4/5). Plausible use: unlit
                                decals or glow-style surfaces that shouldn't receive
                       diffuse/lighting modulation.
                       
                       Genuinely useful correction lesson: don't assume a "hide/disable" branch in
                       the loader means the material renders as nothing - always check the
                       renderer's own switch case for that same TypeCode value before concluding,
                       since loader-side field-clearing can be feeding a completely different (here:
                       globally-driven) render path instead. */
  if (DAT_01058f0d != '\0') {
    return;
  }
  if (DAT_01058f0c != '\0') {
    if ((char)param_1[3] != '\x05') {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
      return;
    }
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
      return;
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))
              (g_pDirect3DDevice,1,*(undefined4 *)(param_1[6] + 0x24));
    return;
  }
  uVar1 = *(byte *)((int)param_1 + 0x13) & 1;
  if (DAT_01059214 != uVar1) {
    DAT_01059214 = uVar1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x89,uVar1);
  }
  iVar2 = 1;
  if ((param_1[4] & 0x2000000U) == 0) {
    iVar2 = DAT_00e67554;
  }
  if (DAT_01059048 != iVar2) {
    DAT_01059048 = iVar2;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x16,iVar2);
  }
  if ((param_1[4] & 0x20000000U) == 0) {
    if (DAT_0105902c != 0) {
      DAT_0105902c = 0;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0xf,0);
    }
  }
  else {
    if (DAT_0105902c != 1) {
      DAT_0105902c = 1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0xf,1);
    }
    uVar1 = (uint)*(byte *)((int)param_1 + 0xe);
    if (DAT_01059050 != uVar1) {
      DAT_01059050 = uVar1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x18,uVar1);
    }
  }
  uVar1 = ~(((uint)param_1[4] >> 0x1b) << 1) & 2 | 1;
  if (DAT_01058f14 != uVar1) {
    DAT_01058f14 = uVar1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,1,uVar1);
  }
  uVar1 = ~(((uint)param_1[4] >> 0x1c) << 1) & 2 | 1;
  if (DAT_01058f18 != uVar1) {
    DAT_01058f18 = uVar1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,2,uVar1);
  }
  if (DAT_0105ef78 == '\0') {
    if (param_1[4] < 0) {
      uVar1 = param_1[5] & 1U | 4;
    }
    else {
      uVar1 = 8;
    }
    if (DAT_0105904c != uVar1) {
      DAT_0105904c = uVar1;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x17,uVar1);
    }
    if (((param_1[4] & 0x40000000U) == 0) || (DAT_0105bda4 != '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    if (DAT_01059028 != iVar2) {
      iVar3 = *g_pDirect3DDevice;
      DAT_01059028 = iVar2;
      goto LAB_009913f4;
    }
  }
  else {
    if (DAT_0105904c != 8) {
      DAT_0105904c = 8;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x17,8);
    }
    if (DAT_01059028 != 0) {
      DAT_01059028 = 0;
      iVar3 = *g_pDirect3DDevice;
LAB_009913f4:
      (**(code **)(iVar3 + 0xe4))(g_pDirect3DDevice,0xe,DAT_01059028);
    }
  }
  if ((*(byte *)(param_1 + 3) < 0x2a) && (DAT_0105929c != 1)) {
    DAT_0105929c = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0xab,1);
  }
  switch((char)param_1[3]) {
  case '\0':
    FUN_00888020(0x3c,*param_1);
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059344 != 3) {
      DAT_01059344 = 3;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,3);
    }
    if (DAT_01059340 != 0) {
      DAT_01059340 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,0);
    }
    if (DAT_01059348 != 1) {
      DAT_01059348 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,1);
    }
    if (DAT_010593c0 != 1) {
      DAT_010593c0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
    }
    FUN_00888020(0x1b,0);
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    return;
  case '\x01':
    if (DAT_0105933c != 2) {
      DAT_0105933c = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,2);
    }
    if (DAT_01059340 != 0) {
      DAT_01059340 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,0);
    }
    if (DAT_01059348 != 2) {
      DAT_01059348 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,2);
    }
    if (DAT_0105934c != 0) {
      DAT_0105934c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,0);
    }
    if (DAT_010593c0 != 1) {
      DAT_010593c0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
    }
    if (DAT_010593cc != 1) {
      DAT_010593cc = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
    }
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    return;
  case '\x03':
    bVar5 = (byte)((uint)param_1[4] >> 0x1a) & 1;
    if (((DAT_0105be89 != '\0') && (param_1[6] != 0)) && ((*(byte *)(param_1[6] + 0x54) & 1) != 0))
    {
      bVar5 = 0;
    }
    FUN_00888020(0x1b,0);
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 1) {
      DAT_01059348 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,1);
    }
    if (DAT_01059548 == (int *)0x0) {
      if (bVar5 == 0) {
        if (DAT_010593c0 != 1) {
          DAT_010593c0 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
        }
        if (DAT_010593cc != 1) {
          DAT_010593cc = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
          return;
        }
      }
      else {
        if (DAT_010593c4 != 2) {
          DAT_010593c4 = 2;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
        }
        if (DAT_010593c8 != 1) {
          DAT_010593c8 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
        }
        if (DAT_010593c0 != 5) {
          DAT_010593c0 = 5;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,5);
        }
        if (DAT_01058f4c != 3) {
          DAT_01058f4c = 3;
          (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
        }
        if (DAT_01058f50 != 3) {
          DAT_01058f50 = 3;
          (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
        }
        if (DAT_0105941c != 0) {
          DAT_0105941c = 0;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
        }
        if (DAT_010593e8 != 1) {
          DAT_010593e8 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
        }
        if (DAT_010593cc != 1) {
          DAT_010593cc = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
        }
        if (param_1[7] == 0) {
          (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
        }
        else {
          (**(code **)(*g_pDirect3DDevice + 0x104))
                    (g_pDirect3DDevice,1,*(undefined4 *)(param_1[7] + 0x24));
        }
        if (DAT_01059444 != 1) {
          DAT_01059444 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
        }
        if (DAT_01059450 != 1) {
          DAT_01059450 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,4,1);
          return;
        }
      }
    }
    else {
      if (DAT_010593cc != 1) {
        DAT_010593cc = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
      }
      if (DAT_010593c4 != 2) {
        DAT_010593c4 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
      }
      if (DAT_010593c8 != 1) {
        DAT_010593c8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
      }
      uVar1 = DAT_01059548[0x20] & 1U | 4;
      if (DAT_010593c0 != uVar1) {
        DAT_010593c0 = uVar1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,uVar1);
      }
      if (DAT_01058f4c != 3) {
        DAT_01058f4c = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
      }
      if (DAT_01058f50 != 3) {
        DAT_01058f50 = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
      }
      if (DAT_010593e8 != 0x20000) {
        DAT_010593e8 = 0x20000;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,0x20000);
      }
      if (DAT_0105941c != 2) {
        DAT_0105941c = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,2);
      }
      iVar2 = *g_pDirect3DDevice;
      iVar3 = Camera_GetCachedTransform((int)DAT_01059548);
      (**(code **)(iVar2 + 0xb0))(g_pDirect3DDevice,0x11,iVar3);
      if (*DAT_01059548 == 0) {
        (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x104))
                  (g_pDirect3DDevice,1,*(undefined4 *)(*DAT_01059548 + 0x24));
      }
      if (DAT_01059444 != 1) {
        DAT_01059444 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
      }
      if (DAT_01059450 != 1) {
        DAT_01059450 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,4,1);
        return;
      }
    }
    break;
  case '\x04':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 2) {
      DAT_01059348 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,2);
    }
    if (DAT_0105934c != 0) {
      DAT_0105934c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,0);
    }
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if ((param_1[4] & 0x4000000U) == 0) {
      if (DAT_010593c0 != 1) {
        DAT_010593c0 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
      }
      if (DAT_010593cc != 1) {
        DAT_010593cc = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
      }
    }
    else {
      if (DAT_010593e8 != 1) {
        DAT_010593e8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
      }
      if (DAT_0105941c != 0) {
        DAT_0105941c = 0;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
      }
      if (DAT_010593c4 != 2) {
        DAT_010593c4 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
      }
      if (DAT_010593c8 != 1) {
        DAT_010593c8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
      }
      if (DAT_010593c0 != 5) {
        DAT_010593c0 = 5;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,5);
      }
      if (DAT_010593cc != 1) {
        DAT_010593cc = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
      }
      if (DAT_01058f4c != 3) {
        DAT_01058f4c = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
      }
      if (DAT_01058f50 != 3) {
        DAT_01058f50 = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
      }
      if (param_1[7] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[7] + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
      if (DAT_01059444 != 1) {
        DAT_01059444 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
      }
      if (DAT_01059450 != 1) {
        DAT_01059450 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,4,1);
      }
    }
    goto LAB_009947b5;
  case '\x05':
    bVar5 = (byte)((uint)param_1[4] >> 0x1a) & 1;
    if (((DAT_0105be89 != '\0') && (param_1[6] != 0)) && ((*(byte *)(param_1[6] + 0x54) & 1) != 0))
    {
      bVar5 = 0;
    }
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 2) {
      DAT_01059348 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,2);
    }
    if (DAT_0105934c != 2) {
      DAT_0105934c = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,2);
    }
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if (DAT_01059548 == (int *)0x0) {
      if (bVar5 == 0) {
        if (DAT_010593c0 != 1) {
          DAT_010593c0 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
        }
        if (DAT_010593cc == 1) goto LAB_009947b5;
        DAT_010593cc = 1;
        uVar8 = 1;
      }
      else {
        if (DAT_010593d0 != 1) {
          DAT_010593d0 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,5,1);
        }
        if (DAT_010593cc != 2) {
          DAT_010593cc = 2;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,2);
        }
        if (DAT_010593c4 != 2) {
          DAT_010593c4 = 2;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
        }
        if (DAT_010593c8 != 1) {
          DAT_010593c8 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
        }
        if (DAT_010593c0 != 5) {
          DAT_010593c0 = 5;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,5);
        }
        if (DAT_01058f4c != 3) {
          DAT_01058f4c = 3;
          (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
        }
        if (DAT_01058f50 != 3) {
          DAT_01058f50 = 3;
          (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
        }
        if (DAT_0105941c != 0) {
          DAT_0105941c = 0;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
        }
        if (DAT_010593e8 != 1) {
          DAT_010593e8 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
        }
        if (param_1[7] == 0) {
          (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
        }
        else {
          (**(code **)(*g_pDirect3DDevice + 0x104))
                    (g_pDirect3DDevice,1,*(undefined4 *)(param_1[7] + 0x24));
        }
        if (DAT_01059444 != 1) {
          DAT_01059444 = 1;
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
        }
        if (DAT_01059450 == 1) goto LAB_009947b5;
        DAT_01059450 = 1;
        uVar8 = 2;
      }
    }
    else {
      if (DAT_010593d0 != 1) {
        DAT_010593d0 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,5,1);
      }
      if (DAT_010593cc != 2) {
        DAT_010593cc = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,2);
      }
      if (DAT_010593c4 != 2) {
        DAT_010593c4 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
      }
      if (DAT_010593c8 != 1) {
        DAT_010593c8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
      }
      uVar1 = DAT_01059548[0x20] & 1U | 4;
      if (DAT_010593c0 != uVar1) {
        DAT_010593c0 = uVar1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,uVar1);
      }
      if (DAT_01058f4c != 3) {
        DAT_01058f4c = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
      }
      if (DAT_01058f50 != 3) {
        DAT_01058f50 = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
      }
      if (DAT_010593e8 != 0x20000) {
        DAT_010593e8 = 0x20000;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,0x20000);
      }
      if (DAT_0105941c != 2) {
        DAT_0105941c = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,2);
      }
      iVar2 = *g_pDirect3DDevice;
      iVar3 = Camera_GetCachedTransform((int)DAT_01059548);
      (**(code **)(iVar2 + 0xb0))(g_pDirect3DDevice,0x11,iVar3);
      if (*DAT_01059548 == 0) {
        (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x104))
                  (g_pDirect3DDevice,1,*(undefined4 *)(*DAT_01059548 + 0x24));
      }
      if (DAT_01059444 != 1) {
        DAT_01059444 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
      }
      if (DAT_01059450 == 1) goto LAB_009947b5;
      DAT_01059450 = 1;
      uVar8 = 2;
    }
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,uVar8,4,1);
    goto LAB_009947b5;
  case '\x06':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 4) {
      DAT_01059348 = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,4);
    }
    if (DAT_0105934c != 0) {
      DAT_0105934c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,0);
    }
    if (DAT_01059350 != 2) {
      DAT_01059350 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,6,2);
    }
    if (DAT_010593c0 != 1) {
      DAT_010593c0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
    }
    if (DAT_010593cc != 1) {
      DAT_010593cc = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
    }
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
      return;
    }
    break;
  case '\a':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,4);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,4);
    FUN_00991040(0,5,0);
    FUN_00991040(0,6,2);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,2);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    return;
  case '\b':
  case '\x19':
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,1);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,1);
    FUN_00888020(0x14,3);
    return;
  case '\t':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,1);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,9);
    FUN_00888020(0x14,3);
    return;
  case '\n':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,1);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,0xb,1);
    FUN_00991040(1,0x18,0);
    FUN_00991040(1,1,2);
    FUN_00991040(1,2,2);
    FUN_00991040(1,4,2);
    FUN_00991040(1,5,1);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00888020(0x13,1);
    FUN_00888020(0x14,3);
    return;
  case '\v':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,5,2);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,2);
    FUN_00991040(1,6,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(1,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    return;
  case '\f':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,4);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,5,0);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,2);
    FUN_00991040(1,6,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(1,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    return;
  case '\r':
  case '(':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,5,2);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,2);
    FUN_00991040(1,5,2);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(1,0xb,1);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    return;
  case '\x0e':
    bVar5 = *(byte *)((int)param_1 + 0xe);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,1);
    uVar1 = (uint)bVar5;
    iVar2 = 1;
    if (1 < uVar1) {
      do {
        FUN_00991040(iVar2,1,4);
        FUN_00991040(iVar2,2,1);
        FUN_00991040(iVar2,3,2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
    if (uVar1 < DAT_0105c9a4) {
      FUN_00991040(uVar1,1,1);
      FUN_00991040(uVar1,4,1);
    }
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,1);
    FUN_00888020(0x14,3);
    return;
  case '\x0f':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,0xb,0x20000);
    FUN_00991040(0,0x18,2);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    return;
  case '\x10':
    FUN_00888020(0x1b,1);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,0xb,0x30000);
    FUN_00991040(0,0x18,3);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,&DAT_00e67688);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    if (DAT_01059548 == (int *)0x0) {
      FUN_00991040(1,1,1);
      iVar2 = 1;
    }
    else {
      FUN_00991040(1,2,2);
      FUN_00991040(1,3,1);
      FUN_00991040(1,1,DAT_01059548[0x20] & 1U | 4);
      FUN_00991040(1,4,2);
      FUN_00991040(1,5,1);
      FUN_007bd7b0(1,1,3);
      FUN_007bd7b0(1,2,3);
      FUN_00991040(1,0xb,0x20000);
      FUN_00991040(1,0x18,2);
      iVar2 = *g_pDirect3DDevice;
      iVar3 = Camera_GetCachedTransform((int)DAT_01059548);
      (**(code **)(iVar2 + 0xb0))(g_pDirect3DDevice,0x11,iVar3);
      if (*DAT_01059548 == 0) {
        (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
        FUN_00991040(2,1,1);
        iVar2 = 2;
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x104))
                  (g_pDirect3DDevice,1,*(undefined4 *)(*DAT_01059548 + 0x24));
        FUN_00991040(2,1,1);
        iVar2 = 2;
      }
    }
    FUN_00991040(iVar2,4,1);
    goto LAB_009947b5;
  case '\x11':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,5,2);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,2);
    FUN_00991040(1,6,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0x30000);
    FUN_00991040(0,0x18,3);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,&DAT_00e67688);
    FUN_00991040(1,0xb,0);
    FUN_00991040(1,0x18,0);
    FUN_007bd7b0(1,1,1);
    FUN_007bd7b0(1,2,1);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    return;
  case '\x12':
    FUN_00888020(0x1b,1);
    bVar5 = *(byte *)((int)param_1 + 0xf);
    if ((int)(uint)bVar5 < 0) {
      bVar5 = 0;
    }
    else if (0xff < bVar5) {
      bVar5 = 0xff;
    }
    uStack_44 = CONCAT13(bVar5,0xff0000);
    uStack_44 = CONCAT22(uStack_44._2_2_,0xff00);
    uStack_44 = CONCAT31(uStack_44._1_3_,0xff);
    FUN_00888020(0x3c,uStack_44);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,0xb,0x30000);
    FUN_00991040(0,0x18,3);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,&DAT_00e67688);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,1,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,1);
    FUN_00991040(1,6,3);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    return;
  case '\x13':
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,0);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,1);
    FUN_00888020(0x14,3);
    return;
  case '\x14':
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,0);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,0);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,3);
    FUN_00888020(0x14,4);
    return;
  case '\x15':
  case '\x16':
    if (DAT_0105954c != (int *)0x0) {
      if (DAT_01059550 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(DAT_01059550 + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
      if (param_1[6] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[6] + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
      if (param_1[6] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[6] + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,2,uVar8);
      FUN_007bd7b0(1,1,1);
      FUN_007bd7b0(1,2,1);
      FUN_00991040(0,7,*DAT_0105954c);
      FUN_00991040(0,8,DAT_0105954c[1]);
      FUN_00991040(0,9,DAT_0105954c[3]);
      FUN_00991040(0,10,DAT_0105954c[4]);
      FUN_00991040(0,1,0x16);
      FUN_00991040(0,2,2);
      FUN_00991040(0,3,1);
      FUN_00991040(0,4,2);
      FUN_00991040(0,5,1);
      FUN_00991040(0,0xb,0x20000);
      FUN_00991040(0,0x18,2);
      FUN_00991040(1,1,2);
      FUN_00991040(1,2,2);
      FUN_00991040(1,4,2);
      FUN_00991040(1,5,1);
      FUN_00991040(1,0xb,0x20000);
      FUN_00991040(1,0x18,2);
      FUN_00991040(2,1,2);
      FUN_00991040(2,2,1);
      FUN_00991040(2,4,2);
      FUN_00991040(2,5,2);
      FUN_00991040(2,0xb,0);
      FUN_00991040(2,0x18,0);
      if ((char)param_1[3] == '\x15') {
        FUN_00888020(0x3c,DAT_0105954c[0x4e]);
        FUN_00991040(3,4,4);
        FUN_00991040(3,5,1);
        FUN_00991040(3,6,3);
        FUN_00991040(3,1,2);
        FUN_00991040(3,2,1);
      }
      else {
        if (param_1[7] == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1[7] + 0x24);
        }
        (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,3,uVar8);
        FUN_00991040(3,4,2);
        FUN_00991040(3,5,1);
        FUN_00991040(3,1,4);
        FUN_00991040(3,2,2);
        FUN_00991040(3,3,1);
        FUN_00991040(3,0xb,1);
        FUN_00991040(3,0x18,0);
      }
      FUN_00991040(4,1,1);
      FUN_00991040(4,4,1);
      if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
        (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,DAT_0105954c + 0xc);
        piVar4 = DAT_0105954c + 0x1c;
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,DAT_0105954c + 0x2c);
        piVar4 = DAT_0105954c + 0x3c;
      }
      (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x11,piVar4);
      goto LAB_009947b5;
    }
    break;
  case '\x18':
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (DAT_0105933c != 2) {
      DAT_0105933c = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,2);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059348 != 2) {
      DAT_01059348 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,2);
    }
    if (DAT_0105934c != 0) {
      DAT_0105934c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,0);
    }
    puVar6 = &DAT_0105c328;
    puVar7 = (undefined4 *)&stack0xffffffb4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00990f90(&stack0xffffffb4,0.083333336);
    if (DAT_01059364 != 0x20000) {
      DAT_01059364 = 0x20000;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0x20000);
    }
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,&stack0xffffffb4);
    if (DAT_01059398 != 2) {
      DAT_01059398 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,2);
    }
    if ((param_1[4] & 0x4000000U) == 0) {
      if (DAT_010593c0 != 1) {
        DAT_010593c0 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
      }
      if (DAT_010593cc != 1) {
        DAT_010593cc = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
        return;
      }
    }
    else {
      if (DAT_010593c4 != 2) {
        DAT_010593c4 = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
      }
      if (DAT_010593c8 != 1) {
        DAT_010593c8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
      }
      if (DAT_010593c0 != 5) {
        DAT_010593c0 = 5;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,5);
      }
      if (DAT_01058f4c != 3) {
        DAT_01058f4c = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
      }
      if (DAT_01058f50 != 3) {
        DAT_01058f50 = 3;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
      }
      if (DAT_0105941c != 0) {
        DAT_0105941c = 0;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
      }
      if (DAT_010593e8 != 1) {
        DAT_010593e8 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
      }
      if (param_1[7] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[7] + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
      if (DAT_010593cc != 2) {
        DAT_010593cc = 2;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,2);
      }
      if (DAT_010593d0 != 1) {
        DAT_010593d0 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,5,1);
      }
      if (DAT_01059444 != 1) {
        DAT_01059444 = 1;
        (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
        return;
      }
    }
    break;
  case '\x1a':
    FUN_00888020(0x1b,1);
    FUN_00888020(0x3c,param_1[1]);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(0,1,4);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    if (DAT_01059548 == (int *)0x0) {
      FUN_00991040(1,1,2);
      FUN_00991040(1,2,1);
      FUN_00991040(1,4,4);
      FUN_00991040(1,5,1);
      FUN_00991040(1,6,3);
      FUN_00991040(2,1,1);
      FUN_00991040(2,4,1);
    }
    else {
      FUN_00991040(1,2,2);
      FUN_00991040(1,3,1);
      FUN_00991040(1,1,DAT_01059548[0x20] & 1U | 4);
      FUN_007bd7b0(1,1,3);
      FUN_007bd7b0(1,2,3);
      FUN_00991040(1,0xb,0x20000);
      FUN_00991040(1,0x18,2);
      iVar2 = *g_pDirect3DDevice;
      iVar3 = Camera_GetCachedTransform((int)DAT_01059548);
      (**(code **)(iVar2 + 0xb0))(g_pDirect3DDevice,0x11,iVar3);
      if (*DAT_01059548 == 0) {
        (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x104))
                  (g_pDirect3DDevice,1,*(undefined4 *)(*DAT_01059548 + 0x24));
      }
      FUN_00991040(1,4,4);
      FUN_00991040(1,5,1);
      FUN_00991040(1,6,3);
      FUN_00991040(2,1,1);
      FUN_00991040(2,4,1);
    }
    goto LAB_009947b5;
  case '\x1b':
    FUN_00888020(0x1b,1);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,1);
    FUN_00888020(0x14,2);
    return;
  case '\x1c':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    if (DAT_0105933c != 2) {
      DAT_0105933c = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,2);
    }
    if (DAT_01059340 != 0) {
      DAT_01059340 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,0);
    }
    if (DAT_01059348 != 4) {
      DAT_01059348 = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,4);
    }
    if (DAT_0105934c != 2) {
      DAT_0105934c = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,2);
    }
    if (DAT_01059350 != 0) {
      DAT_01059350 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,6,0);
    }
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if (DAT_010593c0 != 1) {
      DAT_010593c0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,1);
    }
    if (DAT_010593cc != 1) {
      DAT_010593cc = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,1);
    }
LAB_009947b5:
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    return;
  case '\x1d':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0xb,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(1,1,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,1);
    FUN_00991040(1,6,2);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    return;
  case '\x1e':
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,4);
    FUN_00991040(0,2,2);
    FUN_00991040(0,2,0);
    FUN_00991040(0,4,4);
    FUN_00991040(0,5,2);
    FUN_00991040(0,6,0);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    return;
  case '\x1f':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,2);
    FUN_00991040(1,1,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,1);
    FUN_00991040(1,6,2);
    FUN_00991040(1,0xb,1);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_007bd7b0(1,1,3);
    FUN_007bd7b0(1,2,3);
    return;
  case ' ':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,4);
    FUN_00991040(0,5,0);
    FUN_00991040(0,6,2);
    FUN_00991040(1,1,4);
    FUN_00991040(1,2,1);
    FUN_00991040(1,3,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,1);
    FUN_00991040(1,6,2);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0xb,1);
    FUN_00991040(1,0x18,0);
    return;
  case '!':
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,0);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,0);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,2);
    FUN_00888020(0x14,1);
    return;
  case '\"':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,5,0);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,2);
    FUN_00991040(1,6,1);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0xb,0);
    FUN_00991040(1,0x18,0);
    return;
  case '#':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    FUN_00888020(0x3c,*param_1);
    if (DAT_0105933c != 3) {
      DAT_0105933c = 3;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,3);
    }
    if (DAT_01059344 != 3) {
      DAT_01059344 = 3;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,3);
    }
    if (DAT_01059348 != 4) {
      DAT_01059348 = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,4);
    }
    if (DAT_0105934c != 3) {
      DAT_0105934c = 3;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,3);
    }
    if (DAT_01059350 != 2) {
      DAT_01059350 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,6,2);
    }
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    return;
  case '$':
    if (param_1[6] == 0) {
      uVar8 = *(undefined4 *)(DAT_01058f08 + 0x24);
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    if (DAT_0105956c == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(DAT_0105956c + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 4) {
      DAT_01059348 = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,4);
    }
    if (DAT_0105934c != 0) {
      DAT_0105934c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,5,0);
    }
    if (DAT_01059350 != 2) {
      DAT_01059350 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,6,2);
    }
    if (DAT_010593c0 != 2) {
      DAT_010593c0 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,2);
    }
    if (DAT_010593c4 != 1) {
      DAT_010593c4 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,1);
    }
    if (DAT_010593cc != 4) {
      DAT_010593cc = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,4,4);
    }
    if (DAT_010593d0 != 1) {
      DAT_010593d0 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,5,1);
    }
    if (DAT_010593d4 != 2) {
      DAT_010593d4 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,6,2);
    }
    if (DAT_01059444 != 1) {
      DAT_01059444 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
    }
    if (DAT_01059450 != 1) {
      DAT_01059450 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,4,1);
    }
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if (DAT_010593e8 != 1) {
      DAT_010593e8 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
    }
    if (DAT_0105941c != 0) {
      DAT_0105941c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
    }
    if (DAT_01058f4c != 3) {
      DAT_01058f4c = 3;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
    }
    if (DAT_01058f50 != 3) {
      DAT_01058f50 = 3;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
      return;
    }
    break;
  case '%':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,1,*(undefined4 *)(param_1[7] + 0x24));
    }
    FUN_00991040(0,1,4);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,2);
    FUN_00991040(0,5,0);
    FUN_00991040(1,1,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,1);
    FUN_00991040(1,6,2);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(1,0xb,0);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    FUN_007bd7b0(1,1,~(((uint)param_1[4] >> 0x1b) << 1) & 2 | 1);
    FUN_007bd7b0(1,2,~(((uint)param_1[4] >> 0x1c) << 1) & 2 | 1);
    return;
  case '&':
    FUN_00888020(0x1b,0);
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (DAT_01059364 != 0) {
      DAT_01059364 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0);
    }
    if (DAT_01059398 != 0) {
      DAT_01059398 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,0);
    }
    if (DAT_0105933c != 4) {
      DAT_0105933c = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,1,4);
    }
    if (DAT_01059340 != 2) {
      DAT_01059340 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,2,2);
    }
    if (DAT_01059344 != 0) {
      DAT_01059344 = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,3,0);
    }
    if (DAT_01059348 != 1) {
      DAT_01059348 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,4,1);
    }
    if (DAT_010593c4 != 2) {
      DAT_010593c4 = 2;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,2,2);
    }
    if (DAT_010593c8 != 1) {
      DAT_010593c8 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,3,1);
    }
    if (DAT_010593c0 != 4) {
      DAT_010593c0 = 4;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,1,4);
    }
    if (DAT_01058f4c != 3) {
      DAT_01058f4c = 3;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,1,3);
    }
    if (DAT_01058f50 != 3) {
      DAT_01058f50 = 3;
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,1,2,3);
    }
    if (DAT_0105941c != 0) {
      DAT_0105941c = 0;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0x18,0);
    }
    if (DAT_010593e8 != 1) {
      DAT_010593e8 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,1,0xb,1);
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    if (DAT_01059444 != 1) {
      DAT_01059444 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,1,1);
    }
    if (DAT_01059450 != 1) {
      DAT_01059450 = 1;
      (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,2,4,1);
      return;
    }
    break;
  case '\'':
    FUN_00888020(0x1b,0);
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    FUN_00991040(0,0xb,0x20000);
    FUN_00991040(0,0x18,2);
    FUN_009e4f40(12.0);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,4,1);
    if (DAT_0105be08 != 0) {
      FUN_00991040(1,2,2);
      FUN_00991040(1,3,1);
      FUN_00991040(1,1,5);
      FUN_007bd7b0(1,1,3);
      FUN_007bd7b0(1,2,3);
      FUN_00991040(1,0x18,0);
      FUN_00991040(1,0xb,1);
      FUN_00991040(1,4,1);
      if (param_1[7] == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(param_1[7] + 0x24);
      }
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
      FUN_00991040(2,1,1);
      FUN_00991040(2,4,1);
      return;
    }
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    break;
  case ')':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    if (param_1[7] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[7] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,1,uVar8);
    FUN_00991040(0,1,2);
    FUN_00991040(0,2,2);
    FUN_00991040(0,5,2);
    FUN_00991040(0,4,2);
    FUN_00991040(1,2,1);
    FUN_00991040(1,1,2);
    FUN_00991040(1,4,4);
    FUN_00991040(1,5,2);
    FUN_00991040(1,6,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(1,0xb,1);
    FUN_00991040(0,0x18,0);
    FUN_00991040(1,0x18,0);
    FUN_00991040(2,1,1);
    FUN_00991040(2,4,1);
    return;
  case '*':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,DAT_00e67548);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,DAT_00e67550);
    FUN_00991040(0,5,0);
    FUN_00991040(0,6,2);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0xab,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,5);
    FUN_00888020(0x14,6);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    return;
  case '+':
    if (param_1[6] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(param_1[6] + 0x24);
    }
    (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,uVar8);
    FUN_00991040(0,1,DAT_00e6754c);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,1);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0xab,1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,2);
    FUN_00888020(0x14,2);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    return;
  case ',':
  case '-':
    if (param_1[6] == 0) {
      (**(code **)(*g_pDirect3DDevice + 0x104))(g_pDirect3DDevice,0,0);
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x104))
                (g_pDirect3DDevice,0,*(undefined4 *)(param_1[6] + 0x24));
    }
    iVar2 = param_1[3];
    FUN_00991040(0,1,6);
    FUN_00991040(0,2,2);
    FUN_00991040(0,3,0);
    FUN_00991040(0,4,1);
    FUN_00991040(1,1,1);
    FUN_00991040(1,4,1);
    FUN_00888020(0xab,(uint)((char)iVar2 != ',') * 2 + 1);
    FUN_00888020(0x1b,1);
    FUN_00888020(0x13,2);
    FUN_00888020(0x14,4);
    FUN_00991040(0,0xb,0);
    FUN_00991040(0,0x18,0);
    return;
  }
  return;
}


//// FUNCTION FUN_00994bc0 @ 00994bc0 ////

void __thiscall FUN_00994bc0(void *this,int param_1)

{
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  *(int *)((int)this + 0x1c) = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return;
}


//// FUNCTION Engine_SetResourceReference @ 00994bf0 ////

void __thiscall Engine_SetResourceReference(void *this,int param_1)

{
  int iVar1;
  
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar1 = DAT_01059558;
    if ((((char)*(uint *)(param_1 + 0x54) < '\0') ||
        (iVar1 = DAT_01059554, (*(uint *)(param_1 + 0x54) & 0x40) != 0)) &&
       (*(undefined1 *)((int)this + 0xc) = 0x25, *(int *)((int)this + 0x1c) != iVar1)) {
      FUN_00994bc0(this,iVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00994c40 @ 00994c40 ////

void __thiscall FUN_00994c40(void *this,char param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if (*(int *)((int)this + 0x20) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x18);
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x20);
    *(undefined4 *)((int)this + 0x20) = uVar1;
    if (param_1 != '\0') {
      cVar2 = *(char *)((int)this + 0xc);
      *(char *)((int)this + 0xd) = cVar2;
      if ((cVar2 == '\x03') || (cVar2 == '\x05')) {
        cVar2 = '\x1a';
      }
      else if (cVar2 == '\x1a') {
        *(undefined1 *)((int)this + 0xc) = 5;
        return;
      }
      *(char *)((int)this + 0xc) = cVar2;
      return;
    }
    *(undefined1 *)((int)this + 0xc) = *(undefined1 *)((int)this + 0xd);
  }
  return;
}


//// FUNCTION FUN_00994ca0 @ 00994ca0 ////

void __thiscall FUN_00994ca0(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)this + 0x20);
  if (pvVar1 != param_1) {
    if (pvVar1 != (void *)0x0) {
      FUN_0099b400(pvVar1);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    *(void **)((int)this + 0x20) = param_1;
    if (param_1 != (void *)0x0) {
      *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00994cd0 @ 00994cd0 ////

void __thiscall
FUN_00994cd0(void *this,int param_1,float param_2,float param_3,undefined4 param_4,float param_5,
            float param_6)

{
  if (DAT_0105956c != (void *)0x0) {
    FUN_0099b400(DAT_0105956c);
  }
  DAT_0105956c = (void *)param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  *(float *)this = -param_2;
  *(float *)((int)this + 4) = -param_3;
  *(float *)((int)this + 8) = 1.0 / (param_5 - param_2);
  *(float *)((int)this + 0xc) = 1.0 / (param_6 - param_3);
  return;
}


//// FUNCTION FUN_00994d50 @ 00994d50 ////

void __fastcall FUN_00994d50(undefined4 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0x3f800000;
  param_1[4] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x2b] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x3b] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x4b] = 0x3f800000;
  param_1[0x46] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  param_1[0x3c] = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x139) = 0xff;
  *(undefined1 *)((int)param_1 + 0x13a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x13b) = 0xff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0xff000000;
  DAT_01059550 = 0;
  return;
}


//// FUNCTION Renderer_InitDeviceStateAndResources @ 00994f10 ////

/* WARNING: Removing unreachable block (ram,0x009950ee) */

void Renderer_InitDeviceStateAndResources(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_48;
  undefined4 auStack_44 [17];
  
  iVar5 = 0;
  puVar4 = &DAT_01059338;
  do {
    iVar6 = 0;
    puVar9 = puVar4;
    do {
      cVar1 = (&DAT_00e67558)[iVar6];
      *puVar9 = 0xffffffff;
      local_48 = 0;
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*g_pDirect3DDevice + 0x108))(g_pDirect3DDevice,iVar5,iVar6,&local_48);
        if ((iVar3 == 0) && (*puVar9 = local_48, 0x1059547 < (int)puVar4)) {
          (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,iVar5,iVar6,local_48);
        }
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar6 < 0x21);
    puVar4 = puVar4 + 0x21;
    iVar5 = iVar5 + 1;
  } while ((int)puVar4 < 0x1059548);
  iVar5 = 0;
  do {
    cVar1 = (&DAT_00e67580)[iVar5];
    (&DAT_01058ff0)[iVar5] = 0xffffffff;
    local_48 = 0;
    if (cVar1 != '\0') {
      iVar6 = (**(code **)(*g_pDirect3DDevice + 0xe8))(g_pDirect3DDevice,iVar5,&local_48);
      if (iVar6 == 0) {
        (&DAT_01058ff0)[iVar5] = local_48;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd2);
  iVar5 = 0;
  puVar4 = &DAT_01058f10;
  do {
    iVar6 = 0;
    puVar9 = puVar4;
    do {
      cVar1 = (&DAT_00e67654)[iVar6];
      *puVar9 = 0xffffffff;
      local_48 = 0;
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*g_pDirect3DDevice + 0x110))(g_pDirect3DDevice,iVar5,iVar6,&local_48);
        if ((iVar3 == 0) && (*puVar9 = local_48, 0x1058fef < (int)puVar4)) {
          (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar5,iVar6,local_48);
        }
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar6 < 0xe);
    puVar4 = puVar4 + 0xe;
    iVar5 = iVar5 + 1;
  } while ((int)puVar4 < 0x1058ff0);
  if (DAT_01059048 != 1) {
    DAT_01059048 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x16,1);
  }
  if (DAT_0105900c != 1) {
    DAT_0105900c = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,7,1);
  }
  if (DAT_0105904c != 4) {
    DAT_0105904c = 4;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x17,4);
  }
  piVar7 = &DAT_01058f28;
  iVar5 = 0;
  local_48 = 0xbf800000;
  do {
    piVar2 = g_pDirect3DDevice;
    if (piVar7[1] != 1) {
      piVar7[1] = 1;
      (**(code **)(*piVar2 + 0x114))(piVar2,iVar5,7,1);
    }
    piVar2 = g_pDirect3DDevice;
    if ((int)piVar7 < 0x1059008) {
      if (*piVar7 != 2) {
        *piVar7 = 2;
        (**(code **)(*piVar2 + 0x114))(piVar2,iVar5,6,2);
      }
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar5,6,2);
    }
    piVar2 = g_pDirect3DDevice;
    if ((int)piVar7 < 0x1059008) {
      if (piVar7[-1] != 2) {
        piVar7[-1] = 2;
        (**(code **)(*piVar2 + 0x114))(piVar2,iVar5,5,2);
      }
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar5,5,2);
    }
    piVar2 = g_pDirect3DDevice;
    if ((int)piVar7 < 0x1059008) {
      if (piVar7[2] != -0x40800000) {
        piVar7[2] = -0x40800000;
        (**(code **)(*piVar2 + 0x114))(piVar2,iVar5,8,0xbf800000);
      }
    }
    else {
      (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar5,8,0xbf800000);
    }
    piVar7 = piVar7 + 0xe;
    iVar5 = iVar5 + 1;
  } while ((int)piVar7 < 0x1059008);
  if (DAT_01058f14 != 1) {
    DAT_01058f14 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,1,1);
  }
  if (DAT_01058f18 != 1) {
    DAT_01058f18 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,2,1);
  }
  if (DAT_0105921c != 0) {
    DAT_0105921c = 0;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x8b,0);
  }
  if (DAT_01059054 != 5) {
    DAT_01059054 = 5;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x19,5);
  }
  if (DAT_01059050 != 100) {
    DAT_01059050 = 100;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x18,100);
  }
  uVar8 = 1;
  if (1 < DAT_0105c9a4) {
    piVar7 = &DAT_01058f50;
    do {
      piVar2 = g_pDirect3DDevice;
      if ((int)piVar7 < 0x1058ff8) {
        if (piVar7[-1] != 3) {
          piVar7[-1] = 3;
          (**(code **)(*piVar2 + 0x114))(piVar2,uVar8,1,3);
        }
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,uVar8,1,3);
      }
      piVar2 = g_pDirect3DDevice;
      if ((int)piVar7 < 0x1058ff8) {
        if (*piVar7 != 3) {
          *piVar7 = 3;
          (**(code **)(*piVar2 + 0x114))(piVar2,uVar8,2,3);
        }
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,uVar8,2,3);
      }
      piVar2 = g_pDirect3DDevice;
      if ((int)piVar7 < 0x1058ff8) {
        if (piVar7[5] != 1) {
          piVar7[5] = 1;
          (**(code **)(*piVar2 + 0x114))(piVar2,uVar8,7,1);
        }
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,uVar8,7,1);
      }
      piVar2 = g_pDirect3DDevice;
      if ((int)piVar7 < 0x1058ff8) {
        if (piVar7[4] != 2) {
          piVar7[4] = 2;
          (**(code **)(*piVar2 + 0x114))(piVar2,uVar8,6,2);
        }
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,uVar8,6,2);
      }
      piVar2 = g_pDirect3DDevice;
      if ((int)piVar7 < 0x1058ff8) {
        if (piVar7[3] != 2) {
          piVar7[3] = 2;
          (**(code **)(*piVar2 + 0x114))(piVar2,uVar8,5,2);
        }
      }
      else {
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,uVar8,5,2);
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 0xe;
    } while (uVar8 < DAT_0105c9a4);
  }
  puVar4 = operator_new(0x13c);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_0105954c = 0;
  }
  else {
    DAT_0105954c = FUN_00994d50(puVar4);
  }
  if (DAT_0105be80 == '\0') {
    if ((DAT_0105ca74 & 0x10) != 0) {
      DAT_01059550 = FUN_0099bb50("Water.raw",0x3c,0,0,'\0');
    }
    DAT_01058f08 = FUN_0099bb50("dummy.dds",0,0,0,'\0');
    DAT_01059558 = FUN_0099bb50("thumbmask_128x128.dds",0,0,0,'\0');
    DAT_01059554 = FUN_0099bb50("thumbmask_256x128.dds",0,0,0,'\0');
  }
  else {
    DAT_01058f08 = (void *)0x0;
    DAT_01059550 = (void *)0x0;
    DAT_01059554 = (void *)0x0;
    DAT_01059558 = (void *)0x0;
  }
  puVar4 = auStack_44;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  auStack_44[4] = 0x3f800000;
  auStack_44[0] = 0x3f800000;
  auStack_44[5] = 0x3f800000;
  auStack_44[1] = 0x3f800000;
  auStack_44[6] = 0x3f800000;
  auStack_44[2] = 0x3f800000;
  auStack_44[7] = 0x3f800000;
  auStack_44[3] = 0x3f800000;
  (**(code **)(*g_pDirect3DDevice + 0xc4))(g_pDirect3DDevice,auStack_44);
  return;
}


//// FUNCTION FUN_009954e0 @ 009954e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009954e0(void)

{
  void *_Memory;
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_0105c404;
  fVar1 = DAT_0105c400;
  if (DAT_0105956c != (void *)0x0) {
    FUN_0099b400(DAT_0105956c);
  }
  DAT_0105956c = (void *)0x0;
  _DAT_0105955c = 0x80000000;
  _DAT_01059560 = 0x80000000;
  _DAT_01059564 = 1.0 / (fVar1 - 0.0);
  _DAT_01059568 = 1.0 / (fVar2 - 0.0);
  if (DAT_01059550 != (void *)0x0) {
    FUN_0099b400(DAT_01059550);
    DAT_01059550 = (void *)0x0;
  }
  _Memory = DAT_0105954c;
  if (DAT_0105954c != (void *)0x0) {
    if (DAT_01059550 != (void *)0x0) {
      FUN_0099b400(DAT_01059550);
      DAT_01059550 = (void *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105954c = (void *)0x0;
  if (DAT_01058f08 != (void *)0x0) {
    FUN_0099b400(DAT_01058f08);
    DAT_01058f08 = (void *)0x0;
  }
  if (DAT_01059558 != (void *)0x0) {
    FUN_0099b400(DAT_01059558);
    DAT_01059558 = (void *)0x0;
  }
  if (DAT_01059554 != (void *)0x0) {
    FUN_0099b400(DAT_01059554);
    DAT_01059554 = (void *)0x0;
  }
  return;
}


//// FUNCTION FUN_00995640 @ 00995640 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00995640(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40 [16];
  
  if (DAT_0105954c != (float *)0x0) {
    _DAT_01059570 = (float)DAT_0105becc * 0.004 + _DAT_01059570;
    if (1000.0 < _DAT_01059570) {
      _DAT_01059570 = _DAT_01059570 - ABS(_DAT_01059570);
    }
    fVar4 = (float10)fcos((float10)_DAT_01059570);
    *DAT_0105954c = (float)(fVar4 * (float10)0.25);
    fVar5 = (float10)fsin((float10)_DAT_01059570);
    DAT_0105954c[1] = (float)-(fVar5 * (float10)0.25);
    DAT_0105954c[3] = (float)(fVar5 * (float10)0.25);
    DAT_0105954c[4] = (float)(fVar4 * (float10)0.25);
    local_4c = DAT_0105954c[0x4c];
    local_48 = DAT_0105954c[0x4c];
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_50 = 0x3f800000;
    local_60 = 0x3f800000;
    local_70 = 0x3f800000;
    local_44 = 0;
    FUN_0097eb80(&local_70,0.2);
    FUN_009aa310(local_40,&local_70);
    pfVar2 = local_40;
    pfVar3 = DAT_0105954c + 0xc;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    FUN_009aad40(DAT_0105954c + 0xc,(float *)&DAT_0105c328);
    local_4c = DAT_0105954c[0x4d];
    local_48 = DAT_0105954c[0x4d];
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_50 = 0x3f800000;
    local_60 = 0x3f800000;
    local_70 = 0x3f800000;
    local_44 = 0;
    FUN_0097eb80(&local_70,0.02);
    FUN_009aa310(local_40,&local_70);
    pfVar2 = local_40;
    pfVar3 = DAT_0105954c + 0x1c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    FUN_009aad40(DAT_0105954c + 0x1c,(float *)&DAT_0105c328);
    local_44 = 0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_50 = 0x3e4ccccd;
    local_60 = 0x3e4ccccd;
    local_70 = 0x3e4ccccd;
    FUN_009aa310(local_40,&local_70);
    pfVar2 = local_40;
    pfVar3 = DAT_0105954c + 0x2c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    FUN_009aad40(DAT_0105954c + 0x2c,(float *)&DAT_0105c328);
    local_44 = 0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_50 = 0x3ca3d70a;
    local_60 = 0x3ca3d70a;
    local_70 = 0x3ca3d70a;
    FUN_009aa310(local_40,&local_70);
    pfVar2 = local_40;
    pfVar3 = DAT_0105954c + 0x3c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    FUN_009aad40(DAT_0105954c + 0x3c,(float *)&DAT_0105c328);
    DAT_0105954c[0x4c] = (float)DAT_0105becc * 9e-05 + DAT_0105954c[0x4c];
    if (1.0 < DAT_0105954c[0x4c]) {
      DAT_0105954c[0x4c] = DAT_0105954c[0x4c] - ABS(DAT_0105954c[0x4c]);
    }
    DAT_0105954c[0x4d] = (float)DAT_0105becc * 6.6666666e-06 + DAT_0105954c[0x4d];
    if (1.0 < DAT_0105954c[0x4d]) {
      DAT_0105954c[0x4d] = -ABS(DAT_0105954c[0x4d]);
    }
    pfVar2 = DAT_0105954c;
    uVar6 = FUN_00acd42c();
    iVar1 = (int)uVar6;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    local_74 = (float)(iVar1 << 0x18);
    pfVar2[0x4e] = local_74;
  }
  return;
}


//// FUNCTION LH_ApplyWaterMaterialOverride @ 00995ab0 ////

void __cdecl LH_ApplyWaterMaterialOverride(undefined4 *param_1)

{
  void *pvVar1;
  
                    /* CONFIRMED: applies the WATER material override for a mesh material entry.
                       Called from LH_LoadMeshBinary when material record flag byte(s) D2b2/D2b3
                       (file offset 0xA/0xB of the raw material record) are nonzero.
                       
                       If global flag DAT_0105ca74 bit4 (0x10) is CLEAR: loads a static "eau.dds"
                       texture as Texture0 and sets TypeCode=6 - a simple fallback water texture
                       drawn directly as part of the mesh, using its own dedicated blend recipe in
                       the renderer switch (see FUN_009911b0 case 6).
                       
                       If the flag is SET: clears both texture indices/refs on this material entry
                       and sets TypeCode=0x16 instead.
                       CORRECTION (this comment previously said this "hides the material entirely" -
                       that was WRONG, verified by
                       reading the renderer's own TypeCode switch): TypeCode 0x16 does NOT hide
                       anything. FUN_009911b0's case 0x16
                       ignores this entry's own (now-cleared) textures and instead binds a
                       completely separate GLOBAL animated water
                       resource ("Water.raw", loaded once by FUN_00994f10 into DAT_01059550) with
                       live D3DTSS_BUMPENVMAT texture-stage
                       states driven by a per-frame-updated bump matrix (DAT_0105954c) - i.e. a
                       fancier, procedurally rippling/reflective
                       water render path replaces this material's simple static-texture look when
                       the global flag says the engine
                       supports it. Lesson: a loader branch that clears a material's own fields is
                       not proof the material becomes
                       invisible - always check the renderer's switch case for the same TypeCode
                       before concluding "hidden."
                       
                       This confirms TypeCode 6 = "static eau.dds water fallback" and TypeCode 0x16
                       = "procedural bump-mapped global water". See LH_LoadMeshMaterial's comment
                       for the full TypeCode value list, and FUN_009911b0's comment for the
                       confirmed renderer-side meaning of each value found so far
                       (0,1,3,4,5,6,7,0xB/0xC,0x15/0x16,0x18). */
  if (param_1 != (undefined4 *)0x0) {
    if ((DAT_0105ca74 & 0x10) != 0) {
      param_1[4] = param_1[4] & 0x9affffff | 0x1a000000;
      param_1[5] = param_1[5] & 0xfffffffd;
      *(undefined1 *)(param_1 + 3) = 0x16;
      *param_1 = 0xffffffff;
      *(undefined1 *)((int)param_1 + 9) = 0xff;
      *(undefined1 *)((int)param_1 + 0xb) = 0xff;
      *(undefined1 *)((int)param_1 + 0xe) = 0xff;
      return;
    }
    pvVar1 = FUN_0099bb50("eau.dds",0,0,0,'\0');
    *(undefined1 *)(param_1 + 3) = 6;
    if ((void *)param_1[6] != pvVar1) {
      Engine_SetResourceReference(param_1,(int)pvVar1);
    }
    if (pvVar1 != (void *)0x0) {
      FUN_0099b400(pvVar1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00995b40 @ 00995b40 ////

void FUN_00995b40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_01059578;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00995b60 @ 00995b60 ////

void FUN_00995b60(void)

{
  return;
}


//// FUNCTION FUN_00995b70 @ 00995b70 ////

void __fastcall FUN_00995b70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71254;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[8]);
}


//// FUNCTION FUN_00995ba0 @ 00995ba0 ////

void __fastcall FUN_00995ba0(int *param_1)

{
  FUN_00999900(param_1,4);
  return;
}


//// FUNCTION QueueRenderPrimitive @ 00995bb0 ////

void __fastcall QueueRenderPrimitive(undefined4 *param_1)

{
  if (s_RenderQueueCount < 0x800) {
    s_RenderQueueCount = s_RenderQueueCount + 1;
    if (s_RenderQueueHead == (undefined4 *)0x0) {
      s_RenderQueueHead = param_1;
      DAT_0105b57c = param_1;
      *param_1 = 0;
      return;
    }
    *DAT_0105b57c = param_1;
    DAT_0105b57c = param_1;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00995c20 @ 00995c20 ////

void __thiscall FUN_00995c20(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)this;
  *(float *)this = (float)(fVar2 * (float10)*(float *)this);
  *(float *)((int)this + 4) =
       (float)(fVar3 * (float10)*(float *)((int)this + 8) + (float10)*(float *)((int)this + 4));
  *(float *)((int)this + 8) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0xc) = (float)(fVar2 * (float10)*(float *)((int)this + 0xc));
  *(float *)((int)this + 0x10) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x14) + (float10)*(float *)((int)this + 0x10)
              );
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x14) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x18) = (float)(fVar2 * (float10)*(float *)((int)this + 0x18));
  *(float *)((int)this + 0x1c) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x20) + (float10)*(float *)((int)this + 0x1c)
              );
  *(float *)((int)this + 0x20) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x20) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x24) = (float)(fVar2 * (float10)*(float *)((int)this + 0x24));
  *(float *)((int)this + 0x28) =
       (float)(fVar3 * (float10)*(float *)((int)this + 0x2c) + (float10)*(float *)((int)this + 0x28)
              );
  *(float *)((int)this + 0x2c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x2c) -
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00995d00 @ 00995d00 ////

undefined4 * __fastcall FUN_00995d00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00999750(param_1);
  *param_1 = &PTR_FUN_00d71254;
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00995d30 @ 00995d30 ////

undefined4 * __thiscall FUN_00995d30(void *this,byte param_1)

{
  FUN_00995b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00995d50 @ 00995d50 ////

uint __fastcall FUN_00995d50(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  if (*(ushort *)(param_1 + 0x1c) != 0) {
    puVar2 = (uint *)(*(int *)(param_1 + 0x20) + 0x30);
    do {
      if ((*puVar2 >> 8 & 1) != 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xd;
    } while (uVar1 < *(ushort *)(param_1 + 0x1c));
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00995f70 @ 00995f70 ////

uint __thiscall FUN_00995f70(void *this,float *param_1)

{
  uint uVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x18) != 0)) {
    local_c = *(float *)((int)this + 0x1c) - *(float *)((int)this + 0x10);
    local_8 = *(float *)((int)this + 0x20) - *(float *)((int)this + 0x14);
    local_4 = *(float *)((int)this + 0x24) - *(float *)((int)this + 0x18);
    FUN_009840b0(&local_14,&local_c);
    uVar1 = FUN_0099c5b0(*(void **)(*(int *)((int)this + 4) + 0x18),
                         ((*param_1 - *(float *)((int)this + 0x10)) / local_14) *
                         (*(float *)((int)this + 0x30) - *(float *)((int)this + 0x28)) +
                         *(float *)((int)this + 0x28),
                         ((param_1[1] - *(float *)((int)this + 0x14)) / local_10) *
                         (*(float *)((int)this + 0x34) - *(float *)((int)this + 0x2c)) +
                         *(float *)((int)this + 0x2c));
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00996020 @ 00996020 ////

/* WARNING: Removing unreachable block (ram,0x009960f0) */
/* WARNING: Removing unreachable block (ram,0x0099611c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00996020(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  uint local_98;
  int local_8c;
  float local_88;
  int local_78;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
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
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_6c = 0;
  pfVar8 = (float *)FUN_00a3ac00((int *)((uint)*(ushort *)(param_1 + 0x1c) << 2),(int)&local_6c);
  if (pfVar8 != (float *)0x0) {
    local_8c = 0;
    local_64 = 1.0 / (float)((byte)*(ushort *)(param_1 + 0x24) & 0x3f);
    local_98 = 0;
    local_60 = 1.0 / (float)((*(ushort *)(param_1 + 0x24) & 0x7e00) >> 9);
    if (*(short *)(param_1 + 0x1c) != 0) {
      pfVar11 = pfVar8 + 4;
      local_78 = 0;
      pfVar14 = pfVar8;
      do {
        pfVar13 = (float *)(*(int *)(param_1 + 0x20) + local_78);
        if (((uint)pfVar13[0xc] >> 8 & 1) == 0) {
          local_58 = (float)(((uint)pfVar13[0xc] & 0xff) % (*(ushort *)(param_1 + 0x24) & 0x3f)) *
                     local_64;
          local_68 = *pfVar13;
          local_38 = pfVar13[1];
          fVar6 = pfVar13[2];
          local_54 = (float)(((uint)pfVar13[0xc] & 0xff) / (*(ushort *)(param_1 + 0x24) >> 9 & 0x3f)
                            ) * local_60;
          local_4 = pfVar13[9];
          local_34 = local_68 * _DAT_0105c498 + fVar6 * DAT_0105c4b0 + local_38 * _DAT_0105c4a4 +
                     _DAT_0105c4bc;
          local_88 = fVar6 * DAT_0105c4b4 + DAT_0105c49c * local_68 + DAT_0105c4a8 * local_38 +
                     _DAT_0105c4c0;
          local_18 = DAT_0105c4a0 * local_68 + DAT_0105c4ac * local_38 + DAT_0105c4b8 * fVar6 +
                     _DAT_0105c4c4;
          local_50 = local_34 + local_4;
          *pfVar14 = local_50;
          pfVar14[1] = local_88;
          local_48 = local_18 + local_4;
          pfVar14[2] = local_48;
          pfVar14[3] = pfVar13[0xb];
          local_44 = -local_4 + local_34;
          *pfVar11 = local_58;
          pfVar11[1] = local_54;
          local_28 = local_58 + local_64;
          pfVar14[8] = local_44;
          pfVar14[9] = local_88;
          local_34 = local_34 - local_4;
          pfVar14[10] = local_48;
          pfVar14[0xb] = pfVar13[0xb];
          pfVar11[9] = local_54;
          pfVar11[8] = local_28;
          local_2c = local_18 - local_4;
          pfVar14[0x10] = local_34;
          pfVar14[0x11] = local_88;
          local_24 = local_54 + local_60;
          pfVar14[0x12] = local_2c;
          pfVar14[0x13] = pfVar13[0xb];
          pfVar11[0x10] = local_28;
          local_4 = -local_4;
          pfVar11[0x11] = local_24;
          local_18 = local_4 + local_18;
          pfVar14[0x18] = local_50;
          pfVar14[0x19] = local_88;
          pfVar14[0x1a] = local_18;
          pfVar14[0x1b] = pfVar13[0xb];
          pfVar11[0x19] = local_24;
          pfVar11[0x18] = local_58;
          pfVar14 = pfVar14 + 0x20;
          pfVar11 = pfVar11 + 0x20;
          local_8c = local_8c + 1;
          local_4c = local_88;
          local_40 = local_88;
          local_3c = local_48;
          local_30 = local_88;
          local_20 = local_50;
          local_1c = local_88;
          local_14 = local_28;
          local_10 = local_54;
        }
        local_78 = local_78 + 0x34;
        local_98 = local_98 + 1;
      } while (local_98 < *(ushort *)(param_1 + 0x1c));
    }
    fVar6 = _DAT_0105bdd8 - _DAT_0105bdd0;
    iVar15 = local_8c * 4;
    iVar12 = 0;
    fVar7 = _DAT_0105bddc - _DAT_0105bdd4;
    if (3 < iVar15) {
      fVar4 = 1.0 / fVar6;
      iVar9 = (iVar15 - 4U >> 2) + 1;
      iVar12 = iVar9 * 4;
      fVar5 = 1.0 / fVar7;
      pfVar11 = pfVar8;
      do {
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        *pfVar11 = fVar1 * DAT_0105c4c8 + DAT_0105c4d4 * fVar2 + DAT_0105c4e0 * fVar3 +
                   _DAT_0105c4ec;
        pfVar11[1] = DAT_0105c4cc * fVar1 + DAT_0105c4d8 * fVar2 + DAT_0105c4e4 * fVar3 +
                     _DAT_0105c4f0;
        fVar1 = DAT_0105c4e8 * fVar3 + DAT_0105c4d0 * fVar1 + DAT_0105c4dc * fVar2 + _DAT_0105c4f4;
        pfVar11[2] = fVar1;
        fVar2 = (fVar1 * _DAT_00e6773c + DAT_00e67724 * *pfVar11 + _DAT_00e67730 * pfVar11[1] +
                _DAT_00e67748) - _DAT_0105bdd4;
        pfVar11[6] = ((fVar1 * _DAT_00e67738 + DAT_00e67720 * *pfVar11 + _DAT_00e6772c * pfVar11[1]
                      + _DAT_00e67744) - _DAT_0105bdd0) * fVar4;
        fVar1 = pfVar11[8];
        pfVar11[7] = 1.0 - fVar2 * fVar5;
        fVar2 = pfVar11[9];
        fVar3 = pfVar11[10];
        pfVar11[8] = fVar1 * DAT_0105c4c8 + DAT_0105c4d4 * fVar2 + DAT_0105c4e0 * fVar3 +
                     _DAT_0105c4ec;
        pfVar11[9] = DAT_0105c4cc * fVar1 + DAT_0105c4d8 * fVar2 + DAT_0105c4e4 * fVar3 +
                     _DAT_0105c4f0;
        fVar1 = DAT_0105c4e8 * fVar3 + DAT_0105c4d0 * fVar1 + DAT_0105c4dc * fVar2 + _DAT_0105c4f4;
        pfVar11[10] = fVar1;
        fVar2 = (fVar1 * _DAT_00e6773c + DAT_00e67724 * pfVar11[8] + _DAT_00e67730 * pfVar11[9] +
                _DAT_00e67748) - _DAT_0105bdd4;
        pfVar11[0xe] = ((fVar1 * _DAT_00e67738 +
                         DAT_00e67720 * pfVar11[8] + _DAT_00e6772c * pfVar11[9] + _DAT_00e67744) -
                       _DAT_0105bdd0) * fVar4;
        fVar1 = pfVar11[0x10];
        pfVar11[0xf] = 1.0 - fVar2 * fVar5;
        fVar2 = pfVar11[0x11];
        fVar3 = pfVar11[0x12];
        pfVar11[0x10] =
             fVar1 * DAT_0105c4c8 + DAT_0105c4d4 * fVar2 + DAT_0105c4e0 * fVar3 + _DAT_0105c4ec;
        pfVar11[0x11] =
             DAT_0105c4cc * fVar1 + DAT_0105c4d8 * fVar2 + DAT_0105c4e4 * fVar3 + _DAT_0105c4f0;
        fVar1 = DAT_0105c4e8 * fVar3 + DAT_0105c4d0 * fVar1 + DAT_0105c4dc * fVar2 + _DAT_0105c4f4;
        pfVar11[0x12] = fVar1;
        fVar2 = (fVar1 * _DAT_00e6773c +
                 _DAT_00e67730 * pfVar11[0x11] + DAT_00e67724 * pfVar11[0x10] + _DAT_00e67748) -
                _DAT_0105bdd4;
        pfVar11[0x16] =
             ((fVar1 * _DAT_00e67738 + _DAT_00e6772c * pfVar11[0x11] + DAT_00e67720 * pfVar11[0x10]
              + _DAT_00e67744) - _DAT_0105bdd0) * fVar4;
        fVar1 = pfVar11[0x18];
        pfVar11[0x17] = 1.0 - fVar2 * fVar5;
        fVar2 = pfVar11[0x19];
        fVar3 = pfVar11[0x1a];
        pfVar11[0x18] =
             fVar1 * DAT_0105c4c8 + DAT_0105c4d4 * fVar2 + DAT_0105c4e0 * fVar3 + _DAT_0105c4ec;
        pfVar11[0x19] =
             DAT_0105c4cc * fVar1 + DAT_0105c4d8 * fVar2 + DAT_0105c4e4 * fVar3 + _DAT_0105c4f0;
        fVar1 = DAT_0105c4e8 * fVar3 + DAT_0105c4d0 * fVar1 + DAT_0105c4dc * fVar2 + _DAT_0105c4f4;
        pfVar8 = pfVar11 + 0x20;
        iVar9 = iVar9 + -1;
        pfVar11[0x1a] = fVar1;
        fVar2 = (fVar1 * _DAT_00e6773c +
                 DAT_00e67724 * pfVar11[0x18] + _DAT_00e67730 * pfVar11[0x19] + _DAT_00e67748) -
                _DAT_0105bdd4;
        pfVar11[0x1e] =
             ((fVar1 * _DAT_00e67738 + DAT_00e67720 * pfVar11[0x18] + _DAT_00e6772c * pfVar11[0x19]
              + _DAT_00e67744) - _DAT_0105bdd0) * fVar4;
        pfVar11[0x1f] = 1.0 - fVar2 * fVar5;
        pfVar11 = pfVar8;
      } while (iVar9 != 0);
    }
    if (iVar12 < iVar15) {
      iVar12 = iVar15 - iVar12;
      do {
        fVar4 = *pfVar8;
        iVar12 = iVar12 + -1;
        fVar5 = pfVar8[1];
        fVar1 = pfVar8[2];
        *pfVar8 = fVar4 * DAT_0105c4c8 + DAT_0105c4d4 * fVar5 + DAT_0105c4e0 * fVar1 + _DAT_0105c4ec
        ;
        pfVar8[1] = DAT_0105c4cc * fVar4 + DAT_0105c4d8 * fVar5 + DAT_0105c4e4 * fVar1 +
                    _DAT_0105c4f0;
        fVar4 = DAT_0105c4e8 * fVar1 + DAT_0105c4d0 * fVar4 + DAT_0105c4dc * fVar5 + _DAT_0105c4f4;
        pfVar8[2] = fVar4;
        fVar5 = (fVar4 * _DAT_00e6773c + DAT_00e67724 * *pfVar8 + _DAT_00e67730 * pfVar8[1] +
                _DAT_00e67748) - _DAT_0105bdd4;
        pfVar8[6] = ((fVar4 * _DAT_00e67738 + DAT_00e67720 * *pfVar8 + _DAT_00e6772c * pfVar8[1] +
                     _DAT_00e67744) - _DAT_0105bdd0) * (1.0 / fVar6);
        pfVar8[7] = 1.0 - fVar5 * (1.0 / fVar7);
        pfVar8 = pfVar8 + 8;
      } while (iVar12 != 0);
    }
    FUN_00a3a4e0();
    if (local_8c != 0) {
      local_5c = 0;
      uVar10 = FUN_00a51110(local_8c,&local_5c);
      if ((char)uVar10 != '\0') {
        if (*(int **)(param_1 + 0x18) != (int *)0x0) {
          LH_ApplyMeshMaterial(*(int **)(param_1 + 0x18));
        }
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x242);
        if (DAT_010bb230 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(DAT_010bb230 + 4);
        }
        (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar10,0,0x20);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,local_88,0,iVar15,local_78,local_8c * 2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00996a10 @ 00996a10 ////

void __thiscall FUN_00996a10(void *this,uint param_1,char param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar6 = param_1 & 0xffff;
  *(byte *)((int)this + 0x26) = *(byte *)((int)this + 0x26) & 0xfe;
  *(short *)((int)this + 0x1c) = (short)param_1;
  *(undefined **)((int)this + 0x18) = &DAT_00e67664;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x24) = 0x201;
  pvVar1 = operator_new(uVar6 * 0x34);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (-1 < (int)(uVar6 - 1)) {
    puVar4 = (undefined1 *)((int)pvVar1 + 0x2e);
    do {
      puVar4[-2] = 0xff;
      puVar4[-1] = 0xff;
      *puVar4 = 0xff;
      puVar4[1] = 0xff;
      *(undefined4 *)(puVar4 + -2) = 0xffffffff;
      puVar7 = (undefined4 *)(puVar4 + -0x2e);
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)(puVar4 + -10) = 0x3f800000;
      *(undefined4 *)(puVar4 + -2) = 0xffffffff;
      puVar4 = puVar4 + 0x34;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(void **)((int)this + 0x20) = pvVar1;
  if (0 < (int)param_1) {
    iVar2 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)((int)this + 0x20) + iVar2);
      puVar7 = puVar5;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      iVar2 = iVar2 + 0x34;
      param_1 = param_1 - 1;
      puVar5[9] = 0x3f800000;
      puVar5[0xb] = 0xffffffff;
    } while (param_1 != 0);
  }
  if (((param_2 == '\0') && (*(int *)((int)this + 0x20) != 0)) &&
     (*(short *)((int)this + 0x1c) != 0)) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      *(uint *)(*(int *)((int)this + 0x20) + 0x30 + iVar3) =
           *(uint *)(*(int *)((int)this + 0x20) + 0x30 + iVar3) | 0x100;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < (int)(uint)*(ushort *)((int)this + 0x1c));
  }
  return;
}


//// FUNCTION FUN_00996b20 @ 00996b20 ////

undefined4 * __thiscall FUN_00996b20(void *this,uint param_1,char param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d71254;
  if ((int)param_1 < 0) {
    param_1 = 1;
  }
  FUN_00996a10(this,param_1,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION BuildAndDrawPrimitive @ 009973c0 ////

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall BuildAndDrawPrimitive(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  int local_74 [2];
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [9];
  float local_18;
  float local_14;
  float local_c [3];
  
  if (DAT_0105cd94 == '\0') {
    if (*(int *)(param_1 + 4) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x10);
      *puVar1 = *puVar1 | 0x2000000;
      puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x10);
      *puVar1 = *puVar1 & 0xfeffffff;
    }
    if (((*(int *)(param_1 + 4) == 0) ||
        (iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x18), iVar9 == 0)) ||
       ((*(byte *)(iVar9 + 0x54) & 8) != 0)) {
      local_94 = *(float *)(param_1 + 0x18);
      local_74[1] = 0;
      if (local_94 == 0.0) {
        pfVar5 = (float *)FUN_00a3ac00((int *)0x4,(int)(local_74 + 1));
        if (pfVar5 == (float *)0x0) {
          return;
        }
        pfVar15 = (float *)(param_1 + 0x10);
        *pfVar5 = *pfVar15;
        pfVar5[1] = *(float *)(param_1 + 0x14);
        pfVar5[2] = *(float *)(param_1 + 0x18);
        pfVar5[3] = 1.0;
        pfVar5[4] = *(float *)(param_1 + 8);
        pfVar5[5] = *(float *)(param_1 + 0x28);
        pfVar5[6] = *(float *)(param_1 + 0x2c);
        pfVar5[7] = *pfVar15;
        pfVar5[8] = *(float *)(param_1 + 0x20);
        fVar17 = *(float *)(param_1 + 0x18);
        pfVar5[10] = 1.0;
        pfVar5[9] = fVar17;
        pfVar5[0xb] = *(float *)(param_1 + 8);
        pfVar5[0xc] = *(float *)(param_1 + 0x28);
        pfVar5[0xd] = *(float *)(param_1 + 0x34);
        pfVar2 = (float *)(param_1 + 0x1c);
        pfVar5[0xe] = *pfVar2;
        pfVar5[0xf] = *(float *)(param_1 + 0x20);
        pfVar5[0x10] = *(float *)(param_1 + 0x24);
        pfVar5[0x11] = 1.0;
        pfVar5[0x12] = *(float *)(param_1 + 8);
        pfVar5[0x13] = *(float *)(param_1 + 0x30);
        pfVar5[0x14] = *(float *)(param_1 + 0x34);
        pfVar5[0x15] = *pfVar2;
        pfVar5[0x16] = *(float *)(param_1 + 0x14);
        fVar17 = *(float *)(param_1 + 0x24);
        pfVar5[0x18] = 1.0;
        pfVar5[0x17] = fVar17;
        pfVar5[0x19] = *(float *)(param_1 + 8);
        pfVar5[0x1a] = *(float *)(param_1 + 0x30);
        pfVar5[0x1b] = *(float *)(param_1 + 0x2c);
        if (*(float *)(param_1 + 0xc) != 0.0) {
          fVar16 = 2.0;
          pfVar14 = &local_8c;
          fVar11 = (float10)fcos(-(float10)*(float *)(param_1 + 0xc));
          local_90 = (float)fVar11;
          fVar11 = (float10)fsin(-(float10)*(float *)(param_1 + 0xc));
          fVar17 = (float)fVar11;
          pvVar6 = (void *)FUN_00412da0(pfVar15,local_c,pfVar2);
          puVar7 = (undefined4 *)FUN_00465120(pvVar6,pfVar14,fVar16);
          FUN_009840b0(&local_80,puVar7);
          fVar16 = *pfVar5;
          *pfVar5 = ((fVar16 - local_80) * local_90 - (pfVar5[1] - local_7c) * fVar17) + local_80;
          pfVar5[1] = (pfVar5[1] - local_7c) * local_90 + (fVar16 - local_80) * fVar17 + local_7c;
          fVar16 = pfVar5[7];
          pfVar5[7] = ((fVar16 - local_80) * local_90 - (pfVar5[8] - local_7c) * fVar17) + local_80;
          pfVar5[8] = (pfVar5[8] - local_7c) * local_90 + (fVar16 - local_80) * fVar17 + local_7c;
          fVar16 = pfVar5[0xe];
          pfVar5[0xe] = ((fVar16 - local_80) * local_90 - (pfVar5[0xf] - local_7c) * fVar17) +
                        local_80;
          pfVar5[0xf] = (pfVar5[0xf] - local_7c) * local_90 + (fVar16 - local_80) * fVar17 +
                        local_7c;
          fVar16 = pfVar5[0x15];
          pfVar5[0x15] = ((fVar16 - local_80) * local_90 - (pfVar5[0x16] - local_7c) * fVar17) +
                         local_80;
          pfVar5[0x16] = (pfVar5[0x16] - local_7c) * local_90 + (fVar16 - local_80) * fVar17 +
                         local_7c;
        }
        FUN_00a3a4e0();
        local_74[0] = 0;
        uVar8 = FUN_00a51110(1,local_74);
        if ((char)uVar8 == '\0') {
          return;
        }
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          LH_ApplyMeshMaterial(*(int **)(param_1 + 4));
        }
        iVar10 = DAT_01058f28;
        iVar9 = DAT_01058f24;
        if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
          if (DAT_01058f28 != 1) {
            DAT_01058f28 = 1;
            (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,1);
          }
          if (DAT_01058f24 != 1) {
            DAT_01058f24 = 1;
            (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,1);
          }
        }
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x144);
        if (DAT_010bb230 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(DAT_010bb230 + 4);
        }
        (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar8,0,0x1c);
      }
      else {
        pfVar5 = (float *)FUN_00a3ac00((int *)0x4,(int)(local_74 + 1));
        if (pfVar5 == (float *)0x0) {
          return;
        }
        if (local_94 < _DAT_00e676c8 + DAT_0105c3e0) {
          local_94 = _DAT_00e676c8 + DAT_0105c3e0;
        }
        local_6c = *(float *)(param_1 + 0x10);
        local_50 = *(undefined4 *)(param_1 + 0x14);
        local_68 = *(undefined4 *)(param_1 + 0x20);
        local_4c = 0;
        local_8c = *(float *)(param_1 + 0x1c);
        local_64 = 0;
        local_88 = *(float *)(param_1 + 0x14);
        local_40 = 0;
        local_84 = 0;
        local_58 = 0;
        local_60 = local_8c;
        local_5c = local_88;
        local_54 = local_6c;
        local_48 = local_8c;
        local_44 = local_68;
        FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
        fVar11 = FUN_004012c0(0.0);
        if (*(float *)(param_1 + 0xc) != 0.0) {
          fVar11 = FUN_004012c0(-*(float *)(param_1 + 0xc));
          fVar17 = 2.0;
          pfVar15 = local_c;
          pvVar6 = (void *)FUN_00412da0((void *)(param_1 + 0x10),&local_80,(float *)(param_1 + 0x1c)
                                       );
          puVar7 = (undefined4 *)FUN_00465120(pvVar6,pfVar15,fVar17);
          FUN_009840b0(&local_8c,puVar7);
          local_80 = local_8c;
          local_7c = local_88;
        }
        local_90 = (float)fVar11;
        if (local_90 != 0.0) {
          FUN_0040b670(local_3c);
          local_8c = local_80 * -1.0;
          local_88 = local_7c * -1.0;
          local_84 = 0;
          FUN_004d5340(local_3c,&local_8c);
          FUN_00527db0(local_3c,local_90);
          local_18 = local_18 + local_80;
          local_14 = local_14 + local_7c;
          FUN_0040b490(local_3c,&local_54);
          FUN_0040b490(local_3c,&local_6c);
          FUN_0040b490(local_3c,&local_48);
          FUN_0040b490(local_3c,&local_60);
        }
        FUN_009840b0(&local_8c,&local_54);
        FUN_009a1a20(&DAT_0105c2e8,&local_8c,pfVar5,local_94);
        pfVar5[3] = *(float *)(param_1 + 8);
        pfVar5[4] = *(float *)(param_1 + 0x28);
        pfVar5[5] = *(float *)(param_1 + 0x2c);
        FUN_009840b0(&local_8c,&local_6c);
        FUN_009a1a20(&DAT_0105c2e8,&local_8c,pfVar5 + 6,local_94);
        pfVar5[9] = *(float *)(param_1 + 8);
        pfVar5[10] = *(float *)(param_1 + 0x28);
        pfVar5[0xb] = *(float *)(param_1 + 0x34);
        FUN_009840b0(&local_8c,&local_48);
        FUN_009a1a20(&DAT_0105c2e8,&local_8c,pfVar5 + 0xc,local_94);
        pfVar5[0xf] = *(float *)(param_1 + 8);
        pfVar5[0x10] = *(float *)(param_1 + 0x30);
        pfVar5[0x11] = *(float *)(param_1 + 0x34);
        FUN_009840b0(&local_8c,&local_60);
        FUN_009a1a20(&DAT_0105c2e8,&local_8c,pfVar5 + 0x12,local_94);
        pfVar5[0x15] = *(float *)(param_1 + 8);
        pfVar5[0x16] = *(float *)(param_1 + 0x30);
        pfVar5[0x17] = *(float *)(param_1 + 0x2c);
        FUN_00a3a4e0();
        local_74[0] = 0;
        uVar8 = FUN_00a51110(1,local_74);
        if ((char)uVar8 == '\0') {
          return;
        }
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          LH_ApplyMeshMaterial(*(int **)(param_1 + 4));
        }
        iVar10 = DAT_01058f28;
        iVar9 = DAT_01058f24;
        if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
          if (DAT_01058f28 != 1) {
            DAT_01058f28 = 1;
            (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,1);
          }
          if (DAT_01058f24 != 1) {
            DAT_01058f24 = 1;
            (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,1);
          }
        }
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x142);
        piVar4 = g_pDirect3DDevice;
        iVar3 = *g_pDirect3DDevice;
        uVar13 = 0x18;
        uVar12 = 0;
        uVar8 = FUN_008d9610();
        (**(code **)(iVar3 + 400))(piVar4,0,uVar8,uVar12,uVar13);
      }
      (**(code **)(*g_pDirect3DDevice + 0x148))(g_pDirect3DDevice,4,local_8c,0,4,local_90,2);
      if (DAT_01058f28 != iVar10) {
        DAT_01058f28 = iVar10;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,iVar10);
      }
      if (DAT_01058f24 != iVar9) {
        DAT_01058f24 = iVar9;
        (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,iVar9);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00997b10 @ 00997b10 ////

undefined4 * __thiscall FUN_00997b10(void *this,uint param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  puVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d71268;
  if ((int)param_1 < 0) {
    param_1 = 1;
  }
  FUN_00996a10(this,param_1,param_2);
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00997bb0 @ 00997bb0 ////

undefined4 * __thiscall FUN_00997bb0(void *this,byte param_1)

{
  FUN_00997bd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00997bd0 @ 00997bd0 ////

void __fastcall FUN_00997bd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71254;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[8]);
}


//// FUNCTION ParticleBatch_BuildAndDrawQuads @ 00997c00 ////

/* WARNING: Removing unreachable block (ram,0x00997d48) */
/* WARNING: Removing unreachable block (ram,0x00997d5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ParticleBatch_BuildAndDrawQuads(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  ushort uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float10 fVar15;
  float local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  int local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  int local_4;
  
  local_4 = param_1;
                    /* Builds a batch of billboarded, rotated quads from a particle array (this+0x18
                       material, +0x1c count, +0x20 array, +0x24 packed texture-atlas grid
                       dimensions/flags, +0x28 wind/direction offset) and draws them directly via
                       g_pDirect3DDevice (LH_ApplyMeshMaterial + DrawIndexedPrimitive-shaped vtable
                       call at +0x148). Not RTTI-attributed -- free function, single ordinary
                       caller. Name is content-based, moderately confident. */
  FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
  local_6c = 0;
  pfVar5 = (float *)FUN_00a3ac00((int *)((uint)*(ushort *)(param_1 + 0x1c) << 2),(int)&local_6c);
  if (pfVar5 != (float *)0x0) {
    local_80 = 0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 0x3f800000;
    FUN_004130d0(&local_60,(float *)&DAT_0105c3c0);
    local_98 = 0.0;
    local_9c = 0.0;
    local_a0 = 0.0;
    local_a8 = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_7c = 1.0 / (float)((byte)*(ushort *)(param_1 + 0x24) & 0x3f);
    local_b8 = 0.0;
    local_bc = 0.0;
    local_c0 = 0.0;
    local_a4 = 1.0;
    local_b4 = 1.0;
    local_c4 = 1.0;
    local_c8 = 0;
    local_68 = 1.0 / (float)((*(ushort *)(param_1 + 0x24) & 0x7e00) >> 9);
    iVar14 = 0;
    if (*(short *)(param_1 + 0x1c) != 0) {
      local_84 = 0;
      pfVar10 = pfVar5 + 4;
      do {
        iVar14 = local_4;
        pfVar13 = (float *)(*(int *)(param_1 + 0x20) + local_84);
        local_94 = pfVar13[0xc];
        pfVar11 = pfVar10;
        pfVar12 = pfVar5;
        if (((uint)local_94 >> 8 & 1) == 0) {
          local_8c = (float)(((uint)pfVar13[0xc] & 0xff) / (*(ushort *)(param_1 + 0x24) & 0x3f));
          uVar9 = *(ushort *)(local_4 + 0x26) & 1;
          fVar4 = ((float)((uint)pfVar13[0xc] & 0xff) -
                  (float)(*(ushort *)(param_1 + 0x24) & 0x3f) * local_8c) * local_7c;
          local_8c = local_8c * local_68;
          if (uVar9 == 0) {
            local_90 = pfVar13[9];
            local_78 = *pfVar13;
            local_74 = pfVar13[1];
            local_70 = pfVar13[2];
            fVar8 = pfVar13[0xb];
          }
          else {
            local_78 = *pfVar13;
            local_90 = _DAT_00e676cc * pfVar13[9];
            local_74 = pfVar13[1];
            local_70 = 0.0;
            if (DAT_00e676d0 < 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = DAT_00e676d0;
              if (0xff < DAT_00e676d0) {
                iVar6 = 0xff;
              }
            }
            local_88 = (float)(iVar6 << 0x18);
            fVar8 = local_88;
          }
          local_98 = 0.0;
          local_9c = 0.0;
          fVar15 = (float10)fcos((float10)pfVar13[10]);
          local_a0 = 0.0;
          local_a8 = 0.0;
          local_ac = 0.0;
          local_b0 = 0.0;
          local_bc = 0.0;
          local_a4 = 1.0;
          local_c4 = (float)fVar15;
          fVar15 = (float10)fsin((float10)pfVar13[10]);
          local_c0 = (float)fVar15;
          local_b8 = (float)-fVar15;
          local_b4 = local_c4;
          if ((*(float *)(local_4 + 0x28) != 0.0) && (uVar9 == 0)) {
            FUN_008706c0(&local_c4,-(local_60 * *(float *)(local_4 + 0x28)));
            FUN_00995c20(&local_c4,-(local_5c * *(float *)(iVar14 + 0x28)));
          }
          local_a0 = local_a0 + local_78;
          uVar9 = *(ushort *)(iVar14 + 0x24);
          local_cc = local_90;
          local_9c = local_74 + local_9c;
          local_98 = local_98 + local_70;
          local_54 = local_90;
          if ((uVar9 & 0x100) != 0) {
            if (((byte)*(undefined2 *)(iVar14 + 0x24) & 0x3f) <=
                ((byte)((ushort)*(undefined2 *)(iVar14 + 0x24) >> 9) & 0x3f)) {
              uVar9 = uVar9 >> 9;
            }
            fVar1 = 1.0 / (float)(uVar9 & 0x3f);
            local_54 = (float)(*(ushort *)(iVar14 + 0x24) >> 9 & 0x3f) * fVar1 * local_90;
            local_cc = (float)(*(ushort *)(iVar14 + 0x24) & 0x3f) * fVar1 * local_90;
          }
          if (((uint)local_94 >> 9 & 1) == 0) {
            local_20 = local_7c;
            local_48 = 0.0;
          }
          else {
            local_20 = 0.0;
            local_48 = local_7c;
          }
          local_50 = local_cc;
          *pfVar5 = local_54;
          pfVar5[1] = local_cc;
          local_4c = 0;
          pfVar5[2] = 0.0;
          fVar1 = *pfVar5;
          fVar2 = pfVar5[1];
          fVar3 = pfVar5[2];
          pfVar5[3] = fVar8;
          pfVar10[1] = local_8c;
          local_8 = local_8c;
          local_38 = 0;
          *pfVar5 = fVar1 * local_c4 + local_b8 * fVar2 + local_ac * fVar3 + local_a0;
          pfVar5[1] = local_b4 * fVar2 + local_c0 * fVar1 + local_a8 * fVar3 + local_9c;
          pfVar5[2] = local_b0 * fVar2 + local_bc * fVar1 + local_a4 * fVar3 + local_98;
          local_20 = local_20 + fVar4;
          *pfVar10 = local_20;
          local_40 = -local_54;
          local_3c = local_cc;
          pfVar5[6] = local_40;
          pfVar5[7] = local_cc;
          pfVar5[8] = 0.0;
          fVar1 = pfVar5[6];
          fVar2 = pfVar5[7];
          fVar3 = pfVar5[8];
          pfVar5[9] = fVar8;
          pfVar10[7] = local_8c;
          pfVar11 = pfVar5 + 0xc;
          local_30 = local_8c;
          local_24 = 0;
          pfVar5[6] = fVar1 * local_c4 + local_b8 * fVar2 + local_ac * fVar3 + local_a0;
          pfVar5[7] = local_c0 * fVar1 + local_a8 * fVar3 + local_b4 * fVar2 + local_9c;
          pfVar5[8] = local_bc * fVar1 + local_b0 * fVar2 + local_a4 * fVar3 + local_98;
          local_48 = local_48 + fVar4;
          pfVar10[6] = local_48;
          local_94 = -local_cc;
          *pfVar11 = local_40;
          pfVar5[0xd] = local_94;
          pfVar5[0xe] = 0.0;
          fVar4 = *pfVar11;
          fVar1 = pfVar5[0xd];
          fVar2 = pfVar5[0xe];
          *pfVar11 = fVar4 * local_c4 + local_b8 * fVar1 + local_ac * fVar2 + local_a0;
          pfVar5[0xd] = local_c0 * fVar4 + local_a8 * fVar2 + local_b4 * fVar1 + local_9c;
          pfVar5[0xf] = fVar8;
          local_10 = 0;
          pfVar11 = pfVar10 + 0x18;
          pfVar5[0xe] = local_bc * fVar4 + local_b0 * fVar1 + local_a4 * fVar2 + local_98;
          pfVar10[0xc] = local_48;
          local_44 = local_8c + local_68;
          pfVar10[0xd] = local_44;
          pfVar5[0x12] = local_54;
          pfVar5[0x13] = local_94;
          pfVar5[0x14] = 0.0;
          fVar4 = pfVar5[0x12];
          fVar1 = pfVar5[0x13];
          fVar2 = pfVar5[0x14];
          pfVar5[0x15] = fVar8;
          pfVar10[0x12] = local_20;
          pfVar10[0x13] = local_44;
          pfVar12 = pfVar5 + 0x18;
          local_80 = local_80 + 1;
          pfVar5[0x12] = fVar4 * local_c4 + local_b8 * fVar1 + local_ac * fVar2 + local_a0;
          pfVar5[0x13] = local_c0 * fVar4 + local_a8 * fVar2 + local_b4 * fVar1 + local_9c;
          pfVar5[0x14] = local_bc * fVar4 + local_b0 * fVar1 + local_a4 * fVar2 + local_98;
          param_1 = iVar14;
          local_34 = local_48;
          local_2c = local_40;
          local_28 = local_94;
          local_1c = local_44;
          local_18 = local_54;
          local_14 = local_94;
          local_c = local_20;
        }
        local_84 = local_84 + 0x34;
        local_c8 = local_c8 + 1;
        pfVar10 = pfVar11;
        pfVar5 = pfVar12;
        iVar14 = local_80;
      } while (local_c8 < *(ushort *)(param_1 + 0x1c));
    }
    FUN_00a3a4e0();
    if (iVar14 != 0) {
      local_64 = 0;
      uVar7 = FUN_00a51110(1,&local_64);
      if ((char)uVar7 != '\0') {
        if (*(int **)(param_1 + 0x18) != (int *)0x0) {
          LH_ApplyMeshMaterial(*(int **)(param_1 + 0x18));
        }
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x142);
        if (DAT_010bb230 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(DAT_010bb230 + 4);
        }
        (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar7,0,0x18);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,local_88,0,iVar14 * 4,local_80,iVar14 * 2);
      }
    }
  }
  return;
}


//// FUNCTION FlushAndRenderQueue @ 009996b0 ////

void FlushAndRenderQueue(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (DAT_0105cd94 == '\0') {
    FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
    piVar2 = s_RenderQueueHead;
    while (piVar2 != (int *)0x0) {
      piVar5 = piVar2;
      if ((int *)*piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        do {
          piVar4 = piVar3;
          if (piVar4[1] != piVar2[1]) break;
          piVar3 = (int *)*piVar4;
          piVar5 = piVar4;
        } while ((int *)*piVar4 != (int *)0x0);
      }
      if (((piVar2[1] == 0) || (iVar1 = *(int *)(piVar2[1] + 0x18), iVar1 == 0)) ||
         ((*(byte *)(iVar1 + 0x54) & 8) != 0)) {
        BuildAndDrawPrimitive((int)piVar2);
      }
      piVar2 = (int *)*piVar5;
    }
    s_RenderQueueHead = (int *)0x0;
    s_RenderQueueCount = 0;
  }
  return;
}


//// FUNCTION FUN_00999750 @ 00999750 ////

void __fastcall FUN_00999750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71284;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 1;
  *(undefined2 *)(param_1 + 5) = 0;
  *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) & 0xfffe | 2;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009997b0 @ 009997b0 ////

void __cdecl FUN_009997b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  
  iVar4 = (&DAT_0105bd90)[param_1];
  if (iVar4 != 0) {
    puVar2 = &DAT_0105b990;
    do {
      puVar2[-0x100] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x105bd90);
    do {
      uVar6 = FUN_00acd42c();
      *(short *)(iVar4 + 0x14) = (short)uVar6;
      uVar3 = (uint)uVar6 & 0xff;
      *(undefined4 *)(iVar4 + 4) = (&DAT_0105b590)[uVar3];
      (&DAT_0105b590)[uVar3] = iVar4;
      iVar4 = *(int *)(iVar4 + 0xc);
    } while (iVar4 != 0);
    if (param_1 != 4) {
      piVar5 = &DAT_0105b98c;
      do {
        iVar4 = *piVar5;
        while (iVar4 != 0) {
          iVar1 = *(int *)(iVar4 + 4);
          *(undefined4 *)(iVar4 + 4) = (&DAT_0105b990)[*(byte *)(iVar4 + 0x15)];
          (&DAT_0105b990)[*(byte *)(iVar4 + 0x15)] = iVar4;
          iVar4 = iVar1;
        }
        piVar5 = piVar5 + -1;
      } while (0x105b58f < (int)piVar5);
      return;
    }
    piVar5 = &DAT_0105b590;
    do {
      iVar4 = *piVar5;
      while (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 4) = (&DAT_0105b990)[*(byte *)(iVar4 + 0x15)];
        (&DAT_0105b990)[*(byte *)(iVar4 + 0x15)] = iVar4;
        iVar4 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while ((int)piVar5 < 0x105b990);
  }
  return;
}


//// FUNCTION FUN_00999900 @ 00999900 ////

void __cdecl FUN_00999900(int *param_1,int param_2)

{
  float10 fVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*(byte *)((int)param_1 + 0x16) & 1) != 0) {
    return;
  }
  InterlockedIncrement(param_1 + 4);
  *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) | 1;
  if ((param_2 < 0) || (4 < param_2)) {
    param_2 = 0;
  }
  fVar1 = (float10)(**(code **)(*param_1 + 4))();
  param_1[2] = (int)(float)fVar1;
  if ((&DAT_0105bd90)[param_2] == 0) {
    (&DAT_0105bdac)[param_2 * 2] = (float)fVar1;
  }
  else if ((float10)(float)(&DAT_0105bda8)[param_2 * 2] <= fVar1) {
    if ((float10)(float)(&DAT_0105bdac)[param_2 * 2] < fVar1) {
      (&DAT_0105bdac)[param_2 * 2] = (float)fVar1;
    }
    goto LAB_00999981;
  }
  (&DAT_0105bda8)[param_2 * 2] = (float)fVar1;
LAB_00999981:
  param_1[3] = 0;
  param_1[3] = (&DAT_0105bd90)[param_2];
  (&DAT_0105bd90)[param_2] = param_1;
  return;
}


//// FUNCTION FUN_009999a0 @ 009999a0 ////

void __cdecl FUN_009999a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  
  if ((param_1 != (undefined4 *)0x0) && ((*(byte *)((int)param_1 + 0x16) & 1) != 0)) {
    puVar6 = &DAT_0105bd90;
    do {
      puVar4 = (undefined4 *)*puVar6;
      puVar2 = (undefined4 *)0x0;
      while (puVar1 = puVar4, puVar1 != (undefined4 *)0x0) {
        if (puVar1 == param_1) {
          if (puVar2 == (undefined4 *)0x0) {
            *puVar6 = puVar1[3];
          }
          else {
            puVar2[3] = puVar1[3];
          }
          *(byte *)((int)puVar1 + 0x16) = *(byte *)((int)puVar1 + 0x16) & 0xfe;
          LVar5 = InterlockedDecrement(puVar1 + 4);
          uVar3 = DAT_0105b588;
          DAT_0105b588 = uVar3;
          if (LVar5 == 0) {
            DAT_0105b588 = 1;
            (**(code **)*puVar1)(1);
            DAT_0105b588 = uVar3;
          }
          break;
        }
        puVar2 = puVar1;
        puVar4 = (undefined4 *)puVar1[3];
      }
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < 0x105bda4);
  }
  return;
}


//// FUNCTION FUN_00999a20 @ 00999a20 ////

void FUN_00999a20(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  LONG LVar4;
  undefined4 *local_4;
  
  local_4 = &DAT_0105b990;
  do {
    piVar1 = (int *)*local_4;
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[1];
      if ((*(ushort *)((int)piVar2 + 0x16) & 1) == 0) {
        return;
      }
      *(ushort *)((int)piVar2 + 0x16) = *(ushort *)((int)piVar2 + 0x16) & 0xfffe;
      (**(code **)(*piVar2 + 0x14))();
      LVar4 = InterlockedDecrement(piVar2 + 4);
      uVar3 = DAT_0105b588;
      DAT_0105b588 = uVar3;
      if (LVar4 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar2)(1);
        DAT_0105b588 = uVar3;
      }
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 0x105bd90);
  return;
}


//// FUNCTION FUN_00999aa0 @ 00999aa0 ////

void __fastcall FUN_00999aa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d71284;
  if (((param_1[4] == 0) && (DAT_0105b588 != '\0')) && ((*(byte *)((int)param_1 + 0x16) & 1) != 0))
  {
    FUN_009999a0(param_1);
  }
  return;
}


//// FUNCTION FUN_00999ad0 @ 00999ad0 ////

void FUN_00999ad0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0105bd90;
  do {
    puVar1 = (undefined4 *)*puVar2;
    while (puVar1 != (undefined4 *)0x0) {
      FUN_009999a0(puVar1);
      puVar1 = (undefined4 *)*puVar2;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x105bda4);
  return;
}


//// FUNCTION FUN_00999b00 @ 00999b00 ////

void FUN_00999b00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0105bd90;
  do {
    puVar1 = (undefined4 *)*puVar2;
    while (puVar1 != (undefined4 *)0x0) {
      FUN_009999a0(puVar1);
      puVar1 = (undefined4 *)*puVar2;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x105bda4);
  return;
}


//// FUNCTION FUN_00999b30 @ 00999b30 ////

undefined4 * __thiscall FUN_00999b30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00d71284;
  if (((*(int *)((int)this + 0x10) == 0) && (DAT_0105b588 != '\0')) &&
     ((*(byte *)((int)this + 0x16) & 1) != 0)) {
    FUN_009999a0(this);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00999b70 @ 00999b70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00999b70(void)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  LONG LVar5;
  int iVar6;
  void *_Memory;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 *local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5fb8;
  pvStack_c = ExceptionList;
  DAT_0105be64 = 1;
  ExceptionList = &pvStack_c;
  if (DAT_010bb53c != '\0') {
    ExceptionList = &pvStack_c;
    thunk_FUN_00a52ca0();
  }
  _Memory = (void *)0x0;
  local_4 = 0;
  local_18 = (void *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_28 = &DAT_0105b990;
  puVar7 = (undefined4 *)0x0;
  do {
    piVar2 = (int *)*local_28;
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      local_20 = (int *)piVar3[1];
      if ((*(ushort *)((int)piVar3 + 0x16) & 1) == 0) {
        if (_Memory == (void *)0x0) {
          ExceptionList = pvStack_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(ushort *)((int)piVar3 + 0x16) = *(ushort *)((int)piVar3 + 0x16) & 0xfffe;
      local_24 = piVar3;
      if ((((uint)piVar3[0x27] >> 9 & 1) != 0) && (1 < piVar3[4])) {
        if ((_Memory == (void *)0x0) ||
           ((uint)(local_10 - (int)_Memory >> 2) <= (uint)((int)puVar7 - (int)_Memory >> 2))) {
          FUN_004688e0(local_1c,puVar7,1,&local_24);
          _Memory = local_18;
        }
        else {
          *puVar7 = piVar3;
          local_14 = puVar7 + 1;
        }
        puVar7 = local_14;
        piVar3[0x28] = piVar3[0x28] | 2;
        InterlockedIncrement(piVar3 + 4);
      }
      if (DAT_010bb53c == '\0') {
        (**(code **)(*piVar3 + 8))();
      }
      else {
        FUN_00a53a00(piVar3);
      }
      LVar5 = InterlockedDecrement(piVar3 + 4);
      uVar4 = DAT_0105b588;
      piVar2 = local_20;
      DAT_0105b588 = uVar4;
      if (LVar5 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar3)(1);
        piVar2 = local_20;
        puVar7 = local_14;
        DAT_0105b588 = uVar4;
      }
    }
    local_28 = local_28 + 1;
  } while ((int)local_28 < 0x105bd90);
  if (DAT_010bb53c != '\0') {
    FUN_00a53550();
  }
  iVar8 = 0;
  while( true ) {
    if (_Memory == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)local_14 - (int)_Memory >> 2;
    }
    if (iVar6 <= iVar8) break;
    puVar1 = (uint *)(*(int *)((int)_Memory + iVar8 * 4) + 0xa0);
    *puVar1 = *puVar1 & 0xfffffffd;
    piVar2 = *(int **)((int)_Memory + iVar8 * 4);
    if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x16) & 1) == 0)) {
      InterlockedIncrement(piVar2 + 4);
      *(byte *)((int)piVar2 + 0x16) = *(byte *)((int)piVar2 + 0x16) | 1;
      fVar9 = (float10)(**(code **)(*piVar2 + 4))();
      piVar2[2] = (int)(float)fVar9;
      if (DAT_0105bd98 == (int *)0x0) {
        _DAT_0105bdbc = (float)fVar9;
        _DAT_0105bdb8 = (float)fVar9;
      }
      else if ((float10)_DAT_0105bdb8 <= fVar9) {
        if ((float10)_DAT_0105bdbc < fVar9) {
          _DAT_0105bdbc = (float)fVar9;
        }
      }
      else {
        _DAT_0105bdb8 = (float)fVar9;
      }
      piVar2[3] = 0;
      piVar2[3] = (int)DAT_0105bd98;
      DAT_0105bd98 = piVar2;
    }
    puVar7 = *(undefined4 **)((int)_Memory + iVar8 * 4);
    if (puVar7 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar7 + 4);
      uVar4 = DAT_0105b588;
      if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      DAT_0105b588 = uVar4;
      *(undefined4 *)((int)_Memory + iVar8 * 4) = 0;
    }
    iVar8 = iVar8 + 1;
  }
  if (_Memory == (void *)0x0) {
    DAT_0105be64 = 0;
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0099a080 @ 0099a080 ////

void __fastcall FUN_0099a080(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


//// FUNCTION FUN_0099a090 @ 0099a090 ////

void __fastcall FUN_0099a090(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}


//// FUNCTION FUN_0099a0a0 @ 0099a0a0 ////

uint __thiscall FUN_0099a0a0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX;
  uint uVar6;
  float fVar7;
  ushort uVar8;
  
  fVar7 = *(float *)((int)this + 0x1c);
  fVar1 = *param_1;
  uVar8 = (ushort)((uint)in_EAX >> 0x10);
  uVar6 = CONCAT22(uVar8,(ushort)(fVar7 < fVar1) << 8 | (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                         (ushort)(fVar7 == fVar1) << 0xe);
  if (fVar7 >= fVar1) {
    fVar7 = *(float *)((int)this + 0x10);
    fVar1 = param_1[2];
    uVar6 = CONCAT22(uVar8,(ushort)(fVar7 < fVar1) << 8 | (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                           (ushort)(fVar7 == fVar1) << 0xe);
    if (fVar7 < fVar1 || (fVar7 == fVar1) != 0) {
      fVar7 = *(float *)((int)this + 0x20);
      fVar1 = param_1[3];
      uVar6 = CONCAT22(uVar8,(ushort)(fVar7 < fVar1) << 8 | (ushort)(NAN(fVar7) || NAN(fVar1)) << 10
                             | (ushort)(fVar7 == fVar1) << 0xe);
      if (fVar7 >= fVar1) {
        fVar7 = *(float *)((int)this + 0x14);
        fVar1 = param_1[1];
        uVar6 = CONCAT22(uVar8,(ushort)(fVar7 < fVar1) << 8 |
                               (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                               (ushort)(fVar7 == fVar1) << 0xe);
        if (fVar7 < fVar1 || (fVar7 == fVar1) != 0) {
          fVar7 = (float)((uint)uVar8 << 0x10);
          if (*(float *)((int)this + 0x10) < *param_1) {
            fVar7 = *param_1;
            fVar3 = *(float *)((int)this + 0x1c) - *param_1;
            fVar1 = *(float *)((int)this + 0x10);
            fVar2 = *param_1;
            *(float *)((int)this + 0x10) = fVar7;
            fVar3 = fVar3 / (fVar3 - (fVar1 - fVar2));
            *(float *)((int)this + 0x28) =
                 fVar3 * *(float *)((int)this + 0x28) + (1.0 - fVar3) * *(float *)((int)this + 0x30)
            ;
          }
          fVar7 = (float)((uint)fVar7 & 0xffff0000);
          if (param_1[2] < *(float *)((int)this + 0x1c)) {
            fVar7 = param_1[2];
            fVar3 = param_1[2] - *(float *)((int)this + 0x10);
            fVar1 = param_1[2];
            fVar2 = *(float *)((int)this + 0x1c);
            *(float *)((int)this + 0x1c) = fVar7;
            fVar3 = fVar3 / (fVar3 - (fVar1 - fVar2));
            *(float *)((int)this + 0x30) =
                 fVar3 * *(float *)((int)this + 0x30) + (1.0 - fVar3) * *(float *)((int)this + 0x28)
            ;
          }
          fVar7 = (float)((uint)fVar7 & 0xffff0000);
          if (*(float *)((int)this + 0x14) < param_1[3]) {
            fVar7 = param_1[3];
            fVar3 = *(float *)((int)this + 0x20) - param_1[3];
            fVar1 = *(float *)((int)this + 0x14);
            fVar2 = param_1[3];
            *(float *)((int)this + 0x14) = fVar7;
            fVar3 = fVar3 / (fVar3 - (fVar1 - fVar2));
            *(float *)((int)this + 0x2c) =
                 fVar3 * *(float *)((int)this + 0x2c) + (1.0 - fVar3) * *(float *)((int)this + 0x34)
            ;
          }
          fVar1 = *(float *)((int)this + 0x20);
          fVar2 = param_1[1];
          if (fVar1 < fVar2 == 0 && (fVar1 == fVar2) == 0) {
            fVar5 = param_1[1] - *(float *)((int)this + 0x14);
            fVar3 = param_1[1];
            fVar4 = *(float *)((int)this + 0x20);
            *(float *)((int)this + 0x20) = param_1[1];
            fVar5 = fVar5 / (fVar5 - (fVar3 - fVar4));
            *(float *)((int)this + 0x34) =
                 fVar5 * *(float *)((int)this + 0x34) + (1.0 - fVar5) * *(float *)((int)this + 0x2c)
            ;
          }
          return CONCAT31((int3)(CONCAT22((short)((uint)fVar7 >> 0x10),
                                          (ushort)(fVar1 < fVar2) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                          (ushort)(fVar1 == fVar2) << 0xe) >> 8),1);
        }
      }
    }
  }
  return uVar6;
}


//// FUNCTION FUN_0099a1c0 @ 0099a1c0 ////

void __thiscall FUN_0099a1c0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)(param_1 + 0x15);
  *(ushort *)((int)this + 0x16) =
       *(ushort *)((int)this + 0x16) ^ (*(byte *)((int)this + 0x16) ^ *(byte *)(param_1 + 0x16)) & 1
  ;
  *(ushort *)((int)this + 0x16) =
       (byte)(*(byte *)(param_1 + 0x16) ^ (byte)*(ushort *)((int)this + 0x16)) & 2 ^
       *(ushort *)((int)this + 0x16);
  return;
}


//// FUNCTION FUN_0099a220 @ 0099a220 ////

void __thiscall FUN_0099a220(void *this,ushort param_1)

{
  *(ushort *)((int)this + 0x24) =
       *(ushort *)((int)this + 0x24) & 0x80c0 | param_1 & 0x3f | (param_1 & 0x3f) << 9;
  return;
}


//// FUNCTION FUN_0099a250 @ 0099a250 ////

void __thiscall FUN_0099a250(void *this,byte param_1,byte param_2,char param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar2 = (param_2 & 0x3f) << 9 | *(ushort *)((int)this + 0x24) & 0x81c0;
  uVar3 = uVar2 | param_1 & 0x3f;
  uVar1 = (ushort)uVar3;
  *(ushort *)((int)this + 0x24) = uVar1;
  if ((param_3 == '\0') && ((((byte)(uVar2 >> 9) ^ (byte)uVar3) & 0x3f) != 0)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  *(ushort *)((int)this + 0x24) = ((ushort)bVar4 << 8 ^ uVar1) & 0x100 ^ uVar1;
  return;
}


//// FUNCTION FUN_0099a2b0 @ 0099a2b0 ////

void __cdecl FUN_0099a2b0(int *param_1)

{
  void *_Memory;
  
  if (*param_1 == 0) {
    return;
  }
  _Memory = *(void **)(*param_1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_0099a2f0 @ 0099a2f0 ////

void * __thiscall FUN_0099a2f0(void *this,int param_1)

{
  ushort uVar1;
  
  FUN_0099a1c0(this,param_1);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined2 *)((int)this + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(ushort *)((int)this + 0x24) =
       *(ushort *)((int)this + 0x24) ^
       (*(byte *)((int)this + 0x24) ^ *(byte *)(param_1 + 0x24)) & 0x3f;
  uVar1 = (byte)(*(byte *)(param_1 + 0x24) ^ (byte)*(ushort *)((int)this + 0x24)) & 0x40 ^
          *(ushort *)((int)this + 0x24);
  *(ushort *)((int)this + 0x24) = uVar1;
  uVar1 = (byte)(*(byte *)(param_1 + 0x24) ^ (byte)uVar1) & 0x80 ^ uVar1;
  *(ushort *)((int)this + 0x24) = uVar1;
  uVar1 = (*(ushort *)(param_1 + 0x24) ^ uVar1) & 0x100 ^ uVar1;
  *(ushort *)((int)this + 0x24) = uVar1;
  uVar1 = (*(ushort *)(param_1 + 0x24) ^ uVar1) & 0x7e00 ^ uVar1;
  *(ushort *)((int)this + 0x24) = uVar1;
  *(ushort *)((int)this + 0x24) =
       (*(ushort *)(param_1 + 0x24) ^ uVar1) & 0x7fff ^ *(ushort *)(param_1 + 0x24);
  *(ushort *)((int)this + 0x26) =
       *(ushort *)((int)this + 0x26) ^ (*(byte *)((int)this + 0x26) ^ *(byte *)(param_1 + 0x26)) & 1
  ;
  *(ushort *)((int)this + 0x26) =
       (byte)(*(byte *)(param_1 + 0x26) ^ (byte)*(ushort *)((int)this + 0x26)) & 2 ^
       *(ushort *)((int)this + 0x26);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return this;
}


//// FUNCTION FUN_0099a3d0 @ 0099a3d0 ////

undefined4 * __fastcall FUN_0099a3d0(int param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5fdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x30);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00996b20(this,(uint)*(ushort *)(param_1 + 0x1c),'\x01');
  }
  uVar1 = this_00[8];
  FUN_0099a2f0(this_00,param_1);
  iVar4 = 0;
  this_00[8] = uVar1;
  if (*(short *)(param_1 + 0x1c) != 0) {
    iVar2 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x20) + iVar2);
      puVar6 = (undefined4 *)(this_00[8] + iVar2);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1c));
  }
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_0099a470 @ 0099a470 ////

void FUN_0099a470(void)

{
  DAT_0105bde8 = 0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105bde4);
}


//// FUNCTION FUN_0099a4a0 @ 0099a4a0 ////

void __fastcall FUN_0099a4a0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_0099a4c0 @ 0099a4c0 ////

undefined4 * __thiscall FUN_0099a4c0(void *this,undefined4 param_1)

{
  FUN_009b38a0(this);
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined ***)this = &PTR_FUN_00d7129c;
  return this;
}


//// FUNCTION FUN_0099a4e0 @ 0099a4e0 ////

undefined4 * __thiscall FUN_0099a4e0(void *this,byte param_1)

{
  FUN_0099a500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0099a500 @ 0099a500 ////

void __fastcall FUN_0099a500(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7129c;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_0099a510 @ 0099a510 ////

void __thiscall FUN_0099a510(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  *(undefined4 *)((int)this + 0x50) = param_3;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(void **)((int)this + 0x40) = DAT_0105bdec;
  uVar1 = *(uint *)((int)this + 0x54);
  DAT_0105bdec = this;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar2 = (uint)(param_1 == -1) << 9;
  *(uint *)((int)this + 0x54) = uVar2 | uVar1 & 0xfffffc3a;
  *(undefined4 *)((int)this + 0x30) = 1;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x30) = 2;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(uint *)((int)this + 0x54) = uVar2 | uVar1 & 0xfffff028;
  return;
}


//// FUNCTION FUN_0099a590 @ 0099a590 ////

void __fastcall FUN_0099a590(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_0099a5c0 @ 0099a5c0 ////

void __cdecl FUN_0099a5c0(char *param_1)

{
  _strncpy(s_Data_Textures_00e67750,param_1,0x3ff);
  DAT_00e67b4f = 0;
  return;
}


//// FUNCTION MediaPlayer_LockVideoBuffer @ 0099a5e0 ////

undefined4 __thiscall MediaPlayer_LockVideoBuffer(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,0,param_1,0,0x800);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_009d9820();
    }
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return 0;
}


//// FUNCTION MediaPlayer_UnlockVideoBuffer @ 0099a620 ////

undefined4 __fastcall MediaPlayer_UnlockVideoBuffer(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x50))(piVar1,0);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_0099a640 @ 0099a640 ////

int __cdecl FUN_0099a640(int param_1)

{
  if (DAT_0105be20 == 0) {
    if (0x80 < param_1) {
      param_1 = 0x80;
    }
  }
  else if (DAT_0105be20 == 1) {
    if (0x100 < param_1) {
      return 0x100;
    }
  }
  else if ((DAT_0105be20 == 2) && (0x200 < param_1)) {
    return 0x200;
  }
  return param_1;
}


//// FUNCTION FUN_0099a740 @ 0099a740 ////

void __cdecl FUN_0099a740(char param_1)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = DAT_0105bdec; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x40)) {
    if ((*(uint *)(iVar2 + 0x54) & 0x100) != 0) {
      if (param_1 == '\0') {
        if ((*(uint *)(iVar2 + 0x54) & 0x200) != 0) {
          (**(code **)(*g_pDirect3DDevice + 0x5c))
                    (g_pDirect3DDevice,*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),1
                     ,1,*(undefined4 *)(iVar2 + 0x3c),0,iVar2 + 0x24,0);
        }
      }
      else {
        FUN_009d9820();
        piVar1 = *(int **)(iVar2 + 0x24);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar2 + 0x24) = 0;
        }
        piVar1 = *(int **)(iVar2 + 0x28);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar2 + 0x28) = 0;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0099a7c0 @ 0099a7c0 ////

char * __thiscall FUN_0099a7c0(void *this,float *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float extraout_ECX;
  float fVar4;
  int *extraout_EDX;
  int *piVar5;
  int local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0105bdf0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(void **)((int)this + 0x40) = DAT_0105bdec;
  DAT_0105bdec = this;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x30) = 2;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffff028;
  _sprintf(this,"NO_NAME_%d",iVar1);
  FUN_009ac040(this);
  DAT_0105bdf0 = DAT_0105bdf0 + 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 8;
  iVar1 = FUN_009f3be0(this);
  *(int *)((int)this + 0x20) = iVar1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  if (DAT_0105be08 == 3) {
    if (*param_1 == 1.7894982e-19) {
      fVar4 = param_1[4];
      piVar5 = (int *)param_1[3];
    }
    else {
      fVar4 = 7.17465e-43;
      piVar5 = (int *)0x200;
    }
  }
  else {
    fVar4 = 0.0;
    piVar5 = (int *)0x0;
    if (*param_1 == 1.7894982e-19) {
      fVar4 = param_1[4];
      fVar2 = (float)FUN_0099a640((int)fVar4);
      piVar3 = (int *)FUN_0099a640((int)param_1[3]);
      if ((fVar2 != fVar4) ||
         (fVar4 = extraout_ECX, piVar5 = extraout_EDX, piVar3 != (int *)param_1[3])) {
        fVar4 = fVar2;
        piVar5 = piVar3;
      }
    }
  }
  *(float *)((int)this + 0x44) = fVar4;
  *(int **)((int)this + 0x48) = piVar5;
  iVar1 = FUN_00aff320(g_pDirect3DDevice,param_1,param_2,(uint)fVar4,piVar5,4,0,0,1,0xffffffff,
                       0xffffffff,0,&local_1c,(undefined4 *)0x0,(undefined4 *)((int)this + 0x24));
  if (iVar1 == 0) {
    *(int *)((int)this + 0x4c) = local_1c;
    *(undefined4 *)((int)this + 0x50) = local_18;
  }
  return this;
}


//// FUNCTION FUN_0099a910 @ 0099a910 ////

void __fastcall FUN_0099a910(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar3 = DAT_0105bdec;
  if (DAT_0105bdec != param_1) {
    do {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar2 + 0x40);
    } while (iVar3 != param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar3 + 0x40);
      goto LAB_0099a95e;
    }
  }
  DAT_0105bdec = *(int *)(iVar3 + 0x40);
LAB_0099a95e:
  if (*(int *)(param_1 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*(int *)(param_1 + 0x2c) + 0xc));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x34));
}


//// FUNCTION FUN_0099a990 @ 0099a990 ////

void * __thiscall FUN_0099a990(void *this,byte param_1)

{
  FUN_0099a910((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0099a9b0 @ 0099a9b0 ////

uint __thiscall FUN_0099a9b0(void *this,int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  int unaff_EBP;
  uint *puVar5;
  ulonglong uVar6;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = param_2;
  if (((param_2 != 0) && (piVar1 = *(int **)(param_2 + 0x24), piVar1 != (int *)0x0)) &&
     (uVar3 = 0, *(int *)((int)this + 0x24) != 0)) {
    puVar5 = (uint *)0x0;
    ppiVar4 = (int **)0x0;
    if (param_3 != 0) {
      uVar6 = FUN_00acd42c();
      local_14 = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      local_1c = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      local_18 = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      local_20 = (uint)uVar6;
      puVar5 = &local_20;
    }
    if (param_1 != 0) {
      uVar6 = FUN_00acd42c();
      local_4 = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      local_c = (int *)uVar6;
      uVar6 = FUN_00acd42c();
      local_8 = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      local_10 = (int *)uVar6;
      ppiVar4 = &local_10;
    }
    param_2 = 0;
    param_3 = 0;
    (**(code **)(*piVar1 + 0x48))(piVar1,0,&param_2);
    (**(code **)(**(int **)(unaff_EBP + 0x24) + 0x48))
              (*(int **)(unaff_EBP + 0x24),0,&stack0x00000000);
    iVar2 = FUN_00afe117(local_c,(int *)0x0,(uint *)ppiVar4,local_10,(int *)0x0,puVar5,0xffffffff,0)
    ;
    if ((iVar2 != 0) && ((iVar2 == -0x7789f4a7 || (iVar2 == -0x7789f794)))) {
      FUN_009d9820();
    }
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
    return (uint)(iVar2 == 0);
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_0099ab10 @ 0099ab10 ////

char * __cdecl FUN_0099ab10(float *param_1,float *param_2)

{
  void *this;
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x58);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar1 = FUN_0099a7c0(this,param_1,param_2);
    ExceptionList = local_c;
    return pcVar1;
  }
  ExceptionList = local_c;
  return (char *)0x0;
}


//// FUNCTION FUN_0099ab70 @ 0099ab70 ////

void __thiscall
FUN_0099ab70(void *this,char *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_12c;
  char *pcStack_128;
  uint uStack_124;
  char acStack_120 [20];
  char local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6029;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _sprintf(local_10c,param_1);
  FUN_009ac040(local_10c);
  if ((DAT_0105bdfc & 1) == 0) {
    DAT_0105bdfc = DAT_0105bdfc | 1;
    pcVar9 = "thumbs/films";
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    DAT_0105bdf8 = pcVar6 + -0xd714a0;
  }
  if ((DAT_0105bdfc & 2) == 0) {
    DAT_0105bdfc = DAT_0105bdfc | 2;
    pcVar9 = "thumbs/sets";
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    DAT_0105bdf4 = pcVar6 + -0xd71494;
  }
  iVar4 = _strncmp(local_10c,"thumbs/films",(size_t)DAT_0105bdf8);
  if ((iVar4 == 0) || (iVar4 = _strncmp(local_10c,"thumbs\\films",(size_t)DAT_0105bdf8), iVar4 == 0)
     ) {
    uVar5 = *(uint *)((int)this + 0x54) | 0x40;
LAB_0099ac84:
    *(uint *)((int)this + 0x54) = uVar5;
  }
  else {
    iVar4 = _strncmp(local_10c,"thumbs/sets",(size_t)DAT_0105bdf4);
    if ((iVar4 == 0) ||
       (iVar4 = _strncmp(local_10c,"thumbs\\sets",(size_t)DAT_0105bdf4), iVar4 == 0)) {
      uVar5 = *(uint *)((int)this + 0x54) | 0x80;
      goto LAB_0099ac84;
    }
  }
  *(int *)((int)this + 0x3c) = param_2;
  if ((*(uint *)((int)this + 0x54) & 0x200) != 0) {
    *(undefined4 *)((int)this + 0x3c) = 0x15;
  }
  if (param_2 == -2) {
    *(undefined4 *)((int)this + 0x3c) = 0x15;
  }
  pcVar9 = local_10c;
  pcVar6 = pcVar9;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (0x20 < (int)(pcVar6 + (1 - (int)(local_10c + 1)))) {
    pcVar9 = (char *)((int)&uStack_12c + (int)(pcVar6 + (1 - (int)(local_10c + 1))));
  }
  bVar3 = false;
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 8;
  if (*(int *)((int)this + 0x3c) == 0) {
    iVar4 = FUN_009f3be0(local_10c);
    *(int *)((int)this + 0x20) = iVar4;
    bVar3 = true;
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffff7;
    _strncpy(this,pcVar9,0x20);
    *(undefined1 *)((int)this + 0x1f) = 0;
    FUN_009ac040(this);
    pcVar9 = s_Data_Textures_00e67750;
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if ((pcVar6 == s_Data_Textures_00e67750) || ((local_10c[1] == ':' && (local_10c[2] == '\\')))) {
      iVar4 = 0;
      do {
        cVar1 = local_10c[iVar4];
        (&DAT_0105bed8)[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
      } while (cVar1 != '\0');
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,(char *)&PTR_LAB_00d71474,3);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\LightMap\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"lf",2);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\LightMap\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,(char *)&PTR_LAB_005f7863_3_00d708e0,3);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\FX\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"p_",2);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\Props\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"acc_",4);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\Accessories\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"hair_",5);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\Hair\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"mup_",4);
    if (iVar4 == 0) {
      _sprintf(&DAT_0105bed8,"%s\\MakeUp\\%s",s_Data_Textures_00e67750,local_10c);
      goto LAB_0099b280;
    }
    iVar4 = _strncmp(local_10c,"bd_",3);
    if (iVar4 != 0) {
      iVar4 = _strncmp(local_10c,"th_bd",5);
      if (iVar4 == 0) {
        _sprintf(&DAT_0105bed8,"%s\\Thumbs\\BackDrops\\%s",s_Data_Textures_00e67750,local_10c);
      }
      else {
        iVar4 = _strncmp(local_10c,"com_",4);
        if (iVar4 == 0) {
          _sprintf(&DAT_0105bed8,"%s\\Costumes\\%s",s_Data_Textures_00e67750,local_10c);
        }
        else {
          iVar4 = _strncmp(local_10c,"skin_",5);
          if (iVar4 == 0) {
            _sprintf(&DAT_0105bed8,"%s\\People\\%s",s_Data_Textures_00e67750,local_10c);
          }
          else {
            iVar4 = _strncmp(local_10c,"head_",5);
            if (iVar4 == 0) {
              _sprintf(&DAT_0105bed8,"%s\\People\\%s",s_Data_Textures_00e67750,local_10c);
            }
            else {
              iVar4 = _strncmp(local_10c,"tmp_",4);
              if (iVar4 == 0) {
                _sprintf(&DAT_0105bed8,"%s\\Temp\\%s",s_Data_Textures_00e67750,local_10c);
              }
              else {
                iVar4 = _strncmp(local_10c,"flash_",6);
                if (iVar4 == 0) {
                  _sprintf(&DAT_0105bed8,"%s\\Flash\\%s",s_Data_Textures_00e67750,local_10c);
                }
                else {
                  iVar4 = _strncmp(local_10c,"mbp_",4);
                  if (iVar4 == 0) {
                    _sprintf(&DAT_0105bed8,"%s\\Miniatures\\%s",s_Data_Textures_00e67750,local_10c);
                  }
                  else {
                    iVar4 = _strncmp(local_10c,"logo_",5);
                    if (iVar4 == 0) {
                      _sprintf(&DAT_0105bed8,"%s\\UI\\Logos\\%s",s_Data_Textures_00e67750,local_10c)
                      ;
                    }
                    else if ((*(byte *)((int)this + 0x54) & 0x10) == 0) {
                      _sprintf(&DAT_0105bed8,"%s\\%s",s_Data_Textures_00e67750,local_10c);
                    }
                    else if (DAT_0105bea8 < 10) {
                      _sprintf(&DAT_0105bed8,"%s\\UI\\Logos\\logo_v0%d.dds",s_Data_Textures_00e67750
                               ,DAT_0105bea8);
                    }
                    else {
                      _sprintf(&DAT_0105bed8,"%s\\UI\\Logos\\logo_v%d.dds",s_Data_Textures_00e67750,
                               DAT_0105bea8);
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0099b280;
    }
    _sprintf(&DAT_0105bed8,"%s\\BackDrops\\%s",s_Data_Textures_00e67750,local_10c);
    uVar5 = *(uint *)((int)this + 0x54) | 1;
  }
  else {
    if (pcVar9 == (char *)0x0) {
      *(undefined4 *)this = 0x4e4b4e55;
      builtin_strncpy((char *)((int)this + 4),"OWN",4);
    }
    else {
      _strncpy(this,pcVar9,0x20);
    }
    iVar4 = *(int *)((int)this + 0x3c);
    if (iVar4 == 0x3c) {
      *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffff7;
      bVar3 = true;
      pcVar9 = s_Data_Textures_00e67750;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      if ((pcVar6 == s_Data_Textures_00e67750) || ((local_10c[1] == ':' && (local_10c[2] == '\\'))))
      {
        iVar4 = 0;
        do {
          cVar1 = local_10c[iVar4];
          (&DAT_0105bed8)[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
      }
      else {
        _sprintf(&DAT_0105bed8,"%s\\Bumps\\%s",s_Data_Textures_00e67750,local_10c);
      }
      goto LAB_0099b280;
    }
    if (param_2 == -2) {
      (**(code **)(*g_pDirect3DDevice + 0x5c))
                (g_pDirect3DDevice,param_3,param_4,1,0x200,iVar4,2,(int)this + 0x24,0);
      goto LAB_0099b280;
    }
    bVar2 = 1;
    if (param_5 != '\0') {
      bVar2 = 2;
    }
    uVar5 = *(uint *)((int)this + 0x54) >> 9 & 1;
    (**(code **)(*g_pDirect3DDevice + 0x5c))
              (g_pDirect3DDevice,param_3,param_4,1,uVar5,iVar4,(uVar5 != 0) - 1U & bVar2,
               (int)this + 0x24,0);
    if ((*(uint *)((int)this + 0x54) & 0x200) == 0) goto LAB_0099b280;
    uVar5 = *(uint *)((int)this + 0x54) | 0x100;
  }
  *(uint *)((int)this + 0x54) = uVar5;
LAB_0099b280:
  iVar4 = _strncmp(local_10c,"ui",2);
  if ((iVar4 == 0) || (iVar4 = _strncmp(local_10c,"flash",5), iVar4 == 0)) {
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 2;
  }
  if (bVar3) {
    uStack_12c = acStack_120;
    acStack_120[0] = '\0';
    pcStack_128 = (char *)0x0;
    uStack_124 = 0x14;
    pcVar9 = &DAT_0105bed8;
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    pcVar9 = pcVar6 + -0x105bed8;
    if ((char *)0x13 < pcVar9) {
      uStack_124 = (uint)(pcVar6 + -0x105beb8) & 0xffffffe0;
      uStack_12c = _malloc(uStack_124);
    }
    _strncpy(uStack_12c,&DAT_0105bed8,(size_t)pcVar9);
    uStack_12c[(int)pcVar9] = '\0';
    uStack_4 = 0;
    pcStack_128 = pcVar9;
    uVar7 = FUN_009d3660(&uStack_12c,(uint *)0x0);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
      _free(uStack_12c);
    }
    if ((char)uVar7 == '\0') {
      *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 0xc;
    }
    else {
      piVar8 = operator_new(0x58);
      uStack_4 = 1;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        FUN_009b38a0(piVar8);
        *piVar8 = (int)&PTR_FUN_00d7129c;
        piVar8[0x15] = (int)this;
      }
      uStack_4 = 0xffffffff;
      pcVar9 = &DAT_0105bed8;
      do {
        pcVar6 = pcVar9;
        pcVar9 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      FUN_004015d0(piVar8 + 1,&DAT_0105bed8,(uint)(pcVar6 + -0x105bed8));
      uVar5 = FUN_009d3720(piVar8 + 1);
      piVar8[0xb] = uVar5;
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
      AsyncLoadJob_ExecuteSync(piVar8);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0099b400 @ 0099b400 ////

void __fastcall FUN_0099b400(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x30) + -1;
  *(int *)((int)param_1 + 0x30) = iVar1;
  if (*(int *)((int)param_1 + 0x3c) == 0) {
    if (iVar1 == 1) {
      *(undefined4 *)((int)param_1 + 0x38) = DAT_0105be98;
      return;
    }
    if (iVar1 != 0) {
      return;
    }
    if (DAT_010b9584 == '\0') {
      *(undefined4 *)((int)param_1 + 0x30) = 1;
      return;
    }
  }
  else if (iVar1 != 0) {
    return;
  }
  FUN_0099a910((int)param_1);
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_0099b4c0 @ 0099b4c0 ////

undefined4 __cdecl FUN_0099b4c0(wchar_t *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *_Memory;
  void *this;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf606b;
  local_c = ExceptionList;
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(param_1);
  FUN_004036d0(&local_2c,param_1,uVar1);
  local_4._0_1_ = 1;
  uVar2 = FUN_009d36d0(&local_2c,(uint *)0x0);
  local_4._0_1_ = 0;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar2 == '\0') {
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = local_c;
    return 0;
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d(param_1);
  FUN_004036d0(&local_2c,param_1,uVar1);
  local_4._0_1_ = 2;
  pfVar3 = (float *)FUN_009d4900(&local_2c);
  local_4._0_1_ = 0;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  _Memory = operator_new((uint)pfVar3);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d(param_1);
  FUN_004036d0(&local_2c,param_1,uVar1);
  local_4._0_1_ = 3;
  FUN_009d4aa0(&local_2c,_Memory,(size_t)pfVar3,(undefined1 *)0x0);
  local_4._0_1_ = 0;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  this = operator_new(0x58);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (this != (void *)0x0) {
    FUN_0099a7c0(this,_Memory,pfVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0099b980 @ 0099b980 ////

void * __thiscall
FUN_0099b980(void *this,char *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5
            )

{
  int iVar1;
  
  FUN_0099a510(this,param_2,param_3,param_4);
  FUN_0099ab70(this,param_1,param_2,param_3,param_4,param_5);
  if (*(int *)((int)this + 0x3c) == 0) {
    iVar1 = 0;
    if (0 < DAT_0105bde8) {
      do {
        if (*(int *)((int)this + 0x20) == *(int *)(DAT_0105bde4 + iVar1 * 4)) {
          iVar1 = 1;
          goto LAB_0099b9dc;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0105bde8);
    }
    iVar1 = 0;
LAB_0099b9dc:
    *(uint *)((int)this + 0x54) =
         *(uint *)((int)this + 0x54) ^ (iVar1 << 5 ^ *(uint *)((int)this + 0x54)) & 0x20;
  }
  return this;
}


//// FUNCTION FUN_0099ba00 @ 0099ba00 ////

void FUN_0099ba00(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_160 [18];
  int local_118;
  int local_114;
  char acStack_10e [258];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf608b;
  local_c = ExceptionList;
  if (DAT_00e68fa0 != '\0') {
    ExceptionList = &local_c;
    FUN_009c89a0(local_160);
    iVar4 = 0;
    local_4 = 0;
    FUN_009ca9d0(local_160,"low","Data\\Textures\\Specials\\LowResShad",(undefined1 *)0x1);
    if (local_118 == 0) {
      DAT_0105bde8 = 0;
    }
    else {
      DAT_0105bde8 = local_114 - local_118 >> 2;
    }
    DAT_0105bde4 = operator_new(DAT_0105bde8 << 2);
    if (0 < DAT_0105bde8) {
      do {
        pcVar5 = *(char **)(local_118 + iVar4 * 4);
        pcVar2 = _strrchr(pcVar5,0x5c);
        if (pcVar2 != (char *)0x0) {
          pcVar5 = pcVar2 + 1;
        }
        _sprintf(acStack_10e + 2,pcVar5);
        pcVar2 = acStack_10e + 2;
        pcVar5 = acStack_10e + 3;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2[(int)(acStack_10e + (-1 - (int)pcVar5))] = 'd';
        pcVar2[(int)(acStack_10e + -(int)pcVar5)] = 'd';
        pcVar2[(int)(acStack_10e + (1 - (int)pcVar5))] = 's';
        FUN_009ac040(acStack_10e + 2);
        iVar3 = FUN_009f3be0(acStack_10e + 2);
        *(int *)((int)DAT_0105bde4 + iVar4 * 4) = iVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0105bde8);
    }
    local_4 = 0xffffffff;
    FUN_009c8560(local_160);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0099bb50 @ 0099bb50 ////

void * __cdecl
FUN_0099bb50(char *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  void **ppvVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf60ab;
  local_c = ExceptionList;
  ppvVar1 = &local_c;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) {
      return (void *)0x0;
    }
    if (*param_1 == '\0') {
      return (void *)0x0;
    }
    ExceptionList = &local_c;
    iVar2 = FUN_009f3be0(param_1);
    for (pvVar3 = DAT_0105bdec; ppvVar1 = ExceptionList, pvVar3 != (void *)0x0;
        pvVar3 = *(void **)((int)pvVar3 + 0x40)) {
      if ((*(int *)((int)pvVar3 + 0x3c) == 0) && (*(int *)((int)pvVar3 + 0x20) == iVar2)) {
        *(int *)((int)pvVar3 + 0x30) = *(int *)((int)pvVar3 + 0x30) + 1;
        goto LAB_0099bbe9;
      }
    }
  }
  ExceptionList = ppvVar1;
  pvVar3 = operator_new(0x58);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  pvVar3 = FUN_0099b980(pvVar3,param_1,param_2,param_3,param_4,param_5);
  if (pvVar3 != (void *)0x0) {
LAB_0099bbe9:
    if ((DAT_010b956d != '\0') ||
       (DAT_010b956d = '\0', (*(uint *)((int)pvVar3 + 0x54) & 0x800) != 0)) {
      DAT_010b956d = '\x01';
    }
  }
  ExceptionList = local_c;
  return pvVar3;
}


//// FUNCTION FUN_0099bee0 @ 0099bee0 ////

/* WARNING: Removing unreachable block (ram,0x0099bf67) */
/* WARNING: Removing unreachable block (ram,0x0099bf81) */
/* WARNING: Removing unreachable block (ram,0x0099bf88) */
/* WARNING: Removing unreachable block (ram,0x0099bfb2) */
/* WARNING: Removing unreachable block (ram,0x0099bfb4) */
/* WARNING: Removing unreachable block (ram,0x0099bfd3) */
/* WARNING: Removing unreachable block (ram,0x0099bfd9) */
/* WARNING: Removing unreachable block (ram,0x0099c015) */
/* WARNING: Removing unreachable block (ram,0x0099c01c) */
/* WARNING: Removing unreachable block (ram,0x0099c025) */
/* WARNING: Removing unreachable block (ram,0x0099c03f) */
/* WARNING: Removing unreachable block (ram,0x0099c086) */
/* WARNING: Removing unreachable block (ram,0x0099c093) */

void __fastcall FUN_0099bee0(uint param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf60fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_0099bb50("ExportLowResShadow",0x15,0x40,0x40,'\0');
  FUN_0099a9b0(this,0,param_1,0);
  piVar1 = *(int **)((int)this + 0x24);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,0), iVar2 != 0)) {
    FUN_009d9820();
  }
  if (*(int **)((int)this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x24) + 0x50))();
  }
  iVar2 = *(int *)((int)this + 0x30) + -1;
  *(int *)((int)this + 0x30) = iVar2;
  if (*(int *)((int)this + 0x3c) == 0) {
    if (iVar2 == 1) {
      *(undefined4 *)((int)this + 0x38) = DAT_0105be98;
      ExceptionList = pvStack_c;
      return;
    }
    if (iVar2 != 0) {
      ExceptionList = pvStack_c;
      return;
    }
    if (DAT_010b9584 == '\0') {
      *(undefined4 *)((int)this + 0x30) = 1;
      ExceptionList = pvStack_c;
      return;
    }
  }
  else if (iVar2 != 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0099a910((int)this);
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_0099c150 @ 0099c150 ////

undefined4 __fastcall FUN_0099c150(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *_Memory;
  size_t sVar4;
  undefined4 uVar5;
  uint uVar6;
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
  puStack_8 = &LAB_00cf6126;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x34) != 0) {
    return *(undefined4 *)(param_1 + 0x34);
  }
  ExceptionList = &local_c;
  _sprintf(local_10c,"Data\\Textures\\Specials\\LowResShad\\%s");
  pcVar3 = local_10c;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = -(int)&stack0xfffffec0;
  pcVar3[(int)(&stack0xfffffebc + iVar2)] = 'l';
  pcVar3[(int)(&stack0xfffffebd + iVar2)] = 'o';
  pcVar3[(int)(&stack0xfffffebe + iVar2)] = 'w';
  local_12c = local_120;
  pcVar3 = local_10c;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar6 = (int)pcVar3 - (int)(local_10c + 1);
  if (0x13 < uVar6) {
    local_124 = uVar6 + 0x20 & 0xffffffe0;
    local_12c = _malloc(local_124);
  }
  _strncpy(local_12c,local_10c,uVar6);
  local_12c[uVar6] = '\0';
  local_4 = 0;
  local_128 = uVar6;
  uVar6 = FUN_009d3720(&local_12c);
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  if (uVar6 == 0) {
    FUN_0099bee0(param_1);
  }
  _Memory = operator_new(uVar6);
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
  sVar4 = FUN_009d3ca0(&local_12c,_Memory,uVar6,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  if (sVar4 != 0) {
    uVar5 = Pak_DecodeEntryData((int)_Memory);
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0099c360 @ 0099c360 ////

int * __thiscall FUN_0099c360(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int local_8;
  int local_4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x44), iVar2 != 0)) &&
     (*(int *)(param_1 + 0x48) != 0)) {
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x48);
    iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
    *(int *)((int)this + 8) = iVar2;
    uVar7 = *(int *)((int)this + 8) * *(int *)((int)this + 4);
    *(int *)this = iVar2 << 3;
    puVar3 = operator_new(uVar7);
    *(undefined4 **)((int)this + 0xc) = puVar3;
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    this_00 = FUN_0099bb50("DYNAMIC mask",-2,*(undefined4 *)this,*(undefined4 *)((int)this + 4),'\0'
                          );
    FUN_0099a9b0(this_00,0,param_1,0);
    local_8 = 0;
    local_4 = 0;
    MediaPlayer_LockVideoBuffer(this_00,&local_8);
    iVar2 = 0;
    if (0 < *(int *)((int)this + 4)) {
      param_1 = 0xc;
      do {
        iVar4 = 0;
        uVar5 = param_1;
        if (0 < *(int *)((int)this + 8)) {
          do {
            *(undefined1 *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4) = 0
            ;
            if (0x80 < (byte)((uint)*(undefined4 *)((uVar5 - 0xc) + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 1;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)((uVar5 - 8) + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 2;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)((uVar5 - 4) + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 4;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)(uVar5 + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 8;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)(uVar5 + 4 + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 0x10;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)(uVar5 + 8 + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 0x20;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)(uVar5 + 0xc + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 0x40;
            }
            if (0x80 < (byte)((uint)*(undefined4 *)(uVar5 + 0x10 + local_4) >> 0x18)) {
              pbVar6 = (byte *)(*(int *)((int)this + 8) * iVar2 + *(int *)((int)this + 0xc) + iVar4)
              ;
              *pbVar6 = *pbVar6 | 0x80;
            }
            iVar4 = iVar4 + 1;
            uVar5 = uVar5 + 0x20;
          } while (iVar4 < *(int *)((int)this + 8));
        }
        iVar2 = iVar2 + 1;
        param_1 = param_1 + ((int)(local_8 + (local_8 >> 0x1f & 3U)) >> 2) * 4;
      } while (iVar2 < *(int *)((int)this + 4));
    }
    piVar1 = *(int **)((int)this_00 + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x50))(piVar1,0);
    }
    FUN_0099b400(this_00);
  }
  return this;
}


//// FUNCTION FUN_0099c5b0 @ 0099c5b0 ////

undefined4 __thiscall FUN_0099c5b0(void *this,float param_1,float param_2)

{
  undefined4 uVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined2 uVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf613b;
  local_c = ExceptionList;
  uVar5 = (undefined2)((uint)ExceptionList >> 0x10);
  uVar1 = CONCAT22(uVar5,(ushort)(param_1 < 0.0) << 8 | (ushort)NAN(param_1) << 10 |
                         (ushort)(param_1 == 0.0) << 0xe);
  if (param_1 >= 0.0) {
    uVar1 = CONCAT22(uVar5,(ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                           (ushort)(param_2 == 0.0) << 0xe);
    if (param_2 >= 0.0) {
      uVar1 = CONCAT22(uVar5,(ushort)(param_1 < 1.0) << 8 | (ushort)NAN(param_1) << 10 |
                             (ushort)(param_1 == 1.0) << 0xe);
      if (param_1 < 1.0 || (param_1 == 1.0) != 0) {
        uVar1 = CONCAT22(uVar5,(ushort)(param_2 < 1.0) << 8 | (ushort)NAN(param_2) << 10 |
                               (ushort)(param_2 == 1.0) << 0xe);
        if (param_2 < 1.0 || (param_2 == 1.0) != 0) {
          iVar7 = 0;
          if (((*(int *)((int)this + 0x44) != 0) && (iVar7 = *(int *)((int)this + 0x48), iVar7 != 0)
              ) && ((*(byte *)((int)this + 0x54) & 8) != 0)) {
            ExceptionList = &local_c;
            if (*(int *)((int)this + 0x2c) == 0) {
              ExceptionList = &local_c;
              this_00 = operator_new(0x10);
              local_4 = 0;
              if (this_00 == (void *)0x0) {
                piVar2 = (int *)0x0;
              }
              else {
                piVar2 = FUN_0099c360(this_00,(uint)this);
              }
              *(int **)((int)this + 0x2c) = piVar2;
            }
            piVar2 = *(int **)((int)this + 0x2c);
            iVar3 = *piVar2;
            uVar8 = FUN_00acd42c();
            iVar7 = (int)uVar8;
            iVar4 = piVar2[1];
            uVar8 = FUN_00acd42c();
            iVar6 = (int)uVar8;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (iVar3 <= iVar7) {
              iVar7 = iVar3 + -1;
            }
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (iVar4 <= iVar6) {
              iVar6 = iVar4 + -1;
            }
            iVar3 = iVar7 + (iVar7 >> 0x1f & 7U);
            iVar4 = iVar3 >> 3;
            ExceptionList = local_c;
            return CONCAT31((int3)(iVar3 >> 0xb),
                            (*(byte *)(piVar2[2] * iVar6 + piVar2[3] + iVar4) &
                            (byte)(1 << ((char)iVar7 + (char)iVar4 * -8 & 0x1fU))) != 0);
          }
          return CONCAT31((int3)((uint)iVar7 >> 8),1);
        }
      }
    }
  }
  return uVar1;
}


//// FUNCTION FUN_0099c750 @ 0099c750 ////

void __thiscall FUN_0099c750(void *this,int param_1)

{
  if ((param_1 < 0) || (3 < param_1)) {
    param_1 = 3;
  }
  *(int *)this = param_1;
  switch(param_1) {
  case 0:
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0x14;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    DAT_00e67ba0 = FUN_009d0f30();
    DAT_00e67ba4 = DAT_00e67ba0;
    return;
  case 1:
    *(undefined4 *)((int)this + 4) = 2;
    *(undefined4 *)((int)this + 8) = 0x28;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 1;
    DAT_00e67ba0 = FUN_009d0f30();
    DAT_00e67ba4 = DAT_00e67ba0;
    return;
  case 2:
    *(undefined4 *)((int)this + 4) = 2;
    *(undefined4 *)((int)this + 8) = 0x28;
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x18) = 2;
    break;
  case 3:
    *(undefined4 *)((int)this + 4) = 3;
    *(undefined4 *)((int)this + 8) = 0x3c;
    *(undefined4 *)((int)this + 0xc) = 2;
    *(undefined4 *)((int)this + 0x18) = 3;
    break;
  default:
    goto switchD_0099c76f_default;
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x14) = 1;
switchD_0099c76f_default:
  DAT_00e67ba0 = FUN_009d0f30();
  DAT_00e67ba4 = DAT_00e67ba0;
  return;
}


//// FUNCTION FUN_0099c9e0 @ 0099c9e0 ////

void __cdecl FUN_0099c9e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0099cae0 @ 0099cae0 ////

int __cdecl FUN_0099cae0(int param_1)

{
  if (param_1 == 0) {
    if (DAT_0105be30 != 0) {
      return DAT_0105be34 - DAT_0105be30 >> 2;
    }
  }
  else if (DAT_0105be48 != 0) {
    return DAT_0105be4c - DAT_0105be48 >> 2;
  }
  return 0;
}


//// FUNCTION FUN_0099cc50 @ 0099cc50 ////

void __cdecl FUN_0099cc50(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0099ccd0 @ 0099ccd0 ////

long FUN_0099ccd0(void)

{
  long lVar1;
  undefined1 local_74 [8];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6170;
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
  local_4 = 0;
  FUN_00a05ff0(local_74,&local_6c,0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
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
  _strncpy(local_6c,"GD: Level",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a06260(local_74,&local_2c,&local_6c,&local_4c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  lVar1 = DAT_0105be08;
  if (local_28 != 0) {
    lVar1 = _atol(local_2c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_74);
  ExceptionList = local_c;
  return lVar1;
}


//// FUNCTION FUN_0099ce60 @ 0099ce60 ////

bool FUN_0099ce60(void)

{
  int iVar1;
  undefined1 local_74 [8];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf61a0;
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
  local_4 = 0;
  FUN_00a05ff0(local_74,&local_6c,0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
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
  _strncpy(local_6c,"GD: Screen Depth",0x10);
  local_68 = 0x10;
  local_6c[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a06260(local_74,&local_2c,&local_6c,&local_4c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  iVar1 = 0;
  if (local_28 != 0) {
    iVar1 = _atol(local_2c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_74);
  ExceptionList = local_c;
  return iVar1 != 0;
}


//// FUNCTION FUN_0099cff0 @ 0099cff0 ////

void __cdecl FUN_0099cff0(undefined4 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  undefined1 local_74 [8];
  char *local_6c;
  int local_68;
  uint local_64;
  char *local_4c;
  int local_48;
  uint local_44;
  char *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6215;
  local_c = ExceptionList;
  if ((DAT_0105be05 != '\0') && (DAT_0105be04 == '\0')) {
    *param_1 = 0;
    *param_2 = 800;
    *param_3 = 600;
    DAT_0105be08 = 0;
    return;
  }
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x40;
  ExceptionList = &local_c;
  local_b4 = _malloc(0x40);
  _strncpy(local_b4,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_b0 = 0x27;
  local_b4[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_74,&local_b4,0);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,"",0);
  local_90 = 0;
  *local_94 = '\0';
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"GD: Screen Depth",0x10);
  local_b0 = 0x10;
  local_b4[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a06260(local_74,&local_2c,&local_b4,&local_94);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  *param_1 = 0;
  if (local_28 != 0) {
    lVar1 = _atol(local_2c);
    if (lVar1 != 0) {
      *param_1 = 1;
    }
  }
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"",0);
  local_b0 = 0;
  *local_b4 = '\0';
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,"GD: Screen Width",0x10);
  local_90 = 0x10;
  local_94[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_00a06260(local_74,&local_4c,&local_94,&local_b4);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  *param_2 = 0x400;
  if (local_48 != 0) {
    lVar1 = _atol(local_4c);
    *param_2 = lVar1;
  }
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"",0);
  local_b0 = 0;
  *local_b4 = '\0';
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,"GD: Screen Height",0x11);
  local_90 = 0x11;
  local_94[0x11] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xe);
  FUN_00a06260(local_74,&local_6c,&local_94,&local_b4);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  *param_3 = 0x300;
  if (local_68 != 0) {
    lVar1 = _atol(local_6c);
    *param_3 = lVar1;
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_74);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0099d420 @ 0099d420 ////

void * FUN_0099d420(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0099d450 @ 0099d450 ////

void __cdecl FUN_0099d450(undefined4 param_1)

{
  size_t sVar1;
  undefined1 local_74 [8];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [52];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf6240;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar1 = _sprintf((char *)&local_6c,(char *)&param_2_00d1b93c,param_1);
  FUN_004073f0(&local_2c,(char *)&local_6c,sVar1);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_68 = 0x27;
  local_6c[0x27] = '\0';
  local_4._0_1_ = 1;
  FUN_00a05ff0(local_74,&local_6c,0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"GD: Level",9);
  local_68 = 9;
  local_6c[9] = '\0';
  local_4._0_1_ = 4;
  FUN_00a061a0(local_74,&local_6c,&local_2c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a05fe0((int)local_74);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0099d5c0 @ 0099d5c0 ////

void __cdecl FUN_0099d5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [52];
  undefined1 local_74 [8];
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
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
  puStack_8 = &LAB_00cf629c;
  local_c = ExceptionList;
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x40;
  ExceptionList = &local_c;
  local_b4 = _malloc(0x40);
  _strncpy(local_b4,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_b0 = 0x27;
  local_b4[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_74,&local_b4,0);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  sVar1 = _sprintf((char *)&local_b4,(char *)&param_2_00d1b93c,param_1);
  FUN_004073f0(&local_2c,(char *)&local_b4,sVar1);
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"GD: Screen Depth",0x10);
  local_b0 = 0x10;
  local_b4[0x10] = '\0';
  local_4._0_1_ = 4;
  FUN_00a061a0(local_74,&local_b4,&local_2c);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  sVar1 = _sprintf((char *)&local_b4,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(&local_4c,(char *)&local_b4,sVar1);
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"GD: Screen Width",0x10);
  local_b0 = 0x10;
  local_b4[0x10] = '\0';
  local_4._0_1_ = 6;
  FUN_00a061a0(local_74,&local_b4,&local_4c);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  sVar1 = _sprintf((char *)&local_b4,(char *)&param_2_00d1b93c,param_3);
  FUN_004073f0(&local_6c,(char *)&local_b4,sVar1);
  local_b4 = local_a8;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"GD: Screen Height",0x11);
  local_b0 = 0x11;
  local_b4[0x11] = '\0';
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00a061a0(local_74,&local_b4,&local_6c);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_74);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0099d8d0 @ 0099d8d0 ////

void __fastcall FUN_0099d8d0(int param_1)

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


//// FUNCTION FUN_0099d900 @ 0099d900 ////

void __fastcall FUN_0099d900(int param_1)

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


//// FUNCTION FUN_0099d930 @ 0099d930 ////

undefined4 * FUN_0099d930(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0099d960 @ 0099d960 ////

void __fastcall FUN_0099d960(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_009d9820();
  FUN_009d9820();
  iVar2 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
    }
    if (iVar1 <= iVar2) break;
    FUN_009d9820();
    iVar2 = iVar2 + 1;
  }
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_0099d9d0 @ 0099d9d0 ////

void __cdecl FUN_0099d9d0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    if ((DAT_0105be30 != 0) && (iVar1 = DAT_0105be34 - DAT_0105be30 >> 2, iVar1 != 0)) {
      if ((param_2 < 0) || (iVar1 <= param_2)) {
        param_2 = 0;
      }
      *param_3 = **(undefined4 **)(param_2 * 4 + DAT_0105be30);
      *param_4 = *(undefined4 *)(*(int *)(param_2 * 4 + DAT_0105be30) + 4);
      return;
    }
  }
  else if ((DAT_0105be48 != 0) && (iVar1 = DAT_0105be4c - DAT_0105be48 >> 2, iVar1 != 0)) {
    if ((param_2 < 0) || (iVar1 <= param_2)) {
      param_2 = 0;
    }
    *param_3 = **(undefined4 **)(param_2 * 4 + DAT_0105be48);
    *param_4 = *(undefined4 *)(*(int *)(param_2 * 4 + DAT_0105be48) + 4);
  }
  return;
}


//// FUNCTION FUN_0099da80 @ 0099da80 ////

undefined4 * __cdecl FUN_0099da80(undefined4 *param_1,int param_2,int param_3)

{
  size_t sVar1;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf62b8;
  local_c = ExceptionList;
  local_74 = 0x400;
  local_70 = 0x300;
  ExceptionList = &local_c;
  FUN_0099d9d0(param_2,param_3,&local_74,&local_70);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,local_74);
  FUN_004073f0(&local_6c,local_4c,sVar1);
  FUN_004073f0(&local_6c,"x",1);
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,local_70);
  FUN_004073f0(&local_6c,local_4c,sVar1);
  FUN_009acf60(param_1,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0099db90 @ 0099db90 ////

void __cdecl FUN_0099db90(int param_1,int param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0099d9d0(param_1,param_2,&local_4,&local_8);
  FUN_0099d5c0(param_1,local_4,local_8);
  return;
}


//// FUNCTION FUN_0099dbd0 @ 0099dbd0 ////

int __cdecl FUN_0099dbd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_8;
  
  puVar6 = &DAT_0105be3c;
  if (param_1 != 1) {
    puVar6 = &DAT_0105be24;
  }
  if ((*(int *)(puVar6 + 0xc) != 0) && (*(int *)(puVar6 + 0x10) - *(int *)(puVar6 + 0xc) >> 2 != 0))
  {
    piVar2 = *(int **)(puVar6 + 0xc);
    piVar1 = (int *)*piVar2;
    iVar10 = piVar1[1] * *piVar1;
    local_8 = 0;
    if ((param_2 == *piVar1) && (param_3 == piVar1[1])) {
      return 0;
    }
    iVar9 = 1;
    while( true ) {
      piVar2 = piVar2 + 1;
      if (*(int *)(puVar6 + 0xc) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(puVar6 + 0x10) - *(int *)(puVar6 + 0xc) >> 2;
      }
      if (iVar3 <= iVar9) break;
      piVar1 = (int *)*piVar2;
      if ((param_2 == *piVar1) && (param_3 == piVar1[1])) {
        return iVar9;
      }
      iVar3 = piVar1[1] * *piVar1;
      uVar4 = param_2 * param_3 - iVar3;
      uVar7 = (int)uVar4 >> 0x1f;
      uVar5 = param_2 * param_3 - iVar10;
      uVar8 = (int)uVar5 >> 0x1f;
      if ((int)((uVar4 ^ uVar7) - uVar7) < (int)((uVar5 ^ uVar8) - uVar8)) {
        iVar10 = iVar3;
        local_8 = iVar9;
      }
      iVar9 = iVar9 + 1;
    }
    return local_8;
  }
  return 0;
}


//// FUNCTION FUN_0099dcd0 @ 0099dcd0 ////

uint __cdecl FUN_0099dcd0(byte *param_1)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    return in_EAX & 0xffffff00;
  }
  iVar5 = 0;
  do {
    if (DAT_0105be58 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = DAT_0105be5c - DAT_0105be58 >> 2;
    }
    if ((int)uVar2 <= iVar5) {
      return uVar2 & 0xffffff00;
    }
    pbVar6 = *(byte **)(DAT_0105be58 + iVar5 * 4);
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0099dd26:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0099dd2b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0099dd26;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0099dd2b:
    if (iVar4 == 0) {
      return 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_0099dd40 @ 0099dd40 ////

void __fastcall FUN_0099dd40(int param_1)

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


//// FUNCTION FUN_0099dd70 @ 0099dd70 ////

void __fastcall FUN_0099dd70(int param_1)

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


//// FUNCTION FUN_0099dda0 @ 0099dda0 ////

void __fastcall FUN_0099dda0(int param_1)

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


//// FUNCTION FUN_0099ddd0 @ 0099ddd0 ////

void __fastcall FUN_0099ddd0(int param_1)

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


//// FUNCTION FUN_0099de00 @ 0099de00 ////

void __fastcall FUN_0099de00(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  _Memory = *(undefined4 **)(param_1 + 0xc);
  if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*_Memory);
  }
  if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0099de70 @ 0099de70 ////

void __cdecl FUN_0099de70(int param_1)

{
  int local_8;
  int local_4;
  
  FUN_0099cff0(&param_1,&local_4,&local_8);
  FUN_0099dbd0(param_1,local_4,local_8);
  return;
}


//// FUNCTION FUN_0099dea0 @ 0099dea0 ////

void FUN_0099dea0(void)

{
  int iVar1;
  
  if (DAT_0105be58 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_0105be5c - (int)DAT_0105be58 >> 2;
  }
  if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*DAT_0105be58);
  }
  if (DAT_0105be58 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105be58);
  }
  DAT_0105be58 = (undefined4 *)0x0;
  DAT_0105be5c = 0;
  DAT_0105be60 = 0;
  return;
}


//// FUNCTION FUN_0099df10 @ 0099df10 ////

void __fastcall FUN_0099df10(int param_1)

{
  FUN_0099de00(param_1);
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0099df40 @ 0099df40 ////

void __fastcall FUN_0099df40(int param_1)

{
  FUN_0099de00(param_1 + 0x18);
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0099de00(param_1);
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0099df90 @ 0099df90 ////

void __fastcall FUN_0099df90(int param_1)

{
  FUN_0099df40(param_1 + 0x1c);
  return;
}


//// FUNCTION FUN_0099dfa0 @ 0099dfa0 ////

void FUN_0099dfa0(void)

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
  puStack_8 = &LAB_00cf62d8;
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


//// FUNCTION FUN_0099e010 @ 0099e010 ////

void FUN_0099e010(void)

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
  puStack_8 = &LAB_00cf62f8;
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


//// FUNCTION FUN_0099e120 @ 0099e120 ////

void __thiscall FUN_0099e120(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0099e010();
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
      _Dst = FUN_0099d930((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0099d420(param_1,iVar5,param_1 + param_2);
      FUN_0099d930(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0099c9e0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0099d420(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0099cc50(param_1,(int)pvVar3,iVar5);
    FUN_0099c9e0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0099e3b0 @ 0099e3b0 ////

undefined1 * __fastcall FUN_0099e3b0(undefined1 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar1 = ExceptionList;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x15;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x15;
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  ExceptionList = pvVar1;
  return param_1;
}


//// FUNCTION FUN_0099e490 @ 0099e490 ////

void * __fastcall FUN_0099e490(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6383;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0099e3b0((undefined1 *)((int)param_1 + 0x1c));
  local_6c = local_60;
  local_4 = 0;
  DAT_0105be08 = 3;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_68 = 0x27;
  local_6c[0x27] = '\0';
  local_4._0_1_ = 1;
  FUN_00a05ff0(local_74,&local_6c,0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"First Time:",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_4._0_1_ = 4;
  DAT_0105be04 = FUN_00a060c0(local_74,&local_4c,1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"First Time:",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_4._0_1_ = 5;
  FUN_00a06160(local_74,&local_4c,0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x40;
  local_4c = _malloc(0x40);
  _strncpy(local_4c,"SOFTWARE\\Lionhead Studios Ltd\\TheMovies\\",0x28);
  local_48 = 0x28;
  local_4c[0x28] = '\0';
  local_4._0_1_ = 6;
  FUN_00a05ff0(local_7c,&local_4c,1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"SC2",3);
  local_28 = 3;
  local_2c[3] = '\0';
  local_4._0_1_ = 9;
  DAT_0105be00 = FUN_00a06070(local_7c,&local_2c,0);
  local_4._0_1_ = 8;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (DAT_0105be04 == '\0') {
    local_4._0_1_ = uVar1;
    if (DAT_0105be05 == '\0') {
      iVar2 = FUN_0099ccd0();
    }
    else {
      iVar2 = 0;
    }
    FUN_0099c750(param_1,iVar2);
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Hdr",3);
    local_28 = 3;
    local_2c[3] = '\0';
    local_4._0_1_ = 10;
    iVar2 = FUN_00a06070(local_7c,&local_2c,1);
    iVar2 = iVar2 + 1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SC1",3);
    local_28 = 3;
    local_2c[3] = '\0';
    local_4._0_1_ = 0xb;
    iVar3 = FUN_00a06070(local_7c,&local_2c,0);
    local_4._0_1_ = 8;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (iVar3 != 0) {
      FUN_0099d5c0(0,800,600);
      DAT_0105be05 = '\x01';
      iVar2 = 0;
    }
    FUN_0099c750(param_1,iVar2);
    FUN_0099d450(iVar2);
  }
  local_4._0_1_ = 3;
  FUN_00a05fe0((int)local_7c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a05fe0((int)local_74);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0099e840 @ 0099e840 ////

void FUN_0099e840(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *local_164;
  undefined4 local_160 [18];
  int local_118;
  int local_114;
  char local_10c;
  char local_10b [255];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf639b;
  local_c = ExceptionList;
  if (DAT_0105be58 != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105be58);
  }
  DAT_0105be58 = (void *)0x0;
  DAT_0105be5c = (undefined4 *)0x0;
  DAT_0105be60 = 0;
  ExceptionList = &local_c;
  FUN_009c89a0(local_160);
  local_4 = 0;
  FUN_009ca9d0(local_160,"lp_*.msh","Data\\Meshes",(undefined1 *)0x1);
  iVar5 = 0;
LAB_0099e8b0:
  do {
    if (local_118 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_114 - local_118 >> 2;
    }
    if (iVar2 <= iVar5) {
      local_4 = 0xffffffff;
      FUN_009c8560(local_160);
      ExceptionList = local_c;
      return;
    }
    pcVar4 = *(char **)(local_118 + iVar5 * 4);
    pcVar3 = _strrchr(pcVar4,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3 + 1;
    }
    _sprintf(&local_10c,pcVar4);
    FUN_009ac040(&local_10c);
    iVar2 = _strncmp(&local_10c,(char *)&PTR_LAB_00d7164c,3);
    if (iVar2 == 0) {
      pcVar4 = operator_new(0x20);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4[4] = '\0';
        pcVar4[5] = '\0';
        pcVar4[6] = '\0';
        pcVar4[7] = '\0';
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
        pcVar4[0xc] = '\0';
        pcVar4[0xd] = '\0';
        pcVar4[0xe] = '\0';
        pcVar4[0xf] = '\0';
        pcVar4[0x10] = '\0';
        pcVar4[0x11] = '\0';
        pcVar4[0x12] = '\0';
        pcVar4[0x13] = '\0';
        pcVar4[0x14] = '\0';
        pcVar4[0x15] = '\0';
        pcVar4[0x16] = '\0';
        pcVar4[0x17] = '\0';
        pcVar4[0x18] = '\0';
        pcVar4[0x19] = '\0';
        pcVar4[0x1a] = '\0';
        pcVar4[0x1b] = '\0';
        pcVar4[0x1c] = '\0';
        pcVar4[0x1d] = '\0';
        pcVar4[0x1e] = '\0';
        pcVar4[0x1f] = '\0';
      }
      local_164 = pcVar4;
      _sprintf(pcVar4,local_10b);
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (5 < (int)pcVar3 - (int)(pcVar4 + 1)) {
        pcVar4[((int)pcVar3 - (int)(pcVar4 + 1)) + -4] = '\0';
      }
      if ((DAT_0105be58 != (void *)0x0) &&
         ((uint)((int)DAT_0105be5c - (int)DAT_0105be58 >> 2) <
          (uint)(DAT_0105be60 - (int)DAT_0105be58 >> 2))) {
        *DAT_0105be5c = pcVar4;
        iVar5 = iVar5 + 1;
        DAT_0105be5c = DAT_0105be5c + 1;
        goto LAB_0099e8b0;
      }
      FUN_0099e120(&DAT_0105be54,DAT_0105be5c,1,&local_164);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_0099eb80 @ 0099eb80 ////

void __fastcall FUN_0099eb80(int *param_1)

{
  uint uVar1;
  void *this;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_8;
  undefined4 *local_4;
  
  if ((*param_1 == 0) && ((*(byte *)(param_1 + 1) & 2) == 0)) {
    uVar1 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) + 0x20;
    this = FUN_0099bb50("Dyn. Shadow",DAT_0105c2dc,uVar1,uVar1,'\0');
    *param_1 = (int)this;
    local_8 = 0;
    local_4 = (undefined4 *)0x0;
    MediaPlayer_LockVideoBuffer(this,&local_8);
    if (local_4 != (undefined4 *)0x0) {
      uVar5 = uVar1;
      if (DAT_0105c2dc != 0x32) {
        uVar5 = uVar1 * 2;
      }
      puVar4 = local_4;
      if (0 < (int)uVar1) {
        do {
          puVar6 = puVar4;
          for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = 0xffffffff;
            puVar6 = puVar6 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar6 = 0xff;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          puVar4 = (undefined4 *)((int)puVar4 + local_8);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    MediaPlayer_UnlockVideoBuffer(*param_1);
  }
  return;
}


//// FUNCTION FUN_0099ec30 @ 0099ec30 ////

void __cdecl FUN_0099ec30(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    for (uVar1 = (((DAT_0105be0c == 3) - 1 & 0xfffffff0) + 0x1e) *
                 (((DAT_0105be0c == 3) - 1 & 0xfffffff0) + 0x1e) & 0x3fffffff; uVar1 != 0;
        uVar1 = uVar1 - 1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)param_1 = 0xff;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}


//// FUNCTION FUN_0099ec80 @ 0099ec80 ////

void FUN_0099ec80(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_60 [3];
  undefined1 local_54;
  uint local_50;
  int local_48;
  float local_3c;
  float local_30;
  float local_24;
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf63b8;
  local_c = ExceptionList;
  if (DAT_0105bec5 == '\0') {
    ExceptionList = &local_c;
    FUN_009910f0(local_60);
    iVar9 = 0;
    local_50 = local_50 & 0xbeffffff;
    iVar10 = 0;
    local_4 = 0;
    local_54 = 0x19;
    if (0 < DAT_0105be10) {
      do {
        piVar1 = (int *)(DAT_0105be74 + iVar9);
        if ((*(byte *)(piVar1 + 1) & 1) == 0) {
          if (local_48 != *piVar1) {
            Engine_SetResourceReference(local_60,*piVar1);
          }
          iVar8 = DAT_00e67b70;
          iVar2 = piVar1[0x13];
          piVar6 = (int *)DAT_0105be68[10];
          *piVar6 = piVar1[0x12];
          piVar6[1] = iVar2;
          piVar6[2] = iVar8;
          iVar8 = DAT_00e67b70;
          iVar2 = piVar1[0x13];
          piVar6[6] = piVar1[0x14];
          piVar6[7] = iVar2;
          piVar6[8] = iVar8;
          iVar8 = DAT_00e67b70;
          iVar2 = piVar1[0x15];
          piVar6[0xc] = piVar1[0x14];
          piVar6[0xd] = iVar2;
          piVar6[0xe] = iVar8;
          iVar8 = DAT_00e67b70;
          iVar2 = piVar1[0x15];
          piVar6[0x12] = piVar1[0x12];
          piVar6[0x13] = iVar2;
          piVar6[0x14] = iVar8;
          DAT_0105be68[0x10] = (int)local_60;
          FUN_009e6680(DAT_0105be68);
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0xdc;
      } while (iVar10 < DAT_0105be10);
    }
    local_54 = 5;
    iVar9 = 0;
    do {
      piVar1 = (int *)(iVar9 + DAT_0105be70);
      if (((piVar1[1] & 1U) == 0) && ((piVar1[1] & 4U) != 0)) {
        if (local_48 != *piVar1) {
          Engine_SetResourceReference(local_60,*piVar1);
        }
        pfVar7 = (float *)DAT_0105be68[10];
        local_18 = -(float)piVar1[0x19];
        fVar3 = (float)piVar1[0x18];
        fVar4 = (float)piVar1[0x17];
        *pfVar7 = local_18 + (float)piVar1[0x16];
        pfVar7[1] = local_18 + fVar4;
        pfVar7[2] = fVar3;
        fVar3 = (float)piVar1[0x19];
        local_3c = (float)piVar1[0x19];
        fVar4 = (float)piVar1[0x18];
        fVar5 = (float)piVar1[0x17];
        pfVar7[6] = local_3c + (float)piVar1[0x16];
        pfVar7[7] = -fVar3 + fVar5;
        pfVar7[8] = fVar4;
        fVar3 = (float)piVar1[0x18];
        local_24 = (float)piVar1[0x19];
        fVar4 = (float)piVar1[0x17];
        pfVar7[0xc] = local_24 + (float)piVar1[0x16];
        pfVar7[0xd] = local_24 + fVar4;
        pfVar7[0xe] = fVar3;
        fVar5 = (float)piVar1[0x19];
        local_30 = -(float)piVar1[0x19];
        fVar3 = (float)piVar1[0x18];
        fVar4 = (float)piVar1[0x17];
        pfVar7[0x12] = local_30 + (float)piVar1[0x16];
        pfVar7[0x13] = fVar5 + fVar4;
        pfVar7[0x14] = fVar3;
        pfVar7 = (float *)DAT_0105be68[10];
        fVar3 = *pfVar7;
        fVar4 = pfVar7[1];
        fVar5 = pfVar7[2];
        *pfVar7 = fVar3 * (float)piVar1[0x1b] +
                  fVar4 * (float)piVar1[0x1e] + fVar5 * (float)piVar1[0x21] + (float)piVar1[0x24];
        pfVar7[1] = fVar3 * (float)piVar1[0x1c] +
                    fVar4 * (float)piVar1[0x1f] + fVar5 * (float)piVar1[0x22] + (float)piVar1[0x25];
        pfVar7[2] = fVar3 * (float)piVar1[0x1d] +
                    fVar4 * (float)piVar1[0x20] + fVar5 * (float)piVar1[0x23] + (float)piVar1[0x26];
        fVar3 = pfVar7[6];
        fVar4 = pfVar7[7];
        fVar5 = pfVar7[8];
        pfVar7[6] = fVar3 * (float)piVar1[0x1b] +
                    fVar4 * (float)piVar1[0x1e] + fVar5 * (float)piVar1[0x21] + (float)piVar1[0x24];
        pfVar7[7] = fVar3 * (float)piVar1[0x1c] +
                    fVar4 * (float)piVar1[0x1f] + fVar5 * (float)piVar1[0x22] + (float)piVar1[0x25];
        pfVar7[8] = fVar3 * (float)piVar1[0x1d] +
                    fVar4 * (float)piVar1[0x20] + fVar5 * (float)piVar1[0x23] + (float)piVar1[0x26];
        fVar3 = pfVar7[0xc];
        fVar4 = pfVar7[0xd];
        fVar5 = pfVar7[0xe];
        pfVar7[0xc] = fVar3 * (float)piVar1[0x1b] +
                      fVar4 * (float)piVar1[0x1e] + fVar5 * (float)piVar1[0x21] +
                      (float)piVar1[0x24];
        pfVar7[0xd] = fVar3 * (float)piVar1[0x1c] +
                      fVar4 * (float)piVar1[0x1f] + fVar5 * (float)piVar1[0x22] +
                      (float)piVar1[0x25];
        pfVar7[0xe] = fVar3 * (float)piVar1[0x1d] +
                      fVar4 * (float)piVar1[0x20] + fVar5 * (float)piVar1[0x23] +
                      (float)piVar1[0x26];
        fVar3 = pfVar7[0x12];
        fVar4 = pfVar7[0x13];
        fVar5 = pfVar7[0x14];
        pfVar7[0x12] = fVar3 * (float)piVar1[0x1b] +
                       fVar4 * (float)piVar1[0x1e] + fVar5 * (float)piVar1[0x21] +
                       (float)piVar1[0x24];
        pfVar7[0x13] = fVar3 * (float)piVar1[0x1c] +
                       fVar4 * (float)piVar1[0x1f] + fVar5 * (float)piVar1[0x22] +
                       (float)piVar1[0x25];
        pfVar7[0x14] = fVar3 * (float)piVar1[0x1d] +
                       fVar4 * (float)piVar1[0x20] + fVar5 * (float)piVar1[0x23] +
                       (float)piVar1[0x26];
        DAT_0105be68[0x10] = (int)local_60;
        FUN_009e6680(DAT_0105be68);
      }
      iVar9 = iVar9 + 0xdc;
    } while (iVar9 < 0x2260);
    local_4 = 0xffffffff;
    FUN_00990ec0((int)local_60);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0099f150 @ 0099f150 ////

int * __cdecl FUN_0099f150(float *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  
  iVar4 = DAT_0105be10;
  iVar1 = DAT_0105be74;
  if (param_2 == '\0') {
    iVar4 = 0x28;
    iVar1 = DAT_0105be70;
  }
  piVar2 = (int *)0x0;
  if (0 < iVar4) {
    pfVar5 = (float *)(iVar1 + 0x54);
    piVar3 = piVar2;
    do {
      piVar2 = piVar3;
      if ((((((uint)pfVar5[-0x14] & 1) == 0) && (*param_1 <= pfVar5[-1])) &&
          (pfVar5[-3] <= param_1[2])) &&
         (((param_1[1] <= *pfVar5 && (pfVar5[-2] <= param_1[3])) && (((uint)pfVar5[-0x14] & 4) != 0)
          ))) {
        piVar2 = (int *)FUN_0097ee30();
        piVar2[1] = (int)piVar3;
        *piVar2 = (int)(pfVar5 + -0x15);
      }
      pfVar5 = pfVar5 + 0x37;
      iVar4 = iVar4 + -1;
      piVar3 = piVar2;
    } while (iVar4 != 0);
  }
  return piVar2;
}


//// FUNCTION FUN_0099f1f0 @ 0099f1f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0099f1f0(float *param_1,void *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [24];
  
  FUN_00a47a40(param_2,local_60,param_3);
  iVar2 = 0;
  do {
    local_6c = local_60[iVar2 * 3] - _DAT_00e67b78;
    local_68 = local_60[iVar2 * 3 + 1] - _DAT_00e67b7c;
    local_64 = local_60[iVar2 * 3 + 2] - _DAT_00e67b80;
    FUN_009a1c90(&local_74,local_60 + iVar2 * 3,&local_6c);
    if (iVar2 == 0) {
      *param_1 = local_74;
      param_1[1] = local_70;
      param_1[2] = local_74;
      param_1[3] = local_70;
    }
    else {
      fVar1 = local_74;
      if (*param_1 < local_74) {
        fVar1 = *param_1;
      }
      *param_1 = fVar1;
      fVar1 = local_70;
      if (param_1[1] < local_70) {
        fVar1 = param_1[1];
      }
      param_1[1] = fVar1;
      fVar1 = local_74;
      if (local_74 < param_1[2]) {
        fVar1 = param_1[2];
      }
      param_1[2] = fVar1;
      if (param_1[3] <= local_70) {
        param_1[3] = local_70;
      }
      else {
        param_1[3] = param_1[3];
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}


//// FUNCTION FUN_0099f2f0 @ 0099f2f0 ////

void __fastcall FUN_0099f2f0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x108) = 0;
    puVar1 = *(undefined4 **)(param_1 + 0xd8);
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0099f350 @ 0099f350 ////

void __thiscall FUN_0099f350(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_0097e350(param_1,0);
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xe6) & 1) != 0)) {
    FUN_0099f2f0((int)this);
    puVar3 = (undefined4 *)((int)param_1 + 0x48);
    puVar4 = (undefined4 *)((int)this + 0x9c);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)((int)param_1 + 0x3c);
    *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)((int)param_1 + 0x40);
    uVar1 = *(undefined4 *)((int)param_1 + 0x44);
    *(void **)((int)this + 0xd8) = param_1;
    *(undefined4 *)((int)this + 0xd4) = uVar1;
    InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    *(void **)(*(int *)((int)this + 0xd8) + 0x108) = this;
  }
  return;
}


//// FUNCTION FUN_0099f3d0 @ 0099f3d0 ////

void __thiscall FUN_0099f3d0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [16];
  
  if (param_1 == *(int *)((int)this + 0xd8)) {
    FUN_009aa310(local_40,(undefined4 *)((int)this + 0x9c));
    FUN_009aaad0((void *)((int)this + 8),local_40);
    FUN_009aa310(local_40,(undefined4 *)(param_1 + 0x18));
    FUN_009aaad0((void *)((int)this + 8),local_40);
    local_4c = *(float *)(param_1 + 0x3c) - *(float *)((int)this + 0xcc);
    local_48 = *(float *)(param_1 + 0x40) - *(float *)((int)this + 0xd0);
    local_44 = *(float *)(param_1 + 0x44) - *(float *)((int)this + 0xd4);
    FUN_009840b0(&local_54,&local_4c);
    *(float *)((int)this + 0x48) = local_54 + *(float *)((int)this + 0x48);
    *(float *)((int)this + 0x4c) = local_50 + *(float *)((int)this + 0x4c);
    *(float *)((int)this + 0x50) = local_54 + *(float *)((int)this + 0x50);
    *(float *)((int)this + 0x54) = local_50 + *(float *)((int)this + 0x54);
    *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0x44);
    puVar2 = (undefined4 *)(param_1 + 0x48);
    puVar3 = (undefined4 *)((int)this + 0x9c);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_0099f4b0 @ 0099f4b0 ////

undefined4 * __fastcall FUN_0099f4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x11] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  puVar2 = param_1;
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = param_1[1] | 1;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[2] = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_0099f5c0 @ 0099f5c0 ////

void __fastcall FUN_0099f5c0(undefined4 *param_1)

{
  param_1[1] = param_1[1] | 1;
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0099b400((void *)*param_1);
    *param_1 = 0;
  }
  FUN_0099f2f0((int)param_1);
  return;
}


//// FUNCTION FUN_0099f5e0 @ 0099f5e0 ////

void FUN_0099f5e0(void)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  LONG LVar5;
  int iVar6;
  int local_4;
  
  local_4 = 0;
  if (0 < DAT_0105be10) {
    iVar6 = 0;
    do {
      puVar1 = (uint *)(DAT_0105be74 + 4 + iVar6);
      *puVar1 = *puVar1 | 1;
      piVar2 = (int *)(DAT_0105be74 + 0xd8 + iVar6);
      if (*piVar2 != 0) {
        *(undefined4 *)(*piVar2 + 0x108) = 0;
        puVar3 = (undefined4 *)*piVar2;
        if (puVar3 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar3 + 4);
          uVar4 = DAT_0105b588;
          if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          DAT_0105b588 = uVar4;
          *piVar2 = 0;
        }
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0xdc;
    } while (local_4 < DAT_0105be10);
  }
  return;
}


//// FUNCTION FUN_0099f680 @ 0099f680 ////

int * __cdecl FUN_0099f680(char param_1,void *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_30 [12];
  
  if (DAT_0105be08 == 0) {
    return (int *)0x0;
  }
  iVar3 = DAT_0105be70;
  if (param_1 != '\0') {
    if (DAT_0105be0c == 0) {
      return (int *)0x0;
    }
    if (DAT_0105be64 == '\0') {
      return (int *)0x0;
    }
    if (param_2 == (void *)0x0) {
      return (int *)0x0;
    }
    FUN_0097f1f0(param_2,local_30);
    fVar5 = (float10)FUN_00412f50();
    iVar3 = DAT_0105be74;
    if (fVar5 < (float10)0.0001) {
      return (int *)0x0;
    }
  }
  iVar1 = 0;
  if (0 < DAT_0105be10) {
    pbVar2 = (byte *)(iVar3 + 4);
    do {
      if ((*pbVar2 & 1) != 0) {
        piVar4 = (int *)(iVar3 + iVar1 * 0xdc);
        piVar4[1] = *(uint *)(iVar3 + 4 + iVar1 * 0xdc) & 0xfffffffe;
        if (*piVar4 == 0) {
          FUN_0099eb80(piVar4);
        }
        if (param_1 != '\0') {
          piVar4[1] = piVar4[1] | 4;
          return piVar4;
        }
        piVar4[1] = piVar4[1] & 0xfffffffb;
        return piVar4;
      }
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 0xdc;
    } while (iVar1 < DAT_0105be10);
  }
  return (int *)0x0;
}


//// FUNCTION FUN_0099f770 @ 0099f770 ////

void __thiscall FUN_0099f770(void *this,float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [5];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  if ((*(byte *)((int)this + 4) & 2) != 0) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_80 = 0x3f800000;
    local_90 = 0x3f800000;
    local_a0 = 0x3f800000;
    local_7c = -*param_1;
    local_78 = -param_1[1];
    local_74 = -param_1[2];
    FUN_00527db0(&local_a0,param_3);
    local_7c = local_7c + *param_2;
    local_78 = param_2[1] + local_78;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_54 = 0;
    local_58 = 0;
    local_5c = 0;
    local_70[3] = 0.0;
    local_70[2] = 0.0;
    local_70[1] = 0.0;
    local_50 = 0x3f800000;
    local_70[0] = 1.0 / (fVar1 + fVar1);
    local_70[4] = 1.0 / (fVar2 + fVar2);
    FUN_009aa830(&local_a0,local_70);
    FUN_009aa310(local_40,&local_a0);
    puVar4 = local_40;
    puVar5 = (undefined4 *)((int)this + 8);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_009aad40((undefined4 *)((int)this + 8),(float *)&DAT_0105c328);
    *(float *)((int)this + 0x58) = *param_1;
    *(float *)((int)this + 0x5c) = param_1[1];
    *(float *)((int)this + 0x60) = param_1[2];
    *(float *)((int)this + 100) = *param_2;
    *(float *)((int)this + 0x68) = param_3;
    *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
    *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
    *(float *)((int)this + 0x90) = -*(float *)((int)this + 100);
    *(undefined4 *)((int)this + 0x6c) = 0x3f800000;
    *(float *)((int)this + 0x94) = -*(float *)((int)this + 100);
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    FUN_00527db0((undefined4 *)((int)this + 0x6c),param_3);
    *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)this + 0x98);
    *(float *)((int)this + 0x90) = *(float *)((int)this + 100) + *(float *)((int)this + 0x90);
    *(float *)((int)this + 0x94) = *(float *)((int)this + 100) + *(float *)((int)this + 0x94);
  }
  return;
}


//// FUNCTION FUN_0099f9b0 @ 0099f9b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0099f9b0(void *this,undefined4 param_1,void *param_2,int param_3,int param_4)

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
  float fVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  byte *pbVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  byte *pbVar26;
  int iVar27;
  int iVar28;
  ushort *puVar29;
  ushort *puVar30;
  undefined4 *puVar31;
  float *pfVar32;
  undefined4 *puVar33;
  float10 fVar34;
  int local_12c;
  byte *local_128;
  int local_124;
  int local_120;
  int local_104;
  int local_100;
  float *local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4 [13];
  undefined4 local_b0 [13];
  float local_7c [12];
  undefined4 local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf63db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0099f350(this,param_2);
  local_ec = -_DAT_00e67b7c;
  local_f0 = -_DAT_00e67b78;
  local_e8 = ABS(-_DAT_00e67b80);
  FUN_00412e20(&local_f0);
  pbVar21 = DAT_0105be7c;
  if ((*(byte *)((int)this + 4) & 8) == 0) {
    pbVar21 = DAT_0105be78;
  }
  FUN_0099ec30((undefined4 *)pbVar21);
  pfVar25 = (float *)((int)this + 0x48);
  *pfVar25 = 3.4028235e+38;
  *(undefined4 *)((int)this + 0x4c) = 0x7f7fffff;
  local_f8 = -3.4028235e+38;
  *(undefined4 *)((int)this + 0x50) = 0xff7fffff;
  local_f4 = 0xff7fffff;
  *(undefined4 *)((int)this + 0x54) = 0xff7fffff;
  puVar29 = *(ushort **)(param_3 + 0xc);
  uVar23 = (uint)*puVar29;
  pfVar32 = (float *)(param_4 + 8);
  fVar1 = local_ec * (1.0 / local_e8);
  local_f0 = (1.0 / local_e8) * local_f0;
  if (uVar23 < 0x8001) {
    local_fc = pfVar32;
    fVar34 = FUN_0097e510((int)param_2);
    if (uVar23 != 0) {
      iVar22 = 0;
      uVar24 = uVar23;
      do {
        iVar18 = *(int *)(puVar29 + 10);
        fVar14 = *(float *)(iVar18 + iVar22);
        iVar18 = iVar18 + iVar22;
        fVar15 = *(float *)(iVar18 + 4);
        fVar16 = *(float *)(iVar18 + 8);
        fVar2 = *(float *)((int)param_2 + 0x18);
        fVar3 = *(float *)((int)param_2 + 0x24);
        fVar4 = *(float *)((int)param_2 + 0x30);
        fVar5 = *(float *)((int)param_2 + 0x3c);
        fVar6 = *(float *)((int)param_2 + 0x28);
        fVar7 = *(float *)((int)param_2 + 0x34);
        fVar8 = *(float *)((int)param_2 + 0x1c);
        fVar9 = *(float *)((int)param_2 + 0x40);
        fVar10 = *(float *)((int)param_2 + 0x38);
        fVar11 = *(float *)((int)param_2 + 0x2c);
        fVar12 = *(float *)((int)param_2 + 0x20);
        fVar13 = *(float *)((int)param_2 + 0x44);
        pfVar32[2] = 1.4;
        fVar10 = (fVar14 * fVar12 + fVar15 * fVar11 + fVar16 * fVar10 + fVar13) - (float)fVar34;
        *pfVar32 = local_f0 * fVar10 + fVar16 * fVar4 + fVar15 * fVar3 + fVar14 * fVar2 + fVar5;
        pfVar32[1] = fVar1 * fVar10 + fVar14 * fVar8 + fVar16 * fVar7 + fVar15 * fVar6 + fVar9;
        fVar10 = fVar10 * 0.66334987;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        pfVar32[3] = (float)((int)ROUND((fVar10 + 1.0) * 100.0) << 0x10);
        if (*pfVar32 <= *pfVar25) {
          fVar2 = *pfVar32;
        }
        else {
          fVar2 = *pfVar25;
        }
        *pfVar25 = fVar2;
        if (pfVar32[1] <= *(float *)((int)this + 0x4c)) {
          fVar2 = pfVar32[1];
        }
        else {
          fVar2 = *(float *)((int)this + 0x4c);
        }
        *(float *)((int)this + 0x4c) = fVar2;
        if (*(float *)((int)this + 0x50) <= *pfVar32) {
          fVar2 = *pfVar32;
        }
        else {
          fVar2 = *(float *)((int)this + 0x50);
        }
        *(float *)((int)this + 0x50) = fVar2;
        if (*(float *)((int)this + 0x54) <= pfVar32[1]) {
          fVar2 = pfVar32[1];
        }
        else {
          fVar2 = *(float *)((int)this + 0x54);
        }
        pfVar32 = pfVar32 + 6;
        *(float *)((int)this + 0x54) = fVar2;
        iVar22 = iVar22 + 0xc;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if ((*(byte *)((int)this + 4) & 8) == 0) {
      local_128 = DAT_0105be78;
    }
    else {
      local_128 = DAT_0105be7c;
    }
    pbVar21 = local_128;
    iVar28 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) * 2;
    iVar22 = iVar28 + 0x3c;
    iVar27 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) * 2;
    iVar18 = iVar27 + 0x3c;
    FUN_00a547a0(local_b0);
    local_4 = 0;
    FUN_00a54110(local_b0,iVar18,iVar18,iVar18,(int)local_128,param_4);
    pfVar17 = local_fc;
    fVar1 = (float)(iVar27 + 0x3b);
    fVar2 = (float)(int)fVar1 / (*(float *)((int)this + 0x54) - *(float *)((int)this + 0x4c));
    local_f0 = (float)(int)fVar1 / (*(float *)((int)this + 0x50) - *pfVar25);
    pfVar19 = local_fc;
    pfVar32 = local_fc;
    for (uVar24 = uVar23; uVar24 != 0; uVar24 = uVar24 - 1) {
      local_e4[0xc] = (float)(int)ROUND((*pfVar19 - *pfVar25) * local_f0);
      *pfVar19 = local_e4[0xc];
      if ((int)local_e4[0xc] < 0) {
        *pfVar19 = 0.0;
      }
      else if (iVar18 <= (int)local_e4[0xc]) {
        *pfVar19 = fVar1;
      }
      pfVar32 = (float *)((pfVar19[1] - *(float *)((int)this + 0x4c)) * fVar2);
      local_f8 = (float)(int)ROUND((float)pfVar32);
      pfVar19[1] = local_f8;
      if ((int)local_f8 < 0) {
        pfVar19[1] = 0.0;
      }
      else if (iVar18 <= (int)local_f8) {
        pfVar19[1] = fVar1;
      }
      pfVar19 = pfVar19 + 6;
    }
    local_124 = uVar23 - 2;
    pfVar25 = local_fc;
    local_fc = pfVar32;
    if (0 < local_124) {
      do {
        FUN_00a53b00(local_b0,(int *)pfVar17,(int *)pfVar25,(int *)(pfVar25 + 6));
        local_124 = local_124 + -1;
        pfVar25 = pfVar25 + 6;
      } while (local_124 != 0);
    }
    local_124 = 2;
    do {
      local_12c = iVar28 + 0x3a;
      if (0 < local_12c) {
        pbVar26 = local_128 + 1;
        do {
          iVar27 = iVar28 + 0x3a;
          pbVar20 = pbVar26;
          do {
            pbVar20[-1] = (byte)((int)((uint)pbVar20[iVar28 + 0x3b] + (uint)pbVar20[iVar22] +
                                       (uint)*pbVar20 + (uint)pbVar20[-1]) >> 2);
            pbVar20 = pbVar20 + 1;
            iVar27 = iVar27 + -1;
          } while (iVar27 != 0);
          pbVar26 = pbVar26 + iVar22;
          local_12c = local_12c + -1;
        } while (local_12c != 0);
      }
      local_124 = local_124 + -1;
    } while (local_124 != 0);
    uVar23 = (DAT_0105be0c == 3) - 1 & 0xfffffff0;
    local_104 = 0;
    local_100 = 0;
    MediaPlayer_LockVideoBuffer(*(void **)this,&local_104);
    if (local_100 != 0) {
      if (DAT_0105c2dc == 0x32) {
        local_f8 = (float)(uVar23 + 0x1f);
        local_128 = (byte *)0x1;
        if (1 < (int)local_f8) {
          do {
            iVar28 = 1;
            pbVar26 = pbVar21 + iVar18;
            do {
              *(char *)((int)local_128 * local_104 + iVar28 + local_100) =
                   (char)((int)((uint)pbVar26[1 - iVar18] + (uint)pbVar26[1] + (uint)*pbVar21 +
                               (uint)*pbVar26) >> 2);
              iVar28 = iVar28 + 1;
              pbVar21 = pbVar21 + 2;
              pbVar26 = pbVar26 + 2;
            } while (iVar28 < (int)local_f8);
            local_128 = (byte *)((int)local_128 + 1);
            pbVar21 = pbVar21 + iVar22;
          } while ((int)local_128 < (int)local_f8);
        }
      }
      else {
        iVar28 = local_104 >> 1;
        if (DAT_0105c2dc == 0x1a) {
          if (1 < (int)(uVar23 + 0x1f)) {
            puVar29 = (ushort *)(iVar28 * 2 + 2 + local_100);
            local_120 = uVar23 + 0x1e;
            do {
              pbVar21 = local_128 + iVar18;
              puVar30 = puVar29;
              local_12c = uVar23 + 0x1e;
              do {
                uVar24 = (int)((uint)pbVar21[1 - iVar18] + (uint)pbVar21[1] + (uint)*pbVar21 +
                              (uint)*local_128) >> 6;
                *puVar30 = (ushort)(((uVar24 | 0xfff0) << 4 | uVar24) << 4) | (ushort)uVar24;
                puVar30 = puVar30 + 1;
                local_128 = local_128 + 2;
                pbVar21 = pbVar21 + 2;
                local_12c = local_12c + -1;
              } while (local_12c != 0);
              puVar29 = puVar29 + iVar28;
              local_128 = local_128 + iVar22;
              local_120 = local_120 + -1;
            } while (local_120 != 0);
          }
        }
        else if ((DAT_0105c2dc == 0x18) && (1 < (int)(uVar23 + 0x1f))) {
          puVar29 = (ushort *)(iVar28 * 2 + 2 + local_100);
          local_120 = uVar23 + 0x1e;
          do {
            pbVar21 = local_128 + iVar18;
            puVar30 = puVar29;
            local_12c = uVar23 + 0x1e;
            do {
              uVar24 = (int)((uint)pbVar21[1 - iVar18] + (uint)pbVar21[1] + (uint)*pbVar21 +
                            (uint)*local_128) >> 5;
              *puVar30 = (ushort)((uVar24 << 5 | uVar24) << 5) | (ushort)uVar24;
              puVar30 = puVar30 + 1;
              local_128 = local_128 + 2;
              pbVar21 = pbVar21 + 2;
              local_12c = local_12c + -1;
            } while (local_12c != 0);
            puVar29 = puVar29 + iVar28;
            local_128 = local_128 + iVar22;
            local_120 = local_120 + -1;
          } while (local_120 != 0);
        }
      }
    }
    MediaPlayer_UnlockVideoBuffer(*(int *)this);
    local_e4[7] = 0.0;
    local_e4[9] = -*(float *)((int)this + 0x48);
    local_e4[6] = 0.0;
    local_e4[5] = 0.0;
    local_e4[10] = -*(float *)((int)this + 0x4c);
    local_e4[3] = 0.0;
    local_e4[2] = 0.0;
    local_e4[1] = 0.0;
    local_e4[8] = 1.0;
    local_e4[8] = 1.0 / (float)iVar22;
    local_e4[4] = 1.0;
    local_e4[0] = 1.0;
    local_e4[0xb] = 0.0;
    pfVar25 = local_e4;
    pfVar32 = local_7c;
    for (iVar22 = 0xc; iVar22 != 0; iVar22 = iVar22 + -1) {
      *pfVar32 = *pfVar25;
      pfVar25 = pfVar25 + 1;
      pfVar32 = pfVar32 + 1;
    }
    local_e4[0xb] = 0.0;
    local_e4[10] = 0.0;
    local_e4[9] = 0.0;
    local_e4[7] = 0.0;
    local_e4[6] = 0.0;
    local_e4[5] = 0.0;
    local_e4[3] = 0.0;
    local_e4[2] = 0.0;
    local_e4[1] = 0.0;
    local_e4[4] = local_e4[8] * fVar2;
    local_e4[0] = local_e4[8] * local_f0;
    FUN_009aa830(local_7c,local_e4);
    FUN_009aa310(local_4c,local_7c);
    puVar31 = local_4c;
    puVar33 = (undefined4 *)((int)this + 8);
    for (iVar22 = 0x10; iVar22 != 0; iVar22 = iVar22 + -1) {
      *puVar33 = *puVar31;
      puVar31 = puVar31 + 1;
      puVar33 = puVar33 + 1;
    }
    FUN_009aad40((undefined4 *)((int)this + 8),(float *)&DAT_0105c328);
    local_4 = 0xffffffff;
    FUN_00a53bc0((int)local_b0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a0180 @ 009a0180 ////

void __fastcall FUN_009a0180(undefined4 *param_1)

{
  param_1[1] = param_1[1] | 1;
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0099b400((void *)*param_1);
    *param_1 = 0;
  }
  FUN_0099f2f0((int)param_1);
  return;
}


//// FUNCTION FUN_009a01a0 @ 009a01a0 ////

void FUN_009a01a0(void)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = DAT_0105be10;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6411;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(DAT_0105be10 * 0xdc + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar2 + 1;
    *piVar2 = iVar4;
    _eh_vector_constructor_iterator_(piVar7,0xdc,iVar4,FUN_0099f4b0,FUN_009a0180);
  }
  local_4 = 0xffffffff;
  DAT_0105be74 = piVar7;
  puVar3 = operator_new(0x2264);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    DAT_0105be70 = (undefined4 *)0x0;
    iVar4 = 0;
  }
  else {
    *puVar3 = 0x28;
    _eh_vector_constructor_iterator_(puVar3 + 1,0xdc,0x28,FUN_0099f4b0,FUN_009a0180);
    iVar4 = 0;
    DAT_0105be70 = puVar3 + 1;
  }
  do {
    local_4 = 0xffffffff;
    puVar1 = (uint *)(iVar4 + 4 + (int)DAT_0105be70);
    *puVar1 = *puVar1 | 2;
    iVar4 = iVar4 + 0xdc;
  } while (iVar4 < 0x2260);
  iVar4 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) * 2 + 0x3c;
  uVar6 = iVar4 * iVar4;
  DAT_0105be78 = operator_new(uVar6);
  DAT_0105be7c = operator_new(uVar6);
  if (DAT_0105be78 != (undefined4 *)0x0) {
    if (DAT_0105be0c == 3) {
      iVar5 = 0x20;
      iVar4 = 0x20;
    }
    else {
      iVar5 = 0x10;
      iVar4 = 0x10;
    }
    puVar3 = DAT_0105be78;
    for (uVar6 = (iVar4 + -2) * (iVar5 + -2) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  if (DAT_0105be7c != (undefined4 *)0x0) {
    if (DAT_0105be0c == 3) {
      iVar5 = 0x20;
      iVar4 = 0x20;
    }
    else {
      iVar5 = 0x10;
      iVar4 = 0x10;
    }
    puVar3 = DAT_0105be7c;
    for (uVar6 = (iVar4 + -2) * (iVar5 + -2) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  puVar3 = operator_new(0x44);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00999750(puVar3);
    puVar3[0xc] = puVar3[0xc] & 0xfffffffc;
    *puVar3 = &PTR_FUN_00d1a780;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xc] = puVar3[0xc] & 0xfffffffb | 8;
  }
  local_4 = 0xffffffff;
  DAT_0105be68 = puVar3;
  FUN_009e6720(puVar3,4,2);
  puVar3 = (undefined4 *)DAT_0105be68[0xb];
  *puVar3 = 0x10000;
  *(undefined2 *)(puVar3 + 1) = 2;
  iVar4 = DAT_0105be68[0xb];
  *(undefined4 *)(iVar4 + 6) = 0x20000;
  *(undefined2 *)(iVar4 + 10) = 3;
  iVar4 = DAT_0105be68[10];
  *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x40) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x44) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x54) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined4 *)(iVar4 + 0x5c) = 0x3f800000;
  DAT_0105be6c = FUN_009de1d0("shadowman.msh",1);
  if (*(int *)(DAT_0105be6c + 0x30) != 0) {
    iVar4 = *(int *)(DAT_0105be6c + 0x34);
    *(undefined1 *)(iVar4 + 0xc) = 8;
    *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xbfffffff;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a0550 @ 009a0550 ////

void FUN_009a0550(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  LONG LVar5;
  int iVar6;
  int local_4;
  
  local_4 = 0;
  if (0 < DAT_0105be10) {
    iVar6 = 0;
    do {
      puVar2 = (undefined4 *)((int)DAT_0105be74 + iVar6);
      puVar2[1] = *(uint *)((int)DAT_0105be74 + iVar6 + 4) | 1;
      if ((void *)*puVar2 != (void *)0x0) {
        FUN_0099b400((void *)*puVar2);
        *puVar2 = 0;
      }
      if (puVar2[0x36] != 0) {
        *(undefined4 *)(puVar2[0x36] + 0x108) = 0;
        puVar3 = (undefined4 *)puVar2[0x36];
        if (puVar3 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar3 + 4);
          uVar4 = DAT_0105b588;
          if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          DAT_0105b588 = uVar4;
          puVar2[0x36] = 0;
        }
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 0xdc;
    } while (local_4 < DAT_0105be10);
  }
  iVar6 = 0;
  do {
    puVar2 = (undefined4 *)((int)DAT_0105be70 + iVar6);
    puVar2[1] = *(uint *)((int)DAT_0105be70 + iVar6 + 4) | 1;
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_0099b400((void *)*puVar2);
      *puVar2 = 0;
    }
    if (puVar2[0x36] != 0) {
      *(undefined4 *)(puVar2[0x36] + 0x108) = 0;
      puVar3 = (undefined4 *)puVar2[0x36];
      if (puVar3 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar3 + 4);
        uVar4 = DAT_0105b588;
        if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        DAT_0105b588 = uVar4;
        puVar2[0x36] = 0;
      }
    }
    iVar6 = iVar6 + 0xdc;
  } while (iVar6 < 0x2260);
  if (DAT_0105be74 == (void *)0x0) {
    DAT_0105be74 = (void *)0x0;
    if (DAT_0105be70 == (void *)0x0) {
      DAT_0105be70 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
      _free(DAT_0105be78);
    }
    pvVar1 = (void *)((int)DAT_0105be70 + -4);
    _eh_vector_destructor_iterator_(DAT_0105be70,0xdc,*(int *)((int)DAT_0105be70 + -4),FUN_009a0180)
    ;
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)((int)DAT_0105be74 + -4);
  _eh_vector_destructor_iterator_(DAT_0105be74,0xdc,*(int *)((int)DAT_0105be74 + -4),FUN_009a0180);
                    /* WARNING: Subroutine does not return */
  _free(pvVar1);
}


//// FUNCTION FUN_009a0760 @ 009a0760 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009a0760(void *this,int param_1,void *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  ushort *puVar10;
  DWORD DVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  ushort *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  float10 fVar25;
  int local_160;
  int local_15c;
  byte *local_158;
  int local_154;
  int local_150;
  float local_14c;
  float local_148;
  int local_134;
  int local_130;
  float *local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110 [13];
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
  undefined4 local_b0 [13];
  float local_7c [12];
  undefined4 local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf642b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar7 = FUN_0097f920(param_2);
  if ((char)uVar7 == '\0') {
    iVar14 = FUN_0097e350(param_2,0);
    if (((*(byte *)(iVar14 + 0xe6) & 1) != 0) && (*(int *)(iVar14 + 0xc4) != 0)) {
      FUN_0099f9b0(this,param_1,param_2,*(int *)(iVar14 + 0xc4),param_4);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    iVar14 = DAT_0105be6c;
    if (param_1 != 0) goto LAB_009a07ec;
  }
  iVar14 = FUN_0097e990((int)param_2);
LAB_009a07ec:
  local_120 = -_DAT_00e67b7c;
  local_124 = -_DAT_00e67b78;
  local_11c = ABS(-_DAT_00e67b80);
  FUN_00412e20(&local_124);
  pbVar12 = DAT_0105be7c;
  if ((*(byte *)((int)this + 4) & 8) == 0) {
    pbVar12 = DAT_0105be78;
  }
  FUN_0099ec30((undefined4 *)pbVar12);
  *(undefined4 *)((int)this + 0x48) = 0x7f7fffff;
  *(undefined4 *)((int)this + 0x4c) = 0x7f7fffff;
  local_118 = -3.4028235e+38;
  local_114 = 0xff7fffff;
  *(undefined4 *)((int)this + 0x50) = 0xff7fffff;
  pfVar18 = (float *)(param_4 + 8);
  *(undefined4 *)((int)this + 0x54) = 0xff7fffff;
  fVar19 = local_120 * (1.0 / local_11c);
  local_124 = (1.0 / local_11c) * local_124;
  local_12c = pfVar18;
  iVar8 = FUN_009d9bb0(iVar14);
  if (iVar8 < 0x8001) {
    FUN_0097f1f0(param_2,local_110 + 0xc);
    fVar25 = FUN_0097e510((int)param_2);
    local_128 = (float)fVar25;
    local_150 = 0;
    if (0 < *(int *)(iVar14 + 0x28)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar14 + 0x2c) + local_150 * 4);
        local_154 = 0;
        if (0 < *piVar1) {
          do {
            piVar2 = *(int **)(piVar1[1] + local_154 * 4);
            if ((*(byte *)(*(int *)(iVar14 + 0x34) + 0x14 + (piVar2[2] & 0xffU) * 0x24) & 8) == 0) {
              pfVar22 = (float *)piVar2[0xc];
              iVar8 = *piVar2;
              if ((*(byte *)((int)param_2 + 0xa0) & 1) == 0) {
                iVar8 = 0;
              }
              local_160 = piVar2[0xb];
              if (0 < local_160) {
                do {
                  local_14c = *pfVar22;
                  local_148 = pfVar22[1];
                  fVar3 = pfVar22[2];
                  if (iVar8 != 0) {
                    pfVar9 = (float *)((uint)*(byte *)(iVar8 + 0x10) * 0x30 + param_3);
                    fVar6 = fVar3 * pfVar9[6];
                    fVar4 = local_14c * pfVar9[1];
                    fVar5 = fVar3 * pfVar9[7];
                    fVar3 = fVar3 * pfVar9[8] + local_14c * pfVar9[2] + local_148 * pfVar9[5] +
                            pfVar9[0xb];
                    local_14c = local_14c * *pfVar9 + fVar6 + local_148 * pfVar9[3] + pfVar9[9];
                    local_148 = fVar5 + local_148 * pfVar9[4] + fVar4 + pfVar9[10];
                  }
                  fVar4 = local_d8 * local_14c + local_cc * local_148 + local_c0 * fVar3 + local_b4;
                  fVar5 = fVar4 - local_128;
                  *pfVar18 = local_124 * fVar5 +
                             local_110[0xc] * local_14c + local_c8 * fVar3 + local_d4 * local_148 +
                             local_bc;
                  pfVar18[1] = fVar19 * fVar5 +
                               local_dc * local_14c + local_c4 * fVar3 + local_d0 * local_148 +
                               local_b8;
                  pfVar18[2] = fVar4;
                  fVar5 = fVar5 * 0.66334987;
                  if (1.0 < fVar5) {
                    fVar5 = 1.0;
                  }
                  pfVar18[3] = (float)((int)ROUND((fVar5 + 1.0) * 100.0) << 0x10);
                  if (*pfVar18 <= *(float *)((int)this + 0x48)) {
                    fVar3 = *pfVar18;
                  }
                  else {
                    fVar3 = *(float *)((int)this + 0x48);
                  }
                  *(float *)((int)this + 0x48) = fVar3;
                  if (pfVar18[1] <= *(float *)((int)this + 0x4c)) {
                    fVar3 = pfVar18[1];
                  }
                  else {
                    fVar3 = *(float *)((int)this + 0x4c);
                  }
                  *(float *)((int)this + 0x4c) = fVar3;
                  if (*(float *)((int)this + 0x50) <= *pfVar18) {
                    fVar3 = *pfVar18;
                  }
                  else {
                    fVar3 = *(float *)((int)this + 0x50);
                  }
                  *(float *)((int)this + 0x50) = fVar3;
                  if (*(float *)((int)this + 0x54) <= pfVar18[1]) {
                    fVar3 = pfVar18[1];
                  }
                  else {
                    fVar3 = *(float *)((int)this + 0x54);
                  }
                  pfVar18 = pfVar18 + 6;
                  *(float *)((int)this + 0x54) = fVar3;
                  pfVar22 = pfVar22 + 8;
                  if (iVar8 != 0) {
                    iVar8 = iVar8 + 0x14;
                  }
                  local_160 = local_160 + -1;
                } while (local_160 != 0);
              }
            }
            local_154 = local_154 + 1;
          } while (local_154 < *piVar1);
        }
        local_150 = local_150 + 1;
      } while (local_150 < *(int *)(iVar14 + 0x28));
    }
    iVar16 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) * 2;
    iVar8 = iVar16 + 0x3c;
    FUN_00a547a0(local_b0);
    local_4 = 0;
    pbVar12 = DAT_0105be7c;
    if ((*(byte *)((int)this + 4) & 8) == 0) {
      pbVar12 = DAT_0105be78;
    }
    FUN_00a54110(local_b0,iVar8,iVar8,iVar8,(int)pbVar12,param_4);
    fVar19 = (float)(iVar16 + 0x3b);
    local_128 = (float)(int)fVar19 / (*(float *)((int)this + 0x54) - *(float *)((int)this + 0x4c));
    local_160 = 0;
    local_124 = (float)(int)fVar19 / (*(float *)((int)this + 0x50) - *(float *)((int)this + 0x48));
    pfVar18 = local_12c;
    if (0 < *(int *)(iVar14 + 0x28)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar14 + 0x2c) + local_160 * 4);
        local_154 = 0;
        pfVar22 = pfVar18;
        if (0 < *piVar1) {
          do {
            iVar16 = *(int *)(piVar1[1] + local_154 * 4);
            pfVar18 = pfVar22;
            if ((*(byte *)(*(int *)(iVar14 + 0x34) + 0x14 + (*(uint *)(iVar16 + 8) & 0xff) * 0x24) &
                8) == 0) {
              iVar15 = 0;
              if (0 < *(int *)(iVar16 + 0x2c)) {
                do {
                  fVar3 = (float)(int)ROUND((*pfVar18 - *(float *)((int)this + 0x48)) * local_124);
                  *pfVar18 = fVar3;
                  if ((int)fVar3 < 0) {
                    *pfVar18 = 0.0;
                  }
                  else if (iVar8 <= (int)fVar3) {
                    *pfVar18 = fVar19;
                  }
                  local_12c = (float *)((pfVar18[1] - *(float *)((int)this + 0x4c)) * local_128);
                  local_118 = (float)(int)ROUND((float)local_12c);
                  pfVar18[1] = local_118;
                  if ((int)local_118 < 0) {
                    pfVar18[1] = 0.0;
                  }
                  else if (iVar8 <= (int)local_118) {
                    pfVar18[1] = fVar19;
                  }
                  pfVar18 = pfVar18 + 6;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < *(int *)(iVar16 + 0x2c));
              }
              iVar15 = 0;
              if (0 < *(int *)(iVar16 + 0x1c)) {
                iVar17 = 0;
                do {
                  puVar10 = (ushort *)(*(int *)(iVar16 + 0x20) + iVar17);
                  FUN_00a53b00(local_b0,(int *)(pfVar22 + (uint)*puVar10 * 6),
                               (int *)(pfVar22 + (uint)puVar10[1] * 6),
                               (int *)(pfVar22 +
                                      (uint)*(ushort *)(*(int *)(iVar16 + 0x20) + 4 + iVar17) * 6));
                  iVar15 = iVar15 + 1;
                  iVar17 = iVar17 + 6;
                } while (iVar15 < *(int *)(iVar16 + 0x1c));
              }
            }
            local_154 = local_154 + 1;
            pfVar22 = pfVar18;
          } while (local_154 < *piVar1);
        }
        local_160 = local_160 + 1;
      } while (local_160 < *(int *)(iVar14 + 0x28));
    }
    if ((*(byte *)((int)this + 4) & 8) == 0) {
      local_158 = DAT_0105be78;
    }
    else {
      local_158 = DAT_0105be7c;
    }
    iVar16 = ((DAT_0105be0c == 3) - 1 & 0xfffffff0) * 2;
    iVar14 = iVar16 + 0x3c;
    if ((*(uint *)((int)param_2 + 0xa0) & 0x4000) == 0) {
      iVar15 = iVar16 + 0x3a;
      local_160 = 2;
      do {
        if (0 < iVar15) {
          pbVar23 = local_158 + 1;
          iVar17 = iVar15;
          local_15c = iVar15;
          pbVar12 = pbVar23;
          do {
            do {
              pbVar23[-1] = (byte)((int)((uint)pbVar23[iVar16 + 0x3b] + (uint)pbVar23[iVar14] +
                                         (uint)*pbVar23 + (uint)pbVar23[-1]) >> 2);
              pbVar23 = pbVar23 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            pbVar23 = pbVar12 + iVar14;
            local_15c = local_15c + -1;
            iVar17 = iVar15;
            pbVar12 = pbVar23;
          } while (local_15c != 0);
        }
        local_160 = local_160 + -1;
      } while (local_160 != 0);
    }
    else {
      DVar11 = GetTickCount();
      uVar7 = DVar11 - *(int *)((int)param_2 + 0xa8) >> ((byte)DAT_00e67b74 & 0x1f);
      if (0xff < uVar7) {
        uVar7 = 0xff;
      }
      local_160 = 2;
      do {
        local_15c = iVar16 + 0x3a;
        if (0 < local_15c) {
          pbVar12 = local_158 + 1;
          do {
            iVar15 = iVar16 + 0x3a;
            pbVar23 = pbVar12;
            do {
              iVar17 = ((int)((uint)pbVar23[iVar16 + 0x3b] + (uint)pbVar23[iVar14] + (uint)*pbVar23
                             + (uint)pbVar23[-1]) >> 2) + uVar7;
              if (0xff < iVar17) {
                iVar17 = 0xff;
              }
              pbVar23[-1] = (byte)iVar17;
              pbVar23 = pbVar23 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            pbVar12 = pbVar12 + iVar14;
            local_15c = local_15c + -1;
          } while (local_15c != 0);
        }
        local_160 = local_160 + -1;
      } while (local_160 != 0);
    }
    local_134 = 0;
    local_130 = 0;
    uVar7 = (DAT_0105be0c == 3) - 1 & 0xfffffff0;
    MediaPlayer_LockVideoBuffer(*(void **)this,&local_134);
    if (local_130 != 0) {
      if (DAT_0105c2dc == 0x32) {
        iVar16 = uVar7 + 0x1f;
        local_160 = 1;
        if (1 < iVar16) {
          do {
            iVar15 = 1;
            pbVar12 = local_158 + iVar8;
            do {
              *(char *)(local_160 * local_134 + iVar15 + local_130) =
                   (char)((int)((uint)pbVar12[1 - iVar8] + (uint)pbVar12[1] + (uint)*local_158 +
                               (uint)*pbVar12) >> 2);
              iVar15 = iVar15 + 1;
              local_158 = local_158 + 2;
              pbVar12 = pbVar12 + 2;
            } while (iVar15 < iVar16);
            local_160 = local_160 + 1;
            local_158 = local_158 + iVar14;
          } while (local_160 < iVar16);
        }
      }
      else {
        iVar16 = local_134 >> 1;
        if (DAT_0105c2dc == 0x1a) {
          if (1 < (int)(uVar7 + 0x1f)) {
            puVar10 = (ushort *)(iVar16 * 2 + 2 + local_130);
            local_150 = uVar7 + 0x1e;
            do {
              pbVar12 = local_158 + iVar8;
              puVar20 = puVar10;
              local_15c = uVar7 + 0x1e;
              do {
                uVar13 = (int)((uint)pbVar12[1 - iVar8] + (uint)pbVar12[1] + (uint)*pbVar12 +
                              (uint)*local_158) >> 6;
                *puVar20 = (ushort)(((uVar13 | 0xfff0) << 4 | uVar13) << 4) | (ushort)uVar13;
                puVar20 = puVar20 + 1;
                local_158 = local_158 + 2;
                pbVar12 = pbVar12 + 2;
                local_15c = local_15c + -1;
              } while (local_15c != 0);
              puVar10 = puVar10 + iVar16;
              local_158 = local_158 + iVar14;
              local_150 = local_150 + -1;
            } while (local_150 != 0);
          }
        }
        else if ((DAT_0105c2dc == 0x18) && (1 < (int)(uVar7 + 0x1f))) {
          puVar10 = (ushort *)(iVar16 * 2 + 2 + local_130);
          local_150 = uVar7 + 0x1e;
          do {
            pbVar12 = local_158 + iVar8;
            puVar20 = puVar10;
            local_15c = uVar7 + 0x1e;
            do {
              uVar13 = (int)((uint)pbVar12[1 - iVar8] + (uint)pbVar12[1] + (uint)*pbVar12 +
                            (uint)*local_158) >> 5;
              *puVar20 = (ushort)((uVar13 << 5 | uVar13) << 5) | (ushort)uVar13;
              puVar20 = puVar20 + 1;
              local_158 = local_158 + 2;
              pbVar12 = pbVar12 + 2;
              local_15c = local_15c + -1;
            } while (local_15c != 0);
            puVar10 = puVar10 + iVar16;
            local_158 = local_158 + iVar14;
            local_150 = local_150 + -1;
          } while (local_150 != 0);
        }
      }
    }
    MediaPlayer_UnlockVideoBuffer(*(int *)this);
    local_110[7] = 0.0;
    local_110[9] = -*(float *)((int)this + 0x48);
    local_110[6] = 0.0;
    local_110[5] = 0.0;
    local_110[10] = -*(float *)((int)this + 0x4c);
    local_110[3] = 0.0;
    local_110[2] = 0.0;
    local_110[1] = 0.0;
    local_110[8] = 1.0;
    local_110[8] = 1.0 / (float)iVar14;
    local_110[4] = 1.0;
    local_110[0] = 1.0;
    local_110[0xb] = 0.0;
    pfVar18 = local_110;
    pfVar22 = local_7c;
    for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
      *pfVar22 = *pfVar18;
      pfVar18 = pfVar18 + 1;
      pfVar22 = pfVar22 + 1;
    }
    local_110[0xb] = 0.0;
    local_110[10] = 0.0;
    local_110[9] = 0.0;
    local_110[7] = 0.0;
    local_110[6] = 0.0;
    local_110[5] = 0.0;
    local_110[3] = 0.0;
    local_110[2] = 0.0;
    local_110[1] = 0.0;
    local_110[4] = local_110[8] * local_128;
    local_110[0] = local_110[8] * local_124;
    FUN_009aa830(local_7c,local_110);
    FUN_009aa310(local_4c,local_7c);
    puVar21 = local_4c;
    puVar24 = (undefined4 *)((int)this + 8);
    for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar24 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar24 = puVar24 + 1;
    }
    FUN_009aad40((undefined4 *)((int)this + 8),(float *)&DAT_0105c328);
    local_4 = 0xffffffff;
    FUN_00a53bc0((int)local_b0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a1260 @ 009a1260 ////

UINT FUN_009a1260(void)

{
  LCID Locale;
  int iVar1;
  UINT UVar2;
  char *pcVar3;
  UINT UVar4;
  char local_8;
  char local_7 [7];
  
  UVar4 = 0;
  Locale = GetThreadLocale();
  iVar1 = GetLocaleInfoA(Locale,0x1004,&local_8,7);
  if (iVar1 != 0) {
    pcVar3 = &local_8;
    if (local_8 != '\0') {
      do {
        pcVar3 = pcVar3 + 1;
        UVar4 = local_8 + -0x30 + UVar4 * 10;
        local_8 = *pcVar3;
      } while (local_8 != '\0');
      if (UVar4 != 0) {
        return UVar4;
      }
    }
  }
  UVar2 = GetACP();
  return UVar2;
}


//// FUNCTION FUN_009a1350 @ 009a1350 ////

void __fastcall FUN_009a1350(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_009a1370 @ 009a1370 ////

undefined4 __fastcall FUN_009a1370(LPCRITICAL_SECTION param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00d71940;
  puStack_10 = &LAB_00ad2968;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  ExceptionList = local_14;
  return 0;
}


//// FUNCTION FUN_009a1410 @ 009a1410 ////

undefined4 FUN_009a1410(void)

{
  undefined4 uVar1;
  
  DAT_0105be91 = 1;
  uVar1 = FUN_009a4f10();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009a1420 @ 009a1420 ////

void FUN_009a1420(void)

{
  undefined4 *puVar1;
  
  if (DAT_0105beb4 == '\0') {
    puVar1 = &DAT_0105c618;
    do {
      if (((code *)*puVar1 != (code *)0x0) &&
         (((*(byte *)(puVar1 + 3) & 1) != 0 || (DAT_0105bec4 == '\0')))) {
        (*(code *)*puVar1)(puVar1[2]);
      }
      puVar1 = puVar1 + 4;
    } while ((int)puVar1 < 0x105c768);
  }
  return;
}


//// FUNCTION FUN_009a1460 @ 009a1460 ////

undefined4 FUN_009a1460(void)

{
  undefined4 uVar1;
  
  DAT_0105be91 = 0;
  FUN_009a1420();
  uVar1 = FUN_009a4fb0();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009a1480 @ 009a1480 ////

void __thiscall FUN_009a1480(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x240);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_009aa830((undefined4 *)((int)this + 0x240),(float *)((int)this + 0x180));
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x210);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != '\0') {
    FUN_009a5000(param_1);
  }
  return;
}


//// FUNCTION FUN_009a14d0 @ 009a14d0 ////

void __cdecl FUN_009a14d0(int *param_1)

{
  int iVar1;
  
  if (((*param_1 != 0) && (iVar1 = param_1[1], -1 < iVar1)) && (iVar1 < 0x15)) {
    (&DAT_0105c618)[iVar1 * 4] = *param_1;
    (&DAT_0105c61c)[iVar1 * 4] = param_1[1];
    (&DAT_0105c620)[iVar1 * 4] = param_1[2];
    (&DAT_0105c624)[iVar1 * 4] = param_1[3];
  }
  return;
}


//// FUNCTION FUN_009a1510 @ 009a1510 ////

void __cdecl FUN_009a1510(int param_1)

{
  (&DAT_0105c618)[param_1 * 4] = 0;
  return;
}


//// FUNCTION FUN_009a1530 @ 009a1530 ////

void __cdecl FUN_009a1530(undefined4 param_1)

{
  if (DAT_0105bebc != (void *)0x0) {
    DAT_0105bea8 = param_1;
    FUN_0099ab70(DAT_0105bebc,DAT_0105bebc,0,*(undefined4 *)((int)DAT_0105bebc + 0x44),
                 *(undefined4 *)((int)DAT_0105bebc + 0x48),'\0');
  }
  return;
}


//// FUNCTION FUN_009a1560 @ 009a1560 ////

void __cdecl FUN_009a1560(undefined1 param_1)

{
  DAT_0105be81 = param_1;
  return;
}


//// FUNCTION FUN_009a1570 @ 009a1570 ////

void FUN_009a1570(void)

{
  FUN_00a054a0();
  FUN_00a461e0();
  return;
}


//// FUNCTION FUN_009a1580 @ 009a1580 ////

void FUN_009a1580(void)

{
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_009a1750 @ 009a1750 ////

void __fastcall FUN_009a1750(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


//// FUNCTION FUN_009a17e0 @ 009a17e0 ////

void FUN_009a17e0(void)

{
  return;
}


//// FUNCTION FUN_009a17f0 @ 009a17f0 ////

void __fastcall FUN_009a17f0(int param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf6456;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_010bb290 == param_1) {
    DAT_010bb290 = *(int *)(param_1 + 0x308);
  }
  _Memory = *(void **)(param_1 + 0x308);
  if (_Memory != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_009a17f0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x308) = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0xc,0x40,FUN_009a17e0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a1890 @ 009a1890 ////

void * __thiscall FUN_009a1890(void *this,byte param_1)

{
  FUN_009a17f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009a1900 @ 009a1900 ////

void __fastcall FUN_009a1900(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_009a1950 @ 009a1950 ////

void __thiscall FUN_009a1950(void *this,float param_1)

{
  float10 fVar1;
  
  *(float *)((int)this + 0xf4) = param_1;
  fVar1 = (float10)fptan((float10)param_1 * (float10)0.5);
  *(float *)((int)this + 0x138) = (float)((float10)1.0 / fVar1);
  *(float *)((int)this + 0x13c) =
       (float)(((float10)1.0 / fVar1) * (float10)*(float *)((int)this + 0x108));
  *(float *)((int)this + 0x150) = (float)fVar1;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0x3f800000;
  FUN_00412e20((float *)((int)this + 0x150));
  *(float *)((int)this + 0x15c) = 0.0;
  *(float *)((int)this + 0x160) = (float)fVar1 / *(float *)((int)this + 0x108);
  *(undefined4 *)((int)this + 0x164) = 0x3f800000;
  FUN_00412e20((float *)((int)this + 0x15c));
  FUN_009a5680((int)this);
  return;
}


//// FUNCTION FUN_009a1a20 @ 009a1a20 ////

void __thiscall FUN_009a1a20(void *this,float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)((int)this + 0xf8);
  fVar1 = *(float *)((int)this + 300);
  fVar2 = param_1[1];
  fVar3 = *(float *)((int)this + 0x104);
  fVar4 = *(float *)((int)this + 300);
  *param_2 = (*(float *)((int)this + 0x100) / *(float *)((int)this + 0x128)) *
             (*param_1 - *(float *)((int)this + 0x128));
  param_2[1] = fVar5;
  param_2[2] = (fVar3 / fVar4) * (fVar1 - fVar2);
  if (param_3 != 0.0) {
    fVar1 = param_3 / param_2[1];
    *param_2 = fVar1 * *param_2;
    param_2[1] = fVar1 * param_2[1];
    param_2[2] = fVar1 * param_2[2];
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_2 = fVar1 * *(float *)((int)this + 0x1e0) +
             fVar2 * *(float *)((int)this + 0x1ec) + fVar3 * *(float *)((int)this + 0x1f8) +
             *(float *)((int)this + 0x204);
  param_2[1] = fVar1 * *(float *)((int)this + 0x1e4) +
               fVar2 * *(float *)((int)this + 0x1f0) + fVar3 * *(float *)((int)this + 0x1fc) +
               *(float *)((int)this + 0x208);
  param_2[2] = fVar1 * *(float *)((int)this + 0x1e8) +
               fVar2 * *(float *)((int)this + 500) + fVar3 * *(float *)((int)this + 0x200) +
               *(float *)((int)this + 0x20c);
  return;
}


//// FUNCTION FUN_009a1b30 @ 009a1b30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_009a1b30(void *this,float *param_1,float *param_2)

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
  
  fVar1 = *(float *)((int)this + 0x184);
  fVar2 = *param_1;
  fVar3 = *(float *)((int)this + 400);
  fVar4 = param_1[1];
  fVar5 = *(float *)((int)this + 0x19c);
  fVar6 = param_1[2];
  fVar7 = *(float *)((int)this + 0x1a8);
  fVar9 = *(float *)((int)this + 0x1a0) * param_1[2] +
          *(float *)((int)this + 0x194) * param_1[1] + *(float *)((int)this + 0x188) * *param_1 +
          *(float *)((int)this + 0x1ac);
  fVar8 = *(float *)((int)this + 0xf8);
  if (fVar9 < fVar8) {
    return CONCAT22((short)((uint)param_1 >> 0x10),
                    (ushort)(fVar9 < fVar8) << 8 | (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                    (ushort)(fVar9 == fVar8) << 0xe);
  }
  *param_2 = ((*param_1 * *(float *)((int)this + 0x180) +
               *(float *)((int)this + 0x198) * param_1[2] +
               *(float *)((int)this + 0x18c) * param_1[1] + *(float *)((int)this + 0x1a4)) *
              (1.0 / fVar9) + 1.0) * _DAT_0105c410;
  param_2[1] = _DAT_0105c414 -
               _DAT_0105c414 * (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7) *
               (1.0 / fVar9);
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


//// FUNCTION FUN_009a1bf0 @ 009a1bf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009a1bf0(undefined4 *param_1)

{
  _DAT_0105c85c = *param_1;
  _DAT_0105c860 = param_1[1];
  _DAT_0105c864 = param_1[2];
  FUN_009cc750(0xffffff,0x606060,param_1,3,0x447a0000,0);
  FUN_009cc650(0x105c768);
  FUN_009cc830();
  _DAT_0105c608 = *param_1;
  _DAT_0105c60c = param_1[1];
  _DAT_0105c610 = param_1[2];
  FUN_00412e20((float *)&DAT_0105c608);
  return;
}


//// FUNCTION FUN_009a1c90 @ 009a1c90 ////

void __cdecl FUN_009a1c90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar4 = -(param_2[2] / (param_3[2] - param_2[2]));
  fVar3 = param_2[1];
  *param_1 = (*param_3 - *param_2) * fVar4 + *param_2;
  param_1[1] = (fVar1 - fVar2) * fVar4 + fVar3;
  return;
}


//// FUNCTION FUN_009a1cd0 @ 009a1cd0 ////

void __fastcall FUN_009a1cd0(void *param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined1 *)((int)param_1 + 700) = 1;
  *(undefined1 *)((int)param_1 + 0x2bd) = 1;
  local_14 = 0.0;
  local_10 = 0.0;
  FUN_009a1a20(param_1,&local_14,&local_c,0.0);
  if (*(float *)((int)param_1 + 200) <= local_4 - 0.001) {
    *(undefined1 *)((int)param_1 + 700) = 0;
  }
  else {
    fVar1 = -(*(float *)((int)param_1 + 200) / (local_4 - *(float *)((int)param_1 + 200)));
    *(float *)((int)param_1 + 0x2c0) =
         (local_c - *(float *)((int)param_1 + 0xc0)) * fVar1 + *(float *)((int)param_1 + 0xc0);
    *(float *)((int)param_1 + 0x2c4) =
         (local_8 - *(float *)((int)param_1 + 0xc4)) * fVar1 + *(float *)((int)param_1 + 0xc4);
  }
  local_14 = *(float *)((int)param_1 + 0x118);
  local_10 = 0.0;
  FUN_009a1a20(param_1,&local_14,&local_c,0.0);
  if (*(float *)((int)param_1 + 200) <= local_4 - 0.001) {
    *(undefined1 *)((int)param_1 + 700) = 0;
  }
  else {
    fVar1 = -(*(float *)((int)param_1 + 200) / (local_4 - *(float *)((int)param_1 + 200)));
    *(float *)((int)param_1 + 0x2c8) =
         (local_c - *(float *)((int)param_1 + 0xc0)) * fVar1 + *(float *)((int)param_1 + 0xc0);
    *(float *)((int)param_1 + 0x2cc) =
         (local_8 - *(float *)((int)param_1 + 0xc4)) * fVar1 + *(float *)((int)param_1 + 0xc4);
  }
  local_14 = *(float *)((int)param_1 + 0x118);
  local_10 = *(float *)((int)param_1 + 0x11c);
  FUN_009a1a20(param_1,&local_14,&local_c,0.0);
  if (*(float *)((int)param_1 + 200) <= local_4 - 0.001) {
    *(undefined1 *)((int)param_1 + 0x2bd) = 1;
    *(undefined1 *)((int)param_1 + 700) = 0;
  }
  else {
    fVar1 = -(*(float *)((int)param_1 + 200) / (local_4 - *(float *)((int)param_1 + 200)));
    *(float *)((int)param_1 + 0x2d0) =
         (local_c - *(float *)((int)param_1 + 0xc0)) * fVar1 + *(float *)((int)param_1 + 0xc0);
    *(float *)((int)param_1 + 0x2d4) =
         (local_8 - *(float *)((int)param_1 + 0xc4)) * fVar1 + *(float *)((int)param_1 + 0xc4);
  }
  local_10 = *(float *)((int)param_1 + 0x11c);
  local_14 = 0.0;
  FUN_009a1a20(param_1,&local_14,&local_c,0.0);
  if (*(float *)((int)param_1 + 200) <= local_4 - 0.001) {
    *(undefined1 *)((int)param_1 + 0x2bd) = 1;
    *(undefined1 *)((int)param_1 + 700) = 0;
  }
  else {
    fVar1 = -(*(float *)((int)param_1 + 200) / (local_4 - *(float *)((int)param_1 + 200)));
    local_14 = (local_c - *(float *)((int)param_1 + 0xc0)) * fVar1 + *(float *)((int)param_1 + 0xc0)
    ;
    local_10 = (local_8 - *(float *)((int)param_1 + 0xc4)) * fVar1 + *(float *)((int)param_1 + 0xc4)
    ;
    *(float *)((int)param_1 + 0x2d8) = local_14;
    *(float *)((int)param_1 + 0x2dc) = local_10;
  }
  if (*(char *)((int)param_1 + 700) != '\0') {
    uVar2 = 0;
    pfVar3 = (float *)((int)param_1 + 0x2e0);
    do {
      uVar2 = uVar2 + 1;
      local_14 = *(float *)((int)param_1 + (uVar2 & 3) * 8 + 0x2c0) - pfVar3[-8];
      local_10 = *(float *)((int)param_1 + (uVar2 & 3) * 8 + 0x2c4) - pfVar3[-7];
      *pfVar3 = local_14;
      pfVar3[1] = local_10;
      FUN_00412c90(pfVar3);
      pfVar3 = pfVar3 + 2;
    } while ((int)uVar2 < 4);
    return;
  }
  if (*(char *)((int)param_1 + 0x2bd) != '\0') {
    local_4 = *(float *)((int)param_1 + 200);
    local_c = *(float *)((int)param_1 + 0xc0) - *(float *)((int)param_1 + 0x2d0);
    local_8 = *(float *)((int)param_1 + 0xc4) - *(float *)((int)param_1 + 0x2d4);
    FUN_009840b0(&local_14,&local_c);
    *(float *)((int)param_1 + 0x2e0) = local_14;
    *(float *)((int)param_1 + 0x2e4) = local_10;
    FUN_00412c90((float *)((int)param_1 + 0x2e0));
    FUN_009840b0(&local_c,(float *)((int)param_1 + 0xc0));
    local_14 = *(float *)((int)param_1 + 0x2d8) - local_c;
    *(float *)((int)param_1 + 0x2e8) = local_14;
    local_10 = *(float *)((int)param_1 + 0x2dc) - local_8;
    *(float *)((int)param_1 + 0x2ec) = local_10;
    FUN_00412c90((float *)((int)param_1 + 0x2e8));
  }
  return;
}


//// FUNCTION FUN_009a2070 @ 009a2070 ////

uint __thiscall FUN_009a2070(void *this,undefined4 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float local_8;
  float local_4;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 700));
  if (*(char *)((int)this + 700) != '\0') {
    uVar3 = FUN_009840b0(&local_8,param_1);
    fVar1 = param_2 + 0.001;
    iVar5 = 0;
    pfVar4 = (float *)((int)this + 0x2e4);
    do {
      fVar2 = (local_4 - pfVar4[-8]) * pfVar4[-1] - (local_8 - pfVar4[-9]) * *pfVar4;
      uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                       (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                       (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 2;
    } while (iVar5 < 4);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_009a20f0 @ 009a20f0 ////

uint __thiscall FUN_009a20f0(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)((int)this + 700) != '\0') {
    uVar3 = FUN_009a2070(this,param_1,param_2);
    return uVar3;
  }
  fVar1 = param_2 + 0.001;
  if (*(char *)((int)this + 0x2bd) != '\0') {
    local_4 = param_1[2];
    local_c = *param_1 - *(float *)((int)this + 0x2d0);
    local_8 = param_1[1] - *(float *)((int)this + 0x2d4);
    FUN_009840b0(&local_14,&local_c);
    fVar2 = local_10 * *(float *)((int)this + 0x2e0) - local_14 * *(float *)((int)this + 0x2e4);
    uVar3 = CONCAT22(extraout_var,
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      local_4 = param_1[2];
      local_c = *param_1 - *(float *)((int)this + 0x2d8);
      local_8 = param_1[1] - *(float *)((int)this + 0x2dc);
      FUN_009840b0(&local_14,&local_c);
      fVar2 = local_10 * *(float *)((int)this + 0x2e8) - local_14 * *(float *)((int)this + 0x2ec);
      uVar3 = CONCAT22(extraout_var_00,
                       (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                       (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
    return uVar3;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_009a2210 @ 009a2210 ////

void __fastcall FUN_009a2210(undefined4 *param_1)

{
  *param_1 = DAT_0105c3dc;
  param_1[1] = DAT_0105c3e0;
  param_1[2] = DAT_0105c3e4;
  param_1[3] = DAT_0105c3a8;
  param_1[4] = DAT_0105c3ac;
  param_1[5] = DAT_0105c3b0;
  param_1[6] = DAT_0105c3b4;
  param_1[7] = DAT_0105c3b8;
  param_1[8] = DAT_0105c3bc;
  return;
}


//// FUNCTION FUN_009a2270 @ 009a2270 ////

void __fastcall FUN_009a2270(undefined4 *param_1)

{
  *param_1 = DAT_0105c3dc;
  param_1[1] = DAT_0105c3e0;
  param_1[2] = DAT_0105c3e4;
  param_1[3] = DAT_0105c3a8;
  param_1[4] = DAT_0105c3ac;
  param_1[5] = DAT_0105c3b0;
  param_1[6] = DAT_0105c3b4;
  param_1[7] = DAT_0105c3b8;
  param_1[8] = DAT_0105c3bc;
  param_1[9] = DAT_0105c3d8;
  return;
}


//// FUNCTION FUN_009a22d0 @ 009a22d0 ////

void __cdecl FUN_009a22d0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 local_6c [3];
  undefined1 local_60;
  uint local_5c;
  void *local_54;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6468;
  local_c = ExceptionList;
  pvVar1 = (void *)0x0;
  ExceptionList = &local_c;
  FUN_009910f0(local_6c);
  local_4 = 0;
  FUN_0041f350(&local_48);
  if (param_3 == (undefined4 *)0x0) {
    pvVar1 = FUN_0099bb50(param_1,0,0,0,'\0');
    FUN_00a26d00((int)pvVar1);
    if (local_54 != pvVar1) {
      Engine_SetResourceReference(local_6c,(int)pvVar1);
    }
    local_5c = local_5c & 0xbfffffff;
    local_44 = local_6c;
    local_60 = 6;
  }
  else {
    local_40 = *param_3;
    local_44 = param_3;
  }
  local_34 = param_2[3];
  local_38 = *param_2;
  local_2c = param_2[2];
  local_28 = param_2[1];
  local_30 = 0;
  local_24 = 0;
  BuildAndDrawPrimitive((int)&local_48);
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_6c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a2400 @ 009a2400 ////

void __fastcall FUN_009a2400(void *param_1)

{
  float *pfVar1;
  float fVar2;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  local_3c = *(float *)((int)param_1 + 0x118);
  local_38 = *(undefined4 *)((int)param_1 + 0x11c);
  FUN_009a1a20(param_1,&local_3c,&local_30,*(float *)((int)param_1 + 0xf8));
  fVar2 = *(float *)((int)param_1 + 0xf8) * 0.5;
  pfVar1 = (float *)((int)param_1 + 0xc0);
  local_20 = fVar2 * *(float *)((int)param_1 + 0xdc);
  local_1c = fVar2 * *(float *)((int)param_1 + 0xe0);
  local_34 = local_1c + *(float *)((int)param_1 + 200);
  *(float *)((int)param_1 + 0x304) = fVar2 * *(float *)((int)param_1 + 0xd8) + *pfVar1;
  *(float *)((int)param_1 + 0x308) = local_20 + *(float *)((int)param_1 + 0xc4);
  *(float *)((int)param_1 + 0x30c) = local_34;
  local_30 = *(float *)((int)param_1 + 0x304) - local_30;
  local_3c = *(float *)((int)param_1 + 0x118);
  local_2c = *(float *)((int)param_1 + 0x308) - local_2c;
  local_28 = *(float *)((int)param_1 + 0x30c) - local_28;
  local_38 = 0;
  *(float *)((int)param_1 + 0x300) =
       SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  FUN_009a1a20(param_1,&local_3c,&local_24,*(float *)((int)param_1 + 0xf8));
  local_3c = 0.0;
  local_38 = 0;
  FUN_009a1a20(param_1,&local_3c,local_18,*(float *)((int)param_1 + 0xf8));
  local_38 = *(undefined4 *)((int)param_1 + 0x11c);
  local_3c = 0.0;
  FUN_009a1a20(param_1,&local_3c,local_c,*(float *)((int)param_1 + 0xf8));
  FUN_009a3f80((void *)((int)param_1 + 0x2ac),pfVar1,&local_30,&local_24);
  FUN_009a3f80((void *)((int)param_1 + 0x29c),pfVar1,local_18,local_c);
  FUN_009a3f80((void *)((int)param_1 + 0x27c),pfVar1,&local_24,local_18);
  FUN_009a3f80((void *)((int)param_1 + 0x28c),pfVar1,local_c,&local_30);
  return;
}


//// FUNCTION FUN_009a2610 @ 009a2610 ////

undefined4 FUN_009a2610(int *param_1,HINSTANCE param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == (int *)0x0) {
    return 0x80070057;
  }
  if (*param_1 != 0) {
    if (*param_1 != 0x2c) {
      return 0x80070057;
    }
    if (0 < param_1[9]) {
      do {
        if ((iVar3 < 0) || (param_1[9] <= iVar3)) {
          RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
          pcVar1 = (code *)swi(3);
          uVar2 = (*pcVar1)();
          return uVar2;
        }
        UnregisterClassA((LPCSTR)(uint)*(ushort *)(param_1[8] + iVar3 * 2),(HINSTANCE)param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[9]);
    }
    if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[8]);
    }
    param_1[9] = 0;
    param_1[10] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
    *param_1 = 0;
  }
  return 0;
}


//// FUNCTION FUN_009a26a0 @ 009a26a0 ////

void __fastcall FUN_009a26a0(undefined4 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  return;
}


//// FUNCTION FUN_009a27a0 @ 009a27a0 ////

void __fastcall FUN_009a27a0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_009a2800 @ 009a2800 ////

void __fastcall FUN_009a2800(int param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


//// FUNCTION FUN_009a2830 @ 009a2830 ////

void __thiscall FUN_009a2830(void *this,float *param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [24];
  
  fVar3 = *param_2 - *param_1;
  local_74 = param_2[1] - param_1[1];
  local_70 = param_2[2] - param_1[2];
  pfVar1 = (float *)((int)this + 0xc0);
  *pfVar1 = *param_1;
  *(float *)((int)this + 0xc4) = param_1[1];
  *(float *)((int)this + 200) = param_1[2];
  pfVar5 = (float *)((int)this + 0xcc);
  *pfVar5 = *param_2;
  *(float *)((int)this + 0xd0) = param_2[1];
  *(float *)((int)this + 0xd4) = param_2[2];
  *(float *)((int)this + 0xf0) = param_3;
  local_84 = *pfVar1 - *pfVar5;
  pfVar6 = (float *)((int)this + 0xe4);
  local_80 = *(float *)((int)this + 0xc4) - *(float *)((int)this + 0xd0);
  local_7c = *(float *)((int)this + 200) - *(float *)((int)this + 0xd4);
  *pfVar6 = local_84;
  *(float *)((int)this + 0xe8) = local_80;
  fVar2 = *(float *)((int)this + 0xf4);
  *(float *)((int)this + 0xec) = local_7c;
  *pfVar6 = fVar2 * *pfVar6;
  *(float *)((int)this + 0xe8) = fVar2 * *(float *)((int)this + 0xe8);
  *(float *)((int)this + 0xec) = fVar2 * *(float *)((int)this + 0xec);
  *pfVar6 = *pfVar5 + *pfVar6;
  *(float *)((int)this + 0xe8) = *(float *)((int)this + 0xd0) + *(float *)((int)this + 0xe8);
  *(float *)((int)this + 0xec) = *(float *)((int)this + 0xd4) + *(float *)((int)this + 0xec);
  *pfVar6 = *pfVar1;
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)this + 200);
  local_78 = fVar3;
  if (((ABS(fVar3) < 0.001) && (ABS(local_74) < 0.001)) && (local_78 = 0.001, fVar3 <= 0.0)) {
    local_78 = -0.001;
  }
  FUN_00412e20(&local_78);
  *(float *)((int)this + 0xd8) = local_78;
  *(float *)((int)this + 0xdc) = local_74;
  *(float *)((int)this + 0xe0) = local_70;
  fVar2 = (local_74 + local_78) * 0.0 + local_70;
  local_84 = -(local_78 * fVar2);
  local_80 = -(fVar2 * local_74);
  local_7c = 1.0 - local_70 * fVar2;
  local_6c = local_84;
  local_68 = local_80;
  local_64 = local_7c;
  FUN_00412e20(&local_6c);
  FUN_00412fd0(&local_84,&local_78,&local_6c);
  pfVar1 = (float *)((int)this + 0x1b0);
  *pfVar1 = local_84;
  *(float *)((int)this + 0x1bc) = local_80;
  *(float *)((int)this + 0x1c8) = local_7c;
  *(float *)((int)this + 0x1b4) = local_78;
  *(float *)((int)this + 0x1c0) = local_74;
  *(float *)((int)this + 0x1cc) = local_70;
  *(float *)((int)this + 0x1b8) = local_6c;
  *(float *)((int)this + 0x1c4) = local_68;
  *(float *)((int)this + 0x1d0) = local_64;
  if (param_3 != 0.0) {
    *(undefined4 *)((int)this + 0x1dc) = 0;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    pfVar5 = pfVar1;
    pfVar6 = local_60 + 0xc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_009aa670(local_60 + 0xc);
    fVar7 = (float10)fsin((float10)param_3);
    local_68 = 0.0;
    local_6c = (float)-fVar7;
    fVar7 = (float10)fcos((float10)param_3);
    local_64 = (float)fVar7;
    FUN_0040b490(local_60 + 0xc,&local_6c);
    FUN_00412fd0(&local_84,&local_78,&local_6c);
    *pfVar1 = local_84;
    *(float *)((int)this + 0x1bc) = local_80;
    *(float *)((int)this + 0x1c8) = local_7c;
    *(float *)((int)this + 0x1b8) = local_6c;
    *(float *)((int)this + 0x1c4) = local_68;
    *(float *)((int)this + 0x1d0) = local_64;
  }
  *(undefined4 *)((int)this + 0x270) = *(undefined4 *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x274) = *(undefined4 *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x278) = *(undefined4 *)((int)this + 0x1d0);
  *(float *)((int)this + 0x1d4) =
       (-(*param_1 * *pfVar1) - *(float *)((int)this + 0x1bc) * param_1[1]) -
       *(float *)((int)this + 0x1c8) * param_1[2];
  *(float *)((int)this + 0x1d8) =
       (-(*(float *)((int)this + 0x1b4) * *param_1) - *(float *)((int)this + 0x1c0) * param_1[1]) -
       *(float *)((int)this + 0x1cc) * param_1[2];
  *(float *)((int)this + 0x1dc) =
       (-(*(float *)((int)this + 0x1b8) * *param_1) - *(float *)((int)this + 0x1c4) * param_1[1]) -
       *(float *)((int)this + 0x1d0) * param_1[2];
  FUN_009aa500((void *)((int)this + 0x1e0),pfVar1);
  fVar2 = *(float *)((int)this + 0x13c);
  pfVar5 = pfVar1;
  pfVar6 = (float *)((int)this + 0x180);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
  }
  FUN_00527b80((float *)((int)this + 0x180),*(float *)((int)this + 0x138),1.0,fVar2);
  local_60[0xb] = 0.0;
  local_60[10] = 0.0;
  local_60[9] = 0.0;
  local_60[6] = 0.0;
  local_60[3] = 0.0;
  local_60[2] = 0.0;
  local_60[1] = 0.0;
  local_60[0] = 1.0;
  local_60[8] = 0.0;
  local_60[4] = 0.0;
  local_60[5] = 1.0;
  local_60[7] = 1.0;
  FUN_009aa830((void *)((int)this + 0x180),local_60);
  *(float *)((int)this + 0x168) = *pfVar1;
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x1c8);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)this + 0x1d0);
  FUN_009a55a0(this);
  Camera_CommitMatrixAndInvalidateCache();
  FUN_009a1cd0(this);
  FUN_009a2400(&DAT_0105c2e8);
  FUN_009cc830();
  return;
}


//// FUNCTION FUN_009a2d40 @ 009a2d40 ////

void __fastcall FUN_009a2d40(float *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_004012c0(*param_1);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar1);
  FUN_009a6070(&DAT_0105c2e8,param_1[1]);
  DAT_0105c3e4 = param_1[2];
  FUN_009a5390(0x105c2e8);
  FUN_009a2830(&DAT_0105c2e8,param_1 + 3,param_1 + 6,0.0);
  return;
}


//// FUNCTION FUN_009a2da0 @ 009a2da0 ////

void __fastcall FUN_009a2da0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_004012c0(*param_1);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar1);
  FUN_009a6070(&DAT_0105c2e8,param_1[1]);
  DAT_0105c3e4 = param_1[2];
  FUN_009a5390(0x105c2e8);
  FUN_009a2830(&DAT_0105c2e8,param_1 + 3,param_1 + 6,param_1[9]);
  return;
}


//// FUNCTION FUN_009a2e10 @ 009a2e10 ////

undefined4 * __fastcall FUN_009a2e10(undefined4 *param_1)

{
  int iVar1;
  
  ((LPCRITICAL_SECTION)(param_1 + 1))->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0x2c;
  param_1[7] = 0;
  iVar1 = FUN_009a1370((LPCRITICAL_SECTION)(param_1 + 1));
  if (iVar1 < 0) {
    DAT_0105c88c = 1;
  }
  return param_1;
}


//// FUNCTION FUN_009a2e60 @ 009a2e60 ////

void __fastcall FUN_009a2e60(int *param_1)

{
  FUN_009a2610(param_1,DAT_010cc0f0);
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


//// FUNCTION FUN_009a2e90 @ 009a2e90 ////

void __fastcall FUN_009a2e90(undefined4 *param_1)

{
  float10 fVar1;
  float local_18 [6];
  
  local_18[0] = 0.0;
  param_1[0x52] = 0;
  local_18[1] = 0.0;
  param_1[0x53] = 0;
  param_1[0x68] = 0x3f800000;
  param_1[100] = 0x3f800000;
  param_1[0x60] = 0x3f800000;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x74] = 0x3f800000;
  param_1[0x70] = 0x3f800000;
  param_1[0x6c] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x80] = 0x3f800000;
  param_1[0x7c] = 0x3f800000;
  param_1[0x78] = 0x3f800000;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x8c] = 0x3f800000;
  param_1[0x88] = 0x3f800000;
  param_1[0x84] = 0x3f800000;
  FUN_009a6070(param_1,1.0);
  param_1[0x3f] = 0x44fa0000;
  FUN_009a5390((int)param_1);
  fVar1 = FUN_004012c0(1.3962635);
  FUN_009a1950(param_1,(float)fVar1);
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 10.0;
  local_18[4] = 10.0;
  local_18[5] = 10.0;
  FUN_009a2830(param_1,local_18 + 3,local_18,0.0);
  return;
}


//// FUNCTION FUN_009a30b0 @ 009a30b0 ////

void __thiscall
FUN_009a30b0(void *this,int param_1,int param_2,int param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((param_3 < 0) || (param_4 < 0)) {
    param_4 = 0;
    param_3 = 0;
  }
  fVar1 = (float)param_1;
  *(int *)((int)this + 0x124) = param_4;
  *(float *)((int)this + 0x118) = fVar1;
  fVar2 = (float)param_2;
  *(int *)((int)this + 0x110) = param_1;
  *(int *)((int)this + 0x114) = param_2;
  *(float *)((int)this + 0x11c) = fVar2;
  *(int *)((int)this + 0x120) = param_3;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(float *)((int)this + 0x128) = fVar1 * 0.5;
  *(float *)((int)this + 300) = fVar2 * 0.5;
  *(float *)((int)this + 0x130) = 1.0 / (fVar1 * 0.5);
  *(float *)((int)this + 0x134) = 1.0 / (fVar2 * 0.5);
  *(float *)((int)this + 0x108) = fVar1 / fVar2;
  *(float *)((int)this + 0x140) = fVar1;
  *(float *)((int)this + 0x144) = fVar2;
  if (param_5 != '\0') {
    FUN_009a2e90(this);
    return;
  }
  fVar3 = FUN_004012c0(*(float *)((int)this + 0xf4));
  FUN_009a1950(this,(float)fVar3);
  FUN_009a2830(this,(float *)&DAT_0105c3a8,(float *)&DAT_0105c3b4,DAT_0105c3d8);
  return;
}


//// FUNCTION FUN_009a3210 @ 009a3210 ////

undefined4 * __fastcall FUN_009a3210(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_009a26a0(param_1);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x68] = 0x3f800000;
  param_1[100] = 0x3f800000;
  param_1[0x60] = 0x3f800000;
  param_1[0x74] = 0x3f800000;
  param_1[0x70] = 0x3f800000;
  param_1[0x6c] = 0x3f800000;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x80] = 0x3f800000;
  param_1[0x7c] = 0x3f800000;
  param_1[0x78] = 0x3f800000;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x8c] = 0x3f800000;
  param_1[0x88] = 0x3f800000;
  param_1[0x84] = 0x3f800000;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x98] = 0x3f800000;
  param_1[0x94] = 0x3f800000;
  param_1[0x90] = 0x3f800000;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  iVar2 = 4;
  puVar1 = param_1 + 0x9f;
  do {
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + -1;
    puVar1[2] = 0x3f800000;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  FUN_009a1750((undefined1 *)(param_1 + 0xaf));
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0x46] = 0x44480000;
  param_1[0x50] = 0x44480000;
  param_1[0x44] = 800;
  param_1[0x45] = 600;
  param_1[0x47] = 0x44160000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x3c] = 0;
  param_1[0x4a] = 0x43c80000;
  param_1[0x4b] = 0x43960000;
  param_1[0x4c] = 0x3b23d70a;
  param_1[0x4d] = 0x3b5a740e;
  param_1[0x42] = 0x3faaaaab;
  param_1[0x51] = 0x44160000;
  FUN_009a2e90(param_1);
  return param_1;
}


//// FUNCTION FUN_009a3480 @ 009a3480 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
FUN_009a3480(int param_1,int param_2,undefined4 param_3,undefined1 param_4,char param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar1 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf6493;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  DAT_0105be92 = param_4;
  DAT_00e67b84 = param_1;
  DAT_00e67b88 = param_2;
  ExceptionList = &local_c;
  FUN_00a10480();
  uVar2 = FUN_009a7a50(param_3,param_5);
  if ((char)uVar2 == '\0') {
    uVar3 = FUN_009a4e20();
    DAT_0105cc5c = uVar1;
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  FUN_0099a5c0("Data\\Textures");
  _strncpy(&DAT_0105eb50,"Data\\Meshes",0x3ff);
  DAT_0105ef4f = 0;
  Renderer_InitDeviceStateAndResources();
  DAT_0105c400 = (float)DAT_00e67b84;
  DAT_0105c3f8 = DAT_00e67b84;
  DAT_0105c404 = (float)DAT_00e67b88;
  DAT_0105c3fc = DAT_00e67b88;
  _DAT_0105c408 = 0;
  _DAT_0105c40c = 0;
  DAT_0105c3d8 = 0;
  _DAT_0105c410 = DAT_0105c400 * 0.5;
  _DAT_0105c414 = DAT_0105c404 * 0.5;
  _DAT_0105c418 = 1.0 / _DAT_0105c410;
  _DAT_0105c41c = 1.0 / _DAT_0105c414;
  _DAT_0105c3f0 = DAT_0105c400 / DAT_0105c404;
  _DAT_0105c428 = DAT_0105c400;
  _DAT_0105c42c = DAT_0105c404;
  FUN_009a2e90(&DAT_0105c2e8);
  puVar4 = operator_new(0x120008);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_0105be8c = (undefined4 *)0x0;
    uVar2 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  else {
    DAT_0105be8c = FUN_00a58000(puVar4);
    uVar2 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar6 = FUN_00990ae0(uVar2,uVar5);
  DAT_0105be98 = (undefined4)uVar6;
  DAT_0105becc = 0;
  DAT_0105beb8 = 0;
  FUN_009a9690();
  FUN_00995b40();
  local_10 = local_10 & 0xfffffffe;
  _DAT_0105c6f4 = local_10 | 3;
  DAT_0105bec0 = 0;
  _DAT_0105c6e8 = FUN_009a8fc0;
  _DAT_0105c6ec = 0xd;
  _DAT_0105c6f0 = 0;
  _DAT_0105c684 = local_10 | 3;
  _DAT_0105c678 = FlushAndRenderQueue;
  _DAT_0105c67c = 6;
  _DAT_0105c680 = 0;
  DAT_0105c624 = local_10 | 3;
  DAT_0105c618 = &LAB_009e6360;
  DAT_0105c61c = 0;
  DAT_0105c620 = 0;
  DAT_0105c634 = local_10 | 3;
  DAT_0105c628 = &LAB_00999e10;
  DAT_0105c62c = 1;
  DAT_0105c630 = 0;
  _DAT_0105c654 = local_10 | 3;
  _DAT_0105c648 = &LAB_00a4b7f0;
  _DAT_0105c64c = 3;
  _DAT_0105c650 = 0;
  _DAT_0105c714 = local_10 | 2;
  _DAT_0105c758 = &LAB_009abbb0;
  _DAT_0105c75c = 0x14;
  _DAT_0105c760 = 0;
  _DAT_0105c708 = &LAB_009a23c0;
  _DAT_0105c70c = 0xf;
  _DAT_0105c710 = 0;
  local_1c = 0x45dde000;
  local_18 = 0xc6115000;
  local_14 = 0x46674000;
  _DAT_0105c764 = _DAT_0105c714;
  FUN_009a1bf0(&local_1c);
  DAT_0105c2dc = 0x1a;
  if ((DAT_0105ca74 & 1) == 0) {
    if ((DAT_0105ca74 & 2) != 0) {
      DAT_0105c2dc = 0x18;
    }
  }
  else {
    DAT_0105c2dc = 0x32;
  }
  FUN_009e6690();
  FUN_00984560();
  FUN_009a01a0();
  FUN_00999ad0();
  FUN_009909a0();
  FUN_00a51690();
  FUN_00a044e0();
  FUN_009e6990();
  FUN_00a146b0();
  FUN_009d5f90();
  FUN_00a57510();
  FUN_00a22e60();
  Scene_InitGlobalAssets();
  FUN_009f4da0();
  if (DAT_0105c5fc == (void *)0x0) {
    DAT_0105c5fc = (void *)0x0;
    DAT_0105c600 = 0;
    _DAT_0105c604 = 0;
    FUN_00a56e80();
    FUN_00a1e370();
    FUN_00a56480();
    FUN_00a53770((uint3)extraout_ECX_01);
    FUN_009f0100();
    FUN_00a14200();
    uVar2 = FUN_0099e840();
    DAT_0105cc5c = uVar1;
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0105c5fc);
}


//// FUNCTION FUN_009a3870 @ 009a3870 ////

/* WARNING: Removing unreachable block (ram,0x009a394d) */

void FUN_009a3870(void)

{
  void *_Src;
  float *pfVar1;
  void *_Dst;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int local_10;
  int local_c;
  
  if ((DAT_0105ca7c != 0) && (iVar7 = DAT_0105ca80 - DAT_0105ca7c >> 2, iVar7 != 0)) {
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      pvVar3 = *(void **)(DAT_0105ca7c + iVar7 * 4);
      _Dst = (void *)(DAT_0105ca7c + iVar7 * 4);
      if (*(int *)((int)pvVar3 + 0x20) == 1) {
        _Src = (void *)((int)_Dst + 4);
        _memmove(_Dst,_Src,(DAT_0105ca80 - (int)_Src >> 2) << 2);
        DAT_0105ca80 = DAT_0105ca80 + -4;
        FUN_009de3b0(pvVar3);
      }
      else {
        local_c = 0;
        if (0 < *(int *)((int)pvVar3 + 0x28)) {
          do {
            piVar4 = *(int **)(*(int *)((int)pvVar3 + 0x2c) + local_c * 4);
            local_10 = 0;
            if (0 < *piVar4) {
              do {
                iVar5 = *(int *)(piVar4[1] + local_10 * 4);
                iVar2 = *(int *)((int)pvVar3 + 0x34) + (*(uint *)(iVar5 + 8) & 0xff) * 0x24;
                uVar8 = *(uint *)(iVar2 + 0x10) & 0xff;
                if (uVar8 != 0) {
                  *(float *)(iVar5 + 0x54) =
                       (float)uVar8 * (float)DAT_0105becc * 3.90625e-06 + *(float *)(iVar5 + 0x54);
                  if (*(float *)(iVar5 + 0x54) < 0.0) {
                    uVar9 = FUN_00acd42c();
                    fVar6 = (*(float *)(iVar5 + 0x54) - (float)(int)uVar9) + 1.0;
                  }
                  else {
                    uVar9 = FUN_00acd42c();
                    fVar6 = *(float *)(iVar5 + 0x54) - (float)(int)uVar9;
                  }
                  *(float *)(iVar5 + 0x54) = fVar6;
                }
                if (*(byte *)(iVar2 + 0x11) != 0) {
                  *(float *)(iVar5 + 0x58) =
                       (float)*(byte *)(iVar2 + 0x11) * (float)DAT_0105becc * 3.90625e-06 +
                       *(float *)(iVar5 + 0x58);
                  if (*(float *)(iVar5 + 0x58) < 0.0) {
                    uVar9 = FUN_00acd42c();
                    fVar6 = (*(float *)(iVar5 + 0x58) - (float)(int)uVar9) + 1.0;
                  }
                  else {
                    uVar9 = FUN_00acd42c();
                    fVar6 = *(float *)(iVar5 + 0x58) - (float)(int)uVar9;
                  }
                  *(float *)(iVar5 + 0x58) = fVar6;
                }
                if (*(byte *)(iVar2 + 0x12) != 0) {
                  pfVar1 = (float *)(iVar5 + 0x5c);
                  *pfVar1 = (float)*(byte *)(iVar2 + 0x12) * (float)DAT_0105becc * 3.125e-05 +
                            *pfVar1;
                  FUN_009b84f0(pfVar1,0.0,6.2831855);
                }
                local_10 = local_10 + 1;
              } while (local_10 < *piVar4);
            }
            local_c = local_c + 1;
          } while (local_c < *(int *)((int)pvVar3 + 0x28));
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009a3a80 @ 009a3a80 ////

void FUN_009a3a80(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  undefined1 uVar4;
  LONG LVar5;
  int iVar6;
  
  if ((DAT_0105c5fc != 0) && (iVar6 = DAT_0105c600 - DAT_0105c5fc >> 2, iVar6 != 0)) {
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar2 = iVar6 * 4;
      puVar3 = *(undefined4 **)(iVar2 + DAT_0105c5fc);
      if (puVar3[4] == 1) {
        if (puVar3 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar3 + 4);
          uVar4 = DAT_0105b588;
          if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          DAT_0105b588 = uVar4;
          *(undefined4 *)(iVar2 + DAT_0105c5fc) = 0;
        }
        pvVar1 = (void *)(DAT_0105c5fc + iVar2 + 4);
        _memmove((void *)(DAT_0105c5fc + iVar2),pvVar1,(DAT_0105c600 - (int)pvVar1 >> 2) << 2);
        DAT_0105c600 = DAT_0105c600 + -4;
      }
      else {
        pvVar1 = *(void **)(iVar2 + DAT_0105c5fc);
        this = *(void **)((int)pvVar1 + 0x78);
        iVar2 = *(int *)((int)this + 4);
        FUN_00a03180(this,DAT_0105becc + iVar2);
        if (*(int *)((int)this + 4) < iVar2) {
          FUN_00980250(pvVar1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009a3b80 @ 009a3b80 ////

void __fastcall FUN_009a3b80(int param_1)

{
  FUN_0099de00(param_1);
  FUN_0099de00(param_1 + 0x18);
  return;
}


//// FUNCTION FUN_009a3ba0 @ 009a3ba0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a3ba0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvVar5;
  uint uVar6;
  
  FUN_0099dea0();
  FUN_00a13870();
  FUN_009efd30();
  FUN_00a52d60();
  FUN_00a56040();
  FUN_00a1dfa0();
  FUN_00a56ec0();
  FUN_009f49c0();
  uVar6 = 0;
  pvVar5 = DAT_0105ca7c;
  while( true ) {
    if (pvVar5 == (void *)0x0) {
      DAT_0105ca7c = (void *)0x0;
      DAT_0105ca80 = 0;
      DAT_0105ca84 = 0;
      uVar6 = 0;
      pvVar5 = DAT_0105c5fc;
      while( true ) {
        if (pvVar5 == (void *)0x0) {
          DAT_0105c5fc = (void *)0x0;
          DAT_0105c600 = 0;
          _DAT_0105c604 = 0;
          FUN_00978190();
          FUN_0097e320();
          thunk_FUN_0099a470();
          FUN_009d5960();
          thunk_FUN_00a22e70();
          FUN_00a57520();
          FUN_009d5fc0();
          FUN_00a14a50();
          FUN_00a049b0();
          FUN_00a516b0();
          FUN_00999b00();
          FUN_009a0550();
          pvVar5 = DAT_010bb290;
          if (DAT_010bb290 == (void *)0x0) {
            DAT_010bb290 = (void *)0x0;
            FUN_009e66a0();
            FUN_00a17010();
            FUN_009e0e80();
            FUN_00987b80();
            FUN_00995b60();
            FUN_009a94b0();
            FUN_009954e0();
            FUN_009a4e20();
            FUN_00a26d90();
            FUN_00a10b90();
                    /* WARNING: Subroutine does not return */
            _free(DAT_0105be8c);
          }
          FUN_009a17f0((int)DAT_010bb290);
                    /* WARNING: Subroutine does not return */
          _free(pvVar5);
        }
        if ((uint)(DAT_0105c600 - (int)pvVar5 >> 2) <= uVar6) break;
        puVar2 = *(undefined4 **)((int)pvVar5 + uVar6 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          LVar4 = InterlockedDecrement(puVar2 + 4);
          uVar3 = DAT_0105b588;
          if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          DAT_0105b588 = uVar3;
          *(undefined4 *)((int)DAT_0105c5fc + uVar6 * 4) = 0;
          pvVar5 = DAT_0105c5fc;
        }
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(pvVar5);
    }
    if ((uint)(DAT_0105ca80 - (int)pvVar5 >> 2) <= uVar6) break;
    pvVar1 = *(void **)((int)pvVar5 + uVar6 * 4);
    if (pvVar1 != (void *)0x0) {
      FUN_009de3b0(pvVar1);
      *(undefined4 *)((int)DAT_0105ca7c + uVar6 * 4) = 0;
      pvVar5 = DAT_0105ca7c;
    }
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar5);
}


//// FUNCTION FUN_009a3d70 @ 009a3d70 ////

void __cdecl FUN_009a3d70(void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_1;
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x78) != 0)) {
    iVar2 = FUN_0097e350(param_1,0);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xac) != 0)) {
      InterlockedIncrement((LONG *)((int)pvVar1 + 0x10));
      FUN_004690a0(&DAT_0105c5f8,&param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009a3dc0 @ 009a3dc0 ////

void __thiscall FUN_009a3dc0(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  fVar1 = 1.0 - param_2;
  fVar4 = fVar1 * fVar1 * fVar1;
  fVar3 = fVar1 * fVar1 * param_2 * 3.0;
  fVar1 = fVar1 * param_2 * param_2 * 3.0;
  fVar2 = param_2 * param_2 * param_2;
  *param_1 = fVar4 * *(float *)this +
             fVar3 * *(float *)((int)this + 0xc) +
             fVar1 * *(float *)((int)this + 0x18) + fVar2 * *(float *)((int)this + 0x24);
  param_1[1] = fVar4 * *(float *)((int)this + 4) +
               fVar3 * *(float *)((int)this + 0x10) +
               fVar1 * *(float *)((int)this + 0x1c) + fVar2 * *(float *)((int)this + 0x28);
  param_1[2] = fVar4 * *(float *)((int)this + 8) +
               fVar3 * *(float *)((int)this + 0x14) +
               fVar1 * *(float *)((int)this + 0x20) + fVar2 * *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_009a3ea0 @ 009a3ea0 ////

float10 FUN_009a3ea0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_2 < 0.001) {
    return (float10)0.0;
  }
  fVar1 = *(float *)(param_1 + 400) - 0.001;
  if (fVar1 < param_2 != (fVar1 == param_2)) {
    return (float10)1.0;
  }
  iVar2 = 0x32;
  iVar4 = 100;
  iVar5 = 0;
  while ((iVar3 = iVar2, iVar3 != iVar5 && (iVar3 != iVar4))) {
    fVar1 = *(float *)(param_1 + iVar3 * 4);
    if (fVar1 < param_2 == (fVar1 == param_2)) {
      iVar2 = (iVar3 + iVar5) / 2;
      iVar4 = iVar3;
    }
    else {
      iVar2 = (iVar4 + iVar3) / 2;
      iVar5 = iVar3;
    }
  }
  fVar6 = (float10)*(float *)(param_1 + iVar5 * 4);
  return (((float10)param_2 - fVar6) / ((float10)*(float *)(param_1 + iVar4 * 4) - fVar6) +
         (float10)iVar5) * (float10)0.01;
}


//// FUNCTION FUN_009a3f80 @ 009a3f80 ////

void __thiscall FUN_009a3f80(void *this,float *param_1,float *param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  local_18 = *param_3 - *param_1;
  local_14 = param_3[1] - param_1[1];
  local_10 = param_3[2] - param_1[2];
  FUN_00412fd0(this,&local_c,&local_18);
  FUN_00412e20(this);
  *(float *)((int)this + 0xc) =
       -(*param_1 * *(float *)this +
        *(float *)((int)this + 4) * param_1[1] + *(float *)((int)this + 8) * param_1[2]);
  return;
}


//// FUNCTION FUN_009a4140 @ 009a4140 ////

float10 __cdecl FUN_009a4140(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fpatan((float10)param_1[1],(float10)*param_1);
  if (fVar1 < (float10)0.0) {
    fVar1 = fVar1 + (float10)6.2831855;
  }
  return fVar1;
}


//// FUNCTION FUN_009a4160 @ 009a4160 ////

float * __fastcall FUN_009a4160(void *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = operator_new(0x194);
  local_1c = 0.0;
  *pfVar1 = 0.0;
  local_20 = 0;
  pfVar2 = pfVar1;
  do {
    pfVar2 = pfVar2 + 1;
    FUN_009a3dc0(param_1,&local_18,(float)local_20 * 0.01);
    FUN_009a3dc0(param_1,&local_c,(float)local_20 * 0.01 + 0.01);
    local_20 = local_20 + 1;
    local_1c = SQRT((local_18 - local_c) * (local_18 - local_c) +
                    (local_14 - local_8) * (local_14 - local_8) +
                    (local_10 - local_4) * (local_10 - local_4)) + local_1c;
    *pfVar2 = local_1c;
  } while (local_20 < 100);
  return pfVar1;
}


//// FUNCTION FUN_009a42e0 @ 009a42e0 ////

void __fastcall FUN_009a42e0(undefined1 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = 0;
  if ((*(float *)(param_1 + 0x1c) <= *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x24)) &&
     (*(float *)(param_1 + 0x1c) != 0.0)) {
    fVar1 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c);
    fVar4 = *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20);
    fVar3 = (fVar1 - *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24)) + fVar4;
    fVar2 = fVar3 / (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x1c));
    fVar1 = (fVar4 * fVar1 * 4.0 - fVar3 * fVar3) / (fVar1 * 4.0);
    if (0.0 <= fVar1) {
      fVar1 = SQRT(fVar1);
      *(float *)(param_1 + 4) = fVar2;
      *param_1 = 1;
      *(float *)(param_1 + 8) = fVar1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(float *)(param_1 + 0x10) = fVar2;
      *(float *)(param_1 + 0x14) = -fVar1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009a43c0 @ 009a43c0 ////

uint __thiscall FUN_009a43c0(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (*param_1 - *param_2) * *(float *)this +
          (param_1[1] - param_2[1]) * *(float *)((int)this + 4) +
          (param_1[2] - param_2[2]) * *(float *)((int)this + 8);
  if (ABS(fVar7) < 9.403955e-38) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return (uint)param_3 & 0xffffff00;
  }
  fVar7 = (param_1[1] * *(float *)((int)this + 4) +
           param_1[2] * *(float *)((int)this + 8) + *param_1 * *(float *)this +
          *(float *)((int)this + 0xc)) / fVar7;
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *param_3 = (*param_2 - *param_1) * fVar7 + *param_1;
  param_3[1] = (fVar1 - fVar2) * fVar7 + fVar5;
  param_3[2] = (fVar3 - fVar4) * fVar7 + fVar6;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


//// FUNCTION FUN_009a44a0 @ 009a44a0 ////

uint __thiscall FUN_009a44a0(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  
  fVar7 = (*param_1 - *param_2) * *(float *)this +
          (param_1[1] - param_2[1]) * *(float *)((int)this + 4) +
          (param_1[2] - param_2[2]) * *(float *)((int)this + 8);
  if (9.403955e-38 <= ABS(fVar7)) {
    fVar7 = (param_1[1] * *(float *)((int)this + 4) +
             param_1[2] * *(float *)((int)this + 8) + *param_1 * *(float *)this +
            *(float *)((int)this + 0xc)) / fVar7;
    fVar1 = param_2[1];
    fVar2 = param_1[1];
    fVar3 = param_2[2];
    fVar4 = param_1[2];
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    *param_3 = (*param_2 - *param_1) * fVar7 + *param_1;
    param_3[1] = (fVar1 - fVar2) * fVar7 + fVar5;
    param_3[2] = (fVar3 - fVar4) * fVar7 + fVar6;
    uVar8 = (undefined2)((uint)param_3 >> 0x10);
    param_3 = (float *)CONCAT22(uVar8,(ushort)(fVar7 < 0.0) << 8 | (ushort)NAN(fVar7) << 10 |
                                      (ushort)(fVar7 == 0.0) << 0xe);
    if ((fVar7 >= 0.0) &&
       (param_3 = (float *)CONCAT22(uVar8,(ushort)(fVar7 < 1.0) << 8 | (ushort)NAN(fVar7) << 10 |
                                          (ushort)(fVar7 == 1.0) << 0xe),
       fVar7 < 1.0 || (fVar7 == 1.0) != 0)) {
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  else {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
  }
  return (uint)param_3 & 0xffffff00;
}


//// FUNCTION FUN_009a45a0 @ 009a45a0 ////

void __thiscall
FUN_009a45a0(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  *(float *)((int)this + 0x40) = *param_1;
  *(float *)((int)this + 0x44) = param_1[1];
  *(float *)((int)this + 0x48) = param_1[2];
  *(float *)((int)this + 0x4c) = *param_3;
  *(float *)((int)this + 0x50) = param_3[1];
  *(float *)((int)this + 0x54) = param_3[2];
  *(float *)((int)this + 0x58) = *param_5;
  *(float *)((int)this + 0x5c) = param_5[1];
  *(float *)((int)this + 0x60) = param_5[2];
  local_20 = param_4[2] + param_2[2];
  local_40 = *param_2 + *param_4 + *param_6;
  local_3c = param_2[1] + param_4[1] + param_6[1];
  local_38 = local_20 + param_6[2];
  *(float *)((int)this + 100) = local_40;
  *(float *)((int)this + 0x68) = local_3c;
  *(float *)((int)this + 0x6c) = local_38;
  FUN_00412e20((float *)((int)this + 100));
  FUN_009a3f80(this,param_1,param_3,param_5);
  local_14 = param_4[2] * 0.001;
  local_20 = param_2[2] * 0.001;
  local_40 = *param_2 * 0.001 + *param_1 + *param_3;
  local_3c = param_2[1] * 0.001 + param_1[1] + param_3[1];
  local_38 = local_20 + param_1[2] + param_3[2];
  local_34 = local_40 + *param_4 * 0.001;
  local_30 = local_3c + param_4[1] * 0.001;
  local_2c = local_38 + local_14;
  FUN_009a3f80((void *)((int)this + 0x10),param_1,&local_34,param_3);
  local_8 = param_6[2] * 0.001;
  local_14 = param_4[2] * 0.001;
  local_28 = *param_4 * 0.001 + *param_3;
  local_40 = local_28 + *param_5;
  local_3c = param_4[1] * 0.001 + param_3[1] + param_5[1];
  local_38 = local_14 + param_3[2] + param_5[2];
  local_34 = local_40 + *param_6 * 0.001;
  local_30 = local_3c + param_6[1] * 0.001;
  local_2c = local_38 + local_8;
  FUN_009a3f80((void *)((int)this + 0x20),param_3,&local_34,param_5);
  local_20 = param_6[2] * 0.001;
  local_8 = param_2[2] * 0.001;
  local_1c = *param_2 * 0.001 + *param_1;
  local_40 = local_1c + *param_5;
  local_3c = param_2[1] * 0.001 + param_1[1] + param_5[1];
  local_38 = local_8 + param_1[2] + param_5[2];
  local_34 = local_40 + *param_6 * 0.001;
  local_30 = local_3c + param_6[1] * 0.001;
  local_2c = local_38 + local_20;
  FUN_009a3f80((void *)((int)this + 0x30),param_5,&local_34,param_1);
  local_34 = *param_6 * 0.001 + *param_5;
  local_30 = param_6[1] * 0.001 + param_5[1];
  local_2c = param_6[2] * 0.001 + param_5[2];
  local_40 = *param_4 * 0.001 + *param_3;
  local_3c = param_4[1] * 0.001 + param_3[1];
  local_38 = param_4[2] * 0.001 + param_3[2];
  local_8 = param_2[2] * 0.001;
  local_28 = *param_2 * 0.001 + *param_1;
  local_24 = param_2[1] * 0.001 + param_1[1];
  local_20 = local_8 + param_1[2];
  FUN_009a3f80(&local_10,&local_28,&local_40,&local_34);
  if (0.0 < local_10 * *(float *)this +
            local_8 * *(float *)((int)this + 8) + local_c * *(float *)((int)this + 4)) {
    *(undefined1 *)((int)this + 0x70) = 1;
    return;
  }
  *(undefined1 *)((int)this + 0x70) = 0;
  return;
}


//// FUNCTION FUN_009a4a30 @ 009a4a30 ////

uint __cdecl
FUN_009a4a30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  float *pfVar5;
  int iVar6;
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
  float local_30;
  float local_2c;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_009a3f80(&local_34,param_1,param_2,param_3);
  uVar3 = FUN_009a43c0(&local_34,param_4,param_5,param_6);
  if ((char)uVar3 != '\0') {
    local_24[0] = *param_1;
    local_24[1] = param_1[1];
    local_24[2] = param_1[2];
    local_24[3] = *param_2;
    local_14 = param_2[1];
    local_10 = param_2[2];
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
    pfVar5 = local_24 + 2;
    iVar6 = 1;
    while( true ) {
      iVar4 = iVar6;
      if (2 < iVar6) {
        iVar4 = 0;
      }
      local_4c = local_24[iVar4 * 3] - pfVar5[-2];
      local_48 = local_24[iVar4 * 3 + 1] - pfVar5[-1];
      local_44 = local_24[iVar4 * 3 + 2] - *pfVar5;
      local_58 = *param_6 - pfVar5[-2];
      local_54 = param_6[1] - pfVar5[-1];
      local_50 = param_6[2] - *pfVar5;
      FUN_00412fd0(&local_40,&local_4c,&local_58);
      fVar2 = local_40 * local_34 + local_3c * local_30 + local_38 * local_2c;
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                       (ushort)(fVar2 == 0.0) << 0xe);
      if (fVar2 < 0.0) break;
      pfVar5 = pfVar5 + 3;
      bVar1 = 2 < iVar6;
      iVar6 = iVar6 + 1;
      if (bVar1) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009a4b70 @ 009a4b70 ////

uint __cdecl
FUN_009a4b70(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  float *pfVar5;
  int iVar6;
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
  float local_30;
  float local_2c;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_009a3f80(&local_34,param_1,param_2,param_3);
  uVar3 = FUN_009a44a0(&local_34,param_4,param_5,param_6);
  if ((char)uVar3 != '\0') {
    local_24[0] = *param_1;
    local_24[1] = param_1[1];
    local_24[2] = param_1[2];
    local_24[3] = *param_2;
    local_14 = param_2[1];
    local_10 = param_2[2];
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
    pfVar5 = local_24 + 2;
    iVar6 = 1;
    while( true ) {
      iVar4 = iVar6;
      if (2 < iVar6) {
        iVar4 = 0;
      }
      local_4c = local_24[iVar4 * 3] - pfVar5[-2];
      local_48 = local_24[iVar4 * 3 + 1] - pfVar5[-1];
      local_44 = local_24[iVar4 * 3 + 2] - *pfVar5;
      local_58 = *param_6 - pfVar5[-2];
      local_54 = param_6[1] - pfVar5[-1];
      local_50 = param_6[2] - *pfVar5;
      FUN_00412fd0(&local_40,&local_4c,&local_58);
      fVar2 = local_40 * local_34 + local_3c * local_30 + local_38 * local_2c;
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                       (ushort)(fVar2 == 0.0) << 0xe);
      if (fVar2 < 0.0) break;
      pfVar5 = pfVar5 + 3;
      bVar1 = 2 < iVar6;
      iVar6 = iVar6 + 1;
      if (bVar1) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009a4cb0 @ 009a4cb0 ////

int __thiscall FUN_009a4cb0(void *this,float *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  undefined2 extraout_var;
  uint3 uVar6;
  float *pfVar7;
  int iVar8;
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
  float local_30;
  float local_2c;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar7 = (float *)(param_2 + (uint)*(ushort *)this * 0xc);
  local_24[0] = *pfVar7;
  local_24[1] = pfVar7[1];
  local_24[2] = pfVar7[2];
  pfVar1 = (float *)(param_2 + (uint)*(ushort *)((int)this + 2) * 0xc);
  local_24[3] = *pfVar1;
  pfVar2 = (float *)(param_2 + (uint)*(ushort *)((int)this + 4) * 0xc);
  local_14 = pfVar1[1];
  local_10 = pfVar1[2];
  local_c = *pfVar2;
  local_8 = pfVar2[1];
  local_4 = pfVar2[2];
  FUN_009a3f80(&local_34,pfVar7,pfVar1,pfVar2);
  pfVar7 = local_24 + 2;
  iVar8 = 1;
  while( true ) {
    iVar5 = iVar8;
    if (2 < iVar8) {
      iVar5 = 0;
    }
    local_4c = local_24[iVar5 * 3] - pfVar7[-2];
    local_48 = local_24[iVar5 * 3 + 1] - pfVar7[-1];
    local_44 = local_24[iVar5 * 3 + 2] - *pfVar7;
    local_58 = *param_1 - pfVar7[-2];
    local_54 = param_1[1] - pfVar7[-1];
    local_50 = param_1[2] - *pfVar7;
    FUN_00412fd0(&local_40,&local_4c,&local_58);
    fVar4 = local_40 * local_34 + local_3c * local_30 + local_38 * local_2c;
    uVar6 = (uint3)(CONCAT22(extraout_var,
                             (ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                             (ushort)(fVar4 == 0.0) << 0xe) >> 8);
    if (fVar4 < 0.0) break;
    pfVar7 = pfVar7 + 3;
    bVar3 = 2 < iVar8;
    iVar8 = iVar8 + 1;
    if (bVar3) {
      return CONCAT31(uVar6,1);
    }
  }
  return (uint)uVar6 << 8;
}


//// FUNCTION FUN_009a4de0 @ 009a4de0 ////

void __fastcall FUN_009a4de0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_009a4e20 @ 009a4e20 ////

undefined4 FUN_009a4e20(void)

{
  undefined4 uVar1;
  
  FUN_009c7700();
  if (DAT_0105bebc != (void *)0x0) {
    FUN_0099b400(DAT_0105bebc);
    DAT_0105bebc = (void *)0x0;
  }
  FUN_009ad7a0(0x105ef50);
  FUN_009ad7a0(0x10b9588);
  FUN_009ad7a0(0x10581b0);
  FUN_00a3b5b0();
  if (DAT_0105ca60 != (int *)0x0) {
    (**(code **)(*DAT_0105ca60 + 8))(DAT_0105ca60);
    DAT_0105ca60 = (int *)0x0;
  }
  if (DAT_0105ca58 != (void *)0x0) {
    FUN_0099b400(DAT_0105ca58);
    DAT_0105ca58 = (void *)0x0;
  }
  if (DAT_0105ca64 != (int *)0x0) {
    (**(code **)(*DAT_0105ca64 + 8))(DAT_0105ca64);
    DAT_0105ca64 = (int *)0x0;
  }
  if (DAT_0105ca5c != (void *)0x0) {
    FUN_0099b400(DAT_0105ca5c);
    DAT_0105ca5c = (void *)0x0;
  }
  if (DAT_0105ca68 != (int *)0x0) {
    (**(code **)(*DAT_0105ca68 + 8))(DAT_0105ca68);
    DAT_0105ca68 = (int *)0x0;
  }
  if (DAT_0105ca6c != (int *)0x0) {
    (**(code **)(*DAT_0105ca6c + 8))(DAT_0105ca6c);
    DAT_0105ca6c = (int *)0x0;
  }
  if (g_pDirect3DDevice != (int *)0x0) {
    (**(code **)(*g_pDirect3DDevice + 8))(g_pDirect3DDevice);
    g_pDirect3DDevice = (int *)0x0;
  }
  uVar1 = 0;
  if (DAT_0105ca40 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0105ca40 + 8))(DAT_0105ca40);
    DAT_0105ca40 = (int *)0x0;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009a4f10 @ 009a4f10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_009a4f10(void)

{
  float fVar1;
  undefined4 uVar2;
  
  DAT_0105be90 = 1;
  if (DAT_00e67b9d == '\0') {
    DAT_00e67b9e = 1;
  }
  _time((time_t *)&stack0xfffffffc);
  _DAT_0105c908 = _localtime((time_t *)&stack0xfffffffc);
  fVar1 = (float)_DAT_0105c908->tm_min * 0.016666668;
  DAT_0105c8fc = ((float)_DAT_0105c908->tm_hour + fVar1) * 0.041666668 * 12.566371;
  DAT_0105c900 = fVar1 * 6.2831855;
  DAT_0105c904 = (float)_DAT_0105c908->tm_sec * 0.016666668 * 6.2831855;
  uVar2 = (**(code **)(*g_pDirect3DDevice + 0xa4))(g_pDirect3DDevice);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_009a4fb0 @ 009a4fb0 ////

undefined4 FUN_009a4fb0(void)

{
  undefined4 uVar1;
  
  DAT_0105be90 = 0;
  (**(code **)(*g_pDirect3DDevice + 0xa8))(g_pDirect3DDevice);
  uVar1 = 0;
  if (DAT_0105ca88 != 0) {
    (**(code **)(*g_pDirect3DDevice + 0xa4))(g_pDirect3DDevice);
    thunk_FUN_00a59140();
    uVar1 = (**(code **)(*g_pDirect3DDevice + 0xa8))(g_pDirect3DDevice);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009a5000 @ 009a5000 ////

void FUN_009a5000(undefined4 *param_1)

{
  undefined1 local_40 [64];
  
  if ((DAT_0105ca8c == '\0') || (param_1 != (undefined4 *)&DAT_00e67be8)) {
    FUN_009aa310(local_40,param_1);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x100,local_40);
    DAT_0105ca8c = param_1 == (undefined4 *)&DAT_00e67be8;
  }
  return;
}


//// FUNCTION FUN_009a5050 @ 009a5050 ////

void __cdecl FUN_009a5050(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 local_10 [16];
  
  puVar1 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puVar1 = local_10;
  }
  (**(code **)(*g_pDirect3DDevice + 0xac))(g_pDirect3DDevice,0,puVar1,2,0,param_1,0);
  return;
}


//// FUNCTION FUN_009a5090 @ 009a5090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a5090(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  
  FUN_0099f5e0();
  iVar1 = FUN_00770aa0();
  if (iVar1 != 2) {
    FUN_009a3870();
  }
  FUN_009a3a80();
  FUN_009b1f50();
  FUN_00995640();
  uVar2 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  DAT_0105beb8 = (int)uVar2 - DAT_0105be98;
  DAT_0105becc = DAT_0105beb8;
  iVar1 = (int)uVar2;
  if (DAT_0105be81 != '\0') {
    DAT_0105becc = 0;
    iVar1 = DAT_0105be98;
  }
  DAT_0105be98 = iVar1;
  if (DAT_0105beb8 < 0xc9) {
    if (DAT_0105beb8 < 0) {
      DAT_0105beb8 = 0;
    }
  }
  else {
    DAT_0105beb8 = 200;
  }
  if (DAT_0105becc < 0xc9) {
    if (DAT_0105becc < 0) {
      DAT_0105becc = 0;
    }
  }
  else {
    DAT_0105becc = 200;
  }
  if (1000 < DAT_0105be98 - DAT_0105ca94) {
    if (DAT_0105ca90 != 0) {
      _DAT_0105bec8 = ((float)DAT_0105ca90 * 1000.0) / (float)(DAT_0105be98 - DAT_0105ca94);
    }
    DAT_0105ca90 = 0;
    DAT_0105ca94 = DAT_0105be98;
  }
  DAT_0105ca90 = DAT_0105ca90 + 1;
  DAT_0105bec0 = DAT_0105bec0 + 1;
  FUN_00a22f30();
  FUN_009de790();
  FUN_00a26d40();
  FUN_00a184d0((float)DAT_0105becc * 0.001);
  FUN_00a56940();
  return;
}


//// FUNCTION FUN_009a51b0 @ 009a51b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009a51b0(void)

{
  int iVar1;
  
  _DAT_0105ca74 = 0;
  iVar1 = (**(code **)(*DAT_0105ca40 + 0x28))(DAT_0105ca40,0,1,DAT_0105ca54,0,3,0x32);
  if (-1 < iVar1) {
    _DAT_0105ca74 = _DAT_0105ca74 | 1;
  }
  iVar1 = (**(code **)(*DAT_0105ca40 + 0x28))(DAT_0105ca40,0,1,DAT_0105ca54,0,3,0x18);
  if (-1 < iVar1) {
    _DAT_0105ca74 = _DAT_0105ca74 | 2;
  }
  iVar1 = (**(code **)(*DAT_0105ca40 + 0x28))(DAT_0105ca40,0,1,DAT_0105ca54,0,3,0x1a);
  if (-1 < iVar1) {
    _DAT_0105ca74 = _DAT_0105ca74 | 4;
  }
  iVar1 = (**(code **)(*DAT_0105ca40 + 0x28))(DAT_0105ca40,0,1,DAT_0105ca54,0,3,0x33);
  if (-1 < iVar1) {
    _DAT_0105ca74 = _DAT_0105ca74 | 8;
  }
  iVar1 = (**(code **)(*DAT_0105ca40 + 0x28))(DAT_0105ca40,0,1,DAT_0105ca54,0,3,0x3c);
  if (-1 < iVar1) {
    _DAT_0105ca74 = _DAT_0105ca74 | 0x10;
  }
  return;
}


//// FUNCTION FUN_009a52a0 @ 009a52a0 ////

void __cdecl FUN_009a52a0(LPPOINT param_1)

{
  if (DAT_0105be92 == '\0') {
    ClientToScreen(DAT_0105beb0,(LPPOINT)param_1);
  }
  return;
}


//// FUNCTION FUN_009a52c0 @ 009a52c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_009a52c0(void)

{
  int iVar1;
  int *piVar2;
  int **ppiVar3;
  int *piStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  
  piStack_c = DAT_0105ca64;
  uStack_10 = DAT_0105ca60;
  piStack_14 = g_pDirect3DDevice;
  ppiVar3 = &piStack_14;
  (**(code **)(*g_pDirect3DDevice + 0x80))();
  piVar2 = DAT_0105ca64;
  iVar1 = (**(code **)(*DAT_0105ca64 + 0x34))(DAT_0105ca64,&piStack_14,0);
  if (iVar1 == 0) {
    _DAT_00000000 = piVar2;
    return (undefined1 *)ppiVar3;
  }
  return (undefined1 *)0x0;
}


//// FUNCTION FUN_009a5310 @ 009a5310 ////

void FUN_009a5310(void)

{
  (**(code **)(*DAT_0105ca64 + 0x38))(DAT_0105ca64);
  (**(code **)(*g_pDirect3DDevice + 0x78))(g_pDirect3DDevice,DAT_0105ca64,0,DAT_0105ca60,0);
  return;
}


//// FUNCTION FUN_009a5340 @ 009a5340 ////

float * __thiscall FUN_009a5340(void *this,byte param_1)

{
  FUN_009a2da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009a5390 @ 009a5390 ////

void __fastcall FUN_009a5390(int param_1)

{
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf8);
  return;
}


//// FUNCTION FUN_009a53a0 @ 009a53a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009a53a0(undefined4 param_1)

{
  _DAT_0105be9c = param_1;
  (**(code **)(*g_pDirect3DDevice + 0x94))(g_pDirect3DDevice,0,param_1);
  return;
}


//// FUNCTION FUN_009a53c0 @ 009a53c0 ////

undefined1 __cdecl FUN_009a53c0(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == 800) {
    bVar1 = param_2 == 600;
  }
  else if (param_1 == 0x400) {
    bVar1 = param_2 == 0x300;
  }
  else if (param_1 == 0x480) {
    bVar1 = param_2 == 0x360;
  }
  else if (param_1 == 0x500) {
    if (param_2 == 0x3c0) {
      return 1;
    }
    bVar1 = param_2 == 0x400;
  }
  else {
    if (param_1 != 0x640) {
      return 0;
    }
    bVar1 = param_2 == 0x4b0;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_009a5430 @ 009a5430 ////

undefined1 FUN_009a5430(void)

{
  return 1;
}


//// FUNCTION FUN_009a5470 @ 009a5470 ////

void __cdecl FUN_009a5470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009a5520 @ 009a5520 ////

int * __thiscall FUN_009a5520(void *this,int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  *(int *)this = param_1;
  iVar1 = param_1 * param_2;
  *(int *)((int)this + 4) = param_2;
  pvVar2 = operator_new(iVar1 * 4);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else if (-1 < iVar1 + -1) {
    puVar3 = (undefined1 *)((int)pvVar2 + 2);
    do {
      puVar3[-2] = 0xff;
      puVar3[-1] = 0xff;
      *puVar3 = 0xff;
      puVar3[1] = 0xff;
      *(undefined4 *)(puVar3 + -2) = 0xffffffff;
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(void **)((int)this + 8) = pvVar2;
    *(undefined1 *)((int)this + 0xc) = 1;
    return this;
  }
  *(void **)((int)this + 8) = pvVar2;
  *(undefined1 *)((int)this + 0xc) = 1;
  return this;
}


//// FUNCTION FUN_009a55a0 @ 009a55a0 ////

void __fastcall FUN_009a55a0(float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (g_pDirect3DDevice != (int *)0x0) {
    param_1[0x3f] = DAT_00e67b94;
    FUN_00b02e29(param_1,param_1 + 0x30,param_1 + 0x33,param_1 + 0x9c);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,2,param_1);
    pfVar5 = param_1 + 0x10;
    uVar6 = 0;
    pfVar2 = param_1;
    pfVar3 = pfVar5;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    pfVar2 = param_1;
    thunk_FUN_00b019df();
    fVar4 = (float10)fpatan((float10)param_1[0x41] / (float10)param_1[0x3e],(float10)1);
    if (param_1[0x3e] <= 0.1) {
      fVar7 = 0.1;
    }
    else {
      fVar7 = param_1[0x3e];
    }
    FUN_00b031b5(param_1 + 0x20,(float)(fVar4 + fVar4),param_1[0x42],fVar7,param_1[0x3f]);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,3,param_1 + 0x20,pfVar5,uVar6,pfVar2)
    ;
  }
  return;
}


//// FUNCTION FUN_009a5680 @ 009a5680 ////

void __fastcall FUN_009a5680(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)fptan((float10)*(float *)(param_1 + 0xf4) * (float10)0.5);
  fVar1 = fVar1 * (float10)*(float *)(param_1 + 0xf8);
  *(float *)(param_1 + 0x100) = (float)fVar1;
  *(float *)(param_1 + 0x104) = (float)(fVar1 / (float10)*(float *)(param_1 + 0x108));
  return;
}


//// FUNCTION FUN_009a56b0 @ 009a56b0 ////

undefined4 __cdecl FUN_009a56b0(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*g_pDirect3DDevice + 0xac))
                    (g_pDirect3DDevice,0,0,-(param_2 != '\0') & 2U | 1,param_1,0x3f800000,0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009a56e0 @ 009a56e0 ////

void __cdecl FUN_009a56e0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *unaff_EDI;
  uint *puVar3;
  ulonglong uVar4;
  int unaff_retaddr;
  undefined4 local_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_4;
  
  if (((DAT_0105ca60 != (int *)0x0) && (param_1 != 0)) &&
     (piVar1 = *(int **)(param_1 + 0x24), piVar1 != (int *)0x0)) {
    local_24 = 0;
    (**(code **)(*piVar1 + 0x48))(piVar1,0,&local_24);
    puVar2 = (uint *)0x0;
    puVar3 = (uint *)0x0;
    if (iStack_4 != 0) {
      uVar4 = FUN_00acd42c();
      uStack_20 = (undefined4)uVar4;
      FUN_00acd42c();
      FUN_00acd42c();
      uVar4 = FUN_00acd42c();
      local_24 = (undefined4)uVar4;
      puVar2 = (uint *)&stack0xffffffd4;
    }
    if (unaff_retaddr != 0) {
      uVar4 = FUN_00acd42c();
      uStack_10 = (undefined4)uVar4;
      uVar4 = FUN_00acd42c();
      uStack_18 = (undefined4)uVar4;
      uVar4 = FUN_00acd42c();
      uStack_1c = (uint)uVar4;
      uVar4 = FUN_00acd42c();
      uStack_14 = (undefined4)uVar4;
      puVar3 = &uStack_1c;
    }
    if ((unaff_EDI != (int *)0x0) &&
       (FUN_00afe117(unaff_EDI,(int *)0x0,puVar3,DAT_0105ca60,(int *)0x0,puVar2,0xffffffff,param_1),
       unaff_EDI != (int *)0x0)) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  return;
}


//// FUNCTION FUN_009a57d0 @ 009a57d0 ////

void __cdecl
FUN_009a57d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  void **ppvVar1;
  undefined4 local_6c [3];
  undefined1 local_60;
  uint local_5c;
  int local_54;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf64a8;
  local_c = ExceptionList;
  ppvVar1 = &local_c;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x54) & 4) != 0) {
      return;
    }
    ppvVar1 = &local_c;
    if ((*(uint *)(param_1 + 0x54) & 8) == 0) {
      ExceptionList = &local_c;
      FUN_00a26d00(param_1);
      ppvVar1 = ExceptionList;
    }
  }
  ExceptionList = ppvVar1;
  FUN_009910f0(local_6c);
  local_4 = 0;
  FUN_0041f350(&local_48);
  local_28 = (float)DAT_00e67ba4;
  local_2c = (float)DAT_00e67ba0;
  local_40 = param_3;
  local_44 = local_6c;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_24 = 0;
  if (param_5 != (undefined4 *)0x0) {
    local_20 = *param_5;
    local_1c = param_5[1];
    local_18 = param_5[2];
    local_14 = param_5[3];
  }
  if (local_54 != param_1) {
    Engine_SetResourceReference(local_6c,param_1);
  }
  local_5c = local_5c & 0x26ffffff;
  if (param_2 == 0) {
    local_60 = 6;
  }
  else {
    local_60 = 0x13;
    if (param_1 == 0) {
      local_40 = 0xff000000;
      local_60 = 0x14;
    }
  }
  BuildAndDrawPrimitive((int)&local_48);
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_6c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009a5900 @ 009a5900 ////

void __cdecl FUN_009a5900(int param_1)

{
  int iVar1;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  if (((param_1 != 0) &&
      ((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0 || ((*(byte *)(iVar1 + 0x54) & 4) == 0)))) &&
     ((*(int *)(param_1 + 0x1c) == 0 || ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x54) & 4) == 0)))) {
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x54) & 8) == 0)) {
      FUN_00a26d00(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x54) & 8) == 0)) {
      FUN_00a26d00(iVar1);
    }
    FUN_0041f350(&local_3c);
    local_1c = (float)DAT_00e67ba4;
    local_20 = (float)DAT_00e67ba0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_18 = 0;
    local_34 = 0xffffffff;
    local_38 = param_1;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xbeffffff;
    BuildAndDrawPrimitive((int)&local_3c);
  }
  return;
}


//// FUNCTION FUN_009a59c0 @ 009a59c0 ////

void * FUN_009a59c0(void)

{
  if (DAT_0105ca58 == (void *)0x0) {
    DAT_0105ca58 = FUN_0099bb50("RenderTarget",-1,DAT_00e67ba0,DAT_00e67ba4,'\0');
    if (DAT_0105ca58 != (void *)0x0) {
      DAT_0105ca5c = FUN_0099bb50("RenderTargetMemory",-2,DAT_00e67ba0,DAT_00e67ba4,'\0');
      (**(code **)(**(int **)((int)DAT_0105ca5c + 0x24) + 0x48))
                (*(int **)((int)DAT_0105ca5c + 0x24),0,&DAT_0105ca64);
    }
  }
  return DAT_0105ca58;
}


//// FUNCTION FUN_009a5a30 @ 009a5a30 ////

int * __thiscall FUN_009a5a30(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char unaff_retaddr;
  int local_24;
  int local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf64cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)this = *param_1;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  if (g_pDirect3DDevice == (int *)0x0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  else {
    (**(code **)(*g_pDirect3DDevice + 0xc0))(g_pDirect3DDevice,&local_24);
  }
  (**(code **)(*g_pDirect3DDevice + 0xc0))(g_pDirect3DDevice,(int)this + 0x10);
  if (unaff_retaddr == '\0') {
    puVar2 = operator_new(0x28);
    pvStack_c = (void *)0x0;
    if (puVar2 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_009a2270(puVar2);
    }
    pvStack_c = (void *)0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  local_24 = *param_1;
  local_20 = param_1[1];
  (**(code **)(*g_pDirect3DDevice + 0xbc))(g_pDirect3DDevice,&stack0xffffffd4);
  FUN_009a30b0(&DAT_0105c2e8,*param_1,param_1[1],param_1[2],param_1[3],'\0');
  ExceptionList = local_1c;
  return this;
}


//// FUNCTION FUN_009a5b60 @ 009a5b60 ////

void __fastcall FUN_009a5b60(int param_1)

{
  float *_Memory;
  
  (**(code **)(*g_pDirect3DDevice + 0xbc))(g_pDirect3DDevice,(int *)(param_1 + 0x10));
  FUN_009a30b0(&DAT_0105c2e8,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),'\0');
  _Memory = *(float **)(param_1 + 0x2c);
  if (_Memory != (float *)0x0) {
    FUN_009a2da0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


//// FUNCTION FUN_009a5bc0 @ 009a5bc0 ////

void FUN_009a5bc0(void)

{
  uint uVar1;
  void **ppvVar2;
  tm *ptVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  void **ppvVar11;
  void *local_134;
  undefined4 *puStack_130;
  void **local_12c;
  char acStack_128 [264];
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar6 = DAT_0105c3fc;
  uVar1 = DAT_0105c3f8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf64eb;
  pvStack_c = ExceptionList;
  DAT_0105bea1 = 0;
  ExceptionList = &pvStack_c;
  ppvVar2 = FUN_0099bb50("ScreenShot",-2,DAT_0105c3f8,DAT_0105c3fc,'\0');
  ppvVar11 = &local_134;
  local_134 = (void *)0x0;
  piVar10 = ppvVar2[9];
  local_12c = ppvVar2;
  (**(code **)(*piVar10 + 0x48))(piVar10,0);
  FUN_00afe117(unaff_ESI,(int *)0x0,(uint *)0x0,DAT_0105ca68,(int *)0x0,(uint *)0x0,0xffffffff,0);
  piVar9 = (int *)0x0;
  (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,&puStack_130,0);
  _time((time_t *)&stack0xfffffebc);
  ptVar3 = _localtime((time_t *)&stack0xfffffebc);
  CreateDirectoryA("ScreenShots",(LPSECURITY_ATTRIBUTES)0x0);
  _sprintf(acStack_128,"ScreenShots\\Day(%2d,%2d,%2d)Time(%2d,%2d,%2d).tga",ptVar3->tm_mday,
           ptVar3->tm_mon + 1,ptVar3->tm_year + -100,ptVar3->tm_hour,ptVar3->tm_min,ptVar3->tm_sec);
  FUN_009a5520(&stack0xfffffec8,uVar1,iVar6);
  uStack_20 = 0;
  if (0 < iVar6) {
    do {
      puVar7 = unaff_EBP;
      puVar8 = puStack_130;
      for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      unaff_EBP = (undefined4 *)((int)unaff_EBP + (int)unaff_ESI);
      puStack_130 = puStack_130 + uVar1;
      iVar6 = iVar6 + -1;
      ppvVar2 = ppvVar11;
    } while (iVar6 != 0);
  }
  (**(code **)(*piVar10 + 0x38))(piVar10);
  FUN_00a58580(&stack0xfffffec4,(char *)&local_12c);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  FUN_0099b400(ppvVar2);
                    /* WARNING: Subroutine does not return */
  _free(local_134);
}


//// FUNCTION FUN_009a5d60 @ 009a5d60 ////

void FUN_009a5d60(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  HWND hwnd;
  int unaff_ESI;
  int unaff_EDI;
  PTITLEBARINFO pti;
  tagMSG tStack_30;
  
  if (DAT_0105ca99 != '\0') {
    return;
  }
  if (g_pDirect3DDevice == (int *)0x0) {
    return;
  }
  if (DAT_0105be92 == '\0') {
    return;
  }
  DAT_0105ca99 = 1;
  bVar1 = false;
  iVar2 = (**(code **)(*g_pDirect3DDevice + 0xc))();
  while (iVar2 != -0x7789f797) {
    if (!bVar1) {
      ShowWindow(DAT_0105beb0,7);
      bVar1 = true;
    }
    iVar2 = PeekMessageA(&tStack_30,(HWND)0x0,0,0,1);
    while (iVar2 != 0) {
      TranslateMessage(&tStack_30);
      DispatchMessageA(&tStack_30);
      iVar2 = PeekMessageA(&tStack_30,(HWND)0x0,0,0,1);
    }
    Sleep(200);
    iVar2 = (**(code **)(*g_pDirect3DDevice + 0xc))();
  }
  if (DAT_010bb224 != '\0') {
    FUN_00a3a4e0();
  }
  FUN_00a3ad10('\x01');
  FUN_0099a740('\x01');
  FUN_009954e0();
  bVar1 = false;
  if ((DAT_0105ca58 != 0) && (DAT_0105ca60 != (int *)0x0)) {
    (**(code **)(*DAT_0105ca60 + 8))();
    DAT_0105ca60 = (int *)0x0;
    bVar1 = true;
  }
  if (DAT_0105ca68 != (int *)0x0) {
    (**(code **)(*DAT_0105ca68 + 8))();
    DAT_0105ca68 = (int *)0x0;
  }
  if (DAT_0105ca6c != (int *)0x0) {
    (**(code **)(*DAT_0105ca6c + 8))();
    DAT_0105ca6c = (int *)0x0;
  }
  iVar2 = (**(code **)(*g_pDirect3DDevice + 0x40))();
  if (iVar2 < -0x7789f797) {
    if ((((iVar2 != -0x7789f798) && (iVar2 != -0x7ff8fff2)) && (iVar2 != -0x7789fe84)) &&
       (iVar2 != -0x7789f7d9)) goto LAB_009a5f0e;
  }
  else if (iVar2 != -0x7789f794) {
    if (iVar2 != 0) goto LAB_009a5f0e;
    if (DAT_0105ca70 != (undefined1 *)0x0) {
      *DAT_0105ca70 = 1;
    }
  }
  FUN_009d9820();
LAB_009a5f0e:
  iVar2 = (**(code **)(*g_pDirect3DDevice + 0x98))(g_pDirect3DDevice);
  if (iVar2 != 0) {
    FUN_009d9820();
  }
  iVar2 = (**(code **)(*g_pDirect3DDevice + 0xa0))(g_pDirect3DDevice,&DAT_0105ca6c);
  if (iVar2 != 0) {
    FUN_009d9820();
  }
  Renderer_InitDeviceStateAndResources();
  FUN_009a1bf0((undefined4 *)&stack0xffffffa8);
  FUN_0099a740('\0');
  if (((bVar1) && (DAT_0105ca58 != 0)) &&
     ((piVar3 = *(int **)(DAT_0105ca58 + 0x24), piVar3 != (int *)0x0 &&
      (iVar2 = (**(code **)(*piVar3 + 0x48))(piVar3,0,&DAT_0105ca60), iVar2 == 0)))) {
    FUN_009a53a0(DAT_0105ca60);
  }
  FUN_00a3ad10('\0');
  iVar2 = FUN_00a0a2d0();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a0a2d0();
    (**(code **)(*piVar3 + 0x10))();
  }
  if (DAT_0105ca98 == '\0') {
    pti = (PTITLEBARINFO)&stack0xffffffb4;
    hwnd = GetForegroundWindow();
    GetTitleBarInfo(hwnd,pti);
    iVar2 = FUN_00a0a2d0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a0a2d0();
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + (unaff_EDI - unaff_ESI);
      iVar2 = FUN_00a0a2d0();
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -3;
      iVar2 = FUN_00a0a2d0();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -3;
    }
    DAT_0105ca98 = '\x01';
  }
  FUN_009d6280();
  if ((DAT_0105be88 != '\0') && (DAT_0105be94 != (code *)0x0)) {
    (*DAT_0105be94)();
  }
  DAT_0105ca99 = 0;
  return;
}


//// FUNCTION FUN_009a6070 @ 009a6070 ////

void __thiscall FUN_009a6070(void *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)0.1) {
    fVar1 = (float10)0.1;
  }
  *(float *)((int)this + 0xf8) = (float)fVar1;
  fVar2 = (float10)fptan((float10)*(float *)((int)this + 0xf4) * (float10)0.5);
  *(float *)((int)this + 0x100) = (float)(fVar2 * fVar1);
  *(float *)((int)this + 0x104) = (float)((fVar2 * fVar1) / (float10)*(float *)((int)this + 0x108));
  *(float *)((int)this + 0x10c) = (float)fVar1;
  return;
}


//// FUNCTION FUN_009a60d0 @ 009a60d0 ////

void __cdecl FUN_009a60d0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009a6150 @ 009a6150 ////

char FUN_009a6150(void)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char local_71;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  LPCWSTR local_4c [2];
  uint local_44;
  LPCWSTR local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6520;
  local_c = ExceptionList;
  if (DAT_0105be80 == '\0') {
    return '\x01';
  }
  ExceptionList = &local_c;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,8);
  iVar2 = GetDeviceCaps(hdc,10);
  iVar3 = GetDeviceCaps(hdc,0xc);
  local_71 = '\x01';
  if ((DAT_0105be80 != '\0') && ((iVar1 < 0x321 || (iVar2 < 0x259)))) {
    local_71 = '\0';
  }
  if (iVar3 < 0x10) {
    local_71 = '\0';
  }
  else if (local_71 != '\0') {
    ExceptionList = local_c;
    return local_71;
  }
  iVar1 = FUN_009b4250();
  if (iVar1 == 0x11) {
    pcVar4 = &stack0xffffff68;
    uVar5 = 0;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xffffff5c,"Data\\Starmaker\\Starmaker.lhts",0x1d);
    FUN_009b5cd0(0x10,pcVar4,uVar5,uVar6);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"SM_ERROR",8);
  local_68 = 8;
  local_6c[8] = '\0';
  local_4 = 0;
  FUN_009b5030(local_2c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"SM_WRONG_SCREEN_RES",0x13);
  local_68 = 0x13;
  local_6c[0x13] = '\0';
  local_4._0_1_ = 3;
  FUN_009b5030(local_4c,&local_6c);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  MessageBoxW((HWND)0x0,local_4c[0],local_2c[0],0x10010);
  FUN_009b4640();
  if (0xf < iVar3) {
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (local_24 < 0xb) {
      ExceptionList = local_c;
      return local_71;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


//// FUNCTION FUN_009a6360 @ 009a6360 ////

undefined4 FUN_009a6360(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*g_pDirect3DDevice + 0x44))(g_pDirect3DDevice,0,0,0,0);
  if (iVar1 == -0x7789f798) {
    FUN_009a5d60();
  }
  if (DAT_0105bea1 != '\0') {
    FUN_009a5bc0();
  }
  uVar2 = FUN_009a5090();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_009a63a0 @ 009a63a0 ////

void __cdecl FUN_009a63a0(int param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 == -1) {
    param_2 = param_1;
  }
  if ((DAT_00e67ba0 == param_1) && (DAT_00e67ba4 == param_2)) {
    pvVar1 = FUN_009a59c0();
    if (pvVar1 == (void *)0x0) {
      while( true ) {
        DAT_00e67ba0 = DAT_00e67ba0 >> 1;
        DAT_00e67ba4 = DAT_00e67ba4 >> 1;
        if (DAT_00e67ba0 < 0x80) break;
        pvVar1 = FUN_009a59c0();
        if (pvVar1 != (void *)0x0) {
          return;
        }
      }
    }
  }
  else {
    if (DAT_0105ca60 != (int *)0x0) {
      (**(code **)(*DAT_0105ca60 + 8))(DAT_0105ca60);
      DAT_0105ca60 = (int *)0x0;
    }
    if (DAT_0105ca58 != (void *)0x0) {
      FUN_0099b400(DAT_0105ca58);
      DAT_0105ca58 = (void *)0x0;
    }
    if (DAT_0105ca64 != (int *)0x0) {
      (**(code **)(*DAT_0105ca64 + 8))(DAT_0105ca64);
      DAT_0105ca64 = (int *)0x0;
    }
    if (DAT_0105ca5c != (void *)0x0) {
      FUN_0099b400(DAT_0105ca5c);
      DAT_0105ca5c = (void *)0x0;
    }
    do {
      if (DAT_0105ca58 != (void *)0x0) {
        DAT_00e67ba0 = param_1;
        DAT_00e67ba4 = param_2;
        return;
      }
      DAT_00e67ba0 = param_1;
      DAT_00e67ba4 = param_2;
      DAT_0105ca58 = FUN_0099bb50("RenderTarget",-1,param_1,param_2,'\0');
      if (DAT_0105ca58 != (void *)0x0) {
        DAT_0105ca5c = FUN_0099bb50("RenderTargetMemory",-2,DAT_00e67ba0,DAT_00e67ba4,'\0');
        (**(code **)(**(int **)((int)DAT_0105ca5c + 0x24) + 0x48))
                  (*(int **)((int)DAT_0105ca5c + 0x24),0,&DAT_0105ca64);
        if (DAT_0105ca58 != (void *)0x0) {
          return;
        }
      }
      param_1 = DAT_00e67ba0 >> 1;
      param_2 = DAT_00e67ba4 >> 1;
      DAT_00e67ba0 = param_1;
      DAT_00e67ba4 = param_2;
    } while (0x7f < param_1);
  }
  return;
}


//// FUNCTION FUN_009a6510 @ 009a6510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009a6510(char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float local_40 [16];
  
  piVar1 = g_pDirect3DDevice;
  if ((DAT_0105cb20 & 1) == 0) {
    DAT_0105cb20 = DAT_0105cb20 | 1;
    _DAT_0105cb18 = 0;
    _DAT_0105cb14 = 0;
    _DAT_0105cb10 = 0;
    _DAT_0105cb0c = 0;
    _DAT_0105cb04 = 0;
    _DAT_0105cb00 = 0;
    _DAT_0105cafc = 0;
    _DAT_0105caf8 = 0;
    _DAT_0105caf0 = 0;
    _DAT_0105caec = 0;
    _DAT_0105cae8 = 0;
    DAT_0105cae4 = 0;
    _DAT_0105cb1c = 0x3f800000;
    _DAT_0105cb08 = 0x3f800000;
    _DAT_0105caf4 = 0x3f800000;
    DAT_0105cae0 = 0x3f800000;
  }
  if ((DAT_0105cb20 & 2) == 0) {
    DAT_0105cb20 = DAT_0105cb20 | 2;
    _DAT_0105cad8 = 0;
    _DAT_0105cad4 = 0;
    _DAT_0105cad0 = 0;
    _DAT_0105cacc = 0;
    _DAT_0105cac4 = 0;
    _DAT_0105cac0 = 0;
    _DAT_0105cabc = 0;
    _DAT_0105cab8 = 0;
    _DAT_0105cab0 = 0;
    _DAT_0105caac = 0;
    _DAT_0105caa8 = 0;
    DAT_0105caa4 = 0;
    _DAT_0105cadc = 0x3f800000;
    _DAT_0105cac8 = 0x3f800000;
    _DAT_0105cab4 = 0x3f800000;
    DAT_0105caa0 = 0x3f800000;
  }
  if (g_pDirect3DDevice != (int *)0x0) {
    iVar2 = 0x10;
    if (param_1 == '\0') {
      puVar3 = &DAT_0105cae0;
      puVar4 = &DAT_0105c2e8;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = &DAT_0105caa0;
      puVar4 = &DAT_0105c328;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      DAT_00e67554 = 2;
    }
    else {
      puVar3 = &DAT_0105c2e8;
      puVar4 = &DAT_0105cae0;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = &DAT_0105c328;
      puVar4 = &DAT_0105caa0;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_40[0xe] = 0.0;
      local_40[0xd] = 0.0;
      local_40[0xc] = 0.0;
      local_40[0xb] = 0.0;
      local_40[9] = 0.0;
      local_40[8] = 0.0;
      local_40[7] = 0.0;
      local_40[6] = 0.0;
      local_40[4] = 0.0;
      local_40[3] = 0.0;
      local_40[2] = 0.0;
      local_40[1] = 0.0;
      local_40[0xf] = 1.0;
      local_40[5] = 1.0;
      local_40[0] = 1.0;
      local_40[10] = -1.0;
      FUN_009aad40(&DAT_0105c2e8,local_40);
      thunk_FUN_00b019df();
      DAT_00e67554 = 3;
      piVar1 = g_pDirect3DDevice;
    }
    (**(code **)(*piVar1 + 0xb0))(piVar1,2,&DAT_0105c2e8);
    (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,3,&DAT_0105c368);
    DAT_0105bea0 = param_1;
    DAT_0105eae8 = param_1;
  }
  return;
}


//// FUNCTION FUN_009a67d0 @ 009a67d0 ////

void FUN_009a67d0(void)

{
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  LPCWSTR local_4c [8];
  LPCWSTR local_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf6548;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  ExceptionList = &pvStack_c;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"SM_D3D_OPEN_FAILED_MESSAGE",0x1a);
  local_68 = 0x1a;
  local_6c[0x1a] = '\0';
  local_4 = 0;
  FUN_009b5030(local_2c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"SM_D3D_OPEN_FAILED_TITLE",0x18);
  local_68 = 0x18;
  local_6c[0x18] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_009b5030(local_4c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ShowWindow(DAT_0105beb0,7);
  MessageBoxW((HWND)0x0,local_2c[0],local_4c[0],0x11010);
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


//// FUNCTION FUN_009a6930 @ 009a6930 ////

void * FUN_009a6930(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009a6960 @ 009a6960 ////

uint FUN_009a6960(void)

{
  bool bVar1;
  char cVar2;
  UINT UVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined3 extraout_var;
  char *local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  char local_1a4 [20];
  char *local_190;
  undefined4 local_18c;
  uint local_188;
  char local_184 [20];
  char *local_170;
  undefined4 local_16c;
  uint local_168;
  char local_164 [20];
  LPCWSTR local_150 [2];
  uint local_148;
  LPCWSTR local_130 [2];
  uint local_128;
  CHAR local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4._0_1_ = 0xff;
  local_4._1_3_ = 0xffffff;
  puStack_8 = &LAB_00cf65ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UVar3 = GetSystemDirectoryA(local_110,0x104);
  uVar6 = 0;
  if (UVar3 == 0) {
LAB_009a6e46:
    if (DAT_0105be88 != '\0') {
      cVar2 = FUN_00a2c470();
      uVar6 = extraout_var;
      if (cVar2 == '\0') {
        local_1b0 = local_1a4;
        local_1a4[0] = '\0';
        local_1ac = 0;
        local_1a8 = 0x20;
        local_1b0 = _malloc(0x20);
        _strncpy(local_1b0,"SM_AVI_RENDER_FAILED_TITLE",0x1a);
        local_1ac = 0x1a;
        local_1b0[0x1a] = '\0';
        local_4 = 0xc;
        FUN_009b5030(local_150,&local_1b0);
        if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_1b0);
        }
        local_1b0 = local_1a4;
        local_1a4[0] = '\0';
        local_1ac = 0;
        local_1a8 = 0x20;
        local_1b0 = _malloc(0x20);
        _strncpy(local_1b0,"SM_AVI_RENDER_FAILED_MESSAGE",0x1c);
        local_1ac = 0x1c;
        local_1b0[0x1c] = '\0';
        local_4 = CONCAT31(local_4._1_3_,0xf);
        FUN_009b5030(local_130,&local_1b0);
        if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_1b0);
        }
        MessageBoxW((HWND)0x0,local_150[0],local_130[0],0x30);
        if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
          _free(local_130[0]);
        }
        bVar1 = 10 < local_148;
        local_148 = local_128;
        if (bVar1) {
                    /* WARNING: Subroutine does not return */
          _free(local_150[0]);
        }
        goto LAB_009a6f86;
      }
    }
    local_148 = CONCAT31(uVar6,1);
  }
  else {
    if (DAT_0105be88 == '\0') {
LAB_009a6bf3:
      local_190 = local_184;
      local_184[0] = '\0';
      local_18c = 0;
      local_188 = 0x14;
      _strncpy(local_190,"",0);
      local_18c = 0;
      *local_190 = '\0';
      pcVar4 = local_110;
      local_4 = 6;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004073f0(&local_190,local_110,(int)pcVar4 - (int)(local_110 + 1));
      FUN_004073f0(&local_190,"\\dinput8.dll",0xc);
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x14;
      pcVar4 = local_190;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004015d0(&local_1b0,local_190,(int)pcVar4 - (int)(local_190 + 1));
      local_4._0_1_ = 7;
      uVar5 = FUN_009d3660(&local_1b0,(uint *)0x0);
      uVar6 = (undefined3)((uint)uVar5 >> 8);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      if ((char)uVar5 != '\0') {
        local_4._0_1_ = 0xff;
        local_4._1_3_ = 0xffffff;
        if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
          _free(local_190);
        }
        goto LAB_009a6e46;
      }
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x20;
      local_1b0 = _malloc(0x20);
      _strncpy(local_1b0,"SM_D3D_OPEN_FAILED_MESSAGE",0x1a);
      local_1ac = 0x1a;
      local_1b0[0x1a] = '\0';
      local_4._0_1_ = 8;
      FUN_009b5030(local_150,&local_1b0);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x20;
      local_1b0 = _malloc(0x20);
      _strncpy(local_1b0,"SM_D3D_OPEN_FAILED_TITLE",0x18);
      local_1ac = 0x18;
      local_1b0[0x18] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0xb);
      FUN_009b5030(local_130,&local_1b0);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      ShowWindow(DAT_0105beb0,7);
      MessageBoxW((HWND)0x0,local_150[0],local_130[0],0x1030);
      if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
        _free(local_130[0]);
      }
      if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150[0]);
      }
      local_148 = local_128;
      if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
        _free(local_190);
      }
    }
    else {
      local_170 = local_164;
      local_164[0] = '\0';
      local_16c = 0;
      local_168 = 0x14;
      _strncpy(local_170,"",0);
      local_16c = 0;
      *local_170 = '\0';
      pcVar4 = local_110;
      local_4 = 0;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004073f0(&local_170,local_110,(int)pcVar4 - (int)(local_110 + 1));
      FUN_004073f0(&local_170,"\\wmvcore.dll",0xc);
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x14;
      pcVar4 = local_170;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      FUN_004015d0(&local_1b0,local_170,(int)pcVar4 - (int)(local_170 + 1));
      local_4._0_1_ = 1;
      uVar5 = FUN_009d3660(&local_1b0,(uint *)0x0);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      if ((char)uVar5 != '\0') {
        if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
          _free(local_170);
        }
        goto LAB_009a6bf3;
      }
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x40;
      local_1b0 = _malloc(0x40);
      _strncpy(local_1b0,"SM_D3D_OPEN_FAILED_WMCOMPONENT_MESSAGE",0x26);
      local_1ac = 0x26;
      local_1b0[0x26] = '\0';
      local_4._0_1_ = 2;
      FUN_009b5030(local_130,&local_1b0);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      local_1b0 = local_1a4;
      local_1a4[0] = '\0';
      local_1ac = 0;
      local_1a8 = 0x40;
      local_1b0 = _malloc(0x40);
      _strncpy(local_1b0,"SM_D3D_OPEN_FAILED_WMCOMPONENT_TITLE",0x24);
      local_1ac = 0x24;
      local_1b0[0x24] = '\0';
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_009b5030(local_150,&local_1b0);
      if (0x14 < local_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b0);
      }
      ShowWindow(DAT_0105beb0,7);
      MessageBoxW((HWND)0x0,local_130[0],local_150[0],0x1030);
      if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150[0]);
      }
      if (10 < local_128) {
                    /* WARNING: Subroutine does not return */
        _free(local_130[0]);
      }
      if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
    }
LAB_009a6f86:
    local_148 = local_148 & 0xffffff00;
  }
  ExceptionList = local_c;
  return local_148;
}


//// FUNCTION FUN_009a6fb0 @ 009a6fb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_009a6fb0(char param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unaff_EBX;
  uint uVar3;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf660b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = FUN_009a59c0();
  if ((pvVar1 == (void *)0x0) || (*(int *)(DAT_0105ca58 + 0x24) == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  DAT_00e67b9d = param_1;
  if (param_1 == '\0') {
    _DAT_0105be9c = DAT_0105ca68;
    (**(code **)(*g_pDirect3DDevice + 0x94))();
    pvVar1 = DAT_0105cb24;
    if (DAT_0105cb24 != (void *)0x0) {
      FUN_009a5b60((int)DAT_0105cb24);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    DAT_0105cb24 = (int *)0x0;
    if (DAT_0105ca60 != (int *)0x0) {
      (**(code **)(*DAT_0105ca60 + 8))();
      DAT_0105ca60 = (int *)0x0;
    }
    uVar2 = 0;
    if (DAT_0105900c != 1) {
      DAT_0105900c = 1;
      uVar2 = (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice);
    }
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),(char)local_c);
    uVar3 = local_10;
    if ((char)local_c == '\0') goto LAB_009a7163;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    local_1c = DAT_00e67ba0;
    local_18 = DAT_00e67ba4;
    pvVar1 = operator_new(0x30);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_0105cb24 = (int *)0x0;
    }
    else {
      DAT_0105cb24 = FUN_009a5a30(pvVar1,&local_1c);
    }
    local_4 = 0xffffffff;
    (**(code **)(**(int **)(DAT_0105ca58 + 0x24) + 0x48))();
    _DAT_0105be9c = DAT_0105ca60;
    (**(code **)(*g_pDirect3DDevice + 0x94))();
    uVar3 = local_10;
    if (DAT_0105900c != (local_10 & 0xff)) {
      DAT_0105900c = local_10 & 0xff;
      (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice);
    }
  }
  uVar2 = FUN_009a56b0(0,(char)uVar3);
LAB_009a7163:
  ExceptionList = unaff_EBX;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_009a7190 @ 009a7190 ////

void __cdecl FUN_009a7190(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar13;
  int *local_28;
  undefined4 local_24;
  float fStack_20;
  void *local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  local_24 = 0xffffff;
  FUN_009d62a0('\x01');
  iVar10 = 0;
  this = FUN_0099bb50("",0x15,DAT_00e67ba0,DAT_00e67ba4,'\0');
  local_1c = this;
  FUN_009a6fb0('\x01');
  FUN_009a1410();
  FUN_009a57d0(param_2,0,0xffffffff,0,(undefined4 *)0x0);
  FUN_009a1460();
  if (((DAT_0105ca60 != (int *)0x0) && (this != (void *)0x0)) &&
     (piVar1 = *(int **)((int)this + 0x24), piVar1 != (int *)0x0)) {
    local_28 = (int *)0x0;
    (**(code **)(*piVar1 + 0x48))(piVar1,0,&local_28);
    if ((local_28 != (int *)0x0) &&
       (FUN_00afe117(local_28,(int *)0x0,(uint *)0x0,DAT_0105ca60,(int *)0x0,(uint *)0x0,0xffffffff,
                     0), local_28 != (int *)0x0)) {
      (**(code **)(*local_28 + 8))(local_28);
    }
  }
  FUN_009a6fb0('\0');
  FUN_009d62a0('\0');
  if (this != (void *)0x0) {
    iStack_8 = 0;
    iStack_4 = 0;
    uVar3 = MediaPlayer_LockVideoBuffer(this,&iStack_8);
    iVar8 = DAT_00e67ba4;
    iVar4 = DAT_00e67ba0;
    uVar11 = local_24;
    if ((char)uVar3 != '\0') {
      fVar12 = (float10)0.0;
      local_28 = (int *)0x0;
      fStack_20 = 0.0;
      iStack_18 = DAT_00e67ba0;
      if (param_3 != 0) {
        uVar13 = FUN_00acd42c();
        iVar10 = (int)uVar13;
        uVar13 = FUN_00acd42c();
        fStack_20 = (float)uVar13;
        fVar12 = extraout_ST0;
      }
      fVar2 = fStack_20;
      if (param_4 != 0) {
        uVar13 = FUN_00acd42c();
        iVar4 = (int)uVar13;
        iStack_18 = iVar4;
        uVar13 = FUN_00acd42c();
        iVar8 = (int)uVar13;
        fVar12 = extraout_ST0_00;
      }
      uVar11 = local_24;
      this = local_1c;
      if ((int)fVar2 < iVar8) {
        iVar9 = (int)fVar2 * iStack_8;
        iStack_10 = iVar4 - iVar10;
        iStack_14 = iVar8 - (int)fStack_20;
        do {
          iVar8 = iVar10;
          if (3 < iStack_10) {
            iVar7 = ((iVar4 - iVar10) - 4U >> 2) + 1;
            iVar8 = iVar10 + iVar7 * 4;
            iVar5 = iStack_4 + iVar9 + iVar10 * 4 + 5;
            do {
              iVar7 = iVar7 + -1;
              fStack_20 = (float)*(byte *)(iVar5 + 5) +
                          (float)((float10)*(byte *)(iVar5 + 1) +
                                 fVar12 + (float10)*(byte *)(iVar5 + -3));
              uStack_c = (uint)*(byte *)(iVar5 + 7);
              fVar12 = (float10)*(byte *)(iVar5 + 9) + (float10)fStack_20;
              local_28 = (int *)((float)local_28 + 1.0 + 1.0 + 1.0 + 1.0);
              iVar5 = iVar5 + 0x10;
              iVar4 = iStack_18;
            } while (iVar7 != 0);
          }
          if (iVar8 < iVar4) {
            iVar5 = iVar9 + iVar8 * 4 + 1 + iStack_4;
            iVar8 = iVar4 - iVar8;
            do {
              fVar12 = fVar12 + (float10)*(byte *)(iVar5 + 1);
              uStack_c = (uint)*(byte *)(iVar5 + -1);
              iVar5 = iVar5 + 4;
              iVar8 = iVar8 + -1;
              local_28 = (int *)((float)local_28 + 1.0);
            } while (iVar8 != 0);
          }
          iVar9 = iVar9 + iStack_8;
          iStack_14 = iStack_14 + -1;
        } while (iStack_14 != 0);
        if ((float)local_28 != 0.0) {
          uVar13 = FUN_00acd42c();
          iVar10 = (int)uVar13;
          uVar13 = FUN_00acd42c();
          iVar4 = (int)uVar13;
          uVar13 = FUN_00acd42c();
          puVar6 = (undefined4 *)FUN_00412ab0(&uStack_c,(int)uVar13,iVar4,iVar10);
          uVar11 = *puVar6;
          this = local_1c;
        }
      }
    }
    MediaPlayer_UnlockVideoBuffer((int)this);
    FUN_0099b400(this);
    *param_1 = uVar11;
    return;
  }
  *param_1 = local_24;
  return;
}


//// FUNCTION FUN_009a7570 @ 009a7570 ////

undefined4 * FUN_009a7570(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009a75a0 @ 009a75a0 ////

void __thiscall FUN_009a75a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0099dfa0();
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
      _Dst = FUN_009a7570((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009a6930(param_1,iVar5,param_1 + param_2);
      FUN_009a7570(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009a5470(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009a6930(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009a60d0(param_1,(int)pvVar3,iVar5);
    FUN_009a5470(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009a7820 @ 009a7820 ////

uint __thiscall FUN_009a7820(void *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  iVar6 = 0;
  while( true ) {
    if (*(int *)((int)this + 0xc) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2;
    }
    if (iVar3 <= iVar6) break;
    puVar1 = *(uint **)(*(int *)((int)this + 0xc) + iVar6 * 4);
    if ((puVar1[1] == param_1[1]) && (uVar2 = *puVar1, uVar2 == *param_1)) {
      return uVar2 & 0xffffff00;
    }
    iVar6 = iVar6 + 1;
  }
  iVar6 = *(int *)((int)this + 0xc);
  if ((iVar6 != 0) &&
     ((uint)(*(int *)((int)this + 0x10) - iVar6 >> 2) <
      (uint)(*(int *)((int)this + 0x14) - iVar6 >> 2))) {
    puVar4 = *(undefined4 **)((int)this + 0x10);
    *puVar4 = param_1;
    puVar4 = puVar4 + 1;
    *(undefined4 **)((int)this + 0x10) = puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  uVar5 = FUN_009a75a0((void *)((int)this + 8),*(undefined4 **)((int)this + 0x10),1,&param_1);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_009a78d0 @ 009a78d0 ////

void __cdecl FUN_009a78d0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *_Memory;
  undefined4 uVar6;
  int iVar7;
  int local_18;
  int iStack_10;
  int iStack_c;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_3 + 4) = *param_2;
    bVar2 = true;
    local_18 = 0;
    if (0 < param_1) {
      do {
        if (!bVar2) {
          return;
        }
        uVar1 = param_2[local_18];
        iVar4 = (**(code **)(*DAT_0105ca40 + 0x18))(DAT_0105ca40,0,uVar1);
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = (**(code **)(*DAT_0105ca40 + 0x1c))(DAT_0105ca40,0,uVar1,iVar7,&iStack_10);
            if (-1 < iVar5) {
              _Memory = operator_new(8);
              if (_Memory == (int *)0x0) {
                _Memory = (int *)0x0;
              }
              else {
                *_Memory = iStack_10;
                _Memory[1] = iStack_c;
              }
              cVar3 = FUN_009a53c0(*_Memory,_Memory[1]);
              if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
              *(undefined4 *)(param_3 + 4) = uVar1;
              *param_3 = 1;
              uVar6 = FUN_009a7820(param_3,_Memory);
              if ((char)uVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
              bVar2 = false;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar4);
        }
        local_18 = local_18 + 1;
      } while (local_18 < param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009a79d0 @ 009a79d0 ////

void FUN_009a79d0(void)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0x19;
  local_10 = 0x18;
  local_c = 0x17;
  local_8 = 0x1a;
  local_4 = 0x1e;
  local_20 = 0x15;
  local_1c = 0x16;
  local_18 = 0x14;
  FUN_009a78d0(5,&local_14,&DAT_0105be24);
  FUN_009a78d0(3,&local_20,&DAT_0105be3c);
  FUN_0099d960(0x105be24);
  FUN_0099d960(0x105be3c);
  return;
}


//// FUNCTION FUN_009a7a50 @ 009a7a50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "_D3DFORMAT": Some values do not have unique names */

uint __cdecl FUN_009a7a50(HWND param_1,char param_2)

{
  uint uVar1;
  HRESULT HVar2;
  undefined4 uVar3;
  int iVar4;
  D3DDISPLAYMODE *unaff_EBX;
  UINT unaff_ESI;
  D3DFORMAT unaff_EDI;
  undefined4 *puVar5;
  D3DADAPTER_IDENTIFIER9 *pDVar6;
  D3DFORMAT Format;
  char acStack_650 [512];
  D3DADAPTER_IDENTIFIER9 DStack_450;
  
  FUN_00a0f0e0('\x01');
  FUN_009a6150();
  FUN_009c7a90();
  FUN_009ade80(&DAT_0105ef50,"Data\\Meshes\\",".msh",'\x01');
  FUN_009ade80(&DAT_010b9588,"Data\\Textures\\",".dds",'\x01');
  FUN_009ade80(&DAT_010581b0,"Data\\Animations\\High\\AutoAnimated\\",".anm",'\0');
  if (DAT_0105ca7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0105ca7c);
  }
  DAT_0105ca7c = (void *)0x0;
  DAT_0105ca80 = 0;
  DAT_0105ca84 = 0;
  DAT_0105beb0 = param_1;
  DAT_0105ca40 = Direct3DCreate9(0x20);
  uVar1 = 0;
  if (DAT_0105ca40 != (IDirect3D9 *)0x0) {
    uVar1 = (*DAT_0105ca40->lpVtbl->GetAdapterDisplayMode)
                      (DAT_0105ca40,0,(D3DDISPLAYMODE *)&DAT_0105ca48);
    if (-1 < (int)uVar1) {
      FUN_009a79d0();
      puVar5 = &DAT_0105c8c0;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      _DAT_0105c8e0 = (uint)(DAT_0105be92 == '\0');
      _DAT_0105c8d8 = 1;
      _DAT_0105c8c8 = DAT_0105ca54;
      _DAT_0105c8e4 = 1;
      _DAT_0105c8e8 = 0x50;
      _DAT_0105c8cc = 1;
      if (DAT_0105be92 != '\0') {
        DAT_0105c8c4 = DAT_00e67b88;
        DAT_0105c8c0 = DAT_00e67b84;
        if (param_2 == '\0') {
          _DAT_0105c8c8 = DAT_0105be28;
        }
        else {
          _DAT_0105c8c8 = DAT_0105be40;
        }
      }
      HVar2 = (*DAT_0105ca40->lpVtbl->CreateDevice)
                        (DAT_0105ca40,0,D3DDEVTYPE_HAL,DAT_0105beb0,
                         -(uint)(DAT_00e67b9c != '\0') & 4 | 0x40,
                         (D3DPRESENT_PARAMETERS *)&DAT_0105c8c0,
                         (IDirect3DDevice9 **)&g_pDirect3DDevice);
      if (HVar2 < 0) {
        uVar1 = (*DAT_0105ca40->lpVtbl->CreateDevice)
                          (DAT_0105ca40,0,D3DDEVTYPE_HAL,DAT_0105beb0,
                           -(uint)(DAT_00e67b9c != '\0') & 4 | 0x20,
                           (D3DPRESENT_PARAMETERS *)&DAT_0105c8c0,
                           (IDirect3DDevice9 **)&g_pDirect3DDevice);
        if ((int)uVar1 < 0) goto LAB_009a7bf8;
      }
      (*g_pDirect3DDevice->lpVtbl->EnumAdapterModes)
                (g_pDirect3DDevice,0x105c910,unaff_EDI,unaff_ESI,unaff_EBX);
      FUN_009a51b0();
      Format = D3DFMT_UNKNOWN;
      (*g_pDirect3DDevice->lpVtbl[2].GetAdapterCount)(g_pDirect3DDevice);
      (*g_pDirect3DDevice->lpVtbl[2].GetAdapterModeCount)(g_pDirect3DDevice,0x105ca6c,Format);
      FUN_00a3aeb0();
      thunk_FUN_0099ba00();
      if (DAT_0105be88 == '\0') {
        DAT_0105bebc = (char *)0x0;
      }
      else {
        DAT_0105bebc = FUN_0099bb50("logo_v00.dds",0,0,0,'\0');
        _sprintf(DAT_0105bebc,"the_logo");
        *(uint *)(DAT_0105bebc + 0x54) = *(uint *)(DAT_0105bebc + 0x54) | 0x10;
      }
      pDVar6 = &DStack_450;
      for (iVar4 = 0x113; iVar4 != 0; iVar4 = iVar4 + -1) {
        pDVar6->Driver[0] = '\0';
        pDVar6->Driver[1] = '\0';
        pDVar6->Driver[2] = '\0';
        pDVar6->Driver[3] = '\0';
        pDVar6 = (D3DADAPTER_IDENTIFIER9 *)(pDVar6->Driver + 4);
      }
      DAT_0105bea8 = 0;
      (*DAT_0105ca40->lpVtbl->GetAdapterIdentifier)(DAT_0105ca40,0,0,&DStack_450);
      _sprintf(acStack_650,DStack_450.Description);
      FUN_009ac040(acStack_650);
      iVar4 = FUN_009ac120(acStack_650,"geforce2");
      if (iVar4 != -1) {
        DAT_0105be00 = 1;
      }
      uVar3 = FUN_00a0f0e0('\0');
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
LAB_009a7bf8:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_009a7d30 @ 009a7d30 ////

float10 __thiscall FUN_009a7d30(undefined4 *param_1,int param_2)

{
  float10 extraout_ST0;
  
  if ((void *)*param_1 != (void *)0x0) {
    FUN_00a5aee0((void *)*param_1,param_2);
    return extraout_ST0;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_009a7d60 @ 009a7d60 ////

float10 __fastcall FUN_009a7d60(int param_1)

{
  return (float10)*(float *)(param_1 + 0x14);
}


//// FUNCTION FUN_009a7db0 @ 009a7db0 ////

void __fastcall FUN_009a7db0(int *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_009a7dc0 @ 009a7dc0 ////

void __cdecl FUN_009a7dc0(short *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    FUN_009a1480(&DAT_0105c2e8,param_3,'\x01');
    FUN_00a5adf0((void *)*param_4,param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_009a7f00 @ 009a7f00 ////

void __thiscall FUN_009a7f00(void *this,int param_1)

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


//// FUNCTION FUN_009a7f60 @ 009a7f60 ////

void __cdecl FUN_009a7f60(int param_1)

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


//// FUNCTION FUN_009a7f80 @ 009a7f80 ////

void __cdecl FUN_009a7f80(int *param_1)

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


//// FUNCTION FUN_009a7fa0 @ 009a7fa0 ////

void __thiscall FUN_009a7fa0(void *this,int *param_1)

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


//// FUNCTION FUN_009a8030 @ 009a8030 ////

void __fastcall FUN_009a8030(int *param_1)

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


//// FUNCTION FUN_009a8100 @ 009a8100 ////

void __fastcall FUN_009a8100(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[1] = 0xffffffff;
  param_1[5] = DAT_0105cb40;
  return;
}


//// FUNCTION FUN_009a8150 @ 009a8150 ////

ulonglong FUN_009a8150(void)

{
  ulonglong uVar1;
  
  MulDiv(100,0x60,0x48);
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_009a8180 @ 009a8180 ////

void __thiscall FUN_009a8180(void *this,undefined4 *param_1,ushort *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  float local_8 [2];
  
  local_8[0] = 0.0;
  local_8[1] = 0.0;
  if (*(int *)this != 0) {
    fVar4 = *(float *)((int)this + 0x14);
    fVar2 = (float)FUN_00ace02d((short *)param_2);
    puVar3 = (undefined4 *)FUN_00a5af60(*(void **)this,local_8,param_2,fVar2,fVar4);
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009a81f0 @ 009a81f0 ////

void __thiscall FUN_009a81f0(void *this,int *param_1)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 unaff_DI;
  float *pfVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  piVar5 = param_1;
  fVar4 = (float)param_1[6] * *(float *)((int)this + 0x14);
  iVar6 = FUN_00ace02d((short *)*param_1);
  fVar3 = (float)param_1[3];
  fVar10 = FUN_00acf400((double)(float)param_1[2],unaff_DI);
  fVar1 = (float)fVar10;
  fVar10 = FUN_00acf400((double)fVar3,unaff_DI);
  fVar3 = (float)fVar10;
  if ((*(byte *)((int)this + 0x10) & 4) != 0) {
    if ((uint)*(byte *)((int)param_1 + 6) + (uint)*(byte *)((int)param_1 + 5) +
        (uint)*(byte *)(param_1 + 1) < 0xe1) {
      uVar11 = FUN_00acd42c();
      iVar8 = (int)uVar11;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      bVar2 = *(byte *)((int)this + 8);
      param_1 = (int *)CONCAT13((char)iVar8,0xff0000);
      param_1 = (int *)CONCAT22(param_1._2_2_,0xff00);
      param_1 = (int *)CONCAT31(param_1._1_3_,0xff);
      iVar8 = *piVar5;
    }
    else {
      uVar11 = FUN_00acd42c();
      iVar8 = (int)uVar11;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      bVar2 = *(byte *)((int)this + 8);
      param_1 = (int *)(iVar8 << 0x18);
      iVar8 = *piVar5;
    }
    FUN_00a5b330(*(void **)this,iVar8,iVar6,fVar1 - 1.0,fVar3 - 1.0,fVar4,param_1,bVar2);
  }
  param_1 = *(int **)((int)this + 0xc);
  if (param_1 == (int *)0x1) {
LAB_009a8353:
    if ((uint)*(byte *)((int)piVar5 + 6) + (uint)*(byte *)((int)piVar5 + 5) +
        (uint)*(byte *)(piVar5 + 1) < 0x180) {
      param_1 = (int *)0xffffffff;
    }
    else {
      param_1 = (int *)0x303f3f;
    }
  }
  else {
    if (*(char *)((int)this + 0xf) == '\0') goto LAB_009a8411;
    if (param_1 == (int *)0x1) goto LAB_009a8353;
  }
  uVar7 = ((uint)*(byte *)((int)piVar5 + 7) * (uint)*(byte *)((int)piVar5 + 7)) / 0xff;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  param_1 = (int *)CONCAT13((char)uVar7,param_1._0_3_);
  pfVar9 = (float *)((int)this + 0x1c);
  iVar8 = 0xc;
  do {
    FUN_00a5b330(*(void **)this,*piVar5,iVar6,fVar1 + *pfVar9,fVar3 + pfVar9[1],fVar4,param_1,
                 *(byte *)((int)this + 8));
    pfVar9 = pfVar9 + 2;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
LAB_009a8411:
  FUN_00a5b330(*(void **)this,*piVar5,iVar6,fVar1,fVar3,fVar4,piVar5[1],*(byte *)((int)this + 8));
  return;
}


//// FUNCTION FUN_009a8440 @ 009a8440 ////

void __fastcall FUN_009a8440(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  int local_4;
  
  fVar2 = (float10)*(float *)(param_1 + 0x14);
  if ((float10)14.0 <= fVar2) {
    if ((float10)24.0 < fVar2) {
      fVar2 = (float10)24.0;
    }
  }
  else {
    fVar2 = (float10)14.0;
  }
  local_4 = 0;
  fVar2 = (fVar2 - (float10)14.0) * (float10)0.1;
  fVar2 = fVar2 + fVar2 + (float10)1.0;
  pfVar1 = (float *)(param_1 + 0x20);
  do {
    fVar3 = (float10)local_4;
    local_4 = local_4 + 1;
    fVar4 = (float10)fcos(fVar3 * (float10)0.5235988);
    pfVar1[-1] = (float)(fVar4 * fVar2);
    fVar3 = (float10)fsin(fVar3 * (float10)0.5235988);
    *pfVar1 = (float)(fVar3 * fVar2);
    pfVar1 = pfVar1 + 2;
  } while (local_4 < 0xc);
  return;
}


//// FUNCTION FUN_009a84c0 @ 009a84c0 ////

void __thiscall FUN_009a84c0(void *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_1 == -1) {
    *(float *)((int)this + 0x14) = (float)*(int *)(*(int *)this + 0x2c);
    FUN_00acd42c();
    MulDiv(100,0x60,0x48);
    uVar2 = FUN_00acd42c();
    *(int *)((int)this + 0x18) = (int)uVar2;
    return;
  }
  *(int *)((int)this + 0x18) = param_1;
  iVar1 = MulDiv(param_1,0x60,0x48);
  *(float *)((int)this + 0x14) = (float)iVar1;
  return;
}


//// FUNCTION FUN_009a8590 @ 009a8590 ////

void __fastcall FUN_009a8590(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_009a85a0 @ 009a85a0 ////

void __cdecl FUN_009a85a0(int *param_1)

{
  if (DAT_0105cd94 == '\0') {
    if ((void *)param_1[5] != (void *)0x0) {
      FUN_009a81f0((void *)param_1[5],param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009a85c0 @ 009a85c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_009a85c0(void *this,float param_1,float param_2,float param_3,float param_4,ushort *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_8;
  float local_4;
  
  if (param_5 != (ushort *)0x0) {
    DAT_0105cb28 = 1;
    FUN_009a8180(this,&local_8,param_5);
    fVar1 = param_3 - param_1;
    fVar2 = param_4 - param_2;
    param_5 = (ushort *)(fVar2 / local_4);
    local_8 = local_8 * (float)param_5;
    local_4 = fVar2;
    if (fVar1 < local_8) {
      fVar3 = fVar1 / local_8;
      local_8 = local_8 * fVar3;
      local_4 = fVar2 * fVar3;
      param_5 = (ushort *)(fVar3 * (float)param_5);
    }
    _DAT_00e67bd0 = -param_1;
    _DAT_00e67bd4 = -param_2;
    _DAT_00e67bc8 = 0;
    _DAT_00e67bc4 = 0;
    _DAT_00e67bc0 = 0;
    _DAT_00e67bb8 = 0;
    _DAT_00e67bb4 = 0;
    _DAT_00e67bb0 = 0;
    _DAT_00e67bcc = 0x3f800000;
    _DAT_00e67bbc = 0x3f800000;
    _DAT_00e67bac = 0x3f800000;
    DAT_00e67bd8 = 0;
    FUN_00527b80(&DAT_00e67bac,(float)param_5,(float)param_5,1.0);
    _DAT_00e67bd0 = _DAT_00e67bd0 + param_1 + (fVar1 - local_8) * 0.5;
    _DAT_00e67bd4 = (fVar2 - local_4) * 0.5 + _DAT_00e67bd4 + param_2;
  }
  return;
}


//// FUNCTION FUN_009a8790 @ 009a8790 ////

int * __fastcall FUN_009a8790(int *param_1)

{
  FUN_009a8030(param_1);
  return param_1;
}


//// FUNCTION FUN_009a87d0 @ 009a87d0 ////

undefined4 * __fastcall FUN_009a87d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined1 *)((int)param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0xe) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf) = 0xff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[6] = 0x12;
  iVar1 = MulDiv(0x12,0x60,0x48);
  param_1[5] = (float)iVar1;
  puVar2 = FUN_00a5abb0("default",(int *)0x0);
  *param_1 = puVar2;
  FUN_009a8440((int)param_1);
  if (DAT_0105cb4c != (code *)0x0) {
    (*DAT_0105cb4c)(&DAT_00d18420,0x12);
  }
  return param_1;
}


//// FUNCTION FUN_009a88c0 @ 009a88c0 ////

undefined4 * __thiscall FUN_009a88c0(void *this,byte param_1)

{
  FUN_009a8590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009a88e0 @ 009a88e0 ////

void FUN_009a88e0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_0105cb44;
  if (DAT_0105cb44 != (undefined4 *)0x0) {
    FUN_009a8590(DAT_0105cb44);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0105cb44 = (undefined4 *)0x0;
  DAT_00e67ba8 = 3;
  DAT_0105cb48 = 0;
  return;
}


//// FUNCTION FUN_009a8980 @ 009a8980 ////

int * __fastcall FUN_009a8980(int *param_1)

{
  FUN_009a8030(param_1);
  return param_1;
}


