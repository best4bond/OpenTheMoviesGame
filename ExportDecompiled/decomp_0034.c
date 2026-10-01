//// FUNCTION FUN_0089da10 @ 0089da10 ////

undefined4 __thiscall
FUN_0089da10(void *this,uint *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *local_158;
  uint local_154;
  uint local_150;
  char local_14c [20];
  void *local_138;
  int local_134;
  undefined4 local_130 [7];
  undefined4 uStack_111;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb10a;
  local_c = ExceptionList;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  puVar2 = param_1;
  do {
    uVar7 = *puVar2;
    *(char *)((int)&uStack_111 + (1 - (int)param_1) + (int)puVar2) = (char)uVar7;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar7 != '\0');
  ExceptionList = &local_c;
  puVar2 = FUN_00ace080(param_1,"\\");
  if (puVar2 == (uint *)0x0) {
    _sprintf((char *)((int)&uStack_111 + 1),"data\\ui\\flash\\%s",param_1);
  }
  puVar2 = FUN_00ace080(param_1,".swf");
  if ((puVar2 == (uint *)0x0) && (puVar2 = FUN_00ace080(param_1,".mfl"), puVar2 == (uint *)0x0)) {
    puVar3 = &uStack_111;
    do {
      puVar4 = puVar3;
      puVar3 = (undefined4 *)((int)puVar4 + 1);
    } while (*(char *)((int)puVar4 + 1) != '\0');
    *(undefined4 *)((int)puVar4 + 1) = 0x6c666d2e;
    *(undefined1 *)((int)puVar4 + 5) = 0;
  }
  local_158 = local_14c;
  pcVar6 = (char *)((int)&uStack_111 + 1);
  local_14c[0] = '\0';
  local_154 = 0;
  local_150 = 0x14;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = (int)pcVar6 - ((int)&uStack_111 + 2);
  if (0x13 < uVar7) {
    local_150 = uVar7 + 0x20 & 0xffffffe0;
    local_158 = _malloc(local_150);
  }
  _strncpy(local_158,(char *)((int)&uStack_111 + 1),uVar7);
  local_158[uVar7] = '\0';
  local_4 = 0;
  local_154 = uVar7;
  uVar7 = FUN_009d3720(&local_158);
  local_4 = 0xffffffff;
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  if (uVar7 == 0) {
    _sprintf((char *)((int)&uStack_111 + 1),"data\\ui\\%s",param_1);
    puVar2 = FUN_00ace080(param_1,".swf");
    if (puVar2 == (uint *)0x0) {
      puVar3 = &uStack_111;
      do {
        puVar4 = puVar3;
        puVar3 = (undefined4 *)((int)puVar4 + 1);
      } while (*(char *)((int)puVar4 + 1) != '\0');
      *(undefined4 *)((int)puVar4 + 1) = 0x6677732e;
      *(undefined1 *)((int)puVar4 + 5) = 0;
    }
    local_158 = local_14c;
    pcVar6 = (char *)((int)&uStack_111 + 1);
    local_14c[0] = '\0';
    local_154 = 0;
    local_150 = 0x14;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar6 - ((int)&uStack_111 + 2);
    if (0x13 < uVar7) {
      local_150 = uVar7 + 0x20 & 0xffffffe0;
      local_158 = _malloc(local_150);
    }
    _strncpy(local_158,(char *)((int)&uStack_111 + 1),uVar7);
    local_158[uVar7] = '\0';
    local_4 = 1;
    local_154 = uVar7;
    uVar7 = FUN_009d3720(&local_158);
    local_4 = 0xffffffff;
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    if (uVar7 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  local_4 = 0xffffffff;
  if ((int)uVar7 < 0x15) {
    ExceptionList = local_c;
    return 0;
  }
  puVar3 = operator_new(uVar7);
  *(undefined4 **)((int)this + 8) = puVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  local_158 = local_14c;
  pcVar6 = (char *)((int)&uStack_111 + 1);
  local_14c[0] = '\0';
  local_154 = 0;
  local_150 = 0x14;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar8 = (int)pcVar6 - ((int)&uStack_111 + 2);
  if (0x13 < uVar8) {
    local_150 = uVar8 + 0x20 & 0xffffffe0;
    local_158 = _malloc(local_150);
  }
  _strncpy(local_158,(char *)((int)&uStack_111 + 1),uVar8);
  local_158[uVar8] = '\0';
  local_4 = 2;
  local_154 = uVar8;
  FUN_009d3ca0(&local_158,*(undefined4 **)((int)this + 8),uVar7,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (local_150 < 0x15) {
    pcVar6 = *(char **)((int)this + 8);
    if ((((*pcVar6 == 'C') && (pcVar6[1] == 'W')) && (pcVar6[2] == 'S')) ||
       (((*pcVar6 != 'F' || (pcVar6[1] != 'W')) || (pcVar6[2] != 'S')))) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar6);
    }
    *(ushort *)((int)this + 0x18) = (ushort)(byte)pcVar6[3];
    uVar8 = *(uint *)(pcVar6 + 4);
    *(uint *)((int)this + 0x10) = uVar8;
    if (uVar8 != uVar7) {
      *(uint *)((int)this + 0x10) = uVar7;
    }
    *(undefined4 *)((int)this + 0xc) = 8;
    local_138 = operator_new(0x26c);
    local_4 = 3;
    if (local_138 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00884a20(local_138,param_2,param_3);
    }
    FUN_00401de0(local_130,(char *)param_1,0xffffffff);
    local_4 = 4;
    uVar7 = FUN_004155b0(local_130,".",0);
    puVar4 = FUN_00430770(local_130,&local_158,0,uVar7);
    FUN_00401e30(local_130,puVar4);
    if (local_150 < 0x15) {
      iVar5 = FUN_00448370(local_130,"/\\",0);
      uVar7 = 0;
      while (iVar5 != -1) {
        uVar7 = iVar5 + 1;
        iVar5 = FUN_00448220(local_130,&DAT_00d24480,uVar7,2);
      }
      puVar4 = FUN_00430770(local_130,&local_158,uVar7,0xffffffff);
      FUN_00401e30(local_130,puVar4);
      if (local_150 < 0x15) {
        FUN_00401e30(puVar3 + 0x88,local_130);
        *(undefined1 *)((int)puVar3 + 0x21d) = param_4;
        FUN_0087f270((void *)puVar3[0x5e],puVar3);
        *(undefined4 **)((int)this + 0x484) = puVar3 + 0x59;
        FUN_00894870(this,puVar3 + 0x14);
        local_138 = (void *)(puVar3[0x15] - puVar3[0x14]);
        puVar3[0x18] = local_138;
        local_134 = puVar3[0x17] - puVar3[0x16];
        puVar3[0x19] = local_134;
        uVar9 = FUN_00acd42c();
        puVar3[0x1a] = (int)uVar9;
        uVar9 = FUN_00acd42c();
        puVar3[0x1b] = (int)uVar9;
        uVar7 = FUN_00891e70((int)this);
        puVar3[0x1c] = (uVar7 & 0xffff) >> 8;
        uVar7 = FUN_00891e70((int)this);
        FUN_0087fff0(puVar3,uVar7 & 0xffff);
        FUN_00873a00(&DAT_0105018c,(int)puVar3);
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0xc);
        FUN_0089d3a0(this,0,0,(int)puVar3,(int)(puVar3 + 0x52));
        FUN_00899a40(this);
        puVar4 = (undefined4 *)(**(code **)puVar3[0x52])(puVar3);
        FUN_00892bc0(puVar3 + 0x5c,puVar4);
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 8));
      }
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_158);
}


//// FUNCTION FUN_0089dff0 @ 0089dff0 ////

void __thiscall FUN_0089dff0(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 0x35e) = 1;
  FUN_00741940(this,param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0089e010 @ 0089e010 ////

void __thiscall FUN_0089e010(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 0x35c) = 1;
  FUN_00741b60(this,param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0089e070 @ 0089e070 ////

void __thiscall
FUN_0089e070(void *this,undefined4 *param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_494 [1160];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb12b;
  pvStack_c = ExceptionList;
  if ((param_4 == '\0') || (DAT_01050174 == (void *)0x0)) {
    ExceptionList = &pvStack_c;
    FUN_00890510((int)local_494);
    local_4 = 0;
    uVar2 = FUN_0089da10(local_494,(uint *)*param_1,this,param_3,param_2);
    (**(code **)(*(int *)((int)this + 0x344) + 4))();
    *(undefined4 *)((int)this + 0x358) = uVar2;
    (*(code *)**(undefined4 **)((int)this + 0x344))();
    local_4 = 0xffffffff;
    FUN_00890570((int)local_494);
  }
  else {
    ExceptionList = &pvStack_c;
    iVar1 = FUN_00876ee0(DAT_01050174,(char *)*param_1,'\0');
    (**(code **)(*(int *)((int)this + 0x344) + 4))();
    *(int *)((int)this + 0x358) = iVar1;
    (*(code *)**(undefined4 **)((int)this + 0x344))();
    iVar1 = *(int *)((int)this + 0x358);
    (**(code **)(*(int *)(iVar1 + 0x17c) + 4))();
    *(void **)(iVar1 + 400) = this;
    (*(code *)**(undefined4 **)(iVar1 + 0x17c))();
  }
  if (*(int *)((int)this + 0x358) != 0) {
    piVar3 = (int *)FUN_0071b2a0();
    iVar1 = *(int *)this;
    (**(code **)(*piVar3 + 0x10))();
    (**(code **)(iVar1 + 0x78))();
    piVar3 = (int *)FUN_0071b2a0();
    iVar1 = *(int *)this;
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(iVar1 + 0x7c))();
    iVar1 = *(int *)((int)this + 0x358);
    (**(code **)(*(int *)(iVar1 + 0x17c) + 4))();
    *(void **)(iVar1 + 400) = this;
    (*(code *)**(undefined4 **)(iVar1 + 0x17c))();
    FUN_0087feb0();
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0089e1f0 @ 0089e1f0 ////

void __thiscall FUN_0089e1f0(void *this,undefined4 param_1)

{
  FUN_00740a70(this,param_1);
  if ((*(char *)((int)this + 0x312) != '\0') && (*(int *)((int)this + 0x308) != 0)) {
    FUN_00881ec0(*(int *)((int)this + 0x308));
  }
  return;
}


//// FUNCTION FUN_0089e220 @ 0089e220 ////

char __fastcall FUN_0089e220(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc4) >> 3;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffff7;
  cVar1 = FUN_007402d0(param_1);
  if (((cVar1 == '\0') && (*(char *)(param_1 + 0x311) != '\0')) && (*(int *)(param_1 + 0x308) != 0))
  {
    *(undefined1 *)(*(int *)(param_1 + 0x308) + 0x21c) = 1;
    uVar2 = FUN_008828d0(*(int *)(param_1 + 0x308));
    *(char *)(param_1 + 0x312) = (char)uVar2;
    if (((char)uVar2 == '\0') && (*(int *)(*(int *)(param_1 + 0x308) + 0x244) == 1)) {
      *(undefined4 *)(*(int *)(param_1 + 0x308) + 0x244) = 0;
      uVar2 = FUN_008828d0(*(int *)(param_1 + 0x308));
      *(char *)(param_1 + 0x312) = (char)uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x308) + 0x244) = 1;
    }
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x312) != '\0')) {
      uVar3 = FUN_005542b0();
      if ((char)uVar3 == '\0') {
        cVar1 = '\x01';
        goto LAB_0089e2cf;
      }
    }
    cVar1 = '\0';
  }
LAB_0089e2cf:
  *(uint *)(param_1 + 0xc4) =
       *(uint *)(param_1 + 0xc4) ^ ((uint)((byte)uVar4 & 1) << 3 ^ *(uint *)(param_1 + 0xc4)) & 8;
  return cVar1;
}


//// FUNCTION FUN_0089e2f0 @ 0089e2f0 ////

void __thiscall FUN_0089e2f0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x361) = param_1;
  if (*(int *)((int)this + 0x358) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x358) + 0x7c) = param_1;
  }
  return;
}


//// FUNCTION FUN_0089e310 @ 0089e310 ////

void __fastcall FUN_0089e310(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x358) != 0) && (*(char *)(*(int *)(param_1 + 0x358) + 0xfd) == '\0')) {
    local_3c = *(undefined4 *)(param_1 + 0x9c);
    local_40 = *(undefined4 *)(param_1 + 0xc0);
    local_38 = *(undefined4 *)(param_1 + 0x108);
    local_34 = *(undefined4 *)(param_1 + 0xe4);
    FUN_00747290(*(void **)(param_1 + 0x2d4),&local_40);
    FUN_00747290(*(void **)(param_1 + 0x2d4),&local_38);
    local_30 = 0x10000;
    local_24 = 0x10000;
    local_18 = 0x10000;
    local_c = 0x10000;
    local_28 = 0;
    local_2c = 0;
    local_1c = 0;
    local_20 = 0;
    local_10 = 0;
    local_14 = 0;
    local_4 = 0;
    local_8 = 0;
    if (*(char *)(param_1 + 0x35e) == '\0') {
      if (*(char *)(param_1 + 0x35f) != '\0') {
        uVar1 = FUN_00acd42c();
        uVar2 = FUN_00acd42c();
        local_20 = (int)uVar1 * 0x14 - (int)uVar2;
      }
    }
    else {
      uVar1 = FUN_00acd42c();
      local_20 = (int)uVar1 * 0x14;
    }
    if (*(char *)(param_1 + 0x35c) == '\0') {
      if (*(char *)(param_1 + 0x35d) != '\0') {
        uVar1 = FUN_00acd42c();
        uVar2 = FUN_00acd42c();
        local_1c = (int)uVar1 * 0x14 - (int)uVar2;
      }
    }
    else {
      uVar1 = FUN_00acd42c();
      local_1c = (int)uVar1 * 0x14;
    }
    FUN_0087ff20(*(void **)(param_1 + 0x358),&local_30,&local_18);
  }
  return;
}


//// FUNCTION FUN_0089e5f0 @ 0089e5f0 ////

void __thiscall FUN_0089e5f0(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_c;
  undefined4 local_8;
  
  *(char *)((int)this + 0x360) = param_1;
  if (param_1 != '\0') {
    local_8 = 0;
    piVar2 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar2 + 0x10))();
    piVar2 = (int *)FUN_0071b2a0();
    uVar4 = FUN_00acd42c();
    uStack_18 = (undefined4)uVar4;
    (**(code **)(*piVar2 + 0x14))();
    uVar4 = FUN_00acd42c();
    uStack_c = (undefined4)uVar4;
    uVar3 = FUN_00882710(*(void **)((int)this + 0x358),&fStack_20);
    if ((char)uVar3 == '\0') {
      iVar1 = *(int *)((int)this + 0x358);
      fStack_20 = (float)(*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50)) *
                  *(float *)(iVar1 + 0x8c) * 0.05;
      fStack_1c = (float)(*(int *)(iVar1 + 0x5c) - *(int *)(iVar1 + 0x58)) *
                  *(float *)(iVar1 + 0x90) * 0.05;
    }
    if (*(char *)((int)this + 0x363) == '\0') {
      (**(code **)(*(int *)this + 0x10))();
      (**(code **)(*(int *)this + 0x14))();
    }
    else {
      piVar2 = (int *)FUN_0071b2b0();
      (**(code **)(*piVar2 + 0x10))();
      (**(code **)(*(int *)this + 0x10))();
      piVar2 = (int *)FUN_0071b2b0();
      (**(code **)(*piVar2 + 0x14))();
      (**(code **)(*(int *)this + 0x14))();
    }
    uVar4 = FUN_00acd42c();
    uVar5 = FUN_00acd42c();
    *(int *)((int)this + 0x36c) = (int)uVar4;
    *(undefined4 *)((int)this + 0x370) = 0;
    *(undefined4 *)((int)this + 0x374) = 0;
    *(int *)((int)this + 0x378) = (int)uVar5;
    *(undefined4 *)((int)this + 0x37c) = local_8;
    *(undefined4 *)((int)this + 0x380) = 0;
  }
  return;
}


//// FUNCTION FUN_0089e780 @ 0089e780 ////

void __fastcall FUN_0089e780(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
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
  
  local_24 = *(undefined4 *)(param_1 + 0x9c);
  local_28 = *(undefined4 *)(param_1 + 0xc0);
  local_20 = *(undefined4 *)(param_1 + 0x108);
  local_1c = *(undefined4 *)(param_1 + 0xe4);
  FUN_00747290(*(void **)(param_1 + 0x2d4),&local_28);
  FUN_00747290(*(void **)(param_1 + 0x2d4),&local_20);
  local_18 = 0x10000;
  local_c = 0x10000;
  local_10 = 0;
  local_14 = 0;
  local_4 = 0;
  local_8 = 0;
  uVar1 = FUN_00acd42c();
  uVar2 = FUN_00acd42c();
  uVar3 = FUN_00acd42c();
  *(int *)(param_1 + 0x380) = ((int)uVar2 - (int)uVar1) - (int)uVar3;
  uVar1 = FUN_00acd42c();
  uVar2 = FUN_00acd42c();
  uVar3 = FUN_00acd42c();
  *(int *)(param_1 + 0x37c) = ((int)uVar2 - (int)uVar1) - (int)uVar3;
  FUN_0087ff20(*(void **)(param_1 + 0x358),(undefined4 *)(param_1 + 0x36c),&local_18);
  return;
}


//// FUNCTION FUN_0089e8c0 @ 0089e8c0 ////

void __fastcall FUN_0089e8c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = *(int **)(param_1 + 0x124);
  piVar1 = (int *)(param_1 + 0x130);
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  *(int **)(param_1 + 0x124) = piVar1;
  *piVar1 = param_1 + 0x120;
  if (((*(byte *)(param_1 + 0x218) & 0x20) == 0) ||
     ((*(float *)(param_1 + 0x1f8) != *(float *)(param_1 + 0x1f0) &&
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 500))))) {
    local_10 = *(undefined4 *)(param_1 + 0xc0);
    local_c = *(undefined4 *)(param_1 + 0x9c);
    local_8 = *(undefined4 *)(param_1 + 0x108);
    local_4 = *(undefined4 *)(param_1 + 0xe4);
    FUN_00747290(*(void **)(param_1 + 0x2d4),&local_10);
    FUN_00747290(*(void **)(param_1 + 0x2d4),&local_8);
    if (*(int *)(param_1 + 0x358) != 0) {
      if (*(char *)(param_1 + 0x360) != '\0') {
        FUN_0089e780(param_1);
      }
      FUN_0089e310(param_1);
      FUN_00882950(*(int *)(param_1 + 0x358));
    }
  }
  return;
}


//// FUNCTION FUN_0089ea20 @ 0089ea20 ////

undefined4 * __fastcall FUN_0089ea20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb156;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d63dfc;
  param_1[0x14] = &PTR_FUN_00d63de0;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xd1] = &PTR_FUN_00d637f0;
  param_1[0xd6] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xdb] = 0x10000;
  param_1[0xde] = 0x10000;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xd7] = 0;
  param_1[0x45] = param_1[0x45] & 0xfffffffd | 8;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)((int)param_1 + 0x362) = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)((int)param_1 + 0x361) = 1;
  *(undefined1 *)((int)param_1 + 0x363) = 1;
  param_1[0xda] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0089eb00 @ 0089eb00 ////

void __fastcall FUN_0089eb00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb184;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63dfc;
  param_1[0x14] = &PTR_FUN_00d63de0;
  local_4 = 2;
  while( true ) {
    if ((param_1[0xe2] == 0) || ((int)(param_1[0xe3] - param_1[0xe2]) / 0x18 == 0)) break;
    puVar5 = *(undefined4 **)(param_1[0xe2] + 0x14);
    if (puVar5 != (undefined4 *)0x0) {
      piVar4 = puVar5 + 0x12;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*puVar5)(1);
      }
      piVar4 = (int *)param_1[0xe2];
      (**(code **)(*piVar4 + 4))();
      piVar4[5] = 0;
      (**(code **)*piVar4)();
    }
    piVar1 = (int *)param_1[0xe3];
    piVar4 = (int *)param_1[0xe2] + 6;
    piVar3 = (int *)param_1[0xe2];
    while (piVar4 != piVar1) {
      (**(code **)(*piVar3 + 4))();
      piVar3[5] = piVar3[0xb];
      (**(code **)*piVar3)();
      piVar4 = piVar3 + 0xc;
      piVar3 = piVar3 + 6;
    }
    puVar2 = (undefined4 *)param_1[0xe3];
    puVar5 = puVar2 + -6;
    if (puVar5 != puVar2) {
      piVar4 = puVar2 + -4;
      do {
        *puVar5 = &PTR_FUN_00d18c2c;
        if ((int *)*piVar4 != (int *)0x0) {
          *(int *)*piVar4 = piVar4[-1];
        }
        if (piVar4[-1] != 0) {
          *(int *)(piVar4[-1] + 4) = *piVar4;
        }
        piVar4[-1] = 0;
        *piVar4 = 0;
        piVar4[3] = 0;
        if ((int *)*piVar4 != (int *)0x0) {
          *(int *)*piVar4 = piVar4[-1];
        }
        if (piVar4[-1] != 0) {
          *(int *)(piVar4[-1] + 4) = *piVar4;
        }
        piVar4[-1] = 0;
        *piVar4 = 0;
        puVar5 = puVar5 + 6;
        piVar4 = piVar4 + 6;
      } while (puVar5 != puVar2);
    }
    param_1[0xe3] = param_1[0xe3] + -0x18;
  }
  puVar5 = (undefined4 *)param_1[0xd6];
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5[0x6a] == 0) {
      if (puVar5 != (undefined4 *)0x0) {
        piVar4 = puVar5 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar5)(1);
        }
        (**(code **)(param_1[0xd1] + 4))();
        param_1[0xd6] = 0;
        (**(code **)param_1[0xd1])();
      }
    }
    else {
      FUN_00874f90(puVar5[0x6a]);
    }
  }
  FUN_006e80c0((int)(param_1 + 0xe1));
  param_1[0xd1] = &PTR_FUN_00d637f0;
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


//// FUNCTION FUN_0089ed20 @ 0089ed20 ////

undefined4 * __thiscall FUN_0089ed20(void *this,byte param_1)

{
  FUN_0089eb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0089ed40 @ 0089ed40 ////

void __thiscall FUN_0089ed40(void *this,int *param_1)

{
  int *piVar1;
  int iStack_24;
  int *piStack_20;
  undefined1 *puStack_1c;
  int *piStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0x46] = (int)this;
  (**(code **)(*param_1 + 0x50))(1);
  piVar1 = param_1 + 0x54;
  *piVar1 = (int)this + 0x120;
  param_1[0x55] = *(int *)((int)this + 0x124);
  **(int **)((int)this + 0x124) = (int)piVar1;
  *(int **)((int)this + 0x124) = piVar1;
  piStack_20 = param_1 + 6;
  puStack_1c = &stack0xffffffd8;
  piStack_14 = param_1;
  iStack_24 = *piStack_20;
  *(int **)(*piStack_20 + 4) = &iStack_24;
  *piStack_20 = (int)&iStack_24;
  puStack_8 = (undefined1 *)0x0;
  FUN_006ea220((void *)((int)this + 900),(int)&stack0xffffffd8);
  if (piStack_20 != (int *)0x0) {
    *piStack_20 = iStack_24;
  }
  if (iStack_24 != 0) {
    *(int **)(iStack_24 + 4) = piStack_20;
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0089ee70 @ 0089ee70 ////

void __fastcall FUN_0089ee70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d63f1c;
  param_1[0x14] = &PTR_FUN_00d63f04;
  FUN_0089eb00(param_1);
  return;
}


//// FUNCTION FUN_0089ee90 @ 0089ee90 ////

void __thiscall FUN_0089ee90(void *this,undefined4 *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x3c0) = *param_1;
  *(undefined4 *)((int)this + 0x3c4) = param_1[1];
  *(undefined4 *)((int)this + 0x3c8) = param_1[2];
  *(undefined4 *)((int)this + 0x3cc) = param_1[3];
  *(undefined4 *)((int)this + 0x3d0) = param_1[4];
  uVar1 = param_1[5];
  *(float *)((int)this + 0x3ac) = param_2 * *(float *)((int)this + 0x3b4);
  *(undefined4 *)((int)this + 0x3d4) = uVar1;
  *(undefined1 *)((int)this + 0x3bc) = 1;
  *(float *)((int)this + 0x3b0) = param_3 * *(float *)((int)this + 0x3b4);
  return;
}


//// FUNCTION FUN_0089eef0 @ 0089eef0 ////

undefined4 * __thiscall FUN_0089eef0(void *this,byte param_1)

{
  FUN_0089ee70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0089ef10 @ 0089ef10 ////

void __fastcall FUN_0089ef10(int param_1)

{
  void *this;
  
  if (*(void **)(param_1 + 0x358) != (void *)0x0) {
    this = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"button_popper");
    if (this != (void *)0x0) {
      *(undefined1 *)((int)this + 0x188) = 0;
      if (*(int *)((int)this + 0x260) != 0) {
        FUN_008887b0(this,*(int *)((int)this + 0x260) - 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0089ef50 @ 0089ef50 ////

void __fastcall FUN_0089ef50(int param_1)

{
  void *this;
  
  if ((*(void **)(param_1 + 0x358) != (void *)0x0) &&
     (this = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"button_popper"), this != (void *)0x0)
     ) {
    FUN_0088fd50(this,0x16,7);
    FUN_008887b0(this,1);
    *(undefined1 *)((int)this + 0x188) = 1;
  }
  return;
}


//// FUNCTION FUN_0089ef90 @ 0089ef90 ////

undefined4 * __thiscall FUN_0089ef90(void *this,char param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb1c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0089ea20(this);
  *(undefined ***)this = &PTR_FUN_00d63f1c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d63f04;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0x10000;
  *(undefined4 *)((int)this + 0x3cc) = 0x10000;
  *(undefined4 *)((int)this + 0x3d8) = 0x10000;
  *(undefined4 *)((int)this + 0x3e4) = 0x10000;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0x10000;
  *(undefined4 *)((int)this + 0x3fc) = 0x10000;
  local_2c = local_20;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"button_pop",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 1;
  FUN_0089e070(this,&local_2c,0,0,'\x01');
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (*(int *)((int)this + 0x358) != 0) {
    *(bool *)(*(int *)((int)this + 0x358) + 0x7d) = param_1 == '\0';
    iVar1 = FUN_008819d0(*(void **)((int)this + 0x358),"button_popper");
    *(undefined1 *)(iVar1 + 0x188) = 0;
    FUN_00881c00(*(void **)((int)this + 0x358),"button_popper",0);
  }
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0x3fc00000;
  if (param_2 != 0) {
    *(int *)((int)this + 0x394) = param_2;
    *(void **)(param_2 + 0x15c) = this;
    if (*(char *)(*(int *)(*(int *)((int)this + 0x394) + 0x164) + 0x7f) != '\0') {
      *(undefined4 *)((int)this + 0x3b4) = 0x3f000000;
    }
  }
  *(undefined4 *)((int)this + 0x3a8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3a4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3b0) = 0xbf800000;
  *(undefined4 *)((int)this + 0x3ac) = 0xbf800000;
  *(undefined1 *)((int)this + 0x39d) = 0;
  *(undefined1 *)((int)this + 0x39e) = 0;
  *(undefined1 *)((int)this + 0x39f) = 0;
  *(undefined1 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x398) = param_3;
  *(undefined1 *)((int)this + 0x39c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0089f190 @ 0089f190 ////

void __thiscall FUN_0089f190(void *this,int param_1)

{
  uint *puVar1;
  
  if (*(int *)((int)this + 0x3b8) != param_1) {
    switch(param_1) {
    case 0:
    case 3:
      if (*(void **)((int)this + 0x398) != (void *)0x0) {
        FUN_008887b0(*(void **)((int)this + 0x398),0);
        FUN_0088fd50(*(void **)((int)this + 0x398),0,7);
        puVar1 = (uint *)(*(int *)((int)this + 0x398) + 0x25c);
        *puVar1 = *puVar1 | 1;
      }
      break;
    case 1:
      if (*(void **)((int)this + 0x398) != (void *)0x0) {
        FUN_008887b0(*(void **)((int)this + 0x398),1);
        FUN_0088fd50(*(void **)((int)this + 0x398),1,7);
        puVar1 = (uint *)(*(int *)((int)this + 0x398) + 0x25c);
        *puVar1 = *puVar1 | 1;
      }
      FUN_0089ef50((int)this);
      *(int *)((int)this + 0x3b8) = param_1;
      return;
    case 2:
      if (*(void **)((int)this + 0x398) != (void *)0x0) {
        FUN_008887b0(*(void **)((int)this + 0x398),1);
        FUN_0088fd50(*(void **)((int)this + 0x398),1,7);
        puVar1 = (uint *)(*(int *)((int)this + 0x398) + 0x25c);
        *puVar1 = *puVar1 | 1;
      }
      FUN_00539250("UI_DESTROY_ICON_DECREASE",this);
      *(int *)((int)this + 0x3b8) = param_1;
      return;
    }
    *(int *)((int)this + 0x3b8) = param_1;
  }
  return;
}


//// FUNCTION FUN_0089f290 @ 0089f290 ////

void __fastcall FUN_0089f290(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  int iVar5;
  float10 fVar6;
  ulonglong uVar7;
  float local_c;
  
  if (param_1[0xd6] != 0) {
    param_1[0xfc] = 0x10000;
    param_1[0xff] = 0x10000;
    param_1[0xfe] = 0;
    param_1[0xfd] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0xf6] = param_1[0xf0];
    param_1[0xf7] = param_1[0xf1];
    param_1[0xf8] = param_1[0xf2];
    param_1[0xf9] = param_1[0xf3];
    param_1[0xfa] = param_1[0xf4];
    param_1[0xfb] = param_1[0xf5];
    if ((char)param_1[0xe7] != '\0') {
      param_1[0xf6] = param_1[0xf0];
      param_1[0xf7] = param_1[0xf1];
      param_1[0xf8] = param_1[0xf2];
      param_1[0xf9] = param_1[0xf3];
      param_1[0xfa] = param_1[0xf4];
      param_1[0xfb] = param_1[0xf5];
      local_c = 1.0;
      uVar1 = FUN_00882680((void *)param_1[0xd6],param_1);
      if ((char)uVar1 == '\0') {
        iVar5 = *(int *)(*(int *)(param_1[0xd6] + 0x170) + 0x164);
        iVar2 = *(int *)(iVar5 + 0x10);
        if ((iVar2 != 0) && (*(int *)(iVar5 + 0x14) - iVar2 >> 5 != 0)) {
          iVar2 = FUN_00889b90(*(int *)(param_1[0xd6] + 0x170));
          iVar5 = *(int *)(iVar2 + 4);
          if (iVar5 != *(int *)(iVar2 + 8)) {
            do {
              if ((*(byte *)(*(int *)(iVar5 + 0x3c) + 0x50) & 0x10) != 0) {
                iVar3 = FUN_00889b90(*(int *)(iVar5 + 0x3c));
                for (iVar4 = *(int *)(iVar3 + 4); iVar4 != *(int *)(iVar3 + 8); iVar4 = iVar4 + 0x40
                    ) {
                  if ((*(byte *)(*(int *)(iVar4 + 0x3c) + 0x50) & 2) != 0) {
                    *(undefined1 *)(param_1 + 0xe7) = 0;
                    iVar4 = *(int *)(*(int *)(iVar4 + 0x3c) + 0x160);
                    local_c = (float)(*(int *)(iVar4 + 0x5c) - *(int *)(iVar4 + 0x58)) * 0.05;
                    (**(code **)(*param_1 + 0x78))
                              ((float)(*(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0x50)) * 0.05);
                    (**(code **)(*param_1 + 0x7c))(unaff_EBX);
                    break;
                  }
                }
              }
            } while (((char)param_1[0xe7] != '\0') &&
                    (iVar5 = iVar5 + 0x40, iVar5 != *(int *)(iVar2 + 8)));
          }
        }
        fVar6 = (float10)local_c;
      }
      else {
        (**(code **)(*param_1 + 0x10))();
        fVar6 = (float10)(**(code **)(*param_1 + 0x14))();
        *(undefined1 *)(param_1 + 0xe7) = 0;
      }
      *(float *)(param_1[0xd6] + 0x8c) = (float)((float10)(float)param_1[0xec] / fVar6);
    }
    fVar6 = (float10)(**(code **)(*param_1 + 0x10))();
    param_1[0xe9] = (int)(float)(fVar6 / (float10)(float)param_1[0xeb]);
    fVar6 = (float10)(**(code **)(*param_1 + 0x14))();
    param_1[0xea] = (int)(float)(((float10)1.0 / (float10)(float)param_1[0xec]) * fVar6);
    uVar7 = FUN_00acd42c();
    param_1[0xf6] = (int)uVar7;
    uVar7 = FUN_00acd42c();
    param_1[0xf9] = (int)uVar7;
    FUN_0087ff20((void *)param_1[0xd6],param_1 + 0xf6,param_1 + 0xfc);
  }
  return;
}


//// FUNCTION FUN_0089f4f0 @ 0089f4f0 ////

undefined1 __fastcall FUN_0089f4f0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int aiStack_18 [6];
  
  uVar1 = DAT_010501a0;
  (*(code *)DAT_0105018c[1])();
  DAT_010501a0 = *(undefined4 *)(param_1 + 0x358);
  (*(code *)*DAT_0105018c)();
  aiStack_18[0] = 0x10000;
  aiStack_18[3] = 0x10000;
  aiStack_18[2] = 0;
  aiStack_18[1] = 0;
  aiStack_18[5] = 0;
  aiStack_18[4] = 0;
  uVar2 = FUN_0088a3f0(*(void **)(*(int *)(param_1 + 0x358) + 0x170),aiStack_18);
  (*(code *)DAT_0105018c[1])();
  DAT_010501a0 = uVar1;
  (*(code *)*DAT_0105018c)();
  return (char)uVar2;
}


//// FUNCTION FUN_0089f590 @ 0089f590 ////

void __fastcall FUN_0089f590(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = FUN_008819d0(*(void **)(param_1 + 0x358),"button_popper");
  if (iVar4 == 0) {
    return;
  }
  if ((*(int *)(iVar4 + 0x260) == 0) && (*(int *)(param_1 + 0x3b8) != 0)) {
    if (*(void **)(param_1 + 0x398) != (void *)0x0) {
      FUN_008887b0(*(void **)(param_1 + 0x398),0);
      FUN_0088fd50(*(void **)(param_1 + 0x398),0,7);
      puVar1 = (uint *)(*(int *)(param_1 + 0x398) + 0x25c);
      *puVar1 = *puVar1 | 1;
    }
    *(undefined4 *)(param_1 + 0x3b8) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x39e);
  if (cVar2 != '\0') {
    if ((*(int *)(param_1 + 0x3b8) != 1) && (*(int *)(param_1 + 0x3b8) != 3)) {
      if (*(void **)(param_1 + 0x398) != (void *)0x0) {
        FUN_008887b0(*(void **)(param_1 + 0x398),1);
        FUN_0088fd50(*(void **)(param_1 + 0x398),1,7);
        puVar1 = (uint *)(*(int *)(param_1 + 0x398) + 0x25c);
        *puVar1 = *puVar1 | 1;
      }
      FUN_0089ef50(param_1);
      *(undefined4 *)(param_1 + 0x3b8) = 1;
      FUN_00539250("UI_DESTROY_ICON_INCREASE",param_1);
      return;
    }
    if (cVar2 != '\0') goto LAB_0089f6c8;
  }
  iVar3 = *(int *)(param_1 + 0x3b8);
  if ((iVar3 != 0) && (iVar3 != 3)) {
    if (iVar3 != 2) {
      if (*(void **)(param_1 + 0x398) != (void *)0x0) {
        FUN_008887b0(*(void **)(param_1 + 0x398),1);
        FUN_0088fd50(*(void **)(param_1 + 0x398),1,7);
        puVar1 = (uint *)(*(int *)(param_1 + 0x398) + 0x25c);
        *puVar1 = *puVar1 | 1;
      }
      FUN_00539250("UI_DESTROY_ICON_DECREASE",param_1);
      *(undefined4 *)(param_1 + 0x3b8) = 2;
    }
    FUN_0089ef10(param_1);
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
LAB_0089f6c8:
  if ((*(int *)(param_1 + 0x3b8) == 1) && (0x15 < *(int *)(iVar4 + 0x260))) {
    if (*(void **)(param_1 + 0x398) != (void *)0x0) {
      FUN_008887b0(*(void **)(param_1 + 0x398),0);
      FUN_0088fd50(*(void **)(param_1 + 0x398),0,7);
      puVar1 = (uint *)(*(int *)(param_1 + 0x398) + 0x25c);
      *puVar1 = *puVar1 | 1;
    }
    *(undefined4 *)(param_1 + 0x3b8) = 3;
    FUN_00539250("UI_DESTROY_ICON_WAITING",param_1);
  }
  return;
}


//// FUNCTION FUN_0089f730 @ 0089f730 ////

undefined4 * __cdecl FUN_0089f730(char param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb1db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x408);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_0089ef90(this,param_1,0,0);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0089f7a0 @ 0089f7a0 ////

void __fastcall FUN_0089f7a0(int *param_1)

{
  FUN_0089f290(param_1);
                    /* WARNING: Could not recover jumptable at 0x0089f7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))();
  return;
}


//// FUNCTION LSWFPopButton_Tick @ 0089f7c0 ////

void __thiscall LSWFPopButton_Tick(void *this,char param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x358) != 0) {
    *(char *)((int)this + 0x39e) = param_1;
    if ((*(char *)((int)this + 0x39f) != '\0') && (param_1 == '\0')) {
      *(undefined1 *)((int)this + 0x3a0) = 1;
    }
    if (*(int *)((int)this + 0x394) != 0) {
      cVar1 = FUN_00553f70(0x73);
      uVar2 = FUN_00553fd0(0x73);
      if (((*(int *)((int)this + 0x3b8) == 3) && (*(char *)((int)this + 0x39e) != '\0')) ||
         (*(char *)((int)this + 0x39e) == '\0')) {
        FUN_008887b0(DAT_010501b0,0);
        if (((*(char *)((int)this + 0x39e) != '\0') && (*(char *)((int)this + 0x3a0) == '\0')) &&
           (*(char *)((int)this + 0x39f) != '\0')) {
          FUN_008735e0(*(void **)((int)this + 0x394),3);
          FUN_0089f590((int)this);
          WWindow_Tick(this);
          return;
        }
      }
      else if (*(int *)((int)this + 0x3b8) != 0) {
        if (cVar1 == '\0') {
          if (((uVar2 & 0xff) != 0) && (*(char *)((int)this + 0x39f) != '\0')) {
            *(undefined1 *)((int)this + 0x3a0) = 1;
          }
        }
        else {
          *(undefined1 *)((int)this + 0x39f) = 1;
          *(undefined1 *)((int)this + 0x3a0) = 0;
        }
        FUN_008887b0(DAT_010501b0,1);
      }
    }
    FUN_0089f590((int)this);
    WWindow_Tick(this);
  }
  return;
}


//// FUNCTION FUN_0089f8d0 @ 0089f8d0 ////

void __fastcall FUN_0089f8d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar4 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar9 = __allshr(0x10,((int)((ulonglong)((longlong)(int)param_1[3] * (longlong)(int)*param_1) >>
                              0x20) -
                        (int)((ulonglong)((longlong)(int)param_1[2] * (longlong)(int)param_1[1]) >>
                             0x20)) -
                        (uint)((uint)((longlong)(int)param_1[3] * (longlong)(int)*param_1) <
                              (uint)((longlong)(int)param_1[2] * (longlong)(int)param_1[1])));
  uVar3 = (uint)uVar9;
  if (uVar3 != 0) {
    uVar9 = __alldiv(0,1,uVar3,(int)uVar3 >> 0x1f);
    uVar3 = (uint)uVar9;
    iVar8 = (int)uVar3 >> 0x1f;
    lVar10 = __allmul(uVar4,(int)uVar4 >> 0x1f,uVar3,iVar8);
    uVar9 = __allshr(0x10,(int)((ulonglong)lVar10 >> 0x20));
    uVar4 = (uint)uVar9;
    *param_1 = uVar4;
    lVar10 = __allmul(uVar5,(int)uVar5 >> 0x1f,uVar3,iVar8);
    uVar9 = __allshr(0x10,(int)((ulonglong)lVar10 >> 0x20));
    uVar5 = (uint)uVar9;
    param_1[3] = uVar5;
    lVar10 = __allmul(-uVar6,(int)-uVar6 >> 0x1f,uVar3,iVar8);
    uVar9 = __allshr(0x10,(int)((ulonglong)lVar10 >> 0x20));
    uVar6 = (uint)uVar9;
    param_1[1] = uVar6;
    lVar10 = __allmul(-uVar7,(int)-uVar7 >> 0x1f,uVar3,iVar8);
    uVar9 = __allshr(0x10,(int)((ulonglong)lVar10 >> 0x20));
    uVar7 = (uint)uVar9;
    param_1[2] = uVar7;
    lVar10 = __allmul(uVar7,(int)uVar7 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
    lVar11 = __allmul(uVar4,(int)uVar4 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
    uVar9 = __allshr(0x10,-((int)((ulonglong)(lVar10 + lVar11) >> 0x20) +
                           (uint)((int)(lVar10 + lVar11) != 0)));
    param_1[4] = (uint)uVar9;
    lVar10 = __allmul(uVar6,(int)uVar6 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
    lVar11 = __allmul(uVar5,(int)uVar5 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
    uVar9 = __allshr(0x10,-((int)((ulonglong)(lVar11 + lVar10) >> 0x20) +
                           (uint)((int)(lVar11 + lVar10) != 0)));
    param_1[5] = (uint)uVar9;
  }
  return;
}


//// FUNCTION FUN_0089fa60 @ 0089fa60 ////

ulonglong __thiscall FUN_0089fa60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar1 != iVar2) {
    return (ulonglong)CONCAT14(iVar1 < iVar2,CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < iVar2));
  }
  uVar3 = FUN_00acd42c();
  uVar4 = FUN_00acd42c();
  if ((int)uVar3 < (int)uVar4) {
    return CONCAT44((int)(uVar4 >> 0x20),CONCAT31((int3)(uVar4 >> 8),1));
  }
  if ((int)uVar4 < (int)uVar3) {
    return uVar4 & 0xffffffffffffff00;
  }
  uVar3 = FUN_00acd42c();
  uVar4 = FUN_00acd42c();
  return CONCAT44((int)(uVar4 >> 0x20),CONCAT31((int3)(uVar4 >> 8),(int)uVar4 < (int)uVar3));
}


//// FUNCTION FUN_0089fbc0 @ 0089fbc0 ////

undefined4 * __thiscall FUN_0089fbc0(void *this,undefined4 param_1)

{
  FUN_00890290(this);
  *(undefined4 *)((int)this + 0x160) = param_1;
  *(undefined ***)this = &PTR_FUN_00d64098;
  *(undefined4 *)((int)this + 0x50) = 2;
  return this;
}


//// FUNCTION FUN_0089fd20 @ 0089fd20 ////

void __fastcall FUN_0089fd20(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x84);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
    pfVar4 = *(float **)(iVar3 + 0x28);
    pfVar1 = (float *)(param_1 + 0x8c);
    *pfVar1 = *pfVar4;
    *(float *)(param_1 + 0x90) = pfVar4[1];
    *(float *)(param_1 + 0x94) = pfVar4[2];
    pfVar2 = (float *)(param_1 + 0x98);
    *pfVar2 = *pfVar4;
    *(float *)(param_1 + 0x9c) = pfVar4[1];
    *(float *)(param_1 + 0xa0) = pfVar4[2];
    iVar5 = 1;
    if (1 < *(int *)(iVar3 + 0x18)) {
      local_4 = 0x18;
      do {
        pfVar4 = (float *)(*(int *)(iVar3 + 0x28) + local_4);
        if (*pfVar2 <= *(float *)(*(int *)(iVar3 + 0x28) + local_4)) {
          if (*pfVar1 < *pfVar4) {
            *pfVar1 = *pfVar4;
          }
        }
        else {
          *pfVar2 = *pfVar4;
        }
        if (*(float *)(param_1 + 0x9c) <= pfVar4[1]) {
          if (*(float *)(param_1 + 0x90) < pfVar4[1]) {
            *(float *)(param_1 + 0x90) = pfVar4[1];
          }
        }
        else {
          *(float *)(param_1 + 0x9c) = pfVar4[1];
        }
        local_4 = local_4 + 0x18;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(*(int *)(param_1 + 0x84) + 0x18));
    }
  }
  return;
}


//// FUNCTION FUN_0089fe30 @ 0089fe30 ////

undefined4 * __fastcall FUN_0089fe30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb1fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x164);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00890290(puVar1);
    *puVar1 = &PTR_FUN_00d64098;
    puVar1[0x58] = param_1;
    puVar1[0x14] = 2;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_0089ffb0 @ 0089ffb0 ////

bool FUN_0089ffb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = param_1[1];
  iVar2 = param_2[1];
  bVar4 = SBORROW4(iVar1,iVar2);
  iVar3 = iVar1 - iVar2;
  if (iVar1 == iVar2) {
    iVar1 = *param_1;
    iVar2 = *param_2;
    bVar4 = SBORROW4(iVar1,iVar2);
    iVar3 = iVar1 - iVar2;
    if (iVar1 == iVar2) {
      if (param_1[2] != param_2[2]) {
        return (uint)param_1[2] < (uint)param_2[2];
      }
      return false;
    }
  }
  return bVar4 != iVar3 < 0;
}


//// FUNCTION FUN_008a01b0 @ 008a01b0 ////

void __cdecl FUN_008a01b0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008a01d0 @ 008a01d0 ////

void __cdecl FUN_008a01d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008a0210 @ 008a0210 ////

void __thiscall FUN_008a0210(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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


//// FUNCTION FUN_008a07e0 @ 008a07e0 ////

void __fastcall FUN_008a07e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008a0870 @ 008a0870 ////

void __cdecl
FUN_008a0870(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6)

{
  FUN_00994cd0(&DAT_0105955c,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


//// FUNCTION FUN_008a08f0 @ 008a08f0 ////

void __thiscall FUN_008a08f0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x1d) == '\0') {
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


//// FUNCTION FUN_008a0960 @ 008a0960 ////

void __fastcall FUN_008a0960(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008a09c0 @ 008a09c0 ////

void __fastcall FUN_008a09c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008a0a60 @ 008a0a60 ////

void __cdecl FUN_008a0a60(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008a0c10 @ 008a0c10 ////

void __fastcall FUN_008a0c10(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008a0c80 @ 008a0c80 ////

void __cdecl FUN_008a0c80(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x1d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_008a0ca0 @ 008a0ca0 ////

void __cdecl FUN_008a0ca0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_008a0cd0 @ 008a0cd0 ////

void __cdecl FUN_008a0cd0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008a0cf0 @ 008a0cf0 ////

void __fastcall FUN_008a0cf0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008a0d50 @ 008a0d50 ////

void __fastcall FUN_008a0d50(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x1d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x1d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x1d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008a0f60 @ 008a0f60 ////

void __cdecl FUN_008a0f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_008a0fb0 @ 008a0fb0 ////

void __cdecl FUN_008a0fb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_008a1250 @ 008a1250 ////

void __cdecl FUN_008a1250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a14e0 @ 008a14e0 ////

undefined4 * __thiscall FUN_008a14e0(void *this,byte param_1)

{
  thunk_FUN_008902f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008a1550 @ 008a1550 ////

void __thiscall FUN_008a1550(void *this,void *param_1)

{
  uint *puVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb21b;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    uVar2 = FUN_008767b0(param_1,*(int *)((int)this + 4));
    uVar3 = FUN_00876800(param_1,*(int *)((int)this + 4));
    if (((short)uVar3 != 0) && ((short)uVar2 != 0)) {
      puVar4 = FUN_00452010();
      *(undefined4 **)((int)this + 0x84) = puVar4;
      puVar4[0xc] = puVar4[0xc] & 0xfffffff7;
      puVar4 = operator_new(0x24);
      local_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_009910f0(puVar4);
      }
      *(undefined4 *)(*(int *)((int)this + 0x84) + 0x40) = uVar5;
      *(undefined1 *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0xc) = 6;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xbfffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 | 0x80000000;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xf7ffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xefffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xfeffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 | 0x2000000;
      this_00 = *(void **)(*(int *)((int)this + 0x84) + 0x40);
      local_4 = 0xffffffff;
      if (*(int *)((int)this_00 + 0x18) != 0) {
        Engine_SetResourceReference(this_00,0);
      }
      FUN_009e6720(*(void **)((int)this + 0x84),uVar3 & 0xffff,uVar2 & 0xffff);
      puVar4 = *(undefined4 **)(*(int *)((int)this + 0x84) + 0x2c);
      puVar7 = *(undefined4 **)(*(int *)((int)this + 0x84) + 0x28);
      puVar6 = (undefined4 *)FUN_00876850(param_1,*(int *)((int)this + 4));
      for (iVar8 = (uVar3 & 0xffff) * 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar7 = (undefined4 *)FUN_00876890(param_1,*(int *)((int)this + 4));
      uVar2 = (uVar2 & 0xffff) * 3;
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar8 = (uVar2 & 1) << 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008a1710 @ 008a1710 ////

void __thiscall FUN_008a1710(void *this,short *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  uVar1 = 1;
  if (0 < *(int *)(*(int *)((int)this + 0x84) + 0x18)) {
    iVar4 = 0;
    do {
      iVar2 = (uint)*(byte *)(*(int *)((int)this + 0x88) + 0xe + iVar4) * (int)param_1[2];
      iVar5 = *(int *)(*(int *)((int)this + 0x84) + 0x28) + iVar4;
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (int)param_1[3];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(iVar5 + 0xe) = (char)iVar2;
      iVar2 = (uint)*(byte *)(*(int *)((int)this + 0x88) + 0xd + iVar4) * (int)param_1[4];
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (int)param_1[5];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(iVar5 + 0xd) = (char)iVar2;
      iVar2 = (uint)*(byte *)(*(int *)((int)this + 0x88) + 0xc + iVar4) * (int)param_1[6];
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (int)param_1[7];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(iVar5 + 0xc) = (char)iVar2;
      iVar2 = (uint)*(byte *)(*(int *)((int)this + 0x88) + 0xf + iVar4) * (int)*param_1;
      iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (int)param_1[1];
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *(char *)(iVar5 + 0xf) = (char)iVar2;
      if ((char)iVar2 != '\0') {
        uVar1 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(*(int *)((int)this + 0x84) + 0x18));
    *(undefined1 *)((int)this + 0x60) = uVar1;
    return;
  }
  *(undefined1 *)((int)this + 0x60) = 1;
  return;
}


//// FUNCTION FUN_008a1b10 @ 008a1b10 ////

void __thiscall FUN_008a1b10(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
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


//// FUNCTION FUN_008a1ce0 @ 008a1ce0 ////

undefined4 * __thiscall FUN_008a1ce0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x1d) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (puVar2[4] == param_1[1]) {
        if (puVar2[3] != *param_1) {
          bVar4 = (int)puVar2[3] < *param_1;
          goto LAB_008a1d1e;
        }
        bVar4 = (uint)puVar2[5] < (uint)param_1[2];
        if (puVar2[5] != param_1[2]) goto LAB_008a1d1e;
LAB_008a1d27:
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        bVar4 = (int)puVar2[4] < param_1[1];
LAB_008a1d1e:
        if (!bVar4) goto LAB_008a1d27;
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  return puVar2;
}


//// FUNCTION FUN_008a1dc0 @ 008a1dc0 ////

undefined8 __fastcall FUN_008a1dc0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)local_4[1] + 0x11) == '\0') {
    iVar1 = *param_3;
    puVar5 = (undefined4 *)local_4[1];
    do {
      iVar2 = *(int *)(puVar5[3] + 0xc);
      iVar3 = *(int *)(iVar1 + 0xc);
      bVar7 = SBORROW4(iVar2,iVar3);
      iVar4 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        uVar8 = FUN_00acd42c();
        uVar9 = FUN_00acd42c();
        param_2 = (undefined4)(uVar9 >> 0x20);
        if ((int)uVar9 <= (int)uVar8) {
          if ((int)uVar8 <= (int)uVar9) {
            uVar8 = FUN_00acd42c();
            uVar9 = FUN_00acd42c();
            param_2 = (undefined4)(uVar9 >> 0x20);
            bVar7 = SBORROW4((int)uVar8,(int)uVar9);
            iVar4 = (int)uVar8 - (int)uVar9;
            goto LAB_008a1e18;
          }
          goto LAB_008a1e24;
        }
LAB_008a1e1f:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
LAB_008a1e18:
        if (bVar7 != iVar4 < 0) goto LAB_008a1e1f;
LAB_008a1e24:
        puVar6 = (undefined4 *)*puVar5;
        local_4 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x11) == '\0');
  }
  return CONCAT44(param_2,local_4);
}


//// FUNCTION FUN_008a1e40 @ 008a1e40 ////

int * __fastcall FUN_008a1e40(int *param_1)

{
  FUN_008a07e0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a1ef0 @ 008a1ef0 ////

int * __fastcall FUN_008a1ef0(int *param_1)

{
  FUN_008a09c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a1f00 @ 008a1f00 ////

int * __fastcall FUN_008a1f00(int *param_1)

{
  FUN_008a0960(param_1);
  return param_1;
}


//// FUNCTION FUN_008a1f20 @ 008a1f20 ////

void __thiscall FUN_008a1f20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
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


//// FUNCTION FUN_008a1f80 @ 008a1f80 ////

void __thiscall FUN_008a1f80(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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


//// FUNCTION FUN_008a1ff0 @ 008a1ff0 ////

void __fastcall FUN_008a1ff0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008a20d0 @ 008a20d0 ////

int * __fastcall FUN_008a20d0(int *param_1)

{
  FUN_008a0c10(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2130 @ 008a2130 ////

void __thiscall FUN_008a2130(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x1d) == '\0') {
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


//// FUNCTION FUN_008a2200 @ 008a2200 ////

void __fastcall FUN_008a2200(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008a2260 @ 008a2260 ////

int * __fastcall FUN_008a2260(int *param_1)

{
  FUN_008a0d50(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2270 @ 008a2270 ////

int * __fastcall FUN_008a2270(int *param_1)

{
  FUN_008a0cf0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2290 @ 008a2290 ////

void FUN_008a2290(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_008a2290(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008a23b0 @ 008a23b0 ////

void __cdecl FUN_008a23b0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_008a2470 @ 008a2470 ////

void __cdecl FUN_008a2470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a24a0 @ 008a24a0 ////

void __cdecl FUN_008a24a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a2510 @ 008a2510 ////

void __thiscall FUN_008a2510(void *this,short *param_1)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = *(int *)((int)this + 0x160);
  if (iVar1 != 0) {
    if (((DAT_010501b8 == 0) || (*(int *)(iVar1 + 0x84) == 0)) ||
       (*(char *)(DAT_010501b0 + 0x256) != '\0')) {
      if (*(char *)(DAT_010501b0 + 0x256) != '\0') {
        *(undefined1 *)(iVar1 + 0xa4) = 1;
      }
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x84) + 0x40) + 0xc) = 0x24;
    }
    (**(code **)(**(int **)((int)this + 0x160) + 8))(param_1);
    if ((*(char *)(DAT_010501b0 + 0x256) == '\0') ||
       (iVar1 = *(int *)(*(int *)((int)this + 0x160) + 0x84), iVar1 == 0)) {
      if (DAT_01050188 == '\0') {
        psVar2 = (short *)FUN_008885f0(&DAT_00e5e7fc,(undefined4 *)&stack0xffffffec,param_1);
        FUN_008a1710(*(void **)((int)this + 0x160),psVar2);
        (**(code **)(**(int **)((int)this + 0x160) + 4))();
      }
    }
    else {
      DAT_010501b4 = *(int *)(*(int *)(iVar1 + 0x40) + 0x18);
      if (DAT_010501b4 != 0) {
        iVar1 = *(int *)((int)this + 0x160);
        FUN_008a0870(DAT_010501b4,*(float *)(iVar1 + 0x98),*(float *)(iVar1 + 0x9c),
                     *(undefined4 *)(iVar1 + 0xa0),*(float *)(*(int *)((int)this + 0x160) + 0x8c),
                     *(float *)(*(int *)((int)this + 0x160) + 0x90));
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_008a2650 @ 008a2650 ////

void __thiscall FUN_008a2650(void *this,int *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_c;
  float local_8;
  
  FUN_0086ddb0(&DAT_00e5e7e4,&local_48,param_1);
  iVar1 = *(int *)((int)this + 0x84);
  local_30 = (float)local_48 * 1.5258789e-05;
  local_2c = (float)local_44 * 1.5258789e-05;
  local_24 = (float)local_40 * 1.5258789e-05;
  local_20 = (float)local_3c * 1.5258789e-05;
  local_c = (float)local_38;
  local_8 = (float)local_34;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x30) =
         *(uint *)(iVar1 + 0x30) ^
         ((uint)*(byte *)(DAT_010501a0 + 0x7d) << 2 ^ *(uint *)(iVar1 + 0x30)) & 4;
    iVar1 = *(int *)((int)this + 0x84);
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      iVar5 = 0;
      do {
        pfVar2 = (float *)(*(int *)((int)this + 0x88) + iVar5);
        pfVar3 = (float *)(*(int *)(iVar1 + 0x28) + iVar5);
        *pfVar3 = pfVar2[2] * 0.0 +
                  local_24 * pfVar2[1] + local_30 * *(float *)(*(int *)((int)this + 0x88) + iVar5) +
                  local_c;
        pfVar3[1] = pfVar2[2] * 0.0 + local_20 * pfVar2[1] + local_2c * *pfVar2 + local_8;
        pfVar3[2] = (*pfVar2 + pfVar2[1]) * 0.0 + pfVar2[2];
        *pfVar3 = *pfVar3 * 0.05;
        pfVar3[1] = pfVar3[1] * 0.05;
        if (((*(byte *)(*(int *)((int)this + 0x84) + 0x30) & 4) == 0) &&
           (pfVar3[2] = 0.02, DAT_01050118 != 0)) {
          FUN_0040b490((void *)(DAT_01050118 + 0x148),pfVar3);
        }
        iVar1 = *(int *)((int)this + 0x84);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(iVar1 + 0x18));
    }
    if (*(char *)((int)this + 0xa4) != '\0') {
      FUN_0089fd20((int)this);
    }
  }
  return;
}


//// FUNCTION FUN_008a2960 @ 008a2960 ////

void FUN_008a2960(void)

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


//// FUNCTION FUN_008a29b0 @ 008a29b0 ////

void FUN_008a29b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_008a2a10 @ 008a2a10 ////

int * __fastcall FUN_008a2a10(int *param_1)

{
  FUN_008a07e0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2ab0 @ 008a2ab0 ////

int * __fastcall FUN_008a2ab0(int *param_1)

{
  FUN_008a09c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2ac0 @ 008a2ac0 ////

int * __fastcall FUN_008a2ac0(int *param_1)

{
  FUN_008a0960(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2ad0 @ 008a2ad0 ////

int * __fastcall FUN_008a2ad0(int *param_1)

{
  FUN_008a1ff0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2ae0 @ 008a2ae0 ////

void FUN_008a2ae0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a2b20 @ 008a2b20 ////

int * __fastcall FUN_008a2b20(int *param_1)

{
  FUN_008a0c10(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2b40 @ 008a2b40 ////

void FUN_008a2b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}


//// FUNCTION FUN_008a2b80 @ 008a2b80 ////

void FUN_008a2b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}


//// FUNCTION FUN_008a2bd0 @ 008a2bd0 ////

void FUN_008a2bd0(void)

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


//// FUNCTION FUN_008a2bf0 @ 008a2bf0 ////

void FUN_008a2bf0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a2c20 @ 008a2c20 ////

void FUN_008a2c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
  }
  return;
}


//// FUNCTION FUN_008a2c60 @ 008a2c60 ////

int * __fastcall FUN_008a2c60(int *param_1)

{
  FUN_008a2200(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2c70 @ 008a2c70 ////

int * __fastcall FUN_008a2c70(int *param_1)

{
  FUN_008a0d50(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2c80 @ 008a2c80 ////

int * __fastcall FUN_008a2c80(int *param_1)

{
  FUN_008a0cf0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a2c90 @ 008a2c90 ////

void __thiscall FUN_008a2c90(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_008a2cd0 @ 008a2cd0 ////

void FUN_008a2cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  return;
}


//// FUNCTION FUN_008a2d20 @ 008a2d20 ////

void __fastcall FUN_008a2d20(int param_1)

{
  FUN_008a2290(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008a2d50 @ 008a2d50 ////

void FUN_008a2d50(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_008a2da0 @ 008a2da0 ////

void FUN_008a2da0(void)

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


//// FUNCTION FUN_008a2e10 @ 008a2e10 ////

void __fastcall FUN_008a2e10(int param_1)

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


//// FUNCTION FUN_008a2e60 @ 008a2e60 ////

void FUN_008a2e60(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_008a2ed0 @ 008a2ed0 ////

void FUN_008a2ed0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_008a2ed0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008a2f10 @ 008a2f10 ////

void __cdecl FUN_008a2f10(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a2f40 @ 008a2f40 ////

void __cdecl FUN_008a2f40(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a3010 @ 008a3010 ////

void __thiscall FUN_008a3010(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_008a3050 @ 008a3050 ////

void __cdecl FUN_008a3050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008a3090 @ 008a3090 ////

void __cdecl FUN_008a3090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_008a3110 @ 008a3110 ////

undefined4 __thiscall FUN_008a3110(void *this,float param_1,float param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int *piVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  local_c = param_3[3];
  local_8 = param_3[4];
  local_4 = param_3[5];
  FUN_0089f8d0(&local_18);
  fVar3 = (float)(int)local_10;
  piVar8 = (int *)**(int **)((int)this + 0x2c);
  fVar2 = (float)(int)local_18;
  fVar1 = (float)(int)local_8;
  fVar6 = (float)(int)local_14;
  fVar5 = (float)(int)local_c;
  fVar4 = (float)(int)local_4;
  if (piVar8 != *(int **)((int)this + 0x2c)) {
    do {
      uVar7 = FUN_0086ed60(piVar8 + 2,
                           fVar2 * 1.5258789e-05 * param_1 + fVar3 * 1.5258789e-05 * param_2 + fVar1
                           ,fVar5 * 1.5258789e-05 * param_2 + fVar6 * 1.5258789e-05 * param_1 +
                            fVar4);
      if (uVar7 != 0) {
        return 1;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)((int)this + 0x2c));
  }
  return 0;
}


//// FUNCTION FUN_008a31e0 @ 008a31e0 ////

void __fastcall FUN_008a31e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x2c);
  if (piVar1 != *(int **)(param_1 + 0x2c)) {
    do {
      FUN_00870110((int)(piVar1 + 2));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_008a3210 @ 008a3210 ////

void __thiscall FUN_008a3210(void *this,void *param_1)

{
  float *pfVar1;
  void *this_00;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)((int)param_1 + 0x70) != 0) {
    iVar2 = *(int *)(*(int *)((int)this + 0x84) + 0x28);
    piVar3 = (int *)**(int **)((int)this + 0x2c);
    if (piVar3 != *(int **)((int)this + 0x2c)) {
      do {
        piVar4 = *(int **)piVar3[3];
        if (piVar4 != (int *)piVar3[3]) {
          do {
            if (-1 < piVar4[3]) {
              pfVar1 = (float *)piVar4[4];
              FUN_0086deb0(param_1,*pfVar1,pfVar1[1],pfVar1[2],pfVar1[3],
                           (float)*(int *)(*(int *)((int)param_1 + 0x70) + 0x4c),
                           (float)*(int *)(*(int *)((int)param_1 + 0x70) + 0x50),iVar2);
              iVar2 = iVar2 + 0x18;
            }
            piVar4 = (int *)*piVar4;
          } while (piVar4 != (int *)piVar3[3]);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)((int)this + 0x2c));
    }
    this_00 = *(void **)(*(int *)((int)this + 0x84) + 0x40);
    if (*(int *)((int)this_00 + 0x18) != *(int *)((int)param_1 + 0x70)) {
      Engine_SetResourceReference(this_00,*(int *)((int)param_1 + 0x70));
    }
  }
  return;
}


//// FUNCTION FUN_008a32f0 @ 008a32f0 ////

void __thiscall FUN_008a32f0(void *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  
  puVar1 = FUN_008a1ce0(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    if (param_2[1] == puVar1[4]) {
      if (*param_2 == puVar1[3]) {
        bVar2 = (uint)param_2[2] < (uint)puVar1[5];
        if (param_2[2] == puVar1[5]) goto LAB_008a3338;
      }
      else {
        bVar2 = *param_2 < (int)puVar1[3];
      }
    }
    else {
      bVar2 = param_2[1] < (int)puVar1[4];
    }
    if (!bVar2) {
LAB_008a3338:
      *param_1 = (int)puVar1;
      return;
    }
  }
  *param_1 = (int)*(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_008a3380 @ 008a3380 ////

void __fastcall FUN_008a3380(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_008a1dc0(param_1,param_2,param_4);
  iVar2 = (int)uVar3;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar2 != iVar1) {
    uVar4 = FUN_0089fa60((void *)*param_4,*(int *)(iVar2 + 0xc));
    if ((char)uVar4 == '\0') {
      *param_3 = iVar2;
      return;
    }
  }
  *param_3 = iVar1;
  return;
}


//// FUNCTION FUN_008a3460 @ 008a3460 ////

int * __fastcall FUN_008a3460(int *param_1)

{
  FUN_008a1ff0(param_1);
  return param_1;
}


//// FUNCTION FUN_008a3490 @ 008a3490 ////

int * __fastcall FUN_008a3490(int *param_1)

{
  FUN_008a2200(param_1);
  return param_1;
}


//// FUNCTION FUN_008a3510 @ 008a3510 ////

void __fastcall FUN_008a3510(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008a3550 @ 008a3550 ////

void __fastcall FUN_008a3550(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008a3590 @ 008a3590 ////

void __fastcall FUN_008a3590(int param_1)

{
  FUN_008a2e10(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008a35c0 @ 008a35c0 ////

void __fastcall FUN_008a35c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2e60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008a3600 @ 008a3600 ////

void __fastcall FUN_008a3600(int param_1)

{
  FUN_008a2ed0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008a3700 @ 008a3700 ////

int __fastcall FUN_008a3700(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008942b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a37d0 @ 008a37d0 ////

void __fastcall FUN_008a37d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 3;
  }
  puVar4 = operator_new(iVar3 << 3);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 3;
  }
  for (uVar5 = 0;
      (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0 &&
      (uVar5 < (uint)(*(int *)(param_1 + 0x48) - iVar1 >> 3))); uVar5 = uVar5 + 1) {
    iVar2 = *(int *)(iVar1 + uVar5 * 8 + 4);
    *puVar4 = *(undefined4 *)(iVar1 + uVar5 * 8);
    puVar4[1] = iVar2 + iVar3 * 8;
    puVar4 = puVar4 + 2;
  }
  return;
}


//// FUNCTION FUN_008a3850 @ 008a3850 ////

void __fastcall FUN_008a3850(undefined4 *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_4c [8];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb240;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined2 *)(param_1[8] + 6) = *(undefined2 *)(param_1 + 0xe);
  iVar2 = param_1[8];
  iVar3 = param_1[10];
  FUN_008a37d0((int)param_1);
  if (param_1[0x11] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(param_1[0x12] - param_1[0x11]) >> 3;
  }
  sVar1 = uVar4 * 8 + (iVar3 - iVar2);
  param_1[0xf] = sVar1;
  *(size_t *)(param_1[8] + 2) = sVar1;
  _Memory = operator_new(param_1[0xf]);
  puVar5 = (undefined4 *)param_1[8];
  param_1[10] = puVar5;
  *_Memory = *puVar5;
  _Memory[1] = puVar5[1];
  param_1[10] = param_1[10] + 8;
  puVar5 = (undefined4 *)param_1[9];
  puVar9 = _Memory + 2;
  for (iVar6 = (uVar4 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  uVar7 = (iVar3 - iVar2) - 8;
  puVar5 = (undefined4 *)param_1[10];
  puVar9 = _Memory + 2 + uVar4 * 2;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_0047aee0(local_4c,&PTR_DAT_00e5e7c4,param_1);
  local_4 = 0;
  puVar5 = FUN_00568790(local_2c,local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009d44d0(puVar5,_Memory,sVar1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  param_1[0xd] = 1;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a39c0 @ 008a39c0 ////

void __fastcall FUN_008a39c0(int param_1)

{
  int iVar1;
  int local_4;
  
  local_4 = **(int **)(param_1 + 0x10);
  iVar1 = 0;
  if ((int *)local_4 != *(int **)(param_1 + 0x10)) {
    do {
      *(int *)(*(int *)(local_4 + 0xc) + 8) = iVar1;
      iVar1 = iVar1 + 1;
      FUN_008915d0(&local_4);
    } while (local_4 != *(int *)(param_1 + 0x10));
  }
  return;
}


//// FUNCTION FUN_008a3a00 @ 008a3a00 ////

int __fastcall FUN_008a3a00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008a2960();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3a20 @ 008a3a20 ////

int __fastcall FUN_008a3a20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008a29b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3a40 @ 008a3a40 ////

undefined4 * FUN_008a3a40(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_008a2f10(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_008a3a70 @ 008a3a70 ////

undefined4 * FUN_008a3a70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_008a2f40(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_008a3aa0 @ 008a3aa0 ////

int __fastcall FUN_008a3aa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3ad0 @ 008a3ad0 ////

int __fastcall FUN_008a3ad0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3b00 @ 008a3b00 ////

int __fastcall FUN_008a3b00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008a2bd0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3b20 @ 008a3b20 ////

void __fastcall FUN_008a3b20(int param_1)

{
  FUN_008a2e10(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008a3b40 @ 008a3b40 ////

int __fastcall FUN_008a3b40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2e60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a3bc0 @ 008a3bc0 ////

void __fastcall FUN_008a3bc0(int param_1)

{
  FUN_008a2e10(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_008a3be0 @ 008a3be0 ////

void __fastcall FUN_008a3be0(int param_1)

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


//// FUNCTION FUN_008a3c10 @ 008a3c10 ////

void __fastcall FUN_008a3c10(int param_1)

{
  FUN_008a2e10(param_1 + 0x10);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_008a3c30 @ 008a3c30 ////

void __fastcall FUN_008a3c30(int param_1)

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


//// FUNCTION FUN_008a3c60 @ 008a3c60 ////

void * __thiscall FUN_008a3c60(void *this,byte param_1)

{
  FUN_008a3c10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008a3c80 @ 008a3c80 ////

void __fastcall FUN_008a3c80(undefined4 *param_1)

{
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if ((void *)param_1[9] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  DAT_010501c8 = 0;
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_008a3ce0 @ 008a3ce0 ////

void __thiscall FUN_008a3ce0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ceb258;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
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
  FUN_008a09c0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x11) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
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
      iVar1 = param_2[4];
      *(char *)(param_2 + 4) = (char)_Memory[4];
      *(char *)(_Memory + 4) = (char)iVar1;
      goto LAB_008a3e51;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      piVar2 = (int *)FUN_008a01d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_008a01b0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_008a3e51:
  if ((char)_Memory[4] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[4] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_008a1b10(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_008a0210(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_008a1b10(this,(int)piVar5);
              break;
            }
LAB_008a3f14:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_008a0210(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_008a3f14;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_008a1b10(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_008a0210(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a3fa0 @ 008a3fa0 ////

void __thiscall
FUN_008a3fa0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceb278;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_008a2b40(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_008a409b:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00891480(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_00891520(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_008a409b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00891520(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_00891480(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_008a4150 @ 008a4150 ////

void __thiscall
FUN_008a4150(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceb298;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_008a2b80(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_008a424b:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008a1b10(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_008a0210(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_008a424b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008a0210(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_008a1b10(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_008a4300 @ 008a4300 ////

void __thiscall
FUN_008a4300(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceb2b8;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_008a2c20(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_008a43fb:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008a1f20(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_008a1f80(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_008a43fb;
      if (piVar6 == (int *)*piVar2) {
        FUN_008a1f80(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_008a1f20(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_008a44b0 @ 008a44b0 ////

void __thiscall FUN_008a44b0(void *this,uint param_1)

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
  puStack_8 = &LAB_00ceb2d8;
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


//// FUNCTION FUN_008a4550 @ 008a4550 ////

void __thiscall FUN_008a4550(void *this,uint param_1)

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
  puStack_8 = &LAB_00ceb2f8;
  local_c = ExceptionList;
  if (0xcccccccU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_008a45f0 @ 008a45f0 ////

void __thiscall
FUN_008a45f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceb318;
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
  piVar3 = (int *)FUN_008a2cd0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_008a46eb:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00892ca0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_00890be0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_008a46eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00890be0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_00892ca0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_008a47a0 @ 008a47a0 ////

void FUN_008a47a0(void)

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
  puStack_8 = &LAB_00ceb338;
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


//// FUNCTION FUN_008a4810 @ 008a4810 ////

void __thiscall FUN_008a4810(void *this,uint param_1)

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
  puStack_8 = &LAB_00ceb358;
  local_c = ExceptionList;
  if (0x4924924U - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_008a48b0 @ 008a48b0 ////

void __thiscall FUN_008a48b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008a2290((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_008a3ce0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008a4970 @ 008a4970 ////

void __thiscall FUN_008a4970(void *this,uint param_1)

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
  puStack_8 = &LAB_00ceb378;
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


//// FUNCTION FUN_008a4a10 @ 008a4a10 ////

void __thiscall FUN_008a4a10(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ceb398;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
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
  FUN_008a1ff0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x11) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
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
      iVar1 = param_2[4];
      *(char *)(param_2 + 4) = (char)_Memory[4];
      *(char *)(_Memory + 4) = (char)iVar1;
      goto LAB_008a4b81;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      piVar2 = (int *)FUN_008a0a60(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_008a0cd0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_008a4b81:
  if ((char)_Memory[4] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[4] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_008a1f20(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_008a1f80(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_008a1f20(this,(int)piVar5);
              break;
            }
LAB_008a4c44:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_008a1f80(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_008a4c44;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_008a1f20(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_008a1f80(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a4ce0 @ 008a4ce0 ////

void __thiscall FUN_008a4ce0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *local_10;
  bool local_c;
  undefined3 uStack_b;
  int local_8;
  void *local_4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  bVar6 = true;
  _local_c = CONCAT31(uStack_b,1);
  local_4 = this;
  if (*(char *)((int)puVar4[1] + 0x11) == '\0') {
    local_10 = (undefined4 *)*param_2;
    local_8 = local_10[3];
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      iVar1 = *(int *)(puVar4[3] + 0xc);
      bVar6 = SBORROW4(local_8,iVar1);
      iVar2 = local_8 - iVar1;
      if (local_8 == iVar1) {
        uVar7 = FUN_00acd42c();
        uVar8 = FUN_00acd42c();
        if ((int)uVar7 < (int)uVar8) {
          bVar6 = true;
        }
        else {
          if ((int)uVar7 <= (int)uVar8) {
            uVar7 = FUN_00acd42c();
            uVar8 = FUN_00acd42c();
            bVar6 = SBORROW4((int)uVar7,(int)uVar8);
            iVar2 = (int)uVar7 - (int)uVar8;
            goto LAB_008a4d62;
          }
          bVar6 = false;
        }
      }
      else {
LAB_008a4d62:
        bVar6 = bVar6 != iVar2 < 0;
      }
      _local_c = CONCAT31(uStack_b,bVar6);
      if (bVar6 == false) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar5 + 0x11) == '\0');
  }
  this_00 = local_4;
  local_10 = puVar4;
  if (bVar6 != false) {
    if (puVar4 == (undefined4 *)**(int **)((int)local_4 + 4)) {
      puVar4 = (undefined4 *)FUN_008a3fa0(local_4,&param_2,'\x01',puVar4,param_2);
      *param_1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008a07e0((int *)&local_10);
  }
  puVar5 = local_10;
  piVar3 = param_2;
  uVar7 = FUN_0089fa60((void *)local_10[3],*param_2);
  if ((char)uVar7 == '\0') {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  puVar4 = (undefined4 *)FUN_008a3fa0(this_00,&param_2,(char)_local_c,puVar4,piVar3);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_008a4e20 @ 008a4e20 ////

void __thiscall FUN_008a4e20(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_008a4150(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_008a0960((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_008a4150(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008a4ee0 @ 008a4ee0 ////

void __thiscall FUN_008a4ee0(void *this,undefined4 *param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  bool local_4;
  
  pfVar4 = param_2;
  pfVar2 = (float *)(*(float **)((int)this + 4))[1];
  cVar1 = *(char *)((int)pfVar2 + 0x11);
  bVar5 = true;
  local_4 = true;
  pfVar3 = *(float **)((int)this + 4);
  while (cVar1 == '\0') {
    bVar5 = pfVar2[3] <= *param_2;
    if (bVar5) {
      pfVar7 = (float *)pfVar2[2];
    }
    else {
      pfVar7 = (float *)*pfVar2;
    }
    local_4 = !bVar5;
    bVar5 = !bVar5;
    pfVar3 = pfVar2;
    pfVar2 = pfVar7;
    cVar1 = *(char *)((int)pfVar7 + 0x11);
  }
  param_2 = pfVar3;
  if (bVar5) {
    if (pfVar3 == (float *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_008a4f42;
    }
    FUN_008a2200((int *)&param_2);
  }
  if (*pfVar4 <= param_2[3]) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_008a4f42:
  puVar6 = (undefined4 *)FUN_008a4300(this,&param_2,local_4,pfVar3,pfVar4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_008a50f0 @ 008a50f0 ////

void __thiscall FUN_008a50f0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  bool local_4;
  
  piVar2 = param_2;
  piVar5 = *(int **)((int)this + 4);
  local_4 = true;
  if (*(char *)(piVar5[1] + 0x1d) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      if (param_2[1] == piVar5[4]) {
        if (*param_2 == piVar5[3]) {
          local_4 = (uint)param_2[2] < (uint)piVar5[5];
          if (param_2[2] == piVar5[5]) {
            local_4 = false;
          }
        }
        else {
          local_4 = *param_2 < piVar5[3];
        }
      }
      else {
        local_4 = param_2[1] < piVar5[4];
      }
      if (local_4 == false) {
        piVar3 = (int *)piVar5[2];
      }
      else {
        piVar3 = (int *)*piVar5;
      }
    } while (*(char *)((int)piVar3 + 0x1d) == '\0');
  }
  param_2 = piVar5;
  if (local_4 != false) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_008a51b4;
    }
    FUN_008a0c10((int *)&param_2);
  }
  if (param_2[4] == piVar2[1]) {
    if (param_2[3] == *piVar2) {
      bVar6 = (uint)param_2[5] < (uint)piVar2[2];
      if (param_2[5] == piVar2[2]) goto LAB_008a51cf;
    }
    else {
      bVar6 = param_2[3] < *piVar2;
    }
  }
  else {
    bVar6 = param_2[4] < piVar2[1];
  }
  if (bVar6) {
LAB_008a51b4:
    puVar4 = (undefined4 *)FUN_008a45f0(this,&param_2,local_4,piVar5,piVar2);
    uVar1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar1;
    return;
  }
LAB_008a51cf:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008a51e0 @ 008a51e0 ////

void __thiscall FUN_008a51e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ceb3b0;
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
      uVar2 = FUN_008a47a0();
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
      puVar5 = (undefined4 *)FUN_008a2470(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_008a2f10(puVar5,param_2,&local_20);
      FUN_008a2470(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_008a2470(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_008a3a40(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_008a0f60(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_008a2470(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_008a23b0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_008a0f60(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a5430 @ 008a5430 ////

void __thiscall FUN_008a5430(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ceb3c0;
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
      uVar8 = FUN_008963b0();
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
      puVar5 = (undefined4 *)FUN_008a24a0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_008a2f40(puVar5,param_2,&local_24);
      FUN_008a24a0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
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
      FUN_008a24a0(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_008a3a70(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_008a0fb0(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_008a24a0(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_008a1250(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_008a0fb0(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a56a0 @ 008a56a0 ////

void __thiscall FUN_008a56a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008a2ed0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_008a4a10(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008a5760 @ 008a5760 ////

int __thiscall FUN_008a5760(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb3d0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0xfffffff < uVar1) {
      uVar1 = FUN_0086f250();
    }
    puVar2 = operator_new(uVar1 * 0x10);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 4;
    local_8 = 0;
    uVar3 = FUN_008a3050(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_008a5820 @ 008a5820 ////

int __thiscall FUN_008a5820(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb3e0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
      uVar1 = FUN_0040e940();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_008a3090(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_008a58f0 @ 008a58f0 ////

void __thiscall FUN_008a58f0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ceb3f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_008a2ae0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_008a44b0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a59a0 @ 008a59a0 ////

void __thiscall FUN_008a59a0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ceb400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_008a2bf0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_008a4970(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a5a50 @ 008a5a50 ////

void __thiscall FUN_008a5a50(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ceb410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_008a2ae0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_008a44b0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a5b00 @ 008a5b00 ////

void __thiscall FUN_008a5b00(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ceb420;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_0086e6b0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_0086f1b0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a5bb0 @ 008a5bb0 ////

undefined4 __thiscall
FUN_008a5bb0(void *this,float *param_1,float param_2,float param_3,float param_4)

{
  void *this_00;
  float *this_01;
  float *pfVar1;
  int *piVar2;
  float extraout_EDX;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float local_c;
  float local_8;
  char local_4;
  
  this_01 = operator_new(0x10);
  if (this_01 == (float *)0x0) {
    this_01 = (float *)0x0;
    fVar3 = extraout_EDX;
  }
  else {
    *this_01 = (float)param_1;
    this_01[1] = param_2;
    this_01[2] = param_3;
    this_01[3] = param_4;
    fVar3 = param_4;
  }
  this_00 = (void *)((int)this + 0xc);
  param_1 = this_01;
  uVar4 = FUN_008a1dc0((int)this_00,fVar3,(int *)&param_1);
  local_c = (float)uVar4;
  fVar3 = *(float *)((int)this + 0x10);
  if (local_c != fVar3) {
    uVar5 = FUN_0089fa60(this_01,*(int *)((int)local_c + 0xc));
    if ((char)uVar5 == '\0') {
      pfVar1 = &local_c;
      goto LAB_008a5c25;
    }
  }
  local_8 = fVar3;
  pfVar1 = &local_8;
LAB_008a5c25:
  if (*pfVar1 == *(float *)((int)this + 0x10)) {
    local_8 = *this_01 + 0.5;
    *this_01 = local_8;
    piVar2 = (int *)FUN_008a3380((int)this_00,&param_1,(int *)&local_c,(int *)&param_1);
    if (*piVar2 == *(int *)((int)this + 0x10)) {
      local_8 = local_8 - 1.0;
      *this_01 = local_8;
      uVar4 = FUN_008a3380((int)this_00,&local_c,(int *)&local_c,(int *)&param_1);
      if (*(int *)uVar4 == *(int *)((int)this + 0x10)) {
        *this_01 = local_8 + 0.5;
        this_01[1] = this_01[1] + 0.5;
        piVar2 = (int *)FUN_008a3380((int)this_00,(int)((ulonglong)uVar4 >> 0x20),(int *)&local_8,
                                     (int *)&param_1);
        if (*piVar2 == *(int *)((int)this + 0x10)) {
          this_01[1] = this_01[1] - 1.0;
          piVar2 = (int *)FUN_008a3380((int)this_00,&param_1,(int *)&local_8,(int *)&param_1);
          if (*piVar2 == *(int *)((int)this + 0x10)) {
            *this_01 = *this_01 - 0.5;
            uVar4 = FUN_008a3380((int)this_00,&local_8,(int *)&local_8,(int *)&param_1);
            if (*(int *)uVar4 == *(int *)((int)this + 0x10)) {
              this_01[1] = this_01[1] + 1.0;
              piVar2 = (int *)FUN_008a3380((int)this_00,(int)((ulonglong)uVar4 >> 0x20),
                                           (int *)&local_8,(int *)&param_1);
              if (*piVar2 == *(int *)((int)this + 0x10)) {
                *this_01 = *this_01 + 1.0;
                this_01[1] = this_01[1] - 1.0;
                piVar2 = (int *)FUN_008a3380((int)this_00,&param_1,(int *)&local_8,(int *)&param_1);
                if (*piVar2 == *(int *)((int)this + 0x10)) {
                  this_01[1] = this_01[1] + 1.0;
                  piVar2 = (int *)FUN_008a3380((int)this_00,&local_8,(int *)&local_8,(int *)&param_1
                                              );
                  if (*piVar2 == *(int *)((int)this + 0x10)) {
                    *this_01 = *this_01 - 0.5;
                    this_01[1] = this_01[1] - 0.5;
                    FUN_008a4ce0(this_00,&local_8,(int *)&param_1);
                    if (local_4 == '\0') {
                    /* WARNING: Subroutine does not return */
                      _free(this_01);
                    }
                    return *(undefined4 *)((int)local_8 + 0xc);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(this_01);
}


//// FUNCTION FUN_008a5de0 @ 008a5de0 ////

void __thiscall FUN_008a5de0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)((int)this + 4);
  iVar2 = FUN_008a2ae0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_008a44b0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


//// FUNCTION FUN_008a5e60 @ 008a5e60 ////

void __thiscall FUN_008a5e60(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    FUN_00895820((int)param_2);
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_008a5f40 @ 008a5f40 ////

void __thiscall FUN_008a5f40(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)((int)this + 4);
  iVar2 = FUN_008a2bf0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_008a4970(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


//// FUNCTION FUN_008a5f80 @ 008a5f80 ////

undefined4 * __thiscall FUN_008a5f80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008a45f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    bVar3 = FUN_0089ffb0(param_3,param_2 + 3);
    if (bVar3) {
      FUN_008a45f0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    bVar3 = FUN_0089ffb0(puVar4 + 3,param_3);
    if (bVar3) {
      FUN_008a45f0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_0089ffb0(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_008a0c10((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_0089ffb0(param_3 + 3,piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x1d) != '\0') {
          FUN_008a45f0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008a45f0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_0089ffb0(param_2 + 3,piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_00891140((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_0089ffb0(piVar2,param_3 + 3);
        if (!bVar3) goto LAB_008a6102;
      }
      if (*(char *)(param_2[2] + 0x1d) != '\0') {
        FUN_008a45f0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008a45f0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008a6102:
  puVar4 = (undefined4 *)FUN_008a50f0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008a6200 @ 008a6200 ////

void __thiscall FUN_008a6200(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Memory;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb438;
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
  FUN_008a0d50((int *)&param_2);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x1d) == '\0') {
    piVar8 = piVar6;
    if ((*(char *)(piVar3[2] + 0x1d) == '\0') && (piVar8 = (int *)param_2[2], param_2 != piVar3)) {
      piVar6[1] = (int)param_2;
      *param_2 = *piVar3;
      piVar6 = param_2;
      if (param_2 != (int *)piVar3[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar8 + 0x1d) == '\0') {
          piVar8[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar8;
        param_2[2] = piVar3[2];
        *(int **)(piVar3[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == piVar3) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar7 = (int *)piVar3[1];
        if ((int *)*piVar7 == piVar3) {
          *piVar7 = (int)param_2;
        }
        else {
          piVar7[2] = (int)param_2;
        }
      }
      param_2[1] = piVar3[1];
      iVar1 = param_2[7];
      *(char *)(param_2 + 7) = (char)piVar3[7];
      *(char *)(piVar3 + 7) = (char)iVar1;
      goto LAB_008a636d;
    }
  }
  else {
    piVar8 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar8 + 0x1d) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar3) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  piVar7 = *(int **)((int)this + 4);
  if ((int *)*piVar7 == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar8 + 0x1d) == '\0') {
      piVar4 = (int *)FUN_008a0ca0(piVar8);
    }
    *piVar7 = (int)piVar4;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar8 + 0x1d) == '\0') {
      uVar5 = FUN_008a0c80((int)piVar8);
      *(undefined4 *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_008a636d:
  if ((char)piVar3[7] == '\x01') {
    if (piVar8 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[7] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[7] == '\0') {
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(piVar7 + 7) = 0;
            FUN_008a2130(this,(int)piVar7);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x1d) == '\0') {
            if ((*(char *)(*piVar6 + 0x1c) != '\x01') || (*(char *)(piVar6[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x1c) = 1;
                *(undefined1 *)(piVar6 + 7) = 0;
                FUN_008a08f0(this,piVar6);
                piVar6 = (int *)piVar7[2];
              }
              *(char *)(piVar6 + 7) = (char)piVar7[7];
              *(undefined1 *)(piVar7 + 7) = 1;
              *(undefined1 *)(piVar6[2] + 0x1c) = 1;
              FUN_008a2130(this,(int)piVar7);
              break;
            }
LAB_008a6438:
            *(undefined1 *)(piVar6 + 7) = 0;
          }
        }
        else {
          if ((char)piVar6[7] == '\0') {
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(piVar7 + 7) = 0;
            FUN_008a08f0(this,piVar7);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x1d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x1c) == '\x01') && (*(char *)(*piVar6 + 0x1c) == '\x01'))
            goto LAB_008a6438;
            if (*(char *)(*piVar6 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x1c) = 1;
              *(undefined1 *)(piVar6 + 7) = 0;
              FUN_008a2130(this,(int)piVar6);
              piVar6 = (int *)*piVar7;
            }
            *(char *)(piVar6 + 7) = (char)piVar7[7];
            *(undefined1 *)(piVar7 + 7) = 1;
            *(undefined1 *)(*piVar6 + 0x1c) = 1;
            FUN_008a08f0(this,piVar7);
            break;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 7) = 1;
  }
  puVar2 = (undefined4 *)piVar3[5];
  _Memory = (void *)*puVar2;
  *puVar2 = puVar2;
  *(int *)(piVar3[5] + 4) = piVar3[5];
  piVar3[6] = 0;
  if (_Memory == (void *)piVar3[5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar3[5]);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a6500 @ 008a6500 ////

void FUN_008a6500(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_008a6500(*(void **)((int)param_1 + 8));
    FUN_008a3c10((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008a65c0 @ 008a65c0 ////

undefined4 * __thiscall
FUN_008a65c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb45b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_008a2960();
  *(undefined4 *)((int)this + 0xc) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)this = param_3;
  iVar1 = *(int *)((int)this + 0xc);
  iVar3 = FUN_008a2ae0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_008a44b0((void *)((int)this + 8),1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  iVar1 = *(int *)((int)this + 0xc);
  iVar3 = FUN_008a2ae0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  FUN_008a44b0((void *)((int)this + 8),1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008a6670 @ 008a6670 ////

int __fastcall FUN_008a6670(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb483;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_008a29b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008a66d0 @ 008a66d0 ////

int __thiscall FUN_008a66d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb4a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_008a29b0();
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = param_1;
  ExceptionList = local_c;
  return (int)this;
}


//// FUNCTION FUN_008a6730 @ 008a6730 ////

undefined4 * __thiscall FUN_008a6730(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb4c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  local_4 = 1;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  FUN_004073f0(this,".vtx",4);
  puVar1 = operator_new(DAT_00e5e7c0);
  *(undefined4 **)((int)this + 0x20) = puVar1;
  uVar3 = DAT_00e5e7c0;
  for (uVar2 = DAT_00e5e7c0 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x20);
  *(undefined1 *)((int)this + 0x32) = 1;
  *(undefined1 *)((int)this + 0x33) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  if (DAT_010501c8 == (void *)0x0) {
    DAT_010501c8 = this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008a6810 @ 008a6810 ////

void __fastcall FUN_008a6810(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008a48b0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008a6840 @ 008a6840 ////

int * __thiscall FUN_008a6840(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  piVar2 = FUN_008a1ce0(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    if (piVar1[1] == piVar2[4]) {
      if (*piVar1 == piVar2[3]) {
        bVar4 = (uint)piVar1[2] < (uint)piVar2[5];
        if (piVar1[2] == piVar2[5]) goto LAB_008a68b4;
      }
      else {
        bVar4 = *piVar1 < piVar2[3];
      }
    }
    else {
      bVar4 = piVar1[1] < piVar2[4];
    }
    if (!bVar4) goto LAB_008a68b4;
  }
  local_c = piVar1[1];
  local_10 = *piVar1;
  local_8 = piVar1[2];
  local_4 = 0;
  puVar3 = FUN_008a5f80(this,&param_1,piVar2,&local_10);
  piVar2 = (int *)*puVar3;
LAB_008a68b4:
  return piVar2 + 6;
}


//// FUNCTION FUN_008a68c0 @ 008a68c0 ////

void __thiscall FUN_008a68c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_008a2f10(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_008a51e0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_008a6930 @ 008a6930 ////

void __thiscall FUN_008a6930(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_008a2f40(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_008a5430(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_008a69a0 @ 008a69a0 ////

int __fastcall FUN_008a69a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a6a00 @ 008a6a00 ////

void __thiscall
FUN_008a6a00(void *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != param_2) {
    FUN_008a44b0(this,param_5);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - param_5;
  }
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}


//// FUNCTION FUN_008a6a50 @ 008a6a50 ////

void * __thiscall FUN_008a6a50(void *this,int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb4d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_008a2bd0();
  *(int **)((int)this + 4) = piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_008a59a0(this,*piVar1,(undefined4 *)**(undefined4 **)(param_1 + 4),
               *(undefined4 **)(param_1 + 4));
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008a6ad0 @ 008a6ad0 ////

void __fastcall FUN_008a6ad0(int param_1)

{
  FUN_008a6500(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008a6b00 @ 008a6b00 ////

void * __thiscall FUN_008a6b00(void *this,int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_008a2960();
  *(int **)((int)this + 4) = piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_008a5a50(this,*piVar1,(undefined4 *)**(undefined4 **)(param_1 + 4),
               *(undefined4 **)(param_1 + 4));
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008a6b80 @ 008a6b80 ////

void * __thiscall FUN_008a6b80(void *this,int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_008a29b0();
  *(int **)((int)this + 4) = piVar1;
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_008a5b00(this,*piVar1,(undefined4 *)**(undefined4 **)(param_1 + 4),
               *(undefined4 **)(param_1 + 4));
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008a6c20 @ 008a6c20 ////

void __thiscall FUN_008a6c20(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    FUN_00896920((int)param_2);
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_008a6c70 @ 008a6c70 ////

void __thiscall
FUN_008a6c70(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = param_1;
  iVar1 = param_1[6];
  if (*(int *)(**(int **)(iVar1 + 0x14) + 8) == param_4) {
    iVar2 = **(int **)(iVar1 + 0x14);
    iVar4 = FUN_008a2ae0(iVar2,*(undefined4 *)(iVar2 + 4),(undefined4 *)&stack0x0000001c);
    FUN_008a44b0((void *)(iVar1 + 0x10),1);
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  else if (*(int *)((*(int **)(iVar1 + 0x14))[1] + 8) == param_4) {
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar4 = FUN_008a2ae0(iVar2,*(undefined4 *)(iVar2 + 4),(undefined4 *)&stack0x0000001c);
    FUN_008a44b0((void *)(iVar1 + 0x10),1);
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  iVar1 = piVar3[6];
  piVar5 = FUN_008a6840((void *)((int)this + 0xc),(int *)&stack0x00000014);
  *piVar5 = iVar1;
  FUN_00895b50((void *)((int)this + 0xc),&param_1,piVar3);
  return;
}


//// FUNCTION FUN_008a6d20 @ 008a6d20 ////

void __thiscall FUN_008a6d20(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined4 local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x34) == 0) {
    local_4 = *(int *)((int)this + 0x28) - *(int *)((int)this + 0x20);
    *(undefined4 *)((int)this + 0x34) = 1;
    local_8 = param_1;
    FUN_008a68c0((void *)((int)this + 0x40),&local_8);
    **(undefined4 **)((int)this + 0x28) = param_1;
    puVar1 = (undefined2 *)(*(int *)((int)this + 0x28) + 4);
    *(undefined2 **)((int)this + 0x28) = puVar1;
    *puVar1 = param_2;
    puVar1 = (undefined2 *)(*(int *)((int)this + 0x28) + 2);
    *(undefined2 **)((int)this + 0x28) = puVar1;
    *puVar1 = param_2;
    *(undefined2 *)((int)this + 0x30) = param_2;
    *(short *)((int)this + 0x2c) = (short)param_1;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 2;
    *(undefined2 *)((int)this + 0x2e) = param_3;
  }
  return;
}


//// FUNCTION FUN_008a6da0 @ 008a6da0 ////

void __thiscall FUN_008a6da0(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  if (param_1 != param_2) {
    local_10 = *(undefined4 *)((int)this + 0x4c);
    local_4 = param_2;
    local_8 = param_1;
    local_c = param_3;
    FUN_008a6930((void *)((int)this + 0x18),&local_10);
  }
  return;
}


//// FUNCTION FUN_008a6de0 @ 008a6de0 ////

void __fastcall FUN_008a6de0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008a56a0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008a6e10 @ 008a6e10 ////

void __thiscall FUN_008a6e10(void *this,int param_1,void *param_2)

{
  if ((this != param_2) && (*(uint *)((int)param_2 + 8) != 0)) {
    FUN_008a6a00(this,param_1,param_2,**(int **)((int)param_2 + 4),(int)*(int **)((int)param_2 + 4),
                 *(uint *)((int)param_2 + 8));
  }
  return;
}


//// FUNCTION FUN_008a6e40 @ 008a6e40 ////

void __fastcall FUN_008a6e40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (1 < *(uint *)(param_1 + 8)) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar5 = *(undefined4 **)*puVar1;
    while (puVar5 != puVar1) {
      iVar2 = **(int **)(param_1 + 4);
      puVar3 = (undefined4 *)*puVar5;
      *(undefined4 **)puVar5[1] = puVar3;
      *(int *)puVar3[1] = iVar2;
      **(undefined4 **)(iVar2 + 4) = puVar5;
      uVar4 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 4) = puVar3[1];
      puVar3[1] = puVar5[1];
      puVar5[1] = uVar4;
      puVar5 = puVar3;
    }
  }
  return;
}


//// FUNCTION FUN_008a6e90 @ 008a6e90 ////

int __fastcall FUN_008a6e90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2e60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a6ee0 @ 008a6ee0 ////

void __thiscall FUN_008a6ee0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008a6500((void *)piVar6[1]);
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
    FUN_008a6200(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008a6fd0 @ 008a6fd0 ////

void * __thiscall FUN_008a6fd0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb513;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008a6b80(this,param_1);
  local_4 = 0;
  FUN_008a5760((void *)((int)this + 0xc),param_1 + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_008a5820((void *)((int)this + 0x1c),param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008a7090 @ 008a7090 ////

void __thiscall FUN_008a7090(void *this,undefined *param_1)

{
  int *piVar1;
  int *_Memory;
  int *piVar2;
  char cVar3;
  
  piVar1 = *(int **)((int)this + 4);
  piVar2 = (int *)*piVar1;
  do {
    while( true ) {
      _Memory = piVar2;
      if (_Memory == piVar1) {
        return;
      }
      cVar3 = (*(code *)param_1)(_Memory + 2);
      if (cVar3 != '\0') break;
      piVar2 = (int *)*_Memory;
    }
    piVar2 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
  FUN_00896920((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a70f0 @ 008a70f0 ////

void __thiscall FUN_008a70f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_0089a860((int)this);
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
  FUN_00896920((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008a7160 @ 008a7160 ////

void __thiscall FUN_008a7160(void *this,float *param_1,float *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  void *this_00;
  int iVar12;
  int *piVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 fVar14;
  ulonglong uVar15;
  float fVar16;
  int *local_90;
  undefined4 *local_8c;
  float local_88;
  float local_84;
  float local_80;
  double local_7c;
  float *local_74;
  int local_70;
  void *local_6c;
  undefined1 local_68 [4];
  int *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  float *local_54;
  float *local_50;
  float *local_4c;
  float local_48;
  float local_44;
  float *local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb528;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return;
  }
  ExceptionList = &local_c;
  local_6c = this;
  local_64 = (int *)FUN_008a2e60();
  *(undefined1 *)((int)local_64 + 0x11) = 1;
  local_64[1] = (int)local_64;
  *local_64 = (int)local_64;
  local_64[2] = (int)local_64;
  local_60 = 0;
  local_88 = param_2[1] - param_1[1];
  local_4 = 0;
  local_2c = *param_2 - *param_1;
  if (*(int *)((int)this + 0x1c) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c) >> 4;
  }
  if (-1 < iVar10 + -1) {
    iVar12 = (iVar10 + -1) * 0x10;
    local_74 = (float *)iVar10;
    do {
      iVar10 = *(int *)((int)this + 0x1c);
      iVar2 = *(int *)(iVar12 + 0xc + iVar10);
      local_90 = (int *)(iVar12 + 0xc + iVar10);
      local_70 = iVar12;
      uVar15 = FUN_00acd42c();
      local_80 = (float)uVar15;
      iVar3 = *(int *)(iVar12 + 8 + iVar10);
      local_8c = (undefined4 *)(iVar12 + 8 + iVar10);
      uVar15 = FUN_00acd42c();
      local_84 = (float)uVar15;
      uVar15 = FUN_00acd42c();
      iVar6 = (int)uVar15;
      uVar15 = FUN_00acd42c();
      fVar8 = local_80;
      iVar7 = (int)uVar15;
      iVar12 = iVar7;
      if (iVar6 < iVar7) {
        iVar12 = iVar6;
        iVar6 = iVar7;
      }
      if ((int)local_80 < (int)local_84) {
        local_80 = local_84;
        local_84 = fVar8;
      }
      if ((iVar12 <= (int)local_80) && ((int)local_84 <= iVar6)) {
        uVar15 = FUN_00acd42c();
        local_84 = (float)uVar15;
        uVar15 = FUN_00acd42c();
        local_80 = (float)uVar15;
        uVar15 = FUN_00acd42c();
        local_7c = (double)CONCAT44(local_7c._4_4_,(int)uVar15);
        uVar15 = FUN_00acd42c();
        fVar8 = local_84;
        iVar6 = (int)uVar15;
        iVar12 = local_7c._0_4_;
        if (local_7c._0_4_ < iVar6) {
          local_7c = (double)CONCAT44(local_7c._4_4_,iVar6);
          iVar6 = iVar12;
        }
        if ((int)local_84 < (int)local_80) {
          local_84 = local_80;
          local_80 = fVar8;
        }
        if ((iVar6 <= (int)local_84) && ((int)local_80 <= local_7c._0_4_)) {
          local_5c = (undefined4 *)(local_70 + 4 + iVar10);
          fVar8 = param_1[3];
          if (*(float *)(local_70 + 4 + iVar10) == fVar8) {
            local_7c = (double)CONCAT44(local_7c._4_4_,*(float *)(iVar2 + 4) - *(float *)(iVar3 + 4)
                                       );
            uVar15 = FUN_00acd42c();
            local_80 = (float)uVar15;
            if (local_80 != 0.0) {
              pfVar9 = (float *)*local_8c;
              local_8c = (undefined4 *)(param_1[1] - pfVar9[1]);
              local_1c = *param_1 - *pfVar9;
              local_84 = (float)-extraout_ST0;
              uVar15 = FUN_00acd42c();
              local_8c = (undefined4 *)uVar15;
              local_7c = (double)((float10)(int)local_8c / extraout_ST0_00);
              uVar15 = FUN_00acd42c();
              this_00 = local_6c;
              local_8c = (undefined4 *)uVar15;
              fVar14 = (float10)(int)local_8c / extraout_ST1;
              if ((((0.0 <= local_7c) && ((float10)0.0 <= fVar14)) &&
                  (local_7c < 1.0 != (local_7c == 1.0))) &&
                 (fVar14 < (float10)1.0 != (fVar14 == (float10)1.0))) {
                if ((0.0 < local_88) || ((local_88 == 0.0 && (0.0 < local_2c)))) {
                  local_8c = (undefined4 *)(local_88 * (float)local_7c);
                  local_38 = (float)local_8c + param_1[1];
                  local_3c = (float *)((float)local_7c * local_2c + *param_1);
                  iVar10 = FUN_008a5bb0(local_6c,local_3c,local_38,local_34,fVar8);
                  this_00 = local_6c;
                }
                else {
                  local_8c = (undefined4 *)
                             (float)((float10)local_88 * ((float10)1.0 - (float10)local_7c));
                  local_48 = param_2[1] - (float)local_8c;
                  local_4c = (float *)(float)((float10)*param_2 -
                                             ((float10)1.0 - (float10)local_7c) * (float10)local_2c)
                  ;
                  iVar10 = FUN_008a5bb0(local_6c,local_4c,local_48,local_44,param_2[3]);
                }
                iVar12 = local_70;
                if ((*(int *)(*(int *)((int)this_00 + 0x1c) + 0xc + local_70) != iVar10) &&
                   (*(int *)(*(int *)((int)this_00 + 0x1c) + 8 + local_70) != iVar10)) {
                  FUN_008a6da0(this_00,iVar10,*local_90,*local_5c);
                  *(int *)(*(int *)((int)this_00 + 0x1c) + 0xc + iVar12) = iVar10;
                }
                local_90 = (int *)(float)local_7c;
                FUN_008a4ee0(local_68,&local_5c,(float *)&local_90);
              }
            }
          }
        }
      }
      iVar12 = local_70 + -0x10;
      local_74 = (float *)((int)local_74 + -1);
      this = local_6c;
    } while (local_74 != (float *)0x0);
    local_74 = (float *)0x0;
    local_70 = iVar12;
  }
  local_90 = (int *)0x3f800000;
  FUN_008a4ee0(local_68,&local_5c,(float *)&local_90);
  piVar13 = (int *)*local_64;
  local_74 = param_1;
  if (piVar13 != local_64) {
    do {
      if ((0.0 < local_88) || ((local_88 == 0.0 && (0.0 < local_2c)))) {
        fVar8 = param_1[3];
        local_90 = (int *)(local_88 * (float)piVar13[3]);
        fVar16 = (float)local_90 + param_1[1];
        pfVar9 = (float *)((float)piVar13[3] * local_2c + *param_1);
        fVar11 = local_44;
        local_4c = pfVar9;
        local_48 = fVar16;
      }
      else {
        fVar8 = param_2[3];
        local_90 = (int *)(local_88 * (1.0 - (float)piVar13[3]));
        fVar16 = param_2[1] - (float)local_90;
        pfVar9 = (float *)(*param_2 - (1.0 - (float)piVar13[3]) * local_2c);
        fVar11 = local_34;
        local_3c = pfVar9;
        local_38 = fVar16;
      }
      pfVar9 = (float *)FUN_008a5bb0(this,pfVar9,fVar16,fVar11,fVar8);
      if (local_74 != pfVar9) {
        local_5c = *(undefined4 **)((int)this + 0x4c);
        local_54 = local_74;
        local_58 = param_3;
        iVar10 = *(int *)((int)this + 0x1c);
        local_50 = pfVar9;
        if ((iVar10 == 0) ||
           ((uint)(*(int *)((int)this + 0x24) - iVar10 >> 4) <=
            (uint)(*(int *)((int)this + 0x20) - iVar10 >> 4))) {
          FUN_008a5430((void *)((int)this + 0x18),*(undefined4 **)((int)this + 0x20),1,&local_5c);
        }
        else {
          local_90 = *(int **)((int)this + 0x20);
          FUN_008a2f40(local_90,1,&local_5c);
          *(int **)((int)this + 0x20) = local_90 + 4;
        }
      }
      if (*(char *)((int)piVar13 + 0x11) == '\0') {
        piVar4 = (int *)piVar13[2];
        if (*(char *)((int)piVar4 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x11);
          piVar13 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar13 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar13[1] + 0x11);
          piVar5 = (int *)piVar13[1];
          piVar4 = piVar13;
          while ((piVar13 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar13[2]))) {
            cVar1 = *(char *)(piVar13[1] + 0x11);
            piVar5 = (int *)piVar13[1];
            piVar4 = piVar13;
          }
        }
      }
      local_74 = pfVar9;
    } while (piVar13 != local_64);
  }
  local_4 = 0xffffffff;
  FUN_008a56a0(local_68,&local_90,(int *)*local_64,local_64);
                    /* WARNING: Subroutine does not return */
  _free(local_64);
}


//// FUNCTION FUN_008a77f0 @ 008a77f0 ////

undefined4 *
FUN_008a77f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb551;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x20);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_008a6a50(puVar1 + 4,(int)(param_4 + 1));
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_008a7930 @ 008a7930 ////

undefined4 * FUN_008a7930(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb571;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x1c);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    FUN_008a6b00(puVar1 + 4,(int)(param_3 + 2));
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_008a79d0 @ 008a79d0 ////

undefined4 * FUN_008a79d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ceb591;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x40);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    FUN_008a6fd0(puVar1 + 2,param_3);
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_008a7a60 @ 008a7a60 ////

void __thiscall
FUN_008a7a60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ceb5a8;
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
  piVar3 = FUN_008a77f0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008a7b5b:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008a2130(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_008a08f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_008a7b5b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008a08f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_008a2130(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_008a7c10 @ 008a7c10 ////

void __fastcall FUN_008a7c10(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb60a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63d68;
  local_4 = 6;
  if (param_1[0x21] != 0) {
    _Memory = *(void **)(param_1[0x21] + 0x40);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1[0x21] + 0x40) = 0;
  }
  puVar1 = (undefined4 *)param_1[0x21];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x21] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x22]);
}


//// FUNCTION FUN_008a7db0 @ 008a7db0 ////

void __fastcall FUN_008a7db0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008a6ee0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008a7de0 @ 008a7de0 ////

int __fastcall FUN_008a7de0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008a2da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008a7e90 @ 008a7e90 ////

void __thiscall FUN_008a7e90(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_008a7a60(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_008a0cf0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_008a7a60(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008a7f50 @ 008a7f50 ////

void __thiscall FUN_008a7f50(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ceb620;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_008a79d0(param_1,*(undefined4 *)(param_1 + 4),(int)(param_2 + 2));
    FUN_008a4810(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008a8000 @ 008a8000 ////

void __thiscall FUN_008a8000(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = **(int **)((int)this + 4);
  puVar2 = FUN_008a7930(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_008a4550(this,1);
  *(undefined4 **)(iVar1 + 4) = puVar2;
  *(undefined4 **)puVar2[1] = puVar2;
  return;
}


//// FUNCTION FUN_008a8040 @ 008a8040 ////

void __thiscall FUN_008a8040(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = **(int **)((int)this + 4);
  puVar2 = FUN_008a79d0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_008a4810(this,1);
  *(undefined4 **)(iVar1 + 4) = puVar2;
  *(undefined4 **)puVar2[1] = puVar2;
  return;
}


//// FUNCTION FUN_008a80c0 @ 008a80c0 ////

undefined4 * __thiscall FUN_008a80c0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008a7a60(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_008a7a60(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_008a7a60(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_008a0cf0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          FUN_008a7a60(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_008a7a60(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_008a0d50((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x1d) != '\0') {
          FUN_008a7a60(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_008a7a60(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_008a7e90(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_008a8250 @ 008a8250 ////

void __thiscall FUN_008a8250(void *this,int param_1,int param_2,void *param_3,int *param_4)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *local_3c;
  int *local_38;
  void *local_34;
  int local_30;
  int *local_2c;
  void *local_28;
  int local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [4];
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar7 = param_4;
  pvVar5 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb638;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return;
  }
  local_24 = param_1;
  local_30 = param_2;
  this_00 = (void *)((int)this + 0xc);
  local_2c = param_4;
  local_28 = param_3;
  local_38 = param_4;
  local_34 = param_3;
  ExceptionList = &local_c;
  param_3 = this_00;
  FUN_008a32f0(this_00,(int *)&local_3c,(int *)&local_2c);
  FUN_008a32f0(this_00,(int *)&param_4,(int *)&local_38);
  piVar1 = *(int **)((int)this + 0x10);
  if (local_3c == piVar1) {
    if (param_4 == piVar1) {
      puVar6 = FUN_008a65c0(local_20,param_1,param_2,pvVar5,piVar7);
      local_4 = 0;
      FUN_008a8000(this,puVar6);
      local_4 = 0xffffffff;
      FUN_00894320((int)local_18);
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    FUN_008a6c70(this,param_4,local_38,local_34,local_30);
    ExceptionList = local_c;
    return;
  }
  if (param_4 == piVar1) {
    FUN_008a6c70(this,local_3c,local_2c,local_28,local_24);
    ExceptionList = local_c;
    return;
  }
  iVar2 = local_3c[6];
  iVar3 = param_4[6];
  if (iVar2 == iVar3) {
    FUN_008a5de0((void *)(iVar2 + 0x10),(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x14) + 4) + 8));
  }
  else {
    piVar7 = *(int **)(iVar3 + 0x14);
    param_2 = *(int *)(*piVar7 + 8);
    iVar4 = *(int *)(**(int **)(iVar2 + 0x14) + 8);
    if (iVar4 == param_2) {
      FUN_008a6e40(iVar3 + 0x10);
      FUN_008a6e10((void *)(param_4[6] + 0x10),*(int *)(param_4[6] + 0x14),
                   (void *)(local_3c[6] + 0x10));
      piVar7 = (int *)local_3c[6];
    }
    else if (iVar4 == *(int *)(piVar7[1] + 8)) {
      FUN_008a6e10((void *)(iVar3 + 0x10),(int)piVar7,(void *)(iVar2 + 0x10));
      piVar7 = (int *)local_3c[6];
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x14) + 4) + 8);
      if (iVar4 == param_2) {
        FUN_008a6e10((void *)(iVar2 + 0x10),*(int *)(iVar2 + 0x14),(void *)(iVar3 + 0x10));
        piVar7 = (int *)param_4[6];
      }
      else {
        if (iVar4 != *(int *)(piVar7[1] + 8)) goto LAB_008a84e8;
        FUN_008a6e40(iVar2 + 0x10);
        piVar7 = param_4;
        FUN_008a6e10((void *)(local_3c[6] + 0x10),*(int *)(local_3c[6] + 0x14),
                     (void *)(param_4[6] + 0x10));
        piVar7 = (int *)piVar7[6];
      }
    }
    FUN_008a5e60(this,&param_2,piVar7);
  }
LAB_008a84e8:
  pvVar5 = param_3;
  FUN_00895b50(param_3,&param_2,local_3c);
  FUN_00895b50(pvVar5,&param_2,param_4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008a8520 @ 008a8520 ////

void __thiscall
FUN_008a8520(void *this,float *param_1,float param_2,float param_3,undefined4 param_4,float *param_5
            ,float param_6,float param_7,undefined4 param_8,float param_9,float param_10,
            void *param_11)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  
  if (-1 < (int)param_9) {
    fVar5 = param_9;
    pfVar1 = (float *)FUN_008a5bb0(this,param_5,param_6,param_7,param_9);
    pfVar2 = (float *)FUN_008a5bb0(this,param_1,param_2,param_3,param_9);
    FUN_008a7160(this,pfVar2,pfVar1,fVar5);
  }
  if (-1 < (int)param_10) {
    fVar5 = param_10;
    pfVar1 = (float *)FUN_008a5bb0(this,param_1,param_2,param_3,param_10);
    pfVar2 = (float *)FUN_008a5bb0(this,param_5,param_6,param_7,param_10);
    FUN_008a7160(this,pfVar2,pfVar1,fVar5);
  }
  if (-1 < (int)param_11) {
    piVar6 = *(int **)((int)this + 0x4c);
    fVar5 = (float)-(int)param_11;
    iVar3 = FUN_008a5bb0(this,param_5,param_6,param_7,fVar5);
    iVar4 = FUN_008a5bb0(this,param_1,param_2,param_3,fVar5);
    FUN_008a8250((void *)((int)this + 0x34),iVar4,iVar3,param_11,piVar6);
  }
  return;
}


//// FUNCTION FUN_008a8640 @ 008a8640 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_008a8640(void *this,float *param_1,float param_2,float param_3,undefined4 param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,float param_9,float param_10,
            undefined4 param_11,undefined4 param_12,float param_13,float param_14,void *param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_DI;
  float10 fVar11;
  float fVar12;
  void *pvVar13;
  int *piVar14;
  float local_90;
  float local_8c;
  float *local_84;
  float local_80;
  float local_7c;
  float local_68;
  
  fVar1 = (float)param_1 - param_5;
  fVar12 = param_2 - param_6;
  fVar2 = param_9 - param_5;
  fVar3 = param_10 - param_6;
  fVar4 = (float)param_1 - param_9;
  fVar5 = param_2 - param_10;
  fVar11 = FUN_00ad1180((double)((SQRT(fVar1 * fVar1 + fVar12 * fVar12) +
                                 SQRT(fVar2 * fVar2 + fVar3 * fVar3) /
                                 SQRT(fVar4 * fVar4 + fVar5 * fVar5)) *
                                 (SQRT(fVar1 * fVar1 + fVar12 * fVar12) +
                                 SQRT(fVar2 * fVar2 + fVar3 * fVar3) /
                                 SQRT(fVar4 * fVar4 + fVar5 * fVar5)) * _DAT_00e5e834 + 0.001),
                        unaff_DI);
  local_8c = (float)((float10)1.0 / fVar11);
  if ((float10)0.125 <= (float10)1.0 / fVar11) {
    if (1.0 <= local_8c) {
      local_8c = 1.0;
    }
  }
  else {
    local_8c = 0.125;
  }
  local_80 = param_2;
  local_90 = local_8c;
  local_84 = param_1;
  local_7c = param_3;
  if (local_8c < 1.0 != (local_8c == 1.0)) {
    do {
      while( true ) {
        fVar1 = 1.0 - local_90;
        fVar12 = param_5 * fVar1 * local_90;
        fVar2 = param_6 * fVar1 * local_90;
        pfVar6 = (float *)((float)param_1 * fVar1 * fVar1 + param_9 * local_90 * local_90 +
                          fVar12 + fVar12);
        fVar1 = param_2 * fVar1 * fVar1 + param_10 * local_90 * local_90 + fVar2 + fVar2;
        if (-1 < (int)param_13) {
          fVar12 = param_13;
          pfVar7 = (float *)FUN_008a5bb0(this,pfVar6,fVar1,local_68,param_13);
          pfVar8 = (float *)FUN_008a5bb0(this,local_84,local_80,local_7c,param_13);
          FUN_008a7160(this,pfVar8,pfVar7,fVar12);
        }
        if (-1 < (int)param_14) {
          fVar12 = param_14;
          pfVar7 = (float *)FUN_008a5bb0(this,local_84,local_80,local_7c,param_14);
          pfVar8 = (float *)FUN_008a5bb0(this,pfVar6,fVar1,local_68,param_14);
          FUN_008a7160(this,pfVar8,pfVar7,fVar12);
        }
        if (-1 < (int)param_15) {
          piVar14 = *(int **)((int)this + 0x4c);
          pvVar13 = param_15;
          iVar9 = FUN_008a5bb0(this,local_84,local_80,local_7c,(float)-(int)param_15);
          iVar10 = FUN_008a5bb0(this,pfVar6,fVar1,local_68,(float)-(int)param_15);
          FUN_008a8250((void *)((int)this + 0x34),iVar10,iVar9,pvVar13,piVar14);
        }
        local_7c = local_68;
        if (local_90 == 1.0) {
          return;
        }
        local_90 = local_90 + local_8c;
        local_84 = pfVar6;
        local_80 = fVar1;
        if (local_90 <= 0.995) break;
        local_90 = 1.0;
      }
    } while (local_90 < 1.0 != (local_90 == 1.0));
  }
  return;
}


//// FUNCTION FUN_008a8a90 @ 008a8a90 ////

uint * __thiscall FUN_008a8a90(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_18 [4];
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb660;
  local_c = ExceptionList;
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x1d) == '\0') {
    puVar2 = (uint *)puVar4[1];
    do {
      if (puVar2[3] < *param_1) {
        puVar3 = (uint *)puVar2[2];
      }
      else {
        puVar3 = (uint *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  if ((puVar4 != *(uint **)((int)this + 4)) && (puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  ExceptionList = &local_c;
  local_24 = FUN_008a2bd0();
  local_20 = 0;
  local_1c = *puVar1;
  local_4 = 0;
  FUN_008a6a50(local_18,(int)local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_008a80c0(this,&param_1,puVar4,&local_1c);
  FUN_008a2e10((int)local_18);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


//// FUNCTION FUN_008a8ba0 @ 008a8ba0 ////

void __thiscall
FUN_008a8ba0(void *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != param_2) {
    FUN_008a4810(this,param_5);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - param_5;
  }
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}


//// FUNCTION FUN_008a8bf0 @ 008a8bf0 ////

void __thiscall FUN_008a8bf0(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != this) {
    puVar1 = *(undefined4 **)((int)this + 4);
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    puVar3 = (undefined4 *)*puVar1;
    puVar6 = (undefined4 *)*puVar2;
    while (puVar3 != puVar1) {
      if (puVar6 == puVar2) {
        return;
      }
      if (puVar6[4] == 0) {
        iVar8 = puVar6[0xf];
      }
      else {
        iVar8 = *(int *)(*(int *)puVar6[3] + 8);
      }
      if (puVar3[4] == 0) {
        iVar7 = puVar3[0xf];
      }
      else {
        iVar7 = *(int *)(*(int *)puVar3[3] + 8);
      }
      if (iVar8 < iVar7) {
        puVar4 = (undefined4 *)*puVar6;
        FUN_008a4810(this,1);
        *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + -1;
        *(undefined4 **)puVar6[1] = puVar4;
        *(undefined4 **)puVar4[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        uVar5 = puVar3[1];
        puVar3[1] = puVar4[1];
        puVar4[1] = puVar6[1];
        puVar6[1] = uVar5;
        puVar6 = puVar4;
      }
      else {
        puVar3 = (undefined4 *)*puVar3;
      }
    }
    if (puVar6 != puVar2) {
      FUN_008a8ba0(this,(int)puVar1,param_1,(int)puVar6,(int)puVar2,*(uint *)((int)param_1 + 8));
    }
  }
  return;
}


//// FUNCTION FUN_008a8dc0 @ 008a8dc0 ////

void __fastcall FUN_008a8dc0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *_Memory;
  int *_Memory_00;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *this;
  uint local_158;
  undefined1 local_150 [4];
  int *local_14c;
  int local_148;
  undefined1 local_144 [4];
  int local_140 [2];
  undefined1 local_138 [276];
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb691;
  local_c = ExceptionList;
  if (*(uint *)(param_1 + 8) < 2) {
    return;
  }
  ExceptionList = &local_c;
  _Memory_00 = (int *)FUN_008942b0();
  local_148 = 0;
  local_4 = 0;
  local_14c = _Memory_00;
  _eh_vector_constructor_iterator_(local_144,0xc,0x1a,FUN_008954d0,FUN_0089aed0);
  iVar1 = *(int *)(param_1 + 8);
  uVar5 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_158 = 0;
  do {
    if (iVar1 == 0) {
      if (1 < uVar5) {
        local_158 = uVar5 - 1;
        this = local_138;
        do {
          FUN_008a8bf0(this,this + -0xc);
          this = this + 0xc;
          local_158 = local_158 + -1;
        } while (local_158 != 0);
      }
      piVar6 = (&local_14c)[uVar5 * 3];
      (&local_14c)[uVar5 * 3] = *(int **)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar6;
      uVar3 = *(undefined4 *)(local_144 + uVar5 * 0xc + -4);
      *(undefined4 *)(local_144 + uVar5 * 0xc + -4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = uVar3;
      local_4 = local_4 & 0xffffff00;
      _eh_vector_destructor_iterator_(local_144,0xc,0x1a,FUN_0089aed0);
      piVar6 = (int *)*_Memory_00;
      *_Memory_00 = (int)_Memory_00;
      _Memory_00[1] = (int)_Memory_00;
      if (piVar6 == _Memory_00) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory_00);
      }
      if ((void *)piVar6[10] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar6[10]);
      }
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      piVar6[0xc] = 0;
      if ((void *)piVar6[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar6[6]);
      }
      piVar6[6] = 0;
      piVar6[7] = 0;
      piVar6[8] = 0;
      puVar4 = (undefined4 *)piVar6[3];
      _Memory = (void *)*puVar4;
      *puVar4 = puVar4;
      *(int *)(piVar6[3] + 4) = piVar6[3];
      piVar6[4] = 0;
      if (_Memory != (void *)piVar6[3]) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)piVar6[3]);
    }
    piVar6 = (int *)**(int **)(param_1 + 4);
    iVar1 = *_Memory_00;
    if (piVar6 != *(int **)(param_1 + 4)) {
      iVar2 = *piVar6;
      uVar5 = local_158;
      if (local_150 == param_1) {
        if (((int *)iVar1 == piVar6) || (iVar1 == iVar2)) goto LAB_008a8ea3;
      }
      else {
        FUN_008a4810(local_150,1);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        _Memory_00 = local_14c;
      }
      *(int *)piVar6[1] = iVar2;
      **(int **)(iVar2 + 4) = iVar1;
      **(int **)(iVar1 + 4) = (int)piVar6;
      uVar3 = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = piVar6[1];
      piVar6[1] = uVar3;
    }
LAB_008a8ea3:
    uVar7 = 0;
    if (uVar5 == 0) {
LAB_008a8f10:
      local_14c = (int *)local_140[uVar7 * 3];
      local_140[uVar7 * 3] = (int)_Memory_00;
      iVar1 = local_140[uVar7 * 3 + 1];
      local_140[uVar7 * 3 + 1] = local_148;
      local_148 = iVar1;
      if (uVar7 == uVar5) {
        uVar5 = uVar5 + 1;
        local_158 = uVar5;
      }
    }
    else {
      piVar6 = local_140 + 1;
      do {
        if (*piVar6 == 0) break;
        FUN_008a8bf0(piVar6 + -2,local_150);
        _Memory_00 = (int *)piVar6[-1];
        piVar6[-1] = (int)local_14c;
        iVar1 = *piVar6;
        *piVar6 = local_148;
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 3;
        local_14c = _Memory_00;
        local_148 = iVar1;
      } while (uVar7 < uVar5);
      if (uVar7 != 0x19) goto LAB_008a8f10;
      FUN_008a8bf0(local_24,local_150);
    }
    iVar1 = *(int *)(param_1 + 8);
    _Memory_00 = local_14c;
  } while( true );
}


//// FUNCTION FUN_008a9080 @ 008a9080 ////

void __fastcall FUN_008a9080(void *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *this;
  int iVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *this_00;
  ulonglong uVar12;
  float local_a8;
  float local_a4;
  int *local_a0;
  int *local_9c;
  int *local_98;
  undefined1 local_94 [4];
  undefined4 *local_90;
  int local_8c;
  undefined1 local_88 [4];
  int *local_84;
  undefined4 local_80;
  undefined1 *local_7c [2];
  float *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float *local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined1 auStack_44 [4];
  undefined4 *puStack_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb6ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90 = (undefined4 *)FUN_008a2d50();
  *(undefined1 *)((int)local_90 + 0x11) = 1;
  local_90[1] = local_90;
  *local_90 = local_90;
  local_90[2] = local_90;
  local_8c = 0;
  local_4 = 0;
  local_84 = (int *)FUN_008a2da0();
  *(undefined1 *)((int)local_84 + 0x1d) = 1;
  local_84[1] = (int)local_84;
  *local_84 = (int)local_84;
  local_84[2] = (int)local_84;
  local_80 = 0;
  fVar9 = *(float *)((int)param_1 + 0x1c);
  local_4._0_1_ = 1;
  if (fVar9 != *(float *)((int)param_1 + 0x20)) {
    do {
      local_a8 = fVar9;
      FUN_008a4e20(local_94,local_7c,(uint *)&local_a8);
      local_a8 = fVar9;
      this = FUN_008a8a90(local_88,(uint *)((int)fVar9 + 8));
      iVar6 = *(int *)this[1];
      iVar4 = FUN_008a2bf0(iVar6,*(undefined4 *)(iVar6 + 4),&local_a8);
      FUN_008a4970(this,1);
      *(int *)(iVar6 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      fVar9 = (float)((int)fVar9 + 0x10);
    } while (fVar9 != *(float *)((int)param_1 + 0x20));
  }
  if (local_8c != 0) {
    local_10 = 0xffffffff;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_3c = 0;
    iVar6 = ((int *)*local_90)[3];
    local_a4 = (float)iVar6;
    FUN_008a3ce0(local_94,local_7c,(int *)*local_90);
    local_a8 = *(float *)(iVar6 + 8);
    _Memory = (undefined4 *)FUN_008a29b0();
    iVar6 = **(int **)((int)param_1 + 0x2c);
    local_4._0_1_ = 4;
    puStack_40 = _Memory;
    puVar5 = FUN_008a79d0(iVar6,*(undefined4 *)(iVar6 + 4),(int)auStack_44);
    FUN_008a4810((void *)((int)param_1 + 0x28),1);
    *(undefined4 **)(iVar6 + 4) = puVar5;
    *(undefined4 **)puVar5[1] = puVar5;
    puVar5 = (undefined4 *)*_Memory;
    *_Memory = _Memory;
    local_4 = CONCAT31(local_4._1_3_,1);
    _Memory[1] = _Memory;
    if (puVar5 == _Memory) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(puVar5);
  }
  piVar7 = (int *)**(int **)((int)param_1 + 0x2c);
  if (piVar7 != *(int **)((int)param_1 + 0x2c)) {
    do {
      FUN_0086ed00((int)(piVar7 + 2));
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)param_1 + 0x2c));
  }
  this_00 = (undefined1 *)((int)param_1 + 0x28);
  local_7c[0] = this_00;
  FUN_008a7090(this_00,&LAB_008a14a0);
  piVar7 = *(int **)((int)param_1 + 0x2c);
  piVar10 = (int *)*piVar7;
  if (piVar10 != piVar7) {
    do {
      if (((float)piVar10[0xe] < 0.0) && (piVar8 = *(int **)piVar10[3], piVar8 != (int *)piVar10[3])
         ) {
        do {
          piVar11 = (int *)*piVar7;
          local_a4 = -1.0;
          local_98 = (int *)0x0;
          local_a0 = (int *)0x0;
          local_74 = (float *)0x0;
          local_70 = 0.0;
          local_68 = 0.0;
          if (piVar11 != piVar7) {
            do {
              if (((float)piVar11[0xe] != 0.0) && (piVar11[4] != 0)) {
                pfVar1 = (float *)piVar8[5];
                pfVar2 = (float *)piVar8[4];
                local_54 = pfVar1[1] - pfVar2[1];
                local_50 = -(*pfVar1 - *pfVar2);
                local_58 = 0;
                local_9c = (int *)0x0;
                local_64 = (float *)0x0;
                local_60 = 0.0;
                uVar12 = FUN_0086eb40((int)(piVar11 + 2),pfVar1[3],pfVar2);
                if (((char)uVar12 != '\0') && ((local_a8 < local_a4 || (local_a4 < 0.0)))) {
                  local_a4 = local_a8;
                  local_74 = local_64;
                  local_98 = local_9c;
                  local_70 = local_60;
                  local_68 = pfVar2[3];
                  local_6c = local_5c;
                  local_a0 = piVar11;
                }
              }
              piVar3 = local_a0;
              piVar11 = (int *)*piVar11;
              piVar7 = *(int **)((int)param_1 + 0x2c);
            } while (piVar11 != piVar7);
            if ((0.0 <= local_a4) && (local_a0 != piVar10)) {
              iVar6 = FUN_008a5bb0(param_1,local_74,local_70,local_6c,local_68);
              FUN_008703c0(piVar3 + 2,local_98,iVar6,piVar10 + 2,piVar8);
              break;
            }
          }
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)piVar10[3]);
      }
      piVar10 = (int *)*piVar10;
      piVar7 = *(int **)((int)param_1 + 0x2c);
      this_00 = local_7c[0];
    } while (piVar10 != piVar7);
  }
  FUN_008a7090(this_00,&LAB_008a1460);
  FUN_008a8dc0(this_00);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_008a6ee0(local_88,local_7c,(int *)*local_84,local_84);
                    /* WARNING: Subroutine does not return */
  _free(local_84);
}


//// FUNCTION FUN_008a9700 @ 008a9700 ////

void __thiscall FUN_008a9700(void *this,undefined4 param_1,void *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int *piVar15;
  void *pvVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float *pfVar20;
  undefined1 *puVar21;
  float *pfVar22;
  float *pfVar23;
  int *piVar24;
  float *pfVar25;
  undefined4 *puVar26;
  float10 fVar27;
  float10 fVar28;
  void *in_stack_00000018;
  int *piStack_110;
  int *piStack_100;
  undefined4 *puStack_f4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_9a;
  undefined1 auStack_44 [56];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ceb714;
  pvStack_c = ExceptionList;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x84) == 0) {
    ExceptionList = &pvStack_c;
    FUN_008a9080(this);
    FUN_008a39c0((int)this);
    piVar24 = (int *)**(int **)((int)this + 0x2c);
    if (piVar24 != *(int **)((int)this + 0x2c)) {
      do {
        FUN_00870110((int)(piVar24 + 2));
        piVar24 = (int *)*piVar24;
      } while (piVar24 != (int *)*(int *)((int)this + 0x2c));
    }
    iVar11 = *(int *)((int)this + 0x4c) + 1;
    *(int *)((int)this + 0x4c) = iVar11;
    iVar12 = FUN_008a66d0(auStack_44,iVar11);
    iVar11 = *(int *)((int)this + 0x2c);
    local_4 = 2;
    puVar13 = FUN_008a79d0(iVar11,*(undefined4 *)(iVar11 + 4),iVar12);
    FUN_008a4810((void *)((int)this + 0x28),1);
    *(undefined4 **)(iVar11 + 4) = puVar13;
    *(undefined4 **)puVar13[1] = puVar13;
    local_4 = 1;
    FUN_00895a90((int)auStack_44);
    iVar11 = 0;
    iVar12 = 0;
    for (puVar13 = (undefined4 *)**(undefined4 **)((int)this + 0x2c);
        puVar13 != *(undefined4 **)((int)this + 0x2c); puVar13 = (undefined4 *)*puVar13) {
      iVar12 = iVar12 + puVar13[4];
      if (puVar13[6] == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = (int)(puVar13[7] - puVar13[6]) >> 4;
      }
      iVar11 = iVar11 + iVar17;
    }
    for (puVar13 = (undefined4 *)**(undefined4 **)((int)this + 0x38);
        puVar13 != *(undefined4 **)((int)this + 0x38); puVar13 = (undefined4 *)*puVar13) {
      uVar5 = puVar13[6];
      iVar17 = 0;
      iVar18 = 0;
      if (1 < uVar5) {
        iVar18 = uVar5 * 2;
        iVar17 = uVar5 * 2 + -2;
      }
      iVar12 = iVar12 + iVar18;
      iVar11 = iVar11 + iVar17;
    }
    if ((iVar12 != 0) && (iVar11 != 0)) {
      puVar13 = operator_new(0x44);
      iVar17 = 0;
      local_4 = 3;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        FUN_00999750(puVar13);
        puVar13[0xc] = puVar13[0xc] & 0xfffffffc;
        *puVar13 = &PTR_FUN_00d1a780;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xf] = 0;
        puVar13[0xe] = 0;
        puVar13[0xd] = 0;
        puVar13[0x10] = 0;
        puVar13[0xc] = puVar13[0xc] & 0xfffffffb | 8;
      }
      *(undefined4 **)((int)this + 0x84) = puVar13;
      local_4 = 1;
      puVar13[0xc] = puVar13[0xc] & 0xfffffff7;
      puVar13 = operator_new(0x24);
      local_4 = 4;
      if (puVar13 == (undefined4 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_009910f0(puVar13);
      }
      *(undefined4 *)(*(int *)((int)this + 0x84) + 0x40) = uVar14;
      *(undefined1 *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0xc) = 6;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xbfffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 | 0x80000000;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x14);
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xf7ffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xefffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 & 0xfeffffff;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x84) + 0x40) + 0x10);
      *puVar1 = *puVar1 | 0x2000000;
      pvVar16 = *(void **)(*(int *)((int)this + 0x84) + 0x40);
      local_4 = 1;
      if (*(int *)((int)pvVar16 + 0x18) != 0) {
        Engine_SetResourceReference(pvVar16,0);
      }
      FUN_009e6720(*(void **)((int)this + 0x84),iVar12,iVar11);
      puStack_f4 = *(undefined4 **)(*(int *)((int)this + 0x84) + 0x2c);
      pfVar23 = *(float **)(*(int *)((int)this + 0x84) + 0x28);
      piVar24 = (int *)**(int **)((int)this + 0x2c);
      if (piVar24 != *(int **)((int)this + 0x2c)) {
        do {
          piStack_110 = (int *)**(int **)((int)this + 0x38);
          if (piStack_110 != *(int **)((int)this + 0x38)) {
            do {
              if (piVar24[4] == 0) {
                iVar11 = piVar24[0xf];
              }
              else {
                iVar11 = *(int *)(*(int *)piVar24[3] + 8);
              }
              if (piStack_110[3] < iVar11) {
                piVar15 = (int *)((int)in_stack_00000018 + piStack_110[2] * 8);
                iVar12 = *piVar15 / 2;
                puVar13 = *(undefined4 **)piStack_110[5];
                fVar7 = (float)iVar12;
                pfVar20 = (float *)puVar13[2];
                piStack_100 = (int *)*puVar13;
                fVar19 = (float)(piVar15[1] | 0xff000000);
                iVar11 = iVar17;
                pfVar22 = pfVar23;
                pfVar25 = pfVar20;
                if (piStack_100 != (int *)piStack_110[5]) {
                  do {
                    pfVar6 = (float *)piStack_100[2];
                    fVar8 = *pfVar6 - *pfVar25;
                    fVar2 = pfVar6[1] - pfVar25[1];
                    fVar9 = fVar7 / SQRT(fVar2 * fVar2 + fVar8 * fVar8);
                    fVar8 = fVar9 * fVar8;
                    fVar9 = -(fVar9 * fVar2);
                    fStack_e0 = fVar9;
                    fStack_dc = fVar8;
                    if (pfVar20 != pfVar25) {
                      fStack_dc = *pfVar25 - *pfVar20;
                      fVar2 = pfVar25[1] - pfVar20[1];
                      fVar3 = fVar7 / SQRT(fVar2 * fVar2 + fStack_dc * fStack_dc);
                      fStack_dc = fVar3 * fStack_dc;
                      fStack_e0 = -(fVar3 * fVar2);
                    }
                    fVar27 = (float10)FUN_00ad1010();
                    fVar27 = fVar27 * (float10)0.5;
                    if ((float10)0.0 <= fVar27) {
                      if ((float10)1.0471976 < fVar27) {
                        fVar27 = (float10)1.0471976;
                      }
                    }
                    else {
                      fVar27 = (float10)0.0;
                    }
                    fStack_e0 = fStack_e0 + fVar9;
                    pfVar23 = pfVar22 + 0xc;
                    fStack_dc = fStack_dc + fVar8;
                    fVar27 = (float10)fcos(fVar27);
                    fVar28 = (((float10)1.0 / fVar27) * (float10)iVar12) /
                             SQRT((float10)fStack_dc * (float10)fStack_dc +
                                  (float10)fStack_e0 * (float10)fStack_e0);
                    fVar27 = (float10)fStack_e0 * fVar28;
                    fVar2 = (float)((float10)fStack_dc * fVar28);
                    fVar3 = pfVar25[1];
                    *pfVar22 = (float)(fVar27 + (float10)*pfVar25);
                    pfVar22[1] = fVar2 + fVar3;
                    pfVar22[2] = 1.0;
                    pfVar22[5] = 0.0;
                    pfVar22[4] = 0.0;
                    pfVar22[3] = fVar19;
                    fVar3 = pfVar25[1];
                    pfVar22[6] = (float)((float10)*pfVar25 - fVar27);
                    pfVar22[0xb] = 0.0;
                    pfVar22[10] = 0.0;
                    pfVar22[7] = fVar3 - fVar2;
                    pfVar22[8] = 1.0;
                    pfVar22[9] = fVar19;
                    iVar17 = iVar11 + 2;
                    sVar10 = (short)iVar11;
                    *puStack_f4 = CONCAT22(sVar10 + 3,sVar10);
                    *(short *)(puStack_f4 + 1) = sVar10 + 1;
                    *(uint *)((int)puStack_f4 + 6) = CONCAT22(sVar10,sVar10 + 3);
                    puVar13 = puStack_f4 + 3;
                    *(short *)((int)puStack_f4 + 10) = (short)iVar17;
                    piStack_100 = (int *)*piStack_100;
                    if (piStack_100 == (int *)piStack_110[5]) {
                      pfVar23 = pfVar22 + 0x18;
                      fVar2 = pfVar6[1];
                      pfVar22[0xc] = fVar9 + *pfVar6;
                      pfVar22[0x11] = 0.0;
                      pfVar22[0x10] = 0.0;
                      pfVar22[0xf] = fVar19;
                      pfVar22[0xe] = 1.0;
                      pfVar22[0xd] = fVar8 + fVar2;
                      fVar2 = pfVar6[1];
                      pfVar22[0x12] = *pfVar6 - fVar9;
                      pfVar22[0x17] = 0.0;
                      pfVar22[0x16] = 0.0;
                      pfVar22[0x13] = fVar2 - fVar8;
                      pfVar22[0x14] = 1.0;
                      pfVar22[0x15] = fVar19;
                      iVar17 = iVar11 + 4;
                    }
                    pfVar20 = pfVar25;
                    iVar11 = iVar17;
                    pfVar22 = pfVar23;
                    pfVar25 = pfVar6;
                    puStack_f4 = puVar13;
                  } while (piStack_100 != (int *)piStack_110[5]);
                }
                piVar15 = (int *)*piStack_110;
                if (piStack_110 != *(int **)((int)this + 0x38)) {
                  *(int **)piStack_110[1] = (int *)*piStack_110;
                  *(int *)(*piStack_110 + 4) = piStack_110[1];
                  puVar13 = (undefined4 *)piStack_110[5];
                  pvVar16 = (void *)*puVar13;
                  *puVar13 = puVar13;
                  *(int *)(piStack_110[5] + 4) = piStack_110[5];
                  piStack_110[6] = 0;
                  if (pvVar16 == (void *)piStack_110[5]) {
                    /* WARNING: Subroutine does not return */
                    _free((void *)piStack_110[5]);
                  }
                    /* WARNING: Subroutine does not return */
                  _free(pvVar16);
                }
              }
              else {
                piVar15 = (int *)*piStack_110;
              }
              piStack_110 = piVar15;
            } while (piStack_110 != *(int **)((int)this + 0x38));
          }
          FUN_0040f4c0(piVar24 + 9,*(uint *)((int)this + 0x14));
          piVar15 = *(int **)piVar24[3];
          if (piVar15 != (int *)piVar24[3]) {
            do {
              pfVar20 = (float *)piVar15[4];
              *pfVar23 = *pfVar20;
              pfVar23[1] = pfVar20[1];
              pfVar23[2] = 1.0;
              iVar11 = _rand();
              iVar12 = _rand();
              pfVar23[3] = (float)(iVar11 * iVar12 | 0xff000000);
              if (-1 < piVar15[3]) {
                FUN_0086deb0((void *)(piVar15[3] * 0x68 + (int)param_2),*pfVar20,pfVar20[1],
                             pfVar20[2],pfVar20[3],1.0,1.0,(int)pfVar23);
              }
              if ((float)piVar24[0xe] < 0.0) {
                pfVar23[3] = -NAN;
              }
              *(int *)(piVar24[10] + *(int *)(piVar15[4] + 8) * 4) = iVar17;
              piVar15 = (int *)*piVar15;
              pfVar23 = pfVar23 + 6;
              iVar17 = iVar17 + 1;
            } while (piVar15 != (int *)piVar24[3]);
          }
          piVar15 = (int *)piVar24[6];
          if (piVar15 != (int *)piVar24[7]) {
            do {
              iVar11 = piVar24[10];
              uVar4 = *(undefined2 *)(iVar11 + *(int *)(piVar15[2] + 8) * 4);
              uStack_9a = CONCAT22(*(undefined2 *)(iVar11 + *(int *)(*piVar15 + 8) * 4),
                                   *(undefined2 *)(iVar11 + *(int *)(piVar15[1] + 8) * 4));
              *puStack_f4 = uStack_9a;
              *(undefined2 *)(puStack_f4 + 1) = uVar4;
              puStack_f4 = (undefined4 *)((int)puStack_f4 + 6);
              piVar15 = piVar15 + 4;
            } while (piVar15 != (int *)piVar24[7]);
          }
          piVar24 = (int *)*piVar24;
        } while (piVar24 != (int *)*(int *)((int)this + 0x2c));
      }
      iVar11 = *(int *)(*(int *)((int)this + 0x84) + 0x18);
      pvVar16 = operator_new(iVar11 * 0x18);
      if (pvVar16 == (void *)0x0) {
        pvVar16 = (void *)0x0;
      }
      else if (-1 < iVar11 + -1) {
        puVar21 = (undefined1 *)((int)pvVar16 + 0xe);
        do {
          puVar21[-2] = 0xff;
          puVar21[-1] = 0xff;
          *puVar21 = 0xff;
          puVar21[1] = 0xff;
          *(undefined4 *)(puVar21 + -2) = 0xffffffff;
          *(undefined4 *)(puVar21 + -6) = 0;
          *(undefined4 *)(puVar21 + -10) = 0;
          *(undefined4 *)(puVar21 + -0xe) = 0;
          *(undefined4 *)(puVar21 + -2) = 0xffffffff;
          *(undefined4 *)(puVar21 + 6) = 0;
          *(undefined4 *)(puVar21 + 2) = 0;
          puVar21 = puVar21 + 0x18;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(void **)((int)this + 0x88) = pvVar16;
      iVar11 = 0;
      if (0 < *(int *)(*(int *)((int)this + 0x84) + 0x18)) {
        iVar12 = 0;
        do {
          puVar13 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x84) + 0x28) + iVar12);
          puVar26 = (undefined4 *)(*(int *)((int)this + 0x88) + iVar12);
          *puVar26 = *puVar13;
          puVar26[1] = puVar13[1];
          puVar26[2] = puVar13[2];
          puVar26[3] = puVar13[3];
          puVar26[4] = puVar13[4];
          puVar26[5] = puVar13[5];
          iVar11 = iVar11 + 1;
          iVar12 = iVar12 + 0x18;
        } while (iVar11 < *(int *)(*(int *)((int)this + 0x84) + 0x18));
      }
    }
  }
  if (param_2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  if (in_stack_00000018 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000018);
}


//// FUNCTION FUN_008aa110 @ 008aa110 ////

undefined4 * __thiscall FUN_008aa110(void *this,undefined4 param_1)

{
  FUN_00890290(this);
  *(undefined4 *)((int)this + 0x160) = param_1;
  *(undefined ***)this = &PTR_FUN_00d640dc;
  return this;
}


//// FUNCTION FUN_008aa130 @ 008aa130 ////

undefined4 * __thiscall FUN_008aa130(void *this,undefined4 param_1)

{
  FUN_00890290(this);
  *(undefined4 *)((int)this + 0x160) = param_1;
  *(undefined ***)this = &PTR_FUN_00d640f8;
  return this;
}


//// FUNCTION FUN_008aa1a0 @ 008aa1a0 ////

undefined4 * __fastcall FUN_008aa1a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb72b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x164);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00890290(puVar1);
    *puVar1 = &PTR_FUN_00d640dc;
    puVar1[0x58] = param_1;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008aa200 @ 008aa200 ////

undefined4 * __fastcall FUN_008aa200(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb74b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x164);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00890290(puVar1);
    *puVar1 = &PTR_FUN_00d640f8;
    puVar1[0x58] = param_1;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008aa2b0 @ 008aa2b0 ////

undefined4 * __thiscall FUN_008aa2b0(void *this,byte param_1)

{
  thunk_FUN_008902f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008aa2e0 @ 008aa2e0 ////

undefined4 * __thiscall FUN_008aa2e0(void *this,byte param_1)

{
  thunk_FUN_008902f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008aa310 @ 008aa310 ////

float10 __cdecl FUN_008aa310(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float local_4;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  local_4 = 0.0;
  if (uVar1 != 0) {
    do {
      fVar3 = FUN_009a7d30(param_2,(uint)*(ushort *)(*param_1 + uVar2 * 2));
      uVar2 = uVar2 + 1;
      local_4 = (float)(fVar3 + (float10)local_4);
    } while (uVar2 < uVar1);
  }
  return (float10)local_4;
}


//// FUNCTION FUN_008aa400 @ 008aa400 ////

void __fastcall FUN_008aa400(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_008aa310((int *)(param_1 + 0x4c),*(undefined4 **)(param_1 + 0x24));
  fVar2 = FUN_008aa310((int *)(param_1 + 0x6c),*(undefined4 **)(param_1 + 0x24));
  *(float *)(param_1 + 0x34) = (float)(fVar2 * (float10)0.5 - (float10)(float)fVar1 * (float10)0.5);
  return;
}


//// FUNCTION FUN_008aa470 @ 008aa470 ////

void __fastcall FUN_008aa470(int param_1)

{
  ushort uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) != 0) {
      fVar2 = FUN_008aa310((int *)(param_1 + 0x4c),*(undefined4 **)(param_1 + 0x24));
      fVar3 = FUN_008aa310((int *)(param_1 + 0x6c),*(undefined4 **)(param_1 + 0x24));
      *(float *)(param_1 + 0x34) = (float)(fVar3 - (float10)(float)fVar2);
      return;
    }
    if ((uVar1 & 4) != 0) {
      FUN_008aa400(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


//// FUNCTION FUN_008aa540 @ 008aa540 ////

float10 __thiscall FUN_008aa540(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  void *this;
  int *piVar2;
  ulonglong uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb76b;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x34) + 0xfd) != '\0') {
    param_4 = param_4 / ((1.0 / (float)*(int *)(*(int *)(param_1 + 0x34) + 0xa8)) * 65536.0);
    ExceptionList = &local_c;
    uVar3 = FUN_00acd42c();
    piVar2 = *(int **)(param_3 + 0x14);
    *(int *)(param_3 + 0x2c) = (int)uVar3;
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[1];
      piVar2[1] = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        FUN_009a7db0(piVar2);
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      *(undefined4 *)(param_3 + 0x14) = 0;
    }
    this = operator_new(0x7c);
    local_4 = 0;
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_009a8a00(this,*(char **)(*(int *)(param_2 + 0x10) + 0xc),(int)uVar3,0,-0x1000000)
      ;
    }
    *(int **)(param_3 + 0x14) = piVar2;
    *(int **)(param_3 + 0x1c) = piVar2;
    *(int **)(param_2 + 0x1c) = piVar2;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
  }
  ExceptionList = local_c;
  return (float10)param_4;
}


//// FUNCTION FUN_008aa630 @ 008aa630 ////

void __fastcall FUN_008aa630(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  ulonglong uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb796;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0xfd) != '\0') {
    ExceptionList = &local_c;
    uVar4 = FUN_00acd42c();
    piVar3 = *(int **)(param_1 + 0x24);
    *(short *)(param_1 + 0x2a) = (short)uVar4;
    if (piVar3 != (int *)0x0) {
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        FUN_009a7db0(piVar3);
                    /* WARNING: Subroutine does not return */
        _free(piVar3);
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if ((*(byte *)(param_1 + 0x44) & 2) != 0) {
      pvVar2 = operator_new(0x7c);
      local_4 = 0;
      if (pvVar2 != (void *)0x0) {
        piVar3 = FUN_009a8a00(pvVar2,*(char **)(*(int *)(param_1 + 0x20) + 0xc),
                              (uint)*(ushort *)(param_1 + 0x2a),0,0);
        *(int **)(param_1 + 0x24) = piVar3;
        *(undefined1 *)((int)piVar3 + 0xf) = 0;
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      uRam0000000f = 0;
      ExceptionList = local_c;
      return;
    }
    pvVar2 = operator_new(0x7c);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      piVar3 = FUN_009a8a00(pvVar2,*(char **)(*(int *)(param_1 + 0x20) + 0xc),
                            (uint)*(ushort *)(param_1 + 0x2a),0,-0x1000000);
      *(int **)(param_1 + 0x24) = piVar3;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008aa7a0 @ 008aa7a0 ////

void __fastcall FUN_008aa7a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_009ac940(local_2c,(undefined4 *)(param_1 + 0x1c));
  local_4 = 0;
  piVar2 = (int *)FUN_0087b0c0(*(void **)(DAT_010501a0 + 0x178),puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (piVar2 != (int *)0x0) {
    *(char *)(param_1 + 0x3c) = (char)piVar2[1];
    FUN_004036d0((undefined4 *)(param_1 + 0x1c),*(wchar_t **)*piVar2,((undefined4 *)*piVar2)[1]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008aa830 @ 008aa830 ////

void __fastcall FUN_008aa830(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb7c8;
  local_c = ExceptionList;
  if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(param_1 + 0x6c);
    ExceptionList = &local_c;
    puVar2 = FUN_009ac940(local_2c,puVar1);
    local_4 = 0;
    piVar3 = (int *)FUN_0087b0c0(*(void **)(*(int *)(param_1 + 0x1c) + 0x178),puVar2);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (piVar3 == (int *)0x0) {
      *(undefined4 **)(param_1 + 0x48) = puVar1;
      FUN_004036d0((void *)(param_1 + 0x4c),(wchar_t *)*puVar1,*(uint *)(param_1 + 0x70));
    }
    else {
      *(char *)(param_1 + 0x8c) = (char)piVar3[1];
      puVar1 = (undefined4 *)*piVar3;
      *(undefined4 **)(param_1 + 0x48) = puVar1;
      FUN_004036d0((void *)(param_1 + 0x4c),(wchar_t *)*puVar1,puVar1[1]);
      *(int *)(param_1 + 0x90) = piVar3[2];
    }
  }
  else {
    ExceptionList = &local_c;
    iVar4 = _wcscmp(*(wchar_t **)(param_1 + 0x4c),(wchar_t *)**(undefined4 **)(param_1 + 0x48));
    FUN_004036d0((void *)(param_1 + 0x4c),(wchar_t *)**(undefined4 **)(param_1 + 0x48),
                 (*(undefined4 **)(param_1 + 0x48))[1]);
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  FUN_008aa470(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008aa940 @ 008aa940 ////

void __fastcall FUN_008aa940(int param_1)

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


//// FUNCTION FUN_008aa9a0 @ 008aa9a0 ////

/* WARNING: Removing unreachable block (ram,0x008aaab3) */
/* WARNING: Removing unreachable block (ram,0x008aaaca) */
/* WARNING: Removing unreachable block (ram,0x008aaae1) */

void __thiscall FUN_008aa9a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *_Source;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *_Source_00;
  uint uVar6;
  void *pvVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 local_188;
  int local_180;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  undefined **local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  wchar_t *local_128;
  uint local_124;
  uint local_120;
  wchar_t local_11c [10];
  float local_108;
  float local_104;
  int local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_bc [4];
  int local_ac;
  int local_a8;
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb806;
  local_c = ExceptionList;
  local_158 = 0x80;
  local_15c = &PTR_FUN_00d6375c;
  local_150 = 0;
  local_13c = 0;
  local_130 = 0;
  local_12c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_14c = 0;
  local_154 = 1;
  local_4 = 0;
  local_138 = 0;
  local_134 = 0;
  local_178 = 0xffffffff;
  iVar10 = 0;
  ExceptionList = &local_c;
  do {
    while( true ) {
      if (*(int *)((int)this + 0x3c) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
      }
      if (iVar4 <= iVar10) {
        local_4 = 0xffffffff;
        FUN_00871b70(&local_15c);
        ExceptionList = local_c;
        return;
      }
      iVar4 = *(int *)(iVar10 * 4 + *(int *)((int)this + 0x3c));
      if (*(char *)(iVar4 + 4) < '\0') break;
      iVar4 = *(int *)(iVar10 * 4 + *(int *)((int)this + 0x3c));
      if (*(int *)(iVar4 + 0x20) == 0) {
        if (*(int *)(iVar4 + 0x10) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2;
        }
        _Source_00 = operator_new((uVar5 & 0xfffffffe) + 2);
        iVar10 = 0;
        for (uVar5 = 0;
            (iVar1 = *(int *)(iVar4 + 0x10), iVar1 != 0 &&
            (uVar5 < (uint)(*(int *)(iVar4 + 0x14) - iVar1 >> 2))); uVar5 = uVar5 + 2) {
          _Source_00[iVar10] =
               *(wchar_t *)(*(int *)(local_14c + 0x20) + *(int *)(iVar1 + uVar5 * 4) * 4);
          iVar10 = iVar10 + 1;
        }
        local_128 = local_11c;
        _Source_00[iVar10] = L'\0';
        local_11c[0] = L'\0';
        local_124 = 0;
        local_120 = 10;
        uVar5 = FUN_00ace02d(_Source_00);
        if (local_120 <= uVar5) {
          if (10 < local_120) {
                    /* WARNING: Subroutine does not return */
            _free(local_128);
          }
          uVar6 = uVar5 + 0x20 >> 5;
          local_120 = uVar6 << 5;
          local_128 = _malloc(uVar6 * 0x40);
        }
        _wcsncpy(local_128,_Source_00,uVar5);
        _Source = local_128;
        local_128[uVar5] = L'\0';
        piVar13 = (int *)(iVar4 + 0x1c);
        local_124 = uVar5;
        if (*(uint *)(iVar4 + 0x24) <= uVar5) {
          if (10 < *(uint *)(iVar4 + 0x24)) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar13);
          }
          uVar6 = uVar5 + 0x20 & 0xffffffe0;
          *(uint *)(iVar4 + 0x24) = uVar6;
          pvVar7 = _malloc(uVar6 * 2);
          *piVar13 = (int)pvVar7;
        }
        _wcsncpy((wchar_t *)*piVar13,_Source,uVar5);
        *(uint *)(iVar4 + 0x20) = uVar5;
        *(undefined2 *)(*piVar13 + uVar5 * 2) = 0;
        if (local_120 < 0xb) {
                    /* WARNING: Subroutine does not return */
          _free(_Source_00);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_128);
      }
      if (*(char *)(iVar4 + 0x3c) != '\0') {
        FUN_008aa7a0(iVar4);
      }
      local_174 = *(int *)((int)this + 0x1c);
      local_170 = *(undefined4 *)((int)this + 0x20);
      local_16c = *(undefined4 *)((int)this + 0x24);
      local_168 = *(undefined4 *)((int)this + 0x28);
      iVar1 = *(int *)((int)this + 0x2c);
      iVar2 = *(int *)((int)this + 0x30);
      uVar11 = FUN_00acd42c();
      local_174 = (int)uVar11;
      uVar11 = FUN_00acd42c();
      local_170 = (undefined4)uVar11;
      uVar11 = FUN_00acd42c();
      local_16c = (undefined4)uVar11;
      uVar11 = FUN_00acd42c();
      local_168 = (undefined4)uVar11;
      piVar13 = &local_174;
      local_164 = iVar1 + local_138;
      piVar12 = local_bc;
      local_160 = iVar2 + local_134;
      pvVar7 = (void *)FUN_0086ddb0(&DAT_00e5e7e4,local_24,param_1);
      FUN_0086ddb0(pvVar7,piVar12,piVar13);
      iVar4 = *(int *)(iVar4 + 0x1c);
      local_dc = 0xffffffff;
      local_104 = (float)local_a8 * 0.05 - (float)local_130;
      local_108 = (float)*(int *)(local_180 + 0x30) + (float)local_ac * 0.05;
      FUN_009a8100(&local_e0);
      local_d8 = local_108;
      local_dc = local_178;
      local_d4 = local_104;
      local_d0 = 0;
      local_cc = local_140;
      local_e0 = iVar4;
      FUN_009a85a0(&local_e0);
LAB_008aafe4:
      iVar10 = iVar10 + 1;
    }
    if ((*(byte *)(iVar4 + 4) & 8) != 0) {
      local_150 = *(undefined4 *)(iVar4 + 0xc);
      local_130 = *(int *)(iVar4 + 0x2c);
      local_14c = *(int *)(iVar4 + 0x10);
      local_140 = *(undefined4 *)(iVar4 + 0x1c);
      local_180 = iVar4;
    }
    if ((*(byte *)(iVar4 + 4) & 4) != 0) {
      local_13c = *(uint *)(iVar4 + 0x20);
      uVar8 = (undefined1)(local_13c >> 0x10);
      uVar9 = (undefined1)(local_13c >> 8);
      uVar3 = (undefined1)local_13c;
      if (0xff < (local_13c >> 0x10 & 0xff)) {
        uVar8 = 0xff;
      }
      if (0xff < (local_13c >> 8 & 0xff)) {
        uVar9 = 0xff;
      }
      if (0xff < (local_13c & 0xff)) {
        uVar3 = 0xff;
      }
      local_188 = CONCAT31(CONCAT21(CONCAT11(0xff,uVar8),uVar9),uVar3);
      local_178 = local_188;
    }
    if ((*(byte *)(iVar4 + 4) & 2) != 0) {
      local_134 = *(int *)(iVar4 + 0x28);
    }
    if ((*(byte *)(iVar4 + 4) & 1) == 0) goto LAB_008aafe4;
    local_138 = *(int *)(iVar4 + 0x24);
    iVar10 = iVar10 + 1;
  } while( true );
}


//// FUNCTION FUN_008ab0b0 @ 008ab0b0 ////

void __fastcall FUN_008ab0b0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb81b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x20));
}


//// FUNCTION FUN_008ab1d0 @ 008ab1d0 ////

void __thiscall FUN_008ab1d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return;
}


//// FUNCTION FUN_008ab570 @ 008ab570 ////

void __fastcall FUN_008ab570(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return;
}


//// FUNCTION FUN_008ab580 @ 008ab580 ////

void __fastcall FUN_008ab580(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  return;
}


//// FUNCTION FUN_008ab660 @ 008ab660 ////

void __fastcall FUN_008ab660(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d64118;
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


//// FUNCTION FUN_008ab6b0 @ 008ab6b0 ////

void __fastcall FUN_008ab6b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb8d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64128;
  puVar2 = (undefined4 *)param_1[0x2a];
  local_4 = 6;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x25] + 4))();
    param_1[0x2a] = 0;
    (**(code **)param_1[0x25])();
  }
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  (**(code **)(param_1[0x2b] + 4))();
  param_1[0x30] = 0;
  (**(code **)param_1[0x2b])();
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
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x17] = param_1[0x16];
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1[0x16] + 4) = param_1[0x17];
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x2b] = &PTR_LAB_00d64118;
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
  param_1[0x25] = &PTR_FUN_00d166dc;
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
  if (0x14 < (uint)param_1[0x1f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1d]);
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x17] = param_1[0x16];
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1[0x16] + 4) = param_1[0x17];
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
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
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008ab8e0 @ 008ab8e0 ////

undefined4 * __thiscall FUN_008ab8e0(void *this,byte param_1)

{
  FUN_008ab6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ab900 @ 008ab900 ////

undefined4 * __fastcall FUN_008ab900(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceb930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d64128;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = param_1 + 0x20;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x14;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_1 + 0x25;
  param_1[0x25] = &PTR_FUN_00d166dc;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_LAB_00d64118;
  param_1[0x30] = 0;
  local_4 = 6;
  *(undefined1 *)(param_1 + 0x31) = 1;
  param_1[0x10] = param_1;
  FUN_00acdb9e(0xe5e8b4);
  iVar1 = FUN_0097dda0();
  param_1[0x11] = iVar1;
  if (DAT_00e5e8b0 != '\0') {
    iVar1 = 0x38;
    pcVar3 = "MetaLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5e8b4);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e5e8b0 = '\0';
  }
  param_1[0x14] = param_1;
  FUN_00acdb9e(0xe5e8b4);
  iVar1 = FUN_0097dda0();
  param_1[0x15] = iVar1;
  if (s___AV__CP_VAISliderTable_TM___TM__00e5e88c[0x23] != '\0') {
    iVar1 = 0x48;
    pcVar3 = "SecondMetaLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5e8b4);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__CP_VAISliderTable_TM___TM__00e5e88c[0x23] = '\0';
  }
  param_1[0x18] = param_1;
  FUN_00acdb9e(0xe5e8b4);
  iVar1 = FUN_0097dda0();
  param_1[0x19] = iVar1;
  if (s___AV__CP_VAISliderTable_TM___TM__00e5e88c[0x22] != '\0') {
    iVar1 = 0x58;
    pcVar3 = "QueueLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5e8b4);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__CP_VAISliderTable_TM___TM__00e5e88c[0x22] = '\0';
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008abae0 @ 008abae0 ////

int * __thiscall FUN_008abae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008abb60 @ 008abb60 ////

int __fastcall FUN_008abb60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_008abd50 @ 008abd50 ////

void __cdecl FUN_008abd50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008abe40 @ 008abe40 ////

void __fastcall FUN_008abe40(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_008abe50 @ 008abe50 ////

void __fastcall FUN_008abe50(int param_1)

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


//// FUNCTION FUN_008ac020 @ 008ac020 ////

void __cdecl FUN_008ac020(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008ac0a0 @ 008ac0a0 ////

undefined4 * __thiscall FUN_008ac0a0(void *this,byte param_1)

{
  FUN_008abe40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ac150 @ 008ac150 ////

void __fastcall FUN_008ac150(int param_1)

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


//// FUNCTION FUN_008ac170 @ 008ac170 ////

void __fastcall FUN_008ac170(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6416c;
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


//// FUNCTION FUN_008ac1d0 @ 008ac1d0 ////

undefined4 * __thiscall FUN_008ac1d0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_008ac230 @ 008ac230 ////

void * FUN_008ac230(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_008ac290 @ 008ac290 ////

int * __cdecl FUN_008ac290(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_008ac360 @ 008ac360 ////

void __thiscall FUN_008ac360(void *this,int *param_1,float param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  char *_Dest;
  void *pvVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *this_00;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 *puVar12;
  char **ppcVar13;
  float fVar14;
  int *local_13c;
  uint local_124;
  char local_120 [20];
  char *local_10c;
  uint local_108;
  uint local_104;
  char local_100 [20];
  char *local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_e0 [20];
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  byte *local_8c;
  undefined4 local_88;
  uint local_84;
  byte local_80 [20];
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
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
  puStack_8 = &LAB_00ceb95e;
  local_c = ExceptionList;
  this_00 = *(undefined4 **)((int)this + 0x24);
  ExceptionList = &local_c;
  if (this_00 != *(undefined4 **)((int)this + 0x28)) {
    do {
      fVar14 = param_2 * (float)this_00[8];
      local_13c = (int *)0x0;
      uVar3 = FUN_00598ee0((int)param_1);
      if ((char)uVar3 != '\0') {
        local_13c = param_1;
      }
      uVar4 = FUN_00413450(this_00,"genre_",0,6);
      if (uVar4 == 0) {
        uVar4 = this_00[1];
        pcVar7 = (char *)*this_00;
        _Dest = local_120;
        local_120[0] = '\0';
        local_124 = 0x14;
        if (0x13 < uVar4) {
          local_124 = uVar4 + 0x20 & 0xffffffe0;
          _Dest = _malloc(local_124);
        }
        _strncpy(_Dest,pcVar7,uVar4);
        _Dest[uVar4] = '\0';
        local_4 = 0;
        if (local_13c != (int *)0x0) {
          local_10c = local_100;
          local_100[0] = '\0';
          local_108 = 0;
          local_104 = 0x14;
          pcVar7 = _Dest;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar4 = (int)pcVar7 - (int)(_Dest + 1);
          if (0x13 < uVar4) {
            local_104 = uVar4 + 0x20 & 0xffffffe0;
            local_10c = _malloc(local_104);
          }
          _strncpy(local_10c,_Dest,uVar4);
          local_10c[uVar4] = '\0';
          ppcVar13 = &local_10c;
          local_4 = CONCAT31(local_4._1_3_,1);
          local_108 = uVar4;
          pvVar5 = (void *)FUN_00577370((int)local_13c);
          FUN_004425f0(pvVar5,ppcVar13,fVar14);
          if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
            _free(local_10c);
          }
        }
        local_4 = 0xffffffff;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(_Dest);
        }
LAB_008ac993:
        if (local_13c != (int *)0x0) {
          FUN_005945d0(local_13c,this_00);
        }
      }
      else {
        local_8c = local_80;
        local_80[0] = 0;
        local_88 = 0;
        local_84 = 0x14;
        _strncpy((char *)local_8c,"drunkeness",10);
        local_88 = 10;
        local_8c[10] = 0;
        pbVar8 = (byte *)*this_00;
        pbVar9 = local_8c;
        do {
          bVar2 = *pbVar8;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_008ac588:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_008ac58d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar10 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_008ac588;
          pbVar8 = pbVar8 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_008ac58d:
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
        if (iVar6 != 0) {
          local_4c = local_40;
          local_40[0] = 0;
          local_48 = 0;
          local_44 = 0x14;
          _strncpy((char *)local_4c,"sexappeal",9);
          local_48 = 9;
          local_4c[9] = 0;
          pbVar8 = (byte *)*this_00;
          pbVar9 = local_4c;
          do {
            bVar2 = *pbVar8;
            bVar10 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_008ac648:
              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_008ac64d;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar10 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_008ac648;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_008ac64d:
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          if (iVar6 == 0) {
            if (local_13c == (int *)0x0) goto LAB_008ac9a1;
            FUN_00585dd0(local_13c,fVar14);
          }
          else {
            local_6c = local_60;
            local_60[0] = 0;
            local_68 = 0;
            local_64 = 0x14;
            _strncpy((char *)local_6c,"boredom",7);
            local_68 = 7;
            local_6c[7] = 0;
            pbVar8 = (byte *)*this_00;
            pbVar9 = local_6c;
            do {
              bVar2 = *pbVar8;
              bVar10 = bVar2 < *pbVar9;
              if (bVar2 != *pbVar9) {
LAB_008ac708:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_008ac70d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar8[1];
              bVar10 = bVar2 < pbVar9[1];
              if (bVar2 != pbVar9[1]) goto LAB_008ac708;
              pbVar8 = pbVar8 + 2;
              pbVar9 = pbVar9 + 2;
            } while (bVar2 != 0);
            iVar6 = 0;
LAB_008ac70d:
            if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
              _free(local_6c);
            }
            if (iVar6 == 0) {
              if (local_13c == (int *)0x0) goto LAB_008ac9a1;
              FUN_00587ca0(local_13c,fVar14);
            }
            else {
              local_ac = local_a0;
              local_a0[0] = '\0';
              local_a8 = 0;
              local_a4 = 0x14;
              _strncpy(local_ac,"stress",6);
              ppcVar13 = &local_ac;
              local_a8 = 6;
              puVar12 = this_00;
              local_ac[6] = '\0';
              uVar3 = FUN_00401ec0(puVar12,ppcVar13);
              if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
                _free(local_ac);
              }
              if ((char)uVar3 == '\0') {
                local_cc = local_c0;
                local_c0[0] = '\0';
                local_c8 = 0;
                local_c4 = 0x14;
                _strncpy(local_cc,"weight",6);
                ppcVar13 = &local_cc;
                local_c8 = 6;
                puVar12 = this_00;
                local_cc[6] = '\0';
                uVar3 = FUN_00401ec0(puVar12,ppcVar13);
                if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
                  _free(local_cc);
                }
                if ((char)uVar3 == '\0') {
                  local_ec = local_e0;
                  local_e0[0] = '\0';
                  local_e8 = 0;
                  local_e4 = 0x14;
                  _strncpy(local_ec,"cuteness",8);
                  ppcVar13 = &local_ec;
                  local_e8 = 8;
                  puVar12 = this_00;
                  local_ec[8] = '\0';
                  uVar3 = FUN_00401ec0(puVar12,ppcVar13);
                  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
                    _free(local_ec);
                  }
                  if ((char)uVar3 == '\0') {
                    iVar6 = FUN_004155b0(this_00,"desire_",0);
                    if (iVar6 == 0) {
                      FUN_00430770(this_00,local_2c,7,0xffffffff);
                      local_4 = 2;
                      pvVar5 = (void *)FUN_0059c530((int)param_1);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00842f40(pvVar5,fVar14);
                      }
                      local_4 = 0xffffffff;
                      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                        _free(local_2c[0]);
                      }
                    }
                    else {
                      FUN_004155b0(this_00,"addiction_food",0);
                    }
                  }
                  else {
                    if (local_13c == (int *)0x0) goto LAB_008ac9a1;
                    FUN_00585d30(local_13c,fVar14);
                  }
                }
                else {
                  if (local_13c == (int *)0x0) goto LAB_008ac9a1;
                  fVar11 = FUN_005679d0(fVar14);
                  FUN_00585d80(local_13c,(float)fVar11);
                }
              }
              else {
                if (local_13c == (int *)0x0) goto LAB_008ac9a1;
                (**(code **)(*local_13c + 0x290))();
              }
            }
          }
          goto LAB_008ac993;
        }
        if (local_13c != (int *)0x0) {
          FUN_005862b0(local_13c,fVar14);
          goto LAB_008ac993;
        }
      }
LAB_008ac9a1:
      this_00 = this_00 + 9;
    } while (this_00 != *(undefined4 **)((int)this + 0x28));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008ac9e0 @ 008ac9e0 ////

void __thiscall FUN_008ac9e0(void *this,byte *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *this_00;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  int *in_stack_00000024;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceb978;
  local_c = ExceptionList;
  puVar7 = *(undefined4 **)((int)this + 0x3c);
  local_4 = 0;
  local_10 = (undefined4 *)0x0;
  this_00 = (undefined4 *)0x0;
  if (puVar7 != *(undefined4 **)((int)this + 0x40)) {
    do {
      this_00 = local_10;
      if (local_10 != (undefined4 *)0x0) break;
      pbVar2 = *(byte **)*puVar7;
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_008aca44:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008aca49;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008aca44;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_008aca49:
      if (iVar3 == 0) {
        local_10 = (undefined4 *)*puVar7;
      }
      puVar7 = puVar7 + 1;
      this_00 = local_10;
    } while (puVar7 != *(undefined4 **)((int)this + 0x40));
  }
  local_10 = (undefined4 *)0x3f800000;
  ExceptionList = &local_c;
  uVar4 = FUN_00598ee0((int)in_stack_00000024);
  if (((char)uVar4 != '\0') && (*(int *)((int)this + 0x5c) != 0)) {
    pfVar5 = (float *)FUN_00592780(in_stack_00000024,&stack0x00000024,
                                   (undefined4 *)(*(int *)((int)this + 0x5c) + 0x180));
    local_10 = (undefined4 *)*pfVar5;
    FUN_005945a0(in_stack_00000024,(undefined4 *)(*(int *)((int)this + 0x5c) + 0x180));
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_008ac360(this_00,in_stack_00000024,(float)local_10);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008acae0 @ 008acae0 ////

void __fastcall FUN_008acae0(int param_1)

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


//// FUNCTION FUN_008acb10 @ 008acb10 ////

undefined4 * FUN_008acb10(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008acb40 @ 008acb40 ////

void __cdecl FUN_008acb40(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008acc10 @ 008acc10 ////

int * __cdecl FUN_008acc10(undefined4 *param_1,undefined4 *param_2,int *param_3)

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


//// FUNCTION FUN_008acca0 @ 008acca0 ////

void __fastcall FUN_008acca0(int param_1)

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


//// FUNCTION FUN_008accd0 @ 008accd0 ////

void __cdecl FUN_008accd0(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008ace40 @ 008ace40 ////

int * FUN_008ace40(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_008accd0(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_008ace70 @ 008ace70 ////

void FUN_008ace70(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_008abe40(param_1);
  }
  return;
}


//// FUNCTION FUN_008acea0 @ 008acea0 ////

void __fastcall FUN_008acea0(int param_1)

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
    FUN_008abe40(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008acef0 @ 008acef0 ////

void FUN_008acef0(void)

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
  puStack_8 = &LAB_00ceb998;
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


//// FUNCTION FUN_008acf60 @ 008acf60 ////

void FUN_008acf60(void)

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
  puStack_8 = &LAB_00ceb9b8;
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


//// FUNCTION FUN_008ad090 @ 008ad090 ////

void __thiscall FUN_008ad090(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ceb9d8;
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
      FUN_008acef0();
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
        iVar2 = FUN_008abb60((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_008acc10(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_008accd0(piVar4,param_2,&local_40);
      FUN_008acc10(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_008ace70(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_008acc10(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_008ace40(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_008acb40(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_008acc10(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_008ac290((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_008acb40(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_008ad3b0 @ 008ad3b0 ////

void __thiscall FUN_008ad3b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008acf60();
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
      _Dst = FUN_008acb10((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_008ac230(param_1,iVar5,param_1 + param_2);
      FUN_008acb10(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008abd50(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_008ac230(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008ac020(param_1,(int)pvVar3,iVar5);
    FUN_008abd50(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008ad590 @ 008ad590 ////

void __fastcall FUN_008ad590(undefined4 *param_1)

{
  FUN_008acea0((int)(param_1 + 8));
  FUN_008acea0((int)(param_1 + 8));
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_008ad5c0 @ 008ad5c0 ////

undefined4 * __thiscall FUN_008ad5c0(void *this,byte param_1)

{
  FUN_008ad590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ad600 @ 008ad600 ////

void __thiscall FUN_008ad600(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_008ad645;
    }
  }
  iVar1 = 0;
LAB_008ad645:
  FUN_008ad090(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_008ad6c0 @ 008ad6c0 ////

void __fastcall FUN_008ad6c0(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


//// FUNCTION FUN_008ad710 @ 008ad710 ////

/* WARNING: Removing unreachable block (ram,0x008ad785) */
/* WARNING: Removing unreachable block (ram,0x008ad78b) */
/* WARNING: Removing unreachable block (ram,0x008ad790) */
/* WARNING: Removing unreachable block (ram,0x008ad796) */
/* WARNING: Removing unreachable block (ram,0x008ad7a1) */
/* WARNING: Removing unreachable block (ram,0x008ad7a8) */

void __fastcall FUN_008ad710(undefined4 *param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0xf];
  *param_1 = &PTR_FUN_00d641a0;
  if (puVar1 != (undefined4 *)param_1[0x10]) {
    do {
      _Memory = (undefined4 *)*puVar1;
      if (_Memory != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)_Memory[9];
        if (puVar1 == (undefined4 *)0x0) {
          _Memory[9] = 0;
          _Memory[10] = 0;
          _Memory[0xb] = 0;
          _Memory[9] = 0;
          _Memory[10] = 0;
          _Memory[0xb] = 0;
          if ((uint)_Memory[2] < 0x15) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*_Memory);
        }
        while( true ) {
          if (puVar1 == (undefined4 *)_Memory[10]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)_Memory[9]);
          }
          if (0x14 < (uint)puVar1[2]) break;
          puVar1 = puVar1 + 9;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar1);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_1[0x10]);
  }
  param_1[0x12] = &PTR_FUN_00d6416c;
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
  if ((void *)param_1[0xf] == (void *)0x0) {
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    FUN_00526bb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xf]);
}


//// FUNCTION FUN_008ad870 @ 008ad870 ////

void __thiscall FUN_008ad870(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_008accd0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_008ad600(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_008ad950 @ 008ad950 ////

undefined4 * __thiscall FUN_008ad950(void *this,byte param_1)

{
  FUN_008ad710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ad970 @ 008ad970 ////

void __thiscall FUN_008ad970(void *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  char *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ceba3b;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  this_00 = operator_new(0x30);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = this_00 + 3;
    *(undefined1 *)(this_00 + 3) = 0;
    this_00[1] = 0;
    this_00[2] = 0x14;
    this_00[9] = 0;
    this_00[10] = 0;
    this_00[0xb] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  local_34 = this_00;
  FUN_004015d0(this_00,param_1,param_2);
  iVar1 = *(int *)((int)this + 0x3c);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x44) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x40) - iVar1 >> 2))) {
    FUN_008ad3b0((void *)((int)this + 0x38),*(undefined4 **)((int)this + 0x40),1,&local_34);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x40);
    *puVar2 = this_00;
    *(undefined4 **)((int)this + 0x40) = puVar2 + 1;
  }
  local_24[0] = 0;
  local_2c = 0;
  local_30 = local_24;
  local_28 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004015d0(&local_30,in_stack_00000024,in_stack_00000028);
  FUN_008ad870(this_00 + 8,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (0x14 < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008adac0 @ 008adac0 ////

undefined4 * __thiscall FUN_008adac0(void *this,void *param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint _Size;
  void *pvVar8;
  float10 fVar9;
  int *local_9c;
  int *local_98;
  char *local_94;
  uint local_90;
  uint local_8c;
  char local_88 [20];
  undefined4 *local_74;
  char *local_70;
  uint local_6c;
  uint local_68;
  char local_64 [20];
  int *local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebaad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_74 = this;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d641a0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  piVar7 = (int *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(int **)((int)this + 0x54) = piVar7;
  *piVar7 = (int)&PTR_FUN_00d6416c;
  *(undefined4 *)((int)this + 0x5c) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar7 + 4))();
  *(undefined4 *)((int)this + 0x5c) = param_2;
  (**(code **)*piVar7)();
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,"aisliders",9);
  local_90 = 9;
  local_94[9] = '\0';
  local_4._0_1_ = 3;
  uVar4 = FUN_00558a50(param_1,&local_94,(undefined4 *)0x1);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (((char)uVar4 != '\0') && (cVar3 = FUN_00558bb0(param_1,6), cVar3 != '\0')) {
    FUN_00558bb0(param_1,0);
    do {
      FUN_005562f0(param_1,&local_94,0);
      local_4 = CONCAT31(local_4._1_3_,4);
      iVar5 = FUN_004302c0(&local_94,&DAT_00d24480,0xffffffff,2);
      puVar6 = FUN_00430770(&local_94,local_2c,iVar5 + 1,local_90);
      uVar1 = puVar6[1];
      pcVar2 = (char *)*puVar6;
      if (local_8c <= uVar1) {
        if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
          _free(local_94);
        }
        local_8c = uVar1 + 0x20 & 0xffffffe0;
        local_94 = _malloc(local_8c);
      }
      _strncpy(local_94,pcVar2,uVar1);
      local_94[uVar1] = '\0';
      local_90 = uVar1;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      piVar7 = operator_new(0x30);
      uVar1 = local_90;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = (int)(piVar7 + 3);
        *(undefined1 *)(piVar7 + 3) = 0;
        piVar7[1] = 0;
        piVar7[2] = 0x14;
        piVar7[9] = 0;
        piVar7[10] = 0;
        piVar7[0xb] = 0;
      }
      local_4._0_1_ = 4;
      local_98 = (int *)local_94;
      local_9c = piVar7;
      if ((uint)piVar7[2] <= local_90) {
        if (0x14 < (uint)piVar7[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar7);
        }
        _Size = local_90 + 0x20 & 0xffffffe0;
        piVar7[2] = _Size;
        pvVar8 = _malloc(_Size);
        *piVar7 = (int)pvVar8;
      }
      _strncpy((char *)*piVar7,(char *)local_98,uVar1);
      piVar7[1] = uVar1;
      *(undefined1 *)(uVar1 + *piVar7) = 0;
      iVar5 = local_74[0xf];
      if ((iVar5 == 0) ||
         ((uint)(local_74[0x11] - iVar5 >> 2) <= (uint)(local_74[0x10] - iVar5 >> 2))) {
        FUN_008ad3b0(local_74 + 0xe,(undefined4 *)local_74[0x10],1,&local_9c);
      }
      else {
        puVar6 = (undefined4 *)local_74[0x10];
        *puVar6 = piVar7;
        local_74[0x10] = puVar6 + 1;
      }
      local_98 = piVar7 + 8;
      do {
        FUN_00558de0(param_1,&local_4c);
        local_4._0_1_ = 7;
        fVar9 = FUN_005586b0(param_1,4,0.0);
        uVar1 = local_48;
        pcVar2 = local_4c;
        local_9c = (int *)(float)fVar9;
        local_70 = local_64;
        local_64[0] = '\0';
        local_6c = 0;
        local_68 = 0x14;
        local_4._0_1_ = 8;
        if (0x13 < local_48) {
          local_68 = local_48 + 0x20 & 0xffffffe0;
          local_70 = _malloc(local_68);
        }
        _strncpy(local_70,pcVar2,uVar1);
        local_6c = uVar1;
        local_70[uVar1] = '\0';
        local_50 = local_9c;
        FUN_008ad870(local_98,&local_70);
        if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
        local_4._0_1_ = 4;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        uVar4 = FUN_00558120(param_1,2);
      } while ((char)uVar4 != '\0');
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      cVar3 = FUN_00558bb0(param_1,2);
      this = local_74;
    } while (cVar3 != '\0');
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008ade90 @ 008ade90 ////

undefined4 * __fastcall FUN_008ade90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cebac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d641a0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = param_1 + 0x12;
  param_1[0x12] = &PTR_FUN_00d6416c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008adef0 @ 008adef0 ////

uint __thiscall FUN_008adef0(void *this,undefined4 param_1,int *param_2)

{
  float fVar1;
  float10 fVar2;
  int *this_00;
  bool bVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 extraout_var_00;
  float *pfVar7;
  undefined2 extraout_var_01;
  undefined3 extraout_var;
  float10 fVar9;
  float fVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 auStack_10 [12];
  float *pfStack_4;
  int *piVar8;
  
  this_00 = param_2;
  piVar8 = *(int **)((int)this + 0xec);
  if (param_2 != piVar8) {
    pfVar4 = (float *)FUN_00585ff0(*(void **)((int)this + 0x110),&param_2);
    fVar1 = *pfVar4;
    piVar8 = (int *)CONCAT22((short)((uint)pfVar4 >> 0x10),
                             (ushort)(fVar1 < 0.25) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 0.25) << 0xe);
    if (fVar1 >= 0.25) {
      uVar5 = FUN_00598ee0((int)this_00);
      if ((char)uVar5 != '\0') {
        puVar6 = (undefined4 *)FUN_00585ff0(*(void **)((int)this + 0x110),&local_20);
        param_2 = (int *)*puVar6;
        piVar8 = param_2;
        pfVar4 = (float *)FUN_00585ff0(this_00,&local_1c);
        fVar9 = FUN_00585630(pfVar4,(float)piVar8);
        fVar2 = (float10)0.75;
        piVar8 = (int *)CONCAT22(extraout_var_00,
                                 (ushort)(fVar9 < fVar2) << 8 |
                                 (ushort)(NAN(fVar9) || NAN(fVar2)) << 10 |
                                 (ushort)(fVar9 == fVar2) << 0xe);
        if (fVar9 >= fVar2) goto LAB_008adffc;
      }
      piVar8 = *(int **)((int)this + 0xec);
      pfVar4 = (float *)(**(code **)(*this_00 + 0x34))(local_18);
      pfVar7 = (float *)(**(code **)(*piVar8 + 0x34))(auStack_10);
      fVar10 = 20.0;
      fVar1 = SQRT((*pfVar7 - *pfVar4) * (*pfVar7 - *pfVar4) +
                   (pfVar7[1] - pfVar4[1]) * (pfVar7[1] - pfVar4[1]) +
                   (pfVar7[2] - pfVar4[2]) * (pfVar7[2] - pfVar4[2]));
      pfVar4 = (float *)FUN_00585ff0(*(void **)((int)this + 0x110),(undefined4 *)&stack0xffffffdc);
      fVar9 = FUN_004728e0(pfVar4,fVar10);
      fVar2 = (float10)fVar1;
      piVar8 = (int *)CONCAT22(extraout_var_01,
                               (ushort)(fVar9 < fVar2) << 8 |
                               (ushort)(NAN(fVar9) || NAN(fVar2)) << 10 |
                               (ushort)(fVar9 == fVar2) << 0xe);
      if (fVar9 >= fVar2) {
        bVar3 = FUN_00842c80(*(int **)((int)this + 0xec));
        piVar8 = (int *)CONCAT31(extraout_var,bVar3);
        if (bVar3) {
          *pfStack_4 = fVar1;
          return CONCAT31((int3)((uint)pfStack_4 >> 8),1);
        }
      }
    }
  }
LAB_008adffc:
  return (uint)piVar8 & 0xffffff00;
}


//// FUNCTION FUN_008ae020 @ 008ae020 ////

undefined4 * __thiscall FUN_008ae020(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this_00;
  undefined4 *this_01;
  void *unaff_retaddr;
  int local_40;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  void *pvStack_30;
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cebb14;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00465550(&local_40,param_1,*(int **)((int)this + 0xec));
  puVar2 = operator_new(0x31c);
  this_01 = (undefined4 *)0x0;
  local_4 = (undefined4 *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_004f1360(puVar2);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_autograph.flm",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = (undefined4 *)0x1;
  (**(code **)(*piVar3 + 0xb0))(&local_2c);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  iStack_38 = local_40;
  uStack_34 = 0;
  puStack_3c = puVar2;
  (**(code **)(*piVar3 + 0x2c))(&puStack_3c);
  this_00 = operator_new(0x2b4);
  pvStack_c = (void *)0x2;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00402380(this_00,(int)local_4,piVar3);
  }
  pvStack_c = (void *)0xffffffff;
  puVar2[0x91] = 0;
  FUN_00401a00(puVar2,unaff_retaddr);
  puVar2[0x84] = puVar2[0x84] & 0xfffffffe;
  local_4 = operator_new(0x2b4);
  pvStack_c = (void *)0x3;
  if (local_4 != (void *)0x0) {
    this_01 = FUN_00402380(local_4,*(int *)((int)this + 0xec),piVar3);
  }
  pvStack_c = (void *)0xffffffff;
  this_01[0x91] = 1;
  this_01[0x84] = this_01[0x84] & 0xfffffffe;
  local_4 = operator_new(0x128);
  pvStack_c = (void *)0x4;
  if (local_4 == (void *)0x0) {
    local_4 = (undefined4 *)0x0;
  }
  else {
    local_4 = DesireUrgent_Constructor(local_4,*(undefined4 *)((int)this + 0xec));
  }
  pvStack_c = (void *)0xffffffff;
  TMCharacter_AddResidentDesire(*(void **)((int)this + 0xec),(int)local_4);
  FUN_00401a00(this_01,local_4);
  this_01[0x84] = this_01[0x84] | 2;
  TMCharacter_AddAction(*(void **)((int)this + 0xec),(int)this_01);
  FUN_00842c50(unaff_retaddr,*(undefined4 *)((int)this + 0xec));
  piVar1 = piVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  ExceptionList = pvStack_14;
  return puVar2;
}


//// FUNCTION FUN_008ae260 @ 008ae260 ////

undefined4 * __thiscall FUN_008ae260(void *this,char *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_38 [16];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebb36;
  local_c = ExceptionList;
  puVar2 = local_38;
  local_38[0] = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffbc,"getautograph",0xc);
  FUN_008b9830(this,param_1,(uint)puVar2,uVar3);
  piVar1 = (int *)((int)this + 0xfc);
  *(undefined ***)this = &PTR_FUN_00d641cc;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(int **)((int)this + 0x108) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4 = 1;
  uStack_28 = 0x8ae2e7;
  (**(code **)(*piVar1 + 4))();
  *(char **)((int)this + 0x110) = param_1;
  uStack_28 = 0x8ae2f0;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008ae320 @ 008ae320 ////

void __fastcall FUN_008ae320(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d641cc;
  param_1[0x3f] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_008b99b0(param_1);
  return;
}


//// FUNCTION FUN_008ae3b0 @ 008ae3b0 ////

undefined4 * __thiscall FUN_008ae3b0(void *this,byte param_1)

{
  FUN_008ae320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ae3d0 @ 008ae3d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_008ae3d0(void *this,undefined4 param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint in_EAX;
  float *pfVar5;
  float *pfVar6;
  undefined1 local_18 [8];
  undefined1 auStack_10 [12];
  float *pfStack_4;
  
  piVar4 = param_2;
  if (*(int **)((int)this + 0x110) != param_2) {
    pfVar5 = (float *)FUN_00585ff0(*(int **)((int)this + 0x110),&param_2);
    fVar1 = *pfVar5;
    in_EAX = CONCAT22((short)((uint)pfVar5 >> 0x10),
                      (ushort)(fVar1 < _DAT_00e5e954) << 8 |
                      (ushort)(NAN(fVar1) || NAN(_DAT_00e5e954)) << 10 |
                      (ushort)(fVar1 == _DAT_00e5e954) << 0xe);
    if (fVar1 >= _DAT_00e5e954) {
      piVar2 = *(int **)((int)this + 0x110);
      pfVar5 = (float *)(**(code **)(*piVar4 + 0x34))(local_18);
      pfVar6 = (float *)(**(code **)(*piVar2 + 0x34))(auStack_10);
      fVar1 = SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
                   (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
                   (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]));
      in_EAX = CONCAT22((short)((uint)pfVar6 >> 0x10),
                        (ushort)(fVar1 < _DAT_00e5e958) << 8 |
                        (ushort)(NAN(fVar1) || NAN(_DAT_00e5e958)) << 10 |
                        (ushort)(fVar1 == _DAT_00e5e958) << 0xe);
      if ((fVar1 < _DAT_00e5e958 || (fVar1 == _DAT_00e5e958) != 0) &&
         ((iVar3 = piVar4[0x13b], iVar3 == 0 || (*(int *)(iVar3 + 0x34) != 2)))) {
        *pfStack_4 = fVar1;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_008ae490 @ 008ae490 ////

undefined4 * __thiscall FUN_008ae490(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *this_00;
  float10 fVar7;
  float fVar8;
  undefined1 *puStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  char *pcStack_34;
  uint uStack_30;
  uint uStack_2c;
  char acStack_28 [16];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cebb66;
  pvStack_c = ExceptionList;
  piVar5 = *(int **)((int)this + 0x110);
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))();
  pfVar3 = (float *)(**(code **)(*piVar5 + 0x34))();
  fStack_50 = pfVar3[2] - pfVar2[2];
  fStack_54 = pfVar3[1] - pfVar2[1];
  fStack_58 = *pfVar3 - *pfVar2;
  FUN_009840b0(&fStack_60,&fStack_58);
  fVar7 = (float10)fpatan((float10)fStack_5c,(float10)fStack_60);
  pvVar4 = operator_new(0x2e0);
  this_00 = (undefined4 *)0x0;
  pvStack_c = (void *)0x0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puStack_64 = &stack0xffffff80;
    fVar7 = FUN_004012c0((float)fVar7);
    fVar8 = (float)fVar7;
    pfVar2 = (float *)(**(code **)(*piStack_4 + 0x34))(auStack_40);
    piVar5 = FUN_00445f60(pvVar4,pfVar2,fVar8);
  }
  pcStack_34 = acStack_28;
  acStack_28[0] = '\0';
  uStack_30 = 0;
  uStack_2c = 0x14;
  _strncpy(pcStack_34,"ai_celebrity",0xc);
  uStack_30 = 0xc;
  pcStack_34[0xc] = '\0';
  pvStack_c = (void *)0x1;
  puVar6 = (undefined4 *)FUN_00585ff0(*(void **)((int)this + 0x110),&puStack_64);
  FUN_00404790(piVar5,&pcStack_34,*puVar6);
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_34);
  }
  pcStack_34 = acStack_28;
  acStack_28[0] = '\0';
  uStack_30 = 0;
  uStack_2c = 0x20;
  pcStack_34 = _malloc(0x20);
  _strncpy(pcStack_34,"ai_awed_react_to_star.flm",0x19);
  uStack_30 = 0x19;
  pcStack_34[0x19] = '\0';
  pvStack_c = (void *)0x2;
  (**(code **)(*piVar5 + 0xb0))();
  uStack_10 = 0xffffffff;
  if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_38);
  }
  FUN_00974bf0((void *)piVar5[0x85],*(void **)(*(int *)((int)this + 0x110) + 0x11c),0);
  pvVar4 = operator_new(0x2b4);
  uStack_10 = 3;
  if (pvVar4 != (void *)0x0) {
    this_00 = FUN_00402380(pvVar4,(int)puStack_8,piVar5);
  }
  uStack_10 = 0xffffffff;
  FUN_00401a00(this_00,piStack_4);
  piVar1 = piVar5 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar5)(1);
  }
  FUN_00585730(*(int *)((int)this + 0x110));
  ExceptionList = pvStack_18;
  return this_00;
}


//// FUNCTION FUN_008ae6d0 @ 008ae6d0 ////

undefined4 * __thiscall
FUN_008ae6d0(void *this,char *param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_38 [12];
  undefined *puStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cebb8e;
  local_c = ExceptionList;
  puVar2 = local_38;
  local_38[0] = 0;
  local_4 = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffbc,param_2,param_3);
  FUN_008b9830(this,param_1,(uint)puVar2,uVar3);
  piVar1 = (int *)((int)this + 0xfc);
  *(undefined ***)this = &PTR_FUN_00d64214;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(int **)((int)this + 0x108) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  *(char **)((int)this + 0x110) = param_1;
  (**(code **)*piVar1)();
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    puStack_2c = &UNK_008ae774;
    _free(param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008ae790 @ 008ae790 ////

undefined4 * __thiscall FUN_008ae790(void *this,byte param_1)

{
  FUN_008ae7b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ae7b0 @ 008ae7b0 ////

void __fastcall FUN_008ae7b0(undefined4 *param_1)

{
  param_1[0x3f] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_008b99b0(param_1);
  return;
}


//// FUNCTION FUN_008ae960 @ 008ae960 ////

bool __thiscall FUN_008ae960(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  uVar2 = uVar1 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    uVar1 = FUN_008ba1f0(*(void **)((int)this + 0xcc),uVar1 + 1);
    return (char)uVar1 != '\0';
  }
  uVar1 = FUN_008ba1f0(*(void **)((int)this + 0xcc),uVar1 - 1);
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_008aea20 @ 008aea20 ////

void __fastcall FUN_008aea20(int param_1)

{
  void *pvVar1;
  int *this;
  int iVar2;
  undefined4 *this_00;
  int *piVar3;
  undefined4 unaff_EBP;
  void *unaff_retaddr;
  uint **ppuVar4;
  uint *puStack_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebbc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x2e8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_0040b940(pvVar1,*(int *)(*(int *)(param_1 + 0x1d0) + 0xb4));
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_bar_drop.flm",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 1;
  (**(code **)(*this + 0xb0))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  FUN_008ba340(*(void **)(*(int *)(param_1 + 0x1d0) + 0xcc),this);
  FUN_008ba250(*(void **)(*(int *)(param_1 + 0x1d0) + 0xcc),*(int *)(param_1 + 0x1b8),(int)this);
  local_2c = (char *)0x0;
  puStack_30 = &local_24;
  local_24 = local_24 & 0xffffff00;
  local_28 = 0x14;
  _strncpy((char *)puStack_30,"bar",3);
  local_2c = (char *)0x3;
  *(char *)((int)puStack_30 + 3) = '\0';
  ppuVar4 = &puStack_30;
  puStack_8 = (undefined1 *)0x2;
  pvVar1 = (void *)FUN_00529ef0(*(int *)(*(int *)(param_1 + 0x1d0) + 0xb4));
  iVar2 = FUN_008b1cb0(pvVar1,ppuVar4);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  pvVar1 = operator_new(0x2b4);
  puStack_8 = (undefined1 *)0x3;
  if (pvVar1 == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00402380(pvVar1,(int)unaff_retaddr,this);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004016f0(this_00,iVar2);
  pvVar1 = (void *)FUN_0059c530((int)unaff_retaddr);
  if (pvVar1 != (void *)0x0) {
    FUN_00842f90(pvVar1,1.0);
    FUN_00401a00(this_00,pvVar1);
    this_00[0x91] = *(undefined4 *)(param_1 + 0x1b8);
    this_00[0x90] = 2;
    FUN_00401a70((int)this_00);
    piVar3 = this + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*this)();
    }
    (**(code **)(*this + 0xe8))();
    FUN_004039a0(this,unaff_EBP);
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1d0) + 0xb4) + 0x4c))
                              (&stack0xffffffc8);
    this[0xb9] = *piVar3;
    FUN_0059aed0((int)unaff_retaddr);
    TMCharacter_AddAction(unaff_retaddr,(int)this_00);
    FUN_0059c8e0(unaff_retaddr,"getdrunk");
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_008aeca0 @ 008aeca0 ////

void __thiscall FUN_008aeca0(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *this_00;
  void *pvVar4;
  int *this_01;
  int iVar5;
  void *this_02;
  undefined4 *this_03;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  char **ppcVar11;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebc01;
  local_c = ExceptionList;
  uVar1 = *(uint *)((int)this + 0x1b8);
  uVar9 = uVar1 & 0x80000001;
  bVar10 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar10 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar10) {
    iVar3 = uVar1 + 1;
  }
  else {
    iVar3 = uVar1 - 1;
  }
  ExceptionList = &local_c;
  this_00 = (int *)FUN_00403b40(*(int *)(*(int *)(*(int *)((int)this + 0x1d0) + 0xcc) + 0x8c +
                                        iVar3 * 0x18));
  uVar1 = *(uint *)((int)this + 0x1b8);
  uVar9 = uVar1 & 0x80000001;
  bVar10 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar10 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar10) {
    iVar3 = uVar1 + 1;
  }
  else {
    iVar3 = uVar1 - 1;
  }
  if (this_00 != (int *)0x0) {
    pvVar4 = operator_new(0x2e8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_0040b940(pvVar4,*(int *)(*(int *)((int)this + 0x1d0) + 0xb4));
    }
    local_2c = local_20;
    *(undefined1 *)(this_01 + 0xac) = 1;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ai_bar_drop_pairs.flm",0x15);
    local_28 = 0x15;
    local_2c[0x15] = '\0';
    local_4 = 1;
    (**(code **)(*this_01 + 0xb0))();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_008ba340(*(void **)(*(int *)((int)this + 0x1d0) + 0xcc),this_01);
    FUN_008ba250(*(void **)(*(int *)((int)this + 0x1d0) + 0xcc),*(int *)((int)this + 0x1b8),
                 (int)this_01);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"bar",3);
    local_28 = 3;
    local_2c[3] = '\0';
    ppcVar11 = &local_2c;
    local_4 = 2;
    pvVar4 = (void *)FUN_00529ef0(*(int *)(*(int *)((int)this + 0x1d0) + 0xb4));
    iVar5 = FUN_008b1cb0(pvVar4,ppcVar11);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    pvVar4 = (void *)FUN_0059c530((int)param_1);
    if (pvVar4 != (void *)0x0) {
      this_02 = operator_new(0x2b4);
      local_4 = 3;
      if (this_02 == (void *)0x0) {
        this_03 = (undefined4 *)0x0;
      }
      else {
        this_03 = FUN_00402380(this_02,(int)param_1,this_01);
      }
      local_4 = 0xffffffff;
      FUN_004016f0(this_03,iVar5);
      FUN_00842f90(pvVar4,1.0);
      FUN_00401a00(this_03,pvVar4);
      this_03[0x91] = *(undefined4 *)((int)this + 0x1b8);
      this_03[0x90] = 2;
      FUN_00401a70((int)this_03);
      FUN_0059aed0((int)param_1);
      TMCharacter_AddAction(param_1,(int)this_03);
      FUN_0059c8e0(param_1,"getdrunk");
      iVar6 = FUN_005998e0((int)this_00);
      if (iVar6 != 0) {
        iVar6 = FUN_005998e0((int)this_00);
        if (*(int **)(iVar6 + 0x25c) != this_01) {
          iVar6 = FUN_005998e0((int)this_00);
          (**(code **)(**(int **)(iVar6 + 0x25c) + 4))();
        }
      }
      pvVar4 = operator_new(0x2b4);
      local_4 = 4;
      if (pvVar4 == (void *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = FUN_00402380(pvVar4,(int)this_00,this_01);
      }
      local_4 = 0xffffffff;
      FUN_004016f0(param_1,iVar5);
      pvVar4 = (void *)FUN_0059c530((int)this_00);
      if (pvVar4 != (void *)0x0) {
        FUN_00842f90(pvVar4,1.0);
        FUN_00401a00(param_1,pvVar4);
        param_1[0x91] = iVar3;
        param_1[0x90] = 2;
        FUN_00401a70((int)param_1);
        FUN_0059aed0((int)this_00);
        TMCharacter_AddAction(this_00,(int)param_1);
        uVar7 = FUN_00598ee0((int)piVar2);
        if ((char)uVar7 != '\0') {
          uVar7 = FUN_00598ee0((int)this_00);
          if (((char)uVar7 != '\0') && (piVar2[0x128] != this_00[0x128])) {
            FUN_004031c0(this_01,10);
          }
        }
        piVar8 = this_01 + 0x12;
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*this_01)();
        }
        FUN_004039a0(this_01,iVar5);
        piVar8 = (int *)(**(code **)(**(int **)(*(int *)((int)this + 0x1d0) + 0xb4) + 0x4c))();
        this_01[0xb9] = *piVar8;
        FUN_0059c8e0(this_00,"getdrunk");
        uVar7 = FUN_00598ee0((int)piVar2);
        if ((char)uVar7 != '\0') {
          uVar7 = FUN_00598ee0((int)this_00);
          if ((char)uVar7 != '\0') {
            if (*(int *)((int)this + 0x1b8) < 4) {
              iVar3 = 1;
            }
            else {
              iVar3 = 2;
            }
            FUN_004f1e30(this_01,piVar2,this_00,iVar3);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008af2c0 @ 008af2c0 ////

int * __thiscall FUN_008af2c0(void *this,float *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  float local_14;
  
  iVar1 = *(int *)((int)this + 0xd8);
  local_14 = 3.4028235e+38;
  piVar3 = (int *)0x0;
  fVar4 = local_14;
  for (; iVar1 != (int)this + 0xe4; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(int **)(iVar1 + 8);
    piVar6 = piVar3;
    local_14 = fVar4;
    if ((((piVar2 != (int *)0x0) && (cVar5 = (**(code **)(*piVar2 + 0x38))(param_2), cVar5 != '\0'))
        && (local_14 = (*param_1 - (float)piVar2[0x25]) * (*param_1 - (float)piVar2[0x25]) +
                       (param_1[1] - (float)piVar2[0x26]) * (param_1[1] - (float)piVar2[0x26]) +
                       (param_1[2] - (float)piVar2[0x27]) * (param_1[2] - (float)piVar2[0x27]),
           piVar6 = piVar2, piVar3 != (int *)0x0)) && (fVar4 <= local_14)) {
      piVar6 = piVar3;
      local_14 = fVar4;
    }
    piVar3 = piVar6;
    fVar4 = local_14;
  }
  return piVar3;
}


//// FUNCTION FUN_008af3b0 @ 008af3b0 ////

void __fastcall FUN_008af3b0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1660c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_008af3d0 @ 008af3d0 ////

undefined4 * __thiscall
FUN_008af3d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
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
  puStack_8 = &LAB_00cebc5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c10f0(this);
  *(undefined ***)this = &PTR_FUN_00d642b4;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  piVar1 = (int *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(int **)((int)this + 0x1c8) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d17fc8;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = param_5;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x1d0) = param_6;
  (**(code **)*piVar1)();
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_sit.dds",0x11);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_sit_h.dds",0x13);
  *(undefined4 *)((int)this + 0x10c) = param_1;
  *(undefined4 *)((int)this + 0x110) = param_2;
  *(undefined4 *)((int)this + 0x114) = param_3;
  *(undefined4 *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0x98) = param_2;
  local_4c = local_40;
  *(undefined4 *)((int)this + 0xe8) = 0x40800000;
  *(undefined4 *)((int)this + 0x9c) = param_3;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_BAR",0x14);
  local_48 = 0x14;
  local_4c[0x14] = '\0';
  local_4._0_1_ = 3;
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"bar",3);
  *(void **)((int)this + 0x1b0) = this;
  FUN_00acdb9e(0xe5e9a0);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x1b4) = iVar3;
  if (s___AVCBarDropExplainer_TM___00e5e984[0x1b] != '\0') {
    iVar3 = 0x1a8;
    pcVar5 = "MyLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5e9a0);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVCBarDropExplainer_TM___00e5e984[0x1b] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008af650 @ 008af650 ////

void __fastcall FUN_008af650(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d642b4;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6f] = &PTR_FUN_00d17fc8;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_008c0d90(param_1);
  return;
}


//// FUNCTION FUN_008af740 @ 008af740 ////

void __fastcall FUN_008af740(int param_1)

{
  int *piVar1;
  void *this;
  float *pfVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fStack_70;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_38;
  float local_30;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cebc7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_0097c450(*(char **)(param_1 + 0x80),0,(undefined4 *)0x0,0);
  fVar7 = (float10)(float)(*(int **)(param_1 + 0xb4))[0x31];
  fVar8 = (float10)fcos(fVar7);
  local_58 = 0.0;
  fVar7 = (float10)fsin(fVar7);
  local_38 = (float)fVar7;
  local_30 = (float)-fVar7;
  local_60 = (float)((float10)local_30 * (float10)0.0 + fVar8 * (float10)0.0);
  local_5c = (float)((float10)local_38 * (float10)0.0 + fVar8 * (float10)0.0);
  pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0xb4) + 0x34))();
  fStack_64 = fStack_64 + *pfVar2;
  local_60 = local_60 + pfVar2[1];
  local_5c = local_5c + pfVar2[2];
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x11c);
  fVar7 = FUN_004012c0(fStack_70);
  FUN_00978350(this,&fStack_64,(float)fVar7,uVar9);
  iVar3 = FUN_00975c50(this,0);
  iVar6 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)(param_1 + 0xe4);
    do {
      FUN_009782d0(this,0,iVar6,&local_58,(float *)&stack0xffffff8c);
      this_00 = operator_new(0x1d4);
      puStack_8 = (undefined1 *)0x0;
      if (this_00 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_008af3d0(this_00,local_58,uStack_54,uStack_50,0,iVar6,param_1);
      }
      piVar5 = puVar4 + 0x6a;
      puVar4[0x6b] = piVar1;
      *piVar5 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar5;
      *piVar1 = (int)piVar5;
      iVar6 = iVar6 + 1;
      puStack_8 = (undefined1 *)0xffffffff;
    } while (iVar6 < iVar3);
  }
  if (this != (void *)0x0) {
    FUN_00971df0(this);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_008af900 @ 008af900 ////

undefined4 * __thiscall FUN_008af900(void *this,byte param_1)

{
  FUN_008af650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008af920 @ 008af920 ////

void __fastcall FUN_008af920(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6431c;
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


//// FUNCTION FUN_008af970 @ 008af970 ////

undefined4 * __thiscall FUN_008af970(void *this,byte param_1)

{
  FUN_008af920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008af990 @ 008af990 ////

void __fastcall FUN_008af990(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cebce6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64328;
  local_4 = 5;
  if ((undefined4 *)param_1[0x36] != param_1 + 0x39) {
    do {
      puVar2 = *(undefined4 **)(param_1[0x36] + 8);
      if (puVar2 != (undefined4 *)0x0) {
        piVar5 = puVar2 + 0x12;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while ((undefined4 *)param_1[0x36] != param_1 + 0x39);
  }
  piVar5 = param_1 + 0xe;
  iVar4 = 3;
  do {
    iVar3 = piVar5[5];
    if (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 0x110);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (*(code *)**(undefined4 **)(iVar3 + 200))(1);
      }
      (**(code **)(*piVar5 + 4))();
      piVar5[5] = 0;
      (**(code **)*piVar5)();
    }
    piVar5 = piVar5 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar1 = (int *)param_1[0x36];
  piVar5 = param_1 + 0x39;
  param_1[0x34] = &PTR_LAB_00d6431c;
  while (piVar1 != piVar5) {
    *piVar1 = 0;
    piVar1 = (int *)piVar1[1];
    *(undefined4 *)(*piVar1 + 4) = 0;
  }
  param_1[0x36] = 0;
  *piVar5 = 0;
  if ((void *)param_1[0x3e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3e]);
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((int *)param_1[0x3a] != (int *)0x0) {
    *(int *)param_1[0x3a] = *piVar5;
  }
  if (*piVar5 != 0) {
    *(undefined4 *)(*piVar5 + 4) = param_1[0x3a];
  }
  *piVar5 = 0;
  param_1[0x3a] = 0;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2e] = &PTR_FUN_00d166dc;
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
  param_1[0x28] = &PTR_FUN_00d16bec;
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
  if (0x14 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0xe,0x18,3,FUN_00402290);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008afc10 @ 008afc10 ////

undefined4 * __thiscall FUN_008afc10(void *this,byte param_1)

{
  FUN_008af990(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008afc30 @ 008afc30 ////

void __fastcall FUN_008afc30(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6431c;
  return;
}


//// FUNCTION FUN_008afc90 @ 008afc90 ////

undefined4 * __thiscall FUN_008afc90(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebd8f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d64328;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x38),0x18,3,FUN_008af3b0,FUN_00402290);
  *(undefined1 **)((int)this + 0x80) = (undefined1 *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  piVar3 = (int *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(int **)((int)this + 0xac) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0xb4) = 0;
  piVar1 = (int *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(int **)((int)this + 0xc4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d166dc;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe4);
  *(undefined4 *)((int)this + 0xec) = 0;
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_00d6431c;
  *(undefined4 **)((int)this + 0xd8) = puVar2;
  *puVar2 = (undefined4 *)((int)this + 0xd4);
  local_4._0_1_ = 7;
  if ((param_1 != 0) && (param_2 != 0)) {
    (**(code **)(*piVar1 + 4))();
    *(int *)((int)this + 0xcc) = param_2;
    (**(code **)*piVar1)();
    (**(code **)(*piVar3 + 4))();
    *(int *)((int)this + 0xb4) = param_1;
    (**(code **)*piVar3)();
    FUN_004015d0((void *)((int)this + 0x80),"ai_bar_drop.flm",0xf);
    FUN_008af740((int)this);
  }
  param_2 = 0;
  piVar3 = (int *)((int)this + 0x38);
  while( true ) {
    puVar2 = operator_new(0x2f0);
    local_4._0_1_ = 8;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_008b2b80(puVar2);
    }
    local_4._0_1_ = 7;
    (**(code **)(*piVar3 + 4))();
    piVar3[5] = (int)puVar2;
    (**(code **)*piVar3)();
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"barwalkon",9);
    uStack_28 = 9;
    pcStack_2c[9] = '\0';
    piVar1 = (int *)piVar3[5];
    local_4._0_1_ = 9;
    FUN_004012c0(0.0);
    (**(code **)(*piVar1 + 0x28))(&pcStack_2c,param_1);
    local_4._0_1_ = 7;
    if (0x14 < uStack_24) break;
    *(int *)(piVar3[5] + 0x230) = param_2;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 6;
    if (2 < param_2) {
      ExceptionList = pvStack_c;
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_2c);
}


//// FUNCTION FUN_008affe0 @ 008affe0 ////

bool __thiscall FUN_008affe0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  uVar2 = uVar1 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    uVar1 = FUN_008ba1f0(*(void **)((int)this + 0x9c),uVar1 + 1);
    return (char)uVar1 != '\0';
  }
  uVar1 = FUN_008ba1f0(*(void **)((int)this + 0x9c),uVar1 - 1);
  return (char)uVar1 != '\0';
}


//// FUNCTION FUN_008b00a0 @ 008b00a0 ////

void __fastcall FUN_008b00a0(int param_1)

{
  void *pvVar1;
  int *this;
  int iVar2;
  int *piVar3;
  undefined4 *this_00;
  undefined4 unaff_EBP;
  void *unaff_retaddr;
  uint **ppuVar4;
  uint *puStack_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [8];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebdc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x2e8);
  this_00 = (undefined4 *)0x0;
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_0040b940(pvVar1,*(int *)(*(int *)(param_1 + 0x1d0) + 0x84));
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_canteen_drop.flm",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 1;
  (**(code **)(*this + 0xb0))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  FUN_008ba340(*(void **)(*(int *)(param_1 + 0x1d0) + 0x9c),this);
  FUN_008ba250(*(void **)(*(int *)(param_1 + 0x1d0) + 0x9c),*(int *)(param_1 + 0x1b8),(int)this);
  puStack_30 = &local_24;
  local_24 = local_24 & 0xffffff00;
  local_2c = (char *)0x0;
  local_28 = 0x14;
  _strncpy((char *)puStack_30,"canteen",7);
  local_2c = (char *)0x7;
  *(char *)((int)puStack_30 + 7) = '\0';
  ppuVar4 = &puStack_30;
  puStack_8 = (undefined1 *)0x2;
  pvVar1 = (void *)FUN_00529ef0(*(int *)(*(int *)(param_1 + 0x1d0) + 0x84));
  iVar2 = FUN_008b1cb0(pvVar1,ppuVar4);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  pvVar1 = operator_new(0x2b4);
  puStack_8 = (undefined1 *)0x3;
  if (pvVar1 != (void *)0x0) {
    this_00 = FUN_00402380(pvVar1,(int)unaff_retaddr,this);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004016f0(this_00,iVar2);
  pvVar1 = (void *)FUN_0059c530((int)unaff_retaddr);
  FUN_00842f90(pvVar1,1.0);
  FUN_00401a00(this_00,pvVar1);
  this_00[0x91] = *(undefined4 *)(param_1 + 0x1b8);
  this_00[0x90] = 2;
  FUN_00401a70((int)this_00);
  piVar3 = this + 0x12;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*this)();
  }
  (**(code **)(*this + 0xe8))();
  FUN_004039a0(this,unaff_EBP);
  piVar3 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1d0) + 0x84) + 0x4c))();
  this[0xb9] = *piVar3;
  FUN_0059aed0((int)unaff_retaddr);
  TMCharacter_AddAction(unaff_retaddr,(int)this_00);
  puStack_8 = &stack0xffffffac;
  FUN_0059c8e0(unaff_retaddr,"buyfood");
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_008b0310 @ 008b0310 ////

void __fastcall FUN_008b0310(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *this;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int *unaff_EBX;
  undefined4 *puVar9;
  bool bVar10;
  int *unaff_retaddr;
  undefined1 *puStack00000004;
  char **ppcVar11;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebe01;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 0x1b8);
  uVar8 = uVar1 & 0x80000001;
  bVar10 = uVar8 == 0;
  if ((int)uVar8 < 0) {
    bVar10 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar10) {
    iVar2 = uVar1 + 1;
  }
  else {
    iVar2 = uVar1 - 1;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_00403b40(*(int *)(*(int *)(*(int *)(param_1 + 0x1d0) + 0x9c) + 0x8c + iVar2 * 0x18));
  puVar9 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"canteen",7);
    local_28 = 7;
    local_2c[7] = '\0';
    ppcVar11 = &local_2c;
    local_4 = 0;
    pvVar3 = (void *)FUN_00529ef0(*(int *)(*(int *)(param_1 + 0x1d0) + 0x84));
    iVar4 = FUN_008b1cb0(pvVar3,ppcVar11);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    pvVar3 = operator_new(0x2e8);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = FUN_0040b940(pvVar3,*(int *)(*(int *)(param_1 + 0x1d0) + 0x84));
    }
    local_2c = local_20;
    *(undefined1 *)(this + 0xac) = 1;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ai_canteen_drop_pairs.flm",0x19);
    local_28 = 0x19;
    local_2c[0x19] = '\0';
    local_4 = 2;
    (**(code **)(*this + 0xb0))();
    puStack_8 = (undefined1 *)0xffffffff;
    if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    FUN_008ba340(*(void **)(*(int *)(param_1 + 0x1d0) + 0x9c),this);
    FUN_008ba250(*(void **)(*(int *)(param_1 + 0x1d0) + 0x9c),*(int *)(param_1 + 0x1b8),(int)this);
    pvVar3 = operator_new(0x2b4);
    puStack_8 = (undefined1 *)0x3;
    if (pvVar3 != (void *)0x0) {
      puVar9 = FUN_00402380(pvVar3,(int)unaff_retaddr,this);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    pvVar3 = (void *)FUN_0059c530((int)unaff_retaddr);
    FUN_00842f90(pvVar3,1.0);
    FUN_00401a00(puVar9,pvVar3);
    FUN_004016f0(puVar9,iVar2);
    puVar9[0x91] = *(undefined4 *)(param_1 + 0x1b8);
    puVar9[0x90] = 2;
    FUN_00401a70((int)puVar9);
    FUN_0059aed0((int)unaff_retaddr);
    TMCharacter_AddAction(unaff_retaddr,(int)puVar9);
    FUN_0059c8e0(unaff_retaddr,"buyfood");
    iVar5 = FUN_005998e0((int)unaff_EBX);
    if (*(int **)(iVar5 + 0x25c) != this) {
      iVar5 = FUN_005998e0((int)unaff_EBX);
      (**(code **)(**(int **)(iVar5 + 0x25c) + 4))();
    }
    pvVar3 = operator_new(0x2b4);
    puStack_8 = (undefined1 *)0x4;
    if (pvVar3 == (void *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(pvVar3,(int)unaff_EBX,this);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    pvVar3 = (void *)FUN_0059c530((int)unaff_EBX);
    FUN_00842f90(pvVar3,1.0);
    FUN_00401a00(puVar9,pvVar3);
    puVar9[0x91] = iVar4;
    FUN_004016f0(puVar9,iVar2);
    puVar9[0x90] = 2;
    FUN_00401a70((int)puVar9);
    FUN_0059aed0((int)unaff_EBX);
    TMCharacter_AddAction(unaff_EBX,(int)puVar9);
    uVar6 = FUN_00598ee0((int)unaff_retaddr);
    if ((((char)uVar6 != '\0') && (uVar6 = FUN_00598ee0((int)unaff_EBX), (char)uVar6 != '\0')) &&
       (unaff_retaddr[0x128] != unaff_EBX[0x128])) {
      FUN_004031c0(this,7);
    }
    piVar7 = this + 0x12;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*this)();
    }
    FUN_004039a0(this,iVar2);
    piVar7 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0x1d0) + 0x84) + 0x4c))();
    puStack00000004 = &stack0xffffffb0;
    this[0xb9] = *piVar7;
    FUN_0059c8e0(unaff_EBX,"buyfood");
    uVar6 = FUN_00598ee0((int)unaff_retaddr);
    if (((char)uVar6 != '\0') && (uVar6 = FUN_00598ee0((int)unaff_EBX), (char)uVar6 != '\0')) {
      if (*(int *)(param_1 + 0x1b8) < 4) {
        iVar2 = 4;
      }
      else {
        iVar2 = 3;
      }
      FUN_004f1e30(this,unaff_retaddr,unaff_EBX,iVar2);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b0920 @ 008b0920 ////

int * __thiscall FUN_008b0920(void *this,float *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  float local_14;
  
  iVar1 = *(int *)((int)this + 0xa8);
  local_14 = 3.4028235e+38;
  piVar3 = (int *)0x0;
  fVar4 = local_14;
  for (; iVar1 != (int)this + 0xb4; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(int **)(iVar1 + 8);
    piVar6 = piVar3;
    local_14 = fVar4;
    if ((((piVar2 != (int *)0x0) && (cVar5 = (**(code **)(*piVar2 + 0x38))(param_2), cVar5 != '\0'))
        && (local_14 = (*param_1 - (float)piVar2[0x25]) * (*param_1 - (float)piVar2[0x25]) +
                       (param_1[1] - (float)piVar2[0x26]) * (param_1[1] - (float)piVar2[0x26]) +
                       (param_1[2] - (float)piVar2[0x27]) * (param_1[2] - (float)piVar2[0x27]),
           piVar6 = piVar2, piVar3 != (int *)0x0)) && (fVar4 <= local_14)) {
      piVar6 = piVar3;
      local_14 = fVar4;
    }
    piVar3 = piVar6;
    fVar4 = local_14;
  }
  return piVar3;
}


//// FUNCTION FUN_008b0a10 @ 008b0a10 ////

undefined4 * __thiscall
FUN_008b0a10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
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
  puStack_8 = &LAB_00cebe5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c10f0(this);
  *(undefined ***)this = &PTR_FUN_00d6439c;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  piVar1 = (int *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(int **)((int)this + 0x1c8) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d60760;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = param_5;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x1d0) = param_6;
  (**(code **)*piVar1)();
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_sit.dds",0x11);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_sit_h.dds",0x13);
  *(undefined4 *)((int)this + 0x10c) = param_1;
  *(undefined4 *)((int)this + 0x110) = param_2;
  *(undefined4 *)((int)this + 0x114) = param_3;
  *(undefined4 *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0x98) = param_2;
  local_4c = local_40;
  *(undefined4 *)((int)this + 0xe8) = 0x40800000;
  *(undefined4 *)((int)this + 0x9c) = param_3;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_CANTEEN",0x18);
  local_48 = 0x18;
  local_4c[0x18] = '\0';
  local_4._0_1_ = 3;
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"canteen",7);
  *(void **)((int)this + 0x1b0) = this;
  FUN_00acdb9e(0xe5ea40);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x1b4) = iVar3;
  if (s___AVCCanteenDropExplainer_TM___00e5ea20[0x1f] != '\0') {
    iVar3 = 0x1a8;
    pcVar5 = "MyLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5ea40);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVCCanteenDropExplainer_TM___00e5ea20[0x1f] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008b0c10 @ 008b0c10 ////

void __fastcall FUN_008b0c10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6439c;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6f] = &PTR_FUN_00d60760;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_008c0d90(param_1);
  return;
}


//// FUNCTION FUN_008b0d00 @ 008b0d00 ////

void __fastcall FUN_008b0d00(int param_1)

{
  int *piVar1;
  void *this;
  float *pfVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fStack_70;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_38;
  float local_30;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cebe7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_0097c450(*(char **)(param_1 + 0x50),0,(undefined4 *)0x0,0);
  fVar7 = (float10)(float)(*(int **)(param_1 + 0x84))[0x31];
  fVar8 = (float10)fcos(fVar7);
  local_58 = 0.0;
  fVar7 = (float10)fsin(fVar7);
  local_38 = (float)fVar7;
  local_30 = (float)-fVar7;
  local_60 = (float)((float10)local_30 * (float10)0.0 + fVar8 * (float10)0.0);
  local_5c = (float)((float10)local_38 * (float10)0.0 + fVar8 * (float10)0.0);
  pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0x84) + 0x34))();
  fStack_64 = fStack_64 + *pfVar2;
  local_60 = local_60 + pfVar2[1];
  local_5c = local_5c + pfVar2[2];
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x11c);
  fVar7 = FUN_004012c0(fStack_70);
  FUN_00978350(this,&fStack_64,(float)fVar7,uVar9);
  iVar3 = FUN_00975c50(this,0);
  iVar6 = 0;
  if (0 < iVar3) {
    piVar1 = (int *)(param_1 + 0xb4);
    do {
      FUN_009782d0(this,0,iVar6,&local_58,(float *)&stack0xffffff8c);
      this_00 = operator_new(0x1d4);
      puStack_8 = (undefined1 *)0x0;
      if (this_00 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_008b0a10(this_00,local_58,uStack_54,uStack_50,0,iVar6,param_1);
      }
      piVar5 = puVar4 + 0x6a;
      puVar4[0x6b] = piVar1;
      *piVar5 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar5;
      *piVar1 = (int)piVar5;
      iVar6 = iVar6 + 1;
      puStack_8 = (undefined1 *)0xffffffff;
    } while (iVar6 < iVar3);
  }
  if (this != (void *)0x0) {
    FUN_00971df0(this);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_008b0ec0 @ 008b0ec0 ////

undefined4 * __thiscall FUN_008b0ec0(void *this,byte param_1)

{
  FUN_008b0c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b0ee0 @ 008b0ee0 ////

void __fastcall FUN_008b0ee0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d64404;
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


//// FUNCTION FUN_008b0f30 @ 008b0f30 ////

undefined4 * __thiscall FUN_008b0f30(void *this,byte param_1)

{
  FUN_008b0ee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b0f50 @ 008b0f50 ////

void __fastcall FUN_008b0f50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cebee0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64410;
  local_4 = 5;
  if ((undefined4 *)param_1[0x2a] != param_1 + 0x2d) {
    do {
      puVar2 = *(undefined4 **)(param_1[0x2a] + 8);
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while ((undefined4 *)param_1[0x2a] != param_1 + 0x2d);
  }
  iVar3 = param_1[0x13];
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 0x110);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)(iVar3 + 200))(1);
    }
    (**(code **)(param_1[0xe] + 4))();
    param_1[0x13] = 0;
    (**(code **)param_1[0xe])();
  }
  piVar4 = (int *)param_1[0x2a];
  piVar1 = param_1 + 0x2d;
  param_1[0x28] = &PTR_LAB_00d64404;
  while (piVar4 != piVar1) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  param_1[0x2a] = 0;
  *piVar1 = 0;
  if ((void *)param_1[0x32] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    *(int *)param_1[0x2e] = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = param_1[0x2e];
  }
  *piVar1 = 0;
  param_1[0x2e] = 0;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x22] = &PTR_FUN_00d166dc;
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
  param_1[0x1c] = &PTR_FUN_00d16bec;
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
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0xe,0x18,1,FUN_00402290);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008b1190 @ 008b1190 ////

undefined4 * __thiscall FUN_008b1190(void *this,byte param_1)

{
  FUN_008b0f50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b11b0 @ 008b11b0 ////

void __fastcall FUN_008b11b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d64404;
  return;
}


//// FUNCTION FUN_008b1210 @ 008b1210 ////

undefined4 * __thiscall FUN_008b1210(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint unaff_EBP;
  void *unaff_EDI;
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebf89;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d64410;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x38),0x18,1,FUN_008af3b0,FUN_00402290);
  *(undefined1 **)((int)this + 0x50) = (undefined1 *)((int)this + 0x5c);
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x14;
  piVar1 = (int *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int **)((int)this + 0x7c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x84) = 0;
  piVar2 = (int *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(int **)((int)this + 0x94) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d166dc;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  puVar3 = (undefined4 *)((int)this + 0xb4);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined ***)((int)this + 0xa0) = &PTR_LAB_00d64404;
  *(undefined4 **)((int)this + 0xa8) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0xa4);
  local_4._0_1_ = 7;
  if ((param_1 != 0) && (param_2 != 0)) {
    (**(code **)(*piVar2 + 4))();
    *(int *)((int)this + 0x9c) = param_2;
    (**(code **)*piVar2)();
    (**(code **)(*piVar1 + 4))();
    *(int *)((int)this + 0x84) = param_1;
    (**(code **)*piVar1)();
    FUN_004015d0((void *)((int)this + 0x50),"ai_canteen_drop.flm",0x13);
    FUN_008b0d00((int)this);
  }
  puVar3 = operator_new(0x2f0);
  local_4._0_1_ = 8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_008b2b80(puVar3);
  }
  local_4._0_1_ = 7;
  (**(code **)(*(int *)((int)this + 0x38) + 4))();
  *(undefined4 **)((int)this + 0x4c) = puVar3;
  (*(code *)**(undefined4 **)((int)this + 0x38))();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  puStack_24 = &DAT_00000014;
  _strncpy(pcStack_2c,"canteenwalkon",0xd);
  uStack_28 = 0xd;
  pcStack_2c[0xd] = '\0';
  piVar1 = *(int **)((int)this + 0x4c);
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004012c0(0.0);
  (**(code **)(*piVar1 + 0x28))(&pcStack_2c,param_1);
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 0x230) = 0;
  ExceptionList = puStack_24;
  return this;
}


//// FUNCTION FUN_008b14d0 @ 008b14d0 ////

int __fastcall FUN_008b14d0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x23c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 <= *(int *)(param_1 + 0x6c)) && (0 < iVar1)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_008b1620 @ 008b1620 ////

void __cdecl FUN_008b1620(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008b1700 @ 008b1700 ////

void __fastcall FUN_008b1700(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x254);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x240) + 4))();
    *(undefined4 *)(param_1 + 0x254) = 0;
                    /* WARNING: Could not recover jumptable at 0x008b1735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x240))();
    return;
  }
  return;
}


//// FUNCTION FUN_008b1740 @ 008b1740 ////

void __fastcall FUN_008b1740(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_008b1750 @ 008b1750 ////

undefined4 * __fastcall FUN_008b1750(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cebfab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x2e8);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0040b940(this,*(int *)(param_1 + 0x1d4));
  }
  local_4 = 0xffffffff;
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    FUN_008ba340(*(void **)(param_1 + 0xa8),puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_008b17d0 @ 008b17d0 ////

void __thiscall FUN_008b17d0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x254);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x240) + 4))();
    *(undefined4 *)((int)this + 0x254) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x240))();
  }
  (**(code **)(*(int *)((int)this + 0x240) + 4))();
  *(undefined4 *)((int)this + 0x254) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x240))();
  return;
}


//// FUNCTION FUN_008b1830 @ 008b1830 ////

void __fastcall FUN_008b1830(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 *puVar4;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_008bc940(param_1);
  if (*(int *)(param_1 + 0x26c) != 0) {
    iVar1 = *(int *)(param_1 + 0x1d4);
    fVar2 = FUN_004012c0(*(float *)(param_1 + 0x214) + 3.1415927);
    fVar2 = FUN_004012c0((float)(fVar2 + (float10)*(float *)(iVar1 + 0xc4)));
    local_28 = (float)fVar2;
    fVar2 = FUN_00990e30(-0.1,0.1);
    local_24 = (float)fVar2;
    fVar2 = FUN_004012c0(local_24);
    fVar2 = FUN_004012c0((float)(fVar2 + (float10)local_28));
    local_28 = (float)fVar2;
    fVar2 = FUN_004012c0((float)(fVar2 + (float10)3.1415927));
    fVar3 = (float10)fcos(fVar2);
    fVar2 = (float10)fsin((float10)(float)fVar2);
    local_24 = (float)fVar3;
    local_20 = (float)fVar2;
    FUN_00412c90(&local_24);
    local_1c = 0.5;
    local_24 = local_24 + local_24;
    local_20 = local_20 + local_20;
    local_4 = *(undefined4 *)(param_1 + 0x220);
    local_8 = local_20 + *(float *)(param_1 + 0x21c);
    local_c = local_24 + *(float *)(param_1 + 0x218);
    if ((*(byte *)(*(undefined4 **)(param_1 + 0x26c) + 0x27) & 0x40) != 0) {
      FUN_009e45b0(*(undefined4 **)(param_1 + 0x26c));
      iVar1 = *(int *)(param_1 + 0x26c);
      local_18 = *(undefined4 *)(iVar1 + 0x3c);
      local_14 = *(undefined4 *)(iVar1 + 0x40);
      local_10 = *(undefined4 *)(iVar1 + 0x44);
      FUN_009840b0(&local_24,&local_18);
      FUN_0046d650(&local_24,-0x3ff,1,0,&local_1c);
    }
    puVar4 = &local_18;
    local_18 = 0x3f000000;
    local_14 = 0x3f000000;
    local_10 = 0x3f000000;
    fVar2 = FUN_004012c0(local_28 + 1.5707964);
    (**(code **)(**(int **)(param_1 + 0x26c) + 0x1c))(&local_c,(float)fVar2,puVar4);
    if ((*(byte *)((int)*(void **)(param_1 + 0x26c) + 0x9c) & 0x40) == 0) {
      FUN_009e4330(*(void **)(param_1 + 0x26c));
      iVar1 = *(int *)(param_1 + 0x26c);
      local_24 = *(float *)(iVar1 + 0x3c);
      local_20 = *(float *)(iVar1 + 0x40);
      local_1c = *(float *)(iVar1 + 0x44);
      FUN_009840b0(&stack0xffffffd0,&local_24);
      FUN_0046d650((float *)&stack0xffffffd0,0x3ff,1,1,&local_28);
    }
  }
  return;
}


//// FUNCTION FUN_008b1a40 @ 008b1a40 ////

void __fastcall FUN_008b1a40(int param_1)

{
  int iVar1;
  float local_18;
  float local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x26c);
  local_18 = 0.5;
  if (iVar1 != 0) {
    local_c = *(undefined4 *)(iVar1 + 0x3c);
    local_8 = *(undefined4 *)(iVar1 + 0x40);
    local_4 = *(undefined4 *)(iVar1 + 0x44);
    FUN_009840b0(local_14,&local_c);
    FUN_0046d650(local_14,0x3ff,1,1,&local_18);
  }
  return;
}


//// FUNCTION FUN_008b1aa0 @ 008b1aa0 ////

float * __thiscall FUN_008b1aa0(void *this,float *param_1)

{
  float10 fVar1;
  
  if (*(int *)((int)this + 0x1d4) != 0) {
    fVar1 = FUN_004012c0(*(float *)(*(int *)((int)this + 0x1d4) + 0xc4) +
                         *(float *)((int)this + 0x214));
    *param_1 = (float)fVar1;
    return param_1;
  }
  fVar1 = FUN_004012c0(3.4028235e+38);
  *param_1 = (float)fVar1;
  return param_1;
}


//// FUNCTION FUN_008b1c30 @ 008b1c30 ////

void __cdecl FUN_008b1c30(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008b1cb0 @ 008b1cb0 ////

int __thiscall FUN_008b1cb0(void *this,undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)((int)this + 0xd0);
  if (iVar5 != (int)this + 0xdc) {
    do {
      pbVar2 = *(byte **)(*(int *)(iVar5 + 8) + 0x180);
      pbVar4 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_008b1d04:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_008b1d09;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_008b1d04;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_008b1d09:
      if (iVar3 == 0) {
        return *(int *)(iVar5 + 8);
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != (int)this + 0xdc);
  }
  return 0;
}


//// FUNCTION FUN_008b1d30 @ 008b1d30 ////

uint __thiscall FUN_008b1d30(void *this,undefined4 *param_1)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)((int)this + 0xd0);
  if (iVar4 != (int)this + 0xdc) {
    do {
      pbVar2 = *(byte **)(*(int *)(iVar4 + 8) + 0x180);
      pbVar3 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_008b1d84:
          in_EAX = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_008b1d89;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_008b1d84;
        pbVar2 = pbVar2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      in_EAX = 0;
LAB_008b1d89:
      if (in_EAX == 0) {
        return 1;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != (int)this + 0xdc);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_008b1db0 @ 008b1db0 ////

undefined4 __thiscall FUN_008b1db0(void *this,undefined4 param_1,int param_2,float param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float local_4;
  
  iVar3 = *(int *)((int)this + 0xd0);
  piVar4 = (int *)0x0;
  local_4 = param_3;
  if (iVar3 != (int)this + 0xdc) {
    do {
      cVar1 = (**(code **)(**(int **)(iVar3 + 8) + 4))(&local_4,param_1,param_2 + 100);
      if ((cVar1 != '\0') && (local_4 < param_3)) {
        piVar4 = *(int **)(iVar3 + 8);
        param_3 = local_4;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != (int)this + 0xdc);
    if (piVar4 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar4 + 8))(param_1,param_2,0x7f7fffff);
      return uVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_008b1eb0 @ 008b1eb0 ////

void __thiscall FUN_008b1eb0(void *this,undefined1 param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)((int)this + 0xd0); iVar1 != (int)this + 0xdc; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x70) = param_1;
  }
  return;
}


//// FUNCTION FUN_008b1ee0 @ 008b1ee0 ////

void __thiscall FUN_008b1ee0(void *this,undefined4 *param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = *(int *)((int)this + 0xd0);
  do {
    if (iVar2 == (int)this + 0xdc) {
      return;
    }
    pbVar5 = (byte *)*param_1;
    pbVar3 = *(byte **)(*(int *)(iVar2 + 8) + 0x180);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_008b1f34:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_008b1f39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_008b1f34;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_008b1f39:
    if (iVar4 == 0) {
      *(undefined1 *)(*(int *)(iVar2 + 8) + 0x70) = param_2;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_008b2000 @ 008b2000 ////

void __thiscall FUN_008b2000(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0xd0) + 8) + 0x10))();
  *(undefined4 *)(iVar1 + 0x124) = param_1;
  return;
}


//// FUNCTION FUN_008b2020 @ 008b2020 ////

void __fastcall FUN_008b2020(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *this;
  
  iVar2 = *(int *)(param_1 + 0xd0);
  this = (void *)(**(code **)(**(int **)(iVar2 + 8) + 0x10))();
  for (iVar2 = *(int *)(iVar2 + 4); iVar2 != param_1 + 0xdc; iVar2 = *(int *)(iVar2 + 4)) {
    iVar3 = *(int *)(iVar2 + 8);
    puVar4 = *(undefined4 **)(iVar3 + 0x254);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)(iVar3 + 0x240) + 4))();
      *(undefined4 *)(iVar3 + 0x254) = 0;
      (*(code *)**(undefined4 **)(iVar3 + 0x240))();
    }
    (**(code **)(*(int *)(iVar3 + 0x240) + 4))();
    *(void **)(iVar3 + 0x254) = this;
    (*(code *)**(undefined4 **)(iVar3 + 0x240))();
    FUN_00495c50(this,iVar3);
  }
  return;
}


//// FUNCTION FUN_008b20c0 @ 008b20c0 ////

void __fastcall FUN_008b20c0(int param_1)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  for (iVar1 = *(int *)(param_1 + 0xd0); iVar1 != param_1 + 0xdc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x26c);
    local_20 = 0.5;
    if (iVar2 != 0) {
      local_14 = *(undefined4 *)(iVar2 + 0x3c);
      local_10 = *(undefined4 *)(iVar2 + 0x40);
      local_c = *(undefined4 *)(iVar2 + 0x44);
      FUN_009840b0(local_1c,&local_14);
      FUN_0046d650(local_1c,0x3ff,1,1,&local_20);
    }
  }
  return;
}


//// FUNCTION FUN_008b2150 @ 008b2150 ////

void __fastcall FUN_008b2150(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  for (iVar2 = *(int *)(param_1 + 0xd0); iVar2 != param_1 + 0xdc; iVar2 = *(int *)(iVar2 + 4)) {
    iVar3 = *(int *)(iVar2 + 8);
    puVar4 = *(undefined4 **)(iVar3 + 0x254);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)(iVar3 + 0x240) + 4))();
      *(undefined4 *)(iVar3 + 0x254) = 0;
      (*(code *)**(undefined4 **)(iVar3 + 0x240))();
    }
  }
  return;
}


//// FUNCTION FUN_008b21b0 @ 008b21b0 ////

void __fastcall FUN_008b21b0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0xd0); iVar1 != param_1 + 0xdc; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x2c))();
  }
  return;
}


//// FUNCTION FUN_008b2200 @ 008b2200 ////

undefined4 * __thiscall FUN_008b2200(void *this,byte param_1)

{
  FUN_008b1740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b2220 @ 008b2220 ////

void __fastcall FUN_008b2220(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
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
  puStack_8 = &LAB_00cec020;
  local_c = ExceptionList;
  local_4c = local_40;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x234) = 1;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4 = 0;
  FUN_00558a50(*(void **)(param_1 + 0x17c),&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"queueable",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4 = 1;
  iVar1 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_4c,1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  *(bool *)(param_1 + 0x234) = iVar1 != 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"bIgnoreQueue",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 2;
  iVar1 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_4c,0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  *(bool *)(param_1 + 0x235) = iVar1 != 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"interactive",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_4 = 3;
  iVar1 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_4c,0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  *(bool *)(param_1 + 0x236) = iVar1 != 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"satisfyincrement",0x10);
  local_48 = 0x10;
  local_4c[0x10] = '\0';
  local_4 = 4;
  fVar3 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_4c,0.0);
  *(float *)(param_1 + 0x68) = (float)fVar3;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"peasantscene",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 5;
  puVar2 = FUN_005584e0(*(void **)(param_1 + 0x17c),local_2c,&local_4c);
  FUN_004015d0((void *)(param_1 + 0x270),(char *)*puVar2,puVar2[1]);
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
  _strncpy(local_4c,"peasantcostume",0xe);
  local_48 = 0xe;
  local_4c[0xe] = '\0';
  local_4 = 6;
  puVar2 = FUN_005584e0(*(void **)(param_1 + 0x17c),local_2c,&local_4c);
  FUN_004015d0((void *)(param_1 + 0x290),(char *)*puVar2,puVar2[1]);
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
  _strncpy(local_4c,"action",6);
  local_48 = 6;
  local_4c[6] = '\0';
  local_4 = 7;
  FUN_00558a50(*(void **)(param_1 + 0x17c),&local_4c,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_00558bb0(*(void **)(param_1 + 0x17c),6);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"cost",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4 = 8;
  FUN_00558a90(*(void **)(param_1 + 0x17c),&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"distancecost",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 9;
  fVar3 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_4c,0.0);
  *(float *)(param_1 + 600) = (float)fVar3;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"queuecost",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4 = 10;
  fVar3 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_4c,0.0);
  *(float *)(param_1 + 0x25c) = (float)fVar3;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"nicenesscost",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 0xb;
  fVar3 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_4c,0.0);
  *(float *)(param_1 + 0x264) = (float)fVar3;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b2790 @ 008b2790 ////

void __fastcall FUN_008b2790(undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  char acStack_2c [4];
  undefined4 uStack_28;
  
  if (param_1[0x43] == 0) {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)();
      return;
    }
  }
  else {
    if (((param_1[0x6b] != 0) && (param_1[0x7f] == 0)) && (*(int *)(param_1[0x43] + 0x2b8) == 5)) {
      uVar5 = (**(code **)(param_1[-0x32] + 0x30))();
      (**(code **)(param_1[0x7a] + 4))();
      param_1[0x7f] = uVar5;
      (**(code **)param_1[0x7a])();
      (**(code **)(*(int *)param_1[0x7f] + 0xb0))();
      FUN_00403130(param_1[0x7f]);
      iVar6 = FUN_00975c50(*(void **)(param_1[0x7f] + 0x214),0);
      iVar8 = 0;
      if (0 < iVar6) {
        do {
          pcVar2 = (char *)param_1[0x72];
          pcVar9 = acStack_2c;
          acStack_2c[0] = '\0';
          uVar10 = 0;
          uVar11 = 0x14;
          pcVar7 = pcVar2;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          FUN_004015d0(&stack0xffffffc8,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
          FUN_00404050((void *)param_1[0x7f],0,iVar8,pcVar9,uVar10,uVar11);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6);
      }
    }
    if (0 < (int)param_1[0x68]) {
      param_1[0x68] = param_1[0x68] + -1;
    }
    if ((*(char *)(param_1 + 0x89) == '\0') && (*(char *)((int)param_1 + 0x16e) != '\0')) {
      cVar3 = (**(code **)(*(int *)param_1[0x43] + 0xc4))();
      if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(int *)param_1[0x43] + 0x16c))(), cVar3 != '\0')
         ) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      *(undefined1 *)(param_1 + -0x16) = uVar4;
    }
    if (param_1[0x7f] != 0) {
      cVar3 = (**(code **)(*(int *)param_1[0x43] + 0xc4))();
      if (cVar3 != '\0') {
        uStack_28 = 0x8b2932;
        FUN_009757a0(*(void **)(param_1[0x7f] + 0x214),(byte *)"ai_knackered",1.0,0);
        return;
      }
      uStack_28 = 0x8b2952;
      FUN_009757a0(*(void **)(param_1[0x7f] + 0x214),(byte *)"ai_knackered",0.0,0);
    }
  }
  return;
}


//// FUNCTION FUN_008b29e0 @ 008b29e0 ////

void * FUN_008b29e0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_008b2a10 @ 008b2a10 ////

int __thiscall FUN_008b2a10(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = FUN_0040d6b0(local_2c,"action/",param_1);
  FUN_004312e0(local_4c,puVar3,"/cost");
  local_4 = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  for (iVar1 = *(int *)((int)this + 0xd0); iVar1 != (int)this + 0xdc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 8);
    uVar4 = FUN_00558a50(*(void **)(iVar2 + 0x17c),local_4c,(undefined4 *)0x0);
    if ((char)uVar4 != '\0') {
      if (local_44 < 0x15) {
        ExceptionList = local_c;
        return iVar2;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_008b2b00 @ 008b2b00 ////

void __fastcall FUN_008b2b00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd0) != param_1 + 0xdc) {
    do {
      piVar1 = *(int **)(param_1 + 0xd0);
      iVar2 = piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x110) + -1;
        *(int *)(iVar2 + 0x110) = iVar3;
        if (iVar3 == 0) {
          (*(code *)**(undefined4 **)(iVar2 + 200))(1);
        }
      }
    } while (*(int *)(param_1 + 0xd0) != param_1 + 0xdc);
  }
  return;
}


//// FUNCTION FUN_008b2b80 @ 008b2b80 ////

undefined4 * __fastcall FUN_008b2b80(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec09e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008bcfe0(param_1);
  piVar1 = param_1 + 0x90;
  *param_1 = &PTR_FUN_00d6450c;
  param_1[0x32] = &PTR_LAB_00d644e4;
  *(undefined1 *)((int)param_1 + 0x237) = 0;
  param_1[0x93] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ec;
  param_1[0x95] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = param_1 + 0x9f;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0x14;
  param_1[0xa4] = param_1 + 0xa7;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0x14;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = param_1 + 0xac;
  param_1[0xac] = &PTR_LAB_00d60770;
  param_1[0xb1] = 0;
  param_1[0xb8] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = param_1 + 0xb5;
  param_1[0xb5] = &PTR_FUN_00d165ac;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  local_4 = 5;
  (**(code **)(*piVar1 + 4))();
  param_1[0x95] = 0;
  (**(code **)*piVar1)();
  param_1[0x9a] = 0;
  (**(code **)(param_1[0x25] + 4))();
  param_1[0x2a] = 0;
  (**(code **)param_1[0x25])();
  *(undefined1 *)((int)param_1 + 0x235) = 0;
  param_1[0x8f] = 1;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0xb2] = 0xfffff380;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined1 *)((int)param_1 + 0x236) = 0;
  FUN_004015d0(param_1 + 0x9c,"",0);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_008b2cf0 @ 008b2cf0 ////

void FUN_008b2cf0(void)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  puVar1 = DAT_010501d0;
  while( true ) {
    if (puVar1 == DAT_010501d4) {
      return;
    }
    _Memory = (undefined4 *)*puVar1;
    if (_Memory != (undefined4 *)0x0) break;
    puVar1 = puVar1 + 1;
  }
  FUN_008b1740(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008b2d30 @ 008b2d30 ////

undefined4 * __cdecl FUN_008b2d30(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (DAT_010501d0 != DAT_010501d4) {
    puVar5 = DAT_010501d0;
    do {
      pbVar2 = *(byte **)*puVar5;
      pbVar4 = (byte *)*param_1;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_008b2d7b:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_008b2d80;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_008b2d7b;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_008b2d80:
      if (iVar3 == 0) {
        return (undefined4 *)*puVar5;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_010501d4);
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008b2da0 @ 008b2da0 ////

void __fastcall FUN_008b2da0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  LONG LVar5;
  float fStack_28;
  undefined4 *local_24;
  float afStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec0fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6450c;
  param_1[0x32] = &PTR_LAB_00d644e4;
  puVar2 = (undefined4 *)param_1[0xb1];
  local_4 = 5;
  local_24 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xac] + 4))();
    param_1[0xb1] = 0;
    (**(code **)param_1[0xac])();
  }
  puVar2 = (undefined4 *)param_1[0x95];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x90] + 4))();
    param_1[0x95] = 0;
    (**(code **)param_1[0x90])();
  }
  puVar2 = (undefined4 *)param_1[0x9b];
  if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 0x27) & 0x40) != 0)) {
    fStack_28 = 0.5;
    FUN_009e45b0(puVar2);
    iVar3 = param_1[0x9b];
    uStack_18 = *(undefined4 *)(iVar3 + 0x3c);
    uStack_14 = *(undefined4 *)(iVar3 + 0x40);
    uStack_10 = *(undefined4 *)(iVar3 + 0x44);
    FUN_009840b0(afStack_20,&uStack_18);
    FUN_0046d650(afStack_20,-0x3ff,1,0,&fStack_28);
  }
  puVar2 = (undefined4 *)param_1[0x9b];
  if (puVar2 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar2 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar4;
    param_1[0x9b] = 0;
  }
  param_1[0xb5] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0xb7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb7] = param_1[0xb6];
  }
  if (param_1[0xb6] != 0) {
    *(undefined4 *)(param_1[0xb6] + 4) = param_1[0xb7];
  }
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  if ((undefined4 *)param_1[0xb7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb7] = param_1[0xb6];
  }
  if (param_1[0xb6] != 0) {
    *(undefined4 *)(param_1[0xb6] + 4) = param_1[0xb7];
  }
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xac] = &PTR_LAB_00d60770;
  if ((undefined4 *)param_1[0xae] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xae] = param_1[0xad];
  }
  if (param_1[0xad] != 0) {
    *(undefined4 *)(param_1[0xad] + 4) = param_1[0xae];
  }
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb1] = 0;
  if ((undefined4 *)param_1[0xae] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xae] = param_1[0xad];
  }
  if (param_1[0xad] != 0) {
    *(undefined4 *)(param_1[0xad] + 4) = param_1[0xae];
  }
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  if ((uint)param_1[0xa6] < 0x15) {
    if ((uint)param_1[0x9e] < 0x15) {
      param_1[0x90] = &PTR_FUN_00d165ec;
      if ((undefined4 *)param_1[0x92] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x92] = param_1[0x91];
      }
      if (param_1[0x91] != 0) {
        *(undefined4 *)(param_1[0x91] + 4) = param_1[0x92];
      }
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      param_1[0x95] = 0;
      if ((undefined4 *)param_1[0x92] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x92] = param_1[0x91];
      }
      if (param_1[0x91] != 0) {
        *(undefined4 *)(param_1[0x91] + 4) = param_1[0x92];
      }
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      local_4 = 0xffffffff;
      FUN_008bd1c0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x9c]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xa4]);
}


//// FUNCTION FUN_008b30e0 @ 008b30e0 ////

uint __thiscall FUN_008b30e0(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  undefined3 uVar10;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 uVar11;
  undefined2 extraout_var;
  void *this_00;
  float *pfVar9;
  float10 fVar12;
  float fStack_5c;
  float local_58 [3];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pfVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cec120;
  local_c = ExceptionList;
  uVar10 = (undefined3)((uint)ExceptionList >> 8);
  uVar8 = CONCAT31(uVar10,*(char *)((int)this + 0x70));
  if (((*(char *)((int)this + 0x70) == '\0') ||
      (uVar8 = CONCAT31(uVar10,*(char *)((int)this + 0x71)), *(char *)((int)this + 0x71) == '\0'))
     || (piVar2 = *(int **)((int)this + 0x1d4), piVar2 == (int *)0x0)) {
LAB_008b33b8:
    return uVar8 & 0xffffff00;
  }
  uVar8 = 0;
  if (piVar2[0xae] == 0) goto LAB_008b33b8;
  piVar5 = (int *)CONCAT31((int3)((uint)piVar2[0xae] >> 8),*(char *)((int)this + 0x22d));
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x22d) != '\0') {
    ExceptionList = &local_c;
    iVar4 = (**(code **)(*piVar2 + 0xec))();
    piVar5 = (int *)0x0;
    if ((iVar4 != 0) &&
       (piVar5 = (int *)(**(code **)(**(int **)((int)this + 0x1d4) + 0xec))(), piVar5 != param_2))
    goto LAB_008b315a;
  }
  piVar2 = param_2;
  piVar5 = (int *)CONCAT31((int3)((uint)piVar5 >> 8),*(char *)((int)this + 0x22c));
  if (*(char *)((int)this + 0x22c) != '\0') {
    pfVar9 = local_58;
    pfVar6 = (float *)(**(code **)(*param_2 + 0x34))(pfVar9,(int)this + 0x218);
    FUN_00412f80(pfVar6,pfVar9);
    piVar5 = (int *)(**(code **)(**(int **)((int)this + 0x1d4) + 0xec))();
    if (piVar5 == piVar2) {
      fStack_5c = fStack_5c * 0.33333334;
    }
    fVar1 = *(float *)((int)this + 0x228);
    piVar5 = (int *)CONCAT22((short)((uint)piVar5 >> 0x10),
                             (ushort)(fStack_5c < fVar1) << 8 |
                             (ushort)(NAN(fStack_5c) || NAN(fVar1)) << 10 |
                             (ushort)(fStack_5c == fVar1) << 0xe);
    if (fStack_5c >= fVar1 && (fStack_5c == fVar1) == 0) {
LAB_008b315a:
      ExceptionList = local_c;
      return (uint)piVar5 & 0xffffff00;
    }
  }
  uVar8 = CONCAT31((int3)((uint)piVar5 >> 8),*(char *)((int)this + 0x234));
  if (*(char *)((int)this + 0x234) == '\0') {
    iVar4 = *(int *)((int)this + 0x6c);
    if (piVar2 == DAT_0104d524) {
      if (0 < iVar4) {
LAB_008b31df:
        ExceptionList = local_c;
        return uVar8 & 0xffffff00;
      }
    }
    else {
      if (*(int *)((int)this + 0x254) != 0) {
        uVar8 = FUN_00495c20(*(int *)((int)this + 0x254));
        iVar4 = iVar4 + uVar8;
      }
      if (0 < iVar4) goto LAB_008b31df;
      if (0 < (int)*(uint *)((int)this + 0x268)) {
        ExceptionList = local_c;
        return *(uint *)((int)this + 0x268) & 0xffffff00;
      }
    }
  }
  *param_1 = 0.0;
  puVar7 = FUN_0040d6b0(apvStack_2c,"action/",param_3);
  uStack_4 = 0;
  puVar7 = FUN_004312e0(apvStack_4c,puVar7,"/cost");
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  uVar8 = FUN_00558a50(*(void **)((int)this + 0x17c),puVar7,(undefined4 *)0x0);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  uStack_4 = 0xffffffff;
  if (uStack_24 < 0x15) {
    if ((char)uVar8 == '\0') {
      ExceptionList = local_c;
      return uVar8 & 0xffffff00;
    }
    uVar11 = (undefined2)(uVar8 >> 0x10);
    if (*(float *)((int)this + 600) != 0.0) {
      pfVar9 = (float *)((int)this + 0x218);
      pfVar6 = (float *)(**(code **)(*piVar2 + 0x34))(local_58);
      fVar12 = FUN_00412f80(pfVar6,pfVar9);
      *param_1 = (float)(fVar12 * (float10)*(float *)((int)this + 600) + (float10)*param_1);
      uVar11 = extraout_var;
    }
    if (*(float *)((int)this + 0x25c) != 0.0) {
      this_00 = (void *)(**(code **)(*(int *)this + 0x10))();
      param_1 = (float *)0x0;
      pfVar9 = (float *)0x0;
      if (((this_00 != (void *)0x0) &&
          (pfVar6 = (float *)FUN_00495c20((int)this_00), pfVar9 = pfVar6, 0 < (int)pfVar6)) &&
         (pfVar9 = (float *)FUN_00496be0(this_00,(int)param_2), param_1 = pfVar9,
         pfVar9 == (float *)0xffffffff)) {
        param_1 = pfVar6;
      }
      uVar11 = (undefined2)((uint)pfVar9 >> 0x10);
      *pfVar3 = (float)(int)param_1 * *(float *)((int)this + 0x25c) + *pfVar3;
    }
    fVar1 = *(float *)((int)this + 0x264);
    pfVar9 = (float *)CONCAT22(uVar11,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                      (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 != 0.0) {
      pfVar9 = (float *)FUN_00454b40(DAT_00f88720,&param_2,(float *)((int)this + 0x218));
      *pfVar3 = (1.0 - *pfVar9) * *(float *)((int)this + 0x264) + *pfVar3;
    }
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)pfVar9 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_2c[0]);
}


//// FUNCTION FacilityPlacement_RegisterQueueEntryPoint @ 008b33d0 ////

void * __thiscall FacilityPlacement_RegisterQueueEntryPoint(void *this,int param_1,int param_2)

{
  void *this_00;
  void *this_01;
  undefined1 *puStack0000000c;
  char *in_stack_ffffffd0;
  uint in_stack_ffffffd4;
  uint in_stack_ffffffd8;
  int iVar1;
  
  if ((*(char *)((int)this + 0x234) == '\0') && (0 < *(int *)((int)this + 0x268))) {
    return (void *)0x0;
  }
  this_00 = (void *)FUN_008bca40(this,param_1,param_2);
  if (this_00 != (void *)0x0) {
    FUN_004016a0(this_00,this);
  }
  if (*(char *)((int)this + 0x235) != '\0') {
    *(undefined1 *)((int)this_00 + 0x290) = 1;
  }
  if (*(char *)((int)this + 0x234) == '\0') {
    iVar1 = param_1;
    this_01 = (void *)(**(code **)(*(int *)this + 0x10))();
    CQueue_RegisterEntryPoint(this_01,iVar1);
    puStack0000000c = &stack0xffffffd0;
    *(uint *)((int)this_00 + 0x210) = *(uint *)((int)this_00 + 0x210) & 0xfffffffe;
    FUN_0040d6b0((undefined4 *)&stack0xffffffd0,"got explained for",(undefined4 *)(param_2 + 100));
    FUN_0054de30((void *)(param_1 + 0x214),in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8);
    *(undefined4 *)((int)this + 0x268) = 10;
  }
  return this_00;
}


//// FUNCTION FUN_008b37c0 @ 008b37c0 ////

void __thiscall FUN_008b37c0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  FUN_008ab570((int)this);
  (**(code **)(*(int *)((int)this + 0x2d4) + 4))();
  *(undefined4 *)((int)this + 0x2e8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x2d4))();
  *(undefined4 *)((int)this + 0x2c8) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  puVar1 = FUN_008b2d30((undefined4 *)((int)this + 0x180));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[8] = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  }
  return;
}


//// FUNCTION FUN_008b3820 @ 008b3820 ////

uint __thiscall FUN_008b3820(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  byte **ppbVar13;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec180;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_2c,"facility_toilet1",0x10);
  local_28 = 0x10;
  local_2c[0x10] = 0;
  local_4 = 0;
  puVar5 = (undefined4 *)FUN_00528450(*(int *)((int)this + 0x1d4));
  pbVar6 = (byte *)*puVar5;
  pbVar11 = local_2c;
  do {
    bVar2 = *pbVar6;
    bVar12 = bVar2 < *pbVar11;
    if (bVar2 != *pbVar11) {
LAB_008b38b4:
      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_008b38b9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar12 = bVar2 < pbVar11[1];
    if (bVar2 != pbVar11[1]) goto LAB_008b38b4;
    pbVar6 = pbVar6 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_008b38b9:
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar7 == 0) {
    uVar8 = FUN_00598ee0((int)param_2);
    if ((char)uVar8 != '\0') {
      piVar3 = *(int **)((int)this + 0x1d4);
      pfVar9 = (float *)FUN_00585ff0(param_2,&local_3c);
      fVar4 = *pfVar9;
      pfVar9 = (float *)(**(code **)(*piVar3 + 0xcc))(local_38);
      fVar1 = *pfVar9;
      uVar10 = CONCAT22((short)((uint)pfVar9 >> 0x10),
                        (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                        (ushort)(fVar4 == fVar1) << 0xe);
      if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) goto LAB_008b392d;
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    _strncpy((char *)local_2c,"facility_toilet3",0x10);
    local_28 = 0x10;
    local_2c[0x10] = 0;
    ppbVar13 = &local_2c;
    local_4 = 1;
    puVar5 = (undefined4 *)FUN_00528450(*(int *)((int)this + 0x1d4));
    uVar8 = FUN_00401ec0(puVar5,ppbVar13);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if ((char)uVar8 != '\0') {
      uVar10 = FUN_00598ee0((int)param_2);
      if ((char)uVar10 != '\0') {
        piVar3 = *(int **)((int)this + 0x1d4);
        pfVar9 = (float *)FUN_00585ff0(param_2,&local_34);
        fVar4 = *pfVar9;
        pfVar9 = (float *)(**(code **)(*piVar3 + 0xcc))(local_30);
        fVar1 = *pfVar9;
        uVar10 = CONCAT22((short)((uint)pfVar9 >> 0x10),
                          (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                          (ushort)(fVar4 == fVar1) << 0xe);
        if (fVar4 >= fVar1) goto LAB_008b3a1a;
      }
LAB_008b392d:
      ExceptionList = local_c;
      return uVar10 & 0xffffff00;
    }
  }
LAB_008b3a1a:
  uVar10 = FUN_008b30e0(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return uVar10;
}


//// FUNCTION FUN_008b3a40 @ 008b3a40 ////

uint __thiscall FUN_008b3a40(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  uVar1 = FUN_00598ee0((int)param_2);
  if ((char)uVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x270))();
    if (iVar2 != 0) {
      iVar2 = *(int *)((int)this + 0x1d4);
      iVar3 = (**(code **)(*param_2 + 0x270))();
      if (iVar2 == iVar3) goto LAB_008b3aa5;
    }
    iVar2 = (**(code **)(*param_2 + 0x270))();
    if (iVar2 == 0) {
      pvVar4 = (void *)FUN_00528450(*(int *)((int)this + 0x1d4));
      uVar5 = FUN_00413450(pvVar4,"trailer",0,7);
      if (uVar5 == 0xffffffff) {
LAB_008b3aa5:
        uVar5 = FUN_008b30e0(this,param_1,param_2,param_3);
        return uVar5;
      }
    }
  }
  pvVar4 = (void *)FUN_00528450(*(int *)((int)this + 0x1d4));
  uVar5 = FUN_00413450(pvVar4,"trailer",0,7);
  if (uVar5 != 0xffffffff) {
    uVar5 = FUN_0084b200(*(int *)((int)this + 0x1d4));
    if (uVar5 == 0) {
      uVar5 = FUN_008b30e0(this,param_1,param_2,param_3);
      return uVar5;
    }
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_008b3b10 @ 008b3b10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_008b3b10(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  int *this_00;
  undefined4 uVar2;
  float *pfVar3;
  uint uVar4;
  
  this_00 = param_2;
  uVar2 = FUN_00598ee0((int)param_2);
  if ((char)uVar2 != '\0') {
    pfVar3 = (float *)FUN_00585ff0(this_00,&param_2);
    fVar1 = *pfVar3;
    if (fVar1 >= _DAT_00e53e6c && (fVar1 == _DAT_00e53e6c) == 0) {
      return CONCAT22((short)((uint)pfVar3 >> 0x10),
                      (ushort)(fVar1 < _DAT_00e53e6c) << 8 |
                      (ushort)(NAN(fVar1) || NAN(_DAT_00e53e6c)) << 10 |
                      (ushort)(fVar1 == _DAT_00e53e6c) << 0xe);
    }
  }
  uVar4 = FUN_008b30e0(this,param_1,this_00,param_3);
  return uVar4;
}


//// FUNCTION FUN_008b3b60 @ 008b3b60 ////

uint __thiscall FUN_008b3b60(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  bool bVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  undefined2 extraout_var_00;
  float10 fVar9;
  float *pfStack_4;
  
  bVar5 = FUN_00430950(param_3,"task_repairman");
  uVar7 = CONCAT31(extraout_var,bVar5);
  if (!bVar5) {
    iVar6 = FUN_00ace790(*(int **)((int)this + 0x1d4),0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CSet::RTTI_Type_Descriptor,0);
    if (iVar6 != 0) {
      uVar7 = FUN_004cba70(iVar6);
      if ((char)uVar7 != '\0') goto LAB_008b3c14;
    }
    uVar7 = *(uint *)((int)this + 0x1d4);
    if ((uVar7 != 0) && (*(int *)(uVar7 + 0x2b8) != 0)) {
      uVar7 = CONCAT31((int3)(uVar7 >> 8),*(char *)((int)this + 0x234));
      if (*(char *)((int)this + 0x234) == '\0') {
        iVar6 = *(int *)((int)this + 0x6c);
        if (*(int *)((int)this + 0x254) != 0) {
          uVar7 = FUN_00495c20(*(int *)((int)this + 0x254));
          iVar6 = iVar6 + uVar7;
        }
        if ((0 < iVar6) || (uVar7 = *(uint *)((int)this + 0x268), 0 < (int)uVar7))
        goto LAB_008b3c14;
      }
      pfVar8 = (float *)(**(code **)(**(int **)((int)this + 0x1d4) + 0xb8))(&param_3);
      fVar1 = *pfVar8;
      uVar7 = CONCAT22((short)((uint)pfVar8 >> 0x10),
                       (ushort)(fVar1 < 0.95) << 8 | (ushort)NAN(fVar1) << 10 |
                       (ushort)(fVar1 == 0.95) << 0xe);
      if (fVar1 < 0.95 || (fVar1 == 0.95) != 0) {
        pfVar8 = (float *)(**(code **)(*param_1 + 0x34))(&stack0xfffffff0);
        fVar9 = FUN_00412f80((float *)((int)this + 0x218),pfVar8);
        fVar9 = fVar9 * (float10)0.033333335;
        fVar4 = (float10)1.0;
        bVar5 = NAN(fVar9);
        bVar2 = fVar9 < fVar4;
        bVar3 = fVar9 == fVar4;
        if (bVar2 == 0 && bVar3 == 0) {
          fVar9 = (float10)1.0;
        }
        *pfStack_4 = (float)(fVar9 * (float10)0.2 + (float10)(float)param_1);
        return CONCAT31((int3)(CONCAT22(extraout_var_00,
                                        (ushort)bVar2 << 8 | (ushort)(bVar5 || NAN(fVar4)) << 10 |
                                        (ushort)bVar3 << 0xe) >> 8),1);
      }
    }
  }
LAB_008b3c14:
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_008b3c70 @ 008b3c70 ////

void __fastcall FUN_008b3c70(int param_1)

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


//// FUNCTION FUN_008b3ca0 @ 008b3ca0 ////

undefined4 * FUN_008b3ca0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008b3cd0 @ 008b3cd0 ////

undefined4 * __thiscall FUN_008b3cd0(void *this,byte param_1)

{
  FUN_008b2da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b3d60 @ 008b3d60 ////

uint __thiscall FUN_008b3d60(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = DAT_0104cdf4;
  if ((param_2 == DAT_0104d524) ||
     ((((puVar2 = *(undefined4 **)((int)this + 0x2d0), (int)puVar2 < 1 ||
        ((int)puVar2 <= *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)this + 0x2c8))) &&
       ((puVar2 = *(undefined4 **)((int)this + 0x2cc), (int)puVar2 < 1 ||
        ((*(int **)((int)this + 0x2e8) != param_2 ||
         ((int)puVar2 <= *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)this + 0x2c8))))))) &&
      ((puVar2 = FUN_008b2d30((undefined4 *)((int)this + 0x180)), puVar2 == (undefined4 *)0x0 ||
       ((int)puVar2[9] <= *(int *)(iVar1 + 0x3c) - puVar2[8])))))) {
    puVar2 = *(undefined4 **)((int)this + 0x224);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = FUN_008b30e0(this,param_1,param_2,param_3);
      return uVar3;
    }
    switch(puVar2) {
    case (undefined4 *)0x1:
      uVar3 = FUN_008b3b60(this,(int *)param_1,param_2,param_3);
      return uVar3;
    case (undefined4 *)0x2:
      uVar3 = FUN_008b3b10(this,param_1,param_2,param_3);
      return uVar3;
    case (undefined4 *)0x3:
      uVar3 = FUN_008b3820(this,param_1,param_2,param_3);
      return uVar3;
    case (undefined4 *)0x4:
      uVar3 = FUN_008b3a40(this,param_1,param_2,param_3);
      return uVar3;
    }
  }
  return (uint)puVar2 & 0xffffff00;
}


//// FUNCTION FUN_008b3e90 @ 008b3e90 ////

void FUN_008b3e90(void)

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
  puStack_8 = &LAB_00cec198;
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


//// FUNCTION FUN_008b3f50 @ 008b3f50 ////

void __thiscall FUN_008b3f50(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008b3e90();
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
      _Dst = FUN_008b3ca0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_008b29e0(param_1,iVar5,param_1 + param_2);
      FUN_008b3ca0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008b1620(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_008b29e0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008b1c30(param_1,(int)pvVar3,iVar5);
    FUN_008b1620(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008b4190 @ 008b4190 ////

void __thiscall FUN_008b4190(void *this,undefined4 *param_1)

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
  FUN_008b3f50(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_008b41e0 @ 008b41e0 ////

void __fastcall FUN_008b41e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec1d8;
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
  FUN_00558a50(*(void **)(param_1 + 0x17c),&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"bHideDropIcon",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 1;
  iVar1 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_2c,0);
  *(bool *)(param_1 + 0x239) = iVar1 != 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"reexplainticks",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 2;
  uVar2 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_2c,0);
  *(undefined4 *)(param_1 + 0x2cc) = uVar2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"globalreexplainticks",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 3;
  uVar2 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_2c,0);
  *(undefined4 *)(param_1 + 0x2d0) = uVar2;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"typeinterval",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 4;
  iVar1 = FUN_00558750(*(void **)(param_1 + 0x17c),&local_2c,0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar1 != 0) {
    puVar3 = FUN_008b2d30((undefined4 *)(param_1 + 0x180));
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = operator_new(0x28);
      puVar3 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar4 + 3) = 0;
        puVar4[1] = 0;
        *puVar4 = puVar4 + 3;
        puVar4[2] = 0x14;
        puVar3 = puVar4;
      }
      local_30 = puVar3;
      FUN_004015d0(puVar3,*(char **)(param_1 + 0x180),*(uint *)(param_1 + 0x184));
      puVar3[8] = 0xfffff380;
      puVar3[9] = iVar1;
      FUN_008b4190(&DAT_010501cc,&local_30);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b4680 @ 008b4680 ////

void __thiscall FUN_008b4680(void *this,undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec210;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008bdaa0(this,param_1,param_2,param_3);
  FUN_008b2220((int)this);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = 0;
  FUN_00558a50(*(void **)((int)this + 0x17c),&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"capacity",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  uVar1 = FUN_00558750(*(void **)((int)this + 0x17c),&local_2c,1);
  *(undefined4 *)((int)this + 0x23c) = uVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"bargeable",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 2;
  iVar2 = FUN_00558750(*(void **)((int)this + 0x17c),&local_2c,0);
  *(bool *)((int)this + 0x238) = iVar2 != 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"blocks",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = 3;
  iVar2 = FUN_00558750(*(void **)((int)this + 0x17c),&local_2c,1);
  *(bool *)((int)this + 0xc4) = iVar2 != 0;
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_008b41e0((int)this);
  (**(code **)(*(int *)this + 0x10))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008b48c0 @ 008b48c0 ////

undefined4 * __thiscall FUN_008b48c0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec228;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008ab900(this);
  *(undefined ***)this = &PTR_FUN_00d64628;
  *(int **)((int)this + 200) = param_1;
  local_4 = 0;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x34))(local_18);
  *(undefined4 *)((int)this + 0xcc) = *puVar1;
  *(undefined4 *)((int)this + 0xd0) = puVar1[1];
  *(undefined4 *)((int)this + 0xd4) = puVar1[2];
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_008b4940 @ 008b4940 ////

undefined4 * __thiscall FUN_008b4940(void *this,byte param_1)

{
  thunk_FUN_008ab6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b4970 @ 008b4970 ////

void __thiscall FUN_008b4970(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  char **ppcVar10;
  float local_38;
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
  puStack_8 = &LAB_00cec259;
  local_c = ExceptionList;
  bVar9 = false;
  iVar7 = *(int *)(*(int *)((int)this + 200) + 0x11c);
  local_38 = *(float *)(iVar7 + 0x3c);
  fVar2 = local_38 - *(float *)((int)this + 0xcc);
  local_34 = *(float *)(iVar7 + 0x40);
  local_30 = *(float *)(iVar7 + 0x44);
  puVar1 = (undefined4 *)((int)this + 0xcc);
  fVar4 = local_34 - *(float *)((int)this + 0xd0);
  fVar3 = local_30 - *(float *)((int)this + 0xd4);
  if (fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= 4.0) goto LAB_008b4b0e;
  ExceptionList = &local_c;
  uVar6 = FUN_00598ee0(*(int *)((int)this + 200));
  if ((char)uVar6 == '\0') {
LAB_008b4aa1:
    bVar5 = false;
  }
  else {
    iVar7 = FUN_005998e0(*(int *)((int)this + 200));
    if (iVar7 == 0) goto LAB_008b4aa1;
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"readyposition",0xd);
    local_28 = 0xd;
    local_2c[0xd] = '\0';
    ppcVar10 = &local_2c;
    local_4 = 0;
    bVar9 = true;
    iVar7 = FUN_005998e0(*(int *)((int)this + 200));
    iVar7 = FUN_00401c30(iVar7);
    uVar6 = FUN_00401ec0((undefined4 *)(iVar7 + 100),ppcVar10);
    if ((char)uVar6 == '\0') goto LAB_008b4aa1;
    iVar7 = FUN_005998e0(*(int *)((int)this + 200));
    bVar5 = true;
    if (*(char *)(iVar7 + 0x291) == '\0') goto LAB_008b4aa1;
  }
  local_4 = 0xffffffff;
  if ((bVar9) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar5) {
    puVar8 = FUN_0058c510(*(void **)((int)this + 200),&local_38);
    *puVar1 = *puVar8;
    *(undefined4 *)((int)this + 0xd0) = puVar8[1];
    *(undefined4 *)((int)this + 0xd4) = puVar8[2];
  }
  else {
    iVar7 = *(int *)((int)*(void **)((int)this + 200) + 0x11c);
    *puVar1 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(iVar7 + 0x40);
    *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(iVar7 + 0x44);
  }
LAB_008b4b0e:
  *param_1 = *puVar1;
  param_1[1] = *(undefined4 *)((int)this + 0xd0);
  param_1[2] = *(undefined4 *)((int)this + 0xd4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b4b40 @ 008b4b40 ////

undefined4 * __thiscall FUN_008b4b40(float *param_1,int *param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  undefined4 *unaff_EBP;
  undefined4 *puVar12;
  float10 fVar13;
  char **ppcVar14;
  float fVar15;
  float **ppfVar16;
  undefined1 *puStack_b0;
  float *local_ac;
  char *pcStack_a8;
  float fStack_a4;
  undefined1 *puStack_a0;
  float *local_9c;
  char *pcStack_98;
  float fStack_94;
  float fStack_90;
  char acStack_8c [12];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  void *apvStack_78 [2];
  uint uStack_70;
  float fStack_5c;
  float afStack_58 [2];
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float local_40 [2];
  undefined4 uStack_38;
  void *apvStack_34 [2];
  uint uStack_2c;
  undefined1 auStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cec43d;
  pvStack_c = ExceptionList;
  local_ac = (float *)&stack0xffffff38;
  ExceptionList = &pvStack_c;
  local_9c = param_1;
  bVar2 = FUN_0059c5e0((int)param_1[0x32]);
  if (bVar2) {
    ExceptionList = pvStack_c;
    return unaff_EBP;
  }
  pfVar4 = (float *)(**(code **)(*param_2 + 0x34))();
  pfVar5 = (float *)FUN_008b4970(param_1,afStack_58);
  puStack_a0 = (undefined1 *)(pfVar5[2] - pfVar4[2]);
  fStack_a4 = pfVar5[1] - pfVar4[1];
  pcStack_a8 = (char *)(*pfVar5 - *pfVar4);
  FUN_009840b0(auStack_14,&pcStack_a8);
  FUN_00984190(auStack_14,(float *)&local_ac);
  pcStack_98 = acStack_8c;
  acStack_8c[0] = '\0';
  fStack_94 = 0.0;
  fStack_90 = 2.8026e-44;
  _strncpy(pcStack_98,"tantrum",7);
  ppcVar14 = &pcStack_98;
  puVar12 = (undefined4 *)(param_3 + 100);
  fStack_94 = 9.80909e-45;
  puVar9 = puVar12;
  pcStack_98[7] = '\0';
  uVar6 = FUN_00401ec0(puVar9,ppcVar14);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    local_9c = (float *)&stack0xffffff30;
    (**(code **)(*param_2 + 0x34))(&stack0xffffff30);
    uVar6 = FUN_004eeb80();
    if ((char)uVar6 == '\0') {
      puVar7 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x1;
      puStack_b0 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        fVar13 = FUN_00990e30(0.0,6.2831855);
        puStack_a0 = (undefined1 *)(float)fVar13;
        fVar13 = FUN_004012c0((float)puStack_a0);
        fVar15 = (float)fVar13;
        puVar9 = FUN_004eebe0(&fStack_5c,param_2,0.0);
        local_ac = (float *)*puVar9;
        pcStack_a8 = (char *)puVar9[1];
        fStack_a4 = 0.0;
        piVar8 = FUN_00445f60(puVar7,(float *)&local_ac,fVar15);
      }
      *(undefined1 *)(piVar8 + 0xb7) = 1;
    }
    else {
      puVar7 = operator_new(0x2e0);
      piVar8 = (int *)0x0;
      puStack_8 = (undefined1 *)0x0;
      puStack_a0 = puVar7;
      if (puVar7 != (undefined1 *)0x0) {
        iVar11 = param_2[0x31];
        pfVar4 = (float *)(**(code **)(*param_2 + 0x34))();
        piVar8 = FUN_00445f60(puVar7,pfVar4,iVar11);
      }
    }
    local_9c = &fStack_90;
    fStack_90 = (float)((uint)fStack_90 & 0xffffff00);
    pcStack_98 = (char *)0x0;
    fStack_94 = 2.8026e-44;
    _strncpy((char *)local_9c,"ai_solotantrum.flm",0x12);
    pcStack_98 = (char *)0x12;
    *(char *)((int)local_9c + 0x12) = '\0';
    puStack_8 = (undefined1 *)0x2;
    (**(code **)(*piVar8 + 0xb0))();
    if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    pcStack_98 = acStack_8c;
    acStack_8c[0] = '\0';
    fStack_94 = 0.0;
    fStack_90 = 2.8026e-44;
    _strncpy(pcStack_98,"ai_tantrum",10);
    fStack_94 = 1.4013e-44;
    pcStack_98[10] = '\0';
    uStack_4 = 3;
    fVar13 = FUN_0083f4a0(param_3);
    FUN_00404790(piVar8,&pcStack_98,(float)fVar13);
    uStack_4 = 0xffffffff;
    if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 4;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    FUN_004016f0(puVar9,param_1);
    *(undefined1 *)(puVar9 + 0xa4) = 1;
    piVar1 = piVar8 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      ExceptionList = pvStack_c;
      return unaff_EBP;
    }
    (**(code **)*piVar8)();
    ExceptionList = pvStack_c;
    return unaff_EBP;
  }
  pcStack_98 = acStack_8c;
  acStack_8c[0] = '\0';
  fStack_94 = 0.0;
  fStack_90 = 2.8026e-44;
  _strncpy(pcStack_98,"unfulfilled",0xb);
  ppcVar14 = &pcStack_98;
  fStack_94 = 1.54143e-44;
  puVar9 = puVar12;
  pcStack_98[0xb] = '\0';
  uVar6 = FUN_00401ec0(puVar9,ppcVar14);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    pfVar4 = (float *)FUN_005999f0(param_2,&puStack_b0);
    if (*pfVar4 == 0.0) {
      ExceptionList = pvStack_c;
      return unaff_EBP;
    }
    puStack_b0 = &stack0xffffff30;
    (**(code **)(*param_2 + 0x34))(&stack0xffffff30);
    uVar6 = FUN_004eeb80();
    if ((char)uVar6 == '\0') {
      pvVar10 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x6;
      if (pvVar10 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        uVar6 = 0;
        puVar9 = FUN_004eebe0(&fStack_5c,param_2,0.0);
        local_ac = (float *)*puVar9;
        pcStack_a8 = (char *)puVar9[1];
        fStack_a4 = 0.0;
        fVar13 = FUN_00990e30(0.0,6.2831855);
        puStack_b0 = &stack0xffffff34;
        FUN_00401340(&stack0xffffff34,(float)fVar13);
        piVar8 = FUN_00445f60(pvVar10,(float *)&local_ac,uVar6);
      }
      *(undefined1 *)(piVar8 + 0xb7) = 1;
    }
    else {
      pvVar10 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x5;
      if (pvVar10 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        iVar11 = param_2[0x31];
        pfVar4 = (float *)(**(code **)(*param_2 + 0x34))();
        piVar8 = FUN_00445f60(pvVar10,pfVar4,iVar11);
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_008415a0(param_2,&uStack_38);
    puStack_8 = (undefined1 *)0x7;
    (**(code **)(*piVar8 + 0xb0))();
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 8;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    param_1 = local_9c;
LAB_008b50b4:
    FUN_004016f0(puVar9,param_1);
    *(undefined1 *)(puVar9 + 0xa4) = 1;
    piVar1 = piVar8 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar8)();
    }
    ExceptionList = pvStack_c;
    return unaff_EBP;
  }
  pcStack_98 = acStack_8c;
  acStack_8c[0] = '\0';
  fStack_94 = 0.0;
  fStack_90 = 2.8026e-44;
  _strncpy(pcStack_98,"agony",5);
  ppcVar14 = &pcStack_98;
  fStack_94 = 7.00649e-45;
  puVar9 = puVar12;
  pcStack_98[5] = '\0';
  uVar6 = FUN_00401ec0(puVar9,ppcVar14);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    puStack_b0 = &stack0xffffff30;
    (**(code **)(*param_2 + 0x34))(&stack0xffffff30);
    uVar6 = FUN_004eeb80();
    if ((char)uVar6 == '\0') {
      pvVar10 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0xa;
      if (pvVar10 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        uVar6 = 0;
        puVar9 = FUN_004eebe0(&fStack_5c,param_2,0.0);
        local_ac = (float *)*puVar9;
        pcStack_a8 = (char *)puVar9[1];
        fStack_a4 = 0.0;
        fVar13 = FUN_00990e30(0.0,6.2831855);
        puStack_a0 = &stack0xffffff34;
        FUN_00401340(&stack0xffffff34,(float)fVar13);
        piVar8 = FUN_00445f60(pvVar10,(float *)&local_ac,uVar6);
      }
      *(undefined1 *)(piVar8 + 0xb7) = 1;
    }
    else {
      pvVar10 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x9;
      if (pvVar10 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        iVar11 = param_2[0x31];
        pfVar4 = (float *)(**(code **)(*param_2 + 0x34))();
        piVar8 = FUN_00445f60(pvVar10,pfVar4,iVar11);
      }
    }
    local_9c = &fStack_90;
    fStack_90 = (float)((uint)fStack_90 & 0xffffff00);
    pcStack_98 = (char *)0x0;
    fStack_94 = 2.8026e-44;
    _strncpy((char *)local_9c,"ai_agony.flm",0xc);
    pcStack_98 = (char *)0xc;
    *(char *)(local_9c + 3) = '\0';
    puStack_8 = (undefined1 *)0xb;
    (**(code **)(*piVar8 + 0xb0))();
    uStack_4 = 0xffffffff;
    if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 0xc;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    goto LAB_008b50b4;
  }
  pcStack_98 = acStack_8c;
  acStack_8c[0] = '\0';
  fStack_94 = 0.0;
  fStack_90 = 2.8026e-44;
  _strncpy(pcStack_98,"droplitter",10);
  ppcVar14 = &pcStack_98;
  fStack_94 = 1.4013e-44;
  puVar9 = puVar12;
  pcStack_98[10] = '\0';
  uVar6 = FUN_00401ec0(puVar9,ppcVar14);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    puVar9 = FUN_004eebe0(afStack_58,param_2,0.0);
    pcStack_a8 = (char *)*puVar9;
    fStack_a4 = (float)puVar9[1];
    puStack_a0 = (undefined1 *)0x0;
    puStack_b0 = operator_new(0x2e0);
    uStack_4 = 0xd;
    if (puStack_b0 == (undefined1 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = FUN_00445f60(puStack_b0,(float *)&pcStack_a8,param_2[0x31]);
    }
    *(undefined1 *)(piVar8 + 0xb7) = 1;
    FUN_00401de0(&pcStack_98,"ai_throwlitter.flm",0xffffffff);
    uStack_4 = 0xe;
    (**(code **)(*piVar8 + 0xb0))();
    puStack_8 = (undefined1 *)0xffffffff;
    if ((uint)fStack_94 < 0x15) {
      (**(code **)(*piVar8 + 0xe8))();
      puStack_b0 = operator_new(0x2b4);
      uStack_4 = 0xf;
      if (puStack_b0 == (undefined1 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
      }
      uStack_4 = 0xffffffff;
      FUN_00401a00(puVar9,param_3);
      FUN_004016f0(puVar9,local_9c);
      *(undefined1 *)(puVar9 + 0xa4) = 1;
      FUN_00401440(piVar8);
      puVar9[0x84] = puVar9[0x84] | 2;
      ExceptionList = pvStack_c;
      return unaff_EBP;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  FUN_00401de0(&pcStack_98,"vomit",0xffffffff);
  uVar6 = FUN_00401ec0(puVar12,&pcStack_98);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    puVar9 = FUN_004eebe0(afStack_58,param_2,0.0);
    pcStack_a8 = (char *)*puVar9;
    fStack_a4 = (float)puVar9[1];
    puStack_a0 = (undefined1 *)0x0;
    puStack_b0 = operator_new(0x2e0);
    uStack_4 = 0x10;
    if (puStack_b0 == (undefined1 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = FUN_00445f60(puStack_b0,(float *)&pcStack_a8,param_2[0x31]);
    }
    *(undefined1 *)(piVar8 + 0xb7) = 1;
    FUN_00401de0(&pcStack_98,"ai_vomit.flm",0xffffffff);
    uStack_4 = 0x11;
    (**(code **)(*piVar8 + 0xb0))();
    puStack_8 = (undefined1 *)0xffffffff;
    if (0x14 < (uint)fStack_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    (**(code **)(*piVar8 + 0xe8))();
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 0x12;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    puVar9[0x84] = puVar9[0x84] | 2;
    iVar11 = FUN_00598cd0(param_2);
    FUN_004016f0(puVar9,iVar11);
    goto LAB_008b6049;
  }
  FUN_00401de0(&pcStack_98,"assist",0xffffffff);
  uVar6 = FUN_00401ec0(puVar12,&pcStack_98);
  if (0x14 < (uint)fStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((char)uVar6 != '\0') {
    puVar7 = operator_new(0x2e0);
    uStack_4 = 0x13;
    puStack_b0 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      puVar9 = (undefined4 *)(**(code **)(*(int *)local_9c[0x32] + 0x34))();
      FUN_009840b0(afStack_58,puVar9);
      puVar9 = (undefined4 *)FUN_0046d1c0(local_40,afStack_58,0x31);
      pcStack_a8 = (char *)*puVar9;
      local_ac = (float *)&stack0xffffff38;
      fStack_a4 = (float)puVar9[1];
      puStack_a0 = (undefined1 *)0x0;
      fVar13 = FUN_004012c0(0.0);
      piVar8 = FUN_00445f60(puVar7,(float *)&pcStack_a8,(float)fVar13);
    }
    uStack_4 = 0xffffffff;
    FUN_00401de0(apvStack_34,"assist",0xffffffff);
    uVar6 = FUN_00401ec0(puVar12,apvStack_34);
    if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_34[0]);
    }
    if (((char)uVar6 != '\0') &&
       (iVar11 = FUN_00ace790(param_2,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                              &TM::CStaff::RTTI_Type_Descriptor,0), *(int *)(iVar11 + 0x814) == 0xd)
       ) {
      FUN_0056db80(*(void **)(iVar11 + 0x7b8),apvStack_34);
      uStack_4 = 0x14;
      (**(code **)(*piVar8 + 0xb0))();
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_34[0]);
      }
    }
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 0x15;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    pfVar4 = local_9c;
    FUN_00974bf0((void *)piVar8[0x85],*(void **)((int)local_9c[0x32] + 0x11c),0);
    *(undefined1 *)(puVar9 + 0xa4) = 1;
    FUN_004016f0(puVar9,pfVar4);
    piVar8[0xaf] = 0x3e800000;
    goto LAB_008b6049;
  }
  FUN_00401de0(apvStack_78,"followboss",0xffffffff);
  local_ac = (float *)0x1;
  uVar6 = FUN_00401ec0(puVar12,apvStack_78);
  if ((char)uVar6 == '\0') {
    FUN_00401de0(&pcStack_98,"pesterstar",0xffffffff);
    local_ac = (float *)0x3;
    uVar6 = FUN_00401ec0(puVar12,&pcStack_98);
    if ((char)uVar6 != '\0') goto LAB_008b588e;
    FUN_00401de0(apvStack_34,"followpaparazzi",0xffffffff);
    local_ac = (float *)0x7;
    uVar6 = FUN_00401ec0(puVar12,apvStack_34);
    bVar2 = false;
    if ((char)uVar6 != '\0') goto LAB_008b588e;
  }
  else {
LAB_008b588e:
    bVar2 = true;
  }
  if ((((uint)local_ac & 4) != 0) &&
     (local_ac = (float *)((uint)local_ac & 0xfffffffb), 0x14 < uStack_2c)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_34[0]);
  }
  if ((((uint)local_ac & 2) != 0) &&
     (local_ac = (float *)((uint)local_ac & 0xfffffffd), 0x14 < (uint)fStack_90)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if ((((uint)local_ac & 1) != 0) && (0x14 < uStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_78[0]);
  }
  if (bVar2) {
    puVar7 = operator_new(0x2e0);
    uStack_4 = 0x16;
    puStack_b0 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      puVar9 = (undefined4 *)(**(code **)(*(int *)param_1[0x32] + 0x34))();
      FUN_009840b0(afStack_58,puVar9);
      puVar9 = (undefined4 *)FUN_0046d1c0(local_40,afStack_58,0x31);
      pcStack_a8 = (char *)*puVar9;
      local_9c = (float *)&stack0xffffff38;
      fStack_a4 = (float)puVar9[1];
      puStack_a0 = (undefined1 *)0x0;
      fVar13 = FUN_004012c0(0.0);
      piVar8 = FUN_00445f60(puVar7,(float *)&pcStack_a8,(float)fVar13);
    }
    FUN_00401de0(apvStack_78,"ai_donothing.flm",0xffffffff);
    uStack_4 = 0x17;
    (**(code **)(*piVar8 + 0xb0))();
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_78[0]);
    }
    puStack_b0 = operator_new(0x2b4);
    uStack_4 = 0x18;
    if (puStack_b0 == (undefined1 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(puVar9,param_3);
    *(undefined1 *)(puVar9 + 0xa4) = 1;
    FUN_004016f0(puVar9,param_1);
  }
  else {
    FUN_00401de0(apvStack_78,"changecostume",0xffffffff);
    uVar6 = FUN_00401ec0(puVar12,apvStack_78);
    if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_78[0]);
    }
    if ((char)uVar6 == '\0') {
      FUN_00401de0(apvStack_78,"panic",0xffffffff);
      uVar6 = FUN_00401ec0(puVar12,apvStack_78);
      if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_78[0]);
      }
      if ((char)uVar6 == '\0') {
        FUN_00401de0(apvStack_78,"eatonspot",0xffffffff);
        uVar6 = FUN_00401ec0(puVar12,apvStack_78);
        if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_78[0]);
        }
        if ((char)uVar6 == '\0') {
          FUN_00401de0(apvStack_78,"drinkonspot",0xffffffff);
          uVar6 = FUN_00401ec0(puVar12,apvStack_78);
          if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_78[0]);
          }
          if ((char)uVar6 == '\0') {
            ExceptionList = pvStack_c;
            return unaff_EBP;
          }
          (**(code **)(*(int *)param_1[0x32] + 0x34))();
          fVar13 = FUN_00990e30(-8.0,8.0);
          fStack_50 = (float)(fVar13 + (float10)fStack_50);
          fVar13 = FUN_00990e30(-8.0,8.0);
          fStack_4c = (float)(fVar13 + (float10)fStack_4c);
          FUN_009840b0(&fStack_5c,&fStack_50);
          pfVar4 = (float *)FUN_0046d2b0(&fStack_44,&fStack_5c,0x31,2);
          fStack_50 = *pfVar4;
          fStack_4c = pfVar4[1];
          uStack_48 = 0;
          pvVar10 = operator_new(0x2e0);
          puStack_8 = (undefined1 *)0x22;
          if (pvVar10 == (void *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_00445f60(pvVar10,&fStack_50,*(undefined4 *)((int)param_1[0x32] + 0xc4));
          }
          FUN_00401de0(auStack_7c,"ai_drinkonspot.flm",0xffffffff);
          puStack_8 = (undefined1 *)0x23;
          (**(code **)(*piVar8 + 0xb0))();
          uStack_4 = 0xffffffff;
          if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_78[0]);
          }
          puStack_b0 = operator_new(0x2b4);
          uStack_4 = 0x24;
        }
        else {
          (**(code **)(*(int *)param_1[0x32] + 0x34))();
          fVar13 = FUN_00990e30(-8.0,8.0);
          local_ac = (float *)(float)(fVar13 + (float10)(float)local_ac);
          fVar13 = FUN_00990e30(-8.0,8.0);
          pcStack_a8 = (char *)(float)(fVar13 + (float10)(float)pcStack_a8);
          FUN_009840b0(&fStack_5c,&local_ac);
          puVar9 = (undefined4 *)FUN_0046d2b0(&fStack_44,&fStack_5c,0x31,2);
          local_ac = (float *)*puVar9;
          pcStack_a8 = (char *)puVar9[1];
          fStack_a4 = 0.0;
          pvVar10 = operator_new(0x2e0);
          puStack_8 = (undefined1 *)0x1f;
          if (pvVar10 == (void *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_00445f60(pvVar10,(float *)&local_ac,
                                  *(undefined4 *)((int)param_1[0x32] + 0xc4));
          }
          FUN_00401de0(auStack_7c,"ai_eatonspot.flm",0xffffffff);
          puStack_8 = (undefined1 *)0x20;
          (**(code **)(*piVar8 + 0xb0))();
          uStack_4 = 0xffffffff;
          if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_78[0]);
          }
          puStack_b0 = operator_new(0x2b4);
          uStack_4 = 0x21;
        }
        if (puStack_b0 == (undefined1 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
        }
        uStack_4 = 0xffffffff;
        FUN_00401a00(puVar9,param_3);
        puVar9[0x84] = puVar9[0x84] | 2;
      }
      else {
        puVar7 = operator_new(0x2e0);
        uStack_4 = 0x1c;
        puStack_b0 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          ppfVar16 = &local_9c;
          (**(code **)(*param_2 + 0x4c))();
          pfVar4 = (float *)(**(code **)(*param_2 + 0x34))();
          piVar8 = FUN_00445f60(puVar7,pfVar4,ppfVar16);
        }
        FUN_00401de0(apvStack_78,"ai_assist_panic.flm",0xffffffff);
        uStack_4 = 0x1d;
        (**(code **)(*piVar8 + 0xb0))();
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_78[0]);
        }
        puStack_b0 = operator_new(0x2b4);
        uStack_4 = 0x1e;
        if (puStack_b0 == (undefined1 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
        }
        uStack_4 = 0xffffffff;
        FUN_00401a00(puVar9,param_3);
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x32] + 0x34))();
      puVar7 = *(undefined1 **)((int)param_1[0x32] + 0xc4);
      local_9c = (float *)0x0;
      pcStack_98 = (char *)0x0;
      fStack_94 = 0.0;
      iVar11 = FUN_0059c530((int)param_1[0x32]);
      if (((iVar11 != 0) && (*(int *)(iVar11 + 0x98) != 0)) &&
         (cVar3 = (**(code **)(**(int **)(*(int *)(iVar11 + 0x98) + 0x20c) + 0xd8))(), cVar3 != '\0'
         )) {
        fVar13 = FUN_004012c0(fStack_90);
        puVar7 = (undefined1 *)(float)fVar13;
        local_ac = local_9c;
        pcStack_a8 = pcStack_98;
        fStack_a4 = fStack_94;
        puStack_a0 = puVar7;
      }
      pvVar10 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x19;
      if (pvVar10 == (void *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = FUN_00445f60(pvVar10,(float *)&local_ac,puVar7);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar8 + 0xe8))();
      FUN_00401de0(auStack_80,"ai_cos_change_on_spot.flm",0xffffffff);
      pvStack_c = (void *)0x1a;
      (**(code **)(*piVar8 + 0xb0))();
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_78[0]);
      }
      puStack_b0 = operator_new(0x2b4);
      uStack_4 = 0x1b;
      if (puStack_b0 == (undefined1 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = FUN_00402380(puStack_b0,(int)param_2,piVar8);
      }
      uStack_4 = 0xffffffff;
      FUN_00401a00(puVar9,param_3);
    }
  }
LAB_008b6049:
  FUN_00401440(piVar8);
  ExceptionList = pvStack_c;
  return unaff_EBP;
}


//// FUNCTION FUN_008b6070 @ 008b6070 ////

undefined4 __thiscall FUN_008b6070(void *this,float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  char **ppcVar14;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [8];
  undefined1 auStack_48 [4];
  undefined1 local_44 [12];
  undefined4 local_38 [3];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec469;
  local_c = ExceptionList;
  bVar10 = false;
  ExceptionList = &local_c;
  FUN_008b4970(this,&local_5c);
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  fVar11 = FUN_004012c0(0.0);
  if (param_2[0x131] == 8) {
    iVar5 = FUN_00ace790(param_2,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    if (*(int *)(iVar5 + 0x814) == 0xd) {
      iVar6 = FUN_005998e0(iVar5);
      if (iVar6 == 0) goto LAB_008b616b;
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"assist",6);
      local_28 = 6;
      local_2c[6] = '\0';
      ppcVar14 = &local_2c;
      local_4 = 0;
      bVar10 = true;
      iVar6 = FUN_005998e0(iVar5);
      iVar6 = FUN_00401c30(iVar6);
      uVar7 = FUN_00401ec0((undefined4 *)(iVar6 + 100),ppcVar14);
      bVar4 = true;
      if ((char)uVar7 == '\0') goto LAB_008b616b;
    }
    else {
LAB_008b616b:
      bVar4 = false;
    }
    local_4 = 0xffffffff;
    if ((bVar10) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (bVar4) {
      piVar3 = *(int **)(*(int *)(iVar5 + 0x7b8) + 0x84);
      if (piVar3 == (int *)0x0) {
        param_1[3] = (float)param_2[0x31];
      }
      else {
        pfVar8 = (float *)(**(code **)(*param_2 + 0x34))(local_50);
        pfVar9 = (float *)(**(code **)(*piVar3 + 0x34))(auStack_48);
        local_54 = pfVar9[2] - pfVar8[2];
        local_58 = pfVar9[1] - pfVar8[1];
        local_5c = *pfVar9 - *pfVar8;
        FUN_009840b0(&local_68,&local_5c);
        FUN_00412c90(&local_68);
        fVar11 = (float10)fpatan((float10)local_64,(float10)local_68);
        param_1[3] = (float)fVar11;
      }
      pfVar8 = (float *)(**(code **)(*param_2 + 0x34))(local_44);
      *param_1 = *pfVar8;
      param_1[1] = pfVar8[1];
      param_1[2] = pfVar8[2];
      param_1 = pfVar8;
      goto LAB_008b633c;
    }
  }
  fVar1 = local_68;
  fVar12 = (float10)*(float *)(*(int *)((int)this + 200) + 0xc4);
  fVar13 = (float10)fcos(fVar12);
  local_68 = local_64;
  fVar12 = (float10)fsin(fVar12);
  local_5c = (float)(fVar13 * (float10)fVar1 + (float10)local_64 * -fVar12 +
                    (float10)(local_60 * 0.0));
  local_58 = (float)(fVar12 * (float10)fVar1 + (float10)local_64 * fVar13 +
                    (float10)(local_60 * 0.0));
  local_54 = (local_64 + fVar1) * 0.0 + local_60;
  pfVar8 = (float *)FUN_008b4970(this,local_38);
  fVar1 = pfVar8[1];
  fVar2 = pfVar8[2];
  *param_1 = local_5c + *pfVar8;
  param_1[1] = local_58 + fVar1;
  param_1[2] = local_54 + fVar2;
  param_1[3] = (float)fVar11 + *(float *)(*(int *)((int)this + 200) + 0xc4);
LAB_008b633c:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_008b6370 @ 008b6370 ////

undefined4 * __thiscall FUN_008b6370(void *this,undefined4 *param_1,undefined4 *param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008b2b80(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d64744;
  *(undefined ***)((int)this + 200) = &PTR_LAB_00d64718;
  FUN_008b4680(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008b63f0 @ 008b63f0 ////

void __fastcall FUN_008b63f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d64744;
  param_1[0x32] = &PTR_LAB_00d64718;
  FUN_008b2da0(param_1);
  return;
}


//// FUNCTION FUN_008b6420 @ 008b6420 ////

undefined4 * __thiscall FUN_008b6420(void *this,byte param_1)

{
  FUN_008b63f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b6440 @ 008b6440 ////

void __thiscall FUN_008b6440(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x94) + 4))();
  *(undefined4 *)((int)this + 0xa8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x94))();
  *(undefined4 *)(*(int *)((int)this + 0xa8) + 0x2b4) = *(undefined4 *)((int)this + 0x23c);
  return;
}


//// FUNCTION FUN_008b6480 @ 008b6480 ////

undefined4 * __fastcall FUN_008b6480(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec4ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x2e8);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0040b940(this,*(int *)(param_1 + 0x1d4));
  }
  local_4 = 0xffffffff;
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    FUN_008ba340(*(void **)(param_1 + 0xa8),puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_008b6500 @ 008b6500 ////

int * __thiscall FUN_008b6500(void *this,int *param_1,char *param_2,uint param_3,uint param_4)

{
  float fVar1;
  void **ppvVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined *puStack_40;
  undefined4 *local_24;
  float local_20;
  int *local_1c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec4c8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_1c = (int *)0x0;
  local_20 = 0.0;
  local_24 = DAT_0104cfc8;
  piVar7 = (int *)0x0;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar7 = (int *)local_24[2];
      if (piVar7 != param_1) {
        puStack_40 = (undefined *)0x8b6565;
        piVar5 = (int *)FUN_0059c530((int)piVar7);
        if (piVar5 != (int *)0x0) {
          puStack_40 = (undefined *)0x8b657f;
          bVar3 = FUN_0059c510((int)piVar7);
          if (!bVar3) {
            puStack_40 = (undefined *)0x8b6593;
            pfVar6 = (float *)(**(code **)(*piVar5 + 0x24))();
            fVar1 = *pfVar6;
            puStack_40 = (undefined *)0x8b65a5;
            pfVar6 = (float *)FUN_0059a8f0(piVar7,&uStack_10);
            if (*pfVar6 <= fVar1 + 0.2) {
              puStack_58 = auStack_4c;
              auStack_4c[0] = 0;
              uStack_54 = 0;
              uStack_50 = 0x14;
              FUN_004015d0(&puStack_58,param_2,param_3);
              cVar4 = (**(code **)(*(int *)this + 0x38))(param_1,piVar7);
              if (cVar4 != '\0') {
                puStack_40 = (undefined *)0x8b65f9;
                bVar3 = FUN_00842c80(piVar7);
                if ((bVar3) && (local_20 < fVar1)) {
                  local_20 = fVar1;
                  local_1c = piVar7;
                }
              }
            }
          }
        }
      }
      local_24 = (undefined4 *)local_24[1];
      piVar7 = local_1c;
      ppvVar2 = ExceptionList;
    } while (local_24 != &DAT_0104cfd4);
  }
  ExceptionList = ppvVar2;
  if (param_4 < 0x15) {
    ExceptionList = pvStack_c;
    return piVar7;
  }
                    /* WARNING: Subroutine does not return */
  puStack_40 = &UNK_008b6642;
  _free(param_2);
}


//// FUNCTION FUN_008b6660 @ 008b6660 ////

/* WARNING: Removing unreachable block (ram,0x008b67df) */
/* WARNING: Removing unreachable block (ram,0x008b6702) */

uint FUN_008b6660(int *param_1,int *param_2,byte *param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_20 [14];
  undefined1 local_12;
  undefined1 local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec4e8;
  local_c = ExceptionList;
  pbVar5 = local_20;
  local_4 = 0;
  local_20[0] = 0;
  ExceptionList = &local_c;
  _strncpy((char *)pbVar5,"match_sexintrailer",0x12);
  local_e = 0;
  pbVar2 = param_3;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_008b66ef:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_008b66f4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_008b66ef;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_008b66f4:
  if ((iVar3 == 0) && (param_1[0x128] == param_2[0x128])) {
    piVar4 = param_1;
    if (0x14 < param_5) {
                    /* WARNING: Subroutine does not return */
      _free(param_3);
    }
  }
  else {
    pbVar5 = local_20;
    local_20[0] = 0;
    _strncpy((char *)pbVar5,"match_makelove",0xe);
    local_12 = 0;
    pbVar2 = param_3;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_008b67c8:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_008b67cd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_008b67c8;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_008b67cd:
    piVar4 = (int *)0x0;
    if ((iVar3 != 0) ||
       (((piVar4 = (int *)FUN_00598ee0((int)param_1), (char)piVar4 != '\0' &&
         (piVar4 = (int *)FUN_00598ee0((int)param_2), (char)piVar4 != '\0')) &&
        (piVar4 = (int *)FUN_0042edc0(param_1,param_2), (char)piVar4 != '\0')))) {
      if (param_5 < 0x15) {
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)piVar4 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(param_3);
    }
    if (0x14 < param_5) {
                    /* WARNING: Subroutine does not return */
      _free(param_3);
    }
  }
  ExceptionList = local_c;
  return (uint)piVar4 & 0xffffff00;
}


//// FUNCTION FUN_008b6880 @ 008b6880 ////

int * __fastcall FUN_008b6880(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  void *unaff_EBP;
  char *pcStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  char acStack_80 [20];
  void *apvStack_6c [2];
  uint uStack_64;
  char acStack_4c [60];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cec50b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_008ba220(param_1[0x2a]);
  if (iVar1 == -1) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x30))();
  pcStack_8c = acStack_80;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x14;
  _strncpy(pcStack_8c,"",0);
  uStack_88 = 0;
  *pcStack_8c = '\0';
  uStack_4 = 0;
  puVar3 = FUN_00430770(param_1 + 0x7a,apvStack_6c,0,param_1[0x7b] - 5);
  FUN_004073f0(&pcStack_8c,(char *)*puVar3,puVar3[1]);
  sVar4 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,iVar1);
  FUN_004073f0(&pcStack_8c,acStack_4c,sVar4);
  FUN_004073f0(&pcStack_8c,".flm",4);
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_6c[0]);
  }
  (**(code **)(*piVar2 + 0xb0))(&pcStack_8c);
  FUN_008ba250((void *)param_1[0x2a],iVar1,(int)piVar2);
  if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  ExceptionList = pvStack_10;
  return piVar2;
}


//// FUNCTION FUN_008b69e0 @ 008b69e0 ////

undefined4 * __thiscall FUN_008b69e0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *this_00;
  void *this_01;
  undefined4 *this_02;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec52b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = FUN_008b6880(this);
  this_02 = (undefined4 *)0x0;
  if (this_00 == (int *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  this_01 = operator_new(0x2b4);
  local_4 = 0;
  if (this_01 != (void *)0x0) {
    this_02 = FUN_00402380(this_01,param_1,this_00);
  }
  local_4 = 0xffffffff;
  FUN_004016a0(this_02,this);
  FUN_00401a00(this_02,param_2);
  FUN_008bc610();
  piVar1 = this_00 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*this_00)();
  }
  (**(code **)(*this_00 + 0xe8))();
  FUN_004039a0(this_00,this);
  (**(code **)(*this_00 + 0xe4))();
  this_00[0xb9] = *(int *)((int)this + 0x214);
  ExceptionList = unaff_ESI;
  return this_02;
}


//// FUNCTION FUN_008b6ae0 @ 008b6ae0 ////

uint __thiscall FUN_008b6ae0(void *this,float *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  char local_1c [4];
  undefined4 uStack_18;
  
  uStack_18 = 0x8b6af8;
  uVar1 = FUN_00413450(param_3,"match",0,5);
  if (uVar1 == 0) {
    uVar1 = FUN_00479e80(param_3,(undefined4 *)((int)this + 0x74));
    if ((char)uVar1 == '\0') {
      pcVar3 = local_1c;
      local_1c[0] = '\0';
      uVar1 = 0;
      uVar4 = 0x14;
      FUN_004015d0(&stack0xffffffd8,(char *)*param_3,param_3[1]);
      piVar2 = FUN_008b6500(this,param_2,pcVar3,uVar1,uVar4);
      uVar1 = 0;
      if (piVar2 != (int *)0x0) {
        uVar1 = FUN_008ba220(*(int *)((int)this + 0xa8));
        if (uVar1 != 0xffffffff) {
          *param_1 = 0.0;
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
      }
    }
  }
  else {
    uVar1 = FUN_008ba220(*(int *)((int)this + 0xa8));
    if (uVar1 != 0xffffffff) {
      uStack_18 = 0x8b6b22;
      uVar1 = FUN_008b3d60(this,param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_008b6ba0 @ 008b6ba0 ////

undefined4 * __thiscall FUN_008b6ba0(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *this_00;
  int *this_01;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *this_02;
  char *pcVar6;
  uint uVar7;
  undefined1 *puStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar5 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cec566;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00413450(param_2 + 0x19,"match",0,5);
  if (uVar1 == 0xffffffff) {
    puVar2 = FUN_008b69e0(this,(int)param_1,param_2);
    ExceptionList = local_c;
    return puVar2;
  }
  pcVar6 = &stack0xffffffa4;
  uVar1 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff98,(char *)param_2[0x19],param_2[0x1a]);
  this_00 = FUN_008b6500(this,param_1,pcVar6,uVar1,uVar7);
  if (this_00 != (int *)0x0) {
    this_01 = FUN_008b6880(this);
    if (this_01 != (int *)0x0) {
      pvVar3 = operator_new(0x2b4);
      uStack_4 = 0;
      if (pvVar3 == (void *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = FUN_00402380(pvVar3,(int)param_1,this_01);
      }
      uStack_4 = 0xffffffff;
      FUN_004016a0(param_2,this);
      FUN_00401a00(param_2,piVar5);
      param_2[0x91] = 0;
      FUN_008bc610();
      piVar4 = this_01 + 0x12;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*this_01)();
      }
      piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      param_2[0x84] = param_2[0x84] & 0xfffffffe;
      pvVar3 = (void *)FUN_00ace790(piVar5,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                    &TM::InteractingDesire::RTTI_Type_Descriptor,0);
      piVar5 = (int *)FUN_00ace790(this_00,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      if ((piVar5 != (int *)0x0) && (pvVar3 != (void *)0x0)) {
        FUN_00842c50(pvVar3,piVar5);
      }
      puStack_30 = operator_new(0x2b4);
      uStack_4 = 1;
      if (puStack_30 == (undefined1 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_00402380(puStack_30,(int)piVar5,this_01);
      }
      puStack_30 = &stack0xffffffb4;
      uStack_4 = 0xffffffff;
      this_02 = (int *)FUN_0059c530((int)this_00);
      FUN_00842ef0(this_02,1);
      FUN_00401a00(puVar2,this_02);
      puVar2[0x84] = puVar2[0x84] & 0xfffffffe;
      puVar2[0x91] = 1;
      TMCharacter_AddAction(this_00,(int)puVar2);
      pvVar3 = (void *)FUN_00ace790(this_02,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                    &TM::InteractingDesire::RTTI_Type_Descriptor,0);
      FUN_00842c50(pvVar3,piVar4);
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy(pcStack_2c,"ai_chemistry",0xc);
      uStack_28 = 0xc;
      pcStack_2c[0xc] = '\0';
      uStack_4 = 2;
      puVar2 = FUN_0042e9a0(&puStack_30,piVar4,piVar5);
      FUN_00404790(this_01,&pcStack_2c,*puVar2);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      uVar1 = FUN_0042edc0(piVar4,piVar5);
      if ((char)uVar1 != '\0') {
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"ai_lovers",9);
        uStack_28 = 9;
        pcStack_2c[9] = '\0';
        uStack_4 = 3;
        FUN_00404790(this_01,&pcStack_2c,0x3f800000);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
      ExceptionList = local_c;
      return param_2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008b6c00 @ 008b6c00 ////

undefined4 * FUN_008b6c00(void)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piStack00000010;
  undefined1 *puStack00000018;
  char *pcStack0000001c;
  undefined4 uStack00000020;
  uint uStack00000024;
  char cStack00000028;
  void *in_stack_0000003c;
  undefined4 uStack00000044;
  int *in_stack_0000004c;
  undefined4 *puStack00000050;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  puStack00000050 = (undefined4 *)&stack0xffffffe0;
  pcVar6 = &stack0xffffffec;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffffe0,(char *)*unaff_EBP,unaff_EBP[1]);
  piVar1 = FUN_008b6500(unaff_ESI,in_stack_0000004c,pcVar6,uVar7,uVar8);
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_008b6880(unaff_ESI);
    if (piVar2 != (int *)0x0) {
      piStack00000010 = piVar2;
      puStack00000050 = operator_new(0x2b4);
      uStack00000044 = 0;
      if (puStack00000050 == (void *)0x0) {
        puStack00000050 = (undefined4 *)0x0;
      }
      else {
        puStack00000050 = FUN_00402380(puStack00000050,(int)in_stack_0000004c,piVar2);
      }
      puVar4 = puStack00000050;
      uStack00000044 = 0xffffffff;
      FUN_004016a0(puStack00000050,unaff_ESI);
      FUN_00401a00(puVar4,unaff_EDI);
      puVar4[0x91] = 0;
      FUN_008bc610();
      piVar5 = piStack00000010;
      piVar2 = piStack00000010 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*piStack00000010)();
      }
      in_stack_0000004c =
           (int *)FUN_00ace790(in_stack_0000004c,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
      puVar4[0x84] = puVar4[0x84] & 0xfffffffe;
      pvVar3 = (void *)FUN_00ace790(unaff_EDI,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                    &TM::InteractingDesire::RTTI_Type_Descriptor,0);
      piVar2 = (int *)FUN_00ace790(piVar1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      if ((piVar2 != (int *)0x0) && (pvVar3 != (void *)0x0)) {
        FUN_00842c50(pvVar3,piVar2);
      }
      puStack00000018 = operator_new(0x2b4);
      uStack00000044 = 1;
      if (puStack00000018 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00402380(puStack00000018,(int)piVar2,piVar5);
      }
      puStack00000018 = &stack0xfffffffc;
      uStack00000044 = 0xffffffff;
      piVar5 = (int *)FUN_0059c530((int)piVar1);
      FUN_00842ef0(piVar5,1);
      FUN_00401a00(puVar4,piVar5);
      puVar4[0x84] = puVar4[0x84] & 0xfffffffe;
      puVar4[0x91] = 1;
      TMCharacter_AddAction(piVar1,(int)puVar4);
      pvVar3 = (void *)FUN_00ace790(piVar5,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                    &TM::InteractingDesire::RTTI_Type_Descriptor,0);
      piVar5 = in_stack_0000004c;
      FUN_00842c50(pvVar3,in_stack_0000004c);
      pcStack0000001c = &stack0x00000028;
      cStack00000028 = '\0';
      uStack00000020 = 0;
      uStack00000024 = 0x14;
      _strncpy(pcStack0000001c,"ai_chemistry",0xc);
      uStack00000020 = 0xc;
      pcStack0000001c[0xc] = '\0';
      uStack00000044 = 2;
      puVar4 = FUN_0042e9a0(&stack0x00000018,piVar5,piVar2);
      piVar1 = piStack00000010;
      in_stack_0000004c = (int *)*puVar4;
      FUN_00404790(piStack00000010,&stack0x0000001c,in_stack_0000004c);
      uStack00000044 = 0xffffffff;
      if (0x14 < uStack00000024) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack0000001c);
      }
      uVar7 = FUN_0042edc0(piVar5,piVar2);
      if ((char)uVar7 != '\0') {
        pcStack0000001c = &stack0x00000028;
        cStack00000028 = '\0';
        uStack00000020 = 0;
        uStack00000024 = 0x14;
        _strncpy(pcStack0000001c,"ai_lovers",9);
        uStack00000020 = 9;
        pcStack0000001c[9] = '\0';
        uStack00000044 = 3;
        FUN_00404790(piVar1,&stack0x0000001c,0x3f800000);
        if (0x14 < uStack00000024) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack0000001c);
        }
      }
      ExceptionList = in_stack_0000003c;
      return puStack00000050;
    }
  }
  ExceptionList = in_stack_0000003c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008b6f30 @ 008b6f30 ////

void __fastcall FUN_008b6f30(int param_1)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float10 fVar5;
  float *local_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  local_1c = (float *)&DAT_010501dc;
  piVar3 = (int *)(param_1 + 0x188);
  pfVar4 = (float *)&DAT_010501f0;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0x170) + 0x34))(local_c);
      fStack_14 = pfVar4[1] + pfVar2[2];
      fStack_18 = pfVar2[1] + *pfVar4;
      local_1c = (float *)(pfVar4[-1] + *pfVar2);
      (**(code **)(*piVar1 + 0x2c))(&local_1c);
      fVar5 = FUN_004012c0(*(float *)(*(int *)(param_1 + 0x170) + 0xc4) + *local_1c);
      FUN_004462a0((void *)*piVar3,(float)fVar5);
    }
    pfVar4 = pfVar4 + 3;
    local_1c = local_1c + 1;
    piVar3 = piVar3 + 6;
  } while ((int)pfVar4 < 0x1050220);
  return;
}


//// FUNCTION FUN_008b7010 @ 008b7010 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b7010(void)

{
  float10 fVar1;
  
  DAT_010501f0 = 0xc00a4dd3;
  DAT_010501ec = 0xbc03126f;
  DAT_010501f4 = 0;
  DAT_010501fc = 0x3fc76c8b;
  DAT_010501f8 = 0x3f9ef9db;
  DAT_01050200 = 0;
  _DAT_01050208 = 0x3fe91687;
  _DAT_01050204 = 0xbecac083;
  _DAT_0105020c = 0;
  _DAT_01050214 = 0xbfbeb852;
  _DAT_01050210 = 0xbf83126f;
  _DAT_01050218 = 0;
  fVar1 = FUN_004012c0(1.3275323);
  _DAT_010501dc = (float)fVar1;
  fVar1 = FUN_004012c0(-2.1038897);
  DAT_010501e0 = (float)fVar1;
  fVar1 = FUN_004012c0(-1.100884);
  _DAT_010501e4 = (float)fVar1;
  fVar1 = FUN_004012c0(0.7843859);
  _DAT_010501e8 = (float)fVar1;
  return;
}


//// FUNCTION FUN_008b7180 @ 008b7180 ////

undefined4 * __cdecl FUN_008b7180(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x4a0) != 0) {
    iVar1 = *(int *)(param_3 + 0x4a0);
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = 0x14;
    *param_1 = param_1 + 3;
    if (iVar1 == 1) {
      FUN_004015d0(param_1,"ai_fight_fvf.flm",0x10);
      return param_1;
    }
    FUN_004015d0(param_1,"ai_fight_fvm.flm",0x10);
    return param_1;
  }
  iVar1 = *(int *)(param_3 + 0x4a0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0x14;
  *param_1 = param_1 + 3;
  if (iVar1 == 1) {
    FUN_004015d0(param_1,"ai_fight_mvf.flm",0x10);
    return param_1;
  }
  FUN_004015d0(param_1,"ai_fight_mvm.flm",0x10);
  return param_1;
}


//// FUNCTION FUN_008b7250 @ 008b7250 ////

undefined4 * __thiscall FUN_008b7250(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec5e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(this);
  local_4 = 0;
  FUN_0053c420((undefined4 *)((int)this + 200));
  *(undefined ***)this = &PTR_FUN_00d64850;
  *(undefined4 *)((int)this + 200) = &PTR_LAB_00d64830;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  piVar1 = (int *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(int **)((int)this + 0x168) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165fc;
  *(undefined4 *)((int)this + 0x170) = 0;
  local_4._0_1_ = 5;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x174),0x18,4,FUN_0042f630,FUN_0042f680);
  piVar2 = (int *)((int)this + 0x1d4);
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x1dc) = this;
  FUN_00acdb9e(0xe5eb90);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x1e0) = iVar3;
  if (DAT_00e5eb8c != '\0') {
    iVar3 = 0x1d4;
    pcVar7 = "GlobalLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5eb90);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    DAT_00e5eb8c = '\0';
  }
  *(int ***)((int)this + 0x1d8) = &DAT_01050230;
  *piVar2 = (int)DAT_01050230;
  *(int **)((int)DAT_01050230 + 4) = piVar2;
  DAT_01050230 = piVar2;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x170) = param_1;
  (**(code **)*piVar1)();
  *(void **)((int)this + 0x134) = this;
  FUN_00acdb9e(0xe5eb90);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x138) = iVar3;
  if (s___AVCFightGawpExplainer_TM___00e5eb6c[0x1f] != '\0') {
    iVar3 = 300;
    pcVar7 = "GawpLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5eb90);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s___AVCFightGawpExplainer_TM___00e5eb6c[0x1f] = '\0';
  }
  *(void **)((int)this + 0x144) = this;
  FUN_00acdb9e(0xe5eb90);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x148) = iVar3;
  if (s___AVCFightGawpExplainer_TM___00e5eb6c[0x1e] != '\0') {
    iVar3 = 0x13c;
    pcVar7 = "PlayLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5eb90);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s___AVCFightGawpExplainer_TM___00e5eb6c[0x1e] = '\0';
  }
  *(void **)((int)this + 0x154) = this;
  FUN_00acdb9e(0xe5eb90);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x158) = iVar3;
  if (s___AVCFightGawpExplainer_TM___00e5eb6c[0x1d] != '\0') {
    iVar3 = 0x14c;
    pcVar7 = "PropLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5eb90);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s___AVCFightGawpExplainer_TM___00e5eb6c[0x1d] = '\0';
  }
  pcVar4 = &stack0xffffffc8;
  uVar5 = 0;
  uVar6 = 0x14;
  FUN_004015d0(&stack0xffffffbc,"gawp",4);
  FUN_008b9420((int *)((int)this + 300),pcVar4,uVar5,uVar6);
  pcVar4 = &stack0xffffffc8;
  uVar5 = 0;
  uVar6 = 0x14;
  FUN_004015d0(&stack0xffffffbc,"play",4);
  FUN_008b9420((int *)((int)this + 0x13c),pcVar4,uVar5,uVar6);
  pcVar4 = &stack0xffffffc8;
  uVar5 = 0;
  uVar6 = 0x14;
  FUN_004015d0(&stack0xffffffbc,"propinteract",0xc);
  FUN_008b9420((int *)((int)this + 0x14c),pcVar4,uVar5,uVar6);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008b75b0 @ 008b75b0 ////

/* WARNING: Removing unreachable block (ram,0x008b76d2) */

void __fastcall FUN_008b75b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cec67f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64850;
  param_1[0x32] = &PTR_LAB_00d64830;
  local_4 = 7;
  piVar2 = param_1 + 0x62;
  iVar1 = 4;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
    piVar2 = piVar2 + 6;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x54] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x54] = param_1[0x53];
  }
  if (param_1[0x53] != 0) {
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
  }
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x76] = param_1[0x75];
  }
  if (param_1[0x75] != 0) {
    *(undefined4 *)(param_1[0x75] + 4) = param_1[0x76];
  }
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  if (param_1[0x75] != 0) {
    *(undefined4 *)(param_1[0x75] + 4) = param_1[0x76];
  }
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  local_4._0_1_ = 5;
  _eh_vector_destructor_iterator_(param_1 + 0x5d,0x18,4,FUN_0042f680);
  param_1[0x57] = &PTR_FUN_00d165fc;
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
  if ((undefined4 *)param_1[0x54] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x54] = param_1[0x53];
  }
  if (param_1[0x53] != 0) {
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
  }
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0053c500(param_1 + 0x32);
  local_4 = 0xffffffff;
  FUN_008ab6b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008b7850 @ 008b7850 ////

undefined4 __fastcall FUN_008b7850(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  void *this;
  undefined4 *puVar5;
  float unaff_EBX;
  int iVar6;
  float10 fVar7;
  float fStack_54;
  float local_48;
  float fStack_44;
  float fStack_40;
  void *pvStack_34;
  undefined1 *puStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cec6a3;
  local_c = ExceptionList;
  iVar6 = 0;
  piVar3 = (int *)(param_1 + 0x188);
  while (*piVar3 != 0) {
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 6;
    if (3 < iVar6) {
      return 0;
    }
  }
  fVar1 = (float)(&DAT_010501ec)[iVar6 * 3];
  fVar2 = (float)(&DAT_010501f0)[iVar6 * 3];
  local_48 = (float)(&DAT_010501f4)[iVar6 * 3];
  ExceptionList = &local_c;
  pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x170) + 0x34))();
  fStack_40 = fVar2 + pfVar4[2];
  fStack_44 = fVar1 + pfVar4[1];
  local_48 = fStack_54 + *pfVar4;
  this = operator_new(0x2e0);
  puStack_8 = (undefined1 *)0x0;
  if (this == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fVar7 = FUN_004012c0(unaff_EBX + *(float *)(*(int *)(param_1 + 0x170) + 0xc4));
    puVar5 = FUN_00445f60(this,&local_48,(float)fVar7);
  }
  iVar6 = param_1 + iVar6 * 0x18;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*(int *)(iVar6 + 0x174) + 4))();
  *(undefined4 **)(iVar6 + 0x188) = puVar5;
  (*(code *)**(undefined4 **)(iVar6 + 0x174))();
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 0x14;
  puStack_8 = (undefined1 *)0x1;
  FUN_004073f0(&puStack_30,"ai_watchfight.flm",0x11);
  (**(code **)(**(int **)(iVar6 + 0x188) + 0xb0))();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  ExceptionList = pvStack_14;
  return *(undefined4 *)(iVar6 + 0x188);
}


//// FUNCTION FUN_008b7a23 @ 008b7a23 ////

undefined4 FUN_008b7a23(undefined4 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  char *pcStack0000000c;
  uint uStack00000014;
  char cStack00000018;
  char *in_stack_0000002c;
  uint in_stack_00000034;
  char in_stack_00000038;
  char *in_stack_0000004c;
  uint in_stack_00000054;
  char in_stack_00000058;
  float *in_stack_00000084;
  int *in_stack_00000090;
  undefined4 *in_stack_00000094;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcStack0000000c = &stack0x00000018;
  cStack00000018 = '\0';
  uStack00000014 = 0x14;
  _strncpy(pcStack0000000c,"gawp",4);
  puVar9 = &stack0x0000000c;
  puVar8 = in_stack_00000094;
  pcStack0000000c[4] = '\0';
  bVar3 = false;
  bVar2 = false;
  uVar5 = FUN_00401ec0(puVar8,puVar9);
  if ((char)uVar5 == '\0') {
    in_stack_0000002c = &stack0x00000038;
    in_stack_00000034 = 0x14;
    in_stack_00000038 = (char)uVar5;
    _strncpy(in_stack_0000002c,"play",4);
    puVar9 = &stack0x0000002c;
    puVar8 = in_stack_00000094;
    in_stack_0000002c[4] = '\0';
    bVar3 = true;
    bVar2 = false;
    uVar5 = FUN_00401ec0(puVar8,puVar9);
    if ((char)uVar5 == '\0') {
      in_stack_0000004c = &stack0x00000058;
      in_stack_00000058 = '\0';
      in_stack_00000054 = 0x14;
      _strncpy(in_stack_0000004c,"propinteract",0xc);
      puVar9 = &stack0x0000004c;
      in_stack_0000004c[0xc] = '\0';
      bVar3 = true;
      bVar2 = true;
      uVar5 = FUN_00401ec0(in_stack_00000094,puVar9);
      bVar4 = false;
      if ((char)uVar5 == '\0') goto LAB_008b7b20;
    }
  }
  bVar4 = true;
LAB_008b7b20:
  if ((bVar2) && (uVar5 = in_stack_00000054, 0x14 < in_stack_00000054)) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_0000004c);
  }
  if ((bVar3) && (uVar5 = in_stack_00000034, 0x14 < in_stack_00000034)) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_0000002c);
  }
  if (0x14 < uStack00000014) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack0000000c);
  }
  if (!bVar4) {
    return uVar5 & 0xffffff00;
  }
  piVar1 = *(int **)(param_2 + 0x170);
  pfVar6 = (float *)(**(code **)(*in_stack_00000090 + 0x34))(&stack0x00000070);
  pfVar7 = (float *)(**(code **)(*piVar1 + 0x34))(&stack0x00000078);
  *in_stack_00000084 =
       SQRT((*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) +
            (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
            (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]));
  return CONCAT31((int3)((uint)pfVar7 >> 8),1);
}


//// FUNCTION FUN_008b7c00 @ 008b7c00 ////

void FUN_008b7c00(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_01050224 != &DAT_01050230) {
    do {
      piVar3 = DAT_01050224;
      iVar2 = DAT_01050224[2];
      piVar1 = DAT_01050224 + 1;
      if ((int *)DAT_01050224[1] != (int *)0x0) {
        *(int *)DAT_01050224[1] = *DAT_01050224;
      }
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 4) = *piVar1;
      }
      *piVar3 = 0;
      *piVar1 = 0;
      if (iVar2 != 0) {
        iVar4 = *(int *)(iVar2 + 0x110) + -1;
        *(int *)(iVar2 + 0x110) = iVar4;
        if (iVar4 == 0) {
          (*(code *)**(undefined4 **)(iVar2 + 200))(1);
        }
      }
    } while (DAT_01050224 != &DAT_01050230);
  }
  return;
}


//// FUNCTION FUN_008b7c70 @ 008b7c70 ////

undefined4 * __thiscall FUN_008b7c70(void *this,byte param_1)

{
  FUN_008b75b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b7c90 @ 008b7c90 ////

undefined4 * __thiscall FUN_008b7c90(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec6bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_008b7850((int)this);
  this_01 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = operator_new(0x2b4);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      this_01 = FUN_00402380(this_00,param_1,puVar2);
    }
    local_4 = 0xffffffff;
    FUN_00401a00(this_01,param_2);
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    ExceptionList = local_c;
    return this_01;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008b7d30 @ 008b7d30 ////

void __fastcall FUN_008b7d30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6488c;
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


//// FUNCTION FUN_008b7d80 @ 008b7d80 ////

undefined4 * __thiscall FUN_008b7d80(void *this,byte param_1)

{
  FUN_008b7d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b7da0 @ 008b7da0 ////

void __fastcall FUN_008b7da0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6488c;
  return;
}


//// FUNCTION FUN_008b7e00 @ 008b7e00 ////

int * __thiscall FUN_008b7e00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008b7ea0 @ 008b7ea0 ////

void __thiscall FUN_008b7ea0(void *this,void *param_1)

{
  FUN_0059c8e0(param_1,*(undefined4 *)((int)this + 100));
  return;
}


//// FUNCTION FUN_008b7f30 @ 008b7f30 ////

undefined4 * __fastcall FUN_008b7f30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec711;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d6489c;
  param_1[0x19] = param_1 + 0x1c;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x14;
  piVar1 = param_1 + 0x21;
  param_1[0x23] = 0;
  *piVar1 = 0;
  param_1[0x22] = 0;
  local_4 = 2;
  param_1[0x23] = param_1;
  FUN_00acdb9e(0xe5ebf0);
  iVar2 = FUN_0097dda0();
  param_1[0x24] = iVar2;
  if (DAT_00e5ebec != '\0') {
    iVar2 = 0x84;
    pcVar4 = "GlobalLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5ebf0);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e5ebec = '\0';
  }
  param_1[0x22] = &DAT_01050268;
  *piVar1 = (int)DAT_01050268;
  *(int **)((int)DAT_01050268 + 4) = piVar1;
  DAT_01050268 = piVar1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008b8070 @ 008b8070 ////

/* WARNING: Removing unreachable block (ram,0x008b80b2) */

void __fastcall FUN_008b8070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6489c;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x22] = param_1[0x21];
  }
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1[0x21] + 4) = param_1[0x22];
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (param_1[0x21] != 0) {
    *(undefined4 *)(param_1[0x21] + 4) = param_1[0x22];
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((uint)param_1[0x1b] < 0x15) {
    FUN_0053c500(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x19]);
}


//// FUNCTION FUN_008b80f0 @ 008b80f0 ////

int * __cdecl FUN_008b80f0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  float unaff_EBX;
  int *piVar5;
  undefined4 *puVar6;
  float fStack_10;
  float local_c;
  float fStack_8;
  
  piVar5 = (int *)0x0;
  (**(code **)(*param_1 + 0x34))(&local_c);
  fStack_8 = 0.0;
  puVar6 = DAT_0105025c;
  if (DAT_0105025c != &DAT_01050268) {
    do {
      piVar2 = (int *)puVar6[2];
      cVar4 = (**(code **)(*piVar2 + 0x1c))(param_1);
      if ((cVar4 != '\0') &&
         (fVar3 = SQRT(((float)piVar2[0x25] - fStack_10) * ((float)piVar2[0x25] - fStack_10) +
                       ((float)piVar2[0x26] - local_c) * ((float)piVar2[0x26] - local_c) +
                       ((float)piVar2[0x27] - fStack_8) * ((float)piVar2[0x27] - fStack_8)),
         fVar3 < unaff_EBX)) {
        piVar5 = piVar2;
        unaff_EBX = fVar3;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_01050268);
  }
  return piVar5;
}


//// FUNCTION FUN_008b8270 @ 008b8270 ////

void __fastcall FUN_008b8270(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d648d4;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_008b82e0 @ 008b82e0 ////

void __fastcall FUN_008b82e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d648d4;
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


//// FUNCTION FUN_008b8330 @ 008b8330 ////

undefined4 * __thiscall FUN_008b8330(void *this,byte param_1)

{
  FUN_008b8070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b8350 @ 008b8350 ////

undefined4 __cdecl FUN_008b8350(int *param_1,int *param_2,float *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  uint uVar5;
  float unaff_ESI;
  undefined1 auStack_4 [4];
  
  FUN_0078b0e0();
  DAT_01050250 = 0;
  piVar1 = FUN_008b80f0(param_1);
  if (piVar1 != (int *)0x0) {
    *param_2 = piVar1[0x25];
    param_2[1] = piVar1[0x26];
    param_2[2] = piVar1[0x27];
    (**(code **)(*piVar1 + 0x24))();
    (**(code **)(*piVar1 + 0x28))();
    DAT_01050250 = 1;
    (*(code *)DAT_01050288[1])();
    DAT_0105029c = piVar1;
    uVar2 = (*(code *)*DAT_01050288)();
    if (param_3 != (float *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(auStack_4);
      uVar2 = CONCAT22(extraout_var,
                       (ushort)(unaff_ESI < 3.4028235e+38) << 8 | (ushort)NAN(unaff_ESI) << 10 |
                       (ushort)(unaff_ESI == 3.4028235e+38) << 0xe);
      if (unaff_ESI != 3.4028235e+38) {
        *param_3 = unaff_ESI;
      }
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar5 = 0;
  if (DAT_0105029c != (int *)0x0) {
    (*(code *)DAT_01050288[1])();
    DAT_0105029c = (int *)0x0;
    (*(code *)*DAT_01050288)();
    iVar3 = FUN_00ace790(DAT_0105029c,0,&TM::TMForceExplainer::RTTI_Type_Descriptor,
                         &TM::CRoomPointExplainer::RTTI_Type_Descriptor,0);
    uVar5 = 0;
    if (iVar3 != 0) {
      iVar4 = FUN_00931dc0(iVar3);
      uVar5 = 0;
      if (iVar4 != 0) {
        piVar1 = (int *)FUN_00931dc0(iVar3);
        uVar5 = (**(code **)(*piVar1 + 0x28))(param_1);
      }
    }
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_008b8470 @ 008b8470 ////

undefined1 __cdecl FUN_008b8470(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = FUN_008b80f0(param_1);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d648d4;
  if (local_10 != (int *)0x0) {
    local_1c = local_10 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  if (local_10 != (int *)0x0) {
    uVar4 = 1;
    iVar1 = FUN_00ace790(local_10,0,&TM::TMForceExplainer::RTTI_Type_Descriptor,
                         &TM::CDropIconExplainer::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      FUN_0053b750(param_1);
      uVar2 = FUN_008c08b0(iVar1);
      if ((char)uVar2 == '\0') {
        uVar4 = 0;
      }
    }
    (**(code **)(*local_10 + 0x20))(param_1);
    FUN_008b82e0((undefined4 *)&stack0xffffffd8);
    ExceptionList = local_10;
    return uVar4;
  }
  uVar3 = FUN_00932e60(param_1);
  FUN_008b82e0(&local_24);
  ExceptionList = local_c;
  return (char)uVar3;
}


//// FUNCTION FUN_008b8570 @ 008b8570 ////

void __fastcall FUN_008b8570(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d648e4;
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


//// FUNCTION FUN_008b85c0 @ 008b85c0 ////

undefined4 * __thiscall FUN_008b85c0(void *this,byte param_1)

{
  FUN_008b8570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b85e0 @ 008b85e0 ////

void __fastcall FUN_008b85e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d648e4;
  return;
}


//// FUNCTION FUN_008b8640 @ 008b8640 ////

undefined4 * __fastcall FUN_008b8640(undefined4 *param_1)

{
  FUN_008ab900(param_1);
  *param_1 = &PTR_FUN_00d648f4;
  return param_1;
}


//// FUNCTION FUN_008b8680 @ 008b8680 ////

int * __thiscall FUN_008b8680(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008b86a0 @ 008b86a0 ////

void FUN_008b86a0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec76b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(200);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_008ab900(puVar1);
    *puVar1 = &PTR_FUN_00d648f4;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_010502a0[1])();
  DAT_010502b4 = puVar1;
  (*(code *)*DAT_010502a0)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008b8720 @ 008b8720 ////

undefined4 * __thiscall FUN_008b8720(void *this,byte param_1)

{
  thunk_FUN_008ab6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b8750 @ 008b8750 ////

void FUN_008b8750(void)

{
  if (DAT_010502b4 != (undefined4 *)0x0) {
    (**(code **)*DAT_010502b4)(1);
  }
  (*(code *)DAT_010502a0[1])();
  DAT_010502b4 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x008b8782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_010502a0)();
  return;
}


//// FUNCTION FUN_008b8980 @ 008b8980 ////

void __thiscall FUN_008b8980(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d64930;
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


//// FUNCTION FUN_008b89d0 @ 008b89d0 ////

void __fastcall FUN_008b89d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d64930;
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


//// FUNCTION FUN_008b8b90 @ 008b8b90 ////

undefined4 __thiscall FUN_008b8b90(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_4;
  
  iVar6 = *(int *)((int)this + 0xf4);
  iVar5 = 0;
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (iVar6 != (int)this + 0x100) {
    do {
      piVar1 = *(int **)(iVar6 + 8);
      if ((((char)piVar1[0x1c] != '\0') && (*(char *)((int)piVar1 + 0x71) != '\0')) &&
         (cVar2 = (**(code **)(*piVar1 + 4))(&local_4,param_1,param_2 + 100), cVar2 != '\0')) {
        iVar5 = iVar5 + 1;
        iVar3 = FUN_00990d30(0,iVar5);
        if (iVar3 == 0) {
          piVar7 = *(int **)(iVar6 + 8);
        }
      }
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != (int)this + 0x100);
    if (piVar7 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar7 + 8))(param_1,param_2,0x7f7fffff);
      return uVar4;
    }
  }
  return 0;
}


//// FUNCTION FUN_008b8d00 @ 008b8d00 ////

void FUN_008b8d00(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  undefined4 *puVar6;
  wchar_t *_Format;
  float local_d4;
  void *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec7bb;
  local_c = ExceptionList;
  local_d4 = 100.0;
  puVar6 = DAT_010502c0;
  ExceptionList = &local_c;
  if (DAT_010502c0 != &DAT_010502cc) {
    do {
      local_4 = 0xffffffff;
      iVar2 = puVar6[2];
      FUN_00568790(local_ac,(undefined4 *)(iVar2 + 0xcc));
      iVar3 = *(int *)(iVar2 + 0xf4);
      _Format = (wchar_t *)0x0;
      local_4 = 0;
      for (; iVar3 != iVar2 + 0x100; iVar3 = *(int *)(iVar3 + 4)) {
        _Format = (wchar_t *)((int)_Format + 1);
      }
      sVar5 = FUN_00ace02d((short *)&DAT_00d6493c);
      FUN_0040cae0(local_ac,L":  ",sVar5);
      sVar5 = _swprintf(local_8c,0xd18f7c,_Format);
      FUN_0040cae0(local_ac,local_8c,sVar5);
      pvVar4 = local_ac[0];
      local_cc = 0xffffffff;
      FUN_009a8100(&local_d0);
      local_d0 = pvVar4;
      local_cc = 0xffff2020;
      local_c8 = 0x42c80000;
      local_c4 = local_d4;
      local_c0 = 0;
      local_bc = DAT_00f885c0;
      FUN_009a85a0((int *)&local_d0);
      local_d4 = local_d4 + 12.0;
      local_4 = 0xffffffff;
      if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_010502cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b8f40 @ 008b8f40 ////

void FUN_008b8f40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_010502c0 != &DAT_010502cc) {
    do {
      piVar4 = DAT_010502c0;
      puVar2 = (undefined4 *)DAT_010502c0[2];
      piVar1 = DAT_010502c0 + 1;
      if ((int *)DAT_010502c0[1] != (int *)0x0) {
        *(int *)DAT_010502c0[1] = *DAT_010502c0;
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
    } while (DAT_010502c0 != &DAT_010502cc);
  }
  return;
}


//// FUNCTION FUN_008b8fa0 @ 008b8fa0 ////

void __fastcall FUN_008b8fa0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d64948;
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


//// FUNCTION FUN_008b8ff0 @ 008b8ff0 ////

undefined4 * __thiscall FUN_008b8ff0(void *this,byte param_1)

{
  FUN_008b8fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b9010 @ 008b9010 ////

void __fastcall FUN_008b9010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d64954;
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x49] = param_1[0x48];
  }
  if (param_1[0x48] != 0) {
    *(undefined4 *)(param_1[0x48] + 4) = param_1[0x49];
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  FUN_004983f0(param_1 + 0x3b);
  if (0x14 < (uint)param_1[0x35]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x33]);
  }
  FUN_008ab6b0(param_1);
  return;
}


//// FUNCTION FUN_008b9090 @ 008b9090 ////

undefined4 * __thiscall FUN_008b9090(void *this,byte param_1)

{
  FUN_008b9010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b90b0 @ 008b90b0 ////

void __fastcall FUN_008b90b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d64948;
  return;
}


//// FUNCTION FUN_008b9110 @ 008b9110 ////

undefined4 * __fastcall FUN_008b9110(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(param_1);
  *param_1 = &PTR_FUN_00d64954;
  local_4 = 0;
  param_1[0x33] = param_1 + 0x36;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x14;
  FUN_004015d0(param_1 + 0x33,"_undefined_",0xb);
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  puVar1 = param_1 + 0x40;
  param_1[0x42] = 0;
  *puVar1 = 0;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x3b] = &PTR_LAB_00d1d304;
  param_1[0x3d] = puVar1;
  *puVar1 = param_1 + 0x3c;
  piVar2 = param_1 + 0x48;
  param_1[0x4a] = 0;
  *piVar2 = 0;
  param_1[0x49] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x4a] = param_1;
  FUN_00acdb9e(0xe5ed44);
  iVar3 = FUN_0097dda0();
  param_1[0x4b] = iVar3;
  if (DAT_00e5ed40 != '\0') {
    iVar3 = 0x120;
    pcVar5 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe5ed44);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    DAT_00e5ed40 = '\0';
  }
  param_1[0x49] = &DAT_010502cc;
  *piVar2 = (int)DAT_010502cc;
  *(int **)((int)DAT_010502cc + 4) = piVar2;
  DAT_010502cc = piVar2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008b9250 @ 008b9250 ////

undefined4 * __cdecl FUN_008b9250(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  char *_Dest;
  uint _Size;
  void *pvVar5;
  byte *pbVar6;
  bool bVar7;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec863;
  local_c = ExceptionList;
  local_4 = 0;
  puVar4 = DAT_010502c0;
  do {
    if (puVar4 == &DAT_010502cc) {
      ExceptionList = &local_c;
      puVar4 = operator_new(0x130);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_008b9110(puVar4);
      }
      _Dest = local_20;
      local_20[0] = '\0';
      local_24 = 0x14;
      if (0x13 < param_2) {
        local_24 = param_2 + 0x20 & 0xffffffe0;
        _Dest = _malloc(local_24);
      }
      _strncpy(_Dest,(char *)param_1,param_2);
      _Dest[param_2] = '\0';
      if ((uint)puVar4[0x35] <= param_2) {
        if (0x14 < (uint)puVar4[0x35]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar4[0x33]);
        }
        _Size = param_2 + 0x20 & 0xffffffe0;
        puVar4[0x35] = _Size;
        pvVar5 = _malloc(_Size);
        puVar4[0x33] = pvVar5;
      }
      _strncpy((char *)puVar4[0x33],_Dest,param_2);
      puVar4[0x34] = param_2;
      *(undefined1 *)(param_2 + puVar4[0x33]) = 0;
      puVar4[0x32] = 0;
      if (local_24 < 0x15) {
        if (param_3 < 0x15) {
          ExceptionList = local_c;
          return puVar4;
        }
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    pbVar2 = (byte *)((undefined4 *)puVar4[2])[0x33];
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_008b92b5:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_008b92ba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_008b92b5;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_008b92ba:
    if (iVar3 == 0) {
      if (param_3 < 0x15) {
        return (undefined4 *)puVar4[2];
      }
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar4 = (undefined4 *)puVar4[1];
  } while( true );
}


//// FUNCTION FUN_008b9420 @ 008b9420 ////

void __cdecl FUN_008b9420(int *param_1,char *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte local_28 [12];
  undefined *puStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec878;
  local_c = ExceptionList;
  pbVar3 = local_28;
  local_28[0] = 0;
  local_4 = 0;
  uVar4 = 0;
  uVar5 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffcc,param_2,param_3);
  puVar1 = FUN_008b9250(pbVar3,uVar4,uVar5);
  piVar2 = puVar1 + 0x40;
  param_1[1] = (int)piVar2;
  *param_1 = *piVar2;
  *(int **)(*piVar2 + 4) = param_1;
  *piVar2 = (int)param_1;
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    puStack_1c = &UNK_008b9494;
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b94b0 @ 008b94b0 ////

void __cdecl FUN_008b94b0(int param_1,char *param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte local_2c [12];
  undefined *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec898;
  local_c = ExceptionList;
  pbVar4 = local_2c;
  local_2c[0] = 0;
  local_4 = 0;
  uVar5 = 0;
  uVar6 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffc8,param_2,param_3);
  puVar1 = FUN_008b9250(pbVar4,uVar5,uVar6);
  piVar3 = (int *)(param_1 + 0x38);
  piVar2 = puVar1 + 0x40;
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar3 = (int *)(param_1 + 0x48);
  }
  piVar3[1] = (int)piVar2;
  *piVar3 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar3;
  *piVar2 = (int)piVar3;
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    puStack_20 = &UNK_008b9537;
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b9550 @ 008b9550 ////

void FUN_008b9550(void)

{
  undefined4 *puVar1;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec8c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x130);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_008b9110(puVar1);
  }
  local_2c = local_20;
  local_4 = 0xffffffff;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,"edit",4);
  FUN_004015d0(puVar1 + 0x33,local_2c,local_28);
  puVar1[0x32] = 1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  puVar1 = operator_new(0x130);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_008b9110(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,"think",5);
  FUN_004015d0(puVar1 + 0x33,local_2c,local_28);
  puVar1[0x32] = 1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008b9690 @ 008b9690 ////

void __fastcall FUN_008b9690(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *unaff_retaddr;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(param_1 + 0xf0);
  pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xec) + 0x34))(local_c);
  fVar3 = pfVar4[1] - *(float *)(param_1 + 0xf4);
  fVar2 = pfVar4[2] - *(float *)(param_1 + 0xf8);
  if (4.0 < (*pfVar4 - *pfVar1) * (*pfVar4 - *pfVar1) + fVar3 * fVar3 + fVar2 * fVar2) {
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xec) + 0x34))(&stack0xfffffff0);
    *pfVar1 = *pfVar4;
    *(float *)(param_1 + 0xf4) = pfVar4[1];
    *(float *)(param_1 + 0xf8) = pfVar4[2];
  }
  *unaff_retaddr = *pfVar1;
  unaff_retaddr[1] = *(float *)(param_1 + 0xf4);
  unaff_retaddr[2] = *(float *)(param_1 + 0xf8);
  return;
}


//// FUNCTION FUN_008b9720 @ 008b9720 ////

undefined4 __thiscall FUN_008b9720(void *this,int *param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  float *pfStack_8;
  float fStack_4;
  
  pfStack_3c = &local_24;
  FUN_008b9690((int)this);
  pfStack_3c = (float *)&local_18;
  pfVar2 = (float *)(**(code **)(**(int **)((int)this + 0xec) + 0x34))();
  pfVar3 = (float *)(**(code **)(*param_1 + 0x34))(&stack0xffffffcc);
  if (4.0 < SQRT((*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2) +
                 (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
                 (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]))) {
    pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(auStack_14);
    fStack_1c = fStack_28 - pfVar2[2];
    fStack_20 = fStack_2c - pfVar2[1];
    local_24 = fStack_30 - *pfVar2;
    FUN_009840b0(&pfStack_3c,&local_24);
    pfVar2 = FUN_00984190(&pfStack_3c,&fStack_4);
    pfStack_8[3] = *pfVar2;
    *pfStack_8 = fStack_30;
    pfStack_8[1] = fStack_2c;
    pfStack_8[2] = fStack_28;
    return CONCAT31((int3)((uint)pfStack_8 >> 8),1);
  }
  pfVar2 = (float *)(**(code **)(*param_1 + 0x34))(auStack_14);
  *pfStack_8 = *pfVar2;
  pfStack_8[1] = pfVar2[1];
  fVar1 = pfVar2[2];
  pfStack_8[2] = fVar1;
  pfStack_8[3] = (float)param_1[0x31];
  return CONCAT31((int3)((uint)fVar1 >> 8),1);
}


//// FUNCTION FUN_008b9830 @ 008b9830 ////

undefined4 * __thiscall FUN_008b9830(void *this,char *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char acStack_44 [4];
  undefined4 uStack_40;
  char *pcVar7;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec8fc;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_008ab900(this);
  *(undefined ***)this = &PTR_FUN_00d6499c;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  piVar1 = (int *)((int)this + 0xd8);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(int **)((int)this + 0xe4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ac;
  *(undefined4 *)((int)this + 0xec) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  (**(code **)(*piVar1 + 4))();
  *(char **)((int)this + 0xec) = param_1;
  (**(code **)*piVar1)();
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0xec) + 0x34))();
  *(undefined4 *)((int)this + 0xf0) = *puVar2;
  *(undefined4 *)((int)this + 0xf4) = puVar2[1];
  *(undefined4 *)((int)this + 0xf8) = puVar2[2];
  pcVar4 = acStack_44;
  acStack_44[0] = '\0';
  uVar5 = 0;
  uVar6 = 0x14;
  FUN_004015d0(&stack0xffffffb0,param_1,param_2);
  FUN_008b94b0((int)this,pcVar4,uVar5,uVar6);
  *(void **)((int)this + 0xd0) = this;
  FUN_00acdb9e(0xe5ed68);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xd4) = iVar3;
  if (DAT_00e5ed64 != '\0') {
    iVar3 = 200;
    pcVar7 = "OwnerLink";
    uStack_40 = 0x8b9956;
    pcVar4 = (char *)FUN_00acdb9e(0xe5ed68);
    uStack_40 = 0x8b9961;
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    DAT_00e5ed64 = '\0';
  }
  FUN_004015d0((void *)((int)this + 0x74),param_1,param_2);
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_008b99b0 @ 008b99b0 ////

void __fastcall FUN_008b99b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6499c;
  param_1[0x36] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x38] = param_1[0x37];
  }
  if (param_1[0x37] != 0) {
    *(undefined4 *)(param_1[0x37] + 4) = param_1[0x38];
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  if ((undefined4 *)param_1[0x38] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x38] = param_1[0x37];
  }
  if (param_1[0x37] != 0) {
    *(undefined4 *)(param_1[0x37] + 4) = param_1[0x38];
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_008ab6b0(param_1);
  return;
}


//// FUNCTION FUN_008b9a70 @ 008b9a70 ////

undefined4 * __thiscall FUN_008b9a70(void *this,byte param_1)

{
  FUN_008b99b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b9d20 @ 008b9d20 ////

undefined4 * __thiscall FUN_008b9d20(void *this,char *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_38 [16];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cec956;
  local_c = ExceptionList;
  puVar2 = local_38;
  local_38[0] = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffbc,(char *)*param_2,param_2[1]);
  FUN_008b9830(this,param_1,(uint)puVar2,uVar3);
  piVar1 = (int *)((int)this + 0xfc);
  *(undefined ***)this = &PTR_FUN_00d649e0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(int **)((int)this + 0x108) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4 = 1;
  uStack_28 = 0x8b9dab;
  (**(code **)(*piVar1 + 4))();
  *(char **)((int)this + 0x110) = param_1;
  uStack_28 = 0x8b9db4;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008b9dd0 @ 008b9dd0 ////

undefined4 * __thiscall FUN_008b9dd0(void *this,byte param_1)

{
  FUN_008b9df0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008b9df0 @ 008b9df0 ////

void __fastcall FUN_008b9df0(undefined4 *param_1)

{
  param_1[0x3f] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_008b99b0(param_1);
  return;
}


//// FUNCTION FUN_008b9e70 @ 008b9e70 ////

undefined4 __thiscall FUN_008b9e70(void *this,undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  float10 fVar2;
  bool bVar3;
  uint in_EAX;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined2 extraout_var_00;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float *pfVar10;
  undefined1 auStack_18 [8];
  float afStack_10 [3];
  float *pfStack_4;
  
  if (*(int **)((int)this + 0x110) != param_2) {
    bVar3 = FUN_00430950(param_3,"takephoto");
    in_EAX = CONCAT31(extraout_var,bVar3);
    if (bVar3) goto LAB_008b9f5d;
    uVar4 = FUN_005773c0(*(int *)((int)this + 0x110));
    in_EAX = GetPlayerStudio();
    if (uVar4 != in_EAX) goto LAB_008b9f5d;
    in_EAX = (**(code **)(**(int **)((int)this + 0x110) + 0xbc))();
    if ((char)in_EAX != '\0') goto LAB_008b9f5d;
    piVar1 = *(int **)((int)this + 0x110);
    uVar5 = (**(code **)(*param_2 + 0x34))(auStack_18);
    pfVar10 = afStack_10;
    pfVar6 = (float *)(**(code **)(*piVar1 + 0x34))(pfVar10,uVar5);
    fVar9 = FUN_00412f80(pfVar6,pfVar10);
    fVar2 = (float10)12.0;
    in_EAX = CONCAT22(extraout_var_00,
                      (ushort)(fVar9 < fVar2) << 8 | (ushort)(NAN(fVar9) || NAN(fVar2)) << 10 |
                      (ushort)(fVar9 == fVar2) << 0xe);
    if (fVar9 >= fVar2 && (fVar9 == fVar2) == 0) goto LAB_008b9f5d;
    iVar7 = FUN_005998e0(*(int *)((int)this + 0x110));
    if (iVar7 != 0) {
      iVar8 = FUN_004031b0(*(int *)(iVar7 + 0x25c));
      if (iVar8 != 0) {
        in_EAX = FUN_004031b0(*(int *)(iVar7 + 0x25c));
        if (in_EAX != 0xc) goto LAB_008b9f48;
      }
    }
    in_EAX = FUN_005856c0(*(int *)((int)this + 0x110));
    if ((char)in_EAX != '\0') {
LAB_008b9f48:
      *pfStack_4 = (float)fVar9;
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
LAB_008b9f5d:
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_008b9f70 @ 008b9f70 ////

void FUN_008b9f70(void)

{
  return;
}


//// FUNCTION FUN_008ba090 @ 008ba090 ////

int __fastcall FUN_008ba090(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_008ba1c0 @ 008ba1c0 ////

void FUN_008ba1c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_010502f4 != &DAT_01050300) {
    do {
      puVar2 = (undefined4 *)DAT_010502f4[2];
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    } while (DAT_010502f4 != &DAT_01050300);
  }
  return;
}


//// FUNCTION FUN_008ba1f0 @ 008ba1f0 ////

uint __thiscall FUN_008ba1f0(void *this,uint param_1)

{
  if ((int)param_1 < *(int *)((int)this + 0x2b4)) {
    return CONCAT31((int3)(param_1 * 3 >> 8),*(int *)((int)this + param_1 * 0x18 + 0x8c) == 0);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_008ba220 @ 008ba220 ////

int __fastcall FUN_008ba220(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2b4)) {
    piVar2 = (int *)(param_1 + 0x8c);
    do {
      if (*piVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 < *(int *)(param_1 + 0x2b4));
  }
  return -1;
}


//// FUNCTION FUN_008ba250 @ 008ba250 ////

void __thiscall FUN_008ba250(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  void *this_00;
  uint uVar2;
  int iVar3;
  char *_Source;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint auStack_40 [16];
  
  iVar5 = param_1 * 3 + 0xf;
  puVar1 = (undefined4 *)((int)this + iVar5 * 8);
  (**(code **)(*(int *)((int)this + iVar5 * 8) + 4))();
  puVar1[5] = param_2;
  (**(code **)*puVar1)();
  this_00 = *(void **)(param_2 + 0x214);
  uVar2 = FUN_00973ac0(this_00);
  *(undefined4 *)((int)this + (param_1 + 0x18) * 0x20) = 0xffffffff;
  iVar5 = 0;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2e8) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2ec) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2f0) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2f4) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2f8) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x2fc) = 0xffffffff;
  *(undefined4 *)((int)this + param_1 * 0x20 + 0x304) = 0xffffffff;
  if (0 < (int)uVar2) {
    piVar6 = (int *)(param_1 * 0x20 + 0x2e8 + (int)this);
    do {
      iVar3 = FUN_00974ea0(this_00,iVar5);
      if ((iVar3 < 0) || ((int)(uint)*(byte *)((int)this_00 + 0x4e) <= iVar3)) {
        _Source = (char *)0x0;
      }
      else {
        _Source = (char *)FUN_009722a0(this_00,iVar3);
      }
      _strncpy((char *)auStack_40,_Source,0x3f);
      puVar4 = FUN_00ace080(auStack_40,"_out");
      if (puVar4 != (uint *)0x0) {
        *piVar6 = iVar5;
        piVar6 = piVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  return;
}


//// FUNCTION FUN_008ba340 @ 008ba340 ////

void __thiscall FUN_008ba340(void *this,void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 0x26c);
  piVar2 = (int *)((int)param_1 + 0x148);
  *(int **)((int)param_1 + 0x14c) = piVar1;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  FUN_00403850(param_1,this);
  return;
}


//// FUNCTION FUN_008ba370 @ 008ba370 ////

void __fastcall FUN_008ba370(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_008ba4a0 @ 008ba4a0 ////

void * __thiscall FUN_008ba4a0(void *this,byte param_1)

{
  FUN_008ba370((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008ba570 @ 008ba570 ////

undefined4 * __cdecl FUN_008ba570(int param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = param_2 + -0x24;
    puVar3 = param_3 + -9;
    *puVar3 = *(undefined4 *)(param_2 + -0x24);
    _Count = *(uint *)(param_2 + -0x1c);
    _Source = *(char **)(param_2 + -0x20);
    if ((uint)param_3[-6] <= _Count) {
      if (0x14 < (uint)param_3[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_3[-8]);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-6] = _Size;
      pvVar1 = _malloc(_Size);
      param_3[-8] = pvVar1;
    }
    _strncpy((char *)param_3[-8],_Source,_Count);
    param_3[-7] = _Count;
    *(undefined1 *)(_Count + param_3[-8]) = 0;
    param_2 = iVar2;
    param_3 = puVar3;
  } while (iVar2 != param_1);
  return puVar3;
}


//// FUNCTION FUN_008ba650 @ 008ba650 ////

void __thiscall FUN_008ba650(void *this,void *param_1,int param_2,uint param_3)

{
  int iVar1;
  float in_stack_00000024;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec970;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00430770(&param_1,local_2c,0,param_2 - 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004073f0(local_2c,(char *)&PTR_LAB_00d64a10,3);
  for (iVar1 = *(int *)((int)this + 0x260); iVar1 != (int)this + 0x26c; iVar1 = *(int *)(iVar1 + 4))
  {
    FUN_009757a0(*(void **)(*(int *)(iVar1 + 8) + 0x214),local_2c[0],in_stack_00000024,0);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008ba720 @ 008ba720 ////

void __cdecl FUN_008ba720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    *param_1 = *param_3;
    _Count = param_3[2];
    _Source = (char *)param_3[1];
    if ((uint)param_1[3] <= _Count) {
      if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[1]);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[3] = _Size;
      pvVar1 = _malloc(_Size);
      param_1[1] = pvVar1;
    }
    _strncpy((char *)param_1[1],_Source,_Count);
    param_1[2] = _Count;
    *(undefined1 *)(_Count + param_1[1]) = 0;
    param_1 = param_1 + 9;
  } while( true );
}


//// FUNCTION FUN_008ba7f0 @ 008ba7f0 ////

undefined4 * __cdecl FUN_008ba7f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  uint *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar2[-2] = (uint)(puVar2 + 1);
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x14;
        _Count = param_1[2];
        _Source = (char *)param_1[1];
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          *puVar2 = _Size;
          pvVar1 = _malloc(_Size);
          puVar2[-2] = (uint)pvVar1;
        }
        _strncpy((char *)puVar2[-2],_Source,_Count);
        puVar2[-1] = _Count;
        *(undefined1 *)(_Count + puVar2[-2]) = 0;
      }
      param_1 = param_1 + 9;
      param_3 = param_3 + 9;
      puVar2 = puVar2 + 9;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_008ba890 @ 008ba890 ////

void __fastcall FUN_008ba890(void *param_1)

{
  uint _Count;
  char *_Source;
  char *_Dest;
  undefined4 *puVar1;
  uint _Size;
  char local_2c [20];
  undefined4 uStack_18;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x290);
  if (puVar1 != *(undefined4 **)((int)param_1 + 0x294)) {
    do {
      uStack_18 = 0;
      _Dest = local_2c;
      local_2c[0] = '\0';
      _Size = 0x14;
      _Count = puVar1[2];
      _Source = (char *)puVar1[1];
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        _Dest = _malloc(_Size);
      }
      _strncpy(_Dest,_Source,_Count);
      _Dest[_Count] = '\0';
      FUN_008ba650(param_1,_Dest,_Count,_Size);
      *puVar1 = 0;
      puVar1 = puVar1 + 9;
    } while (puVar1 != *(undefined4 **)((int)param_1 + 0x294));
  }
  return;
}


//// FUNCTION FUN_008ba930 @ 008ba930 ////

void __cdecl FUN_008ba930(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    puVar2 = param_1 + 3;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar2[-2] = (uint)(puVar2 + 1);
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x14;
        _Count = param_3[2];
        _Source = (char *)param_3[1];
        if (0x13 < _Count) {
          _Size = _Count + 0x20 & 0xffffffe0;
          *puVar2 = _Size;
          pvVar1 = _malloc(_Size);
          puVar2[-2] = (uint)pvVar1;
        }
        _strncpy((char *)puVar2[-2],_Source,_Count);
        puVar2[-1] = _Count;
        *(undefined1 *)(_Count + puVar2[-2]) = 0;
      }
      param_1 = param_1 + 9;
      puVar2 = puVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_008baab0 @ 008baab0 ////

undefined4 * FUN_008baab0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_008ba930(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_008baae0 @ 008baae0 ////

void FUN_008baae0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_008ba370(param_1);
  }
  return;
}


//// FUNCTION FUN_008bab10 @ 008bab10 ////

void __fastcall FUN_008bab10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d64a18;
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


//// FUNCTION FUN_008bab60 @ 008bab60 ////

void __fastcall FUN_008bab60(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d64a24;
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


//// FUNCTION FUN_008babb0 @ 008babb0 ////

undefined4 * __thiscall FUN_008babb0(void *this,byte param_1)

{
  FUN_008bab10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008babd0 @ 008babd0 ////

undefined4 * __thiscall FUN_008babd0(void *this,byte param_1)

{
  FUN_008bab60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008babf0 @ 008babf0 ////

void __fastcall FUN_008babf0(int param_1)

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
    FUN_008ba370(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008bac40 @ 008bac40 ////

void FUN_008bac40(void)

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
  puStack_8 = &LAB_00cec988;
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


//// FUNCTION FUN_008bacb0 @ 008bacb0 ////

void __fastcall FUN_008bacb0(int param_1)

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
    FUN_008ba370(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008bad20 @ 008bad20 ////

void __thiscall FUN_008bad20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [20];
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cec9a8;
  local_10 = ExceptionList;
  local_40 = *param_3;
  local_14 = &stack0xffffffb4;
  local_3c = local_30;
  local_30[0] = 0;
  local_38 = 0;
  local_34 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_3c,(char *)param_3[1],param_3[2]);
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
      FUN_008bac40();
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
        iVar2 = FUN_008ba090((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_008ba7f0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_008ba930(puVar4,param_2,&local_40);
      FUN_008ba7f0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_008baae0(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 9;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 9;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar3 - (int)param_1) / 0x24) < param_2) {
        FUN_008ba7f0(param_1,puVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_008baab0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x24,
                     &local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_008ba720(param_1,(undefined4 *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        puVar4 = FUN_008ba7f0(puVar3 + param_2 * -9,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_008ba570((int)param_1,(int)(puVar3 + param_2 * -9),puVar3);
        FUN_008ba720(param_1,param_1 + param_2 * 9,&local_40);
      }
    }
  }
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008bb040 @ 008bb040 ////

void __fastcall FUN_008bb040(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec9c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64a30;
  local_4 = 0;
  if ((undefined4 *)param_1[0xaf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xaf] = param_1[0xae];
  }
  if (param_1[0xae] != 0) {
    *(undefined4 *)(param_1[0xae] + 4) = param_1[0xaf];
  }
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  if (0x14 < (uint)param_1[0xb4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xb2]);
  }
  if ((undefined4 *)param_1[0xaf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xaf] = param_1[0xae];
  }
  if (param_1[0xae] != 0) {
    *(undefined4 *)(param_1[0xae] + 4) = param_1[0xaf];
  }
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xa7] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0xa9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa9] = param_1[0xa8];
  }
  if (param_1[0xa8] != 0) {
    *(undefined4 *)(param_1[0xa8] + 4) = param_1[0xa9];
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  if ((undefined4 *)param_1[0xa9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa9] = param_1[0xa8];
  }
  if (param_1[0xa8] != 0) {
    *(undefined4 *)(param_1[0xa8] + 4) = param_1[0xa9];
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  FUN_008babf0((int)(param_1 + 0xa3));
  FUN_008bab10(param_1 + 0x96);
  _eh_vector_destructor_iterator_(param_1 + 0x1e,0x18,0x14,FUN_004021f0);
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008bb1c0 @ 008bb1c0 ////

void __thiscall FUN_008bb1c0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_008bb205;
    }
  }
  iVar1 = 0;
LAB_008bb205:
  FUN_008bad20(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_008bb230 @ 008bb230 ////

undefined4 * __thiscall FUN_008bb230(void *this,byte param_1)

{
  FUN_008bb040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008bb250 @ 008bb250 ////

void __thiscall FUN_008bb250(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_008ba930(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 9;
    return;
  }
  FUN_008bb1c0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_008bb2e0 @ 008bb2e0 ////

void __thiscall FUN_008bb2e0(void *this,byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  void **ppvVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  byte *pbVar7;
  bool bVar8;
  float in_stack_00000024;
  uint uVar9;
  char local_60 [8];
  undefined4 uStack_58;
  undefined4 local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cec9f0;
  local_c = ExceptionList;
  pfVar6 = *(float **)((int)this + 0x290);
  local_4 = 0;
  do {
    if (pfVar6 == *(float **)((int)this + 0x294)) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 1;
      ExceptionList = &local_c;
      if (0x13 < param_2) {
        local_24 = param_2 + 0x20 & 0xffffffe0;
        ExceptionList = &local_c;
        local_2c = _malloc(local_24);
      }
      uStack_58 = 0x8bb3b4;
      _strncpy(local_2c,(char *)param_1,param_2);
      local_28 = param_2;
      local_2c[param_2] = '\0';
      FUN_008bb250((void *)((int)this + 0x28c),&local_30);
      pcVar5 = local_60;
      local_60[0] = '\0';
      uVar9 = 0x14;
      if (0x13 < param_2) {
        uVar9 = param_2 + 0x20 & 0xffffffe0;
        pcVar5 = _malloc(uVar9);
      }
      _strncpy(pcVar5,(char *)param_1,param_2);
      pcVar5[param_2] = '\0';
      FUN_008ba650(this,pcVar5,param_2,uVar9);
      ppvVar2 = ExceptionList;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
joined_r0x008bb4ed:
      ExceptionList = ppvVar2;
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    pbVar3 = (byte *)pfVar6[1];
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_008bb34b:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_008bb350;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_008bb34b;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_008bb350:
    if (iVar4 == 0) {
      ppvVar2 = &local_c;
      if (*pfVar6 < in_stack_00000024) {
        pcVar5 = local_60;
        local_60[0] = '\0';
        uVar9 = 0x14;
        ExceptionList = &local_c;
        if (0x13 < param_2) {
          uVar9 = param_2 + 0x20 & 0xffffffe0;
          ExceptionList = &local_c;
          pcVar5 = _malloc(uVar9);
        }
        _strncpy(pcVar5,(char *)param_1,param_2);
        pcVar5[param_2] = '\0';
        FUN_008ba650(this,pcVar5,param_2,uVar9);
        *pfVar6 = in_stack_00000024;
        ppvVar2 = ExceptionList;
      }
      goto joined_r0x008bb4ed;
    }
    pfVar6 = pfVar6 + 9;
  } while( true );
}


//// FUNCTION FUN_008bb500 @ 008bb500 ////

void __fastcall FUN_008bb500(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d64a18;
  return;
}


//// FUNCTION FUN_008bb560 @ 008bb560 ////

void __fastcall FUN_008bb560(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d64a24;
  return;
}


//// FUNCTION FUN_008bb5c0 @ 008bb5c0 ////

undefined4 * __thiscall FUN_008bb5c0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cecaba;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d64a30;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x78),0x18,0x14,FUN_004021a0,FUN_004021f0);
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  puVar1 = (undefined4 *)((int)this + 0x26c);
  *(undefined4 *)((int)this + 0x274) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined ***)((int)this + 600) = &PTR_LAB_00d64a18;
  *(undefined4 **)((int)this + 0x260) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  piVar6 = (int *)((int)this + 0x29c);
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(int **)((int)this + 0x2a8) = piVar6;
  *piVar6 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined1 **)((int)this + 0x2c8) = (undefined1 *)((int)this + 0x2d4);
  *(undefined1 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0x14;
  local_4 = CONCAT31(local_4._1_3_,8);
  (**(code **)(*piVar6 + 4))();
  *(undefined4 *)((int)this + 0x2b0) = param_1;
  (**(code **)*piVar6)();
  FUN_008babf0((int)this + 0x28c);
  piVar2 = *(int **)((int)this + 0x260);
  piVar6 = (int *)((int)this + 0x26c);
  while (piVar2 != piVar6) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  *(int **)((int)this + 0x260) = piVar6;
  *piVar6 = (int)this + 0x25c;
  piVar6 = (int *)((int)this + 0x78);
  iVar5 = 0x14;
  do {
    (**(code **)(*piVar6 + 4))();
    piVar6[5] = 0;
    (**(code **)*piVar6)();
    piVar6 = piVar6 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(void **)((int)this + 0x2c0) = this;
  FUN_00acdb9e(0xe5ee38);
  iVar5 = FUN_0097dda0();
  *(int *)((int)this + 0x2c4) = iVar5;
  if (s___AVCSliderSharer_TM___00e5ee20[0x17] != '\0') {
    iVar5 = 0x2b8;
    pcVar7 = "GlobalLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5ee38);
    FUN_0097df60(pcVar3,pcVar7,iVar5);
    s___AVCSliderSharer_TM___00e5ee20[0x17] = '\0';
  }
  if (*(uint *)((int)this + 0x2d0) < 10) {
    if (0x14 < *(uint *)((int)this + 0x2d0)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x2c8));
    }
    *(undefined4 *)((int)this + 0x2d0) = 0x20;
    pvVar4 = _malloc(0x20);
    *(void **)((int)this + 0x2c8) = pvVar4;
  }
  _strncpy(*(char **)((int)this + 0x2c8),"_default_",9);
  *(undefined4 *)((int)this + 0x2cc) = 9;
  *(undefined1 *)(*(int *)((int)this + 0x2c8) + 9) = 0;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_008bb800 @ 008bb800 ////

void __fastcall FUN_008bb800(void *param_1)

{
  char cVar1;
  void *this;
  int iVar2;
  char *pcVar3;
  uint _Count;
  byte *_Dest;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint _Size;
  byte local_80 [8];
  undefined4 uStack_78;
  int local_58;
  int local_4c;
  char local_40 [64];
  
  piVar5 = (int *)((int)param_1 + 0x2e8);
  piVar4 = (int *)((int)param_1 + 0x8c);
  local_4c = 0x14;
  do {
    if (*piVar4 != 0) {
      this = *(void **)(*piVar4 + 0x214);
      FUN_00973ac0(this);
      local_58 = 8;
      piVar6 = piVar5;
      do {
        if (*piVar6 != -1) {
          FUN_00976530((int)this,*piVar6);
          iVar2 = FUN_00974ea0(this,*piVar6);
          if ((iVar2 < 0) || ((int)(uint)*(byte *)((int)this + 0x4e) <= iVar2)) {
            pcVar3 = (char *)0x0;
          }
          else {
            pcVar3 = (char *)FUN_009722a0(this,iVar2);
          }
          uStack_78 = 0x8bb896;
          _strncpy(local_40,pcVar3,0x3f);
          _Dest = local_80;
          local_80[0] = 0;
          pcVar3 = local_40;
          _Size = 0x14;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          _Count = (int)pcVar3 - (int)(local_40 + 1);
          if (0x13 < _Count) {
            _Size = _Count + 0x20 & 0xffffffe0;
            _Dest = _malloc(_Size);
          }
          _strncpy((char *)_Dest,local_40,_Count);
          _Dest[_Count] = 0;
          FUN_008bb2e0(param_1,_Dest,_Count,_Size);
        }
        piVar6 = piVar6 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
    piVar4 = piVar4 + 6;
    piVar5 = piVar5 + 8;
    local_4c = local_4c + -1;
  } while (local_4c != 0);
  return;
}


//// FUNCTION FUN_008bb950 @ 008bb950 ////

undefined4 * __cdecl FUN_008bb950(byte *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint _Size;
  byte *pbVar7;
  bool bVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cecae3;
  local_c = ExceptionList;
  local_4 = 0;
  puVar6 = DAT_010502f4;
  do {
    if ((int **)puVar6 == &DAT_01050300) {
      ExceptionList = &local_c;
      pvVar5 = operator_new(0x568);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (pvVar5 == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_008bb5c0(pvVar5,0);
      }
      piVar1 = puVar6 + 0xae;
      puVar6[0xaf] = &DAT_01050300;
      *piVar1 = (int)DAT_01050300;
      *(int **)((int)DAT_01050300 + 4) = piVar1;
      DAT_01050300 = piVar1;
      if ((uint)puVar6[0xb4] <= param_2) {
        if (0x14 < (uint)puVar6[0xb4]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[0xb2]);
        }
        _Size = param_2 + 0x20 & 0xffffffe0;
        puVar6[0xb4] = _Size;
        pvVar5 = _malloc(_Size);
        puVar6[0xb2] = pvVar5;
      }
      _strncpy((char *)puVar6[0xb2],(char *)param_1,param_2);
      puVar6[0xb3] = param_2;
      *(undefined1 *)(param_2 + puVar6[0xb2]) = 0;
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return puVar6;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    pbVar3 = (byte *)((undefined4 *)puVar6[2])[0xb2];
    pbVar7 = param_1;
    do {
      bVar2 = *pbVar3;
      bVar8 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_008bb9b4:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_008bb9b9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar8 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_008bb9b4;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_008bb9b9:
    if (iVar4 == 0) {
      if (param_3 < 0x15) {
        return (undefined4 *)puVar6[2];
      }
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


//// FUNCTION FUN_008bbad0 @ 008bbad0 ////

void __fastcall FUN_008bbad0(void *param_1)

{
  FUN_008ba890(param_1);
  FUN_008bb800(param_1);
  return;
}


//// FUNCTION FUN_008bbae0 @ 008bbae0 ////

undefined4 * __fastcall FUN_008bbae0(undefined4 *param_1)

{
  FUN_008ab900(param_1);
  *param_1 = &PTR_FUN_00d64a64;
  return param_1;
}


//// FUNCTION FUN_008bbb20 @ 008bbb20 ////

int * __thiscall FUN_008bbb20(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008bbb40 @ 008bbb40 ////

void __fastcall FUN_008bbb40(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cecafb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_01050334 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_01050334)(1,param_1);
  }
  (*(code *)DAT_01050320[1])();
  DAT_01050334 = (undefined4 *)0x0;
  (*(code *)*DAT_01050320)();
  puVar1 = operator_new(200);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_008ab900(puVar1);
    *puVar1 = &PTR_FUN_00d64a64;
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_01050320[1])();
  DAT_01050334 = puVar1;
  (*(code *)*DAT_01050320)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008bbc00 @ 008bbc00 ////

undefined4 * __thiscall FUN_008bbc00(void *this,byte param_1)

{
  thunk_FUN_008ab6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008bbc30 @ 008bbc30 ////

void FUN_008bbc30(void)

{
  if (DAT_01050334 != (undefined4 *)0x0) {
    (**(code **)*DAT_01050334)(1);
  }
  (*(code *)DAT_01050320[1])();
  DAT_01050334 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x008bbc62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_01050320)();
  return;
}


//// FUNCTION FUN_008bbec0 @ 008bbec0 ////

void __thiscall FUN_008bbec0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d64a8c;
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


//// FUNCTION FUN_008bbf10 @ 008bbf10 ////

void __fastcall FUN_008bbf10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d64a8c;
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


//// FUNCTION FUN_008bbf60 @ 008bbf60 ////

void __fastcall FUN_008bbf60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d64aa0;
  FUN_008b99b0(param_1);
  return;
}


//// FUNCTION FUN_008bbf70 @ 008bbf70 ////

undefined4 * __thiscall FUN_008bbf70(void *this,byte param_1)

{
  FUN_008bbf60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008bbf90 @ 008bbf90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_008bbf90(void *this,undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined3 extraout_var_00;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  float unaff_ESI;
  float10 fVar11;
  undefined1 *puVar12;
  int *piStack_24;
  undefined4 local_20;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  float *pfStack_10;
  undefined1 auStack_c [8];
  float fStack_4;
  
  bVar3 = FUN_0059c510(*(int *)((int)this + 0xec));
  uVar10 = CONCAT31(extraout_var,bVar3);
  if (!bVar3) {
    piVar4 = (int *)FUN_0059c530(*(int *)((int)this + 0xec));
    uVar10 = 0;
    if (piVar4 != (int *)0x0) {
      local_20 = *(undefined4 *)((int)this + 0xec);
      iVar5 = (**(code **)(*param_2 + 0x34))(local_18);
      iVar6 = (**(code **)(*piStack_24 + 0x34))(&pfStack_10);
      fVar1 = *(float *)(iVar6 + 4) - *(float *)(iVar5 + 4);
      pfVar7 = (float *)(**(code **)(*piVar4 + 0x24))(&piStack_24);
      fVar2 = _DAT_00e5eeb4 * *pfVar7;
      *(float *)((int)this + 0xfc) = fVar2;
      fVar1 = SQRT(fVar1 * fVar1 + unaff_ESI * unaff_ESI + fStack_4 * fStack_4);
      uVar10 = CONCAT22((short)((uint)pfVar7 >> 0x10),
                        (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                        (ushort)(fVar1 == fVar2) << 0xe);
      if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
        bVar3 = FUN_00842c80(*(int **)((int)this + 0xec));
        uVar10 = CONCAT31(extraout_var_00,bVar3);
        if ((bVar3) && (param_2 != *(int **)((int)this + 0xec))) {
          uVar8 = (**(code **)(**(int **)((int)this + 0xec) + 0x34))(local_18);
          pfVar7 = (float *)&stack0xffffffd8;
          pfVar9 = (float *)(**(code **)(*param_2 + 0x34))(pfVar7,uVar8);
          fVar11 = FUN_00412f80(pfVar9,pfVar7);
          *pfStack_10 = (float)fVar11;
          puVar12 = auStack_c;
          pfVar7 = (float *)(**(code **)(*piVar4 + 0x24))(puVar12,0x3dcccccd);
          fVar11 = FUN_004070c0(pfVar7,(float)puVar12);
          pfStack_10 = (float *)(float)fVar11;
          pfVar7 = (float *)FUN_0059a8f0(*(void **)((int)this + 0xec),&uStack_14);
          fVar1 = *pfVar7;
          uVar10 = CONCAT22((short)((uint)pfVar7 >> 0x10),
                            (ushort)((float)pfStack_10 < fVar1) << 8 |
                            (ushort)(NAN((float)pfStack_10) || NAN(fVar1)) << 10 |
                            (ushort)((float)pfStack_10 == fVar1) << 0xe);
          if ((float)pfStack_10 >= fVar1 && ((float)pfStack_10 == fVar1) == 0) {
            iVar5 = FUN_005998e0(*(int *)((int)this + 0xec));
            uVar10 = 0;
            if (iVar5 != 0) {
              uVar10 = FUN_005998e0(*(int *)((int)this + 0xec));
              if (*(char *)(uVar10 + 0x225) != '\0') {
                return CONCAT31((int3)(uVar10 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar10 & 0xffffff00;
}


//// FUNCTION FUN_008bc120 @ 008bc120 ////

undefined4 * __thiscall FUN_008bc120(void *this,char *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 local_1c [20];
  
  puVar1 = local_1c;
  local_1c[0] = 0;
  uVar2 = 0;
  FUN_004015d0(&stack0xffffffd8,"talk",4);
  FUN_008b9830(this,param_1,(uint)puVar1,uVar2);
  *(undefined ***)this = &PTR_FUN_00d64aa0;
  return this;
}


//// FUNCTION FUN_008bc170 @ 008bc170 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_008bc170(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *this_00;
  int *piVar8;
  undefined4 *this_01;
  float unaff_EBP;
  float10 fVar9;
  int *unaff_retaddr;
  undefined4 uVar10;
  float fVar11;
  float fStack_74;
  undefined4 *local_70;
  int iStack_6c;
  undefined4 *puStack_68;
  int local_64;
  undefined4 uStack_60;
  void *apvStack_54 [2];
  uint uStack_4c;
  void *pvStack_34;
  uint auStack_2c [6];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cecb6c;
  local_c = ExceptionList;
  local_70 = (undefined4 *)&stack0xffffff74;
  ExceptionList = &local_c;
  bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xec));
  if (bVar1) {
    piVar2 = *(int **)((int)this + 0xec);
    (**(code **)(*param_1 + 0x34))();
    (**(code **)(*piVar2 + 0x34))();
    piVar2 = (int *)FUN_0059c530(*(int *)((int)this + 0xec));
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x24))();
    fVar11 = *pfVar3 * _DAT_00e5eeb4;
    *(float *)((int)this + 0xfc) = fVar11;
    if (fStack_74 <= fVar11) {
      bVar1 = FUN_00842c80(*(int **)((int)this + 0xec));
      if (bVar1) {
        local_70 = (undefined4 *)&stack0xffffff74;
        piVar2 = (int *)FUN_0059c530(*(int *)((int)this + 0xec));
        fVar11 = 0.1;
        pfVar3 = (float *)(**(code **)(*piVar2 + 0x24))();
        fVar9 = FUN_004070c0(pfVar3,fVar11);
        pfVar3 = (float *)FUN_0059a8f0(*(void **)((int)this + 0xec),&local_70);
        if (*pfVar3 < (float)fVar9) {
          iVar4 = FUN_005998e0(*(int *)((int)this + 0xec));
          if (iVar4 != 0) {
            iVar4 = FUN_005998e0(*(int *)((int)this + 0xec));
            if (*(char *)(iVar4 + 0x225) != '\0') {
              FUN_00465550(&iStack_6c,param_1,*(int **)((int)this + 0xec));
              local_70 = operator_new(0x31c);
              pvStack_4 = (void *)0x0;
              if (local_70 == (undefined4 *)0x0) {
                piVar2 = (int *)0x0;
              }
              else {
                piVar2 = FUN_004f1360(local_70);
              }
              pvStack_4 = (void *)0xffffffff;
              FUN_004f10e0(auStack_2c,param_1,*(int **)((int)this + 0xec));
              pvStack_4 = (void *)0x1;
              (**(code **)(*piVar2 + 0xb0))();
              puStack_68 = local_70;
              local_64 = iStack_6c;
              uStack_60 = 0;
              (**(code **)(*piVar2 + 0x2c))();
              iVar5 = FUN_00ace790(*(int **)((int)this + 0xec),0,
                                   &TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
              iVar6 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
              pvVar7 = (void *)FUN_00ace790(unaff_retaddr,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                            &TM::DesireTalk::RTTI_Type_Descriptor,0);
              FUN_00842c50(pvVar7,iVar5);
              pfVar3 = (float *)&stack0xffffff80;
              iVar4 = iVar6;
              pvVar7 = (void *)FUN_005873c0(iVar5);
              FUN_0042e910(pvVar7,pfVar3,iVar4);
              FUN_00401de0(apvStack_54,"ai_chemistry",0xffffffff);
              local_c._0_1_ = 2;
              FUN_00404790(piVar2,apvStack_54,unaff_EBP);
              local_c._0_1_ = 1;
              if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_54[0]);
              }
              pvVar7 = operator_new(0x2b4);
              local_c._0_1_ = 3;
              if (pvVar7 == (void *)0x0) {
                this_00 = (undefined4 *)0x0;
              }
              else {
                this_00 = FUN_00402380(pvVar7,*(int *)((int)this + 0xec),piVar2);
              }
              local_c._0_1_ = 1;
              piVar8 = (int *)FUN_0059c530(*(int *)((int)this + 0xec));
              pvVar7 = (void *)FUN_00ace790(piVar8,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                                            &TM::DesireTalk::RTTI_Type_Descriptor,0);
              FUN_00842ef0(pvVar7,1);
              FUN_00842c50(pvVar7,iVar6);
              FUN_00401a00(this_00,piVar8);
              this_00[0x84] = this_00[0x84] & 0xfffffffe;
              TMCharacter_AddAction(*(void **)((int)this + 0xec),(int)this_00);
              pvVar7 = operator_new(0x2b4);
              local_c._0_1_ = 4;
              if (pvVar7 == (void *)0x0) {
                this_01 = (undefined4 *)0x0;
              }
              else {
                this_01 = FUN_00402380(pvVar7,(int)pvStack_4,piVar2);
              }
              local_c._0_1_ = 1;
              FUN_00401a00(this_01,unaff_retaddr);
              this_01[0x84] = this_01[0x84] & 0xfffffffe;
              if (*(int *)(*(int *)((int)this + 0xec) + 0x4a0) == 0) {
                this_01[0x91] = 1;
                this_00[0x91] = 0;
              }
              else {
                this_00[0x91] = 1;
                this_01[0x91] = 0;
              }
              if (_DAT_00e51ca8 <= unaff_EBP) {
                uVar10 = 0xb;
              }
              else {
                pvStack_4 = operator_new(0x1e4);
                local_c._0_1_ = 5;
                if (pvStack_4 != (void *)0x0) {
                  FUN_008b7250(pvStack_4,piVar2);
                }
                local_c._0_1_ = 1;
                uVar10 = 4;
              }
              FUN_004031c0(piVar2,uVar10);
              FUN_00401440(piVar2);
              if (0x14 < auStack_2c[0]) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_34);
              }
              ExceptionList = pvStack_14;
              return this_01;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008bc610 @ 008bc610 ////

void FUN_008bc610(void)

{
  return;
}


//// FUNCTION FUN_008bc620 @ 008bc620 ////

void __thiscall FUN_008bc620(void *this,undefined4 param_1)

{
  *(undefined1 *)((int)this + 0x22c) = 1;
  *(undefined4 *)((int)this + 0x228) = param_1;
  return;
}


//// FUNCTION FUN_008bc650 @ 008bc650 ////

undefined4 * __fastcall FUN_008bc650(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cecb8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x2e8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_0040b940(this,*(int *)(param_1 + 0x1d4));
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_008bc6c0 @ 008bc6c0 ////

undefined4 __fastcall FUN_008bc6c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}


//// FUNCTION FUN_008bc6d0 @ 008bc6d0 ////

void __fastcall FUN_008bc6d0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cecbc8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x17c) != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"pos",3);
    local_28 = 3;
    local_2c[3] = '\0';
    local_4 = 0;
    uVar1 = FUN_00558a50(*(void **)(param_1 + 0x17c),&local_2c,(undefined4 *)0x1);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if ((char)uVar1 != '\0') {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"LocalPositionX",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 1;
      fVar2 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_2c,0.0);
      *(float *)(param_1 + 0x1d8) = (float)fVar2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"LocalPositionY",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 2;
      fVar2 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_2c,0.0);
      *(float *)(param_1 + 0x1dc) = (float)fVar2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"LocalPositionZ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 3;
      fVar2 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_2c,0.0);
      *(float *)(param_1 + 0x1e0) = (float)fVar2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"LocalAngle",10);
      local_28 = 10;
      local_2c[10] = '\0';
      local_4 = 4;
      fVar2 = FUN_00558610(*(void **)(param_1 + 0x17c),&local_2c,0.0);
      fVar2 = FUN_004012c0((float)fVar2);
      *(float *)(param_1 + 0x1e4) = (float)fVar2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008bc940 @ 008bc940 ////

void __fastcall FUN_008bc940(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float local_c;
  float local_8;
  float local_4;
  
  fVar6 = (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x11c) + 0x80);
  pfVar1 = (float *)(param_1 + 0x218);
  fVar7 = (float10)fcos(fVar6);
  fVar6 = (float10)fsin(fVar6);
  local_c = *(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x1d8);
  local_8 = *(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x1dc);
  local_4 = *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x1e0);
  *pfVar1 = local_c;
  *(float *)(param_1 + 0x21c) = local_8;
  *(float *)(param_1 + 0x220) = local_4;
  fVar2 = *pfVar1;
  fVar3 = *(float *)(param_1 + 0x21c);
  fVar4 = *(float *)(param_1 + 0x220) * 0.0;
  *pfVar1 = (float)(-fVar6 * (float10)fVar3 + fVar7 * (float10)fVar2 + (float10)fVar4);
  *(float *)(param_1 + 0x21c) =
       (float)(fVar6 * (float10)fVar2 + fVar7 * (float10)fVar3 + (float10)fVar4);
  *(float *)(param_1 + 0x220) = (fVar3 + fVar2) * 0.0 + *(float *)(param_1 + 0x220);
  pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0x1d4) + 0x34))(&local_c);
  *pfVar1 = *pfVar5 + *pfVar1;
  *(float *)(param_1 + 0x21c) = pfVar5[1] + *(float *)(param_1 + 0x21c);
  *(float *)(param_1 + 0x220) = pfVar5[2] + *(float *)(param_1 + 0x220);
  return;
}


//// FUNCTION FUN_008bca40 @ 008bca40 ////

undefined4 __thiscall FUN_008bca40(void *this,int param_1,undefined4 param_2)

{
  char cVar1;
  int *this_00;
  int iVar2;
  undefined4 *this_01;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 unaff_EDI;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte abStack_138 [4];
  undefined4 uStack_134;
  int *piVar8;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void **ppvStack_100;
  undefined4 *puStack_fc;
  undefined1 *puStack_f8;
  void *apvStack_f4 [4];
  char *pcStack_e4;
  char *pcStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  char acStack_d4 [20];
  char *pcStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  char acStack_b4 [20];
  void *pvStack_a0;
  uint uStack_98;
  void **local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_80;
  char *pcStack_7c;
  uint uStack_78;
  char *pcStack_60;
  uint uStack_5c;
  uint uStack_58;
  void *pvStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  void *pvStack_20;
  undefined1 uStack_18;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cecc53;
  pvStack_c = ExceptionList;
  local_8c = &local_80;
  local_80 = (void *)((uint)local_80 & 0xffffff00);
  local_88 = 0;
  local_84 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  this_00 = (int *)(**(code **)(*(int *)this + 0x30))();
  apvStack_f4[0] = operator_new(0x2b4);
  local_4._0_1_ = 1;
  if (apvStack_f4[0] == (void *)0x0) {
    puStack_fc = (undefined4 *)0x0;
  }
  else {
    uStack_11c = 0x8bcac6;
    puStack_fc = FUN_00402380(apvStack_f4[0],param_1,this_00);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004016f0(puStack_fc,this);
  FUN_00401a00(puStack_fc,param_2);
  if (*(int *)((int)this + 0x230) != -1) {
    puStack_fc[0x91] = *(int *)((int)this + 0x230);
  }
  (**(code **)(*this_00 + 0xe8))();
  uStack_11c = 0x8bcb22;
  FUN_004039a0(this_00,this);
  puStack_f8 = (undefined1 *)&uStack_120;
  uStack_120 = *(undefined4 *)((int)this + 0x208);
  uStack_11c = *(undefined4 *)((int)this + 0x20c);
  (**(code **)(*this_00 + 0xe4))();
  *(undefined1 *)((int)this_00 + 0x2b7) = *(undefined1 *)((int)this + 0xc4);
  ppvStack_100 = apvStack_f4;
  bVar5 = true;
  apvStack_f4[0] = (void *)((uint)apvStack_f4[0] & 0xffffff00);
  puStack_fc = (undefined4 *)0x0;
  puStack_f8 = (undefined1 *)0x14;
  _strncpy((char *)ppvStack_100,"",0);
  puStack_fc = (undefined4 *)0x0;
  *(char *)ppvStack_100 = '\0';
  uStack_14 = 2;
  FUN_00558a50(*(void **)((int)this + 0x17c),&ppvStack_100,(undefined4 *)0x1);
  if (0x14 < puStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_100);
  }
  ppvStack_100 = apvStack_f4;
  apvStack_f4[0] = (void *)((uint)apvStack_f4[0] & 0xffffff00);
  puStack_fc = (undefined4 *)0x0;
  puStack_f8 = (undefined1 *)0x14;
  _strncpy((char *)ppvStack_100,"grabbable",9);
  puStack_fc = (undefined4 *)0x9;
  *(char *)((int)ppvStack_100 + 9) = '\0';
  uStack_14 = 3;
  FUN_005584e0(*(void **)((int)this + 0x17c),&uStack_3c,&ppvStack_100);
  uStack_14 = 5;
  if (0x14 < puStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_100);
  }
  if (uStack_38 != 0) {
    iVar2 = FUN_00567d80(&uStack_3c);
    bVar5 = iVar2 != 0;
  }
  FUN_00403110(this_00,bVar5);
  ppvStack_100 = apvStack_f4;
  apvStack_f4[0] = (void *)((uint)apvStack_f4[0] & 0xffffff00);
  puStack_fc = (undefined4 *)0x0;
  puStack_f8 = (undefined1 *)0x14;
  _strncpy((char *)ppvStack_100,"slidershare",0xb);
  puStack_fc = (undefined4 *)0xb;
  *(char *)((int)ppvStack_100 + 0xb) = '\0';
  uStack_14 = 6;
  FUN_005584e0(*(void **)((int)this + 0x17c),&pcStack_7c,&ppvStack_100);
  uStack_14 = 8;
  if (0x14 < puStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_100);
  }
  if (uStack_78 != 0) {
    pbVar4 = abStack_138;
    abStack_138[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    piVar8 = this_00;
    FUN_004015d0(&stack0xfffffebc,pcStack_7c,uStack_78);
    this_01 = FUN_008bb950(pbVar4,uVar6,uVar7);
    FUN_008ba340(this_01,piVar8);
  }
  this_00[0xb9] = *(int *)((int)this + 0x214);
  (**(code **)(*this_00 + 0xb0))();
  pcStack_e0 = acStack_d4;
  acStack_d4[0] = '\0';
  uStack_dc = 0;
  uStack_d8 = 0x14;
  uStack_134 = 0x8bcd4e;
  _strncpy(pcStack_e0,"peasants",8);
  uStack_dc = 8;
  pcStack_e0[8] = '\0';
  uStack_18 = 9;
  uVar3 = FUN_00558a50(*(void **)((int)this + 0x17c),&pcStack_e0,(undefined4 *)0x0);
  uStack_18 = 8;
  if (0x14 < uStack_d8) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e0);
  }
  if (((char)uVar3 != '\0') &&
     (cVar1 = FUN_00558bb0(*(void **)((int)this + 0x17c),6), cVar1 != '\0')) {
    cVar1 = FUN_00558bb0(*(void **)((int)this + 0x17c),0);
    while (cVar1 != '\0') {
      pcStack_e0 = acStack_d4;
      acStack_d4[0] = '\0';
      uStack_dc = 0;
      uStack_d8 = 0x14;
      uStack_134 = 0x8bcdf3;
      _strncpy(pcStack_e0,"id",2);
      uStack_dc = 2;
      pcStack_e0[2] = '\0';
      uStack_18 = 10;
      uStack_134 = 0x8bce20;
      iVar2 = FUN_00558750(*(void **)((int)this + 0x17c),&pcStack_e0,0);
      if (0x14 < uStack_d8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_e0);
      }
      pcStack_c0 = acStack_b4;
      acStack_b4[0] = '\0';
      uStack_bc = 0;
      uStack_b8 = 0x14;
      uStack_134 = 0x8bce5a;
      _strncpy(pcStack_c0,"costume",7);
      uStack_bc = 7;
      pcStack_c0[7] = '\0';
      uStack_18 = 0xb;
      uStack_134 = 0x8bce8e;
      FUN_005584e0(*(void **)((int)this + 0x17c),&pcStack_60,&pcStack_c0);
      uVar6 = uStack_5c;
      uStack_18 = 0xd;
      if (0x14 < uStack_b8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_c0);
      }
      pbVar4 = abStack_138;
      abStack_138[0] = 0;
      uVar7 = 0x14;
      pcStack_e4 = pcStack_60;
      if (0x13 < uStack_5c) {
        uVar7 = uStack_5c + 0x20 & 0xffffffe0;
        pbVar4 = _malloc(uVar7);
      }
      _strncpy((char *)pbVar4,pcStack_e4,uVar6);
      pbVar4[uVar6] = 0;
      FUN_00404050(this_00,0,iVar2,(char *)pbVar4,uVar6,uVar7);
      uStack_18 = 8;
      if (0x14 < uStack_58) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_60);
      }
      cVar1 = FUN_00558bb0(*(void **)((int)this + 0x17c),2);
    }
  }
  piVar8 = this_00 + 0x12;
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    (**(code **)*this_00)();
  }
  if (0x14 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_80);
  }
  if (0x14 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  if (0x14 < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_a0);
  }
  ExceptionList = pvStack_20;
  return unaff_EDI;
}


//// FUNCTION FUN_008bcfe0 @ 008bcfe0 ////

undefined4 * __fastcall FUN_008bcfe0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceccd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008ab900(param_1);
  local_4 = 0;
  FUN_0053dcd0(param_1 + 0x32);
  *param_1 = &PTR_FUN_00d64b70;
  param_1[0x32] = &PTR_LAB_00d64b48;
  param_1[0x52] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = param_1 + 0x54;
  param_1[0x54] = &PTR_LAB_00d1a210;
  param_1[0x59] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = param_1 + 0x5a;
  param_1[0x5a] = &PTR_LAB_00d1a210;
  param_1[0x5f] = 0;
  param_1[0x60] = param_1 + 99;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0x14;
  param_1[0x68] = param_1 + 0x6b;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x14;
  param_1[0x73] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = param_1 + 0x70;
  param_1[0x70] = &PTR_FUN_00d16bec;
  param_1[0x75] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = param_1 + 0x7d;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0x14;
  param_1[0x85] = 0;
  param_1[0x8c] = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,8);
  (**(code **)(param_1[0x2b] + 4))();
  param_1[0x30] = 0;
  (**(code **)param_1[0x2b])();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x52] = param_1;
  FUN_00acdb9e(0xe5eedc);
  iVar1 = FUN_0097dda0();
  param_1[0x53] = iVar1;
  if (DAT_00e5eed8 != '\0') {
    iVar1 = 0x140;
    pcVar3 = "AssetExplainerLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5eedc);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    DAT_00e5eed8 = '\0';
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_008bd1c0 @ 008bd1c0 ////

void __fastcall FUN_008bd1c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cecd83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d64b70;
  param_1[0x32] = &PTR_LAB_00d64b48;
  local_4 = 8;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
  }
  (**(code **)(param_1[0x2b] + 4))();
  param_1[0x30] = 0;
  (**(code **)param_1[0x2b])();
  if (0x14 < (uint)param_1[0x7c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x7a]);
  }
  param_1[0x70] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x72] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x72] = param_1[0x71];
  }
  if (param_1[0x71] != 0) {
    *(undefined4 *)(param_1[0x71] + 4) = param_1[0x72];
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  if ((undefined4 *)param_1[0x72] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x72] = param_1[0x71];
  }
  if (param_1[0x71] != 0) {
    *(undefined4 *)(param_1[0x71] + 4) = param_1[0x72];
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  if (0x14 < (uint)param_1[0x6a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x68]);
  }
  if (0x14 < (uint)param_1[0x62]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x60]);
  }
  param_1[0x5a] = &PTR_LAB_00d1a210;
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5c] = param_1[0x5b];
  }
  if (param_1[0x5b] != 0) {
    *(undefined4 *)(param_1[0x5b] + 4) = param_1[0x5c];
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5c] = param_1[0x5b];
  }
  if (param_1[0x5b] != 0) {
    *(undefined4 *)(param_1[0x5b] + 4) = param_1[0x5c];
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x54] = &PTR_LAB_00d1a210;
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
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x51] = param_1[0x50];
  }
  if (param_1[0x50] != 0) {
    *(undefined4 *)(param_1[0x50] + 4) = param_1[0x51];
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0053ddb0(param_1 + 0x32);
  local_4 = 0xffffffff;
  FUN_008ab6b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008bd430 @ 008bd430 ////

undefined4 * __thiscall FUN_008bd430(void *this,byte param_1)

{
  FUN_008bd1c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008bd450 @ 008bd450 ////

void __fastcall FUN_008bd450(int param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  char *_Dest;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  float10 fVar14;
  char *pcStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  char acStack_80 [20];
  byte *pbStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  byte abStack_60 [20];
  char *local_4c;
  uint uStack_48;
  uint uStack_44;
  void *pvStack_2c;
  int iStack_28;
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cecdf2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar4 = FUN_0040d6b0(&local_4c,"explainers/",(undefined4 *)(param_1 + 0x180));
  puVar10 = (undefined4 *)0x0;
  local_4 = 0;
  puVar4 = FUN_0055c3c0(puVar4);
  (**(code **)(*(int *)(param_1 + 0x168) + 4))();
  *(undefined4 **)(param_1 + 0x17c) = puVar4;
  (*(code *)**(undefined4 **)(param_1 + 0x168))();
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  pcStack_8c = acStack_80;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x14;
  _strncpy(pcStack_8c,"",0);
  uStack_88 = 0;
  *pcStack_8c = '\0';
  local_4 = 1;
  FUN_00558a50(*(void **)(param_1 + 0x17c),&pcStack_8c,(undefined4 *)0x1);
  if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_8c);
  }
  pbStack_6c = abStack_60;
  abStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0x14;
  _strncpy((char *)pbStack_6c,"",0);
  uStack_68 = 0;
  *pbStack_6c = 0;
  pbVar12 = *(byte **)(param_1 + 0x1e8);
  pbVar11 = pbStack_6c;
  do {
    bVar1 = *pbVar12;
    bVar13 = bVar1 < *pbVar11;
    if (bVar1 != *pbVar11) {
LAB_008bd595:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_008bd59a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar12[1];
    bVar13 = bVar1 < pbVar11[1];
    if (bVar1 != pbVar11[1]) goto LAB_008bd595;
    pbVar12 = pbVar12 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_008bd59a:
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pbStack_6c);
  }
  if (iVar5 == 0) {
    pcStack_8c = acStack_80;
    acStack_80[0] = '\0';
    uStack_88 = 0;
    uStack_84 = 0x14;
    _strncpy(pcStack_8c,"interaction",0xb);
    uStack_88 = 0xb;
    pcStack_8c[0xb] = '\0';
    local_4 = 2;
    puVar4 = FUN_005584e0(*(void **)(param_1 + 0x17c),&local_4c,&pcStack_8c);
    FUN_004015d0((void *)(param_1 + 0x1e8),(char *)*puVar4,puVar4[1]);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_8c);
    }
  }
  if (*(int *)(param_1 + 0x1ec) == 0) {
    FUN_004015d0((void *)(param_1 + 0x1e8),"error",5);
  }
  pcStack_8c = acStack_80;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x14;
  _strncpy(pcStack_8c,"range",5);
  uStack_88 = 5;
  pcStack_8c[5] = '\0';
  local_4 = 3;
  fVar14 = FUN_00558610(*(void **)(param_1 + 0x17c),&pcStack_8c,0.0);
  if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_8c);
  }
  if (0.0 < (float)fVar14) {
    *(undefined1 *)(param_1 + 0x22c) = 1;
    *(float *)(param_1 + 0x228) = (float)fVar14;
  }
  pcStack_8c = acStack_80;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x14;
  _strncpy(pcStack_8c,"override",8);
  uStack_88 = 8;
  pcStack_8c[8] = '\0';
  local_4 = 4;
  FUN_005584e0(*(void **)(param_1 + 0x17c),&pvStack_2c,&pcStack_8c);
  local_4._0_1_ = 6;
  if (uStack_84 < 0x15) {
    if (iStack_28 != 0) {
      uVar6 = FUN_00413450(&pvStack_2c,"repair",0,6);
      if (uVar6 == 0xffffffff) {
        uVar6 = FUN_00413450(&pvStack_2c,"buyfood",0,7);
        if (uVar6 == 0xffffffff) {
          uVar6 = FUN_00413450(&pvStack_2c,"getchanged",0,10);
          if (uVar6 == 0xffffffff) {
            iVar5 = FUN_004155b0(&pvStack_2c,"classiness",0);
            if (iVar5 != -1) {
              *(undefined4 *)(param_1 + 0x224) = 3;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x224) = 4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x224) = 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x224) = 1;
      }
    }
    FUN_008bc6d0(param_1);
    pbStack_6c = abStack_60;
    abStack_60[0] = 0;
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy((char *)pbStack_6c,"action/",7);
    uStack_68 = 7;
    pbStack_6c[7] = 0;
    local_4._0_1_ = 7;
    uVar7 = FUN_00558a50(*(void **)(param_1 + 0x17c),&pbStack_6c,(undefined4 *)0x0);
    local_4._0_1_ = 6;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_6c);
    }
    if (((char)uVar7 != '\0') &&
       (cVar3 = FUN_00558bb0(*(void **)(param_1 + 0x17c),6), cVar3 != '\0')) {
      FUN_00558bb0(*(void **)(param_1 + 0x17c),0);
      do {
        FUN_005562f0(*(void **)(param_1 + 0x17c),&local_4c,1);
        uVar6 = uStack_48;
        pcVar2 = local_4c;
        if (*(uint *)(param_1 + 0x7c) <= uStack_48) {
          if (0x14 < *(uint *)(param_1 + 0x7c)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x74));
          }
          uVar8 = uStack_48 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x7c) = uVar8;
          pvVar9 = _malloc(uVar8);
          *(void **)(param_1 + 0x74) = pvVar9;
        }
        _strncpy(*(char **)(param_1 + 0x74),pcVar2,uVar6);
        pbStack_6c = abStack_60;
        *(uint *)(param_1 + 0x78) = uVar6;
        *(undefined1 *)(uVar6 + *(int *)(param_1 + 0x74)) = 0;
        abStack_60[0] = 0;
        uStack_68 = 0;
        uStack_64 = 0x14;
        _strncpy((char *)pbStack_6c,"local",5);
        uStack_68 = 5;
        pbStack_6c[5] = 0;
        local_4._0_1_ = 9;
        iVar5 = FUN_00558750(*(void **)(param_1 + 0x17c),&pbStack_6c,0);
        uVar6 = uStack_48;
        pcVar2 = local_4c;
        local_4._0_1_ = 8;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pbStack_6c);
        }
        if (iVar5 == 0) {
          _Dest = &stack0xffffff48;
          uVar8 = 0x14;
          if (0x13 < uStack_48) {
            uVar8 = uStack_48 + 0x20 & 0xffffffe0;
            _Dest = _malloc(uVar8);
          }
          _strncpy(_Dest,pcVar2,uVar6);
          _Dest[uVar6] = '\0';
          FUN_008b94b0(param_1,_Dest,uVar6,uVar8);
        }
        local_4._0_1_ = 6;
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        cVar3 = FUN_00558bb0(*(void **)(param_1 + 0x17c),2);
      } while (cVar3 != '\0');
    }
    pvVar9 = operator_new(0x60);
    local_4._0_1_ = 10;
    if (pvVar9 != (void *)0x0) {
      puVar10 = FUN_008adac0(pvVar9,*(void **)(param_1 + 0x17c),param_1);
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    (**(code **)(*(int *)(param_1 + 0xac) + 4))();
    *(undefined4 **)(param_1 + 0xc0) = puVar10;
    (*(code *)**(undefined4 **)(param_1 + 0xac))();
    if (uStack_24 < 0x15) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_8c);
}


//// FUNCTION FUN_008bdaa0 @ 008bdaa0 ////

void __thiscall FUN_008bdaa0(void *this,undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float afStack_78 [3];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *pvStack_2c;
  int iStack_28;
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cece20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x1c0) + 4))();
  *(int *)((int)this + 0x1d4) = param_3;
  (*(code *)**(undefined4 **)((int)this + 0x1c0))();
  afStack_78[0] = 0.0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  afStack_78[1] = 0.0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  afStack_78[2] = 0.0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  puVar1 = FUN_0055c3c0(param_1);
  (**(code **)(*(int *)((int)this + 0x150) + 4))();
  *(undefined4 **)((int)this + 0x164) = puVar1;
  (*(code *)**(undefined4 **)((int)this + 0x150))();
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  FUN_004015d0(puVar1,(char *)*param_2,param_2[1]);
  uVar2 = FUN_004302c0(puVar1,&DAT_00d21764,0xffffffff,1);
  puVar3 = FUN_00430770(puVar1,&pcStack_4c,0,uVar2);
  FUN_004015d0((void *)((int)this + 0x180),(char *)*puVar3,puVar3[1]);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  puVar1 = FUN_0040d6b0(&pcStack_4c,"extra_info/explainer/",puVar1);
  uStack_4 = 0;
  FUN_00558a50(*(void **)((int)this + 0x164),puVar1,(undefined4 *)0x1);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  pcStack_6c = acStack_60;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x14;
  _strncpy(pcStack_6c,"offset",6);
  uStack_68 = 6;
  pcStack_6c[6] = '\0';
  uStack_4 = 1;
  FUN_005584e0(*(void **)((int)this + 0x164),&pvStack_2c,&pcStack_6c);
  uStack_4._0_1_ = 3;
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  if (iStack_28 == 0) {
    *(undefined4 *)((int)this + 0x208) = 0;
    *(undefined4 *)((int)this + 0x20c) = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_00567da0(afStack_78,&pvStack_2c,'\0');
    *(undefined4 *)((int)this + 0x208) = *puVar1;
    *(undefined4 *)((int)this + 0x20c) = puVar1[1];
  }
  pcStack_4c = acStack_40;
  *(undefined4 *)((int)this + 0x210) = 0;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"angle",5);
  uStack_48 = 5;
  pcStack_4c[5] = '\0';
  uStack_4._0_1_ = 4;
  fVar4 = FUN_00558610(*(void **)((int)this + 0x164),&pcStack_4c,0.0);
  fVar4 = FUN_004012c0((float)fVar4);
  *(float *)((int)this + 0x214) = (float)fVar4;
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  FUN_008bd450((int)this);
  (**(code **)(*(int *)this + 0x2c))();
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008bdfe0 @ 008bdfe0 ////

void __thiscall
FUN_008bdfe0(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  (**(code **)(*(int *)((int)this + 0x1c0) + 4))();
  *(int *)((int)this + 0x1d4) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0x1c0))();
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  FUN_004015d0((void *)((int)this + 0x180),(char *)*param_1,param_1[1]);
  *(int *)((int)this + 0x208) = param_3;
  *(int *)((int)this + 0x20c) = param_4;
  *(int *)((int)this + 0x210) = param_5;
  *(int *)((int)this + 0x214) = param_6;
  FUN_008bd450((int)this);
  (**(code **)(*(int *)this + 0x2c))();
  return;
}


//// FUNCTION FUN_008be090 @ 008be090 ////

undefined4 __thiscall FUN_008be090(void *this,undefined4 param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *unaff_retaddr;
  undefined1 auStack_1c [8];
  float fStack_14;
  float fStack_10;
  float local_c [2];
  float *pfStack_4;
  
  pfVar1 = (float *)((int)this + 0x114);
  pfVar4 = (float *)(**(code **)(*param_2 + 0x34))(local_c);
  fVar3 = pfVar4[1] - *(float *)((int)this + 0x118);
  fVar2 = pfVar4[2] - *(float *)((int)this + 0x11c);
  if (SQRT((*pfVar4 - *pfVar1) * (*pfVar4 - *pfVar1) + fVar3 * fVar3 + fVar2 * fVar2) < 2.0) {
    pfVar4 = (float *)FUN_004eebe0(auStack_1c,param_2,2.0);
    fStack_10 = *pfVar4;
    local_c[0] = pfVar4[1];
    *pfVar1 = fStack_10;
    *(float *)((int)this + 0x118) = local_c[0];
    local_c[1] = 0.0;
    *(undefined4 *)((int)this + 0x11c) = 0;
    pfVar4 = (float *)(**(code **)(*param_2 + 0x34))(auStack_1c);
    local_c[0] = *(float *)((int)this + 0x11c) - pfVar4[2];
    fStack_10 = *(float *)((int)this + 0x118) - pfVar4[1];
    fStack_14 = *pfVar1 - *pfVar4;
    FUN_009840b0(&stack0xffffffd8,&fStack_14);
    pfVar4 = FUN_00984190(&stack0xffffffd8,(float *)&stack0x00000000);
    fVar2 = *pfVar4;
    *pfStack_4 = *pfVar1;
    pfStack_4[1] = *(float *)((int)this + 0x118);
    fVar3 = *(float *)((int)this + 0x11c);
    pfStack_4[3] = fVar2;
    pfStack_4[2] = fVar3;
    return CONCAT31((int3)((uint)pfStack_4 >> 8),1);
  }
  *unaff_retaddr = *pfVar1;
  unaff_retaddr[1] = *(float *)((int)this + 0x118);
  unaff_retaddr[2] = *(float *)((int)this + 0x11c);
  unaff_retaddr[3] = (float)param_2[0x31];
  return CONCAT31((int3)((uint)unaff_retaddr >> 8),1);
}


//// FUNCTION FUN_008be1b0 @ 008be1b0 ////

undefined4 * __thiscall FUN_008be1b0(void *this,int *param_1)

{
  int *piVar1;
  float *pfVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *this_00;
  float10 fVar5;
  int unaff_retaddr;
  undefined1 *local_40 [2];
  float local_38;
  float local_34;
  void *local_30;
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  char local_20 [16];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cece7e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)FUN_004eebe0(local_40,param_1,2.0);
  local_38 = *pfVar2;
  local_34 = pfVar2[1];
  *(float *)((int)this + 0x114) = local_38;
  local_30 = (void *)0x0;
  *(float *)((int)this + 0x118) = local_34;
  *(undefined4 *)((int)this + 0x11c) = 0;
  pvVar3 = operator_new(0x2e0);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    fVar5 = FUN_00990e30(0.0,6.2831855);
    local_40[0] = &stack0xffffffa0;
    fVar5 = FUN_004012c0((float)fVar5);
    piVar4 = FUN_00445f60(pvVar3,(float *)((int)this + 0x114),(float)fVar5);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"ai_donothing.flm",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = 1;
  (**(code **)(*piVar4 + 0xb0))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  *(undefined1 *)(piVar4 + 0xb7) = 1;
  *(undefined1 *)((int)piVar4 + 0x2b3) = 0;
  pvVar3 = operator_new(0x2b4);
  puStack_8 = (undefined1 *)0x2;
  if (pvVar3 == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00402380(pvVar3,unaff_retaddr,piVar4);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00401a00(this_00,param_1);
  this_00[0x84] = this_00[0x84] & 0xfffffffe;
  FUN_004016f0(this_00,this);
  *(undefined1 *)(this_00 + 0xa4) = 1;
  piVar1 = piVar4 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar4)(1);
  }
  ExceptionList = local_10;
  return this_00;
}


//// FUNCTION FUN_008be370 @ 008be370 ////

undefined4 * __thiscall FUN_008be370(void *this,char *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_38 [16];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cecea6;
  local_c = ExceptionList;
  puVar2 = local_38;
  local_38[0] = 0;
  uVar3 = 0;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffbc,"wander",6);
  FUN_008b9830(this,param_1,(uint)puVar2,uVar3);
  piVar1 = (int *)((int)this + 0xfc);
  *(undefined ***)this = &PTR_FUN_00d64bf8;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(int **)((int)this + 0x108) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ac;
  *(undefined4 *)((int)this + 0x110) = 0;
  local_4 = 1;
  uStack_28 = 0x8be3f7;
  (**(code **)(*piVar1 + 4))();
  *(char **)((int)this + 0x110) = param_1;
  uStack_28 = 0x8be400;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008be420 @ 008be420 ////

void __fastcall FUN_008be420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d64bf8;
  param_1[0x3f] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_008b99b0(param_1);
  return;
}


//// FUNCTION FUN_008be4b0 @ 008be4b0 ////

undefined4 FUN_008be4b0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  char **ppcVar8;
  char *local_40;
  undefined4 local_3c;
  uint local_38;
  char local_34 [20];
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  _strncpy((char *)local_20,"zombiestarwander",0x10);
  local_1c = 0x10;
  local_20[0x10] = 0;
  pbVar3 = (byte *)*param_3;
  bVar2 = false;
  pbVar6 = local_20;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_008be534:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_008be539;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_008be534;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_008be539:
  uVar5 = 0;
  if (iVar4 != 0) {
    local_40 = local_34;
    local_34[0] = '\0';
    local_3c = 0;
    local_38 = 0x14;
    _strncpy(local_40,"wander",6);
    ppcVar8 = &local_40;
    local_3c = 6;
    local_40[6] = '\0';
    bVar2 = true;
    uVar5 = FUN_00401ec0(param_3,ppcVar8);
    bVar7 = false;
    if ((char)uVar5 == '\0') goto LAB_008be592;
  }
  bVar7 = true;
LAB_008be592:
  if ((bVar2) && (uVar5 = local_38, 0x14 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (!bVar7) {
    return uVar5 & 0xffffff00;
  }
  *param_1 = 0;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_008be600 @ 008be600 ////

undefined4 * __thiscall FUN_008be600(void *this,byte param_1)

{
  FUN_008be420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008be620 @ 008be620 ////

undefined4 __fastcall FUN_008be620(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1bc);
}


