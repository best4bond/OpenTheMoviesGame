//// FUNCTION FUN_00be70c0 @ 00be70c0 ////

undefined4 __fastcall FUN_00be70c0(int *param_1)

{
  ulonglong uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00fe8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddd90((int)(param_1 + 2));
  (**(code **)(*param_1 + 0x98))();
  uVar1 = FUN_00acd42c();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return (int)uVar1;
}


//// FUNCTION FUN_00be7150 @ 00be7150 ////

void __thiscall FUN_00be7150(void *this,float *param_1,float *param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00ffa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddd50((void *)((int)this + 8),param_1,param_2);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be71c0 @ 00be71c0 ////

float10 __fastcall FUN_00be71c0(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0100c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = FUN_00bddd90(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00be7230 @ 00be7230 ////

float10 __fastcall FUN_00be7230(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0101e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = FUN_00bdddb0(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00be72a0 @ 00be72a0 ////

float10 __fastcall FUN_00be72a0(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01030;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = (float10)FUN_00bdde10(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00be7310 @ 00be7310 ////

float10 __fastcall FUN_00be7310(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01042;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = (float10)FUN_00bdde20(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00be7380 @ 00be7380 ////

undefined2 __fastcall FUN_00be7380(int param_1)

{
  undefined2 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01054;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = GetField_0xe_00bdde30(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00be73e0 @ 00be73e0 ////

int __fastcall FUN_00be73e0(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bdde40(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00be7440 @ 00be7440 ////

undefined4 __fastcall FUN_00be7440(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = GetField_8_00bdde50(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00be74a0 @ 00be74a0 ////

undefined2 __fastcall FUN_00be74a0(int param_1)

{
  undefined2 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0108a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = GetField_4_00bdde60(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00be7500 @ 00be7500 ////

undefined2 __fastcall FUN_00be7500(int param_1)

{
  undefined2 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0109c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = GetField_0x10_00bdde70(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00be7560 @ 00be7560 ////

byte __fastcall FUN_00be7560(int param_1)

{
  byte bVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d010ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  bVar1 = FUN_00bdde80(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return bVar1;
}


//// FUNCTION FUN_00be75c0 @ 00be75c0 ////

float10 __fastcall FUN_00be75c0(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d010c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  fVar1 = FUN_00bddeb0(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00be7630 @ 00be7630 ////

byte __fastcall FUN_00be7630(int param_1)

{
  byte bVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d010d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  bVar1 = FUN_00bdde90(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return bVar1;
}


//// FUNCTION FUN_00be7690 @ 00be7690 ////

uint __fastcall FUN_00be7690(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d010e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = FUN_00bddea0(param_1 + 8);
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}


//// FUNCTION FUN_00be76f0 @ 00be76f0 ////

undefined4 __fastcall FUN_00be76f0(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined1 local_15;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int iVar2;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d010f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = GetField_0x18_00bde080(param_1 + 8);
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (iVar2 == 0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      LH_Assert(&local_15,"t == E_MODEL_ROLLOFF_TYPE_NATURAL\n");
      DebugBreak();
    }
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 2;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00be77c0 @ 00be77c0 ////

int __fastcall FUN_00be77c0(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bde0a0(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00be7820 @ 00be7820 ////

void __fastcall FUN_00be7820(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0111a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddf00((undefined1 *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7890 @ 00be7890 ////

void __fastcall FUN_00be7890(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0112c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddf30(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7900 @ 00be7900 ////

void __fastcall FUN_00be7900(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0113e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddf50(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7970 @ 00be7970 ////

void __fastcall FUN_00be7970(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01150;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddf70(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be79e0 @ 00be79e0 ////

void __fastcall FUN_00be79e0(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddf90(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7a50 @ 00be7a50 ////

void __thiscall FUN_00be7a50(void *this,undefined2 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01174;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddfb0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7ac0 @ 00be7ac0 ////

void __thiscall FUN_00be7ac0(void *this,undefined2 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01186;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddfc0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7b30 @ 00be7b30 ////

void __thiscall FUN_00be7b30(void *this,undefined4 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddfd0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7ba0 @ 00be7ba0 ////

void __thiscall FUN_00be7ba0(void *this,undefined2 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d011aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddfe0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7c10 @ 00be7c10 ////

void __thiscall FUN_00be7c10(void *this,undefined2 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d011bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bddff0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7c80 @ 00be7c80 ////

void __thiscall FUN_00be7c80(void *this,char param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d011ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde000((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7cf0 @ 00be7cf0 ////

void __fastcall FUN_00be7cf0(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d011e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde060(param_1 + 8);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7d60 @ 00be7d60 ////

void __thiscall FUN_00be7d60(void *this,char param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d011f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde020((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7dd0 @ 00be7dd0 ////

void __thiscall FUN_00be7dd0(void *this,char param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01204;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde040((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7e40 @ 00be7e40 ////

void __thiscall FUN_00be7e40(void *this,int param_1)

{
  undefined2 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01216;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else {
    if (param_1 != 2) goto LAB_00be7e92;
    uVar1 = 2;
  }
  FUN_00bde090((void *)((int)this + 8),uVar1);
LAB_00be7e92:
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be7ec0 @ 00be7ec0 ////

void __thiscall FUN_00be7ec0(void *this,undefined2 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bde0b0((void *)((int)this + 8),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da1428_00be7f30 @ 00be7f30 ////

undefined4 * __fastcall Ctor_vt00da1428_00be7f30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0123a;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da1428;
  param_1[1] = 0;
  FUN_00bde190((undefined1 *)(param_1 + 2));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00be7f80 @ 00be7f80 ////

/* WARNING: Removing unreachable block (ram,0x00be80f1) */

int __fastcall FUN_00be7f80(int *param_1)

{
  void *pvVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  void *unaff_EBX;
  int iStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  undefined **appuStack_d4 [2];
  undefined1 *puStack_cc;
  undefined4 auStack_c8 [2];
  uint local_c0;
  undefined1 uStack_b9;
  undefined4 auStack_b8 [2];
  int iStack_b0;
  int iStack_ac;
  undefined4 auStack_a0 [13];
  int iStack_6c;
  int iStack_68;
  short sStack_54;
  ushort uStack_52;
  int iStack_50;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d0129f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00bc1470(&local_c0,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_c = 0;
  piVar3 = (int *)(**(code **)(*param_1 + 0x98))();
  piVar4 = (int *)(**(code **)(*piVar3 + 0x14))();
  piStack_dc = operator_new((uint)piVar4);
  iVar6 = *piVar3;
  local_c = CONCAT31(local_c._1_3_,1);
  piStack_d8 = piVar4;
  iVar5 = FUN_00bbc590(&piStack_dc,0);
  cVar2 = (**(code **)(iVar6 + 8))(iVar5,piVar4);
  if (cVar2 == '\0') {
    if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    goto LAB_00be835b;
  }
  piStack_d8 = operator_new(0x1c);
  pvStack_14._0_1_ = 2;
  if (piStack_d8 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00c1efe0(piStack_d8);
  }
  pvStack_14._0_1_ = 3;
  piStack_dc = piVar4;
  if (piVar4 == (int *)0x0) {
    LH_Assert(&uStack_b9,"loadedDriver.IsValid ()\n");
    DebugBreak();
  }
  cVar2 = (**(code **)(*piVar3 + 0x10))(&iStack_b0);
  if (cVar2 != '\0') {
    piVar4[1] = iStack_b0;
    piVar4[2] = iStack_ac;
    piVar4[5] = 0;
    piVar4[6] = iStack_e0;
    if (piVar4[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)piVar4[3]);
    }
    piVar4[4] = iStack_e0;
    piVar4[3] = (int)unaff_EBX;
    iVar6 = FUN_00be8520((int *)&piStack_dc);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    if (piStack_dc != (int *)0x0) {
      (**(code **)(*piStack_dc + 0x10))();
    }
    goto LAB_00be841b;
  }
  FUN_00bce860(appuStack_d4);
  puStack_cc = &stack0xffffff1c;
  appuStack_d4[0] = &PTR_FUN_00d9da70;
  pvStack_14._0_1_ = 5;
  FUN_00bd58a0(auStack_a0);
  pvStack_14._0_1_ = 6;
  uVar7 = FUN_00bd5db0(auStack_a0,(int *)appuStack_d4);
  if ((char)uVar7 == '\0') {
    pvStack_14._0_1_ = 5;
    FUN_00bd5a40(auStack_a0);
    pvStack_14._0_1_ = 3;
    appuStack_d4[0] = &PTR_FUN_00d9da70;
    PKDataReadCAccess_Dtor(appuStack_d4);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x10))();
    }
    if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    goto LAB_00be835b;
  }
  uVar8 = FUN_00bd57f0(auStack_a0,(int *)appuStack_d4);
  if ((char)uVar8 != '\0') {
    piVar4[1] = (uint)uStack_52;
    piVar4[2] = iStack_50;
    piVar4[5] = iStack_6c;
    piVar4[6] = iStack_68;
    FUN_00be84f0(piVar4 + 3,(undefined4 *)&stack0xffffff1c);
    iVar6 = FUN_00be8520((int *)&piStack_dc);
    pvStack_14._0_1_ = 5;
    FUN_00bd5a40(auStack_a0);
    pvStack_14._0_1_ = 3;
    appuStack_d4[0] = &PTR_FUN_00d9da70;
    PKDataReadCAccess_Dtor(appuStack_d4);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
    if (piStack_dc != (int *)0x0) {
      (**(code **)(*piStack_dc + 0x10))();
    }
    if (unaff_EBX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    goto LAB_00be841b;
  }
  iVar6 = (**(code **)(*piVar3 + 0x18))();
  pvVar1 = *(void **)(iVar6 + 4);
  if (sStack_54 == 0x50) {
    piVar3 = (int *)CCodecName_MPEG2LayerII_Constructor(pvVar1);
LAB_00be827e:
    if (piVar3 == (int *)0x0) goto LAB_00be8282;
LAB_00be8291:
    piVar3 = (int *)(**(code **)(*piVar3 + 0xc))(appuStack_d4);
    pvStack_14._0_1_ = 7;
    piStack_d8 = piVar3;
    if (piVar3 != (int *)0x0) {
      piVar9 = (int *)FUN_00be85f0((int *)&piStack_d8);
      uVar7 = FUN_00bf38b0(piVar9,(int *)&local_c0);
      if ((char)uVar7 != '\0') {
        FUN_00bbb670(auStack_b8,local_c0);
        pvStack_14._0_1_ = 8;
        iVar6 = FUN_00bbc590(auStack_b8,0);
        cVar2 = (**(code **)(*piVar3 + 0x10))(iVar6,local_c0,&local_c0);
        if (cVar2 != '\0') {
          piVar4[1] = (uint)uStack_52;
          piVar4[2] = iStack_50;
          piVar4[5] = 0;
          piVar4[6] = local_c0;
          FUN_00be84f0(piVar4 + 3,auStack_b8);
          iVar6 = FUN_00be8520((int *)&piStack_dc);
          FUN_00bbb8b0(auStack_b8);
          pvStack_14._0_1_ = 6;
          FUN_00bbc8e0((int *)&piStack_d8);
          pvStack_14._0_1_ = 5;
          FUN_00bd5a40(auStack_a0);
          pvStack_14._0_1_ = 3;
          appuStack_d4[0] = &PTR_FUN_00d9da70;
          PKDataReadCAccess_Dtor(appuStack_d4);
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
          FUN_00be84d0((int *)&piStack_dc);
          FUN_00bbb8b0((undefined4 *)&stack0xffffff1c);
LAB_00be841b:
          pvStack_14 = (void *)0xffffffff;
          PKCProtectionInstance_Leave(auStack_c8);
          ExceptionList = pvStack_1c;
          return iVar6;
        }
        FUN_00bbb8b0(auStack_b8);
      }
    }
    pvStack_14._0_1_ = 6;
    FUN_00bbc8e0((int *)&piStack_d8);
  }
  else {
    if (sStack_54 == 0x69) {
      piVar3 = (int *)CCodecName_XBoxADPCM_Constructor(pvVar1);
      goto LAB_00be827e;
    }
LAB_00be8282:
    piVar3 = (int *)CCodecName_WindowsACM_Constructor(pvVar1);
    if (piVar3 != (int *)0x0) goto LAB_00be8291;
  }
  pvStack_14._0_1_ = 5;
  FUN_00bd5a40(auStack_a0);
  pvStack_14._0_1_ = 3;
  appuStack_d4[0] = &PTR_FUN_00d9da70;
  PKDataReadCAccess_Dtor(appuStack_d4);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
  FUN_00be84d0((int *)&piStack_dc);
  FUN_00bbb8b0((undefined4 *)&stack0xffffff1c);
LAB_00be835b:
  pvStack_14 = (void *)0xffffffff;
  PKCProtectionInstance_Leave(auStack_c8);
  ExceptionList = pvStack_1c;
  return 0;
}


//// FUNCTION FUN_00be8490 @ 00be8490 ////

void __fastcall FUN_00be8490(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00be84b0 @ 00be84b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be84b0(void *this,byte param_1)

{
  SetVtable_00da1370_00be70b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00be84d0 @ 00be84d0 ////

void __fastcall FUN_00be84d0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00be84f0 @ 00be84f0 ////

void __thiscall FUN_00be84f0(void *this,undefined4 *param_1)

{
  FUN_00bbc1d0(this,0);
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)this = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00be8520 @ 00be8520 ////

int __fastcall FUN_00be8520(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d012bb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00be85f0 @ 00be85f0 ////

int __fastcall FUN_00be85f0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d012db;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x24);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00be86c0 @ 00be86c0 ////

bool __fastcall FUN_00be86c0(int param_1)

{
  return *(short *)(param_1 + 0x14) == 2;
}


//// FUNCTION FUN_00be86d0 @ 00be86d0 ////

bool __fastcall FUN_00be86d0(int param_1)

{
  return *(short *)(param_1 + 0x14) == 0;
}


//// FUNCTION FUN_00be86e0 @ 00be86e0 ////

void __fastcall FUN_00be86e0(int param_1)

{
  *(undefined2 *)(param_1 + 0x14) = 2;
  return;
}


//// FUNCTION FUN_00be86f0 @ 00be86f0 ////

void __fastcall FUN_00be86f0(int param_1)

{
  *(undefined2 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00be8700 @ 00be8700 ////

void __fastcall FUN_00be8700(int param_1)

{
  *(undefined2 *)(param_1 + 0x14) = 1;
  return;
}


//// FUNCTION FUN_00be8720 @ 00be8720 ////

void __thiscall
FUN_00be8720(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  return;
}


//// FUNCTION FUN_00be8740 @ 00be8740 ////

int __fastcall FUN_00be8740(int param_1)

{
  return param_1 + 4;
}


//// FUNCTION FUN_00be8750 @ 00be8750 ////

void __fastcall FUN_00be8750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da14e0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  return;
}


//// FUNCTION FUN_00be8780 @ 00be8780 ////

bool __fastcall FUN_00be8780(int param_1)

{
  return *(short *)(param_1 + 0x16) == 0;
}


//// FUNCTION FUN_00be8790 @ 00be8790 ////

void __fastcall FUN_00be8790(int param_1)

{
  *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + 1;
  return;
}


//// FUNCTION FUN_00be87a0 @ 00be87a0 ////

void __fastcall FUN_00be87a0(int param_1)

{
  *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + -1;
  return;
}


//// FUNCTION SetVtable_00da14e0_00be87b0 @ 00be87b0 ////

void __fastcall SetVtable_00da14e0_00be87b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da14e0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00be87c0 @ 00be87c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be87c0(void *this,byte param_1)

{
  SetVtable_00da14e0_00be87b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00be87f0 @ 00be87f0 ////

void __thiscall FUN_00be87f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00be8810 @ 00be8810 ////

int __fastcall FUN_00be8810(int param_1)

{
  return param_1 + 4;
}


//// FUNCTION Ctor_vt00da1508_00be8830 @ 00be8830 ////

undefined4 * __fastcall Ctor_vt00da1508_00be8830(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0131b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da1508;
  param_1[1] = 0;
  FUN_00be8e40(param_1 + 2);
  local_4 = 0;
  Ctor_vt00da5e40_00c1f560(param_1 + 5);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00be88b0 @ 00be88b0 ////

void __fastcall FUN_00be88b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d01343;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00da1508;
  local_4 = 1;
  Ctor_vt00da1500_00be9bc0(local_1c,param_1 + 2);
  local_4._0_1_ = 2;
  do {
    iVar1 = FUN_00be8ec0((int)local_1c);
  } while (iVar1 != 0);
  local_4._0_1_ = 1;
  Dtor_00be8e70(local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c1f3e0(param_1 + 5);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00be8e50(param_1 + 2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00be8940 @ 00be8940 ////

void __fastcall FUN_00be8940(int param_1)

{
  int iVar1;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01355;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da1500_00be9bc0(local_1c,(void *)(param_1 + 8));
  local_4 = 0;
  do {
    iVar1 = FUN_00be8ec0((int)local_1c);
  } while (iVar1 != 0);
  FUN_00c1f1a0((int *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  Dtor_00be8e70(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be89b0 @ 00be89b0 ////

void __thiscall FUN_00be89b0(void *this,int param_1)

{
  int iVar1;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01367;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00bdde40(param_1 + 8);
  if (iVar1 == -1) {
    Ctor_vt00da1504_00be9c20(local_1c,(void *)((int)this + 8));
    local_4 = 0;
    LH_Container_AddObject_00be9ab0(local_1c,param_1);
    thunk_FUN_00be9e80((void *)((int)this + 8),local_1c);
    local_4 = 0xffffffff;
    Dtor_00be8f40(local_1c);
    ExceptionList = local_c;
    return;
  }
  iVar1 = (*(code *)**(undefined4 **)this)();
  FUN_00c1f430((void *)((int)this + 0x14),*(float *)(*(int *)(iVar1 + 4) + 0x84),param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be8a60 @ 00be8a60 ////

void __thiscall FUN_00be8a60(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  void *this_00;
  uint *puVar4;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01379;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00bdde40(param_1 + 8);
  if (iVar1 == -1) {
    puVar4 = &param_1;
    this_00 = (void *)((int)this + 8);
    puVar2 = (uint *)FUN_00be7050(uVar3);
    uVar3 = FUN_00be9360(this_00,puVar2,(int *)puVar4);
    if ((char)uVar3 != '\0') {
      Ctor_vt00da1500_00be9bc0(local_1c,this_00);
      local_4 = 0;
      FUN_00be8f10(local_1c,param_1);
      thunk_FUN_00be9e40(this_00,local_1c);
      local_4 = 0xffffffff;
      Dtor_00be8e70(local_1c);
      ExceptionList = local_c;
      return;
    }
  }
  else {
    FUN_00c1f130((void *)((int)this + 0x14),uVar3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_Array_SetAt_00be8b20 @ 00be8b20 ////

void __thiscall LH_Array_SetAt_00be8b20(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00be8b60 @ 00be8b60 ////

void __thiscall LH_Array_SetFilledSize_00be8b60(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00be8b90 @ 00be8b90 ////

void __fastcall FUN_00be8b90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00be8ba0 @ 00be8ba0 ////

void __fastcall LH_Array_FreeBuffer_00be8ba0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00be8c00 @ 00be8c00 ////

void __fastcall FUN_00be8c00(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bdbac0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bdba80(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00be8b20(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bdbac0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00be8b60(this,uVar3);
  return;
}


//// FUNCTION LH_Array_Reserve_00be8c50 @ 00be8c50 ////

void __thiscall LH_Array_Reserve_00be8c50(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00be8d10 @ 00be8d10 ////

void __fastcall FUN_00be8d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00be8da0 @ 00be8da0 ////

void __fastcall FUN_00be8da0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00be8e40 @ 00be8e40 ////

undefined4 * __fastcall FUN_00be8e40(undefined4 *param_1)

{
  FUN_00be8b90(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00be8e50 @ 00be8e50 ////

void __fastcall LH_Array_FreeBuffer_00be8e50(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION Dtor_00be8e70 @ 00be8e70 ////

void __fastcall Dtor_00be8e70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d012fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da1500;
  local_4 = 0;
  FUN_00be8c00((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00be8ba0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be8ec0 @ 00be8ec0 ////

int __fastcall FUN_00be8ec0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bdbac0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bdbac0((int)this);
    iVar2 = LH_Array_GetAt_00bdba80(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00be8b60(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bdbac0((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00be8f10 @ 00be8f10 ////

undefined4 __thiscall FUN_00be8f10(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = LH_Array_GetAt_00bdba80((void *)((int)this + 4),param_1);
  LH_Array_SetAt_00be8b20((void *)((int)this + 4),param_1,0);
  return uVar1;
}


//// FUNCTION Dtor_00be8f40 @ 00be8f40 ////

void __fastcall Dtor_00be8f40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da1504;
  LH_Array_FreeBuffer_00be8ba0(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00be8f50 @ 00be8f50 ////

undefined4 * __thiscall ScalarDeletingDtor_00be8f50(void *this,byte param_1)

{
  Dtor_00be8e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00be8f70 @ 00be8f70 ////

undefined4 * __thiscall ScalarDeletingDtor_00be8f70(void *this,byte param_1)

{
  Dtor_00be8f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Map_GetObject_00be8f90 @ 00be8f90 ////

int __thiscall LH_Map_GetObject_00be8f90(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bdba80(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION LH_SortedArray_FindIndex_00be8fc0 @ 00be8fc0 ////

int __thiscall LH_SortedArray_FindIndex_00be8fc0(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 8) + -1;
  iVar4 = 0;
  local_4 = this;
  if (-1 < iVar3) {
    do {
      iVar5 = (iVar3 + iVar4) / 2;
      iVar1 = *(int *)(*local_4 + iVar5 * 4);
      if (iVar1 == 0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      puVar2 = (uint *)FUN_00be7050(iVar1);
      if (*param_1 < *puVar2) {
        iVar3 = iVar5 + -1;
      }
      else {
        if (*param_1 <= *puVar2) {
          *param_2 = 1;
          return iVar5;
        }
        iVar4 = iVar5 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  iVar4 = (iVar3 + iVar4) / 2;
  iVar3 = *(int *)(*local_4 + iVar4 * 4);
  if (iVar3 == 0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  puVar2 = (uint *)FUN_00be7050(iVar3);
  if (*puVar2 <= *param_1) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_00be90a0 @ 00be90a0 ////

void __thiscall FUN_00be90a0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00be8c50(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00be90e0 @ 00be90e0 ////

uint __fastcall FUN_00be90e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_4;
  
  uVar5 = param_1[2];
  uVar6 = 1;
  uStack_4 = param_1;
  if (1 < uVar5) {
    do {
      iVar1 = *(int *)(*param_1 + -4 + uVar6 * 4);
      iVar2 = *(int *)(*param_1 + uVar6 * 4);
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if (*puVar3 <= *puVar4) {
        return (uint)puVar4 & 0xffffff00;
      }
      uVar5 = param_1[2];
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_00be9150 @ 00be9150 ////

void __thiscall FUN_00be9150(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00be90a0(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00be91a0 @ 00be91a0 ////

undefined4 FUN_00be91a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  puVar3 = (uint *)FUN_00be7050(iVar2);
  puVar4 = (uint *)FUN_00be7050(iVar1);
  if (*puVar4 < *puVar3) {
    return 0xffffff01;
  }
  return 0;
}


//// FUNCTION FUN_00be9210 @ 00be9210 ////

void __fastcall FUN_00be9210(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00be91a0(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  uVar2 = FUN_00be91a0(*param_3,*param_2);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  uVar2 = FUN_00be91a0(*param_2,*param_1);
  if ((char)uVar2 != '\0') {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION FUN_00be92a0 @ 00be92a0 ////

void __fastcall FUN_00be92a0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined1 local_5;
  uint *local_4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if ((iVar1 == 0) || (param_4 == 0)) {
      LH_Assert(&local_5,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    local_4 = (uint *)FUN_00be7050(param_4);
    puVar2 = (uint *)FUN_00be7050(iVar1);
    if (*local_4 <= *puVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00be9360 @ 00be9360 ////

uint __thiscall FUN_00be9360(void *this,uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = LH_SortedArray_FindIndex_00be8fc0(this,param_1,(undefined1 *)&param_1);
  *param_2 = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),param_1._0_1_);
}


//// FUNCTION FUN_00be9380 @ 00be9380 ////

void __thiscall FUN_00be9380(void *this,undefined4 param_1)

{
  FUN_00be90a0(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00be93a0 @ 00be93a0 ////

void __thiscall FUN_00be93a0(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00be8d10(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00be8c50(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00be9150(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00be93f0 @ 00be93f0 ////

void __fastcall FUN_00be93f0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00be9210(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00be9210(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00be9210(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00be9210(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00be9210(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00be94b0 @ 00be94b0 ////

void __fastcall FUN_00be94b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_8 = param_2;
  local_4 = param_2;
  while( true ) {
    iVar3 = local_8 * 2;
    iVar6 = iVar3 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = *(int *)(param_1 + iVar6 * 4);
    iVar2 = *(int *)(param_1 + -4 + iVar6 * 4);
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar4 = (uint *)FUN_00be7050(iVar2);
    puVar5 = (uint *)FUN_00be7050(iVar1);
    if (*puVar5 < *puVar4) {
      iVar6 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
    local_8 = iVar6;
  }
  if (iVar6 == param_3) {
    *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    local_8 = param_3 + -1;
  }
  FUN_00be92a0(param_1,local_8,local_4,param_4);
  return;
}


//// FUNCTION FUN_00be9590 @ 00be9590 ////

void __thiscall FUN_00be9590(void *this,undefined4 param_1)

{
  FUN_00be9380((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00be95b0 @ 00be95b0 ////

void __thiscall FUN_00be95b0(void *this,undefined4 *param_1)

{
  FUN_00be8c00((int)this);
  FUN_00be93a0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00be95d0 @ 00be95d0 ////

void __thiscall FUN_00be95d0(void *this,undefined4 *param_1)

{
  FUN_00be93a0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00be95e0 @ 00be95e0 ////

void __fastcall FUN_00be95e0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00be93f0(param_2,piVar5,param_3 + -1);
  piVar7 = piVar5 + 1;
  local_10 = piVar7;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = piVar5[-1];
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = piVar5[-1];
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if ((*puVar4 < *puVar3) || (piVar5 = piVar5 + -1, piVar5 <= local_8)) break;
    }
  }
  piVar8 = piVar7;
  piVar9 = local_10;
  local_c = piVar5;
  piVar6 = piVar5;
  if (piVar7 < param_3) {
    while( true ) {
      iVar1 = *piVar7;
      iVar2 = *piVar5;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar8 = piVar7;
      piVar9 = piVar7;
      if (*puVar4 < *puVar3) break;
      iVar1 = *piVar5;
      iVar2 = *piVar7;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      if ((*puVar4 < *puVar3) ||
         (piVar7 = piVar7 + 1, piVar8 = piVar7, piVar9 = piVar7, param_3 <= piVar7)) break;
    }
  }
joined_r0x00be9728:
  do {
    local_10 = piVar9;
    if (param_3 <= piVar7) {
LAB_00be97cc:
      bVar10 = piVar5 == local_8;
      piVar9 = piVar8;
      if (local_8 < piVar5) {
        do {
          iVar1 = piVar5[-1];
          iVar2 = *piVar6;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be7050(iVar2);
          puVar4 = (uint *)FUN_00be7050(iVar1);
          if (*puVar3 <= *puVar4) {
            iVar1 = *piVar6;
            iVar2 = local_c[-1];
            if ((iVar1 == 0) || (iVar2 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            puVar3 = (uint *)FUN_00be7050(iVar2);
            puVar4 = (uint *)FUN_00be7050(iVar1);
            if (*puVar4 < *puVar3) break;
            iVar1 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar1;
          }
          piVar5 = local_c + -1;
          local_c = piVar5;
        } while (local_8 < piVar5);
        bVar10 = local_c == local_8;
        piVar5 = local_c;
        piVar9 = local_10;
      }
      if (bVar10) {
        if (piVar7 == param_3) {
          local_4[1] = piVar9;
          *local_4 = piVar6;
          return;
        }
        if (piVar9 != piVar7) {
          iVar1 = *piVar6;
          *piVar6 = *piVar9;
          *piVar9 = iVar1;
        }
        iVar1 = *piVar6;
        *piVar6 = *piVar7;
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
        piVar8 = piVar9 + 1;
        piVar9 = piVar9 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 != piVar6) {
            iVar1 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar1;
          }
          iVar1 = *piVar6;
          piVar8 = piVar9 + -1;
          *piVar6 = piVar9[-1];
          *piVar8 = iVar1;
          piVar9 = piVar8;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar7 = piVar7 + 1;
          piVar8 = piVar9;
          piVar9 = local_10;
        }
      }
      goto joined_r0x00be9728;
    }
    iVar1 = *piVar6;
    iVar2 = *piVar7;
    if ((iVar1 == 0) || (iVar2 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    puVar3 = (uint *)FUN_00be7050(iVar2);
    puVar4 = (uint *)FUN_00be7050(iVar1);
    if (*puVar3 <= *puVar4) {
      iVar1 = *piVar7;
      iVar2 = *piVar6;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar5 = local_c;
      piVar8 = local_10;
      if (*puVar4 < *puVar3) goto LAB_00be97cc;
      iVar1 = *local_10;
      *local_10 = *piVar7;
      *piVar7 = iVar1;
      local_10 = local_10 + 1;
    }
    piVar7 = piVar7 + 1;
    piVar5 = local_c;
    piVar8 = local_10;
    piVar9 = local_10;
  } while( true );
}


//// FUNCTION FUN_00be9920 @ 00be9920 ////

void __fastcall FUN_00be9920(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar6;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      puVar3 = (uint *)FUN_00be7050(iVar2);
      puVar4 = (uint *)FUN_00be7050(iVar1);
      piVar5 = piVar6;
      if (*puVar4 < *puVar3) {
        if ((param_1 != piVar6) && (piVar6 != local_10)) {
          FUN_00be8da0(param_1,(int)piVar6,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar6;
          iVar2 = piVar5[-1];
          local_c = piVar5;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          puVar3 = (uint *)FUN_00be7050(iVar2);
          puVar4 = (uint *)FUN_00be7050(iVar1);
          piVar5 = piVar5 + -1;
        } while (*puVar4 < *puVar3);
        param_1 = local_8;
        if ((local_c != piVar6) && (piVar6 != local_10)) {
          FUN_00be8da0(local_c,(int)piVar6,local_10);
          param_1 = local_8;
        }
      }
      piVar6 = piVar6 + 1;
      local_10 = local_10 + 1;
    } while (piVar6 != local_4);
  }
  return;
}


//// FUNCTION FUN_00be9a40 @ 00be9a40 ////

void __fastcall FUN_00be9a40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00be94b0(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION LH_Container_AddObject_00be9ab0 @ 00be9ab0 ////

void __thiscall LH_Container_AddObject_00be9ab0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00be9590(this,iVar1);
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00be9ae0 @ 00be9ae0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00be9ae0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bdbac0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00be93a0(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00be9b20 @ 00be9b20 ////

void __thiscall LH_Array_AdoptRequireEmpty_00be9b20(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bdbac0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00be93a0(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION Ctor_vt00da1500_00be9bc0 @ 00be9bc0 ////

undefined4 * __thiscall Ctor_vt00da1500_00be9bc0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0139b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da1500;
  FUN_00be8b90((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00be9ae0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00da1504_00be9c20 @ 00be9c20 ////

undefined4 * __thiscall Ctor_vt00da1504_00be9c20(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d013bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da1504;
  FUN_00be8b90((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00be9b20(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00be9c80 @ 00be9c80 ////

void __fastcall FUN_00be9c80(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00be94b0((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00be9cd0 @ 00be9cd0 ////

void __fastcall FUN_00be9cd0(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00be9d63:
      if (1 < iVar2) {
        FUN_00be9920(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00be9a40((int)param_1,(int)param_2);
        }
        FUN_00be9c80(param_1,(int)param_2);
        return;
      }
      goto LAB_00be9d63;
    }
    FUN_00be95e0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00be9cd0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00be9cd0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00be9de0 @ 00be9de0 ////

void __fastcall FUN_00be9de0(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00be9cd0(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00be9e10 @ 00be9e10 ////

void __fastcall LH_Array_SortAndVerifyUnique_00be9e10(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00be9de0(param_1);
  uVar1 = FUN_00be90e0(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00be9e40 @ 00be9e40 ////

void __thiscall LH_Array_CopySorted_00be9e40(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bdbac0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00be95b0(param_1,this);
  LH_Array_SortAndVerifyUnique_00be9e10(this);
  return;
}


//// FUNCTION LH_Array_CopySorted_00be9e80 @ 00be9e80 ////

void __thiscall LH_Array_CopySorted_00be9e80(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bdbac0((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00be95d0(param_1,this);
  LH_Array_SortAndVerifyUnique_00be9e10(this);
  return;
}


//// FUNCTION GetField_8_00be9ef0 @ 00be9ef0 ////

undefined4 __fastcall GetField_8_00be9ef0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00be9f00 @ 00be9f00 ////

char __thiscall FUN_00be9f00(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 8) == 0) {
    return '\0';
  }
  return '\x01' - (*(uint *)((int)this + 0xc) < (uint)(param_1 + param_2));
}


//// FUNCTION Ctor_vt00da150c_00be9f30 @ 00be9f30 ////

undefined4 * __fastcall Ctor_vt00da150c_00be9f30(undefined4 *param_1)

{
  FUN_00bce860(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00da150c;
  return param_1;
}


//// FUNCTION FUN_00be9f50 @ 00be9f50 ////

undefined1 __thiscall FUN_00be9f50(void *this,undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined1 local_8;
  
  iVar2 = param_3;
  cVar3 = FUN_00be9f00(this,param_2,param_3);
  if (cVar3 != '\0') {
    if (*(int *)((int)this + 0x10) == 0) {
      LH_Assert(&param_3,"Reader != NULL\n");
      DebugBreak();
    }
    piVar1 = *(int **)((int)this + 0x10);
    uVar4 = FUN_00bc0060((void *)piVar1[0xc],param_2,iVar2,param_1,0,piVar1 + 0xd);
    if ((char)uVar4 != '\0') {
      FUN_00bbcef0(piVar1);
      return local_8;
    }
  }
  return 0;
}


//// FUNCTION FUN_00be9fd0 @ 00be9fd0 ////

void __fastcall FUN_00be9fd0(int param_1)

{
  undefined4 *_Memory;
  
  _Memory = *(undefined4 **)(param_1 + 0x10);
  if (_Memory != (undefined4 *)0x0) {
    FUN_00bbbca0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


//// FUNCTION FUN_00bea010 @ 00bea010 ////

void __thiscall FUN_00bea010(void *this,int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  void *this_00;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d013db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00be9fd0((int)this);
  iVar1 = *param_1;
  iVar3 = FUN_00bbf3a0(param_2);
  puVar4 = (undefined4 *)(**(code **)(iVar1 + 4))(iVar3);
  *(undefined4 **)((int)this + 8) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    cVar2 = (**(code **)*puVar4)((int)this + 0xc);
    if (cVar2 == '\0') {
      FUN_00be9fd0((int)this);
      ExceptionList = unaff_EBX;
      return;
    }
    this_00 = operator_new(0x40);
    puStack_8 = (undefined1 *)0x0;
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_00bbd250(this_00,*(undefined4 *)((int)this + 8));
    }
    puStack_8 = (undefined1 *)0xffffffff;
    *(undefined4 **)((int)this + 0x10) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      LH_Assert(&stack0x00000000,"Reader != NULL\n");
      DebugBreak();
    }
  }
  ExceptionList = unaff_EBX;
  return;
}


//// FUNCTION Ctor_vt00da150c_00bea0e0 @ 00bea0e0 ////

undefined4 * __thiscall Ctor_vt00da150c_00bea0e0(void *this,int *param_1,int *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d013ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bce860(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_00da150c;
  FUN_00bea010(this,param_1,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Dtor_00bea140 @ 00bea140 ////

void __fastcall Dtor_00bea140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d013ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da150c;
  local_4 = 0;
  FUN_00be9fd0((int)param_1);
  local_4 = 0xffffffff;
  PKDataReadCAccess_Dtor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bea190 @ 00bea190 ////

undefined4 * __thiscall ScalarDeletingDtor_00bea190(void *this,byte param_1)

{
  FUN_00bbbca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bea1b0 @ 00bea1b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bea1b0(void *this,byte param_1)

{
  Dtor_00bea140(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bea1f0 @ 00bea1f0 ////

void __thiscall FUN_00bea1f0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)this + 4) + 0x48);
  uVar2 = *(undefined4 *)(iVar1 + 0x3c);
  *param_1 = *(undefined4 *)(iVar1 + 0x38);
  param_1[1] = uVar2;
  return;
}


//// FUNCTION FUN_00bea230 @ 00bea230 ////

float * __thiscall
FUN_00bea230(void *this,float *param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)(*(int *)this + 4) + 0x48);
  local_18 = *(float *)(iVar1 + 0x38);
  local_14 = *(undefined4 *)(iVar1 + 0x3c);
  local_10 = *(float *)(iVar1 + 0x40);
  local_c = *param_2;
  local_8 = param_2[1];
  if (param_3 <= local_10) {
    local_4 = local_10;
    if (param_4 < local_10) {
      local_4 = param_4;
    }
  }
  else {
    local_4 = param_3;
  }
  FUN_00bf1c90(param_1,&local_c,&local_18);
  return param_1;
}


//// FUNCTION FUN_00bea2c0 @ 00bea2c0 ////

float10 FUN_00bea2c0(float param_1)

{
  return (float10)param_1 * (float10)param_1;
}


//// FUNCTION FUN_00bea2d0 @ 00bea2d0 ////

uint __fastcall FUN_00bea2d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  float fVar3;
  undefined3 uVar4;
  ushort uVar5;
  
  fVar3 = param_1[1];
  fVar1 = *param_2;
  uVar5 = (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
          (ushort)(fVar3 == fVar1) << 0xe;
  if (fVar3 >= fVar1) {
    fVar3 = param_2[1];
    fVar1 = *param_1;
    uVar5 = (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
            (ushort)(fVar3 == fVar1) << 0xe;
    if (fVar3 >= fVar1) {
      if (*param_1 <= *param_2) {
        fVar3 = *param_2;
      }
      else {
        fVar3 = *param_1;
      }
      *param_3 = fVar3;
      fVar1 = param_1[1];
      fVar2 = param_2[1];
      uVar4 = (undefined3)
              (CONCAT22((short)((uint)fVar3 >> 0x10),
                        (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                        (ushort)(fVar1 == fVar2) << 0xe) >> 8);
      if (fVar1 < fVar2) {
        param_3[1] = param_1[1];
        return CONCAT31(uVar4,1);
      }
      param_3[1] = param_2[1];
      return CONCAT31(uVar4,1);
    }
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),uVar5);
}


//// FUNCTION FUN_00bea330 @ 00bea330 ////

void FUN_00bea330(int *param_1)

{
  if (param_1 != (int *)0x0) {
    Dtor_00c1f9f0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00bea350 @ 00bea350 ////

void FUN_00bea350(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Dtor_00c26240(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00bea370 @ 00bea370 ////

int __fastcall FUN_00bea370(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x14));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00c1f820(iVar1);
    if (iVar2 != 0) break;
    iVar1 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x14),(int *)(param_1 + 0x10),iVar1);
  }
  return iVar2;
}


//// FUNCTION FUN_00bea3b0 @ 00bea3b0 ////

int __thiscall FUN_00bea3b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar1 = RedBlackTree_GetSuccessor((void *)(iVar2 + 0x24),(int *)(iVar2 + 0x20),(int)param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    for (iVar2 = RedBlackTree_GetSuccessor((void *)(iVar1 + 0x18),(int *)(iVar1 + 0x14),iVar2); iVar2 != 0;
        iVar2 = RedBlackTree_GetSuccessor((void *)(iVar1 + 0x18),(int *)(iVar1 + 0x14),iVar2)) {
      iVar3 = FUN_00c26960(iVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    for (iVar2 = RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),iVar1);
        iVar2 != 0; iVar2 = RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),iVar2)
        ) {
      iVar1 = FUN_00c1f820(iVar2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bea440 @ 00bea440 ////

void __fastcall FUN_00bea440(int *param_1)

{
  int *this;
  undefined4 uVar1;
  float10 fVar2;
  float local_18;
  float local_14 [5];
  
  if (((int *)param_1[0xc] == (int *)0x0) || ((char)param_1[0xd] != '\0')) {
    FUN_00c207f0((void *)param_1[0xb]);
  }
  else {
    FUN_00c20850((void *)param_1[0xb],(float *)(*(int *)(*(int *)(*param_1 + 4) + 0x48) + 0x38),
                 (int *)param_1[0xc]);
  }
  for (this = (int *)FUN_00bea370((int)param_1); this != (int *)0x0;
      this = (int *)FUN_00bea3b0(param_1,this)) {
    FUN_00c27100(this,local_14);
    uVar1 = FUN_00c205c0((void *)param_1[0xb],*(uint *)(*this + 0x18),local_14,&local_18);
    if ((char)uVar1 == '\0') {
      local_18 = 0.0;
    }
    fVar2 = (float10)FUN_00c263d0(*this);
    local_18 = (float)(fVar2 * (float10)local_18);
    FUN_00c26010((void *)this[1],local_18);
  }
  return;
}


//// FUNCTION FUN_00bea500 @ 00bea500 ////

void __fastcall FUN_00bea500(int param_1)

{
  int iVar1;
  
  for (iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x14)); iVar1 != 0;
      iVar1 = RedBlackTree_GetSuccessor((undefined4 *)(param_1 + 0x14),(int *)(param_1 + 0x10),iVar1)) {
    FUN_00c1f8c0(iVar1);
  }
  return;
}


//// FUNCTION FUN_00bea530 @ 00bea530 ////

void __fastcall FUN_00bea530(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  float *extraout_ECX_02;
  int extraout_ECX_03;
  int iVar6;
  int extraout_EDX;
  float *extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float *extraout_EDX_03;
  float *extraout_EDX_04;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float local_1c [7];
  
  fVar3 = param_2[3] - *param_2;
  FUN_00bea2c0(param_2[5] - param_2[2]);
  FUN_00bea2c0(*(float *)(extraout_EDX + 0x10) - *(float *)(extraout_EDX + 4));
  fVar8 = FUN_00bea2c0(fVar3);
  fVar1 = (float)(fVar8 + extraout_ST1);
  fVar4 = (*extraout_EDX_00 - *extraout_ECX) * fVar3 +
          (extraout_EDX_00[1] - extraout_ECX[1]) * (extraout_EDX_00[4] - extraout_EDX_00[1]) +
          (extraout_EDX_00[2] - extraout_ECX[2]) * (extraout_EDX_00[5] - extraout_EDX_00[2]);
  fVar4 = fVar4 + fVar4;
  FUN_00bea2c0(*extraout_EDX_00);
  FUN_00bea2c0(*(float *)(extraout_ECX_00 + 8));
  FUN_00bea2c0(*(float *)(extraout_ECX_01 + 4));
  FUN_00bea2c0(*(float *)(extraout_EDX_01 + 8));
  FUN_00bea2c0(*(float *)(extraout_EDX_02 + 4));
  FUN_00bea2c0(*extraout_ECX_02);
  fVar8 = FUN_00bea2c0(*(float *)(extraout_ECX_03 + 0xc));
  local_1c[1] = 0.0;
  local_1c[2] = 0.0;
  local_1c[3] = 0.0;
  local_1c[4] = 0.0;
  local_1c[5] = 0.0;
  local_1c[6] = 0.0;
  fVar2 = (float)((extraout_ST1_00 - fVar8) * (float10)fVar1 * (float10)4.0);
  fVar5 = fVar4 * fVar4 - fVar2;
  if (0.0 <= fVar5) {
    if (fVar5 == 0.0) {
      local_1c[0] = 1.4013e-45;
      fVar4 = (-1.0 / (fVar1 + fVar1)) * fVar4;
      local_1c[1] = fVar3 * fVar4 + *extraout_EDX_03;
      local_1c[2] = (extraout_EDX_03[4] - extraout_EDX_03[1]) * fVar4 + extraout_EDX_03[1];
      local_1c[3] = (extraout_EDX_03[5] - extraout_EDX_03[2]) * fVar4 + extraout_EDX_03[2];
    }
    else {
      local_1c[0] = 2.8026e-45;
      fVar8 = FUN_00bea2c0(fVar4);
      fVar8 = SQRT(fVar8 - (float10)fVar2);
      fVar9 = (float10)fVar1 + (float10)fVar1;
      fVar10 = (fVar8 - (float10)fVar4) / fVar9;
      local_1c[1] = (float)((float10)fVar3 * fVar10 + (float10)*extraout_EDX_04);
      local_1c[2] = (float)(((float10)extraout_EDX_04[4] - (float10)extraout_EDX_04[1]) * fVar10 +
                           (float10)extraout_EDX_04[1]);
      local_1c[3] = (float)(((float10)extraout_EDX_04[5] - (float10)extraout_EDX_04[2]) * fVar10 +
                           (float10)extraout_EDX_04[2]);
      fVar9 = (-(float10)fVar4 - fVar8) / fVar9;
      local_1c[4] = (float)((float10)fVar3 * fVar9 + (float10)*extraout_EDX_04);
      local_1c[5] = (float)(((float10)extraout_EDX_04[4] - (float10)extraout_EDX_04[1]) * fVar9 +
                           (float10)extraout_EDX_04[1]);
      local_1c[6] = (float)(((float10)extraout_EDX_04[5] - (float10)extraout_EDX_04[2]) * fVar9 +
                           (float10)extraout_EDX_04[2]);
    }
  }
  else {
    local_1c[0] = 0.0;
  }
  pfVar7 = local_1c;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_3 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00bea760 @ 00bea760 ////

uint __thiscall
FUN_00bea760(void *this,float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5
            )

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c [7];
  
  local_38[0] = *param_2;
  local_38[1] = param_2[1];
  local_54 = *param_2;
  local_50 = param_2[1];
  local_4c = param_4;
  local_38[2] = param_3;
  local_24 = param_4;
  iVar3 = *(int *)(*(int *)(*(int *)this + 4) + 0x48);
  local_48 = *(float *)(iVar3 + 0x38);
  local_44 = *(float *)(iVar3 + 0x3c);
  local_40 = *(undefined4 *)(iVar3 + 0x40);
  local_3c = param_5;
  local_38[3] = local_54;
  local_28 = local_50;
  pfVar1 = (float *)FUN_00bea530(&local_48,local_38,local_1c);
  pfVar4 = local_38;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  uVar2 = 0;
  if (local_38[0] != 0.0) {
    if (local_38[0] == 1.4013e-45) {
      local_28 = local_38[1];
      local_24 = local_38[2];
      local_20 = local_38[3];
    }
    if (local_20 <= local_38[3]) {
      local_44 = local_38[3];
      local_48 = local_20;
    }
    else {
      local_48 = local_38[3];
      local_44 = local_20;
    }
    if (param_4 <= param_3) {
      local_50 = param_3;
      local_54 = param_4;
    }
    else {
      local_54 = param_3;
      local_50 = param_4;
    }
    local_5c = 0.0;
    local_58 = 0.0;
    uVar2 = FUN_00bea2d0(&local_48,&local_54,&local_5c);
    if ((char)uVar2 != '\0') {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      iVar3 = _rand();
      param_1[2] = (local_58 - local_5c) * (float)iVar3 * 3.051851e-05 + local_5c;
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00bea900 @ 00bea900 ////

void __thiscall FUN_00bea900(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x14));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),(int)piVar1)
      ;
      if (piVar1[1] == param_1) {
        FUN_00bea330(piVar1);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bea950 @ 00bea950 ////

void __thiscall FUN_00bea950(void *this,int param_1)

{
  void *this_00;
  
  this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x14));
  if (this_00 != (void *)0x0) {
    do {
      if (*(int *)((int)this_00 + 4) == *(int *)(param_1 + 0x2c)) {
        FUN_00c1f790(this_00,param_1);
      }
      this_00 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),
                                     (int)this_00);
    } while (this_00 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bea9a0 @ 00bea9a0 ////

void __thiscall FUN_00bea9a0(void *this,int param_1)

{
  void *this_00;
  
  this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x14));
  if (this_00 != (void *)0x0) {
    do {
      if (*(int *)((int)this_00 + 4) == *(int *)(param_1 + 0x2c)) {
        FUN_00c1f940(this_00,param_1);
      }
      this_00 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),
                                     (int)this_00);
    } while (this_00 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00beaa00 @ 00beaa00 ////

void __thiscall FUN_00beaa00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = RedBlackTree_Find((void *)((int)this + 0x14),(void *)((int)this + 0x10),&param_1,&param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_2;
  }
  return;
}


//// FUNCTION FUN_00beaa30 @ 00beaa30 ////

bool __fastcall FUN_00beaa30(int param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_Find((void *)(param_1 + 0x14),(void *)(param_1 + 0x10),&stack0x00000004,
                       &stack0x00000004);
  return iVar1 != 0;
}


//// FUNCTION FUN_00beaa50 @ 00beaa50 ////

void __fastcall FUN_00beaa50(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)RedBlackTree_Find((void *)(param_1 + 0x14),(void *)(param_1 + 0x10),&stack0x00000004,
                               &stack0x00000004);
  if (piVar1 != (int *)0x0) {
    FUN_00bea330(piVar1);
  }
  return;
}


//// FUNCTION FUN_00beaa80 @ 00beaa80 ////

void __fastcall FUN_00beaa80(int param_1)

{
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d0149c;
  pvStack_c = ExceptionList;
  _Memory = *(undefined4 **)(param_1 + 0x2c);
  local_4 = 3;
  if (_Memory != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    Dtor_00c20ed0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x1c) = &PTR_LAB_00da1614;
  RedBlackTree_Dtor((undefined4 *)(param_1 + 0x20));
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_00da15ec;
  RedBlackTree_Dtor((undefined4 *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00da15c4;
  RedBlackTree_Dtor((undefined4 *)(param_1 + 8));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00beab30 @ 00beab30 ////

void __fastcall FUN_00beab30(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (_Memory = (undefined4 *)FUN_00beb890((int *)(param_1 + 0x2c)), _Memory != (undefined4 *)0x0))
  {
    Dtor_00c20ed0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    do {
      iVar2 = RedBlackTree_GetMinObject((undefined4 *)(iVar1 + 0x18));
      if (iVar2 != 0) {
        do {
          FUN_00c267e0(iVar2);
          iVar2 = RedBlackTree_GetSuccessor((void *)(iVar1 + 0x18),(int *)(iVar1 + 0x14),iVar2);
        } while (iVar2 != 0);
      }
      iVar1 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x14),(int *)(param_1 + 0x10),iVar1);
    } while (iVar1 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))
            (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
             *(undefined4 *)(param_1 + 0x40));
  piVar3 = FUN_00c21010(param_1);
  FUN_00beb960((void *)(param_1 + 0x2c),(int)piVar3);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x00beabf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
  return;
}


//// FUNCTION FUN_00beac00 @ 00beac00 ////

void __thiscall FUN_00beac00(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d014b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)RedBlackTree_Find((void *)((int)this + 8),(void *)((int)this + 4),&param_1,&param_1);
  if (piVar2 == (int *)0x0) {
    this_00 = operator_new(0x28);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00c261c0(this_00,(int)this,iVar1);
    }
  }
  piVar2[4] = piVar2[4] + 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00beac80 @ 00beac80 ////

void __fastcall FUN_00beac80(int param_1)

{
  int iVar1;
  
  for (iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 8)); iVar1 != 0;
      iVar1 = RedBlackTree_GetSuccessor((undefined4 *)(param_1 + 8),(int *)(param_1 + 4),iVar1)) {
    FUN_00c26000(iVar1);
  }
  return;
}


//// FUNCTION FUN_00beacb0 @ 00beacb0 ////

void __fastcall FUN_00beacb0(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 8)); puVar1 != (undefined4 *)0x0
      ; puVar1 = (undefined4 *)
                 RedBlackTree_GetSuccessor((undefined4 *)(param_1 + 8),(int *)(param_1 + 4),(int)puVar1)) {
    FUN_00c260a0(puVar1);
  }
  return;
}


//// FUNCTION FUN_00beace0 @ 00beace0 ////

uint __thiscall FUN_00beace0(void *this,int param_1,int param_2,int *param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d014ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = RedBlackTree_Find((void *)((int)this + 0x14),(void *)((int)this + 0x10),&param_2,&param_2);
  pcVar4 = param_4;
  if (uVar1 != 0) {
    ExceptionList = local_c;
    return uVar1 & 0xffffff00;
  }
  if (param_4 != (char *)0x0) {
    std__String__Constructor(local_14,(int)param_4);
    local_4 = 0;
    iVar2 = RedBlackTree_Find((void *)((int)this + 0x20),(void *)((int)this + 0x1c),local_14,local_14);
    if (iVar2 != 0) {
      pcVar4 = (char *)0x0;
    }
    local_4 = 0xffffffff;
    local_14[0] = &PTR_LAB_00d9d9b4;
  }
  param_4 = operator_new(100);
  local_4 = 1;
  piVar3 = (int *)0x0;
  if (param_4 != (char *)0x0) {
    piVar3 = FUN_00c1fac0(param_4,(int)this,param_1,param_2,param_3,pcVar4);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}


//// FUNCTION FUN_00beadc0 @ 00beadc0 ////

undefined4 * __thiscall FUN_00beadc0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0150f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_1;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00da15c4;
  RedBlackTree_Ctor((int *)((int)this + 8));
  *(undefined ***)((int)this + 4) = &PTR_LAB_00da163c;
  local_4 = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00da15ec;
  RedBlackTree_Ctor((int *)((int)this + 0x14));
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00da1664;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00da1614;
  RedBlackTree_Ctor((int *)((int)this + 0x20));
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00da168c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x40600000;
  *(undefined4 *)((int)this + 0x40) = 0x41000000;
  *(undefined1 *)((int)this + 0x44) = 1;
  puVar1 = FUN_00c28610();
  FUN_00beb720((undefined4 *)((int)this + 0x28),(int)puVar1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00beae80 @ 00beae80 ////

void __fastcall FUN_00beae80(int *param_1)

{
  if ((char)param_1[0x11] != '\0') {
    FUN_00beab30((int)param_1);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  FUN_00beac80((int)param_1);
  FUN_00bea440(param_1);
  FUN_00beacb0((int)param_1);
  FUN_00bea500((int)param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00beaeb0 @ 00beaeb0 ////

int * __thiscall ScalarDeletingDtor_00beaeb0(void *this,byte param_1)

{
  Dtor_00c1f9f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00beaed0 @ 00beaed0 ////

undefined4 * __thiscall ScalarDeletingDtor_00beaed0(void *this,byte param_1)

{
  Dtor_00c20ed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00beaf00 @ 00beaf00 ////

int * __thiscall ScalarDeletingDtor_00beaf00(void *this,byte param_1)

{
  Dtor_00c26240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00beafe0 @ 00beafe0 ////

int * __fastcall FUN_00beafe0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00beb000 @ 00beb000 ////

int * __fastcall FUN_00beb000(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00beb020 @ 00beb020 ////

int * __fastcall FUN_00beb020(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00beb0d0 @ 00beb0d0 ////

void __fastcall FUN_00beb0d0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00beb0f0 @ 00beb0f0 ////

void __fastcall FUN_00beb0f0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    Dtor_00c20ed0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION Dtor_00beb300 @ 00beb300 ////

void __fastcall Dtor_00beb300(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15c4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00beb3a0 @ 00beb3a0 ////

void __fastcall Dtor_00beb3a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15ec;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00beb410 @ 00beb410 ////

void __fastcall Dtor_00beb410(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1614;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00beb480 @ 00beb480 ////

void __fastcall FUN_00beb480(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00beb4a0 @ 00beb4a0 ////

void __fastcall FUN_00beb4a0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    Dtor_00c20ed0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00beb530 @ 00beb530 ////

void __fastcall FUN_00beb530(int *param_1)

{
  int iVar1;
  
  for (iVar1 = RedBlackTree_GetMinObject(param_1 + 1); iVar1 != 0;
      iVar1 = RedBlackTree_GetSuccessor(param_1 + 1,param_1,iVar1)) {
    FUN_00c1f8c0(iVar1);
  }
  return;
}


//// FUNCTION FUN_00beb560 @ 00beb560 ////

void __thiscall FUN_00beb560(void *this,undefined4 param_1)

{
  void *this_00;
  
  for (this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 4)); this_00 != (void *)0x0;
      this_00 = (void *)RedBlackTree_GetSuccessor((undefined4 *)((int)this + 4),this,(int)this_00)) {
    FUN_00c1f900(this_00,param_1);
  }
  return;
}


//// FUNCTION Ctor_vt00da15c4_00beb5d0 @ 00beb5d0 ////

undefined4 * __fastcall Ctor_vt00da15c4_00beb5d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15c4;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da15ec_00beb5f0 @ 00beb5f0 ////

undefined4 * __fastcall Ctor_vt00da15ec_00beb5f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15ec;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1614_00beb610 @ 00beb610 ////

undefined4 * __fastcall Ctor_vt00da1614_00beb610(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1614;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00beb630 @ 00beb630 ////

undefined4 * __thiscall ScalarDeletingDtor_00beb630(void *this,byte param_1)

{
  Dtor_00beb300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00beb650 @ 00beb650 ////

undefined4 * __thiscall ScalarDeletingDtor_00beb650(void *this,byte param_1)

{
  Dtor_00beb3a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00beb670 @ 00beb670 ////

undefined4 * __thiscall ScalarDeletingDtor_00beb670(void *this,byte param_1)

{
  Dtor_00beb410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00beb690 @ 00beb690 ////

void __fastcall Dtor_00beb690(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15c4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00beb6c0 @ 00beb6c0 ////

void __fastcall Dtor_00beb6c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15ec;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00beb6f0 @ 00beb6f0 ////

void __fastcall Dtor_00beb6f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1614;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00beb720 @ 00beb720 ////

void __thiscall FUN_00beb720(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d01426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00beb890 @ 00beb890 ////

int __fastcall FUN_00beb890(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0143b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00beb960 @ 00beb960 ////

void __thiscall FUN_00beb960(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d01466;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bebad0 @ 00bebad0 ////

void __fastcall FUN_00bebad0(int *param_1)

{
  int iVar1;
  
  for (iVar1 = RedBlackTree_GetMinObject(param_1 + 1); iVar1 != 0;
      iVar1 = RedBlackTree_GetSuccessor(param_1 + 1,param_1,iVar1)) {
    FUN_00c26000(iVar1);
  }
  return;
}


//// FUNCTION FUN_00bebb00 @ 00bebb00 ////

void __fastcall FUN_00bebb00(int *param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)RedBlackTree_GetMinObject(param_1 + 1); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)RedBlackTree_GetSuccessor(param_1 + 1,param_1,(int)puVar1)) {
    FUN_00c260a0(puVar1);
  }
  return;
}


//// FUNCTION Ctor_vt00da163c_00bebb30 @ 00bebb30 ////

undefined4 * __fastcall Ctor_vt00da163c_00bebb30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15c4;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da163c;
  return param_1;
}


//// FUNCTION Ctor_vt00da1664_00bebb50 @ 00bebb50 ////

undefined4 * __fastcall Ctor_vt00da1664_00bebb50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da15ec;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1664;
  return param_1;
}


//// FUNCTION Ctor_vt00da168c_00bebb70 @ 00bebb70 ////

undefined4 * __fastcall Ctor_vt00da168c_00bebb70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1614;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da168c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bebb90 @ 00bebb90 ////

undefined4 * __thiscall ScalarDeletingDtor_00bebb90(void *this,byte param_1)

{
  Dtor_00beb690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bebbb0 @ 00bebbb0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bebbb0(void *this,byte param_1)

{
  Dtor_00beb6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bebbd0 @ 00bebbd0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bebbd0(void *this,byte param_1)

{
  Dtor_00beb6f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bebc00 @ 00bebc00 ////

void FUN_00bebc00(int *param_1)

{
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bebc12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}


//// FUNCTION FUN_00bebc20 @ 00bebc20 ////

undefined4 * __thiscall
FUN_00bebc20(void *this,undefined4 param_1,undefined4 *param_2,char param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,char param_7,char param_8,undefined4 param_9,
            undefined4 param_10,undefined1 param_11)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *this_00;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0152b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_00bc5990(*(void **)(*(int *)(*(int *)this + 4) + 0x48),param_2);
  if ((char)uVar3 != '\0') {
    this_00 = operator_new(0xcc);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      iVar1 = *(int *)(*(int *)(*(int *)this + 4) + 0x48);
      iVar2 = *(int *)(iVar1 + 0x7a4);
      *(int *)(iVar1 + 0x7a4) = iVar2 + 1;
      puVar4 = Ctor_vt00da6588_00c298e0(this_00,this,param_1,iVar2,param_2,param_3,param_4,param_5,param_6,
                            param_7,param_8,param_9,param_10,param_11);
      ExceptionList = local_c;
      return puVar4;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bebd40 @ 00bebd40 ////

void __thiscall FUN_00bebd40(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_00da1704;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00bebd60 @ 00bebd60 ////

void __thiscall FUN_00bebd60(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_00da170c;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00bebd80 @ 00bebd80 ////

void __fastcall FUN_00bebd80(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x14));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)RedBlackTree_GetSuccessor((void *)(param_1 + 0x14),(int *)(param_1 + 0x10),(int)piVar1);
      FUN_00c296c0(piVar1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bebdc0 @ 00bebdc0 ////

void __thiscall FUN_00bebdc0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = param_1;
  piVar2 = (int *)RedBlackTree_FindFirst((void *)((int)this + 8),(void *)((int)this + 4),&param_1);
  if (piVar2 != (int *)0x0) {
    do {
      FUN_00bebc00(piVar2);
      param_1 = uVar1;
      piVar2 = (int *)RedBlackTree_FindFirst((void *)((int)this + 8),(void *)((int)this + 4),&param_1);
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bebe10 @ 00bebe10 ////

void __fastcall FUN_00bebe10(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d01540;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_00da173c;
  RedBlackTree_Dtor((undefined4 *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00da1714;
  RedBlackTree_Dtor((undefined4 *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bebe70 @ 00bebe70 ////

undefined4 * __thiscall FUN_00bebe70(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01555;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_1;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00da1714;
  RedBlackTree_Ctor((int *)((int)this + 8));
  *(undefined ***)((int)this + 4) = &PTR_LAB_00da176c;
  local_4 = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00da173c;
  RedBlackTree_Ctor((int *)((int)this + 0x14));
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00da1794;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bebee0 @ 00bebee0 ////

void FUN_00bebee0(undefined4 param_1)

{
  int extraout_EDX;
  undefined **local_1c;
  undefined1 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0156f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bebd40(local_14,param_1);
  local_18 = local_14;
  local_1c = &PTR_LAB_00da1764;
  local_4 = 1;
  RedBlackTree_ForEach((void *)(extraout_EDX + 8),&local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bebf50 @ 00bebf50 ////

void FUN_00bebf50(undefined4 param_1)

{
  int extraout_EDX;
  undefined **local_1c;
  undefined1 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bebd60(local_14,param_1);
  local_18 = local_14;
  local_1c = &PTR_LAB_00da1764;
  local_4 = 1;
  RedBlackTree_ForEach((void *)(extraout_EDX + 8),&local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bebfd0 @ 00bebfd0 ////

int * __fastcall FUN_00bebfd0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bebff0 @ 00bebff0 ////

int * __fastcall FUN_00bebff0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00d9f9dc_00bec050 @ 00bec050 ////

void __fastcall SetVtable_00d9f9dc_00bec050(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9dc;
  return;
}


//// FUNCTION SetVtable_00da16b4_00bec120 @ 00bec120 ////

void __fastcall SetVtable_00da16b4_00bec120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da16b4;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bec130 @ 00bec130 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec130(void *this,byte param_1)

{
  SetVtable_00da16b4_00bec120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da16b4_00bec170 @ 00bec170 ////

void __fastcall SetVtable_00da16b4_00bec170(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da16b4;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bec180 @ 00bec180 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec180(void *this,byte param_1)

{
  SetVtable_00da16b4_00bec170(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bec1c0 @ 00bec1c0 ////

void __fastcall Dtor_00bec1c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1714;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bec260 @ 00bec260 ////

void __fastcall Dtor_00bec260(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da173c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bec310 @ 00bec310 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec310(void *this,byte param_1)

{
  SetVtable_00d9f9dc_00bec050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da1714_00bec330 @ 00bec330 ////

undefined4 * __fastcall Ctor_vt00da1714_00bec330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1714;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da173c_00bec350 @ 00bec350 ////

undefined4 * __fastcall Ctor_vt00da173c_00bec350(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da173c;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bec370 @ 00bec370 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec370(void *this,byte param_1)

{
  Dtor_00bec1c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bec390 @ 00bec390 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec390(void *this,byte param_1)

{
  Dtor_00bec260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bec3b0 @ 00bec3b0 ////

void __fastcall Dtor_00bec3b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1714;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bec3c0 @ 00bec3c0 ////

void __fastcall Dtor_00bec3c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da173c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bec3d0 @ 00bec3d0 ////

void __thiscall FUN_00bec3d0(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d015a8;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00da1764;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  RedBlackTree_ForEach(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da176c_00bec420 @ 00bec420 ////

undefined4 * __fastcall Ctor_vt00da176c_00bec420(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1714;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da176c;
  return param_1;
}


//// FUNCTION Ctor_vt00da1794_00bec440 @ 00bec440 ////

undefined4 * __fastcall Ctor_vt00da1794_00bec440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da173c;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1794;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bec460 @ 00bec460 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec460(void *this,byte param_1)

{
  Dtor_00bec3b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bec480 @ 00bec480 ////

undefined4 * __thiscall ScalarDeletingDtor_00bec480(void *this,byte param_1)

{
  Dtor_00bec3c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da17bc_00bec4b0 @ 00bec4b0 ////

void __fastcall SetVtable_00da17bc_00bec4b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da17bc;
  return;
}


//// FUNCTION FUN_00bec4f0 @ 00bec4f0 ////

void __fastcall FUN_00bec4f0(int *param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d015c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc1990((void *)param_1[1],param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bec550 @ 00bec550 ////

undefined4 * __thiscall FUN_00bec550(void *this,int *param_1,float param_2)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  undefined4 local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d015e5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(&local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(&local_14);
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_2);
  if (iVar1 == 0) {
    puStack_8 = (undefined1 *)0xffffffff;
    PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
    ExceptionList = pvStack_10;
    return (undefined4 *)0x0;
  }
  this_00 = operator_new(0x80);
  puStack_8._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = Ctor_vt00da661c_00c2a0e0(this_00,this,iVar1,param_2);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_00bea950(*(void **)(*(int *)((int)this + 4) + 8),(int)puVar2);
  FUN_00bebee0(puVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return puVar2;
}


//// FUNCTION FUN_00bec660 @ 00bec660 ////

void __thiscall FUN_00bec660(void *this,int *param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d015f7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bea9a0(*(void **)(*(int *)((int)this + 4) + 8),(int)param_1);
  FUN_00bebf50(param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bec6e0 @ 00bec6e0 ////

uint __thiscall FUN_00bec6e0(void *this,int param_1,int *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = FUN_00beace0(*(void **)(*(int *)((int)this + 4) + 8),(int)this,param_1,param_2,param_3);
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}


//// FUNCTION FUN_00bec760 @ 00bec760 ////

undefined4 __thiscall FUN_00bec760(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0161b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bed050(local_1c);
  local_4 = 0;
  uVar1 = FUN_00becc60(this);
  FUN_00becfd0(local_1c,param_1,uVar1);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puVar2 = FUN_00bebc20(*(void **)(*(int *)((int)this + 4) + 0xc),this,local_1c,'\x01',param_2,0,
                        &local_28,param_3,'\0',1,0x3f800000,0);
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00becf90();
    ExceptionList = local_c;
    return 0xffffffff;
  }
  uVar1 = puVar2[0x10];
  FUN_00becf90();
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bec830 @ 00bec830 ////

undefined4 __thiscall
FUN_00bec830(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4,
            char param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01635;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_30,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  local_4 = 0;
  FUN_00bed050(local_1c);
  local_4._0_1_ = 1;
  uVar1 = FUN_00becc60(this);
  FUN_00becfd0(local_1c,param_1,uVar1);
  puVar2 = FUN_00bebc20(*(void **)(*(int *)((int)this + 4) + 0xc),this,local_1c,'\x01',param_2,0,
                        &local_28,param_4,param_5,0,0x3f800000,0);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00becf90();
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_30);
    ExceptionList = local_c;
    return 0;
  }
  uVar1 = puVar2[0x10];
  FUN_00becf90();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_30);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bec940 @ 00bec940 ////

int __fastcall FUN_00bec940(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01647;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = RedBlackTree_Count((undefined4 *)(param_1 + 0xc));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bec9a0 @ 00bec9a0 ////

int __thiscall FUN_00bec9a0(void *this,int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01659;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xc));
  for (; (iVar1 != 0 && (param_1 != 0)); param_1 = param_1 + -1) {
    iVar1 = RedBlackTree_GetSuccessor((void *)((int)this + 0xc),(int *)((int)this + 8),iVar1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION Dtor_00beca30 @ 00beca30 ////

void __fastcall Dtor_00beca30(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d01681;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da1868;
  local_4 = 2;
  piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 3);
  while (piVar1 != (int *)0x0) {
    FUN_00bec660(param_1,piVar1);
    piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 3);
  }
  FUN_00bcff70((void *)(param_1[1] + 0x14),(int *)(param_1[1] + 0x10),(int)param_1);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 5);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[2] = &PTR_LAB_00da1810;
  RedBlackTree_Dtor(param_1 + 3);
  *param_1 = &PTR_LAB_00da17bc;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00becad0 @ 00becad0 ////

void __fastcall FUN_00becad0(int param_1)

{
  undefined **local_18;
  undefined **local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0169b;
  local_c = ExceptionList;
  local_10 = (undefined1 *)&local_18;
  local_18 = &PTR_LAB_00da17e4;
  local_14 = &PTR_LAB_00da1838;
  local_4 = 1;
  ExceptionList = &local_c;
  RedBlackTree_ForEach((void *)(param_1 + 0xc),&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da1868_00becb30 @ 00becb30 ////

undefined4 * __thiscall Ctor_vt00da1868_00becb30(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d016c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da1868;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)((int)this + 8) = &PTR_LAB_00da1810;
  RedBlackTree_Ctor((int *)((int)this + 0xc));
  *(undefined ***)((int)this + 8) = &PTR_LAB_00da1840;
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor((undefined4 *)((int)this + 0x14));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x14),(int *)(*(int *)((int)this + 4) + 0x10),
               (int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00becbd0 @ 00becbd0 ////

int * __fastcall FUN_00becbd0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00d9f9dc_00becc50 @ 00becc50 ////

void __fastcall SetVtable_00d9f9dc_00becc50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9dc;
  return;
}


//// FUNCTION FUN_00becc60 @ 00becc60 ////

undefined4 __fastcall FUN_00becc60(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION SetVtable_00da17dc_00becc80 @ 00becc80 ////

void __fastcall SetVtable_00da17dc_00becc80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da17dc;
  return;
}


//// FUNCTION ScalarDeletingDtor_00becc90 @ 00becc90 ////

undefined4 * __thiscall ScalarDeletingDtor_00becc90(void *this,byte param_1)

{
  SetVtable_00da17dc_00becc80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00becd70 @ 00becd70 ////

void __fastcall Dtor_00becd70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1810;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bece60 @ 00bece60 ////

undefined4 * __thiscall ScalarDeletingDtor_00bece60(void *this,byte param_1)

{
  SetVtable_00d9f9dc_00becc50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00da1810_00bece80 @ 00bece80 ////

undefined4 * __fastcall Ctor_vt00da1810_00bece80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1810;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00becea0 @ 00becea0 ////

undefined4 * __thiscall ScalarDeletingDtor_00becea0(void *this,byte param_1)

{
  Dtor_00becd70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00becec0 @ 00becec0 ////

void __fastcall Dtor_00becec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1810;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00beced0 @ 00beced0 ////

void __thiscall FUN_00beced0(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d016d8;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00da1838;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  RedBlackTree_ForEach(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00da1840_00becf20 @ 00becf20 ////

undefined4 * __fastcall Ctor_vt00da1840_00becf20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1810;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1840;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00becf40 @ 00becf40 ////

undefined4 * __thiscall ScalarDeletingDtor_00becf40(void *this,byte param_1)

{
  Dtor_00becec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00becf70 @ 00becf70 ////

undefined4 * __thiscall ScalarDeletingDtor_00becf70(void *this,byte param_1)

{
  Dtor_00beca30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00becf90 @ 00becf90 ////

void FUN_00becf90(void)

{
  return;
}


//// FUNCTION FUN_00becfa0 @ 00becfa0 ////

void __thiscall FUN_00becfa0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}


//// FUNCTION FUN_00becfd0 @ 00becfd0 ////

void __thiscall FUN_00becfd0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}


//// FUNCTION FUN_00becff0 @ 00becff0 ////

void __thiscall FUN_00becff0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00bed010 @ 00bed010 ////

void __thiscall FUN_00bed010(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00bed030 @ 00bed030 ////

void __thiscall FUN_00bed030(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00bed050 @ 00bed050 ////

undefined4 __fastcall FUN_00bed050(void *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_00bed030(param_1,0);
  return extraout_ECX;
}


//// FUNCTION FUN_00bed080 @ 00bed080 ////

void __fastcall FUN_00bed080(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = param_2 - (int)param_1;
  do {
    uVar1 = FUN_00bed0b0(param_1,(uint *)(iVar3 + (int)param_1));
    if (uVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 1;
  } while (uVar2 < 4);
  return;
}


//// FUNCTION FUN_00bed0b0 @ 00bed0b0 ////

uint __fastcall FUN_00bed0b0(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_2 < *param_1);
}


//// FUNCTION GetField_8_00bed0e0 @ 00bed0e0 ////

undefined1 __fastcall GetField_8_00bed0e0(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


//// FUNCTION FUN_00bed0f0 @ 00bed0f0 ////

void __thiscall FUN_00bed0f0(void *this,DWORD param_1)

{
  char cVar1;
  
  cVar1 = GetField_8_00bed0e0((int)this);
  while (cVar1 == '\0') {
    Sleep(param_1);
    cVar1 = GetField_8_00bed0e0((int)this);
  }
  return;
}


//// FUNCTION Dtor_00bed120 @ 00bed120 ////

void __fastcall Dtor_00bed120(void *param_1)

{
  FUN_00bed0f0(param_1,100);
  Sleep(0x14);
  CloseHandle(*(HANDLE *)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  return;
}


//// FUNCTION PKCThreadManager_ThreadProc @ 00bed150 ////

/* lpStartAddress parameter of CreateThread
    */

undefined4 PKCThreadManager_ThreadProc(undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d016fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,".\\PKCThreadManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(6);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null thread manager");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  (*(code *)**(undefined4 **)*param_1)();
  *(undefined1 *)(param_1 + 2) = 1;
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION PKCThreadManager_StartThread @ 00bed240 ////

undefined4 * __thiscall PKCThreadManager_StartThread(void *this,undefined4 param_1,SIZE_T *param_2)

{
  SIZE_T dwStackSize;
  HANDLE pvVar1;
  LPCSTR pCVar2;
  SIZE_T nPriority;
  undefined1 local_115;
  DWORD local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01710;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_1;
  dwStackSize = 0;
  nPriority = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  if (param_2 != (SIZE_T *)0x0) {
    dwStackSize = *param_2;
    nPriority = param_2[1];
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,dwStackSize,PKCThreadManager_ThreadProc,this,0,
                        &local_114);
  *(HANDLE *)((int)this + 4) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKCThreadManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x18);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Problems starting thread");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar2);
    DebugBreak();
  }
  if (nPriority != 0) {
    SetThreadPriority(*(HANDLE *)((int)this + 4),nPriority);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bed360 @ 00bed360 ////

int __thiscall FUN_00bed360(void *this,int param_1)

{
  char cVar1;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01728;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  if (param_1 == 0) {
    cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))(0);
  }
  else {
    *(int *)((int)this + 0x14) = param_1;
    cVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x3c))((int)this + 0x10);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return (cVar1 != '\0') - 1;
}


//// FUNCTION FUN_00bed3e0 @ 00bed3e0 ////

void __thiscall FUN_00bed3e0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *unaff_ESI;
  undefined4 uStack_20;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0173a;
  pvStack_c = ExceptionList;
  uStack_20 = 0xbed409;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  uStack_20 = param_2;
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x1c))(param_1);
  uStack_10 = 0xffffffff;
  PKCProtectionInstance_Leave(&uStack_20);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_00bed450 @ 00bed450 ////

undefined4 __fastcall FUN_00bed450(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0174c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00bed4b0 @ 00bed4b0 ////

void __thiscall FUN_00bed4b0(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0175e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x30))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bed520 @ 00bed520 ////

undefined4 __fastcall FUN_00bed520(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01770;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x38))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION FUN_00bed580 @ 00bed580 ////

void __fastcall FUN_00bed580(int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01782;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bed5e0 @ 00bed5e0 ////

float10 __fastcall FUN_00bed5e0(int param_1)

{
  float10 fVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01794;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return (float10)(float)fVar1;
}


//// FUNCTION FUN_00bed6f0 @ 00bed6f0 ////

void __thiscall FUN_00bed6f0(void *this,undefined4 *param_1)

{
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
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
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d017c0;
  pvStack_c = ExceptionList;
  local_5c = param_1[1];
  local_48 = param_1[6];
  local_60 = *param_1;
  local_58 = param_1[2];
  local_40 = param_1[8];
  local_10 = (void *)param_1[0x14];
  local_54 = param_1[3];
  local_50 = param_1[4];
  local_4c = param_1[5];
  local_44 = param_1[7];
  local_3c = param_1[9];
  local_38 = param_1[10];
  local_34 = param_1[0xb];
  local_30 = param_1[0xc];
  local_2c = param_1[0xd];
  local_28 = param_1[0xe];
  local_24 = param_1[0xf];
  local_20 = param_1[0x10];
  local_14 = param_1[0x13];
  local_1c = param_1[0x11];
  local_18 = param_1[0x12];
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_68,(LPCRITICAL_SECTION)&DAT_010ced14);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0xc) + 0x20))(&local_60);
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffff94);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00bed7f0 @ 00bed7f0 ////

void __fastcall FUN_00bed7f0(void *param_1)

{
  FUN_00bed6f0(param_1,(undefined4 *)&DAT_00da18d0);
  return;
}


//// FUNCTION Ctor_vt00da192c_00bed800 @ 00bed800 ////

undefined4 * __thiscall Ctor_vt00da192c_00bed800(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d017d5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00da192c;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  local_4 = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00da1928;
  FUN_00bed7f0(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Dtor_00bed860 @ 00bed860 ////

void __fastcall Dtor_00bed860(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da192c;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  return;
}


//// FUNCTION FUN_00bed930 @ 00bed930 ////

undefined4 __fastcall FUN_00bed930(int param_1)

{
  switch(*(undefined2 *)(param_1 + 0x1a8)) {
  case 2:
  case 3:
  case 4:
    return 0;
  case 5:
    return 1;
  case 6:
    return 2;
  default:
    return 0xffffffff;
  }
}


//// FUNCTION FUN_00bed970 @ 00bed970 ////

/* WARNING: Switch with 1 destination removed at 0x00bed983 : 7 cases all go to same destination */

void FUN_00bed970(void)

{
  return;
}


//// FUNCTION FUN_00bed9a0 @ 00bed9a0 ////

int FUN_00bed9a0(void)

{
  int extraout_ECX;
  
  FUN_00bed970();
  switch(*(undefined2 *)(extraout_ECX + 0x1a8)) {
  default:
    return 0;
  case 3:
  case 4:
  case 5:
    return extraout_ECX + 0x150;
  case 6:
    return *(int *)(extraout_ECX + 0x180);
  }
}


//// FUNCTION FUN_00bed9f0 @ 00bed9f0 ////

bool FUN_00bed9f0(void)

{
  int extraout_ECX;
  
  FUN_00bed970();
  return *(short *)(extraout_ECX + 0x1a8) == 5;
}


//// FUNCTION FUN_00beda10 @ 00beda10 ////

undefined4 FUN_00beda10(void)

{
  ushort uVar1;
  int extraout_ECX;
  
  FUN_00bed970();
  uVar1 = *(ushort *)(extraout_ECX + 0x1a8);
  if ((1 < uVar1) && ((uVar1 < 5 || (uVar1 == 6)))) {
    return 1;
  }
  return 0;
}


//// FUNCTION Dtor_00beda40 @ 00beda40 ////

void __fastcall Dtor_00beda40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d017fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da1958;
  local_4 = 2;
  FUN_00bed970();
  FUN_00c2a340();
  local_4._0_1_ = 1;
  RedBlackTree_Node_Dtor(param_1 + 0x1d);
  local_4 = (uint)local_4._1_3_ << 8;
  RedBlackTree_Node_Dtor(param_1 + 0x18);
  local_4 = 0xffffffff;
  Dtor_00bf4760(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bedac0 @ 00bedac0 ////

bool __fastcall FUN_00bedac0(int param_1)

{
  return *(short *)(param_1 + 0x1a8) != 0;
}


//// FUNCTION FUN_00bedad0 @ 00bedad0 ////

void __thiscall FUN_00bedad0(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00bed970();
  iVar1 = *(int *)((int)this + 0xa8);
  fVar2 = FUN_00bf33a0((int)this + 0xac);
  FUN_00c2a4c0((void *)((int)this + 0x150),param_1,iVar1,(float *)((int)this + 0x8c),(float)fVar2);
  *(undefined2 *)((int)this + 0x1a8) = 5;
  return;
}


//// FUNCTION FUN_00bedb20 @ 00bedb20 ////

void * __fastcall FUN_00bedb20(int param_1)

{
  void *this;
  int unaff_retaddr;
  
  FUN_00bed970();
  (**(code **)(**(int **)(param_1 + 0x180) + 8))(param_1 + 0x8c);
  FUN_00bf5670(*(void **)(param_1 + 0x180),unaff_retaddr);
  this = *(void **)(param_1 + 0x184);
  FUN_00bf3d80(this,unaff_retaddr,*(int *)(param_1 + 0x98) << 1);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined2 *)(param_1 + 0x1a8) = 1;
  return this;
}


//// FUNCTION FUN_00bedb90 @ 00bedb90 ////

void __fastcall FUN_00bedb90(int param_1)

{
  FUN_00bed970();
  (**(code **)(*(int *)(param_1 + 0x150) + 8))(param_1 + 0x8c);
  *(undefined2 *)(param_1 + 0x1a8) = 1;
  return;
}


//// FUNCTION FUN_00bedbc0 @ 00bedbc0 ////

void FUN_00bedbc0(undefined4 *param_1)

{
  int *piVar1;
  int extraout_ECX;
  
  FUN_00bed970();
  piVar1 = (int *)FUN_00bed9a0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bedbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  *param_1 = *(undefined4 *)(extraout_ECX + 0x8c);
  param_1[1] = *(undefined4 *)(extraout_ECX + 0x90);
  param_1[2] = *(undefined4 *)(extraout_ECX + 0x94);
  return;
}


//// FUNCTION FUN_00bedc00 @ 00bedc00 ////

uint FUN_00bedc00(void)

{
  uint uVar1;
  int iVar2;
  float local_c;
  int local_8;
  uint local_4;
  
  local_c = 0.0;
  local_8 = 0;
  local_4 = 0;
  uVar1 = FUN_00bedbc0(&local_c);
  if ((local_4 & 2) == 0) {
    iVar2 = CONCAT22((short)(uVar1 >> 0x10),
                     (ushort)(local_c < 1.0) << 8 | (ushort)NAN(local_c) << 10 |
                     (ushort)(local_c == 1.0) << 0xe);
    if ((local_c < 1.0) || (uVar1 = 0, iVar2 = local_8, local_8 != 0)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00bedc70 @ 00bedc70 ////

bool FUN_00bedc70(void)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  FUN_00bedbc0(&local_c);
  return (bool)('\x01' - (((byte)local_4 & 4) != 4));
}


//// FUNCTION FUN_00bedca0 @ 00bedca0 ////

void __thiscall FUN_00bedca0(void *this,float param_1)

{
  undefined4 uVar1;
  
  FUN_00bed970();
  uVar1 = FUN_00bf33f0((void *)((int)this + 0xac),param_1);
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 1;
  }
  return;
}


//// FUNCTION FUN_00bedcd0 @ 00bedcd0 ////

void __thiscall FUN_00bedcd0(void *this,float param_1)

{
  undefined4 uVar1;
  
  FUN_00bed970();
  uVar1 = FUN_00bf3420((void *)((int)this + 0xac),param_1);
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 2;
  }
  return;
}


//// FUNCTION FUN_00bedd00 @ 00bedd00 ////

undefined4 FUN_00bedd00(void)

{
  int extraout_ECX;
  float10 fVar1;
  
  FUN_00bed970();
  fVar1 = FUN_00bf3380(extraout_ECX + 0xac);
  if ((float10)0.0 < fVar1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bedd30 @ 00bedd30 ////

void __thiscall FUN_00bedd30(void *this,float *param_1)

{
  int iVar1;
  
  FUN_00bed970();
  iVar1 = FUN_00bf34c0((void *)((int)this + 0xac),param_1);
  if (iVar1 != 0) {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 6;
  }
  return;
}


//// FUNCTION FUN_00bedd60 @ 00bedd60 ////

void __thiscall FUN_00bedd60(void *this,float param_1,float param_2)

{
  undefined4 uVar1;
  
  FUN_00bed970();
  uVar1 = FUN_00bf3450((void *)((int)this + 0xac),param_1,param_2);
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 6;
  }
  return;
}


//// FUNCTION FUN_00bedd90 @ 00bedd90 ////

void __thiscall FUN_00bedd90(void *this,float param_1)

{
  int iVar1;
  
  FUN_00bed970();
  iVar1 = FUN_00bf3490((void *)((int)this + 0xac),param_1);
  if (iVar1 != 0) {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 4;
  }
  return;
}


//// FUNCTION FUN_00beddc0 @ 00beddc0 ////

void FUN_00beddc0(void)

{
  int extraout_ECX;
  
  FUN_00bed970();
  FUN_00bf3050((uint *)(extraout_ECX + 0xac));
  return;
}


//// FUNCTION FUN_00bedde0 @ 00bedde0 ////

undefined4 FUN_00bedde0(void)

{
  short sVar1;
  int extraout_ECX;
  
  FUN_00bed970();
  sVar1 = *(short *)(extraout_ECX + 0x1a8);
  if (((sVar1 != 2) && (sVar1 != 3)) && (sVar1 != 4)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00bede10 @ 00bede10 ////

bool FUN_00bede10(void)

{
  int extraout_ECX;
  
  FUN_00bed970();
  return *(short *)(extraout_ECX + 0x1a8) == 6;
}


//// FUNCTION FUN_00bede30 @ 00bede30 ////

bool FUN_00bede30(void)

{
  int extraout_ECX;
  
  FUN_00bed970();
  return *(short *)(extraout_ECX + 0x1a8) == 5;
}


//// FUNCTION FUN_00bee030 @ 00bee030 ////

void * __thiscall FUN_00bee030(void *this,void *param_1)

{
  char cVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  float *pfVar3;
  float10 fVar4;
  char *pcVar5;
  float fVar6;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01831;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bed970();
  this_00 = Ctor_vt00d9feb8_00be1e50(local_20,"EventId(");
  local_4 = 1;
  LH_PrintResourceID(this_00,*(undefined4 *)((int)this + 0x40));
  LH_LogErrorMessage(this_00,"), Priority=");
  LH_PrintResourceID(this_00,*(undefined4 *)((int)this + 0x98));
  LH_LogErrorMessage(this_00,", State=\'");
  Ctor_vt00d9feb8_00be1eb0(local_28,this_00);
  local_4 = CONCAT31(local_4._1_3_,3);
  PKStringsCHeapString_Dtor(local_20);
  switch(*(undefined2 *)((int)this + 0x1a8)) {
  case 2:
    pcVar5 = "Waiting for data";
    break;
  case 3:
    pcVar5 = "Waiting for physical player";
    break;
  case 4:
    pcVar5 = "Waiting for memory";
    break;
  case 5:
    pcVar5 = "Playing using virtual player";
    break;
  case 6:
    pcVar5 = "Playing using physical player";
    break;
  default:
    goto switchD_00bee0ca_default;
  }
  LH_LogErrorMessage(local_28,pcVar5);
switchD_00bee0ca_default:
  local_18 = 0.0;
  local_14 = 0;
  local_10 = 0;
  FUN_00bedbc0(&local_18);
  LH_LogErrorMessage(local_28,"\', offset(");
  FUN_00bbf2d0(local_28,local_18);
  LH_LogErrorMessage(local_28,"), loops(");
  FUN_00bbe970(local_14);
  LH_LogErrorMessage(local_28,"), paused(");
  FUN_00bbf340(local_28,'\x01' - (((byte)local_10 & 1) != 1));
  LH_LogErrorMessage(local_28,"),");
  cVar1 = FUN_00beddc0();
  if (cVar1 == '\0') {
    LH_LogErrorMessage(local_28,"2D(");
    fVar4 = FUN_00bf3510((uint *)((int)this + 0xac));
    fVar6 = (float)fVar4;
  }
  else {
    LH_LogErrorMessage(local_28,"3D");
    uVar2 = FUN_00bf3070((uint *)((int)this + 0xac));
    if ((char)uVar2 != '\0') {
      LH_LogErrorMessage(local_28,"[HR]");
    }
    pfVar3 = (float *)FUN_00bf3540((uint *)((int)this + 0xac));
    LH_LogErrorMessage(local_28,"(");
    FUN_00bbf2d0(local_28,*pfVar3);
    LH_LogErrorMessage(local_28,",");
    FUN_00bbf2d0(local_28,pfVar3[1]);
    LH_LogErrorMessage(local_28,",");
    fVar6 = pfVar3[2];
  }
  FUN_00bbf2d0(local_28,fVar6);
  LH_LogErrorMessage(local_28,")");
  LH_LogErrorMessage(local_28,", base gain(");
  fVar4 = FUN_00bf3040((int)this + 0xac);
  FUN_00bbf2d0(local_28,(float)fVar4);
  LH_LogErrorMessage(local_28,"), user gain(");
  fVar4 = FUN_00bf3030((int)this + 0xac);
  FUN_00bbf2d0(local_28,(float)fVar4);
  LH_LogErrorMessage(local_28,")");
  Ctor_vt00d9feb8_00be2070(param_1,(int)local_28);
  local_4 = local_4 & 0xffffff00;
  PKStringsCHeapString_Dtor(local_28);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00bee330 @ 00bee330 ////

void __thiscall FUN_00bee330(void *this,undefined4 param_1,float param_2,float param_3)

{
  char cVar1;
  
  cVar1 = FUN_00beddc0();
  if (cVar1 != '\0') {
    FUN_00bedd60(this,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00bee360 @ 00bee360 ////

void __thiscall FUN_00bee360(void *this,undefined4 param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_00beddc0();
  if (cVar1 == '\0') {
    FUN_00bedd90(this,param_2);
  }
  return;
}


//// FUNCTION FUN_00bee380 @ 00bee380 ////

float10 FUN_00bee380(undefined4 param_1,undefined4 *param_2)

{
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  local_c = 0.0;
  FUN_00bedbc0(&local_c);
  *param_2 = local_8;
  return (float10)local_c;
}


//// FUNCTION FUN_00bee3d0 @ 00bee3d0 ////

void __fastcall FUN_00bee3d0(int param_1)

{
  int iStack00000004;
  
  if (*(int **)(param_1 + 0x18c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bee3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iStack00000004 = param_1;
    (**(code **)(**(int **)(param_1 + 0x18c) + 4))();
    return;
  }
  return;
}


//// FUNCTION FUN_00bee3f0 @ 00bee3f0 ////

void __thiscall FUN_00bee3f0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *this_00;
  uint uVar1;
  float10 fVar2;
  void *pvVar3;
  char local_24;
  undefined1 local_23;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bed970();
  *(undefined4 *)((int)this + 0x180) = param_3;
  this_00 = (uint *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0x184) = param_2;
  local_24 = '\0';
  local_23 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_c = 0;
  local_8 = 0;
  uVar1 = FUN_00bf3050(this_00);
  local_24 = (char)uVar1;
  if (local_24 == '\0') {
    FUN_00bf3500(this_00,&local_4);
  }
  else {
    local_23 = GetField_0x10_00bf35c0((int)this_00);
    FUN_00bf35a0(this_00,&local_20);
  }
  FUN_00bf3d10(*(void **)((int)this + 0x184),param_1,*(int *)((int)this + 0x98) << 1);
  fVar2 = FUN_00bf3380((int)this_00);
  pvVar3 = (void *)(float)fVar2;
  fVar2 = FUN_00bf33a0((int)this_00);
  FUN_00bf5750(*(void **)((int)this + 0x180),param_1,&local_24,(int)this,(float *)((int)this + 0x8c)
               ,(float)fVar2,pvVar3);
  *(undefined2 *)((int)this + 0x1a8) = 6;
  return;
}


//// FUNCTION FUN_00bee4d0 @ 00bee4d0 ////

void __fastcall FUN_00bee4d0(int param_1)

{
  uint *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_EDX;
  float10 fVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x188) != 0) {
    piVar3 = (int *)FUN_00bed9a0();
    if (piVar3 != (int *)0x0) {
      if ((extraout_EDX & 2) != 0) {
        iVar1 = *piVar3;
        fVar5 = FUN_00bf3380(param_1 + 0xac);
        (**(code **)(iVar1 + 4))((float)fVar5);
      }
      if ((*(byte *)(param_1 + 0x188) & 1) != 0) {
        puVar2 = (undefined4 *)*piVar3;
        fVar5 = FUN_00bf33a0(param_1 + 0xac);
        (*(code *)*puVar2)((float)fVar5);
      }
      if ((*(byte *)(param_1 + 0x188) & 4) != 0) {
        this = (uint *)(param_1 + 0xac);
        uVar4 = FUN_00bf3050(this);
        if ((char)uVar4 != '\0') {
          iVar1 = *piVar3;
          fVar5 = FUN_00bf3380((int)this);
          (**(code **)(iVar1 + 4))((float)fVar5);
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          FUN_00bf35a0(this,&uStack_10);
          (**(code **)(*piVar3 + 0x20))(&uStack_10);
          *(undefined4 *)(param_1 + 0x188) = 0;
          return;
        }
        FUN_00bf3500(this,&uStack_10);
        (**(code **)(*piVar3 + 0x1c))(uStack_10);
      }
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}


//// FUNCTION Ctor_vt00da1958_00bee5d0 @ 00bee5d0 ////

undefined4 * __fastcall Ctor_vt00da1958_00bee5d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01859;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00da2168_00bf46e0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da1958;
  RedBlackTree_Node_Ctor(param_1 + 0x18);
  local_4._0_1_ = 1;
  RedBlackTree_Node_Ctor(param_1 + 0x1d);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_00bf36e0(param_1 + 0x2b);
  param_1[0x54] = &PTR_LAB_00da1ae4;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  FUN_00bed970();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bee6b0 @ 00bee6b0 ////

void __thiscall FUN_00bee6b0(void *this,int param_1)

{
  FUN_00bed970();
  FUN_00bcfac0((void *)(param_1 + 0xf0),(int *)(param_1 + 0xec),(int)this);
  *(undefined2 *)((int)this + 0x1a8) = 2;
  return;
}


//// FUNCTION FUN_00bee6e0 @ 00bee6e0 ////

void __thiscall FUN_00bee6e0(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00bed970();
  FUN_00bcfac0((void *)(param_1 + 0x108),(int *)(param_1 + 0x104),(int)this);
  iVar1 = *(int *)((int)this + 0xa8);
  fVar2 = FUN_00bf33a0((int)this + 0xac);
  FUN_00c2a4c0((void *)((int)this + 0x150),param_1,iVar1,(float *)((int)this + 0x8c),(float)fVar2);
  *(undefined2 *)((int)this + 0x1a8) = 4;
  return;
}


//// FUNCTION FUN_00bee740 @ 00bee740 ////

void __thiscall FUN_00bee740(void *this,int param_1)

{
  FUN_00bed970();
  FUN_00bcff70((void *)(param_1 + 0x108),(int *)(param_1 + 0x104),(int)this);
  (**(code **)(*(int *)((int)this + 0x150) + 8))((int)this + 0x8c);
  *(undefined2 *)((int)this + 0x1a8) = 1;
  return;
}


//// FUNCTION FUN_00bee780 @ 00bee780 ////

void __thiscall FUN_00bee780(void *this,int param_1)

{
  FUN_00bed970();
  FUN_00bcff70((void *)(param_1 + 0xf0),(int *)(param_1 + 0xec),(int)this);
  *(undefined2 *)((int)this + 0x1a8) = 1;
  return;
}


//// FUNCTION FUN_00bee7b0 @ 00bee7b0 ////

void __thiscall FUN_00bee7b0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00bed970();
  iVar1 = *(int *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0x184) = param_2;
  fVar2 = FUN_00bf33a0((int)this + 0xac);
  FUN_00c2a4c0((void *)((int)this + 0x150),param_1,iVar1,(float *)((int)this + 0x8c),(float)fVar2);
  FUN_00bcfac0((void *)(param_1 + 0xfc),(int *)(param_1 + 0xf8),(int)this);
  FUN_00bf3d10(*(void **)((int)this + 0x184),param_1,*(int *)((int)this + 0x98));
  *(undefined2 *)((int)this + 0x1a8) = 3;
  return;
}


//// FUNCTION FUN_00bee830 @ 00bee830 ////

void * __thiscall FUN_00bee830(void *this,int param_1)

{
  void *this_00;
  
  FUN_00bed970();
  this_00 = *(void **)((int)this + 0x184);
  FUN_00bf3d80(this_00,param_1,*(int *)((int)this + 0x98));
  FUN_00bcff70((void *)(param_1 + 0xfc),(int *)(param_1 + 0xf8),(int)this);
  *(undefined4 *)((int)this + 0x184) = 0;
  (**(code **)(*(int *)((int)this + 0x150) + 8))((int)this + 0x8c);
  *(undefined2 *)((int)this + 0x1a8) = 1;
  return this_00;
}


//// FUNCTION FUN_00bee8a0 @ 00bee8a0 ////

void __thiscall FUN_00bee8a0(void *this,int param_1)

{
  void *pvVar1;
  int extraout_ECX;
  
  FUN_00bed970();
  pvVar1 = FUN_00bedb20(extraout_ECX);
  FUN_00bee7b0(this,param_1,pvVar1);
  return;
}


//// FUNCTION FUN_00bee8d0 @ 00bee8d0 ////

void __thiscall FUN_00bee8d0(void *this,int param_1)

{
  void *this_00;
  
  FUN_00bed970();
  if (*(short *)((int)this + 0x1a8) == 3) {
    FUN_00bee830(this_00,param_1);
    FUN_00bee6e0(this,param_1);
    return;
  }
  if (*(short *)((int)this + 0x1a8) == 6) {
    FUN_00bedb20((int)this);
  }
  FUN_00bee6e0(this,param_1);
  return;
}


//// FUNCTION FUN_00bee920 @ 00bee920 ////

void __thiscall FUN_00bee920(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  void *this_00;
  
  FUN_00bed970();
  pvVar1 = FUN_00bee830(this_00,param_1);
  FUN_00bee3f0(this,param_1,pvVar1,param_2);
  return;
}


//// FUNCTION FUN_00bee950 @ 00bee950 ////

void __thiscall FUN_00bee950(void *this,int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  FUN_00bed970();
  iVar2 = *(int *)((int)this + 0x98);
  if (param_2 != iVar2) {
    sVar1 = *(short *)((int)this + 0x1a8);
    if (sVar1 == 3) {
      FUN_00bf3d80(*(void **)((int)this + 0x184),param_1,iVar2);
      FUN_00bcff70((void *)(param_1 + 0xfc),(int *)(param_1 + 0xf8),(int)this);
    }
    else if (sVar1 == 4) {
      FUN_00bcff70((void *)(param_1 + 0x108),(int *)(param_1 + 0x104),(int)this);
    }
    else if (sVar1 == 6) {
      FUN_00bf3d80(*(void **)((int)this + 0x184),param_1,iVar2 * 2);
    }
    FUN_00bcff70((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),(int)this);
    *(int *)((int)this + 0x98) = param_2;
    FUN_00bcfac0((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),(int)this);
    sVar1 = *(short *)((int)this + 0x1a8);
    if (sVar1 == 3) {
      FUN_00bf3d10(*(void **)((int)this + 0x184),param_1,*(int *)((int)this + 0x98));
      FUN_00bcfac0((void *)(param_1 + 0xfc),(int *)(param_1 + 0xf8),(int)this);
      return;
    }
    if (sVar1 == 4) {
      FUN_00bcfac0((void *)(param_1 + 0x108),(int *)(param_1 + 0x104),(int)this);
      return;
    }
    if (sVar1 == 6) {
      FUN_00bf3d10(*(void **)((int)this + 0x184),param_1,*(int *)((int)this + 0x98) << 1);
    }
  }
  return;
}


//// FUNCTION FUN_00beea70 @ 00beea70 ////

void __thiscall FUN_00beea70(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this_00;
  
  FUN_00bed970();
  FUN_00bee950(this_00,param_1,1);
  piVar1 = (int *)FUN_00bed9a0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(param_2);
    return;
  }
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) | 2;
  return;
}


//// FUNCTION FUN_00beeae0 @ 00beeae0 ////

void __thiscall FUN_00beeae0(void *this,int param_1)

{
  FUN_00bed970();
  switch(*(undefined2 *)((int)this + 0x1a8)) {
  case 2:
    FUN_00bee780(this,param_1);
    FUN_00bed970();
    return;
  case 3:
    FUN_00bee830(this,param_1);
    FUN_00bed970();
    return;
  case 4:
    FUN_00bee740(this,param_1);
    break;
  case 5:
    FUN_00bedb90((int)this);
    FUN_00bed970();
    return;
  case 6:
    FUN_00bedb20((int)this);
    FUN_00bed970();
    return;
  }
  FUN_00bed970();
  return;
}


//// FUNCTION FUN_00beeba0 @ 00beeba0 ////

void __thiscall FUN_00beeba0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x88);
  if (*(int *)((int)this + 0x88) != 0) {
    iVar2 = RedBlackTree_Find((void *)(param_1 + 0x30),(void *)(param_1 + 0x2c),puVar1,puVar1);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        LH_Assert(&param_1,"group->NumSlots > 0\n");
        DebugBreak();
      }
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + -1;
    }
    *puVar1 = 0;
    FUN_00bf33b0((void *)((int)this + 0xac),0x3f800000);
  }
  return;
}


//// FUNCTION FUN_00beec10 @ 00beec10 ////

void __thiscall FUN_00beec10(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  void *this_00;
  
  FUN_00bed970();
  FUN_00beeba0(this_00,param_1);
  iVar2 = FUN_00beda10();
  if (iVar2 == 0) {
    bVar1 = FUN_00bed9f0();
    if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_00beec41;
  }
  FUN_00beeae0(this,param_1);
LAB_00beec41:
  FUN_00bed970();
  if (*(void **)((int)this + 0xa0) != (void *)0x0) {
    FUN_00bf6120(*(void **)((int)this + 0xa0),param_1,(int)this);
  }
  if ((*(byte *)((int)this + 0x54) & 1) != 0) {
    FUN_00bf48c0(this,param_1);
  }
  FUN_00bcff70((void *)(param_1 + 0x114),(int *)(param_1 + 0x110),(int)this);
  FUN_00bf4810(this,param_1);
  (**(code **)(**(int **)((int)this + 0xa8) + 0x1c))();
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0x1a8) = 0;
  FUN_00bf46b0(this,'\0');
  FUN_00bf46d0(this,0xffffffff);
  thunk_FUN_00bf12f0((void *)(param_1 + 0x5c),this);
  return;
}


//// FUNCTION FUN_00beecc0 @ 00beecc0 ////

void __thiscall FUN_00beecc0(void *this,void *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  LPCRITICAL_SECTION local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0186b;
  local_c = ExceptionList;
  local_14 = (LPCRITICAL_SECTION)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bed970();
  bVar2 = FUN_00be86d0(*(int *)((int)this + 0xa8));
  if (bVar2) {
    FUN_00beec10(this,(int)param_1);
LAB_00beed57:
    local_4 = 0xffffffff;
    if (local_14 == (LPCRITICAL_SECTION)0x0) {
      ExceptionList = local_c;
      return;
    }
    Wrap_LeaveCriticalSection_00bceaa0(local_14);
    ExceptionList = local_c;
    return;
  }
  if (((*(byte *)((int)this + 0x94) & 2) != 0) ||
     ((1.0 <= *(float *)((int)this + 0x8c) && (*(int *)((int)this + 0x90) == 0)))) {
    FUN_00beec10(this,(int)param_1);
    goto LAB_00beed57;
  }
  bVar2 = FUN_00be86c0(*(int *)((int)this + 0xa8));
  if (bVar2) {
    FUN_00bee6b0(this,(int)param_1);
    goto LAB_00beed57;
  }
  local_10 = *(undefined4 *)((int)this + 0xa8);
  iVar4 = RedBlackTree_Find((void *)((int)param_1 + 0x164),(void *)((int)param_1 + 0x160),&local_10,
                       &local_10);
  if (iVar4 != 0) {
    iVar5 = FUN_00bc2800(param_1,*(uint *)((int)this + 0x98));
    if (iVar5 == 0) {
      *(int *)((int)param_1 + 0x6c8) = *(int *)((int)param_1 + 0x6c8) + 1;
      FUN_00bee7b0(this,(int)param_1,iVar4);
      bVar2 = local_14 == (LPCRITICAL_SECTION)0x0;
    }
    else {
      FUN_00bee3f0(this,(int)param_1,iVar4,iVar5);
      bVar2 = local_14 == (LPCRITICAL_SECTION)0x0;
    }
    goto LAB_00beef5d;
  }
  iVar4 = *(int *)((int)this + 0x98);
  iVar5 = (**(code **)(**(int **)((int)this + 0xa8) + 0x14))();
  iVar4 = FUN_00bef610((void *)((int)param_1 + 0x5c),param_1,iVar5,iVar4);
  if (iVar4 < 0) {
    *(int *)((int)param_1 + 0x6c8) = *(int *)((int)param_1 + 0x6c8) + 1;
    FUN_00bee6e0(this,(int)param_1);
    bVar2 = local_14 == (LPCRITICAL_SECTION)0x0;
    goto LAB_00beef5d;
  }
  this_00 = (int *)FUN_00bef3d0((uint *)((int)param_1 + 0x134));
  FUN_00bf3a20(this_00,(uint *)((int)param_1 + 0x134));
  piVar1 = *(int **)((int)this + 0xa8);
  FUN_00bf3c30(this_00,(int)param_1,(int)piVar1,iVar4,*(undefined4 *)((int)this + 0x98));
  this_00[0x15] = *(int *)((int)this + 0x1a0);
  cVar3 = (**(code **)(*piVar1 + 4))();
  iVar4 = *piVar1;
  if (cVar3 == '\0') {
    uVar6 = (**(code **)(iVar4 + 0x14))();
    uVar7 = FUN_00bf3950(this_00,(int)param_1);
    cVar3 = (**(code **)(iVar4 + 8))(uVar7,uVar6);
    if (cVar3 == '\0') {
      FUN_00be86f0((int)piVar1);
    }
    uVar6 = FUN_00bf41c0(this_00,(int)param_1,&local_14,cVar3);
    if ((char)uVar6 == '\0') {
      *(int *)((int)param_1 + 0x6cc) = *(int *)((int)param_1 + 0x6cc) + 1;
      goto LAB_00beef12;
    }
    FUN_00be8700((int)piVar1);
    iVar4 = FUN_00bc2800(param_1,*(uint *)((int)this + 0x98));
    if (iVar4 == 0) {
      FUN_00bee7b0(this,(int)param_1,this_00);
    }
    else {
      FUN_00bee3f0(this,(int)param_1,this_00,iVar4);
    }
  }
  else {
    uVar6 = (**(code **)(iVar4 + 0x14))(this_00,(int)param_1 + 0x798);
    uVar7 = FUN_00bf3950(this_00,(int)param_1);
    cVar3 = (**(code **)(iVar4 + 0xc))(uVar7,uVar6);
    if (cVar3 == '\0') {
      FUN_00bf41c0(this_00,(int)param_1,&local_14,'\0');
LAB_00beef12:
      FUN_00bf3c90(this_00,(int)param_1);
      FUN_00bf42a0(this_00);
      FUN_00beec10(this,(int)param_1);
    }
    else {
      FUN_00be86e0((int)piVar1);
      FUN_00bee6b0(this,(int)param_1);
    }
  }
  bVar2 = local_14 == (LPCRITICAL_SECTION)0x0;
LAB_00beef5d:
  local_4 = 0xffffffff;
  if (bVar2) {
    ExceptionList = local_c;
    return;
  }
  Wrap_LeaveCriticalSection_00bceaa0(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00beef90 @ 00beef90 ////

int __thiscall FUN_00beef90(void *this,void *param_1)

{
  FUN_00bee740(this,(int)param_1);
  FUN_00beecc0(this,param_1);
  return (*(short *)((int)this + 0x1a8) == 6) - 1;
}


//// FUNCTION FUN_00beefc0 @ 00beefc0 ////

void __thiscall FUN_00beefc0(void *this,void *param_1)

{
  void *this_00;
  
  FUN_00bed970();
  FUN_00bee780(this_00,(int)param_1);
  FUN_00beecc0(this,param_1);
  return;
}


//// FUNCTION FUN_00beeff0 @ 00beeff0 ////

void __thiscall FUN_00beeff0(void *this,void *param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  int iVar3;
  int extraout_ECX;
  void *this_00;
  
  FUN_00bed970();
  FUN_00bee3d0(extraout_ECX);
  *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | param_2;
  uVar2 = FUN_00bf3760((void *)((int)this + 0xac),(int)param_1,
                       1000.0 / *(float *)(*(int *)((int)param_1 + 0x28) + 0x84));
  if ((char)uVar2 != '\0') {
    *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 2;
  }
  *(uint *)((int)this + 0x188) = *(uint *)((int)this + 0x188) | 2;
  FUN_00bed970();
  uVar2 = FUN_00bedd00();
  if ((char)uVar2 == '\0') {
    if (*(char *)((int)this + 0x1a4) != '\0') {
      FUN_00beec10(this,(int)param_1);
      return;
    }
    iVar3 = FUN_00beda10();
    if (iVar3 != 0) {
      FUN_00beeae0(this,(int)param_1);
      FUN_00bedad0(this,(int)param_1);
    }
  }
  else {
    bVar1 = FUN_00bed9f0();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_00beeae0(this_00,(int)param_1);
      FUN_00beecc0(this,param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00bef0c0 @ 00bef0c0 ////

void __thiscall
FUN_00bef0c0(void *this,void *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            uint param_6,undefined4 param_7,int param_8,char *param_9,undefined4 *param_10,
            uint *param_11,char param_12,char param_13,char param_14,undefined1 param_15,
            undefined4 param_16,undefined4 *param_17,undefined4 param_18,char param_19,
            undefined4 param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23,
            int param_24,undefined1 param_25)

{
  void *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)((int)this + 0x1a4) = param_25;
  FUN_00bed970();
  *(undefined4 *)((int)this + 0x1a0) = param_23;
  *(undefined4 *)((int)this + 0x19c) = param_18;
  *(undefined2 *)((int)this + 0x1a6) = 0;
  if (param_12 != '\0') {
    *(undefined2 *)((int)this + 0x1a6) = 1;
  }
  if (param_13 != '\0') {
    *(byte *)((int)this + 0x1a6) = *(byte *)((int)this + 0x1a6) | 2;
  }
  if (param_14 != '\0') {
    *(byte *)((int)this + 0x1a6) = *(byte *)((int)this + 0x1a6) | 4;
  }
  *(undefined4 *)((int)this + 0x18c) = param_16;
  *(undefined4 *)((int)this + 400) = *param_17;
  *(undefined4 *)((int)this + 0x194) = param_17[1];
  *(undefined4 *)((int)this + 0x198) = param_17[2];
  FUN_00bf46d0(this,param_2);
  *(undefined4 *)((int)this + 0x98) = param_3;
  *(int *)((int)this + 0xa8) = param_4;
  FUN_00be8790(param_4);
  if (param_6 == 0) {
    if (param_5 == 0) {
      param_5 = FUN_00bc7410(*(undefined4 *)((int)this + 0xa8));
    }
    FUN_00becfd0((void *)((int)this + 0x44),param_7,param_5);
  }
  else if (param_6 < 0x8001) {
    uVar2 = (**(code **)(**(int **)((int)this + 0xa8) + 0x18))();
    uVar2 = FUN_00bc2190(uVar2);
    FUN_00bed010((void *)((int)this + 0x44),param_7,uVar2,param_6);
  }
  else {
    FUN_00becff0((void *)((int)this + 0x44),param_7,param_6);
  }
  FUN_00bf46b0(this,param_8 != 0);
  *(undefined1 *)((int)this + 0x9c) = param_15;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x8c) = *param_10;
  *(undefined4 *)((int)this + 0x90) = param_10[1];
  *(undefined4 *)((int)this + 0x94) = param_10[2];
  this_00 = (void *)((int)this + 0xac);
  FUN_00bf30d0(this_00,param_9,param_11);
  if (param_19 != '\0') {
    FUN_00c2a320(&local_c);
    local_8 = param_21;
    local_c = param_20;
    local_4 = param_22;
    FUN_00bf3340(this_00,&local_c);
  }
  *(undefined2 *)((int)this + 0x1a8) = 1;
  FUN_00bf47d0(this,(int)param_1);
  FUN_00bf4860(this,(int)param_1);
  FUN_00bcfac0((void *)((int)param_1 + 0x114),(int *)((int)param_1 + 0x110),(int)this);
  FUN_00bf3760(this_00,(int)param_1,0.0);
  FUN_00bee3d0((int)this);
  piVar1 = (int *)((int)this + 0x88);
  *piVar1 = param_24;
  if ((param_24 != 0) &&
     (piVar1 = (int *)RedBlackTree_Find((void *)((int)param_1 + 0x30),(void *)((int)param_1 + 0x2c),
                                   piVar1,piVar1), piVar1 != (int *)0x0)) {
    piVar1[8] = piVar1[8] + 1;
    FUN_00bc6970(param_1,piVar1);
  }
  uVar2 = FUN_00bedd00();
  if ((char)uVar2 == '\0') {
    if (*(char *)((int)this + 0x1a4) == '\0') {
      FUN_00bedad0(this,(int)param_1);
      return;
    }
    FUN_00beec10(this,(int)param_1);
    return;
  }
  FUN_00beecc0(this,param_1);
  return;
}


//// FUNCTION FUN_00bef3d0 @ 00bef3d0 ////

void __fastcall FUN_00bef3d0(uint *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01891;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 5));
  piVar1 = PKAllocatorsCPooledMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 5));
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    FUN_00bf3990(piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bef490 @ 00bef490 ////

undefined4 * __thiscall ScalarDeletingDtor_00bef490(void *this,byte param_1)

{
  Dtor_00beda40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da1b28_00bef5a0 @ 00bef5a0 ////

void __fastcall SetVtable_00da1b28_00bef5a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1b28;
  return;
}


//// FUNCTION FUN_00bef5e0 @ 00bef5e0 ////

void __fastcall FUN_00bef5e0(int param_1)

{
  FUN_00bf0020(param_1 + 0x24);
  return;
}


//// FUNCTION FUN_00bef5f0 @ 00bef5f0 ////

void __thiscall FUN_00bef5f0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = &PTR_FUN_00da1ce0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


//// FUNCTION FUN_00bef610 @ 00bef610 ////

undefined4 __thiscall FUN_00bef610(void *this,undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bef5f0(local_18,param_1,param_3);
  *(undefined1 **)((int)this + 0x170) = local_18;
  local_4 = 0;
  iVar1 = FUN_00c2ba00((void *)((int)this + 0x138),&param_3,param_2);
  *(int *)((int)this + 0x170) = (int)this + 0x16c;
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0xffffffff;
  }
  ExceptionList = local_c;
  return param_3;
}


//// FUNCTION FUN_00bef750 @ 00bef750 ////

void __fastcall FUN_00bef750(int param_1)

{
  FUN_00bf00d0(param_1 + 0x48);
  return;
}


//// FUNCTION FUN_00bef760 @ 00bef760 ////

int __thiscall FUN_00bef760(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xb8));
  if ((iVar1 == 0) || (param_1 <= *(uint *)(iVar1 + 0x98))) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bef780 @ 00bef780 ////

void __thiscall FUN_00bef780(void *this,int param_1)

{
  FUN_00bcfac0((void *)((int)this + 0xd0),(int *)((int)this + 0xcc),param_1);
  return;
}


//// FUNCTION FUN_00bef7a0 @ 00bef7a0 ////

void __thiscall FUN_00bef7a0(void *this,int param_1)

{
  FUN_00bcff70((void *)((int)this + 0xd0),(int *)((int)this + 0xcc),param_1);
  return;
}


//// FUNCTION FUN_00bef7c0 @ 00bef7c0 ////

void __thiscall FUN_00bef7c0(void *this,int param_1)

{
  FUN_00bcff70((void *)((int)this + 0xc4),(int *)((int)this + 0xc0),param_1);
  return;
}


//// FUNCTION FUN_00bef7e0 @ 00bef7e0 ////

int __thiscall FUN_00bef7e0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xc4));
  if ((iVar1 == 0) || ((param_1 != 0xffffffff && (param_1 <= *(uint *)(iVar1 + 0xc))))) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bef810 @ 00bef810 ////

void __thiscall FUN_00bef810(void *this,undefined4 param_1)

{
  RedBlackTree_FindFirst((void *)((int)this + 0x94),(void *)((int)this + 0x90),&param_1);
  return;
}


//// FUNCTION FUN_00bef830 @ 00bef830 ////

undefined4 __fastcall FUN_00bef830(int param_1)

{
  bool bVar1;
  int *this;
  
  this = (int *)RedBlackTree_GetMinObject((undefined4 *)(*(int *)(param_1 + 4) + 0x170));
  if (this == (int *)0x0) {
    this = (int *)RedBlackTree_GetMinObject((undefined4 *)(*(int *)(param_1 + 4) + 0x17c));
    if (this != (int *)0x0) {
      bVar1 = FUN_00bf3970(this,*(uint *)(param_1 + 8));
      if (!bVar1) goto LAB_00bef86f;
    }
    return 0;
  }
LAB_00bef86f:
  FUN_00bc4660(*(void **)(param_1 + 4),(int)this);
  FUN_00bf3c90(this,*(int *)(param_1 + 4));
  FUN_00bf42a0(this);
  return 1;
}


//// FUNCTION FUN_00bef8a0 @ 00bef8a0 ////

void __thiscall FUN_00bef8a0(void *this,int param_1,int param_2)

{
  void *this_00;
  void *pvVar1;
  int iVar2;
  
  this_00 = (void *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0xb8));
  if (this_00 != (void *)0x0) {
    do {
      pvVar1 = (void *)RedBlackTree_GetSuccessor((void *)((int)this + 0xb8),(int *)((int)this + 0xb4),
                                    (int)this_00);
      if ((*(int **)((int)this_00 + 0xa8) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)((int)this_00 + 0xa8) + 0x18))(), iVar2 == param_2)) {
        FUN_00beec10(this_00,param_1);
      }
      this_00 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bef900 @ 00bef900 ////

void __thiscall FUN_00bef900(void *this,int param_1,int param_2)

{
  int *this_00;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  this_00 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x108));
  if (this_00 != (int *)0x0) {
    do {
      piVar1 = (int *)RedBlackTree_GetSuccessor((void *)((int)this + 0x108),(int *)((int)this + 0x104),
                                   (int)this_00);
      piVar2 = (int *)GetField_0x68_00bf3a90((int)this_00);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x18))(), iVar3 == param_2)) {
        FUN_00bf3c90(this_00,param_1);
        FUN_00bf42a0(this_00);
      }
      this_00 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bef970 @ 00bef970 ////

void __thiscall FUN_00bef970(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 300));
  if (iVar1 != 0) {
    do {
      iVar2 = RedBlackTree_GetSuccessor((void *)((int)this + 300),(int *)((int)this + 0x128),iVar1);
      piVar3 = (int *)GetField_0x68_00bf3a90(iVar1);
      if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0x18))(), iVar4 == param_1)) {
        FUN_00bf3890(iVar1);
      }
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


//// FUNCTION FUN_00bef9d0 @ 00bef9d0 ////

void __fastcall FUN_00bef9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d01b0e;
  local_c = ExceptionList;
  local_4 = 0x10;
  ExceptionList = &local_c;
  FUN_00c2b5b0(param_1 + 0x4e);
  local_4._0_1_ = 0xf;
  param_1[0x4a] = &PTR_LAB_00da1ea0;
  RedBlackTree_Dtor(param_1 + 0x4b);
  local_4._0_1_ = 0xe;
  param_1[0x47] = &PTR_LAB_00da1e78;
  RedBlackTree_Dtor(param_1 + 0x48);
  local_4._0_1_ = 0xd;
  param_1[0x44] = &PTR_LAB_00da1e50;
  RedBlackTree_Dtor(param_1 + 0x45);
  local_4._0_1_ = 0xc;
  param_1[0x41] = &PTR_LAB_00da1e28;
  RedBlackTree_Dtor(param_1 + 0x42);
  local_4._0_1_ = 0x11;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x3b));
  local_4._0_1_ = 0xb;
  PKAllocatorsCPooledMemory_FreeBlocks((int)(param_1 + 0x36));
  local_4._0_1_ = 10;
  param_1[0x33] = &PTR_LAB_00da1e00;
  RedBlackTree_Dtor(param_1 + 0x34);
  local_4._0_1_ = 9;
  param_1[0x30] = &PTR_LAB_00da1dd8;
  RedBlackTree_Dtor(param_1 + 0x31);
  local_4._0_1_ = 8;
  param_1[0x2d] = &PTR_LAB_00da1db0;
  RedBlackTree_Dtor(param_1 + 0x2e);
  local_4._0_1_ = 7;
  param_1[0x2a] = &PTR_LAB_00da1d88;
  RedBlackTree_Dtor(param_1 + 0x2b);
  local_4._0_1_ = 6;
  param_1[0x27] = &PTR_LAB_00da1d88;
  RedBlackTree_Dtor(param_1 + 0x28);
  local_4._0_1_ = 5;
  param_1[0x24] = &PTR_LAB_00da1d60;
  RedBlackTree_Dtor(param_1 + 0x25);
  local_4._0_1_ = 4;
  param_1[0x21] = &PTR_LAB_00da1d38;
  RedBlackTree_Dtor(param_1 + 0x22);
  local_4._0_1_ = 3;
  param_1[0x1e] = &PTR_LAB_00da1d10;
  RedBlackTree_Dtor(param_1 + 0x1f);
  local_4._0_1_ = 2;
  param_1[0x1b] = &PTR_LAB_00da1ce8;
  RedBlackTree_Dtor(param_1 + 0x1c);
  local_4._0_1_ = 0x12;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x15));
  local_4._0_1_ = 1;
  FUN_00c2a820(param_1 + 0x12);
  local_4._0_1_ = 0x13;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0xc));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c2a820(param_1 + 9);
  local_4 = 0x14;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 3));
  local_4 = 0xffffffff;
  FUN_00c2a820(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00befbf0 @ 00befbf0 ////

void __fastcall FUN_00befbf0(int param_1)

{
  RedBlackTree_Find((void *)(param_1 + 0x70),(void *)(param_1 + 0x6c),&stack0x00000004,&stack0x00000004);
  return;
}


//// FUNCTION FUN_00befc10 @ 00befc10 ////

void __thiscall FUN_00befc10(void *this,undefined4 *param_1)

{
  FUN_00bf1400((void *)((int)this + 0x24),param_1);
  return;
}


//// FUNCTION FUN_00befc20 @ 00befc20 ////

void __thiscall FUN_00befc20(void *this,int *param_1)

{
  FUN_00bf1510((void *)((int)this + 0x48),param_1);
  return;
}


//// FUNCTION FUN_00befc30 @ 00befc30 ////

void * __thiscall FUN_00befc30(void *this,int param_1,int param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01c12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00beff20(this,param_1);
  local_4 = 0;
  PKAllocatorsCPresizedMemory_Ctor((void *)((int)this + 0x24),0x30,param_2);
  local_4._0_1_ = 1;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0x30));
  local_4._0_1_ = 2;
  PKAllocatorsCPresizedMemory_Ctor((void *)((int)this + 0x48),100,param_1);
  local_4._0_1_ = 3;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0x54));
  local_4._0_1_ = 4;
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_00da1ce8;
  RedBlackTree_Ctor((int *)((int)this + 0x70));
  *(undefined ***)((int)this + 0x6c) = &PTR_LAB_00da1f00;
  local_4._0_1_ = 5;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00da1d10;
  RedBlackTree_Ctor((int *)((int)this + 0x7c));
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00da1f28;
  local_4._0_1_ = 6;
  *(undefined ***)((int)this + 0x84) = &PTR_LAB_00da1d38;
  RedBlackTree_Ctor((int *)((int)this + 0x88));
  *(undefined ***)((int)this + 0x84) = &PTR_LAB_00da1f50;
  local_4._0_1_ = 7;
  *(undefined ***)((int)this + 0x90) = &PTR_LAB_00da1d60;
  RedBlackTree_Ctor((int *)((int)this + 0x94));
  *(undefined ***)((int)this + 0x90) = &PTR_LAB_00da1f78;
  local_4._0_1_ = 8;
  *(undefined ***)((int)this + 0x9c) = &PTR_LAB_00da1d88;
  RedBlackTree_Ctor((int *)((int)this + 0xa0));
  *(undefined ***)((int)this + 0x9c) = &PTR_LAB_00da1fa0;
  local_4._0_1_ = 9;
  *(undefined ***)((int)this + 0xa8) = &PTR_LAB_00da1d88;
  RedBlackTree_Ctor((int *)((int)this + 0xac));
  *(undefined ***)((int)this + 0xa8) = &PTR_LAB_00da1fa0;
  local_4._0_1_ = 10;
  *(undefined ***)((int)this + 0xb4) = &PTR_LAB_00da1db0;
  RedBlackTree_Ctor((int *)((int)this + 0xb8));
  *(undefined ***)((int)this + 0xb4) = &PTR_LAB_00da1fc8;
  local_4._0_1_ = 0xb;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_00da1dd8;
  RedBlackTree_Ctor((int *)((int)this + 0xc4));
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_00da1ff0;
  local_4._0_1_ = 0xc;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_00da1e00;
  RedBlackTree_Ctor((int *)((int)this + 0xd0));
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_00da2018;
  local_4._0_1_ = 0xd;
  FUN_00bf0230((void *)((int)this + 0xd8));
  local_4._0_1_ = 0xe;
  *(undefined ***)((int)this + 0x104) = &PTR_LAB_00da1e28;
  RedBlackTree_Ctor((int *)((int)this + 0x108));
  *(undefined ***)((int)this + 0x104) = &PTR_LAB_00da2040;
  local_4._0_1_ = 0xf;
  *(undefined ***)((int)this + 0x110) = &PTR_LAB_00da1e50;
  RedBlackTree_Ctor((int *)((int)this + 0x114));
  *(undefined ***)((int)this + 0x110) = &PTR_LAB_00da2068;
  local_4._0_1_ = 0x10;
  *(undefined ***)((int)this + 0x11c) = &PTR_LAB_00da1e78;
  RedBlackTree_Ctor((int *)((int)this + 0x120));
  *(undefined ***)((int)this + 0x11c) = &PTR_LAB_00da2090;
  local_4._0_1_ = 0x11;
  *(undefined ***)((int)this + 0x128) = &PTR_LAB_00da1ea0;
  RedBlackTree_Ctor((int *)((int)this + 300));
  *(undefined ***)((int)this + 0x128) = &PTR_LAB_00da20b8;
  local_4._0_1_ = 0x12;
  *(undefined4 *)((int)this + 0x134) = 0;
  Ctor_vt00da6664_00c2b640((undefined4 *)((int)this + 0x138));
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_00c2b010((undefined4 *)((int)this + 0x138),param_3,0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION SetVtable_00da1b28_00beff10 @ 00beff10 ////

void __fastcall SetVtable_00da1b28_00beff10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1b28;
  return;
}


//// FUNCTION FUN_00beff20 @ 00beff20 ////

void * __thiscall FUN_00beff20(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d018a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PKAllocatorsCPresizedMemory_Ctor(this,0x1ac,param_1);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00beff70 @ 00beff70 ////

void __fastcall FUN_00beff70(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d018d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 0xc));
  piVar1 = PKAllocatorsCPresizedMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 0xc));
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    Ctor_vt00da1958_00bee5d0(piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00beffd0 @ 00beffd0 ////

void * __thiscall FUN_00beffd0(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d018e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PKAllocatorsCPresizedMemory_Ctor(this,0x30,param_1);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bf0020 @ 00bf0020 ////

void __fastcall FUN_00bf0020(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01911;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 0xc));
  piVar1 = PKAllocatorsCPresizedMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 0xc));
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    Ctor_vt00da2308_00bf5730(piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf0080 @ 00bf0080 ////

void * __thiscall FUN_00bf0080(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PKAllocatorsCPresizedMemory_Ctor(this,100,param_1);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bf00d0 @ 00bf00d0 ////

void __fastcall FUN_00bf00d0(int param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01951;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 0xc));
  piVar1 = PKAllocatorsCPresizedMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 0xc));
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    Ctor_vt00da2330_00bf60d0(piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf0130 @ 00bf0130 ////

int * __fastcall FUN_00bf0130(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf0150 @ 00bf0150 ////

int * __fastcall FUN_00bf0150(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf0170 @ 00bf0170 ////

int * __fastcall FUN_00bf0170(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf0190 @ 00bf0190 ////

int * __fastcall FUN_00bf0190(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf01b0 @ 00bf01b0 ////

int * __fastcall FUN_00bf01b0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf01d0 @ 00bf01d0 ////

int * __fastcall FUN_00bf01d0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf01f0 @ 00bf01f0 ////

int * __fastcall FUN_00bf01f0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf0210 @ 00bf0210 ////

int * __fastcall FUN_00bf0210(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf0230 @ 00bf0230 ////

void * __fastcall FUN_00bf0230(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0dc40(param_1,0x84,0x400);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)param_1 + 0x14));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bf0280 @ 00bf0280 ////

int * __fastcall FUN_00bf0280(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf02a0 @ 00bf02a0 ////

int * __fastcall FUN_00bf02a0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf02c0 @ 00bf02c0 ////

int * __fastcall FUN_00bf02c0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bf02e0 @ 00bf02e0 ////

int * __fastcall FUN_00bf02e0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bf0300 @ 00bf0300 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf0300(void *this,byte param_1)

{
  Dtor_00bf50a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf03d0 @ 00bf03d0 ////

void __fastcall FUN_00bf03d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d01988;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 3));
  local_4 = 0xffffffff;
  FUN_00c2a820(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf0420 @ 00bf0420 ////

void __fastcall FUN_00bf0420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d019a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 3));
  local_4 = 0xffffffff;
  FUN_00c2a820(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf0470 @ 00bf0470 ////

void __fastcall FUN_00bf0470(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d019c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 3));
  local_4 = 0xffffffff;
  FUN_00c2a820(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf04c0 @ 00bf04c0 ////

void __fastcall FUN_00bf04c0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d019e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x14));
  local_4 = 0xffffffff;
  PKAllocatorsCPooledMemory_FreeBlocks(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bf0990 @ 00bf0990 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf0990(void *this,byte param_1)

{
  SetVtable_00da1b28_00beff10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bf09b0 @ 00bf09b0 ////

void __fastcall Dtor_00bf09b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ce8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0a20 @ 00bf0a20 ////

void __fastcall Dtor_00bf0a20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d10;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0a90 @ 00bf0a90 ////

void __fastcall Dtor_00bf0a90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d38;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0b00 @ 00bf0b00 ////

void __fastcall Dtor_00bf0b00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d60;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0b70 @ 00bf0b70 ////

void __fastcall Dtor_00bf0b70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d88;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0be0 @ 00bf0be0 ////

void __fastcall Dtor_00bf0be0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1db0;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0c70 @ 00bf0c70 ////

void __fastcall Dtor_00bf0c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1dd8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0d20 @ 00bf0d20 ////

void __fastcall Dtor_00bf0d20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e00;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0dc0 @ 00bf0dc0 ////

void __fastcall Dtor_00bf0dc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e28;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0e40 @ 00bf0e40 ////

void __fastcall Dtor_00bf0e40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e50;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0ec0 @ 00bf0ec0 ////

void __fastcall Dtor_00bf0ec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e78;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf0f60 @ 00bf0f60 ////

void __fastcall Dtor_00bf0f60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ea0;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00da1ce8_00bf0ff0 @ 00bf0ff0 ////

undefined4 * __fastcall Ctor_vt00da1ce8_00bf0ff0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ce8;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1d10_00bf1010 @ 00bf1010 ////

undefined4 * __fastcall Ctor_vt00da1d10_00bf1010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d10;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1d38_00bf1030 @ 00bf1030 ////

undefined4 * __fastcall Ctor_vt00da1d38_00bf1030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d38;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1d60_00bf1050 @ 00bf1050 ////

undefined4 * __fastcall Ctor_vt00da1d60_00bf1050(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d60;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1d88_00bf1070 @ 00bf1070 ////

undefined4 * __fastcall Ctor_vt00da1d88_00bf1070(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d88;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1db0_00bf1090 @ 00bf1090 ////

undefined4 * __fastcall Ctor_vt00da1db0_00bf1090(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1db0;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1dd8_00bf10b0 @ 00bf10b0 ////

undefined4 * __fastcall Ctor_vt00da1dd8_00bf10b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1dd8;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1e00_00bf10d0 @ 00bf10d0 ////

undefined4 * __fastcall Ctor_vt00da1e00_00bf10d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e00;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1e28_00bf10f0 @ 00bf10f0 ////

undefined4 * __fastcall Ctor_vt00da1e28_00bf10f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e28;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1e50_00bf1110 @ 00bf1110 ////

undefined4 * __fastcall Ctor_vt00da1e50_00bf1110(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e50;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1e78_00bf1130 @ 00bf1130 ////

undefined4 * __fastcall Ctor_vt00da1e78_00bf1130(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e78;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00da1ea0_00bf1150 @ 00bf1150 ////

undefined4 * __fastcall Ctor_vt00da1ea0_00bf1150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ea0;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bf1170 @ 00bf1170 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1170(void *this,byte param_1)

{
  Dtor_00bf09b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1190 @ 00bf1190 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1190(void *this,byte param_1)

{
  Dtor_00bf0a20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf11b0 @ 00bf11b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf11b0(void *this,byte param_1)

{
  Dtor_00bf0a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf11d0 @ 00bf11d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf11d0(void *this,byte param_1)

{
  Dtor_00bf0b00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf11f0 @ 00bf11f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf11f0(void *this,byte param_1)

{
  Dtor_00bf0b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1210 @ 00bf1210 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1210(void *this,byte param_1)

{
  Dtor_00bf0be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1230 @ 00bf1230 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1230(void *this,byte param_1)

{
  Dtor_00bf0c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1250 @ 00bf1250 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1250(void *this,byte param_1)

{
  Dtor_00bf0d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1270 @ 00bf1270 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1270(void *this,byte param_1)

{
  Dtor_00bf0dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1290 @ 00bf1290 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1290(void *this,byte param_1)

{
  Dtor_00bf0e40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf12b0 @ 00bf12b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf12b0(void *this,byte param_1)

{
  Dtor_00bf0ec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf12d0 @ 00bf12d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf12d0(void *this,byte param_1)

{
  Dtor_00bf0f60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf12f0 @ 00bf12f0 ////

void __thiscall FUN_00bf12f0(void *this,int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00d01c2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
    local_4 = param_1;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsRunTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = (int *)0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  (**(code **)(*param_1 + 0x10))(0);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0xc));
  PKAllocatorsCPresizedMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bf1400 @ 00bf1400 ////

void __thiscall FUN_00bf1400(void *this,undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01c4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsRunTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  Dtor_00bf50a0(param_1);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0xc));
  PKAllocatorsCPresizedMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bf1510 @ 00bf1510 ////

void __thiscall FUN_00bf1510(void *this,int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00d01c6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
    local_4 = param_1;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsRunTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = (int *)0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  (**(code **)(*param_1 + 0x10))(0);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0xc));
  PKAllocatorsCPresizedMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0xc));
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION Dtor_00bf1620 @ 00bf1620 ////

void __fastcall Dtor_00bf1620(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ce8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf1650 @ 00bf1650 ////

void __fastcall Dtor_00bf1650(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d10;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf1660 @ 00bf1660 ////

void __fastcall Dtor_00bf1660(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d38;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf1670 @ 00bf1670 ////

void __fastcall Dtor_00bf1670(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d60;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf1680 @ 00bf1680 ////

void __fastcall Dtor_00bf1680(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d88;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf1690 @ 00bf1690 ////

void __fastcall Dtor_00bf1690(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1db0;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16a0 @ 00bf16a0 ////

void __fastcall Dtor_00bf16a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1dd8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16b0 @ 00bf16b0 ////

void __fastcall Dtor_00bf16b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e00;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16c0 @ 00bf16c0 ////

void __fastcall Dtor_00bf16c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e28;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16d0 @ 00bf16d0 ////

void __fastcall Dtor_00bf16d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e50;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16e0 @ 00bf16e0 ////

void __fastcall Dtor_00bf16e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e78;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bf16f0 @ 00bf16f0 ////

void __fastcall Dtor_00bf16f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ea0;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00da1f00_00bf1700 @ 00bf1700 ////

undefined4 * __fastcall Ctor_vt00da1f00_00bf1700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ce8;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1f00;
  return param_1;
}


//// FUNCTION Ctor_vt00da1f28_00bf1720 @ 00bf1720 ////

undefined4 * __fastcall Ctor_vt00da1f28_00bf1720(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d10;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1f28;
  return param_1;
}


//// FUNCTION Ctor_vt00da1f50_00bf1740 @ 00bf1740 ////

undefined4 * __fastcall Ctor_vt00da1f50_00bf1740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d38;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1f50;
  return param_1;
}


//// FUNCTION Ctor_vt00da1f78_00bf1760 @ 00bf1760 ////

undefined4 * __fastcall Ctor_vt00da1f78_00bf1760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d60;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1f78;
  return param_1;
}


//// FUNCTION Ctor_vt00da1fa0_00bf1780 @ 00bf1780 ////

undefined4 * __fastcall Ctor_vt00da1fa0_00bf1780(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1d88;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1fa0;
  return param_1;
}


//// FUNCTION Ctor_vt00da1fc8_00bf17a0 @ 00bf17a0 ////

undefined4 * __fastcall Ctor_vt00da1fc8_00bf17a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1db0;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1fc8;
  return param_1;
}


//// FUNCTION Ctor_vt00da1ff0_00bf17c0 @ 00bf17c0 ////

undefined4 * __fastcall Ctor_vt00da1ff0_00bf17c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1dd8;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da1ff0;
  return param_1;
}


//// FUNCTION Ctor_vt00da2018_00bf17e0 @ 00bf17e0 ////

undefined4 * __fastcall Ctor_vt00da2018_00bf17e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e00;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da2018;
  return param_1;
}


//// FUNCTION Ctor_vt00da2040_00bf1800 @ 00bf1800 ////

undefined4 * __fastcall Ctor_vt00da2040_00bf1800(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e28;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da2040;
  return param_1;
}


//// FUNCTION Ctor_vt00da2068_00bf1820 @ 00bf1820 ////

undefined4 * __fastcall Ctor_vt00da2068_00bf1820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e50;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da2068;
  return param_1;
}


//// FUNCTION Ctor_vt00da2090_00bf1840 @ 00bf1840 ////

undefined4 * __fastcall Ctor_vt00da2090_00bf1840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1e78;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da2090;
  return param_1;
}


//// FUNCTION Ctor_vt00da20b8_00bf1860 @ 00bf1860 ////

undefined4 * __fastcall Ctor_vt00da20b8_00bf1860(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da1ea0;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00da20b8;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bf1880 @ 00bf1880 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1880(void *this,byte param_1)

{
  Dtor_00bf1620(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf18a0 @ 00bf18a0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf18a0(void *this,byte param_1)

{
  Dtor_00bf1650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf18c0 @ 00bf18c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf18c0(void *this,byte param_1)

{
  Dtor_00bf1660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf18e0 @ 00bf18e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf18e0(void *this,byte param_1)

{
  Dtor_00bf1670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1900 @ 00bf1900 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1900(void *this,byte param_1)

{
  Dtor_00bf1680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1920 @ 00bf1920 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1920(void *this,byte param_1)

{
  Dtor_00bf1690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1940 @ 00bf1940 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1940(void *this,byte param_1)

{
  Dtor_00bf16a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1960 @ 00bf1960 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1960(void *this,byte param_1)

{
  Dtor_00bf16b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1980 @ 00bf1980 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf1980(void *this,byte param_1)

{
  Dtor_00bf16c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf19a0 @ 00bf19a0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf19a0(void *this,byte param_1)

{
  Dtor_00bf16d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf19c0 @ 00bf19c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf19c0(void *this,byte param_1)

{
  Dtor_00bf16e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf19e0 @ 00bf19e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bf19e0(void *this,byte param_1)

{
  Dtor_00bf16f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf1a20 @ 00bf1a20 ////

float10 __thiscall FUN_00bf1a20(float *param_1,float *param_2)

{
  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] + (float10)param_2[2] * (float10)param_1[2];
}


//// FUNCTION FUN_00bf1a40 @ 00bf1a40 ////

void __thiscall FUN_00bf1a40(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)this;
  fVar2 = param_2[1];
  fVar3 = *(float *)((int)this + 4);
  fVar4 = *param_2;
  fVar5 = *(float *)((int)this + 8);
  fVar6 = *param_2;
  fVar7 = *(float *)this;
  fVar8 = param_2[2];
  *param_1 = *(float *)((int)this + 4) * param_2[2] - *(float *)((int)this + 8) * param_2[1];
  param_1[1] = fVar5 * fVar6 - fVar7 * fVar8;
  param_1[2] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}


//// FUNCTION FUN_00bf1ab0 @ 00bf1ab0 ////

void __thiscall FUN_00bf1ab0(void *this,float param_1)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  return;
}


//// FUNCTION FUN_00bf1b00 @ 00bf1b00 ////

float10 __fastcall FUN_00bf1b00(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (((fVar1 == 0.0) && (fVar2 == 0.0)) && (fVar3 == 0.0)) {
    return (float10)0.0;
  }
  fVar4 = SQRT((float10)fVar1 * (float10)fVar1 +
               (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
  fVar5 = (float10)1.0 / fVar4;
  *param_1 = (float)((float10)fVar1 * fVar5);
  param_1[1] = (float)((float10)fVar2 * fVar5);
  param_1[2] = (float)(fVar5 * (float10)fVar3);
  return fVar4;
}


//// FUNCTION FUN_00bf1ba0 @ 00bf1ba0 ////

undefined4 __fastcall FUN_00bf1ba0(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bf1c20 @ 00bf1c20 ////

float10 __fastcall FUN_00bf1c20(float *param_1)

{
  return SQRT((float10)param_1[2] * (float10)param_1[2] +
              (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
}


//// FUNCTION FUN_00bf1c90 @ 00bf1c90 ////

void __fastcall FUN_00bf1c90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar1 - fVar2;
  return;
}


//// FUNCTION FUN_00bf1cc0 @ 00bf1cc0 ////

void __fastcall FUN_00bf1cc0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar1 + fVar2;
  return;
}


//// FUNCTION FUN_00bf1d50 @ 00bf1d50 ////

void __fastcall FUN_00bf1d50(int param_1)

{
  GetField_8_00bed0e0(*(int *)(param_1 + 0x14));
  return;
}


//// FUNCTION FUN_00bf1d70 @ 00bf1d70 ////

void __fastcall FUN_00bf1d70(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


//// FUNCTION FUN_00bf1dc0 @ 00bf1dc0 ////

void __fastcall FUN_00bf1dc0(int param_1)

{
  void *_Memory;
  
  FUN_00bf1d70(param_1);
  _Memory = *(void **)(param_1 + 0x14);
  if (_Memory != (void *)0x0) {
    Dtor_00bed120(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00bf1df0 @ 00bf1df0 ////

void __thiscall FUN_00bf1df0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined ***)this = &PTR_LAB_00da20e0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return;
}


//// FUNCTION PKCTimerManager_Ctor @ 00bf1e30 ////

void * __thiscall
PKCTimerManager_Ctor(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,SIZE_T *param_4)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  undefined1 local_115;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d01c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bf1df0(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = 0;
  local_114 = operator_new(0xc);
  local_4 = 0;
  if (local_114 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = PKCThreadManager_StartThread(local_114,this,param_4);
  }
  *(undefined4 **)((int)this + 0x14) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKCTimerManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(10);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar2);
    DebugBreak();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bf1f60 @ 00bf1f60 ////

void * __thiscall ScalarDeletingDtor_00bf1f60(void *this,byte param_1)

{
  Dtor_00bed120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bf1fd0 @ 00bf1fd0 ////

void FUN_00bf1fd0(void)

{
  return;
}


//// FUNCTION FUN_00bf1fe0 @ 00bf1fe0 ////

void __thiscall
FUN_00bf1fe0(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(float *)((int)this + 0x60) = param_1 * 0.5;
  *(float *)((int)this + 100) = param_1 * 0.5 + param_2;
  return;
}


//// FUNCTION FUN_00bf2010 @ 00bf2010 ////

void __thiscall
FUN_00bf2010(void *this,float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = *(float *)((int)this + 0x60) + *(float *)((int)this + 0x60);
  *param_2 = *(float *)((int)this + 100) - *(float *)((int)this + 0x60);
  *param_3 = *(undefined4 *)((int)this + 0x68);
  *param_4 = *(undefined4 *)((int)this + 0x6c);
  return;
}


//// FUNCTION FUN_00bf2040 @ 00bf2040 ////

void __thiscall
FUN_00bf2040(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(undefined4 *)((int)this + 0x7c) = param_4;
  *(float *)((int)this + 0x70) = param_1 * 0.5;
  *(float *)((int)this + 0x74) = param_1 * 0.5 + param_2;
  return;
}


//// FUNCTION FUN_00bf2070 @ 00bf2070 ////

void __thiscall
FUN_00bf2070(void *this,float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_1 = *(float *)((int)this + 0x70) + *(float *)((int)this + 0x70);
  *param_2 = *(float *)((int)this + 0x74) - *(float *)((int)this + 0x70);
  *param_3 = *(undefined4 *)((int)this + 0x78);
  *param_4 = *(undefined4 *)((int)this + 0x7c);
  return;
}


//// FUNCTION FUN_00bf20a0 @ 00bf20a0 ////

undefined4 __fastcall FUN_00bf20a0(int param_1)

{
  if ((((*(int *)(param_1 + 0x68) == 0x3f800000) && (*(int *)(param_1 + 0x6c) == 0x3f800000)) &&
      (*(int *)(param_1 + 0x78) == 0x3f800000)) && (*(int *)(param_1 + 0x7c) == 0x3f800000)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bf20d0 @ 00bf20d0 ////

void __thiscall FUN_00bf20d0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float local_c [3];
  
  fVar9 = FUN_00bf1c20(param_2);
  if ((float10)0.0 == fVar9) {
    fVar8 = *(float *)((int)this + 0x68);
    param_1[1] = *(float *)((int)this + 0x78);
    *param_1 = fVar8;
    return;
  }
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 1.0;
  FUN_00bf1a20(param_2,local_c);
  FUN_00bf1c20(param_2);
  FUN_00bf1c20(local_c);
  fVar9 = (float10)FUN_00ad1010();
  fVar8 = (float)fVar9;
  if (fVar9 < (float10)*(float *)((int)this + 0x60) ==
      (fVar9 == (float10)*(float *)((int)this + 0x60))) {
    if (fVar8 < *(float *)((int)this + 100)) {
      fVar1 = (*(float *)((int)this + 0x6c) - *(float *)((int)this + 0x68)) *
              ((fVar8 - *(float *)((int)this + 0x60)) /
              (*(float *)((int)this + 100) - *(float *)((int)this + 0x60))) +
              *(float *)((int)this + 0x68);
    }
    else {
      fVar1 = *(float *)((int)this + 0x6c);
    }
  }
  else {
    fVar1 = *(float *)((int)this + 0x68);
  }
  if (fVar8 < *(float *)((int)this + 0x70) != (fVar8 == *(float *)((int)this + 0x70))) {
    fVar8 = *(float *)((int)this + 0x78);
    *param_1 = fVar1;
    param_1[1] = fVar8;
    return;
  }
  if (*(float *)((int)this + 0x74) <= fVar8) {
    fVar8 = *(float *)((int)this + 0x7c);
    *param_1 = fVar1;
    param_1[1] = fVar8;
    return;
  }
  fVar2 = *(float *)((int)this + 0x70);
  fVar3 = *(float *)((int)this + 0x74);
  fVar4 = *(float *)((int)this + 0x70);
  fVar5 = *(float *)((int)this + 0x7c);
  fVar6 = *(float *)((int)this + 0x78);
  fVar7 = *(float *)((int)this + 0x78);
  *param_1 = fVar1;
  param_1[1] = (fVar5 - fVar6) * ((fVar8 - fVar2) / (fVar3 - fVar4)) + fVar7;
  return;
}


//// FUNCTION FUN_00bf2210 @ 00bf2210 ////

void __thiscall FUN_00bf2210(void *this,float *param_1,float *param_2)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00bf20d0(this,&local_18,param_2);
  local_8 = param_2[2];
  local_10 = *param_2;
  local_c = param_2[1];
  local_4 = local_14;
  if ((0.0 < local_18) && (local_18 < 1.0)) {
    FUN_00bf1ab0(&local_10,1.0 / local_18);
  }
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_00bf22a0 @ 00bf22a0 ////

void __thiscall FUN_00bf22a0(void *this,float *param_1,float *param_2)

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
  
  fVar1 = *(float *)((int)this + 0x10);
  fVar2 = param_2[1];
  fVar3 = *(float *)((int)this + 4);
  fVar4 = *param_2;
  fVar5 = *(float *)((int)this + 0x1c);
  fVar6 = param_2[2];
  fVar7 = *(float *)((int)this + 0x28);
  fVar8 = *(float *)((int)this + 0x14);
  fVar9 = param_2[1];
  fVar10 = *(float *)((int)this + 8);
  fVar11 = *param_2;
  fVar12 = *(float *)((int)this + 0x20);
  fVar13 = param_2[2];
  fVar14 = *(float *)((int)this + 0x2c);
  *param_1 = *param_2 * *(float *)this +
             *(float *)((int)this + 0x18) * param_2[2] + *(float *)((int)this + 0xc) * param_2[1] +
             *(float *)((int)this + 0x24);
  param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  param_1[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return;
}


//// FUNCTION FUN_00bf2320 @ 00bf2320 ////

void __thiscall FUN_00bf2320(void *this,float *param_1,float *param_2)

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
  
  fVar1 = *(float *)((int)this + 0x40);
  fVar2 = param_2[1];
  fVar3 = *(float *)((int)this + 0x34);
  fVar4 = *param_2;
  fVar5 = *(float *)((int)this + 0x4c);
  fVar6 = param_2[2];
  fVar7 = *(float *)((int)this + 0x58);
  fVar8 = *(float *)((int)this + 0x44);
  fVar9 = param_2[1];
  fVar10 = *(float *)((int)this + 0x38);
  fVar11 = *param_2;
  fVar12 = *(float *)((int)this + 0x50);
  fVar13 = param_2[2];
  fVar14 = *(float *)((int)this + 0x5c);
  *param_1 = *(float *)((int)this + 0x30) * *param_2 +
             *(float *)((int)this + 0x48) * param_2[2] + *(float *)((int)this + 0x3c) * param_2[1] +
             *(float *)((int)this + 0x54);
  param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  param_1[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return;
}


//// FUNCTION FUN_00bf23a0 @ 00bf23a0 ////

void __fastcall FUN_00bf23a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[2];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return;
}


//// FUNCTION FUN_00bf23c0 @ 00bf23c0 ////

void __thiscall FUN_00bf23c0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float10 fVar1;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  FUN_00bf23a0(local_c,param_1);
  FUN_00bf23a0(&local_24,param_2);
  FUN_00bf23a0(&local_30,param_3);
  FUN_00bf1a40(&local_30,&local_18,&local_24);
  *(float *)this = local_18;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(float *)((int)this + 8) = local_24;
  *(undefined4 *)((int)this + 0xc) = local_14;
  *(float *)((int)this + 4) = local_30;
  *(undefined4 *)((int)this + 0x14) = local_20;
  *(undefined4 *)((int)this + 0x18) = local_10;
  *(undefined4 *)((int)this + 0x10) = local_2c;
  *(undefined4 *)((int)this + 0x20) = local_1c;
  *(undefined4 *)((int)this + 0x1c) = local_28;
  fVar1 = FUN_00bf1a20(&local_18,local_c);
  *(float *)((int)this + 0x24) = (float)-fVar1;
  fVar1 = FUN_00bf1a20(&local_30,local_c);
  *(float *)((int)this + 0x28) = (float)-fVar1;
  fVar1 = FUN_00bf1a20(&local_24,local_c);
  *(float *)((int)this + 0x2c) = (float)-fVar1;
  FUN_00bf6b90((float *)((int)this + 0x30),this);
  return;
}


//// FUNCTION FUN_00bf24a0 @ 00bf24a0 ////

float * __thiscall FUN_00bf24a0(void *this,float *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  int extraout_EDX;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  uVar1 = FUN_00bf20a0((int)this);
  if ((char)uVar1 != '\0') {
    *param_1 = 1.0;
    param_1[1] = 1.0;
    return param_1;
  }
  FUN_00bf23a0(&local_18,param_2);
  if (*(char *)(extraout_EDX + 0xc) == '\0') {
    pfVar2 = (float *)FUN_00bf22a0(this,local_c,&local_18);
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
    local_10 = pfVar2[2];
  }
  FUN_00bf20d0(this,param_1,&local_18);
  return param_1;
}


//// FUNCTION FUN_00bf2520 @ 00bf2520 ////

undefined4 * __thiscall FUN_00bf2520(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [3];
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar2 = FUN_00bf20a0((int)this);
  if ((char)uVar2 != '\0') {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = 0x3f800000;
    return param_1;
  }
  FUN_00bf23a0(&local_28,param_2);
  if (*(char *)(param_2 + 3) == '\0') {
    pfVar3 = (float *)FUN_00bf22a0(this,local_1c,&local_28);
    local_28 = *pfVar3;
    local_24 = pfVar3[1];
    local_20 = pfVar3[2];
  }
  FUN_00bf2210(this,&local_10,&local_28);
  if (*(char *)(param_2 + 3) == '\0') {
    pfVar3 = (float *)FUN_00bf2320(this,local_1c,&local_10);
    local_10 = *pfVar3;
    local_c = pfVar3[1];
    local_8 = pfVar3[2];
  }
  puVar4 = (undefined4 *)FUN_00bf23a0(local_1c,&local_10);
  uVar2 = puVar4[1];
  uVar1 = puVar4[2];
  *param_1 = *puVar4;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = local_4;
  return param_1;
}


//// FUNCTION FUN_00bf2610 @ 00bf2610 ////

void * __fastcall FUN_00bf2610(void *param_1)

{
  void *this;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_10 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  FUN_00bf23c0(param_1,&local_c,&local_18,&local_24);
  FUN_00bf1fe0(param_1,1.5707964,0.0,0x3f800000,0x3f800000);
  FUN_00bf2040(this,1.5707964,0.0,0x3f800000,0x3f800000);
  return param_1;
}


//// FUNCTION FUN_00bf2720 @ 00bf2720 ////

undefined4 __fastcall FUN_00bf2720(int param_1)

{
  if (*(float *)(param_1 + 0x40) <= *(float *)(param_1 + 0x3c)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bf2740 @ 00bf2740 ////

void __fastcall FUN_00bf2740(int param_1)

{
  if ((*(int *)(param_1 + 0x4c) != 3) && (*(int *)(param_1 + 0x4c) != 1)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  return;
}


//// FUNCTION FUN_00bf2760 @ 00bf2760 ////

void __thiscall FUN_00bf2760(void *this,float param_1)

{
  if (param_1 < *(float *)this) {
    *(undefined4 *)((int)this + 0x44) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0x44) = *(float *)this / param_1;
  return;
}


//// FUNCTION FUN_00bf2790 @ 00bf2790 ////

void __thiscall FUN_00bf2790(void *this,float param_1)

{
  if (param_1 < *(float *)this) {
    *(undefined4 *)((int)this + 0x48) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0x48) = *(float *)this / param_1;
  return;
}


//// FUNCTION FUN_00bf27c0 @ 00bf27c0 ////

void __thiscall FUN_00bf27c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x40) = param_1;
  return;
}


//// FUNCTION FUN_00bf27d0 @ 00bf27d0 ////

void FUN_00bf27d0(void)

{
  return;
}


//// FUNCTION FUN_00bf27e0 @ 00bf27e0 ////

void __fastcall FUN_00bf27e0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x4c) != 2) {
    fVar1 = *(float *)(param_1 + 8);
    if (*(char *)(param_1 + 0x38) != '\0') {
      if (fVar1 < 3.1415927) {
        if (fVar1 < -3.1415927) {
          fVar1 = fVar1 + 6.2831855;
        }
      }
      else {
        fVar1 = fVar1 - 6.2831855;
      }
    }
    if (fVar1 == 0.0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 2;
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}


//// FUNCTION FUN_00bf2840 @ 00bf2840 ////

float10 __fastcall FUN_00bf2840(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 8);
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((float10)3.1415927 <= fVar1) {
      return (fVar1 - (float10)6.2831855) * (float10)*(float *)(param_1 + 4);
    }
    if (fVar1 < (float10)-3.1415927) {
      fVar1 = fVar1 + (float10)6.2831855;
    }
  }
  return fVar1 * (float10)*(float *)(param_1 + 4);
}


//// FUNCTION FUN_00bf2880 @ 00bf2880 ////

void __fastcall FUN_00bf2880(float *param_1)

{
  float extraout_EDX;
  float10 fVar1;
  
  FUN_00bca3e0(param_1 + 2,*param_1);
  fVar1 = FUN_00bf2840((int)param_1);
  if ((float10)0.0 == fVar1) {
    param_1[0xf] = *param_1 + param_1[0xf];
  }
  if (param_1[0x13] == 0.0) {
    if (param_1[1] <= param_1[0x12]) {
      param_1[1] = 0.0;
      param_1[0x13] = 2.8026e-45;
    }
    else {
      param_1[1] = param_1[1] - param_1[0x12];
    }
  }
  else if (param_1[0x13] == 1.4013e-45) {
    if (1.0 - param_1[1] <= param_1[0x11]) {
      param_1[1] = 1.0;
      param_1[0x13] = 4.2039e-45;
    }
    else {
      param_1[1] = param_1[1] + param_1[0x11];
    }
  }
  fVar1 = FUN_00bf2840((int)param_1);
  if ((float10)0.0 != fVar1) {
    param_1[0xf] = extraout_EDX;
  }
  return;
}


//// FUNCTION FUN_00bf2930 @ 00bf2930 ////

void __thiscall FUN_00bf2930(void *this,float param_1,float param_2)

{
  FUN_00bca1a0((void *)((int)this + 8),param_1,0.0,param_2);
  return;
}


//// FUNCTION FUN_00bf2950 @ 00bf2950 ////

undefined4 * __thiscall FUN_00bf2950(void *this,undefined4 param_1)

{
  void *this_00;
  void *this_01;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 2;
  FUN_00bf2930(this,0.0,0.0);
  FUN_00bf27c0(this,0x437a0000);
  FUN_00bf2790(this_00,250.0);
  FUN_00bf2760(this_01,250.0);
  return this;
}


//// FUNCTION FUN_00bf29a0 @ 00bf29a0 ////

void __thiscall FUN_00bf29a0(void *this,void *param_1)

{
  ushort uVar1;
  char cVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  undefined1 local_24 [4];
  float local_20;
  float fStack_1c;
  float local_18 [2];
  float *local_10;
  
  uVar1 = *(ushort *)((int)param_1 + 0x1a6);
  if ((uVar1 != 0) && (*(int *)((int)this + 4) != 0)) {
    local_18[0] = 0.0;
    local_18[1] = 0.0;
    pfVar6 = (float *)(-(uint)((uVar1 & 1) != 0) & (uint)local_24);
    local_10 = (float *)0x0;
    pfVar3 = (float *)(-(uint)((uVar1 & 2) != 0) & (uint)&local_20);
    cVar2 = FUN_00beddc0();
    if ((cVar2 == '\0') || ((*(byte *)((int)param_1 + 0x1a6) & 4) == 0)) {
      pfVar8 = (float *)0x0;
    }
    else {
      pfVar8 = local_18;
    }
    cVar2 = FUN_00beddc0();
    if ((cVar2 == '\0') && ((*(byte *)((int)param_1 + 0x1a6) & 4) != 0)) {
      pfVar7 = &fStack_1c;
    }
    else {
      pfVar7 = (float *)0x0;
    }
    if (pfVar6 != (float *)0x0) {
      fVar9 = FUN_00bf3030((int)param_1 + 0xac);
      *pfVar6 = (float)fVar9;
    }
    if (pfVar3 != (float *)0x0) {
      fVar9 = FUN_00bf3060((int)param_1 + 0xac);
      *pfVar3 = (float)fVar9;
    }
    if (pfVar8 == (float *)0x0) {
      if (pfVar7 != (float *)0x0) {
        uVar4 = FUN_00bf3050((uint *)((int)param_1 + 0xac));
        if ((char)uVar4 == '\0') {
          fVar9 = FUN_00bf3510((uint *)((int)param_1 + 0xac));
          *pfVar7 = (float)fVar9;
        }
        else {
          pfVar7 = (float *)0x0;
        }
      }
    }
    else {
      uVar4 = FUN_00bf3050((uint *)((int)param_1 + 0xac));
      if ((char)uVar4 == '\0') {
        pfVar8 = (float *)0x0;
      }
      else {
        pfVar5 = (float *)FUN_00bf3540((uint *)((int)param_1 + 0xac));
        *pfVar8 = *pfVar5;
        pfVar8[1] = pfVar5[1];
        pfVar8[2] = pfVar5[2];
      }
    }
    (**(code **)**(undefined4 **)((int)this + 4))
              (*(undefined4 *)((int)param_1 + 0x44),pfVar6,pfVar3,pfVar8,pfVar7);
    if ((pfVar6 != (float *)0x0) &&
       (fVar9 = FUN_00bf3030((int)param_1 + 0xac), (float10)*pfVar6 != fVar9)) {
      FUN_00bedcd0(param_1,*pfVar6);
    }
    pfVar3 = local_10;
    if ((local_10 != (float *)0x0) &&
       (fVar9 = FUN_00bf3060((int)param_1 + 0xac), (float10)*pfVar3 != fVar9)) {
      FUN_00bedca0(param_1,*pfVar3);
    }
    if (pfVar8 != (float *)0x0) {
      local_20 = *pfVar8;
      fStack_1c = pfVar8[1];
      local_18[0] = pfVar8[2];
      FUN_00bedd30(param_1,&local_20);
      return;
    }
    if ((pfVar7 != (float *)0x0) &&
       (fVar9 = FUN_00bf3510((uint *)((int)param_1 + 0xac)), (float10)*pfVar7 != fVar9)) {
      FUN_00bedd90(param_1,*pfVar7);
    }
  }
  return;
}


//// FUNCTION FUN_00bf2b90 @ 00bf2b90 ////

undefined4 * __fastcall FUN_00bf2b90(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00bde190((undefined1 *)(param_1 + 3));
  return param_1;
}


//// FUNCTION FUN_00bf2bb0 @ 00bf2bb0 ////

void __fastcall FUN_00bf2bb0(uint *param_1)

{
  FUN_00bddf00((undefined1 *)(param_1 + 3));
  *param_1 = *param_1 | 1;
  return;
}


//// FUNCTION FUN_00bf2bd0 @ 00bf2bd0 ////

void __fastcall FUN_00bf2bd0(uint *param_1)

{
  FUN_00bddf30((int)(param_1 + 3));
  *param_1 = *param_1 | 2;
  return;
}


//// FUNCTION FUN_00bf2bf0 @ 00bf2bf0 ////

void __fastcall FUN_00bf2bf0(uint *param_1)

{
  FUN_00bddf50((int)(param_1 + 3));
  *param_1 = *param_1 | 0x100;
  return;
}


//// FUNCTION FUN_00bf2c10 @ 00bf2c10 ////

void __fastcall FUN_00bf2c10(uint *param_1)

{
  FUN_00bde060((int)(param_1 + 3));
  *param_1 = *param_1 | 0x200;
  return;
}


//// FUNCTION FUN_00bf2c30 @ 00bf2c30 ////

void __thiscall FUN_00bf2c30(void *this,undefined2 param_1)

{
  FUN_00bddfc0((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x20;
  return;
}


//// FUNCTION FUN_00bf2c50 @ 00bf2c50 ////

void __thiscall FUN_00bf2c50(void *this,char param_1)

{
  FUN_00bde000((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x80;
  return;
}


//// FUNCTION FUN_00bf2c70 @ 00bf2c70 ////

void __fastcall FUN_00bf2c70(uint *param_1)

{
  FUN_00bddf70((int)(param_1 + 3));
  *param_1 = *param_1 | 4;
  return;
}


//// FUNCTION FUN_00bf2c90 @ 00bf2c90 ////

void __fastcall FUN_00bf2c90(uint *param_1)

{
  FUN_00bddf90((int)(param_1 + 3));
  *param_1 = *param_1 | 8;
  return;
}


//// FUNCTION FUN_00bf2cb0 @ 00bf2cb0 ////

void __thiscall FUN_00bf2cb0(void *this,undefined2 param_1)

{
  FUN_00bddfb0((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x10;
  return;
}


//// FUNCTION FUN_00bf2cd0 @ 00bf2cd0 ////

void __thiscall FUN_00bf2cd0(void *this,undefined2 param_1)

{
  FUN_00bde090((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x400;
  return;
}


//// FUNCTION FUN_00bf2cf0 @ 00bf2cf0 ////

void __thiscall FUN_00bf2cf0(void *this,undefined2 param_1)

{
  FUN_00bde0b0((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x800;
  return;
}


//// FUNCTION FUN_00bf2d90 @ 00bf2d90 ////

void __thiscall FUN_00bf2d90(void *this,undefined2 param_1)

{
  FUN_00bddff0((void *)((int)this + 0xc),param_1);
  *(uint *)this = *(uint *)this | 0x40;
  return;
}


//// FUNCTION FUN_00bf2db0 @ 00bf2db0 ////

void __thiscall
FUN_00bf2db0(void *this,char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00bde0c0((void *)((int)this + 0xc),param_1,param_2,param_3,param_4);
  *(uint *)this = *(uint *)this | 0x1000;
  return;
}


//// FUNCTION FUN_00bf2de0 @ 00bf2de0 ////

void __thiscall FUN_00bf2de0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *this_00;
  byte bVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float local_c;
  undefined4 local_8;
  char local_4;
  undefined3 uStack_3;
  
  this_00 = param_1;
  if ((*(byte *)this & 1) != 0) {
    FUN_00bddd50((void *)((int)this + 0xc),&local_c,(float *)&param_1);
    FUN_00bddf00(this_00);
  }
  if ((*(byte *)this & 2) != 0) {
    FUN_00bddd90((int)this + 0xc);
    FUN_00bddf30((int)this_00);
  }
  if ((*(byte *)this & 4) != 0) {
    FUN_00bdde10((int)this + 0xc);
    FUN_00bddf70((int)this_00);
  }
  if ((*(byte *)this & 8) != 0) {
    FUN_00bdde20((int)this + 0xc);
    FUN_00bddf90((int)this_00);
  }
  if ((*(byte *)this & 0x10) != 0) {
    uVar4 = GetField_0xe_00bdde30((int)this + 0xc);
    FUN_00bddfb0(this_00,uVar4);
  }
  if ((*(byte *)this & 0x20) != 0) {
    iVar7 = FUN_00bdde40((int)this + 0xc);
    FUN_00bddfc0(this_00,(short)iVar7);
  }
  if ((*(byte *)this & 0x40) != 0) {
    uVar4 = GetField_0x10_00bdde70((int)this + 0xc);
    FUN_00bddff0(this_00,uVar4);
  }
  if (*(char *)this < '\0') {
    bVar3 = FUN_00bdde80((int)this + 0xc);
    FUN_00bde000(this_00,bVar3);
  }
  if ((*(uint *)this & 0x100) != 0) {
    FUN_00bdddb0((int)this + 0xc);
    FUN_00bddf50((int)this_00);
  }
  if ((*(uint *)this & 0x200) != 0) {
    FUN_00bddeb0((int)this + 0xc);
    FUN_00bde060((int)this_00);
  }
  if ((*(uint *)this & 0x400) != 0) {
    uVar4 = GetField_0x18_00bde080((int)this + 0xc);
    FUN_00bde090(this_00,uVar4);
  }
  if ((*(uint *)this & 0x800) != 0) {
    iVar7 = FUN_00bde0a0((int)this + 0xc);
    FUN_00bde0b0(this_00,(short)iVar7);
  }
  if ((*(uint *)this & 0x1000) != 0) {
    uVar8 = FUN_00bdded0((void *)((int)this + 0xc),&local_8,&local_c,&param_1);
    _local_4 = CONCAT31(uStack_3,(char)uVar8);
    FUN_00bde0c0(this_00,(char)uVar8,local_8,local_c,param_1);
  }
  param_1 = (undefined1 *)GetField_8_00bdde50((int)this_00);
  uVar8 = *(uint *)((int)this + 4);
  uVar9 = GetField_8_00bdde50((int)this + 0xc);
  FUN_00bddfd0(this_00,uVar9 & uVar8 | ~uVar8 & (uint)param_1);
  uVar5 = GetField_4_00bdde60((int)this_00);
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar6 = GetField_4_00bdde60((int)this + 0xc);
  uVar2 = (ushort)uVar1;
  FUN_00bddfe0(this_00,uVar6 & uVar2 | ~uVar2 & uVar5);
  return;
}


//// FUNCTION FUN_00bf3030 @ 00bf3030 ////

float10 __fastcall FUN_00bf3030(int param_1)

{
  return (float10)*(float *)(param_1 + 0x90);
}


//// FUNCTION FUN_00bf3040 @ 00bf3040 ////

float10 __fastcall FUN_00bf3040(int param_1)

{
  return (float10)*(float *)(param_1 + 0x8c);
}


//// FUNCTION FUN_00bf3050 @ 00bf3050 ////

uint __fastcall FUN_00bf3050(uint *param_1)

{
  return *param_1 & 1;
}


//// FUNCTION FUN_00bf3060 @ 00bf3060 ////

float10 __fastcall FUN_00bf3060(int param_1)

{
  return (float10)*(float *)(param_1 + 0x98);
}


//// FUNCTION FUN_00bf3070 @ 00bf3070 ////

undefined4 __fastcall FUN_00bf3070(uint *param_1)

{
  uint uVar1;
  int extraout_ECX;
  
  uVar1 = FUN_00bf3050(param_1);
  if (((char)uVar1 != '\0') && (*(char *)(extraout_ECX + 0x10) != '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bf3090 @ 00bf3090 ////

uint * __fastcall FUN_00bf3090(uint *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  uVar1 = FUN_00bf3050(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"GetIs3D ()\n");
    DebugBreak();
  }
  return param_1 + 8;
}


//// FUNCTION FUN_00bf30d0 @ 00bf30d0 ////

void __thiscall FUN_00bf30d0(void *this,char *param_1,uint *param_2)

{
  uint uVar1;
  int extraout_EDX;
  
  *(undefined4 *)this = 0;
  if (*param_1 != '\0') {
    *(undefined4 *)this = 1;
  }
  uVar1 = FUN_00bf3050(this);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(extraout_EDX + 0x20);
  }
  else {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(extraout_EDX + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(extraout_EDX + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(extraout_EDX + 0xc);
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(extraout_EDX + 1);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(extraout_EDX + 4);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(extraout_EDX + 8);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(extraout_EDX + 0xc);
    FUN_00c2cbe0((void *)((int)this + 0x20),*(int *)(extraout_EDX + 0x10),
                 *(int *)(extraout_EDX + 0x14),*(int *)(extraout_EDX + 0x18),
                 *(int *)(extraout_EDX + 0x1c));
  }
  *(uint *)((int)this + 0x8c) = *param_2;
  *(uint *)((int)this + 0x90) = param_2[1];
  *(uint *)((int)this + 0x94) = param_2[2];
  *(uint *)((int)this + 0x98) = param_2[3];
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(uint *)((int)this + 0x9c) = param_2[4];
  *(uint *)((int)this + 0xa0) = param_2[5];
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  return;
}


//// FUNCTION FUN_00bf31b0 @ 00bf31b0 ////

uint __fastcall FUN_00bf31b0(uint *param_1)

{
  return *param_1 >> 1 & 1;
}


//// FUNCTION FUN_00bf3220 @ 00bf3220 ////

void __fastcall FUN_00bf3220(uint *param_1)

{
  uint uVar1;
  uint *extraout_ECX;
  
  uVar1 = FUN_00bf31b0(param_1);
  if ((char)uVar1 != '\0') {
    *extraout_ECX = *extraout_ECX & 0xfffffffd;
  }
  return;
}


//// FUNCTION FUN_00bf3230 @ 00bf3230 ////

void __thiscall FUN_00bf3230(void *this,int param_1)

{
  FUN_00bc9d20(*(int *)(*(int *)(param_1 + 0x28) + 0x44),
               *(float *)((int)this + 0x98) * *(float *)((int)this + 0x94),
               *(uint *)((int)this + 0xa0));
  return;
}


//// FUNCTION FUN_00bf3260 @ 00bf3260 ////

float10 __thiscall FUN_00bf3260(uint *param_1,int param_2)

{
  uint uVar1;
  undefined1 local_19;
  float local_18 [2];
  uint local_10;
  uint local_c;
  uint local_8;
  undefined1 local_4;
  
  uVar1 = FUN_00bf3050(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert(&local_19,"GetIs3D ()\n");
    DebugBreak();
  }
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  local_4 = (undefined1)param_1[4];
  FUN_00bf24a0((void *)(param_2 + 0x6d8),local_18,&local_10);
  return (float10)local_18[0];
}


