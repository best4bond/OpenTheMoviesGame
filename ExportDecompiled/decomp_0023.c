//// FUNCTION FUN_0073f640 @ 0073f640 ////

float10 __fastcall FUN_0073f640(int *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float unaff_ESI;
  float fStack_4;
  
  (**(code **)(*param_1 + 0x7c))(0);
  fVar1 = (float)param_1[0x30];
  fVar2 = (float)param_1[0x27];
  uVar3 = param_1[0x45];
  param_1[0x45] = uVar3 & 0xfffffffd;
  (**(code **)(*param_1 + 0x4c))(&stack0xffffffec);
  param_1[0x45] = param_1[0x45] ^ ((uint)((byte)(uVar3 >> 1) & 1) << 1 ^ param_1[0x45]) & 2;
  (**(code **)(*param_1 + 0x7c))((fVar1 - fVar1) + fStack_4);
  return ((float10)unaff_ESI - (float10)fVar2) + (float10)fVar2;
}


//// FUNCTION FUN_0073f6e0 @ 0073f6e0 ////

void __thiscall FUN_0073f6e0(void *this,int *param_1)

{
  int *piVar1;
  
  param_1[0x46] = (int)this;
  (**(code **)(*param_1 + 0x50))(1);
  piVar1 = param_1 + 0x54;
  if (param_1 != (int *)0x2) {
    *piVar1 = (int)this + 0x120;
    param_1[0x55] = *(int *)((int)this + 0x124);
    **(int **)((int)this + 0x124) = (int)piVar1;
    *(int **)((int)this + 0x124) = piVar1;
    return;
  }
  piVar1 = (int *)((int)this + 0x130);
  iRam00000152 = *piVar1;
  piRam00000156 = piVar1;
  *(undefined4 *)(*piVar1 + 4) = 0x152;
  *piVar1 = 0x152;
  return;
}


//// FUNCTION FUN_0073f750 @ 0073f750 ////

void __thiscall FUN_0073f750(void *this,undefined4 *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)((int)this + 0xc0);
  local_4 = *(undefined4 *)((int)this + 0x9c);
  FUN_00747290(*(void **)((int)this + 0x2d4),&local_8);
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_0073f790 @ 0073f790 ////

void __thiscall FUN_0073f790(void *this,undefined4 *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)((int)this + 0x108);
  local_4 = *(undefined4 *)((int)this + 0xe4);
  FUN_00747290(*(void **)((int)this + 0x2d4),&local_8);
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_0073f7d0 @ 0073f7d0 ////

void __fastcall FUN_0073f7d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x218) & 0x20) != 0) {
    if (*(float *)(param_1 + 500) <= *(float *)(param_1 + 0xe4)) {
      uVar1 = *(undefined4 *)(param_1 + 500);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xe4);
    }
    if (*(float *)(param_1 + 0x1f8) <= *(float *)(param_1 + 0x108)) {
      uVar2 = *(undefined4 *)(param_1 + 0x1f8);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x108);
    }
    if (*(float *)(param_1 + 0x9c) <= *(float *)(param_1 + 0x1fc)) {
      uVar3 = *(undefined4 *)(param_1 + 0x1fc);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x9c);
    }
    if (*(float *)(param_1 + 0xc0) <= *(float *)(param_1 + 0x1f0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x1f0);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0xc0);
    }
    (**(code **)(**(int **)(param_1 + 0x1ec) + 8))(uVar4,uVar3,uVar2,uVar1);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x1ec) + 8))
            (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x9c),
             *(undefined4 *)(param_1 + 0x108),*(float *)(param_1 + 0xe4));
  return;
}


//// FUNCTION FUN_0073fae0 @ 0073fae0 ////

void __thiscall FUN_0073fae0(void *this,undefined4 param_1)

{
  int *piVar1;
  
  if (*(undefined4 **)((int)this + 0x1ec) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x1ec))(1);
  }
  piVar1 = (int *)((int)this + 0x1d8);
  (**(code **)(*(int *)((int)this + 0x1d8) + 4))();
  *(undefined4 *)((int)this + 0x1ec) = 0;
  (**(code **)*piVar1)();
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x1ec) = param_1;
  (**(code **)*piVar1)();
  if (*(int *)((int)this + 0x1ec) != 0) {
    *(void **)(*(int *)((int)this + 0x1ec) + 0x48) = this;
  }
  return;
}


//// FUNCTION FUN_0073fb40 @ 0073fb40 ////

void __fastcall FUN_0073fb40(int *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)((int)param_1 + 0x325);
  *(undefined1 *)((int)param_1 + 0x325) = 0;
  if (((int *)param_1[0x7b] != (int *)0x0) &&
     (cVar1 = (**(code **)(*(int *)param_1[0x7b] + 0x14))(), cVar1 == '\0')) {
    return;
  }
  if ((*(byte *)(param_1 + 0x86) & 0x10) == 0) {
    return;
  }
  param_1[200] = 0;
  (**(code **)(*param_1 + 0xdc))();
  (**(code **)(*param_1 + 0xe0))();
  (**(code **)(*param_1 + 0xe4))();
                    /* WARNING: Could not recover jumptable at 0x0073fba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}


//// FUNCTION FUN_0073fbf0 @ 0073fbf0 ////

void __fastcall FUN_0073fbf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((0.0 < (float)param_1[0xca]) && (cVar5 = (**(code **)(*param_1 + 0xc4))(), cVar5 != '\0')) {
    fVar1 = (float)param_1[0xcc];
    param_1[0xcc] = (int)(fVar1 + 0.5);
    if (1.0 < fVar1 + 0.5) {
      do {
        param_1[0xcc] = (int)((float)param_1[0xcc] - 1.0);
        if ((char)param_1[0xcb] == '\0') {
          uVar7 = param_1[0xcd] + 1U & 0x80000007;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
          }
        }
        else {
          uVar7 = (param_1[0xcd] + 1) % 10;
        }
        param_1[0xcd] = uVar7;
      } while (1.0 < (float)param_1[0xcc]);
    }
    cVar5 = (char)param_1[0xcb];
    if (cVar5 == '\0') {
      fVar1 = 18.0;
    }
    else {
      fVar1 = 2.0;
    }
    if (cVar5 == '\0') {
      fVar3 = (float)param_1[0x39] - 14.0;
    }
    else {
      fVar3 = (float)param_1[0x39] + 2.0;
    }
    fVar2 = (float)param_1[0x42];
    if (cVar5 != '\0') {
      fVar2 = fVar2 - 10.0;
    }
    fStack_18 = (fVar2 - (float)param_1[0x30]) * 0.5 + (float)param_1[0x30];
    fStack_14 = (fVar3 - ((float)param_1[0x27] + fVar1)) * 0.5 + (float)param_1[0x27] + fVar1;
    fVar1 = (float)param_1[0x27];
    fVar3 = (float)param_1[0x39];
    fVar2 = (float)param_1[0x42];
    fVar4 = (float)param_1[0x30];
    if (cVar5 == '\0') {
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      iVar8 = 0xf;
    }
    else {
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      iVar8 = 5;
    }
    iVar8 = iVar8 - iVar6;
    FUN_00747290((void *)param_1[0xb5],&fStack_18);
    fStack_20 = (fVar2 - fVar4) * 0.5;
    fStack_1c = (fVar1 - fVar3) * 0.5;
    FUN_00747290((void *)param_1[0xb5],&fStack_20);
    if (0 < iVar8) {
      do {
        fVar9 = FUN_00990e30(-fStack_1c,fStack_1c);
        fVar10 = FUN_00990e30(-fStack_20,fStack_20);
        fStack_10 = (float)(fVar10 + (float10)fStack_18);
        fStack_c = fStack_14 + (float)fVar9;
        fStack_8 = fStack_10;
        fStack_4 = fStack_c;
        fVar9 = FUN_00990e30(0.0,1.0);
        fVar10 = FUN_00990e30(7.0,15.0);
        FUN_009b3a70(DAT_0105cc64,&fStack_8,(float)fVar9,(float)fVar10,(undefined4 *)0x1,0,
                     &LAB_00420160);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_0073fea0 @ 0073fea0 ////

void __fastcall FUN_0073fea0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_0073ff60 @ 0073ff60 ////

void __thiscall FUN_0073ff60(void *this,int param_1)

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


//// FUNCTION FUN_0073ffc0 @ 0073ffc0 ////

int * __fastcall FUN_0073ffc0(int *param_1)

{
  FUN_0073eba0(param_1);
  return param_1;
}


//// FUNCTION FUN_0073ffd0 @ 0073ffd0 ////

int * __fastcall FUN_0073ffd0(int *param_1)

{
  FUN_0073eb40(param_1);
  return param_1;
}


//// FUNCTION FUN_00740030 @ 00740030 ////

void __fastcall FUN_00740030(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x10));
  }
  return;
}


//// FUNCTION FUN_00740050 @ 00740050 ////

void __thiscall FUN_00740050(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(float *)((int)this + 0xc0) <= *param_1) {
    fVar1 = *(float *)((int)this + 0xc0);
  }
  else {
    fVar1 = *param_1;
  }
  *param_1 = fVar1;
  if (param_1[2] <= *(float *)((int)this + 0x108)) {
    fVar1 = *(float *)((int)this + 0x108);
  }
  else {
    fVar1 = param_1[2];
  }
  param_1[2] = fVar1;
  if (*(float *)((int)this + 0x9c) <= param_1[3]) {
    fVar1 = *(float *)((int)this + 0x9c);
  }
  else {
    fVar1 = param_1[3];
  }
  param_1[3] = fVar1;
  if (param_1[1] <= *(float *)((int)this + 0xe4)) {
    fVar1 = *(float *)((int)this + 0xe4);
  }
  else {
    fVar1 = param_1[1];
  }
  param_1[1] = fVar1;
  if ((*(byte *)((int)this + 0x114) & 6) == 0) {
    for (iVar2 = *(int *)((int)this + 0x124); iVar2 != (int)this + 0x130;
        iVar2 = *(int *)(iVar2 + 4)) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x4c))(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00740100 @ 00740100 ////

void __thiscall FUN_00740100(void *this,float *param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00747350(*(void **)((int)this + 0x2d4),&local_10,*(undefined4 *)((int)this + 0x1f0),
               *(undefined4 *)((int)this + 500),*(undefined4 *)((int)this + 0x1f8),
               *(undefined4 *)((int)this + 0x1fc));
  if (*param_2 != 0.0) {
    FUN_0073ec80(&local_10,-*param_2);
  }
  uVar2 = FUN_004512c0(&local_10,param_1);
  if (((char)uVar2 != '\0') && (iVar1 = *(int *)((int)this + 0x1d4), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x10) = local_10;
    *(undefined4 *)(iVar1 + 0x14) = local_4;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    iVar1 = *(int *)((int)this + 0x1d4);
    *(undefined4 *)(iVar1 + 0x1c) = local_8;
    *(undefined4 *)(iVar1 + 0x20) = local_c;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    FUN_00995f70(*(void **)((int)this + 0x1d4),param_1);
  }
  return;
}


//// FUNCTION FUN_00740280 @ 00740280 ////

void __fastcall FUN_00740280(int param_1)

{
  if ((((*(byte *)(param_1 + 0x218) & 0x20) == 0) ||
      (*(float *)(param_1 + 0x1f8) != *(float *)(param_1 + 0x1f0))) &&
     (*(int *)(param_1 + 0x1ec) != 0)) {
    FUN_0073f7d0(param_1);
    (**(code **)(**(int **)(param_1 + 0x1ec) + 4))(*(undefined4 *)(param_1 + 0x2d4));
  }
  return;
}


//// FUNCTION FUN_007402d0 @ 007402d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __fastcall FUN_007402d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar11;
  ulonglong uVar12;
  byte *pbVar13;
  char local_2f;
  float fStack_2c;
  byte abStack_28 [40];
  
  local_2f = '\0';
  bVar6 = false;
  bVar7 = false;
  if ((*(byte *)(param_1 + 0x1c8) & 0x10) == 0) goto LAB_00740a3d;
  piVar1 = (int *)(param_1 + -0x50);
  cVar8 = (**(code **)(*(int *)(param_1 + -0x50) + 0xc4))();
  if (cVar8 == '\0') goto LAB_00740a3d;
  if (*(int *)(param_1 + 300) != param_1 + 0x138) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 300) + 8);
    puVar2[0x12] = puVar2[0x12] + 1;
    local_2f = (**(code **)puVar2[0x14])();
    iVar3 = puVar2[0x12];
    puVar2[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    if (local_2f == '\0') {
      local_2f = (**(code **)(*piVar1 + 0x48))();
    }
    goto LAB_00740a3d;
  }
  fStack_2c = 0.0;
  uVar9 = (**(code **)(*piVar1 + 0x34))(&DAT_0104cce0,&fStack_2c);
  uVar9 = ((uVar9 & 0xff) << 3 ^ *(uint *)(param_1 + 0x1c8)) & 8 ^ *(uint *)(param_1 + 0x1c8);
  uVar9 = (uVar9 >> 1 ^ uVar9) & 4 ^ uVar9;
  uVar9 = (uVar9 >> 1 ^ uVar9) & 2 ^ uVar9;
  *(uint *)(param_1 + 0x1c8) = (uVar9 >> 1 ^ uVar9) & 1 ^ uVar9;
  cVar8 = FUN_00553f70(0x73);
  if ((cVar8 != '\0') || (uVar9 = FUN_00553fd0(0x73), (char)uVar9 != '\0')) {
    fStack_2c = 0.0;
    uVar9 = (**(code **)(*piVar1 + 0x34))(&DAT_0104cd00,&fStack_2c);
    uVar9 = *(uint *)(param_1 + 0x1c8) ^ ((uVar9 & 0xff) << 1 ^ *(uint *)(param_1 + 0x1c8)) & 2;
    *(uint *)(param_1 + 0x1c8) = uVar9;
    if (((uVar9 & 2) != 0) && (uVar9 = FUN_00553fd0(0x73), (char)uVar9 != '\0')) {
      fStack_2c = 0.0;
      uVar9 = (**(code **)(*piVar1 + 0x34))(&DAT_0104cd08,&fStack_2c);
      *(uint *)(param_1 + 0x1c8) =
           *(uint *)(param_1 + 0x1c8) ^ ((uVar9 & 0xff) << 1 ^ *(uint *)(param_1 + 0x1c8)) & 2;
    }
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  if (iVar3 != param_1 + 0xe0) {
    *(int *)(*(int *)(iVar3 + 8) + 0x48) = *(int *)(*(int *)(iVar3 + 8) + 0x48) + 1;
    while (iVar3 != param_1 + 0xe0) {
      cVar8 = (*(code *)**(undefined4 **)(*(int *)(iVar3 + 8) + 0x50))();
      if (cVar8 != '\0') {
        FUN_00401440(*(undefined4 **)(iVar3 + 8));
        bVar6 = true;
        local_2f = '\x01';
        break;
      }
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar4 != param_1 + 0xe0) {
        piVar1 = (int *)(*(int *)(iVar4 + 8) + 0x48);
        *piVar1 = *piVar1 + 1;
      }
      puVar2 = *(undefined4 **)(iVar3 + 8);
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      iVar3 = iVar4;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
    if ((((local_2f == '\0') && ((*(byte *)(param_1 + 0x1c8) & 2) != 0)) &&
        (*(int *)(param_1 + 0x1f8) != 0)) && (cVar8 = FUN_00566b00(DAT_0104cdf4), cVar8 != '\0')) {
      uVar9 = FUN_00553fa0(0x73);
      if ((char)uVar9 != '\0') {
        *(undefined4 *)(param_1 + 0x1d0) = 6;
LAB_00740561:
        cVar8 = (**(code **)(param_1 + 0x1f8))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x1fc));
        if (cVar8 == '\0') goto LAB_007406bf;
LAB_0074057a:
        local_2f = '\x01';
        goto LAB_0074057f;
      }
      cVar8 = FUN_00553f70(0x73);
      if (cVar8 != '\0') {
        if (*(int *)(param_1 + 0x1d0) < 1) {
          if (*(int *)(param_1 + 0x1cc) < 1) {
            *(undefined4 *)(param_1 + 0x1cc) = 0;
            goto LAB_00740561;
          }
          *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
        }
        else {
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        }
      }
LAB_007406bf:
      if ((*(byte *)(param_1 + 0x1c8) & 2) == 0) {
LAB_0074071c:
        if (((*(int *)(param_1 + 0x1d8) != 0) && (-1 < *(int *)(param_1 + 0x2ec))) &&
           (uVar10 = FUN_005540f0(*(int *)(param_1 + 0x2ec)), (char)uVar10 != '\0')) {
          if (*(int *)(param_1 + 0x248) != 0) {
            FUN_00539100(abStack_28,*(int *)(param_1 + 0x248));
            pbVar13 = abStack_28;
            FUN_004f3b20();
            FUN_004f32c0(pbVar13);
          }
          uVar10 = *(undefined4 *)(param_1 + 0x1dc);
LAB_00740767:
          cVar8 = (**(code **)(param_1 + 0x1d8))(param_1 + -0x50,uVar10);
          if (cVar8 != '\0') {
            local_2f = '\x01';
            uVar12 = FUN_00990ae0(extraout_ECX,extraout_EDX);
            *(int *)(param_1 + 0x180) = (int)uVar12;
            goto LAB_0074057f;
          }
        }
      }
      else if (*(int *)(param_1 + 0x1d8) != 0) {
        uVar9 = FUN_00553fd0(0x73);
        if ((char)uVar9 == '\0') goto LAB_0074071c;
        iVar3 = *(int *)(param_1 + 0x248);
        if ((iVar3 != 0) && (uVar10 = FUN_0073ed30(), (char)uVar10 == '\0')) {
          FUN_00539100(abStack_28,iVar3);
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        uVar10 = *(undefined4 *)(param_1 + 0x1dc);
        goto LAB_00740767;
      }
      if ((((*(byte *)(param_1 + 0x1c8) & 4) != 0) && (*(int *)(param_1 + 0x1e0) != 0)) &&
         (uVar9 = FUN_00553fd0(0x75), (char)uVar9 != '\0')) {
        if (*(int *)(param_1 + 0x24c) != 0) {
          FUN_00539100(abStack_28,*(int *)(param_1 + 0x24c));
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        cVar8 = (**(code **)(param_1 + 0x1e0))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x1e4));
        if (cVar8 != '\0') goto LAB_0074057a;
      }
      if ((((*(byte *)(param_1 + 0x1c8) & 8) != 0) && (*(int *)(param_1 + 0x1e8) != 0)) &&
         (uVar9 = FUN_00553fd0(0x74), (char)uVar9 != '\0')) {
        if (*(int *)(param_1 + 0x250) != 0) {
          FUN_00539100(abStack_28,*(int *)(param_1 + 0x250));
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        cVar8 = (**(code **)(param_1 + 0x1e8))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x1ec));
        if (cVar8 != '\0') goto LAB_0074057a;
      }
      if (((((*(byte *)(param_1 + 0x1c8) & 2) != 0) && (*(int *)(param_1 + 0x1f0) != 0)) &&
          ((cVar8 = FUN_00553f70(0x73), cVar8 != '\0' ||
           (uVar9 = FUN_00553fa0(0x73), (char)uVar9 != '\0')))) &&
         (cVar8 = FUN_00566b00(DAT_0104cdf4), cVar8 != '\0')) {
        if (*(int *)(param_1 + 0x254) != 0) {
          FUN_00539100(abStack_28,*(int *)(param_1 + 0x254));
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        cVar8 = (**(code **)(param_1 + 0x1f0))(param_1 + -0x50,*(undefined4 *)(param_1 + 500));
        if (cVar8 != '\0') goto LAB_0074057a;
      }
      if (((*(byte *)(param_1 + 0x1c8) & 1) == 0) ||
         ((*(int *)(param_1 + 0x238) == 0 && (*(int *)(param_1 + 0x240) == 0)))) goto LAB_0074057f;
      fVar11 = FUN_005543d0();
      fVar11 = fVar11 + (float10)*(float *)(param_1 + 0x2cc);
      fStack_2c = (float)fVar11;
      *(float *)(param_1 + 0x2cc) = (float)fVar11;
      if (fVar11 < (float10)120.0) {
        if (fVar11 < (float10)-120.0 != (fVar11 == (float10)-120.0)) {
          fVar5 = -_DAT_0104e12c;
          if (-_DAT_0104e12c <= fStack_2c) {
            fVar5 = fStack_2c;
          }
          *(float *)(param_1 + 0x2cc) = fVar5 + 120.0;
          if (-120.0 < fVar5 + 120.0) {
            *(undefined4 *)(param_1 + 0x2cc) = 0;
          }
          if (*(int *)(param_1 + 0x27c) != 0) {
            FUN_00539100(abStack_28,*(int *)(param_1 + 0x27c));
            pbVar13 = abStack_28;
            FUN_004f3b20();
            FUN_004f32c0(pbVar13);
          }
          cVar8 = (**(code **)(param_1 + 0x240))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x244));
          if (cVar8 != '\0') {
            local_2f = '\x01';
          }
        }
      }
      else {
        if ((float10)_DAT_0104e12c < fVar11) {
          fVar11 = (float10)_DAT_0104e12c;
        }
        *(float *)(param_1 + 0x2cc) = (float)(fVar11 - (float10)120.0);
        if (fVar11 - (float10)120.0 < (float10)120.0) {
          *(undefined4 *)(param_1 + 0x2cc) = 0;
        }
        if (*(int *)(param_1 + 0x278) != 0) {
          FUN_00539100(abStack_28,*(int *)(param_1 + 0x278));
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        cVar8 = (**(code **)(param_1 + 0x238))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x23c));
        if (cVar8 != '\0') {
          local_2f = '\x01';
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1d0) = 6;
      if (local_2f == '\0') goto LAB_007406bf;
LAB_0074057f:
      *(undefined4 *)(param_1 + 0x2cc) = 0;
    }
    if ((!bVar6) && ((*(byte *)(param_1 + 0x1c8) & 1) != 0)) {
      if (*(int *)(param_1 + 0x200) != 0) {
        if ((*(int *)(param_1 + 0x25c) != 0) && (*(char *)(param_1 + 0x2e8) == '\0')) {
          *(undefined1 *)(param_1 + 0x2e8) = 1;
          FUN_00539100(abStack_28,*(int *)(param_1 + 0x25c));
          pbVar13 = abStack_28;
          FUN_004f3b20();
          FUN_004f32c0(pbVar13);
        }
        cVar8 = (**(code **)(param_1 + 0x200))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x204));
        if (cVar8 != '\0') {
          local_2f = '\x01';
        }
      }
      if ((*(byte *)(param_1 + 0x1c8) & 1) != 0) {
        bVar7 = true;
        if (*(int *)(param_1 + 0x1d4) < 5) {
          *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
        }
        else {
          if ((local_2f == '\0') && (*(int *)(param_1 + 0x28c) != 0)) {
            FUN_0073b4a0((undefined4 *)(param_1 + 0x288),*(char *)(param_1 + 0xbc),
                         *(int *)(param_1 + 0xc0),2,(undefined1 *)0x0,0,0);
          }
          if (*(int *)(param_1 + 0x208) != 0) {
            if (*(int *)(param_1 + 0x260) != 0) {
              FUN_00539100(abStack_28,*(int *)(param_1 + 0x260));
              pbVar13 = abStack_28;
              FUN_004f3b20();
              FUN_004f32c0(pbVar13);
            }
            cVar8 = (**(code **)(param_1 + 0x208))(param_1 + -0x50,*(undefined4 *)(param_1 + 0x20c))
            ;
            if (cVar8 != '\0') {
              return '\x01';
            }
          }
        }
      }
    }
  }
  if ((local_2f == '\0') && ((*(byte *)(param_1 + 0xc4) & 8) != 0)) {
    local_2f = (**(code **)(*(int *)(param_1 + -0x50) + 0x48))();
  }
  if (bVar7) {
    return local_2f;
  }
LAB_00740a3d:
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  if (*(int *)(param_1 + 0x28c) != 0) {
    FUN_0073ad30();
  }
  return local_2f;
}


//// FUNCTION FUN_00740a70 @ 00740a70 ////

char __thiscall FUN_00740a70(void *this,undefined4 param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 unaff_EBX;
  undefined1 *puStack_4;
  
  cVar3 = (char)((uint)unaff_EBX >> 0x18);
  if ((*(byte *)((int)this + 0x1c8) & 0x10) != 0) {
    cVar2 = (**(code **)(*(int *)((int)this + -0x50) + 0xc4))();
    if (cVar2 != '\0') {
      if (*(int *)((int)this + 300) == (int)this + 0x138) {
        iVar1 = *(int *)((int)this + 0xd4);
        while ((iVar1 != (int)this + 0xe0 &&
               (cVar2 = (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x50) + 4))(param_1),
               cVar2 == '\0'))) {
          iVar1 = *(int *)(iVar1 + 4);
        }
        puStack_4 = (undefined1 *)0x0;
        cVar2 = (**(code **)(*(int *)((int)this + -0x50) + 0x34))(&DAT_0104cce0,&puStack_4);
        if ((cVar2 != '\0') && (cVar3 == '\0')) {
          *(undefined1 *)((int)this + 0x2d4) = 1;
          *(undefined1 *)((int)this + 0x2d5) = 1;
        }
        if (((((*(byte *)((int)this + 0xc4) & 1) != 0) && (cVar3 == '\0')) &&
            ((*(int *)((int)this + 0x1d8) != 0 || (*(int *)((int)this + 0x1f8) != 0)))) &&
           (cVar2 != '\0')) {
          cVar3 = '\x01';
          *puStack_4 = 1;
        }
        if (((*(byte *)((int)this + 0xc4) & 8) == 0) || (cVar2 == '\0')) {
          return cVar3;
        }
      }
      else {
        (**(code **)(*(int *)(*(int *)(*(int *)((int)this + 300) + 8) + 0x50) + 4))(param_1);
      }
      return '\x01';
    }
  }
  return '\0';
}


//// FUNCTION WWindow_Tick @ 00740ba0 ////

void __fastcall WWindow_Tick(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  if ((char)param_1[0xd0] == '\0') {
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)((int)param_1 + 0x325) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  cVar5 = (**(code **)(*param_1 + 0x34))(&DAT_0104cce0);
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xce) = 0;
  }
  param_1[200] = 0;
  (**(code **)(*param_1 + 0x50))(0);
  if (((*(byte *)(param_1 + 0x86) & 0x10) != 0) && ((int *)param_1[0x49] != param_1 + 0x4c)) {
    piVar6 = (int *)param_1[0x49];
    bVar4 = false;
    *(int *)(piVar6[2] + 0x48) = *(int *)(piVar6[2] + 0x48) + 1;
    if (piVar6 != param_1 + 0x4c) {
      do {
        if ((bVar4) || (bVar4 = false, *(int *)(piVar6[2] + 0x2d0) != 0)) {
          bVar4 = true;
        }
        (**(code **)(*(int *)piVar6[2] + 0x28))();
        piVar8 = (int *)piVar6[1];
        if (piVar8 != param_1 + 0x4c) {
          *(int *)(piVar8[2] + 0x48) = *(int *)(piVar8[2] + 0x48) + 1;
        }
        puVar1 = (undefined4 *)piVar6[2];
        piVar6 = puVar1 + 0x12;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*puVar1)(1);
        }
        piVar6 = piVar8;
      } while (piVar8 != param_1 + 0x4c);
      if (bVar4) {
        do {
          piVar6 = (int *)param_1[0x49];
          bVar4 = false;
          do {
            if (piVar6 == param_1 + 0x4c) {
              if (!bVar4) goto LAB_00740d68;
              break;
            }
            iVar2 = piVar6[2];
            iVar3 = *(int *)(iVar2 + 0x2d0);
            *(undefined4 *)(iVar2 + 0x2d0) = 0;
            if (iVar3 == 1) {
              if ((int *)piVar6[1] != (int *)0x0) {
                *(int *)piVar6[1] = *piVar6;
              }
              if (*piVar6 != 0) {
                *(int *)(*piVar6 + 4) = piVar6[1];
              }
              *piVar6 = 0;
              piVar6[1] = 0;
              piVar8 = (int *)(iVar2 + 0x150);
              *piVar8 = (int)(param_1 + 0x48);
              *(int *)(iVar2 + 0x154) = param_1[0x49];
              *(int **)param_1[0x49] = piVar8;
              param_1[0x49] = (int)piVar8;
LAB_00740d4c:
              bVar4 = true;
            }
            else if (iVar3 == 2) {
              if ((int *)piVar6[1] != (int *)0x0) {
                *(int *)piVar6[1] = *piVar6;
              }
              if (*piVar6 != 0) {
                *(int *)(*piVar6 + 4) = piVar6[1];
              }
              *piVar6 = 0;
              piVar6[1] = 0;
              piVar7 = (int *)(iVar2 + 0x150);
              piVar8 = param_1 + 0x4c;
              *(int **)(iVar2 + 0x154) = piVar8;
              *piVar7 = *piVar8;
              *(int **)(*piVar8 + 4) = piVar7;
              *piVar8 = (int)piVar7;
              goto LAB_00740d4c;
            }
            piVar6 = (int *)piVar6[1];
          } while (!bVar4);
        } while( true );
      }
    }
  }
LAB_00740d68:
  param_1[0x86] = param_1[0x86] & 0xfffffff0;
  return;
}


//// FUNCTION FUN_00740d80 @ 00740d80 ////

void __fastcall FUN_00740d80(int *param_1)

{
  int *piVar1;
  char cVar2;
  
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  for (piVar1 = (int *)param_1[0x49]; piVar1 != param_1 + 0x4c; piVar1 = (int *)piVar1[1]) {
    (**(code **)(*(int *)piVar1[2] + 0x30))();
  }
  return;
}


//// FUNCTION FUN_00740dc0 @ 00740dc0 ////

void __thiscall FUN_00740dc0(void *this,undefined4 *param_1)

{
  FUN_004036d0((void *)((int)this + 0x2d8),(wchar_t *)*param_1,param_1[1]);
  if (param_1[1] != 0) {
    *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 1;
  }
  return;
}


//// FUNCTION FUN_00740df0 @ 00740df0 ////

void __fastcall FUN_00740df0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x124) != param_1 + 0x130) {
    do {
      piVar1 = *(int **)(param_1 + 0x124);
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while (*(int *)(param_1 + 0x124) != param_1 + 0x130);
  }
  return;
}


//// FUNCTION WWindow_TickAttachedBubbles @ 00740e60 ////

void __fastcall WWindow_TickAttachedBubbles(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)(param_1 + 0x218) & 0x10) != 0) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x130); puVar1 != (undefined4 *)(param_1 + 0x120);
        puVar1 = (undefined4 *)*puVar1) {
      (**(code **)(*(int *)puVar1[2] + 0x2c))();
    }
  }
  return;
}


//// FUNCTION FUN_00740ea0 @ 00740ea0 ////

void __thiscall FUN_00740ea0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x78) ^ (param_1 & 0xff ^ *(uint *)((int)this + 0x78)) & 1;
  *(uint *)((int)this + 0x78) = uVar2;
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)((int)this + 0x74) = 2;
  }
  else if ((uVar2 & 4) == 0) {
    *(uint *)((int)this + 0x74) = (uVar2 & 0xff) >> 1 & 1;
  }
  else {
    *(undefined4 *)((int)this + 0x74) = 3;
  }
  for (iVar1 = *(int *)((int)this + 0x124); iVar1 != (int)this + 0x130; iVar1 = *(int *)(iVar1 + 4))
  {
    (**(code **)(**(int **)(iVar1 + 8) + 0xc0))(param_1);
  }
  return;
}


//// FUNCTION FUN_00741040 @ 00741040 ////

undefined4 * __cdecl FUN_00741040(undefined4 *param_1,undefined4 param_2)

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
  _strncpy(local_20,"",0);
  local_1c = 0;
  *local_20 = '\0';
  switch(param_2) {
  case 0:
    pcVar1 = "MOUSELCLICK";
    break;
  case 1:
    pcVar1 = "MOUSEMCLICK";
    break;
  case 2:
    pcVar1 = "MOUSERCLICK";
    break;
  case 3:
    pcVar1 = "MOUSELDOWN";
    break;
  case 4:
    pcVar1 = "MOUSELREPEAT";
    break;
  case 5:
    pcVar1 = "MOUSEOVER";
    break;
  case 6:
    pcVar1 = "MOUSEHOVER";
    break;
  case 7:
    pcVar1 = "DRAGGED";
    break;
  case 8:
    pcVar1 = "DESTROYED";
    break;
  case 9:
    pcVar1 = "CONTENTCHANGED";
    break;
  case 10:
    pcVar1 = "APPLIED";
    break;
  case 0xb:
    pcVar1 = "FIRSTOPENED";
    break;
  case 0xc:
    pcVar1 = "MOUSEWHEELUP";
    break;
  case 0xd:
    pcVar1 = "MOUSEWHEELDOWN";
    break;
  default:
    goto switchD_00741087_default;
  }
  FUN_00403e20(&local_20,pcVar1);
switchD_00741087_default:
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


//// FUNCTION FUN_00741180 @ 00741180 ////

void __fastcall FUN_00741180(int param_1)

{
  byte *pbVar1;
  byte local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pbVar1 = local_28;
  if ((*(int *)(param_1 + 0x228) != 0) && (local_24 = *(int *)(param_1 + 0x298), local_24 != 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = 0xffffffff;
    FUN_004f3b20();
    FUN_004f32c0(pbVar1);
  }
  return;
}


//// FUNCTION FUN_00741240 @ 00741240 ////

void __fastcall FUN_00741240(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4b808;
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


//// FUNCTION FUN_00741310 @ 00741310 ////

int * __fastcall FUN_00741310(int *param_1)

{
  FUN_0073eba0(param_1);
  return param_1;
}


//// FUNCTION FUN_00741320 @ 00741320 ////

int * __fastcall FUN_00741320(int *param_1)

{
  FUN_0073eb40(param_1);
  return param_1;
}


//// FUNCTION FUN_00741330 @ 00741330 ////

void FUN_00741330(void)

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


//// FUNCTION FUN_007413e0 @ 007413e0 ////

void * __thiscall FUN_007413e0(void *this,byte param_1)

{
  FUN_00740030((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00741400 @ 00741400 ////

void FUN_00741400(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uVar7;
  void *pvStack_54;
  void *local_50;
  undefined1 *puStack_4c;
  void *pvStack_3c;
  uint uStack_34;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  void *apvStack_1c [2];
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd57e6;
  pvStack_c = ExceptionList;
  local_4 = 1;
  uStack_68 = 0x74142d;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x3a8);
  local_4._0_1_ = 2;
  if (local_50 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_68 = 0x741446;
    piVar2 = FUN_006889c0(local_50,'\x01');
  }
  uVar7 = 0x43160000;
  local_4 = CONCAT31(local_4._1_3_,1);
  uStack_68 = 0x74145d;
  (**(code **)(*piVar2 + 0x7c))();
  uStack_68 = 0x43960000;
  fStack_6c = 1.066024e-38;
  (**(code **)(*piVar2 + 0x78))();
  fStack_6c = 1.0660246e-38;
  piVar3 = (int *)FUN_0071b2a0();
  fStack_6c = 1.0660256e-38;
  fVar6 = (float10)(**(code **)(*piVar3 + 0x10))();
  fStack_6c = 1.0660286e-38;
  piVar3 = (int *)FUN_0071b2a0();
  fStack_6c = 1.0660295e-38;
  (**(code **)(*piVar3 + 0x14))();
  iVar1 = *piVar2;
  uStack_70 = 0x7414ad;
  fStack_6c = (float)(fVar6 * (float10)0.5 - (float10)150.0);
  uStack_70 = FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))(1);
  iVar1 = *piVar2;
  uVar4 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar4,uVar7);
  (**(code **)(*piVar2 + 0x54))(apvStack_1c);
  _Memory = operator_new(0x3fc);
  uStack_28 = 3;
  if (_Memory == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(_Memory);
  }
  puVar5 = FUN_0043bdc0(&local_50,L"<TD ALIGN=JUSTIFIED WIDTH=250><FONT COLOR=#FFFFFF>",
                        (undefined4 *)&stack0x00000000);
  puVar5 = FUN_0043be60(&uStack_70,puVar5,L"</FONT></TD>");
  uStack_28 = 5;
  (**(code **)(*piVar3 + 0x54))(puVar5);
  if (10 < (uint)fStack_6c) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  uStack_2c = 1;
  if (&lpType_0000000a < puStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
  (**(code **)(*(int *)piVar2[0xdb] + 0xc))(piVar3,1);
  (**(code **)(*piVar3 + 0x70))(piVar2[0xdb],0);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xc))(piVar2,1);
  if (10 < uStack_34) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_3c);
  }
  if (10 < uStack_14) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_1c[0]);
  }
  ExceptionList = puStack_4c;
  return;
}


//// FUNCTION FUN_007415d0 @ 007415d0 ////

void __thiscall FUN_007415d0(void *this,undefined4 *param_1)

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
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d18c2c;
  iVar2 = param_1[6];
  *(int *)((int)this + 0x18) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0xc) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return;
}


//// FUNCTION FUN_00741630 @ 00741630 ////

void __thiscall FUN_00741630(void *this,int param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00cd57f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + param_1 * 8 + 0x228) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x22c) = param_3;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 1;
  if (param_4 == (char *)0x0) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x298) = 0;
  }
  else {
    local_40[0] = 0;
    local_48 = 0;
    local_4c = local_40;
    local_44 = 0x14;
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,param_4,(int)pcVar2 - (int)(param_4 + 1));
    local_4 = 0;
    puVar3 = FUN_00741040(local_2c,param_1);
    FUN_004073f0(&local_4c,"_",1);
    FUN_004073f0(&local_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar4 = FUN_009b01a0(local_4c);
    *(undefined4 *)((int)this + param_1 * 4 + 0x298) = uVar4;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (param_2 == 0) {
    uVar5 = 0;
    piVar6 = (int *)((int)this + 0x228);
    do {
      if (*piVar6 != 0) {
        ExceptionList = local_c;
        return;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 < 0xe);
    if (*(int *)((int)this + 0x2dc) == 0) {
      *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffe;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00741780 @ 00741780 ////

void __thiscall FUN_00741780(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x31) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_007417f0 @ 007417f0 ////

void __fastcall FUN_007417f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00741330();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00741830 @ 00741830 ////

undefined4 * __thiscall
FUN_00741830(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = (undefined1 *)((int)this + 0x1c);
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x10),(char *)param_4[1],param_4[2]);
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_00741910 @ 00741910 ////

void __fastcall FUN_00741910(int param_1)

{
  FUN_005f9ed0(param_1 + 0x6c);
  FUN_005f9ed0(param_1 + 0x48);
  FUN_005f9ed0(param_1 + 0x24);
  FUN_005f9ed0(param_1);
  return;
}


//// FUNCTION FUN_00741940 @ 00741940 ////

void __thiscall FUN_00741940(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_30 [8];
  int iStack_28;
  int *piStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5820;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(void **)((int)this + 0xb8) == this) {
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)FUN_005fbfa0(local_30,1,(int)this,*(undefined4 *)((int)this + 0xbc));
    *(undefined4 *)((int)this + 0xe8) = *puVar1;
    local_4 = 0;
    (**(code **)(*(int *)((int)this + 0xec) + 4))();
    *(undefined4 *)((int)this + 0x100) = puVar1[6];
    (*(code *)**(undefined4 **)((int)this + 0xec))();
    *(undefined4 *)((int)this + 0x104) = puVar1[7];
    *(undefined4 *)((int)this + 0x108) = puVar1[8];
    FUN_005f9ed0((int)local_30);
  }
  puVar1 = (undefined4 *)FUN_005fbfa0(local_30,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0xa0) = *puVar1;
  local_4 = 1;
  (**(code **)(*(int *)((int)this + 0xa4) + 4))();
  *(undefined4 *)((int)this + 0xb8) = puVar1[6];
  (*(code *)**(undefined4 **)((int)this + 0xa4))();
  *(undefined4 *)((int)this + 0xbc) = puVar1[7];
  *(undefined4 *)((int)this + 0xc0) = puVar1[8];
  if (piStack_24 != (int *)0x0) {
    *piStack_24 = iStack_28;
  }
  if (iStack_28 != 0) {
    *(int **)(iStack_28 + 4) = piStack_24;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00741a50 @ 00741a50 ////

void __thiscall FUN_00741a50(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_30 [8];
  int iStack_28;
  int *piStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5840;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(void **)((int)this + 0x100) == this) {
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)FUN_005fbfa0(local_30,2,(int)this,*(undefined4 *)((int)this + 0x104));
    *(undefined4 *)((int)this + 0xa0) = *puVar1;
    local_4 = 0;
    (**(code **)(*(int *)((int)this + 0xa4) + 4))();
    *(undefined4 *)((int)this + 0xb8) = puVar1[6];
    (*(code *)**(undefined4 **)((int)this + 0xa4))();
    *(undefined4 *)((int)this + 0xbc) = puVar1[7];
    *(undefined4 *)((int)this + 0xc0) = puVar1[8];
    FUN_005f9ed0((int)local_30);
  }
  puVar1 = (undefined4 *)FUN_005fbfa0(local_30,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0xe8) = *puVar1;
  local_4 = 1;
  (**(code **)(*(int *)((int)this + 0xec) + 4))();
  *(undefined4 *)((int)this + 0x100) = puVar1[6];
  (*(code *)**(undefined4 **)((int)this + 0xec))();
  *(undefined4 *)((int)this + 0x104) = puVar1[7];
  *(undefined4 *)((int)this + 0x108) = puVar1[8];
  if (piStack_24 != (int *)0x0) {
    *piStack_24 = iStack_28;
  }
  if (iStack_28 != 0) {
    *(int **)(iStack_28 + 4) = piStack_24;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00741b60 @ 00741b60 ////

void __thiscall FUN_00741b60(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_30 [8];
  int iStack_28;
  int *piStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5860;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(void **)((int)this + 0x94) == this) {
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)FUN_005fbfa0(local_30,1,(int)this,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0xc4) = *puVar1;
    local_4 = 0;
    (**(code **)(*(int *)((int)this + 200) + 4))();
    *(undefined4 *)((int)this + 0xdc) = puVar1[6];
    (*(code *)**(undefined4 **)((int)this + 200))();
    *(undefined4 *)((int)this + 0xe0) = puVar1[7];
    *(undefined4 *)((int)this + 0xe4) = puVar1[8];
    FUN_005f9ed0((int)local_30);
  }
  puVar1 = (undefined4 *)FUN_005fbfa0(local_30,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x7c) = *puVar1;
  local_4 = 1;
  (**(code **)(*(int *)((int)this + 0x80) + 4))();
  *(undefined4 *)((int)this + 0x94) = puVar1[6];
  (*(code *)**(undefined4 **)((int)this + 0x80))();
  *(undefined4 *)((int)this + 0x98) = puVar1[7];
  *(undefined4 *)((int)this + 0x9c) = puVar1[8];
  if (piStack_24 != (int *)0x0) {
    *piStack_24 = iStack_28;
  }
  if (iStack_28 != 0) {
    *(int **)(iStack_28 + 4) = piStack_24;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00741c70 @ 00741c70 ////

void __thiscall FUN_00741c70(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_30 [8];
  int iStack_28;
  int *piStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5880;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(void **)((int)this + 0xdc) == this) {
    ExceptionList = &pvStack_c;
    puVar1 = (undefined4 *)FUN_005fbfa0(local_30,2,(int)this,*(undefined4 *)((int)this + 0xe0));
    *(undefined4 *)((int)this + 0x7c) = *puVar1;
    local_4 = 0;
    (**(code **)(*(int *)((int)this + 0x80) + 4))();
    *(undefined4 *)((int)this + 0x94) = puVar1[6];
    (*(code *)**(undefined4 **)((int)this + 0x80))();
    *(undefined4 *)((int)this + 0x98) = puVar1[7];
    *(undefined4 *)((int)this + 0x9c) = puVar1[8];
    FUN_005f9ed0((int)local_30);
  }
  puVar1 = (undefined4 *)FUN_005fbfa0(local_30,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0xc4) = *puVar1;
  local_4 = 1;
  (**(code **)(*(int *)((int)this + 200) + 4))();
  *(undefined4 *)((int)this + 0xdc) = puVar1[6];
  (*(code *)**(undefined4 **)((int)this + 200))();
  *(undefined4 *)((int)this + 0xe0) = puVar1[7];
  *(undefined4 *)((int)this + 0xe4) = puVar1[8];
  if (piStack_24 != (int *)0x0) {
    *piStack_24 = iStack_28;
  }
  if (iStack_28 != 0) {
    *(int **)(iStack_28 + 4) = piStack_24;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00741d80 @ 00741d80 ////

void __thiscall FUN_00741d80(void *this,int param_1,void *param_2)

{
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  int local_18;
  void *local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd58b0;
  pvStack_c = ExceptionList;
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  local_18 = param_1;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    local_24 = (int *)(param_1 + 0x18);
    local_28 = *local_24;
    ExceptionList = &pvStack_c;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = param_2;
  local_10 = param_2;
  *(undefined4 *)((int)this + 0x7c) = 1;
  local_4 = 0;
  (**(code **)(*(int *)((int)this + 0x80) + 4))();
  *(int *)((int)this + 0x94) = local_18;
  (*(code *)**(undefined4 **)((int)this + 0x80))();
  *(void **)((int)this + 0x98) = local_14;
  *(void **)((int)this + 0x9c) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  local_18 = param_1;
  if (param_1 != 0) {
    local_24 = (int *)(param_1 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = param_2;
  local_10 = param_2;
  *(undefined4 *)((int)this + 0xc4) = 2;
  local_4 = 1;
  (**(code **)(*(int *)((int)this + 200) + 4))();
  *(int *)((int)this + 0xdc) = local_18;
  (*(code *)**(undefined4 **)((int)this + 200))();
  *(void **)((int)this + 0xe0) = local_14;
  *(void **)((int)this + 0xe4) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  local_18 = param_1;
  if (param_1 != 0) {
    local_24 = (int *)(param_1 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = param_2;
  local_10 = param_2;
  *(undefined4 *)((int)this + 0xa0) = 1;
  local_4 = 2;
  (**(code **)(*(int *)((int)this + 0xa4) + 4))();
  *(int *)((int)this + 0xb8) = local_18;
  (*(code *)**(undefined4 **)((int)this + 0xa4))();
  *(void **)((int)this + 0xbc) = local_14;
  *(void **)((int)this + 0xc0) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  local_18 = param_1;
  if (param_1 != 0) {
    local_24 = (int *)(param_1 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = param_2;
  local_10 = param_2;
  *(undefined4 *)((int)this + 0xe8) = 2;
  local_4 = 3;
  (**(code **)(*(int *)((int)this + 0xec) + 4))();
  *(int *)((int)this + 0x100) = local_18;
  (*(code *)**(undefined4 **)((int)this + 0xec))();
  *(void **)((int)this + 0x104) = local_14;
  local_2c = &PTR_FUN_00d18c2c;
  *(void **)((int)this + 0x108) = local_10;
  local_4 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = 0;
  local_28 = 0;
  local_24 = (int *)0x0;
  (**(code **)(*(int *)this + 0x50))(1);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00742090 @ 00742090 ////

void __fastcall FUN_00742090(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = &PTR_FUN_00d18c2c;
  param_1[6] = 0;
  param_1[4] = param_1 + 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_FUN_00d18c2c;
  param_1[0xf] = 0;
  param_1[0xd] = param_1 + 10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = &PTR_FUN_00d18c2c;
  param_1[0x18] = 0;
  param_1[0x16] = param_1 + 0x13;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 1;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1 + 0x1c;
  param_1[0x1c] = &PTR_FUN_00d18c2c;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return;
}


//// FUNCTION FUN_00742140 @ 00742140 ////

int __fastcall FUN_00742140(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00741330();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00742170 @ 00742170 ////

void * FUN_00742170(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00741830(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_007421c0 @ 007421c0 ////

char __fastcall FUN_007421c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  float local_9c [3];
  int iStack_90;
  int *piStack_8c;
  float local_78 [3];
  int iStack_6c;
  int *piStack_68;
  float local_54 [3];
  int iStack_48;
  int *piStack_44;
  float local_30;
  void *pvStack_2c;
  char cStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd58cb;
  pvStack_c = ExceptionList;
  piVar2 = param_1 + 0x1f;
  cVar3 = '\0';
  ExceptionList = &pvStack_c;
  FUN_007415d0(local_9c,piVar2);
  FUN_007415d0(local_78,param_1 + 0x28);
  FUN_007415d0(local_54,param_1 + 0x31);
  FUN_007415d0(&local_30,param_1 + 0x3a);
  local_4 = 0;
  if ((int *)param_1[0x25] == param_1) {
    piVar4 = param_1 + 0x31;
    (**(code **)(*param_1 + 0xec))(piVar4,1);
  }
  else {
    piVar4 = piVar2;
    (**(code **)(*param_1 + 0xec))();
    piVar2 = param_1 + 0x31;
  }
  (**(code **)(*param_1 + 0xec))(piVar2);
  if ((int *)param_1[0x2e] == param_1) {
    (**(code **)(*param_1 + 0xec))(param_1 + 0x3a,0);
    piVar2 = param_1 + 0x28;
  }
  else {
    (**(code **)(*param_1 + 0xec))(param_1 + 0x28);
    piVar2 = param_1 + 0x3a;
  }
  (**(code **)(*param_1 + 0xec))(piVar2,0);
  (**(code **)(*param_1 + 0xf0))();
  (**(code **)(*param_1 + 0xf8))();
  if (cStack_1c != '\0') {
    for (piVar2 = (int *)param_1[0x49]; piVar2 != param_1 + 0x4c; piVar2 = (int *)piVar2[1]) {
      cVar1 = (**(code **)(*(int *)piVar2[2] + 0x50))(1);
      if (cVar1 != '\0') {
        cVar3 = '\x01';
      }
    }
  }
  if ((((local_54[0] == (float)param_1[0x39]) && (local_78[0] == (float)param_1[0x30])) &&
      (local_30 == (float)param_1[0x42])) && (local_9c[0] == (float)param_1[0x27])) {
    if (cVar3 == '\0') {
      param_1[200] = 0;
    }
    else {
      param_1[200] = param_1[200] + 1;
    }
  }
  else {
    cVar3 = '\x01';
    param_1[200] = param_1[200] + 1;
  }
  if (500 < (uint)param_1[200]) {
    cVar3 = '\0';
  }
  if (piStack_44 != (int *)0x0) {
    *piStack_44 = iStack_48;
  }
  if (iStack_48 != 0) {
    *(int **)(iStack_48 + 4) = piStack_44;
  }
  if (piStack_68 != (int *)0x0) {
    *piStack_68 = iStack_6c;
  }
  if (iStack_6c != 0) {
    *(int **)(iStack_6c + 4) = piStack_68;
  }
  if (piStack_8c != (int *)0x0) {
    *piStack_8c = iStack_90;
  }
  if (iStack_90 != 0) {
    *(int **)(iStack_90 + 4) = piStack_8c;
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = 1;
  }
  piRam00000005 = piVar4;
  ExceptionList = pvStack_2c;
  return cVar3;
}


//// FUNCTION FUN_00742410 @ 00742410 ////

void FUN_00742410(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00742410(*(void **)((int)param_1 + 8));
    FUN_00740030((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00742450 @ 00742450 ////

void __fastcall FUN_00742450(int param_1)

{
  FUN_00742410(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00742480 @ 00742480 ////

void __thiscall
FUN_00742480(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cd58e8;
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
  piVar3 = FUN_00742170(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0074257b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0073ff60(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_0073ea60(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0074257b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0073ea60(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_0073ff60(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00742630 @ 00742630 ////

void __thiscall FUN_00742630(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cd5908;
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
  FUN_0073eba0((int *)&param_2);
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
      goto LAB_007427a1;
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
      piVar2 = (int *)FUN_0073eb10(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_0073eaf0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007427a1:
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
            FUN_0073ff60(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_0073ea60(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_0073ff60(this,(int)piVar5);
              break;
            }
LAB_00742864:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_0073ea60(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00742864;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_0073ff60(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_0073ea60(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
  if ((uint)_Memory[6] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[4]);
}


//// FUNCTION FUN_00742900 @ 00742900 ////

void __fastcall FUN_00742900(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cd59e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4b8bc;
  param_1[0x14] = &PTR_FUN_00d4b8a4;
  local_4 = 0xc;
  if (param_1[0x75] != 0) {
    _Memory = *(void **)(param_1[0x75] + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x75]);
  }
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  if ((undefined4 *)param_1[0x5f] != param_1 + 0x62) {
    do {
      piVar1 = (int *)param_1[0x5f];
      iVar2 = piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      *(undefined4 *)(iVar2 + 0x170) = 0;
    } while ((undefined4 *)param_1[0x5f] != param_1 + 0x62);
  }
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x55] = param_1[0x54];
  }
  if (param_1[0x54] != 0) {
    *(undefined4 *)(param_1[0x54] + 4) = param_1[0x55];
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x49] != param_1 + 0x4c) {
    do {
      piVar1 = (int *)param_1[0x49];
      puVar3 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    } while ((undefined4 *)param_1[0x49] != param_1 + 0x4c);
  }
  if ((undefined4 *)param_1[0x7b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7b])(1);
  }
  (**(code **)(param_1[0x76] + 4))();
  param_1[0x7b] = 0;
  (**(code **)param_1[0x76])();
  if ((undefined4 *)param_1[0xb5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb5])(1);
    param_1[0xb5] = 0;
  }
  if (0x14 < (uint)param_1[0xc1]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xbf]);
  }
  if (10 < (uint)param_1[0xb8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xb6]);
  }
  param_1[0x80] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x82] = param_1[0x81];
  }
  if (param_1[0x81] != 0) {
    *(undefined4 *)(param_1[0x81] + 4) = param_1[0x82];
  }
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x82] = param_1[0x81];
  }
  if (param_1[0x81] != 0) {
    *(undefined4 *)(param_1[0x81] + 4) = param_1[0x82];
  }
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x76] = &PTR_LAB_00d4b808;
  if ((undefined4 *)param_1[0x78] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x78] = param_1[0x77];
  }
  if (param_1[0x77] != 0) {
    *(undefined4 *)(param_1[0x77] + 4) = param_1[0x78];
  }
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  if ((undefined4 *)param_1[0x78] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x78] = param_1[0x77];
  }
  if (param_1[0x77] != 0) {
    *(undefined4 *)(param_1[0x77] + 4) = param_1[0x78];
  }
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x6e] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x70] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x70] = param_1[0x6f];
  }
  if (param_1[0x6f] != 0) {
    *(undefined4 *)(param_1[0x6f] + 4) = param_1[0x70];
  }
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  if ((undefined4 *)param_1[0x70] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x70] = param_1[0x6f];
  }
  if (param_1[0x6f] != 0) {
    *(undefined4 *)(param_1[0x6f] + 4) = param_1[0x70];
  }
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_006b4e00(param_1 + 0x5d);
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x59] = param_1[0x58];
  }
  if (param_1[0x58] != 0) {
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x55] = param_1[0x54];
  }
  if (param_1[0x54] != 0) {
    *(undefined4 *)(param_1[0x54] + 4) = param_1[0x55];
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_006b4e00(param_1 + 0x47);
  FUN_005f9ed0((int)(param_1 + 0x3a));
  FUN_005f9ed0((int)(param_1 + 0x31));
  FUN_005f9ed0((int)(param_1 + 0x28));
  FUN_005f9ed0((int)(param_1 + 0x1f));
  local_4 = local_4 & 0xffffff00;
  FUN_0053cbd0(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00742d10 @ 00742d10 ////

void __thiscall FUN_00742d10(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x31) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x31) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00742480(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0073eb40((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00742480(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00742dd0 @ 00742dd0 ////

void __thiscall FUN_00742dd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00742410((void *)piVar6[1]);
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
    FUN_00742630(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00742e90 @ 00742e90 ////

undefined4 * __thiscall FUN_00742e90(void *this,byte param_1)

{
  FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00742eb0 @ 00742eb0 ////

undefined4 * __thiscall FUN_00742eb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_8 [2];
  
  piVar5 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00742480(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00742480(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00742480(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_0073eb40((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x31) != '\0') {
          FUN_00742480(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00742480(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_0073eba0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x31) != '\0') {
          FUN_00742480(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00742480(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00742d10(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00743050 @ 00743050 ////

/* WARNING: Removing unreachable block (ram,0x0074311f) */

int * __thiscall FUN_00743050(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  char local_44 [20];
  int local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5a00;
  local_c = ExceptionList;
  piVar4 = *(int **)((int)this + 4);
  if (*(char *)(piVar4[1] + 0x31) == '\0') {
    piVar1 = (int *)piVar4[1];
    do {
      if (piVar1[3] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar4 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x31) == '\0');
  }
  if ((piVar4 == *(int **)((int)this + 4)) || (*param_1 < piVar4[3])) {
    local_44[0] = '\0';
    local_30 = *param_1;
    local_4 = 0;
    local_20[0] = 0;
    local_28 = 0;
    local_2c = local_20;
    local_24 = 0x14;
    ExceptionList = &local_c;
    FUN_004015d0(&local_2c,local_44,0);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_00742eb0(this,&param_1,piVar4,&local_30);
    piVar4 = (int *)*puVar3;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return piVar4 + 4;
}


//// FUNCTION FUN_00743180 @ 00743180 ////

void __fastcall FUN_00743180(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00742dd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007431b0 @ 007431b0 ////

undefined4 * __thiscall FUN_007431b0(void *this,undefined4 *param_1)

{
  ushort uVar1;
  int *piVar2;
  size_t sVar3;
  uint *puVar4;
  uint local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5a18;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  uVar1 = *(ushort *)((int)this + 0x2fa);
  local_4 = 0;
  ExceptionList = &local_c;
  local_70 = (uint)uVar1;
  _strncpy(local_6c,"ui/positions/",0xd);
  puVar4 = &local_70;
  local_68 = 0xd;
  local_6c[0xd] = '\0';
  piVar2 = FUN_00743050(&DAT_0104e120,(int *)puVar4);
  FUN_004073f0(&local_6c,(char *)*piVar2,piVar2[1]);
  FUN_004073f0(&local_6c,"_",1);
  sVar3 = _sprintf(local_4c,(char *)&param_2_00d1b93c,(uint)uVar1);
  FUN_004073f0(&local_6c,local_4c,sVar3);
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


//// FUNCTION FUN_007432c0 @ 007432c0 ////

int __fastcall FUN_007432c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00741330();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007432f0 @ 007432f0 ////

undefined4 * __fastcall FUN_007432f0(undefined4 *param_1)

{
  char *pcVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5b31;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  FUN_0053cac0(param_1 + 0x14);
  *param_1 = &PTR_FUN_00d4b8bc;
  param_1[0x14] = &PTR_FUN_00d4b8a4;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_1[0x1e] & 0xfffffff9 | 1;
  FUN_00742090(param_1 + 0x1f);
  param_1[0x45] = param_1[0x45] & 0xfffffff2 | 2;
  param_1[0x46] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  puVar2 = param_1 + 0x4c;
  param_1[0x4e] = 0;
  *puVar2 = 0;
  param_1[0x4d] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x47] = &PTR_LAB_00d3c38c;
  param_1[0x49] = puVar2;
  *puVar2 = param_1 + 0x48;
  param_1[0x56] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x5a] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  puVar2 = param_1 + 0x62;
  param_1[100] = 0;
  *puVar2 = 0;
  param_1[99] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x5d] = &PTR_LAB_00d3c38c;
  param_1[0x5f] = puVar2;
  *puVar2 = param_1 + 0x5e;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x71] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = param_1 + 0x6e;
  param_1[0x6e] = &PTR_FUN_00d1a200;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x79] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = param_1 + 0x76;
  param_1[0x76] = &PTR_LAB_00d4b808;
  param_1[0x7b] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7c] = 0;
  param_1[0x83] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = param_1 + 0x80;
  param_1[0x80] = &PTR_FUN_00d18c2c;
  param_1[0x85] = 0;
  param_1[0x86] = param_1[0x86] & 0xffffff90 | 0x10;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  puVar2 = param_1 + 0x8a;
  iVar3 = 0xe;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1 + 0xb9;
  *(undefined2 *)(param_1 + 0xb9) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 10;
  param_1[0xbe] = 0;
  param_1[0xbf] = param_1 + 0xc2;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0x14;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)((int)param_1 + 0x325) = 0;
  param_1[0xca] = 0;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)((int)param_1 + 0x339) = 0;
  param_1[0xcf] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  param_1[0x56] = param_1;
  FUN_00acdb9e(0xe58a50);
  iVar3 = FUN_0097dda0();
  param_1[0x57] = iVar3;
  if (DAT_00e58a4e != '\0') {
    iVar3 = 0x150;
    pcVar4 = "ChildLink";
    pcVar1 = (char *)FUN_00acdb9e(0xe58a50);
    FUN_0097df60(pcVar1,pcVar4,iVar3);
    DAT_00e58a4e = '\0';
  }
  param_1[0x5a] = param_1;
  FUN_00acdb9e(0xe58a50);
  iVar3 = FUN_0097dda0();
  param_1[0x5b] = iVar3;
  if (DAT_00e58a4d != '\0') {
    iVar3 = 0x160;
    pcVar4 = "ListsLink";
    pcVar1 = (char *)FUN_00acdb9e(0xe58a50);
    FUN_0097df60(pcVar1,pcVar4,iVar3);
    DAT_00e58a4d = '\0';
  }
  param_1[0x6c] = param_1;
  FUN_00acdb9e(0xe58a50);
  iVar3 = FUN_0097dda0();
  param_1[0x6d] = iVar3;
  if (DAT_00e58a4c != '\0') {
    iVar3 = 0x1a8;
    pcVar4 = "ModalLink";
    pcVar1 = (char *)FUN_00acdb9e(0xe58a50);
    FUN_0097df60(pcVar1,pcVar4,iVar3);
    DAT_00e58a4c = '\0';
  }
  this = operator_new(0x6c);
  local_4._0_1_ = 0x11;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00748640(this,param_1);
  }
  local_4._0_1_ = 0x10;
  param_1[0xb5] = puVar2;
  local_18 = (undefined4 *)FUN_0071b2a0();
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (undefined4 *)0x0) {
    local_24 = (int *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0;
  local_10 = 0;
  param_1[0x1f] = 1;
  local_4._0_1_ = 0x12;
  (**(code **)(param_1[0x20] + 4))();
  param_1[0x25] = local_18;
  (**(code **)param_1[0x20])();
  param_1[0x26] = local_14;
  param_1[0x27] = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0;
  local_10 = 0;
  param_1[0x31] = 1;
  local_4._0_1_ = 0x13;
  local_18 = param_1;
  (**(code **)(param_1[0x32] + 4))();
  param_1[0x37] = local_18;
  (**(code **)param_1[0x32])();
  param_1[0x38] = local_14;
  param_1[0x39] = local_10;
  local_4._0_1_ = 0x10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = (undefined4 *)FUN_0071b2a0();
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (undefined4 *)0x0) {
    local_24 = (int *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0;
  local_10 = 0;
  param_1[0x28] = 1;
  local_4._0_1_ = 0x14;
  (**(code **)(param_1[0x29] + 4))();
  param_1[0x2e] = local_18;
  (**(code **)param_1[0x29])();
  param_1[0x2f] = local_14;
  param_1[0x30] = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0;
  local_10 = 0;
  param_1[0x3a] = 1;
  local_4._0_1_ = 0x15;
  local_18 = param_1;
  (**(code **)(param_1[0x3b] + 4))();
  param_1[0x40] = local_18;
  (**(code **)param_1[0x3b])();
  param_1[0x41] = local_14;
  param_1[0x42] = local_10;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[200] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  iVar3 = FUN_00990d30(0,8);
  param_1[0xcd] = iVar3;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_007439f0 @ 007439f0 ////

void __thiscall FUN_007439f0(void *this,uint param_1,void *param_2,int param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int *this_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  uint local_b4;
  char *local_b0;
  uint local_ac;
  uint local_a8;
  char local_a4 [20];
  undefined4 *local_90;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
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
  
  puStack_8 = &LAB_00cd5c16;
  pvStack_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  *(uint *)((int)this + 0x2f8) = param_1;
  if (param_1 != 0) {
    bVar1 = FUN_00430950(&param_2,"");
    if (bVar1) {
      uVar3 = FUN_004302c0(&param_2,&DAT_00d1835c,0xffffffff,1);
      if (0 < (int)uVar3) {
        uVar3 = uVar3 + 1;
      }
      FUN_00430770(&param_2,&local_b0,uVar3,(param_3 - uVar3) - 4);
      local_b4 = param_1 >> 0x10;
      local_4 = 1;
      FUN_00741780(&DAT_0104e120,&local_90,(int *)&local_b4);
      if (local_90 == DAT_0104e124) {
        this_00 = FUN_00743050(&DAT_0104e120,(int *)&local_b4);
        FUN_004015d0(this_00,local_b0,local_ac);
      }
      else {
        FUN_00743050(&DAT_0104e120,(int *)&local_b4);
      }
      local_4 = 0;
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
    }
    FUN_007431b0(this,local_6c);
    puVar4 = FUN_0040d6b0(local_2c,"data/",local_6c);
    FUN_004312e0(local_4c,puVar4,".ini");
    local_4 = 3;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar5 = FUN_009d3660(local_4c,(uint *)0x0);
    if ((char)uVar5 != '\0') {
      local_90 = operator_new(0xd8);
      local_4 = 4;
      if (local_90 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00559fb0(local_90);
      }
      local_4 = 3;
      cVar2 = FUN_0055be10(puVar4,local_6c,'\x01');
      if (cVar2 != '\0') {
        local_8c = local_80;
        local_80[0] = '\0';
        local_88 = 0;
        local_84 = 0x14;
        _strncpy(local_8c,"subid_",6);
        local_88 = 6;
        local_8c[6] = '\0';
        local_4 = 5;
        FUN_004701b0(&local_8c,*(uint *)((int)this + 0x2f8) & 0xffff);
        uVar5 = FUN_00558a50(puVar4,&local_8c,(undefined4 *)0x0);
        if ((char)uVar5 != '\0') {
          local_b0 = local_a4;
          local_a4[0] = '\0';
          local_ac = 0;
          local_a8 = 0x14;
          _strncpy(local_b0,"positions",9);
          local_ac = 9;
          local_b0[9] = '\0';
          local_4 = 6;
          bVar1 = FUN_00558a90(puVar4,&local_b0,(undefined4 *)0x0);
          local_4 = 5;
          if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_b0);
          }
          if (bVar1) {
            FUN_00401de0(&local_b0,"top.offset",0xffffffff);
            local_4 = 7;
            fVar7 = FUN_00558610(puVar4,&local_b0,*(float *)((int)this + 0x98));
            *(float *)((int)this + 0x98) = (float)fVar7;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"bottom.offset",0xffffffff);
            local_4 = 8;
            fVar7 = FUN_00558610(puVar4,&local_b0,*(float *)((int)this + 0xe0));
            *(float *)((int)this + 0xe0) = (float)fVar7;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"left.offset",0xffffffff);
            local_4 = 9;
            fVar7 = FUN_00558610(puVar4,&local_b0,*(float *)((int)this + 0xbc));
            *(float *)((int)this + 0xbc) = (float)fVar7;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"right.offset",0xffffffff);
            local_4 = 10;
            fVar7 = FUN_00558610(puVar4,&local_b0,*(float *)((int)this + 0x104));
            *(float *)((int)this + 0x104) = (float)fVar7;
            local_4 = 5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
          }
          local_4 = 5;
          FUN_00558a50(puVar4,&local_8c,(undefined4 *)0x0);
          local_b0 = local_a4;
          local_a4[0] = '\0';
          local_ac = 0;
          local_a8 = 0x14;
          _strncpy(local_b0,"alignments",10);
          local_ac = 10;
          local_b0[10] = '\0';
          local_4 = 0xb;
          bVar1 = FUN_00558a90(puVar4,&local_b0,(undefined4 *)0x0);
          if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_b0);
          }
          if (bVar1) {
            FUN_00401de0(&local_b0,"top.align",0xffffffff);
            local_4 = 0xc;
            uVar5 = FUN_00558750(puVar4,&local_b0,1);
            *(undefined4 *)((int)this + 0x7c) = uVar5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"bottom.align",0xffffffff);
            local_4 = 0xd;
            uVar5 = FUN_00558750(puVar4,&local_b0,1);
            *(undefined4 *)((int)this + 0xc4) = uVar5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"left.align",0xffffffff);
            local_4 = 0xe;
            uVar5 = FUN_00558750(puVar4,&local_b0,1);
            *(undefined4 *)((int)this + 0xa0) = uVar5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"right.align",0xffffffff);
            local_4 = 0xf;
            uVar5 = FUN_00558750(puVar4,&local_b0,1);
            *(undefined4 *)((int)this + 0xe8) = uVar5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            FUN_00401de0(&local_b0,"top.from",0xffffffff);
            local_4 = 0x10;
            iVar6 = FUN_00558750(puVar4,&local_b0,0xfffffffd);
            local_b4 = FUN_0073e870(this,iVar6);
            local_4 = 5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            if (local_b4 != 0) {
              FUN_00433b50((void *)((int)this + 0x80),local_b4);
            }
            FUN_00401de0(&local_b0,"bottom.from",0xffffffff);
            local_4 = 0x11;
            iVar6 = FUN_00558750(puVar4,&local_b0,0xfffffffd);
            local_b4 = FUN_0073e870(this,iVar6);
            local_4 = 5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            if (local_b4 != 0) {
              FUN_00433b50((void *)((int)this + 200),local_b4);
            }
            FUN_00401de0(&local_b0,"left.from",0xffffffff);
            local_4 = 0x12;
            iVar6 = FUN_00558750(puVar4,&local_b0,0xfffffffd);
            local_b4 = FUN_0073e870(this,iVar6);
            local_4 = 5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            if (local_b4 != 0) {
              FUN_00433b50((void *)((int)this + 0xa4),local_b4);
            }
            FUN_00401de0(&local_b0,"right.from",0xffffffff);
            local_4 = 0x13;
            iVar6 = FUN_00558750(puVar4,&local_b0,0xfffffffd);
            local_b4 = FUN_0073e870(this,iVar6);
            local_4 = 5;
            if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_b0);
            }
            if (local_b4 != 0) {
              FUN_00433b50((void *)((int)this + 0xec),local_b4);
            }
          }
        }
        local_4 = 3;
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
      }
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00744b70 @ 00744b70 ////

void __fastcall FUN_00744b70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4bae0;
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_00744b80 @ 00744b80 ////

void __thiscall FUN_00744b80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x20))(param_1 + 8);
  *(float *)(param_1 + 0x14) = DAT_0104e134 * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = DAT_0104e138 * *(float *)(param_1 + 0x18);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb50);
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb58);
  }
  return;
}


//// FUNCTION FUN_00744c10 @ 00744c10 ////

undefined4 * __thiscall FUN_00744c10(void *this,byte param_1)

{
  FUN_00744b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00744c70 @ 00744c70 ////

void __thiscall FUN_00744c70(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_0104e138;
  fVar5 = DAT_0104e134;
  fVar1 = *param_1;
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = param_1[1];
  fVar4 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar1 - fVar2) * fVar5 + *param_1;
  param_1[1] = (fVar3 - fVar4) * fVar6 + param_1[1];
  return;
}


//// FUNCTION FUN_00744cd0 @ 00744cd0 ////

void __thiscall FUN_00744cd0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 1.0 / DAT_0104e138;
  fVar6 = 1.0 / DAT_0104e134;
  fVar1 = *param_1;
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = param_1[1];
  fVar4 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar1 - fVar2) * fVar6 + *param_1;
  param_1[1] = (fVar3 - fVar4) * fVar5 + param_1[1];
  return;
}


//// FUNCTION FUN_00744d40 @ 00744d40 ////

void __thiscall FUN_00744d40(void *this,int *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x10));
  *(undefined4 *)((int)this + 0x9c) = local_8;
  *(undefined4 *)((int)this + 0xa0) = local_4;
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x1c));
  *(undefined4 *)((int)this + 0xa4) = local_8;
  *(undefined4 *)((int)this + 0xa8) = local_4;
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  (**(code **)(*(int *)this + 0x20))(&local_10);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = unaff_ESI;
  *(undefined4 *)(iVar1 + 0x14) = local_10;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_009840b0(&uStack_c,(undefined4 *)(*param_1 + 0x1c));
  local_10 = local_8;
  (**(code **)(*(int *)this + 0x20))(&stack0xffffffec);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x1c) = unaff_EDI;
  *(undefined4 *)(iVar1 + 0x20) = uStack_c;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_00744e60 @ 00744e60 ////

void FUN_00744e60(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / DAT_0104e138;
  *param_1 = (1.0 / DAT_0104e134) * *param_1;
  param_1[1] = fVar1 * param_1[1];
  return;
}


//// FUNCTION FUN_00744eb0 @ 00744eb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00744eb0(undefined4 *param_1)

{
  FUN_00746480(param_1);
  *param_1 = &PTR_FUN_00d4bae0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  DAT_0104e138 = DAT_0105c404 / _DAT_00e58ac0;
  DAT_0104e134 = DAT_0105c400 / _DAT_00e58abc;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_004015d0(param_1 + 0x18,"CResIndependent",0xf);
  return param_1;
}


//// FUNCTION FUN_00744f30 @ 00744f30 ////

void __thiscall FUN_00744f30(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xb8) = param_1;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1;
  *(undefined4 *)((int)this + 0x98) = param_2;
  return;
}


//// FUNCTION FUN_00745100 @ 00745100 ////

undefined4 * __thiscall
FUN_00745100(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007467b0(this,param_2);
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1;
  *(undefined4 *)((int)this + 0xb0) = param_1;
  *(undefined ***)this = &PTR_FUN_00d4bb28;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xb4) = param_3;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CFadeTransition",0xf);
  return this;
}


//// FUNCTION FUN_007451c0 @ 007451c0 ////

undefined4 * __thiscall FUN_007451c0(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007452f0 @ 007452f0 ////

void __thiscall FUN_007452f0(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x10));
  *(undefined4 *)((int)this + 0xb4) = local_8;
  *(undefined4 *)((int)this + 0xb8) = local_4;
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x1c));
  fVar1 = *(float *)((int)this + 0xac);
  fVar2 = *(float *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xbc) = local_8;
  fVar3 = *(float *)((int)this + 0x9c);
  *(undefined4 *)((int)this + 0xc0) = local_4;
  iVar9 = *param_1;
  fVar4 = *(float *)((int)this + 0xa4);
  fVar5 = *(float *)((int)this + 0xb0);
  fVar6 = *(float *)((int)this + 0xa8);
  fVar7 = *(float *)((int)this + 0x9c);
  fVar8 = *(float *)((int)this + 0xa8);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar9 + 0x18);
  *(float *)(iVar9 + 0x10) = (fVar1 - fVar2) * fVar3 + fVar4 + *(float *)(iVar9 + 0x10);
  *(float *)(iVar9 + 0x14) = (fVar5 - fVar6) * fVar7 + fVar8 + *(float *)(iVar9 + 0x14);
  iVar9 = *param_1;
  fVar1 = *(float *)((int)this + 0xac);
  fVar2 = *(float *)((int)this + 0xa4);
  fVar3 = *(float *)((int)this + 0x9c);
  fVar4 = *(float *)((int)this + 0xa4);
  fVar5 = *(float *)((int)this + 0xb0);
  fVar6 = *(float *)((int)this + 0xa8);
  fVar7 = *(float *)((int)this + 0x9c);
  fVar8 = *(float *)((int)this + 0xa8);
  *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar9 + 0x24);
  *(float *)(iVar9 + 0x1c) = (fVar1 - fVar2) * fVar3 + fVar4 + *(float *)(iVar9 + 0x1c);
  *(float *)(iVar9 + 0x20) = (fVar5 - fVar6) * fVar7 + fVar8 + *(float *)(iVar9 + 0x20);
  return;
}


//// FUNCTION FUN_00745620 @ 00745620 ////

undefined4 * __thiscall FUN_00745620(void *this,undefined4 param_1)

{
  FUN_007467b0(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d4bb80;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CMoveTransition",0xf);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  return this;
}


//// FUNCTION FUN_007456f0 @ 007456f0 ////

undefined4 * __thiscall FUN_007456f0(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00745720 @ 00745720 ////

void __fastcall FUN_00745720(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4bbbc;
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_00745830 @ 00745830 ////

undefined4 * __thiscall FUN_00745830(void *this,byte param_1)

{
  FUN_00745720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00745890 @ 00745890 ////

void __cdecl FUN_00745890(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_3[1];
  *param_1 = (*param_2 - *param_3) * param_4 + *param_3;
  param_1[1] = (fVar1 - fVar2) * param_4 + fVar3;
  return;
}


//// FUNCTION FUN_007458d0 @ 007458d0 ////

void __thiscall FUN_007458d0(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xa8);
  *param_1 = (param_2 - *(float *)((int)this + 0xa4)) * fVar3 + *(float *)((int)this + 0xa4);
  param_1[1] = fVar3 * (param_3 - fVar1) + fVar2;
  return;
}


//// FUNCTION FUN_00745930 @ 00745930 ////

void __thiscall FUN_00745930(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 / ((*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
                 *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0));
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xa8);
  *param_1 = (param_2 - *(float *)((int)this + 0xa4)) * fVar3 + *(float *)((int)this + 0xa4);
  param_1[1] = fVar3 * (param_3 - fVar1) + fVar2;
  return;
}


//// FUNCTION FUN_00745990 @ 00745990 ////

undefined4 * __thiscall FUN_00745990(void *this,undefined4 param_1,int param_2,int param_3)

{
  FUN_007467b0(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d4bbbc;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(int *)((int)this + 0xac) = param_2;
  *(int *)((int)this + 0xd8) = param_3;
  if (param_3 == 0) {
    *(float *)((int)this + 0xa4) = (*(float *)(param_2 + 0x108) + *(float *)(param_2 + 0xc0)) * 0.5;
    *(float *)((int)this + 0xa8) = (*(float *)(param_2 + 0xe4) + *(float *)(param_2 + 0x9c)) * 0.5;
  }
  else {
    *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_2 + 0x9c);
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CScaleTransition",0x10);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0x3f800000;
  return this;
}


//// FUNCTION FUN_00745aa0 @ 00745aa0 ////

void __thiscall FUN_00745aa0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xa8);
  *param_1 = (*param_1 - *(float *)((int)this + 0xa4)) * fVar3 + *(float *)((int)this + 0xa4);
  param_1[1] = fVar3 * (param_1[1] - fVar1) + fVar2;
  return;
}


//// FUNCTION FUN_00745b20 @ 00745b20 ////

void __thiscall FUN_00745b20(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xa8);
  fVar8 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar3 = *(float *)((int)this + 0xa4);
  fVar4 = *(float *)((int)this + 0xa8);
  fVar5 = *(float *)((int)this + 0xa4);
  fVar6 = *(float *)((int)this + 0xa8);
  *param_1 = (*param_1 - *(float *)((int)this + 0xa4)) * fVar7 + *(float *)((int)this + 0xa4);
  param_1[1] = (param_1[1] - fVar1) * fVar7 + fVar2;
  param_1[2] = (param_1[2] - fVar3) * fVar8 + fVar5;
  param_1[3] = (param_1[3] - fVar4) * fVar8 + fVar6;
  return;
}


//// FUNCTION FUN_00745c20 @ 00745c20 ////

void __thiscall FUN_00745c20(void *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  *(float *)((int)this + 0xb0) = local_10;
  *(float *)((int)this + 0xb4) = local_c;
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x1c));
  *(float *)((int)this + 0xb8) = local_10;
  *(float *)((int)this + 0xbc) = local_c;
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  fVar1 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  local_14 = (local_c - *(float *)((int)this + 0xa8)) * fVar1;
  local_10 = (local_10 - *(float *)((int)this + 0xa4)) * fVar1 + *(float *)((int)this + 0xa4);
  local_c = local_14 + *(float *)((int)this + 0xa8);
  FUN_009840b0(&local_18,(undefined4 *)(*param_1 + 0x1c));
  iVar5 = *param_1;
  fVar6 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xa4);
  fVar2 = *(float *)((int)this + 0xa8);
  fVar3 = *(float *)((int)this + 0xa4);
  fVar4 = *(float *)((int)this + 0xa8);
  *(float *)(iVar5 + 0x14) = local_c;
  *(float *)(iVar5 + 0x10) = local_10;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  iVar5 = *param_1;
  *(float *)(iVar5 + 0x1c) = (local_18 - fVar1) * fVar6 + fVar3;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(float *)(iVar5 + 0x20) = (local_14 - fVar2) * fVar6 + fVar4;
  return;
}


//// FUNCTION FUN_00745d70 @ 00745d70 ////

void __thiscall FUN_00745d70(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xa8);
  fVar2 = *(float *)((int)this + 0xa8);
  *param_1 = (*param_1 - *(float *)((int)this + 0xa4)) * fVar3 + *(float *)((int)this + 0xa4);
  param_1[1] = fVar3 * (param_1[1] - fVar1) + fVar2;
  return;
}


//// FUNCTION FUN_00745df0 @ 00745df0 ////

void __thiscall FUN_00745df0(void *this,float *param_1)

{
  float *pfVar1;
  float local_8 [2];
  
  pfVar1 = (float *)FUN_00745930(this,local_8,*param_1,param_1[1]);
  *param_1 = *pfVar1;
  param_1[1] = pfVar1[1];
  return;
}


//// FUNCTION FUN_00745e30 @ 00745e30 ////

void __thiscall FUN_00745e30(void *this,int param_1)

{
  float fVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) *
          *(float *)((int)this + 0x9c) + *(float *)((int)this + 0xd0);
  local_4 = (*(float *)(param_1 + 0xc) - *(float *)((int)this + 0xa8)) * fVar1;
  local_10 = (*(float *)(param_1 + 8) - *(float *)((int)this + 0xa4)) * fVar1 +
             *(float *)((int)this + 0xa4);
  local_c = local_4 + *(float *)((int)this + 0xa8);
  *(float *)(param_1 + 8) = local_10;
  *(float *)(param_1 + 0xc) = local_c;
  *(float *)(param_1 + 0x14) =
       ((*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) * *(float *)((int)this + 0x9c)
       + *(float *)((int)this + 0xd0)) * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) =
       ((*(float *)((int)this + 0xd4) - *(float *)((int)this + 0xd0)) * *(float *)((int)this + 0x9c)
       + *(float *)((int)this + 0xd0)) * *(float *)(param_1 + 0x18);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    *(float *)((int)this + 0xc0) = DAT_0105cb50;
    *(float *)((int)this + 0xc4) = DAT_0105cb54;
    *(float *)((int)this + 200) = DAT_0105cb58;
    *(float *)((int)this + 0xcc) = DAT_0105cb5c;
    FUN_007458d0(this,&local_10,*(float *)((int)this + 0xc0),*(float *)((int)this + 0xc4));
    FUN_007458d0(this,&local_8,*(float *)((int)this + 200),*(float *)((int)this + 0xcc));
    DAT_0105cb50 = local_10;
    DAT_0105cb54 = local_c;
    DAT_0105cb58 = local_8;
    DAT_0105cb5c = local_4;
  }
  return;
}


//// FUNCTION FUN_00745f90 @ 00745f90 ////

void __thiscall FUN_00745f90(void *this,int *param_1)

{
  float fVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x10));
  *(undefined4 *)((int)this + 0xa8) = local_8;
  *(undefined4 *)((int)this + 0xac) = local_4;
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x1c));
  *(undefined4 *)((int)this + 0xb0) = local_8;
  *(undefined4 *)((int)this + 0xb4) = local_4;
  fVar1 = *(float *)((int)this + 0xa4) - *(float *)((int)this + 0x9c) * *(float *)((int)this + 0xa4)
  ;
  *(float *)(*param_1 + 0x10) = fVar1 + *(float *)(*param_1 + 0x10);
  *(float *)(*param_1 + 0x1c) = fVar1 + *(float *)(*param_1 + 0x1c);
  return;
}


//// FUNCTION FUN_00746170 @ 00746170 ////

undefined4 * __thiscall FUN_00746170(void *this,undefined4 param_1)

{
  FUN_007467b0(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d4bc20;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0x42000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CSlideTransition",0x10);
  return this;
}


//// FUNCTION FUN_00746210 @ 00746210 ////

undefined4 * __thiscall FUN_00746210(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00746270 @ 00746270 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00746270(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = FUN_00566c00(DAT_0104cdf4);
  fVar3 = (fVar3 + (float10)*(int *)(param_1 + 0x94)) / (float10)*(int *)(param_1 + 0x98);
  *(float *)(param_1 + 0x9c) = (float)fVar3;
  if ((float10)1.0 <= fVar3) {
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  }
  if (*(int *)(param_1 + 0xa0) == 1) {
    if (*(float *)(param_1 + 0x9c) < 0.5 != (*(float *)(param_1 + 0x9c) == 0.5)) {
      fVar1 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x9c) = fVar1 + fVar1;
      return;
    }
    fVar1 = 1.0 - *(float *)(param_1 + 0x9c);
    fVar1 = fVar1 * fVar1;
    *(float *)(param_1 + 0x9c) = 1.0 - (fVar1 + fVar1);
  }
  else if (*(int *)(param_1 + 0xa0) == 2) {
    fVar1 = *(float *)(param_1 + 0x9c);
    if (*(float *)(param_1 + 0x9c) < _DAT_00e58b9c) {
      if (fVar1 < 0.5 == (fVar1 == 0.5)) {
        fVar1 = 1.0 - *(float *)(param_1 + 0x9c);
        fVar1 = fVar1 * fVar1;
        fVar1 = 1.0 - (fVar1 + fVar1);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c);
        fVar1 = fVar1 + fVar1;
      }
      *(float *)(param_1 + 0x9c) = fVar1;
      fVar1 = (1.0 - _DAT_00e58b9c) * (1.0 - _DAT_00e58b9c);
      *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) / (1.0 - (fVar1 + fVar1));
      return;
    }
    fVar1 = (fVar1 - _DAT_00e58b9c) / (1.0 - _DAT_00e58b9c);
    fVar2 = 1.0 - fVar1;
    *(float *)(param_1 + 0x9c) =
         (1.0 - _DAT_00e58ba0) +
         ((1.0 - fVar2 * fVar2) + (1.0 - fVar1 * fVar1) * fVar2 * fVar2 * fVar2) * _DAT_00e58ba0;
    return;
  }
  return;
}


//// FUNCTION FUN_00746480 @ 00746480 ////

undefined4 * __fastcall FUN_00746480(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5d5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d4bc78;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = param_1 + 0x1b;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x14;
  piVar1 = param_1 + 0x20;
  param_1[0x22] = 0;
  *piVar1 = 0;
  param_1[0x21] = 0;
  local_4 = 3;
  param_1[0x24] = param_1[0x24] & 0xfffffffd | 1;
  param_1[0x16] = param_1;
  FUN_00acdb9e(0xe58ba8);
  iVar2 = FUN_0097dda0();
  param_1[0x17] = iVar2;
  if (DAT_00e58ba5 != '\0') {
    iVar2 = 0x50;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe58ba8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e58ba5 = '\0';
  }
  FUN_004015d0(param_1 + 0x18,"CWindowRenderer",0xf);
  param_1[0x22] = param_1;
  FUN_00acdb9e(0xe58ba8);
  iVar2 = FUN_0097dda0();
  param_1[0x23] = iVar2;
  if (DAT_00e58ba4 != '\0') {
    iVar2 = 0x80;
    pcVar4 = "RendererLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe58ba8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e58ba4 = '\0';
  }
  param_1[0x21] = &DAT_0104e150;
  *piVar1 = (int)DAT_0104e150;
  *(int **)((int)DAT_0104e150 + 4) = piVar1;
  DAT_0104e150 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00746640 @ 00746640 ////

void __fastcall FUN_00746640(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4bc78;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15] = param_1[0x14];
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (0x14 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15] = param_1[0x14];
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00746710 @ 00746710 ////

void FUN_00746710(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_0104e144;
  if (DAT_0104e144 != &DAT_0104e150) {
    *(int *)(DAT_0104e144[2] + 0x48) = *(int *)(DAT_0104e144[2] + 0x48) + 1;
    while (puVar4 != &DAT_0104e150) {
      if (1 < ((int *)puVar4[2])[0x12]) {
        (**(code **)(*(int *)puVar4[2] + 0xc))();
      }
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 != &DAT_0104e150) {
        *(int *)(puVar2[2] + 0x48) = *(int *)(puVar2[2] + 0x48) + 1;
      }
      puVar3 = (undefined4 *)puVar4[2];
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      puVar4 = puVar2;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00746770 @ 00746770 ////

void FUN_00746770(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104e144;
  if (DAT_0104e144 != &DAT_0104e150) {
    do {
      puVar1 = (undefined4 *)puVar2[1];
      if ((*(byte *)((int *)puVar2[2] + 0x24) & 1) != 0) {
        (**(code **)(*(int *)puVar2[2] + 8))();
      }
      puVar2 = puVar1;
    } while (puVar1 != &DAT_0104e150);
  }
  return;
}


//// FUNCTION FUN_007467b0 @ 007467b0 ////

undefined4 * __thiscall FUN_007467b0(void *this,undefined4 param_1)

{
  FUN_00746480(this);
  *(undefined ***)this = &PTR_FUN_00d4bcac;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = param_1;
  *(undefined4 *)((int)this + 0x9c) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CBaseTransition",0xf);
  *(undefined4 *)((int)this + 0xa0) = 0;
  return this;
}


//// FUNCTION FUN_00746800 @ 00746800 ////

undefined4 * __thiscall FUN_00746800(void *this,byte param_1)

{
  FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00746820 @ 00746820 ////

undefined4 * __thiscall FUN_00746820(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00746840 @ 00746840 ////

void __fastcall FUN_00746840(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d4bcf4;
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


//// FUNCTION FUN_00746890 @ 00746890 ////

undefined4 * __thiscall FUN_00746890(void *this,byte param_1)

{
  FUN_00746840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007468b0 @ 007468b0 ////

void __fastcall FUN_007468b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d4bcf4;
  return;
}


//// FUNCTION FUN_00746910 @ 00746910 ////

void __thiscall FUN_00746910(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x94) = param_1;
  return;
}


//// FUNCTION FUN_007469a0 @ 007469a0 ////

void __thiscall FUN_007469a0(void *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  *(uint *)((int)this + 0x98) = (uint)*(byte *)(param_1 + 7);
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *(char *)(param_1 + 7) = (char)iVar1;
  return;
}


//// FUNCTION FUN_00746a20 @ 00746a20 ////

undefined4 * __thiscall FUN_00746a20(void *this,undefined4 param_1)

{
  FUN_00746480(this);
  *(undefined ***)this = &PTR_FUN_00d4bd14;
  *(undefined4 *)((int)this + 0x94) = param_1;
  FUN_004015d0((void *)((int)this + 0x60),"CWindowRendererFade",0x13);
  return this;
}


//// FUNCTION FUN_00746a50 @ 00746a50 ////

undefined4 * __thiscall FUN_00746a50(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00746ae0 @ 00746ae0 ////

int __fastcall FUN_00746ae0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
}


//// FUNCTION FUN_00746da0 @ 00746da0 ////

undefined4 * __thiscall FUN_00746da0(void *this,int param_1)

{
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    **(undefined4 **)((int)this + 8) = *(undefined4 *)((int)this + 4);
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  (*(code *)**(undefined4 **)((int)this + 0x1c))();
  return this;
}


//// FUNCTION FUN_00746e00 @ 00746e00 ////

undefined4 * __cdecl FUN_00746e00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_3 + 2;
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        *(int *)*piVar2 = piVar2[-1];
      }
      if (piVar2[-1] != 0) {
        *(int *)(piVar2[-1] + 4) = *piVar2;
      }
      piVar2[-1] = 0;
      *piVar2 = 0;
      puVar1 = (undefined4 *)*param_3;
      piVar2[3] = 0;
      piVar2[3] = *(int *)(param_1 + 0x14);
      (*(code *)*puVar1)();
      piVar2[4] = *(int *)(param_1 + 0x18);
      (**(code **)(piVar2[5] + 4))();
      piVar2[10] = *(int *)(param_1 + 0x30);
      (**(code **)piVar2[5])();
      param_1 = param_1 + 0x34;
      param_3 = param_3 + 0xd;
      piVar2 = piVar2 + 0xd;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_00746e80 @ 00746e80 ////

undefined4 * __cdecl FUN_00746e80(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 2;
    do {
      puVar4 = puVar3 + -0xd;
      iVar2 = param_2 + -0x34;
      param_3 = param_3 + -0xd;
      if ((undefined4 *)puVar3[-0xd] != (undefined4 *)0x0) {
        *(undefined4 *)puVar3[-0xd] = puVar3[-0xe];
      }
      if (puVar3[-0xe] != 0) {
        *(undefined4 *)(puVar3[-0xe] + 4) = *puVar4;
      }
      puVar3[-0xe] = 0;
      *puVar4 = 0;
      puVar1 = (undefined4 *)*param_3;
      puVar3[-10] = 0;
      puVar3[-10] = *(undefined4 *)(param_2 + -0x20);
      (*(code *)*puVar1)();
      puVar3[-9] = *(undefined4 *)(param_2 + -0x1c);
      (**(code **)(puVar3[-8] + 4))();
      puVar3[-3] = *(undefined4 *)(param_2 + -4);
      (**(code **)puVar3[-8])();
      param_2 = iVar2;
      puVar3 = puVar4;
    } while (iVar2 != param_1);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_00746f20 @ 00746f20 ////

undefined4 * __thiscall FUN_00746f20(void *this,undefined4 param_1)

{
  if (*(undefined4 **)((int)this + 8) != (undefined4 *)0x0) {
    **(undefined4 **)((int)this + 8) = *(undefined4 *)((int)this + 4);
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = 0;
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  *(undefined4 *)((int)this + 0x30) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x1c))();
  return this;
}


//// FUNCTION FUN_00746fd0 @ 00746fd0 ////

void __fastcall FUN_00746fd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4bd4c;
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


//// FUNCTION FUN_00747040 @ 00747040 ////

void __cdecl FUN_00747040(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 2;
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        *(int *)*piVar2 = piVar2[-1];
      }
      if (piVar2[-1] != 0) {
        *(int *)(piVar2[-1] + 4) = *piVar2;
      }
      piVar2[-1] = 0;
      *piVar2 = 0;
      puVar1 = (undefined4 *)*param_1;
      piVar2[3] = 0;
      piVar2[3] = *(int *)(param_3 + 0x14);
      (*(code *)*puVar1)();
      piVar2[4] = *(int *)(param_3 + 0x18);
      (**(code **)(piVar2[5] + 4))();
      piVar2[10] = *(int *)(param_3 + 0x30);
      (**(code **)piVar2[5])();
      param_1 = param_1 + 0xd;
      piVar2 = piVar2 + 0xd;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_007470e0 @ 007470e0 ////

undefined1 __fastcall FUN_007470e0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  uVar1 = 1;
  if (iVar2 != *(int *)(param_1 + 0x44)) {
    while ((*(int *)(iVar2 + 0x14) == 0 || ((*(byte *)(*(int *)(iVar2 + 0x14) + 0x90) & 1) == 0))) {
      iVar2 = iVar2 + 0x34;
      if (iVar2 == *(int *)(param_1 + 0x44)) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_00747110 @ 00747110 ////

void __thiscall FUN_00747110(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x18))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_00747170 @ 00747170 ////

void __thiscall FUN_00747170(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x10))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_007471d0 @ 007471d0 ////

void __thiscall FUN_007471d0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x1c))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_00747230 @ 00747230 ////

void __thiscall FUN_00747230(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x14))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_00747290 @ 00747290 ////

void __thiscall FUN_00747290(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x20))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_007472f0 @ 007472f0 ////

void __thiscall FUN_007472f0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = *(int *)((int)this + 0x40);
    if (iVar2 != *(int *)((int)this + 0x44)) {
      do {
        piVar1 = *(int **)(iVar2 + 0x14);
        if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
          (**(code **)(*piVar1 + 0x24))(param_1);
        }
        iVar2 = iVar2 + 0x34;
      } while (iVar2 != *(int *)((int)this + 0x44));
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
    if (iVar2 == 0) break;
    this = *(void **)(iVar2 + 0x2d4);
  }
  return;
}


//// FUNCTION FUN_00747350 @ 00747350 ////

void __thiscall
FUN_00747350(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)((int)this + 0x40);
  local_c = param_3;
  local_10 = param_2;
  local_8 = param_4;
  local_4 = param_5;
  if (iVar3 != *(int *)((int)this + 0x44)) {
    do {
      piVar1 = *(int **)(iVar3 + 0x14);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
        (**(code **)(*piVar1 + 0x28))(&local_10);
      }
      iVar3 = iVar3 + 0x34;
    } while (iVar3 != *(int *)((int)this + 0x44));
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)
             FUN_00747350(*(void **)(iVar3 + 0x2d4),&param_2,local_10,local_c,local_8,local_4);
    local_10 = *puVar2;
    local_c = puVar2[1];
    local_8 = puVar2[2];
    local_4 = puVar2[3];
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_00747460 @ 00747460 ////

void __thiscall FUN_00747460(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = *(int *)((int)this + 0x40);
  local_8 = param_2;
  local_4 = param_3;
  if (iVar3 != *(int *)((int)this + 0x44)) {
    do {
      piVar1 = *(int **)(iVar3 + 0x14);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x24) & 1) != 0)) {
        (**(code **)(*piVar1 + 0x2c))(&local_8);
      }
      iVar3 = iVar3 + 0x34;
    } while (iVar3 != *(int *)((int)this + 0x44));
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x68) + 0x118);
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)FUN_00747460(*(void **)(iVar3 + 0x2d4),&param_2,local_8,local_4);
    local_8 = *puVar2;
    local_4 = puVar2[1];
  }
  param_1[1] = local_4;
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00747510 @ 00747510 ////

undefined4 * __thiscall FUN_00747510(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5da3;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  piVar2 = (int *)((int)this + 0x1c);
  *(undefined ***)this = &PTR_LAB_00d4bd5c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 1;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x30) = 0;
  (**(code **)*piVar2)();
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x14) + 0x18);
    *(int **)((int)this + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007475b0 @ 007475b0 ////

void __fastcall FUN_007475b0(int param_1)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x30));
  }
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


//// FUNCTION FUN_007475f0 @ 007475f0 ////

void __fastcall FUN_007475f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4bd5c;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[7] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_00d4bd4c;
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


//// FUNCTION FUN_007476b0 @ 007476b0 ////

undefined4 * __thiscall FUN_007476b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5dc3;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined4 *)((int)this + 0x14) = 0;
  piVar2 = (int *)((int)this + 0x1c);
  *(undefined ***)this = &PTR_LAB_00d4bd5c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  local_4 = 1;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  (**(code **)*piVar2)();
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x14) + 0x18);
    *(int **)((int)this + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00747760 @ 00747760 ////

void __cdecl FUN_00747760(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5de1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_007476b0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007477b0 @ 007477b0 ////

undefined4 * __thiscall FUN_007477b0(void *this,byte param_1)

{
  FUN_007475f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007477d0 @ 007477d0 ////

void __thiscall FUN_007477d0(void *this,int param_1)

{
  float10 fVar1;
  int local_8;
  float local_4;
  
  fVar1 = FUN_004012c0(0.0);
  local_4 = (float)fVar1;
  local_8 = param_1;
  FUN_00747110(this,&local_8);
  BuildAndDrawPrimitive(param_1);
  FUN_007471d0(this,&local_8);
  return;
}


//// FUNCTION FUN_00747820 @ 00747820 ////

void __thiscall
FUN_00747820(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x5c) = param_4;
  *(undefined4 *)((int)this + 0x54) = *param_3;
  piVar1 = (int *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x58) = param_3[1];
  *piVar1 = param_1;
  *(undefined4 *)((int)this + 0x60) = param_5;
  *(undefined4 *)((int)this + 100) = param_6;
  FUN_00747170(this,piVar1);
  iVar2 = *piVar1;
  local_20 = 0xffffffff;
  FUN_009a8100(&local_24);
  local_20 = *(undefined4 *)((int)this + 0x50);
  local_1c = *(undefined4 *)((int)this + 0x54);
  local_18 = *(undefined4 *)((int)this + 0x58);
  local_10 = *(undefined4 *)((int)this + 0x5c);
  local_c = *(undefined4 *)((int)this + 0x60);
  local_8 = *(undefined4 *)((int)this + 100);
  local_14 = 0;
  local_24 = iVar2;
  FUN_009a85a0(&local_24);
  FUN_00747230(this,piVar1);
  return;
}


//// FUNCTION FUN_00747910 @ 00747910 ////

void * __cdecl FUN_00747910(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cd5e01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_007476b0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x34);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_007479a0 @ 007479a0 ////

void * __cdecl FUN_007479a0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cd5e21;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_007476b0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x34);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00747a90 @ 00747a90 ////

void __cdecl FUN_00747a90(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cd5e41;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_007476b0(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x34);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00747b50 @ 00747b50 ////

void FUN_00747b50(void)

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
  puStack_8 = &LAB_00cd5e58;
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


//// FUNCTION FUN_00747cb0 @ 00747cb0 ////

void FUN_00747cb0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    FUN_007475f0(param_1);
  }
  return;
}


//// FUNCTION FUN_00747ce0 @ 00747ce0 ////

void __fastcall FUN_00747ce0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xd) {
    FUN_007475f0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00747d30 @ 00747d30 ////

void * FUN_00747d30(void *param_1,int param_2,int param_3)

{
  FUN_00747a90(param_1,param_2,param_3);
  return (void *)(param_2 * 0x34 + (int)param_1);
}


//// FUNCTION FUN_00747d60 @ 00747d60 ////

void __thiscall FUN_00747d60(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_50 [13];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cd5e78;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_007476b0(local_50,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x34;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (0x4ec4ec4U - iVar2 < param_2) {
      FUN_00747b50();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x4ec4ec4 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x34;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_00746ae0((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x34);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_007479a0(*(int *)((int)this + 4),(int)param_1,pvVar4);
      FUN_00747a90(pvVar5,param_2,(int)local_50);
      FUN_007479a0((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x34));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x34;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00747cb0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x34 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0x34 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar1 - (int)param_1) / 0x34) < param_2) {
        FUN_007479a0((int)param_1,(int)puVar1,param_1 + param_2 * 0xd);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00747d30(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x34,(int)local_50)
        ;
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x34;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00747040(param_1,(undefined4 *)(iVar3 + param_2 * -0x34),(int)local_50);
      }
      else {
        pvVar4 = FUN_007479a0((int)(puVar1 + param_2 * -0xd),(int)puVar1,puVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_00746e80((int)param_1,(int)(puVar1 + param_2 * -0xd),puVar1);
        FUN_00747040(param_1,param_1 + param_2 * 0xd,(int)local_50);
      }
    }
  }
  FUN_007475f0(local_50);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00748070 @ 00748070 ////

void __thiscall FUN_00748070(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cd5e90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x4ec4ec4 < param_1) {
    ExceptionList = &local_10;
    FUN_00747b50();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x34;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x34);
    local_8 = 0;
    FUN_00747910(*(int *)((int)this + 4),*(int *)((int)this + 8),pvVar2);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_00747cb0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x34 + (int)pvVar2);
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007481d0 @ 007481d0 ////

void __thiscall FUN_007481d0(void *this,int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x34 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x34;
      goto LAB_00748215;
    }
  }
  iVar1 = 0;
LAB_00748215:
  FUN_00747d60(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x34 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00748240 @ 00748240 ////

void __fastcall FUN_00748240(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  if (puVar4 != *(undefined4 **)(param_1 + 0x44)) {
    piVar5 = puVar4 + 2;
    do {
      puVar2 = (undefined4 *)piVar5[3];
      if ((int *)*piVar5 != (int *)0x0) {
        *(int *)*piVar5 = piVar5[-1];
      }
      if (piVar5[-1] != 0) {
        *(int *)(piVar5[-1] + 4) = *piVar5;
      }
      piVar5[-1] = 0;
      *piVar5 = 0;
      puVar3 = (undefined4 *)*puVar4;
      piVar5[3] = 0;
      (*(code *)*puVar3)();
      piVar5[4] = 0;
      (**(code **)(piVar5[5] + 4))();
      piVar5[10] = 0;
      (**(code **)piVar5[5])();
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      puVar4 = puVar4 + 0xd;
      piVar5 = piVar5 + 0xd;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x44));
  }
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x44);
    for (; puVar4 != puVar2; puVar4 = puVar4 + 0xd) {
      FUN_007475f0(puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}


//// FUNCTION FUN_00748300 @ 00748300 ////

/* WARNING: Removing unreachable block (ram,0x007483bf) */

void __fastcall FUN_00748300(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  byte *_Dest;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 *local_28;
  byte local_14 [15];
  undefined1 local_5;
  
  local_28 = *(undefined4 **)(param_1 + 0x40);
  bVar4 = false;
  if (local_28 != *(undefined4 **)(param_1 + 0x44)) {
    piVar8 = local_28 + 2;
    do {
      puVar9 = (undefined4 *)piVar8[3];
      bVar5 = bVar4;
      if (puVar9 == (undefined4 *)0x0) {
LAB_0074843e:
        FUN_00746e00((int)(piVar8 + 0xb),*(int *)(param_1 + 0x44),local_28);
        puVar3 = *(undefined4 **)(param_1 + 0x44);
        for (puVar9 = puVar3 + -0xd; puVar9 != puVar3; puVar9 = puVar9 + 0xd) {
          FUN_007475f0(puVar9);
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -0x34;
        bVar4 = bVar5;
      }
      else {
        _Dest = local_14;
        local_14[0] = 0;
        _strncpy((char *)_Dest,"CResIndependent",0xf);
        local_5 = 0;
        pbVar6 = (byte *)puVar9[0x18];
        do {
          bVar2 = *pbVar6;
          bVar10 = bVar2 < *_Dest;
          if (bVar2 != *_Dest) {
LAB_007483ac:
            iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_007483b1;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar10 = bVar2 < _Dest[1];
          if (bVar2 != _Dest[1]) goto LAB_007483ac;
          pbVar6 = pbVar6 + 2;
          _Dest = _Dest + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_007483b1:
        if ((iVar7 == 0) && (bVar5 = true, bVar4)) {
          if ((int *)*piVar8 != (int *)0x0) {
            *(int *)*piVar8 = piVar8[-1];
          }
          if (piVar8[-1] != 0) {
            *(int *)(piVar8[-1] + 4) = *piVar8;
          }
          piVar8[-1] = 0;
          *piVar8 = 0;
          puVar3 = (undefined4 *)*local_28;
          piVar8[3] = 0;
          (*(code *)*puVar3)();
          piVar8[4] = 0;
          (**(code **)(piVar8[5] + 4))();
          piVar8[10] = 0;
          (**(code **)piVar8[5])();
          piVar1 = puVar9 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(1);
          }
          goto LAB_0074843e;
        }
        local_28 = local_28 + 0xd;
        piVar8 = piVar8 + 0xd;
        bVar4 = bVar5;
      }
    } while (local_28 != *(undefined4 **)(param_1 + 0x44));
  }
  return;
}


//// FUNCTION FUN_007484a0 @ 007484a0 ////

void __thiscall FUN_007484a0(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x34) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x34))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00747a90(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x34;
    return;
  }
  FUN_007481d0(this,&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00748530 @ 00748530 ////

void __fastcall FUN_00748530(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5eb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d4bd6c;
  local_4 = 1;
  FUN_00748240((int)param_1);
  FUN_00747ce0((int)(param_1 + 0xf));
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00748590 @ 00748590 ////

void __thiscall FUN_00748590(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_40 [13];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5ec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00747510(local_40,param_1);
  local_4 = 0;
  FUN_007484a0((void *)((int)this + 0x3c),(int)local_40);
  local_4 = 0xffffffff;
  FUN_007475f0(local_40);
  iVar1 = *(int *)((int)this + 0x44);
  *(undefined **)(iVar1 + -0x1c) = &DAT_00746a90;
  (**(code **)(*(int *)(iVar1 + -0x18) + 4))();
  *(undefined4 *)(iVar1 + -4) = 0;
  (*(code *)**(undefined4 **)(iVar1 + -0x18))();
  FUN_00748300((int)this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00748620 @ 00748620 ////

undefined4 * __thiscall FUN_00748620(void *this,byte param_1)

{
  FUN_00748530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00748640 @ 00748640 ////

undefined4 * __thiscall FUN_00748640(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5ef3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d4bd6c;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x50) = 0xff;
  *(undefined1 *)((int)this + 0x51) = 0xff;
  *(undefined1 *)((int)this + 0x52) = 0xff;
  *(undefined1 *)((int)this + 0x53) = 0xff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x68) = param_1;
  local_4 = 1;
  *(undefined1 *)((int)this + 0x38) = 0;
  FUN_00748070((void *)((int)this + 0x3c),0x14);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00748760 @ 00748760 ////

undefined4 * __fastcall FUN_00748760(undefined4 *param_1)

{
  FUN_00746480(param_1);
  *param_1 = &PTR_FUN_00d4bd74;
  FUN_004015d0(param_1 + 0x18,"CWindowRendererZ",0x10);
  return param_1;
}


//// FUNCTION FUN_00748790 @ 00748790 ////

undefined4 * __thiscall FUN_00748790(void *this,byte param_1)

{
  thunk_FUN_00746640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007487e0 @ 007487e0 ////

int __fastcall FUN_007487e0(int param_1)

{
  if (*(int *)(param_1 + 0x2fc) == 1) {
    return *(int *)(param_1 + 0x2f8) * 5;
  }
  return *(int *)(param_1 + 0x2f8) << 1;
}


//// FUNCTION FUN_00748800 @ 00748800 ////

int __fastcall FUN_00748800(int param_1)

{
  return *(int *)(param_1 + 0x2f8) << 1;
}


//// FUNCTION FUN_00748830 @ 00748830 ////

void __thiscall FUN_00748830(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 0x2fc) = param_1;
  if (param_1 == 1) {
    iVar1 = FUN_0075aa20();
    *(undefined1 *)(iVar1 + 0x74) = 0;
    return;
  }
  iVar1 = FUN_0075aa20();
  *(undefined1 *)(iVar1 + 0x74) = 1;
  return;
}


//// FUNCTION FUN_00748860 @ 00748860 ////

int * __thiscall FUN_00748860(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007488a0 @ 007488a0 ////

int * __thiscall FUN_007488a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007488f0 @ 007488f0 ////

void FUN_007488f0(void)

{
  if (DAT_0104e19c != (undefined4 *)0x0) {
    (**(code **)*DAT_0104e19c)(1);
  }
  (*(code *)DAT_0104e188[1])();
  DAT_0104e19c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00748922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104e188)();
  return;
}


//// FUNCTION FUN_00748930 @ 00748930 ////

void __fastcall FUN_00748930(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x4a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x48]);
  }
  if (0x14 < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x40]);
  }
  if (0x14 < (uint)param_1[0x3a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x38]);
  }
  if (0x14 < (uint)param_1[0x32]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x30]);
  }
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


//// FUNCTION FUN_00748a10 @ 00748a10 ////

void FUN_00748a10(void)

{
  (**(code **)(**(int **)(DAT_0104e184 + 0x370) + 100))(1,DAT_0104e184,0);
  return;
}


//// FUNCTION FUN_00748a30 @ 00748a30 ////

void __fastcall FUN_00748a30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x2fc) != 1);
  *(uint *)(param_1 + 0x2fc) = uVar1;
  if (uVar1 == 1) {
    iVar2 = FUN_0075aa20();
    *(undefined1 *)(iVar2 + 0x74) = 0;
    FUN_0076fbe0(DAT_0104e458);
    return;
  }
  iVar2 = FUN_0075aa20();
  *(undefined1 *)(iVar2 + 0x74) = 1;
  FUN_0076fbe0(DAT_0104e458);
  return;
}


//// FUNCTION FUN_00748a80 @ 00748a80 ////

void FUN_00748a80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104e184;
  if (DAT_0104e184 != (undefined4 *)0x0) {
    iVar1 = DAT_0104e184[0x12];
    DAT_0104e184[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e170[1])();
    DAT_0104e184 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00748ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104e170)();
    return;
  }
  return;
}


//// FUNCTION FUN_00748b80 @ 00748b80 ////

void __fastcall FUN_00748b80(int *param_1)

{
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = 0x14;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0x14;
  param_1[8] = (int)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x14;
  param_1[0x10] = (int)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x14;
  param_1[0x18] = (int)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x14;
  param_1[0x20] = (int)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x14;
  param_1[0x28] = (int)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x14;
  param_1[0x30] = (int)(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x14;
  param_1[0x38] = (int)(param_1 + 0x3b);
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x40] = (int)(param_1 + 0x43);
  param_1[0x41] = 0;
  param_1[0x42] = 0x14;
  param_1[0x48] = (int)(param_1 + 0x4b);
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x14;
  return;
}


//// FUNCTION FUN_00748c80 @ 00748c80 ////

void __thiscall FUN_00748c80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *local_128;
  undefined4 local_124;
  uint local_120;
  char local_11c [23];
  char local_105;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5f84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_4 = 0;
  FUN_0055be10(local_e4,param_1,'\0');
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"titles",6);
  local_124 = 6;
  local_128[6] = '\0';
  local_4._0_1_ = 1;
  uVar1 = FUN_00558a50(local_e4,&local_128,(undefined4 *)0x1);
  local_105 = (char)uVar1;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (local_105 != '\0') {
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"LionheadMovies",0xe);
    local_124 = 0xe;
    local_128[0xe] = '\0';
    local_4._0_1_ = 2;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0(this,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"StudioName",10);
    local_124 = 10;
    local_128[10] = '\0';
    local_4._0_1_ = 3;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x20),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"FilmName",8);
    local_124 = 8;
    local_128[8] = '\0';
    local_4._0_1_ = 4;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x40),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"Starring",8);
    local_124 = 8;
    local_128[8] = '\0';
    local_4._0_1_ = 5;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x60),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"StarringActor",0xd);
    local_124 = 0xd;
    local_128[0xd] = '\0';
    local_4._0_1_ = 6;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x80),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"DirectedBy",10);
    local_124 = 10;
    local_128[10] = '\0';
    local_4._0_1_ = 7;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0xa0),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"Cameraman",9);
    local_124 = 9;
    local_128[9] = '\0';
    local_4._0_1_ = 8;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0xc0),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"Soundman",8);
    local_124 = 8;
    local_128[8] = '\0';
    local_4._0_1_ = 9;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0xe0),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"Clapperman",10);
    local_124 = 10;
    local_128[10] = '\0';
    local_4._0_1_ = 10;
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x100),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"Credits",7);
    local_124 = 7;
    local_128[7] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    puVar2 = FUN_005584e0(local_e4,local_104,&local_128);
    FUN_004015d0((void *)((int)this + 0x120),(char *)*puVar2,puVar2[1]);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007492c0 @ 007492c0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_007492c0(undefined4 *param_1,void *param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint uVar5;
  char *local_116c;
  undefined4 local_1168;
  uint local_1164;
  char local_1160 [20];
  char *local_114c;
  size_t local_1148;
  uint local_1144;
  char local_1140 [20];
  undefined2 *local_112c;
  undefined4 local_1128;
  uint local_1124;
  undefined2 local_1120 [10];
  wchar_t *local_110c;
  undefined4 local_1108;
  uint local_1104;
  wchar_t local_1100 [10];
  undefined2 *local_10ec;
  undefined4 local_10e8;
  uint local_10e4;
  undefined2 local_10e0 [10];
  undefined2 *local_10cc;
  undefined4 local_10c8;
  uint local_10c4;
  undefined2 local_10c0 [10];
  void *local_10ac [2];
  uint local_10a4;
  wchar_t local_108c [64];
  wchar_t local_100c [2046];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5fd2;
  local_c = ExceptionList;
  uStack_10 = 0x7492df;
  local_114c = local_1140;
  local_1140[0] = '\0';
  local_1148 = 0;
  local_1144 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_114c,(char *)*param_1,param_1[1]);
  local_4 = 0;
  pcVar1 = _strrchr(local_114c,0x2e);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  local_116c = local_1160;
  local_1160[0] = '\0';
  local_1168 = 0;
  local_1164 = 0x14;
  local_4._0_1_ = 1;
  FUN_004073f0(&local_116c,"ui/postproc/",0xc);
  FUN_004073f0(&local_116c,local_114c,local_1148);
  FUN_004073f0(&local_116c,".dds",4);
  pvVar2 = FUN_0099bb50(local_116c,0,0,0,'\0');
  if (pvVar2 != (void *)0x0) {
    local_110c = local_1100;
    local_1100[0] = L'\0';
    local_1108 = 0;
    local_1104 = 10;
    local_4._0_1_ = 2;
    puVar3 = FUN_009acf60(local_10ac,&local_116c);
    FUN_0040cae0(&local_110c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_10a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ac[0]);
    }
    local_112c = local_1120;
    local_1120[0] = 0;
    local_1128 = 0;
    local_1124 = 10;
    sVar4 = _swprintf(local_108c,0xd18f7c,*(wchar_t **)((int)pvVar2 + 0x4c));
    FUN_0040cae0(&local_112c,local_108c,sVar4);
    local_10cc = local_10c0;
    local_10c0[0] = 0;
    local_10c8 = 0;
    local_10c4 = 10;
    sVar4 = _swprintf(local_108c,0xd18f7c,*(wchar_t **)((int)pvVar2 + 0x50));
    FUN_0040cae0(&local_10cc,local_108c,sVar4);
    local_10ec = local_10e0;
    local_10e0[0] = 0;
    local_10e8 = 0;
    local_10e4 = 10;
    local_4._0_1_ = 5;
    uVar5 = FUN_00ace02d(L"<img src=%s width=%s height=%s>");
    FUN_004036d0(&local_10ec,L"<img src=%s width=%s height=%s>",uVar5);
    _swprintf(local_100c,(size_t)local_10ec,local_110c,local_112c,local_10cc);
    sVar4 = FUN_00ace02d(local_100c);
    FUN_0040cae0(param_2,local_100c,sVar4);
    FUN_0099b400(pvVar2);
    if (10 < local_10e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ec);
    }
    if (10 < local_10c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10cc);
    }
    if (10 < local_1124) {
                    /* WARNING: Subroutine does not return */
      _free(local_112c);
    }
    if (10 < local_1104) {
                    /* WARNING: Subroutine does not return */
      _free(local_110c);
    }
  }
  if (0x14 < local_1164) {
                    /* WARNING: Subroutine does not return */
    _free(local_116c);
  }
  if (0x14 < local_1144) {
                    /* WARNING: Subroutine does not return */
    _free(local_114c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007495d0 @ 007495d0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_007495d0(void *this,undefined4 *param_1,void *param_2)

{
  char *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  wchar_t *_Format;
  size_t sVar5;
  uint uVar6;
  wchar_t *local_11f0;
  char *local_11ec;
  size_t local_11e8;
  uint local_11e4;
  char local_11e0 [20];
  char *local_11cc;
  undefined4 local_11c8;
  uint local_11c4;
  char local_11c0 [20];
  char *local_11ac;
  undefined4 local_11a8;
  uint local_11a4;
  char local_11a0 [20];
  undefined2 *local_118c;
  undefined4 local_1188;
  uint local_1184;
  undefined2 local_1180 [10];
  undefined2 *local_116c;
  undefined4 local_1168;
  uint local_1164;
  undefined2 local_1160 [10];
  wchar_t *local_114c;
  undefined4 local_1148;
  uint local_1144;
  wchar_t local_1140 [10];
  wchar_t *local_112c;
  undefined4 local_1128;
  uint local_1124;
  wchar_t local_1120 [10];
  undefined2 *local_110c;
  undefined4 local_1108;
  uint local_1104;
  undefined2 local_1100 [10];
  undefined2 *local_10ec;
  undefined4 local_10e8;
  uint local_10e4;
  undefined2 local_10e0 [10];
  undefined2 *local_10cc;
  undefined4 local_10c8;
  uint local_10c4;
  undefined2 local_10c0 [10];
  void *local_10ac [2];
  uint local_10a4;
  wchar_t local_108c [64];
  wchar_t local_100c [2046];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd604e;
  local_c = ExceptionList;
  uStack_10 = 0x7495ef;
  local_11ec = local_11e0;
  local_11e0[0] = '\0';
  local_11e8 = 0;
  local_11e4 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_11ec,(char *)*param_1,param_1[1]);
  local_4 = 0;
  pcVar1 = _strrchr(local_11ec,0x2e);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  local_11ac = local_11a0;
  local_11a0[0] = '\0';
  local_11a8 = 0;
  local_11a4 = 0x14;
  FUN_004073f0(&local_11ac,"ui/postproc/",0xc);
  FUN_004073f0(&local_11ac,local_11ec,local_11e8);
  FUN_004073f0(&local_11ac,".dds",4);
  FUN_004015d0(&local_11ec,*(char **)this,*(uint *)((int)this + 4));
  pcVar1 = _strrchr(local_11ec,0x2e);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  local_11cc = local_11c0;
  local_11c0[0] = '\0';
  local_11c8 = 0;
  local_11c4 = 0x14;
  local_4._0_1_ = 2;
  FUN_004073f0(&local_11cc,"ui/postproc/",0xc);
  FUN_004073f0(&local_11cc,local_11ec,local_11e8);
  FUN_004073f0(&local_11cc,".dds",4);
  pvVar2 = FUN_0099bb50(local_11ac,0,0,0,'\0');
  if ((pvVar2 != (void *)0x0) &&
     (pvVar3 = FUN_0099bb50(local_11cc,0,0,0,'\0'), pvVar3 != (void *)0x0)) {
    local_112c = local_1120;
    local_1120[0] = L'\0';
    local_1128 = 0;
    local_1124 = 10;
    local_114c = local_1140;
    local_1140[0] = L'\0';
    local_1148 = 0;
    local_1144 = 10;
    local_4._0_1_ = 4;
    puVar4 = FUN_009acf60(local_10ac,&local_11ac);
    FUN_0040cae0(&local_112c,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < local_10a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ac[0]);
    }
    puVar4 = FUN_009acf60(local_10ac,&local_11cc);
    FUN_0040cae0(&local_114c,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < local_10a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ac[0]);
    }
    _Format = *(wchar_t **)((int)pvVar2 + 0x4c);
    if ((wchar_t *)0xfa < _Format) {
      _Format = (wchar_t *)0xfa;
    }
    local_11f0 = *(wchar_t **)((int)pvVar3 + 0x4c);
    if ((wchar_t *)0xfa < local_11f0) {
      local_11f0 = (wchar_t *)0xfa;
    }
    local_10cc = local_10c0;
    local_10c0[0] = 0;
    local_10c8 = 0;
    local_10c4 = 10;
    sVar5 = _swprintf(local_108c,0xd18f7c,_Format);
    FUN_0040cae0(&local_10cc,local_108c,sVar5);
    local_110c = local_1100;
    local_1100[0] = 0;
    local_1108 = 0;
    local_1104 = 10;
    sVar5 = _swprintf(local_108c,0xd18f7c,*(wchar_t **)((int)pvVar2 + 0x50));
    FUN_0040cae0(&local_110c,local_108c,sVar5);
    local_116c = local_1160;
    local_1160[0] = 0;
    local_1168 = 0;
    local_1164 = 10;
    sVar5 = _swprintf(local_108c,0xd18f7c,local_11f0);
    FUN_0040cae0(&local_116c,local_108c,sVar5);
    local_10ec = local_10e0;
    local_10e0[0] = 0;
    local_10e8 = 0;
    local_10e4 = 10;
    sVar5 = _swprintf(local_108c,0xd18f7c,*(wchar_t **)((int)pvVar3 + 0x50));
    FUN_0040cae0(&local_10ec,local_108c,sVar5);
    local_118c = local_1180;
    local_1180[0] = 0;
    local_1188 = 0;
    local_1184 = 10;
    local_4._0_1_ = 9;
    uVar6 = FUN_00ace02d(L"<img src=%s width=%s height=%s>");
    FUN_004036d0(&local_118c,L"<img src=%s width=%s height=%s>",uVar6);
    _swprintf(local_100c,(size_t)local_118c,local_112c,local_10cc,local_110c);
    sVar5 = FUN_00ace02d(local_100c);
    FUN_0040cae0(param_2,local_100c,sVar5);
    uVar6 = FUN_00ace02d(L"<img src=%s width=%s height=%s>");
    FUN_004036d0(&local_118c,L"<img src=%s width=%s height=%s>",uVar6);
    _swprintf(local_100c,(size_t)local_118c,local_114c,local_116c,local_10ec);
    sVar5 = FUN_00ace02d(local_100c);
    FUN_0040cae0(param_2,local_100c,sVar5);
    FUN_0099b400(pvVar2);
    FUN_0099b400(pvVar3);
    if (10 < local_1184) {
                    /* WARNING: Subroutine does not return */
      _free(local_118c);
    }
    if (10 < local_10e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ec);
    }
    if (10 < local_1164) {
                    /* WARNING: Subroutine does not return */
      _free(local_116c);
    }
    if (10 < local_1104) {
                    /* WARNING: Subroutine does not return */
      _free(local_110c);
    }
    if (10 < local_10c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10cc);
    }
    if (10 < local_1144) {
                    /* WARNING: Subroutine does not return */
      _free(local_114c);
    }
    if (10 < local_1124) {
                    /* WARNING: Subroutine does not return */
      _free(local_112c);
    }
  }
  if (0x14 < local_11c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_11cc);
  }
  if (local_11a4 < 0x15) {
    if (local_11e4 < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_11ec);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_11ac);
}


//// FUNCTION FUN_00749b80 @ 00749b80 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00749b80(int param_1)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_104c [4];
  wchar_t *pwVar6;
  wchar_t *local_1020;
  undefined4 local_101c;
  uint local_1018;
  wchar_t local_1014 [10];
  wchar_t local_1000 [2046];
  undefined4 uStack_4;
  
  uStack_4 = 0x749b8a;
  puVar4 = (undefined4 *)(param_1 + 0x38);
  puVar5 = auStack_104c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _swprintf(local_1000,0xd4bfc8,(wchar_t *)0x12);
  sVar1 = FUN_00ace02d(local_1000);
  FUN_0040cae0((void *)(param_1 + 0x300),local_1000,sVar1);
  local_1020 = local_1014;
  local_1014[0] = L'\0';
  local_101c = 0;
  local_1018 = 10;
  if (*(int *)(DAT_0104e4a8 + 0x11c) < 0x7a8) {
    uVar2 = FUN_00ace02d(L"certificate_0.dds");
    pwVar6 = L"certificate_0.dds";
  }
  else {
    uVar2 = FUN_00ace02d(L"certificate_1.dds");
    pwVar6 = L"certificate_1.dds";
  }
  FUN_004036d0(&local_1020,pwVar6,uVar2);
  _swprintf(local_1000,0xd4be80,local_1020);
  auStack_104c[3] = 0x749c4a;
  uVar2 = FUN_00ace02d(local_1000);
  FUN_004036d0((void *)(param_1 + 800),local_1000,uVar2);
  if (10 < local_1018) {
                    /* WARNING: Subroutine does not return */
    _free(local_1020);
  }
  return;
}


//// FUNCTION FUN_00749c80 @ 00749c80 ////

void __fastcall FUN_00749c80(int param_1)

{
  wchar_t *local_20;
  size_t local_1c;
  uint local_18;
  
  FUN_009acf60(&local_20,(undefined4 *)(param_1 + 0x1b8));
  FUN_0040cae0((void *)(param_1 + 0x300),local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return;
}


//// FUNCTION FUN_00749cd0 @ 00749cd0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00749cd0(int param_1)

{
  size_t sVar1;
  void *local_1020 [2];
  uint local_1018;
  wchar_t local_1000 [2046];
  undefined4 uStack_4;
  
  uStack_4 = 0x749cda;
  FUN_009acf60(local_1020,(undefined4 *)(param_1 + 0x1d8));
  _swprintf(local_1000,(size_t)local_1020[0],*(wchar_t **)(param_1 + 0x58));
  sVar1 = FUN_00ace02d(local_1000);
  FUN_0040cae0((void *)(param_1 + 0x300),local_1000,sVar1);
  if (10 < local_1018) {
                    /* WARNING: Subroutine does not return */
    _free(local_1020[0]);
  }
  return;
}


//// FUNCTION FUN_00749d40 @ 00749d40 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00749d40(int param_1)

{
  void *_Count;
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  wchar_t *in_stack_ffffefb4;
  void *local_1020 [2];
  uint local_1018;
  wchar_t local_1000 [2046];
  undefined4 uStack_4;
  
  uStack_4 = 0x749d4a;
  FUN_009acf60(local_1020,(undefined4 *)(param_1 + 0x1f8));
  _Count = local_1020[0];
  puVar3 = (undefined4 *)(param_1 + 0x38);
  puVar4 = (undefined4 *)&stack0xffffefb4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _swprintf(local_1000,(size_t)_Count,in_stack_ffffefb4);
  sVar1 = FUN_00ace02d(local_1000);
  FUN_0040cae0((void *)(param_1 + 0x300),local_1000,sVar1);
  if (10 < local_1018) {
                    /* WARNING: Subroutine does not return */
    _free(local_1020[0]);
  }
  return;
}


//// FUNCTION FUN_00749dc0 @ 00749dc0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00749dc0(int param_1)

{
  uint _Count;
  wchar_t *_Source;
  undefined4 *puVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int local_1050;
  wchar_t *local_104c;
  size_t local_1048;
  uint local_1044;
  void *local_102c [2];
  uint local_1024;
  wchar_t local_100c [2046];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd606b;
  local_c = ExceptionList;
  uStack_10 = 0x749ddf;
  ExceptionList = &local_c;
  FUN_009acf60(&local_104c,(undefined4 *)(param_1 + 0x218));
  local_4 = 0;
  FUN_0040cae0((void *)(param_1 + 0x300),local_104c,local_1048);
  puVar3 = (undefined4 *)(param_1 + 0xf8);
  local_1050 = 3;
  do {
    if (puVar3[-0x17] != 0) {
      puVar1 = FUN_009acf60(local_102c,(undefined4 *)(param_1 + 0x238));
      _Count = puVar1[1];
      _Source = (wchar_t *)*puVar1;
      if (local_1044 <= _Count) {
        if (10 < local_1044) {
                    /* WARNING: Subroutine does not return */
          _free(local_104c);
        }
        local_1044 = _Count + 0x20 & 0xffffffe0;
        local_104c = _malloc(local_1044 * 2);
      }
      _wcsncpy(local_104c,_Source,_Count);
      local_104c[_Count] = L'\0';
      local_1048 = _Count;
      if (10 < local_1024) {
                    /* WARNING: Subroutine does not return */
        _free(local_102c[0]);
      }
      _swprintf(local_100c,(size_t)local_104c,(wchar_t *)puVar3[-0x18],*puVar3);
      sVar2 = FUN_00ace02d(local_100c);
      FUN_0040cae0((void *)(param_1 + 0x300),local_100c,sVar2);
    }
    puVar3 = puVar3 + 8;
    local_1050 = local_1050 + -1;
    if (local_1050 == 0) {
      if (10 < local_1044) {
                    /* WARNING: Subroutine does not return */
        _free(local_104c);
      }
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00749f40 @ 00749f40 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00749f40(int param_1)

{
  void *_Count;
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  wchar_t *in_stack_ffffefb4;
  void *local_1020 [2];
  uint local_1018;
  wchar_t local_1000 [2046];
  undefined4 uStack_4;
  
  uStack_4 = 0x749f4a;
  FUN_009acf60(local_1020,(undefined4 *)(param_1 + 600));
  _Count = local_1020[0];
  puVar3 = (undefined4 *)(param_1 + 0x78);
  puVar4 = (undefined4 *)&stack0xffffefb4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _swprintf(local_1000,(size_t)_Count,in_stack_ffffefb4);
  sVar1 = FUN_00ace02d(local_1000);
  FUN_0040cae0((void *)(param_1 + 0x300),local_1000,sVar1);
  if (10 < local_1018) {
                    /* WARNING: Subroutine does not return */
    _free(local_1020[0]);
  }
  return;
}


//// FUNCTION FUN_00749fc0 @ 00749fc0 ////

void __thiscall FUN_00749fc0(void *this,int param_1)

{
  void *this_00;
  size_t sVar1;
  void *unaff_EBP;
  float local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  void *pvStack_98;
  uint uStack_90;
  undefined1 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [8];
  void *pvStack_78;
  uint uStack_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  void *pvStack_58;
  uint uStack_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  void *pvStack_38;
  uint uStack_30;
  wchar_t *local_2c;
  size_t local_28;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd60ae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009acf60(&local_2c,(undefined4 *)((int)this + 0x2d8));
  this_00 = (void *)((int)this + 0x300);
  local_4 = 0;
  FUN_0040cae0(this_00,local_2c,local_28);
  sVar1 = FUN_00ace02d(L"<Br><TABLE><TR><TD HEIGHT = 10></TD></TR></TABLE><Br>");
  FUN_0040cae0(this_00,L"<Br><TABLE><TR><TD HEIGHT = 10></TD></TR></TABLE><Br>",sVar1);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,*(char **)(DAT_0104e4a8 + 0x16c),*(uint *)(DAT_0104e4a8 + 0x170));
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 0x14;
  FUN_004015d0(&local_8c,*(char **)(DAT_0104e4a8 + 0x1ac),*(uint *)(DAT_0104e4a8 + 0x1b0));
  local_4._0_1_ = 2;
  FUN_007495d0(&local_8c,&local_6c,this_00);
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  FUN_004015d0(&local_ac,*(char **)(DAT_0104e4a8 + 300),*(uint *)(DAT_0104e4a8 + 0x130));
  local_4._0_1_ = 3;
  FUN_007492c0(&local_ac,this_00);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,*(char **)(DAT_0104e4a8 + 0x14c),*(uint *)(DAT_0104e4a8 + 0x150));
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_007492c0(&local_4c,this_00);
  local_b0 = 200.0 - ((float)param_1 / (float)(*(int *)((int)this + 0x2f8) << 1)) * 500.0;
  if (local_b0 < -32.0) {
    local_b0 = -32.0;
  }
  (**(code **)(**(int **)(DAT_0104e184 + 0x370) + 100))(1,DAT_0104e184,local_b0);
  if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_58);
  }
  if (0x14 < (uint)local_b0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_78);
  }
  if (10 < uStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_38);
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_0074a220 @ 0074a220 ////

void __thiscall FUN_0074a220(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4c0a8;
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


//// FUNCTION FUN_0074a270 @ 0074a270 ////

void __fastcall FUN_0074a270(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4c0a8;
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


//// FUNCTION FUN_0074a2c0 @ 0074a2c0 ////

void __thiscall FUN_0074a2c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4c0b8;
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


//// FUNCTION FUN_0074a310 @ 0074a310 ////

void __fastcall FUN_0074a310(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4c0b8;
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


//// FUNCTION FUN_0074a360 @ 0074a360 ////

void __cdecl
FUN_0074a360(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    pbVar2 = (byte *)*param_2;
    pbVar4 = (byte *)*param_4;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0074a3a4:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0074a3a9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0074a3a4;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0074a3a9:
    if ((iVar3 == 0) || (param_2 = param_2 + 8, param_2 == param_3)) {
      *param_1 = param_2;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0074a3d0 @ 0074a3d0 ////

void __fastcall FUN_0074a3d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)param_1[0xdb];
  puVar2 = (undefined4 *)param_1[0xda];
  local_4 = param_1;
  FUN_0074a360(&local_4,puVar2,puVar1,param_1 + 0x66);
  if ((local_4 == puVar1) || (puVar3 = local_4 + 8, local_4 + 8 == puVar1)) {
    puVar3 = puVar2;
  }
  FUN_004015d0(param_1 + 0x66,(char *)*puVar3,puVar3[1]);
  FUN_00773420(DAT_0104e478);
  *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  return;
}


//// FUNCTION FUN_0074a440 @ 0074a440 ////

undefined4 * __thiscall FUN_0074a440(void *this,undefined4 *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  char *local_70;
  size_t local_6c;
  uint local_68;
  undefined4 local_50;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd60d3;
  local_c = ExceptionList;
  local_50 = 0;
  ExceptionList = &local_c;
  FUN_00430770((undefined4 *)((int)this + 0x198),&local_70,0,*(int *)((int)this + 0x19c) - 4);
  local_4 = 0;
  FUN_004073f0(&local_70,"_",1);
  sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(&local_70,local_4c,sVar1);
  FUN_004073f0(&local_70,".dds",4);
  local_90 = local_84;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x40;
  local_90 = _malloc(0x40);
  _strncpy(local_90,"data/textures/ui/postproc/backdrops/",0x24);
  local_8c = 0x24;
  local_90[0x24] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004073f0(&local_90,local_70,local_6c);
  uVar2 = FUN_009d3660(&local_90,(uint *)0x0);
  if ((char)uVar2 == '\0') {
    FUN_00568790(param_1,(undefined4 *)((int)this + 0x198));
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
  }
  else {
    FUN_00568790(param_1,&local_70);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
  }
  if (local_68 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_70);
}


//// FUNCTION FUN_0074a5d0 @ 0074a5d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074a5d0(void *param_1)

{
  void *this;
  void *this_00;
  float fVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint unaff_EBX;
  void *unaff_ESI;
  int iStack_8;
  int iStack_4;
  
  *(undefined4 *)((int)param_1 + 0x304) = 0;
  **(undefined2 **)((int)param_1 + 0x300) = 0;
  this = (void *)((int)param_1 + 0x300);
  this_00 = (void *)((int)param_1 + 800);
  *(undefined4 *)((int)param_1 + 0x324) = 0;
  **(undefined2 **)((int)param_1 + 800) = 0;
  (**(code **)(*(int *)DAT_0104e184[0xdc] + 100))(1,DAT_0104e184,0);
  sVar2 = FUN_00ace02d(L"<TABLE><TR><TD HEIGHT=512 width=512 align=center valign=middle>");
  FUN_0040cae0(this,L"<TABLE><TR><TD HEIGHT=512 width=512 align=center valign=middle>",sVar2);
  if (iStack_8 == 6) {
    _DAT_010b95b0 = 1.0;
    DAT_00e68fa4 = 0x3f800000;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x2f8) + -400;
    if (iStack_4 < 400) {
      _DAT_010b95b0 = (float)iStack_4 * 0.0025;
    }
    else if (iVar3 < iStack_4) {
      _DAT_010b95b0 = 1.0 - (float)(iStack_4 - iVar3) * 0.0025;
    }
  }
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar4);
  sVar2 = FUN_00ace02d(
                      L"<TABLE><TR><TD HEIGHT=512 width=512 align=center valign=middle><img src=ui\\postproc\\backdrops\\"
                      );
  FUN_0040cae0(this_00,
               L"<TABLE><TR><TD HEIGHT=512 width=512 align=center valign=middle><img src=ui\\postproc\\backdrops\\"
               ,sVar2);
  puVar5 = FUN_0074a440(param_1,(undefined4 *)&stack0xffffffd4,iStack_8);
  FUN_0040cae0(this_00,(wchar_t *)*puVar5,puVar5[1]);
  sVar2 = FUN_00ace02d(L" width=512 height=288></TD></TR></TABLE>");
  FUN_0040cae0(this_00,L" width=512 height=288></TD></TR></TABLE>",sVar2);
  if (unaff_EBX < 0xb) {
    switch(iStack_8) {
    case 0:
      FUN_00749b80((int)param_1);
      break;
    case 1:
      FUN_00749c80((int)param_1);
      break;
    case 2:
      FUN_00749cd0((int)param_1);
      break;
    case 3:
      FUN_00749d40((int)param_1);
      break;
    case 4:
      FUN_00749dc0((int)param_1);
      break;
    case 5:
      FUN_00749f40((int)param_1);
      break;
    case 6:
      FUN_00749fc0(param_1,iStack_4);
    }
    sVar2 = FUN_00ace02d(L"</TD></TR></TABLE>");
    FUN_0040cae0(this,L"</TD></TR></TABLE>",sVar2);
    *(float *)(DAT_0104e184[0xd6] + 0x354) = (float)DAT_00e67b84;
    (**(code **)(*(int *)DAT_0104e184[0xd6] + 0x54))(this_00);
    (**(code **)(*(int *)DAT_0104e184[0xd6] + 0x84))(0);
    *(float *)(DAT_0104e184[0xdc] + 0x354) = (float)DAT_00e67b84;
    (**(code **)(*(int *)DAT_0104e184[0xdc] + 0x54))(this);
    (**(code **)(*(int *)DAT_0104e184[0xdc] + 0x84))(0);
    (**(code **)(*(int *)DAT_0104e184[0xd6] + 0x20))(1);
    (**(code **)(*(int *)DAT_0104e184[0xdc] + 0x20))(1);
    (**(code **)(*DAT_0104e184 + 0x20))(1);
    fVar1 = (float)*(int *)((int)param_1 + 0x340);
    if (*(int *)((int)param_1 + 0x340) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = fVar1 * 0.001953125;
    (**(code **)(*(int *)DAT_0104e184[0xdd] + 0x34))(fVar1,fVar1,&LAB_00989680);
    (**(code **)(*(int *)DAT_0104e184[0xde] + 0x34))(fVar1,fVar1,&LAB_00989680);
    (**(code **)(*DAT_0104e184 + 0x28))();
    FUN_009a1410();
    (**(code **)(*DAT_0104e184 + 0x2c))();
    FUN_009a1460();
    (**(code **)(*(int *)DAT_0104e184[0xd6] + 0x20))(0);
    (**(code **)(*(int *)DAT_0104e184[0xdc] + 0x20))(0);
    (**(code **)(*DAT_0104e184 + 0x20))(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}


//// FUNCTION FUN_0074a900 @ 0074a900 ////

/* WARNING: Removing unreachable block (ram,0x0074aade) */

undefined4 * __fastcall FUN_0074a900(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6130;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_007432f0(param_1);
  piVar5 = param_1 + 0xd1;
  *param_1 = &PTR_FUN_00d4c2a4;
  param_1[0x14] = &PTR_FUN_00d4c28c;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = piVar5;
  *piVar5 = (int)&PTR_FUN_00d195f8;
  param_1[0xd6] = 0;
  piVar1 = param_1 + 0xd7;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d195f8;
  param_1[0xdc] = 0;
  pvVar7 = (void *)0x0;
  local_4 = 2;
  iVar2 = FUN_0071b2a0();
  FUN_00741d80(param_1,iVar2,pvVar7);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xc))(param_1,2);
  puVar4 = operator_new(0x3fc);
  uStack_c._0_1_ = 3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00833290(puVar4);
  }
  uStack_c = CONCAT31(uStack_c._1_3_,2);
  (**(code **)(*piVar5 + 4))();
  param_1[0xd6] = puVar4;
  (**(code **)*piVar5)();
  (**(code **)(*(int *)param_1[0xd6] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0xd6] + 100))(1,param_1);
  FUN_0073f6e0(param_1,(int *)param_1[0xd6]);
  puVar4 = operator_new(0x3fc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00833290(puVar4);
  }
  (**(code **)(*piVar1 + 4))();
  param_1[0xdc] = puVar4;
  (**(code **)*piVar1)();
  (**(code **)(*(int *)param_1[0xdc] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0xdc] + 100))(1,param_1,0);
  FUN_0073f6e0(param_1,(int *)param_1[0xdc]);
  (**(code **)(*(int *)param_1[0xd6] + 0x20))(0);
  uVar6 = 0;
  (**(code **)(*(int *)param_1[0xdc] + 0x20))();
  FUN_00748240(*(int *)(param_1[0xd6] + 0x2d4));
  pvVar7 = operator_new(0xdc);
  if (pvVar7 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00745990(pvVar7,&LAB_00989680,(int)param_1,1);
  }
  param_1[0xdd] = piVar5;
  (**(code **)(*piVar5 + 0x34))(0,0,&LAB_00989680);
  FUN_0073e510((void *)param_1[0xd6],param_1[0xdd]);
  FUN_00748240(*(int *)(param_1[0xdc] + 0x2d4));
  pvVar7 = operator_new(0xdc);
  if (pvVar7 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00745990(pvVar7,&LAB_00989680,(int)param_1,1);
  }
  param_1[0xde] = piVar5;
  (**(code **)(*piVar5 + 0x34))(0,0,&LAB_00989680);
  FUN_0073e510((void *)param_1[0xdc],param_1[0xde]);
  (*(code *)DAT_0104e170[1])();
  DAT_0104e184 = param_1;
  (*(code *)*DAT_0104e170)();
  *unaff_FS_OFFSET = uVar6;
  return param_1;
}


//// FUNCTION FUN_0074abc0 @ 0074abc0 ////

void __fastcall FUN_0074abc0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6164;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4c2a4;
  param_1[0x14] = &PTR_FUN_00d4c28c;
  puVar2 = (undefined4 *)param_1[0xdc];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = 0;
    (**(code **)param_1[0xd7])();
  }
  puVar2 = (undefined4 *)param_1[0xd6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xd1] + 4))();
    param_1[0xd6] = 0;
    (**(code **)param_1[0xd1])();
  }
  (*(code *)DAT_0104e170[1])();
  DAT_0104e184 = 0;
  (*(code *)*DAT_0104e170)();
  param_1[0xd7] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d195f8;
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


//// FUNCTION FUN_0074ad80 @ 0074ad80 ////

void __fastcall FUN_0074ad80(int param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *_Dest;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_28;
  int local_24;
  uint local_18;
  byte local_14 [20];
  
  local_28 = 0;
  local_24 = 0;
  do {
    if ((*(int *)(param_1 + 0x368) == 0) ||
       ((uint)(*(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x368) >> 5) <= local_28))
    goto LAB_0074afbe;
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x368) + local_24);
    _Dest = local_14;
    local_14[0] = 0;
    local_18 = 0x14;
    uVar2 = puVar8[1];
    pcVar3 = (char *)*puVar8;
    if (0x13 < uVar2) {
      local_18 = uVar2 + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_18);
    }
    _strncpy((char *)_Dest,pcVar3,uVar2);
    _Dest[uVar2] = 0;
    pbVar9 = *(byte **)(param_1 + 0x198);
    pbVar4 = _Dest;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_0074ae54:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0074ae59;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_0074ae54;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0074ae59:
    if (iVar5 == 0) {
      if (local_28 == 0) {
        if (*(int *)(param_1 + 0x368) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x36c) - *(int *)(param_1 + 0x368) >> 5;
        }
        iVar5 = (iVar5 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x368));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x368));
        if (*(uint *)(param_1 + 0x1a0) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x1a0)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x198));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x1a0) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x198) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x198),pcVar3,uVar2);
        *(uint *)(param_1 + 0x19c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x198)) = 0;
      }
      else {
        iVar5 = (local_28 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x368));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x368));
        if (*(uint *)(param_1 + 0x1a0) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x1a0)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x198));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x1a0) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x198) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x198),pcVar3,uVar2);
        *(uint *)(param_1 + 0x19c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x198)) = 0;
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
LAB_0074afbe:
      FUN_00773420(DAT_0104e478);
      *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
      return;
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 0x20;
  } while( true );
}


//// FUNCTION FUN_0074afe0 @ 0074afe0 ////

undefined4 * __thiscall FUN_0074afe0(void *this,byte param_1)

{
  FUN_0074abc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074b000 @ 0074b000 ////

undefined4 * __fastcall FUN_0074b000(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6239;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d4c3a4;
  param_1[0xe] = param_1 + 0x11;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 10;
  param_1[0x16] = param_1 + 0x19;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 10;
  param_1[0x1e] = param_1 + 0x21;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 10;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x26,0x20,3,FUN_00403e50,FUN_00403650);
  local_4 = CONCAT31(local_4._1_3_,4);
  _eh_vector_constructor_iterator_(param_1 + 0x3e,0x20,3,FUN_00403e50,FUN_00403650);
  param_1[0x56] = param_1 + 0x59;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x14;
  param_1[0x5e] = param_1 + 0x61;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x14;
  param_1[0x66] = param_1 + 0x69;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0x14;
  FUN_00748b80(param_1 + 0x6e);
  param_1[0xbe] = 3000;
  param_1[0xbf] = 1;
  param_1[0xc0] = param_1 + 0xc3;
  *(undefined2 *)(param_1 + 0xc3) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 10;
  param_1[200] = param_1 + 0xcb;
  *(undefined2 *)(param_1 + 0xcb) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 10;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0074b1a0 @ 0074b1a0 ////

undefined4 * __thiscall FUN_0074b1a0(void *this,byte param_1)

{
  FUN_0074b1c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074b1c0 @ 0074b1c0 ////

void __fastcall FUN_0074b1c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6291;
  local_c = ExceptionList;
  local_4 = 4;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_00405fe0((undefined4 *)param_1[0xda],(undefined4 *)param_1[0xdb]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xda]);
  }
  ExceptionList = &local_c;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd6] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0xd6],(undefined4 *)param_1[0xd7]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd6]);
  }
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0xd2],(undefined4 *)param_1[0xd3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  if (10 < (uint)param_1[0xca]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[200]);
  }
  if (10 < (uint)param_1[0xc2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc0]);
  }
  FUN_00748930(param_1 + 0x6e);
  if (0x14 < (uint)param_1[0x68]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x66]);
  }
  if (0x14 < (uint)param_1[0x60]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5e]);
  }
  if (0x14 < (uint)param_1[0x58]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x56]);
  }
  _eh_vector_destructor_iterator_(param_1 + 0x3e,0x20,3,FUN_00403650);
  local_4 = CONCAT31(local_4._1_3_,3);
  _eh_vector_destructor_iterator_(param_1 + 0x26,0x20,3,FUN_00403650);
  if (10 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  if (10 < (uint)param_1[0x18]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  if (10 < (uint)param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0074b390 @ 0074b390 ////

undefined4 * FUN_0074b390(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd62ab;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104e19c == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x374);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0074b000(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104e188[1])();
    DAT_0104e19c = puVar2;
    (*(code *)*DAT_0104e188)();
  }
  ExceptionList = local_c;
  return DAT_0104e19c;
}


//// FUNCTION FUN_0074b420 @ 0074b420 ////

uint __fastcall FUN_0074b420(int *param_1)

{
  int iVar1;
  char **ppcVar2;
  char *local_b0;
  undefined4 local_ac;
  uint local_a8;
  char local_a4 [20];
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd63b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0074b390();
  local_a8 = iVar1 + 0x158;
  if (*(int *)(iVar1 + 0x15c) != 0) {
    iVar1 = FUN_0074b390();
    local_a8 = iVar1 + 0x178;
    if (*(int *)(iVar1 + 0x17c) != 0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 0;
      _strncpy(local_2c,"postproc/titles",0xf);
      ppcVar2 = &local_2c;
      local_28 = 0xf;
      local_2c[0xf] = '\0';
      iVar1 = FUN_0074b390();
      FUN_00748c80((void *)(iVar1 + 0x1b8),ppcVar2);
      iVar1 = FUN_0074b390();
      local_70 = local_64;
      local_64[0] = 0;
      local_6c = 0;
      local_68 = 0x14;
      FUN_004015d0(&local_70,*(char **)(iVar1 + 0x158),*(uint *)(iVar1 + 0x15c));
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_4._0_1_ = 2;
      FUN_00569860(param_1,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_40 = param_1 + 8;
      local_4._0_1_ = 3;
      FUN_00569860(local_40,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_44 = param_1 + 0x10;
      local_4._0_1_ = 4;
      FUN_00569860(local_44,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_3c = param_1 + 0x18;
      local_4._0_1_ = 5;
      FUN_00569860(local_3c,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_34 = param_1 + 0x20;
      local_4._0_1_ = 6;
      FUN_00569860(local_34,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_48 = param_1 + 0x28;
      local_4._0_1_ = 7;
      FUN_00569860(local_48,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_38 = param_1 + 0x30;
      local_4._0_1_ = 8;
      FUN_00569860(local_38,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_50 = param_1 + 0x38;
      local_4._0_1_ = 9;
      FUN_00569860(local_50,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_30 = param_1 + 0x40;
      local_4._0_1_ = 10;
      FUN_00569860(local_30,&local_b0,&local_70);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTFACE*",10);
      local_ac = 10;
      local_b0[10] = '\0';
      local_4c = param_1 + 0x48;
      local_4._0_1_ = 0xb;
      FUN_00569860(local_4c,&local_b0,&local_70);
      local_4._0_1_ = 1;
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      iVar1 = FUN_0074b390();
      local_90 = local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      FUN_004015d0(&local_90,*(char **)(iVar1 + 0x178),*(uint *)(iVar1 + 0x17c));
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0xd;
      FUN_00569860(param_1,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0xe;
      FUN_00569860(local_40,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0xf;
      FUN_00569860(local_44,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x10;
      FUN_00569860(local_3c,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x11;
      FUN_00569860(local_34,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x12;
      FUN_00569860(local_48,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x13;
      FUN_00569860(local_38,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x14;
      FUN_00569860(local_50,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4._0_1_ = 0x15;
      FUN_00569860(local_30,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy(local_b0,"*FONTCOLOR*",0xb);
      local_ac = 0xb;
      local_b0[0xb] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0x16);
      FUN_00569860(local_4c,&local_b0,&local_90);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      if (DAT_0104e4a8 != 0) {
        *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
      }
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  ExceptionList = local_c;
  return local_a8;
}


//// FUNCTION FUN_0074bdb0 @ 0074bdb0 ////

void __fastcall FUN_0074bdb0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint _Count;
  uint uVar10;
  char *_Source;
  undefined4 *unaff_FS_OFFSET;
  char *local_17c;
  uint local_178;
  uint local_174;
  char local_170 [20];
  int local_15c;
  char *local_158;
  undefined4 local_154;
  uint local_150;
  char local_14c [20];
  undefined4 local_138 [18];
  int local_f0;
  int local_ec;
  undefined4 local_e4 [54];
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6428;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_158 = local_14c;
  local_14c[0] = '\0';
  local_154 = 0;
  local_150 = 0x14;
  local_15c = param_1;
  _strncpy(local_158,"postproc/titles",0xf);
  local_154 = 0xf;
  local_158[0xf] = '\0';
  local_4 = 0;
  FUN_00559fb0(local_e4);
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_158,'\0');
  local_17c = local_170;
  local_170[0] = '\0';
  local_178 = 0;
  local_174 = 0x14;
  _strncpy(local_17c,"colors",6);
  local_178 = 6;
  local_17c[6] = '\0';
  local_4._0_1_ = 2;
  uVar5 = FUN_00558a50(local_e4,&local_17c,(undefined4 *)0x1);
  local_4._0_1_ = 1;
  if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
    _free(local_17c);
  }
  if ((char)uVar5 != '\0') {
    puVar6 = FUN_00558de0(local_e4,&local_17c);
    if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
      _free(local_17c);
    }
    if (puVar6[1] != 0) {
      do {
        FUN_00558590(local_e4,&local_17c,4);
        local_4._0_1_ = 3;
        if (local_178 != 0) {
          FUN_0043a2d0((void *)(param_1 + 0x354),&local_17c);
        }
        local_4._0_1_ = 1;
        if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
          _free(local_17c);
        }
        uVar5 = FUN_00558120(local_e4,2);
      } while ((char)uVar5 != '\0');
    }
  }
  local_17c = local_170;
  local_170[0] = '\0';
  local_178 = 0;
  local_174 = 0x14;
  _strncpy(local_17c,"fonts",5);
  local_178 = 5;
  local_17c[5] = '\0';
  local_4._0_1_ = 4;
  uVar5 = FUN_00558a50(local_e4,&local_17c,(undefined4 *)0x1);
  local_4._0_1_ = 1;
  if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
    _free(local_17c);
  }
  if ((char)uVar5 != '\0') {
    puVar6 = FUN_00558de0(local_e4,&local_17c);
    if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
      _free(local_17c);
    }
    if (puVar6[1] != 0) {
      do {
        FUN_00558590(local_e4,&local_17c,4);
        local_4._0_1_ = 5;
        if (local_178 != 0) {
          FUN_0043a2d0((void *)(param_1 + 0x344),&local_17c);
        }
        local_4._0_1_ = 1;
        if (0x14 < local_174) {
                    /* WARNING: Subroutine does not return */
          _free(local_17c);
        }
        uVar5 = FUN_00558120(local_e4,2);
      } while ((char)uVar5 != '\0');
    }
  }
  FUN_0074b420((int *)(param_1 + 0x1b8));
  uVar3 = DAT_0105cdf1;
  DAT_0105cdf1 = 0;
  FUN_009c89a0(local_138);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_009ca9d0(local_138,"*.dds","data\\textures\\ui\\postproc\\backdrops",(undefined1 *)0x1);
  uVar10 = 0;
  do {
    if ((local_f0 == 0) || ((uint)(local_ec - local_f0 >> 2) <= uVar10)) {
      local_4._0_1_ = 1;
      DAT_0105cdf1 = uVar3;
      FUN_009c8560(local_138);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00558920(local_e4);
      if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
        _free(local_158);
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
    pcVar9 = *(char **)(local_f0 + uVar10 * 4);
    pcVar7 = _strrchr(pcVar9,0x5c);
    _Source = pcVar7 + 1;
    if (pcVar7 == (char *)0x0) {
      _Source = pcVar9;
    }
    local_17c = local_170;
    local_170[0] = '\0';
    local_178 = 0;
    local_174 = 0x14;
    pcVar9 = _Source;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar9 - (int)(_Source + 1);
    if (0x13 < _Count) {
      local_174 = _Count + 0x20 & 0xffffffe0;
      local_17c = _malloc(local_174);
    }
    _strncpy(local_17c,_Source,_Count);
    local_17c[_Count] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    local_178 = _Count;
    iVar8 = FUN_004302c0(&local_17c,&DAT_00d1ef64,0xffffffff,1);
    iVar4 = local_15c;
    if (iVar8 == -1) {
      iVar8 = *(int *)(local_15c + 0x368);
      if ((iVar8 == 0) ||
         ((uint)(*(int *)(local_15c + 0x370) - iVar8 >> 5) <=
          (uint)(*(int *)(local_15c + 0x36c) - iVar8 >> 5))) {
        FUN_00439fd0((void *)(local_15c + 0x364),*(int **)(local_15c + 0x36c),1,&local_17c);
      }
      else {
        piVar2 = *(int **)(local_15c + 0x36c);
        FUN_00439ea0(piVar2,1,&local_17c);
        *(int **)(iVar4 + 0x36c) = piVar2 + 8;
      }
    }
    uVar10 = uVar10 + 1;
  } while (local_174 < 0x15);
                    /* WARNING: Subroutine does not return */
  _free(local_17c);
}


//// FUNCTION FUN_0074c250 @ 0074c250 ////

void __fastcall FUN_0074c250(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)param_1[0xd6];
  puVar2 = (undefined4 *)param_1[0xd7];
  local_4 = param_1;
  FUN_0074a360(&local_4,puVar1,puVar2,param_1 + 0x5e);
  if ((local_4 == puVar2) || (puVar3 = local_4 + 8, local_4 + 8 == puVar2)) {
    puVar3 = puVar1;
  }
  FUN_004015d0(param_1 + 0x5e,(char *)*puVar3,puVar3[1]);
  FUN_0074b420(param_1 + 0x6e);
  FUN_00773420(DAT_0104e478);
  *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  return;
}


//// FUNCTION FUN_0074c2c0 @ 0074c2c0 ////

void __fastcall FUN_0074c2c0(int param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *_Dest;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_28;
  int local_24;
  uint local_18;
  byte local_14 [20];
  
  local_28 = 0;
  local_24 = 0;
  do {
    if ((*(int *)(param_1 + 0x358) == 0) ||
       ((uint)(*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358) >> 5) <= local_28))
    goto LAB_0074c4fe;
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x358) + local_24);
    _Dest = local_14;
    local_14[0] = 0;
    local_18 = 0x14;
    uVar2 = puVar8[1];
    pcVar3 = (char *)*puVar8;
    if (0x13 < uVar2) {
      local_18 = uVar2 + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_18);
    }
    _strncpy((char *)_Dest,pcVar3,uVar2);
    _Dest[uVar2] = 0;
    pbVar9 = *(byte **)(param_1 + 0x178);
    pbVar4 = _Dest;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_0074c394:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0074c399;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_0074c394;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0074c399:
    if (iVar5 == 0) {
      if (local_28 == 0) {
        if (*(int *)(param_1 + 0x358) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358) >> 5;
        }
        iVar5 = (iVar5 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x358));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x358));
        if (*(uint *)(param_1 + 0x180) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x180)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x178));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x180) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x178) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x178),pcVar3,uVar2);
        *(uint *)(param_1 + 0x17c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x178)) = 0;
      }
      else {
        iVar5 = (local_28 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x358));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x358));
        if (*(uint *)(param_1 + 0x180) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x180)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x178));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x180) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x178) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x178),pcVar3,uVar2);
        *(uint *)(param_1 + 0x17c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x178)) = 0;
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
LAB_0074c4fe:
      FUN_0074b420((int *)(param_1 + 0x1b8));
      FUN_00773420(DAT_0104e478);
      *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
      return;
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 0x20;
  } while( true );
}


//// FUNCTION FUN_0074c530 @ 0074c530 ////

void __fastcall FUN_0074c530(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)param_1[0xd2];
  puVar2 = (undefined4 *)param_1[0xd3];
  local_4 = param_1;
  FUN_0074a360(&local_4,puVar1,puVar2,param_1 + 0x56);
  if ((local_4 == puVar2) || (puVar3 = local_4 + 8, local_4 + 8 == puVar2)) {
    puVar3 = puVar1;
  }
  FUN_004015d0(param_1 + 0x56,(char *)*puVar3,puVar3[1]);
  FUN_0074b420(param_1 + 0x6e);
  FUN_00773420(DAT_0104e478);
  *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  return;
}


//// FUNCTION FUN_0074c5a0 @ 0074c5a0 ////

void __fastcall FUN_0074c5a0(int param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *_Dest;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  uint local_28;
  int local_24;
  uint local_18;
  byte local_14 [20];
  
  local_28 = 0;
  local_24 = 0;
  do {
    if ((*(int *)(param_1 + 0x348) == 0) ||
       ((uint)(*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348) >> 5) <= local_28))
    goto LAB_0074c7de;
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x348) + local_24);
    _Dest = local_14;
    local_14[0] = 0;
    local_18 = 0x14;
    uVar2 = puVar8[1];
    pcVar3 = (char *)*puVar8;
    if (0x13 < uVar2) {
      local_18 = uVar2 + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_18);
    }
    _strncpy((char *)_Dest,pcVar3,uVar2);
    _Dest[uVar2] = 0;
    pbVar9 = *(byte **)(param_1 + 0x158);
    pbVar4 = _Dest;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar9;
      if (bVar1 != *pbVar9) {
LAB_0074c674:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0074c679;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar9[1];
      if (bVar1 != pbVar9[1]) goto LAB_0074c674;
      pbVar4 = pbVar4 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0074c679:
    if (iVar5 == 0) {
      if (local_28 == 0) {
        if (*(int *)(param_1 + 0x348) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348) >> 5;
        }
        iVar5 = (iVar5 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x348));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x348));
        if (*(uint *)(param_1 + 0x160) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x160)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x158));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x160) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x158) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x158),pcVar3,uVar2);
        *(uint *)(param_1 + 0x15c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x158)) = 0;
      }
      else {
        iVar5 = (local_28 + 0x7ffffff) * 0x20;
        uVar2 = *(uint *)(iVar5 + 4 + *(int *)(param_1 + 0x348));
        pcVar3 = *(char **)(iVar5 + *(int *)(param_1 + 0x348));
        if (*(uint *)(param_1 + 0x160) <= uVar2) {
          if (0x14 < *(uint *)(param_1 + 0x160)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x158));
          }
          uVar6 = uVar2 + 0x20 & 0xffffffe0;
          *(uint *)(param_1 + 0x160) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)(param_1 + 0x158) = pvVar7;
        }
        _strncpy(*(char **)(param_1 + 0x158),pcVar3,uVar2);
        *(uint *)(param_1 + 0x15c) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)(param_1 + 0x158)) = 0;
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
LAB_0074c7de:
      FUN_0074b420((int *)(param_1 + 0x1b8));
      FUN_00773420(DAT_0104e478);
      *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
      return;
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 0x20;
  } while( true );
}


//// FUNCTION FUN_0074c810 @ 0074c810 ////

uint __thiscall FUN_0074c810(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd644b;
  *unaff_FS_OFFSET = &local_c;
  *(undefined4 *)((int)this + 0x2f8) = 3000;
  puVar4 = (undefined4 *)0x0;
  if (DAT_0104e184 != (undefined4 *)0x0) {
    uVar1 = (uint)DAT_0104e184 & 0xffffff00;
    *unaff_FS_OFFSET = local_c;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x340) = param_1;
  puVar2 = operator_new(0x37c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = FUN_0074a900(puVar2);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104e170[1])();
  DAT_0104e184 = puVar4;
  (*(code *)*DAT_0104e170)();
  uVar3 = FUN_0074bdb0((int)this);
  *unaff_FS_OFFSET = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0074c8d0 @ 0074c8d0 ////

void __fastcall FUN_0074c8d0(int param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined4 *puVar3;
  int iVar4;
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  undefined1 *local_144;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_138 [20];
  void *local_124 [2];
  uint local_11c;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd64a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104e4a8 != 0) {
    ExceptionList = &local_c;
    FUN_00559fb0(local_e4);
    local_164 = local_158;
    local_4 = 0;
    local_158[0] = '\0';
    local_160 = 0;
    local_15c = 0x14;
    _strncpy(local_164,"postproc/titles",0xf);
    local_160 = 0xf;
    local_164[0xf] = '\0';
    local_4._0_1_ = 1;
    FUN_0055be10(local_e4,&local_164,'\0');
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164);
    }
    local_144 = local_138;
    local_138[0] = 0;
    local_140 = 0;
    local_13c = 0x14;
    FUN_004015d0(&local_144,*(char **)(DAT_0104e4a8 + 0xdc),*(uint *)(DAT_0104e4a8 + 0xe0));
    local_4._0_1_ = 2;
    uVar1 = FUN_00558a50(local_e4,&local_144,(undefined4 *)0x1);
    if ((char)uVar1 != '\0') {
      iVar4 = *(int *)(DAT_0104e4a8 + 0x11c);
      if (0x7c6 < iVar4) {
        iVar4 = 0x7c6;
      }
      FUN_004073f0(&local_144,"\\",1);
      sVar2 = _sprintf((char *)local_124,(char *)&param_2_00d1b93c,iVar4 - iVar4 % 10);
      FUN_004073f0(&local_144,(char *)local_124,sVar2);
      uVar1 = FUN_00558a50(local_e4,&local_144,(undefined4 *)0x1);
      if ((char)uVar1 != '\0') {
        local_164 = local_158;
        local_158[0] = '\0';
        local_160 = 0;
        local_15c = 0x14;
        _strncpy(local_164,"FontFace",8);
        local_160 = 8;
        local_164[8] = '\0';
        local_4._0_1_ = 3;
        puVar3 = FUN_005584e0(local_e4,local_124,&local_164);
        FUN_004015d0((void *)(param_1 + 0x158),(char *)*puVar3,puVar3[1]);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124[0]);
        }
        if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
          _free(local_164);
        }
        local_164 = local_158;
        local_158[0] = '\0';
        local_160 = 0;
        local_15c = 0x14;
        _strncpy(local_164,"FontColor",9);
        local_160 = 9;
        local_164[9] = '\0';
        local_4._0_1_ = 4;
        puVar3 = FUN_005584e0(local_e4,local_124,&local_164);
        FUN_004015d0((void *)(param_1 + 0x178),(char *)*puVar3,puVar3[1]);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124[0]);
        }
        if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
          _free(local_164);
        }
        local_164 = local_158;
        local_158[0] = '\0';
        local_160 = 0;
        local_15c = 0x14;
        _strncpy(local_164,"Backdrop",8);
        local_160 = 8;
        local_164[8] = '\0';
        local_4._0_1_ = 5;
        puVar3 = FUN_005584e0(local_e4,local_124,&local_164);
        FUN_004015d0((void *)(param_1 + 0x198),(char *)*puVar3,puVar3[1]);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124[0]);
        }
        if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
          _free(local_164);
        }
      }
    }
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  FUN_0074b420((int *)(param_1 + 0x1b8));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0074cc40 @ 0074cc40 ////

undefined4 __cdecl FUN_0074cc40(uint param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0074b390();
  if (iVar1 == 0) {
    uVar2 = FUN_00773420(DAT_0104e478);
    *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  }
  else {
    uVar2 = FUN_00771310(DAT_0104e478);
    if ((int)param_1 < (int)uVar2) {
      uVar2 = param_1 / 3000;
      iVar1 = FUN_0074b390();
      if (*(int *)(iVar1 + 0x2fc) != 1) {
        uVar2 = (uint)(uVar2 != 0) * 2 + 1;
      }
      pvVar3 = (void *)FUN_0074b390(uVar2,param_1 % 3000);
      uVar4 = FUN_0074a5d0(pvVar3);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0074ccc0 @ 0074ccc0 ////

uint __cdecl FUN_0074ccc0(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0074b390();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00771330(DAT_0104e478);
  uVar2 = FUN_007704f0(DAT_0104e478);
  if ((int)uVar2 <= param_1) {
    return uVar2 & 0xffffff00;
  }
  pvVar3 = (void *)FUN_0074b390(6,param_1 - iVar1);
  uVar4 = FUN_0074a5d0(pvVar3);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_0074cd30 @ 0074cd30 ////

void __fastcall FUN_0074cd30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x5622;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_0074cd60 @ 0074cd60 ////

undefined4 * __thiscall FUN_0074cd60(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x5622;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0;
  puVar1 = operator_new(param_2);
  *(undefined4 **)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)((int)this + 4) = param_2;
  }
  return this;
}


//// FUNCTION FUN_0074cdd0 @ 0074cdd0 ////

void __fastcall FUN_0074cdd0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_0074cde0 @ 0074cde0 ////

/* WARNING: Removing unreachable block (ram,0x0074ce06) */

float10 __fastcall FUN_0074cde0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((0 < (int)*(uint *)(param_1 + 0x18)) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    fVar2 = (float10)iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    return (float10)((*(uint *)(param_1 + 4) >> 1) / *(uint *)(param_1 + 0x18)) / fVar2;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0074ce50 @ 0074ce50 ////

undefined4 FUN_0074ce50(void)

{
  char *in_EAX;
  
  if ((((*in_EAX == 'd') && (in_EAX[1] == 'a')) && (in_EAX[2] == 't')) && (in_EAX[3] == 'a')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0074ce80 @ 0074ce80 ////

bool __thiscall FUN_0074ce80(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  piVar1 = (int *)(**(code **)(*param_1 + 4))();
  if (piVar1 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar1 + 0xc))();
  if (uVar2 != 0) {
    pvVar3 = operator_new(uVar2);
    *(void **)this = pvVar3;
    puVar4 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    puVar7 = *(undefined4 **)this;
    for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  uVar5 = (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x10) = uVar5;
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 4) = uVar2;
  uVar5 = (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0x18) = uVar5;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(int **)((int)this + 0x20) = param_1;
  (**(code **)(*piVar1 + 0x10))();
  return *(int *)this != 0;
}


//// FUNCTION FUN_0074cf30 @ 0074cf30 ////

void __fastcall FUN_0074cf30(int *param_1)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd64bb;
  pvStack_c = ExceptionList;
  uVar5 = param_1[1];
  if (param_1[6] == 1) {
    uVar7 = uVar5 >> 1;
    local_1c = uVar7 * 2;
    ExceptionList = &pvStack_c;
    _Memory = operator_new(local_1c);
    if (_Memory != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*param_1;
      puVar4 = _Memory;
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar5 = local_1c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
  }
  else {
    uVar7 = uVar5 >> 2;
    local_1c = uVar7 * 2;
    ExceptionList = &pvStack_c;
    _Memory = operator_new(local_1c);
    if (_Memory != (undefined4 *)0x0) {
      iVar8 = *param_1;
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          *(short *)((int)_Memory + uVar5 * 2) =
               (short)(((int)*(short *)(iVar8 + 2 + uVar5 * 4) + (int)*(short *)(iVar8 + uVar5 * 4))
                      / 2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    }
  }
  iVar8 = 0;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      uVar1 = (uint)*(short *)((int)_Memory + uVar5 * 2);
      uVar6 = (int)uVar1 >> 0x1f;
      iVar2 = (uVar1 ^ uVar6) - uVar6;
      if ((short)iVar8 < iVar2) {
        iVar8 = iVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      uVar10 = FUN_00acd42c();
      *(short *)((int)_Memory + uVar5 * 2) = (short)uVar10;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0x5622;
    puVar3[5] = 0;
    puVar3[6] = 1;
    puVar3[7] = 0x3f800000;
    puVar3[8] = 0;
    puVar4 = operator_new(local_1c);
    *puVar3 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar9 = _Memory;
      for (uVar5 = local_1c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar5 = local_1c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar3[1] = local_1c;
    }
  }
  puVar3[2] = param_1[2];
  puVar3[3] = 0;
  puVar3[4] = param_1[4];
  puVar3[5] = param_1[5];
  puVar3[6] = param_1[6];
  puVar3[7] = param_1[7];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0074d0f0 @ 0074d0f0 ////

undefined4 __thiscall FUN_0074d0f0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_0104e1a0 != '\0') && (*(int *)((int)this + 0x20) != 0)) {
    uVar1 = FUN_009b1b40(*(int *)((int)this + 0x20),*(int *)((int)this + 0x14),4,param_1,param_2,
                         '\0');
    return uVar1;
  }
  if (*(int *)this != 0) {
    uVar1 = FUN_009b1d00(*(undefined4 *)((int)this + 4),*(int *)((int)this + 8) + *(int *)this,
                         *(undefined4 *)((int)this + 0x14),4,param_1,
                         *(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x18),param_2
                         ,0,'\0');
    return uVar1;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0074d160 @ 0074d160 ////

bool __thiscall FUN_0074d160(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint unaff_retaddr;
  undefined4 in_stack_00000024;
  undefined1 auStack_20 [8];
  void *pvStack_18;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd64e0;
  local_c = ExceptionList;
  local_4 = 0;
  if (DAT_0105cc2c == (int *)0x0) {
    if (0x14 < param_3) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    return false;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)(**(code **)(*DAT_0105cc2c + 0x30))();
  if (piVar2 == (int *)0x0) {
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = local_c;
    return false;
  }
  uVar3 = FUN_00bb8950(auStack_20,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(uVar3,0,in_stack_00000024);
  uStack_10 = 0;
  FUN_00bb8a10((undefined4 *)&stack0xffffffd4);
  if (piVar2 == (int *)0x0) {
    if (0x14 < unaff_retaddr) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    ExceptionList = pvStack_18;
    return false;
  }
  bVar1 = FUN_0074ce80(this,piVar2);
  if (0x14 < unaff_retaddr) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_18;
  return bVar1;
}


//// FUNCTION FUN_0074d280 @ 0074d280 ////

void __thiscall FUN_0074d280(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  FILE *_File;
  int iVar3;
  undefined1 local_17c;
  undefined1 local_17b;
  undefined1 local_17a;
  undefined1 local_179;
  undefined4 local_178;
  undefined1 local_174 [2];
  undefined2 local_172;
  undefined4 local_170;
  undefined2 local_168;
  undefined2 local_166;
  void *local_160 [2];
  uint local_158;
  void *local_140 [2];
  uint local_138;
  char local_120;
  undefined4 local_11f;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cd64fb;
  local_14 = ExceptionList;
  if ((*(int *)this != 0) && (*(int *)((int)this + 4) != 0)) {
    local_120 = '\0';
    puVar1 = &local_11f;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 2) = 0;
    ExceptionList = &local_14;
    puVar1 = FUN_009ac940(local_140,param_1);
    local_c = 0;
    puVar2 = (undefined4 *)FUN_00567ff0(local_160);
    _sprintf(&local_120,"%s\\The Movies\\Movie Sounds\\%s.wav",*puVar2,*puVar1);
    if (10 < local_158) {
                    /* WARNING: Subroutine does not return */
      _free(local_160[0]);
    }
    if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
      _free(local_140[0]);
    }
    _File = _fopen(&local_120,"wb");
    if (_File != (FILE *)0x0) {
      _fwrite(*(void **)this,0xc,1,_File);
      local_17c = 0x66;
      local_17b = 0x6d;
      local_17a = 0x74;
      local_179 = 0x20;
      local_178 = 0x12;
      _fwrite(&local_17c,8,1,_File);
      local_172 = *(undefined2 *)((int)this + 0x18);
      local_170 = *(undefined4 *)((int)this + 0x10);
      local_168 = 2;
      local_166 = 0x10;
      _fwrite(local_174,0x12,1,_File);
      local_17b = 0x61;
      local_179 = 0x61;
      local_178 = *(undefined4 *)((int)this + 4);
      local_17c = 100;
      local_17a = 0x74;
      _fwrite(&local_17c,8,1,_File);
      _fwrite(*(void **)this,*(size_t *)((int)this + 4),1,_File);
      _fclose(_File);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_0074d420 @ 0074d420 ////

bool __thiscall FUN_0074d420(void *this,undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  FILE *_File;
  size_t sVar4;
  long lVar5;
  int *piVar6;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  uint uStack_74;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  long lStack_6c;
  undefined1 auStack_68 [2];
  ushort uStack_66;
  int iStack_64;
  int iStack_60;
  ushort uStack_5a;
  char *pcStack_54;
  undefined4 uStack_50;
  long lStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  undefined4 local_34;
  uint local_30;
  char local_2c [24];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cd6518;
  pvStack_14 = ExceptionList;
  local_38 = local_2c;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x14;
  local_c = 0;
  ExceptionList = &pvStack_14;
  uVar3 = FUN_009d4750(&local_38);
  if ((char)uVar3 != '\0') {
    FUN_004073f0(&local_38,".wav",4);
    cVar1 = (**(code **)(*DAT_0105cc2c + 0x6c))(param_1,local_38);
    if ((cVar1 != '\0') && (_File = _fopen(local_38,"rb"), _File != (FILE *)0x0)) {
      _fseek(_File,0xc,1);
      sVar4 = _fread(&cStack_78,8,1,_File);
      while (sVar4 != 0) {
        if ((((cStack_78 == 'f') && (cStack_77 == 'm')) && (cStack_76 == 't')) && (cStack_75 == ' ')
           ) goto LAB_0074d54f;
        _fseek(_File,uStack_74,1);
        sVar4 = _fread(&cStack_78,8,1,_File);
      }
      if (((cStack_78 == 'f') && (cStack_77 == 'm')) && ((cStack_76 == 't' && (cStack_75 == ' '))))
      {
LAB_0074d54f:
        if (0x11 < uStack_74) {
          uStack_74 = 0x12;
        }
        sVar4 = _fread(auStack_68,uStack_74,1,_File);
        if (sVar4 != 0) {
          sVar4 = _fread(&cStack_70,8,1,_File);
          while ((sVar4 != 0 &&
                 (((cStack_70 != 'd' || (cStack_6f != 'a')) ||
                  ((cStack_6e != 't' || (cStack_6d != 'a'))))))) {
            _fseek(_File,lStack_6c,1);
            sVar4 = _fread(&cStack_70,8,1,_File);
          }
          uVar3 = FUN_0074ce50();
          if ((char)uVar3 != '\0') {
            _fseek(_File,0,2);
            lVar5 = _ftell(_File);
            _fclose(_File);
            if (iStack_60 != 0) {
              uStack_48 = (uint)(lStack_6c * 1000) /
                          ((uint)uStack_66 * (uint)uStack_5a * iStack_64 >> 3);
              pcStack_54 = local_38;
              uStack_50 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              lStack_4c = lVar5;
              piVar6 = (int *)(**(code **)(*DAT_0105cc2c + 0x34))();
              piVar6 = (int *)(**(code **)(*piVar6 + 4))(&pcStack_54);
              if (piVar6 != (int *)0x0) {
                bVar2 = FUN_0074ce80(this,piVar6);
                if (local_30 < 0x15) {
                  ExceptionList = pvStack_14;
                  return bVar2;
                }
                    /* WARNING: Subroutine does not return */
                _free(local_38);
              }
            }
          }
        }
      }
    }
    DeleteFileA(local_38);
  }
  if (local_30 < 0x15) {
    ExceptionList = pvStack_14;
    return false;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_38);
}


//// FUNCTION FUN_0074d6e0 @ 0074d6e0 ////

undefined4 __fastcall FUN_0074d6e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007535c0(*(int *)(param_1 + 4));
  *(int *)(param_1 + 0x1c) = iVar1;
  iVar1 = FUN_007535d0(*(int *)(param_1 + 4));
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_0074d810 @ 0074d810 ////

void __cdecl FUN_0074d810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0074d920 @ 0074d920 ////

void __thiscall FUN_0074d920(void *this,int param_1)

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
  *(int *)this = param_1;
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0074d972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  return;
}


//// FUNCTION FUN_0074d980 @ 0074d980 ////

undefined4 __thiscall FUN_0074d980(void *this,char *param_1,char *param_2,int param_3)

{
  undefined1 uVar1;
  void *this_00;
  int *piVar2;
  byte *pbVar3;
  LONG LVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  this_00 = FUN_0097c450(param_1,0,(undefined4 *)(param_3 + 0x10c),0);
  *(void **)this = this_00;
  if (this_00 == (void *)0x0) {
    return 0;
  }
  FUN_00975f90(this_00,1);
  piVar2 = FUN_00433eb0();
  FUN_0074d920((undefined4 *)((int)this + 0x18),(int)piVar2);
  pbVar3 = FUN_009de1d0(param_2,1);
  (**(code **)(*piVar2 + 0x18))(pbVar3);
  piVar2[0x27] = piVar2[0x27] | 0x100;
  if (pbVar3 != (byte *)0x0) {
    FUN_009de3b0(pbVar3);
  }
  LVar4 = InterlockedDecrement(piVar2 + 4);
  uVar1 = DAT_0105b588;
  if (LVar4 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*piVar2)(1);
  }
  uVar5 = *(undefined4 *)((int)this + 0x18);
  DAT_0105b588 = uVar1;
  fVar6 = FUN_004012c0(0.0);
  FUN_00978350(*(void **)this,(undefined4 *)&stack0xfffffff0,(float)fVar6,uVar5);
  uVar5 = FUN_00976050(*(void **)this,1);
  *(char **)((int)this + 4) = param_2;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_0074da90 @ 0074da90 ////

undefined4 * __thiscall FUN_0074da90(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d4c458;
  FUN_009d10d0();
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(int *)((int)this + 0x54) = param_1;
  puVar1 = FUN_00433eb0();
  *(undefined4 **)((int)this + 0x50) = puVar1;
  FUN_0097e2b0((int)puVar1);
  iVar2 = FUN_00753460(param_1);
  puVar1 = FUN_009d03c0(iVar2);
  *(undefined4 **)((int)this + 0x58) = puVar1;
  FUN_00982950(*(void **)((int)this + 0x50),*(int *)(param_2 + 0x50));
  FUN_009d10d0();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0074db20 @ 0074db20 ////

void __fastcall FUN_0074db20(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4c458;
  local_4 = 0;
  if ((void *)param_1[0x17] != (void *)0x0) {
    FUN_009d2c50((void *)param_1[0x17],(void *)0x0,'\x01',-1.0,-1.0);
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    FUN_009cfb00((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    FUN_009d2b50((undefined4 *)param_1[0x17]);
    param_1[0x17] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x14];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x14] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0074dce0 @ 0074dce0 ////

void __cdecl FUN_0074dce0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0074dd60 @ 0074dd60 ////

undefined4 * __thiscall FUN_0074dd60(void *this,byte param_1)

{
  FUN_0074db20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074dd80 @ 0074dd80 ////

undefined4 * __thiscall FUN_0074dd80(void *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  uint local_d8 [51];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6586;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d4c458;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(int *)((int)this + 0x54) = param_1;
  puVar2 = FUN_00433eb0();
  *(undefined4 **)((int)this + 0x50) = puVar2;
  FUN_0097e2b0((int)puVar2);
  iVar3 = FUN_00753460(param_1);
  puVar2 = FUN_009d03c0(iVar3);
  *(undefined4 **)((int)this + 0x58) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_009d2990(local_d8,(char *)(param_1 + 0x14),(char *)(param_1 + 0x34),*(float *)(param_1 + 8))
    ;
    local_4._0_1_ = 1;
    this_00 = FUN_009d30f0(*(int *)((int)this + 0x50),
                           *(uint *)(*(int *)((int)this + 0x58) + 0xa4) >> 0xd & 3,1,local_d8,'\0');
    *(void **)((int)this + 0x5c) = this_00;
    FUN_009d2c50(this_00,*(void **)((int)this + 0x58),'\x01',-1.0,-1.0);
    FUN_009d63a0(*(void **)((int)this + 0x5c),*(float *)(param_1 + 4));
    FUN_009d6470(*(void **)((int)this + 0x5c),*(float *)(param_1 + 0xc));
    FUN_009d6530(*(void **)((int)this + 0x5c),*(float *)(param_1 + 0x10));
    FUN_009d10d0();
    FUN_0097e330(*(void **)((int)this + 0x50),1);
    puVar1 = (uint *)(*(int *)((int)this + 0x50) + 0x9c);
    *puVar1 = *puVar1 | 8;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00434ae0((int)local_d8);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0074df00 @ 0074df00 ////

void __fastcall FUN_0074df00(int param_1)

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


//// FUNCTION FUN_0074df50 @ 0074df50 ////

void * FUN_0074df50(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0074df80 @ 0074df80 ////

void __fastcall FUN_0074df80(int param_1)

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


//// FUNCTION FUN_0074dfe0 @ 0074dfe0 ////

void __fastcall FUN_0074dfe0(int param_1)

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


//// FUNCTION FUN_0074e010 @ 0074e010 ////

undefined4 * FUN_0074e010(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0074e040 @ 0074e040 ////

void __fastcall FUN_0074e040(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cd65a6;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((void *)*param_1 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00971df0((void *)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  uVar4 = 0;
  while( true ) {
    iVar2 = param_1[3];
    if ((iVar2 == 0) || ((uint)(param_1[4] - iVar2 >> 2) <= uVar4)) break;
    puVar3 = *(undefined4 **)(iVar2 + uVar4 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    uVar4 = uVar4 + 1;
  }
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00978830(param_1 + 6);
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0074e100 @ 0074e100 ////

void FUN_0074e100(void)

{
  if (DAT_0104e1a8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104e1a8);
  }
  DAT_0104e1a8 = (void *)0x0;
  DAT_0104e1ac = 0;
  DAT_0104e1b0 = 0;
  return;
}


//// FUNCTION FUN_0074e190 @ 0074e190 ////

void __fastcall FUN_0074e190(int param_1)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar3 = 0;
  do {
    while( true ) {
      iVar2 = *(int *)(param_1 + 0xc);
      if ((iVar2 == 0) || ((uint)(*(int *)(param_1 + 0x10) - iVar2 >> 2) <= uVar3)) {
        return;
      }
      iVar1 = uVar3 * 4;
      _Dst = DAT_0104e1a8;
      if (DAT_0104e1a8 != DAT_0104e1ac) break;
LAB_0074e20f:
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + 0x54) = 0;
      uVar3 = uVar3 + 1;
    }
    do {
      if (*_Dst == *(int *)(iVar2 + iVar1)) {
        _memmove(_Dst,_Dst + 1,((int)DAT_0104e1ac - (int)(_Dst + 1) >> 2) << 2);
        DAT_0104e1ac = DAT_0104e1ac + -1;
        goto LAB_0074e20f;
      }
      _Dst = _Dst + 1;
    } while (_Dst != DAT_0104e1ac);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + 0x54) = 0;
    uVar3 = uVar3 + 1;
  } while( true );
}


//// FUNCTION FUN_0074e230 @ 0074e230 ////

void FUN_0074e230(void)

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
  puStack_8 = &LAB_00cd65b8;
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


//// FUNCTION FUN_0074e2f0 @ 0074e2f0 ////

void __thiscall FUN_0074e2f0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0074e230();
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
      _Dst = FUN_0074e010((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0074df50(param_1,iVar5,param_1 + param_2);
      FUN_0074e010(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0074d810(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0074df50(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0074dce0(param_1,(int)pvVar3,iVar5);
    FUN_0074d810(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0074e530 @ 0074e530 ////

undefined4 * __fastcall FUN_0074e530(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd65db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 0;
  FUN_0097a2f0(param_1 + 6);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0074e580 @ 0074e580 ////

void __thiscall FUN_0074e580(void *this,undefined4 *param_1)

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
  FUN_0074e2f0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0074e5d0 @ 0074e5d0 ////

undefined4 * __cdecl FUN_0074e5d0(void *param_1)

{
  void **ppvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6606;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_00e58d68 != 0) &&
     (piVar4 = DAT_0104e1a8, ExceptionList = &local_c, ppvVar1 = &local_c,
     DAT_0104e1a8 != DAT_0104e1ac)) {
    do {
      ExceptionList = ppvVar1;
      puVar3 = (undefined4 *)*piVar4;
      uVar2 = FUN_00753ef0(param_1,(byte *)puVar3[0x15]);
      if ((char)uVar2 != '\0') {
        if (DAT_00e58d68 == 1) {
          puVar3[0x12] = puVar3[0x12] + 1;
          ExceptionList = local_c;
          return puVar3;
        }
        if (DAT_00e58d68 == 2) {
          local_10 = operator_new(0x60);
          local_4 = 0;
          if (local_10 != (undefined4 *)0x0) {
            puVar3 = FUN_0074da90(local_10,(int)param_1,(int)puVar3);
            ExceptionList = local_c;
            return puVar3;
          }
          ExceptionList = local_c;
          return (undefined4 *)0x0;
        }
      }
      piVar4 = piVar4 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar4 != DAT_0104e1ac);
  }
  local_10 = operator_new(0x60);
  local_4 = 1;
  if (local_10 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0074dd80(local_10,(int)param_1);
  }
  local_4 = 0xffffffff;
  if ((DAT_00e58d68 == 1) || (DAT_00e58d68 == 2)) {
    if ((DAT_0104e1a8 != (int *)0x0) &&
       ((uint)((int)DAT_0104e1ac - (int)DAT_0104e1a8 >> 2) <
        (uint)(DAT_0104e1b0 - (int)DAT_0104e1a8 >> 2))) {
      *DAT_0104e1ac = (int)puVar3;
      DAT_0104e1ac = DAT_0104e1ac + 1;
      ExceptionList = local_c;
      return puVar3;
    }
    local_10 = puVar3;
    FUN_0074e2f0(&DAT_0104e1a4,DAT_0104e1ac,1,&local_10);
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_0074e740 @ 0074e740 ////

void __fastcall FUN_0074e740(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  DAT_0104e1b4 = param_1;
  return;
}


//// FUNCTION FUN_0074e760 @ 0074e760 ////

void __fastcall FUN_0074e760(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_0074e760(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_0074e780 @ 0074e780 ////

int * __thiscall FUN_0074e780(void *this,byte param_1)

{
  if (*(void **)this != (void *)0x0) {
    FUN_0074e780(*(void **)this,1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074e7b0 @ 0074e7b0 ////

void __fastcall FUN_0074e7b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  DAT_0104e1b4 = param_1;
  return;
}


//// FUNCTION FUN_0074e7c0 @ 0074e7c0 ////

void __thiscall FUN_0074e7c0(void *this,undefined2 param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  while( true ) {
    if (uVar1 < 0x6baa8) {
      *(undefined2 *)((int)this + *(int *)((int)this + 8) * 2 + 0xc) = param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return;
    }
    if (*(int *)this != 0) break;
    piVar2 = operator_new(0xd755c);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      DAT_0104e1b4 = piVar2;
    }
    *(int **)this = piVar2;
    if (piVar2 == (int *)0x0) {
      return;
    }
    uVar1 = piVar2[2];
    this = piVar2;
  }
  return;
}


//// FUNCTION FUN_0074e820 @ 0074e820 ////

undefined4 __fastcall FUN_0074e820(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[1];
  if ((uint)param_1[2] <= uVar3) {
    do {
      iVar2 = *param_1;
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      param_1 = (int *)*param_1;
      uVar3 = param_1[1];
      DAT_0104e1b4 = iVar2;
    } while ((uint)param_1[2] <= uVar3);
  }
  uVar1 = *(undefined2 *)((int)param_1 + param_1[1] * 2 + 0xc);
  param_1[1] = param_1[1] + 1;
  return CONCAT22((short)(uVar3 >> 0x10),uVar1);
}


//// FUNCTION FUN_0074e8f0 @ 0074e8f0 ////

undefined4 * __thiscall FUN_0074e8f0(void *this,byte param_1)

{
  FUN_0074cdd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074e910 @ 0074e910 ////

undefined4 __fastcall FUN_0074e910(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}


//// FUNCTION FUN_0074e920 @ 0074e920 ////

void __thiscall FUN_0074e920(void *this,undefined4 param_1)

{
  undefined4 *_Memory;
  
  _Memory = *(undefined4 **)((int)this + 0x10c);
  if (_Memory != (undefined4 *)0x0) {
    FUN_0074cdd0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)((int)this + 0x10c) = param_1;
  return;
}


//// FUNCTION FUN_0074e960 @ 0074e960 ////

void __thiscall FUN_0074e960(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x74) = param_1;
  return;
}


//// FUNCTION FUN_0074e970 @ 0074e970 ////

void __fastcall FUN_0074e970(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x7c));
}


//// FUNCTION FUN_0074e990 @ 0074e990 ////

void __fastcall FUN_0074e990(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x80));
}


//// FUNCTION FUN_0074e9b0 @ 0074e9b0 ////

void __fastcall FUN_0074e9b0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x84));
}


//// FUNCTION FUN_0074e9d0 @ 0074e9d0 ////

void __fastcall FUN_0074e9d0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x88));
}


//// FUNCTION FUN_0074ea10 @ 0074ea10 ////

int * __thiscall FUN_0074ea10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0074eb80 @ 0074eb80 ////

void __cdecl FUN_0074eb80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0074ed80 @ 0074ed80 ////

undefined4 __thiscall FUN_0074ed80(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 uVar1;
  float10 fVar2;
  
  this_00 = *(void **)((int)this + 0x10c);
  if (this_00 != (void *)0x0) {
    fVar2 = FUN_0075d9c0(*(int *)(DAT_0104e478 + 0x364));
    uVar1 = FUN_0074d0f0(this_00,param_1,(float)(fVar2 * (float10)*(float *)((int)this + 0xb8)));
    return uVar1;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0074ef10 @ 0074ef10 ////

void __cdecl FUN_0074ef10(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0074efb0 @ 0074efb0 ////

void __cdecl
FUN_0074efb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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


//// FUNCTION FUN_0074f010 @ 0074f010 ////

void __cdecl FUN_0074f010(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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


//// FUNCTION FUN_0074f070 @ 0074f070 ////

void __cdecl FUN_0074f070(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0074f130 @ 0074f130 ////

void __thiscall FUN_0074f130(void *this,undefined4 *param_1)

{
  undefined2 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x74f14a;
  FUN_004036d0((void *)((int)this + 0xec),(wchar_t *)*param_1,param_1[1]);
  if (*(int *)((int)this + 0x4c) != 0) {
    local_28 = local_1c;
    local_1c[0] = 0;
    local_24 = 0;
    local_20 = 10;
    FUN_004036d0(&local_28,(wchar_t *)*param_1,param_1[1]);
    FUN_00768790(*(int **)((int)this + 0x4c));
  }
  return;
}


//// FUNCTION FUN_0074f1e0 @ 0074f1e0 ////

void __fastcall FUN_0074f1e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4c46c;
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


//// FUNCTION FUN_0074f280 @ 0074f280 ////

void __fastcall FUN_0074f280(int param_1)

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


//// FUNCTION FUN_0074f2d0 @ 0074f2d0 ////

void * FUN_0074f2d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0074f300 @ 0074f300 ////

void __cdecl
FUN_0074f300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0074efb0(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_0074efb0(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_0074efb0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_0074efb0(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_0074efb0(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_0074f3b0 @ 0074f3b0 ////

void __cdecl FUN_0074f3b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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
  FUN_0074f010(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_0074f470 @ 0074f470 ////

void __fastcall FUN_0074f470(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6663;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4c47c;
  puVar2 = (undefined4 *)param_1[0x13];
  local_4 = 6;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe] + 4))();
    param_1[0x13] = 0;
    (**(code **)param_1[0xe])();
  }
  puVar2 = (undefined4 *)param_1[0x43];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0074cdd0(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  param_1[0x43] = 0;
  if (10 < (uint)param_1[0x3d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3b]);
  }
  if (0x14 < (uint)param_1[0x35]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x33]);
  }
  if (10 < (uint)param_1[0x28]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x26]);
  }
  if (10 < (uint)param_1[0x1f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1d]);
  }
  if (10 < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15]);
  }
  param_1[0xe] = &PTR_LAB_00d4c46c;
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


//// FUNCTION FUN_0074f5c0 @ 0074f5c0 ////

undefined4 __thiscall FUN_0074f5c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0xffffffff;
  for (uVar4 = 0;
      (*(int *)((int)this + 0x68) != 0 &&
      (uVar4 < (uint)(*(int *)((int)this + 0x6c) - *(int *)((int)this + 0x68) >> 2)));
      uVar4 = uVar4 + 1) {
    iVar1 = *(int *)(*(int *)((int)this + 0x68) + uVar4 * 4);
    iVar2 = *(int *)(iVar1 + 0xc0);
    if ((iVar2 <= param_1) && (param_1 <= *(int *)(iVar1 + 0xc4) + iVar2)) {
      uVar3 = uVar4;
    }
  }
  if (uVar3 != 0xffffffff) {
    return *(undefined4 *)(*(int *)((int)this + 0x68) + uVar3 * 4);
  }
  return 0;
}


//// FUNCTION FUN_0074f620 @ 0074f620 ////

int __thiscall FUN_0074f620(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((*(int *)((int)this + 0x68) == 0) ||
       ((uint)(*(int *)((int)this + 0x6c) - *(int *)((int)this + 0x68) >> 2) <= uVar2)) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x68) + uVar2 * 4);
    if ((*(int *)(iVar1 + 0xc0) <= param_1) &&
       (param_1 <= *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xc0))) break;
    uVar2 = uVar2 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_0074f670 @ 0074f670 ////

void __thiscall FUN_0074f670(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  
  iVar1 = *(int *)((int)this + 0x74);
  if (*(int *)((int)this + 0x7c) != 0) {
    for (uVar6 = 0;
        (iVar2 = *(int *)((int)this + 0x68), iVar2 != 0 &&
        (uVar6 < (uint)(*(int *)((int)this + 0x6c) - iVar2 >> 2))); uVar6 = uVar6 + 1) {
      iVar2 = *(int *)(iVar2 + uVar6 * 4);
      iVar3 = *(int *)(iVar2 + 0xc0);
      if (((iVar3 == 0) && (iVar1 == 0)) && (0 < param_1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((param_1 < iVar3) || (iVar3 <= iVar1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar4) || (bVar5)) {
        (**(code **)**(undefined4 **)((int)this + 0x7c))(iVar2);
      }
    }
    *(int *)((int)this + 0x74) = param_1;
    return;
  }
  *(int *)((int)this + 0x74) = param_1;
  return;
}


//// FUNCTION FUN_0074f6f0 @ 0074f6f0 ////

void __thiscall FUN_0074f6f0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x80) != 0) {
    for (uVar2 = 0;
        (iVar1 = *(int *)((int)this + 0x68), iVar1 != 0 &&
        (uVar2 < (uint)(*(int *)((int)this + 0x6c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if ((*(int *)(iVar1 + 0xc0) <= param_1) &&
         (param_1 <= *(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 0xc0))) {
        (**(code **)**(undefined4 **)((int)this + 0x80))
                  (iVar1,(float)(param_1 - *(int *)(iVar1 + 0xc0)) / (float)*(int *)(iVar1 + 0xc4));
      }
    }
  }
  return;
}


//// FUNCTION FUN_0074f770 @ 0074f770 ////

void __fastcall FUN_0074f770(int param_1)

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


//// FUNCTION FUN_0074f7f0 @ 0074f7f0 ////

void __fastcall FUN_0074f7f0(int param_1)

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


//// FUNCTION FUN_0074f820 @ 0074f820 ////

undefined4 * FUN_0074f820(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0074f850 @ 0074f850 ////

void __cdecl
FUN_0074f850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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
  FUN_0074f300(param_2,puVar5,param_3 + -1,param_4);
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
joined_r0x0074f8e8:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x0074f92e:
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
      goto joined_r0x0074f8e8;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x0074f92e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_0074fa10 @ 0074fa10 ////

void __cdecl FUN_0074fa10(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_0074f3b0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


//// FUNCTION FUN_0074fab0 @ 0074fab0 ////

undefined4 * __thiscall FUN_0074fab0(void *this,byte param_1)

{
  FUN_0074f470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074fad0 @ 0074fad0 ////

void __fastcall FUN_0074fad0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6683;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4c484;
  local_4 = 1;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1f]);
}


//// FUNCTION FUN_0074fbf0 @ 0074fbf0 ////

void __thiscall FUN_0074fbf0(void *this,undefined4 *param_1)

{
  void *_Src;
  void *_Dst;
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(int *)((int)this + 0x68) == 0) {
      return;
    }
    if ((uint)(*(int *)((int)this + 0x6c) - *(int *)((int)this + 0x68) >> 2) <= uVar1) break;
    if (*(undefined4 **)(*(int *)((int)this + 0x68) + uVar1 * 4) == param_1) {
      if (*(undefined4 **)((int)this + 0x88) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x88))(param_1);
      }
      _Dst = (void *)(*(int *)((int)this + 0x68) + uVar1 * 4);
      _Src = (void *)((int)_Dst + 4);
      _memmove(_Dst,_Src,(*(int *)((int)this + 0x6c) - (int)_Src >> 2) << 2);
      *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + -4;
      param_1[0x14] = 0;
      (**(code **)*param_1)(1);
      FUN_00770520(DAT_0104e478);
      FUN_00773420(DAT_0104e478);
      return;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_0074fcb0 @ 0074fcb0 ////

void __cdecl FUN_0074fcb0(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

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
            FUN_0074f070((int)puVar4,(int)puVar2,puVar2 + 1);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_0074f070((int)param_1,(int)puVar2,puVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0074fda0 @ 0074fda0 ////

undefined4 * __thiscall FUN_0074fda0(void *this,byte param_1)

{
  FUN_0074fad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0074fdc0 @ 0074fdc0 ////

void __cdecl FUN_0074fdc0(undefined4 *param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_0074f3b0((int)param_1,0,iVar2 + -4 >> 2,uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_0074fe10 @ 0074fe10 ////

void __cdecl FUN_0074fe10(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_0074fea7:
      if (1 < iVar2) {
        FUN_0074fcb0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_0074fa10((int)param_1,(int)param_2,param_4);
        }
        FUN_0074fdc0(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_0074fea7;
    }
    FUN_0074f850(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_0074fe10(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_0074fe10(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_0074ff00 @ 0074ff00 ////

void FUN_0074ff00(void)

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
  puStack_8 = &LAB_00cd6698;
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


//// FUNCTION FUN_0074ff90 @ 0074ff90 ////

void __fastcall FUN_0074ff90(int param_1)

{
  FUN_0074fe10(*(undefined4 **)(param_1 + 0x68),*(undefined4 **)(param_1 + 0x6c),
               (int)*(undefined4 **)(param_1 + 0x6c) - (int)*(undefined4 **)(param_1 + 0x68) >> 2,
               &LAB_0074e9f0);
  return;
}


//// FUNCTION FUN_00750000 @ 00750000 ////

void __thiscall FUN_00750000(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0074ff00();
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
      _Dst = FUN_0074f820((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0074f2d0(param_1,iVar5,param_1 + param_2);
      FUN_0074f820(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0074eb80(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0074f2d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0074ef10(param_1,(int)pvVar3,iVar5);
    FUN_0074eb80(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00750240 @ 00750240 ////

undefined4 * __fastcall FUN_00750240(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd66b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d4c484;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x1d] = 0;
  if ((void *)param_1[0x1a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007502c0 @ 007502c0 ////

void __thiscall FUN_007502c0(void *this,undefined4 *param_1)

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
  FUN_00750000(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00750310 @ 00750310 ////

undefined4 * __thiscall FUN_00750310(void *this,undefined4 param_1)

{
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d4c47c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d4c46c;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(int *)((int)this + 0x44) = (int)this + 0x38;
  *(undefined4 *)((int)this + 0x50) = param_1;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(int *)((int)this + 0x54) = (int)this + 0x60;
  *(undefined4 *)((int)this + 0x5c) = 10;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 10;
  *(int *)((int)this + 0x74) = (int)this + 0x80;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 10;
  *(int *)((int)this + 0x98) = (int)this + 0xa4;
  *(undefined4 *)((int)this + 0xb8) = 0x3f800000;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 0xc9) = 0xff;
  *(undefined1 *)((int)this + 0xca) = 0xff;
  *(undefined1 *)((int)this + 0xcb) = 0xff;
  *(undefined1 *)((int)this + 0xcb) = 0xff;
  *(undefined1 *)((int)this + 0xca) = 0xff;
  *(undefined1 *)((int)this + 0xc9) = 0xff;
  *(undefined1 *)((int)this + 200) = 0xff;
  *(undefined4 *)((int)this + 0xcc) = (undefined1 *)((int)this + 0xd8);
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xcc),"Batang",6);
  *(undefined4 *)((int)this + 0xf4) = 10;
  *(undefined2 **)((int)this + 0xec) = (undefined2 *)((int)this + 0xf8);
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  return this;
}


//// FUNCTION FUN_00750430 @ 00750430 ////

undefined4 * __thiscall
FUN_00750430(void *this,undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4,
            uint param_5)

{
  undefined4 *_Memory;
  undefined4 *this_00;
  undefined4 in_stack_0000002c;
  undefined1 in_stack_00000030;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd66e3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = this;
  local_10 = operator_new(0x110);
  local_4._0_1_ = 1;
  if (local_10 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00750310(local_10,this);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  local_10 = this_00;
  if (this_00 == (undefined4 *)0x0) {
    if (10 < param_5) {
                    /* WARNING: Subroutine does not return */
      _free(param_3);
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  this_00[0x30] = param_1;
  this_00[0x31] = param_2;
  _Memory = (undefined4 *)this_00[0x43];
  if (_Memory != (undefined4 *)0x0) {
    FUN_0074cdd0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this_00[0x43] = in_stack_0000002c;
  FUN_0074f130(this_00,&param_3);
  *(undefined1 *)(this_00 + 0x2f) = in_stack_00000030;
  FUN_007502c0((void *)((int)this + 100),&local_10);
  FUN_00770520(DAT_0104e478);
  FUN_00773420(DAT_0104e478);
  if (10 < param_5) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_00750550 @ 00750550 ////

void FUN_00750550(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd66fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00559fb0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104e1b8[1])();
  DAT_0104e1cc = puVar2;
  (*(code *)*DAT_0104e1b8)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007505d0 @ 007505d0 ////

void FUN_007505d0(void)

{
  if (DAT_0104e1cc != (undefined4 *)0x0) {
    (**(code **)*DAT_0104e1cc)(1);
  }
  (*(code *)DAT_0104e1b8[1])();
  DAT_0104e1cc = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00750602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104e1b8)();
  return;
}


//// FUNCTION FUN_00750610 @ 00750610 ////

void __cdecl FUN_00750610(int param_1,void *param_2,undefined4 param_3,uint param_4)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6718;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  fVar1 = FUN_00558610(DAT_0104e1cc,&param_2,0.0);
  if ((float)fVar1 != 0.0) {
    FUN_00a26e10((byte)param_1,'\x01');
    *(float *)(&DAT_010b96f0 + param_1 * 4) = (float)fVar1;
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007506a0 @ 007506a0 ////

void __cdecl FUN_007506a0(void *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char local_54 [4];
  undefined4 local_50;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd6740;
  local_c = ExceptionList;
  local_4 = 0;
  uVar2 = 0;
  ExceptionList = &local_c;
  do {
    FUN_00a26e10((byte)uVar2,'\0');
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (DAT_0104e1cc == (void *)0x0) {
    FUN_00750550();
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_50 = 0x750709;
  _strncpy(local_2c,"postproc/filters",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(DAT_0104e1cc,&local_2c,'\0');
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar1 = FUN_00558a50(DAT_0104e1cc,&param_1,(undefined4 *)0x1);
  if ((char)uVar1 != '\0') {
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Blur",4);
    uVar1 = 4;
    iVar3 = 0;
    pcVar4[4] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"BlackAndWhite",0xd);
    uVar1 = 0xd;
    iVar3 = 1;
    pcVar4[0xd] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"EdgeFade",8);
    uVar1 = 8;
    iVar3 = 2;
    pcVar4[8] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Grain",5);
    uVar1 = 5;
    iVar3 = 3;
    pcVar4[5] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Scratch",7);
    uVar1 = 7;
    iVar3 = 4;
    pcVar4[7] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"VSync",5);
    uVar1 = 5;
    iVar3 = 5;
    pcVar4[5] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Hair",4);
    uVar1 = 4;
    iVar3 = 6;
    pcVar4[4] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Blotch",6);
    uVar1 = 6;
    iVar3 = 7;
    pcVar4[6] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"AntiqueWhite",0xc);
    uVar1 = 0xc;
    pcVar4[0xc] = '\0';
    FUN_00750610(8,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"AntiqueWhite",0xc);
    uVar1 = 0xc;
    iVar3 = 8;
    pcVar4[0xc] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"2Colour",7);
    uVar1 = 7;
    iVar3 = 9;
    pcVar4[7] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"HandColour",10);
    uVar1 = 10;
    iVar3 = 10;
    pcVar4[10] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"CigaretteHoles",0xe);
    uVar1 = 0xe;
    iVar3 = 0xb;
    pcVar4[0xe] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Shake",5);
    uVar1 = 5;
    iVar3 = 0xc;
    pcVar4[5] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Contrast",8);
    uVar1 = 8;
    iVar3 = 0xd;
    pcVar4[8] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Brightness",10);
    uVar1 = 10;
    iVar3 = 0xe;
    pcVar4[10] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
    pcVar4 = local_54;
    local_54[0] = '\0';
    uVar2 = 0x14;
    _strncpy(pcVar4,"Crank",5);
    uVar1 = 5;
    iVar3 = 0xf;
    pcVar4[5] = '\0';
    FUN_00750610(iVar3,pcVar4,uVar1,uVar2);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00750d10 @ 00750d10 ////

void __cdecl FUN_00750d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00750f40 @ 00750f40 ////

void __cdecl FUN_00750f40(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00751030 @ 00751030 ////

void * FUN_00751030(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00751060 @ 00751060 ////

undefined4 __cdecl FUN_00751060(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0104e1d4;
  while( true ) {
    if (piVar1 == DAT_0104e1d8) {
      return 0;
    }
    if (((undefined4 *)*piVar1)[1] == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(undefined4 *)*piVar1;
}


//// FUNCTION FUN_007510e0 @ 007510e0 ////

void __fastcall FUN_007510e0(int param_1)

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


//// FUNCTION FUN_00751110 @ 00751110 ////

undefined4 * FUN_00751110(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00751140 @ 00751140 ////

/* WARNING: Removing unreachable block (ram,0x00751210) */

int __cdecl FUN_00751140(wchar_t *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *_Source;
  int local_2c;
  uint local_28;
  wchar_t *local_20;
  uint local_18;
  wchar_t local_14 [10];
  
  iVar2 = DAT_0104e4a8;
  local_2c = 0;
  local_28 = 0;
  if (*(int *)(DAT_0104e4a8 + 0xd0) != 0) {
    do {
      uVar5 = *(int *)(iVar2 + 0xcc) + local_28;
      uVar3 = uVar5 >> 2;
      iVar1 = uVar3 * -4;
      if (*(uint *)(iVar2 + 200) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(iVar2 + 200);
      }
      iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0xc4) + uVar3 * 4) + (uVar5 + iVar1) * 4);
      if (iVar1 != 0) {
        for (uVar3 = 0;
            (iVar4 = *(int *)(iVar1 + 0x130), iVar4 != 0 &&
            (uVar3 < (uint)(*(int *)(iVar1 + 0x134) - iVar4 >> 2))); uVar3 = uVar3 + 1) {
          _Source = (wchar_t *)(*(int *)(iVar4 + uVar3 * 4) + 0xdc);
          local_20 = local_14;
          local_14[0] = L'\0';
          local_18 = 10;
          uVar5 = FUN_00ace02d(_Source);
          if (9 < uVar5) {
            local_18 = uVar5 + 0x20 & 0xffffffe0;
            local_20 = _malloc(local_18 * 2);
          }
          _wcsncpy(local_20,_Source,uVar5);
          local_20[uVar5] = L'\0';
          iVar4 = _wcscmp(param_1,local_20);
          if (iVar4 == 0) {
            if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
              _free(local_20);
            }
            if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
              _free(param_1);
            }
            return local_2c;
          }
          local_2c = local_2c + 1;
          if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
            _free(local_20);
          }
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(uint *)(iVar2 + 0xd0));
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return 0;
}


//// FUNCTION FUN_00751300 @ 00751300 ////

void __cdecl FUN_00751300(int param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  uint uVar4;
  wchar_t local_1c [10];
  
  pwVar2 = local_1c;
  local_1c[0] = L'\0';
  uVar3 = 0;
  uVar4 = 10;
  uVar1 = FUN_00ace02d((wchar_t *)(param_1 + 0xdc));
  FUN_004036d0(&stack0xffffffd8,(wchar_t *)(param_1 + 0xdc),uVar1);
  FUN_00751140(pwVar2,uVar3,uVar4);
  return;
}


//// FUNCTION FUN_00751350 @ 00751350 ////

void __fastcall FUN_00751350(int param_1)

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


//// FUNCTION FUN_00751380 @ 00751380 ////

void __fastcall FUN_00751380(int param_1)

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


//// FUNCTION FUN_007513b0 @ 007513b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007513b0(void)

{
  FUN_00a29560();
  if (DAT_0104e1d4 != DAT_0104e1d8) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*DAT_0104e1d4);
  }
  if (DAT_0104e1d4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104e1d4);
  }
  DAT_0104e1d4 = (undefined4 *)0x0;
  DAT_0104e1d8 = (undefined4 *)0x0;
  _DAT_0104e1dc = 0;
  return;
}


//// FUNCTION FUN_00751410 @ 00751410 ////

void FUN_00751410(void)

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
  puStack_8 = &LAB_00cd6758;
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


//// FUNCTION FUN_007514d0 @ 007514d0 ////

void __thiscall FUN_007514d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00751410();
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
      _Dst = FUN_00751110((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00751030(param_1,iVar5,param_1 + param_2);
      FUN_00751110(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00750d10(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00751030(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00750f40(param_1,(int)pvVar3,iVar5);
    FUN_00750d10(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00751710 @ 00751710 ////

void __thiscall FUN_00751710(void *this,undefined4 *param_1)

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
  FUN_007514d0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007517b0 @ 007517b0 ////

void FUN_007517b0(void)

{
  int iVar1;
  char *_Source;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  uint uVar7;
  wchar_t local_dc [2];
  undefined4 uStack_d8;
  undefined4 *local_b8;
  int local_b4;
  uint local_b0;
  char *local_ac;
  uint local_a8;
  uint local_a4;
  char local_a0 [20];
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007513b0();
  iVar4 = *(int *)(DAT_0104e478 + 0x378);
  local_b0 = 0;
  local_b4 = iVar4;
  do {
    iVar1 = *(int *)(iVar4 + 0x68);
    if ((iVar1 == 0) || ((uint)(*(int *)(iVar4 + 0x6c) - iVar1 >> 2) <= local_b0)) {
      ExceptionList = local_c;
      return;
    }
    iVar1 = *(int *)(iVar1 + local_b0 * 4);
    if (*(int *)(iVar1 + 0x9c) != 0) {
      local_ac = local_a0;
      local_a0[0] = '\0';
      local_a8 = 0;
      local_a4 = 0x14;
      local_4 = 0;
      puVar2 = (undefined4 *)FUN_00567ff0(local_8c);
      local_4._0_1_ = 1;
      uStack_d8 = 0x751857;
      puVar2 = FUN_00568870(local_4c,puVar2);
      FUN_004073f0(&local_ac,(char *)*puVar2,puVar2[1]);
      FUN_004073f0(&local_ac,"\\The Movies\\Movies\\",0x13);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      puVar2 = FUN_00568870(local_6c,(undefined4 *)(iVar1 + 0xec));
      FUN_004073f0(&local_ac,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      uStack_d8 = 0x7518fc;
      puVar2 = FUN_00430770(&local_ac,local_2c,0,local_a8 - 4);
      uVar7 = puVar2[1];
      _Source = (char *)*puVar2;
      if (local_a4 <= uVar7) {
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
        local_a4 = uVar7 + 0x20 & 0xffffffe0;
        local_ac = _malloc(local_a4);
      }
      uStack_d8 = 0x751941;
      _strncpy(local_ac,_Source,uVar7);
      local_ac[uVar7] = '\0';
      local_a8 = uVar7;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      FUN_004073f0(&local_ac,".lip",4);
      piVar3 = (int *)FUN_00a29bd0(local_ac);
      if (piVar3 != (int *)0x0) {
        local_b8 = (undefined4 *)&stack0xffffff18;
        pwVar5 = local_dc;
        local_dc[0] = L'\0';
        uVar6 = 0;
        uVar7 = 10;
        FUN_004036d0(&stack0xffffff18,*(wchar_t **)(iVar1 + 0x98),*(uint *)(iVar1 + 0x9c));
        iVar4 = FUN_00751140(pwVar5,uVar6,uVar7);
        FUN_00a29910(piVar3,iVar4);
        local_b8 = operator_new(8);
        if (local_b8 == (undefined4 *)0x0) {
          local_b8 = (undefined4 *)0x0;
        }
        else {
          *local_b8 = 0;
          local_b8[1] = 0;
        }
        local_b8[1] = iVar1;
        *local_b8 = piVar3;
        FUN_00751710(&DAT_0104e1d0,&local_b8);
      }
      local_4 = 0xffffffff;
      iVar4 = local_b4;
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
    }
    local_b0 = local_b0 + 1;
  } while( true );
}


//// FUNCTION FUN_00751a80 @ 00751a80 ////

void __thiscall FUN_00751a80(void *this,undefined4 param_1)

{
  FUN_00770520((int)this);
  *(undefined4 *)((int)this + 0x444) = param_1;
  return;
}


//// FUNCTION FUN_00751c50 @ 00751c50 ////

undefined4 FUN_00751c50(void)

{
  void *this;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  float10 fVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 local_7c [6];
  undefined4 uStack_70;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd67ab;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040cae0(&local_4c,(wchar_t *)PTR_DAT_00e59204,DAT_00e59208);
  FUN_0040cae0(&local_4c,(wchar_t *)PTR_DAT_00e591e4,DAT_00e591e8);
  FUN_00568870(local_2c,&local_4c);
  local_4._0_1_ = 1;
  uStack_70 = 0x751cd2;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0074cd30(puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  bVar1 = FUN_0074d420(puVar2,local_2c[0]);
  if (bVar1) {
    fVar3 = FUN_0074cde0((int)puVar2);
    this = *(void **)(DAT_0104e478 + 0x378);
    puVar4 = local_7c;
    local_7c[0] = 0;
    uVar5 = 0;
    uVar6 = 10;
    FUN_004036d0(&stack0xffffff78,local_4c,local_48);
    this_00 = FUN_00750430(this,*(undefined4 *)(DAT_0104e478 + 0x3b8),
                           (int)ROUND((float)(fVar3 * (float10)1000.0)),puVar4,uVar5,uVar6);
    if (this_00 != (undefined4 *)0x0) {
      FUN_0074e920(this_00,puVar2);
      goto LAB_00751d98;
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0074cdd0(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
LAB_00751d98:
  uVar5 = FUN_0075e320();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00751de0 @ 00751de0 ////

undefined4 FUN_00751de0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *this;
  void *this_00;
  float10 fVar6;
  char *pcVar7;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  char *pcStack_6c;
  int iStack_68;
  uint uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd67e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00773420(DAT_0104e478);
  if (DAT_00e59088 == 0) {
    *(undefined4 *)(param_2 + 200) = 0xffffffff;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    uVar2 = FUN_004036d0((void *)(param_2 + 0x98),(wchar_t *)&lpCaption_00d16918,uVar1);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  *(undefined4 *)(param_2 + 200) = 0xffff0000;
  uVar2 = FUN_004036d0((void *)(param_2 + 0x98),(wchar_t *)PTR_DAT_00e59084,DAT_00e59088);
  if ((*(int *)(param_2 + 0x9c) != 0) && (uVar2 = FUN_00a29e50(), (char)uVar2 != '\0')) {
    piVar3 = (int *)FUN_0074e910(param_2);
    piVar3 = (int *)FUN_0074cf30(piVar3);
    if (piVar3 != (int *)0x0) {
      iStack_78 = *piVar3;
      iStack_70 = piVar3[4];
      uStack_74 = (uint)piVar3[1] >> 1;
      fVar6 = FUN_0074cde0((int)piVar3);
      if (((float10)15.0 < fVar6) && (puVar4 = FUN_006b85a0(), puVar4 != (undefined4 *)0x0)) {
        FUN_00401de0(&pcStack_6c,"FRONTEND_WARNING_LIPSYNCH_SAMPLE_TOO_LONG",0xffffffff);
        uStack_4 = 0;
        puVar5 = FUN_009b5030(apvStack_4c,&pcStack_6c);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_006b8100(puVar4,puVar5);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
      }
      if ((uStack_74 != 0) && (uVar2 = FUN_00a2a480(&iStack_78), (char)uVar2 != '\0')) {
        do {
          FUN_00a2a8a0();
          uVar1 = FUN_00a2a340();
        } while ((char)uVar1 == '\0');
        this = (void *)FUN_00a2acc0();
        pcStack_6c = acStack_60;
        acStack_60[0] = '\0';
        iStack_68 = 0;
        uStack_64 = 0x14;
        uStack_4 = 2;
        puVar4 = (undefined4 *)FUN_00567ff0(apvStack_2c);
        uStack_4._0_1_ = 3;
        puVar4 = FUN_00568870(apvStack_4c,puVar4);
        pcVar7 = "\\The Movies\\Movies\\";
        this_00 = FUN_004211a0(&pcStack_6c,puVar4);
        FUN_00407630(this_00,pcVar7);
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        puVar4 = FUN_00568870(apvStack_2c,(undefined4 *)(param_2 + 0xec));
        FUN_004211a0(&pcStack_6c,puVar4);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        puVar4 = FUN_00430770(&pcStack_6c,apvStack_2c,0,iStack_68 - 4);
        FUN_00401e30(&pcStack_6c,puVar4);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        FUN_00407630(&pcStack_6c,".lip");
        FUN_00a29d30(this,pcStack_6c);
        FUN_007517b0();
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
      }
      FUN_0074cdd0(piVar3);
                    /* WARNING: Subroutine does not return */
      _free(piVar3);
    }
    uVar2 = FUN_00a2a410();
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00752110 @ 00752110 ////

undefined4 FUN_00752110(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30 [10];
  code *pcStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd67fb;
  local_c = ExceptionList;
  pcStack_1c = (code *)0x752131;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x3b0);
  local_4 = 0;
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    pcStack_1c = FUN_00751de0;
    local_3c = local_30;
    local_30[0] = 0;
    local_38 = 0;
    local_34 = 10;
    FUN_004036d0(&local_3c,*(wchar_t **)(param_2 + 0x98),*(uint *)(param_2 + 0x9c));
    piVar2 = FUN_0075c930(piVar1);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION FUN_007521a0 @ 007521a0 ////

void __fastcall FUN_007521a0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_8;
  
  FUN_007517b0();
  local_8 = 0;
  if (*(int *)(DAT_0104e4a8 + 0xd0) != 0) {
    do {
      uVar7 = *(int *)(DAT_0104e4a8 + 0xcc) + local_8;
      uVar4 = uVar7 >> 2;
      iVar1 = uVar4 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(DAT_0104e4a8 + 200);
      }
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar4 * 4) + (uVar7 + iVar1) * 4);
      puVar5 = (undefined4 *)FUN_00773f30(param_1,iVar1);
      if (puVar5 != (undefined4 *)0x0) {
        for (uVar4 = 0;
            (iVar2 = *(int *)(iVar1 + 0x130), iVar2 != 0 &&
            (uVar4 < (uint)(*(int *)(iVar1 + 0x134) - iVar2 >> 2))); uVar4 = uVar4 + 1) {
          piVar3 = *(int **)(iVar2 + uVar4 * 4);
          uVar6 = FUN_00751300((int)piVar3);
          FUN_00972270((void *)*puVar5,*piVar3,uVar6);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(DAT_0104e4a8 + 0xd0));
  }
  return;
}


//// FUNCTION FUN_00752270 @ 00752270 ////

void __thiscall FUN_00752270(void *this,undefined4 param_1)

{
  FUN_00770520((int)this);
  FUN_00773420((int)this);
  *(undefined4 *)((int)this + 0x43c) = param_1;
  FUN_009b1000(1,param_1,0);
  return;
}


//// FUNCTION FUN_007522c0 @ 007522c0 ////

void __fastcall FUN_007522c0(int param_1)

{
  FUN_00770520(param_1);
  FUN_00773420(param_1);
  FUN_009b07a0(0);
  return;
}


//// FUNCTION FUN_007524d0 @ 007524d0 ////

undefined4 FUN_007524d0(void)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  wchar_t local_94 [2];
  undefined4 uStack_90;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
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
  puStack_8 = &LAB_00cd6868;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &local_c;
  FUN_004036d0(&local_4c,(wchar_t *)PTR_DAT_00e59204,DAT_00e59208);
  local_4 = 0;
  FUN_0040cae0(&local_4c,(wchar_t *)PTR_DAT_00e591e4,DAT_00e591e8);
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  FUN_004036d0(&local_6c,(wchar_t *)PTR_DAT_00e591e4,DAT_00e591e8);
  pwVar6 = local_94;
  local_94[0] = L'\0';
  uVar7 = 0;
  uVar8 = 10;
  local_4._0_1_ = 1;
  FUN_004036d0(&stack0xffffff60,local_6c,local_68);
  puVar1 = FUN_0075b400(local_2c,pwVar6,uVar7,uVar8);
  FUN_004036d0(&local_6c,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  piVar2 = FUN_00568870(local_2c,&local_4c);
  local_4._0_1_ = 2;
  uStack_90 = 0x7525e3;
  fVar3 = FUN_009b0660(*piVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  this = *(void **)(DAT_0104e478 + 0x370);
  if (this != (void *)0x0) {
    puVar4 = &stack0xffffff64;
    uVar5 = 0;
    uVar7 = 10;
    FUN_004036d0(&stack0xffffff58,local_6c,local_68);
    puVar1 = FUN_00750430(this,*(undefined4 *)(DAT_0104e478 + 0x3b8),
                          (int)ROUND((float)(fVar3 * (float10)1000.0)),puVar4,uVar5,uVar7);
    FUN_004036d0(puVar1 + 0x1d,local_4c,local_48);
  }
  uVar5 = FUN_0075e320();
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_007526e5 @ 007526e5 ////

/* WARNING: Variable defined which should be unmapped: param_2 */
/* WARNING: Removing unreachable block (ram,0x00752823) */

void __thiscall FUN_007526e5(void *this,char *param_1,undefined4 param_2,uint param_3,char param_4)

{
  size_t sVar1;
  uint uVar2;
  char cVar3;
  void *unaff_EBX;
  bool in_ZF;
  undefined2 *in_stack_00000024;
  undefined2 in_stack_00000030;
  undefined1 *puStack00000044;
  uint uStack0000004c;
  undefined2 uStack00000050;
  void *in_stack_00000064;
  uint in_stack_0000006c;
  void *in_stack_00000084;
  undefined4 in_stack_00000094;
  
  if ((!in_ZF) && (DAT_0104e310 == unaff_EBX)) {
    FUN_00770520((int)this);
    *(undefined4 *)((int)this + 0x3b8) = in_stack_00000094;
    FUN_00567ff0(&stack0x00000064);
    sVar1 = FUN_00ace02d(L"\\The Movies\\Movie Music\\");
    FUN_0040cae0(&stack0x00000064,L"\\The Movies\\Movie Music\\",sVar1);
    param_1 = &param_4;
    cVar3 = (char)unaff_EBX;
    param_3 = 0x14;
    param_4 = cVar3;
    _strncpy(param_1,"POST_MUSIC_TRACK",0x10);
    param_2 = 0x10;
    param_1[0x10] = cVar3;
    puStack00000044 = (undefined1 *)&stack0x00000050;
    uStack0000004c = 10;
    uStack00000050 = (short)unaff_EBX;
    uVar2 = FUN_00ace02d(L"ogg;wma");
    FUN_004036d0(&stack0x00000044,L"ogg;wma",uVar2);
    FUN_00761340(&param_1,&stack0x00000064,&stack0x00000044,0x7524d0,cVar3,cVar3);
    if (DAT_0104e310 != unaff_EBX) {
      in_stack_00000024 = &stack0x00000030;
      in_stack_00000030 = (short)unaff_EBX;
      uVar2 = FUN_00ace02d(L"data\\audio\\music\\");
      FUN_004036d0(&stack0x00000024,L"data\\audio\\music\\",uVar2);
      FUN_0075fc10(DAT_0104e310,&stack0x00000024);
    }
    if (10 < uStack0000004c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack00000044);
    }
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (10 < in_stack_0000006c) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000064);
    }
  }
  ExceptionList = in_stack_00000084;
  return;
}


//// FUNCTION FUN_007528f0 @ 007528f0 ////

void __fastcall FUN_007528f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x36c);
  if (iVar1 != 0) {
    for (uVar2 = 0;
        (*(int *)(iVar1 + 0x68) != 0 &&
        (uVar2 < (uint)(*(int *)(iVar1 + 0x6c) - *(int *)(iVar1 + 0x68) >> 2))); uVar2 = uVar2 + 1)
    {
    }
  }
  return;
}


//// FUNCTION FUN_00752930 @ 00752930 ////

void __thiscall FUN_00752930(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x43c) = param_1;
  return;
}


//// FUNCTION FUN_00752b30 @ 00752b30 ////

undefined4 * __thiscall
FUN_00752b30(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *this_00;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd68f5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069fb10(this,param_1,param_2,param_3,param_4,0,0,0x3f800000,0x3f800000);
  piVar1 = (int *)((int)this + 0x42c);
  *(undefined ***)this = &PTR_FUN_00d4c6b4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4c69c;
  *(undefined4 *)((int)this + 0x434) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x444) = (undefined1 *)((int)this + 0x450);
  *(undefined1 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0x14;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_004015d0((undefined4 *)((int)this + 0x444),(char *)*param_1,param_1[1]);
  puVar2 = operator_new(0x344);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  *(int **)((int)this + 0x420) = piVar3;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar3 + 100))();
  (**(code **)(**(int **)((int)this + 0x420) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x420) + 0x74))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x420));
  puVar2 = operator_new(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005e4870(puVar2);
  }
  *(undefined4 **)((int)this + 0x428) = puVar4;
  (**(code **)(**(int **)((int)this + 0x420) + 0xa0))();
  FUN_0073e4e0(this,this);
  FUN_00740dc0(this,puVar2);
  this_00 = operator_new(0x360);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0069d820(this_00,param_1,0,0,0x3f800000,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x424) = puVar2;
  puVar2[0x86] = puVar2[0x86] | 0x40;
  (**(code **)(**(int **)((int)this + 0x424) + 0x74))();
  (**(code **)(**(int **)((int)this + 0x424) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x424) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x424));
  (**(code **)(**(int **)((int)this + 0x424) + 0x18))();
  *(void **)((int)this + 0x434) = this;
  FUN_00acdb9e(0xe58e4c);
  iVar5 = FUN_0097dda0();
  *(int *)((int)this + 0x438) = iVar5;
  if (DAT_00e58e48 != '\0') {
    iVar5 = 0x42c;
    pcVar7 = "MyLink";
    pcVar6 = (char *)FUN_00acdb9e(0xe58e4c);
    FUN_0097df60(pcVar6,pcVar7,iVar5);
    DAT_00e58e48 = '\0';
  }
  *(int ***)((int)this + 0x430) = &DAT_0104e208;
  *piVar1 = (int)DAT_0104e208;
  *(int **)((int)DAT_0104e208 + 4) = piVar1;
  DAT_0104e208 = piVar1;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined1 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x440) = 0xffffffff;
  ExceptionList = (void *)0x40800000;
  return this;
}


//// FUNCTION FUN_00752e40 @ 00752e40 ////

void __fastcall FUN_00752e40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4c6b4;
  param_1[0x14] = &PTR_FUN_00d4c69c;
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  if (0x14 < (uint)param_1[0x113]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x111]);
  }
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00752ee0 @ 00752ee0 ////

undefined4 * __thiscall FUN_00752ee0(void *this,byte param_1)

{
  FUN_00752e40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00752f00 @ 00752f00 ////

void __fastcall FUN_00752f00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d4c7b8;
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


//// FUNCTION FUN_00752f50 @ 00752f50 ////

undefined4 * __thiscall FUN_00752f50(void *this,byte param_1)

{
  FUN_00752f00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00752f70 @ 00752f70 ////

void __fastcall FUN_00752f70(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d4c7b8;
  return;
}


//// FUNCTION FUN_00753050 @ 00753050 ////

void __fastcall FUN_00753050(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00753120 @ 00753120 ////

void __cdecl FUN_00753120(int param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *(int *)(param_1 + 4) - 8;
  *param_3 = uVar1;
  puVar2 = operator_new(uVar1);
  *param_2 = puVar2;
  uVar1 = *param_3;
  puVar4 = (undefined4 *)(param_1 + 8);
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}


//// FUNCTION FUN_00753160 @ 00753160 ////

int __thiscall FUN_00753160(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  puVar2 = param_1 + 6;
  puVar3 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x88;
  puVar3 = (undefined4 *)((int)this + 0x220);
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x428) = param_1[0x10a];
  *(undefined4 *)((int)this + 0x42c) = param_1[0x10b];
  *(undefined4 *)((int)this + 0x430) = param_1[0x10c];
  puVar2 = param_1 + 0x10d;
  puVar3 = (undefined4 *)((int)this + 0x434);
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x63c) = param_1[399];
  *(undefined4 *)((int)this + 0x640) = param_1[400];
  *(undefined4 *)((int)this + 0x644) = param_1[0x191];
  puVar2 = param_1 + 0x192;
  puVar3 = (undefined4 *)((int)this + 0x648);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x1d3;
  puVar3 = (undefined4 *)((int)this + 0x74c);
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x255;
  puVar3 = (undefined4 *)((int)this + 0x954);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x296;
  puVar3 = (undefined4 *)((int)this + 0xa58);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x2d7;
  puVar3 = (undefined4 *)((int)this + 0xb5c);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x318;
  puVar3 = (undefined4 *)((int)this + 0xc60);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x359;
  puVar3 = (undefined4 *)((int)this + 0xd64);
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xe68) = param_1[0x39a];
  *(undefined4 *)((int)this + 0xe6c) = param_1[0x39b];
  *(undefined4 *)((int)this + 0xe70) = param_1[0x39c];
  *(undefined4 *)((int)this + 0xe74) = param_1[0x39d];
  puVar2 = param_1 + 0x39e;
  puVar3 = (undefined4 *)((int)this + 0xe78);
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1080) = param_1[0x420];
  *(undefined4 *)((int)this + 0x1084) = param_1[0x421];
  *(undefined4 *)((int)this + 0x1088) = param_1[0x422];
  *(undefined4 *)((int)this + 0x108c) = param_1[0x423];
  *(undefined4 *)((int)this + 0x1090) = param_1[0x424];
  *(undefined4 *)((int)this + 0x1094) = param_1[0x425];
  *(undefined4 *)((int)this + 0x1098) = param_1[0x426];
  *(undefined4 *)((int)this + 0x109c) = param_1[0x427];
  return (int)(param_1 + 0x427) + (4 - (int)param_1);
}


//// FUNCTION FUN_00753350 @ 00753350 ////

void __cdecl FUN_00753350(uint *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  int _Value;
  int iVar5;
  undefined2 *puVar6;
  uint local_858 [21];
  undefined1 auStack_801 [2];
  undefined1 uStack_7ff;
  undefined1 local_7fe [2046];
  
  FUN_00a24780(local_858);
  FUN_00a247b0(local_858,param_1,param_2);
  iVar5 = (int)param_2 % 0xb;
  if (iVar5 == 0) {
    iVar5 = 0x11;
  }
  _Value = 0;
  iVar3 = 0;
  if (0 < (int)param_2) {
    do {
      pcVar4 = (char *)(iVar3 + (int)param_1);
      iVar3 = iVar3 + iVar5;
      _Value = _Value + *pcVar4;
    } while (iVar3 < (int)param_2);
  }
  __itoa(_Value,auStack_801 + 1,10);
  puVar2 = (undefined2 *)auStack_801;
  do {
    puVar6 = puVar2;
    puVar2 = (undefined2 *)((int)puVar6 + 1);
  } while (*(char *)((int)puVar6 + 1) != '\0');
  *(undefined2 *)((int)puVar6 + 1) = 0x3038;
  *(undefined1 *)((int)puVar6 + 3) = 0;
  pcVar4 = auStack_801 + 1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00a247b0(local_858,(uint *)(auStack_801 + 1),(int)pcVar4 - (int)&uStack_7ff);
  FUN_00a24880(local_858,param_3);
  return;
}


//// FUNCTION FUN_00753420 @ 00753420 ////

void __fastcall FUN_00753420(undefined4 *param_1)

{
  int iVar1;
  
  if ((void *)param_1[0x59] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x59]);
  }
  for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00753450 @ 00753450 ////

void __thiscall FUN_00753450(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x164) = param_1;
  return;
}


//// FUNCTION FUN_00753460 @ 00753460 ////

undefined4 __fastcall FUN_00753460(int param_1)

{
  return *(undefined4 *)(param_1 + 0x164);
}


//// FUNCTION FUN_007534e0 @ 007534e0 ////

int __thiscall FUN_007534e0(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  puVar4 = param_1 + 5;
  puVar5 = (undefined4 *)((int)this + 0x14);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_1 + 0xd;
  puVar5 = (undefined4 *)((int)this + 0x34);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  puVar4 = param_1 + 0x17;
  puVar5 = (undefined4 *)((int)this + 0x5c);
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_1 + 0x37;
  puVar5 = (undefined4 *)((int)this + 0xdc);
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  puVar2 = FUN_009cd120(param_1 + 0x5a);
  *(uint **)((int)this + 0x164) = puVar2;
  uVar1 = *puVar2;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (int)(param_1 + 0x5a) + (uVar1 - (int)param_1);
}


//// FUNCTION FUN_007535c0 @ 007535c0 ////

int __fastcall FUN_007535c0(int param_1)

{
  return *(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xf4);
}


//// FUNCTION FUN_007535d0 @ 007535d0 ////

int __fastcall FUN_007535d0(int param_1)

{
  return *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x100);
}


//// FUNCTION FUN_007535e0 @ 007535e0 ////

int __fastcall FUN_007535e0(int param_1)

{
  return ((*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0x100)) - *(int *)(param_1 + 0xfc)) -
         *(int *)(param_1 + 0xf4);
}


//// FUNCTION FUN_00753600 @ 00753600 ////

int __thiscall FUN_00753600(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x10;
  puVar3 = (undefined4 *)((int)this + 0x40);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x18;
  puVar3 = (undefined4 *)((int)this + 0x60);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x20;
  puVar3 = (undefined4 *)((int)this + 0x80);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  *(undefined4 *)((int)this + 0xa4) = param_1[0x29];
  *(undefined4 *)((int)this + 0xa8) = param_1[0x2a];
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  *(undefined4 *)((int)this + 0xc0) = param_1[0x30];
  *(undefined4 *)((int)this + 0xc4) = param_1[0x31];
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  return (int)(param_1 + 0x32) + (4 - (int)param_1);
}


//// FUNCTION FUN_00753770 @ 00753770 ////

uint * __cdecl FUN_00753770(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = param_1 + 4;
  iVar3 = 0;
  do {
    bVar1 = FUN_00541f60(iVar3);
    *puVar2 = (uint)bVar1;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  param_1[1] = (int)puVar2 - (int)param_1;
  *param_1 = 8;
  param_1[2] = 3;
  param_1[3] = 0;
  return puVar2;
}


//// FUNCTION FUN_00753b40 @ 00753b40 ////

void __cdecl FUN_00753b40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00753b80 @ 00753b80 ////

void __cdecl FUN_00753b80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00753bc0 @ 00753bc0 ////

void __cdecl FUN_00753bc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00753c00 @ 00753c00 ////

void __cdecl FUN_00753c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00753ef0 @ 00753ef0 ////

uint __thiscall FUN_00753ef0(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x15c) == *(int *)((int)this + 0x15c)) {
    pbVar1 = *(byte **)((int)this + 0x164);
    param_1 = *(byte **)(param_1 + 0x164);
    if (*(int *)param_1 == *(int *)pbVar1) {
      iVar2 = *(int *)(pbVar1 + 0x2c);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      pbVar1[0x2c] = 0;
      pbVar1[0x2d] = 0;
      pbVar1[0x2e] = 0;
      pbVar1[0x2f] = 0;
      iVar4 = *(int *)param_1;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      bVar8 = false;
      iVar5 = 0;
      bVar9 = true;
      pbVar6 = param_1;
      pbVar7 = pbVar1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *pbVar6 < *pbVar7;
        bVar9 = *pbVar6 == *pbVar7;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar9);
      if (!bVar9) {
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      *(int *)(pbVar1 + 0x2c) = iVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      return CONCAT31((int3)((uint)param_1 >> 8),iVar5 == 0);
    }
  }
  return (uint)param_1 & 0xffffff00;
}


//// FUNCTION FUN_00753f70 @ 00753f70 ////

void __cdecl FUN_00753f70(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00753350(param_2,param_3,(int)&local_10);
  iVar2 = 0;
  do {
    iVar1 = FUN_00990d30(0,0xff);
    *(char *)(param_1 + 0x2a0 + iVar2) = (char)iVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x400);
  *(undefined4 *)(param_1 + 0x582) = local_10;
  *(undefined4 *)(param_1 + 0x586) = local_c;
  *(undefined4 *)(param_1 + 0x58a) = local_8;
  *(undefined4 *)(param_1 + 0x58e) = local_4;
  return;
}


//// FUNCTION FUN_007540d0 @ 007540d0 ////

int __thiscall FUN_007540d0(void *this,int param_1)

{
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}


//// FUNCTION FUN_007542d0 @ 007542d0 ////

void __cdecl FUN_007542d0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00754310 @ 00754310 ////

void __cdecl FUN_00754310(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00754350 @ 00754350 ////

void __cdecl FUN_00754350(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00754390 @ 00754390 ////

void __cdecl FUN_00754390(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_007543c0 @ 007543c0 ////

void __cdecl
FUN_007543c0(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  for (; (param_2 != param_4 || (param_3 != param_5)); param_3 = param_3 + 1) {
    uVar3 = param_3 >> 2;
    iVar1 = uVar3 * -4;
    if (*(uint *)(param_2 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_2 + 8);
    }
    uVar2 = param_7 >> 2;
    iVar4 = param_7 + uVar2 * -4;
    if (*(uint *)(param_6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_6 + 8);
    }
    param_7 = param_7 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_6 + 4) + uVar2 * 4) + iVar4 * 4) =
         *(undefined4 *)(*(int *)(*(int *)(param_2 + 4) + uVar3 * 4) + (param_3 + iVar1) * 4);
  }
  param_1[1] = param_7;
  *param_1 = param_6;
  return;
}


//// FUNCTION FUN_00754450 @ 00754450 ////

void __cdecl
FUN_00754450(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  while ((param_2 != param_4 || (param_3 != param_5))) {
    param_5 = param_5 - 1;
    uVar4 = param_5 >> 2;
    iVar1 = uVar4 * -4;
    if (*(uint *)(param_4 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_4 + 8);
    }
    param_7 = param_7 - 1;
    uVar3 = param_7 >> 2;
    iVar2 = uVar3 * -4;
    if (*(uint *)(param_6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_6 + 8);
    }
    *(undefined4 *)(*(int *)(*(int *)(param_6 + 4) + uVar3 * 4) + (param_7 + iVar2) * 4) =
         *(undefined4 *)(*(int *)(*(int *)(param_4 + 4) + uVar4 * 4) + (param_5 + iVar1) * 4);
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}


//// FUNCTION FUN_00754620 @ 00754620 ////

void __fastcall FUN_00754620(int *param_1)

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
  puStack_8 = &LAB_00cd6928;
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


//// FUNCTION FUN_007546f0 @ 007546f0 ////

void __thiscall FUN_007546f0(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6948;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004036d0((void *)((int)this + 0x60),param_1,param_2);
  piVar1 = FUN_00569220((int *)local_2c,(int *)&param_1);
  FUN_004036d0((void *)((int)this + 0x80),(wchar_t *)*piVar1,piVar1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00754790 @ 00754790 ////

undefined4 * __cdecl FUN_00754790(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  undefined4 *unaff_FS_OFFSET;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6968;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = 0;
  puVar2 = (undefined4 *)FUN_00567ff0(local_2c);
  FUN_0040cae0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&local_4c,L"\\The Movies\\Movies\\",sVar3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


//// FUNCTION FUN_00754890 @ 00754890 ////

void __cdecl FUN_00754890(wchar_t *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *_Memory;
  uint uVar2;
  uint *puVar3;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6990;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if ((param_1 != (wchar_t *)0x0) && (*param_1 != L'\0')) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar1 = FUN_00ace02d(param_1);
    FUN_004036d0(&local_2c,param_1,uVar1);
    local_4 = 0;
    uVar1 = FUN_009d4900(&local_2c);
    local_4 = 0xffffffff;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (uVar1 != 0) {
      _Memory = operator_new(uVar1);
      puVar3 = _Memory;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (uint *)((int)puVar3 + 1);
      }
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar2 = FUN_00ace02d(param_1);
      FUN_004036d0(&local_2c,param_1,uVar2);
      local_4 = 1;
      FUN_009d4aa0(&local_2c,_Memory,uVar1,(undefined1 *)0x0);
      if (local_24 < 0xb) {
        FUN_00753350(_Memory,uVar1,(int)param_2);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007549e0 @ 007549e0 ////

void __cdecl FUN_007549e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_009d9820();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


//// FUNCTION FUN_00754ad0 @ 00754ad0 ////

int __fastcall FUN_00754ad0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1;
  uVar3 = uVar2 >> 2;
  iVar1 = uVar3 * -4;
  if (*(uint *)(param_1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_1 + 8);
  }
  return *(int *)(*(int *)(param_1 + 4) + uVar3 * 4) + (uVar2 + iVar1) * 4;
}


//// FUNCTION FUN_00754b70 @ 00754b70 ////

int * __cdecl
FUN_00754b70(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  FUN_007543c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}


//// FUNCTION FUN_00754bb0 @ 00754bb0 ////

int * __cdecl
FUN_00754bb0(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  FUN_00754450(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}


//// FUNCTION FUN_00754c70 @ 00754c70 ////

void * FUN_00754c70(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00754ca0 @ 00754ca0 ////

void * FUN_00754ca0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00754cd0 @ 00754cd0 ////

void * FUN_00754cd0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00754d00 @ 00754d00 ////

void * FUN_00754d00(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00754d30 @ 00754d30 ////

void FUN_00754d30(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_190;
  undefined4 local_18c;
  uint local_188;
  char local_184 [20];
  void *local_170 [2];
  uint local_168;
  void *local_150 [2];
  uint local_148;
  void *local_130 [2];
  uint local_128;
  char cStack_111;
  CHAR local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd69c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009ca9d0(param_1,".ogg","Data\\Audio\\music\\",(undefined1 *)0x1);
  FUN_009ca9d0(param_1,".wmv","Data\\Audio\\music\\",(undefined1 *)0x1);
  FUN_009ca9d0(param_1,".wav","Data\\Audio\\music\\",(undefined1 *)0x1);
  FUN_009ca9d0(param_1,"*.*","Data\\Pak\\",(undefined1 *)0x1);
  puVar1 = (undefined4 *)FUN_00567ff0(local_170);
  local_4 = 0;
  FUN_009ad040(local_150,(wchar_t *)*puVar1);
  if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170[0]);
  }
  FUN_004073f0(local_150,"\\The Movies\\",0xc);
  local_190 = local_184;
  local_184[0] = '\0';
  local_18c = 0;
  local_188 = 0x14;
  _strncpy(local_190,"",0);
  local_18c = 0;
  *local_190 = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar1 = FUN_004312e0(local_170,local_150,"CustomCostumes\\");
  FUN_004015d0(&local_190,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170[0]);
  }
  FUN_009ca9d0(param_1,"*.*",local_190,(undefined1 *)0x1);
  puVar1 = FUN_004312e0(local_170,local_150,"Radio Music\\");
  FUN_004015d0(&local_190,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170[0]);
  }
  FUN_009ca9d0(param_1,"*.*",local_190,(undefined1 *)0x1);
  puVar1 = FUN_004312e0(local_170,local_150,"Movie Music\\");
  FUN_004015d0(&local_190,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170[0]);
  }
  FUN_009ca9d0(param_1,"*.*",local_190,(undefined1 *)0x1);
  puVar1 = FUN_004312e0(local_170,local_150,"Movie Sounds\\");
  FUN_004015d0(&local_190,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_168) {
                    /* WARNING: Subroutine does not return */
    _free(local_170[0]);
  }
  FUN_009ca9d0(param_1,"*.*",local_190,(undefined1 *)0x1);
  puVar1 = FUN_004312e0(local_130,local_150,"Graphics\\Logos\\");
  FUN_004015d0(&local_190,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130[0]);
  }
  FUN_009ca9d0(param_1,"*.*",local_190,(undefined1 *)0x1);
  SHGetSpecialFolderPathA(DAT_0105beb0,local_110,0x23,1);
  pcVar4 = &cStack_111;
  do {
    pcVar3 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  pcVar3 = "\\Lionhead Studios\\TheMovies\\";
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *pcVar4 = *pcVar3;
  FUN_009ca9d0(param_1,"*.*",local_110,(undefined1 *)0x1);
  if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
    _free(local_190);
  }
  if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
    _free(local_150[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00755040 @ 00755040 ////

undefined4 * __thiscall FUN_00755040(void *this,undefined4 *param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  undefined4 *unaff_FS_OFFSET;
  wchar_t *pwStack_4c;
  uint uStack_48;
  uint uStack_44;
  wchar_t awStack_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd69d8;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  if (param_2 == '\0') {
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x80),*(uint *)((int)this + 0x84));
  }
  else {
    pwStack_4c = awStack_40;
    awStack_40[0] = L'\0';
    uStack_48 = 0;
    uStack_44 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&pwStack_4c,(wchar_t *)&lpCaption_00d16918,uVar1);
    uStack_4 = 0;
    puVar2 = FUN_00754790(apvStack_2c);
    FUN_0040cae0(&pwStack_4c,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    FUN_0040cae0(&pwStack_4c,*(wchar_t **)((int)this + 0x80),*(size_t *)((int)this + 0x84));
    sVar3 = FUN_00ace02d(L".trl");
    FUN_0040cae0(&pwStack_4c,L".trl",sVar3);
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,pwStack_4c,uStack_48);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_4c);
    }
  }
  *unaff_FS_OFFSET = uStack_c;
  return param_1;
}


//// FUNCTION FUN_00755061 @ 00755061 ////

/* WARNING: Variable defined which should be unmapped: param_1 */
/* WARNING: Variable defined which should be unmapped: param_3 */

int * __thiscall
FUN_00755061(void *this,undefined4 param_1,wchar_t *param_2,uint param_3,uint param_4,
            wchar_t param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  wchar_t wVar4;
  uint unaff_EBX;
  undefined4 *unaff_FS_OFFSET;
  bool in_ZF;
  void *in_stack_00000028;
  uint in_stack_00000030;
  undefined4 in_stack_00000048;
  int *in_stack_00000058;
  
  wVar4 = (wchar_t)unaff_EBX;
  if (in_ZF) {
    *in_stack_00000058 = (int)(in_stack_00000058 + 3);
    *(wchar_t *)(in_stack_00000058 + 3) = wVar4;
    in_stack_00000058[1] = unaff_EBX;
    in_stack_00000058[2] = 10;
    FUN_004036d0(in_stack_00000058,*(wchar_t **)((int)this + 0x80),*(uint *)((int)this + 0x84));
  }
  else {
    param_2 = &param_5;
    param_4 = 10;
    param_3 = unaff_EBX;
    param_5 = wVar4;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&param_2,(wchar_t *)&lpCaption_00d16918,uVar1);
    puVar2 = FUN_00754790(&stack0x00000028);
    FUN_0040cae0(&param_2,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000028);
    }
    FUN_0040cae0(&param_2,*(wchar_t **)((int)this + 0x80),*(size_t *)((int)this + 0x84));
    sVar3 = FUN_00ace02d(L".trl");
    FUN_0040cae0(&param_2,L".trl",sVar3);
    *in_stack_00000058 = (int)(in_stack_00000058 + 3);
    *(wchar_t *)(in_stack_00000058 + 3) = wVar4;
    in_stack_00000058[1] = unaff_EBX;
    in_stack_00000058[2] = 10;
    FUN_004036d0(in_stack_00000058,param_2,param_3);
    if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  *unaff_FS_OFFSET = in_stack_00000048;
  return in_stack_00000058;
}


//// FUNCTION FUN_00755190 @ 00755190 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint __cdecl FUN_00755190(wchar_t *param_1,undefined1 *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  uint *_Memory;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint local_10f4;
  void *local_10f0;
  uint *local_10ec;
  undefined4 local_10e8;
  uint local_10e4;
  uint local_10e0 [5];
  undefined4 local_10cc;
  undefined4 local_10c8;
  undefined4 local_10c4;
  undefined4 local_10c0;
  uint local_10bc [4];
  uint local_10ac [926];
  wchar_t local_234 [274];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6a06;
  local_c = ExceptionList;
  uStack_10 = 0x7551af;
  local_10ec = local_10e0;
  ExceptionList = &local_c;
  *param_2 = 0;
  local_10e0[0] = local_10e0[0] & 0xffff0000;
  local_10e8 = 0;
  local_10e4 = 10;
  uVar2 = FUN_00ace02d(param_1);
  FUN_004036d0(&local_10ec,param_1,uVar2);
  local_4 = 0;
  uVar2 = FUN_009d4900(&local_10ec);
  local_4 = 0xffffffff;
  local_10f4 = uVar2;
  if (10 < local_10e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_10ec);
  }
  uVar3 = local_10e4;
  if (uVar2 != 0) {
    _Memory = operator_new(uVar2);
    puVar6 = _Memory;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    local_10ec = local_10e0;
    local_10e0[0] = local_10e0[0] & 0xffff0000;
    local_10e8 = 0;
    local_10e4 = 10;
    uVar3 = FUN_00ace02d(param_1);
    FUN_004036d0(&local_10ec,param_1,uVar3);
    local_4 = 1;
    FUN_009d4aa0(&local_10ec,_Memory,uVar2,(undefined1 *)0x0);
    local_4 = 0xffffffff;
    if (10 < local_10e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_10ec);
    }
    puVar6 = local_10ac;
    for (iVar4 = 0x428; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar4 = FUN_00753160(local_10ac,_Memory);
    piVar5 = (int *)(iVar4 + (int)_Memory);
    uVar3 = local_10ac[0];
    if (0x10 < (int)local_10ac[0]) {
      if (param_3 != (uint *)0x0) {
        puVar6 = local_10ac;
        for (iVar4 = 0x428; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_3 = *puVar6;
          puVar6 = puVar6 + 1;
          param_3 = param_3 + 1;
        }
      }
      FUN_00754890(local_234,local_10bc);
      iVar4 = 4;
      puVar6 = local_10ac;
      bVar8 = true;
      puVar7 = local_10bc;
      do {
        puVar6 = puVar6 + 1;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *puVar6 == *puVar7;
        puVar7 = puVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        *param_2 = 1;
      }
      else {
        FUN_009d9820();
      }
      do {
        if ((int *)(local_10f4 + (int)_Memory) <= piVar5) break;
        if (*piVar5 == 5) {
          local_10f4 = 0;
          local_10f0 = (void *)0x0;
          FUN_00753120((int)piVar5,&local_10f0,&local_10f4);
          if (local_10f4 != 0x400) {
                    /* WARNING: Subroutine does not return */
            _free(local_10f0);
          }
          local_10e8 = *(undefined4 *)((int)local_10f0 + 0x2e6);
          local_10ec = *(uint **)((int)local_10f0 + 0x2e2);
          local_10e4 = *(undefined4 *)((int)local_10f0 + 0x2ea);
          local_10e0[0] = *(uint *)((int)local_10f0 + 0x2ee);
          local_10cc = 0;
          local_10c8 = 0;
          local_10c4 = 0;
          local_10c0 = 0;
          FUN_00753350(_Memory,(int)piVar5 - (int)_Memory,(int)&local_10cc);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        piVar1 = piVar5 + 1;
        piVar5 = (int *)((int)piVar5 + *piVar1);
      } while (*piVar1 != 0);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_007554b0 @ 007554b0 ////

undefined4 * __thiscall FUN_007554b0(void *this,undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  local_60 = local_54;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  FUN_004073f0(&local_60,"Thumbs\\Films\\",0xd);
  pcVar3 = (char *)((int)this + 0x90);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_60,(char *)((int)this + 0x90),(int)pcVar3 - ((int)this + 0x91));
  uVar5 = local_5c - 4;
  FUN_00430770(&local_60,local_40,uVar5,0xffffffff);
  bVar2 = FUN_00430950(local_40,".dds");
  if (bVar2) {
    puVar4 = FUN_00430770(&local_60,local_20,0,uVar5);
    FUN_004015d0(&local_60,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    FUN_004073f0(&local_60,".dds",4);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_60,local_5c);
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40[0]);
  }
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  return param_1;
}


//// FUNCTION FUN_00755610 @ 00755610 ////

void __fastcall FUN_00755610(int param_1)

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


//// FUNCTION FUN_00755640 @ 00755640 ////

undefined4 * FUN_00755640(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00755670 @ 00755670 ////

void __fastcall FUN_00755670(int param_1)

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


//// FUNCTION FUN_007556a0 @ 007556a0 ////

undefined4 * FUN_007556a0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007556d0 @ 007556d0 ////

void __fastcall FUN_007556d0(int param_1)

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


//// FUNCTION FUN_00755700 @ 00755700 ////

undefined4 * FUN_00755700(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00755730 @ 00755730 ////

void __fastcall FUN_00755730(int param_1)

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


//// FUNCTION FUN_00755760 @ 00755760 ////

undefined4 * FUN_00755760(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00755790 @ 00755790 ////

void __thiscall
FUN_00755790(void *this,int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = param_3 - uVar1;
  iVar3 = param_5 - param_3;
  uVar4 = *(int *)((int)this + 0x10) + uVar1;
  if (uVar2 < uVar4 - param_5) {
    FUN_00754450(&param_2,(int)this,uVar1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      iVar5 = *(int *)((int)this + 0x10);
      do {
        if (iVar5 != 0) {
          uVar4 = *(int *)((int)this + 0xc) + 1;
          *(uint *)((int)this + 0xc) = uVar4;
          if ((uint)(*(int *)((int)this + 8) << 2) <= uVar4) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar5;
    }
  }
  else {
    FUN_007543c0(&param_2,param_4,param_5,(int)this,uVar4,param_2,param_3);
    if (iVar3 != 0) {
      iVar5 = *(int *)((int)this + 0x10);
      do {
        if ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar5;
    }
  }
  iVar3 = *(int *)((int)this + 0xc);
  *param_1 = (int)this;
  param_1[1] = iVar3 + uVar2;
  return;
}


//// FUNCTION FUN_00755880 @ 00755880 ////

void __fastcall FUN_00755880(int param_1)

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


//// FUNCTION FUN_007558b0 @ 007558b0 ////

char * FUN_007558b0(void)

{
  char cVar1;
  char *pcVar2;
  char *_Str;
  uint uVar3;
  char *pcVar4;
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6a18;
  local_c = ExceptionList;
  pcVar4 = (char *)0xc;
  ExceptionList = &local_c;
  FUN_009c89a0(local_60);
  local_4 = 0;
  FUN_00754d30(local_60);
  for (uVar3 = 0; (local_18 != 0 && (uVar3 < (uint)(local_14 - local_18 >> 2))); uVar3 = uVar3 + 1)
  {
    _Str = *(char **)(local_18 + uVar3 * 4);
    pcVar2 = _strrchr(_Str,0x5c);
    if (pcVar2 != (char *)0x0) {
      _Str = pcVar2 + 1;
    }
    pcVar2 = _Str + 1;
    do {
      cVar1 = *_Str;
      _Str = _Str + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (int)(_Str + (5 - (int)pcVar2));
  }
  local_4 = 0xffffffff;
  FUN_009c8560(local_60);
  ExceptionList = local_c;
  return pcVar4;
}


//// FUNCTION FUN_00755960 @ 00755960 ////

uint * FUN_00755960(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint local_84;
  char *local_80;
  uint local_7c;
  uint local_78;
  char local_74 [20];
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6a40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 7;
  pcVar2 = FUN_007558b0();
  param_1[1] = pcVar2;
  FUN_009c89a0(local_60);
  local_4 = 0;
  FUN_00754d30(local_60);
  if (local_18 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = local_14 - local_18 >> 2;
  }
  param_1[2] = iVar5;
  puVar6 = param_1 + 3;
  local_84 = 0;
  while( true ) {
    if ((local_18 == 0) || ((uint)(local_14 - local_18 >> 2) <= local_84)) {
      local_4 = 0xffffffff;
      FUN_009c8560(local_60);
      ExceptionList = local_c;
      return puVar6;
    }
    pcVar2 = *(char **)(local_18 + local_84 * 4);
    local_80 = local_74;
    local_74[0] = '\0';
    local_7c = 0;
    local_78 = 0x14;
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)(pcVar2 + 1);
    if (0x13 < uVar4) {
      local_78 = uVar4 + 0x20 & 0xffffffe0;
      local_80 = _malloc(local_78);
    }
    _strncpy(local_80,pcVar2,uVar4);
    local_80[uVar4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    local_7c = uVar4;
    uVar4 = FUN_009d3720(&local_80);
    if (0x14 < local_78) break;
    *puVar6 = uVar4;
    pcVar2 = *(char **)(local_18 + local_84 * 4);
    pcVar3 = _strrchr(pcVar2,0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3 + 1;
    }
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)((int)puVar6 + (4 - (int)pcVar2))] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar2 + 1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    puVar6 = (uint *)((int)puVar6 + (int)(pcVar2 + (5 - (int)pcVar3)));
    local_84 = local_84 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_80);
}


//// FUNCTION FUN_00755b20 @ 00755b20 ////

int * __thiscall FUN_00755b20(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (*(int *)((int)this + 0x130) != 0 &&
      (uVar2 < (uint)(*(int *)((int)this + 0x134) - *(int *)((int)this + 0x130) >> 2)));
      uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)((int)this + 0x130) + uVar2 * 4);
    if (*piVar1 == param_1) {
      return piVar1;
    }
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00755b60 @ 00755b60 ////

int __fastcall FUN_00755b60(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0xe8;
  for (uVar3 = 0;
      (*(int *)(param_1 + 0x120) != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2)));
      uVar3 = uVar3 + 1) {
    iVar4 = iVar4 + 0x108;
  }
  for (uVar3 = 0;
      (*(int *)(param_1 + 0x130) != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x130) >> 2)));
      uVar3 = uVar3 + 1) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x130) + uVar3 * 4) + 0x164);
    iVar2 = 0x168;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1 + 0x168;
    }
    iVar4 = iVar4 + iVar2;
  }
  for (uVar3 = 0;
      (*(int *)(param_1 + 0x140) != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x144) - *(int *)(param_1 + 0x140) >> 2)));
      uVar3 = uVar3 + 1) {
    iVar4 = iVar4 + 0x50;
  }
  for (uVar3 = 0;
      (*(int *)(param_1 + 0x150) != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150) >> 2)));
      uVar3 = uVar3 + 1) {
    iVar4 = iVar4 + 0x24;
  }
  return iVar4 + 0xa4;
}


//// FUNCTION FUN_00755c30 @ 00755c30 ////

uint * __thiscall FUN_00755c30(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  *param_1 = 1;
  iVar2 = FUN_00755b60((int)this);
  param_1[1] = iVar2;
  if (*(int *)((int)this + 0x120) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x124) - *(int *)((int)this + 0x120) >> 2;
  }
  param_1[0x35] = iVar2;
  if (*(int *)((int)this + 0x130) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x134) - *(int *)((int)this + 0x130) >> 2;
  }
  param_1[0x36] = iVar2;
  if (*(int *)((int)this + 0x140) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x144) - *(int *)((int)this + 0x140) >> 2;
  }
  param_1[0x37] = iVar2;
  if (*(int *)((int)this + 0x150) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x154) - *(int *)((int)this + 0x150) >> 2;
  }
  param_1[0x38] = iVar2;
  puVar1 = param_1 + 0x39;
  *puVar1 = 0;
  iVar2 = 0x33;
  uVar6 = 0;
  puVar8 = param_1 + 0x3a;
  puVar9 = (uint *)((int)this + 0x50);
  puVar10 = param_1 + 2;
  while( true ) {
    for (; puVar7 = puVar8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar9;
      puVar8 = puVar7;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar2 = *(int *)((int)this + 0x120);
    if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x124) - iVar2 >> 2) <= uVar6)) break;
    puVar9 = *(uint **)(iVar2 + uVar6 * 4);
    iVar2 = 0x42;
    uVar6 = uVar6 + 1;
    puVar8 = puVar7 + 0x42;
    puVar10 = puVar7;
  }
  uVar6 = 0;
  while( true ) {
    iVar2 = *(int *)((int)this + 0x130);
    if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x134) - iVar2 >> 2) <= uVar6)) break;
    puVar9 = *(uint **)(iVar2 + uVar6 * 4);
    puVar8 = puVar9;
    puVar10 = puVar7;
    for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (uint *)puVar9[0x59];
    puVar7 = puVar7 + 0x5a;
    if (puVar8 != (uint *)0x0) {
      uVar4 = *puVar8;
      puVar10 = puVar7;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar10 = (char)*puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      puVar7 = (uint *)((int)puVar7 + *(int *)puVar9[0x59]);
    }
    uVar6 = uVar6 + 1;
  }
  for (uVar6 = 0;
      (iVar2 = *(int *)((int)this + 0x140), iVar2 != 0 &&
      (uVar6 < (uint)(*(int *)((int)this + 0x144) - iVar2 >> 2))); uVar6 = uVar6 + 1) {
    puVar9 = *(uint **)(iVar2 + uVar6 * 4);
    puVar8 = puVar7;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = puVar7 + 0x14;
  }
  for (uVar6 = 0;
      (iVar2 = *(int *)((int)this + 0x150), iVar2 != 0 &&
      (uVar6 < (uint)(*(int *)((int)this + 0x154) - iVar2 >> 2))); uVar6 = uVar6 + 1) {
    puVar9 = *(uint **)(iVar2 + uVar6 * 4);
    puVar8 = puVar7;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = puVar7 + 9;
  }
  *puVar1 = *puVar1 | 2;
  puVar9 = (uint *)((int)this + 0x160);
  puVar8 = puVar7;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar9 = (uint *)((int)this + 0x180);
  puVar8 = puVar7 + 8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7[0x10] = *(uint *)((int)this + 0x1a0);
  *puVar1 = *puVar1 | 4;
  puVar7[0x11] = *(uint *)((int)this + 0x1a4);
  puVar9 = (uint *)((int)this + 0x1a8);
  puVar8 = puVar7 + 0x12;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7[0x1c] = *(uint *)((int)this + 0x1d4);
  puVar9 = (uint *)((int)this + 0x1d8);
  puVar8 = puVar7 + 0x1d;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  *puVar1 = *puVar1 | 8;
  puVar7[0x27] = *(uint *)((int)this + 0x1d0);
  puVar7[0x28] = *(uint *)((int)this + 0x200);
  return puVar7 + 0x29;
}


//// FUNCTION FUN_00755e80 @ 00755e80 ////

int __fastcall FUN_00755e80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_4;
  
  local_4 = param_1;
  iVar2 = FUN_00ace02d((short *)param_1[3]);
  iVar3 = FUN_00ace02d((short *)param_1[0xb]);
  iVar2 = iVar2 * 2 + 0x24 + iVar3 * 2;
  puVar1 = (undefined4 *)param_1[0x14];
  local_4 = (undefined4 *)*puVar1;
  while (local_4 != puVar1) {
    iVar2 = iVar2 + 5 + local_4[4];
    FUN_004dea90((int *)&local_4);
  }
  return param_1[0x16] + 4 + iVar2;
}


//// FUNCTION FUN_00755ee0 @ 00755ee0 ////

void __thiscall FUN_00755ee0(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  void *local_4;
  
  local_4 = this;
  _wcscpy((wchar_t *)(param_1 + 8),*(wchar_t **)((int)this + 0xc));
  iVar2 = FUN_00ace02d(*(short **)((int)this + 0xc));
  pwVar6 = (wchar_t *)((int)param_1 + iVar2 * 2 + 0x22);
  _wcscpy(pwVar6,*(wchar_t **)((int)this + 0x2c));
  iVar2 = FUN_00ace02d(*(short **)((int)this + 0x2c));
  pwVar6 = pwVar6 + iVar2 + 1;
  local_4 = (void *)**(int **)((int)this + 0x50);
  if (local_4 != *(int **)((int)this + 0x50)) {
    do {
      *(undefined4 *)pwVar6 = *(undefined4 *)((int)local_4 + 0x2c);
      pcVar5 = *(char **)((int)local_4 + 0xc);
      pwVar7 = pwVar6 + 2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *(char *)pwVar7 = cVar1;
        pwVar7 = (wchar_t *)((int)pwVar7 + 1);
      } while (cVar1 != '\0');
      pwVar6 = (wchar_t *)(*(int *)((int)local_4 + 0x10) + 1 + (int)(pwVar6 + 2));
      FUN_004dea90((int *)&local_4);
    } while (local_4 != *(void **)((int)this + 0x50));
  }
  uVar4 = *(uint *)((int)this + 0x58);
  puVar8 = *(undefined4 **)((int)this + 0x5c);
  pwVar7 = pwVar6;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pwVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    pwVar7 = pwVar7 + 2;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)pwVar7 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    pwVar7 = (wchar_t *)((int)pwVar7 + 1);
  }
  uVar4 = FUN_009ac020((int)pwVar6 + *(int *)((int)this + 0x58));
  *param_1 = 2;
  param_1[1] = uVar4 - (int)param_1;
  param_1[2] = *(undefined4 *)this;
  param_1[3] = *(undefined4 *)((int)this + 4);
  param_1[5] = *(undefined4 *)((int)this + 0x58);
  param_1[6] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x54);
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00756010 @ 00756010 ////

void __cdecl FUN_00756010(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(param_2 + 4);
  iVar7 = 0;
  for (uVar5 = 0;
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0 &&
      (uVar5 < (uint)(*(int *)(param_1 + 8) - iVar2 >> 5))); uVar5 = uVar5 + 1) {
    pcVar3 = *(char **)(iVar7 + iVar2);
    pcVar4 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + *(int *)(*(int *)(param_1 + 4) + iVar7 + 4) + 1;
    iVar7 = iVar7 + 0x20;
  }
  uVar5 = FUN_009ac020((uint)pcVar6);
  *param_2 = 6;
  param_2[1] = uVar5 - (int)param_2;
  if (*(int *)(param_1 + 4) == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    return;
  }
  param_2[2] = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
  param_2[3] = 0;
  return;
}


//// FUNCTION FUN_007560b0 @ 007560b0 ////

void __fastcall FUN_007560b0(int param_1)

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


//// FUNCTION FUN_007560e0 @ 007560e0 ////

void __fastcall FUN_007560e0(int param_1)

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


//// FUNCTION FUN_00756110 @ 00756110 ////

void __fastcall FUN_00756110(int param_1)

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


//// FUNCTION FUN_00756140 @ 00756140 ////

void __fastcall FUN_00756140(int param_1)

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


//// FUNCTION FUN_00756170 @ 00756170 ////

void __fastcall FUN_00756170(int param_1)

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


//// FUNCTION FUN_007561a0 @ 007561a0 ////

void __fastcall FUN_007561a0(int param_1)

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


//// FUNCTION FUN_007561d0 @ 007561d0 ////

void __fastcall FUN_007561d0(int param_1)

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


//// FUNCTION FUN_00756200 @ 00756200 ////

void __fastcall FUN_00756200(int param_1)

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


//// FUNCTION FUN_00756250 @ 00756250 ////

void __fastcall FUN_00756250(int param_1)

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


//// FUNCTION FUN_00756280 @ 00756280 ////

void __fastcall FUN_00756280(int param_1)

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


//// FUNCTION FUN_007562b0 @ 007562b0 ////

char * __cdecl FUN_007562b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    iVar3 = FUN_00755e80((undefined4 *)(param_1 + 0x200));
    iVar3 = iVar3 + 0x10a0;
    for (uVar9 = 0;
        (iVar4 = *(int *)(param_1 + 0x264), iVar4 != 0 &&
        (uVar9 < (uint)(*(int *)(param_1 + 0x268) - iVar4 >> 2))); uVar9 = uVar9 + 1) {
      iVar4 = FUN_00755e80(*(undefined4 **)(iVar4 + uVar9 * 4));
      iVar3 = iVar3 + iVar4;
    }
    iVar1 = *(int *)(param_1 + 0x274);
    iVar4 = 0x10;
    piVar8 = (int *)(iVar1 + 4);
    for (uVar9 = 0; (iVar1 != 0 && (uVar9 < (uint)(*(int *)(param_1 + 0x278) - iVar1 >> 5)));
        uVar9 = uVar9 + 1) {
      iVar4 = iVar4 + 1 + *piVar8;
      piVar8 = piVar8 + 8;
    }
    piVar8 = (int *)(param_1 + 0xd0);
    param_1 = iVar3 + 0x30 + iVar4;
    uVar9 = 0;
    if (*piVar8 != 0) {
      do {
        uVar7 = *(int *)(iVar2 + 0xcc) + uVar9;
        uVar5 = uVar7 >> 2;
        iVar3 = uVar5 * -4;
        if (*(uint *)(iVar2 + 200) <= uVar5) {
          uVar5 = uVar5 - *(uint *)(iVar2 + 200);
        }
        iVar3 = FUN_00755b60(*(int *)(*(int *)(*(int *)(iVar2 + 0xc4) + uVar5 * 4) +
                                     (uVar7 + iVar3) * 4));
        param_1 = param_1 + iVar3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(iVar2 + 0xd0));
    }
    if (*(int *)(iVar2 + 0x280) != 0) {
      param_1 = param_1 + 8 + *(int *)(iVar2 + 0x284);
    }
    pcVar6 = FUN_007558b0();
    return pcVar6 + param_1 + 0x408;
  }
  return (char *)0x0;
}


//// FUNCTION FUN_007563d0 @ 007563d0 ////

undefined4 __cdecl FUN_007563d0(int param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *local_8;
  
  pcVar1 = FUN_007562b0(param_1);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  puVar2 = operator_new((uint)pcVar1);
  puVar5 = puVar2;
  for (uVar6 = (uint)pcVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar6 = (uint)pcVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  *puVar2 = 0x11;
  puVar2[1] = *(uint *)(param_1 + 0x290);
  puVar2[2] = *(uint *)(param_1 + 0x294);
  puVar2[3] = *(uint *)(param_1 + 0x298);
  puVar2[4] = *(uint *)(param_1 + 0x29c);
  puVar2[5] = 0x10a0;
  puVar2[0x10a] = *(uint *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x264) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0x268) - *(int *)(param_1 + 0x264) >> 2;
  }
  puVar2[0x10b] = uVar6;
  puVar2[0x10c] = *(uint *)(param_1 + 0xd4);
  puVar2[0x191] = *(uint *)(param_1 + 0xd8);
  puVar2[0x39b] = *(uint *)(param_1 + 0x11c);
  puVar2[0x39c] = *(uint *)(param_1 + 0x120);
  puVar2[0x39d] = *(uint *)(param_1 + 0x124);
  puVar2[0x422] = *(uint *)(param_1 + 0x6a0);
  puVar2[399] = *(uint *)(param_1 + 0x1f0);
  uVar12 = __allshr(0x20,*(int *)(param_1 + 500));
  puVar2[400] = (uint)uVar12;
  puVar2[0x420] = *(uint *)(param_1 + 0x288);
  puVar2[0x421] = *(uint *)(param_1 + 0x28c);
  puVar2[0x423] = 0xf;
  puVar2[0x424] = DAT_00e52b04;
  puVar2[0x427] = 0;
  _wcsncpy((wchar_t *)(puVar2 + 0x88),*(wchar_t **)(param_1 + 0x80),0x104);
  _wcsncpy((wchar_t *)(puVar2 + 6),*(wchar_t **)(param_1 + 0x60),0x104);
  _wcsncpy((wchar_t *)(puVar2 + 0x39e),*(wchar_t **)(param_1 + 0xa0),0x104);
  _wcsncpy((wchar_t *)(puVar2 + 0x10d),*(wchar_t **)(param_1 + 0x1cc),0x104);
  _wcsncpy((wchar_t *)(puVar2 + 0x1d3),*(wchar_t **)(param_1 + 0xfc),0x104);
  _strncpy((char *)(puVar2 + 0x192),*(char **)(param_1 + 0xdc),0x104);
  ppuVar3 = FUN_009b4260();
  _strncpy((char *)(puVar2 + 0x425),*ppuVar3,8);
  _strncpy((char *)(puVar2 + 0x255),*(char **)(param_1 + 300),0x104);
  _strncpy((char *)(puVar2 + 0x296),*(char **)(param_1 + 0x14c),0x104);
  _strncpy((char *)(puVar2 + 0x2d7),*(char **)(param_1 + 0x16c),0x104);
  _strncpy((char *)(puVar2 + 0x318),*(char **)(param_1 + 0x1ac),0x104);
  _strncpy((char *)(puVar2 + 0x359),*(char **)(param_1 + 0x18c),0x104);
  puVar2[0x39a] = *(uint *)(param_1 + 0x128);
  puVar4 = (undefined4 *)FUN_00755ee0((void *)(param_1 + 0x200),puVar2 + 0x428);
  for (uVar6 = 0;
      (iVar8 = *(int *)(param_1 + 0x264), iVar8 != 0 &&
      (uVar6 < (uint)(*(int *)(param_1 + 0x268) - iVar8 >> 2))); uVar6 = uVar6 + 1) {
    puVar4 = (undefined4 *)FUN_00755ee0(*(void **)(iVar8 + uVar6 * 4),puVar4);
  }
  puVar5 = FUN_00753770(puVar4);
  puVar4 = (undefined4 *)FUN_00756010(param_1 + 0x270,puVar5);
  local_8 = (uint *)FUN_009ac020((uint)(puVar4 + 2));
  *puVar4 = 3;
  puVar4[1] = (int)local_8 + (8 - (int)(puVar4 + 2));
  uVar6 = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    do {
      uVar9 = *(int *)(param_1 + 0xcc) + uVar6;
      uVar7 = uVar9 >> 2;
      iVar8 = uVar7 * -4;
      if (*(uint *)(param_1 + 200) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_1 + 200);
      }
      local_8 = FUN_00755c30(*(void **)(*(int *)(*(int *)(param_1 + 0xc4) + uVar7 * 4) +
                                       (uVar9 + iVar8) * 4),local_8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xd0));
  }
  uVar6 = *(uint *)(param_1 + 0x284);
  puVar5 = *(uint **)(param_1 + 0x280);
  if ((uVar6 != 0) && (puVar5 != (uint *)0x0)) {
    *local_8 = 4;
    local_8[1] = uVar6 + 8;
    puVar10 = local_8 + 2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(char *)puVar10 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    }
    local_8 = (uint *)((int)(local_8 + 2) + uVar6);
  }
  puVar5 = FUN_00755960(local_8);
  FUN_00753f70(param_1,puVar2,(int)puVar5 - (int)puVar2);
  if ((uint *)(param_1 + 0x2a0) != (uint *)0x0) {
    *puVar5 = 5;
    puVar5[1] = 0x408;
    puVar10 = (uint *)(param_1 + 0x2a0);
    puVar11 = puVar5 + 2;
    for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar5 = puVar5 + 0x102;
  }
  if ((int)puVar5 - (int)puVar2 <= (int)pcVar1) {
    *param_3 = (int)puVar5 - (int)puVar2;
    *param_2 = puVar2;
    return CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return (uint)pcVar1 & 0xffffff00;
}


//// FUNCTION FUN_007567c0 @ 007567c0 ////

void __thiscall FUN_007567c0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  uint uVar6;
  int local_8 [2];
  
  if (param_1 != (undefined4 *)0x0) {
    this_00 = (void *)((int)this + 0xc0);
    uVar6 = *(uint *)((int)this + 0xcc);
    uVar5 = *(int *)((int)this + 0xd0) + uVar6;
    for (; uVar6 != uVar5; uVar6 = uVar6 + 1) {
      uVar3 = uVar6 >> 2;
      iVar4 = uVar3 * -4;
      if (*(uint *)((int)this + 200) <= uVar3) {
        uVar3 = uVar3 - *(uint *)((int)this + 200);
      }
      puVar2 = *(undefined4 **)
                (*(int *)(*(int *)((int)this + 0xc4) + uVar3 * 4) + (uVar6 + iVar4) * 4);
      if (puVar2 == param_1) {
        FUN_00755790(this_00,local_8,(int)this_00,uVar6,(int)this_00,uVar6 + 1);
        iVar4 = FUN_00773f30(DAT_0104e478,(int)puVar2);
        if (iVar4 != 0) {
          FUN_0074e190(iVar4);
        }
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        (**(code **)*puVar2)(1);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00756860 @ 00756860 ////

undefined4 __thiscall FUN_00756860(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  void *local_8;
  uint local_4;
  
  if (param_1 == 0) {
    return 0;
  }
  this_00 = (void *)((int)this + 0xc0);
  uVar5 = *(uint *)((int)this + 0xcc);
  pvVar4 = this_00;
  while ((uVar3 = *(int *)((int)this + 0xd0) + *(int *)((int)this + 0xcc), pvVar4 != this_00 ||
         (uVar5 != uVar3))) {
    uVar3 = uVar5 >> 2;
    iVar2 = uVar3 * -4;
    if (*(uint *)((int)pvVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)pvVar4 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)pvVar4 + 4) + uVar3 * 4) + (uVar5 + iVar2) * 4)
    ;
    if (puVar1[0x42] == param_1) {
      FUN_00755790(this_00,(int *)&local_8,(int)pvVar4,uVar5,(int)pvVar4,uVar5 + 1);
      uVar5 = local_4;
      pvVar4 = local_8;
      iVar2 = puVar1[0x12];
      puVar1[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    else {
      uVar5 = uVar5 + 1;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00756900 @ 00756900 ////

void __fastcall FUN_00756900(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x120);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x124) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x120) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  for (uVar3 = 0;
      (iVar2 = *(int *)(param_1 + 0x130), iVar2 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x134) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
    puVar1 = *(undefined4 **)(iVar2 + uVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)puVar1[0x59] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar1[0x59]);
      }
      puVar4 = puVar1;
      for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
  }
  if (*(void **)(param_1 + 0x130) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x130));
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x140);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x144) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x140) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x150);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x154) - (int)puVar1 >> 2 != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  if (*(void **)(param_1 + 0x150) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x150));
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}


//// FUNCTION FUN_00756aa0 @ 00756aa0 ////

void __fastcall FUN_00756aa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4c84c;
  FUN_00756900((int)param_1);
  if ((void *)param_1[0x54] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x54]);
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  if ((void *)param_1[0x50] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x50]);
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  if ((void *)param_1[0x4c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4c]);
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  if ((void *)param_1[0x48] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x48]);
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00756b50 @ 00756b50 ////

void FUN_00756b50(int param_1)

{
  void *_Memory;
  bool bVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  void *local_14;
  size_t local_10;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6a58;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  local_4 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  uVar2 = FUN_007563d0(param_1,&local_14,(int *)&local_10);
  _Memory = local_14;
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_009d44d0((undefined4 *)&stack0x00000008,local_14,local_10);
    if (!bVar1) {
      FUN_006b85a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00756bf0 @ 00756bf0 ////

undefined4 * __thiscall FUN_00756bf0(void *this,byte param_1)

{
  FUN_00756aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00756c10 @ 00756c10 ////

void __fastcall FUN_00756c10(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x5c));
}


//// FUNCTION FUN_00756c90 @ 00756c90 ////

void FUN_00756c90(void)

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
  puStack_8 = &LAB_00cd6a78;
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


//// FUNCTION FUN_00756d00 @ 00756d00 ////

void FUN_00756d00(void)

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
  puStack_8 = &LAB_00cd6a98;
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


//// FUNCTION FUN_00756d70 @ 00756d70 ////

void FUN_00756d70(void)

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
  puStack_8 = &LAB_00cd6ab8;
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


//// FUNCTION FUN_00756de0 @ 00756de0 ////

void FUN_00756de0(void)

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
  puStack_8 = &LAB_00cd6ad8;
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


//// FUNCTION FUN_00756fe0 @ 00756fe0 ////

void __thiscall FUN_00756fe0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00756c90();
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
      _Dst = FUN_00755640((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00754c70(param_1,iVar5,param_1 + param_2);
      FUN_00755640(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00753b40(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00754c70(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_007542d0(param_1,(int)pvVar3,iVar5);
    FUN_00753b40(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007571c0 @ 007571c0 ////

void __thiscall FUN_007571c0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00756d00();
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
      _Dst = FUN_007556a0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00754ca0(param_1,iVar5,param_1 + param_2);
      FUN_007556a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00753b80(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00754ca0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00754310(param_1,(int)pvVar3,iVar5);
    FUN_00753b80(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007573a0 @ 007573a0 ////

void __thiscall FUN_007573a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00756d70();
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
      _Dst = FUN_00755700((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00754cd0(param_1,iVar5,param_1 + param_2);
      FUN_00755700(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00753bc0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00754cd0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00754350(param_1,(int)pvVar3,iVar5);
    FUN_00753bc0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00757580 @ 00757580 ////

void __thiscall FUN_00757580(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00756de0();
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
      _Dst = FUN_00755760((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00754d00(param_1,iVar5,param_1 + param_2);
      FUN_00755760(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00753c00(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00754d00(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00754390(param_1,(int)pvVar3,iVar5);
    FUN_00753c00(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007578f0 @ 007578f0 ////

void __thiscall FUN_007578f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    FUN_005b9970(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) << 2;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*(int *)(*(int *)((int)this + 4) + uVar5 * 4) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar5 * 4) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + uVar5 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(uint *)((int)this + 0xc) = uVar4;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_00757970 @ 00757970 ////

undefined4 __thiscall FUN_00757970(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_005ba7b0((void *)((int)this + 0xc0),&param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_007579a0 @ 007579a0 ////

void __thiscall FUN_007579a0(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  void *this_00;
  uint uVar3;
  uint uVar4;
  
  this_00 = param_2;
  iVar2 = param_1;
  if (param_1 != 0) {
    for (uVar4 = *(uint *)((int)this + 0xcc);
        uVar4 != *(int *)((int)this + 0xd0) + *(int *)((int)this + 0xcc); uVar4 = uVar4 + 1) {
      uVar3 = uVar4 >> 2;
      iVar1 = uVar3 * -4;
      if (*(uint *)((int)this + 200) <= uVar3) {
        uVar3 = uVar3 - *(uint *)((int)this + 200);
      }
      param_1 = *(int *)(*(int *)(*(int *)((int)this + 0xc4) + uVar3 * 4) + (uVar4 + iVar1) * 4);
      if (*(int *)(param_1 + 0x108) == iVar2) {
        FUN_005ba7b0(this_00,&param_1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00757a20 @ 00757a20 ////

undefined4 * __fastcall FUN_00757a20(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6b22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d4c84c;
  puVar1 = param_1 + 0x43;
  *puVar1 = 0;
  param_1[0x44] = 0;
  *puVar1 = *puVar1 & 0xfffffffc | 0xc;
  puVar3 = param_1 + 0x14;
  for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x71] = 0x3f9c61ab;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7d] = 0x3f9c61ab;
  puVar3 = param_1 + 0x14;
  for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((void *)param_1[0x4c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4c]);
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  if ((void *)param_1[0x48] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x48]);
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  if ((void *)param_1[0x50] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x50]);
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  if ((void *)param_1[0x54] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x54]);
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x75] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00757d60 @ 00757d60 ////

undefined4 * __thiscall
FUN_00757d60(void *this,undefined4 *param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = *(uint *)((int)this + 0xc);
  if ((param_2 == this) && (param_3 == uVar5)) {
    FUN_007578f0(this,param_4);
    uVar1 = *(undefined4 *)((int)this + 0xc);
    *param_1 = this;
    param_1[1] = uVar1;
    return param_1;
  }
  if ((param_2 == this) && (param_3 == *(uint *)((int)this + 0x10) + uVar5)) {
    FUN_005ba7b0(this,param_4);
    iVar6 = *(int *)((int)this + 0x10);
    iVar2 = *(int *)((int)this + 0xc);
    *param_1 = this;
    param_1[1] = iVar6 + iVar2 + -1;
    return param_1;
  }
  param_4 = (undefined4 *)*param_4;
  uVar7 = param_3 - uVar5;
  if (uVar7 < *(uint *)((int)this + 0x10) >> 1) {
    uVar3 = uVar5 >> 2;
    iVar6 = uVar3 * -4;
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    FUN_007578f0(this,(undefined4 *)
                      (*(int *)(*(int *)((int)this + 4) + uVar3 * 4) + (uVar5 + iVar6) * 4));
    iVar6 = *(int *)((int)this + 0xc);
    uVar7 = iVar6 + uVar7;
    param_2 = this;
    FUN_00754b70((int *)&param_2,(int)this,iVar6 + 2,(int)this,uVar7 + 1,(int)this,iVar6 + 1);
  }
  else {
    puVar4 = (undefined4 *)FUN_00754ad0((int)this);
    FUN_005ba7b0(this,puVar4);
    iVar6 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
    uVar7 = *(int *)((int)this + 0xc) + uVar7;
    FUN_00754bb0((int *)&param_2,(int)this,uVar7,(int)this,iVar6 - 2,(int)this,iVar6 - 1);
  }
  uVar5 = uVar7 >> 2;
  iVar6 = uVar5 * -4;
  if (*(uint *)((int)this + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)((int)this + 8);
  }
  *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + uVar5 * 4) + (uVar7 + iVar6) * 4) = param_4;
  param_1[1] = uVar7;
  *param_1 = this;
  return param_1;
}


//// FUNCTION FUN_00757eb0 @ 00757eb0 ////

void __thiscall FUN_00757eb0(void *this,int param_1,int param_2)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_8 [2];
  
  if (param_1 != 0) {
    this_00 = (void *)((int)this + 0xc0);
    uVar4 = *(uint *)((int)this + 0xcc);
    uVar3 = *(int *)((int)this + 0xd0) + uVar4;
    do {
      if (uVar4 == uVar3) {
        return;
      }
      uVar1 = uVar4 >> 2;
      iVar2 = uVar4 + uVar1 * -4;
      if (*(uint *)((int)this + 200) <= uVar1) {
        uVar1 = uVar1 - *(uint *)((int)this + 200);
      }
      uVar4 = uVar4 + 1;
    } while (*(int *)(*(int *)(*(int *)((int)this + 0xc4) + uVar1 * 4) + iVar2 * 4) != param_2);
    if (uVar4 == *(int *)((int)this + 0xd0) + *(int *)((int)this + 0xcc)) {
      FUN_005ba7b0(this_00,&param_1);
      return;
    }
    FUN_00757d60(this_00,local_8,this_00,uVar4,&param_1);
  }
  return;
}


//// FUNCTION FUN_00757f50 @ 00757f50 ////

undefined4 __thiscall FUN_00757f50(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x130);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x134) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x138) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x134);
    *puVar2 = param_1;
    puVar2 = puVar2 + 1;
    *(undefined4 **)((int)this + 0x134) = puVar2;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  uVar3 = FUN_007571c0((void *)((int)this + 300),*(undefined4 **)((int)this + 0x134),1,&param_1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00757fb0 @ 00757fb0 ////

undefined4 __thiscall FUN_00757fb0(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = operator_new(0x108);
  if (local_4 == (undefined4 *)0x0) {
    local_4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = local_4;
    for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)local_4 + iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *local_4 = param_2;
  iVar3 = *(int *)((int)this + 0x120);
  if ((iVar3 != 0) &&
     ((uint)(*(int *)((int)this + 0x124) - iVar3 >> 2) <
      (uint)(*(int *)((int)this + 0x128) - iVar3 >> 2))) {
    puVar4 = *(undefined4 **)((int)this + 0x124);
    *puVar4 = local_4;
    puVar4 = puVar4 + 1;
    *(undefined4 **)((int)this + 0x124) = puVar4;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  uVar2 = FUN_00756fe0((void *)((int)this + 0x11c),*(undefined4 **)((int)this + 0x124),1,&local_4);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00758050 @ 00758050 ////

undefined4 __thiscall FUN_00758050(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x140);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x144) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x148) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x144);
    *puVar2 = param_1;
    puVar2 = puVar2 + 1;
    *(undefined4 **)((int)this + 0x144) = puVar2;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  uVar3 = FUN_007573a0((void *)((int)this + 0x13c),*(undefined4 **)((int)this + 0x144),1,&param_1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_007580b0 @ 007580b0 ////

undefined4 __thiscall FUN_007580b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x150);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x154) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x158) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x154);
    *puVar2 = param_1;
    puVar2 = puVar2 + 1;
    *(undefined4 **)((int)this + 0x154) = puVar2;
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  uVar3 = FUN_00757580((void *)((int)this + 0x14c),*(undefined4 **)((int)this + 0x154),1,&param_1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00758110 @ 00758110 ////

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00758110(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_204;
  int *local_1fc;
  undefined4 local_1f8 [53];
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  uint local_114;
  int local_110;
  int local_10c [66];
  
  puVar5 = local_1f8;
  for (iVar2 = 0x3a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_1f8[1] = param_1[1];
  local_1f8[0] = *param_1;
  iVar2 = FUN_00753600(local_1f8 + 2,param_1 + 2);
  piVar4 = (int *)((int)(param_1 + 2) + iVar2);
  local_204 = *piVar4;
  local_11c = piVar4[2];
  local_118 = piVar4[3];
  local_114 = piVar4[4];
  local_124 = local_204;
  local_120 = piVar4[1];
  puVar5 = local_1f8 + 2;
  puVar7 = (undefined4 *)((int)this + 0x50);
  for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  piVar4 = piVar4 + 5;
  if (0 < local_204) {
    do {
      iVar2 = *piVar4;
      piVar6 = &local_110;
      for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      piVar1 = local_10c;
      piVar6 = piVar4;
      for (iVar3 = 0x41; piVar6 = piVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar1 = *piVar6;
        piVar1 = piVar1 + 1;
      }
      piVar4 = piVar4 + 0x42;
      local_110 = iVar2;
      FUN_00757fb0(this,(char *)local_10c,iVar2);
      local_204 = local_204 + -1;
    } while (local_204 != 0);
  }
  if (0 < local_120) {
    local_204 = local_120;
    do {
      piVar1 = operator_new(0x168);
      piVar6 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        piVar8 = piVar1;
        for (iVar2 = 0x5a; piVar6 = piVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
      }
      iVar3 = FUN_007534e0(piVar6,piVar4);
      iVar2 = *(int *)((int)this + 0x130);
      piVar4 = (int *)((int)piVar4 + iVar3);
      local_1fc = piVar6;
      if ((iVar2 == 0) ||
         ((uint)(*(int *)((int)this + 0x138) - iVar2 >> 2) <=
          (uint)(*(int *)((int)this + 0x134) - iVar2 >> 2))) {
        FUN_007571c0((void *)((int)this + 300),*(undefined4 **)((int)this + 0x134),1,&local_1fc);
      }
      else {
        puVar5 = *(undefined4 **)((int)this + 0x134);
        *puVar5 = piVar6;
        *(undefined4 **)((int)this + 0x134) = puVar5 + 1;
      }
      local_204 = local_204 + -1;
    } while (local_204 != 0);
  }
  if (0 < local_11c) {
    local_204 = local_11c;
    do {
      local_1fc = operator_new(0x50);
      if (local_1fc == (int *)0x0) {
        local_1fc = (int *)0x0;
      }
      else {
        local_1fc[0x13] = 0;
        local_1fc[0x12] = 0;
        local_1fc[0x11] = 0;
        local_1fc[0xf] = 0;
        local_1fc[0xe] = 0;
        local_1fc[0xd] = 0;
        local_1fc[0xb] = 0;
        local_1fc[10] = 0;
        local_1fc[9] = 0;
        local_1fc[0x10] = 0x3f800000;
        local_1fc[0xc] = 0x3f800000;
        local_1fc[8] = 0x3f800000;
        piVar6 = local_1fc;
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
      }
      piVar6 = piVar4;
      piVar1 = local_1fc;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar1 = piVar1 + 1;
      }
      piVar6 = piVar4 + 8;
      piVar1 = local_1fc + 8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar1 = piVar1 + 1;
      }
      iVar2 = *(int *)((int)this + 0x140);
      piVar4 = piVar4 + 0x14;
      if ((iVar2 == 0) ||
         ((uint)(*(int *)((int)this + 0x148) - iVar2 >> 2) <=
          (uint)(*(int *)((int)this + 0x144) - iVar2 >> 2))) {
        FUN_007573a0((void *)((int)this + 0x13c),*(undefined4 **)((int)this + 0x144),1,&local_1fc);
      }
      else {
        puVar5 = *(undefined4 **)((int)this + 0x144);
        *puVar5 = local_1fc;
        *(undefined4 **)((int)this + 0x144) = puVar5 + 1;
      }
      local_204 = local_204 + -1;
    } while (local_204 != 0);
  }
  if (0 < local_118) {
    local_204 = local_118;
    do {
      local_1fc = operator_new(0x24);
      if (local_1fc == (int *)0x0) {
        local_1fc = (int *)0x0;
      }
      else {
        *local_1fc = 0;
        local_1fc[1] = 0;
        local_1fc[2] = 0;
        local_1fc[3] = 0;
        local_1fc[4] = 0;
        local_1fc[5] = 0;
        local_1fc[6] = 0;
        local_1fc[7] = 0;
        local_1fc[8] = 0;
      }
      *local_1fc = *piVar4;
      iVar2 = 8;
      piVar6 = piVar4;
      piVar1 = local_1fc;
      while( true ) {
        piVar1 = piVar1 + 1;
        piVar6 = piVar6 + 1;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        *piVar1 = *piVar6;
      }
      iVar2 = *(int *)((int)this + 0x150);
      piVar4 = piVar4 + 9;
      if ((iVar2 == 0) ||
         ((uint)(*(int *)((int)this + 0x158) - iVar2 >> 2) <=
          (uint)(*(int *)((int)this + 0x154) - iVar2 >> 2))) {
        FUN_00757580((void *)((int)this + 0x14c),*(undefined4 **)((int)this + 0x154),1,&local_1fc);
      }
      else {
        puVar5 = *(undefined4 **)((int)this + 0x154);
        *puVar5 = local_1fc;
        *(undefined4 **)((int)this + 0x154) = puVar5 + 1;
      }
      local_204 = local_204 + -1;
    } while (local_204 != 0);
  }
  if ((local_114 & 2) != 0) {
    piVar6 = piVar4;
    piVar1 = (int *)((int)this + 0x160);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar1 = piVar1 + 1;
    }
    piVar6 = piVar4 + 8;
    piVar1 = (int *)((int)this + 0x180);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar1 = piVar1 + 1;
    }
    *(int *)((int)this + 0x1a0) = piVar4[0x10];
    piVar4 = piVar4 + 0x11;
  }
  if ((local_114 & 4) != 0) {
    *(int *)((int)this + 0x1a4) = *piVar4;
    piVar1 = (int *)((int)this + 0x1a8);
    piVar6 = piVar4;
    for (iVar2 = 10; piVar6 = piVar6 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar6;
      piVar1 = piVar1 + 1;
    }
    *(int *)((int)this + 0x1d4) = piVar4[0xb];
    piVar6 = piVar4 + 0xc;
    piVar1 = (int *)((int)this + 0x1d8);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar1 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar1 = piVar1 + 1;
    }
    piVar4 = piVar4 + 0x16;
  }
  if ((local_114 & 8) != 0) {
    *(int *)((int)this + 0x1d0) = *piVar4;
    *(int *)((int)this + 0x200) = piVar4[1];
  }
  return;
}


//// FUNCTION FUN_007584e0 @ 007584e0 ////

void __thiscall FUN_007584e0(void *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6b38;
  local_c = ExceptionList;
  if (param_1 != (char *)0x0) {
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
    piVar3 = FUN_00515d20((void *)((int)this + 0x4c),&local_2c);
    *piVar3 = param_2;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00758580 @ 00758580 ////

void __cdecl FUN_00758580(void *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint _Count;
  char *_Source;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6b58;
  local_c = ExceptionList;
  piVar1 = (int *)(param_2 + 8);
  _Source = (char *)(param_2 + 0x10);
  ExceptionList = &local_c;
  param_2 = *piVar1;
  if (0 < *piVar1) {
    do {
      local_4 = 0xffffffff;
      pcVar4 = _Source;
      do {
        local_20[0] = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (local_20[0] != '\0');
      local_2c = local_20;
      local_28 = 0;
      local_24 = 0x14;
      pcVar5 = _Source;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      _Count = (int)pcVar5 - (int)(_Source + 1);
      if (0x13 < _Count) {
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,_Source,_Count);
      local_2c[_Count] = '\0';
      iVar3 = *(int *)((int)param_1 + 4);
      local_4 = 0;
      local_28 = _Count;
      if ((iVar3 == 0) ||
         ((uint)(*(int *)((int)param_1 + 0xc) - iVar3 >> 5) <=
          (uint)(*(int *)((int)param_1 + 8) - iVar3 >> 5))) {
        FUN_00439fd0(param_1,*(int **)((int)param_1 + 8),1,&local_2c);
      }
      else {
        piVar1 = *(int **)((int)param_1 + 8);
        FUN_00439ea0(piVar1,1,&local_2c);
        *(int **)((int)param_1 + 8) = piVar1 + 8;
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      param_2 = param_2 + -1;
      _Source = pcVar4;
    } while (param_2 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007586d0 @ 007586d0 ////

void __fastcall FUN_007586d0(int param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6b91;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_00756c10(param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004e3480((void *)(param_1 + 0x4c),&uStack_10,(int *)**(int **)(param_1 + 0x50),
               *(int **)(param_1 + 0x50));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x50));
}


//// FUNCTION FUN_00758770 @ 00758770 ////

void * __thiscall FUN_00758770(void *this,byte param_1)

{
  FUN_007586d0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00758790 @ 00758790 ////

void __thiscall FUN_00758790(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint local_8;
  undefined4 *local_4;
  
  uVar2 = param_1;
  puVar11 = (undefined4 *)(param_1 + 0x50);
  puVar3 = (undefined4 *)((int)this + 0x50);
  for (iVar8 = 0x33; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  for (uVar12 = 0;
      (iVar8 = *(int *)(param_1 + 0x120), iVar8 != 0 &&
      (uVar12 < (uint)(*(int *)(param_1 + 0x124) - iVar8 >> 2))); uVar12 = uVar12 + 1) {
    puVar11 = *(undefined4 **)(iVar8 + uVar12 * 4);
    FUN_00757fb0(this,(char *)(puVar11 + 1),*puVar11);
  }
  for (local_8 = 0;
      (iVar8 = *(int *)(param_1 + 0x130), iVar8 != 0 &&
      (local_8 < (uint)(*(int *)(param_1 + 0x134) - iVar8 >> 2))); local_8 = local_8 + 1) {
    puVar11 = *(undefined4 **)(iVar8 + local_8 * 4);
    puVar3 = operator_new(0x168);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar10 = puVar3;
      for (iVar8 = 0x5a; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    puVar10 = puVar11;
    puVar13 = puVar3;
    for (iVar8 = 0x5a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    if ((uint *)puVar11[0x59] != (uint *)0x0) {
      uVar12 = *(uint *)puVar11[0x59];
      puVar4 = operator_new(uVar12);
      puVar5 = (uint *)puVar11[0x59];
      puVar14 = puVar4;
      for (uVar9 = uVar12 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar14 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(char *)puVar14 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      puVar5 = FUN_009cd120(puVar4);
      puVar3[0x59] = puVar5;
    }
    iVar8 = *(int *)((int)this + 0x130);
    local_4 = puVar3;
    if ((iVar8 == 0) ||
       ((uint)(*(int *)((int)this + 0x138) - iVar8 >> 2) <=
        (uint)(*(int *)((int)this + 0x134) - iVar8 >> 2))) {
      FUN_007571c0((void *)((int)this + 300),*(undefined4 **)((int)this + 0x134),1,&local_4);
    }
    else {
      puVar11 = *(undefined4 **)((int)this + 0x134);
      *puVar11 = puVar3;
      *(undefined4 **)((int)this + 0x134) = puVar11 + 1;
    }
  }
  param_1 = 0;
  while ((iVar8 = *(int *)(uVar2 + 0x140), iVar8 != 0 &&
         (param_1 < (uint)(*(int *)(uVar2 + 0x144) - iVar8 >> 2)))) {
    pcVar7 = *(char **)(iVar8 + param_1 * 4);
    local_4 = operator_new(0x50);
    if (local_4 == (undefined4 *)0x0) {
      local_4 = (undefined4 *)0x0;
    }
    else {
      local_4[0x10] = 0x3f800000;
      local_4[0xc] = 0x3f800000;
      local_4[8] = 0x3f800000;
      local_4[0x13] = 0;
      local_4[0x12] = 0;
      local_4[0x11] = 0;
      local_4[0xf] = 0;
      local_4[0xe] = 0;
      local_4[0xd] = 0;
      local_4[0xb] = 0;
      local_4[10] = 0;
      local_4[9] = 0;
      puVar11 = local_4;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      pcVar6[(int)local_4 - (int)pcVar7] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + 0x20;
    puVar11 = local_4 + 8;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar11 = puVar11 + 1;
    }
    iVar8 = *(int *)((int)this + 0x140);
    if ((iVar8 == 0) ||
       ((uint)(*(int *)((int)this + 0x148) - iVar8 >> 2) <=
        (uint)(*(int *)((int)this + 0x144) - iVar8 >> 2))) {
      FUN_007573a0((void *)((int)this + 0x13c),*(undefined4 **)((int)this + 0x144),1,&local_4);
      param_1 = param_1 + 1;
    }
    else {
      puVar11 = *(undefined4 **)((int)this + 0x144);
      *puVar11 = local_4;
      *(undefined4 **)((int)this + 0x144) = puVar11 + 1;
      param_1 = param_1 + 1;
    }
  }
  param_1 = 0;
  while ((iVar8 = *(int *)(uVar2 + 0x150), iVar8 != 0 &&
         (param_1 < (uint)(*(int *)(uVar2 + 0x154) - iVar8 >> 2)))) {
    puVar11 = *(undefined4 **)(iVar8 + param_1 * 4);
    local_4 = operator_new(0x24);
    if (local_4 == (undefined4 *)0x0) {
      local_4 = (undefined4 *)0x0;
    }
    else {
      *local_4 = 0;
      local_4[1] = 0;
      local_4[2] = 0;
      local_4[3] = 0;
      local_4[4] = 0;
      local_4[5] = 0;
      local_4[6] = 0;
      local_4[7] = 0;
      local_4[8] = 0;
    }
    pcVar7 = (char *)(puVar11 + 1);
    iVar8 = 4 - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[(int)local_4 + iVar8] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    *local_4 = *puVar11;
    iVar8 = *(int *)((int)this + 0x150);
    if ((iVar8 == 0) ||
       ((uint)(*(int *)((int)this + 0x158) - iVar8 >> 2) <=
        (uint)(*(int *)((int)this + 0x154) - iVar8 >> 2))) {
      FUN_00757580((void *)((int)this + 0x14c),*(undefined4 **)((int)this + 0x154),1,&local_4);
      param_1 = param_1 + 1;
    }
    else {
      puVar11 = *(undefined4 **)((int)this + 0x154);
      *puVar11 = local_4;
      *(undefined4 **)((int)this + 0x154) = puVar11 + 1;
      param_1 = param_1 + 1;
    }
  }
  _strncpy((char *)((int)this + 0x160),(char *)(uVar2 + 0x160),0x20);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(uVar2 + 0x1a4);
  puVar11 = (undefined4 *)(uVar2 + 0x1a8);
  puVar3 = (undefined4 *)((int)this + 0x1a8);
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(uVar2 + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(uVar2 + 0x1d4);
  puVar11 = (undefined4 *)(uVar2 + 0x1d8);
  puVar3 = (undefined4 *)((int)this + 0x1d8);
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x200) = *(undefined4 *)(uVar2 + 0x200);
  puVar11 = (undefined4 *)(uVar2 + 0x160);
  puVar3 = (undefined4 *)((int)this + 0x160);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar11 = (undefined4 *)(uVar2 + 0x180);
  puVar3 = (undefined4 *)((int)this + 0x180);
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar3 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x1a0) = *(undefined4 *)(uVar2 + 0x1a0);
  return;
}


//// FUNCTION FUN_00758ba0 @ 00758ba0 ////

undefined4 __thiscall FUN_00758ba0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  wchar_t wVar5;
  uint uVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  uint uVar9;
  wchar_t *pwVar10;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar4;
  uVar6 = FUN_00ace02d((wchar_t *)(param_1 + 0x20));
  FUN_004036d0((void *)((int)this + 0xc),(wchar_t *)(param_1 + 0x20),uVar6);
  pwVar10 = (wchar_t *)(param_1 + 0x22 + *(int *)((int)this + 0x10) * 2);
  uVar6 = FUN_00ace02d(pwVar10);
  FUN_004036d0((void *)((int)this + 0x2c),pwVar10,uVar6);
  pwVar10 = pwVar10 + *(int *)((int)this + 0x30) + 1;
  pwVar7 = pwVar10;
  param_1 = iVar3;
  if (0 < iVar3) {
    do {
      pwVar7 = pwVar10 + 2;
      do {
        wVar5 = *pwVar7;
        pwVar7 = (wchar_t *)((int)pwVar7 + 1);
      } while ((char)wVar5 != '\0');
      FUN_007584e0(this,(char *)(pwVar10 + 2),*(int *)pwVar10);
      param_1 = param_1 + -1;
      pwVar10 = pwVar7;
    } while (param_1 != 0);
  }
  *(uint *)((int)this + 0x58) = uVar9;
  if (uVar9 != 0) {
    puVar8 = operator_new(uVar9);
    uVar9 = *(uint *)((int)this + 0x58);
    *(undefined4 **)((int)this + 0x5c) = puVar8;
    for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = *(undefined4 *)pwVar7;
      pwVar7 = pwVar7 + 2;
      puVar8 = puVar8 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(char *)puVar8 = (char)*pwVar7;
      pwVar7 = (wchar_t *)((int)pwVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  return uVar1;
}


//// FUNCTION FUN_00758c90 @ 00758c90 ////

void __fastcall FUN_00758c90(int param_1)

{
  int iVar1;
  void *_Memory;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x264), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x268) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    _Memory = *(void **)(iVar1 + uVar2 * 4);
    if (_Memory != (void *)0x0) {
      FUN_007586d0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 0x264) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x264));
  }
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  return;
}


//// FUNCTION FUN_00758d10 @ 00758d10 ////

undefined4 __thiscall FUN_00758d10(void *this,void *param_1)

{
  undefined4 *this_00;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6bb6;
  local_c = ExceptionList;
  local_10 = this;
  switch(*(undefined4 *)this) {
  case 1:
    ExceptionList = &local_c;
    FUN_009d9820();
    local_10 = operator_new(0x204);
    local_4 = 0;
    if (local_10 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_00757a20(local_10);
    }
    local_4 = 0xffffffff;
    FUN_00758110(this_00,this);
    FUN_00757970(param_1,(int)this_00);
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 4);
  case 2:
    ExceptionList = &local_c;
    FUN_009d9820();
    local_10 = operator_new(0x60);
    local_4 = 1;
    if (local_10 == (undefined4 *)0x0) {
      local_10 = (undefined4 *)0x0;
    }
    else {
      local_10 = (undefined4 *)FUN_004e4e20((int)local_10);
    }
    local_4 = 0xffffffff;
    FUN_00758ba0(local_10,(int)this);
    FUN_004e4770((void *)((int)param_1 + 0x260),&local_10);
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 4);
  case 3:
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_009d9820();
    FUN_00753120((int)this,(undefined4 *)((int)param_1 + 0x280),(uint *)((int)param_1 + 0x284));
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 4);
  case 5:
    break;
  case 6:
    ExceptionList = &local_c;
    FUN_009d9820();
    FUN_00758580((void *)((int)param_1 + 0x270),(int)this);
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 4);
  case 7:
    break;
  case 8:
    ExceptionList = &local_c;
    FUN_009d9820();
    FUN_007549e0((int)this);
    ExceptionList = local_c;
    return *(undefined4 *)((int)this + 4);
  }
  ExceptionList = &local_c;
  FUN_009d9820();
  ExceptionList = local_c;
  return *(undefined4 *)((int)this + 4);
}


//// FUNCTION FUN_00758f00 @ 00758f00 ////

void __fastcall FUN_00758f00(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x60),(wchar_t *)&lpCaption_00d16918,uVar4);
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x80),(wchar_t *)&lpCaption_00d16918,uVar4);
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0xa0),(wchar_t *)&lpCaption_00d16918,uVar4);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_004015d0((void *)(param_1 + 300),"",0);
  FUN_004015d0((void *)(param_1 + 0x14c),"",0);
  FUN_004015d0((void *)(param_1 + 0x16c),"",0);
  FUN_004015d0((void *)(param_1 + 0x1ac),"",0);
  FUN_004015d0((void *)(param_1 + 0x18c),"",0);
  FUN_004015d0((void *)(param_1 + 0xdc),"",0);
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0xfc),(wchar_t *)&lpCaption_00d16918,uVar4);
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x1cc),(wchar_t *)&lpCaption_00d16918,uVar4);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  FUN_00756c10(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    do {
      uVar5 = *(int *)(param_1 + 0xcc) + uVar6;
      uVar4 = uVar5 >> 2;
      iVar3 = uVar4 * -4;
      if (*(uint *)(param_1 + 200) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(param_1 + 200);
      }
      puVar2 = *(undefined4 **)
                (*(int *)(*(int *)(param_1 + 0xc4) + uVar4 * 4) + (uVar5 + iVar3) * 4);
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xd0));
  }
  FUN_005b8aa0(param_1 + 0xc0);
  FUN_00758c90(param_1);
  *(undefined4 *)(param_1 + 0x284) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x280));
}


//// FUNCTION FUN_007590f0 @ 007590f0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __cdecl FUN_007590f0(void *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  void *this;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  wchar_t awStack_10c8 [4];
  undefined4 uStack_10c0;
  char *pcStack_10bc;
  uint local_10a0 [4];
  undefined4 uStack_1090;
  wchar_t awStack_1088 [260];
  wchar_t awStack_e80 [264];
  undefined4 uStack_c70;
  wchar_t awStack_c6c [260];
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  char acStack_a58 [260];
  wchar_t awStack_954 [260];
  char acStack_74c [260];
  char acStack_648 [260];
  char acStack_544 [260];
  char acStack_440 [260];
  char acStack_33c [260];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t awStack_228 [262];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_4;
  
  uStack_4 = 0x7590fa;
  uVar1 = FUN_00a266c0();
  if (((param_2 != (undefined4 *)0x0) && (param_1 != (void *)0x0)) && (uVar1 = 0, param_3 != 0)) {
    pcStack_10bc = (char *)0x75913a;
    FUN_009d9820();
    pcStack_10bc = "\t Header\n";
    uStack_10c0 = 0x759144;
    FUN_009d9820();
    puVar5 = local_10a0;
    for (iVar4 = 0x428; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    pcStack_10bc = (char *)0x75915e;
    iVar4 = FUN_00753160(local_10a0,param_2);
    uVar1 = local_10a0[0];
    if (0x10 < (int)local_10a0[0]) {
      FUN_00758f00((int)param_1);
      *(undefined4 *)((int)param_1 + 0xd4) = uStack_c70;
      pwVar6 = awStack_10c8;
      awStack_10c8[0] = L'\0';
      uVar7 = 0;
      uVar8 = 10;
      uVar1 = FUN_00ace02d(awStack_1088);
      FUN_004036d0(&stack0xffffef2c,awStack_1088,uVar1);
      FUN_007546f0(param_1,pwVar6,uVar7,uVar8);
      pcStack_10bc = (char *)0x7591d8;
      FUN_00403e90((void *)((int)param_1 + 0xa0),awStack_228);
      *(uint *)((int)param_1 + 0x290) = local_10a0[1];
      *(uint *)((int)param_1 + 0x294) = local_10a0[2];
      *(uint *)((int)param_1 + 0x298) = local_10a0[3];
      *(undefined4 *)((int)param_1 + 0x29c) = uStack_1090;
      *(undefined4 *)((int)param_1 + 0xd8) = uStack_a5c;
      *(undefined4 *)((int)param_1 + 0x11c) = uStack_234;
      *(undefined4 *)((int)param_1 + 0x124) = uStack_22c;
      *(undefined4 *)((int)param_1 + 0x120) = uStack_230;
      pcStack_10bc = (char *)0x759240;
      FUN_00403e20((void *)((int)param_1 + 0xdc),acStack_a58);
      pcStack_10bc = (char *)0x759253;
      FUN_00403e90((void *)((int)param_1 + 0xfc),awStack_954);
      pcStack_10bc = (char *)0x759266;
      FUN_00403e20((void *)((int)param_1 + 300),acStack_74c);
      pcStack_10bc = (char *)0x759279;
      FUN_00403e20((void *)((int)param_1 + 0x14c),acStack_648);
      pcStack_10bc = (char *)0x75928c;
      FUN_00403e20((void *)((int)param_1 + 0x16c),acStack_544);
      pcStack_10bc = (char *)0x75929f;
      FUN_00403e20((void *)((int)param_1 + 0x1ac),acStack_440);
      pcStack_10bc = (char *)0x7592b2;
      FUN_00403e20((void *)((int)param_1 + 0x18c),acStack_33c);
      pcStack_10bc = (char *)0x7592c5;
      FUN_00403e90((void *)((int)param_1 + 0x1cc),awStack_c6c);
      *(undefined4 *)((int)param_1 + 0x1f0) = uStack_a64;
      *(undefined4 *)((int)param_1 + 500) = 0;
      *(undefined4 *)((int)param_1 + 0x1f0) = uStack_a64;
      *(undefined4 *)((int)param_1 + 0x6a0) = uStack_18;
      *(undefined4 *)((int)param_1 + 500) = uStack_a60;
      *(undefined4 *)((int)param_1 + 0x128) = uStack_238;
      pcStack_10bc = (char *)0x759320;
      FUN_00403e90((void *)((int)param_1 + 0x80),awStack_e80);
      *(undefined4 *)((int)param_1 + 0x28c) = uStack_1c;
      pcStack_10bc = (char *)0x759337;
      FUN_009d9820();
      pcStack_10bc = (char *)0x759346;
      iVar2 = FUN_00758ba0((void *)((int)param_1 + 0x200),iVar4 + (int)param_2);
      for (this = (void *)(iVar4 + (int)param_2 + iVar2);
          (this != (void *)(param_3 + (int)param_2) && (*(int *)((int)this + 4) != 0));
          this = (void *)((int)this + iVar4)) {
        pcStack_10bc = (char *)0x759365;
        iVar4 = FUN_00758d10(this,param_1);
      }
      pcStack_10bc = (char *)0x759375;
      uVar3 = FUN_009d9820();
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_007593a0 @ 007593a0 ////

undefined4 * __fastcall FUN_007593a0(undefined4 *param_1)

{
  uint *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6ca2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d4c930;
  param_1[0xe] = &PTR_LAB_00d4c910;
  param_1[0x18] = param_1 + 0x1b;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 10;
  param_1[0x20] = param_1 + 0x23;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 10;
  param_1[0x28] = param_1 + 0x2b;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 10;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = param_1 + 0x3a;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x14;
  param_1[0x3f] = param_1 + 0x42;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 10;
  param_1[0x4b] = param_1 + 0x4e;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0x14;
  param_1[0x53] = param_1 + 0x56;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0x14;
  param_1[0x5b] = param_1 + 0x5e;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0x14;
  param_1[99] = param_1 + 0x66;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x14;
  param_1[0x6b] = param_1 + 0x6e;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x14;
  param_1[0x73] = param_1 + 0x76;
  *(undefined2 *)(param_1 + 0x76) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 10;
  puVar1 = param_1 + 0x7e;
  *puVar1 = 0;
  param_1[0x7f] = 0;
  *puVar1 = *puVar1 & 0xfffffffc | 0xc;
  local_4._0_1_ = 0xd;
  FUN_004e4e20((int)(param_1 + 0x80));
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  param_1[0xa0] = 0;
  FUN_00758f00((int)param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_007595a0 @ 007595a0 ////

void __fastcall FUN_007595a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd6dae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4c930;
  param_1[0xe] = &PTR_LAB_00d4c910;
  local_4 = 0x10;
  FUN_00758f00((int)param_1);
  if ((undefined4 *)param_1[0x9d] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x9d],(undefined4 *)param_1[0x9e]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x9d]);
  }
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  if ((void *)param_1[0x99] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x99]);
  }
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  local_4._0_1_ = 0xd;
  FUN_007586d0((int)(param_1 + 0x80));
  if (10 < (uint)param_1[0x75]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x73]);
  }
  if (0x14 < (uint)param_1[0x6d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x6b]);
  }
  if (0x14 < (uint)param_1[0x65]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[99]);
  }
  if (0x14 < (uint)param_1[0x5d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5b]);
  }
  if (0x14 < (uint)param_1[0x55]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x53]);
  }
  if (0x14 < (uint)param_1[0x4d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4b]);
  }
  if (10 < (uint)param_1[0x41]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3f]);
  }
  if (0x14 < (uint)param_1[0x39]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x37]);
  }
  FUN_005b8aa0((int)(param_1 + 0x30));
  if (10 < (uint)param_1[0x2a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x28]);
  }
  if (10 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if (10 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00759790 @ 00759790 ////

uint __cdecl FUN_00759790(void *param_1,wchar_t *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2d;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6dd0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d(param_2);
  FUN_004036d0(&local_2c,param_2,uVar1);
  local_4 = 0;
  uVar1 = FUN_009d4900(&local_2c);
  local_4 = 0xffffffff;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar2 = local_24;
  if (uVar1 != 0) {
    uVar2 = FUN_00755190(param_2,&local_2d,(uint *)0x0);
    if ((char)uVar2 != '\0') {
      _Memory = operator_new(uVar1);
      puVar3 = _Memory;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar2 = FUN_00ace02d(param_2);
      FUN_004036d0(&local_2c,param_2,uVar2);
      local_4 = 1;
      FUN_009d4aa0(&local_2c,_Memory,uVar1,(undefined1 *)0x0);
      local_4 = 0xffffffff;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_007590f0(param_1,_Memory,uVar1);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_007598f0 @ 007598f0 ////

void __cdecl FUN_007598f0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6deb;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)0x0;
  if (DAT_010583e0 != 0) {
    if (DAT_010583e0 == 1) {
      local_18 = 0;
      ExceptionList = &local_c;
      SLVAR_LoadUint(&local_18);
      if (local_18 != 0) {
        local_10 = operator_new(0x6a8);
        local_4 = 0;
        if (local_10 != (undefined4 *)0x0) {
          puVar4 = FUN_007593a0(local_10);
        }
        local_4 = 0xffffffff;
        (**(code **)(*param_1 + 4))();
        param_1[5] = (int)puVar4;
        (**(code **)*param_1)();
        puVar2 = operator_new(local_18);
        puVar4 = puVar2;
        for (uVar3 = local_18 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar3 = local_18 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        FUN_00989810(puVar2,local_18);
        FUN_007590f0((void *)param_1[5],puVar2,local_18);
                    /* WARNING: Subroutine does not return */
        _free(puVar2);
      }
    }
    ExceptionList = local_c;
    return;
  }
  local_10 = (undefined4 *)0x0;
  if (param_1[5] == 0) {
    ExceptionList = &local_c;
    FUN_0098a3a0(&local_10);
    ExceptionList = local_c;
    return;
  }
  local_14 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  uVar1 = FUN_007563d0(param_1[5],&local_14,(int *)&local_10);
  puVar2 = local_10;
  puVar4 = local_14;
  if ((char)uVar1 != '\0') {
    FUN_0098a3a0(&local_10);
    FUN_009897e0(puVar4,(uint)puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar4);
}


//// FUNCTION FUN_00759a60 @ 00759a60 ////

undefined4 * __thiscall FUN_00759a60(void *this,byte param_1)

{
  FUN_007595a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00759a80 @ 00759a80 ////

void __cdecl FUN_00759a80(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  wchar_t awStack_78 [4];
  undefined4 uStack_70;
  wchar_t *local_4c;
  void *pvStack_48;
  uint uStack_40;
  void *apvStack_2c [2];
  uint uStack_24;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6e13;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  uStack_70 = 0x759aae;
  FUN_00755040(param_1,&local_4c,'\x01');
  iStack_4 = 0;
  uStack_70 = 0x759abf;
  uVar3 = FUN_009d36d0(&local_4c,(uint *)0x0);
  if ((char)uVar3 != '\0') {
    puVar4 = operator_new(0x6a8);
    iStack_4._0_1_ = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_007593a0(puVar4);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    uStack_70 = 0x759b09;
    FUN_00759790(puVar4,local_4c);
    iVar1 = puVar4[0x1a8];
    iVar2 = *(int *)((int)param_1 + 0x6a0);
    (**(code **)*puVar4)();
    if (iVar1 != iVar2) {
      pwVar5 = awStack_78;
      awStack_78[0] = L'\0';
      uVar6 = 0;
      uVar7 = 10;
      FUN_004036d0(&stack0xffffff7c,local_4c,(uint)pvStack_48);
      puVar4 = FUN_00569600(apvStack_2c,pwVar5,uVar6,uVar7);
      uStack_70 = 0x759b72;
      FUN_004036d0(&local_4c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
  }
  awStack_78[0] = L'\0';
  FUN_004036d0(&stack0xffffff7c,local_4c,(uint)pvStack_48);
  FUN_00756b50((int)param_1);
  if (10 < uStack_40) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_48);
  }
  *unaff_FS_OFFSET = puStack_8;
  return;
}


//// FUNCTION FUN_00759c00 @ 00759c00 ////

int * __thiscall FUN_00759c00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00759cb0 @ 00759cb0 ////

void __fastcall FUN_00759cb0(void *param_1)

{
  if (0x14 < *(uint *)((int)param_1 + 0x68)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x60));
  }
  _eh_vector_destructor_iterator_(param_1,0x20,3,FUN_00403650);
  return;
}


//// FUNCTION FUN_00759ce0 @ 00759ce0 ////

void __fastcall FUN_00759ce0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x40) != param_1 + 0x4c) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x40) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while (*(int *)(param_1 + 0x40) != param_1 + 0x4c);
  }
  return;
}


//// FUNCTION FUN_00759d30 @ 00759d30 ////

void FUN_00759d30(void)

{
  if (DAT_0104e23c != (undefined4 *)0x0) {
    (**(code **)*DAT_0104e23c)(1);
  }
  (*(code *)DAT_0104e228[1])();
  DAT_0104e23c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00759d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104e228)();
  return;
}


//// FUNCTION FUN_00759d70 @ 00759d70 ////

float10 FUN_00759d70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0104e32c;
  iVar2 = FUN_007704f0(DAT_0104e478);
  return (float10)iVar1 / (float10)iVar2;
}


//// FUNCTION FUN_00759e20 @ 00759e20 ////

int * __fastcall FUN_00759e20(int *param_1)

{
  int iVar1;
  uint _Count;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  
  _eh_vector_constructor_iterator_(param_1,0x20,3,FUN_00403e50,FUN_00403650);
  param_1[0x18] = (int)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x14;
  iVar4 = 3;
  piVar5 = param_1;
  do {
    _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
    if ((uint)piVar5[2] <= _Count) {
      if (10 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar5);
      }
      uVar2 = _Count + 0x20 & 0xffffffe0;
      piVar5[2] = uVar2;
      pvVar3 = _malloc(uVar2 * 2);
      *piVar5 = (int)pvVar3;
    }
    _wcsncpy((wchar_t *)*piVar5,(wchar_t *)&lpCaption_00d16918,_Count);
    iVar1 = *piVar5;
    piVar5[1] = _Count;
    piVar5 = piVar5 + 8;
    iVar4 = iVar4 + -1;
    *(undefined2 *)(iVar1 + _Count * 2) = 0;
  } while (iVar4 != 0);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  if ((uint)param_1[0x1a] < 0x12) {
    if (0x14 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x18]);
    }
    param_1[0x1a] = 0x20;
    pvVar3 = _malloc(0x20);
    param_1[0x18] = (int)pvVar3;
  }
  _strncpy((char *)param_1[0x18],"URWTypewriterTMed",0x11);
  param_1[0x19] = 0x11;
  *(undefined1 *)(param_1[0x18] + 0x11) = 0;
  return param_1;
}


//// FUNCTION FUN_00759f40 @ 00759f40 ////

/* WARNING: Removing unreachable block (ram,0x00759f6e) */

void __fastcall FUN_00759f40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4c950;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12] = param_1[0x11];
  }
  if (param_1[0x11] != 0) {
    *(undefined4 *)(param_1[0x11] + 4) = param_1[0x12];
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_1[0x11] != 0) {
    *(undefined4 *)(param_1[0x11] + 4) = param_1[0x12];
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00759f90 @ 00759f90 ////

void __cdecl FUN_00759f90(undefined4 *param_1,undefined4 *param_2)

{
  FUN_004036d0(&PTR_DAT_00e58f00,(wchar_t *)*param_1,param_1[1]);
  FUN_004015d0(&PTR_DAT_00e58f20,(char *)*param_2,param_2[1]);
  return;
}


//// FUNCTION FUN_00759fc0 @ 00759fc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_00759fc0(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  wchar_t *in_stack_ffffffd4;
  wchar_t *pwVar4;
  uint in_stack_ffffffd8;
  uint in_stack_ffffffdc;
  uint uVar5;
  wchar_t local_20 [4];
  undefined4 uStack_18;
  
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uStack_18 = 0x759fe0;
  FUN_004036d0(&DAT_0104e240,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uStack_18 = 0x759ffd;
  FUN_004036d0(&DAT_0104e260,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uStack_18 = 0x75a01a;
  FUN_004036d0(&DAT_0104e280,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar3 = 0;
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (DAT_00e58f04 == 0) {
    iVar2 = FUN_0074f5c0(*(void **)(DAT_0104e478 + 0x36c),param_1);
    if (iVar2 == 0) goto LAB_0075a0eb;
    FUN_00421290(&stack0xffffffd4,(undefined4 *)(iVar2 + 0xec));
    FUN_0075b6a0((int *)&DAT_0104e240,in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc);
    uStack_18 = 0x75a0e0;
    FUN_004015d0(&DAT_0104e2a0,*(char **)(iVar2 + 0xcc),*(uint *)(iVar2 + 0xd0));
    if (DAT_0104e244 == 0) goto LAB_0075a0eb;
  }
  else {
    pwVar4 = local_20;
    local_20[0] = L'\0';
    uVar1 = 0;
    uVar5 = 10;
    FUN_004036d0(&stack0xffffffd4,(wchar_t *)PTR_DAT_00e58f00,DAT_00e58f04);
    FUN_0075b6a0((int *)&DAT_0104e240,pwVar4,uVar1,uVar5);
    uStack_18 = 0x75a088;
    FUN_004015d0(&DAT_0104e2a0,PTR_DAT_00e58f20,DAT_00e58f24);
  }
  uVar3 = 1;
LAB_0075a0eb:
  _DAT_0104e2cc = 9999;
  _DAT_0104e2c8 = 0;
  FUN_009760a0(param_2,0x104e240);
  return uVar3;
}


//// FUNCTION FUN_0075a120 @ 0075a120 ////

void FUN_0075a120(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00771360(DAT_0104e478);
  if (*(void **)(DAT_0104e478 + 0x378) != (void *)0x0) {
    iVar1 = FUN_0074f620(*(void **)(DAT_0104e478 + 0x378),iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) {
      iVar2 = FUN_00751060(iVar1);
      FUN_00a29540(iVar2,iVar1);
    }
  }
  return;
}


//// FUNCTION FUN_0075a170 @ 0075a170 ////

void FUN_0075a170(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_007614a0();
  iVar2 = FUN_00771360(DAT_0104e478);
  FUN_00759fc0(iVar2,pvVar1);
  return;
}


//// FUNCTION FUN_0075a190 @ 0075a190 ////

int __thiscall FUN_0075a190(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == (int)this + 0x4c) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x38) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return *(int *)(iVar1 + 8);
}


//// FUNCTION FUN_0075a200 @ 0075a200 ////

void __thiscall FUN_0075a200(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4c958;
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


//// FUNCTION FUN_0075a250 @ 0075a250 ////

void __fastcall FUN_0075a250(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4c958;
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


//// FUNCTION FUN_0075a2a0 @ 0075a2a0 ////

undefined4 * __thiscall FUN_0075a2a0(void *this,byte param_1)

{
  FUN_00759f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075a2c0 @ 0075a2c0 ////

void __thiscall FUN_0075a2c0(void *this,void *param_1)

{
  uint uVar1;
  size_t sVar2;
  undefined2 *local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined2 local_f0 [10];
  int local_dc;
  wchar_t *local_d8;
  int local_d4;
  int local_d0;
  wchar_t *local_cc;
  uint local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  wchar_t local_a0 [10];
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6e83;
  local_c = ExceptionList;
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(L"global");
  FUN_004036d0(&local_fc,L"global",uVar1);
  local_4 = 0;
  FUN_00562420(param_1,&local_fc,'\x01');
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  uVar1 = FUN_00ace02d(L"GUID");
  FUN_004036d0(&local_fc,L"GUID",uVar1);
  local_4 = 1;
  FUN_00561610(param_1,&local_fc,*(undefined4 *)((int)this + 0x70));
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  uVar1 = FUN_00ace02d(L"ShortTitles");
  FUN_004036d0(&local_fc,L"ShortTitles",uVar1);
  local_4 = 2;
  FUN_00561610(param_1,&local_fc,(uint)*(byte *)((int)this + 0x74));
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  uVar1 = FUN_00ace02d(L"SFX_MUMBLE");
  FUN_004036d0(&local_fc,L"SFX_MUMBLE",uVar1);
  local_4 = 3;
  FUN_00561610(param_1,&local_fc,(uint)DAT_0104e40a);
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  uVar1 = FUN_00ace02d(L"SFX_SFX");
  FUN_004036d0(&local_fc,L"SFX_SFX",uVar1);
  local_4 = 4;
  FUN_00561610(param_1,&local_fc,(uint)DAT_0104e408);
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_fc = local_f0;
  local_f0[0] = 0;
  local_f8 = 0;
  local_f4 = 10;
  uVar1 = FUN_00ace02d(L"SFX_AMBIENT");
  FUN_004036d0(&local_fc,L"SFX_AMBIENT",uVar1);
  local_4 = 5;
  FUN_00561610(param_1,&local_fc,(uint)DAT_0104e409);
  local_4 = 0xffffffff;
  if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_fc);
  }
  local_dc = *(int *)((int)this + 0x40);
  local_d0 = (int)this + 0x4c;
  local_d8 = (wchar_t *)0x0;
  if (local_dc != local_d0) {
    do {
      local_d4 = *(int *)(local_dc + 8);
      local_fc = local_f0;
      local_f0[0] = 0;
      local_f8 = 0;
      local_f4 = 10;
      local_4 = 6;
      sVar2 = FUN_00ace02d(L"scene_");
      FUN_0040cae0(&local_fc,L"scene_",sVar2);
      sVar2 = _swprintf(local_8c,0xd18f7c,local_d8);
      FUN_0040cae0(&local_fc,local_8c,sVar2);
      FUN_00562420(param_1,&local_fc,'\x01');
      local_cc = local_c0;
      local_c0[0] = L'\0';
      local_c8 = 0;
      local_c4 = 10;
      uVar1 = FUN_00ace02d(L"BFadesIn");
      if (local_c4 <= uVar1) {
        if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        local_c4 = uVar1 + 0x20 & 0xffffffe0;
        local_cc = _malloc(local_c4 * 2);
      }
      _wcsncpy(local_cc,L"BFadesIn",uVar1);
      local_cc[uVar1] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,7);
      local_c8 = uVar1;
      FUN_00561610(param_1,&local_cc,(uint)*(byte *)(local_d4 + 0x3c));
      if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      local_ac = local_a0;
      local_a0[0] = L'\0';
      local_a8 = 0;
      local_a4 = 10;
      uVar1 = FUN_00ace02d(L"BFadesOut");
      if (local_a4 <= uVar1) {
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
        local_a4 = uVar1 + 0x20 & 0xffffffe0;
        local_ac = _malloc(local_a4 * 2);
      }
      _wcsncpy(local_ac,L"BFadesOut",uVar1);
      local_ac[uVar1] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,8);
      local_a8 = uVar1;
      FUN_00561610(param_1,&local_ac,(uint)*(byte *)(local_d4 + 0x3d));
      if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      local_d8 = (wchar_t *)((int)local_d8 + 1);
      local_4 = 0xffffffff;
      if (10 < local_f4) {
                    /* WARNING: Subroutine does not return */
        _free(local_fc);
      }
      local_dc = *(int *)(local_dc + 4);
    } while (local_dc != local_d0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0075a840 @ 0075a840 ////

void __fastcall FUN_0075a840(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d4ca14;
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


//// FUNCTION FUN_0075a890 @ 0075a890 ////

undefined4 * __thiscall FUN_0075a890(void *this,byte param_1)

{
  FUN_0075a840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075a8b0 @ 0075a8b0 ////

void __fastcall FUN_0075a8b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd6ea3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4ca20;
  local_4 = 1;
  if ((undefined4 *)param_1[0x10] != param_1 + 0x13) {
    do {
      if (*(undefined4 **)(param_1[0x10] + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1[0x10] + 8))(1);
      }
    } while ((undefined4 *)param_1[0x10] != param_1 + 0x13);
  }
  FUN_0075a840(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0075a930 @ 0075a930 ////

undefined4 * __thiscall FUN_0075a930(void *this,byte param_1)

{
  FUN_0075a8b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075a950 @ 0075a950 ////

void __fastcall FUN_0075a950(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d4ca14;
  return;
}


//// FUNCTION FUN_0075a9b0 @ 0075a9b0 ////

undefined4 * __fastcall FUN_0075a9b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6eee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d4ca20;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar1 = param_1 + 0x13;
  param_1[0x15] = 0;
  *puVar1 = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *puVar1 = param_1 + 0xf;
  param_1[0x10] = puVar1;
  param_1[0xe] = &PTR_LAB_00d4ca14;
  param_1[0x1b] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0075aa20 @ 0075aa20 ////

undefined4 * FUN_0075aa20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6f0b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104e23c == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x78);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0075a9b0(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104e228[1])();
    DAT_0104e23c = puVar2;
    (*(code *)*DAT_0104e228)();
  }
  ExceptionList = local_c;
  return DAT_0104e23c;
}


//// FUNCTION FUN_0075aaa0 @ 0075aaa0 ////

undefined4 * __thiscall FUN_0075aaa0(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6f33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  piVar1 = (int *)((int)this + 0x44);
  *(undefined ***)this = &PTR_FUN_00d4c950;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x3d) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(void **)((int)this + 0x4c) = this;
  FUN_00acdb9e(0xe58ff0);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x50) = iVar2;
  if (DAT_00e58fec != '\0') {
    iVar2 = 0x44;
    pcVar5 = "MyLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe58ff0);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    DAT_00e58fec = '\0';
  }
  iVar2 = FUN_0075aa20();
  piVar4 = (int *)(iVar2 + 0x4c);
  *(int **)((int)this + 0x48) = piVar4;
  *piVar1 = *piVar4;
  *(int **)(*piVar4 + 4) = piVar1;
  *piVar4 = (int)piVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0075ab80 @ 0075ab80 ////

void FUN_0075ab80(void)

{
  int iVar1;
  int iVar2;
  void *this;
  
  iVar2 = DAT_01050b50;
  iVar1 = FUN_007614a0();
  if (iVar1 != 0) {
    iVar2 = FUN_007740d0(iVar2);
    if (iVar2 != 0) {
      this = (void *)FUN_0075aa20();
      iVar2 = FUN_0075a190(this,iVar2);
      if (iVar2 != 0) {
        iVar1 = FUN_0075aa20();
        *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar2 + 0x40);
        return;
      }
    }
  }
  iVar2 = FUN_0075aa20();
  *(undefined4 *)(iVar2 + 0x6c) = 0x3f800000;
  return;
}


//// FUNCTION FUN_0075abd0 @ 0075abd0 ////

void FUN_0075abd0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *this;
  int iVar4;
  ulonglong uVar5;
  float local_c;
  
  local_c = 1.0;
  iVar2 = FUN_007712d0(DAT_0104e478);
  iVar3 = DAT_01050b50;
  fVar1 = DAT_00e68fa4;
  if (((iVar2 <= DAT_0104e32c) && (iVar2 = FUN_007614a0(), fVar1 = local_c, iVar2 != 0)) &&
     (iVar2 = FUN_007740d0(iVar3), fVar1 = local_c, iVar2 != 0)) {
    iVar3 = FUN_00774040(iVar3);
    uVar5 = FUN_00770460(iVar2);
    iVar4 = (int)uVar5 - iVar3;
    this = (void *)FUN_0075aa20();
    iVar2 = FUN_0075a190(this,iVar2);
    if ((*(char *)(iVar2 + 0x3c) == '\0') || (7 < iVar3)) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = (float)iVar3 * 0.125;
    }
    if ((*(char *)(iVar2 + 0x3d) != '\0') && (iVar4 < 8)) {
      DAT_00e68fa4 = (float)iVar4 * 0.125;
      return;
    }
  }
  DAT_00e68fa4 = fVar1;
  return;
}


//// FUNCTION FUN_0075aca0 @ 0075aca0 ////

void __thiscall FUN_0075aca0(void *this,void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  undefined2 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined2 local_f8 [10];
  undefined4 *puStack_e4;
  int local_e0;
  wchar_t *pwStack_dc;
  uint uStack_d4;
  void *local_d0;
  wchar_t *pwStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  wchar_t awStack_c0 [10];
  wchar_t *pwStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  wchar_t awStack_a0 [10];
  wchar_t awStack_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6fb1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_d0 = this;
  if (*(int *)((int)this + 0x40) != (int)this + 0x4c) {
    ExceptionList = &pvStack_c;
    do {
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x40) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while (*(int *)((int)this + 0x40) != (int)this + 0x4c);
  }
  local_e0 = DAT_0104e4a8;
  if (DAT_0104e4a8 != 0) {
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"global");
    FUN_004036d0(&local_104,L"global",uVar2);
    uStack_4 = 0;
    FUN_00562420(param_1,&local_104,'\x01');
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"GUID");
    FUN_004036d0(&local_104,L"GUID",uVar2);
    uStack_4 = 1;
    uVar3 = FUN_00561ca0(param_1,&local_104,0);
    *(undefined4 *)((int)this + 0x70) = uVar3;
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"ShortTitles");
    FUN_004036d0(&local_104,L"ShortTitles",uVar2);
    uStack_4 = 2;
    iVar4 = FUN_00561ca0(param_1,&local_104,0);
    *(bool *)((int)this + 0x74) = iVar4 != 0;
    uStack_4 = 0xffffffff;
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    uVar2 = (uint)(*(char *)((int)this + 0x74) == '\0');
    pvVar5 = (void *)FUN_0074b390();
    FUN_00748830(pvVar5,uVar2);
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"SFX_MUMBLE");
    FUN_004036d0(&local_104,L"SFX_MUMBLE",uVar2);
    uStack_4 = 3;
    iVar4 = FUN_00561ca0(param_1,&local_104,0);
    DAT_0104e40a = iVar4 != 0;
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"SFX_SFX");
    FUN_004036d0(&local_104,L"SFX_SFX",uVar2);
    uStack_4 = 4;
    iVar4 = FUN_00561ca0(param_1,&local_104,0);
    DAT_0104e408 = iVar4 != 0;
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    local_104 = local_f8;
    local_f8[0] = 0;
    local_100 = 0;
    local_fc = 10;
    uVar2 = FUN_00ace02d(L"SFX_AMBIENT");
    FUN_004036d0(&local_104,L"SFX_AMBIENT",uVar2);
    uStack_4 = 5;
    iVar4 = FUN_00561ca0(param_1,&local_104,0);
    DAT_0104e409 = iVar4 != 0;
    uStack_4 = 0xffffffff;
    if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104);
    }
    DAT_010b9554 = DAT_0104e40a == '\0';
    DAT_010b9555 = DAT_0104e408 == '\0';
    uStack_d4 = *(uint *)(local_e0 + 0xcc);
    pwStack_dc = (wchar_t *)0x0;
    local_e0 = local_e0 + 0xc0;
    for (; pvVar5 = local_d0, uStack_4 = 0xffffffff,
        uStack_d4 != *(int *)(local_e0 + 0x10) + *(int *)(local_e0 + 0xc); uStack_d4 = uStack_d4 + 1
        ) {
      uVar2 = uStack_d4 >> 2;
      iVar4 = uVar2 * -4;
      if (*(uint *)(local_e0 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(local_e0 + 8);
      }
      uVar3 = *(undefined4 *)
               (*(int *)(*(int *)(local_e0 + 4) + uVar2 * 4) + (uStack_d4 + iVar4) * 4);
      puStack_e4 = operator_new(0x54);
      uStack_4 = 6;
      if (puStack_e4 == (void *)0x0) {
        puStack_e4 = (undefined4 *)0x0;
      }
      else {
        puStack_e4 = FUN_0075aaa0(puStack_e4,uVar3);
      }
      local_104 = local_f8;
      local_f8[0] = 0;
      local_100 = 0;
      local_fc = 10;
      uStack_4 = 7;
      sVar6 = FUN_00ace02d(L"scene_");
      FUN_0040cae0(&local_104,L"scene_",sVar6);
      sVar6 = _swprintf(awStack_8c,0xd18f7c,pwStack_dc);
      FUN_0040cae0(&local_104,awStack_8c,sVar6);
      uVar3 = FUN_00562420(param_1,&local_104,'\x01');
      if ((char)uVar3 != '\0') {
        pwStack_ac = awStack_a0;
        awStack_a0[0] = L'\0';
        uStack_a8 = 0;
        uStack_a4 = 10;
        uVar2 = FUN_00ace02d(L"BFadesIn");
        if (uStack_a4 <= uVar2) {
          if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_ac);
          }
          uStack_a4 = uVar2 + 0x20 & 0xffffffe0;
          pwStack_ac = _malloc(uStack_a4 * 2);
        }
        _wcsncpy(pwStack_ac,L"BFadesIn",uVar2);
        pwStack_ac[uVar2] = L'\0';
        uStack_4 = CONCAT31(uStack_4._1_3_,8);
        uStack_a8 = uVar2;
        iVar4 = FUN_00561ca0(param_1,&pwStack_ac,0);
        *(bool *)(puStack_e4 + 0xf) = iVar4 != 0;
        if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_ac);
        }
        pwStack_cc = awStack_c0;
        awStack_c0[0] = L'\0';
        uStack_c8 = 0;
        uStack_c4 = 10;
        uVar2 = FUN_00ace02d(L"BFadesOut");
        if (uStack_c4 <= uVar2) {
          if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_cc);
          }
          uStack_c4 = uVar2 + 0x20 & 0xffffffe0;
          pwStack_cc = _malloc(uStack_c4 * 2);
        }
        _wcsncpy(pwStack_cc,L"BFadesOut",uVar2);
        pwStack_cc[uVar2] = L'\0';
        uStack_4 = CONCAT31(uStack_4._1_3_,9);
        uStack_c8 = uVar2;
        iVar4 = FUN_00561ca0(param_1,&pwStack_cc,0);
        *(bool *)((int)puStack_e4 + 0x3d) = iVar4 != 0;
        if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_cc);
        }
        puStack_e4[0x10] = 0x3f800000;
      }
      pwStack_dc = (wchar_t *)((int)pwStack_dc + 1);
      uStack_4 = 0xffffffff;
      if (10 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
    }
    if (((DAT_0104e4a8 != 0) && (*(int *)(DAT_0104e4a8 + 0x6a0) != *(int *)((int)local_d0 + 0x70)))
       && (*(int *)((int)local_d0 + 0x40) != (int)local_d0 + 0x4c)) {
      iVar4 = (int)local_d0 + 0x4c;
      do {
        puVar1 = *(undefined4 **)(*(int *)((int)pvVar5 + 0x40) + 8);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
      } while (*(int *)((int)pvVar5 + 0x40) != iVar4);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0075b2b0 @ 0075b2b0 ////

void FUN_0075b2b0(int param_1)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6fcb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    this = operator_new(0x54);
    local_4 = 0;
    if (this != (void *)0x0) {
      FUN_0075aaa0(this,param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0075b310 @ 0075b310 ////

void __fastcall FUN_0075b310(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *this;
  uint uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd6feb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x40) != param_1 + 0x4c) {
    ExceptionList = &pvStack_c;
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x40) + 8);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while (*(int *)(param_1 + 0x40) != param_1 + 0x4c);
  }
  iVar4 = DAT_0104e4a8;
  if (DAT_0104e4a8 != 0) {
    for (uVar6 = *(uint *)(DAT_0104e4a8 + 0xcc);
        uVar6 != *(int *)(iVar4 + 0xd0) + *(int *)(iVar4 + 0xcc); uVar6 = uVar6 + 1) {
      uVar5 = uVar6 >> 2;
      iVar3 = uVar5 * -4;
      if (*(uint *)(iVar4 + 200) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iVar4 + 200);
      }
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0xc4) + uVar5 * 4) + (uVar6 + iVar3) * 4);
      this = operator_new(0x54);
      uStack_4 = 0;
      if (this != (void *)0x0) {
        FUN_0075aaa0(this,uVar2);
      }
      uStack_4 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0x6a0);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0075b400 @ 0075b400 ////

undefined4 * __cdecl FUN_0075b400(undefined4 *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *local_6c;
  int local_68;
  uint local_64;
  undefined1 local_60 [20];
  wchar_t *local_4c;
  undefined4 local_48;
  uint local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7020;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004211c0(&param_2,local_2c,param_3 - 4,4);
  local_4c = local_40;
  local_4._0_1_ = 1;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  uVar1 = FUN_00ace02d(L".ogg");
  FUN_004036d0(&local_4c,L".ogg",uVar1);
  iVar2 = _wcscmp(local_2c[0],local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar2 == 0) {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    local_4._0_1_ = 2;
    puVar3 = FUN_00568870(&local_4c,&param_2);
    FUN_004073f0(&local_6c,"MUSIC_",6);
    FUN_004073f0(&local_6c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    puVar3 = FUN_00430770(&local_6c,&local_4c,0,local_68 - 4);
    FUN_004015d0(&local_6c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4c = local_40;
    local_40[0] = local_40[0] & 0xff00;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"",0);
    local_48 = 0;
    *(char *)local_4c = '\0';
    local_4._0_1_ = 3;
    iVar2 = FUN_009b5f90(&local_6c,0xffffffff,&local_4c);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if ((iVar2 != 0) && (*(char *)(iVar2 + 100) != '\0')) {
      FUN_00421290(param_1,(undefined4 *)(iVar2 + 0x40));
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      goto joined_r0x0075b60d;
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,param_2,param_3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
joined_r0x0075b60d:
  if (param_4 < 0xb) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_0075b6a0 @ 0075b6a0 ////

void __cdecl FUN_0075b6a0(int *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  char *_Source;
  bool bVar1;
  undefined1 *puVar2;
  size_t sVar3;
  byte *_Dest;
  int *this;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  byte local_118 [12];
  undefined4 uStack_10c;
  float *pfVar10;
  wchar_t *pwVar11;
  wchar_t local_e4;
  undefined2 local_e2;
  wchar_t *local_e0;
  uint local_dc;
  uint local_d8;
  wchar_t local_d4 [10];
  wchar_t *local_c0;
  uint local_bc;
  uint local_b8;
  wchar_t local_b4 [10];
  uint local_a0;
  uint local_9c;
  wchar_t *local_98;
  uint local_94;
  uint local_90;
  wchar_t local_8c [10];
  wchar_t *local_78;
  uint local_74;
  uint local_70;
  wchar_t local_6c [10];
  float local_58 [2];
  undefined1 *local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cd704e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *(undefined2 *)*param_1 = 0;
  param_1[9] = 0;
  *(undefined2 *)param_1[8] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)param_1[0x10] = 0;
  local_c0 = local_b4;
  local_4 = 0;
  uStack_3 = 0;
  local_b4[0] = L'\0';
  local_bc = 0;
  local_b8 = 10;
  FUN_004036d0(&local_c0,param_2,param_3);
  local_a0 = 0;
  piVar8 = param_1;
  do {
    local_e0 = local_d4;
    local_d4[0] = L'\0';
    local_dc = 0;
    local_d8 = 10;
    uVar7 = 0;
    local_4 = 2;
    local_9c = 0;
    bVar1 = false;
    if (local_bc != 0) {
      do {
        local_e4 = local_c0[uVar7];
        local_e2 = 0;
        sVar3 = FUN_00ace02d(&local_e4);
        FUN_0040cae0(&local_e0,&local_e4,sVar3);
        if (local_c0[uVar7] == L' ') {
          local_9c = uVar7;
        }
        pfVar10 = local_58;
        local_50 = &stack0xfffffedc;
        _Dest = local_118;
        local_118[0] = 0;
        uVar9 = 0x14;
        uVar5 = param_1[0x19];
        _Source = (char *)param_1[0x18];
        pwVar11 = local_e0;
        puVar2 = &stack0xfffffedc;
        if (0x13 < uVar5) {
          uVar9 = uVar5 + 0x20 & 0xffffffe0;
          _Dest = _malloc(uVar9);
          puVar2 = local_50;
        }
        local_50 = puVar2;
        _strncpy((char *)_Dest,_Source,uVar5);
        _Dest[uVar5] = 0;
        this = FUN_00a2ba20(_Dest,uVar5,uVar9);
        FUN_009a8180(this,pfVar10,(ushort *)pwVar11);
        uVar5 = local_9c;
        pwVar11 = local_e0;
        if (512.0 <= local_58[0]) {
          if (local_9c == 0) {
            local_e0[uVar7] = L'\0';
            local_98 = local_8c;
            local_8c[0] = L'\0';
            local_94 = 0;
            local_90 = 10;
            sVar3 = FUN_00ace02d(local_e0);
            FUN_0040cae0(&local_98,pwVar11,sVar3);
            uVar5 = local_94;
            pwVar11 = local_98;
            if (local_d8 <= local_94) {
              if (10 < local_d8) {
                    /* WARNING: Subroutine does not return */
                _free(local_e0);
              }
              local_d8 = local_94 + 0x20 & 0xffffffe0;
              local_e0 = _malloc(local_d8 * 2);
            }
            uStack_10c = 0x75ba35;
            _wcsncpy(local_e0,pwVar11,uVar5);
            local_dc = uVar5;
            local_e0[uVar5] = L'\0';
            uStack_10c = 0x75ba58;
            puVar4 = FUN_004211c0(&local_c0,local_2c,uVar7,0xffffffff);
            uVar7 = puVar4[1];
            pwVar11 = (wchar_t *)*puVar4;
            if (local_b8 <= uVar7) {
              if (10 < local_b8) {
                    /* WARNING: Subroutine does not return */
                _free(local_c0);
              }
              uVar5 = uVar7 + 0x20 >> 5;
              local_b8 = uVar5 << 5;
              local_c0 = _malloc(uVar5 * 0x40);
            }
            uStack_10c = 0x75ba9f;
            _wcsncpy(local_c0,pwVar11,uVar7);
            local_c0[uVar7] = L'\0';
            local_bc = uVar7;
            pwVar11 = local_98;
            uVar7 = local_90;
            if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c[0]);
            }
          }
          else {
            local_e0[local_9c] = L'\0';
            local_78 = local_6c;
            local_6c[0] = L'\0';
            local_74 = 0;
            local_70 = 10;
            sVar3 = FUN_00ace02d(local_e0);
            FUN_0040cae0(&local_78,pwVar11,sVar3);
            uVar7 = local_74;
            pwVar11 = local_78;
            if (local_d8 <= local_74) {
              if (10 < local_d8) {
                    /* WARNING: Subroutine does not return */
                _free(local_e0);
              }
              uVar9 = local_74 + 0x20 >> 5;
              local_d8 = uVar9 << 5;
              local_e0 = _malloc(uVar9 * 0x40);
            }
            uStack_10c = 0x75b8fb;
            _wcsncpy(local_e0,pwVar11,uVar7);
            local_dc = uVar7;
            local_e0[uVar7] = L'\0';
            uStack_10c = 0x75b91e;
            puVar4 = FUN_004211c0(&local_c0,local_4c,uVar5,0xffffffff);
            uVar7 = puVar4[1];
            pwVar11 = (wchar_t *)*puVar4;
            if (local_b8 <= uVar7) {
              if (10 < local_b8) {
                    /* WARNING: Subroutine does not return */
                _free(local_c0);
              }
              local_b8 = uVar7 + 0x20 & 0xffffffe0;
              local_c0 = _malloc(local_b8 * 2);
            }
            uStack_10c = 0x75b966;
            _wcsncpy(local_c0,pwVar11,uVar7);
            local_c0[uVar7] = L'\0';
            local_bc = uVar7;
            pwVar11 = local_78;
            uVar7 = local_70;
            if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c[0]);
            }
          }
          if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
            _free(pwVar11);
          }
          bVar1 = true;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_bc);
    }
    uVar7 = local_dc;
    pwVar11 = local_e0;
    if ((uint)piVar8[2] <= local_dc) {
      if (10 < (uint)piVar8[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar8);
      }
      uVar5 = local_dc + 0x20 >> 5;
      piVar8[2] = uVar5 << 5;
      pvVar6 = _malloc(uVar5 * 0x40);
      *piVar8 = (int)pvVar6;
    }
    uStack_10c = 0x75bb33;
    _wcsncpy((wchar_t *)*piVar8,pwVar11,uVar7);
    piVar8[1] = uVar7;
    *(undefined2 *)(*piVar8 + uVar7 * 2) = 0;
    if (!bVar1) {
      if (10 < local_d8) {
                    /* WARNING: Subroutine does not return */
        _free(local_e0);
      }
      goto LAB_0075bb9d;
    }
    local_4 = 1;
    if (10 < local_d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_e0);
    }
    local_a0 = local_a0 + 1;
    piVar8 = piVar8 + 8;
    if (2 < local_a0) {
LAB_0075bb9d:
      if (10 < local_b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_c0);
      }
      if (param_4 < 0xb) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  } while( true );
}


//// FUNCTION FUN_0075bbf0 @ 0075bbf0 ////

void __cdecl FUN_0075bbf0(wchar_t *param_1,size_t param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  size_t sVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 unaff_EBP;
  void *_Memory;
  float fVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd707b;
  pvStack_c = ExceptionList;
  iVar3 = DAT_00e67b88 / 2;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar4 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar4);
  }
  local_2c = &local_20;
  local_20 = (uint)local_20._2_2_ << 0x10;
  local_28 = 0;
  local_24 = 10;
  local_4 = CONCAT31(local_4._1_3_,2);
  sVar6 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = 512 ALIGN = CENTER><T1 COLOR=#FFFFFF>");
  FUN_0040cae0(&local_2c,L"<TABLE><TR><TD WIDTH = 512 ALIGN = CENTER><T1 COLOR=#FFFFFF>",sVar6);
  FUN_0040cae0(&local_2c,param_1,param_2);
  sVar6 = FUN_00ace02d(L"</t1></TD></TR></TABLE>");
  FUN_0040cae0(&local_2c,L"</t1></TD></TR></TABLE>",sVar6);
  (**(code **)(*piVar5 + 0x54))(&local_2c);
  fVar9 = (float)iVar3 - 256.0;
  piVar5[0x45] = piVar5[0x45] & 0xfffffffd;
  iVar1 = *piVar5;
  uVar7 = FUN_0071b2a0();
  _Memory = (void *)0x1;
  (**(code **)(iVar1 + 0x5c))(1,uVar7);
  iVar1 = *piVar5;
  uVar7 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar7,unaff_EBP);
  (**(code **)(*piVar5 + 0x74))(0x44000000,0x42000000);
  piVar8 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar8 + 0xc))(piVar5,1);
  do {
    cVar2 = (**(code **)(*piVar5 + 0x50))(1);
  } while (cVar2 != '\0');
  FUN_009a4f10();
  FUN_009a56b0(0xff000000,'\x01');
  (**(code **)(*piVar5 + 0x28))();
  (**(code **)(*piVar5 + 0x2c))();
  FUN_009a4fb0();
  FUN_009a6360();
  piVar8 = piVar5 + 0x12;
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    (**(code **)*piVar5)(1);
  }
  if (10 < (uint)fVar9) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < local_20) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = (void *)(float)iVar3;
  return;
}


//// FUNCTION FUN_0075be00 @ 0075be00 ////

int * __thiscall FUN_0075be00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0075c010 @ 0075c010 ////

void __fastcall FUN_0075c010(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d4cb24;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0075c060 @ 0075c060 ////

void __fastcall FUN_0075c060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4cb24;
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


//// FUNCTION FUN_0075c0b0 @ 0075c0b0 ////

void __fastcall FUN_0075c0b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd70c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4cb4c;
  param_1[0x14] = &PTR_FUN_00d4cb34;
  local_4 = 0;
  (*(code *)DAT_0104e2e4[1])();
  DAT_0104e2f8 = 0;
  (*(code *)*DAT_0104e2e4)();
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0075c130 @ 0075c130 ////

void __fastcall FUN_0075c130(int *param_1)

{
  int iVar1;
  
  iVar1 = _wcscmp((wchar_t *)param_1[0x124],(wchar_t *)PTR_DAT_00e59084);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 200))(1);
  }
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_0075c170 @ 0075c170 ////

undefined4 FUN_0075c170(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  LPCWSTR *ppWVar5;
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
  puStack_8 = &LAB_00cd70e8;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"POST_NOACTOR",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_2c,&local_4c);
  iVar2 = _wcscmp(*(wchar_t **)(param_1 + 0x470),(wchar_t *)*puVar1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar2 == 0) {
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    ppWVar5 = &lpCaption_00d16918;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x494);
    ppWVar5 = *(LPCWSTR **)(param_1 + 0x490);
  }
  uVar4 = FUN_004036d0(&PTR_DAT_00e59084,(wchar_t *)ppWVar5,uVar3);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_0075c270 @ 0075c270 ////

undefined4 * __thiscall FUN_0075c270(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
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
  
  puStack_8 = &LAB_00cd714c;
  local_c = ExceptionList;
  local_4 = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"ui/buttons.dds",0xe);
  local_48 = 0xe;
  local_4c[0xe] = '\0';
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4._0_1_ = 3;
  FUN_007381d0(this,&local_2c,&local_4c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *(undefined ***)this = &PTR_FUN_00d4cc94;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4cc78;
  *(undefined4 *)((int)this + 0x470) = (undefined2 *)((int)this + 0x47c);
  *(undefined2 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 10;
  *(undefined4 *)((int)this + 0x490) = (undefined2 *)((int)this + 0x49c);
  *(undefined2 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x470),param_1,param_2);
  FUN_004036d0((undefined4 *)((int)this + 0x490),in_stack_00000024,in_stack_00000028);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_0040cae0(&local_6c,in_stack_00000024,in_stack_00000028);
  sVar2 = FUN_00ace02d((short *)&DAT_00d2ac08);
  FUN_0040cae0(&local_6c,L" (",sVar2);
  FUN_0040cae0(&local_6c,param_1,param_2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d2446c);
  FUN_0040cae0(&local_6c,L")",sVar2);
  FUN_00737e30(this,&local_6c);
  FUN_0073e4e0(this,0x44100000);
  FUN_00737d70(this,0x40800000);
  FUN_00741630(this,0,0x75c170,0,"ACTORENTRYBUTTON");
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (10 < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0075c4c0 @ 0075c4c0 ////

undefined4 * __thiscall FUN_0075c4c0(void *this,byte param_1)

{
  FUN_0075c4e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075c4e0 @ 0075c4e0 ////

void __fastcall FUN_0075c4e0(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x126]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x124]);
  }
  if (10 < (uint)param_1[0x11e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11c]);
  }
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_0075c520 @ 0075c520 ////

undefined4 * __thiscall FUN_0075c520(void *this,byte param_1)

{
  FUN_0075c0b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075c540 @ 0075c540 ////

/* WARNING: Removing unreachable block (ram,0x0075c72c) */

void __fastcall FUN_0075c540(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *_Count;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *_Source;
  int iVar9;
  wchar_t *in_stack_ffffff4c;
  uint in_stack_ffffff50;
  uint in_stack_ffffff54;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined1 *puStack_64;
  uint local_60;
  wchar_t *pwStack_50;
  uint uStack_48;
  wchar_t awStack_44 [12];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd719f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x3ac) + 0xa8))();
  pvVar3 = operator_new(0x4b0);
  if (pvVar3 != (void *)0x0) {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"POST_NOACTOR",0xc);
    uStack_28 = 0xc;
    pcStack_2c[0xc] = '\0';
    puStack_94 = &uStack_88;
    uStack_88 = (uint)uStack_88._2_2_ << 0x10;
    puStack_90 = (undefined4 *)0x0;
    uStack_8c = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_94,(wchar_t *)&lpCaption_00d16918,uVar4);
    puStack_64 = &stack0xffffff4c;
    uStack_4 = 2;
    FUN_009b5030((undefined4 *)&stack0xffffff4c,&pcStack_2c);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_0075c270(pvVar3,in_stack_ffffff4c,in_stack_ffffff50,in_stack_ffffff54);
  }
  uStack_4 = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  (**(code **)(**(int **)(param_1 + 0x3ac) + 0xfc))();
  local_60 = 0;
  if (*(int *)(DAT_0104e4a8 + 0xd0) != 0) {
    do {
      uVar8 = *(int *)(DAT_0104e4a8 + 0xcc) + local_60;
      uVar4 = uVar8 >> 2;
      iVar1 = uVar4 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(DAT_0104e4a8 + 200);
      }
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar4 * 4) + (uVar8 + iVar1) * 4);
      for (uVar4 = 0;
          (iVar2 = *(int *)(iVar1 + 0x130), iVar2 != 0 &&
          (uVar4 < (uint)(*(int *)(iVar1 + 0x134) - iVar2 >> 2))); uVar4 = uVar4 + 1) {
        iVar2 = *(int *)(iVar2 + uVar4 * 4);
        pwVar7 = (wchar_t *)(iVar2 + 0x5c);
        pwStack_50 = awStack_44;
        awStack_44[0] = L'\0';
        uStack_48 = 10;
        uVar8 = FUN_00ace02d(pwVar7);
        if (9 < uVar8) {
          uVar5 = uVar8 + 0x20 >> 5;
          uStack_48 = uVar5 << 5;
          pwStack_50 = _malloc(uVar5 * 0x40);
        }
        uStack_88 = 0x75c761;
        _wcsncpy(pwStack_50,pwVar7,uVar8);
        pwStack_50[uVar8] = L'\0';
        iVar9 = *(int *)(*(int *)(puStack_64 + 0x3ac) + 0x358);
        puStack_8 = (undefined1 *)0x4;
        if (iVar9 != *(int *)(puStack_64 + 0x3ac) + 0x364) {
          do {
            iVar6 = _wcscmp(*(wchar_t **)(*(int *)(iVar9 + 8) + 0x470),pwStack_50);
            if (iVar6 == 0) goto LAB_0075c8cc;
            iVar9 = *(int *)(iVar9 + 4);
          } while (iVar9 != *(int *)(puStack_64 + 0x3ac) + 0x364);
        }
        pvVar3 = operator_new(0x4b0);
        puStack_8._0_1_ = 5;
        if (pvVar3 != (void *)0x0) {
          pwVar7 = (wchar_t *)&uStack_8c;
          _Source = (wchar_t *)(iVar2 + 0xdc);
          uStack_8c = uStack_8c & 0xffff0000;
          puStack_94 = (undefined4 *)0x0;
          puStack_90 = (undefined4 *)&lpType_0000000a;
          _Count = (undefined4 *)FUN_00ace02d(_Source);
          if (puStack_90 <= _Count) {
            if (&lpType_0000000a < puStack_90) {
                    /* WARNING: Subroutine does not return */
              _free(pwVar7);
            }
            puStack_90 = (undefined4 *)(((uint)(_Count + 8) >> 5) << 5);
            pwVar7 = _malloc(((uint)(_Count + 8) >> 5) * 0x40);
          }
          _wcsncpy(pwVar7,_Source,(size_t)_Count);
          pwVar7[(int)_Count] = L'\0';
          pwVar7 = (wchar_t *)&stack0xffffff54;
          uVar5 = 10;
          puStack_94 = _Count;
          if (9 < uVar8) {
            uVar5 = uVar8 + 0x20 & 0xffffffe0;
            pwVar7 = _malloc(uVar5 * 2);
          }
          _wcsncpy(pwVar7,pwStack_50,uVar8);
          pwVar7[uVar8] = L'\0';
          FUN_0075c270(pvVar3,pwVar7,uVar8,uVar5);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
        (**(code **)(**(int **)(puStack_64 + 0x3ac) + 0xfc))();
LAB_0075c8cc:
        puStack_8 = (undefined1 *)0xffffffff;
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_50);
        }
      }
      local_60 = local_60 + 1;
    } while (local_60 < *(uint *)(DAT_0104e4a8 + 0xd0));
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0075c930 @ 0075c930 ////

int * __fastcall FUN_0075c930(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t sVar6;
  int *piVar7;
  void *pvVar8;
  uint uVar9;
  void *unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  wchar_t *unaff_EDI;
  float10 fVar10;
  int iStack_11c;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piStack_f8;
  void *pvStack_e8;
  void *pvStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *puVar14;
  float fVar15;
  uint uStack_9c;
  uint *puStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint auStack_8c [3];
  void *pvStack_80;
  undefined1 *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  char acStack_6c [4];
  uint uStack_68;
  uint *puStack_58;
  undefined4 uStack_54;
  char *pcStack_50;
  uint uStack_4c;
  uint uStack_48;
  char acStack_44 [20];
  undefined2 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 auStack_24 [10];
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7312;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006889c0(param_1,'\0');
  local_4._0_1_ = 1;
  *param_1 = (int)&PTR_FUN_00d4cb4c;
  param_1[0x14] = (int)&PTR_FUN_00d4cb34;
  param_1[0x45] = param_1[0x45] | 8;
  FUN_0073e4e0(param_1,0x43c80000);
  piVar3 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar3 + 0x10))();
  pcStack_78 = (char *)(float)fVar10;
  fVar10 = FUN_0073e630((int)param_1);
  fVar15 = (float)(((float10)(float)pcStack_78 - fVar10) * (float10)0.5);
  iVar4 = FUN_0071b2a0();
  FUN_00741940(param_1,1,iVar4,fVar15);
  piVar3 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar3 + 0x14))();
  pcStack_78 = (char *)(float)fVar10;
  fVar10 = FUN_0073e640((int)param_1);
  fVar15 = (float)(((float10)(float)pcStack_78 - fVar10) * (float10)0.5);
  iVar4 = FUN_0071b2a0();
  FUN_00741b60(param_1,1,iVar4,fVar15);
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 10;
  pcStack_50 = acStack_44;
  acStack_44[0] = '\0';
  uStack_4c = 0;
  uStack_48 = 0x14;
  _strncpy(pcStack_50,"POST_SELECT_ACTOR",0x11);
  uStack_4c = 0x11;
  pcStack_50[0x11] = '\0';
  local_4._0_1_ = 3;
  puVar5 = FUN_009b5030(&puStack_70,&pcStack_50);
  sVar6 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_30,L"<P ALIGN\t= CENTER>",sVar6);
  FUN_0040cae0(&puStack_30,(wchar_t *)*puVar5,puVar5[1]);
  sVar6 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_30,L"</P>",sVar6);
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_70);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_50);
  }
  FUN_006888d0(param_1,&puStack_30);
  piVar7 = (int *)FUN_0071b2a0();
  piVar3 = param_1;
  (**(code **)(*piVar7 + 0xc))();
  pvVar8 = operator_new(0x420);
  pvStack_80 = pvVar8;
  if (pvVar8 == (void *)0x0) {
    DAT_0104e2e0 = (int *)0x0;
  }
  else {
    pcStack_78 = acStack_6c;
    acStack_6c[0] = '\0';
    uStack_74 = 0;
    puStack_70 = &DAT_00000014;
    _strncpy(pcStack_78,"button_ok",9);
    uStack_74 = 9;
    pcStack_78[9] = '\0';
    puStack_58 = &uStack_4c;
    uStack_4c = uStack_4c & 0xffffff00;
    uStack_54 = 0;
    pcStack_50 = &DAT_00000014;
    _strncpy((char *)puStack_58,"button_tick.",0xc);
    uStack_54 = 0xc;
    *(char *)(puStack_58 + 3) = '\0';
    pvStack_c = (void *)0x6;
    uStack_dc = 0x75cbc5;
    puVar5 = FUN_009b5030((undefined4 *)&stack0xffffff5c,&pcStack_78);
    puStack_7c = &stack0xffffff38;
    pvStack_c = (void *)0x7;
    unaff_EBP = 7;
    uStack_dc = 0x75cc05;
    DAT_0104e2e0 = FUN_0069fb10(pvVar8,(int *)&puStack_58,puVar5,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, 10 < uStack_9c)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < pcStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_58);
  }
  pvStack_c = (void *)0x2;
  if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < puStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_78);
  }
  puVar14 = &LAB_0075be90;
  (**(code **)(*DAT_0104e2e0 + 0x18))();
  uStack_dc = 0x75ccbe;
  (**(code **)(*DAT_0104e2e0 + 0x18))();
  uStack_e0 = param_1[0xdb];
  uStack_dc = 0x41200000;
  pvStack_e4 = (void *)0x2;
  (**(code **)(*DAT_0104e2e0 + 0x60))();
  pvStack_e8 = (void *)0x41000000;
  (**(code **)(*DAT_0104e2e0 + 0x68))();
  piStack_f8 = DAT_0104e2e0;
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    DAT_0104e2dc = (int *)0x0;
  }
  else {
    uStack_90 = 0x14;
    puStack_98 = auStack_8c;
    auStack_8c[0] = auStack_8c[0] & 0xffffff00;
    uStack_94 = 0;
    _strncpy((char *)puStack_98,"button_cancel",0xd);
    uStack_94 = 0xd;
    *(char *)((int)puStack_98 + 0xd) = '\0';
    piVar3 = (int *)&stack0xffffff54;
    unaff_ESI = unaff_ESI & 0xffffff00;
    unaff_EDI = (wchar_t *)&DAT_00000014;
    _strncpy((char *)piVar3,"button_quit.",0xc);
    *(char *)(piVar3 + 3) = '\0';
    uStack_4c = 0xd;
    iStack_11c = 0x75cdb3;
    puVar5 = FUN_009b5030(&pvStack_e4,&puStack_98);
    pvStack_e8 = (void *)0x41000038;
    uStack_4c = 0xe;
    iStack_11c = 0x75cdf9;
    DAT_0104e2dc = FUN_0069fb10(pvVar8,(int *)&stack0xffffff48,puVar5,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_e8 & 0x20) != 0) &&
     (pvStack_e8 = (void *)((uint)pvStack_e8 & 0xffffffdf), 10 < uStack_dc)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e4);
  }
  if ((((uint)pvStack_e8 & 0x10) != 0) &&
     (pvStack_e8 = (void *)((uint)pvStack_e8 & 0xffffffef), &DAT_00000014 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar3);
  }
  uStack_4c = 2;
  if ((((uint)pvStack_e8 & 8) != 0) &&
     (pvStack_e8 = (void *)((uint)pvStack_e8 & 0xfffffff7), 0x14 < uStack_90)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_98);
  }
  piVar3 = param_1;
  (**(code **)(*DAT_0104e2dc + 0x18))();
  iStack_11c = 0x75ceb7;
  (**(code **)(*DAT_0104e2dc + 0x18))();
  iStack_11c = 0x41200000;
  (**(code **)(*DAT_0104e2dc + 0x5c))(1);
  uVar9 = 0;
  (**(code **)(*DAT_0104e2dc + 0x68))(2,param_1[0xdb],0x41000000);
  (**(code **)(*(int *)param_1[0xdb] + 0xc))(DAT_0104e2dc,1);
  puVar5 = operator_new(0x358);
  auStack_8c[0]._0_1_ = 0x12;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_0071eda0(puVar5);
  }
  param_1[0xea] = (int)puVar5;
  puVar5[0xd1] = puVar5[0xd1] & 0xfffffffb | 8;
  *(uint *)(param_1[0xea] + 0x344) = *(uint *)(param_1[0xea] + 0x344) & 0xfffffffc;
  iVar4 = param_1[0xdb];
  iStack_11c = 0;
  piVar7 = (int *)0x0;
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar4 + 0x18);
    iStack_11c = *piVar7;
    *(int **)(*piVar7 + 4) = &iStack_11c;
    *piVar7 = (int)&iStack_11c;
  }
  uVar12 = 0x41c00000;
  uVar13 = 0x41c00000;
  iVar1 = param_1[0xea];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  auStack_8c[0]._0_1_ = 0x13;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int *)(iVar1 + 0xb8) = iVar4;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar12;
  *(undefined4 *)(iVar1 + 0xc0) = uVar13;
  if (piVar7 != (int *)0x0) {
    *piVar7 = iStack_11c;
  }
  if (iStack_11c != 0) {
    *(int **)(iStack_11c + 4) = piVar7;
  }
  iVar4 = param_1[0xdb];
  iStack_11c = 0;
  piVar7 = (int *)0x0;
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar4 + 0x18);
    iStack_11c = *piVar7;
    *(int **)(*piVar7 + 4) = &iStack_11c;
    *piVar7 = (int)&iStack_11c;
  }
  uVar12 = 0x41c00000;
  uVar13 = 0x41c00000;
  iVar1 = param_1[0xea];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  auStack_8c[0]._0_1_ = 0x14;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int *)(iVar1 + 0x100) = iVar4;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar12;
  *(undefined4 *)(iVar1 + 0x108) = uVar13;
  if (piVar7 != (int *)0x0) {
    *piVar7 = iStack_11c;
  }
  if (iStack_11c != 0) {
    *(int **)(iStack_11c + 4) = piVar7;
  }
  iVar4 = param_1[0xdb];
  iStack_11c = 0;
  piVar7 = (int *)0x0;
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar4 + 0x18);
    iStack_11c = *piVar7;
    *(int **)(*piVar7 + 4) = &iStack_11c;
    *piVar7 = (int)&iStack_11c;
  }
  uVar12 = 0x41400000;
  uVar13 = 0x41400000;
  iVar1 = param_1[0xea];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  auStack_8c[0]._0_1_ = 0x15;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(int *)(iVar1 + 0x94) = iVar4;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar12;
  *(undefined4 *)(iVar1 + 0x9c) = uVar13;
  if (piVar7 != (int *)0x0) {
    *piVar7 = iStack_11c;
  }
  if (iStack_11c != 0) {
    *(int **)(iStack_11c + 4) = piVar7;
  }
  piVar7 = DAT_0104e2dc;
  iStack_11c = 0;
  piVar11 = (int *)0x0;
  if (DAT_0104e2dc != (int *)0x0) {
    piVar11 = DAT_0104e2dc + 6;
    iStack_11c = *piVar11;
    *(int **)(*piVar11 + 4) = &iStack_11c;
    *piVar11 = (int)&iStack_11c;
  }
  uVar12 = 0xc1c00000;
  uVar13 = 0xc1c00000;
  iVar4 = param_1[0xea];
  *(undefined4 *)(iVar4 + 0xc4) = 1;
  auStack_8c[0]._0_1_ = 0x16;
  (**(code **)(*(int *)(iVar4 + 200) + 4))();
  *(int **)(iVar4 + 0xdc) = piVar7;
  (*(code *)**(undefined4 **)(iVar4 + 200))();
  *(undefined4 *)(iVar4 + 0xe0) = uVar12;
  *(undefined4 *)(iVar4 + 0xe4) = uVar13;
  auStack_8c[0] = CONCAT31(auStack_8c[0]._1_3_,2);
  if (piVar11 != (int *)0x0) {
    *piVar11 = iStack_11c;
  }
  if (iStack_11c != 0) {
    *(int **)(iStack_11c + 4) = piVar11;
  }
  (**(code **)(*(int *)param_1[0xdb] + 0xc))(param_1[0xea],1);
  pvVar8 = operator_new(0x2a8);
  if (pvVar8 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    piStack_f8 = (int *)0x40;
    piVar3 = _malloc(0x40);
    _strncpy((char *)piVar3,"ui/pcgui_dialogue_whitething.dds",0x20);
    *(char *)(piVar3 + 8) = '\0';
    uVar9 = uVar9 | 0x40;
    uStack_94 = CONCAT31(uStack_94._1_3_,0x18);
    puVar5 = FUN_005e73e0(pvVar8,(undefined4 *)&stack0xffffff00);
  }
  uStack_94 = 2;
  if (((uVar9 & 0x40) != 0) && (&DAT_00000014 < piStack_f8)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar3);
  }
  (**(code **)(*(int *)param_1[0xea] + 0xa0))(puVar5);
  pvVar8 = operator_new(0x3c0);
  puStack_98._0_1_ = 0x1a;
  if (pvVar8 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_006b4f50(pvVar8,1,1);
  }
  param_1[0xeb] = (int)piVar3;
  puStack_98 = (uint *)CONCAT31(puStack_98._1_3_,2);
  (**(code **)(*piVar3 + 0x5c))(1,*(undefined4 *)(param_1[0xea] + 0x348),0);
  (**(code **)(*(int *)param_1[0xeb] + 100))(1,*(undefined4 *)(param_1[0xea] + 0x348),0);
  (**(code **)(*(int *)param_1[0xea] + 0xc))(param_1[0xeb],1);
  FUN_004036d0(&PTR_DAT_00e59084,unaff_EDI,unaff_ESI);
  DAT_0104e2d8 = uStack_90;
  DAT_0104e2d4 = auStack_8c[0];
  FUN_0075c540((int)param_1);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xac))(param_1);
  do {
    cVar2 = FUN_007421c0(param_1);
  } while (cVar2 != '\0');
  (*(code *)DAT_0104e2e4[1])();
  DAT_0104e2f8 = param_1;
  (*(code *)*DAT_0104e2e4)();
  FUN_00769330();
  if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e8);
  }
  if (10 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  ExceptionList = puVar14;
  return param_1;
}


//// FUNCTION FUN_0075d450 @ 0075d450 ////

void __thiscall FUN_0075d450(void *this,int param_1)

{
  FUN_00770520((int)this);
  FUN_00773420((int)this);
  FUN_0074e910(param_1);
  return;
}


//// FUNCTION FUN_0075d470 @ 0075d470 ////

void __thiscall FUN_0075d470(void *this,undefined4 param_1)

{
  FUN_00770520((int)this);
  FUN_00773420((int)this);
  *(undefined4 *)((int)this + 0x440) = param_1;
  return;
}


//// FUNCTION FUN_0075d520 @ 0075d520 ////

int * __thiscall FUN_0075d520(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0075d5f0 @ 0075d5f0 ////

undefined4 * __thiscall
FUN_0075d5f0(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  void *this_01;
  float10 fVar3;
  void *in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  uint in_stack_ffffffd0;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    fVar3 = FUN_0074cde0((int)param_1);
    if (param_5 == '\0') {
      this_01 = *(void **)((int)this + 0x374);
    }
    else {
      this_01 = *(void **)((int)this + 0x378);
    }
    if (this_01 != (void *)0x0) {
      FUN_00421290(&stack0xffffffc8,param_2);
      this_00 = FUN_00750430(this_01,param_3,(int)ROUND((float)(fVar3 * (float10)1000.0)),
                             in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0);
      if (this_00 != (undefined4 *)0x0) {
        this_00[0x2e] = param_4;
        FUN_0074e920(this_00,param_1);
        puVar2 = DAT_0104e5f4;
        if (DAT_0104e5f4 != (undefined4 *)0x0) {
          iVar1 = DAT_0104e5f4[0x12];
          DAT_0104e5f4[0x12] = iVar1 + -1;
          if (iVar1 + -1 == 0) {
            (**(code **)*puVar2)();
          }
          (*(code *)DAT_0104e5e0[1])();
          DAT_0104e5f4 = (undefined4 *)0x0;
          (*(code *)*DAT_0104e5e0)();
        }
        return this_00;
      }
    }
  }
  FUN_0074cdd0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_0075d700 @ 0075d700 ////

undefined4 * __thiscall
FUN_0075d700(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 *param_4,undefined4 param_5,char param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  int *this_00;
  void *in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd732b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x24);
  this_00 = (int *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    this_00 = (int *)FUN_0074cd30(puVar2);
  }
  local_4 = 0xffffffff;
  FUN_00568870((undefined4 *)&stack0xffffffbc,param_4);
  bVar1 = FUN_0074d160(this_00,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4);
  if (bVar1) {
    puVar2 = FUN_0075d5f0(this,this_00,param_1,param_2,param_3,param_6);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004036d0(puVar2 + 0x1d,(wchar_t *)*param_4,param_4[1]);
      puVar2[0x25] = param_5;
    }
    ExceptionList = local_c;
    return puVar2;
  }
  if (this_00 != (int *)0x0) {
    FUN_0074cdd0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0075d7f0 @ 0075d7f0 ////

undefined4 * __thiscall
FUN_0075d7f0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3,
            undefined4 param_4,char param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int *this_00;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd735b;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar2 = FUN_00786330(local_2c);
  FUN_0040cae0(&local_6c,(wchar_t *)*puVar2,puVar2[1]);
  FUN_0040cae0(&local_6c,(wchar_t *)*param_1,param_1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_00568870(local_4c,&local_6c);
  local_4._0_1_ = 1;
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)FUN_0074cd30(puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  bVar1 = FUN_0074d420(this_00,local_4c[0]);
  if (bVar1) {
    puVar2 = FUN_0075d5f0(this,this_00,param_2,param_3,param_4,param_5);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004036d0(puVar2 + 0x15,(wchar_t *)*param_1,param_1[1]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    ExceptionList = local_c;
    return puVar2;
  }
  if (this_00 != (int *)0x0) {
    FUN_0074cdd0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0075d9c0 @ 0075d9c0 ////

float10 __fastcall FUN_0075d9c0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)1.0 - (float10)*(float *)(param_1 + 0x98) * (float10)0.037037037;
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_0075dae0 @ 0075dae0 ////

void __thiscall FUN_0075dae0(void *this,float param_1)

{
  (**(code **)(*(int *)this + 100))(1,*(undefined4 *)((int)this + 0x438),27.0 - param_1 * 27.0);
  (**(code **)(*(int *)this + 0x74))(0x41200000,0x41000000);
  return;
}


//// FUNCTION FUN_0075db20 @ 0075db20 ////

undefined4 * __thiscall
FUN_0075db20(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  uint *local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  uint local_20 [5];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd73d6;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = local_20[0] & 0xffffff00;
  local_28 = 0;
  local_24 = (undefined4 *)0x20;
  ExceptionList = &pvStack_c;
  local_2c = _malloc(0x20);
  _strncpy((char *)local_2c,"ui/postproc/postprod_volume.dds",0x1f);
  local_28 = 0x1f;
  *(char *)((int)local_2c + 0x1f) = '\0';
  local_4 = 0;
  FUN_0069fb10(this,(int *)&local_2c,param_3,0x40400000,0x40a00000,0,0,0x3f800000,0x3f800000);
  if ((undefined4 *)0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar4 = (int *)((int)this + 0x424);
  *(undefined ***)this = &PTR_FUN_00d4ce24;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4ce08;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(int **)((int)this + 0x430) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x438) = 0;
  piVar1 = (int *)((int)this + 0x440);
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(int **)((int)this + 0x44c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x454) = 0;
  piVar2 = (int *)((int)this + 0x458);
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(int **)((int)this + 0x464) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined1 *)((int)this + 0x470) = 0;
  local_4._0_1_ = 5;
  *(undefined4 *)((int)this + 0x420) = param_5;
  FUN_00741940(this,1,param_1,param_4);
  FUN_00741b60(this,1,param_1,param_6);
  FUN_0073e4e0(this,0x41400000);
  (**(code **)(*piVar4 + 4))();
  *(int *)((int)this + 0x438) = param_1;
  (**(code **)*piVar4)();
  puVar3 = operator_new(0x344);
  local_4._0_1_ = 6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar2 + 4))();
  *(undefined4 **)((int)this + 0x46c) = puVar3;
  (**(code **)*piVar2)();
  (**(code **)(**(int **)((int)this + 0x46c) + 0x5c))();
  iVar6 = param_1;
  (**(code **)(**(int **)((int)this + 0x46c) + 0x68))(2);
  (**(code **)(**(int **)((int)this + 0x438) + 0xc))(*(undefined4 *)((int)this + 0x46c),1);
  pvVar5 = (void *)0x41000000;
  (**(code **)(**(int **)((int)this + 0x46c) + 0x74))(0x41000000,0x41f00000);
  local_24 = operator_new(0x50);
  local_2c._0_1_ = 7;
  if (local_24 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_005e4870(local_24);
  }
  local_2c = (uint *)CONCAT31(local_2c._1_3_,5);
  local_24 = (undefined4 *)0xff101010;
  (**(code **)(*piVar4 + 0xc))(&local_24);
  (**(code **)(**(int **)((int)this + 0x46c) + 0xa0))(piVar4);
  local_2c = operator_new(0x344);
  if (local_2c == (uint *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(local_2c);
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x454) = puVar3;
  (**(code **)*piVar1)();
  (**(code **)(**(int **)((int)this + 0x454) + 0x5c))(1,param_1,local_20[0]);
  (**(code **)(**(int **)((int)this + 0x454) + 0x68))(2,param_1,0);
  (**(code **)(**(int **)((int)this + 0x438) + 0xc))(*(undefined4 *)((int)this + 0x454),1);
  (**(code **)(**(int **)((int)this + 0x454) + 0x74))(0x41000000,0x41f00000);
  puVar3 = operator_new(0x50);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_005e4870(puVar3);
  }
  (**(code **)(*piVar4 + 0xc))(&stack0xffffffac);
  (**(code **)(**(int **)((int)this + 0x454) + 0xa0))(piVar4);
  *(int *)((int)this + 0x43c) = iVar6;
  FUN_00741630(this,3,0x75d9b0,this,(char *)0x0);
  ExceptionList = pvVar5;
  return this;
}


//// FUNCTION FUN_0075dea0 @ 0075dea0 ////

undefined4 * __thiscall FUN_0075dea0(void *this,byte param_1)

{
  FUN_0075dec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075dec0 @ 0075dec0 ////

void __fastcall FUN_0075dec0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4ce24;
  param_1[0x14] = &PTR_FUN_00d4ce08;
  param_1[0x116] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x118] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x118] = param_1[0x117];
  }
  if (param_1[0x117] != 0) {
    *(undefined4 *)(param_1[0x117] + 4) = param_1[0x118];
  }
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x11b] = 0;
  if ((undefined4 *)param_1[0x118] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x118] = param_1[0x117];
  }
  if (param_1[0x117] != 0) {
    *(undefined4 *)(param_1[0x117] + 4) = param_1[0x118];
  }
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x110] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x112] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x112] = param_1[0x111];
  }
  if (param_1[0x111] != 0) {
    *(undefined4 *)(param_1[0x111] + 4) = param_1[0x112];
  }
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x115] = 0;
  if ((undefined4 *)param_1[0x112] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x112] = param_1[0x111];
  }
  if (param_1[0x111] != 0) {
    *(undefined4 *)(param_1[0x111] + 4) = param_1[0x112];
  }
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x109] = &PTR_FUN_00d18c2c;
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
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_0075e040 @ 0075e040 ////

wchar_t * __fastcall FUN_0075e040(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = _wcsrchr(param_1,L'\\');
  if (pwVar1 != (wchar_t *)0x0) {
    return pwVar1 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_0075e0d0 @ 0075e0d0 ////

int * __thiscall FUN_0075e0d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0075e0f0 @ 0075e0f0 ////

int * __thiscall FUN_0075e0f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0075e130 @ 0075e130 ////

int * __thiscall FUN_0075e130(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0075e230 @ 0075e230 ////

bool __cdecl FUN_0075e230(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WDirEntryButton::RTTI_Type_Descriptor,0);
  iVar2 = FUN_00ace790(param_2,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WDirEntryButton::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar1 = __wcsicmp(*(wchar_t **)(iVar1 + 0x470),*(wchar_t **)(iVar2 + 0x470));
      return iVar1 < 0;
    }
    return true;
  }
  if (iVar2 == 0) {
    iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WFileEntryButton::RTTI_Type_Descriptor,0);
    iVar2 = FUN_00ace790(param_2,0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WFileEntryButton::RTTI_Type_Descriptor,0);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar1 = _wcscmp(*(wchar_t **)(iVar1 + 0x470),*(wchar_t **)(iVar2 + 0x470));
      return iVar1 < 0;
    }
  }
  return false;
}


//// FUNCTION FUN_0075e300 @ 0075e300 ////

void __fastcall FUN_0075e300(int param_1)

{
  *(undefined1 *)(param_1 + 0x3b6) = 1;
  if (*(int **)(param_1 + 0x43c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x43c) + 0x104))(FUN_0075e230);
  }
  return;
}


//// FUNCTION FUN_0075e320 @ 0075e320 ////

void FUN_0075e320(void)

{
  if (DAT_0104e310 != 0) {
    FUN_0071b530(DAT_0104e310,(int *)DAT_0104e310);
  }
  return;
}


//// FUNCTION FUN_0075e470 @ 0075e470 ////

undefined4 * __fastcall FUN_0075e470(undefined4 *param_1)

{
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
  puStack_8 = &LAB_00cd73f0;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"ui/buttons.dds",0xe);
  local_48 = 0xe;
  local_4c[0xe] = '\0';
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007381d0(param_1,&local_2c,&local_4c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *param_1 = &PTR_FUN_00d4cf64;
  param_1[0x14] = &PTR_FUN_00d4cf4c;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0075e560 @ 0075e560 ////

undefined4 * __thiscall FUN_0075e560(void *this,byte param_1)

{
  thunk_FUN_005f3230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075e580 @ 0075e580 ////

void __thiscall FUN_0075e580(void *this,undefined4 param_1)

{
  int *piVar1;
  char *_Source;
  char *local_2c;
  int local_28;
  uint local_24;
  char local_20 [16];
  undefined1 uStack_10;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7413;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_24 = 0x14;
  local_4 = 0;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ui/button_goback.dds",0x14);
    local_2c[0x14] = '\0';
    goto LAB_0075e664;
  case 2:
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _Source = "ui/button_sample.dds";
    break;
  case 3:
    ExceptionList = &local_c;
    _strncpy(local_20,"ui/button_trl.dds",0x11);
    local_28 = 0x11;
    local_f = 0;
    goto LAB_0075e667;
  case 4:
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _Source = "ui/button_folder.dds";
    break;
  default:
    goto switchD_0075e5cb_default;
  }
  _strncpy(local_2c,_Source,0x14);
  local_2c[0x14] = '\0';
LAB_0075e664:
  local_24 = 0x20;
  local_28 = 0x14;
LAB_0075e667:
  if (local_28 != 0) {
    (**(code **)(**(int **)((int)this + 0x468) + 0x5c))();
    puStack_8 = operator_new(0x360);
    uStack_10 = 1;
    if (puStack_8 == (undefined1 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_0069d820(puStack_8,(undefined4 *)&stack0xffffffc8,0,0,0x3f800000,0x3f800000);
    }
    uStack_10 = 0;
    (**(code **)(*piVar1 + 0x5c))();
    (**(code **)(*piVar1 + 100))(1,this);
    (**(code **)(*piVar1 + 0x74))(0x41c00000,0x41c00000);
    (**(code **)(*(int *)this + 0xc))(piVar1,1);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
switchD_0075e5cb_default:
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0075e740 @ 0075e740 ////

void __fastcall FUN_0075e740(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d4d0c0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0075e790 @ 0075e790 ////

void __fastcall FUN_0075e790(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4d0c0;
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


//// FUNCTION FUN_0075e830 @ 0075e830 ////

void __fastcall FUN_0075e830(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4d0d0;
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


//// FUNCTION FUN_0075e880 @ 0075e880 ////

void __thiscall FUN_0075e880(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4d0e0;
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


