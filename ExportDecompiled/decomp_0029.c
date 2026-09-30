//// FUNCTION FUN_00817df0 @ 00817df0 ////

void __fastcall FUN_00817df0(int *param_1)

{
  float fVar1;
  wchar_t *pwVar2;
  undefined *puVar3;
  size_t sVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined2 unaff_DI;
  float10 fVar7;
  ulonglong uVar8;
  float *pfVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  ulonglong uVar12;
  float local_258;
  float fStack_24c;
  float fStack_248;
  float local_244;
  float local_240;
  float *pfStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 uStack_228;
  void *pvStack_21c;
  float fStack_218;
  float local_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_1f8;
  float local_1f4;
  float fStack_1f0;
  uint uStack_1ec;
  float local_1e8;
  float local_1e4;
  wchar_t *pwStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  wchar_t awStack_1d4 [10];
  undefined2 *puStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined2 auStack_1b4 [10];
  wchar_t awStack_1a0 [64];
  wchar_t awStack_120 [64];
  wchar_t awStack_a0 [66];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ce3f1b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)(param_1[0xdf] + 8) = 0;
  *(undefined1 *)(param_1[0xe0] + 8) = 0;
  DAT_0105cb50 = param_1[0x7c];
  DAT_0105cb54 = param_1[0x7d];
  DAT_0105cb58 = param_1[0x7e];
  DAT_0105cb5c = param_1[0x7f];
  local_1f4 = (float)param_1[0xd8];
  local_1f8 = (float)param_1[0xd9];
  local_1e8 = local_214;
  local_1e4 = (float)CONCAT31(local_1e4._1_3_,1);
  FUN_008177a0(&local_1f8);
  uVar11 = 0x40800000;
  puVar3 = FUN_00816c90();
  local_240 = (float)param_1[0x39];
  uVar10 = CONCAT44(uVar11,puVar3);
  fVar1 = (float)param_1[0x42];
  if (param_1[0xd1] == 2) {
    fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
    fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) - (float10)fVar1
    ;
  }
  else {
    fVar7 = (float10)fVar1;
  }
  local_244 = (float)fVar7;
  fVar1 = (float)param_1[0x27];
  fVar5 = (float)param_1[0x42];
  pfVar9 = &local_244;
  if (param_1[0xd1] == 2) {
    fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
    fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) - (float10)fVar5
    ;
  }
  else {
    fVar7 = (float10)fVar5;
  }
  pfStack_23c = (float *)(float)fVar7;
  fStack_238 = fVar1;
  FUN_008157c0((void *)param_1[0xb5],(float *)&pfStack_23c,pfVar9,(undefined4 *)uVar10,
               (float)((ulonglong)uVar10 >> 0x20));
  fVar7 = (float10)log2((float10)local_1e8 / (float10)(float)param_1[0xe2]);
  fVar7 = FUN_00acf400((double)((float10)0.3010299956639812 * fVar7),unaff_DI);
  fStack_24c = (float)(int)ROUND((float)fVar7);
  local_214 = (float)param_1[0xb5];
  (**(code **)(*param_1 + 0x120))();
  uVar12 = (ulonglong)uStack_1ec;
  (**(code **)(*param_1 + 0x120))();
  local_258 = local_1f8;
  if (local_1f8 < local_1f4 != (local_1f8 == local_1f4)) {
    do {
      fVar7 = (float10)(**(code **)(*param_1 + 0x120))();
      fVar1 = (float)fVar7;
      uVar11 = 0x40a00000;
      puVar3 = FUN_00816c90();
      fVar5 = (float)param_1[0x42];
      uVar10 = CONCAT44(uVar11,puVar3);
      if (param_1[0xd1] == 2) {
        fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
        fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) -
                (float10)fVar5;
      }
      else {
        fVar7 = (float10)fVar5;
      }
      fStack_210 = (float)fVar7;
      fVar5 = (float)param_1[0x42];
      pfVar9 = &fStack_210;
      fStack_20c = fVar1;
      if (param_1[0xd1] == 2) {
        fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
        fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) -
                (float10)(fVar5 - 12.0);
      }
      else {
        fVar7 = (float10)(fVar5 - 12.0);
      }
      fStack_218 = (float)fVar7;
      local_214 = fVar1;
      FUN_008157c0((void *)param_1[0xb5],&fStack_218,pfVar9,(undefined4 *)uVar10,
                   (float)((ulonglong)uVar10 >> 0x20));
      fVar5 = local_258 / (float)param_1[0xe2];
      pwStack_1e0 = awStack_1d4;
      awStack_1d4[0] = L'\0';
      uStack_1dc = 0;
      uStack_1d8 = 10;
      pvStack_14 = (void *)0x0;
      if (param_1[0xe1] == 1) {
        puStack_1c0 = auStack_1b4;
        auStack_1b4[0] = 0;
        uStack_1bc = 0;
        uStack_1b8 = 10;
        sVar4 = FUN_00ace02d((short *)&DAT_00d5c360);
        FUN_0040cae0(&puStack_1c0,L"%.",sVar4);
        sVar4 = _swprintf(awStack_a0,0xd18f7c,(wchar_t *)&stack0xfffffffc);
        FUN_0040cae0(&puStack_1c0,awStack_a0,sVar4);
        sVar4 = FUN_00ace02d((short *)&DAT_00d5c35c);
        FUN_0040cae0(&puStack_1c0,L"f",sVar4);
        _swprintf(awStack_1a0,(size_t)puStack_1c0,SUB84((double)fVar5,0));
        sVar4 = FUN_00ace02d(awStack_1a0);
        FUN_0040cae0(&pwStack_1e0,awStack_1a0,sVar4);
        if (10 < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_1c0);
        }
      }
      else {
        fVar7 = FUN_00acf400((double)fVar5,(short)uVar12);
        if ((float10)1.0 <= ABS(fVar7 - (float10)fVar5)) {
          pfStack_23c = &fStack_230;
          fStack_230 = (float)((uint)fStack_230 & 0xffff0000);
          fStack_238 = 0.0;
          fStack_234 = 1.4013e-44;
          fVar5 = (float)FUN_00ace02d((short *)&lpCaption_00d16918);
          if ((uint)fStack_234 <= (uint)fVar5) {
            if (10 < (uint)fStack_234) {
                    /* WARNING: Subroutine does not return */
              _free(pfStack_23c);
            }
            fStack_234 = (float)((int)fVar5 + 0x20U & 0xffffffe0);
            pfStack_23c = _malloc((int)fStack_234 * 2);
          }
          _wcsncpy((wchar_t *)pfStack_23c,(wchar_t *)&lpCaption_00d16918,(size_t)fVar5);
          *(undefined2 *)((int)pfStack_23c + (int)fVar5 * 2) = 0;
          fStack_238 = fVar5;
          _wcscmp(pwStack_1e0,(wchar_t *)pfStack_23c);
          if (10 < (uint)fStack_234) {
                    /* WARNING: Subroutine does not return */
            _free(pfStack_23c);
          }
        }
        else {
          uVar8 = FUN_00acd42c();
          sVar4 = _swprintf(awStack_120,0xd18f7c,(wchar_t *)uVar8);
          FUN_0040cae0(&pwStack_1e0,awStack_120,sVar4);
        }
      }
      FUN_009a8180((void *)param_1[0xdf],&local_244,(ushort *)pwStack_1e0);
      pwVar2 = pwStack_1e0;
      fStack_204 = fVar1 - local_240 * 0.5;
      if (param_1[0xd1] == 2) {
        fStack_208 = (float)param_1[0x30] + 18.0;
        local_1e8 = fStack_208;
        local_1e4 = fStack_204;
      }
      else {
        fStack_24c = ((((float)param_1[0x42] - local_244) - 12.0) - 1.0) - 5.0;
        fStack_248 = fStack_204;
        fStack_208 = fStack_24c;
      }
      puVar6 = (undefined4 *)FUN_00816c90();
      FUN_00747820(pvStack_21c,(int)pwVar2,*puVar6,&fStack_208,param_1[0xdf],0x3f800000,0x3f800000);
      pvStack_14 = (void *)0xffffffff;
      if (10 < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_1e0);
      }
      local_258 = fStack_1f0 + local_258;
    } while (local_258 < local_1f4 != (local_258 == local_1f4));
  }
  fStack_238 = (float)param_1[0xd8];
  pfStack_23c = (float *)param_1[0xd9];
  fStack_22c = fStack_1f0 * 0.25;
  uStack_228 = 0;
  FUN_008177a0((float *)&pfStack_23c);
  local_258 = fStack_234;
  if (fStack_234 < fStack_230 != (fStack_234 == fStack_230)) {
    do {
      fVar7 = (float10)(**(code **)(*param_1 + 0x120))();
      fVar1 = (float)fVar7;
      uVar11 = 0x40000000;
      puVar3 = FUN_00816c90();
      fVar5 = (float)param_1[0x42];
      uVar10 = CONCAT44(uVar11,puVar3);
      if (param_1[0xd1] == 2) {
        fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
        fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) -
                (float10)fVar5;
      }
      else {
        fVar7 = (float10)fVar5;
      }
      fStack_218 = (float)fVar7;
      fStack_210 = (float)param_1[0x42] - 12.0;
      pfVar9 = &fStack_218;
      local_214 = fVar1;
      if (param_1[0xd1] == 2) {
        fVar7 = (float10)(**(code **)(*param_1 + 0x10))();
        fVar7 = ((float10)(float)param_1[0x30] + (float10)(float)param_1[0x30] + fVar7) -
                (float10)fStack_210;
      }
      else {
        fVar7 = (float10)fStack_210;
      }
      fStack_24c = (float)fVar7;
      fStack_248 = fVar1;
      FUN_008157c0((void *)param_1[0xb5],&fStack_24c,pfVar9,(undefined4 *)uVar10,
                   (float)((ulonglong)uVar10 >> 0x20));
      local_258 = fStack_22c + local_258;
    } while (local_258 < fStack_230 != (local_258 == fStack_230));
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_00818520 @ 00818520 ////

undefined4 * __thiscall FUN_00818520(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00816af0(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5c384;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5c36c;
  if (param_1 == 0) {
    FUN_0073f490(this,8.0);
  }
  else if (param_1 == 1) {
    FUN_0073f410(this,8.0);
    ExceptionList = local_c;
    return this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008185b0 @ 008185b0 ////

undefined4 * __thiscall FUN_008185b0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008185e0 @ 008185e0 ////

void __fastcall FUN_008185e0(int param_1)

{
  FUN_00816a00(param_1);
  if ((*(uint *)(param_1 + 0x35c) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  if ((*(uint *)(param_1 + 0x35c) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x364) = 0;
  }
  return;
}


//// FUNCTION FUN_00818740 @ 00818740 ////

undefined4 __fastcall FUN_00818740(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x35c) & 0xfffffffc;
  *(uint *)(param_1 + 0x35c) = uVar7;
  fVar2 = (*(float *)(param_1 + 0x364) - *(float *)(param_1 + 0x360)) * 0.5;
  fVar6 = fVar2 + *(float *)(param_1 + 0x360);
  fVar2 = fVar2 * 0.9;
  fVar1 = fVar6 - fVar2;
  *(float *)(param_1 + 0x360) = fVar1;
  if (fVar1 <= *(float *)(param_1 + 0x34c)) {
    fVar1 = *(float *)(param_1 + 0x34c);
  }
  *(float *)(param_1 + 0x360) = fVar1;
  fVar2 = fVar2 + fVar6;
  fVar1 = *(float *)(param_1 + 0x350);
  bVar3 = NAN(fVar2);
  bVar4 = fVar2 < fVar1;
  bVar5 = fVar2 == fVar1;
  *(float *)(param_1 + 0x364) = fVar2;
  if (!bVar4) {
    fVar2 = *(float *)(param_1 + 0x350);
  }
  *(float *)(param_1 + 0x364) = fVar2;
  return CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),
                                  (ushort)bVar4 << 8 | (ushort)(bVar3 || NAN(fVar1)) << 10 |
                                  (ushort)bVar5 << 0xe) >> 8),1);
}


//// FUNCTION FUN_008187d0 @ 008187d0 ////

undefined4 __fastcall FUN_008187d0(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x35c) & 0xfffffffc;
  *(uint *)(param_1 + 0x35c) = uVar7;
  fVar2 = (*(float *)(param_1 + 0x364) - *(float *)(param_1 + 0x360)) * 0.5;
  fVar6 = fVar2 + *(float *)(param_1 + 0x360);
  fVar2 = fVar2 * 1.1;
  fVar1 = fVar6 - fVar2;
  *(float *)(param_1 + 0x360) = fVar1;
  if (fVar1 <= *(float *)(param_1 + 0x34c)) {
    fVar1 = *(float *)(param_1 + 0x34c);
  }
  *(float *)(param_1 + 0x360) = fVar1;
  fVar2 = fVar2 + fVar6;
  fVar1 = *(float *)(param_1 + 0x350);
  bVar3 = NAN(fVar2);
  bVar4 = fVar2 < fVar1;
  bVar5 = fVar2 == fVar1;
  *(float *)(param_1 + 0x364) = fVar2;
  if (!bVar4) {
    fVar2 = *(float *)(param_1 + 0x350);
  }
  *(float *)(param_1 + 0x364) = fVar2;
  return CONCAT31((int3)(CONCAT22((short)(uVar7 >> 0x10),
                                  (ushort)bVar4 << 8 | (ushort)(bVar3 || NAN(fVar1)) << 10 |
                                  (ushort)bVar5 << 0xe) >> 8),1);
}


//// FUNCTION FUN_00818860 @ 00818860 ////

void __thiscall FUN_00818860(void *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x35c);
  *(float *)((int)this + 0x360) = param_1;
  *(uint *)((int)this + 0x35c) = uVar1 & 0xfffffffe;
  if (((uVar1 & 2) == 0) && (*(float *)((int)this + 0x364) < param_1)) {
    *(float *)((int)this + 0x364) = param_1;
  }
  FUN_00816980(this,param_1);
  return;
}


//// FUNCTION FUN_008188a0 @ 008188a0 ////

void __thiscall FUN_008188a0(void *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x35c);
  *(float *)((int)this + 0x364) = param_1;
  *(uint *)((int)this + 0x35c) = uVar1 & 0xfffffffd;
  if (((uVar1 & 1) == 0) && (param_1 < *(float *)((int)this + 0x360))) {
    *(float *)((int)this + 0x360) = param_1;
  }
  FUN_008169c0(this,param_1);
  return;
}


//// FUNCTION FUN_00818960 @ 00818960 ////

undefined4 * __thiscall FUN_00818960(void *this,undefined4 param_1)

{
  FUN_00816af0(this,param_1);
  *(uint *)((int)this + 0x370) = *(uint *)((int)this + 0x370) & 0xfffffffe;
  *(undefined ***)this = &PTR_FUN_00d5c4cc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5c4b0;
  *(uint *)((int)this + 0x35c) = *(uint *)((int)this + 0x35c) | 3;
  return this;
}


//// FUNCTION FUN_008189a0 @ 008189a0 ////

undefined4 * __thiscall FUN_008189a0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008189c0 @ 008189c0 ////

undefined1 __fastcall FUN_008189c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 local_9;
  undefined4 local_8 [2];
  
  local_9 = 0;
  cVar3 = FUN_007402d0(param_1);
  if (cVar3 != '\0') {
    return 1;
  }
  if ((*(byte *)(param_1 + 800) & 1) == 0) {
    cVar3 = FUN_00553f70(0x73);
    if (((cVar3 != '\0') && ((*(uint *)(param_1 + 0x1c8) & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x1c8) & 2) != 0)) {
      puVar4 = (undefined4 *)
               FUN_00747460(*(void **)(param_1 + 0x284),local_8,DAT_0104cd00,DAT_0104cd04);
      *(undefined4 *)(param_1 + 0x324) = *puVar4;
      uVar2 = puVar4[1];
      *(float *)(param_1 + 0x31c) = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x310);
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x310);
      *(undefined4 *)(param_1 + 0x328) = uVar2;
      local_9 = 1;
      *(uint *)(param_1 + 800) = *(uint *)(param_1 + 800) | 1;
    }
    return local_9;
  }
  cVar3 = FUN_00553f70(0x73);
  if (cVar3 == '\0') {
    *(uint *)(param_1 + 800) = *(uint *)(param_1 + 800) & 0xfffffffe;
    return 1;
  }
  if (*(int *)(param_1 + 0x2f4) == 0) {
    fVar1 = (*(float *)(param_1 + 0x324) - DAT_0104cce0) *
            ((*(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x310)) /
            (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0x70))) + *(float *)(param_1 + 0x318)
    ;
    *(float *)(param_1 + 0x310) = fVar1;
    if (fVar1 <= *(float *)(param_1 + 0x2fc)) {
      fVar1 = *(float *)(param_1 + 0x2fc);
    }
    *(float *)(param_1 + 0x310) = fVar1;
    fVar1 = fVar1 + *(float *)(param_1 + 0x31c);
    *(float *)(param_1 + 0x314) = fVar1;
    if (*(float *)(param_1 + 0x300) <= fVar1) {
      fVar1 = *(float *)(param_1 + 0x300);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2f4) != 1) {
      return 1;
    }
    fVar1 = (*(float *)(param_1 + 0x328) - DAT_0104cce4) *
            ((*(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x310)) /
            (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x94))) + *(float *)(param_1 + 0x318)
    ;
    *(float *)(param_1 + 0x310) = fVar1;
    if (fVar1 <= *(float *)(param_1 + 0x2fc)) {
      fVar1 = *(float *)(param_1 + 0x2fc);
    }
    *(float *)(param_1 + 0x310) = fVar1;
    fVar1 = fVar1 + *(float *)(param_1 + 0x31c);
    *(float *)(param_1 + 0x314) = fVar1;
    if (*(float *)(param_1 + 0x300) <= fVar1) {
      *(float *)(param_1 + 0x314) = *(float *)(param_1 + 0x300);
      *(float *)(param_1 + 0x310) = *(float *)(param_1 + 0x300) - *(float *)(param_1 + 0x31c);
      return 1;
    }
  }
  *(float *)(param_1 + 0x314) = fVar1;
  *(float *)(param_1 + 0x310) = fVar1 - *(float *)(param_1 + 0x31c);
  return 1;
}


//// FUNCTION FUN_00818bd0 @ 00818bd0 ////

void __fastcall FUN_00818bd0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined2 unaff_DI;
  float10 fVar3;
  float10 fVar4;
  undefined2 uVar5;
  float fStack_60;
  float fStack_58;
  float local_50;
  
  if (param_1[0xd1] == 0) {
    FUN_005e5420();
    if (0.0 < (float)param_1[0xd5]) {
      FUN_00acf400((double)((float)param_1[0xd8] / (float)param_1[0xd5]),unaff_DI);
      fVar3 = (float10)(**(code **)(*param_1 + 0x120))();
      uVar5 = SUB42(fStack_58 + (float)param_1[0xd5],0);
      fVar4 = (float10)(**(code **)(*param_1 + 0x120))();
      if ((float10)1.0 < fVar4 - (float10)-1.7014118e+38) {
        iVar2 = *param_1;
        FUN_00acf400((double)(((float)param_1[0xd9] + (float)param_1[0xd5]) / (float)param_1[0xd5]),
                     uVar5);
        fVar4 = (float10)(**(code **)(iVar2 + 0x120))();
        fVar1 = (float)fVar4;
        fStack_60 = local_50;
        if (local_50 < fVar1 != (local_50 == fVar1)) {
          do {
            FUN_005e5420();
            fStack_60 = fStack_60 + (float)fVar3;
          } while (fStack_60 < fVar1 != (fStack_60 == fVar1));
        }
      }
    }
  }
  else if (param_1[0xd1] == 1) {
    FUN_005e5420();
    return;
  }
  return;
}


//// FUNCTION FUN_00818de0 @ 00818de0 ////

void __fastcall FUN_00818de0(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  char *_Dest;
  char *pcVar6;
  void *local_94;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [16];
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined2 auStack_64 [12];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [26];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3feb;
  pvStack_c = ExceptionList;
  local_94 = (void *)0x0;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x470);
  bVar5 = pvVar1 == (void *)0x0;
  if (bVar5) {
    piVar3 = (int *)0x0;
  }
  else {
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = 0;
    local_84 = 0x14;
    _strncpy(local_8c,"ui/buttons.dds",0xe);
    local_88 = 0xe;
    local_8c[0xe] = '\0';
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    uVar2 = FUN_00ace02d((short *)&DAT_00d5c678);
    FUN_004036d0(&local_4c,L"<FONT FACE=\'Wingdings\' SIZE=14>ò</FONT>",uVar2);
    local_4 = 2;
    local_94 = (void *)0x3;
    piVar3 = FUN_007381d0(pvVar1,&local_4c,&local_8c);
  }
  if ((!bVar5) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((!bVar5) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  pcVar6 = "SLIDDABLEGRAPH_ZOOMDOWN";
  _Dest = &LAB_00818920;
  (**(code **)(*piVar3 + 0x18))(0);
  (**(code **)(*piVar3 + 0x18))(5,&LAB_005f37f0,0,"SLIDDABLEGRAPH_ZOOMDOWN");
  (**(code **)(*piVar3 + 0x60))(2,param_1,0x40000000);
  (**(code **)(*piVar3 + 0x68))(2,param_1,0);
  (**(code **)(*piVar3 + 0x84))(0);
  (**(code **)(*param_1 + 0xc))(piVar3,2);
  pvVar1 = operator_new(0x470);
  bVar5 = pvVar1 == (void *)0x0;
  if (bVar5) {
    piVar4 = (int *)0x0;
  }
  else {
    _Dest = &stack0xffffff5c;
    pcVar6 = (char *)0x14;
    _strncpy(_Dest,"ui/buttons.dds",0xe);
    _Dest[0xe] = '\0';
    puStack_70 = auStack_64;
    auStack_64[0] = 0;
    uStack_6c = 0;
    uStack_68 = 10;
    uVar2 = FUN_00ace02d((short *)&DAT_00d5c610);
    FUN_004036d0(&puStack_70,L"<FONT FACE=\'Wingdings\' SIZE=14>ñ</FONT>",uVar2);
    local_48 = 7;
    piVar4 = FUN_007381d0(pvVar1,&puStack_70,(undefined4 *)&stack0xffffff50);
  }
  if ((!bVar5) && (10 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_70);
  }
  local_48 = 0xffffffff;
  if ((!bVar5) && ((char *)0x14 < pcVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(*piVar4 + 0x18))(0,&LAB_008188e0,param_1,"SLIDDABLEGRAPH_ZOOMUP");
  (**(code **)(*piVar4 + 0x18))(5,&LAB_005f37f0,0,"SLIDDABLEGRAPH_ZOOMUP");
  (**(code **)(*piVar4 + 0x60))(1,piVar3,0xc0000000);
  (**(code **)(*piVar4 + 0x68))(2,piVar3,0);
  (**(code **)(*piVar4 + 0x84))(0);
  (**(code **)(*param_1 + 0xc))(piVar4,2);
  ExceptionList = local_94;
  return;
}


//// FUNCTION FUN_008190f0 @ 008190f0 ////

void __fastcall FUN_008190f0(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00819150 @ 00819150 ////

undefined4 __fastcall FUN_00819150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0099cae0(*(int *)(param_1 + 0x4b8));
  return CONCAT31((int3)((uint)(iVar1 + -1) >> 8),*(int *)(param_1 + 0x4b4) == iVar1 + -1);
}


//// FUNCTION FUN_00819280 @ 00819280 ////

void __fastcall FUN_00819280(int *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4008;
  local_c = ExceptionList;
  if ((DAT_0104dafc != 0) && (DAT_0104dae4 != 0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"videoopt_dialogue",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    local_4 = 0;
    FUN_0087ecc0(*(void **)(*(int *)(DAT_0104dae4 + 0x358) + 0x178),param_1,&local_2c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00819dd0 @ 00819dd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00819dd0(void)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  int *piVar12;
  char *pcStack_168;
  char *pcStack_164;
  float fVar13;
  char *pcStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  char acStack_128 [8];
  void *pvStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined2 **local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 *local_108;
  undefined4 uStack_104;
  uint uStack_100;
  undefined2 auStack_fc [10];
  undefined1 *puStack_e8;
  void *pvStack_e4;
  void *pvStack_ac;
  wchar_t awStack_8c [10];
  undefined1 uStack_78;
  undefined1 uStack_74;
  int iStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce41ad;
  pvStack_c = ExceptionList;
  local_114 = &local_108;
  local_108 = (undefined2 *)((uint)local_108 & 0xffff0000);
  local_110 = 0;
  local_10c = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  fVar10 = (float10)(**(code **)(*(int *)DAT_0104eb98[0x124] + 0x10))();
  sVar3 = FUN_00ace02d(L"<table><tr><td align=center width =");
  FUN_0040cae0(&local_114,L"<table><tr><td align=center width =",sVar3);
  pcStack_164 = (char *)0x819e6c;
  sVar3 = _swprintf(awStack_8c,0xd18f84,SUB84((double)(float)(fVar10 - (float10)50.0),0));
  FUN_0040cae0(&local_114,awStack_8c,sVar3);
  sVar3 = FUN_00ace02d(
                      L"><t2><translate>GRAPHICSOPTIONS_SAVEANDRESTARTDIALOGUE</translate></t2></td></tr></table>"
                      );
  FUN_0040cae0(&local_114,
               L"><t2><translate>GRAPHICSOPTIONS_SAVEANDRESTARTDIALOGUE</translate></t2></td></tr></table>"
               ,sVar3);
  puVar4 = operator_new(0x344);
  local_4._0_1_ = 1;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar4);
  }
  local_4._0_1_ = 0;
  pvVar6 = operator_new(0x288);
  if (pvVar6 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcStack_134 = acStack_128;
    acStack_128[0] = '\0';
    uStack_130 = 0;
    uStack_12c = 0x14;
    _strncpy(pcStack_134,"ui/fullsrn_box.dds",0x12);
    uStack_130 = 0x12;
    pcStack_134[0x12] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar4 = FUN_005e8fd0(pvVar6,&pcStack_134);
  }
  local_4 = 0;
  if ((pvVar6 != (void *)0x0) && (0x14 < uStack_12c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_134);
  }
  puVar4[0x9c] = 0x41400000;
  puVar4[0x9d] = 0x41400000;
  puVar4[0x9b] = 0x42000000;
  puVar4[0x9e] = 0x41c00000;
  puVar4[0x9f] = 0x41c00000;
  (**(code **)(*piVar5 + 0xa0))();
  iVar1 = *piVar5;
  (**(code **)(*(int *)DAT_0104eb98[0x124] + 0x10))();
  (**(code **)(iVar1 + 0x78))();
  puVar4 = operator_new(0x3fc);
  pvStack_c._0_1_ = 5;
  if (puVar4 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar4);
  }
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(*piVar7 + 0x54))();
  iVar1 = *piVar7;
  fVar10 = (float10)(**(code **)(*(int *)DAT_0104eb98[0x124] + 0x10))();
  fVar13 = (float)fVar10;
  pcStack_164 = (char *)0x81a01a;
  (**(code **)(iVar1 + 0x78))();
  pcStack_164 = (char *)0x0;
  pcStack_168 = (char *)0x81a025;
  (**(code **)(*piVar7 + 0x84))();
  pcStack_168 = (char *)0x0;
  (**(code **)(*piVar7 + 100))();
  (**(code **)(*piVar7 + 0x5c))();
  (**(code **)(*piVar7 + 0x14))();
  (**(code **)(*piVar7 + 0x30))();
  (**(code **)(*piVar5 + 0xc))();
  (**(code **)(*piVar7 + 0x14))();
  if ((DAT_0104eb80 & 1) == 0) {
    DAT_0104eb80 = DAT_0104eb80 | 1;
    iStack_38._0_1_ = 6;
    fVar10 = (float10)(**(code **)(*(int *)DAT_0104eb98[0x124] + 0x10))();
    iStack_38 = (uint)iStack_38._1_3_ << 8;
    _DAT_0104eb7c = (float)(fVar10 * (float10)0.3);
  }
  pvVar6 = operator_new(0x420);
  bVar9 = pvVar6 == (void *)0x0;
  pvStack_e4 = pvVar6;
  if (bVar9) {
    piVar7 = (int *)0x0;
  }
  else {
    local_108 = auStack_fc;
    auStack_fc[0] = 0;
    uStack_104 = 0;
    uStack_100 = 10;
    uVar8 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_108,(wchar_t *)&lpCaption_00d16918,uVar8);
    pcStack_168 = &stack0xfffffea4;
    pcStack_164 = (char *)0x0;
    fVar13 = 2.8026e-44;
    _strncpy(pcStack_168,"button_tick.",0xc);
    pcStack_164 = (char *)0xc;
    pcStack_168[0xc] = '\0';
    puStack_e8 = &stack0xfffffe6c;
    iStack_38 = 9;
    piVar7 = FUN_0069fb10(pvVar6,(int *)&pcStack_168,&local_108,0x42800000,0x42800000,0,0,0x3f800000
                          ,0x3f800000);
  }
  if ((!bVar9) && (0x14 < (uint)fVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_168);
  }
  iStack_38 = 0;
  if ((!bVar9) && (10 < uStack_100)) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  iVar1 = *piVar7;
  (**(code **)(*(int *)DAT_0104eb98[0x124] + 0x10))();
  piVar12 = (int *)0x1;
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar7 + 100))(1,piVar5);
  (**(code **)(*piVar5 + 0xc))(piVar7,1);
  (**(code **)(*piVar5 + 0x8c))();
  do {
    cVar2 = (**(code **)(*piVar12 + 0x50))(1);
  } while (cVar2 != '\0');
  piVar12 = (int *)DAT_0104eb98[0x124];
  iVar1 = *piVar5;
  fVar10 = (float10)(**(code **)(*piVar12 + 0x14))();
  fVar13 = (float)(fVar10 * (float10)0.5);
  fVar10 = (float10)(**(code **)(*piVar5 + 0x14))();
  fVar13 = (float)((float10)fVar13 - fVar10 * (float10)0.5);
  pvVar6 = (void *)0x1;
  (**(code **)(iVar1 + 100))(1,piVar12);
  piVar12 = (int *)DAT_0104eb98[0x124];
  iVar1 = *piVar5;
  fVar10 = (float10)(**(code **)(*piVar12 + 0x10))();
  fVar11 = (float)(fVar10 * (float10)0.5);
  fVar10 = (float10)(**(code **)(*piVar5 + 0x10))();
  (**(code **)(iVar1 + 0x5c))(1,piVar12,(float)((float10)fVar11 - fVar10 * (float10)0.5));
  (*(code *)puRam00000494[1])();
  piRam000004a8 = piVar5;
  (*(code *)*puRam00000494)();
  pcStack_164 = &stack0xfffffea8;
  pcStack_164 = _malloc(0x20);
  _strncpy(pcStack_164,"GRAPHICSOPTIONS_SAVENORESTART",0x1d);
  uVar8 = 0x1d;
  pcStack_164[0x1d] = '\0';
  uStack_74 = 0xc;
  puVar4 = FUN_009b5030(&uStack_11c,&pcStack_164);
  uStack_74 = 0xd;
  (**(code **)(*piVar7 + 0x90))(puVar4);
  if (10 < uStack_118) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_120);
  }
  uStack_78 = 0;
  if (0x14 < uVar8) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_168);
  }
  (**(code **)(*piVar7 + 0x18))(0,&LAB_008191f0,piVar5,"GRAPHICSOPTIONS_SAVENORESTART");
  (**(code **)(*piVar7 + 0x18))(5,&LAB_005f37f0,0,"GRAPHICSOPTIONS_SAVENORESTART");
  FUN_0073e8b0(piVar7,0);
  FUN_0073e8d0(piVar7,0);
  (**(code **)(*DAT_0104eb98 + 0xac))(piVar5);
  (**(code **)(*DAT_0104eb98 + 0xc))(piVar5,1);
  if (10 < (uint)fVar13) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar6);
  }
  ExceptionList = pvStack_ac;
  return;
}


//// FUNCTION FUN_0081a420 @ 0081a420 ////

undefined4 FUN_0081a420(void)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  uint *_Memory;
  void *pvVar9;
  int *piVar10;
  float10 fVar11;
  wchar_t *pwVar12;
  float fVar13;
  undefined4 uStack_1d4;
  uint *puStack_1b4;
  undefined4 uStack_1b0;
  undefined2 *local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined2 local_1a0 [6];
  uint *puStack_194;
  undefined4 uStack_190;
  undefined1 *local_18c;
  char acStack_188 [4];
  uint local_184;
  uint *puStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  char acStack_168 [20];
  uint *puStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  char acStack_148 [20];
  void *apvStack_134 [2];
  uint uStack_12c;
  void *apvStack_114 [2];
  uint uStack_10c;
  void *apvStack_f4 [2];
  uint uStack_ec;
  wchar_t awStack_dc [4];
  void *apvStack_d4 [2];
  uint uStack_cc;
  wchar_t awStack_b4 [20];
  wchar_t local_8c [48];
  undefined1 uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_0104eb98;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce41f7;
  local_c = ExceptionList;
  pvVar9 = ExceptionList;
  if (DAT_0104eb98 == 0) goto LAB_0081ad58;
  ExceptionList = &local_c;
  bVar2 = FUN_0099ce60();
  *(uint *)(iVar1 + 0x4b8) = CONCAT31(extraout_var,bVar2);
  iVar1 = DAT_0104eb98;
  uVar3 = FUN_0099de70(*(int *)(DAT_0104eb98 + 0x4b8));
  *(undefined4 *)(iVar1 + 0x4b4) = uVar3;
  local_1ac = local_1a0;
  local_1a0[0] = 0;
  local_1a8 = 0;
  local_1a4 = 10;
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&local_1ac,L"<s1><table><tr><td align=center width=",uVar4);
  local_4 = 0;
  uStack_1d4 = 0x81a4d3;
  sVar5 = _swprintf(local_8c,0xd18f84,SUB84((double)*(float *)(DAT_0104eb98 + 0x4ac),0));
  FUN_0040cae0(&local_1ac,local_8c,sVar5);
  sVar5 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_1ac,L">",sVar5);
  puVar6 = FUN_0099da80(&local_18c,*(int *)(DAT_0104eb98 + 0x4b8),*(int *)(DAT_0104eb98 + 0x4b4));
  FUN_0040cae0(&local_1ac,(wchar_t *)*puVar6,puVar6[1]);
  if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
    _free(local_18c);
  }
  sVar5 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&local_1ac,L"</td></tr></table></s1>",sVar5);
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x54))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x84))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x14))();
  uStack_1d4 = 2;
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 100))();
  FUN_00830550(*(void **)(DAT_0104eb98 + 0x448),9,&stack0xfffffe38);
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x10))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x5c))();
  iVar1 = DAT_0104eb98;
  iVar7 = FUN_0099cae0(*(int *)(DAT_0104eb98 + 0x4b8));
  if (*(int *)(iVar1 + 0x4b4) == iVar7 + -1) {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x388) + 0xc0))();
    piVar10 = *(int **)(DAT_0104eb98 + 0x3a0);
  }
  else {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x3a0) + 0xc0))();
    piVar10 = *(int **)(DAT_0104eb98 + 0x388);
  }
  (**(code **)(*piVar10 + 0xc0))();
  iVar1 = DAT_0104eb98;
  lVar8 = FUN_0099ccd0();
  *(long *)(iVar1 + 0x4b0) = lVar8;
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&uStack_1d4,L"<s1><table><tr><td align=center width=",uVar4);
  sVar5 = _swprintf(awStack_b4,0xd18f84,SUB84((double)*(float *)(DAT_0104eb98 + 0x4ac),0));
  FUN_0040cae0(&uStack_1d4,awStack_b4,sVar5);
  sVar5 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&uStack_1d4,L">",sVar5);
  switch(*(undefined4 *)(DAT_0104eb98 + 0x4b0)) {
  case 0:
    puStack_174 = (uint *)acStack_168;
    acStack_168[0] = '\0';
    uStack_170 = 0;
    uStack_16c = 0x20;
    puStack_174 = _malloc(0x20);
    _strncpy((char *)puStack_174,"GRAPHICSOPTIONS_LOWLOD",0x16);
    uStack_170 = 0x16;
    *(char *)((int)puStack_174 + 0x16) = '\0';
    uStack_2c = 1;
    puVar6 = FUN_009b5030(apvStack_d4,&puStack_174);
    FUN_0040cae0(&uStack_1d4,(wchar_t *)*puVar6,puVar6[1]);
    _Memory = puStack_174;
    uVar4 = uStack_16c;
    if (10 < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_d4[0]);
    }
    goto joined_r0x0081a8bf;
  case 1:
    puStack_154 = (uint *)acStack_148;
    acStack_148[0] = '\0';
    uStack_150 = 0;
    uStack_14c = 0x20;
    puStack_154 = _malloc(0x20);
    _strncpy((char *)puStack_154,"GRAPHICSOPTIONS_MEDIUMLOD",0x19);
    uStack_150 = 0x19;
    *(char *)((int)puStack_154 + 0x19) = '\0';
    uStack_2c = 2;
    puVar6 = FUN_009b5030(apvStack_134,&puStack_154);
    FUN_0040cae0(&uStack_1d4,(wchar_t *)*puVar6,puVar6[1]);
    _Memory = puStack_154;
    uVar4 = uStack_14c;
    if (10 < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_134[0]);
    }
joined_r0x0081a8bf:
    uStack_2c = 0;
    if (0x14 < uVar4) {
LAB_0081aa08:
      uStack_2c = 0;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    break;
  case 2:
    puStack_194 = (uint *)acStack_188;
    acStack_188[0] = '\0';
    uStack_190 = 0;
    local_18c = (undefined1 *)0x20;
    puStack_194 = _malloc(0x20);
    _strncpy((char *)puStack_194,"GRAPHICSOPTIONS_HIGHLOD",0x17);
    uStack_190 = 0x17;
    *(char *)((int)puStack_194 + 0x17) = '\0';
    uStack_2c = 3;
    puVar6 = FUN_009b5030(apvStack_114,&puStack_194);
    FUN_0040cae0(&uStack_1d4,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_114[0]);
    }
    uStack_2c = 0;
    _Memory = puStack_194;
    if (&DAT_00000014 < local_18c) goto LAB_0081aa08;
    break;
  case 3:
    puStack_1b4 = &local_1a8;
    local_1a8 = local_1a8 & 0xffffff00;
    uStack_1b0 = 0;
    local_1ac = (undefined2 *)0x20;
    puStack_1b4 = _malloc(0x20);
    _strncpy((char *)puStack_1b4,"GRAPHICSOPTIONS_BESTLOD",0x17);
    uStack_1b0 = 0x17;
    *(char *)((int)puStack_1b4 + 0x17) = '\0';
    uStack_2c = 4;
    puVar6 = FUN_009b5030(apvStack_f4,&puStack_1b4);
    FUN_0040cae0(&uStack_1d4,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_f4[0]);
    }
    uStack_2c = 0;
    _Memory = puStack_1b4;
    if (&DAT_00000014 < local_1ac) goto LAB_0081aa08;
  }
  sVar5 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&uStack_1d4,L"</td></tr></table></s1>",sVar5);
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 0x54))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 0x84))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 0x14))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 100))();
  FUN_00830550(*(void **)(DAT_0104eb98 + 0x460),9,&stack0xfffffe10);
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 0x10))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x460) + 0x5c))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x3b8) + 0xc0))();
  if (*(int *)(DAT_0104eb98 + 0x4b0) == 0) {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x3d0) + 0xc0))();
  }
  else {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x3d0) + 0xc0))();
  }
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffe04,L"<s1><table><tr><td align=center width=",uVar4);
  sVar5 = _swprintf(awStack_dc,0xd18f84,SUB84((double)*(float *)(DAT_0104eb98 + 0x4ac),0));
  FUN_0040cae0(&stack0xfffffe04,awStack_dc,sVar5);
  sVar5 = FUN_00ace02d(L"><translate>");
  FUN_0040cae0(&stack0xfffffe04,L"><translate>",sVar5);
  if (*(int *)(DAT_0104eb98 + 0x4b8) == 0) {
    sVar5 = FUN_00ace02d(L"GRAPHICSOPTIONS_SCREENQUALITYNORMAL");
    pwVar12 = L"GRAPHICSOPTIONS_SCREENQUALITYNORMAL";
  }
  else if (*(int *)(DAT_0104eb98 + 0x4b8) == 1) {
    sVar5 = FUN_00ace02d(L"GRAPHICSOPTIONS_SCREENQUALITYHIGH");
    pwVar12 = L"GRAPHICSOPTIONS_SCREENQUALITYHIGH";
  }
  else {
    sVar5 = FUN_00ace02d(L"ERROR, tell KIERAN");
    pwVar12 = L"ERROR, tell KIERAN";
  }
  FUN_0040cae0(&stack0xfffffe04,pwVar12,sVar5);
  sVar5 = FUN_00ace02d(L"</translate></td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffe04,L"</translate></td></tr></table></s1>",sVar5);
  (**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 0x54))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 0x84))();
  fVar11 = (float10)(**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 0x14))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 100))
            (2,*(undefined4 *)(DAT_0104eb98 + 0x430),
             (float)-(((float10)64.0 - fVar11) * (float10)0.5));
  FUN_00830550(*(void **)(DAT_0104eb98 + 0x478),9,&stack0xfffffde8);
  fVar13 = *(float *)(*(int *)(DAT_0104eb98 + 0x358) + 0xc0) -
           *(float *)(*(int *)(DAT_0104eb98 + 0x370) + 0x108);
  fVar11 = (float10)(**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 0x10))();
  (**(code **)(**(int **)(DAT_0104eb98 + 0x478) + 0x5c))
            (2,*(undefined4 *)(DAT_0104eb98 + 0x370),
             (float)-(((float10)fVar13 - fVar11) * (float10)0.5));
  bVar2 = *(int *)(DAT_0104eb98 + 0x4b8) != 0;
  if (bVar2) {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x370) + 0xc0))(1);
  }
  else {
    (**(code **)(**(int **)(DAT_0104eb98 + 0x370) + 0xc0))(0);
  }
  pvVar9 = (void *)(**(code **)(**(int **)(DAT_0104eb98 + 0x358) + 0xc0))(!bVar2);
  if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1ac);
  }
LAB_0081ad58:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar9 >> 8),1);
}


//// FUNCTION FUN_0081ad90 @ 0081ad90 ////

void FUN_0081ad90(void)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_e8;
  float fVar7;
  undefined2 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined2 local_c0 [10];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce421b;
  local_c = ExceptionList;
  if (DAT_0104eb98 != 0) {
    local_cc = local_c0;
    local_c0[0] = 0;
    local_c8 = 0;
    local_c4 = 10;
    ExceptionList = &local_c;
    uVar2 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
    FUN_004036d0(&local_cc,L"<s1><table><tr><td align=center width=",uVar2);
    local_4 = 0;
    uStack_e8 = 0x81ae1f;
    sVar3 = _swprintf(local_8c,0xd18f84,SUB84((double)*(float *)(DAT_0104eb98 + 0x4ac),0));
    FUN_0040cae0(&local_cc,local_8c,sVar3);
    sVar3 = FUN_00ace02d((short *)&DAT_00d19724);
    FUN_0040cae0(&local_cc,L">",sVar3);
    puVar4 = FUN_0099da80(local_ac,*(int *)(DAT_0104eb98 + 0x4b8),*(int *)(DAT_0104eb98 + 0x4b4));
    FUN_0040cae0(&local_cc,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    sVar3 = FUN_00ace02d(L"</td></tr></table></s1>");
    FUN_0040cae0(&local_cc,L"</td></tr></table></s1>",sVar3);
    (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x54))();
    (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x84))();
    (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x14))();
    uStack_e8 = *(undefined4 *)(DAT_0104eb98 + 0x400);
    (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 100))(2);
    uStack_e8 = 0xffffffff;
    FUN_00830550(*(void **)(DAT_0104eb98 + 0x448),9,(char *)&uStack_e8);
    fVar7 = *(float *)(*(int *)(DAT_0104eb98 + 0x388) + 0xc0) -
            *(float *)(*(int *)(DAT_0104eb98 + 0x3a0) + 0x108);
    fVar6 = (float10)(**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x10))();
    (**(code **)(**(int **)(DAT_0104eb98 + 0x448) + 0x5c))
              (2,*(undefined4 *)(DAT_0104eb98 + 0x3a0),
               (float)-(((float10)fVar7 - fVar6) * (float10)0.5));
    iVar1 = DAT_0104eb98;
    iVar5 = FUN_0099cae0(*(int *)(DAT_0104eb98 + 0x4b8));
    if (*(int *)(iVar1 + 0x4b4) == iVar5 + -1) {
      (**(code **)(**(int **)(DAT_0104eb98 + 0x388) + 0xc0))(0);
    }
    else {
      (**(code **)(**(int **)(DAT_0104eb98 + 0x388) + 0xc0))(1);
    }
    if (*(int *)(DAT_0104eb98 + 0x4b4) == 0) {
      (**(code **)(**(int **)(DAT_0104eb98 + 0x3a0) + 0xc0))(0);
    }
    else {
      (**(code **)(**(int **)(DAT_0104eb98 + 0x3a0) + 0xc0))(1);
    }
    if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0081b040 @ 0081b040 ////

void __thiscall FUN_0081b040(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d5c8d0;
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


//// FUNCTION FUN_0081b090 @ 0081b090 ////

void __fastcall FUN_0081b090(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5c8d0;
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


//// FUNCTION FUN_0081b0e0 @ 0081b0e0 ////

void __fastcall FUN_0081b0e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5c8fc;
  param_1[0x14] = &PTR_LAB_00d5c8e0;
  param_1[0x125] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x12a] = 0;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x11f] = &PTR_FUN_00d322b0;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x124] = 0;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x119] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11e] = 0;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x113] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x118] = 0;
  if ((undefined4 *)param_1[0x115] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x115] = param_1[0x114];
  }
  if (param_1[0x114] != 0) {
    *(undefined4 *)(param_1[0x114] + 4) = param_1[0x115];
  }
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x10d] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x112] = 0;
  if ((undefined4 *)param_1[0x10f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10f] = param_1[0x10e];
  }
  if (param_1[0x10e] != 0) {
    *(undefined4 *)(param_1[0x10e] + 4) = param_1[0x10f];
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x107] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x101] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0xfb] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0x100] = 0;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xf5] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xef] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xe9] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0xe5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe5] = param_1[0xe4];
  }
  if (param_1[0xe4] != 0) {
    *(undefined4 *)(param_1[0xe4] + 4) = param_1[0xe5];
  }
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xdd] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_FUN_00d172a0;
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
  param_1[0xd1] = &PTR_FUN_00d172a0;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0081b780 @ 0081b780 ////

undefined4 FUN_0081b780(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_0104dafc != 0) && (iVar1 = 0, DAT_0104eb98 != 0)) {
    FUN_0099db90(*(int *)(DAT_0104eb98 + 0x4b8),*(int *)(DAT_0104eb98 + 0x4b4));
    FUN_0099d450(*(undefined4 *)(DAT_0104eb98 + 0x4b0));
    if ((*(int *)(DAT_0104eb98 + 0x4bc) == *(int *)(DAT_0104eb98 + 0x4b0)) &&
       ((*(int *)(DAT_0104eb98 + 0x4c0) == *(int *)(DAT_0104eb98 + 0x4b4) &&
        (*(int *)(DAT_0104eb98 + 0x4c4) == *(int *)(DAT_0104eb98 + 0x4b8))))) {
      iVar1 = *(int *)(DAT_0104eb98 + 0x4a8);
      if (iVar1 == 0) {
        FUN_00741180(*(int *)(DAT_0104eb98 + 1000));
        FUN_00470a70(DAT_0104917c,DAT_0104dafc,0x85d,0,0);
        *(undefined4 *)(DAT_0104eb98 + 0x4bc) = *(undefined4 *)(DAT_0104eb98 + 0x4b0);
        *(undefined4 *)(DAT_0104eb98 + 0x4c0) = *(undefined4 *)(DAT_0104eb98 + 0x4b4);
        iVar1 = DAT_0104eb98;
        *(undefined4 *)(DAT_0104eb98 + 0x4c4) = *(undefined4 *)(DAT_0104eb98 + 0x4b8);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    else {
      iVar1 = FUN_00819dd0();
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_0081b8f0 @ 0081b8f0 ////

void __fastcall FUN_0081b8f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  size_t sVar7;
  int **_Dest;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  undefined4 *puStack_288;
  undefined4 *puStack_248;
  char *_Dest_00;
  char *pcVar11;
  char *_Dest_01;
  int **ppiStack_21c;
  uint uStack_218;
  uint uStack_214;
  int *piStack_210;
  uint uStack_20c;
  undefined4 *puStack_208;
  int *piStack_204;
  int **ppiStack_200;
  undefined2 **ppuVar12;
  int *piStack_1f4;
  uint uStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint *puStack_1e0;
  void *pvStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  void *local_1bc;
  undefined4 *local_1b8;
  uint uStack_1b4;
  void *apvStack_19c [2];
  undefined2 *puStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined2 auStack_188 [6];
  void *apvStack_17c [2];
  uint uStack_174;
  wchar_t awStack_15c [42];
  void *pvStack_108;
  undefined1 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4379;
  pvStack_c = ExceptionList;
  local_1bc = (void *)0x0;
  uStack_1d4 = 0x81b921;
  ExceptionList = &pvStack_c;
  local_1b8 = operator_new(0x344);
  local_4 = 0;
  if (local_1b8 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(local_1b8);
  }
  uStack_1d4 = *(uint *)(param_1 + 0x490);
  uStack_1d8 = 1;
  local_4 = 0xffffffff;
  pvStack_1dc = (void *)0x81b960;
  (**(code **)(*piVar2 + 100))();
  puStack_1e0 = *(uint **)(param_1 + 0x490);
  pvStack_1dc = (void *)0x41200000;
  uStack_1e4 = 1;
  uStack_1e8 = 0x81b975;
  (**(code **)(*piVar2 + 0x5c))();
  iVar1 = *piVar2;
  uStack_1e8 = 0x42c00000;
  fStack_1ec = 1.1913334e-38;
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x490) + 0x10))();
  fStack_1ec = (float)(fVar9 - (float10)21.0);
  uStack_1f0 = 0x81b996;
  (**(code **)(iVar1 + 0x74))();
  uStack_1f0 = 1;
  piStack_1f4 = piVar2;
  (**(code **)(**(int **)(param_1 + 0x490) + 0xc))();
  puStack_1e0 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puStack_1e0 == (uint *)0x0) {
    puStack_1e0 = (uint *)0x0;
  }
  else {
    puStack_1e0 = FUN_00833290(puStack_1e0);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x404) + 4))();
  *(uint **)(param_1 + 0x418) = puStack_1e0;
  (*(code *)**(undefined4 **)(param_1 + 0x404))();
  puStack_194 = auStack_188;
  auStack_188[0] = 0;
  uStack_190 = 0;
  uStack_18c = 10;
  uVar3 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_LEVELOFDETAILLABEL</translate></td></tr></table></t2>"
                      );
  ppiStack_200 = (int **)0x81ba34;
  FUN_004036d0(&puStack_194,
               L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_LEVELOFDETAILLABEL</translate></td></tr></table></t2>"
               ,uVar3);
  ppuVar12 = &puStack_194;
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x418) + 0x54))();
  ppiStack_200 = (int **)0x81ba5e;
  (**(code **)(**(int **)(param_1 + 0x418) + 0x84))();
  ppiStack_200 = (int **)0x40800000;
  puStack_208 = (undefined4 *)0x1;
  uStack_20c = 0x81ba71;
  piStack_204 = piVar2;
  (**(code **)(**(int **)(param_1 + 0x418) + 100))();
  uStack_20c = 0x41880000;
  uStack_214 = 1;
  uStack_218 = 0x81ba84;
  piStack_210 = piVar2;
  (**(code **)(**(int **)(param_1 + 0x418) + 0x5c))();
  ppiStack_21c = *(int ***)(param_1 + 0x418);
  uStack_218 = 1;
  (**(code **)(*piVar2 + 0xc))();
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puStack_208 = (undefined4 *)0x0;
  }
  else {
    ppiStack_200 = &piStack_1f4;
    piStack_1f4 = (int *)((uint)piStack_1f4 & 0xffffff00);
    ppuVar12 = (undefined2 **)0x40;
    puStack_208 = pvVar4;
    ppiStack_200 = _malloc(0x40);
    _strncpy((char *)ppiStack_200,"GRAPHICSOPTIONS_LEVELOFDETAILDOWN",0x21);
    *(char *)((int)ppiStack_200 + 0x21) = '\0';
    puStack_1e0 = &uStack_1d4;
    uStack_1d4 = uStack_1d4 & 0xffffff00;
    pvStack_1dc = (void *)0x0;
    uStack_1d8 = 0x14;
    _strncpy((char *)puStack_1e0,"button_left.",0xc);
    pvStack_1dc = (void *)0xc;
    *(char *)(puStack_1e0 + 3) = '\0';
    uStack_54 = 5;
    uStack_20c = 3;
    puVar5 = FUN_009b5030(apvStack_19c,&ppiStack_200);
    uStack_54 = 6;
    uStack_20c = 7;
    puStack_208 = FUN_0069fb10(pvVar4,(int *)&puStack_1e0,puVar5,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
  *(undefined4 **)(param_1 + 0x3d0) = puStack_208;
  (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
  if (((uStack_20c & 4) != 0) &&
     (uStack_20c = uStack_20c & 0xfffffffb, &lpType_0000000a < puStack_194)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_19c[0]);
  }
  if (((uStack_20c & 2) != 0) && (uStack_20c = uStack_20c & 0xfffffffd, 0x14 < uStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1e0);
  }
  uStack_54 = 2;
  if (((uStack_20c & 1) != 0) && (uStack_20c = uStack_20c & 0xfffffffe, &DAT_00000014 < ppuVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_200);
  }
  _Dest_01 = (char *)0x41800000;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x3d0) + 100))();
  pcVar11 = "GRAPHICSOPTIONS_LEVELOFDETAILDOWN";
  _Dest_00 = &LAB_00819770;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x3d0),1);
  (**(code **)(*piVar2 + 0xc))();
  ppiVar6 = operator_new(0x420);
  bVar8 = ppiVar6 == (int **)0x0;
  ppiStack_200 = ppiVar6;
  if (bVar8) {
    puStack_248 = (undefined4 *)0x0;
  }
  else {
    uStack_214 = uStack_214 & 0xffffff00;
    ppiStack_21c = (int **)0x0;
    uStack_218 = 0x20;
    _Dest_01 = _malloc(0x20);
    _strncpy(_Dest_01,"GRAPHICSOPTIONS_LEVELOFDETAILUP",0x1f);
    ppiStack_21c = (int **)0x1f;
    _Dest_01[0x1f] = '\0';
    _Dest_00 = &stack0xfffffdcc;
    pcVar11 = (char *)0x14;
    _strncpy(_Dest_00,"button_right.",0xd);
    _Dest_00[0xd] = '\0';
    uStack_94 = 0xc;
    puVar5 = FUN_009b5030(&pvStack_1dc,(undefined4 *)&stack0xfffffde0);
    uStack_94 = 0xd;
    puStack_248 = FUN_0069fb10(ppiVar6,(int *)&stack0xfffffdc0,puVar5,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_94 = 0x10;
  (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
  *(undefined4 **)(param_1 + 0x3b8) = puStack_248;
  (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  if ((!bVar8) && (10 < uStack_1d4)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_1dc);
  }
  if ((!bVar8) && ((char *)0x14 < pcVar11)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  uStack_94 = 2;
  if ((!bVar8) && (0x14 < uStack_218)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_01);
  }
  ppiVar6 = (int **)0x41800000;
  pvVar4 = (void *)0x2;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x3b8) + 100))();
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x3b8),0);
  (**(code **)(*piVar2 + 0xc))(*(undefined4 *)(param_1 + 0x3b8));
  uVar3 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffdc4,L"<s1><table><tr><td align=center width=",uVar3);
  sVar7 = _swprintf(awStack_15c,0xd18f84,SUB84((double)*(float *)(param_1 + 0x4ac),0));
  FUN_0040cae0(&stack0xfffffdc4,awStack_15c,sVar7);
  sVar7 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xfffffdc4,L">",sVar7);
  switch(*(undefined4 *)(param_1 + 0x4b0)) {
  case 0:
    uVar3 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy((char *)_Dest,"GRAPHICSOPTIONS_LOWLOD",0x16);
    *(char *)((int)_Dest + 0x16) = '\0';
    uStack_d4 = 0x11;
    puVar5 = FUN_009b5030(apvStack_17c,(undefined4 *)&stack0xfffffd80);
    FUN_0040cae0(&stack0xfffffdc4,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < uStack_174) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_17c[0]);
    }
    uStack_d4 = 2;
    if (uVar3 < 0x15) goto switchD_0081bf6f_default;
    goto LAB_0081c233;
  case 1:
    uVar3 = 0x20;
    ppiVar6 = _malloc(0x20);
    _strncpy((char *)ppiVar6,"GRAPHICSOPTIONS_MEDIUMLOD",0x19);
    *(char *)((int)ppiVar6 + 0x19) = '\0';
    uStack_d4 = 0x12;
    puVar5 = FUN_009b5030(&pvStack_1dc,(undefined4 *)&stack0xfffffda0);
    FUN_0040cae0(&stack0xfffffdc4,(wchar_t *)*puVar5,puVar5[1]);
    _Dest = ppiVar6;
    if (10 < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1dc);
    }
    break;
  case 2:
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    piStack_1f4 = (int *)0x20;
    _Dest = _malloc(0x20);
    _strncpy((char *)_Dest,"GRAPHICSOPTIONS_HIGHLOD",0x17);
    *(char *)((int)_Dest + 0x17) = '\0';
    uStack_d4 = 0x13;
    puVar5 = FUN_009b5030(&local_1bc,(undefined4 *)&stack0xfffffe04);
    FUN_0040cae0(&stack0xfffffdc4,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1bc);
    }
    uStack_d4 = 2;
    if (&DAT_00000014 < piStack_1f4) goto LAB_0081c233;
    goto switchD_0081bf6f_default;
  case 3:
    ppiStack_21c = &piStack_210;
    piStack_210 = (int *)((uint)piStack_210 & 0xffffff00);
    uStack_218 = 0;
    uStack_214 = 0x20;
    ppiStack_21c = _malloc(0x20);
    _strncpy((char *)ppiStack_21c,"GRAPHICSOPTIONS_BESTLOD",0x17);
    uStack_218 = 0x17;
    *(char *)((int)ppiStack_21c + 0x17) = '\0';
    uStack_d4 = 0x14;
    puVar5 = FUN_009b5030(apvStack_19c,&ppiStack_21c);
    FUN_0040cae0(&stack0xfffffdc4,(wchar_t *)*puVar5,puVar5[1]);
    _Dest = ppiStack_21c;
    uVar3 = uStack_214;
    if (&lpType_0000000a < puStack_194) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_19c[0]);
    }
    break;
  default:
    goto switchD_0081bf6f_default;
  }
  uStack_d4 = 2;
  if (0x14 < uVar3) {
LAB_0081c233:
    uStack_d4 = 2;
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
switchD_0081bf6f_default:
  sVar7 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffdc4,L"</td></tr></table></s1>",sVar7);
  puVar5 = operator_new(0x3fc);
  uStack_d4 = 0x15;
  if (puVar5 == (undefined4 *)0x0) {
    puStack_288 = (undefined4 *)0x0;
  }
  else {
    puStack_288 = FUN_00833290(puVar5);
  }
  uStack_d4 = 2;
  (**(code **)(*(int *)(param_1 + 0x44c) + 4))();
  *(undefined4 **)(param_1 + 0x460) = puStack_288;
  (*(code *)**(undefined4 **)(param_1 + 0x44c))();
  (**(code **)(**(int **)(param_1 + 0x460) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x460) + 0x84))(0);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x460) + 100))
            (2,*(undefined4 *)(param_1 + 0x418),(float)-(((float10)64.0 - fVar9) * (float10)0.5));
  FUN_00830550(*(void **)(param_1 + 0x460),9,&stack0xfffffd68);
  fVar10 = *(float *)(*(int *)(param_1 + 0x3b8) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x3d0) + 0x108);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x460) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x460) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x3d0),(float)-(((float10)fVar10 - fVar9) * (float10)0.5));
  (**(code **)(*piVar2 + 0xc))(*(undefined4 *)(param_1 + 0x460),1);
  (**(code **)(*piVar2 + 0x8c))(0x41800000);
  if (*(int *)(param_1 + 0x4b0) == 3) {
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0xc0))(0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x3d0) + 0xc0))(0);
  }
  if (ppiVar6 <= &lpType_0000000a) {
    ExceptionList = pvStack_108;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar4);
}


//// FUNCTION FUN_0081c670 @ 0081c670 ////

undefined4 * __thiscall FUN_0081c670(void *this,byte param_1)

{
  FUN_0081b0e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0081c6d0 @ 0081c6d0 ////

void __fastcall FUN_0081c6d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  undefined4 *puStack_1e8;
  uint uVar11;
  undefined4 *puStack_1a8;
  int **ppiStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  int *piStack_170;
  uint uStack_16c;
  undefined4 *puStack_168;
  int *piStack_164;
  undefined1 *puStack_160;
  char *pcVar12;
  int *piStack_154;
  undefined4 *puStack_140;
  char *pcStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  void *pvStack_108;
  void *apvStack_fc [2];
  undefined2 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 auStack_e8 [10];
  undefined1 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce44cd;
  pvStack_c = ExceptionList;
  uStack_134 = 0x81c701;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_134 = *(uint *)(*(int *)(param_1 + 0x3d0) + 0x118);
  uStack_138 = 2;
  local_4 = 0xffffffff;
  pcStack_13c = (char *)0x81c742;
  (**(code **)(*piVar3 + 100))();
  pcStack_13c = (char *)0x41200000;
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  (**(code **)(**(int **)(param_1 + 0x490) + 0x10))();
  (**(code **)(iVar1 + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x490) + 0xc))();
  puVar2 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    puStack_140 = FUN_00833290(puVar2);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3ec) + 4))();
  *(undefined4 **)(param_1 + 0x400) = puStack_140;
  (*(code *)**(undefined4 **)(param_1 + 0x3ec))();
  puStack_f4 = auStack_e8;
  auStack_e8[0] = 0;
  uStack_f0 = 0;
  uStack_ec = 10;
  uVar4 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_RESOLUTIONLABEL</translate></td></tr></table></t2>"
                      );
  puStack_160 = (undefined1 *)0x81c816;
  FUN_004036d0(&puStack_f4,
               L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_RESOLUTIONLABEL</translate></td></tr></table></t2>"
               ,uVar4);
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x54))();
  pcVar12 = (char *)0x0;
  puStack_160 = (undefined1 *)0x81c840;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x84))();
  puStack_160 = (undefined1 *)0x40800000;
  puStack_168 = (undefined4 *)0x1;
  uStack_16c = 0x81c853;
  piStack_164 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x400) + 100))();
  uStack_16c = 0x41800000;
  uStack_174 = 1;
  uStack_178 = 0x81c866;
  piStack_170 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x5c))();
  ppiStack_17c = *(int ***)(param_1 + 0x400);
  uStack_178 = 1;
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_168 = (undefined4 *)0x0;
    piStack_154 = piVar3;
  }
  else {
    piStack_154 = (int *)0x20;
    puStack_168 = pvVar5;
    pcVar12 = _malloc(0x20);
    _strncpy(pcVar12,"GRAPHICSOPTIONS_RESOLUTIONDOWN",0x1e);
    pcVar12[0x1e] = '\0';
    pcStack_13c = &stack0xfffffed0;
    uStack_138 = 0;
    uStack_134 = 0x14;
    _strncpy(pcStack_13c,"button_left.",0xc);
    uStack_138 = 0xc;
    pcStack_13c[0xc] = '\0';
    uStack_54 = 5;
    uStack_16c = 3;
    puVar2 = FUN_009b5030(apvStack_fc,(undefined4 *)&stack0xfffffea4);
    puStack_160 = &stack0xfffffe74;
    uStack_54 = 6;
    uStack_16c = 7;
    puStack_168 = FUN_0069fb10(pvVar5,(int *)&pcStack_13c,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x38c) + 4))();
  *(undefined4 **)(param_1 + 0x3a0) = puStack_168;
  (*(code *)**(undefined4 **)(param_1 + 0x38c))();
  if (((uStack_16c & 4) != 0) &&
     (uStack_16c = uStack_16c & 0xfffffffb, &lpType_0000000a < puStack_f4)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_fc[0]);
  }
  if (((uStack_16c & 2) != 0) && (uStack_16c = uStack_16c & 0xfffffffd, 0x14 < uStack_134)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  uStack_54 = 2;
  if (((uStack_16c & 1) != 0) && (uStack_16c = uStack_16c & 0xfffffffe, &DAT_00000014 < piStack_154)
     ) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x5c))();
  uVar4 = 2;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 100))();
  pcVar12 = (char *)0x0;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x3a0),1);
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  bVar8 = pvVar5 == (void *)0x0;
  if (bVar8) {
    puStack_1a8 = (undefined4 *)0x0;
  }
  else {
    ppiStack_17c = &piStack_170;
    piStack_170 = (int *)((uint)piStack_170 & 0xffffff00);
    uStack_178 = 0;
    uStack_174 = 0x20;
    ppiStack_17c = _malloc(0x20);
    _strncpy((char *)ppiStack_17c,"GRAPHICSOPTIONS_RESOLUTIONUP",0x1c);
    uStack_178 = 0x1c;
    *(char *)(ppiStack_17c + 7) = '\0';
    pcVar12 = &stack0xfffffe70;
    uVar4 = 0x14;
    _strncpy(pcVar12,"button_right.",0xd);
    pcVar12[0xd] = '\0';
    uStack_94 = 0xc;
    puVar2 = FUN_009b5030(&pcStack_13c,&ppiStack_17c);
    uStack_94 = 0xd;
    puStack_1a8 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffe64,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_94 = 0x10;
  (**(code **)(*(int *)(param_1 + 0x374) + 4))();
  *(undefined4 **)(param_1 + 0x388) = puStack_1a8;
  (*(code *)**(undefined4 **)(param_1 + 0x374))();
  if ((!bVar8) && (10 < uStack_134)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  if ((!bVar8) && (0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  uStack_94 = 2;
  if ((!bVar8) && (0x14 < uStack_174)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_17c);
  }
  uVar11 = 0x41800000;
  pvVar5 = (void *)0x2;
  (**(code **)(**(int **)(param_1 + 0x388) + 0x60))();
  (**(code **)(**(int **)(param_1 + 0x388) + 100))();
  (**(code **)(**(int **)(param_1 + 0x388) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x388) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x388),0);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x388));
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffe64,L"<s1><table><tr><td align=center width=",uVar4);
  sVar6 = _swprintf((wchar_t *)&stack0xfffffea4,0xd18f84,
                    SUB84((double)*(float *)(param_1 + 0x4ac),0));
  FUN_0040cae0(&stack0xfffffe64,(wchar_t *)&stack0xfffffea4,sVar6);
  sVar6 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xfffffe64,L">",sVar6);
  puVar2 = FUN_0099da80(&ppiStack_17c,*(int *)(param_1 + 0x4b8),*(int *)(param_1 + 0x4b4));
  FUN_0040cae0(&stack0xfffffe64,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_174) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_17c);
  }
  sVar6 = FUN_00ace02d(L"</td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffe64,L"</td></tr></table></s1>",sVar6);
  puVar2 = operator_new(0x3fc);
  uStack_d4 = 0x11;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_1e8 = (undefined4 *)0x0;
  }
  else {
    puStack_1e8 = FUN_00833290(puVar2);
  }
  uStack_d4 = 2;
  (**(code **)(*(int *)(param_1 + 0x434) + 4))();
  *(undefined4 **)(param_1 + 0x448) = puStack_1e8;
  (*(code *)**(undefined4 **)(param_1 + 0x434))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x84))(0);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x448) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x448) + 100))
            (2,*(undefined4 *)(param_1 + 0x400),(float)-(((float10)64.0 - fVar9) * (float10)0.5));
  FUN_00830550(*(void **)(param_1 + 0x448),9,&stack0xfffffe08);
  fVar10 = *(float *)(*(int *)(param_1 + 0x388) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x3a0) + 0x108);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x448) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x448) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x3a0),(float)-(((float10)fVar10 - fVar9) * (float10)0.5));
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x448),1);
  (**(code **)(*piVar3 + 0x8c))(0x41800000);
  iVar1 = *(int *)(param_1 + 0x4b4);
  iVar7 = FUN_0099cae0(*(int *)(param_1 + 0x4b8));
  if (iVar1 == iVar7 + -1) {
    (**(code **)(**(int **)(param_1 + 0x388) + 0xc0))(0);
  }
  else if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xc0))(0);
  }
  if (10 < uVar11) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar5);
  }
  ExceptionList = pvStack_108;
  return;
}


//// FUNCTION FUN_0081cf50 @ 0081cf50 ////

void __fastcall FUN_0081cf50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  size_t sVar6;
  bool bVar7;
  float10 fVar8;
  wchar_t *pwVar9;
  float fVar10;
  undefined4 *puStack_1e8;
  int *piVar11;
  undefined4 *puStack_1a8;
  int **ppiStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  int *piStack_170;
  uint uStack_16c;
  undefined4 *puStack_168;
  int *piStack_164;
  undefined1 *puStack_160;
  char *pcVar12;
  int *piStack_154;
  undefined4 *puStack_140;
  char *pcStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  void *pvStack_10c;
  void *apvStack_fc [2];
  undefined2 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 auStack_e8 [10];
  undefined1 uStack_d4;
  undefined4 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce45fd;
  pvStack_c = ExceptionList;
  uStack_134 = 0x81cf81;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x344);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar2);
  }
  uStack_134 = *(uint *)(*(int *)(param_1 + 0x3a0) + 0x118);
  uStack_138 = 2;
  local_4 = 0xffffffff;
  pcStack_13c = (char *)0x81cfc2;
  (**(code **)(*piVar3 + 100))();
  pcStack_13c = (char *)0x41200000;
  (**(code **)(*piVar3 + 0x5c))();
  iVar1 = *piVar3;
  (**(code **)(**(int **)(param_1 + 0x490) + 0x10))();
  (**(code **)(iVar1 + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x490) + 0xc))();
  puVar2 = operator_new(0x3fc);
  uStack_2c = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_140 = (undefined4 *)0x0;
  }
  else {
    puStack_140 = FUN_00833290(puVar2);
  }
  uStack_2c = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x41c) + 4))();
  *(undefined4 **)(param_1 + 0x430) = puStack_140;
  (*(code *)**(undefined4 **)(param_1 + 0x41c))();
  puStack_f4 = auStack_e8;
  auStack_e8[0] = 0;
  uStack_f0 = 0;
  uStack_ec = 10;
  uVar4 = FUN_00ace02d(
                      L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_SCREENQUALITYLABEL</translate></td></tr></table></t2>"
                      );
  puStack_160 = (undefined1 *)0x81d096;
  FUN_004036d0(&puStack_f4,
               L"<t2><table><tr><td align=center width=364><translate>GRAPHICSOPTIONS_SCREENQUALITYLABEL</translate></td></tr></table></t2>"
               ,uVar4);
  uStack_2c = 2;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x54))();
  pcVar12 = (char *)0x0;
  puStack_160 = (undefined1 *)0x81d0c0;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x84))();
  puStack_160 = (undefined1 *)0x40800000;
  puStack_168 = (undefined4 *)0x1;
  uStack_16c = 0x81d0d3;
  piStack_164 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x430) + 100))();
  uStack_16c = 0x41800000;
  uStack_174 = 1;
  uStack_178 = 0x81d0e6;
  piStack_170 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x430) + 0x5c))();
  ppiStack_17c = *(int ***)(param_1 + 0x430);
  uStack_178 = 1;
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_168 = (undefined4 *)0x0;
    piStack_154 = piVar3;
  }
  else {
    piStack_154 = (int *)0x40;
    puStack_168 = pvVar5;
    pcVar12 = _malloc(0x40);
    _strncpy(pcVar12,"GRAPHICSOPTIONS_SCREENQUALITYDOWN",0x21);
    pcVar12[0x21] = '\0';
    pcStack_13c = &stack0xfffffed0;
    uStack_138 = 0;
    uStack_134 = 0x14;
    _strncpy(pcStack_13c,"button_left.",0xc);
    uStack_138 = 0xc;
    pcStack_13c[0xc] = '\0';
    uStack_54 = 5;
    uStack_16c = 3;
    puVar2 = FUN_009b5030(apvStack_fc,(undefined4 *)&stack0xfffffea4);
    puStack_160 = &stack0xfffffe74;
    uStack_54 = 6;
    uStack_16c = 7;
    puStack_168 = FUN_0069fb10(pvVar5,(int *)&pcStack_13c,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_54 = 9;
  (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
  *(undefined4 **)(param_1 + 0x370) = puStack_168;
  (*(code *)**(undefined4 **)(param_1 + 0x35c))();
  if (((uStack_16c & 4) != 0) &&
     (uStack_16c = uStack_16c & 0xfffffffb, &lpType_0000000a < puStack_f4)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_fc[0]);
  }
  if (((uStack_16c & 2) != 0) && (uStack_16c = uStack_16c & 0xfffffffd, 0x14 < uStack_134)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  uStack_54 = 2;
  if (((uStack_16c & 1) != 0) && (uStack_16c = uStack_16c & 0xfffffffe, &DAT_00000014 < piStack_154)
     ) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  (**(code **)(**(int **)(param_1 + 0x370) + 0x5c))();
  uVar4 = 2;
  (**(code **)(**(int **)(param_1 + 0x370) + 100))();
  pcVar12 = (char *)0x0;
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x370),1);
  (**(code **)(*piVar3 + 0xc))();
  pvVar5 = operator_new(0x420);
  bVar7 = pvVar5 == (void *)0x0;
  if (bVar7) {
    puStack_1a8 = (undefined4 *)0x0;
  }
  else {
    ppiStack_17c = &piStack_170;
    piStack_170 = (int *)((uint)piStack_170 & 0xffffff00);
    uStack_178 = 0;
    uStack_174 = 0x20;
    ppiStack_17c = _malloc(0x20);
    _strncpy((char *)ppiStack_17c,"GRAPHICSOPTIONS_SCREENQUALITYUP",0x1f);
    uStack_178 = 0x1f;
    *(char *)((int)ppiStack_17c + 0x1f) = '\0';
    pcVar12 = &stack0xfffffe70;
    uVar4 = 0x14;
    _strncpy(pcVar12,"button_right.",0xd);
    pcVar12[0xd] = '\0';
    uStack_94 = 0xc;
    puVar2 = FUN_009b5030(&pcStack_13c,&ppiStack_17c);
    uStack_94 = 0xd;
    puStack_1a8 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffe64,puVar2,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  uStack_94 = 0x10;
  (**(code **)(*(int *)(param_1 + 0x344) + 4))();
  *(undefined4 **)(param_1 + 0x358) = puStack_1a8;
  (*(code *)**(undefined4 **)(param_1 + 0x344))();
  if ((!bVar7) && (10 < uStack_134)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_13c);
  }
  if ((!bVar7) && (0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  uStack_94 = 2;
  if ((!bVar7) && (0x14 < uStack_174)) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_17c);
  }
  piVar11 = piVar3;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x60))();
  pvVar5 = (void *)0x80000000;
  (**(code **)(**(int **)(param_1 + 0x358) + 100))();
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x358) + 0x18))();
  FUN_0073e8b0(*(void **)(param_1 + 0x358),0);
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x358));
  uVar4 = FUN_00ace02d(L"<s1><table><tr><td align=center width=");
  FUN_004036d0(&stack0xfffffe64,L"<s1><table><tr><td align=center width=",uVar4);
  sVar6 = _swprintf((wchar_t *)&stack0xfffffea4,0xd18f84,
                    SUB84((double)*(float *)(param_1 + 0x4ac),0));
  FUN_0040cae0(&stack0xfffffe64,(wchar_t *)&stack0xfffffea4,sVar6);
  sVar6 = FUN_00ace02d(L"><translate>");
  FUN_0040cae0(&stack0xfffffe64,L"><translate>",sVar6);
  if (*(int *)(param_1 + 0x4b8) == 0) {
    sVar6 = FUN_00ace02d(L"GRAPHICSOPTIONS_SCREENQUALITYNORMAL");
    pwVar9 = L"GRAPHICSOPTIONS_SCREENQUALITYNORMAL";
  }
  else if (*(int *)(param_1 + 0x4b8) == 1) {
    sVar6 = FUN_00ace02d(L"GRAPHICSOPTIONS_SCREENQUALITYHIGH");
    pwVar9 = L"GRAPHICSOPTIONS_SCREENQUALITYHIGH";
  }
  else {
    sVar6 = FUN_00ace02d(L"ERROR, tell KIERAN");
    pwVar9 = L"ERROR, tell KIERAN";
  }
  FUN_0040cae0(&stack0xfffffe64,pwVar9,sVar6);
  sVar6 = FUN_00ace02d(L"</translate></td></tr></table></s1>");
  FUN_0040cae0(&stack0xfffffe64,L"</translate></td></tr></table></s1>",sVar6);
  puVar2 = operator_new(0x3fc);
  uStack_d4 = 0x11;
  if (puVar2 == (undefined4 *)0x0) {
    puStack_1e8 = (undefined4 *)0x0;
  }
  else {
    puStack_1e8 = FUN_00833290(puVar2);
  }
  uStack_d4 = 2;
  (**(code **)(*(int *)(param_1 + 0x464) + 4))();
  *(undefined4 **)(param_1 + 0x478) = puStack_1e8;
  (*(code *)**(undefined4 **)(param_1 + 0x464))();
  (**(code **)(**(int **)(param_1 + 0x478) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x478) + 0x84))(0);
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x478) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x478) + 100))
            (2,*(undefined4 *)(param_1 + 0x430),(float)-(((float10)64.0 - fVar8) * (float10)0.5));
  FUN_00830550(*(void **)(param_1 + 0x478),9,&stack0xfffffe08);
  fVar10 = *(float *)(*(int *)(param_1 + 0x358) + 0xc0) -
           *(float *)(*(int *)(param_1 + 0x370) + 0x108);
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x478) + 0x10))();
  (**(code **)(**(int **)(param_1 + 0x478) + 0x5c))
            (2,*(undefined4 *)(param_1 + 0x370),(float)-(((float10)fVar10 - fVar8) * (float10)0.5));
  (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x478),1);
  (**(code **)(*piVar3 + 0x8c))(0x41800000);
  if (*(int *)(param_1 + 0x4b8) == 1) {
    (**(code **)(**(int **)(param_1 + 0x358) + 0xc0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x370) + 0xc0))(0);
  }
  if (&lpType_0000000a < piVar11) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar5);
  }
  ExceptionList = pvStack_10c;
  return;
}


//// FUNCTION FUN_0081d7c0 @ 0081d7c0 ////

/* WARNING: Removing unreachable block (ram,0x0081dbf3) */
/* WARNING: Removing unreachable block (ram,0x0081dc01) */
/* WARNING: Removing unreachable block (ram,0x0081dc0e) */
/* WARNING: Removing unreachable block (ram,0x0081dde5) */
/* WARNING: Removing unreachable block (ram,0x0081dd04) */
/* WARNING: Removing unreachable block (ram,0x0081dde7) */
/* WARNING: Removing unreachable block (ram,0x0081de0b) */
/* WARNING: Removing unreachable block (ram,0x0081de1f) */
/* WARNING: Removing unreachable block (ram,0x0081de2c) */
/* WARNING: Removing unreachable block (ram,0x0081de33) */
/* WARNING: Removing unreachable block (ram,0x0081de47) */
/* WARNING: Removing unreachable block (ram,0x0081de54) */
/* WARNING: Removing unreachable block (ram,0x0081de66) */
/* WARNING: Removing unreachable block (ram,0x0081de6d) */
/* WARNING: Removing unreachable block (ram,0x0081de7a) */

int * __fastcall FUN_0081d7c0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char *_Dest;
  undefined4 *puStack_78;
  char *pcStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  undefined1 uStack_24;
  undefined3 uStack_23;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4763;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d5c8fc;
  param_1[0x14] = (int)&PTR_LAB_00d5c8e0;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = (int)(param_1 + 0xd1);
  param_1[0xd1] = (int)&PTR_FUN_00d172a0;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = (int)(param_1 + 0xd7);
  param_1[0xd7] = (int)&PTR_FUN_00d172a0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = (int)(param_1 + 0xdd);
  param_1[0xdd] = (int)&PTR_FUN_00d172a0;
  param_1[0xe2] = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = (int)(param_1 + 0xe3);
  param_1[0xe3] = (int)&PTR_FUN_00d172a0;
  param_1[0xe8] = 0;
  param_1[0xec] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = (int)(param_1 + 0xe9);
  param_1[0xe9] = (int)&PTR_FUN_00d172a0;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = (int)(param_1 + 0xef);
  param_1[0xef] = (int)&PTR_FUN_00d172a0;
  param_1[0xf4] = 0;
  param_1[0xf8] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = (int)(param_1 + 0xf5);
  param_1[0xf5] = (int)&PTR_FUN_00d172a0;
  param_1[0xfa] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = (int)(param_1 + 0xfb);
  param_1[0xfb] = (int)&PTR_FUN_00d195f8;
  param_1[0x100] = 0;
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = (int)(param_1 + 0x101);
  param_1[0x101] = (int)&PTR_FUN_00d195f8;
  param_1[0x106] = 0;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = (int)(param_1 + 0x107);
  param_1[0x107] = (int)&PTR_FUN_00d195f8;
  param_1[0x10c] = 0;
  param_1[0x110] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = (int)(param_1 + 0x10d);
  param_1[0x10d] = (int)&PTR_FUN_00d195f8;
  param_1[0x112] = 0;
  param_1[0x116] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = (int)(param_1 + 0x113);
  param_1[0x113] = (int)&PTR_FUN_00d195f8;
  param_1[0x118] = 0;
  param_1[0x11c] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = (int)(param_1 + 0x119);
  param_1[0x119] = (int)&PTR_FUN_00d195f8;
  param_1[0x11e] = 0;
  piVar2 = param_1 + 0x11f;
  param_1[0x122] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = (int)piVar2;
  *piVar2 = (int)&PTR_FUN_00d322b0;
  param_1[0x124] = 0;
  param_1[0x128] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = (int)(param_1 + 0x125);
  param_1[0x125] = (int)&PTR_FUN_00d18c2c;
  param_1[0x12a] = 0;
  local_4._0_1_ = 0xf;
  local_4._1_3_ = 0;
  (*(code *)DAT_0104eb84[1])();
  DAT_0104eb98 = param_1;
  (*(code *)*DAT_0104eb84)();
  param_1[299] = 0x43500000;
  FUN_00819280(param_1);
  puVar1 = operator_new(0x3ac);
  local_4._0_1_ = 0x10;
  if (puVar1 == (undefined4 *)0x0) {
    puStack_78 = (undefined4 *)0x0;
  }
  else {
    puStack_78 = FUN_0063f620(puVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,0xf);
  (**(code **)(*piVar2 + 4))();
  param_1[0x124] = (int)puStack_78;
  (**(code **)*piVar2)();
  (**(code **)(*(int *)param_1[0x124] + 0x74))();
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0x10))();
  piVar3 = (int *)FUN_0071b2a0();
  piVar2 = (int *)param_1[0x124];
  (**(code **)(*piVar3 + 0x10))();
  (**(code **)(*piVar2 + 0x10))();
  piVar3 = (int *)FUN_0071b2a0();
  piVar2 = (int *)param_1[0x124];
  (**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar2 + 0x14))();
  (**(code **)(*(int *)param_1[0x124] + 0x5c))();
  (**(code **)(*(int *)param_1[0x124] + 100))();
  FUN_0073f6e0(param_1,(int *)param_1[0x124]);
  FUN_0063e6c0((void *)param_1[0x124],0xffa7b8d6,0xff77909f);
  FUN_0063e890((void *)param_1[0x124],'\x01');
  pcStack_6c = acStack_60;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x14;
  _strncpy(pcStack_6c,"ui/button_video.dds",0x13);
  uStack_68 = 0x13;
  pcStack_6c[0x13] = '\0';
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"FRONTEND_VIDEOOPTION",0x14);
  _Dest[0x14] = '\0';
  uStack_24 = 0x12;
  puVar1 = FUN_009b5030(apvStack_4c,(undefined4 *)&stack0xffffff74);
  uStack_24 = 0x13;
  FUN_0063ec80((void *)param_1[0x124],puVar1,&pcStack_6c);
  if (uStack_44 < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_4c[0]);
}


//// FUNCTION FUN_0081df10 @ 0081df10 ////

int * FUN_0081df10(void)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce477b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x4c8);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_0081d7c0(piVar1);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_0081e0d0 @ 0081e0d0 ////

void __cdecl FUN_0081e0d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0081e140 @ 0081e140 ////

void __cdecl FUN_0081e140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0081e180 @ 0081e180 ////

void __cdecl FUN_0081e180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0081e200 @ 0081e200 ////

void FUN_0081e200(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) == 1) {
    FUN_005e5420();
    FUN_005e5420();
  }
  return;
}


//// FUNCTION FUN_0081e2a0 @ 0081e2a0 ////

float10 __thiscall FUN_0081e2a0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x36c) == 1) {
    fVar3 = (float10)log2((float10)*(float *)(param_1 + 0x374));
    fVar3 = (float10)0.6931471805599453 * fVar3;
  }
  else {
    fVar3 = (float10)*(float *)(param_1 + 0x374);
  }
  fVar3 = (((float10)*(float *)(param_1 + 0x108) - (float10)*(float *)(param_1 + 0xc0)) -
          ((float10)param_2 + (float10)param_2)) / (fVar3 - (float10)*(float *)(param_1 + 0x370));
  *(float *)(param_1 + 0x354) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0x370);
  fVar2 = *(float *)(param_1 + 0xc0);
  FUN_005e5420();
  return (float10)(float)(-(float10)fVar1 * fVar3 + (float10)fVar2 + (float10)param_2);
}


//// FUNCTION FUN_0081e360 @ 0081e360 ////

float10 __thiscall FUN_0081e360(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x37c) == 1) {
    fVar3 = (float10)log2((float10)*(float *)(param_1 + 900));
    fVar3 = (float10)0.6931471805599453 * fVar3;
  }
  else {
    fVar3 = (float10)*(float *)(param_1 + 900);
  }
  fVar3 = (((float10)*(float *)(param_1 + 0xe4) - (float10)*(float *)(param_1 + 0x9c)) -
          ((float10)param_2 + (float10)param_2)) / (fVar3 - (float10)*(float *)(param_1 + 0x380));
  *(float *)(param_1 + 0x358) = (float)fVar3;
  fVar1 = *(float *)(param_1 + 0x380);
  fVar2 = *(float *)(param_1 + 0xe4);
  FUN_005e5420();
  return (float10)(float)(((float10)fVar2 - -(float10)fVar1 * fVar3) - (float10)param_2);
}


//// FUNCTION FUN_0081e5a0 @ 0081e5a0 ////

void __cdecl FUN_0081e5a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0081e630 @ 0081e630 ////

void __cdecl FUN_0081e630(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0081e6d0 @ 0081e6d0 ////

void __fastcall FUN_0081e6d0(int param_1)

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


//// FUNCTION FUN_0081e740 @ 0081e740 ////

undefined4 * FUN_0081e740(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0081e630(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0081e770 @ 0081e770 ////

void __fastcall FUN_0081e770(int param_1)

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


//// FUNCTION FUN_0081e7a0 @ 0081e7a0 ////

void FUN_0081e7a0(void)

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
  puStack_8 = &LAB_00ce4798;
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


//// FUNCTION FUN_0081e860 @ 0081e860 ////

void __thiscall FUN_0081e860(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ce47b0;
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
      uVar8 = FUN_0081e7a0();
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
      puVar5 = (undefined4 *)FUN_0081e5a0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0081e630(puVar5,param_2,&local_24);
      FUN_0081e5a0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
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
      FUN_0081e5a0(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_0081e740(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_0081e0d0(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0081e5a0(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0081e180(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_0081e0d0(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0081eae0 @ 0081eae0 ////

void __thiscall FUN_0081eae0(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 8) - iVar5 >> 4;
  }
  if (uVar4 < param_1) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 4;
    }
    FUN_0081e860(this,*(undefined4 **)((int)this + 8),param_1 - iVar5,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if (((iVar5 != 0) &&
      (puVar1 = *(undefined4 **)((int)this + 8), param_1 < (uint)((int)puVar1 - iVar5 >> 4))) &&
     (puVar2 = (undefined4 *)(param_1 * 0x10 + iVar5), puVar2 != puVar1)) {
    uVar3 = FUN_0081e140(puVar1,puVar1,puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  return;
}


//// FUNCTION FUN_0081eb60 @ 0081eb60 ////

void __thiscall FUN_0081eb60(void *this,uint param_1)

{
  FUN_0081eae0(this,param_1);
  return;
}


//// FUNCTION FUN_0081ebb0 @ 0081ebb0 ////

void __thiscall FUN_0081ebb0(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(int *)((int)this + 0x360) == 0) ||
     ((uint)(*(int *)((int)this + 0x364) - *(int *)((int)this + 0x360) >> 4) <= param_1)) {
    FUN_0081eb60((void *)((int)this + 0x35c),param_1 + 1);
  }
  puVar1 = (undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x360));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}


//// FUNCTION FUN_0081ec10 @ 0081ec10 ////

int __thiscall FUN_0081ec10(void *this,uint param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)((int)this + 0x360) == 0) ||
     ((uint)(*(int *)((int)this + 0x364) - *(int *)((int)this + 0x360) >> 4) <= param_1)) {
    local_10 = 0;
    local_c = 1;
    local_8 = 1;
    local_4 = *(undefined4 *)(&DAT_00e5c31c + (param_1 % 6) * 4);
    FUN_0081ebb0(this,param_1,&local_10);
  }
  return param_1 * 0x10 + *(int *)((int)this + 0x360);
}


//// FUNCTION FUN_0081ec90 @ 0081ec90 ////

void __fastcall FUN_0081ec90(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar5 = FUN_0081e2a0((int)param_1,4.0);
  local_18 = (float)fVar5;
  fVar5 = FUN_0081e360((int)param_1,4.0);
  local_14 = (float)fVar5;
  iVar3 = *(int *)((int)param_1 + 0x348);
  local_28 = 0;
  if (iVar3 != *(int *)((int)param_1 + 0x34c)) {
    do {
      iVar2 = FUN_0081ec10(param_1,local_28);
      pfVar4 = *(float **)(iVar3 + 4);
      bVar1 = true;
      if (pfVar4 != *(float **)(iVar3 + 8)) {
        do {
          if (*(int *)((int)param_1 + 0x36c) == 1) {
            fVar5 = (float10)log2((float10)*pfVar4);
            fVar5 = (float10)0.6931471805599453 * fVar5;
          }
          else {
            fVar5 = (float10)*pfVar4;
          }
          if (*(int *)((int)param_1 + 0x37c) == 1) {
            fVar6 = (float10)log2((float10)pfVar4[1]);
            fVar6 = (float10)0.6931471805599453 * fVar6;
          }
          else {
            fVar6 = (float10)pfVar4[1];
          }
          local_20 = (float)(fVar5 * (float10)*(float *)((int)param_1 + 0x354) + (float10)local_18);
          local_1c = (float)((float10)local_14 - fVar6 * (float10)*(float *)((int)param_1 + 0x358));
          FUN_0081e200(&local_20,iVar2);
          if ((!bVar1) && (*(int *)(iVar2 + 8) == 1)) {
            FUN_005e5420();
          }
          local_10 = local_20;
          local_c = local_1c;
          pfVar4 = pfVar4 + 2;
          bVar1 = false;
        } while (pfVar4 != *(float **)(iVar3 + 8));
      }
      iVar3 = iVar3 + 0x10;
      local_28 = local_28 + 1;
    } while (iVar3 != *(int *)((int)param_1 + 0x34c));
  }
  return;
}


//// FUNCTION FUN_0081edd0 @ 0081edd0 ////

void __fastcall FUN_0081edd0(int param_1)

{
  if (*(int *)(param_1 + 0x348) != 0) {
    FUN_008154e0(*(int *)(param_1 + 0x348),*(int *)(param_1 + 0x34c));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x348));
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x378) != '\0') {
    *(undefined4 *)(param_1 + 0x370) = 0;
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  if (*(char *)(param_1 + 0x388) != '\0') {
    *(undefined4 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 900) = 0;
  }
  return;
}


//// FUNCTION FUN_0081ee40 @ 0081ee40 ////

undefined4 * __fastcall FUN_0081ee40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce47d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d5cde4;
  param_1[0x14] = &PTR_FUN_00d5cdcc;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xde) = 1;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 1;
  FUN_0081edd0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0081eec0 @ 0081eec0 ////

undefined4 * __thiscall FUN_0081eec0(void *this,byte param_1)

{
  FUN_0081eee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0081eee0 @ 0081eee0 ////

void __fastcall FUN_0081eee0(undefined4 *param_1)

{
  if ((void *)param_1[0xd8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd8]);
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  if (param_1[0xd2] != 0) {
    FUN_008154e0(param_1[0xd2],param_1[0xd3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0081ef50 @ 0081ef50 ////

int * FUN_0081ef50(void)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce47f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x3a8);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_006889c0(pvVar2,'\x01');
  }
  iVar1 = *piVar3;
  uVar7 = 0x41800000;
  local_4 = 0xffffffff;
  uVar4 = FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))(1,uVar4,uVar7);
  iVar1 = *piVar3;
  uVar7 = 0x41800000;
  uVar4 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar4,uVar7);
  (**(code **)(*piVar3 + 0x74))(0x44480000,0x44100000);
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0xc))(piVar3,1);
  puVar6 = operator_new(0x38c);
  if (puVar6 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_0081ee40(puVar6);
  }
  pvVar2 = (void *)0x0;
  (**(code **)(*piVar5 + 0x70))(piVar3[0xdb]);
  (**(code **)(*(int *)piVar3[0xdb] + 0xc))(piVar5,1);
  ExceptionList = pvVar2;
  return piVar5;
}


//// FUNCTION FUN_0081f050 @ 0081f050 ////

void __thiscall FUN_0081f050(void *this,float *param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  void *this_00;
  float *pfVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x348) == 0) ||
     ((uint)(*(int *)((int)this + 0x34c) - *(int *)((int)this + 0x348) >> 4) <= param_2)) {
    FUN_008166e0((void *)((int)this + 0x344),param_2 + 1);
  }
  piVar3 = (int *)FUN_0081ec10(this,param_2);
  iVar5 = param_2 * 0x10;
  if (*piVar3 == 1) {
    this_00 = (void *)(iVar5 + *(int *)((int)this + 0x348));
    pfVar4 = *(float **)((int)this_00 + 4);
    if (pfVar4 != *(float **)(iVar5 + 8 + *(int *)((int)this + 0x348))) {
      do {
        if (*param_1 < *pfVar4) break;
        pfVar4 = pfVar4 + 2;
      } while (pfVar4 != *(float **)(*(int *)((int)this + 0x348) + 8 + iVar5));
    }
  }
  else {
    if (*piVar3 != 2) {
      FUN_0046eda0((void *)(iVar5 + *(int *)((int)this + 0x348)),param_1);
      goto LAB_0081f11d;
    }
    iVar2 = *(int *)((int)this + 0x348);
    pfVar4 = *(float **)(iVar2 + 4 + iVar5);
    this_00 = (void *)(iVar2 + iVar5);
    if (pfVar4 != *(float **)(iVar2 + 8 + iVar5)) {
      do {
        if (param_1[1] < pfVar4[1]) break;
        pfVar4 = pfVar4 + 2;
      } while (pfVar4 != *(float **)(*(int *)((int)this + 0x348) + 8 + iVar5));
    }
  }
  FUN_0046e9b0(this_00,pfVar4,1,param_1);
LAB_0081f11d:
  if (*(char *)((int)this + 0x378) != '\0') {
    if (*(float *)((int)this + 0x374) <= *param_1) {
      fVar1 = *param_1;
    }
    else {
      fVar1 = *(float *)((int)this + 0x374);
    }
    *(float *)((int)this + 0x374) = fVar1;
    if (*param_1 <= *(float *)((int)this + 0x370)) {
      fVar1 = *param_1;
    }
    else {
      fVar1 = *(float *)((int)this + 0x370);
    }
    *(float *)((int)this + 0x370) = fVar1;
  }
  if (*(char *)((int)this + 0x388) != '\0') {
    if (*(float *)((int)this + 900) <= param_1[1]) {
      fVar1 = param_1[1];
    }
    else {
      fVar1 = *(float *)((int)this + 900);
    }
    *(float *)((int)this + 900) = fVar1;
    if (*(float *)((int)this + 0x380) < param_1[1]) {
      *(undefined4 *)((int)this + 0x380) = *(undefined4 *)((int)this + 0x380);
      return;
    }
    *(float *)((int)this + 0x380) = param_1[1];
  }
  return;
}


//// FUNCTION FUN_0081f210 @ 0081f210 ////

undefined4 * __thiscall FUN_0081f210(void *this,undefined4 param_1)

{
  FUN_007432f0(this);
  *(undefined4 *)((int)this + 0x344) = param_1;
  *(undefined ***)this = &PTR_FUN_00d5cf0c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5cef0;
  return this;
}


//// FUNCTION FUN_0081f240 @ 0081f240 ////

undefined4 FUN_0081f240(void)

{
  return DAT_0104eba0;
}


//// FUNCTION FUN_0081f2d0 @ 0081f2d0 ////

int __fastcall FUN_0081f2d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_0081f3c0 @ 0081f3c0 ////

int __fastcall FUN_0081f3c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x9c;
}


//// FUNCTION FUN_0081f660 @ 0081f660 ////

void __cdecl FUN_0081f660(int param_1)

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


//// FUNCTION FUN_0081f680 @ 0081f680 ////

void __cdecl FUN_0081f680(int *param_1)

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


//// FUNCTION FUN_0081f6b0 @ 0081f6b0 ////

void __fastcall FUN_0081f6b0(int *param_1)

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


//// FUNCTION FUN_0081f710 @ 0081f710 ////

void __fastcall FUN_0081f710(int *param_1)

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


//// FUNCTION FUN_0081f780 @ 0081f780 ////

void __cdecl FUN_0081f780(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_0081f870 @ 0081f870 ////

int * __thiscall FUN_0081f870(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0081f890 @ 0081f890 ////

int * __thiscall FUN_0081f890(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0081f8b0 @ 0081f8b0 ////

int * __thiscall FUN_0081f8b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0081f8d0 @ 0081f8d0 ////

int * __thiscall FUN_0081f8d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0081f960 @ 0081f960 ////

undefined4 FUN_0081f960(float *param_1,float *param_2)

{
  if (*param_1 < *param_2) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0081f9c0 @ 0081f9c0 ////

void __cdecl FUN_0081f9c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
  }
  return;
}


//// FUNCTION FUN_0081fa30 @ 0081fa30 ////

undefined4 * __thiscall FUN_0081fa30(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0081fa60 @ 0081fa60 ////

void __fastcall FUN_0081fa60(int *param_1)

{
  FUN_0073fb40(param_1);
  FUN_007be840((void *)param_1[0xd1],(void *)param_1[0xb5]);
  return;
}


//// FUNCTION FUN_0081fac0 @ 0081fac0 ////

void __thiscall FUN_0081fac0(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_0081fe20 @ 0081fe20 ////

void __thiscall FUN_0081fe20(void *this,int param_1)

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


//// FUNCTION FUN_0081fe80 @ 0081fe80 ////

void __thiscall FUN_0081fe80(void *this,int *param_1)

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


//// FUNCTION FUN_0081ff20 @ 0081ff20 ////

int * __fastcall FUN_0081ff20(int *param_1)

{
  FUN_0081f710(param_1);
  return param_1;
}


//// FUNCTION FUN_0081ff30 @ 0081ff30 ////

int * __fastcall FUN_0081ff30(int *param_1)

{
  FUN_0081f6b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00820100 @ 00820100 ////

void __cdecl FUN_00820100(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_00820140 @ 00820140 ////

void __cdecl FUN_00820140(int *param_1)

{
  int *piVar1;
  undefined4 uStackY_1c;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1d4))();
  _uStackY_1c = CONCAT44(0x82015f,uStackY_1c);
  (**(code **)(*piVar1 + 8))();
  _uStackY_1c = CONCAT44(&stack0xfffffff4,0x8201af);
  FUN_004fdd00((longlong *)&stack0xfffffff4);
  _uStackY_1c = CONCAT44(0x8201e1,uStackY_1c);
  piVar1 = (int *)(**(code **)(*param_1 + 0x1d4))();
  _uStackY_1c = FUN_00acd42c();
  FUN_00471b10((longlong *)&uStackY_1c);
  (**(code **)(*piVar1 + 4))();
  return;
}


//// FUNCTION FUN_00820210 @ 00820210 ////

void __cdecl FUN_00820210(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uStackY_24;
  longlong lStack_c;
  
  piVar3 = (int *)(**(code **)(*param_1 + 0x1d4))();
  _uStackY_24 = CONCAT44(0x82022f,uStackY_24);
  plVar4 = (longlong *)(**(code **)(*piVar3 + 8))();
  fVar1 = (float)*plVar4 * 1.1920929e-07;
  if (fVar1 <= 50000.0) {
    fVar2 = 500.0;
    if (10000.0 < fVar1) {
      fVar2 = 2000.0;
    }
  }
  else {
    fVar2 = 5000.0;
  }
  _uStackY_24 = CONCAT44(&stack0xffffffec,0x820281);
  plVar4 = FUN_004fdce0((longlong *)&stack0xffffffec);
  if (fVar1 - fVar2 <= (float)*plVar4 * 1.1920929e-07) {
    _uStackY_24 = CONCAT44(&lStack_c,0x8202ab);
    FUN_004fdce0(&lStack_c);
  }
  _uStackY_24 = CONCAT44(0x8202c4,uStackY_24);
  piVar3 = (int *)(**(code **)(*param_1 + 0x1d4))();
  _uStackY_24 = FUN_00acd42c();
  FUN_00471b10((longlong *)&uStackY_24);
  (**(code **)(*piVar3 + 4))();
  return;
}


//// FUNCTION FUN_00820300 @ 00820300 ////

undefined4 * __cdecl FUN_00820300(undefined4 *param_1,uint *param_2)

{
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce4808;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00444a70(param_2,&local_2c);
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


//// FUNCTION FUN_008203a0 @ 008203a0 ////

void __fastcall FUN_008203a0(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  size_t sVar5;
  uint unaff_ESI;
  bool bVar6;
  undefined4 auStack_28c [2];
  undefined4 uStack_284;
  undefined4 uStack_280;
  int iStack_258;
  undefined1 *puStack_24c;
  uint uStack_218;
  char *_Dest;
  undefined2 *puStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  undefined2 auStack_1c0 [10];
  undefined2 *puStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined2 auStack_1a0 [10];
  char *local_18c;
  undefined4 local_188;
  uint local_184;
  char local_180 [84];
  undefined2 *local_12c;
  undefined4 local_128;
  uint local_124;
  undefined2 local_120 [10];
  wchar_t awStack_10c [52];
  void *pvStack_a4;
  undefined4 uStack_84;
  undefined4 uStack_44;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce48da;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x420);
  bVar6 = pvVar1 == (void *)0x0;
  if (bVar6) {
    piVar3 = (int *)0x0;
  }
  else {
    local_12c = local_120;
    local_120[0] = 0;
    local_128 = 0;
    local_124 = 10;
    uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_PREVIOUS</translate>");
    FUN_004036d0(&local_12c,L"<translate>SALARYADJUST_TOOLTIP_PREVIOUS</translate>",uVar2);
    local_18c = local_180;
    local_180[0] = '\0';
    local_188 = 0;
    local_184 = 0x14;
    _strncpy(local_18c,"button_left.",0xc);
    local_188 = 0xc;
    local_18c[0xc] = '\0';
    local_4 = 2;
    piVar3 = FUN_0069fb10(pvVar1,(int *)&local_18c,&local_12c,0x42280000,0x42280000,0,0,0x3f800000,
                          0x3f800000);
  }
  if ((!bVar6) && (0x14 < local_184)) {
                    /* WARNING: Subroutine does not return */
    _free(local_18c);
  }
  local_4 = 0xffffffff;
  if ((!bVar6) && (10 < local_124)) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  _Dest = "SALARYADJUST_PREVIOUS";
  (**(code **)(*piVar3 + 0x18))();
  (**(code **)(*piVar3 + 0x18))();
  (**(code **)(*piVar3 + 0x5c))();
  uStack_218 = DAT_00e5c3a8;
  (**(code **)(*piVar3 + 0x68))();
  (**(code **)(*param_1 + 0xc))();
  pvVar1 = operator_new(0x420);
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_1ac = auStack_1a0;
    auStack_1a0[0] = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 10;
    uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_NEXT</translate>");
    FUN_004036d0(&puStack_1ac,L"<translate>SALARYADJUST_TOOLTIP_NEXT</translate>",uVar2);
    _Dest = &stack0xfffffe20;
    unaff_ESI = 0x14;
    _strncpy(_Dest,"button_right.",0xd);
    _Dest[0xd] = '\0';
    uStack_218 = uStack_218 | 0xc;
    uStack_44 = 7;
    puStack_24c = (undefined1 *)0x820658;
    piVar4 = FUN_0069fb10(pvVar1,(int *)&stack0xfffffe14,&puStack_1ac,0x42280000,0x42280000,0,0,
                          0x3f800000,0x3f800000);
  }
  if (((uStack_218 & 8) != 0) && (uStack_218 = uStack_218 & 0xfffffff7, 0x14 < unaff_ESI)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_44 = 0xffffffff;
  if (((uStack_218 & 4) != 0) && (10 < uStack_1a4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1ac);
  }
  (**(code **)(*piVar4 + 0x18))();
  puStack_24c = (undefined1 *)0x8206d6;
  (**(code **)(*piVar4 + 0x18))();
  puStack_24c = DAT_00e5c3a4;
  (**(code **)(*piVar4 + 0x60))();
  (**(code **)(*piVar4 + 0x68))();
  (**(code **)(*param_1 + 0xc))();
  puStack_1cc = auStack_1c0;
  auStack_1c0[0] = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 10;
  uVar2 = FUN_00ace02d((short *)&DAT_00d3aaa8);
  FUN_004036d0(&puStack_1cc,L"s5",uVar2);
  puStack_24c = &stack0xfffffdc0;
  uVar2 = 10;
  uStack_84 = 0xb;
  if (param_1[0xed] == 0) {
    iStack_258 = 0;
  }
  else {
    iStack_258 = (param_1[0xee] - param_1[0xed]) / 0xc;
  }
  sVar5 = FUN_00ace02d(L"<p align=\"center\">");
  FUN_0040cae0(&puStack_24c,L"<p align=\"center\">",sVar5);
  sVar5 = _swprintf((wchar_t *)&local_18c,0xd18f7c,(wchar_t *)(param_1[0xf0] + 1));
  FUN_0040cae0(&puStack_24c,(wchar_t *)&local_18c,sVar5);
  sVar5 = FUN_00ace02d((short *)&DAT_00d24214);
  FUN_0040cae0(&puStack_24c,L"/",sVar5);
  sVar5 = _swprintf(awStack_10c,0xd18f7c,(wchar_t *)((iStack_258 + 6U) / 7));
  FUN_0040cae0(&puStack_24c,awStack_10c,sVar5);
  FUN_008319b0(auStack_28c,&puStack_1cc,&puStack_24c);
  piVar4 = FUN_00833750();
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_24c);
  }
  uStack_84 = 0xffffffff;
  if (10 < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1cc);
  }
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(iRam00000001 + 0x78))();
  uStack_280 = 0x8208e6;
  FUN_0073e5e0((void *)0x1,piVar3);
  uStack_280 = 1;
  uStack_284 = 0x8208f0;
  (**(code **)(*param_1 + 0xc))();
  ExceptionList = pvStack_a4;
  return;
}


//// FUNCTION FUN_00820910 @ 00820910 ////

int * FUN_00820910(undefined4 param_1,char param_2)

{
  char cVar1;
  void *this;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4914;
  pvStack_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &pvStack_c;
  this = operator_new(0x360);
  local_4 = 0;
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pcVar5 = "ui/finance_arrow01.dds";
    if (param_2 == '\0') {
      pcVar5 = "ui/finance_arrow02.dds";
    }
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
    bVar6 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar3 = FUN_0069d820(this,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = -1;
  if ((bVar6) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*piVar3 + 0x74))();
  if (local_4 == 1) {
    fVar7 = FUN_004012c0(-1.5707964);
    iVar4 = (**(code **)(*piVar3 + 0x108))();
  }
  else {
    if (local_4 != 2) {
      ExceptionList = pvStack_14;
      return piVar3;
    }
    fVar7 = FUN_004012c0(3.1415927);
    iVar4 = (**(code **)(*piVar3 + 0x108))();
  }
  *(float *)(iVar4 + 0xc) = (float)fVar7;
  ExceptionList = pvStack_14;
  return piVar3;
}


//// FUNCTION FUN_00820a70 @ 00820a70 ////

void __fastcall FUN_00820a70(undefined4 *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  float *pfVar8;
  longlong *plVar9;
  uint3 uVar11;
  int iVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  void **ppvStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  void *pvStack_74;
  undefined4 uStack_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60 [6];
  void *pvStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  void *pvStack_34;
  void *pvStack_30;
  uint uStack_2c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4940;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00ace02d((short *)&DAT_00d3aaa8);
  FUN_004036d0(&local_6c,L"s5",uVar3);
  local_4 = 0;
  piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x1d4))();
  puVar5 = (uint *)(**(code **)(*piVar4 + 8))();
  puVar6 = FUN_00820300(&pvStack_30,puVar5);
  puStack_8._0_1_ = 1;
  puVar6 = FUN_008319b0(&uStack_50,&uStack_70,puVar6);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  (**(code **)(*(int *)param_1[1] + 0x54))();
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pvStack_c = (void *)0xffffffff;
  if (&lpType_0000000a < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_74);
  }
  fVar13 = 0.0;
  (**(code **)(*(int *)param_1[1] + 0x8c))();
  pvVar7 = (void *)(**(code **)(*(int *)*param_1 + 0x27c))();
  FUN_004767d0(pvVar7);
  pfVar8 = (float *)&stack0xffffff70;
  pvVar7 = (void *)(**(code **)(*(int *)*param_1 + 0x27c))();
  pfVar8 = (float *)FUN_00472cf0(pvVar7,pfVar8);
  fVar12 = *pfVar8;
  if (0.0 <= fVar12) {
    if (1.0 < fVar12) {
      fVar12 = 1.0;
    }
  }
  else {
    fVar12 = 0.0;
  }
  (**(code **)(*(int *)param_1[2] + 0x10c))();
  FUN_007aba00((void *)param_1[2],(int *)*param_1);
  fVar14 = (float)puVar6 + (float)puVar6;
  if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  ppvStack_80 = &pvStack_74;
  pvStack_74 = (void *)((uint)pvStack_74 & 0xffffff00);
  uStack_7c = 0;
  uStack_78 = 0x14;
  _strncpy((char *)ppvStack_80,"ai_mood",7);
  uStack_7c = 7;
  *(char *)((int)ppvStack_80 + 7) = '\0';
  uStack_18 = 3;
  FUN_0073ce10((void *)param_1[8],&ppvStack_80,fVar14);
  uStack_18 = 0xffffffff;
  if (0x14 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_80);
  }
  (**(code **)(*(int *)param_1[2] + 0x110))();
  iVar10 = param_1[0xe];
  FUN_00587d40((void *)*param_1,(float *)&stack0xffffff54);
  FUN_006da9b0(iVar10);
  iVar10 = param_1[0x14];
  FUN_00586140((int *)*param_1);
  FUN_006da9b0(iVar10);
  piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x1d4))();
  plVar9 = (longlong *)(**(code **)(*piVar4 + 8))();
  fVar14 = (float)*plVar9 * 1.1920929e-07;
  cVar2 = FUN_00472590(0);
  if (cVar2 == '\0') {
    (**(code **)(*(int *)param_1[0x26] + 0xc0))(0);
    (**(code **)(*(int *)param_1[0x20] + 0xc0))(0);
  }
  else {
    plVar9 = FUN_004fdce0((longlong *)&stack0xffffff6c);
    fVar1 = (float)*plVar9 * 1.1920929e-07;
    uVar11 = (uint3)(CONCAT22((short)((uint)plVar9 >> 0x10),
                              (ushort)(fVar1 < fVar14) << 8 |
                              (ushort)(NAN(fVar1) || NAN(fVar14)) << 10 |
                              (ushort)(fVar1 == fVar14) << 0xe) >> 8);
    if (fVar1 < fVar14) {
      iVar10 = CONCAT31(uVar11,1);
    }
    else {
      iVar10 = (uint)uVar11 << 8;
    }
    (**(code **)(*(int *)param_1[0x20] + 0xc0))(iVar10);
    plVar9 = FUN_004fdd00((longlong *)&stack0xffffff70);
    fVar14 = (float)*plVar9 * 1.1920929e-07;
    uVar11 = (uint3)(CONCAT22((short)((uint)plVar9 >> 0x10),
                              (ushort)(fVar14 < fVar13) << 8 |
                              (ushort)(NAN(fVar14) || NAN(fVar13)) << 10 |
                              (ushort)(fVar14 == fVar13) << 0xe) >> 8);
    if (fVar14 < fVar13 || (fVar14 == fVar13) != 0) {
      iVar10 = (uint)uVar11 << 8;
    }
    else {
      iVar10 = CONCAT31(uVar11,1);
    }
    (**(code **)(*(int *)param_1[0x26] + 0xc0))(iVar10);
  }
  (**(code **)(*(int *)param_1[0x1a] + 0x20))(fVar12 < 0.1);
  do {
    cVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x50))(1);
  } while (cVar2 != '\0');
  ExceptionList = pvStack_30;
  return;
}


//// FUNCTION FUN_00820df0 @ 00820df0 ////

void __fastcall FUN_00820df0(int *param_1)

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


//// FUNCTION FUN_00820e80 @ 00820e80 ////

void __fastcall FUN_00820e80(int *param_1)

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


//// FUNCTION FUN_00820f40 @ 00820f40 ////

void __fastcall FUN_00820f40(int *param_1)

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


//// FUNCTION FUN_00820fe0 @ 00820fe0 ////

int * __fastcall FUN_00820fe0(int *param_1)

{
  FUN_0081f710(param_1);
  return param_1;
}


//// FUNCTION FUN_00820ff0 @ 00820ff0 ////

int * __fastcall FUN_00820ff0(int *param_1)

{
  FUN_0081f6b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00821080 @ 00821080 ////

void FUN_00821080(void)

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


//// FUNCTION FUN_008211b0 @ 008211b0 ////

void __cdecl FUN_008211b0(undefined4 *param_1,int param_2,int param_3,undefined *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    (*(code *)param_4)();
    param_2 = param_2 + 0x9c;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return;
}


//// FUNCTION FUN_008211f0 @ 008211f0 ////

uint __thiscall FUN_008211f0(void *this,undefined4 param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_8 [8];
  
  puVar5 = *(undefined4 **)((int)this + 0x3b4);
  puVar4 = *(undefined4 **)((int)this + 0x3b8);
  if (puVar5 != puVar4) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)*puVar5 + 0x1d4))();
      plVar3 = (longlong *)(**(code **)(*piVar2 + 8))(auStack_8);
      fVar1 = (float)*plVar3 * 1.1920929e-07;
      if (fVar1 < param_2) {
        return CONCAT31((int3)(CONCAT22((short)((uint)plVar3 >> 0x10),
                                        (ushort)(fVar1 < param_2) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                                        (ushort)(fVar1 == param_2) << 0xe) >> 8),1);
      }
      puVar4 = *(undefined4 **)((int)this + 0x3b8);
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar4);
  }
  return (uint)puVar4 & 0xffffff00;
}


//// FUNCTION FUN_00821260 @ 00821260 ////

uint __thiscall FUN_00821260(void *this,undefined4 param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_8 [8];
  
  puVar5 = *(undefined4 **)((int)this + 0x3b4);
  puVar4 = *(undefined4 **)((int)this + 0x3b8);
  if (puVar5 != puVar4) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)*puVar5 + 0x1d4))();
      plVar3 = (longlong *)(**(code **)(*piVar2 + 8))(auStack_8);
      fVar1 = (float)*plVar3 * 1.1920929e-07;
      if (fVar1 < param_2 == 0 && (fVar1 == param_2) == 0) {
        return CONCAT31((int3)(CONCAT22((short)((uint)plVar3 >> 0x10),
                                        (ushort)(fVar1 < param_2) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                                        (ushort)(fVar1 == param_2) << 0xe) >> 8),1);
      }
      puVar4 = *(undefined4 **)((int)this + 0x3b8);
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar4);
  }
  return (uint)puVar4 & 0xffffff00;
}


//// FUNCTION FUN_008212d0 @ 008212d0 ////

undefined4 * __thiscall FUN_008212d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 4);
  if (piVar1 != param_1 + 1) {
    iVar3 = param_1[1];
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*piVar1;
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = puVar4 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    *piVar1 = iVar3;
  }
  piVar1 = (int *)((int)this + 8);
  if (piVar1 != param_1 + 2) {
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*piVar1;
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = puVar4 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    *piVar1 = iVar3;
  }
  (**(code **)(*(int *)((int)this + 0xc) + 4))();
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  (*(code *)**(undefined4 **)((int)this + 0xc))();
  (**(code **)(*(int *)((int)this + 0x24) + 4))();
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  (*(code *)**(undefined4 **)((int)this + 0x24))();
  (**(code **)(*(int *)((int)this + 0x3c) + 4))();
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  (*(code *)**(undefined4 **)((int)this + 0x3c))();
  (**(code **)(*(int *)((int)this + 0x54) + 4))();
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  (*(code *)**(undefined4 **)((int)this + 0x54))();
  (**(code **)(*(int *)((int)this + 0x6c) + 4))();
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  (*(code *)**(undefined4 **)((int)this + 0x6c))();
  (**(code **)(*(int *)((int)this + 0x84) + 4))();
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  (*(code *)**(undefined4 **)((int)this + 0x84))();
  return this;
}


//// FUNCTION FUN_008213d0 @ 008213d0 ////

void __fastcall FUN_008213d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_008213f0 @ 008213f0 ////

void __cdecl FUN_008213f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}


//// FUNCTION FUN_00821470 @ 00821470 ////

void * __cdecl FUN_00821470(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x27;
    param_3 = (void *)((int)param_3 + -0x9c);
    FUN_008212d0(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_008214b0 @ 008214b0 ////

void __fastcall FUN_008214b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined ***)(param_1 + 0xc) = &PTR_LAB_00d2dc14;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x18) = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined ***)(param_1 + 0x24) = &PTR_FUN_00d35aac;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0x30) = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined ***)(param_1 + 0x3c) = &PTR_FUN_00d35aac;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x48) = param_1 + 0x3c;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined ***)(param_1 + 0x54) = &PTR_LAB_00d59628;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 0x60) = param_1 + 0x54;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 **)(param_1 + 0x78) = (undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = &PTR_FUN_00d172a0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 **)(param_1 + 0x90) = (undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x84) = &PTR_FUN_00d172a0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}


//// FUNCTION FUN_00821560 @ 00821560 ////

void __fastcall FUN_00821560(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce495b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(param_1 + 0x84) = &PTR_FUN_00d172a0;
  local_4 = 0;
  if (*(undefined4 **)(param_1 + 0x8c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = *(undefined4 *)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(undefined4 **)(param_1 + 0x8c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = *(undefined4 *)(param_1 + 0x8c);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined ***)(param_1 + 0x6c) = &PTR_FUN_00d172a0;
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 4) = *(undefined4 *)(param_1 + 0x74);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x70) + 4) = *(undefined4 *)(param_1 + 0x74);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined ***)(param_1 + 0x54) = &PTR_LAB_00d59628;
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = *(undefined4 *)(param_1 + 0x5c);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined ***)(param_1 + 0x3c) = &PTR_FUN_00d35aac;
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = *(undefined4 *)(param_1 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 4) = *(undefined4 *)(param_1 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined ***)(param_1 + 0x24) = &PTR_FUN_00d35aac;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = *(undefined4 *)(param_1 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined ***)(param_1 + 0xc) = &PTR_LAB_00d2dc14;
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
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008217a0 @ 008217a0 ////

longlong * __thiscall FUN_008217a0(void *this,longlong *param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 local_18;
  undefined1 auStack_10 [12];
  
  local_18 = FUN_00acd42c();
  FUN_00471b10(&local_18);
  puVar2 = *(undefined4 **)((int)this + 0x3b4);
  if (puVar2 != *(undefined4 **)((int)this + 0x3b8)) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)*puVar2 + 0x1d4))();
      (**(code **)(*piVar1 + 8))(auStack_10);
      FUN_00ad181a(extraout_ECX);
      uVar3 = FUN_00acd42c();
      local_18 = uVar3 + local_18;
      FUN_00471b10(&local_18);
      puVar2 = puVar2 + 3;
    } while (puVar2 != *(undefined4 **)((int)this + 0x3b8));
  }
  *(undefined4 *)param_1 = (undefined4)local_18;
  *(undefined4 *)((int)param_1 + 4) = local_18._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00821870 @ 00821870 ////

void __thiscall FUN_00821870(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_008218e0 @ 008218e0 ////

void __fastcall FUN_008218e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00821080();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00821920 @ 00821920 ////

undefined4 * __thiscall FUN_00821920(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce497b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    puVar4 = *(undefined4 **)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  *(int *)((int)this + 4) = iVar3;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[2];
  local_4 = 0;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    puVar4 = *(undefined4 **)((int)this + 8);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  *(int *)((int)this + 8) = iVar3;
  piVar1 = (int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x18) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 **)((int)this + 0x18) = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = &PTR_LAB_00d2dc14;
  iVar3 = param_1[8];
  *(int *)((int)this + 0x20) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x14) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x30) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 **)((int)this + 0x30) = (undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x24) = &PTR_FUN_00d35aac;
  iVar3 = param_1[0xe];
  *(int *)((int)this + 0x38) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x2c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x48) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 **)((int)this + 0x48) = (undefined4 *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x3c) = &PTR_FUN_00d35aac;
  iVar3 = param_1[0x14];
  *(int *)((int)this + 0x50) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x44) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x60) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 **)((int)this + 0x60) = (undefined4 *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x54) = &PTR_LAB_00d59628;
  iVar3 = param_1[0x1a];
  *(int *)((int)this + 0x68) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x5c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x78) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 **)((int)this + 0x78) = (undefined4 *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x6c) = &PTR_FUN_00d172a0;
  iVar3 = param_1[0x20];
  *(int *)((int)this + 0x80) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x74) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x90) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 **)((int)this + 0x90) = (undefined4 *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x84) = &PTR_FUN_00d172a0;
  iVar3 = param_1[0x26];
  *(int *)((int)this + 0x98) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x8c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00821ae0 @ 00821ae0 ////

undefined4 * __thiscall
FUN_00821ae0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar2 = *param_4;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = param_4[1];
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_00821ba0 @ 00821ba0 ////

void __cdecl FUN_00821ba0(void *param_1,void *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x9c)) {
    FUN_008212d0(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_00821bf0 @ 00821bf0 ////

void * __thiscall FUN_00821bf0(void *this,byte param_1)

{
  FUN_008213d0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00821c10 @ 00821c10 ////

void __cdecl FUN_00821c10(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce49a1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00821920(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00821c60 @ 00821c60 ////

void * __thiscall FUN_00821c60(void *this,byte param_1)

{
  FUN_00821560((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00821c80 @ 00821c80 ////

undefined4 __thiscall FUN_00821c80(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_4;
  
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[0x12] = param_1[0x12] + 1;
  }
  local_4 = this;
  FUN_00821870((void *)((int)this + 0x3c4),&local_4,(uint *)&param_1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (local_4 != *(void **)((int)this + 0x3c8)) {
    return *(undefined4 *)((int)local_4 + 0x10);
  }
  return 0;
}


//// FUNCTION FUN_00821ce0 @ 00821ce0 ////

void __fastcall FUN_00821ce0(void *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  longlong local_7c;
  void *pvStack_70;
  undefined2 *local_6c;
  uint local_68;
  undefined4 local_64;
  undefined2 local_60 [8];
  void *pvStack_50;
  undefined4 local_4c;
  uint uStack_48;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce49c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008211b0((undefined4 *)&local_7c,*(int *)((int)param_1 + 0x3d4),*(int *)((int)param_1 + 0x3d8)
               ,FUN_00820a70);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  uVar4 = FUN_00ace02d((short *)&DAT_00d3aaa8);
  FUN_004036d0(&local_6c,L"s5",uVar4);
  local_4 = 0;
  puVar5 = (uint *)FUN_008217a0(param_1,&local_7c);
  puVar6 = FUN_00820300(&local_2c,puVar5);
  local_4._0_1_ = 1;
  puVar6 = FUN_008319b0(&local_4c,&local_6c,puVar6);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(**(int **)((int)param_1 + 0x37c) + 0x54))(puVar6);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_70);
  }
  cVar3 = FUN_00472590(0);
  if (cVar3 == '\0') {
    (**(code **)(**(int **)((int)param_1 + 0x394) + 0xc0))(0);
    (**(code **)(**(int **)((int)param_1 + 0x3ac) + 0xc0))(0);
    ExceptionList = pvStack_18;
    return;
  }
  piVar1 = *(int **)((int)param_1 + 0x394);
  plVar7 = FUN_004fdd00((longlong *)&stack0xffffff80);
  iVar2 = *piVar1;
  uVar4 = FUN_008211f0(param_1,unaff_EBX,(float)*plVar7 * 1.1920929e-07);
  (**(code **)(iVar2 + 0xc0))(uVar4);
  piVar1 = *(int **)((int)param_1 + 0x3ac);
  plVar7 = FUN_004fdce0(&local_7c);
  iVar2 = *piVar1;
  uVar4 = FUN_00821260(param_1,unaff_ESI,(float)*plVar7 * 1.1920929e-07);
  (**(code **)(iVar2 + 0xc0))(uVar4);
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_00821ea0 @ 00821ea0 ////

undefined4 * FUN_00821ea0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_008213f0(param_1,param_2,param_3);
  return param_1 + param_2 * 3;
}


//// FUNCTION FUN_00821ed0 @ 00821ed0 ////

int __fastcall FUN_00821ed0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00821080();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00821f10 @ 00821f10 ////

void * FUN_00821f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce49f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_00821ae0(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_00822140 @ 00822140 ////

void __fastcall FUN_00822140(int param_1)

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


//// FUNCTION FUN_00822190 @ 00822190 ////

void * __cdecl FUN_00822190(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce4a11;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x27) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00821920(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x9c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00822230 @ 00822230 ////

void __fastcall FUN_00822230(int param_1)

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


//// FUNCTION FUN_00822260 @ 00822260 ////

void __fastcall FUN_00822260(int param_1)

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


//// FUNCTION FUN_00822290 @ 00822290 ////

void FUN_00822290(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00822290(*(void **)((int)param_1 + 8));
    FUN_008213d0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008222d0 @ 008222d0 ////

void __cdecl FUN_008222d0(void *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce4a31;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_00821920(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x9c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008223c0 @ 008223c0 ////

void __fastcall FUN_008223c0(int param_1)

{
  FUN_00822290(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008223f0 @ 008223f0 ////

void FUN_008223f0(void)

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
  puStack_8 = &LAB_00ce4a48;
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


//// FUNCTION FUN_00822460 @ 00822460 ////

void __thiscall
FUN_00822460(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

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
  puStack_8 = &LAB_00ce4a68;
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
  piVar3 = FUN_00821f10(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0082255b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0081fe20(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0081fe80(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0082255b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0081fe80(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0081fe20(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00822610 @ 00822610 ////

void FUN_00822610(void)

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
  puStack_8 = &LAB_00ce4a88;
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


//// FUNCTION FUN_00822680 @ 00822680 ////

void __thiscall FUN_00822680(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
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
  puStack_8 = &LAB_00ce4aa8;
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
  FUN_0081f710((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_008227ef;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_0081f680(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_0081f660((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008227ef:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_0081fe20(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_0081fe80(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_0081fe20(this,(int)piVar6);
              break;
            }
LAB_008228b8:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_0081fe80(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_008228b8;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_0081fe20(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_0081fe80(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[3];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[3] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00822a80 @ 00822a80 ////

void * FUN_00822a80(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_008222d0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x9c + (int)param_1);
}


//// FUNCTION FUN_00822ab0 @ 00822ab0 ////

void __thiscall FUN_00822ab0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce4ac0;
  local_10 = ExceptionList;
  local_20 = *param_3;
  local_1c = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[2];
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x15555555U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_008223f0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x15555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_0081f2d0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00820100(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_008213f0(puVar5,param_2,&local_20);
      FUN_00820100(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 3;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0xc) < param_2) {
      FUN_00820100(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_00821ea0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_0081f780(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00820100(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0081f9c0(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_0081f780(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00822d70 @ 00822d70 ////

void __thiscall FUN_00822d70(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_00822460(this,&param_2,'\x01',puVar5,(int *)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0081f6b0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00822460(this,&param_2,local_4,puVar5,(int *)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00822e30 @ 00822e30 ////

void __thiscall FUN_00822e30(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00822290((void *)piVar6[1]);
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
    FUN_00822680(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00822ef0 @ 00822ef0 ////

void FUN_00822ef0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x9c) {
    FUN_00821560(param_1);
  }
  return;
}


//// FUNCTION FUN_00822f20 @ 00822f20 ////

void __thiscall FUN_00822f20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint extraout_ECX;
  undefined4 local_b8 [39];
  void *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce4adb;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  ExceptionList = &local_10;
  local_1c = this;
  FUN_00821920(local_b8,param_3);
  iVar1 = *(int *)((int)this + 4);
  uVar4 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar4 = (*(int *)((int)this + 0xc) - iVar1) / 0x9c;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x9c;
    }
    if (0x1a41a41U - iVar1 < param_2) {
      FUN_00822610();
      uVar4 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x9c;
    }
    if (uVar4 < iVar1 + param_2) {
      if (0x1a41a41 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x9c;
      }
      if (uVar4 < iVar1 + param_2) {
        iVar1 = FUN_0081f3c0((int)this);
        uVar4 = iVar1 + param_2;
      }
      puVar2 = operator_new(uVar4 * 0x9c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = puVar2;
      pvVar3 = FUN_00822190(*(undefined4 **)((int)this + 4),param_1,puVar2);
      FUN_008222d0(pvVar3,param_2,local_b8);
      FUN_00822190(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar3 + param_2 * 0x9c));
      local_8 = 0;
      iVar1 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x9c;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00822ef0(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar2 + uVar4 * 0x27;
      *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar1) * 0x27;
      *(undefined4 **)((int)this + 4) = puVar2;
    }
    else {
      local_18 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)local_18 - (int)param_1) / 0x9c) < param_2) {
        FUN_00822190(param_1,local_18,param_1 + param_2 * 0x27);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00822a80(*(void **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x9c,local_b8);
        iVar1 = *(int *)((int)this + 8) + param_2 * 0x9c;
        *(int *)((int)this + 8) = iVar1;
        local_8 = 0;
        FUN_00821ba0(param_1,(void *)(iVar1 + param_2 * -0x9c),local_b8);
      }
      else {
        puVar2 = local_18 + param_2 * -0x27;
        pvVar3 = FUN_00822190(puVar2,local_18,local_18);
        *(void **)((int)this + 8) = pvVar3;
        FUN_00821470(param_1,puVar2,local_18);
        FUN_00821ba0(param_1,param_1 + param_2 * 0x27,local_b8);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00821560((int)local_b8);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00823280 @ 00823280 ////

void __thiscall FUN_00823280(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_008232c3;
    }
  }
  iVar1 = 0;
LAB_008232c3:
  FUN_00822ab0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_008232f0 @ 008232f0 ////

undefined4 * __thiscall FUN_008232f0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  puVar3 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00822460(this,param_1,'\x01',*(undefined4 **)((int)this + 4),(int *)param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00822460(this,param_1,'\x01',param_2,(int *)param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_00822460(this,param_1,'\0',(undefined4 *)puVar1[2],(int *)param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    if (uVar2 < param_2[3]) {
      param_3 = param_2;
      FUN_0081f6b0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00822460(this,param_1,'\0',param_3,(int *)puVar3);
          return param_1;
        }
        FUN_00822460(this,param_1,'\x01',param_2,(int *)puVar3);
        return param_1;
      }
    }
    if (param_2[3] < uVar2) {
      param_3 = param_2;
      FUN_0081f710((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_00822460(this,param_1,'\0',param_2,(int *)puVar3);
          return param_1;
        }
        FUN_00822460(this,param_1,'\x01',param_3,(int *)puVar3);
        return param_1;
      }
    }
  }
  puVar4 = (undefined4 *)FUN_00822d70(this,local_8,puVar3);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00823490 @ 00823490 ////

void __thiscall FUN_00823490(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x9c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x9c;
      goto LAB_008234d9;
    }
  }
  iVar1 = 0;
LAB_008234d9:
  FUN_00822f20(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x9c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00823500 @ 00823500 ////

void __fastcall FUN_00823500(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_00821560(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00823550 @ 00823550 ////

void __thiscall FUN_00823550(void *this,uint param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    if (0x7fffffff < param_1) {
      FUN_00703f20();
    }
    puVar1 = operator_new(param_1 * 2);
    *(undefined2 **)((int)this + 0xc) = puVar1 + param_1;
    *(undefined2 **)((int)this + 4) = puVar1;
    *(undefined2 **)((int)this + 8) = puVar1;
    puVar2 = puVar1;
    for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 **)((int)this + 8) = puVar1 + param_1;
  }
  return;
}


//// FUNCTION FUN_008235c0 @ 008235c0 ////

void __thiscall FUN_008235c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_008213f0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 3;
    return;
  }
  FUN_00823280(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00823640 @ 00823640 ////

uint * __thiscall FUN_00823640(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce4af8;
  local_c = ExceptionList;
  puVar6 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar6[1] + 0x15) == '\0') {
    puVar3 = (uint *)puVar6[1];
    do {
      if (puVar3[3] < *param_1) {
        puVar4 = (uint *)puVar3[2];
      }
      else {
        puVar4 = (uint *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x15) == '\0');
  }
  if ((puVar6 != *(uint **)((int)this + 4)) && (puVar6[3] <= *param_1)) {
    return puVar6 + 4;
  }
  puVar1 = (undefined4 *)*param_1;
  ExceptionList = &local_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1[0x12] = puVar1[0x12] + 1;
  }
  local_10 = 0;
  local_4 = 0;
  local_14 = puVar1;
  piVar5 = FUN_008232f0(this,&param_1,puVar6,(uint *)&local_14);
  iVar2 = *piVar5;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    piVar5 = puVar1 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_c;
  return (uint *)(iVar2 + 0x10);
}


//// FUNCTION FUN_00823740 @ 00823740 ////

void __fastcall FUN_00823740(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x9c) {
    FUN_00821560(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00823750 @ 00823750 ////

void __thiscall FUN_00823750(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x9c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x9c))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_008222d0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x9c;
    return;
  }
  FUN_00823490(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00823820 @ 00823820 ////

void __fastcall FUN_00823820(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00822e30(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00823850 @ 00823850 ////

void __fastcall FUN_00823850(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce4ba4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5d134;
  param_1[0x14] = &PTR_FUN_00d5d118;
  _Memory = (void *)param_1[0xf8];
  local_4 = 10;
  if (_Memory != (void *)0x0) {
    FUN_007c3840((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xf8] = 0;
  DAT_0104eb9c = DAT_0104eb9c + -1;
  uVar3 = FUN_00990ae0(param_1,param_2);
  DAT_0104eba0 = (undefined4)uVar3;
  if ((int *)param_1[0xdd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xdd] + 0xc))(0x3f000000);
    puVar2 = (undefined4 *)param_1[0xdd];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    param_1[0xdd] = 0;
  }
  local_4._0_1_ = 9;
  FUN_00823500((int)(param_1 + 0xf4));
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00822e30(param_1 + 0xf1,&uStack_10,*(int **)param_1[0xf2],(int *)param_1[0xf2]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xf2]);
}


//// FUNCTION SalaryAdjustScreen_Build @ 00823ba0 ////

/* WARNING: Removing unreachable block (ram,0x00824a0e) */
/* WARNING: Removing unreachable block (ram,0x00825111) */
/* WARNING: Removing unreachable block (ram,0x00824617) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall SalaryAdjustScreen_Build(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  void **ppvVar10;
  uint *puVar11;
  char *_Count;
  float *pfVar12;
  float10 fVar13;
  undefined4 uStack_2c4;
  undefined *puStack_2c0;
  wchar_t *pwStack_284;
  char *pcStack_280;
  uint uStack_25c;
  undefined1 **ppuStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  undefined1 *puStack_234;
  undefined4 uStack_230;
  char *pcStack_22c;
  char *_Dest;
  char *pcVar14;
  undefined4 uStack_1d0;
  wchar_t *pwStack_1cc;
  uint uStack_1c8;
  void *pvVar15;
  wchar_t *pwStack_1bc;
  void *pvVar16;
  uint uStack_190;
  void *pvStack_18c;
  int iStack_188;
  int *piVar17;
  int *piStack_17c;
  wchar_t *_Source;
  int *piStack_168;
  int *piStack_164;
  void *pvStack_160;
  wchar_t *pwStack_15c;
  wchar_t *pwStack_158;
  wchar_t *pwStack_154;
  wchar_t *pwStack_14c;
  void *pvStack_130;
  undefined1 *puStack_12c;
  void *pvStack_128;
  undefined1 *puStack_124;
  float fVar18;
  int *piStack_11c;
  void *_Memory;
  undefined4 uStack_10c;
  uint uStack_108;
  void *pvStack_104;
  void *pvStack_100;
  int **ppiStack_fc;
  float fStack_f8;
  int *piStack_f0;
  uint uStack_ec;
  int *piStack_e8;
  undefined1 *_Memory_00;
  uint uVar19;
  undefined4 uStack_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 *local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_44;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Builds the salary negotiation/adjustment screen: current wage, contentedness
                       meter, +/- wage adjustment buttons (SALARYADJUST_MINUS/PLUS with
                       MINUSALL/PLUSALL tooltips), running total (SALARYADJUST_TOTALWAGES). Used
                       when negotiating pay for a star or staff member. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ce4d8a;
  pvStack_14 = ExceptionList;
  local_a8 = 0;
  local_ac = DAT_00e5c33c;
  local_44 = 0.0;
  if ((param_1[0xed] == 0) || ((uint)((param_1[0xee] - param_1[0xed]) / 0xc) < 8)) {
    if (param_1[0xed] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (param_1[0xee] - param_1[0xed]) / 0xc;
    }
    local_64 = (undefined4 *)(7 - iVar3);
    fVar18 = (float)(int)local_64;
    if ((int)local_64 < 0) {
      fVar18 = fVar18 + 4.2949673e+09;
    }
    local_44 = DAT_00e5c3c8;
    local_ac = (undefined1 *)(((float)DAT_00e5c33c - fVar18 * DAT_00e5c360) - DAT_00e5c3c8);
  }
  ExceptionList = &pvStack_14;
  local_64 = operator_new(0x3ac);
  local_c = 0;
  if (local_64 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_0063f620(local_64);
  }
  local_c = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    piVar4[0x12] = piVar4[0x12] + 1;
  }
  puVar5 = (undefined4 *)param_1[0xde];
  if (puVar5 != (undefined4 *)0x0) {
    piVar17 = puVar5 + 0x12;
    *piVar17 = *piVar17 + -1;
    if (*piVar17 == 0) {
      (**(code **)*puVar5)();
    }
  }
  _Memory_00 = local_ac;
  param_1[0xde] = (int)piVar4;
  (**(code **)(*piVar4 + 0x74))();
  FUN_0073e590((void *)param_1[0xde],param_1);
  FUN_0073e5e0((void *)param_1[0xde],param_1);
  uStack_6c = 0xffa29523;
  FUN_0063e6c0((void *)param_1[0xde],0xffdcb140,0xffa29523);
  (**(code **)(*param_1 + 0xc))();
  puVar5 = operator_new(0x344);
  uStack_1c = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_007432f0(puVar5);
  }
  uStack_1c = 0xffffffff;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)puVar5;
  (**(code **)param_1[0xd1])();
  uVar9 = DAT_00e5c338;
  (**(code **)(*(int *)param_1[0xd6] + 0x74))();
  FUN_0073e590((void *)param_1[0xd6],param_1);
  FUN_0073e5e0((void *)param_1[0xd6],param_1);
  pvVar16 = (void *)param_1[0xd6];
  (**(code **)(*param_1 + 0xc))();
  piStack_e8 = (int *)0x823dca;
  piVar4 = operator_new(0x348);
  uStack_2c = 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = param_1[0xf8];
    FUN_007432f0(piVar4);
    *piVar4 = (int)&PTR_FUN_00d5cf0c;
    piVar4[0x14] = (int)&PTR_FUN_00d5cef0;
    piVar4[0xd1] = iVar3;
  }
  uStack_2c = 0xffffffff;
  uStack_ec = 0x823e1c;
  piStack_e8 = param_1;
  (**(code **)(*piVar4 + 0x70))();
  uStack_ec = 1;
  piStack_f0 = piVar4;
  (**(code **)(*(int *)param_1[0xd6] + 0xc))();
  fStack_f8 = 1.1960929e-38;
  puVar5 = operator_new(0x3fc);
  uStack_3c = 3;
  if (puVar5 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar5);
  }
  pvVar15 = (void *)(DAT_00e5c3d4 - DAT_00e5c3d0);
  uStack_3c = 0xffffffff;
  fStack_f8 = 1.1961032e-38;
  (**(code **)(*piVar4 + 0x78))();
  fVar18 = DAT_00e5c3d4 - DAT_00e5c3d0;
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  piVar4[0xd5] = (int)fVar18;
  ppiStack_fc = (int **)param_1[0xd6];
  fStack_f8 = DAT_00e5c358 + DAT_00e5c3d0;
  pvStack_100 = (void *)0x1;
  pvStack_104 = (void *)0x823eb8;
  (**(code **)(*piVar4 + 0x5c))();
  uStack_108 = param_1[0xd6];
  pvStack_104 = DAT_00e5c348;
  uStack_10c = 1;
  (**(code **)(*piVar4 + 0x68))();
  uVar19 = 0;
  uVar6 = FUN_00ace02d(L"SALARYADJUST_CONTENTEDNESS");
  FUN_004036d0(&stack0xffffff30,L"SALARYADJUST_CONTENTEDNESS",uVar6);
  piStack_f0 = (int *)&stack0xffffff1c;
  uStack_58 = 4;
  uStack_ec = 0;
  piStack_e8 = (int *)0xa;
  uVar6 = FUN_00ace02d((short *)&DAT_00d5d4fc);
  FUN_004036d0(&piStack_f0,L"s2",uVar6);
  uStack_58._0_1_ = 5;
  piStack_11c = (int *)0x823f5e;
  puVar5 = FUN_00831790(&uStack_b0,&piStack_f0,(undefined4 *)&stack0xffffff30);
  uStack_58 = CONCAT31(uStack_58._1_3_,6);
  (**(code **)(*piVar4 + 0x54))();
  if (&lpType_0000000a < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0xffdcb140);
  }
  if (10 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar15);
  }
  uStack_5c = 0xffffffff;
  if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  (**(code **)(*piVar4 + 0x8c))();
  piStack_11c = piVar4;
  (**(code **)(*(int *)param_1[0xd6] + 0xc))();
  puStack_124 = (undefined1 *)0x823fdc;
  puVar7 = operator_new(0x3fc);
  uStack_68 = 7;
  if (puVar7 == (undefined4 *)0x0) {
    pwVar8 = (wchar_t *)0x0;
  }
  else {
    pwVar8 = (wchar_t *)FUN_00833290(puVar7);
  }
  pvVar15 = (void *)(DAT_00e5c3d8 - DAT_00e5c3d4);
  uStack_68 = 0xffffffff;
  puStack_124 = (undefined1 *)0x824022;
  (**(code **)(*(int *)pwVar8 + 0x78))();
  fVar18 = DAT_00e5c3d8 - DAT_00e5c3d4;
  *(undefined1 *)(pwVar8 + 0x1ac) = 1;
  *(float *)(pwVar8 + 0x1aa) = fVar18;
  pvStack_128 = (void *)param_1[0xd6];
  puStack_124 = (undefined1 *)(DAT_00e5c358 + DAT_00e5c3d4);
  puStack_12c = (undefined1 *)0x1;
  pvStack_130 = (void *)0x82405c;
  (**(code **)(*(int *)pwVar8 + 0x5c))();
  pvStack_130 = DAT_00e5c348;
  (**(code **)(*(int *)pwVar8 + 0x68))();
  ppiStack_fc = &piStack_f0;
  piStack_f0 = (int *)((uint)piStack_f0 & 0xffff0000);
  fStack_f8 = 0.0;
  uVar6 = FUN_00ace02d(L"SALARYADJUST_CURRENT");
  FUN_004036d0(&ppiStack_fc,L"SALARYADJUST_CURRENT",uVar6);
  piStack_11c = (int *)&stack0xfffffef0;
  uStack_84 = 8;
  _Memory = (void *)((uint)puVar5 & 0xffff0000);
  uVar19 = 0;
  uVar6 = FUN_00ace02d((short *)&DAT_00d5d4fc);
  FUN_004036d0(&piStack_11c,L"s2",uVar6);
  uStack_84._0_1_ = 9;
  FUN_00831790((undefined4 *)&stack0xffffff24,&piStack_11c,&ppiStack_fc);
  uStack_84 = CONCAT31(uStack_84._1_3_,10);
  (**(code **)(*(int *)pwVar8 + 0x54))();
  if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar16);
  }
  if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar15);
  }
  uStack_88 = 0xffffffff;
  if (10 < (uint)fStack_f8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_100);
  }
  uVar6 = 0;
  (**(code **)(*(int *)pwVar8 + 0x8c))();
  puStack_124 = &stack0xfffffee8;
  uVar19 = 0;
  piStack_11c = (int *)0xa;
  uVar9 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_CURRENT</translate>");
  pwStack_14c = L"喋贀⑄倜춋蓇려";
  FUN_004036d0(&puStack_124,L"<translate>SALARYADJUST_TOOLTIP_CURRENT</translate>",uVar9);
  uStack_8c = 0xb;
  (**(code **)(*(int *)pwVar8 + 0x90))();
  uStack_90 = 0xffffffff;
  if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
    pwStack_14c = L"쒃謄墎\x03謀樑唁勿栌ϼ";
    _free(pvStack_128);
  }
  pwStack_14c = pwVar8;
  (**(code **)(*(int *)param_1[0xd6] + 0xc))();
  pwStack_154 = L"쒃褄⑄㭜쟃⒄´";
  piStack_f0 = operator_new(0x3fc);
  uStack_98 = 0xc;
  if (piStack_f0 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(piStack_f0);
  }
  pvVar16 = (void *)(DAT_00e5c3d8 - DAT_00e5c3d4);
  uStack_98 = 0xffffffff;
  pwStack_154 = L"י쏘åឋ◘쏔å蟆͘";
  (**(code **)(*piVar4 + 0x78))();
  fVar18 = DAT_00e5c3d8 - DAT_00e5c3d4;
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  piVar4[0xd5] = (int)fVar18;
  pwStack_158 = (wchar_t *)param_1[0xd6];
  pwStack_154 = (wchar_t *)(DAT_00e5c3d8 + DAT_00e5c358);
  pwStack_15c = (wchar_t *)0x1;
  pvStack_160 = (void *)0x824263;
  (**(code **)(*piVar4 + 0x5c))();
  piStack_164 = (int *)param_1[0xd6];
  pvStack_160 = DAT_00e5c348;
  piStack_168 = (int *)0x1;
  (**(code **)(*piVar4 + 0x68))();
  puStack_12c = &stack0xfffffee0;
  pvStack_128 = (void *)0x0;
  puStack_124 = (undefined1 *)0xa;
  uVar9 = FUN_00ace02d(L"SALARYADJUST_FUTURE");
  FUN_004036d0(&puStack_12c,L"SALARYADJUST_FUTURE",uVar9);
  pwStack_14c = (wchar_t *)&stack0xfffffec0;
  pvVar15 = (void *)(uVar6 & 0xffff0000);
  uVar6 = 0;
  uVar9 = FUN_00ace02d((short *)&DAT_00d5d4fc);
  FUN_004036d0(&pwStack_14c,L"s2",uVar9);
  puVar5 = FUN_00831790(&uStack_10c,&pwStack_14c,&puStack_12c);
  (**(code **)(*piVar4 + 0x54))();
  if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar16);
  }
  if (10 < pvStack_128) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_130);
  }
  (**(code **)(*piVar4 + 0x8c))();
  pwStack_154 = (wchar_t *)&stack0xfffffeb8;
  uVar6 = 0;
  pwStack_14c = (wchar_t *)0xa;
  uVar9 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_FUTURE</translate>");
  piStack_17c = (int *)0x8243a7;
  FUN_004036d0(&pwStack_154,L"<translate>SALARYADJUST_TOOLTIP_FUTURE</translate>",uVar9);
  (**(code **)(*piVar4 + 0x90))();
  if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    piStack_17c = (int *)&UNK_008243dd;
    _free(pwStack_158);
  }
  _Source = (wchar_t *)0x1;
  piStack_17c = piVar4;
  (**(code **)(*(int *)param_1[0xd6] + 0xc))();
  fVar13 = (float10)(**(code **)(*piStack_168 + 0x14))();
  fVar18 = (float)fVar13;
  fVar13 = (float10)(**(code **)(*(int *)pwVar8 + 0x14))();
  if ((float10)fVar18 <= fVar13) {
    fVar13 = (float10)(**(code **)(*(int *)pwVar8 + 0x14))();
  }
  else {
    fVar13 = (float10)(**(code **)(*piStack_168 + 0x14))();
  }
  piStack_168 = (int *)(float)fVar13;
  fVar13 = (float10)(**(code **)(*piVar4 + 0x14))();
  if ((float10)(float)piStack_168 <= fVar13) {
    fVar13 = (float10)(**(code **)(*piVar4 + 0x14))();
    piStack_168 = (int *)(float)fVar13;
  }
  pfVar12 = &DAT_00e5c3d4;
  do {
    ppiStack_fc = (int **)(DAT_00e5c358 + *(float *)(param_1[0xd6] + 0xc0) + *pfVar12);
    fStack_f8 = (float)piVar4[0x39];
    piStack_11c = (int *)(fStack_f8 - (float)piStack_168);
    iStack_188 = 0x8244a3;
    FUN_007be450((void *)param_1[0xf8],&ppiStack_fc,(undefined4 *)&stack0xfffffee0);
    pfVar12 = pfVar12 + 1;
  } while ((int)pfVar12 < 0xe5c3d9);
  piStack_168 = operator_new(0x3fc);
  if (piStack_168 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(piStack_168);
  }
  piVar17 = (int *)(((DAT_00e5c394 - DAT_00e5c340) - 29.0) - 50.0);
  piStack_168 = piVar17;
  (**(code **)(*piVar4 + 0x78))();
  piVar4[0xd5] = (int)puVar5;
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  iStack_188 = param_1[0xd6];
  pvStack_18c = (void *)0x1;
  uStack_190 = 0x824545;
  (**(code **)(*piVar4 + 0x5c))();
  uStack_190 = DAT_00e5c350;
  (**(code **)(*piVar4 + 0x68))();
  pwStack_15c = (wchar_t *)&stack0xfffffeb0;
  pwStack_158 = (wchar_t *)0x0;
  pwStack_154 = (wchar_t *)&lpType_0000000a;
  pwVar8 = (wchar_t *)FUN_00ace02d(L"SALARYADJUST_WAGE");
  if (pwStack_154 <= pwVar8) {
    if (&lpType_0000000a < pwStack_154) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_15c);
    }
    pwStack_154 = (wchar_t *)((uint)(pwVar8 + 0x10) & 0xffffffe0);
    pwStack_15c = _malloc((int)pwStack_154 * 2);
  }
  _wcsncpy(pwStack_15c,L"SALARYADJUST_WAGE",(size_t)pwVar8);
  pwStack_15c[(int)pwVar8] = L'\0';
  ppvVar10 = &pvStack_130;
  pvStack_130 = (void *)((uint)pvStack_130 & 0xffff0000);
  pwStack_158 = pwVar8;
  uVar9 = FUN_00ace02d((short *)&DAT_00d5d4fc);
  if (9 < uVar9) {
    ppvVar10 = _malloc((uVar9 + 0x20 >> 5) * 0x40);
  }
  _wcsncpy((wchar_t *)ppvVar10,L"s2",uVar9);
  *(undefined2 *)((int)ppvVar10 + uVar9 * 2) = 0;
  FUN_00831790(&piStack_17c,(undefined4 *)&stack0xfffffec4,&pwStack_15c);
  (**(code **)(*piVar4 + 0x54))();
  if (&lpType_0000000a < _Source) {
                    /* WARNING: Subroutine does not return */
    _free(piVar17);
  }
  if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar15);
  }
  piStack_e8 = (int *)0xffffffff;
  if (&lpType_0000000a < pwStack_158) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_160);
  }
  pvVar16 = (void *)0x0;
  (**(code **)(*piVar4 + 0x8c))();
  (**(code **)(*(int *)param_1[0xd6] + 0xc))();
  pwStack_14c = (wchar_t *)&stack0xfffffec0;
  uVar6 = 10;
  uVar9 = FUN_00ace02d(L"SALARYADJUST_TITLE");
  if (uVar6 <= uVar9) {
    if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_14c);
    }
    uVar6 = uVar9 + 0x20 & 0xffffffe0;
    pwStack_14c = _malloc(uVar6 * 2);
  }
  _wcsncpy(pwStack_14c,L"SALARYADJUST_TITLE",uVar9);
  pwStack_14c[uVar9] = L'\0';
  ppvVar10 = &pvStack_160;
  pvStack_160 = (void *)((uint)pvStack_160 & 0xffff0000);
  piStack_168 = (int *)0x0;
  piStack_164 = (int *)0xa;
  pwStack_1bc = 
  L"\xf88b䒋吤쒃㬐狸㬮盅謍⑄值\xf5e8⪌茀ӄ䞍선ר\xe0c1贅\f襑⑄\xe848跴*쒃褄⑄謼⑔圼㡨펮刀柨⪘謀⑄襈⑼荌ೄ襦砜蚋͘"
  ;
  piVar4 = (int *)FUN_00ace02d((short *)&DAT_00d3ae38);
  if (piStack_164 <= piVar4) {
    if ((int *)0xa < piStack_164) {
                    /* WARNING: Subroutine does not return */
      _free(ppvVar10);
    }
    piStack_164 = (int *)((uint)(piVar4 + 8) & 0xffffffe0);
    ppvVar10 = _malloc((int)piStack_164 * 2);
  }
  _wcsncpy((wchar_t *)ppvVar10,L"s3",(size_t)piVar4);
  *(undefined2 *)((int)ppvVar10 + (int)piVar4 * 2) = 0;
  piStack_168 = piVar4;
  FUN_008318a0(&uStack_1d0,(undefined4 *)&stack0xfffffe94,&pwStack_14c);
  pwVar8 = (wchar_t *)FUN_00833680();
  if ((int *)0xa < piStack_164) {
                    /* WARNING: Subroutine does not return */
    _free(ppvVar10);
  }
  if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_14c);
  }
  iVar3 = *(int *)pwVar8;
  (**(code **)(iVar3 + 0x14))();
  (**(code **)(iVar3 + 100))();
  pwStack_1bc = pwVar8;
  (**(code **)(*param_1 + 0xc))();
  uStack_1c8 = 0x8248a3;
  FUN_00823550(&pvStack_160,0xe4,(undefined2 *)&stack0xfffffe58);
  uStack_108 = 0x17;
  for (pwVar8 = pwStack_15c; pwVar8 != pwStack_158; pwVar8 = pwVar8 + 2) {
    *pwVar8 = L'-';
    pwVar8[1] = L' ';
  }
  pwStack_158[-1] = L'\0';
  puVar5 = operator_new(0x3fc);
  uStack_108._0_1_ = 0x18;
  if (puVar5 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar5);
  }
  pvVar15 = (void *)0x45000000;
  uStack_108 = CONCAT31(uStack_108._1_3_,0x17);
  (**(code **)(*piVar4 + 0x78))();
  piVar4[0xd5] = 0x45000000;
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  uStack_1c8 = param_1[0xd6];
  pwStack_1cc = (wchar_t *)0x2;
  uStack_1d0 = 0x824947;
  (**(code **)(*piVar4 + 0x68))();
  uStack_1d0 = DAT_00e5c3ac;
  (**(code **)(*piVar4 + 0x5c))();
  pwStack_1bc = (wchar_t *)&stack0xfffffe50;
  uVar6 = 10;
  uVar9 = FUN_00ace02d(_Source);
  if (uVar6 <= uVar9) {
    if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1bc);
    }
    pwStack_1bc = _malloc((uVar9 + 0x20 & 0xffffffe0) * 2);
  }
  _wcsncpy(pwStack_1bc,_Source,uVar9);
  pwStack_1bc[uVar9] = L'\0';
  pwVar8 = (wchar_t *)&uStack_190;
  uStack_190 = uStack_190 & 0xffff0000;
  uVar6 = FUN_00ace02d((short *)&DAT_00d3aa80);
  if (9 < uVar6) {
    pwVar8 = _malloc((uVar6 + 0x20 & 0xffffffe0) * 2);
  }
  _wcsncpy(pwVar8,L"s4",uVar6);
  pwVar8[uVar6] = L'\0';
  puStack_124._0_1_ = 0x1a;
  FUN_008319b0((undefined4 *)&stack0xfffffeb0,(undefined4 *)&stack0xfffffe64,&pwStack_1bc);
  puStack_124 = (undefined1 *)CONCAT31(puStack_124._1_3_,0x1b);
  (**(code **)(*piVar4 + 0x54))();
  if (pwStack_14c <= &lpType_0000000a) {
    if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar16);
    }
    pvStack_128 = (void *)CONCAT31(pvStack_128._1_3_,0x17);
    if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar15);
    }
    (**(code **)(*piVar4 + 0x8c))();
    uVar19 = 1;
    (**(code **)(*(int *)param_1[0xd6] + 0xc))();
    pwStack_1cc = (wchar_t *)&stack0xfffffe40;
    uStack_1c8 = 0;
    uVar6 = 10;
    uVar9 = FUN_00ace02d((short *)&DAT_00d3aaa8);
    if (uVar6 <= uVar9) {
      if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_1cc);
      }
      uVar6 = uVar9 + 0x20 & 0xffffffe0;
      pwStack_1cc = _malloc(uVar6 * 2);
    }
    _wcsncpy(pwStack_1cc,L"s5",uVar9);
    pwStack_1cc[uVar9] = L'\0';
    uStack_1c8 = uVar9;
    puVar11 = (uint *)FUN_008217a0(param_1,(longlong *)&piStack_168);
    puVar5 = FUN_00820300(&pvStack_160,puVar11);
    FUN_008319b0((undefined4 *)&stack0xfffffdf4,&pwStack_1cc,puVar5);
    piVar4 = FUN_00833750();
    if (piVar4 != (int *)0x0) {
      piVar4[0x12] = piVar4[0x12] + 1;
    }
    puVar5 = (undefined4 *)param_1[0xdf];
    if (puVar5 != (undefined4 *)0x0) {
      piVar17 = puVar5 + 0x12;
      *piVar17 = *piVar17 + -1;
      if (*piVar17 == 0) {
        (**(code **)*puVar5)();
      }
    }
    param_1[0xdf] = (int)piVar4;
    if (&lpType_0000000a < pwStack_158) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_160);
    }
    if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1cc);
    }
    pwVar8 = (wchar_t *)(DAT_00e5c390 + DAT_00e5c358);
    uVar9 = param_1[0xd6];
    (**(code **)(*(int *)param_1[0xdf] + 0x5c))();
    (**(code **)(*(int *)param_1[0xdf] + 0x68))();
    (**(code **)(*(int *)param_1[0xd6] + 0xc))();
    pvVar16 = operator_new(0x420);
    pvStack_18c = pvVar16;
    if (pvVar16 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      pwVar8 = (wchar_t *)&stack0xfffffe20;
      uVar19 = 10;
      uVar9 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_MINUSALL</translate>");
      if (uVar19 <= uVar9) {
        if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
          _free(pwVar8);
        }
        uVar19 = uVar9 + 0x20 & 0xffffffe0;
        pwVar8 = _malloc(uVar19 * 2);
      }
      _wcsncpy(pwVar8,L"<translate>SALARYADJUST_TOOLTIP_MINUSALL</translate>",uVar9);
      pwVar8[uVar9] = L'\0';
      pwStack_1cc = (wchar_t *)&stack0xfffffe40;
      uStack_1c8 = 0;
      uVar6 = 0x14;
      _strncpy((char *)pwStack_1cc,"button_minus.",0xd);
      uStack_1c8 = 0xd;
      *(char *)((int)pwStack_1cc + 0xd) = '\0';
      pwStack_154 = (wchar_t *)0x20;
      uVar9 = 3;
      pcStack_22c = (char *)0x824d82;
      puVar5 = FUN_0069fb10(pvVar16,(int *)&pwStack_1cc,(undefined4 *)&stack0xfffffe14,0x41e80000,
                            0x41e80000,0,0,0x3f800000,0x3f800000);
    }
    pwStack_154 = (wchar_t *)0x22;
    (**(code **)(param_1[0xe6] + 4))();
    param_1[0xeb] = (int)puVar5;
    (**(code **)param_1[0xe6])();
    if (((uVar9 & 2) != 0) && (uVar9 = uVar9 & 0xfffffffd, 0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1cc);
    }
    pwStack_154 = (wchar_t *)0x17;
    if (((uVar9 & 1) != 0) && (10 < uVar19)) {
                    /* WARNING: Subroutine does not return */
      _free(pwVar8);
    }
    pcVar14 = "SALARYADJUST_MINUS";
    uVar6 = 4;
    (**(code **)(*(int *)param_1[0xeb] + 0x18))();
    _Dest = (char *)0x0;
    pcStack_22c = (char *)0x824e38;
    (**(code **)(*(int *)param_1[0xeb] + 0x18))();
    pcStack_22c = "SALARYADJUST_MINUS";
    uStack_230 = 0;
    puStack_234 = &LAB_005f37f0;
    pcStack_238 = (char *)0x0;
    pcStack_23c = (char *)0x824e4f;
    (**(code **)(*(int *)param_1[0xeb] + 0x18))();
    pcStack_23c = "SALARYADJUST_MINUS";
    ppuStack_240 = (undefined1 **)0x0;
    bVar2 = false;
    bVar1 = false;
    (**(code **)(*(int *)param_1[0xeb] + 0x18))();
    (**(code **)(*(int *)param_1[0xeb] + 0x5c))();
    FUN_0073e5e0((void *)param_1[0xeb],(int *)param_1[0xdf]);
    uVar9 = 0;
    (**(code **)(*(int *)param_1[0xd6] + 0xc))();
    pvVar16 = operator_new(0x420);
    if (pvVar16 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      ppuStack_240 = &puStack_234;
      puStack_234 = (undefined1 *)((uint)puStack_234 & 0xffff0000);
      pcStack_23c = (char *)0x0;
      pcStack_238 = (char *)0xa;
      _Count = (char *)FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_PLUSALL</translate>");
      if (pcStack_238 <= _Count) {
        if ((char *)0xa < pcStack_238) {
                    /* WARNING: Subroutine does not return */
          _free(ppuStack_240);
        }
        pcStack_238 = (char *)((uint)(_Count + 0x20) & 0xffffffe0);
        ppuStack_240 = _malloc((int)pcStack_238 * 2);
      }
      _wcsncpy((wchar_t *)ppuStack_240,L"<translate>SALARYADJUST_TOOLTIP_PLUSALL</translate>",
               (size_t)_Count);
      *(undefined2 *)((int)ppuStack_240 + (int)_Count * 2) = 0;
      _Dest = &stack0xfffffdec;
      uVar6 = 0x14;
      pcStack_23c = _Count;
      _strncpy(_Dest,"button_plus.",0xc);
      _Dest[0xc] = '\0';
      bVar2 = true;
      bVar1 = true;
      pcStack_280 = (char *)0x824fd2;
      puVar5 = FUN_0069fb10(pvVar16,(int *)&stack0xfffffde0,&ppuStack_240,0x41e80000,0x41e80000,0,0,
                            0x3f800000,0x3f800000);
    }
    (**(code **)(param_1[0xe0] + 4))();
    param_1[0xe5] = (int)puVar5;
    (**(code **)param_1[0xe0])();
    if ((bVar1) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    if ((bVar2) && ((char *)0xa < pcStack_238)) {
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_240);
    }
    (**(code **)(*(int *)param_1[0xe5] + 0x18))();
    pcStack_280 = (char *)0x82507a;
    (**(code **)(*(int *)param_1[0xe5] + 0x18))();
    pcStack_280 = "SALARYADJUST_PLUS";
    pwStack_284 = (wchar_t *)0x0;
    (**(code **)(*(int *)param_1[0xe5] + 0x18))();
    (**(code **)(*(int *)param_1[0xe5] + 0x5c))();
    FUN_0073e5e0((void *)param_1[0xe5],(int *)param_1[0xdf]);
    (**(code **)(*(int *)param_1[0xd6] + 0xc))();
    pwVar8 = (wchar_t *)&stack0xfffffda8;
    pvVar16 = (void *)(uVar9 & 0xffff0000);
    uStack_25c = 10;
    uVar9 = FUN_00ace02d(L"SALARYADJUST_TOTALWAGES");
    if (9 < uVar9) {
      uStack_25c = uVar9 + 0x20 & 0xffffffe0;
      pwVar8 = _malloc(uStack_25c * 2);
    }
    _wcsncpy(pwVar8,L"SALARYADJUST_TOTALWAGES",uVar9);
    pwVar8[uVar9] = L'\0';
    pwStack_284 = (wchar_t *)&stack0xfffffd88;
    pcStack_280 = (char *)0x0;
    uVar6 = 10;
    uVar9 = FUN_00ace02d((short *)&DAT_00d5d4fc);
    if (uVar6 <= uVar9) {
      if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_284);
      }
      uVar6 = uVar9 + 0x20 & 0xffffffe0;
      pwStack_284 = _malloc(uVar6 * 2);
    }
    _wcsncpy(pwStack_284,L"s2",uVar9);
    pwStack_284[uVar9] = L'\0';
    pcStack_280 = (char *)uVar9;
    FUN_00831570(&uStack_2c4,&pwStack_284,(undefined4 *)&stack0xfffffd9c);
    piVar4 = FUN_00833750();
    if (uVar6 < 0xb) {
      if (10 < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        _free(pwVar8);
      }
      (**(code **)(*piVar4 + 0x84))();
      (**(code **)(*piVar4 + 0x60))();
      FUN_0073e5e0(piVar4,(int *)param_1[0xdf]);
      (**(code **)(*(int *)param_1[0xd6] + 0xc))();
      if (pvVar16 == (void *)0x0) {
        ExceptionList = pcVar14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      puStack_2c0 = &UNK_0082528b;
      _free(pvVar16);
    }
                    /* WARNING: Subroutine does not return */
    _free(pwStack_284);
  }
                    /* WARNING: Subroutine does not return */
  _free(pwStack_154);
}


//// FUNCTION FUN_008252b0 @ 008252b0 ////

void __fastcall FUN_008252b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(void **)(param_1 + 0x3b4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x3b4) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0;
    iVar1 = FUN_0045f400();
    iVar1 = *(int *)(iVar1 + 0x98);
    iVar2 = FUN_0045f400();
    if (iVar1 != iVar2 + 0xa4) {
      do {
        iVar7 = 0;
        pTVar6 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar5 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar2 = 0;
        piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
        iVar2 = FUN_00ace790(piVar3,iVar2,pTVar5,pTVar6,iVar7);
        if (iVar2 != 0) {
          iVar7 = FUN_005773c0(iVar2);
          iVar4 = GetPlayerStudio();
          if (iVar7 == iVar4) {
            iStack_c = iVar2;
            uStack_8 = (**(code **)(**(int **)(iVar1 + 8) + 0x28))();
            uStack_4 = (**(code **)(**(int **)(iVar1 + 8) + 0x2c))();
            FUN_008235c0((void *)(param_1 + 0x3b0),&iStack_c);
          }
        }
        iVar1 = *(int *)(iVar1 + 4);
        iVar2 = FUN_0045f400();
      } while (iVar1 != iVar2 + 0xa4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x3b4));
}


//// FUNCTION FUN_00825370 @ 00825370 ////

/* WARNING: Removing unreachable block (ram,0x00825578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00825370(uint *param_1)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char *pcVar7;
  int *piVar8;
  uint *puVar9;
  char *pcVar10;
  uint *this;
  float10 fVar11;
  undefined4 **ppuVar12;
  char **ppcVar13;
  float fVar14;
  undefined4 *this_00;
  float fVar15;
  int *piVar16;
  uint *puStack_3a0;
  undefined1 *puStack_39c;
  undefined4 uStack_398;
  char *pcStack_394;
  float *pfStack_36c;
  undefined4 uStack_368;
  uint *puStack_364;
  float fStack_360;
  int *piStack_35c;
  uint *puStack_358;
  undefined4 **ppuStack_348;
  uint *puStack_344;
  uint uStack_340;
  undefined4 *puStack_33c;
  int *piStack_338;
  undefined4 *puStack_334;
  char *pcStack_330;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  uint *puStack_2fc;
  undefined4 *puVar20;
  int *piStack_2dc;
  undefined4 *puVar21;
  char *pcStack_2c4;
  int *piStack_2c0;
  uint *puStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  uint uStack_29c;
  int *piStack_298;
  undefined4 uStack_294;
  uint uStack_22c;
  undefined1 *puVar22;
  uint *puVar23;
  uint *puStack_200;
  uint *puVar24;
  uint uVar25;
  void *pvVar26;
  uint uVar27;
  undefined4 *puStack_198;
  undefined4 local_194;
  undefined1 *puStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  undefined2 *puStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined2 auStack_16c [10];
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_f8;
  undefined4 uStack_d0;
  undefined4 uStack_b0;
  wchar_t awStack_94 [6];
  undefined4 uStack_88;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4f4c;
  pvStack_c = ExceptionList;
  this = (uint *)0x0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x74))();
  puStack_198 = &uStack_18c;
  uStack_18c = (uint *)((uint)uStack_18c._2_2_ << 0x10);
  local_194 = 0;
  puStack_190 = &lpType_0000000a;
  uVar2 = FUN_00ace02d((short *)&DAT_00d5d614);
  FUN_004036d0(&puStack_198,L"s6",uVar2);
  puStack_178 = auStack_16c;
  auStack_16c[0] = 0;
  uStack_174 = 0;
  uStack_170 = 10;
  pvStack_c = (void *)0x1;
  sVar3 = _swprintf(awStack_94,0xd18f7c,(wchar_t *)param_1[1]);
  FUN_0040cae0(&puStack_178,awStack_94,sVar3);
  FUN_00831ac0((undefined4 *)&stack0xfffffe18,&puStack_198,&puStack_178);
  piVar4 = FUN_00833680();
  if (10 < uStack_170) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_178);
  }
  pvStack_c = (void *)0xffffffff;
  if (&lpType_0000000a < puStack_190) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_198);
  }
  uVar27 = 1;
  (**(code **)(*piVar4 + 0x5c))();
  FUN_0073e5e0(piVar4,(int *)param_1);
  (**(code **)(*piVar4 + 0x88))();
  pvVar26 = (void *)0x1;
  (**(code **)(*param_1 + 0xc))();
  uVar2 = FUN_00ace02d((short *)&DAT_00d5d60c);
  FUN_004036d0(&stack0xfffffe50,L"s7",uVar2);
  uStack_24 = 2;
  puVar5 = FUN_009b5e60(&puStack_190,param_1[1]);
  uStack_24 = CONCAT31(uStack_24._1_3_,3);
  FUN_00831ac0(&puStack_200,(undefined4 *)&stack0xfffffe50,puVar5);
  piVar4 = FUN_00833680();
  if (10 < uStack_188) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_190);
  }
  uStack_24 = 0xffffffff;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*param_1 + 0xc))();
  puStack_200 = (uint *)0x8255bb;
  pvVar6 = operator_new(0x394);
  uStack_44 = 4;
  if (pvVar6 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_200 = (uint *)0x8255dd;
    piVar4 = FUN_00737010(pvVar6,1.0);
  }
  puStack_200 = param_1;
  uStack_44 = 0xffffffff;
  (**(code **)(*piVar4 + 0x5c))();
  puVar23 = param_1;
  (**(code **)(*piVar4 + 100))();
  puVar5 = (undefined4 *)FUN_00585ff0((void *)*piStack_4c,(undefined4 *)&stack0xfffffe04);
  pvVar6 = (void *)*puVar5;
  FUN_00737130((int)piVar4);
  puVar22 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0xc))();
  puVar24 = (uint *)&stack0xfffffe1c;
  uVar25 = 0;
  uVar2 = FUN_00ace02d((short *)&DAT_00d3aa80);
  FUN_004036d0(&stack0xfffffe10,L"s4",uVar2);
  uStack_64 = 5;
  puVar5 = (undefined4 *)(**(code **)(*(int *)*piStack_4c + 0x5c))();
  uStack_68 = CONCAT31(uStack_68._1_3_,6);
  FUN_008319b0((undefined4 *)&stack0xfffffdc0,(undefined4 *)&stack0xfffffe0c,puVar5);
  piVar4 = FUN_00833750();
  if (10 < uVar27) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar26);
  }
  uStack_68 = 0xffffffff;
  if (10 < uVar25) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar6);
  }
  (**(code **)(*piVar4 + 0x5c))();
  uStack_22c = DAT_00e5c388;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar26 = operator_new(0x360);
  uStack_88 = 7;
  if (pvVar26 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    pcVar10 = "ui/ppod_statbar_director.dds";
    if (*(int *)(*piStack_4c + 0x814) != 3) {
      pcVar10 = "ui/job_star.dds";
    }
    puVar22 = &stack0xfffffdf8;
    puVar23 = (uint *)&DAT_00000014;
    pcVar7 = pcVar10;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xfffffdec,pcVar10,(int)pcVar7 - (int)(pcVar10 + 1));
    uStack_88 = CONCAT31(uStack_88._1_3_,8);
    uStack_22c = 1;
    piVar4 = FUN_0069d820(pvVar26,(undefined4 *)&stack0xfffffdec,0,0,0x3f800000,0x3f800000);
  }
  uStack_88 = 0xffffffff;
  if (((uStack_22c & 1) != 0) && (&DAT_00000014 < puVar23)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar22);
  }
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x74))();
  (**(code **)(*param_1 + 0xc))();
  pvVar26 = (void *)(**(code **)(*(int *)*piStack_4c + 0x27c))();
  FUN_004767d0(pvVar26);
  pvVar26 = operator_new(0x4dc);
  uStack_b0 = 10;
  if (pvVar26 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007ac880(pvVar26,1,0,0,0);
  }
  uStack_b0 = 0xffffffff;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 0x68))();
  (**(code **)(*param_1 + 0xc))();
  pvVar26 = operator_new(0x3d4);
  uStack_d0 = 0xb;
  if (pvVar26 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    uStack_294 = 0x8258de;
    piVar8 = FUN_009001a0(pvVar26,1,2);
  }
  uStack_d0 = 0xffffffff;
  uStack_294 = 0x825906;
  (**(code **)(*piVar8 + 0x60))();
  uStack_294 = 0x41700000;
  uStack_29c = 2;
  fStack_2a0 = 1.1970571e-38;
  piStack_298 = piVar4;
  (**(code **)(*piVar8 + 0x68))();
  iVar17 = *piVar8;
  fStack_2a0 = 1.1970587e-38;
  fVar11 = (float10)(**(code **)(iVar17 + 0x14))();
  fStack_2a0 = (float)(fVar11 * (float10)0.5);
  fStack_2a4 = 1.197061e-38;
  fVar11 = (float10)(**(code **)(*piVar8 + 0x10))();
  fStack_2a4 = (float)(fVar11 * (float10)0.5);
  puStack_2a8 = (uint *)0x825944;
  (**(code **)(iVar17 + 0x74))();
  puStack_2a8 = (uint *)0x1;
  (**(code **)(*param_1 + 0xc))();
  piStack_298 = operator_new(0x448);
  uStack_f8 = 0xc;
  if (piStack_298 == (void *)0x0) {
    piStack_2dc = (int *)0x0;
  }
  else {
    piStack_2dc = FUN_006dc970(piStack_298,DAT_01050778,'\0');
  }
  uStack_f8 = 0xffffffff;
  (**(code **)(*piStack_2dc + 0x84))();
  iVar17 = *piStack_2dc;
  (**(code **)(iVar17 + 0x10))();
  (**(code **)(*piStack_2dc + 0x10))();
  (**(code **)(iVar17 + 0x74))();
  piStack_2c0 = (int *)0x8259e1;
  FUN_006dac80(piStack_2dc,0.5);
  pcStack_2c4 = (char *)0x2;
  piStack_2c0 = piVar4;
  (**(code **)(*piStack_2dc + 0x5c))();
  (**(code **)(*piStack_2dc + 100))();
  puStack_2a8 = &uStack_29c;
  uStack_29c = uStack_29c & 0xffff0000;
  fStack_2a4 = 0.0;
  fStack_2a0 = 1.4013e-44;
  uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_CURRENT</translate>");
  FUN_004036d0(&puStack_2a8,L"<translate>SALARYADJUST_TOOLTIP_CURRENT</translate>",uVar2);
  uStack_11c = 0xd;
  (**(code **)(*piStack_2dc + 0x90))();
  uStack_120 = 0xffffffff;
  if (10 < (uint)fStack_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(piVar8);
  }
  (**(code **)(*param_1 + 0xc))();
  do {
    cVar1 = (**(code **)(*piStack_2dc + 0x50))();
  } while (cVar1 != '\0');
  pvVar26 = operator_new(0x448);
  uStack_128 = 0xe;
  if (pvVar26 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006dc970(pvVar26,DAT_01050778,'\0');
  }
  uStack_128 = 0xffffffff;
  piVar8 = piVar4;
  (**(code **)(*piVar4 + 0x84))();
  iVar17 = *piVar4;
  fVar11 = (float10)(**(code **)(iVar17 + 0x10))();
  puVar22 = (undefined1 *)(float)(fVar11 * (float10)0.5);
  (**(code **)(*piVar4 + 0x10))();
  (**(code **)(iVar17 + 0x74))();
  FUN_006dac80(piVar4,0.5);
  puVar20 = (undefined4 *)0x42c20000;
  (**(code **)(*piVar4 + 0x5c))();
  puStack_2fc = param_1;
  (**(code **)(*piVar4 + 100))();
  puVar21 = (undefined4 *)0x0;
  uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_FUTURE</translate>");
  FUN_004036d0(&stack0xfffffd28,L"<translate>SALARYADJUST_TOOLTIP_FUTURE</translate>",uVar2);
  puVar5 = (undefined4 *)&stack0xfffffd28;
  uStack_14c = 0xf;
  (**(code **)(*piVar4 + 0x90))();
  uStack_150 = 0xffffffff;
  if (puVar21 < (undefined4 *)0xb) {
    (**(code **)(*param_1 + 0xc))();
    do {
      cVar1 = (**(code **)(*piVar4 + 0x50))();
    } while (cVar1 != '\0');
    pvVar26 = operator_new(0x420);
    if (pvVar26 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar22 = &stack0xfffffd28;
      piStack_2dc = (int *)&lpType_0000000a;
      uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_MINUS</translate>");
      FUN_004036d0(&stack0xfffffd1c,L"<translate>SALARYADJUST_TOOLTIP_MINUS</translate>",uVar2);
      pcStack_2c4 = &stack0xfffffd48;
      piStack_2c0 = (int *)0x0;
      piVar8 = (int *)&DAT_00000014;
      _strncpy(pcStack_2c4,"button_minus.",0xd);
      piStack_2c0 = (int *)0xd;
      pcStack_2c4[0xd] = '\0';
      puStack_2fc = (uint *)((uint)param_1 | 6);
      uStack_158 = 0x12;
      pcStack_330 = (char *)0x825caf;
      piVar4 = FUN_0069fb10(pvVar26,(int *)&pcStack_2c4,(undefined4 *)&stack0xfffffd1c,0x41e80000,
                            0x41e80000,0,0,0x3f800000,0x3f800000);
    }
    if ((((uint)puStack_2fc & 4) != 0) &&
       (puStack_2fc = (uint *)((uint)puStack_2fc & 0xfffffffb), &DAT_00000014 < piVar8)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c4);
    }
    uStack_158 = 0xffffffff;
    if ((((uint)puStack_2fc & 2) != 0) && (&lpType_0000000a < piStack_2dc)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar22);
    }
    puVar19 = (undefined4 *)0x4;
    (**(code **)(*piVar4 + 0x18))();
    pcVar7 = "SALARYADJUST_MINUS";
    piVar18 = (int *)0x0;
    pcVar10 = &LAB_005f37f0;
    iVar17 = 0;
    pcStack_330 = (char *)0x825d3d;
    (**(code **)(*piVar4 + 0x18))();
    pcStack_330 = "SALARYADJUST_MINUS";
    puStack_334 = (undefined4 *)0x0;
    piStack_338 = (int *)&LAB_005f37f0;
    puStack_33c = (undefined4 *)0x5;
    uStack_340 = 0x825d52;
    (**(code **)(*piVar4 + 0x18))();
    uStack_340 = DAT_00e5c340;
    puStack_344 = param_1;
    ppuStack_348 = (undefined4 **)0x1;
    (**(code **)(*piVar4 + 0x5c))();
    FUN_0073e5e0(piVar4,(int *)param_1);
    (**(code **)(*piVar18 + 0xc))();
    piVar4[0x12] = piVar4[0x12] + 1;
    puStack_358 = (uint *)0x825d9d;
    piStack_338 = piVar4;
    puVar9 = FUN_00823640((void *)(iVar17 + 0x3c4),(uint *)&piStack_338);
    *puVar9 = *uStack_18c;
    iVar17 = piVar4[0x12];
    piVar4[0x12] = iVar17 + -1;
    if (iVar17 + -1 == 0) {
      puStack_358 = (uint *)0x825dc5;
      (**(code **)*piVar4)();
    }
    puStack_33c = (undefined4 *)&stack0xfffffc8c;
    piStack_338 = (int *)&stack0xfffffc8c;
    uStack_368 = (int *)((uint)uStack_368._2_2_ << 0x10);
    pfStack_36c = (float *)0xa;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(piStack_338,(wchar_t *)&lpCaption_00d16918,uVar2);
    piStack_338 = FUN_00833750();
    puStack_358 = param_1;
    piStack_35c = (int *)0x1;
    fStack_360 = 1.1972377e-38;
    (**(code **)(*piStack_338 + 0x5c))();
    fStack_360 = 6.0;
    puStack_364 = param_1;
    uStack_368 = (int *)0x2;
    pfStack_36c = (float *)0x825e2f;
    (**(code **)(*puStack_344 + 0x68))();
    pfStack_36c = (float *)0x1;
    (**(code **)(*param_1 + 0xc))();
    piStack_35c = operator_new(0x420);
    if (piStack_35c != (int *)0x0) {
      ppuStack_348 = &puStack_33c;
      puStack_33c = (undefined4 *)((uint)puStack_33c & 0xffff0000);
      puStack_344 = (uint *)0x0;
      uStack_340 = 10;
      uVar2 = FUN_00ace02d(L"<translate>SALARYADJUST_TOOLTIP_PLUS</translate>");
      FUN_004036d0(&ppuStack_348,L"<translate>SALARYADJUST_TOOLTIP_PLUS</translate>",uVar2);
      fStack_360 = (float)((uint)fStack_360 | 8);
      pcVar10 = &stack0xfffffce4;
      puVar19 = (undefined4 *)((uint)puVar19 & 0xffffff00);
      pcVar7 = (char *)0x14;
      _strncpy(pcVar10,"button_plus.",0xc);
      pcVar10[0xc] = '\0';
      fStack_360 = (float)((uint)fStack_360 | 0x10);
      pcStack_394 = (char *)0x825f15;
      this = FUN_0069fb10(piStack_35c,(int *)&stack0xfffffcd8,&ppuStack_348,0x41e80000,0x41e80000,0,
                          0,0x3f800000,0x3f800000);
    }
    if ((((uint)fStack_360 & 0x10) != 0) &&
       (fStack_360 = (float)((uint)fStack_360 & 0xffffffef), (char *)0x14 < pcVar7)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar10);
    }
    if ((((uint)fStack_360 & 8) != 0) && (10 < uStack_340)) {
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_348);
    }
    (**(code **)(*this + 0x18))();
    iVar17 = 0;
    pcStack_394 = (char *)0x825f95;
    piVar18 = piStack_35c;
    (**(code **)(*this + 0x18))();
    pcStack_394 = "SALARYADJUST_PLUS";
    uStack_398 = 0;
    puStack_39c = &LAB_005f37f0;
    puStack_3a0 = (uint *)0x5;
    (**(code **)(*this + 0x18))();
    piVar16 = (int *)0x1;
    (**(code **)(*this + 0x5c))(1,param_1,DAT_00e5c394);
    FUN_0073e5e0(this,(int *)param_1);
    (**(code **)(*piVar18 + 0xc))(this,1);
    this[0x12] = this[0x12] + 1;
    puStack_200 = (uint *)0x1b;
    puStack_3a0 = this;
    puVar9 = FUN_00823640((void *)(iVar17 + 0x3c4),(uint *)&puStack_3a0);
    *puVar9 = *puVar24;
    uVar2 = this[0x12];
    puStack_200 = (uint *)0xffffffff;
    this[0x12] = uVar2 - 1;
    if (uVar2 - 1 == 0) {
      (**(code **)*this)(1);
    }
    puStack_344 = operator_new(0x3e4);
    puStack_200 = (uint *)0x1c;
    if (puStack_344 == (undefined4 *)0x0) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = FUN_0073d300(puStack_344);
    }
    pfStack_36c = &fStack_360;
    fStack_360 = (float)((uint)fStack_360 & 0xffffff00);
    uStack_368 = (int *)0x0;
    puStack_364 = (uint *)0x14;
    _strncpy((char *)pfStack_36c,"ai_staricon.flm",0xf);
    uStack_368 = (int *)0xf;
    *(char *)((int)pfStack_36c + 0xf) = '\0';
    puStack_200 = (uint *)0x1d;
    FUN_0073dda0(piVar18,&pfStack_36c);
    puStack_200 = (uint *)0xffffffff;
    if (puStack_364 < 0x15) {
      if (*(int *)(*puVar24 + 0x814) == 3) {
        if ((DAT_0104ebbc & 1) == 0) {
          DAT_0104ebbc = DAT_0104ebbc | 1;
          _DAT_0104ebb0 = 0xbf666666;
          _DAT_0104ebb4 = 0;
          _DAT_0104ebb8 = 0x3fd9999a;
        }
        if ((DAT_0104ebbc & 2) == 0) {
          DAT_0104ebbc = DAT_0104ebbc | 2;
          _DAT_0104eba4 = 0;
          _DAT_0104eba8 = 0xbd23d70a;
          _DAT_0104ebac = 0x3fd9999a;
        }
        ppcVar13 = (char **)&DAT_0104eba4;
        ppuVar12 = (undefined4 **)&DAT_0104ebb0;
      }
      else {
        ppcVar13 = &pcStack_330;
        ppuVar12 = &puStack_33c;
        pcStack_330 = (char *)0x0;
        puStack_33c = (undefined4 *)0x0;
        piStack_338 = (int *)0xbf4ccccd;
        puStack_334 = (undefined4 *)0x3fd9999a;
      }
      FUN_0073cb00(piVar18,ppuVar12,ppcVar13,0x3ea0d97c);
      FUN_0073cff0(piVar18,(int *)*puVar24);
      this_00 = DAT_00e5c3a0;
      (**(code **)(*piVar18 + 0x74))(DAT_00e5c39c);
      (**(code **)(*piVar16 + 0x5c))(1,param_1,DAT_00e5c398);
      FUN_0073e5e0(this_00,(int *)param_1);
      (**(code **)(*param_1 + 0xc))(this_00,1);
      FUN_008214b0((int)&uStack_340);
      uStack_340 = *puVar23;
      uStack_368[0x12] = uStack_368[0x12] + 1;
      if (piStack_338 != (int *)0x0) {
        piVar18 = piStack_338 + 0x12;
        *piVar18 = *piVar18 + -1;
        if (*piVar18 == 0) {
          (**(code **)*piStack_338)(1);
        }
      }
      this_00[0x12] = this_00[0x12] + 1;
      piStack_338 = uStack_368;
      if (puStack_33c != (undefined4 *)0x0) {
        piVar18 = puStack_33c + 0x12;
        *piVar18 = *piVar18 + -1;
        if (*piVar18 == 0) {
          (**(code **)*puStack_33c)(1);
        }
      }
      puStack_33c = this_00;
      (*(code *)puStack_334[1])();
      (*(code *)*puStack_334)();
      (*(code *)puVar19[1])();
      (*(code *)*puVar19)();
      (*(code *)puVar5[1])();
      (*(code *)*puVar5)();
      (*(code *)puVar20[1])();
      (*(code *)*puVar20)();
      (*(code *)puVar21[1])();
      piStack_2c0 = piVar4;
      (*(code *)*puVar21)();
      (*(code *)piVar8[1])();
      puStack_2a8 = this;
      (*(code *)*piVar8)();
      FUN_00823750(piVar16 + 0xf4,&uStack_340);
      fVar14 = (float)param_1[0x39] - 4.0;
      uVar2 = 0;
      fVar15 = (float)param_1[0x39] - 23.0;
      do {
        uStack_368 = (int *)(*(float *)((int)&DAT_00e5c3cc + uVar2) + (float)param_1[0x30]);
        puStack_364 = (uint *)fVar15;
        fStack_360 = (float)uStack_368;
        piStack_35c = (int *)fVar14;
        FUN_007be450((void *)piVar16[0xf8],&uStack_368,&fStack_360);
        uVar2 = uVar2 + 4;
      } while (uVar2 < 0x10);
      FUN_00821560((int)&uStack_340);
      ExceptionList = param_1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pfStack_36c);
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_2dc);
}


//// FUNCTION FUN_00826440 @ 00826440 ////

int __fastcall FUN_00826440(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00821080();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00826470 @ 00826470 ////

undefined4 * __fastcall FUN_00826470(undefined4 *param_1,undefined4 param_2,byte param_3)

{
  FUN_00823850(param_1,param_2);
  if ((param_3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}


//// FUNCTION FUN_00826490 @ 00826490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00826490(void *this,char param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4f6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00822290(*(void **)(*(int *)((int)this + 0x3c8) + 4));
  *(int *)(*(int *)((int)this + 0x3c8) + 4) = *(int *)((int)this + 0x3c8);
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x3c8) = *(undefined4 *)((int)this + 0x3c8);
  *(int *)(*(int *)((int)this + 0x3c8) + 8) = *(int *)((int)this + 0x3c8);
  FUN_00823500((int)this + 0x3d0);
  FUN_0063f0d0(*(void **)((int)this + 0x378),'\x01');
  FUN_0063e2a0(*(void **)((int)this + 0x378),0xffdcb140,0xffffc258);
  FUN_0063f830(*(void **)((int)this + 0x378),_DAT_00e5c354 - 22.0);
  local_10 = (uint *)0x0;
  uVar3 = *(int *)((int)this + 0x3c0) * 7;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar4 = (uint *)0x0;
    if (*(int *)((int)this + 0x3b4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(int *)((int)this + 0x3b8) - *(int *)((int)this + 0x3b4)) / 0xc;
    }
    if ((uVar1 < uVar3) || (*(int *)((int)this + 0x3c0) * 7 + 8U <= uVar3)) break;
    puVar2 = operator_new(0x344);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = FUN_007432f0(puVar2);
    }
    local_4 = 0xffffffff;
    if (local_10 == (uint *)0x0) {
      (**(code **)(*puVar4 + 100))
                (1,this,_DAT_00e5c354 + *(float *)(*(int *)((int)this + 0x358) + 0x9c));
    }
    else {
      (**(code **)(*puVar4 + 100))(2,local_10,0);
    }
    (**(code **)(*puVar4 + 0x5c))(1,*(undefined4 *)((int)this + 0x358),DAT_00e5c358);
    (**(code **)(**(int **)((int)this + 0x358) + 0xc))(puVar4,1);
    FUN_0063f830(*(void **)((int)this + 0x378),DAT_00e5c360);
    FUN_00825370(puVar4);
    local_10 = puVar4;
  }
  FUN_0063f890(*(void **)((int)this + 0x378),param_1);
  FUN_00821ce0(this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00826690 @ 00826690 ////

void __thiscall FUN_00826690(void *this,char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce4fbd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bdd00(*(int *)((int)this + 0x3e0));
  (**(code **)(*(int *)this + 0xa8))();
  SalaryAdjustScreen_Build(this);
  FUN_00826490(this,param_1);
  if ((*(int *)((int)this + 0x3b4) != 0) &&
     (7 < (uint)((*(int *)((int)this + 0x3b8) - *(int *)((int)this + 0x3b4)) / 0xc))) {
    FUN_008203a0(this);
  }
  iVar7 = 0xd;
  pvVar3 = (void *)AwardBonusManager_Get();
  cVar2 = AwardBonusManager_IsBonusActive(pvVar3,iVar7);
  if (cVar2 != '\0') {
    pvVar3 = operator_new(0x448);
    bVar6 = pvVar3 == (void *)0x0;
    uStack_4 = 0;
    if (bVar6) {
      piVar4 = (int *)0x0;
    }
    else {
      pcStack_4c = acStack_40;
      acStack_40[0] = '\0';
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy(pcStack_4c,"PIP_HALFSTARSALARY",0x12);
      uStack_48 = 0x12;
      pcStack_4c[0x12] = '\0';
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      piVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
      uStack_4 = 2;
      piVar4 = FUN_006db8c0(pvVar3,piVar4);
    }
    uStack_4 = 4;
    (**(code **)(*(int *)((int)this + 0x35c) + 4))();
    *(int **)((int)this + 0x370) = piVar4;
    (*(code *)**(undefined4 **)((int)this + 0x35c))();
    if ((!bVar6) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    uStack_4 = 0xffffffff;
    if ((!bVar6) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    iVar7 = *(int *)((int)this + 0x370);
    *(undefined1 *)(iVar7 + 0x3eb) = 1;
    *(undefined1 *)(iVar7 + 0x3ed) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x370) + 0x430) = 0xb;
    FUN_006dcb60(*(void **)((int)this + 0x370),'\0',0,0,0,'\0');
    FUN_006d9ca0(*(void **)((int)this + 0x370),'\x01','\x01');
    *(undefined1 *)(*(int *)((int)this + 0x370) + 0x3ee) = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    puVar5 = FUN_006da130(*(int **)((int)this + 0x370),(float *)0x0,(int)&uStack_58);
    puVar1 = *(undefined4 **)((int)this + 0x374);
    if (puVar1 != puVar5) {
      if (puVar1 != (undefined4 *)0x0) {
        piVar4 = puVar1 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
      *(undefined4 **)((int)this + 0x374) = puVar5;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00826950 @ 00826950 ////

undefined4 * __fastcall FUN_00826950(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce506f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d5d134;
  param_1[0x14] = &PTR_FUN_00d5d118;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xd1] = &PTR_FUN_00d18c2c;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = param_1 + 0xd7;
  param_1[0xd7] = &PTR_FUN_00d35aac;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = param_1 + 0xe0;
  param_1[0xe0] = &PTR_FUN_00d172a0;
  param_1[0xe5] = 0;
  param_1[0xe9] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = param_1 + 0xe6;
  param_1[0xe6] = &PTR_FUN_00d172a0;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  local_4._0_1_ = 8;
  local_4._1_3_ = 0;
  param_1[0xf0] = 0;
  iVar1 = FUN_00821080();
  param_1[0xf2] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf2];
  *(undefined4 *)param_1[0xf2] = param_1[0xf2];
  *(undefined4 *)(param_1[0xf2] + 8) = param_1[0xf2];
  param_1[0xf3] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  local_4._0_1_ = 10;
  pvVar2 = operator_new(0x54);
  local_4._0_1_ = 0xb;
  if (pvVar2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007be2c0((int)pvVar2);
  }
  pvVar2 = (void *)0x0;
  local_4 = CONCAT31(local_4._1_3_,10);
  param_1[0xf8] = iVar1;
  iVar1 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar1,pvVar2);
  FUN_008252b0((int)param_1);
  FUN_00826690(param_1,'\x01');
  DAT_0104eb9c = DAT_0104eb9c + 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00826ad0 @ 00826ad0 ////

undefined4 * __cdecl FUN_00826ad0(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce508b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"expand");
  iVar1 = __wcsnicmp(param_1,L"expand",_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0x88);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_008297b0(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826b60 @ 00826b60 ////

undefined4 * __cdecl FUN_00826b60(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce50ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"table");
  iVar1 = __wcsnicmp(param_1,L"table",_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0xa0);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_0082e100(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826bf0 @ 00826bf0 ////

undefined4 * __cdecl FUN_00826bf0(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce50cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"nobr");
  iVar1 = __wcsnicmp(param_1,L"nobr",_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0x7c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_0082a980(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826c80 @ 00826c80 ////

undefined4 * __cdecl FUN_00826c80(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce50eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&PTR_LAB_00d5dd78);
  iVar1 = __wcsnicmp(param_1,(wchar_t *)&PTR_LAB_00d5dd78,_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0xc0);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_0082a740(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826d10 @ 00826d10 ////

undefined4 * __cdecl FUN_00826d10(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce510b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&PTR_DAT_00d5dce8);
  iVar1 = __wcsnicmp(param_1,(wchar_t *)&PTR_DAT_00d5dce8,_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0x7c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_00829c70(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826da0 @ 00826da0 ////

undefined4 * __cdecl FUN_00826da0(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce512b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&DAT_00d5daa4);
  iVar1 = __wcsnicmp(param_1,L"a",_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0x80);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_00829270(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00826e70 @ 00826e70 ////

char FUN_00826e70(char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = *param_1;
  cVar2 = '\0';
  if ((cVar1 < 'a') || ('f' < cVar1)) {
    if ((cVar1 < 'A') || ('F' < cVar1)) {
      if (('/' < cVar1) && (cVar1 < ':')) {
        cVar2 = cVar1 + -0x30;
      }
    }
    else {
      cVar2 = cVar1 + -0x37;
    }
  }
  else {
    cVar2 = cVar1 + -0x57;
  }
  cVar1 = param_1[1];
  cVar3 = '\0';
  if (('`' < cVar1) && (cVar1 < 'g')) {
    return cVar2 * '\x10' + cVar1 + -0x57;
  }
  if (('@' < cVar1) && (cVar1 < 'G')) {
    return cVar2 * '\x10' + cVar1 + -0x37;
  }
  if (('/' < cVar1) && (cVar1 < ':')) {
    cVar3 = cVar1 + -0x30;
  }
  return cVar2 * '\x10' + cVar3;
}


//// FUNCTION FUN_00826f20 @ 00826f20 ////

uint __thiscall
FUN_00826f20(void *this,undefined1 *param_1,int param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *_MaxCount;
  wchar_t *pwVar3;
  int iVar4;
  uint3 uVar6;
  uint uVar5;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  
  *param_1 = 0;
  _MaxCount = (wchar_t *)FUN_00ace02d(param_3);
  wVar1 = *param_4;
  pwVar7 = param_4;
  pwVar3 = _MaxCount;
  do {
    if (wVar1 == L'\0') {
LAB_00826f8c:
      return (uint)pwVar3 & 0xffffff00;
    }
    wVar1 = *pwVar7;
    pwVar3 = (wchar_t *)CONCAT22((short)((uint)pwVar3 >> 0x10),wVar1);
    if (wVar1 == L'>') goto LAB_00826f8c;
    if (((((wVar1 == L' ') || (wVar1 == L'\t')) || (wVar1 == L'\n')) || (wVar1 == L'\r')) &&
       (pwVar3 = (wchar_t *)__wcsnicmp(pwVar7 + 1,param_3,(size_t)_MaxCount),
       pwVar3 == (wchar_t *)0x0)) {
      pwVar7 = pwVar7 + 1;
      if ((pwVar7 != (wchar_t *)0x0) && (pwVar3 = _wcschr(param_4,L'>'), pwVar7 < pwVar3)) {
        iVar4 = FUN_00ace02d(param_3);
        pwVar7 = pwVar7 + iVar4;
        while( true ) {
          wVar1 = *pwVar7;
          iVar4 = CONCAT22((short)((uint)iVar4 >> 0x10),wVar1);
          if (((wVar1 != L' ') && (wVar1 != L'\t')) && ((wVar1 != L'\n' && (wVar1 != L'\r'))))
          break;
          pwVar7 = pwVar7 + 1;
        }
        if (*pwVar7 != L'=') {
          uVar5 = (**(code **)(*(int *)this + 0x44))(param_1,param_2,param_3,pwVar7);
          return uVar5;
        }
        uVar6 = (uint3)((uint)iVar4 >> 8);
        uVar5 = CONCAT31(uVar6,1);
        do {
          do {
            pwVar3 = pwVar7;
            wVar1 = pwVar3[1];
            pwVar7 = pwVar3 + 1;
          } while (wVar1 == L' ');
        } while (((wVar1 == L'\t') || (wVar1 == L'\n')) || (wVar1 == L'\r'));
        puVar8 = param_1;
        if ((wVar1 == L'\"') || (wVar1 == L'\'')) {
          wVar2 = pwVar3[2];
          pwVar3 = pwVar3 + 2;
          while (((wVar2 != L'\0' && (wVar2 != wVar1)) &&
                 ((wVar2 != L'>' && (param_2 = param_2 + -1, param_2 != 0))))) {
            pwVar3 = pwVar3 + 1;
            *puVar8 = (char)wVar2;
            wVar2 = *pwVar3;
            puVar8 = puVar8 + 1;
          }
        }
        else {
          while (((((wVar1 != L'\0' && (wVar1 != L' ')) && (wVar1 != L'\t')) &&
                  ((wVar1 != L'\n' && (wVar1 != L'\r')))) &&
                 ((wVar1 != L'>' && (param_2 = param_2 + -1, param_2 != 0))))) {
            pwVar7 = pwVar7 + 1;
            *puVar8 = (char)wVar1;
            wVar1 = *pwVar7;
            puVar8 = puVar8 + 1;
          }
        }
        if (param_2 < 1) {
          uVar5 = (uint)uVar6 << 8;
          puVar8 = param_1;
        }
        *puVar8 = 0;
        return uVar5;
      }
      goto LAB_00826f8c;
    }
    pwVar7 = pwVar7 + 1;
    wVar1 = *pwVar7;
  } while( true );
}


//// FUNCTION FUN_008270d0 @ 008270d0 ////

void __fastcall FUN_008270d0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
  }
  return;
}


//// FUNCTION FUN_00827190 @ 00827190 ////

/* WARNING: Removing unreachable block (ram,0x008272b0) */
/* WARNING: Removing unreachable block (ram,0x0082726a) */
/* WARNING: Removing unreachable block (ram,0x008271f7) */
/* WARNING: Removing unreachable block (ram,0x0082721a) */
/* WARNING: Removing unreachable block (ram,0x0082728d) */
/* WARNING: Removing unreachable block (ram,0x008272d3) */
/* WARNING: Removing unreachable block (ram,0x00827202) */
/* WARNING: Removing unreachable block (ram,0x008272f1) */
/* WARNING: Removing unreachable block (ram,0x00827298) */
/* WARNING: Removing unreachable block (ram,0x00827275) */
/* WARNING: Removing unreachable block (ram,0x008272bb) */
/* WARNING: Removing unreachable block (ram,0x008271df) */
/* WARNING: Removing unreachable block (ram,0x008271d4) */
/* WARNING: Removing unreachable block (ram,0x00827238) */

void FUN_00827190(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 local_4;
  
  if (*param_2 == '#') {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar3 - (int)(param_2 + 1) == 7) {
      cVar1 = FUN_00826e70(param_2 + 1);
      local_4._0_3_ = CONCAT12(cVar1,0xffff);
      local_4 = CONCAT13(0xff,(undefined3)local_4);
      cVar1 = FUN_00826e70(param_2 + 3);
      local_4._0_2_ = CONCAT11(cVar1,0xff);
      cVar1 = FUN_00826e70(param_2 + 5);
      local_4 = CONCAT31(local_4._1_3_,cVar1);
      *param_1 = local_4;
      return;
    }
    if ((int)pcVar3 - (int)(param_2 + 1) == 9) {
      cVar1 = FUN_00826e70(param_2 + 1);
      cVar2 = FUN_00826e70(param_2 + 3);
      local_4._0_3_ = CONCAT12(cVar2,0xffff);
      local_4 = CONCAT13(cVar1,(undefined3)local_4);
      cVar1 = FUN_00826e70(param_2 + 5);
      local_4._0_2_ = CONCAT11(cVar1,0xff);
      cVar1 = FUN_00826e70(param_2 + 7);
      local_4 = CONCAT31(local_4._1_3_,cVar1);
      *param_1 = local_4;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00827320 @ 00827320 ////

void __thiscall FUN_00827320(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = param_1 + 1;
  piVar2 = (int *)((int)this + 0x44);
  param_1[2] = (int)piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  param_1[0xb] = (int)this;
  (**(code **)(*param_1 + 0xc))(param_2);
  return;
}


//// FUNCTION FUN_00827350 @ 00827350 ////

undefined * __thiscall FUN_00827350(void *this,int param_1)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (param_1 == 9) {
    pcVar1 = (char *)(**(code **)(*(int *)this + 4))(0x11);
    if (*pcVar1 != '\0') {
      if ((DAT_0104ebc4 & 1) == 0) {
        DAT_0104ebc4 = DAT_0104ebc4 | 1;
        DAT_0104ebc3 = 0xff;
        DAT_0104ebc2 = 0x80;
        DAT_0104ebc1 = 0x80;
        DAT_0104ebc0 = 0x80;
      }
      return &DAT_0104ebc0;
    }
  }
  puVar2 = (undefined *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(param_1);
  return puVar2;
}


//// FUNCTION FUN_008273c0 @ 008273c0 ////

short * __thiscall FUN_008273c0(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce514b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(short **)((int)this + 0x6c) != (short *)0x0) {
    ExceptionList = &local_c;
    for (iVar2 = FUN_00ace02d(*(short **)((int)this + 0x6c)); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*param_1 == 0) {
        ExceptionList = local_c;
        return param_1;
      }
      param_1 = param_1 + 1;
    }
    param_1 = (short *)(**(code **)(*(int *)this + 0x40))(param_1);
  }
  sVar1 = *param_1;
  if (sVar1 != 0) {
    do {
      if ((((sVar1 == 0x20) || (sVar1 == 9)) || (sVar1 == 10)) || (sVar1 == 0xd)) {
        param_1 = param_1 + 1;
        piVar4 = this;
        if (*(int *)((int)this + 0x2c) != 0) {
          piVar4 = (int *)FUN_008270d0(*(int *)((int)this + 0x2c));
        }
        (**(code **)(*piVar4 + 0x1c))();
      }
      else if (sVar1 == 0x3c) {
        if (param_1[1] == 0x2f) {
          sVar1 = *param_1;
          for (; ((sVar1 != 0x3e && (sVar1 != 0)) && (param_1[1] != 0)); param_1 = param_1 + 1) {
            sVar1 = param_1[1];
          }
          ExceptionList = local_c;
          return param_1 + 1;
        }
        param_1 = (short *)(**(code **)(*(int *)this + 0x38))(param_1 + 1);
      }
      else {
        puVar3 = operator_new(0x98);
        uStack_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0082ff10(puVar3);
        }
        uStack_4 = 0xffffffff;
        param_1 = (short *)(**(code **)(*(int *)this + 0x3c))(puVar3,param_1);
      }
      sVar1 = *param_1;
    } while (sVar1 != 0);
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008275c0 @ 008275c0 ////

void __thiscall FUN_008275c0(void *this,undefined4 param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)((int)this + 0x38); iVar1 != (int)this + 0x44; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x10))(param_1);
  }
  return;
}


//// FUNCTION FUN_008276a0 @ 008276a0 ////

uint __thiscall FUN_008276a0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint in_EAX;
  
  iVar1 = *(int *)((int)this + 0x38);
  while( true ) {
    if (iVar1 == (int)this + 0x44) {
      return in_EAX & 0xffffff00;
    }
    in_EAX = (**(code **)(**(int **)(iVar1 + 8) + 0x34))(param_1,param_2);
    if ((char)in_EAX != '\0') break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00827710 @ 00827710 ////

void __fastcall FUN_00827710(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d5d638;
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


//// FUNCTION FUN_00827760 @ 00827760 ////

undefined4 * __thiscall FUN_00827760(void *this,byte param_1)

{
  FUN_00827710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827780 @ 00827780 ////

void __fastcall FUN_00827780(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce5181;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5d644;
  piVar1 = (int *)param_1[0x19];
  local_4 = 2;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 < 1) {
      FUN_009a7db0(piVar1);
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    param_1[0x19] = 0;
  }
  if ((undefined4 *)param_1[0xe] != param_1 + 0x11) {
    do {
      piVar1 = (int *)param_1[0xe];
      puVar3 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    } while ((undefined4 *)param_1[0xe] != param_1 + 0x11);
  }
  FUN_00827710(param_1 + 0xc);
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[6] = param_1[5];
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
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


//// FUNCTION FUN_008278d0 @ 008278d0 ////

undefined4 * __thiscall FUN_008278d0(void *this,byte param_1)

{
  FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008278f0 @ 008278f0 ////

void __fastcall FUN_008278f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d5d638;
  return;
}


//// FUNCTION FUN_00827950 @ 00827950 ////

undefined4 * __fastcall FUN_00827950(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce51e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5d644;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = param_1 + 0x11;
  param_1[0x13] = 0;
  *puVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0xc] = &PTR_LAB_00d5d638;
  param_1[0xe] = puVar1;
  *puVar1 = param_1 + 0xd;
  param_1[0x19] = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_4 = 4;
  param_1[3] = param_1;
  FUN_00acdb9e(0xe5c488);
  iVar2 = FUN_0097dda0();
  param_1[4] = iVar2;
  if (DAT_00e5c484 != '\0') {
    iVar2 = 4;
    pcVar4 = "FragLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5c488);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e5c484 = '\0';
  }
  param_1[7] = param_1;
  FUN_00acdb9e(0xe5c488);
  iVar2 = FUN_0097dda0();
  param_1[8] = iVar2;
  if (s___AVCFragmentBase_TM___00e5c46c[0x17] != '\0') {
    iVar2 = 0x14;
    pcVar4 = "LineLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5c488);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCFragmentBase_TM___00e5c46c[0x17] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00827ab0 @ 00827ab0 ////

undefined4 * __fastcall FUN_00827ab0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce521e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d6ac;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar1 = param_1 + 0x23;
  param_1[0x25] = 0;
  *puVar1 = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *puVar1 = param_1 + 0x1f;
  param_1[0x20] = puVar1;
  param_1[0x1e] = &PTR_LAB_00d5d638;
  param_1[0x1b] = L"phrasebook";
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00827b30 @ 00827b30 ////

undefined4 * __thiscall FUN_00827b30(void *this,byte param_1)

{
  FUN_00827b50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827b50 @ 00827b50 ////

void __fastcall FUN_00827b50(undefined4 *param_1)

{
  FUN_00827710(param_1 + 0x1e);
  FUN_00827780(param_1);
  return;
}


//// FUNCTION FUN_00827b70 @ 00827b70 ////

undefined4 * __cdecl FUN_00827b70(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce523b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"phrasebook");
  iVar1 = __wcsnicmp(param_1,L"phrasebook",_MaxCount);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = operator_new(0xac);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = FUN_00827ab0(puVar2);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00827c00 @ 00827c00 ////

undefined4 * __fastcall FUN_00827c00(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d6fc;
  param_1[0x1f] = param_1 + 0x22;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x14;
  param_1[0x1b] = 0;
  return param_1;
}


//// FUNCTION FUN_00827c40 @ 00827c40 ////

undefined4 * __thiscall FUN_00827c40(void *this,byte param_1)

{
  FUN_00827c60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827c60 @ 00827c60 ////

void __fastcall FUN_00827c60(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x21]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1f]);
  }
  FUN_00827780(param_1);
  return;
}


//// FUNCTION FUN_00827c80 @ 00827c80 ////

undefined4 * __cdecl FUN_00827c80(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce525b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&PTR_LAB_00d5e2dc);
  iVar1 = __wcsnicmp(param_1,(wchar_t *)&PTR_LAB_00d5e2dc,_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x9c);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d6fc;
    puVar2[0x1f] = puVar2 + 0x22;
    *(undefined1 *)(puVar2 + 0x22) = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0x14;
    puVar2[0x1b] = 0;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00827d40 @ 00827d40 ////

undefined4 * __fastcall FUN_00827d40(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d74c;
  param_1[0x1b] = L"shadow";
  return param_1;
}


//// FUNCTION FUN_00827d60 @ 00827d60 ////

undefined4 * __thiscall FUN_00827d60(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827d90 @ 00827d90 ////

undefined4 * __cdecl FUN_00827d90(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce527b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"shadow");
  iVar1 = __wcsnicmp(param_1,L"shadow",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d74c;
    puVar2[0x1b] = L"shadow";
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00827e20 @ 00827e20 ////

undefined4 * __fastcall FUN_00827e20(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d79c;
  param_1[0x1b] = 0;
  return param_1;
}


//// FUNCTION FUN_00827e40 @ 00827e40 ////

undefined4 * __thiscall FUN_00827e40(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827e70 @ 00827e70 ////

undefined4 * __cdecl FUN_00827e70(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce529b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"money");
  iVar1 = __wcsnicmp(param_1,L"money",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d79c;
    puVar2[0x1b] = 0;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00827f00 @ 00827f00 ////

undefined4 * __fastcall FUN_00827f00(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d7ec;
  param_1[0x1b] = L"font";
  return param_1;
}


//// FUNCTION FUN_00827f20 @ 00827f20 ////

undefined4 * __thiscall FUN_00827f20(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00827f50 @ 00827f50 ////

undefined4 * __cdecl FUN_00827f50(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce52bb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"font");
  iVar1 = __wcsnicmp(param_1,L"font",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0xc0);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d7ec;
    puVar2[0x1b] = L"font";
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00827ff0 @ 00827ff0 ////

undefined4 * __fastcall FUN_00827ff0(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d83c;
  return param_1;
}


//// FUNCTION FUN_00828010 @ 00828010 ////

undefined4 * __thiscall FUN_00828010(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828040 @ 00828040 ////

undefined4 * __fastcall FUN_00828040(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d88c;
  param_1[0x1b] = &PTR_DAT_00d5db44;
  return param_1;
}


//// FUNCTION FUN_00828060 @ 00828060 ////

undefined4 * __thiscall FUN_00828060(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828090 @ 00828090 ////

undefined4 * __cdecl FUN_00828090(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce52db;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&PTR_DAT_00d5db44);
  iVar1 = __wcsnicmp(param_1,(wchar_t *)&PTR_DAT_00d5db44,_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d88c;
    puVar2[0x1b] = &PTR_DAT_00d5db44;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00828120 @ 00828120 ////

undefined4 * __fastcall FUN_00828120(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d8dc;
  param_1[0x1b] = &DAT_00d5db20;
  return param_1;
}


//// FUNCTION FUN_00828140 @ 00828140 ////

undefined4 * __thiscall FUN_00828140(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828170 @ 00828170 ////

undefined4 * __cdecl FUN_00828170(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce52fb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&DAT_00d5db20);
  iVar1 = __wcsnicmp(param_1,L"b",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d8dc;
    puVar2[0x1b] = &DAT_00d5db20;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00828200 @ 00828200 ////

undefined4 * __fastcall FUN_00828200(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d92c;
  param_1[0x1b] = &DAT_00d5dd54;
  return param_1;
}


//// FUNCTION FUN_00828220 @ 00828220 ////

undefined4 * __thiscall FUN_00828220(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828250 @ 00828250 ////

undefined4 * __cdecl FUN_00828250(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce531b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&DAT_00d5dd54);
  iVar1 = __wcsnicmp(param_1,L"i",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d92c;
    puVar2[0x1b] = &DAT_00d5dd54;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008282e0 @ 008282e0 ////

undefined4 * __fastcall FUN_008282e0(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d97c;
  param_1[0x1e] = 0;
  param_1[0x1b] = &DAT_00d5deec;
  return param_1;
}


//// FUNCTION FUN_00828300 @ 00828300 ////

undefined4 * __thiscall FUN_00828300(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828330 @ 00828330 ////

undefined4 * __cdecl FUN_00828330(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce533b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&DAT_00d5deec);
  iVar1 = __wcsnicmp(param_1,L"p",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x7c);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d97c;
    puVar2[0x1e] = 0;
    puVar2[0x1b] = &DAT_00d5deec;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008283d0 @ 008283d0 ////

undefined4 * __fastcall FUN_008283d0(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5d9cc;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x79) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x7b) = 0xff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1b] = &DAT_00d5decc;
  return param_1;
}


//// FUNCTION FUN_00828400 @ 00828400 ////

undefined4 * __thiscall FUN_00828400(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828430 @ 00828430 ////

undefined4 * __cdecl FUN_00828430(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce535b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d((short *)&DAT_00d5decc);
  iVar1 = __wcsnicmp(param_1,L"o",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x7c);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d9cc;
    *(undefined1 *)(puVar2 + 0x1e) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x79) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x7a) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x7b) = 0xff;
    puVar2[0x1e] = 0xffffffff;
    puVar2[0x1b] = &DAT_00d5decc;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_008284e0 @ 008284e0 ////

undefined4 * __cdecl FUN_008284e0(wchar_t *param_1)

{
  size_t _MaxCount;
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce537b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  _MaxCount = FUN_00ace02d(L"quot");
  iVar1 = __wcsnicmp(param_1,L"quot",_MaxCount);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x78);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
    FUN_00827950(puVar2);
    *puVar2 = &PTR_FUN_00d5d83c;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00828770 @ 00828770 ////

int * __thiscall FUN_00828770(void *this,undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *this_00;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce53bb;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    return *(int **)((int)this + 0x7c);
  case 1:
    break;
  case 2:
    return (int *)&DAT_0104ebcc;
  default:
    ExceptionList = &local_c;
    piVar8 = (int *)FUN_00830650(*(void **)((int)this + 0x7c),param_1);
    ExceptionList = local_c;
    return piVar8;
  case 0xb:
    if (*(int *)((int)this + 100) == 0) {
      ExceptionList = &local_c;
      pcVar6 = (char *)(**(code **)(*(int *)this + 4))(6);
      piVar8 = (int *)(**(code **)(*(int *)this + 4))(7);
      iVar4 = *piVar8;
      pcVar7 = (char *)(**(code **)(*(int *)this + 4))(3);
      cVar1 = *pcVar7;
      pcVar7 = (char *)(**(code **)(*(int *)this + 4))(4);
      cVar2 = *pcVar7;
      pcVar7 = (char *)(**(code **)(*(int *)this + 4))(5);
      cVar3 = *pcVar7;
      piVar8 = (int *)(**(code **)(*(int *)this + 4))(9);
      iVar5 = *piVar8;
      this_00 = operator_new(0x7c);
      uStack_4 = 0;
      if (this_00 != (void *)0x0) {
        piVar8 = FUN_009a8a00(this_00,pcVar6,iVar4,
                              -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                              -(uint)(cVar3 != '\0') & 4,iVar5);
        *(int **)((int)this + 100) = piVar8;
        ExceptionList = local_c;
        return piVar8;
      }
      *(undefined4 *)((int)this + 100) = 0;
    }
    ExceptionList = local_c;
    return *(int **)((int)this + 100);
  }
  if (*(int *)((int)this + 0x7c) != 0) {
    return (int *)(*(int *)((int)this + 0x7c) + 0x344);
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00828990 @ 00828990 ////

void __thiscall FUN_00828990(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x78) = *param_1;
  return;
}


//// FUNCTION FUN_008289a0 @ 008289a0 ////

int __fastcall FUN_008289a0(int param_1)

{
  return param_1 + 0x78;
}


//// FUNCTION FUN_008289b0 @ 008289b0 ////

undefined4 * __thiscall FUN_008289b0(void *this,undefined4 param_1)

{
  FUN_00827950(this);
  *(undefined ***)this = &PTR_FUN_00d5da54;
  *(undefined1 *)((int)this + 0x79) = 0xff;
  *(undefined1 *)((int)this + 0x7a) = 0xff;
  *(undefined1 *)((int)this + 0x7b) = 0xff;
  *(undefined1 *)((int)this + 0x7b) = 0;
  *(undefined1 *)((int)this + 0x7a) = 0;
  *(undefined1 *)((int)this + 0x79) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = param_1;
  return this;
}


//// FUNCTION FUN_008289f0 @ 008289f0 ////

undefined4 * __thiscall FUN_008289f0(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828a20 @ 00828a20 ////

float10 __fastcall FUN_00828a20(int param_1)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x60) == 0) ||
     (fVar1 = FUN_00828a20(*(int *)(param_1 + 0x60)), fVar1 < (float10)*(float *)(param_1 + 0x20)))
  {
    fVar1 = (float10)*(float *)(param_1 + 0x20);
  }
  return fVar1;
}


//// FUNCTION FUN_00828a40 @ 00828a40 ////

float10 __fastcall FUN_00828a40(int param_1)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x60) == 0) ||
     (fVar1 = FUN_00828a40(*(int *)(param_1 + 0x60)), fVar1 < (float10)*(float *)(param_1 + 0x24)))
  {
    fVar1 = (float10)*(float *)(param_1 + 0x24);
  }
  return fVar1;
}


//// FUNCTION FUN_00828a60 @ 00828a60 ////

float10 __fastcall FUN_00828a60(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x60) != 0) {
    fVar2 = FUN_00828a60(*(int *)(param_1 + 0x60));
    return fVar2 + (float10)fVar1;
  }
  return (float10)fVar1;
}


//// FUNCTION FUN_00828b00 @ 00828b00 ////

void __thiscall FUN_00828b00(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  
  do {
    for (iVar1 = *(int *)((int)this + 0x34); iVar1 != (int)this + 0x40; iVar1 = *(int *)(iVar1 + 4))
    {
      iVar2 = *(int *)(iVar1 + 8);
      *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + *param_1;
      *(float *)(iVar2 + 0x28) = param_1[1] + *(float *)(iVar2 + 0x28);
    }
    this = *(void **)((int)this + 0x60);
  } while (this != (void *)0x0);
  return;
}


//// FUNCTION FUN_00828b40 @ 00828b40 ////

void __thiscall FUN_00828b40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    for (iVar1 = *(int *)((int)this + 0x34); iVar1 != (int)this + 0x40; iVar1 = *(int *)(iVar1 + 4))
    {
      (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(param_1,param_2,param_3);
    }
    this = *(void **)((int)this + 0x60);
  } while (this != (void *)0x0);
  return;
}


//// FUNCTION FUN_00828ba0 @ 00828ba0 ////

undefined4 __thiscall FUN_00828ba0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    for (iVar1 = *(int *)((int)this + 0x34); iVar1 != (int)this + 0x40; iVar1 = *(int *)(iVar1 + 4))
    {
      uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x30))(param_1);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    this = *(void **)((int)this + 0x60);
  } while (this != (void *)0x0);
  return 0;
}


//// FUNCTION FUN_00828c00 @ 00828c00 ////

undefined4 __thiscall FUN_00828c00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    for (iVar1 = *(int *)((int)this + 0x34); iVar1 != (int)this + 0x40; iVar1 = *(int *)(iVar1 + 4))
    {
      uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x34))(param_1,param_2);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    this = *(void **)((int)this + 0x60);
  } while (this != (void *)0x0);
  return 0;
}


//// FUNCTION FUN_00828c60 @ 00828c60 ////

void __fastcall FUN_00828c60(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float local_14;
  float local_10;
  
  do {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 1) {
      local_10 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x18);
      for (puVar5 = *(undefined4 **)(param_1 + 0x40); puVar5 != (undefined4 *)(param_1 + 0x30);
          puVar5 = (undefined4 *)*puVar5) {
        if (puVar5 != *(undefined4 **)(param_1 + 0x40)) {
          fVar7 = (float10)(**(code **)(*(int *)puVar5[2] + 0x24))();
          local_10 = (float)((float10)local_10 - fVar7);
        }
        fVar8 = (float10)(**(code **)(*(int *)puVar5[2] + 0x14))();
        fVar7 = (float10)local_10;
        local_10 = (float)(fVar7 - fVar8);
        *(float *)(puVar5[2] + 0x24) = (float)(fVar7 - fVar8);
      }
    }
    else if (iVar3 == 2) {
      fVar7 = FUN_00acf400((double)((*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)) * 0.5)
                           ,(short)unaff_EDI);
      for (puVar5 = *(undefined4 **)(param_1 + 0x40); puVar5 != (undefined4 *)(param_1 + 0x30);
          puVar5 = (undefined4 *)*puVar5) {
        *(float *)(puVar5[2] + 0x24) = (float)fVar7 + *(float *)(puVar5[2] + 0x24);
      }
    }
    else if ((iVar3 == 3) && ((*(byte *)(param_1 + 4) & 1) == 0)) {
      iVar6 = 0;
      for (iVar3 = *(int *)(param_1 + 0x34); iVar3 != param_1 + 0x40; iVar3 = *(int *)(iVar3 + 4)) {
        iVar6 = iVar6 + 1;
      }
      if (1 < iVar6) {
        iVar3 = *(int *)(param_1 + 0x34);
        local_14 = 0.0;
        for (; iVar3 != param_1 + 0x40; iVar3 = *(int *)(iVar3 + 4)) {
          fVar7 = (float10)(**(code **)(**(int **)(iVar3 + 8) + 0x14))();
          local_14 = (float)(fVar7 + (float10)local_14);
        }
        fVar1 = *(float *)(param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 0x18);
        fVar4 = *(float *)(param_1 + 0x18);
        for (iVar3 = *(int *)(param_1 + 0x34); iVar3 != param_1 + 0x40; iVar3 = *(int *)(iVar3 + 4))
        {
          *(float *)(*(int *)(iVar3 + 8) + 0x24) = fVar4;
          fVar7 = (float10)(**(code **)(**(int **)(iVar3 + 8) + 0x14))();
          fVar4 = (float)(fVar7 + (float10)fVar4 +
                         (float10)(((fVar1 - local_14) - (fVar2 + fVar2)) / (float)(iVar6 + -1)));
        }
      }
    }
    param_1 = *(int *)(param_1 + 0x60);
  } while (param_1 != 0);
  return;
}


//// FUNCTION FUN_00828de0 @ 00828de0 ////

void __fastcall FUN_00828de0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce53db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5daa0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  param_1[0x18] = 0;
  FUN_00827710(param_1 + 0xb);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00828e40 @ 00828e40 ////

undefined4 * __thiscall FUN_00828e40(void *this,byte param_1)

{
  FUN_00828de0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00828e60 @ 00828e60 ////

void __thiscall
FUN_00828e60(void *this,undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  *(undefined ***)this = &PTR_FUN_00d5daa0;
  *(float *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(float *)((int)this + 0x24) = param_3 + param_3;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(float *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(float *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar1 = (undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x48) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *puVar1 = (undefined4 *)((int)this + 0x30);
  *(undefined4 **)((int)this + 0x34) = puVar1;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00d5d638;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(undefined4 *)((int)this + 0x68) = param_4;
  return;
}


//// FUNCTION FUN_00828f10 @ 00828f10 ////

undefined4 __thiscall FUN_00828f10(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar2;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce541b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x34) == (int)this + 0x40) {
    fVar2 = (float10)*(float *)((int)this + 0x10);
    iVar1 = 0;
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x60) != 0) {
      ExceptionList = &local_c;
      fVar2 = FUN_00828a60(*(int *)((int)this + 0x60));
      fVar2 = fVar2 + extraout_ST1;
      iVar1 = extraout_EDX;
    }
    if (fVar2 == (float10)0.0) {
      fVar2 = (float10)*(float *)((int)this + 0x68);
    }
    else {
      fVar2 = (float10)*(float *)((int)this + 0x10);
      if (iVar1 != 0) {
        fVar2 = FUN_00828a60(iVar1);
        fVar2 = fVar2 + extraout_ST1_00;
      }
    }
    *(float *)((int)this + 0x10) = (float)fVar2;
  }
  this_00 = operator_new(0x70);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float10)*(float *)((int)this + 0x10);
    iVar1 = 0;
    if (*(int *)((int)this + 0x60) != 0) {
      fVar2 = FUN_00828a60(*(int *)((int)this + 0x60));
      fVar2 = fVar2 + extraout_ST1_01;
      iVar1 = extraout_EDX_00;
    }
    if (fVar2 == (float10)0.0) {
      local_14 = *(float *)((int)this + 0x68);
    }
    else {
      fVar2 = (float10)*(float *)((int)this + 0x10);
      if (iVar1 != 0) {
        fVar2 = FUN_00828a60(iVar1);
        fVar2 = fVar2 + extraout_ST1_02;
      }
      local_14 = (float)fVar2;
    }
    iVar1 = FUN_00828e60(this_00,*(undefined4 *)((int)this + 0x14),param_1,
                         *(float *)((int)this + 0x18),local_14);
  }
  *(int *)((int)this + 0x60) = iVar1;
  *(void **)(iVar1 + 100) = this;
  *(float *)(*(int *)((int)this + 0x60) + 0xc) =
       *(float *)((int)this + 0x10) + *(float *)((int)this + 0xc);
  ExceptionList = local_c;
  return *(undefined4 *)((int)this + 0x60);
}


//// FUNCTION FUN_00829020 @ 00829020 ////

void * __thiscall FUN_00829020(void *this,int *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  void *this_00;
  float10 fVar7;
  undefined4 auStack_40 [2];
  int **ppiStack_38;
  int *apiStack_2c [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5438;
  pvStack_c = ExceptionList;
  this_00 = this;
  ExceptionList = &pvStack_c;
  if ((0.0 <= *(float *)((int)this + 0x14)) &&
     (ExceptionList = &pvStack_c, fVar7 = (float10)(**(code **)(*param_1 + 0x14))(),
     (float10)*(float *)((int)this + 0x14) <
     fVar7 + (float10)*(float *)((int)this + 0x18) + (float10)*(float *)((int)this + 8))) {
    piVar2 = *(int **)((int)this + 0x28);
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffe;
    if (piVar2 == (int *)0x0) {
      this_00 = (void *)FUN_00828f10(this,*(undefined4 *)((int)this + 0x1c));
    }
    else {
      FUN_008278f0(auStack_40);
      uStack_4 = 0;
      if (*(int *)((int)this + 0x34) != (int)this + 0x40) {
        do {
          piVar3 = *(int **)((int)this + 0x34);
          iVar4 = piVar3[2];
          if ((int *)piVar3[1] != (int *)0x0) {
            *(int *)piVar3[1] = *piVar3;
          }
          if (*piVar3 != 0) {
            *(int *)(*piVar3 + 4) = piVar3[1];
          }
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3 = (int *)(iVar4 + 0x14);
          *(int ***)(iVar4 + 0x18) = apiStack_2c;
          *piVar3 = (int)apiStack_2c[0];
          apiStack_2c[0][1] = (int)piVar3;
          apiStack_2c[0] = piVar3;
        } while (*(int *)((int)this + 0x34) != (int)this + 0x40);
      }
      uVar5 = *(undefined4 *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x18);
      *(float *)((int)this + 0x6c) = *(float *)((int)this + 0x18) + *(float *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x68) = uVar5;
      *(undefined4 *)((int)this + 0x28) = 0;
      if (ppiStack_38 != apiStack_2c) {
        do {
          piVar3 = ppiStack_38[2];
          ppiVar1 = ppiStack_38 + 1;
          if (*ppiVar1 != (int *)0x0) {
            **ppiVar1 = (int)*ppiStack_38;
          }
          if (*ppiStack_38 != (int *)0x0) {
            (*ppiStack_38)[1] = (int)*ppiVar1;
          }
          *ppiStack_38 = (int *)0x0;
          *ppiVar1 = (int *)0x0;
          if (piVar3 == piVar2) {
            this_00 = (void *)FUN_00828f10(this,*(undefined4 *)((int)this + 0x1c));
          }
          FUN_00829020(this_00,piVar3);
        } while (ppiStack_38 != apiStack_2c);
      }
      uStack_4 = 0xffffffff;
      FUN_00827710(auStack_40);
    }
  }
  cVar6 = (**(code **)(*param_1 + 0x20))();
  if (cVar6 == '\0') {
    if (*(int *)((int)this_00 + 0x28) == 0) {
      *(int **)((int)this_00 + 0x28) = param_1;
    }
  }
  else {
    *(undefined4 *)((int)this_00 + 0x28) = 0;
  }
  piVar2 = param_1 + 5;
  piVar3 = (int *)((int)this_00 + 0x40);
  param_1[6] = (int)piVar3;
  *piVar2 = *piVar3;
  *(int **)(*piVar3 + 4) = piVar2;
  *piVar3 = (int)piVar2;
  param_1[9] = *(int *)((int)this_00 + 8);
  param_1[10] = *(int *)((int)this_00 + 0xc);
  fVar7 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar7 = fVar7 + (float10)*(float *)((int)this_00 + 8);
  *(float *)((int)this_00 + 8) = (float)fVar7;
  *(float *)((int)this_00 + 0x20) = (float)(fVar7 + (float10)*(float *)((int)this + 0x18));
  fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
  *(float *)((int)this_00 + 8) = (float)(fVar7 + (float10)*(float *)((int)this_00 + 8));
  fVar7 = (float10)(**(code **)(*param_1 + 0x18))();
  if ((float10)*(float *)((int)this_00 + 0x10) < fVar7) {
    fVar7 = (float10)(**(code **)(*param_1 + 0x18))();
    *(float *)((int)this_00 + 0x10) = (float)fVar7;
  }
  fVar7 = (float10)(**(code **)(*param_1 + 0x18))();
  if ((float10)0.0 < fVar7) {
    fVar7 = (float10)(**(code **)(*param_1 + 0x18))();
    *(float *)((int)this + 0x68) = (float)fVar7;
  }
  fVar7 = (float10)(**(code **)(*param_1 + 0x14))();
  if ((float10)*(float *)((int)this_00 + 0x24) <
      (float10)*(float *)((int)this + 0x18) + (float10)*(float *)((int)this + 0x18) + fVar7) {
    fVar7 = (float10)(**(code **)(*param_1 + 0x14))();
    *(float *)((int)this_00 + 0x24) =
         (float)((float10)*(float *)((int)this + 0x18) + (float10)*(float *)((int)this + 0x18) +
                fVar7);
  }
  ExceptionList = pvStack_c;
  return this_00;
}


//// FUNCTION FUN_00829270 @ 00829270 ////

undefined4 * __fastcall FUN_00829270(undefined4 *param_1)

{
  FUN_00827950(param_1);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_00d5dacc;
  param_1[0x1b] = &DAT_00d5daa4;
  return param_1;
}


//// FUNCTION FUN_00829380 @ 00829380 ////

void __thiscall FUN_00829380(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x7c) = param_1;
  return;
}


//// FUNCTION FUN_00829390 @ 00829390 ////

undefined4 * __thiscall FUN_00829390(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008293c0 @ 008293c0 ////

int * __thiscall FUN_008293c0(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce545b;
  local_c = ExceptionList;
  if (param_1 == 3) {
    return (int *)&DAT_00d5db40;
  }
  if (param_1 != 0xb) {
    ExceptionList = &local_c;
    piVar6 = (int *)FUN_00827350(this,param_1);
    ExceptionList = local_c;
    return piVar6;
  }
  if (*(int *)((int)this + 100) == 0) {
    ExceptionList = &local_c;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(6);
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(7);
    iVar4 = *piVar6;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(3);
    cVar1 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(4);
    cVar2 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(5);
    cVar3 = *pcVar8;
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(9);
    iVar5 = *piVar6;
    this_00 = operator_new(0x7c);
    uStack_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar6 = FUN_009a8a00(this_00,pcVar7,iVar4,
                            -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                            -(uint)(cVar3 != '\0') & 4,iVar5);
      *(int **)((int)this + 100) = piVar6;
      ExceptionList = local_c;
      return piVar6;
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  ExceptionList = local_c;
  return *(int **)((int)this + 100);
}


//// FUNCTION FUN_00829540 @ 00829540 ////

undefined4 * __fastcall FUN_00829540(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5dbac;
  param_1[0x1b] = &DAT_00d5db64;
  return param_1;
}


//// FUNCTION FUN_00829560 @ 00829560 ////

short * __thiscall FUN_00829560(void *this,short *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  char local_10 [16];
  
  sVar3 = *param_1;
  bVar1 = false;
  psVar7 = param_1;
  if (sVar3 != 0) {
    do {
      psVar7 = psVar7 + 1;
      if (sVar3 == 0x3e) {
        if (!bVar1) goto LAB_008295c6;
        break;
      }
      sVar3 = *psVar7;
      bVar1 = true;
    } while (sVar3 != 0);
    cVar2 = (**(code **)(*(int *)this + 0x44))(local_10,0x10,&DAT_00d5dbf4,param_1);
    if (cVar2 != '\0') {
      lVar4 = _atol(local_10);
      *(long *)((int)this + 0x84) = lVar4;
      goto LAB_008295cc;
    }
  }
LAB_008295c6:
  *(short **)((int)this + 0x84) = param_1;
LAB_008295cc:
  iVar5 = (**(code **)(**(int **)((int)this + 0x2c) + 4))(0);
  uVar6 = FUN_00831f50(iVar5);
  *(undefined4 *)((int)this + 0x7c) = uVar6;
  return psVar7;
}


//// FUNCTION FUN_00829740 @ 00829740 ////

void __fastcall FUN_00829740(int param_1)

{
  int *this;
  int unaff_retaddr;
  
  this = (int *)(**(code **)(*(int *)(param_1 + -0x78) + 4))(0);
  FUN_00833200(this,*(undefined4 *)(param_1 + 0xc),unaff_retaddr - 1);
  FUN_00830e70(this);
  return;
}


//// FUNCTION FUN_00829780 @ 00829780 ////

undefined4 * __thiscall FUN_00829780(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008297b0 @ 008297b0 ////

undefined4 * __fastcall FUN_008297b0(undefined4 *param_1)

{
  FUN_00827950(param_1);
  param_1[0x1e] = &PTR_LAB_00d5dc00;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_00d5dc1c;
  param_1[0x1e] = &PTR_LAB_00d5dc0c;
  param_1[0x1b] = L"expand";
  return param_1;
}


//// FUNCTION FUN_00829800 @ 00829800 ////

undefined4 * __thiscall FUN_00829800(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00829950 @ 00829950 ////

short * __thiscall FUN_00829950(void *this,short *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short *psVar4;
  char cVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  char *pcVar9;
  short *psVar10;
  char acStack_10 [16];
  
  psVar4 = param_1;
  bVar3 = false;
  bVar2 = false;
  sVar1 = *param_1;
  psVar10 = param_1;
  while ((sVar1 != 0 && (psVar10 = psVar10 + 1, bVar2 = bVar3, sVar1 != 0x3e))) {
    bVar3 = true;
    bVar2 = true;
    sVar1 = *psVar10;
  }
  *(undefined1 *)((int)this + 0xbc) = 0;
  if ((!bVar2) ||
     (cVar5 = (**(code **)(*(int *)this + 0x44))((int)this + 0x78,0x40,L"face",param_1),
     cVar5 == '\0')) {
    pcVar6 = (char *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(6);
    pcVar9 = (char *)((int)this + 0x78);
    do {
      cVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar9 = cVar5;
      pcVar9 = pcVar9 + 1;
    } while (cVar5 != '\0');
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  if ((bVar2) &&
     (cVar5 = (**(code **)(*(int *)this + 0x44))(acStack_10,0xd,L"size",psVar4), cVar5 != '\0')) {
    *(undefined1 *)((int)this + 0xbd) = 0;
    lVar7 = _atol(acStack_10);
    *(long *)((int)this + 0xb8) = lVar7;
  }
  else {
    *(undefined1 *)((int)this + 0xbd) = 1;
    puVar8 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(7);
    *(undefined4 *)((int)this + 0xb8) = *puVar8;
  }
  if ((bVar2) &&
     (cVar5 = (**(code **)(*(int *)this + 0x44))(acStack_10,0xd,L"color",psVar4), cVar5 != '\0')) {
    *(undefined1 *)((int)this + 0xbe) = 0;
    puVar8 = (undefined4 *)FUN_00827190((int *)&param_1,acStack_10);
    *(undefined4 *)((int)this + 0x68) = *puVar8;
    return psVar10;
  }
  *(undefined1 *)((int)this + 0xbe) = 1;
  puVar8 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(8);
  *(undefined4 *)((int)this + 0x68) = *puVar8;
  return psVar10;
}


//// FUNCTION FUN_00829a80 @ 00829a80 ////

int * __thiscall FUN_00829a80(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  void *this_00;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce54bb;
  local_c = ExceptionList;
  switch(param_1) {
  case 6:
    return (int *)((int)this + 0x78);
  case 7:
    return (int *)((int)this + 0xb8);
  case 8:
    return (int *)((int)this + 0x68);
  default:
    ExceptionList = &local_c;
    piVar8 = (int *)FUN_00827350(this,param_1);
    ExceptionList = local_c;
    return piVar8;
  case 0xb:
    break;
  }
  if (*(int *)((int)this + 100) == 0) {
    ExceptionList = &local_c;
    pcVar6 = (char *)(**(code **)(*(int *)this + 4))(6);
    piVar8 = (int *)(**(code **)(*(int *)this + 4))(7);
    iVar4 = *piVar8;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(3);
    cVar1 = *pcVar7;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(4);
    cVar2 = *pcVar7;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(5);
    cVar3 = *pcVar7;
    piVar8 = (int *)(**(code **)(*(int *)this + 4))(9);
    iVar5 = *piVar8;
    this_00 = operator_new(0x7c);
    uStack_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar8 = FUN_009a8a00(this_00,pcVar6,iVar4,
                            -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                            -(uint)(cVar3 != '\0') & 4,iVar5);
      *(int **)((int)this + 100) = piVar8;
      ExceptionList = local_c;
      return piVar8;
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  ExceptionList = local_c;
  return *(int **)((int)this + 100);
}


//// FUNCTION FUN_00829c70 @ 00829c70 ////

undefined4 * __fastcall FUN_00829c70(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5dd0c;
  param_1[0x1e] = 0;
  param_1[0x1b] = &PTR_DAT_00d5dce8;
  return param_1;
}


//// FUNCTION FUN_00829d10 @ 00829d10 ////

void __fastcall FUN_00829d10(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce54d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5dd0c;
  local_4 = 0;
  if (param_1[0x1e] == 0) {
    local_4 = 0xffffffff;
    FUN_00827780(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0x1e] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1e]);
}


//// FUNCTION FUN_00829f50 @ 00829f50 ////

undefined4 * __thiscall FUN_00829f50(void *this,byte param_1)

{
  FUN_00829d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00829f70 @ 00829f70 ////

int * __thiscall FUN_00829f70(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce551b;
  local_c = ExceptionList;
  if (param_1 == 4) {
    return (int *)&DAT_00d5dd74;
  }
  if (param_1 != 0xb) {
    ExceptionList = &local_c;
    piVar6 = (int *)FUN_00827350(this,param_1);
    ExceptionList = local_c;
    return piVar6;
  }
  if (*(int *)((int)this + 100) == 0) {
    ExceptionList = &local_c;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(6);
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(7);
    iVar4 = *piVar6;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(3);
    cVar1 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(4);
    cVar2 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(5);
    cVar3 = *pcVar8;
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(9);
    iVar5 = *piVar6;
    this_00 = operator_new(0x7c);
    uStack_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar6 = FUN_009a8a00(this_00,pcVar7,iVar4,
                            -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                            -(uint)(cVar3 != '\0') & 4,iVar5);
      *(int **)((int)this + 100) = piVar6;
      ExceptionList = local_c;
      return piVar6;
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  ExceptionList = local_c;
  return *(int **)((int)this + 100);
}


//// FUNCTION FUN_0082a100 @ 0082a100 ////

void __fastcall FUN_0082a100(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce5546;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5dd9c;
  local_4 = 1;
  if (param_1[0x22] == 0) {
    if (0x14 < (uint)param_1[0x25]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x23]);
    }
    local_4 = 0xffffffff;
    FUN_00827780(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0x22] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x22]);
}


//// FUNCTION FUN_0082a740 @ 0082a740 ////

undefined4 * __fastcall FUN_0082a740(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5dd9c;
  param_1[0x1e] = 0xbf800000;
  param_1[0x1f] = 0xbf800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x14;
  param_1[0x23] = param_1 + 0x26;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f800000;
  param_1[0x2e] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x1b] = &PTR_LAB_00d5dd78;
  return param_1;
}


//// FUNCTION FUN_0082a7c0 @ 0082a7c0 ////

undefined4 * __thiscall FUN_0082a7c0(void *this,byte param_1)

{
  FUN_0082a100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082a7e0 @ 0082a7e0 ////

wchar_t * __thiscall FUN_0082a7e0(void *this,wchar_t *param_1)

{
  int iVar1;
  wchar_t *_Str1;
  undefined4 *puVar2;
  wchar_t *_Str;
  short *local_8c;
  undefined4 local_88;
  uint local_84;
  short local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5583;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = __wcsnicmp(param_1,L"money>",6);
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return param_1;
  }
  _Str = param_1 + 6;
  do {
    _Str1 = _wcsstr(_Str,L"</");
    if (_Str1 == (wchar_t *)0x0) {
      ExceptionList = local_c;
      return _Str;
    }
    iVar1 = __wcsnicmp(_Str1,L"</money>",8);
  } while (iVar1 != 0);
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_4 = 0;
  FUN_00421240(local_6c,_Str,(int)_Str1 - (int)_Str >> 1);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = FUN_0056b470(local_2c,local_6c);
  puVar2 = FUN_0043bdc0(local_4c,L"$",puVar2);
  FUN_004036d0(&local_8c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_008273c0(this,local_8c);
  if (local_64 < 0xb) {
    if (local_84 < 0xb) {
      ExceptionList = local_c;
      return _Str1 + 8;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c[0]);
}


//// FUNCTION FUN_0082a980 @ 0082a980 ////

undefined4 * __fastcall FUN_0082a980(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5de84;
  param_1[0x1e] = 0;
  param_1[0x1b] = L"nobr";
  return param_1;
}


//// FUNCTION FUN_0082a9c0 @ 0082a9c0 ////

void __fastcall FUN_0082a9c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce5598;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5de84;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1e])(1);
  }
  param_1[0x1e] = 0;
  local_4 = 0xffffffff;
  FUN_00827780(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0082aa20 @ 0082aa20 ////

undefined4 * __thiscall FUN_0082aa20(void *this,byte param_1)

{
  FUN_0082a9c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082ab50 @ 0082ab50 ////

void __thiscall FUN_0082ab50(void *this,float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float local_8;
  float local_4;
  
  local_8 = *param_1 + *(float *)((int)this + 0x24);
  local_4 = *(float *)((int)this + 0x28) + param_1[1];
  for (iVar1 = *(int *)((int)this + 0x38); iVar1 != (int)this + 0x44; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(&local_8,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_0082ac30 @ 0082ac30 ////

int * __thiscall FUN_0082ac30(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce55db;
  local_c = ExceptionList;
  if (param_1 == 9) {
    return (int *)((int)this + 0x78);
  }
  if (param_1 != 0xb) {
    ExceptionList = &local_c;
    piVar6 = (int *)FUN_00827350(this,param_1);
    ExceptionList = local_c;
    return piVar6;
  }
  if (*(int *)((int)this + 100) == 0) {
    ExceptionList = &local_c;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(6);
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(7);
    iVar4 = *piVar6;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(3);
    cVar1 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(4);
    cVar2 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(5);
    cVar3 = *pcVar8;
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(9);
    iVar5 = *piVar6;
    this_00 = operator_new(0x7c);
    uStack_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar6 = FUN_009a8a00(this_00,pcVar7,iVar4,
                            -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                            -(uint)(cVar3 != '\0') & 4,iVar5);
      *(int **)((int)this + 100) = piVar6;
      ExceptionList = local_c;
      return piVar6;
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  ExceptionList = local_c;
  return *(int **)((int)this + 100);
}


//// FUNCTION FUN_0082b020 @ 0082b020 ////

void __fastcall FUN_0082b020(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_retaddr;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0xc);
  uVar2 = FUN_00828f10((void *)*unaff_retaddr,*puVar1);
  *unaff_retaddr = uVar2;
  FUN_008275c0(param_1,unaff_retaddr);
  return;
}


//// FUNCTION FUN_0082b120 @ 0082b120 ////

undefined4 * __fastcall FUN_0082b120(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5df84;
  param_1[0x1e] = param_1 + 0x21;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 10;
  param_1[0x1b] = L"phrase";
  return param_1;
}


//// FUNCTION FUN_0082b160 @ 0082b160 ////

undefined4 * __thiscall FUN_0082b160(void *this,byte param_1)

{
  FUN_0082b180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082b180 @ 0082b180 ////

void __fastcall FUN_0082b180(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  FUN_00827780(param_1);
  return;
}


//// FUNCTION FUN_0082b1a0 @ 0082b1a0 ////

void __thiscall FUN_0082b1a0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  wchar_t *_Str1;
  char cVar3;
  int iVar4;
  int iVar5;
  char unaff_retaddr;
  
  if (*(int *)((int)this + 0x80) != (int)this + 0x8c) {
    piVar2 = (int *)param_1[0xe];
    while (piVar2 != param_1 + 0x11) {
      piVar1 = piVar2 + 2;
      piVar2 = (int *)piVar2[1];
      FUN_0082b1a0(this,(int *)*piVar1);
    }
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if ((cVar3 != '\0') &&
       (iVar4 = FUN_00ace790(param_1,0,&TM::CFragmentBase::RTTI_Type_Descriptor,
                             &TM::CFragmentWord::RTTI_Type_Descriptor,0), iVar4 != 0)) {
      iVar5 = *(int *)((int)this + 0x80);
      _Str1 = *(wchar_t **)(iVar4 + 0x78);
      if (iVar5 != (int)this + 0x8c) {
        while( true ) {
          piVar2 = *(int **)(iVar5 + 8);
          iVar4 = __wcsicmp(_Str1,(wchar_t *)piVar2[0x1e]);
          if (iVar4 == 0) break;
          iVar5 = *(int *)(iVar5 + 4);
          if (iVar5 == (int)this + 0x8c) {
            return;
          }
        }
        piVar1 = piVar2 + 1;
        if ((int *)piVar2[2] != (int *)0x0) {
          *(int *)piVar2[2] = *piVar1;
        }
        if (*piVar1 != 0) {
          *(int *)(*piVar1 + 4) = piVar2[2];
        }
        *piVar1 = 0;
        piVar2[2] = 0;
        piVar2[2] = param_1[2];
        *piVar1 = param_1[1];
        *(int **)piVar2[2] = piVar1;
        *(int **)(*piVar1 + 4) = piVar1;
        param_1[2] = 0;
        param_1[1] = 0;
        (**(code **)*param_1)(1);
        if (unaff_retaddr != '\0') {
          (**(code **)(*piVar2 + 0x1c))();
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0082b4b0 @ 0082b4b0 ////

undefined4 * __fastcall FUN_0082b4b0(undefined4 *param_1)

{
  FUN_0082ff10(param_1);
  *param_1 = &PTR_FUN_00d5dff4;
  return param_1;
}


//// FUNCTION FUN_0082b5f0 @ 0082b5f0 ////

undefined4 * __thiscall FUN_0082b5f0(void *this,byte param_1)

{
  thunk_FUN_0082fd70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082b620 @ 0082b620 ////

int * __thiscall FUN_0082b620(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce565b;
  local_c = ExceptionList;
  if (param_1 == 5) {
    return (int *)&DAT_00d5e06c;
  }
  if (param_1 != 0xb) {
    ExceptionList = &local_c;
    piVar6 = (int *)FUN_00827350(this,param_1);
    ExceptionList = local_c;
    return piVar6;
  }
  if (*(int *)((int)this + 100) == 0) {
    ExceptionList = &local_c;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(6);
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(7);
    iVar4 = *piVar6;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(3);
    cVar1 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(4);
    cVar2 = *pcVar8;
    pcVar8 = (char *)(**(code **)(*(int *)this + 4))(5);
    cVar3 = *pcVar8;
    piVar6 = (int *)(**(code **)(*(int *)this + 4))(9);
    iVar5 = *piVar6;
    this_00 = operator_new(0x7c);
    uStack_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar6 = FUN_009a8a00(this_00,pcVar7,iVar4,
                            -(uint)(cVar1 != '\0') & 2 | -(uint)(cVar2 != '\0') & 8 |
                            -(uint)(cVar3 != '\0') & 4,iVar5);
      *(int **)((int)this + 100) = piVar6;
      ExceptionList = local_c;
      return piVar6;
    }
    *(undefined4 *)((int)this + 100) = 0;
  }
  ExceptionList = local_c;
  return *(int **)((int)this + 100);
}


//// FUNCTION FUN_0082b8e0 @ 0082b8e0 ////

void __cdecl FUN_0082b8e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x89);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x89);
  }
  return;
}


//// FUNCTION FUN_0082b940 @ 0082b940 ////

void __cdecl FUN_0082b940(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x89);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x89);
  }
  return;
}


//// FUNCTION FUN_0082b980 @ 0082b980 ////

void __fastcall FUN_0082b980(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x89) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x89) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x89);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x89);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x89) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x89) == '\0');
    if (*(char *)((int)piVar4 + 0x89) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0082baa0 @ 0082baa0 ////

int * __thiscall FUN_0082baa0(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  void *this_00;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce567b;
  local_c = ExceptionList;
  ppvVar5 = &local_c;
  switch(param_1) {
  case 3:
    if (*(int *)((int)this + 0xe0) != -1) {
      return (int *)((int)this + 0xe0);
    }
    param_1 = 3;
    ppvVar5 = &local_c;
    break;
  case 4:
    if (*(int *)((int)this + 0xe4) != -1) {
      return (int *)((int)this + 0xe4);
    }
    param_1 = 4;
    ppvVar5 = &local_c;
    break;
  case 5:
    if (*(int *)((int)this + 0xe8) != -1) {
      return (int *)((int)this + 0xe8);
    }
    param_1 = 5;
    ppvVar5 = &local_c;
    break;
  case 6:
    if (*(char *)((int)this + 0x98) != '\0') {
      return (int *)((int)this + 0x98);
    }
    param_1 = 6;
    ppvVar5 = &local_c;
    break;
  case 7:
    if (*(int *)((int)this + 0xd8) != -1) {
      return (int *)((int)this + 0xd8);
    }
    param_1 = 7;
    ppvVar5 = &local_c;
    break;
  case 8:
    ExceptionList = &local_c;
    if ((*(int *)((int)this + 0xdc) != 0) &&
       (ExceptionList = &local_c, cVar6 = (**(code **)(**(int **)((int)this + 0x2c) + 8))(8),
       cVar6 != '\0')) {
      ExceptionList = local_c;
      return (int *)((int)this + 0xdc);
    }
    param_1 = 8;
    ppvVar5 = ExceptionList;
    break;
  case 9:
    ExceptionList = &local_c;
    pcVar7 = (char *)(**(code **)(*(int *)this + 4))(0x11);
    if (*pcVar7 != '\0') {
      if ((DAT_0104ebe4 & 1) == 0) {
        DAT_0104ebe4 = DAT_0104ebe4 | 1;
        DAT_0104ebe3 = 0xff;
        DAT_0104ebe2 = 0x80;
        DAT_0104ebe1 = 0x80;
        DAT_0104ebe0 = 0x80;
      }
      ExceptionList = local_c;
      return (int *)&DAT_0104ebe0;
    }
    if (*(int *)((int)this + 0xf0) != 0) {
      ExceptionList = local_c;
      return (int *)((int)this + 0xf0);
    }
    param_1 = 9;
    ppvVar5 = ExceptionList;
    break;
  case 10:
    if (*(int *)((int)this + 0xec) != -1) {
      return (int *)((int)this + 0xec);
    }
    param_1 = 10;
    ppvVar5 = &local_c;
    break;
  case 0xb:
    if (*(int *)((int)this + 100) == 0) {
      ExceptionList = &local_c;
      pcVar7 = (char *)(**(code **)(*(int *)this + 4))(6);
      piVar9 = (int *)(**(code **)(*(int *)this + 4))(7);
      iVar3 = *piVar9;
      pcVar8 = (char *)(**(code **)(*(int *)this + 4))(3);
      cVar6 = *pcVar8;
      pcVar8 = (char *)(**(code **)(*(int *)this + 4))(4);
      cVar1 = *pcVar8;
      pcVar8 = (char *)(**(code **)(*(int *)this + 4))(5);
      cVar2 = *pcVar8;
      piVar9 = (int *)(**(code **)(*(int *)this + 4))(9);
      iVar4 = *piVar9;
      this_00 = operator_new(0x7c);
      uStack_4 = 0;
      if (this_00 != (void *)0x0) {
        piVar9 = FUN_009a8a00(this_00,pcVar7,iVar3,
                              -(uint)(cVar6 != '\0') & 2 | -(uint)(cVar1 != '\0') & 8 |
                              -(uint)(cVar2 != '\0') & 4,iVar4);
        *(int **)((int)this + 100) = piVar9;
        ExceptionList = local_c;
        return piVar9;
      }
      *(undefined4 *)((int)this + 100) = 0;
    }
    ExceptionList = local_c;
    return *(int **)((int)this + 100);
  }
  ExceptionList = ppvVar5;
  piVar9 = (int *)FUN_00827350(this,param_1);
  ExceptionList = local_c;
  return piVar9;
}


//// FUNCTION FUN_0082be00 @ 0082be00 ////

void __fastcall FUN_0082be00(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0082be90 @ 0082be90 ////

void __fastcall FUN_0082be90(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x89) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x89) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x89);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x89);
        piVar3 = piVar5;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x89);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x89);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0082bf00 @ 0082bf00 ////

void __thiscall FUN_0082bf00(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x89) == '\0') {
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


//// FUNCTION FUN_0082bf60 @ 0082bf60 ////

void __thiscall FUN_0082bf60(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x89) == '\0') {
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


//// FUNCTION FUN_0082bfc0 @ 0082bfc0 ////

int * __fastcall FUN_0082bfc0(int *param_1)

{
  FUN_0082b980(param_1);
  return param_1;
}


//// FUNCTION FUN_0082c020 @ 0082c020 ////

void __fastcall FUN_0082c020(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0082c070 @ 0082c070 ////

int * __fastcall FUN_0082c070(int *param_1)

{
  FUN_0082be90(param_1);
  return param_1;
}


//// FUNCTION FUN_0082c080 @ 0082c080 ////

undefined4 * __thiscall FUN_0082c080(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  puVar2 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return this;
}


//// FUNCTION FUN_0082c0d0 @ 0082c0d0 ////

int * __fastcall FUN_0082c0d0(int *param_1)

{
  FUN_0082b980(param_1);
  return param_1;
}


//// FUNCTION FUN_0082c110 @ 0082c110 ////

undefined4 * __thiscall FUN_0082c110(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  puVar2 = param_1 + 8;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return this;
}


//// FUNCTION FUN_0082c160 @ 0082c160 ////

void * __thiscall FUN_0082c160(void *this,byte param_1)

{
  FUN_0082c020((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082c180 @ 0082c180 ////

int * __fastcall FUN_0082c180(int *param_1)

{
  FUN_0082be90(param_1);
  return param_1;
}


//// FUNCTION FUN_0082c190 @ 0082c190 ////

undefined4 * __thiscall FUN_0082c190(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x89);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = _wcscmp((wchar_t *)puVar5[3],(wchar_t *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x89);
  }
  return puVar2;
}


//// FUNCTION FUN_0082c1f0 @ 0082c1f0 ////

void FUN_0082c1f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x22) = 1;
  *(undefined1 *)((int)puVar1 + 0x89) = 0;
  return;
}


//// FUNCTION FUN_0082c250 @ 0082c250 ////

undefined4 * __thiscall
FUN_0082c250(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined2 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc),(wchar_t *)*param_4,param_4[1]);
  puVar2 = param_4 + 8;
  puVar3 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)this + 0x88) = param_5;
  *(undefined1 *)((int)this + 0x89) = 0;
  return this;
}


//// FUNCTION FUN_0082c350 @ 0082c350 ////

void __fastcall FUN_0082c350(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0082c1f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x89) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0082c390 @ 0082c390 ////

void * FUN_0082c390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x8c);
  if (this != (void *)0x0) {
    FUN_0082c250(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0082c3d0 @ 0082c3d0 ////

int __fastcall FUN_0082c3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0082c1f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x89) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0082c400 @ 0082c400 ////

void FUN_0082c400(void *param_1)

{
  if (*(char *)((int)param_1 + 0x89) == '\0') {
    FUN_0082c400(*(void **)((int)param_1 + 8));
    FUN_0082c020((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0082c450 @ 0082c450 ////

void __fastcall FUN_0082c450(int param_1)

{
  FUN_0082c400(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0082c480 @ 0082c480 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082c480(void)

{
  FUN_0082c400(*(void **)(DAT_0104ebd8 + 4));
  *(int *)(DAT_0104ebd8 + 4) = DAT_0104ebd8;
  _DAT_0104ebdc = 0;
  *(int *)DAT_0104ebd8 = DAT_0104ebd8;
  *(int *)(DAT_0104ebd8 + 8) = DAT_0104ebd8;
  return;
}


//// FUNCTION FUN_0082c4c0 @ 0082c4c0 ////

void __thiscall
FUN_0082c4c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce5698;
  local_c = ExceptionList;
  if (0x210841f < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0082c390(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x88);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x88) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x22] == '\0') {
LAB_0082c5c8:
        *(undefined1 *)(*piVar4 + 0x88) = 1;
        *(undefined1 *)(piVar5 + 0x22) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x88) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0082bf00(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x88) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x88) = 0;
        FUN_0082bf60(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x22] == '\0') goto LAB_0082c5c8;
      if (piVar6 == (int *)*piVar2) {
        FUN_0082bf60(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x88) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x88) = 0;
      FUN_0082bf00(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x88);
  } while( true );
}


//// FUNCTION FUN_0082c6a0 @ 0082c6a0 ////

void __thiscall FUN_0082c6a0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce56b8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x89) != '\0') {
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
  FUN_0082be90((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x89) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x89) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x89) == '\0') {
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
      iVar1 = param_2[0x22];
      *(char *)(param_2 + 0x22) = (char)_Memory[0x22];
      *(char *)(_Memory + 0x22) = (char)iVar1;
      goto LAB_0082c836;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x89) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x89) == '\0') {
      piVar2 = (int *)FUN_0082b8e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x89) == '\0') {
      uVar3 = FUN_0082b940((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0082c836:
  if ((char)_Memory[0x22] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x22] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x22] == '\0') {
            *(undefined1 *)(piVar4 + 0x22) = 1;
            *(undefined1 *)(piVar5 + 0x22) = 0;
            FUN_0082bf00(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x89) == '\0') {
            if ((*(char *)(*piVar4 + 0x88) != '\x01') || (*(char *)(piVar4[2] + 0x88) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x88) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x88) = 1;
                *(undefined1 *)(piVar4 + 0x22) = 0;
                FUN_0082bf60(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x22) = (char)piVar5[0x22];
              *(undefined1 *)(piVar5 + 0x22) = 1;
              *(undefined1 *)(piVar4[2] + 0x88) = 1;
              FUN_0082bf00(this,(int)piVar5);
              break;
            }
LAB_0082c94f:
            *(undefined1 *)(piVar4 + 0x22) = 0;
          }
        }
        else {
          if ((char)piVar4[0x22] == '\0') {
            *(undefined1 *)(piVar4 + 0x22) = 1;
            *(undefined1 *)(piVar5 + 0x22) = 0;
            FUN_0082bf60(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x89) == '\0') {
            if ((*(char *)(piVar4[2] + 0x88) == '\x01') && (*(char *)(*piVar4 + 0x88) == '\x01'))
            goto LAB_0082c94f;
            if (*(char *)(*piVar4 + 0x88) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x88) = 1;
              *(undefined1 *)(piVar4 + 0x22) = 0;
              FUN_0082bf00(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x22) = (char)piVar5[0x22];
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(*piVar4 + 0x88) = 1;
            FUN_0082bf60(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x22) = 1;
  }
  if ((uint)_Memory[5] < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0082ca10 @ 0082ca10 ////

void __thiscall FUN_0082ca10(void *this,undefined4 *param_1,undefined4 *param_2)

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
  cVar1 = *(char *)((int)puVar5 + 0x89);
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
    cVar1 = *(char *)((int)puVar6 + 0x89);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0082ca7a;
    }
    FUN_0082b980((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = _wcscmp((wchar_t *)param_2[3],(wchar_t *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0082ca7a:
  puVar5 = (undefined4 *)FUN_0082c4c0(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0082cae0 @ 0082cae0 ////

void __thiscall FUN_0082cae0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_3;
  piVar1 = *(int **)((int)this + 4);
  piVar2 = param_2;
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    FUN_0082c400((void *)piVar1[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar3) {
    param_2 = piVar2;
    FUN_0082be90((int *)&param_2);
    FUN_0082c6a0(this,&param_3,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0082cb60 @ 0082cb60 ////

undefined4 * __thiscall FUN_0082cb60(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0082c4c0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    iVar4 = _wcscmp((wchar_t *)*param_3,(wchar_t *)param_2[3]);
    if (iVar4 < 0) {
      FUN_0082c4c0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    bVar3 = FUN_0055d9c0((undefined4 *)(piVar1[2] + 0xc),param_3);
    if (bVar3) {
      FUN_0082c4c0(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_0055d9c0(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_0082b980((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_0055d9c0(param_3 + 3,piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x89) != '\0') {
          FUN_0082c4c0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0082c4c0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_0055d9c0(param_2 + 3,piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_0082be90((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_0055d9c0(piVar2,param_3 + 3);
        if (!bVar3) goto LAB_0082ccf3;
      }
      if (*(char *)(param_2[2] + 0x89) != '\0') {
        FUN_0082c4c0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0082c4c0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0082ccf3:
  puVar5 = (undefined4 *)FUN_0082ca10(this,local_8,piVar2);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0082cd50 @ 0082cd50 ////

int * __thiscall FUN_0082cd50(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_e8;
  undefined4 local_e4 [16];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  undefined4 local_84;
  uint local_80;
  undefined2 local_7c [10];
  undefined4 local_68 [23];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce56db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_0082c190(this,param_1);
  if ((piVar1 == *(int **)((int)this + 4)) ||
     (iVar2 = _wcscmp((wchar_t *)*param_1,(wchar_t *)piVar1[3]), iVar2 < 0)) {
    local_a4 = 0xffffffff;
    local_9c = 0xffffffff;
    local_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_90 = 0xffffffff;
    local_88 = local_7c;
    local_a0 = 0;
    local_8c = 0;
    local_e4[0]._0_1_ = 0;
    local_7c[0] = 0;
    local_84 = 0;
    local_80 = 10;
    FUN_004036d0(&local_88,(wchar_t *)*param_1,param_1[1]);
    puVar3 = local_e4;
    puVar4 = local_68;
    for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_4 = 0;
    piVar1 = FUN_0082cb60(this,&local_e8,piVar1,(int *)&local_88);
    piVar1 = (int *)*piVar1;
    if (10 < local_80) {
                    /* WARNING: Subroutine does not return */
      _free(local_88);
    }
  }
  ExceptionList = local_c;
  return piVar1 + 0xb;
}


//// FUNCTION FUN_0082ce90 @ 0082ce90 ////

void __fastcall FUN_0082ce90(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0082cae0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0082cec0 @ 0082cec0 ////

undefined4 * __thiscall FUN_0082cec0(void *this,wchar_t *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5700;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00827950(this);
  *(undefined ***)this = &PTR_FUN_00d5e074;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xdc) = 0xff;
  *(undefined1 *)((int)this + 0xdd) = 0xff;
  *(undefined1 *)((int)this + 0xde) = 0xff;
  *(undefined1 *)((int)this + 0xdf) = 0xff;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xec) = 0xffffffff;
  *(undefined1 *)((int)this + 0xf0) = 0xff;
  *(undefined1 *)((int)this + 0xf1) = 0xff;
  *(undefined1 *)((int)this + 0xf2) = 0xff;
  *(undefined1 *)((int)this + 0xf3) = 0xff;
  *(undefined4 *)((int)this + 0xf0) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x98) = 0;
  _wcscpy((wchar_t *)((int)this + 0x78),param_1);
  local_2c = local_20;
  *(wchar_t **)((int)this + 0x6c) = (wchar_t *)((int)this + 0x78);
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d(param_1);
  FUN_004036d0(&local_2c,param_1,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar2 = FUN_0082cd50(&DAT_0104ebd4,&local_2c);
  piVar4 = (int *)((int)this + 0x98);
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0082cfc0 @ 0082cfc0 ////

undefined4 * __thiscall FUN_0082cfc0(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082cff0 @ 0082cff0 ////

void __cdecl FUN_0082cff0(undefined4 *param_1)

{
  FUN_0082cd50(&DAT_0104ebd4,param_1);
  return;
}


//// FUNCTION FUN_0082d000 @ 0082d000 ////

int __cdecl FUN_0082d000(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0082cd50(&DAT_0104ebd4,param_1);
  return piVar1[0x10];
}


//// FUNCTION FUN_0082d040 @ 0082d040 ////

bool __cdecl FUN_0082d040(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_0082cd50(&DAT_0104ebd4,param_1);
  return 0 < piVar1[0x12];
}


//// FUNCTION FUN_0082d0e0 @ 0082d0e0 ////

void FUN_0082d0e0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *local_32c;
  uint local_328;
  uint local_324;
  char local_320 [20];
  int *local_30c;
  char *pcStack_308;
  undefined4 uStack_304;
  uint uStack_300;
  char acStack_2fc [20];
  char *local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  char local_2dc [20];
  char *pcStack_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  char acStack_2bc [20];
  char *local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  char local_29c [20];
  char *pcStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  char acStack_27c [20];
  char *local_268;
  undefined4 local_264;
  uint local_260;
  char local_25c [20];
  char *pcStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  char acStack_23c [20];
  char *local_228;
  undefined4 local_224;
  uint local_220;
  char local_21c [20];
  int iStack_208;
  void *local_204 [2];
  uint local_1fc;
  void *apvStack_1e4 [2];
  uint uStack_1dc;
  void *local_1c4 [2];
  uint local_1bc;
  void *apvStack_1a4 [2];
  uint uStack_19c;
  void *local_184 [2];
  uint local_17c;
  void *apvStack_164 [2];
  uint uStack_15c;
  void *local_144 [2];
  uint local_13c;
  void *apvStack_124 [2];
  uint uStack_11c;
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ce5794;
  pvStack_c = ExceptionList;
  local_32c = local_320;
  local_320[0] = '\0';
  local_328 = 0;
  local_324 = 0x14;
  local_268 = local_25c;
  local_4 = 0;
  local_25c[0] = '\0';
  local_264 = 0;
  local_260 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_268,"style",5);
  local_264 = 5;
  local_268[5] = '\0';
  local_4._0_1_ = 1;
  FUN_0055c540(local_e4,&local_268);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_260) {
                    /* WARNING: Subroutine does not return */
    _free(local_268);
  }
  cVar2 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar2 == '\0') {
      DAT_0105cb4c = &LAB_0082c2d0;
      local_4 = local_4 & 0xffffff00;
      FUN_00558920(local_e4);
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      ExceptionList = pvStack_c;
      return;
    }
    puVar3 = FUN_005562f0(local_e4,local_1c4,1);
    local_4._0_1_ = 4;
    puVar3 = FUN_00568790(local_204,puVar3);
    local_4._0_1_ = 5;
    local_30c = FUN_0082cd50(&DAT_0104ebd4,puVar3);
    if (10 < local_1fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_204[0]);
    }
    if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c4[0]);
    }
    local_2a8 = local_29c;
    local_29c[0] = '\0';
    local_2a4 = 0;
    local_2a0 = 0x14;
    _strncpy(local_2a8,"face",4);
    local_2a4 = 4;
    local_2a8[4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,6);
    puVar3 = FUN_005584e0(local_e4,local_144,&local_2a8);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
    if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2a8);
    }
    pcVar6 = local_32c;
    piVar5 = local_30c;
    if (uVar1 != 0) {
      do {
        cVar2 = *pcVar6;
        *(char *)piVar5 = cVar2;
        pcVar6 = pcVar6 + 1;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (cVar2 != '\0');
    }
    local_228 = local_21c;
    local_21c[0] = '\0';
    local_224 = 0;
    local_220 = 0x14;
    _strncpy(local_228,"size",4);
    local_224 = 4;
    local_228[4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,7);
    puVar3 = FUN_005584e0(local_e4,local_184,&local_228);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
      _free(local_228);
    }
    if (uVar1 != 0) {
      iVar4 = FUN_00567d80(&local_32c);
      local_30c[0x10] = iVar4;
    }
    local_2e8 = local_2dc;
    local_2dc[0] = '\0';
    local_2e4 = 0;
    local_2e0 = 0x14;
    _strncpy(local_2e8,"outline",7);
    local_2e4 = 7;
    local_2e8[7] = '\0';
    local_4 = CONCAT31(local_4._1_3_,8);
    puVar3 = FUN_005584e0(local_e4,apvStack_104,&local_2e8);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_104[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < local_2e0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2e8);
    }
    if (uVar1 != 0) {
      iVar4 = FUN_00567d80(&local_32c);
      local_30c[0x16] = iVar4;
    }
    pcStack_2c8 = acStack_2bc;
    acStack_2bc[0] = '\0';
    uStack_2c4 = 0;
    uStack_2c0 = 0x14;
    _strncpy(pcStack_2c8,"dynamic",7);
    uStack_2c4 = 7;
    pcStack_2c8[7] = '\0';
    local_4 = CONCAT31(local_4._1_3_,9);
    puVar3 = FUN_005584e0(local_e4,apvStack_1e4,&pcStack_2c8);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_1e4[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < uStack_2c0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c8);
    }
    if (uVar1 != 0) {
      iVar4 = FUN_00567d80(&local_32c);
      local_30c[0x15] = iVar4;
    }
    pcStack_288 = acStack_27c;
    acStack_27c[0] = '\0';
    uStack_284 = 0;
    uStack_280 = 0x14;
    _strncpy(pcStack_288,"bold",4);
    uStack_284 = 4;
    pcStack_288[4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,10);
    puVar3 = FUN_005584e0(local_e4,apvStack_1a4,&pcStack_288);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_1a4[0]);
    }
    local_4._0_1_ = 3;
    if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_288);
    }
    if (uVar1 != 0) {
      iVar4 = FUN_00567d80(&local_32c);
      local_30c[0x12] = iVar4;
    }
    pcStack_248 = acStack_23c;
    acStack_23c[0] = '\0';
    uStack_244 = 0;
    uStack_240 = 0x14;
    _strncpy(pcStack_248,"italic",6);
    uStack_244 = 6;
    pcStack_248[6] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    puVar3 = FUN_005584e0(local_e4,apvStack_164,&pcStack_248);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < uStack_15c) break;
    local_4._0_1_ = 3;
    if (0x14 < uStack_240) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_248);
    }
    if (uVar1 != 0) {
      iVar4 = FUN_00567d80(&local_32c);
      local_30c[0x13] = iVar4;
    }
    pcStack_308 = acStack_2fc;
    acStack_2fc[0] = '\0';
    uStack_304 = 0;
    uStack_300 = 0x14;
    _strncpy(pcStack_308,"color",5);
    uStack_304 = 5;
    pcStack_308[5] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xc);
    puVar3 = FUN_005584e0(local_e4,apvStack_124,&pcStack_308);
    uVar1 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (local_324 <= uVar1) {
      if (0x14 < local_324) {
                    /* WARNING: Subroutine does not return */
        _free(local_32c);
      }
      local_324 = uVar1 + 0x20 & 0xffffffe0;
      local_32c = _malloc(local_324);
    }
    _strncpy(local_32c,pcVar6,uVar1);
    local_32c[uVar1] = '\0';
    local_328 = uVar1;
    if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_124[0]);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0x14 < uStack_300) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_308);
    }
    if (uVar1 != 0) {
      piVar5 = (int *)FUN_00569b90(&iStack_208,(int *)&local_32c);
      local_30c[0x11] = *piVar5;
    }
    cVar2 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_164[0]);
}


//// FUNCTION FUN_0082da00 @ 0082da00 ////

int __fastcall FUN_0082da00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0082c1f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x89) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0082da30 @ 0082da30 ////

undefined4 * __cdecl FUN_0082da30(wchar_t *param_1)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce57ab;
  local_c = ExceptionList;
  local_10 = (int *)*DAT_0104ebd8;
  ppvVar2 = &local_c;
  if (local_10 == DAT_0104ebd8) {
    return (undefined4 *)0x0;
  }
  do {
    ExceptionList = ppvVar2;
    piVar1 = local_10;
    iVar3 = __wcsnicmp(param_1,(wchar_t *)local_10[3],local_10[4]);
    if (iVar3 == 0) {
      local_10 = operator_new(0xf4);
      local_4 = 0;
      if (local_10 == (int *)0x0) {
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      puVar4 = FUN_0082cec0(local_10,(wchar_t *)piVar1[3]);
      ExceptionList = local_c;
      return puVar4;
    }
    FUN_0082be90((int *)&local_10);
    ppvVar2 = ExceptionList;
  } while (local_10 != DAT_0104ebd8);
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0082db00 @ 0082db00 ////

int * __cdecl FUN_0082db00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *this;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce57cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar5 = FUN_0082cd50(&DAT_0104ebd4,param_1);
  iVar1 = piVar5[0x12];
  piVar5 = FUN_0082cd50(&DAT_0104ebd4,param_1);
  iVar2 = piVar5[0x13];
  piVar5 = FUN_0082cd50(&DAT_0104ebd4,param_1);
  iVar3 = piVar5[0x14];
  this = operator_new(0x7c);
  local_4 = 0;
  if (this != (void *)0x0) {
    piVar5 = FUN_0082cd50(&DAT_0104ebd4,param_1);
    iVar4 = piVar5[0x10];
    piVar5 = FUN_0082cd50(&DAT_0104ebd4,param_1);
    piVar6 = FUN_0082cd50(&DAT_0104ebd4,param_1);
    piVar5 = FUN_009a8a00(this,(char *)piVar5,iVar4,
                          (iVar1 < 1) - 1 & 2 | (iVar2 < 1) - 1 & 8 | (iVar3 < 1) - 1 & 4,
                          piVar6[0x16]);
    ExceptionList = local_c;
    return piVar5;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_0082dbf0 @ 0082dbf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082dbf0(void)

{
  FUN_0082c400(*(void **)(DAT_0104ebd8 + 4));
  *(int *)(DAT_0104ebd8 + 4) = DAT_0104ebd8;
  _DAT_0104ebdc = 0;
  *(int *)DAT_0104ebd8 = DAT_0104ebd8;
  *(int *)(DAT_0104ebd8 + 8) = DAT_0104ebd8;
  FUN_0082d0e0();
  return;
}


//// FUNCTION FUN_0082dc30 @ 0082dc30 ////

void __thiscall FUN_0082dc30(void *this,float param_1,char param_2)

{
  if ((param_2 != '\0') ||
     ((*(float *)(*(int *)((int)this + 0x14) + 0x3c) < param_1 &&
      ((*(byte *)(*(int *)((int)this + 0x14) + 0x44) & 1) == 0)))) {
    *(float *)(*(int *)((int)this + 0x14) + 0x3c) = param_1;
  }
  return;
}


//// FUNCTION FUN_0082dc80 @ 0082dc80 ////

float10 __fastcall FUN_0082dc80(int param_1)

{
  return (float10)*(float *)(param_1 + 0x40) + (float10)*(float *)(param_1 + 0x3c);
}


//// FUNCTION FUN_0082dd30 @ 0082dd30 ////

short * __thiscall FUN_0082dd30(void *this,short *param_1)

{
  bool bVar1;
  char *pcVar2;
  short **ppsVar3;
  char cVar4;
  short sVar5;
  short **ppsVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  wchar_t *pwStack_54;
  short **ppsStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char cStack_21;
  short *psStack_20;
  
  sVar5 = *param_1;
  bVar1 = false;
  psVar11 = param_1;
  if (sVar5 != 0) {
    do {
      psVar11 = psVar11 + 1;
      if (sVar5 == 0x3e) {
        if (!bVar1) {
          return psVar11;
        }
        break;
      }
      sVar5 = *psVar11;
      bVar1 = true;
    } while (sVar5 != 0);
    psStack_20 = param_1;
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      ppsVar3 = &psStack_20;
      do {
        ppsVar6 = ppsVar3;
        ppsVar3 = (short **)((int)ppsVar6 + 1);
      } while (*(char *)ppsVar6 != '\0');
      if (*(char *)((int)ppsVar6 + -1) == '%') {
        uStack_34 = L"䒉␤䓛␤黙\x88";
        lVar7 = _atol((char *)&psStack_20);
        *(float *)((int)this + 0x88) = (float)lVar7;
      }
      else {
        uStack_34 = L"䒉␤䓛␤黙\x80";
        lVar7 = _atol((char *)&psStack_20);
        *(float *)((int)this + 0x80) = (float)lVar7;
      }
    }
    uStack_34 = L"height";
    uStack_38 = 0x10;
    ppsStack_3c = &psStack_20;
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      pcVar2 = &stack0xffffffd0;
      do {
        pcVar8 = pcVar2;
        pcVar2 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      if (pcVar8[-1] == '%') {
        lVar7 = _atol(&stack0xffffffd0);
        *(float *)((int)this + 0x8c) = (float)lVar7;
      }
      else {
        lVar7 = _atol(&stack0xffffffd0);
        *(float *)((int)this + 0x84) = (float)lVar7;
      }
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      pwStack_54 = (wchar_t *)0x82de5b;
      lVar7 = _atol(&stack0xffffffc0);
      *(float *)((int)this + 0x94) = (float)lVar7;
    }
    pwStack_54 = L"bordercolor";
    uStack_58 = 0x10;
    puStack_5c = &stack0xffffffc0;
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      puVar9 = (undefined4 *)FUN_00827190((int *)&ppsStack_3c,&stack0xffffffb0);
      *(undefined4 *)((int)this + 0x9c) = *puVar9;
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      lVar7 = _atol(&stack0xffffffa0);
      *(float *)((int)this + 0x90) = (float)lVar7;
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      puVar9 = (undefined4 *)FUN_00827190((int *)&puStack_5c,&stack0xffffff90);
      *(undefined4 *)((int)this + 0x98) = *puVar9;
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if (cVar4 != '\0') {
      iVar10 = __stricmp(&stack0xffffff80,"left");
      if (iVar10 == 0) {
        *(undefined4 *)((int)this + 0x78) = 0;
      }
      else {
        iVar10 = __stricmp(&stack0xffffff80,"right");
        if (iVar10 == 0) {
          *(undefined4 *)((int)this + 0x78) = 1;
        }
        else {
          iVar10 = __stricmp(&stack0xffffff80,"center");
          if (iVar10 == 0) {
            *(undefined4 *)((int)this + 0x78) = 2;
          }
          else {
            iVar10 = __stricmp(&stack0xffffff80,"justify");
            if (iVar10 == 0) {
              *(undefined4 *)((int)this + 0x78) = 3;
            }
          }
        }
      }
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))(&stack0xffffff80,0x10,L"valign");
    if (cVar4 != '\0') {
      iVar10 = __stricmp(&stack0xffffff70,"top");
      if (iVar10 == 0) {
        *(undefined4 *)((int)this + 0x7c) = 4;
      }
      else {
        iVar10 = __stricmp(&stack0xffffff70,"middle");
        if (iVar10 == 0) {
          *(undefined4 *)((int)this + 0x7c) = 5;
          return psVar11;
        }
        iVar10 = __stricmp(&stack0xffffff70,"bottom");
        if (iVar10 == 0) {
          *(undefined4 *)((int)this + 0x7c) = 6;
          return psVar11;
        }
      }
    }
  }
  return psVar11;
}


//// FUNCTION FUN_0082e100 @ 0082e100 ////

undefined4 * __fastcall FUN_0082e100(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5e174;
  param_1[0x1f] = 4;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0xbf800000;
  param_1[0x21] = 0xbf800000;
  param_1[0x22] = 0xbf800000;
  param_1[0x23] = 0xbf800000;
  param_1[0x25] = 0xbf800000;
  *(undefined1 *)((int)param_1 + 0x99) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9f) = 0xff;
  param_1[0x1b] = L"table";
  return param_1;
}


//// FUNCTION FUN_0082e1d0 @ 0082e1d0 ////

undefined4 * __thiscall FUN_0082e1d0(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082e260 @ 0082e260 ////

undefined4 * __thiscall FUN_0082e260(void *this,undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce580b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0xbf800000;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xbf800000;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0;
  *(void **)((int)this + 0x20) = this;
  FUN_00acdb9e(0xe5c7e8);
  iVar1 = FUN_0097dda0();
  *(int *)((int)this + 0x24) = iVar1;
  if (s___AVCFragmentTagTable_TM___00e5c7cc[0x1b] != '\0') {
    iVar1 = 0x18;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe5c7e8);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCFragmentTagTable_TM___00e5c7cc[0x1b] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0082e330 @ 0082e330 ////

void __fastcall FUN_0082e330(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_0082e360 @ 0082e360 ////

void __fastcall FUN_0082e360(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *this;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce582b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x28);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0082e260(this,param_1);
  }
  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = puVar3 + 6;
  puVar3[7] = piVar1;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0082e400 @ 0082e400 ////

void __thiscall FUN_0082e400(void *this,float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  undefined2 uVar14;
  undefined4 unaff_ESI;
  undefined2 unaff_DI;
  float10 fVar15;
  float local_10;
  
  uVar14 = (undefined2)unaff_ESI;
  iVar8 = *(int *)((int)this + 8);
  iVar13 = 0;
  iVar1 = (int)this + 0x14;
  iVar7 = iVar8;
  iVar10 = 0;
  if (iVar8 != iVar1) {
    do {
      iVar9 = iVar10;
      iVar7 = *(int *)(iVar7 + 4);
      iVar10 = iVar9 + 1;
    } while (iVar7 != iVar1);
    if (iVar10 != 0) {
      fVar5 = (float)(iVar9 + 2) * *(float *)((int)this + 0x38);
      fVar6 = param_1 - fVar5;
      fVar5 = param_2 - fVar5;
      if (iVar8 != iVar1) {
        local_10 = 0.0;
        fVar12 = 0.0;
        do {
          pfVar3 = *(float **)(iVar8 + 8);
          if (*pfVar3 < 0.0) {
            fVar2 = pfVar3[2];
            iVar13 = iVar13 + 1;
          }
          else {
            fVar2 = *pfVar3;
            pfVar3[3] = *pfVar3;
          }
          fVar12 = fVar12 + fVar2;
          iVar8 = *(int *)(iVar8 + 4);
        } while (iVar8 != iVar1);
        if (iVar13 != 0) {
          iVar8 = *(int *)((int)this + 8);
          if (fVar12 <= fVar5) {
            for (; iVar8 != iVar1; iVar8 = *(int *)(iVar8 + 4)) {
              pfVar3 = *(float **)(iVar8 + 8);
              if (*pfVar3 < 0.0) {
                fVar12 = pfVar3[2];
              }
              else {
                fVar12 = *pfVar3;
              }
              pfVar3[3] = fVar12;
              local_10 = local_10 + *(float *)(*(int *)(iVar8 + 8) + 0xc);
            }
          }
          else {
            local_10 = 0.0;
            for (; iVar8 != iVar1; iVar8 = *(int *)(iVar8 + 4)) {
              puVar4 = *(undefined4 **)(iVar8 + 8);
              if (**(float **)(iVar8 + 8) < 0.0) {
                uVar11 = puVar4[1];
              }
              else {
                uVar11 = *puVar4;
              }
              puVar4[3] = uVar11;
              local_10 = local_10 + *(float *)(*(int *)(iVar8 + 8) + 0xc);
            }
          }
          if (local_10 < fVar5) {
            iVar7 = 0;
            for (iVar8 = *(int *)((int)this + 8); iVar8 != iVar1; iVar8 = *(int *)(iVar8 + 4)) {
              iVar7 = iVar7 + 1;
            }
            do {
              if ((iVar7 == 0) || (uVar14 = (undefined2)unaff_ESI, fVar5 <= local_10)) {
LAB_0082e60e:
                if (iVar13 < 1) {
                  return;
                }
                if (local_10 < fVar6) {
                  fVar15 = FUN_00acf400((double)((fVar6 - local_10) / (float)iVar13),uVar14);
                  iVar8 = *(int *)((int)this + 8);
                  while ((iVar8 != iVar1 && (local_10 < fVar6))) {
                    pfVar3 = *(float **)(iVar8 + 8);
                    if (*pfVar3 < 0.0) {
                      pfVar3[3] = (float)fVar15 + pfVar3[3];
                      local_10 = local_10 + (float)fVar15;
                    }
                    iVar8 = *(int *)(iVar8 + 4);
                  }
                }
                while (local_10 < fVar6) {
                  iVar8 = *(int *)((int)this + 8);
                  while ((iVar8 != iVar1 && (local_10 < fVar6))) {
                    pfVar3 = *(float **)(iVar8 + 8);
                    if (*pfVar3 < 0.0) {
                      pfVar3[3] = pfVar3[3] + 1.0;
                      local_10 = local_10 + 1.0;
                    }
                    iVar8 = *(int *)(iVar8 + 4);
                  }
                }
                return;
              }
              fVar15 = FUN_00acf400((double)((fVar5 - local_10) / (float)iVar7),unaff_DI);
              uVar14 = (undefined2)unaff_ESI;
              iVar8 = *(int *)((int)this + 8);
              iVar7 = 0;
              fVar12 = (float)fVar15;
              if (iVar8 == iVar1) goto LAB_0082e60e;
              do {
                if ((fVar5 <= local_10) || (fVar12 == 0.0)) break;
                pfVar3 = *(float **)(iVar8 + 8);
                if ((*pfVar3 < 0.0) && (pfVar3[3] < pfVar3[2])) {
                  fVar2 = pfVar3[2] - pfVar3[3];
                  if (fVar12 < pfVar3[2] - pfVar3[3]) {
                    iVar7 = iVar7 + 1;
                    fVar2 = fVar12;
                  }
                  pfVar3[3] = fVar2 + pfVar3[3];
                  local_10 = fVar2 + local_10;
                }
                iVar8 = *(int *)(iVar8 + 4);
              } while (iVar8 != iVar1);
            } while( true );
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0082e710 @ 0082e710 ////

void __thiscall FUN_0082e710(void *this,float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float local_8;
  float local_4;
  
  local_8 = *param_1 + *(float *)((int)this + 0x24);
  local_4 = *(float *)((int)this + 0x28) + param_1[1];
  for (iVar1 = *(int *)((int)this + 0x38); iVar1 != (int)this + 0x44; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(&local_8,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_0082e790 @ 0082e790 ////

void * __thiscall FUN_0082e790(void *this,byte param_1)

{
  FUN_0082e330((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082e7b0 @ 0082e7b0 ////

void __fastcall FUN_0082e7b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d5e1c0;
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


//// FUNCTION FUN_0082e800 @ 0082e800 ////

undefined4 * __thiscall FUN_0082e800(void *this,byte param_1)

{
  FUN_0082e7b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082e820 @ 0082e820 ////

void __fastcall FUN_0082e820(undefined4 *param_1)

{
  int *piVar1;
  void *_Memory;
  
  piVar1 = (int *)param_1[2];
  while( true ) {
    if (piVar1 == param_1 + 5) {
      FUN_0082e7b0(param_1);
      return;
    }
    _Memory = (void *)piVar1[2];
    if ((int *)piVar1[1] != (int *)0x0) {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    if (_Memory != (void *)0x0) break;
    piVar1 = (int *)param_1[2];
  }
  if (*(undefined4 **)((int)_Memory + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)((int)_Memory + 0x1c) = *(undefined4 *)((int)_Memory + 0x18);
  }
  if (*(int *)((int)_Memory + 0x18) != 0) {
    *(undefined4 *)(*(int *)((int)_Memory + 0x18) + 4) = *(undefined4 *)((int)_Memory + 0x1c);
  }
  *(undefined4 *)((int)_Memory + 0x18) = 0;
  *(undefined4 *)((int)_Memory + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0082e890 @ 0082e890 ////

void __fastcall FUN_0082e890(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d5e1c0;
  return;
}


//// FUNCTION FUN_0082e8f0 @ 0082e8f0 ////

void __fastcall FUN_0082e8f0(undefined4 *param_1)

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
  *puVar1 = param_1 + 1;
  param_1[2] = puVar1;
  param_1[0xd] = param_1[0xd] & 0xfffffffe;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_00d5e1c0;
  param_1[0x11] = param_1[0x11] & 0xfffffffe;
  return;
}


//// FUNCTION FUN_0082e970 @ 0082e970 ////

void __thiscall FUN_0082e970(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined4 local_54 [2];
  undefined1 *local_4c;
  undefined1 local_40 [32];
  uint local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5888;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0082e8f0(local_54);
  iVar2 = *(int *)((int)this + 0x38);
  local_1c = *(float *)((int)this + 0x90);
  local_4 = 0;
  for (; iVar2 != (int)this + 0x44; iVar2 = *(int *)(iVar2 + 4)) {
    (**(code **)(**(int **)(iVar2 + 8) + 0x48))(local_54);
  }
  local_20 = local_20 | 1;
  puVar3 = local_4c;
  if (local_4c != local_40) {
    do {
      *(uint *)(*(int *)(puVar3 + 8) + 0x10) = *(uint *)(*(int *)(puVar3 + 8) + 0x10) | 1;
      puVar3 = *(undefined1 **)(puVar3 + 4);
    } while (puVar3 != local_40);
  }
  fStack_18 = 0.0;
  if (*(float *)((int)this + 0x80) < 0.0) {
    if (*(float *)((int)this + 0x88) < 0.0) {
      fVar6 = *(float *)(*param_1 + 0x14);
      fVar5 = 0.0;
    }
    else {
      fVar5 = (*(float *)(*param_1 + 0x14) / *(float *)((int)this + 0x88)) * 100.0 - 1.0;
      fVar6 = fVar5;
    }
  }
  else {
    fVar5 = *(float *)((int)this + 0x80);
    fVar6 = fVar5;
  }
  fStack_14 = local_1c;
  FUN_0082e400(local_54,fVar5,fVar6);
  for (iVar2 = *(int *)((int)this + 0x38); iVar2 != (int)this + 0x44; iVar2 = *(int *)(iVar2 + 4)) {
    (**(code **)(**(int **)(iVar2 + 8) + 0x48))(local_54);
    fStack_14 = fStack_18 + fStack_14;
    fStack_18 = 0.0;
    fStack_14 = fStack_14 + local_1c;
  }
  fVar5 = local_1c;
  if (local_4c != local_40) {
    do {
      piVar1 = (int *)(local_4c + 8);
      local_4c = *(undefined1 **)(local_4c + 4);
      fVar5 = fVar5 + *(float *)(*piVar1 + 0xc) + local_1c;
    } while (local_4c != local_40);
  }
  *(float *)((int)this + 0x70) = fVar5;
  *(float *)((int)this + 0x74) = fStack_18 + fStack_14;
  pvVar4 = FUN_00829020((void *)*param_1,this);
  *param_1 = (int)pvVar4;
  FUN_0082e820(local_54);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0082eb70 @ 0082eb70 ////

void __fastcall FUN_0082eb70(undefined4 *param_1)

{
  void *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce58b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5e1ec;
  local_4 = 1;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20])(1);
  }
  param_1[0x20] = 0;
  if (param_1[0x29] != 0) {
    _Memory = *(void **)(param_1[0x29] + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x29]);
  }
  if (0x14 < (uint)param_1[0x2c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2a]);
  }
  local_4 = 0xffffffff;
  FUN_00827780(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0082ec40 @ 0082ec40 ////

void __thiscall FUN_0082ec40(void *this,float *param_1,float *param_2,void *param_3)

{
  uint *puVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce58cb;
  local_c = ExceptionList;
  local_28 = *(float *)((int)this + 0x28) + param_1[1];
  local_2c = *param_1 + *(float *)((int)this + 0x24);
  local_1c = local_2c;
  if (local_2c <= *param_2) {
    local_1c = *param_2;
  }
  local_14 = local_2c + *(float *)((int)this + 0x98);
  if (param_2[2] <= local_14) {
    local_14 = param_2[2];
  }
  local_10 = local_28;
  if (local_28 <= param_2[3]) {
    local_10 = param_2[3];
  }
  local_18 = local_28 + *(float *)((int)this + 0x9c);
  if (param_2[1] <= local_18) {
    local_18 = param_2[1];
  }
  if ((local_1c < local_14) && (local_10 < local_18)) {
    ExceptionList = &local_c;
    if ((*(char *)((int)this + 0xa3) != '\0') &&
       (ExceptionList = &local_c, *(int *)((int)this + 0xa4) == 0)) {
      ExceptionList = &local_c;
      puVar3 = operator_new(0x3c);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0041f350(puVar3);
      }
      *(undefined4 **)((int)this + 0xa4) = puVar3;
      puVar3 = operator_new(0x24);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_009910f0(puVar3);
      }
      *(undefined4 *)(*(int *)((int)this + 0xa4) + 4) = uVar4;
      *(undefined1 *)(*(int *)(*(int *)((int)this + 0xa4) + 4) + 0xc) = 6;
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xa4) + 4) + 0x10);
      *puVar1 = *puVar1 & 0xbfffffff;
      local_4 = 0xffffffff;
      if (*(int *)((int)this + 0xac) != 0) {
        pvVar5 = FUN_0099bb50(*(char **)((int)this + 0xa8),0,0,0,'\0');
        this_00 = *(void **)(*(int *)((int)this + 0xa4) + 4);
        if (*(void **)((int)this_00 + 0x18) != pvVar5) {
          Engine_SetResourceReference(this_00,(int)pvVar5);
        }
        iVar2 = *(int *)((int)this + 0xa4);
        *(undefined4 *)(iVar2 + 0x28) = 0;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        iVar2 = *(int *)((int)this + 0xa4);
        local_24 = 0x3f800000;
        local_20 = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x30) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
        if (pvVar5 != (void *)0x0) {
          FUN_0099b400(pvVar5);
        }
      }
    }
    if (*(int *)((int)this + 0xa4) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0xa4) + 8) = *(undefined4 *)((int)this + 0xa0);
      *(float *)(*(int *)((int)this + 0xa4) + 0x10) = local_1c;
      *(float *)(*(int *)((int)this + 0xa4) + 0x14) = local_10;
      *(float *)(*(int *)((int)this + 0xa4) + 0x1c) = local_14;
      *(float *)(*(int *)((int)this + 0xa4) + 0x20) = local_18;
      FUN_007477d0(param_3,*(int *)((int)this + 0xa4));
    }
    FUN_00828b40(*(void **)((int)this + 0x80),&local_2c,&local_1c,param_3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0082eec0 @ 0082eec0 ////

void __fastcall FUN_0082eec0(int param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  float10 fVar2;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x7c) == 5) {
      fVar2 = FUN_00828a60(iVar1);
      fVar2 = (float10)*(float *)(param_1 + 0x9c) - fVar2;
      if ((float10)1.0 < fVar2) {
        fVar2 = FUN_00acf400((double)(fVar2 * (float10)0.5),unaff_SI);
        local_4 = (float)fVar2;
        local_8 = 0.0;
        FUN_00828b00(*(void **)(param_1 + 0x80),&local_8);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x7c) == 6) {
      fVar2 = FUN_00828a60(iVar1);
      fVar2 = (float10)*(float *)(param_1 + 0x9c) - fVar2;
      if ((float10)1.0 < fVar2) {
        fVar2 = FUN_00acf400((double)fVar2,unaff_SI);
        local_c = (float)fVar2;
        local_10 = 0.0;
        FUN_00828b00(*(void **)(param_1 + 0x80),&local_10);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0082ef80 @ 0082ef80 ////

undefined4 * __fastcall FUN_0082ef80(undefined4 *param_1)

{
  FUN_00827950(param_1);
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_00d5e1ec;
  param_1[0x25] = 0x40400000;
  param_1[0x21] = 0xbf800000;
  param_1[0x24] = 0xbf800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa2) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa3) = 0xff;
  *(undefined1 *)((int)param_1 + 0xa3) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *(undefined1 *)((int)param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = param_1 + 0x2d;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2c] = 0x14;
  param_1[0x1b] = &DAT_00d5e1c8;
  return param_1;
}


//// FUNCTION FUN_0082f030 @ 0082f030 ////

undefined4 * __thiscall FUN_0082f030(void *this,byte param_1)

{
  FUN_0082eb70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082f5c0 @ 0082f5c0 ////

short * __thiscall FUN_0082f5c0(void *this,short *param_1)

{
  bool bVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  char local_10 [4];
  long lStack_c;
  
  psVar2 = param_1;
  sVar4 = *param_1;
  bVar1 = false;
  psVar7 = param_1;
  if (sVar4 == 0) {
LAB_0082f62c:
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(0xe);
    *(undefined4 *)((int)this + 0x80) = *puVar5;
  }
  else {
    do {
      psVar7 = psVar7 + 1;
      if (sVar4 == 0x3e) {
        if (!bVar1) goto LAB_0082f62c;
        break;
      }
      sVar4 = *psVar7;
      bVar1 = true;
    } while (sVar4 != 0);
    cVar3 = (**(code **)(*(int *)this + 0x44))(local_10,0x10,L"bgcolor",param_1);
    if (cVar3 == '\0') goto LAB_0082f62c;
    puVar5 = (undefined4 *)FUN_00827190((int *)&param_1,local_10);
    *(undefined4 *)((int)this + 0x80) = *puVar5;
  }
  if (bVar1) {
    cVar3 = (**(code **)(*(int *)this + 0x44))(local_10,0x10,L"height",psVar2);
    if (cVar3 != '\0') {
      lStack_c = _atol(&stack0xffffffe0);
      *(float *)((int)this + 0x84) = (float)lStack_c;
    }
    cVar3 = (**(code **)(*(int *)this + 0x44))(&stack0xffffffe0,0x10,L"align",psVar2);
    if (cVar3 != '\0') {
      iVar6 = __stricmp(local_10,"left");
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0x78) = 0;
      }
      else {
        iVar6 = __stricmp(local_10,"right");
        if (iVar6 == 0) {
          *(undefined4 *)((int)this + 0x78) = 1;
        }
        else {
          iVar6 = __stricmp(local_10,"center");
          if (iVar6 == 0) {
            *(undefined4 *)((int)this + 0x78) = 2;
          }
          else {
            iVar6 = __stricmp(local_10,"justify");
            if (iVar6 == 0) {
              *(undefined4 *)((int)this + 0x78) = 3;
            }
          }
        }
      }
      goto LAB_0082f718;
    }
  }
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(0xc);
  *(undefined4 *)((int)this + 0x78) = *puVar5;
LAB_0082f718:
  if ((bVar1) &&
     (cVar3 = (**(code **)(*(int *)this + 0x44))(local_10,0x10,L"valign",psVar2), cVar3 != '\0')) {
    iVar6 = __stricmp(local_10,"top");
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x7c) = 4;
      return psVar7;
    }
    iVar6 = __stricmp(local_10,"middle");
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x7c) = 5;
      return psVar7;
    }
    iVar6 = __stricmp(local_10,"bottom");
    if (iVar6 == 0) {
      *(undefined4 *)((int)this + 0x7c) = 6;
      return psVar7;
    }
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x2c) + 4))(0xd);
    *(undefined4 *)((int)this + 0x7c) = *puVar5;
  }
  return psVar7;
}


//// FUNCTION FUN_0082f820 @ 0082f820 ////

undefined4 * __fastcall FUN_0082f820(undefined4 *param_1)

{
  FUN_00827950(param_1);
  *param_1 = &PTR_FUN_00d5e28c;
  param_1[0x1e] = 0;
  param_1[0x1f] = 4;
  *(undefined1 *)((int)param_1 + 0x81) = 0xff;
  *(undefined1 *)((int)param_1 + 0x82) = 0xff;
  *(undefined1 *)((int)param_1 + 0x83) = 0xff;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0xbf800000;
  param_1[0x1b] = &PTR_LAB_00d5e264;
  return param_1;
}


//// FUNCTION FUN_0082f890 @ 0082f890 ////

undefined4 * __thiscall FUN_0082f890(void *this,byte param_1)

{
  thunk_FUN_00827780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082f8c0 @ 0082f8c0 ////

void __thiscall FUN_0082f8c0(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  undefined4 local_4;
  
  fVar3 = param_1;
  if ((*(byte *)((int)param_1 + 0x34) & 1) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)((int)param_1 + 0x40);
  }
  local_8 = *(float *)((int)param_1 + 0x38);
  fVar2 = *(float *)((int)param_1 + 8);
  for (iVar1 = *(int *)((int)this + 0x38); iVar1 != (int)this + 0x44; iVar1 = *(int *)(iVar1 + 4)) {
    if (fVar2 == (float)((int)fVar3 + 0x14)) {
      iVar4 = FUN_0082e360((int)fVar3);
      param_1 = fVar2;
    }
    else {
      param_1 = *(float *)((int)fVar2 + 4);
      iVar4 = *(int *)((int)fVar2 + 8);
    }
    (**(code **)(**(int **)(iVar1 + 8) + 0x48))(iVar4,&local_8);
    if ((*(byte *)(iVar4 + 0x10) & 1) != 0) {
      local_8 = local_8 + *(float *)(iVar4 + 0xc) + *(float *)((int)fVar3 + 0x38);
    }
    fVar2 = param_1;
  }
  if ((*(byte *)((int)fVar3 + 0x34) & 1) != 0) {
    if (*(float *)((int)this + 0x84) < 0.0) {
      fVar5 = FUN_0082dc80((int)fVar3);
      param_1 = (float)(fVar5 - (float10)*(float *)((int)fVar3 + 0x40));
    }
    else {
      param_1 = *(float *)((int)this + 0x84);
    }
    for (iVar1 = *(int *)((int)this + 0x38); iVar1 != (int)this + 0x44; iVar1 = *(int *)(iVar1 + 4))
    {
      (**(code **)(**(int **)(iVar1 + 8) + 0x58))(param_1);
      (**(code **)(**(int **)(iVar1 + 8) + 0x5c))();
    }
  }
  return;
}


//// FUNCTION FUN_0082fa00 @ 0082fa00 ////

short * __thiscall FUN_0082fa00(void *this,short *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  short *psVar7;
  short *psStack_30;
  
  bVar3 = false;
  bVar2 = false;
  sVar1 = *param_1;
  psVar7 = param_1;
  while ((sVar1 != 0 && (psVar7 = psVar7 + 1, bVar2 = bVar3, sVar1 != 0x3e))) {
    bVar3 = true;
    bVar2 = true;
    sVar1 = *psVar7;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  if (bVar2) {
    psStack_30 = param_1;
    cVar4 = (**(code **)(*(int *)this + 0x44))();
    if ((cVar4 != '\0') && (iVar5 = __stricmp((char *)&psStack_30,"random"), iVar5 == 0)) {
      *(undefined4 *)((int)this + 0x78) = 1;
    }
    cVar4 = (**(code **)(*(int *)this + 0x44))(&psStack_30,0x20,L"exclude");
    if (cVar4 != '\0') {
      pcVar6 = &stack0xffffffc0;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      FUN_004015d0((void *)((int)this + 0x7c),&stack0xffffffc0,(int)pcVar6 - (int)&stack0xffffffc1);
    }
  }
  return psVar7;
}


//// FUNCTION FUN_0082fc50 @ 0082fc50 ////

undefined4 * __thiscall FUN_0082fc50(void *this,short *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00827950(this);
  *(undefined ***)this = &PTR_FUN_00d5e33c;
  sVar2 = *param_1;
  uVar6 = 0;
  local_4 = 0;
  psVar5 = param_1;
  while ((((sVar2 != 0 && (sVar2 != 0x3e)) && (sVar2 != 0x20)) &&
         (((sVar2 != 9 && (sVar2 != 10)) && (sVar2 != 0xd))))) {
    psVar1 = psVar5 + 1;
    psVar5 = psVar5 + 1;
    uVar6 = uVar6 + 1;
    sVar2 = *psVar1;
  }
  uVar3 = uVar6 * 2;
  puVar4 = operator_new(uVar3 + 2);
  puVar7 = puVar4;
  for (uVar6 = (uVar6 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar7 = (char)*param_1;
    param_1 = (short *)((int)param_1 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(undefined2 *)(uVar3 + (int)puVar4) = 0;
  *(undefined4 **)((int)this + 0x6c) = puVar4;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0082fd10 @ 0082fd10 ////

void __fastcall FUN_0082fd10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5e33c;
  if ((void *)param_1[0x1b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1b]);
  }
  FUN_00827780(param_1);
  return;
}


//// FUNCTION FUN_0082fd40 @ 0082fd40 ////

undefined4 * __thiscall FUN_0082fd40(void *this,byte param_1)

{
  FUN_0082fd10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082fd70 @ 0082fd70 ////

void __fastcall FUN_0082fd70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5e38c;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1e]);
}


//// FUNCTION FUN_0082ff10 @ 0082ff10 ////

undefined4 * __fastcall FUN_0082ff10(undefined4 *param_1)

{
  FUN_00827950(param_1);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_00d5e38c;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 1;
  return param_1;
}


//// FUNCTION FUN_0082ff60 @ 0082ff60 ////

undefined4 * __thiscall FUN_0082ff60(void *this,byte param_1)

{
  FUN_0082fd70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0082ff80 @ 0082ff80 ////

undefined4 __thiscall FUN_0082ff80(void *this,undefined4 param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *unaff_retaddr;
  undefined4 local_10 [4];
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x90) != 0) {
    FUN_00747350(param_2,local_10,*(undefined4 *)((int)this + 0x80),
                 *(undefined4 *)((int)this + 0x84),*(undefined4 *)((int)this + 0x88),
                 *(undefined4 *)((int)this + 0x8c));
    uVar1 = FUN_004512c0(local_10,(float *)&DAT_0104cce0);
    if ((char)uVar1 != '\0') {
      iVar2 = (**(code **)(*(int *)this + 4))(1);
      uVar1 = 0;
      if (iVar2 != 0) {
        *unaff_retaddr = 1;
        return CONCAT31((int3)((uint)unaff_retaddr >> 8),1);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00830030 @ 00830030 ////

void __fastcall FUN_00830030(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  float10 fVar4;
  undefined2 uVar5;
  undefined4 *puStack_8;
  
  piVar2 = (int *)param_1[0x19];
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    param_1[0x19] = 0;
  }
  iVar1 = (**(code **)(*(int *)param_1[0xb] + 4))();
  param_1[0x19] = iVar1;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0xb] + 4))(8);
  param_1[0x1a] = *piVar2;
  uVar5 = 2;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0xb] + 4))();
  param_1[0x24] = *piVar2;
  piVar2 = (int *)FUN_009a8180((void *)param_1[0x19],(undefined4 *)&stack0xffffffec,
                               (ushort *)param_1[0x1e]);
  param_1[0x1c] = *piVar2;
  param_1[0x1d] = piVar2[1];
  fVar4 = FUN_00ad1180((double)(float)param_1[0x1c],uVar5);
  param_1[0x1c] = (int)(float)fVar4;
  fVar4 = FUN_00ad1180((double)(float)param_1[0x1d],uVar5);
  param_1[0x1d] = (int)(float)fVar4;
  if ((*(char *)((int)param_1 + 0x95) != '\0') && (*(char *)((int)param_1 + 0x96) != '\0')) {
    fVar4 = FUN_009a7d30((undefined4 *)param_1[0x19],0x20);
    fVar4 = FUN_00ad1180((double)fVar4,uVar5);
    param_1[0x1f] = (int)(float)fVar4;
  }
  pvVar3 = FUN_00829020((void *)*puStack_8,param_1);
  *puStack_8 = pvVar3;
  return;
}


//// FUNCTION FUN_00830120 @ 00830120 ////

undefined4 __thiscall FUN_00830120(void *this,void *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 local_38 [4];
  uint local_28 [10];
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x90) != 0) {
    uVar1 = FUN_00553fa0(0x73);
    if ((char)uVar1 != '\0') {
      FUN_00747350(param_1,local_38,*(undefined4 *)((int)this + 0x80),
                   *(undefined4 *)((int)this + 0x84),*(undefined4 *)((int)this + 0x88),
                   *(undefined4 *)((int)this + 0x8c));
      uVar1 = FUN_004512c0(local_38,(float *)&DAT_0104cd00);
      if ((char)uVar1 != '\0') {
        FUN_0041c9c0(local_28,"WORDFRAGMENT_HYPERLINK");
        puVar4 = local_28;
        local_28[0] = local_28[0] & 0xfffffffe;
        FUN_004f3b20();
        FUN_004f32c0((byte *)puVar4);
        piVar2 = (int *)(**(code **)(*(int *)this + 4))(1);
        uVar1 = 0;
        if (piVar2 != (int *)0x0) {
          uVar3 = (**(code **)(*piVar2 + 4))(*(undefined4 *)((int)this + 0x90));
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00830210 @ 00830210 ////

void __thiscall FUN_00830210(void *this,float *param_1,float *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_54;
  float local_50;
  undefined2 *local_4c;
  uint local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5980;
  local_c = ExceptionList;
  local_50 = *(float *)((int)this + 0x28) + param_1[1];
  local_54 = *(float *)((int)this + 0x24) + *param_1;
  fVar1 = local_50;
  if (local_50 <= param_2[3]) {
    fVar1 = param_2[3];
  }
  ExceptionList = &local_c;
  *(float *)((int)this + 0x8c) = fVar1;
  fVar1 = local_54;
  if (local_54 <= *param_2) {
    fVar1 = *param_2;
  }
  *(float *)((int)this + 0x80) = fVar1;
  fVar1 = local_50 + *(float *)((int)this + 0x74);
  *(float *)((int)this + 0x84) = fVar1;
  if (param_2[1] <= fVar1) {
    fVar1 = param_2[1];
  }
  *(float *)((int)this + 0x84) = fVar1;
  fVar1 = local_54 + *(float *)((int)this + 0x70);
  *(float *)((int)this + 0x88) = fVar1;
  if (param_2[2] <= fVar1) {
    fVar1 = param_2[2];
  }
  *(float *)((int)this + 0x88) = fVar1;
  *(undefined1 *)(*(int *)((int)this + 100) + 8) = 1;
  DAT_0105cb50 = *param_2;
  DAT_0105cb54 = param_2[1];
  DAT_0105cb58 = param_2[2];
  DAT_0105cb5c = param_2[3];
  if (local_54 + *(float *)((int)this + 0x70) <= param_2[2]) {
    FUN_00747820(param_3,*(int *)((int)this + 0x78),*(undefined4 *)((int)this + 0x68),&local_54,
                 *(undefined4 *)((int)this + 100),0x3f800000,0x3f800000);
    *(undefined1 *)(*(int *)((int)this + 100) + 8) = 0;
    ExceptionList = local_c;
    return;
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  pwVar3 = *(wchar_t **)((int)this + 0x78);
  local_4 = 0;
  sVar6 = FUN_00ace02d(pwVar3);
  FUN_0040cae0(&local_4c,pwVar3,sVar6);
  fVar1 = *(float *)((int)this + 0x88);
  fVar2 = *(float *)((int)this + 0x80);
  fVar8 = FUN_009a7d30(*(undefined4 **)((int)this + 100),0x2e);
  uVar5 = local_48;
  puVar4 = local_4c;
  uVar7 = 0;
  param_1 = (float *)0x0;
  if (local_48 != 0) {
    do {
      fVar9 = FUN_009a7d30(*(undefined4 **)((int)this + 100),(uint)(ushort)puVar4[uVar7]);
      if (((float10)(fVar1 - fVar2) - fVar9) - (float10)(float)(fVar8 * (float10)3.0) <=
          (float10)(float)param_1) break;
      uVar7 = uVar7 + 1;
      param_1 = (float *)(float)(fVar9 + (float10)(float)param_1);
    } while (uVar7 < uVar5);
  }
  FUN_004211c0(&local_4c,local_2c,0,uVar7);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar6 = FUN_00ace02d((short *)&DAT_00d3c928);
  FUN_0040cae0(local_2c,L"...",sVar6);
  FUN_00747820(param_3,(int)local_2c[0],*(undefined4 *)((int)this + 0x68),&local_54,
               *(undefined4 *)((int)this + 100),0x3f800000,0x3f800000);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (local_44 < 0xb) {
    *(undefined1 *)(*(int *)((int)this + 100) + 8) = 0;
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_00830550 @ 00830550 ////

void __thiscall FUN_00830550(void *this,undefined4 param_1,char *param_2)

{
  switch(param_1) {
  case 3:
    *(char *)((int)this + 0x3a4) = *param_2;
    return;
  case 4:
    *(char *)((int)this + 0x3a5) = *param_2;
    return;
  case 5:
    *(char *)((int)this + 0x3a6) = *param_2;
    return;
  case 6:
    _strncpy((char *)((int)this + 0x3a9),param_2,0x3f);
    return;
  case 7:
    *(undefined4 *)((int)this + 0x3ec) = *(undefined4 *)param_2;
    return;
  case 8:
    *(undefined4 *)((int)this + 0x3f0) = *(undefined4 *)param_2;
    return;
  case 9:
    *(undefined4 *)((int)this + 0x3f4) = *(undefined4 *)param_2;
    return;
  case 10:
    *(char *)((int)this + 0x3a8) = *param_2;
    return;
  case 0xc:
    *(undefined4 *)((int)this + 0x3f8) = *(undefined4 *)param_2;
    return;
  case 0x11:
    *(char *)((int)this + 0x3a7) = *param_2;
  }
  return;
}


//// FUNCTION FUN_00830650 @ 00830650 ////

int __thiscall FUN_00830650(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_1) {
  case 3:
    return (int)this + 0x3a4;
  case 4:
    return (int)this + 0x3a5;
  case 5:
    return (int)this + 0x3a6;
  case 6:
    return (int)this + 0x3a9;
  case 7:
    return (int)this + 0x3ec;
  case 8:
    return (int)this + 0x3f0;
  case 9:
    return (int)this + 0x3f4;
  case 10:
    return (int)this + 0x3a8;
  case 0xc:
    return (int)this + 0x3f8;
  case 0x11:
    iVar1 = (int)this + 0x3a7;
  }
  return iVar1;
}


//// FUNCTION FUN_008307b0 @ 008307b0 ////

int __fastcall FUN_008307b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


//// FUNCTION FUN_008309f0 @ 008309f0 ////

void __thiscall FUN_008309f0(void *this,int *param_1)

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


//// FUNCTION FUN_00830ab0 @ 00830ab0 ////

void __cdecl FUN_00830ab0(int param_1)

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


//// FUNCTION FUN_00830ad0 @ 00830ad0 ////

void __cdecl FUN_00830ad0(int *param_1)

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


//// FUNCTION FUN_00830b00 @ 00830b00 ////

void __fastcall FUN_00830b00(int *param_1)

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


//// FUNCTION FUN_00830b60 @ 00830b60 ////

void __fastcall FUN_00830b60(int *param_1)

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


//// FUNCTION FUN_00830cf0 @ 00830cf0 ////

void __fastcall FUN_00830cf0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce599b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(char *)((int)param_1 + 0x38f) != '\0') && (ExceptionList = &local_c, param_1[0xe4] == 0)) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x3c);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_0041f350(puVar1);
    }
    param_1[0xe4] = (int)puVar1;
    puVar1 = operator_new(0x24);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_009910f0(puVar1);
    }
    *(undefined4 *)(param_1[0xe4] + 4) = uVar2;
    *(undefined1 *)(*(int *)(param_1[0xe4] + 4) + 0xc) = 6;
    *(uint *)(*(int *)(param_1[0xe4] + 4) + 0x10) =
         *(uint *)(*(int *)(param_1[0xe4] + 4) + 0x10) & 0xbfffffff;
  }
  local_4 = 0xffffffff;
  if (param_1[0xe4] != 0) {
    *(int *)(param_1[0xe4] + 0x10) = param_1[0x7c];
    *(int *)(param_1[0xe4] + 0x14) = param_1[0x7f];
    *(int *)(param_1[0xe4] + 0x1c) = param_1[0x7e];
    *(int *)(param_1[0xe4] + 0x20) = param_1[0x7d];
    *(int *)(param_1[0xe4] + 8) = param_1[0xe3];
    FUN_007477d0((void *)param_1[0xb5],param_1[0xe4]);
  }
  FUN_0073fb40(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00830e10 @ 00830e10 ////

void __fastcall FUN_00830e10(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_007402d0(param_1);
  if ((cVar1 == '\0') && (*(void **)(param_1 + 0x2fc) != (void *)0x0)) {
    FUN_00828ba0(*(void **)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x284));
  }
  return;
}


//// FUNCTION FUN_00830e40 @ 00830e40 ////

void __thiscall FUN_00830e40(void *this,undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00740a70(this,param_1);
  if ((cVar1 == '\0') && (*(void **)((int)this + 0x2fc) != (void *)0x0)) {
    FUN_00828c00(*(void **)((int)this + 0x2fc),param_1,*(undefined4 *)((int)this + 0x284));
  }
  return;
}


//// FUNCTION FUN_00830e70 @ 00830e70 ////

void __fastcall FUN_00830e70(int *param_1)

{
  undefined4 *this;
  int *piVar1;
  float10 fVar2;
  void *pvStack_18;
  int iStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce59c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
  param_1[0xd4] = (int)(float)fVar2;
  if (0.0 <= (float)param_1[0xd5]) {
    pvStack_18 = (void *)param_1[0xd5];
  }
  else {
    pvStack_18 = (void *)(float)fVar2;
  }
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd3])(1);
  }
  param_1[0xd3] = 0;
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd2])(1);
  }
  param_1[0xd2] = 0;
  pvStack_10 = operator_new(0x80);
  uStack_4 = 0;
  if (pvStack_10 == (void *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_008289b0(pvStack_10,param_1);
  }
  uStack_4 = 0xffffffff;
  param_1[0xd2] = (int)this;
  FUN_00828990(this,param_1 + 0xe3);
  pvStack_10 = operator_new(0x70);
  uStack_4 = 1;
  if (pvStack_10 == (void *)0x0) {
    iStack_14 = 0;
  }
  else {
    iStack_14 = FUN_00828e60(pvStack_10,pvStack_18,param_1[0xfe],3.0,0);
  }
  param_1[0xd3] = iStack_14;
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)param_1[0xd2] + 0xc))(param_1[0xd7]);
  (**(code **)(*(int *)param_1[0xd2] + 0x10))(&pvStack_18);
  piVar1 = (int *)FUN_008289a0(param_1[0xd2]);
  param_1[0xe3] = *piVar1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    (**(code **)(*param_1 + 0x88))(0);
  }
  if ((*(byte *)(param_1 + 0xe8) & 2) != 0) {
    (**(code **)(*param_1 + 0x8c))(0);
  }
  (**(code **)(*param_1 + 0x50))(1);
  if ((code *)param_1[0x9c] != (code *)0x0) {
    (*(code *)param_1[0x9c])(param_1,param_1[0x9d]);
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_00831130 @ 00831130 ////

void __thiscall FUN_00831130(void *this,int param_1)

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


//// FUNCTION FUN_00831190 @ 00831190 ////

int * __fastcall FUN_00831190(int *param_1)

{
  FUN_00830b60(param_1);
  return param_1;
}


//// FUNCTION FUN_008311a0 @ 008311a0 ////

int * __fastcall FUN_008311a0(int *param_1)

{
  FUN_00830b00(param_1);
  return param_1;
}


//// FUNCTION FUN_00831260 @ 00831260 ////

undefined4 * __cdecl FUN_00831260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_3 + 1;
    do {
      *param_3 = *param_1;
      (**(code **)(*piVar1 + 4))();
      piVar1[5] = param_1[6];
      (**(code **)*piVar1)();
      param_1 = param_1 + 7;
      param_3 = param_3 + 7;
      piVar1 = piVar1 + 7;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_008312b0 @ 008312b0 ////

undefined4 * __cdecl FUN_008312b0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    piVar1 = param_3 + 1;
    do {
      iVar3 = param_2 + -0x1c;
      param_3 = param_3 + -7;
      piVar2 = piVar1 + -7;
      *param_3 = *(undefined4 *)(param_2 + -0x1c);
      (**(code **)(*piVar2 + 4))();
      piVar1[-2] = *(int *)(param_2 + -4);
      (**(code **)*piVar2)();
      piVar1 = piVar2;
      param_2 = iVar3;
    } while (iVar3 != param_1);
    return param_3;
  }
  return param_3;
}


//// FUNCTION WHTML_Tick @ 00831300 ////

void __fastcall WHTML_Tick(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0xf8))();
  if ((char)param_1[0xd6] == '\0') {
    fVar1 = (float)param_1[0xd4];
    fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
    if ((float10)1.0 <= ABS((float10)fVar1 - fVar2)) {
      param_1[0xd5] = -0x40800000;
      FUN_00830e70(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_008313e0 @ 008313e0 ////

int * __fastcall FUN_008313e0(int *param_1)

{
  FUN_00830b60(param_1);
  return param_1;
}


//// FUNCTION FUN_008313f0 @ 008313f0 ////

int * __fastcall FUN_008313f0(int *param_1)

{
  FUN_00830b00(param_1);
  return param_1;
}


//// FUNCTION FUN_00831400 @ 00831400 ////

void FUN_00831400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_00831470 @ 00831470 ////

void FUN_00831470(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00831470(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008314f0 @ 008314f0 ////

void __cdecl FUN_008314f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1 + 1;
    do {
      *param_1 = *param_3;
      (**(code **)(*piVar1 + 4))();
      piVar1[5] = param_3[6];
      (**(code **)*piVar1)();
      param_1 = param_1 + 7;
      piVar1 = piVar1 + 7;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00831570 @ 00831570 ////

undefined4 * __cdecl FUN_00831570(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(L"><translate>");
  FUN_0040cae0(&local_20,L"><translate>",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d(L"</translate></");
  FUN_0040cae0(&local_20,L"</translate></",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_00831790 @ 00831790 ////

undefined4 * __cdecl FUN_00831790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(L"><p align=\"center\"><translate>");
  FUN_0040cae0(&local_20,L"><p align=\"center\"><translate>",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d(L"</translate></");
  FUN_0040cae0(&local_20,L"</translate></",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_008318a0 @ 008318a0 ////

undefined4 * __cdecl FUN_008318a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(L"><p align=\"center\"><b><translate>");
  FUN_0040cae0(&local_20,L"><p align=\"center\"><b><translate>",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d(L"</translate></b></");
  FUN_0040cae0(&local_20,L"</translate></b></",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_008319b0 @ 008319b0 ////

undefined4 * __cdecl FUN_008319b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d57ea8);
  FUN_0040cae0(&local_20,L"</",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_00831ac0 @ 00831ac0 ////

undefined4 * __cdecl FUN_00831ac0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(L"><b>");
  FUN_0040cae0(&local_20,L"><b>",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d(L"</b></");
  FUN_0040cae0(&local_20,L"</b></",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_00831bd0 @ 00831bd0 ////

undefined4 * __cdecl FUN_00831bd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  sVar1 = FUN_00ace02d((short *)&DAT_00d19bd0);
  FUN_0040cae0(&local_20,L"<",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d(L"><p align=\"center\">");
  FUN_0040cae0(&local_20,L"><p align=\"center\">",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_3,param_3[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d57ea8);
  FUN_0040cae0(&local_20,L"</",sVar1);
  FUN_0040cae0(&local_20,(wchar_t *)*param_2,param_2[1]);
  sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_20,L">",sVar1);
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


//// FUNCTION FUN_00831cf0 @ 00831cf0 ////

void __thiscall FUN_00831cf0(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_00831d60 @ 00831d60 ////

void __fastcall FUN_00831d60(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d1a200;
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


//// FUNCTION FUN_00831e10 @ 00831e10 ////

void __fastcall FUN_00831e10(int param_1)

{
  FUN_00831470(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00831e40 @ 00831e40 ////

void FUN_00831e40(void)

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


//// FUNCTION FUN_00831ea0 @ 00831ea0 ////

void * __thiscall FUN_00831ea0(void *this,byte param_1)

{
  FUN_00831d60((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00831ec0 @ 00831ec0 ////

void __thiscall FUN_00831ec0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = _wcscmp(*(wchar_t **)((int)this + 0x35c),(wchar_t *)*param_1);
  if (iVar1 != 0) {
    FUN_004036d0((void *)((int)this + 0x35c),(wchar_t *)*param_1,param_1[1]);
    DAT_0104ebd0 = 0;
    FUN_00830e70(this);
  }
  return;
}


//// FUNCTION FUN_00831f10 @ 00831f10 ////

undefined4 __thiscall FUN_00831f10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _wcscmp(*(wchar_t **)((int)this + 0x35c),(wchar_t *)*param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)this + 0x54))(param_1);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00831f50 @ 00831f50 ////

undefined4 __fastcall FUN_00831f50(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00831cf0((void *)(param_1 + 0x394),&local_4,(uint *)&stack0x00000004);
  if (local_4 == *(int *)(param_1 + 0x398)) {
    return 0;
  }
  return *(undefined4 *)(local_4 + 0x10);
}


//// FUNCTION FUN_00831fe0 @ 00831fe0 ////

void __fastcall FUN_00831fe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00831e40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00832040 @ 00832040 ////

int __fastcall FUN_00832040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00831e40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00832080 @ 00832080 ////

void __cdecl FUN_00832080(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    puVar3 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = puVar3 + -2;
        puVar3[-2] = &PTR_FUN_00d1a200;
        iVar2 = param_1[6];
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 7;
      param_3 = param_3 + 7;
      puVar3 = puVar3 + 7;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_008320f0 @ 008320f0 ////

void __cdecl FUN_008320f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00831d60(param_1);
  }
  return;
}


//// FUNCTION FUN_00832150 @ 00832150 ////

void __cdecl FUN_00832150(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    puVar3 = param_1 + 3;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        puVar3[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        piVar1 = puVar3 + -1;
        puVar3[1] = puVar3 + -2;
        puVar3[-2] = &PTR_FUN_00d1a200;
        iVar2 = param_3[6];
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
      }
      param_1 = param_1 + 7;
      puVar3 = puVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_008321d0 @ 008321d0 ////

void FUN_008321d0(void)

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
  puStack_8 = &LAB_00ce59d8;
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


//// FUNCTION FUN_00832240 @ 00832240 ////

void __thiscall
FUN_00832240(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce59f8;
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
  piVar3 = (int *)FUN_00831400(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0083233b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00831130(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008309f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0083233b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008309f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00831130(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008323f0 @ 008323f0 ////

void __thiscall FUN_008323f0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce5a18;
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
  FUN_00830b60((int *)&param_2);
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
      goto LAB_00832561;
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
      piVar2 = (int *)FUN_00830ad0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00830ab0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00832561:
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
            FUN_00831130(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_008309f0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00831130(this,(int)piVar5);
              break;
            }
LAB_00832624:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_008309f0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00832624;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00831130(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_008309f0(this,piVar5);
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


//// FUNCTION FUN_00832780 @ 00832780 ////

void FUN_00832780(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00831d60(param_1);
  }
  return;
}


//// FUNCTION FUN_008327b0 @ 008327b0 ////

void __thiscall FUN_008327b0(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_00832240(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00830b00((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00832240(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00832870 @ 00832870 ////

void __thiscall FUN_00832870(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00831470((void *)piVar6[1]);
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
    FUN_008323f0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00832930 @ 00832930 ////

undefined4 * FUN_00832930(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00832150(param_1,param_2,param_3);
  return param_1 + param_2 * 7;
}


//// FUNCTION FUN_00832970 @ 00832970 ////

void __fastcall FUN_00832970(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_00831d60(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_008329c0 @ 008329c0 ////

undefined4 * __thiscall FUN_008329c0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00832240(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00832240(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_00832240(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_00830b00((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00832240(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_00832240(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_00830b60((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_00832240(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_00832240(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_008327b0(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_00832b60 @ 00832b60 ////

void __thiscall FUN_00832b60(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_3) {
    puVar2 = FUN_00831260(param_3,*(undefined4 **)((int)this + 8),param_2);
    puVar1 = *(undefined4 **)((int)this + 8);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      FUN_00831d60((int)puVar3);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00832bc0 @ 00832bc0 ////

void __thiscall FUN_00832bc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_38;
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
  
  puStack_c = &LAB_00ce5a38;
  local_10 = ExceptionList;
  local_38 = *param_3;
  local_20 = param_3[6];
  uVar6 = 0;
  local_14 = &stack0xffffffbc;
  local_28 = &local_34;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d1a200;
  ExceptionList = &local_10;
  if (local_20 != 0) {
    local_2c = (int *)(local_20 + 0x18);
    local_30 = *local_2c;
    ExceptionList = &local_10;
    *(int **)(*local_2c + 4) = &local_30;
    *local_2c = (int)&local_30;
  }
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
  }
  local_18 = this;
  puVar1 = &stack0xffffffbc;
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    puVar1 = &stack0xffffffbc;
    if (0x9249249U - iVar2 < param_2) {
      FUN_008321d0();
      uVar6 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
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
        iVar2 = FUN_008307b0((int)this);
        uVar6 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar6 * 0x1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = (undefined4 *)FUN_00832080(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00832150(puVar4,param_2,&local_38);
      FUN_00832080(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 7);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00832780(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar6 * 7;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 7;
      *(undefined4 **)((int)this + 4) = puVar3;
      puVar1 = local_14;
    }
    else {
      local_1c = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)local_1c - (int)param_1) / 0x1c) < param_2) {
        FUN_00832080(param_1,local_1c,param_1 + param_2 * 7);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00832930(*(undefined4 **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,&local_38);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_008314f0(param_1,(undefined4 *)(iVar2 + param_2 * -0x1c),&local_38);
        puVar1 = local_14;
      }
      else {
        puVar3 = local_1c + param_2 * -7;
        uVar5 = FUN_00832080(puVar3,local_1c,local_1c);
        *(undefined4 *)((int)this + 8) = uVar5;
        FUN_008312b0((int)param_1,(int)puVar3,local_1c);
        FUN_008314f0(param_1,param_1 + param_2 * 7,&local_38);
        puVar1 = local_14;
      }
    }
  }
  local_14 = puVar1;
  FUN_00831d60((int)&local_38);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00832f10 @ 00832f10 ////

uint * __thiscall FUN_00832f10(void *this,uint *param_1)

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
  piVar3 = FUN_008329c0(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_00832fc0 @ 00832fc0 ////

void __thiscall
FUN_00832fc0(void *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce5a58;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x1c;
    }
    ExceptionList = &local_c;
    FUN_00832bc0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x1c)) {
      ExceptionList = &local_c;
      FUN_00832b60(this,&param_1,(undefined4 *)(param_1 * 0x1c + iVar2),
                   *(undefined4 **)((int)this + 8));
    }
  }
  if (param_5 != (int *)0x0) {
    *param_5 = param_4;
  }
  if (param_4 != 0) {
    *(int **)(param_4 + 4) = param_5;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008330a0 @ 008330a0 ////

void __fastcall FUN_008330a0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00832870(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008330d0 @ 008330d0 ////

void __fastcall FUN_008330d0(undefined4 *param_1)

{
  void *_Memory;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce5aa2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5e54c;
  param_1[0x14] = &PTR_FUN_00d5e530;
  param_1[0xd1] = &PTR_FUN_00d5e524;
  local_4 = 3;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd3])(1);
  }
  param_1[0xd3] = 0;
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd2])(1);
  }
  param_1[0xd2] = 0;
  if (param_1[0xe4] != 0) {
    _Memory = *(void **)(param_1[0xe4] + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1[0xe4] + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe4]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00832870(param_1 + 0xe5,&uStack_10,*(int **)param_1[0xe6],(int *)param_1[0xe6]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xe6]);
}


//// FUNCTION FUN_00833200 @ 00833200 ////

void __thiscall FUN_00833200(void *this,undefined4 param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = FUN_00832f10((void *)((int)this + 0x394),&param_1);
  *puVar1 = param_2;
  return;
}


//// FUNCTION FUN_00833220 @ 00833220 ////

void __thiscall FUN_00833220(void *this,uint param_1)

{
  FUN_00832fc0(this,param_1,0,&PTR_FUN_00d1a200,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_00833260 @ 00833260 ////

int __fastcall FUN_00833260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00831e40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00833290 @ 00833290 ////

undefined4 * __fastcall FUN_00833290(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5afa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  param_1[0xd1] = &PTR_LAB_00d5dc00;
  param_1[0xd4] = 0xbf800000;
  param_1[0xd5] = 0xbf800000;
  *param_1 = &PTR_FUN_00d5e54c;
  param_1[0x14] = &PTR_FUN_00d5e530;
  param_1[0xd1] = &PTR_FUN_00d5e524;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = param_1 + 0xda;
  *(undefined2 *)(param_1 + 0xda) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 10;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)((int)param_1 + 0x38d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x38e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x38f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x38f) = 0;
  *(undefined1 *)((int)param_1 + 0x38e) = 0;
  *(undefined1 *)((int)param_1 + 0x38d) = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  param_1[0xe4] = 0;
  iVar3 = FUN_00831e40();
  param_1[0xe6] = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe6];
  *(undefined4 *)param_1[0xe6] = param_1[0xe6];
  *(undefined4 *)(param_1[0xe6] + 8) = param_1[0xe6];
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)((int)param_1 + 0x3a5) = 0;
  *(undefined1 *)((int)param_1 + 0x3a6) = 0;
  *(undefined1 *)((int)param_1 + 0x3a7) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xfb] = 0xc;
  param_1[0xe8] = param_1[0xe8] & 0xfffffffc;
  *(undefined1 *)((int)param_1 + 0x3f1) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f2) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f3) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f3) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f2) = 0;
  *(undefined1 *)((int)param_1 + 0x3f1) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)((int)param_1 + 0x3f5) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f6) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3f7) = 0xff;
  local_2c = local_20;
  *(undefined1 *)((int)param_1 + 0x3f7) = 0;
  *(undefined1 *)((int)param_1 + 0x3f6) = 0;
  *(undefined1 *)((int)param_1 + 0x3f5) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  param_1[0xfe] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d((short *)&DAT_00d5e650);
  FUN_004036d0(&local_2c,L"t2",uVar4);
  local_4._0_1_ = 4;
  pcVar5 = (char *)FUN_0082cff0(&local_2c);
  pcVar6 = (char *)((int)param_1 + 0x3a9);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d((short *)&DAT_00d5e650);
  FUN_004036d0(&local_2c,L"t2",uVar4);
  local_4._0_1_ = 5;
  iVar3 = FUN_0082d000(&local_2c);
  param_1[0xfb] = iVar3;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d((short *)&DAT_00d5e650);
  FUN_004036d0(&local_2c,L"t2",uVar4);
  local_4 = CONCAT31(local_4._1_3_,6);
  bVar2 = FUN_0082d040(&local_2c);
  *(bool *)(param_1 + 0xe9) = bVar2;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00833570 @ 00833570 ////

undefined4 * __thiscall FUN_00833570(void *this,byte param_1)

{
  FUN_008330d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00833590 @ 00833590 ////

int * __cdecl FUN_00833590(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce5b23;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x54))(&param_1);
  if (10 < param_2) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_retaddr);
  }
  ExceptionList = puVar1;
  return piVar2;
}


//// FUNCTION FUN_00833610 @ 00833610 ////

void __thiscall FUN_00833610(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x3c) == 0) ||
     ((uint)((*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c)) / 0x1c) <= param_1)) {
    FUN_00833220((void *)((int)this + 0x38),param_1 + 1);
  }
  *(undefined4 *)(*(int *)((int)this + 0x3c) + param_1 * 0x1c) = param_2;
  iVar1 = *(int *)((int)this + 0x3c) + param_1 * 0x1c;
  (**(code **)(*(int *)(iVar1 + 4) + 4))();
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  (*(code *)**(undefined4 **)(iVar1 + 4))();
  return;
}


//// FUNCTION FUN_00833680 @ 00833680 ////

int * FUN_00833680(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint unaff_EBP;
  float10 fVar4;
  int *in_stack_00000024;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce5b43;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  iVar1 = *piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  fVar4 = (float10)(**(code **)(*in_stack_00000024 + 0x10))();
  (**(code **)(iVar1 + 0x78))();
  piVar3[0xfd] = *in_stack_00000024;
  (**(code **)(*piVar3 + 0x54))(&stack0x00000000);
  (**(code **)(*piVar3 + 0x8c))(0);
  piVar5 = in_stack_00000024;
  (**(code **)(*piVar3 + 0x5c))(1,in_stack_00000024,0);
  (**(code **)(*piVar3 + 100))(1,in_stack_00000024,0);
  if (10 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(float)fVar4);
  }
  ExceptionList = piVar5;
  return piVar3;
}


//// FUNCTION FUN_00833750 @ 00833750 ////

int * FUN_00833750(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint unaff_EBP;
  float10 fVar4;
  int *in_stack_00000024;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ce5b63;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  iVar1 = *piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  fVar4 = (float10)(**(code **)(*in_stack_00000024 + 0x10))();
  (**(code **)(iVar1 + 0x78))();
  (**(code **)(*piVar3 + 0x54))(&stack0x00000000);
  (**(code **)(*piVar3 + 0x8c))(0);
  piVar5 = in_stack_00000024;
  (**(code **)(*piVar3 + 0x5c))(1,in_stack_00000024,0);
  (**(code **)(*piVar3 + 100))(1,in_stack_00000024,0);
  if (10 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(float)fVar4);
  }
  ExceptionList = piVar5;
  return piVar3;
}


//// FUNCTION DesireAgony_Constructor @ 008338e0 ////

undefined4 * __thiscall DesireAgony_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5b8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5e664;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165cc;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_2c = local_20;
  *(undefined4 *)((int)this + 0x140) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"agony",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4._0_1_ = 2;
  piVar3 = param_1;
  iVar2 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,piVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar2 = FUN_0059c530((int)param_1);
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x13c) = iVar2;
  (**(code **)*piVar1)();
  *(undefined1 *)((int)this + 0x9c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008339f0 @ 008339f0 ////

undefined4 * __thiscall FUN_008339f0(void *this,byte param_1)

{
  FUN_00833a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00833a10 @ 00833a10 ////

void __fastcall FUN_00833a10(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d165cc;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireAssist_Constructor @ 00833b40 ////

undefined4 * __thiscall DesireAssist_Constructor(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5bbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5e6b4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(int **)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"assist",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar2 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar2,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00833c50 @ 00833c50 ////

undefined4 * __thiscall FUN_00833c50(void *this,byte param_1)

{
  FUN_00833c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00833c70 @ 00833c70 ////

void __fastcall FUN_00833c70(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireBeImpressed_Constructor @ 00833dc0 ////

undefined4 * __thiscall DesireBeImpressed_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5be0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5e704;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"beimpressed",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4._0_1_ = 1;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.0,0.5);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00833f30 @ 00833f30 ////

undefined4 * __thiscall FUN_00833f30(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00833f60 @ 00833f60 ////

void __fastcall FUN_00833f60(int *param_1)

{
  float fVar1;
  
  TMBaseDesire_TickShared(param_1);
  fVar1 = (1.0 - (float)param_1[0x38]) * *(float *)(param_1[0x49] + 0x2c) + (float)param_1[0x38];
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x38] = (int)fVar1;
  if (*(float *)(param_1[0x49] + 0x20) < (float)param_1[0x38]) {
    fVar1 = *(float *)(param_1[0x49] + 0x20);
    if (fVar1 < 0.0) {
      param_1[0x38] = 0;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    param_1[0x38] = (int)fVar1;
  }
  return;
}


//// FUNCTION DesireBuyFood_Constructor @ 008342c0 ////

undefined4 * __thiscall DesireBuyFood_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5c4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar3 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5e7ac;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar3 + 4))();
  iVar1 = param_1;
  *(int *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar3)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"buyfood",7);
  local_28 = 7;
  local_2c[7] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,0,iVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.15,0.4);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    puVar5 = puVar6;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar5);
    *(int *)((int)this + 0xe0) = *piVar3;
    puVar5 = puVar6;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x6c),puVar5);
    *(int *)((int)this + 0xe4) = *piVar3;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x78),puVar6);
    *(int *)((int)this + 0xe8) = *piVar3;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00834490 @ 00834490 ////

undefined4 * __thiscall FUN_00834490(void *this,byte param_1)

{
  FUN_008344b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008344b0 @ 008344b0 ////

void __fastcall FUN_008344b0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00834530 @ 00834530 ////

float10 __fastcall FUN_00834530(int param_1)

{
  int iVar1;
  float *pfVar2;
  char **ppcVar3;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5c68;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"buyfood",7);
  local_28 = 7;
  local_2c[7] = '\0';
  ppcVar3 = &local_2c;
  local_4 = 0;
  iVar1 = FUN_00598b60(*(int *)(param_1 + 0x13c));
  pfVar2 = (float *)FUN_00442050((void *)(iVar1 + 0x60),ppcVar3);
  local_30 = *pfVar2 - 0.24;
  if (0.0 <= local_30) {
    if (1.0 < local_30) {
      local_30 = 1.0;
    }
  }
  else {
    local_30 = 0.0;
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return (float10)local_30;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00834640 @ 00834640 ////

void __fastcall FUN_00834640(int *param_1)

{
  float fVar1;
  
  TMBaseDesire_TickShared(param_1);
  fVar1 = (1.0 - (float)param_1[0x38]) * *(float *)(param_1[0x49] + 0x2c) + (float)param_1[0x38];
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x38] = (int)fVar1;
  if (*(float *)(param_1[0x49] + 0x20) < (float)param_1[0x38]) {
    fVar1 = *(float *)(param_1[0x49] + 0x20);
    if (fVar1 < 0.0) {
      param_1[0x38] = 0;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    param_1[0x38] = (int)fVar1;
  }
  return;
}


//// FUNCTION DesireCrap_Constructor @ 008346f0 ////

undefined4 * __thiscall DesireCrap_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  iVar1 = param_1;
  *(undefined ***)this = &PTR_FUN_00d5e804;
  local_4 = 0;
  local_24 = 0x14;
  local_28 = 0;
  local_20[0] = '\0';
  if (*(int *)(param_1 + 0x4a0) == 0) {
    local_2c = local_20;
    _strncpy(local_20,"crap_male",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4._0_1_ = 1;
    FUN_00838070(this,&local_2c,0,0,0,0,iVar1);
  }
  else {
    local_2c = local_20;
    _strncpy(local_20,"crap_female",0xb);
    local_28 = 0xb;
    local_2c[0xb] = '\0';
    local_4._0_1_ = 2;
    FUN_00838070(this,&local_2c,0,0,0,0,iVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.2,0.5);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    puVar5 = puVar6;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar5);
    *(int *)((int)this + 0xe0) = *piVar3;
    puVar5 = puVar6;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x6c),puVar5);
    *(int *)((int)this + 0xe4) = *piVar3;
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x78),puVar6);
    *(int *)((int)this + 0xe8) = *piVar3;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00834910 @ 00834910 ////

undefined4 * __thiscall FUN_00834910(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireDisposeOfLitter_Constructor @ 00834bd0 ////

undefined4 * __thiscall DesireDisposeOfLitter_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5ce0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5e86c;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"disposeoflitter",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4._0_1_ = 1;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.0,0.4);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00834d40 @ 00834d40 ////

undefined4 * __thiscall FUN_00834d40(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00834f70 @ 00834f70 ////

void __fastcall FUN_00834f70(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00834ff0 @ 00834ff0 ////

undefined4 * __fastcall FUN_00834ff0(undefined4 *param_1)

{
  FUN_008433b0(param_1);
  *param_1 = &PTR_FUN_00d5e8d4;
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = param_1 + 0x4a;
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  param_1[0x4f] = 0;
  return param_1;
}


//// FUNCTION FUN_00835020 @ 00835020 ////

undefined4 * __thiscall FUN_00835020(void *this,byte param_1)

{
  FUN_00834f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireDoLunch_Constructor @ 00835040 ////

undefined4 * __thiscall DesireDoLunch_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5d0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  piVar3 = (int *)((int)this + 0x140);
  *(undefined ***)this = &PTR_FUN_00d5e924;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(int **)((int)this + 0x14c) = piVar3;
  *piVar3 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x154) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar3 + 4))();
  *(int *)((int)this + 0x154) = param_1;
  (**(code **)*piVar3)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"match_dolunch",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,0,*(undefined4 *)((int)this + 0x154));
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.0,*(float *)(*(int *)((int)this + 0x124) + 0x20) * 0.5);
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x10c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00835210 @ 00835210 ////

undefined4 * __thiscall FUN_00835210(void *this,byte param_1)

{
  FUN_00835230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00835230 @ 00835230 ////

void __fastcall FUN_00835230(undefined4 *param_1)

{
  param_1[0x50] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_00834f70(param_1);
  return;
}


//// FUNCTION DesireDrinkOnSpot_Constructor @ 008352d0 ////

undefined4 * __thiscall DesireDrinkOnSpot_Constructor(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5d3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar2 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5e97c;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar2)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"drinkonspot",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  piVar2 = *(int **)((int)this + 0x13c);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_00598cd0(piVar2);
  FUN_00838070(this,&local_2c,0,0,0,iVar1,piVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008353e0 @ 008353e0 ////

undefined4 * __thiscall FUN_008353e0(void *this,byte param_1)

{
  FUN_00835400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00835400 @ 00835400 ////

void __fastcall FUN_00835400(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00835480 @ 00835480 ////

void __fastcall FUN_00835480(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_c [12];
  
  uVar2 = FUN_00463630(0);
  piVar1 = (int *)(param_1 + 0x128);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  (**(code **)*piVar1)();
  this = *(void **)(param_1 + 0x13c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x100) + 0x34))(auStack_c);
  FUN_00463b80(this,puVar3);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)(param_1 + 0x13c) = 0;
  (**(code **)*piVar1)();
  return;
}


//// FUNCTION DesireDropLitter_Constructor @ 008354f0 ////

undefined4 * __thiscall DesireDropLitter_Constructor(void *this,int *param_1)

{
  int iVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5d6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5e9d4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d1b118;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"droplitter",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar1,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008355e0 @ 008355e0 ////

undefined4 * __thiscall FUN_008355e0(void *this,byte param_1)

{
  FUN_00835600(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00835600 @ 00835600 ////

void __fastcall FUN_00835600(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d1b118;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireEatOnSpot_Constructor @ 008356a0 ////

undefined4 * __thiscall DesireEatOnSpot_Constructor(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5d9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar2 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5ea24;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar2)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"eatonspot",9);
  local_28 = 9;
  local_2c[9] = '\0';
  piVar2 = *(int **)((int)this + 0x13c);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_00598cd0(piVar2);
  FUN_00838070(this,&local_2c,0,0,0,iVar1,piVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008357b0 @ 008357b0 ////

undefined4 * __thiscall FUN_008357b0(void *this,byte param_1)

{
  FUN_008357d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008357d0 @ 008357d0 ////

void __fastcall FUN_008357d0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_008359b0 @ 008359b0 ////

void __fastcall FUN_008359b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5ea7c;
  if (0x14 < (uint)param_1[0x62]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x60]);
  }
  param_1[0x5a] = &PTR_FUN_00d18c4c;
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
  if (0x14 < (uint)param_1[0x54]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x52]);
  }
  if (0x14 < (uint)param_1[0x4c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4a]);
  }
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00835a80 @ 00835a80 ////

undefined4 * __thiscall FUN_00835a80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"desire_",(undefined4 *)((int)this + 0x180));
  local_4 = 0;
  FUN_00843220(this,param_1,puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00835b00 @ 00835b00 ////

undefined4 * __thiscall FUN_00835b00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5de0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"desire_",(undefined4 *)((int)this + 0x180));
  local_4 = 0;
  puVar1 = FUN_004312e0(local_4c,puVar1,"_heading");
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00843220(this,param_1,puVar1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00835bb0 @ 00835bb0 ////

undefined4 * __thiscall FUN_00835bb0(void *this,byte param_1)

{
  FUN_008359b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireFetchFilmGear_Constructor @ 00835bd0 ////

undefined4 * __thiscall DesireFetchFilmGear_Constructor(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *this_00;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [8];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5e38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5ea7c;
  *(undefined1 **)((int)this + 0x128) = (undefined1 *)((int)this + 0x134);
  *(undefined1 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0x14;
  *(undefined1 **)((int)this + 0x148) = (undefined1 *)((int)this + 0x154);
  *(undefined1 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0x14;
  piVar1 = (int *)((int)this + 0x168);
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(int **)((int)this + 0x174) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x17c) = 0;
  this_00 = (undefined4 *)((int)this + 0x180);
  *this_00 = (undefined1 *)((int)this + 0x18c);
  *(undefined1 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0x14;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x17c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"fetchfilmgear",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4._0_1_ = 5;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(**(int **)((int)this + 0x17c) + 0x1b4))(this_00,(int)this + 0x128,(int)this + 0x148);
  FUN_004015d0(this_00,*(char **)((int)this + 100),*(uint *)((int)this + 0x68));
  ExceptionList = pvStack_18;
  return this;
}


//// FUNCTION FUN_00835d40 @ 00835d40 ////

float10 __fastcall FUN_00835d40(int param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  piVar1 = *(int **)(param_1 + 0x13c);
  piVar2 = (int *)piVar1[0x288];
  if (piVar2 == (int *)0x0) {
    return (float10)0.0;
  }
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x34))(local_18);
  pfVar4 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_10);
  if (8.0 < SQRT((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
                 (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
                 (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]))) {
    return (float10)1.0;
  }
  return (float10)0.5;
}


//// FUNCTION FUN_00835dd0 @ 00835dd0 ////

void __fastcall FUN_00835dd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 local_18 [8];
  undefined1 auStack_10 [16];
  
  piVar1 = *(int **)(param_1 + 0x13c);
  piVar2 = (int *)piVar1[0x288];
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  else {
    pfVar6 = (float *)(**(code **)(*piVar2 + 0x34))(local_18);
    pfVar7 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_10);
    fVar3 = SQRT((*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) +
                 (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
                 (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]));
    fVar4 = fVar3 / *(float *)(param_1 + 0x140);
    if (0.0 <= fVar4) {
      if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0xe0) = fVar4;
    if (1.0 < *(float *)(param_1 + 0xe0)) {
      FUN_00407070(&stack0xffffffdc,1.0);
      *(float *)(param_1 + 0xe0) = fVar4;
    }
    if (fVar3 < 1.0) {
      FUN_00407070(&stack0xffffffdc,0.0);
      *(float *)(param_1 + 0xe0) = fVar4;
    }
    cVar5 = FUN_005855e0(*(int *)(*(int *)(param_1 + 0x13c) + 0xa20));
    if (cVar5 != '\0') {
      FUN_00407070(&stack0xffffffdc,0.0);
      *(float *)(param_1 + 0xe0) = fVar4;
      return;
    }
  }
  return;
}


//// FUNCTION DesireFollowBoss_Constructor @ 00835f10 ////

undefined4 * __thiscall
DesireFollowBoss_Constructor(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5e6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5eaf4;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_2;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"followboss",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,param_1,param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(*(int *)((int)this + 0x13c) + 0xa20);
  fVar2 = FUN_00990e30(2.0,6.0);
  *(float *)((int)this + 0x140) = (float)fVar2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00836030 @ 00836030 ////

undefined4 * __thiscall FUN_00836030(void *this,byte param_1)

{
  FUN_00836050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00836050 @ 00836050 ////

void __fastcall FUN_00836050(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION DesireGawp_Constructor @ 00836130 ////

undefined4 * __thiscall DesireGawp_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5e90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5eb4c;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"gawp",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4._0_1_ = 1;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar5 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar4 = puVar5;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar4);
  if (*piVar3 == iVar1) {
    *(undefined4 *)((int)this + 0xe0) = 0x3ecccccd;
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar5);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00836260 @ 00836260 ////

undefined4 * __thiscall FUN_00836260(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION DesireGetAutograph_Constructor @ 008362f0 ////

undefined4 * __thiscall DesireGetAutograph_Constructor(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5eb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5eb9c;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"getautograph",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4._0_1_ = 1;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
  iVar1 = *(int *)(iVar1 + 100);
  puVar6 = (undefined4 *)((int)this + 100);
  piVar3 = &param_1;
  puVar5 = puVar6;
  iVar2 = FUN_00598b60(*(int *)((int)this + 0x100));
  piVar3 = (int *)FUN_00441680((void *)(iVar2 + 0x60),piVar3,puVar5);
  if (*piVar3 == iVar1) {
    fVar4 = FUN_00990e30(0.0,*(float *)(*(int *)((int)this + 0x124) + 0x20));
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      *(float *)((int)this + 0xe0) = (float)fVar4;
    }
    else {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  else {
    iVar1 = FUN_00598b60(*(int *)((int)this + 0x100));
    piVar3 = FUN_00442050((void *)(iVar1 + 0x60),puVar6);
    *(int *)((int)this + 0xe0) = *piVar3;
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0x10c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00836480 @ 00836480 ////

undefined4 * __thiscall FUN_00836480(void *this,byte param_1)

{
  thunk_FUN_00834f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00836500 @ 00836500 ////

void __fastcall FUN_00836500(int param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  undefined4 local_10;
  undefined1 local_c [12];
  
  pvVar3 = (void *)FUN_0059bb90(*(int *)(param_1 + 0x100));
  if (pvVar3 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  pvVar4 = (void *)FUN_0059c6e0(*(void **)(param_1 + 0x100),'\0');
  if (pvVar4 == pvVar3) {
LAB_008365a1:
    FUN_00407070(&local_10,0.0);
    *(undefined4 *)(param_1 + 0xe0) = local_10;
    return;
  }
  pvVar4 = (void *)FUN_0059c6e0(*(void **)(param_1 + 0x100),'\0');
  uVar5 = FUN_00430dd0(pvVar3,pvVar4);
  if ((char)uVar5 != '\0') {
    FUN_00407070(&local_10,0.0);
    *(undefined4 *)(param_1 + 0xe0) = local_10;
    return;
  }
  iVar6 = FUN_0059c6e0(*(void **)(param_1 + 0x100),'\0');
  cVar2 = FUN_00430e40(iVar6);
  if (cVar2 != '\0') {
    cVar2 = FUN_00430e40((int)pvVar3);
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x100) + 0x128))(pvVar3,1);
      goto LAB_008365a1;
    }
  }
  pvVar4 = (void *)FUN_0059bbd0(*(int **)(param_1 + 0x100));
  if (pvVar3 == pvVar4) {
    uVar5 = FUN_00598ee0(*(int *)(param_1 + 0x100));
    if ((char)uVar5 == '\0') {
      iVar6 = FUN_00ace790(*(int **)(param_1 + 0x100),0,&TM::TMCharacter::RTTI_Type_Descriptor,
                           &TM::CStaff::RTTI_Type_Descriptor,0);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x814) != 0x10)) {
        FUN_00407070(&local_10,0.0);
        *(undefined4 *)(param_1 + 0xe0) = local_10;
      }
      else {
        FUN_00407070(&local_10,0.95);
        *(undefined4 *)(param_1 + 0xe0) = local_10;
      }
      goto LAB_00836652;
    }
    fVar9 = 0.95;
  }
  else {
    fVar9 = 0.98;
  }
  FUN_00407070(&local_10,fVar9);
  *(undefined4 *)(param_1 + 0xe0) = local_10;
LAB_00836652:
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar6 = FUN_005998e0(*(int *)(param_1 + 0x100));
    if ((iVar6 != 0) && (iVar1 = *(int *)(iVar6 + 0x25c), iVar1 != 0)) {
      iVar6 = FUN_00401c30(iVar6);
      if ((iVar6 == param_1) && (pvVar3 = *(void **)(iVar1 + 0x214), pvVar3 != (void *)0x0)) {
        fVar8 = FUN_009722e0((int)pvVar3,(byte *)"ai_callback0");
        if ((float10)0.0 != fVar8) {
          FUN_009757a0(pvVar3,(byte *)"ai_callback0",0.0,0);
          FUN_0041c700(*(int **)(param_1 + 0x100),2);
        }
        fVar8 = FUN_009722e0((int)pvVar3,(byte *)0xd5ec0c);
        if ((float10)0.0 != fVar8) {
          FUN_009757a0(pvVar3,(byte *)0xd5ec0c,0.0,0);
          pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x100) + 0x38))(local_c);
          FUN_0041c7c0(pfVar7);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00836720 @ 00836720 ////

float10 __fastcall FUN_00836720(int param_1)

{
  void *this;
  void *pvVar1;
  undefined4 uVar2;
  
  this = (void *)FUN_0059bb90(*(int *)(param_1 + 0x100));
  if (this == (void *)0x0) {
    return (float10)0.0;
  }
  pvVar1 = (void *)FUN_0059bbd0(*(int **)(param_1 + 0x100));
  uVar2 = FUN_00430dd0(this,pvVar1);
  if ((char)uVar2 != '\0') {
    return (float10)0.5;
  }
  return (float10)0.8;
}


//// FUNCTION DesireGetChanged_Constructor @ 00836770 ////

undefined4 * __thiscall DesireGetChanged_Constructor(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5ede;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5ec34;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4 = 1;
  uVar2 = FUN_00598ee0((int)param_1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*piVar1 + 4))();
    *(int **)((int)this + 0x13c) = param_1;
    (**(code **)*piVar1)();
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"changecostume",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = FUN_00598cd0(param_1);
  FUN_00838070(this,&local_2c,0,0,0,iVar3,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00836870 @ 00836870 ////

undefined4 * __thiscall FUN_00836870(void *this,byte param_1)

{
  FUN_00836890(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00836890 @ 00836890 ////

void __fastcall FUN_00836890(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00836910 @ 00836910 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00836910(undefined4 param_1,undefined4 param_2)

{
  DAT_0104ebe8 = param_1;
  _DAT_0104ebec = param_2;
  return;
}


//// FUNCTION FUN_00836930 @ 00836930 ////

void __fastcall FUN_00836930(int param_1)

{
  float *this;
  int *piVar1;
  char cVar2;
  void *pvVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this = (float *)(param_1 + 0xe0);
  fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c) * 0.5 + *this;
  if (0.0 <= fVar7) {
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  *this = fVar7;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x288))();
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x13c);
    iVar6 = 0;
    puVar5 = &uStack_8;
    pvVar3 = (void *)(**(code **)(*piVar1 + 0x294))();
    pfVar4 = (float *)FUN_00407250(pvVar3,puVar5,iVar6);
    fVar7 = *pfVar4;
    iVar6 = 1;
    puVar5 = &uStack_4;
    pvVar3 = (void *)(**(code **)(*piVar1 + 0x294))();
    pfVar4 = (float *)FUN_00407250(pvVar3,puVar5,iVar6);
    if (*pfVar4 <= fVar7) {
      fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c) * 0.5;
    }
    else {
      fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c);
    }
    FUN_00472920(this,fVar7);
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x28c))();
  if (cVar2 != '\0') {
    piVar1 = *(int **)(param_1 + 0x13c);
    iVar6 = 0;
    puVar5 = &uStack_4;
    pvVar3 = (void *)(**(code **)(*piVar1 + 0x294))();
    pfVar4 = (float *)FUN_00407250(pvVar3,puVar5,iVar6);
    fVar7 = *pfVar4;
    iVar6 = 1;
    puVar5 = &uStack_8;
    pvVar3 = (void *)(**(code **)(*piVar1 + 0x294))();
    pfVar4 = (float *)FUN_00407250(pvVar3,puVar5,iVar6);
    if (*pfVar4 <= fVar7) {
      fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c) * 0.5;
    }
    else {
      fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c);
    }
    FUN_00472920(this,fVar7);
  }
  if (*(float *)(*(int *)(param_1 + 0x124) + 0x20) < *this) {
    fVar7 = *(float *)(*(int *)(param_1 + 0x124) + 0x20);
    if (fVar7 < 0.0) {
      *this = 0.0;
      return;
    }
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    *this = fVar7;
  }
  return;
}


//// FUNCTION DesireGetDrunk_GetUrgency @ 00836ad0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall DesireGetDrunk_GetUrgency(int param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  char **ppcVar10;
  void **ppvVar11;
  float local_74;
  undefined4 local_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  local_74 = DAT_0104ebe8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00585ec0(*(void **)(param_1 + 0x13c),&local_70);
  local_74 = local_74 + *pfVar2;
  if (0.0 <= local_74) {
    if (1.0 < local_74) {
      local_74 = 1.0;
    }
  }
  else {
    local_74 = 0.0;
  }
  FUN_00585ed0(*(void **)(param_1 + 0x13c),local_74);
  FUN_00585d80(*(void **)(param_1 + 0x13c),0.17);
  fVar9 = _DAT_0104ebec + *(float *)(param_1 + 0xe0);
  if (0.0 <= fVar9) {
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar9;
  if ((*(int **)(param_1 + 0x13c) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x294))(), iVar3 != 0)) {
    iVar3 = 1;
    pvVar4 = (void *)(**(code **)(**(int **)(param_1 + 0x13c) + 0x294))();
    uVar5 = FUN_00407190(pvVar4,iVar3);
    if (((char)uVar5 != '\0') &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x27c))(), iVar3 != 0)) {
      pcStack_6c = acStack_60;
      acStack_60[0] = '\0';
      uStack_68 = 0;
      uStack_64 = 0x20;
      pcStack_6c = _malloc(0x20);
      _strncpy(pcStack_6c,"grudge_addiction_feed",0x15);
      uStack_68 = 0x15;
      pcStack_6c[0x15] = '\0';
      ppcVar10 = &pcStack_6c;
      uStack_4 = 0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x27c))();
      pvVar4 = (void *)FUN_00472a30(iVar3);
      uVar6 = CGrudges_HasGrudge(pvVar4,ppcVar10);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_6c);
      }
      if ((char)uVar6 == '\0') {
        FUN_00401de0(&pcStack_6c,"star",0xffffffff);
        uStack_4 = 1;
        FUN_00558a50(DAT_00f88624,&pcStack_6c,(undefined4 *)0x1);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        FUN_00401de0(apvStack_2c,"grudge_addiction_feed",0xffffffff);
        uStack_4 = 2;
        FUN_00401de0(apvStack_4c,"forgetaddictionfeed",0xffffffff);
        FUN_00401de0(&pcStack_6c,"likeaddictionfeed",0xffffffff);
        pvVar4 = DAT_00f88624;
        piVar1 = *(int **)(param_1 + 0x13c);
        ppvVar11 = apvStack_2c;
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        fVar7 = FUN_00558610(DAT_00f88624,apvStack_4c,0.0);
        fVar9 = (float)fVar7;
        fVar7 = FUN_00558610(pvVar4,&pcStack_6c,0.0);
        fVar8 = (float)fVar7;
        iVar3 = (**(code **)(*piVar1 + 0x27c))();
        pvVar4 = (void *)FUN_00472a30(iVar3);
        CGrudges_AddOrRefreshGrudge(pvVar4,fVar8,fVar9,ppvVar11);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION DesireGetDrunk_Constructor @ 00836dc0 ////

undefined4 * __thiscall DesireGetDrunk_Constructor(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5f4e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5ec84;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*(int *)((int)this + 0xec) + 4))();
  *(undefined4 *)((int)this + 0x100) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xec))();
  uVar2 = *(undefined4 *)((int)this + 0x100);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = uVar2;
  (**(code **)*piVar1)();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"getdrunk",8);
  uStack_28 = 8;
  pcStack_2c[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&pcStack_2c,0,0,0,0,param_1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00836ed0 @ 00836ed0 ////

undefined4 * __thiscall FUN_00836ed0(void *this,byte param_1)

{
  FUN_00836ef0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00836ef0 @ 00836ef0 ////

void __fastcall FUN_00836ef0(undefined4 *param_1)

{
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_00836f70 @ 00836f70 ////

void __fastcall FUN_00836f70(int *param_1)

{
  TMBaseDesire_TickShared(param_1);
  if (((int *)param_1[0x50] != (int *)0x0) &&
     ((uint)param_1[0x4a] <= *(uint *)(DAT_0104cdf4 + 0x3c))) {
                    /* WARNING: Could not recover jumptable at 0x00836f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x50] + 0x198))();
    return;
  }
  return;
}


//// FUNCTION DesireGetJob_Constructor @ 00836fa0 ////

undefined4 * __thiscall DesireGetJob_Constructor(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5f7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 300);
  *(undefined ***)this = &PTR_FUN_00d5ecd4;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(int **)((int)this + 0x138) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x140) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (*(int *)(param_1 + 0x4c4) < 8) {
    (**(code **)(*piVar1 + 4))();
    *(int *)((int)this + 0x140) = param_1;
    (**(code **)*piVar1)();
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"getjob",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4._0_1_ = 2;
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0x3f7d70a4;
  iVar2 = FUN_00990d30(DAT_0104ebf0,DAT_0104ebf4);
  *(int *)((int)this + 0x128) = iVar2 + *(int *)(DAT_0104cdf4 + 0x3c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008370d0 @ 008370d0 ////

undefined4 * __thiscall FUN_008370d0(void *this,byte param_1)

{
  FUN_008370f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008370f0 @ 008370f0 ////

void __fastcall FUN_008370f0(undefined4 *param_1)

{
  param_1[0x4b] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_008381f0(param_1);
  return;
}


//// FUNCTION FUN_008371a0 @ 008371a0 ////

void __fastcall FUN_008371a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5fa0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x13c) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x144);
    ExceptionList = &local_c;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      ExceptionList = &local_c;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    iVar3 = FUN_0059c6e0(*(void **)(param_1 + 0x13c),'\0');
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x144);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    pcStack_2c = acStack_20;
    *(int *)(param_1 + 0x144) = iVar3;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"costume_traction",0x10);
    uStack_28 = 0x10;
    pcStack_2c[0x10] = '\0';
    iStack_4 = 0;
    FUN_004335f0((int *)&puStack_30,&pcStack_2c,*(int *)(*(int *)(param_1 + 0x13c) + 0x4a0),4,0,0);
    iStack_4._0_1_ = 1;
    (**(code **)(**(int **)(param_1 + 0x13c) + 0x128))(puStack_30,1);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if ((puStack_30 != (undefined4 *)0x0) &&
       (iVar3 = puStack_30[0x12], puStack_30[0x12] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)*puStack_30)(1);
    }
    puStack_30 = (undefined4 *)0x0;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008372e0 @ 008372e0 ////

void __fastcall FUN_008372e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((*(int **)(param_1 + 0x13c) != (int *)0x0) && (*(int *)(param_1 + 0x144) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x13c) + 0x128))(*(int *)(param_1 + 0x144),1);
    puVar2 = *(undefined4 **)(param_1 + 0x144);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  return;
}


//// FUNCTION DesireHeal_Constructor @ 00837670 ////

undefined4 * __thiscall DesireHeal_Constructor(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce5ffc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  *(undefined ***)this = &PTR_FUN_00d5ed44;
  piVar1 = (int *)((int)this + 300);
  *(undefined4 *)((int)this + 0x134) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x134) = (undefined4 *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0x128) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x13c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x130) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"heal",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x9c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00837770 @ 00837770 ////

undefined4 * __thiscall FUN_00837770(void *this,byte param_1)

{
  FUN_00837790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00837790 @ 00837790 ////

void __fastcall FUN_00837790(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce6026;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[0x51];
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x51] = 0;
  param_1[0x4a] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = 0xffffffff;
  FUN_008381f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00837970 @ 00837970 ////

void __cdecl FUN_00837970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00837a50 @ 00837a50 ////

void __fastcall FUN_00837a50(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00837a80 @ 00837a80 ////

void __fastcall FUN_00837a80(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x124) + 0x2c) + *(float *)(param_1 + 0xe0);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar1;
  if (*(float *)(*(int *)(param_1 + 0x124) + 0x20) <= *(float *)(param_1 + 0xe0)) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x124) + 0x20);
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0xe0) = fVar1;
  }
  return;
}


//// FUNCTION FUN_00837b20 @ 00837b20 ////

undefined4 * __thiscall FUN_00837b20(void *this,byte param_1)

{
  FUN_00837a50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION TMBaseDesire_TickShared @ 00837b90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall TMBaseDesire_TickShared(int *param_1)

{
  int iVar1;
  int *piStack_4;
  
  piStack_4 = param_1;
  if (_DAT_00e5cb4c == 0.0) {
    (**(code **)(*param_1 + 0x48))();
  }
  else {
    iVar1 = param_1[0x42];
    param_1[0x42] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)(*param_1 + 0x48))();
      iVar1 = param_1[0x41] * DAT_0104ebf8;
      param_1[0x42] = iVar1;
      if (iVar1 - DAT_0104ebfc != 0 && DAT_0104ebfc <= iVar1) {
        param_1[0x42] = DAT_0104ebfc;
      }
    }
  }
  if ((char)param_1[0x44] != '\0') {
    if (*(char *)((int)param_1 + 0x9d) == '\0') {
      FUN_00407070(&piStack_4,0.0);
      param_1[0x39] = (int)piStack_4;
    }
    else {
      FUN_00472920(param_1 + 0x39,(float)param_1[0x3a]);
    }
  }
  if ((char)param_1[0x45] != '\0') {
    FUN_00837a80((int)param_1);
  }
  return;
}


//// FUNCTION TMBaseDesire_GetUrgencyViaCallback @ 00837c40 ////

void __fastcall TMBaseDesire_GetUrgencyViaCallback(int *param_1)

{
  if (((code *)param_1[0x47] != (code *)0x0) && (param_1[0x40] != 0)) {
    (*(code *)param_1[0x47])(param_1[0x40],param_1);
                    /* WARNING: Could not recover jumptable at 0x00837c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))();
    return;
  }
  return;
}


//// FUNCTION FUN_00837d40 @ 00837d40 ////

void __cdecl FUN_00837d40(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00837e40 @ 00837e40 ////

void * FUN_00837e40(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00837e70 @ 00837e70 ////

/* WARNING: Removing unreachable block (ram,0x00837fe9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00837e70(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar5 = DAT_0104ec1c;
  do {
    if (puVar5 == DAT_0104ec20) {
      if ((DAT_0104ec8c & 1) == 0) {
        DAT_0104ec8c = DAT_0104ec8c | 1;
        DAT_0104ec28 = &DAT_0104ec34;
        DAT_0104ec34 = 0;
        _DAT_0104ec2c = 0;
        DAT_0104ec30 = 0x14;
        DAT_0104ec68 = &DAT_0104ec74;
        DAT_0104ec74 = 0;
        _DAT_0104ec6c = 0;
        DAT_0104ec70 = 0x14;
        _atexit(FUN_00d133c0);
      }
      if (DAT_0104ec30 <= param_2) {
        if (0x14 < DAT_0104ec30) {
                    /* WARNING: Subroutine does not return */
          _free(DAT_0104ec28);
        }
        DAT_0104ec30 = param_2 + 0x20 & 0xffffffe0;
        DAT_0104ec28 = _malloc(DAT_0104ec30);
      }
      _strncpy(DAT_0104ec28,(char *)param_1,param_2);
      _DAT_0104ec2c = param_2;
      DAT_0104ec28[param_2] = '\0';
      _DAT_0104ec58 = 0xffffffff;
      _DAT_0104ec5c = 0xffffffff;
      _DAT_0104ec48 = 0x3f000000;
      _DAT_0104ec4c = 0x3f000000;
      _DAT_0104ec50 = 0x3f000000;
      _DAT_0104ec54 = 0;
      _DAT_0104ec60 = 0;
      _DAT_0104ec64 = 0;
      if (DAT_0104ec70 == 0) {
        DAT_0104ec70 = 0x20;
        DAT_0104ec68 = _malloc(0x20);
      }
      _strncpy(DAT_0104ec68,"",0);
      _DAT_0104ec6c = 0;
      *DAT_0104ec68 = '\0';
      _DAT_0104ec88 = 0;
      if (param_3 < 0x15) {
        return &DAT_0104ec28;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    pbVar2 = *(byte **)*puVar5;
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00837eb4:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00837eb9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00837eb4;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00837eb9:
    if (iVar3 == 0) {
      if (param_3 < 0x15) {
        return (undefined4 *)*puVar5;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar5 = puVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00838070 @ 00838070 ////

void __thiscall
FUN_00838070(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte local_1c [4];
  undefined4 uStack_18;
  
  uStack_18 = 0x83808a;
  FUN_00843080(this,param_1,param_5,param_6);
  *(int *)((int)this + 0x120) = param_4;
  *(int *)((int)this + 0x11c) = param_3;
  *(int *)((int)this + 0x118) = param_2;
  pbVar2 = local_1c;
  local_1c[0] = 0;
  uVar3 = 0;
  uVar4 = 0x14;
  FUN_004015d0(&stack0xffffffd8,(char *)*param_1,param_1[1]);
  puVar1 = FUN_00837e70(pbVar2,uVar3,uVar4);
  *(undefined4 **)((int)this + 0x124) = puVar1;
  if (puVar1[0x11] != 0) {
    *(undefined1 *)((int)this + 0x110) = 1;
  }
  *(undefined1 *)((int)this + 0x114) = 0;
  (**(code **)(*(int *)this + 0x48))();
  return;
}


//// FUNCTION FUN_00838190 @ 00838190 ////

void __fastcall FUN_00838190(int param_1)

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


//// FUNCTION FUN_008381c0 @ 008381c0 ////

undefined4 * FUN_008381c0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008381f0 @ 008381f0 ////

void __fastcall FUN_008381f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d251ac;
  FUN_00574170(param_1);
  return;
}


//// FUNCTION DesireInfo_Constructor @ 00838200 ////

undefined4 * __thiscall
DesireInfo_Constructor
          (void *this,undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d251ac;
  FUN_00838070(this,param_1,param_2,param_3,param_4,param_5,param_6);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00838270 @ 00838270 ////

void __fastcall FUN_00838270(int param_1)

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


//// FUNCTION FUN_008382a0 @ 008382a0 ////

void __fastcall FUN_008382a0(int param_1)

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


//// FUNCTION FUN_008382d0 @ 008382d0 ////

void FUN_008382d0(void)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104ec1c; puVar1 != DAT_0104ec20; puVar1 = puVar1 + 1) {
    _Memory = (undefined4 *)*puVar1;
    if (_Memory != (undefined4 *)0x0) {
      FUN_00837a50(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (DAT_0104ec1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104ec1c);
  }
  DAT_0104ec1c = (undefined4 *)0x0;
  DAT_0104ec20 = (undefined4 *)0x0;
  DAT_0104ec24 = 0;
  if (DAT_0104ec14 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104ec14)(1);
  }
  (*(code *)DAT_0104ec00[1])();
  DAT_0104ec14 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0083835c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104ec00)();
  return;
}


//// FUNCTION FUN_00838360 @ 00838360 ////

void FUN_00838360(void)

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
  puStack_8 = &LAB_00ce6058;
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


//// FUNCTION FUN_00838420 @ 00838420 ////

void __thiscall FUN_00838420(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00838360();
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
      _Dst = FUN_008381c0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00837e40(param_1,iVar5,param_1 + param_2);
      FUN_008381c0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00837970(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00837e40(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00837d40(param_1,(int)pvVar3,iVar5);
    FUN_00837970(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008386b0 @ 008386b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008386b0(void)

{
  char *pcVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  char *pcStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  char acStack_1cc [20];
  char *pcStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  char acStack_1ac [20];
  int *local_198;
  undefined1 *puStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined1 auStack_188 [20];
  char *pcStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char acStack_168 [20];
  undefined4 uStack_154;
  undefined4 uStack_150;
  void *apvStack_14c [2];
  uint uStack_144;
  void *apvStack_12c [2];
  uint uStack_124;
  void *apvStack_10c [2];
  uint uStack_104;
  void *apvStack_ec [2];
  uint uStack_e4;
  void *apvStack_cc [2];
  uint uStack_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6157;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_198 = operator_new(0xd8);
  local_4 = 0;
  if (local_198 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00559fb0(local_198);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104ec00[1])();
  DAT_0104ec14 = puVar4;
  (*(code *)*DAT_0104ec00)();
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"desires",7);
  uStack_1d4 = 7;
  pcStack_1d8[7] = '\0';
  local_4 = 1;
  FUN_0055be10(DAT_0104ec14,&pcStack_1d8,'\0');
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"AdaptiveDesires",0xf);
  uStack_1d4 = 0xf;
  pcStack_1d8[0xf] = '\0';
  local_4 = 2;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,1.0);
  _DAT_00e5cb4c = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"MaxDesireInterval",0x11);
  uStack_1d4 = 0x11;
  pcStack_1d8[0x11] = '\0';
  local_4 = 3;
  DAT_0104ebfc = FUN_00558750(DAT_0104ec14,&pcStack_1d8,1);
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"AdaptiveMultiplier",0x12);
  uStack_1d4 = 0x12;
  pcStack_1d8[0x12] = '\0';
  local_4 = 4;
  DAT_0104ebf8 = FUN_00558750(DAT_0104ec14,&pcStack_1d8,1);
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"InitialDespRate",0xf);
  uStack_1d4 = 0xf;
  pcStack_1d8[0xf] = '\0';
  local_4 = 5;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,1.0);
  _DAT_00e5cb50 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"MaxDespRate",0xb);
  uStack_1d4 = 0xb;
  pcStack_1d8[0xb] = '\0';
  local_4 = 6;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,1.0);
  DAT_00e5cb54 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"GetJobMinTurnover",0x11);
  uStack_1d4 = 0x11;
  pcStack_1d8[0x11] = '\0';
  local_4 = 7;
  DAT_0104ebf0 = FUN_00558750(DAT_0104ec14,&pcStack_1d8,600);
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x14;
  _strncpy(pcStack_1d8,"GetJobMaxTurnover",0x11);
  uStack_1d4 = 0x11;
  pcStack_1d8[0x11] = '\0';
  local_4 = 8;
  DAT_0104ebf4 = FUN_00558750(DAT_0104ec14,&pcStack_1d8,3000);
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x20;
  pcStack_1d8 = _malloc(0x20);
  _strncpy(pcStack_1d8,"TantrumStatusThreshold",0x16);
  uStack_1d4 = 0x16;
  pcStack_1d8[0x16] = '\0';
  local_4 = 9;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,0.0);
  DAT_00e5cd40 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x20;
  pcStack_1d8 = _malloc(0x20);
  _strncpy(pcStack_1d8,"TantrumWorkThresholdDelta",0x19);
  uStack_1d4 = 0x19;
  pcStack_1d8[0x19] = '\0';
  local_4 = 10;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,0.0);
  _DAT_0104ecf0 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x20;
  pcStack_1d8 = _malloc(0x20);
  _strncpy(pcStack_1d8,"TantrumMidIncrementMultiplier",0x1d);
  uStack_1d4 = 0x1d;
  pcStack_1d8[0x1d] = '\0';
  local_4 = 0xb;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,0.0);
  _DAT_00e5cd44 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x20;
  pcStack_1d8 = _malloc(0x20);
  _strncpy(pcStack_1d8,"TantrumHighIncrementMultiplier",0x1e);
  uStack_1d4 = 0x1e;
  pcStack_1d8[0x1e] = '\0';
  local_4 = 0xc;
  fVar11 = FUN_00558610(DAT_0104ec14,&pcStack_1d8,0.0);
  _DAT_00e5cd48 = (float)fVar11;
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  pcStack_1b8 = acStack_1ac;
  acStack_1ac[0] = '\0';
  uStack_1b4 = 0;
  uStack_1b0 = 0x14;
  pcStack_174 = acStack_168;
  local_4 = 0xd;
  acStack_168[0] = '\0';
  uStack_170 = 0;
  uStack_16c = 0x14;
  _strncpy(pcStack_174,"",0);
  uStack_170 = 0;
  *pcStack_174 = '\0';
  uStack_154 = 0;
  uStack_150 = 0;
  pcStack_1d8 = acStack_1cc;
  acStack_1cc[0] = '\0';
  uStack_1d4 = 0;
  uStack_1d0 = 0x20;
  pcStack_1d8 = _malloc(0x20);
  _strncpy(pcStack_1d8,"data/rule/desires.csv",0x15);
  uStack_1d4 = 0x15;
  pcStack_1d8[0x15] = '\0';
  local_4._0_1_ = 0xf;
  FUN_00553a50(&pcStack_174,&pcStack_1d8);
  if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1d8);
  }
  puStack_194 = auStack_188;
  auStack_188[0] = 0;
  uStack_190 = 0;
  uStack_18c = 0x14;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_00552520(&pcStack_174,&puStack_194);
  uVar5 = FUN_00552520(&pcStack_174,&puStack_194);
  cVar3 = (char)uVar5;
  do {
    if (cVar3 == '\0') {
      if (0x14 < uStack_18c) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_194);
      }
      local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_00552ce0(&pcStack_174);
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar6 = operator_new(100);
    piVar10 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      *piVar6 = (int)(piVar6 + 3);
      *(undefined1 *)(piVar6 + 3) = 0;
      piVar6[1] = 0;
      piVar6[2] = 0x14;
      piVar6[0x11] = 0;
      piVar6[0x10] = (int)(piVar6 + 0x13);
      *(undefined1 *)(piVar6 + 0x13) = 0;
      piVar6[0x12] = 0x14;
      piVar10 = piVar6;
    }
    local_198 = piVar10;
    puVar4 = FUN_0056ac50(&pcStack_1d8,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if ((uint)piVar10[2] <= uVar5) {
      if (0x14 < (uint)piVar10[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar10);
      }
      uVar7 = uVar5 + 0x20 & 0xffffffe0;
      piVar10[2] = uVar7;
      pvVar8 = _malloc(uVar7);
      *piVar10 = (int)pvVar8;
    }
    _strncpy((char *)*piVar10,pcVar1,uVar5);
    piVar10[1] = uVar5;
    *(undefined1 *)(uVar5 + *piVar10) = 0;
    if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1d8);
    }
    puVar4 = FUN_0056ac50(apvStack_8c,&puStack_194);
    local_4._0_1_ = 0x11;
    fVar11 = FUN_00567d60(puVar4);
    piVar10[9] = (int)(float)fVar11;
    local_4._0_1_ = 0x10;
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_8c[0]);
    }
    puVar4 = FUN_0056ac50(apvStack_2c,&puStack_194);
    local_4._0_1_ = 0x12;
    fVar11 = FUN_00567d60(puVar4);
    piVar10[8] = (int)(float)fVar11;
    local_4._0_1_ = 0x10;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    puVar4 = FUN_0056ac50(apvStack_10c,&puStack_194);
    local_4._0_1_ = 0x13;
    fVar11 = FUN_00567d60(puVar4);
    piVar10[0xb] = (int)(float)fVar11;
    local_4._0_1_ = 0x10;
    if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_10c[0]);
    }
    puVar4 = FUN_0056ac50(apvStack_14c,&puStack_194);
    local_4._0_1_ = 0x14;
    fVar11 = FUN_00567d60(puVar4);
    piVar10[10] = (int)(float)fVar11;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_14c[0]);
    }
    puVar4 = FUN_0056ac50(apvStack_cc,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if (uStack_1b0 <= uVar5) {
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      uStack_1b0 = uVar5 + 0x20 & 0xffffffe0;
      pcStack_1b8 = _malloc(uStack_1b0);
    }
    _strncpy(pcStack_1b8,pcVar1,uVar5);
    pcStack_1b8[uVar5] = '\0';
    uStack_1b4 = uVar5;
    if (0x14 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_cc[0]);
    }
    if (uVar5 == 0) {
      piVar10[0xc] = -1;
    }
    else {
      iVar9 = FUN_00567d80(&pcStack_1b8);
      piVar10[0xc] = iVar9;
    }
    puVar4 = FUN_0056ac50(apvStack_4c,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if (uStack_1b0 <= uVar5) {
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      uStack_1b0 = uVar5 + 0x20 & 0xffffffe0;
      pcStack_1b8 = _malloc(uStack_1b0);
    }
    _strncpy(pcStack_1b8,pcVar1,uVar5);
    pcStack_1b8[uVar5] = '\0';
    uStack_1b4 = uVar5;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (uVar5 == 0) {
      piVar10[0xd] = piVar10[0xc];
    }
    else {
      iVar9 = FUN_00567d80(&pcStack_1b8);
      piVar10[0xd] = iVar9;
    }
    puVar4 = FUN_0056ac50(apvStack_12c,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if (uStack_1b0 <= uVar5) {
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      uStack_1b0 = uVar5 + 0x20 & 0xffffffe0;
      pcStack_1b8 = _malloc(uStack_1b0);
    }
    _strncpy(pcStack_1b8,pcVar1,uVar5);
    pcStack_1b8[uVar5] = '\0';
    uStack_1b4 = uVar5;
    if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_12c[0]);
    }
    if (uVar5 == 0) {
      piVar10[0xe] = 0;
    }
    else {
      fVar11 = FUN_00567d60(&pcStack_1b8);
      piVar10[0xe] = (int)(float)fVar11;
    }
    puVar4 = FUN_0056ac50(apvStack_ec,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if (uStack_1b0 <= uVar5) {
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      uStack_1b0 = uVar5 + 0x20 & 0xffffffe0;
      pcStack_1b8 = _malloc(uStack_1b0);
    }
    _strncpy(pcStack_1b8,pcVar1,uVar5);
    pcStack_1b8[uVar5] = '\0';
    uStack_1b4 = uVar5;
    if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ec[0]);
    }
    if (uVar5 == 0) {
      piVar10[0xf] = 0;
    }
    else {
      fVar11 = FUN_00567d60(&pcStack_1b8);
      piVar10[0xf] = (int)(float)fVar11;
    }
    if ((float)piVar10[0xe] <= 0.0) {
      if ((float)piVar10[0xe] < 0.0) {
        fVar2 = ABS((float)piVar10[0xf]);
        goto LAB_00839210;
      }
    }
    else {
      fVar2 = -ABS((float)piVar10[0xf]);
LAB_00839210:
      piVar10[0xf] = (int)fVar2;
    }
    puVar4 = FUN_0056ac50(apvStack_ac,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if ((uint)piVar10[0x12] <= uVar5) {
      if (0x14 < (uint)piVar10[0x12]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)piVar10[0x10]);
      }
      uVar7 = uVar5 + 0x20 & 0xffffffe0;
      piVar10[0x12] = uVar7;
      pvVar8 = _malloc(uVar7);
      piVar10[0x10] = (int)pvVar8;
    }
    _strncpy((char *)piVar10[0x10],pcVar1,uVar5);
    piVar10[0x11] = uVar5;
    *(undefined1 *)(uVar5 + piVar10[0x10]) = 0;
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ac[0]);
    }
    puVar4 = FUN_0056ac50(apvStack_6c,&puStack_194);
    uVar5 = puVar4[1];
    pcVar1 = (char *)*puVar4;
    if (uStack_1b0 <= uVar5) {
      if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b8);
      }
      uStack_1b0 = uVar5 + 0x20 & 0xffffffe0;
      pcStack_1b8 = _malloc(uStack_1b0);
    }
    _strncpy(pcStack_1b8,pcVar1,uVar5);
    pcStack_1b8[uVar5] = '\0';
    uStack_1b4 = uVar5;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_6c[0]);
    }
    iVar9 = FUN_00567d80(&pcStack_1b8);
    piVar10[0x18] = iVar9;
    if ((DAT_0104ec1c == 0) ||
       ((uint)(DAT_0104ec24 - DAT_0104ec1c >> 2) <= (uint)((int)DAT_0104ec20 - DAT_0104ec1c >> 2)))
    {
      FUN_00838420(&DAT_0104ec18,DAT_0104ec20,1,&local_198);
    }
    else {
      *DAT_0104ec20 = piVar10;
      DAT_0104ec20 = DAT_0104ec20 + 1;
    }
    uVar5 = FUN_00552520(&pcStack_174,&puStack_194);
    cVar3 = (char)uVar5;
  } while( true );
}


//// FUNCTION FUN_008393d0 @ 008393d0 ////

void FUN_008393d0(void)

{
  FUN_008382d0();
  FUN_008386b0();
  return;
}


//// FUNCTION DesireLeave_Constructor @ 008393f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall DesireLeave_Constructor(void *this,undefined4 param_1)

{
  float fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6180;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d5eea4;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"leave",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  fVar1 = _DAT_00e5cb58;
  if (local_24 < 0x15) {
    *(undefined1 *)((int)this + 0x10e) = 1;
    if (0.0 <= fVar1) {
      fVar1 = _DAT_00e5cb58;
      if (1.0 < _DAT_00e5cb58) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)((int)this + 0xe0) = fVar1;
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_008394f0 @ 008394f0 ////

undefined4 * __thiscall FUN_008394f0(void *this,byte param_1)

{
  thunk_FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00839520 @ 00839520 ////

void __fastcall FUN_00839520(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00839550 @ 00839550 ////

void FUN_00839550(void)

{
  return;
}


//// FUNCTION FUN_00839570 @ 00839570 ////

void __fastcall FUN_00839570(int *param_1)

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
  puStack_8 = &LAB_00ce6198;
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


//// FUNCTION FUN_00839640 @ 00839640 ////

void __fastcall FUN_00839640(int param_1)

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
  puStack_8 = &LAB_00ce61e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_0098b490("Values");
  uVar6 = 0;
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x30);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x2c);
      if ((int *)local_50 != *(int **)(param_1 + 0x2c)) {
        do {
          uVar7 = local_50;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          FUN_004015d0(&local_4c,*(char **)(local_50 + 0xc),*(uint *)(local_50 + 0x10));
          local_4 = 0;
          FUN_0098c550(&local_4c);
          FUN_00566d60((undefined4 *)(uVar7 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00440230((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x2c));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = 0;
      FUN_004417e0(param_1 + 0x28);
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      local_4 = 1;
      SLVAR_LoadUint(&local_54);
      uVar7 = 0;
      if (local_54 != 0) {
        do {
          FUN_0098c550(&local_4c);
          piVar5 = FUN_00442050((void *)(param_1 + 0x28),&local_4c);
          FUN_00566d60(piVar5);
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
  uVar4 = FUN_0098b490("DesperationRates");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x48);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x44);
      if ((int *)local_50 != *(int **)(param_1 + 0x44)) {
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
          FUN_00566d60((undefined4 *)(uVar2 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00440230((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x44));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = 0;
      FUN_004417e0(param_1 + 0x40);
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
          piVar5 = FUN_00442050((void *)(param_1 + 0x40),&local_4c);
          FUN_00566d60(piVar5);
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
  uVar4 = FUN_0098b490("Desperations");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x3c);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x38);
      if ((int *)local_50 != *(int **)(param_1 + 0x38)) {
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
          FUN_00566d60((undefined4 *)(uVar7 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00440230((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x38));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_50 = 0;
      FUN_00441710(*(void **)(*(int *)(param_1 + 0x38) + 4));
      *(int *)(*(int *)(param_1 + 0x38) + 4) = *(int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x38);
      *(int *)(*(int *)(param_1 + 0x38) + 8) = *(int *)(param_1 + 0x38);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 5;
      SLVAR_LoadUint(&local_50);
      if (local_50 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar5 = FUN_00442050((void *)(param_1 + 0x34),&local_2c);
          FUN_00566d60(piVar5);
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


//// FUNCTION FUN_00839b50 @ 00839b50 ////

void __fastcall FUN_00839b50(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce6235;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5ef40;
  param_1[0xe] = &PTR_LAB_00d5ef20;
  local_4 = 3;
  FUN_00441db0(param_1 + 0x1e,&local_10,*(int **)param_1[0x1f],(int *)param_1[0x1f]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1f]);
}


//// FUNCTION FUN_00839c50 @ 00839c50 ////

undefined4 * __thiscall FUN_00839c50(void *this,byte param_1)

{
  FUN_00839b50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00839c70 @ 00839c70 ////

undefined4 * __fastcall FUN_00839c70(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce6269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d5ef20;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d5ef40;
  iVar1 = FUN_00441140();
  param_1[0x19] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)param_1[0x19] = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_00441140();
  param_1[0x1c] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1c];
  *(undefined4 *)param_1[0x1c] = param_1[0x1c];
  *(undefined4 *)(param_1[0x1c] + 8) = param_1[0x1c];
  param_1[0x1d] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = FUN_00441140();
  param_1[0x1f] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x1f];
  *(undefined4 *)param_1[0x1f] = param_1[0x1f];
  *(undefined4 *)(param_1[0x1f] + 8) = param_1[0x1f];
  param_1[0x20] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00839d50 @ 00839d50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00839d50(undefined4 param_1,undefined4 param_2)

{
  DAT_0104ec90 = param_1;
  _DAT_0104ec94 = param_2;
  return;
}


//// FUNCTION DesireOverDrink_Constructor @ 0083a2c0 ////

undefined4 * __thiscall DesireOverDrink_Constructor(void *this,undefined4 param_1)

{
  int *piVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce62fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008433b0(this);
  piVar1 = (int *)((int)this + 0x128);
  *(undefined ***)this = &PTR_FUN_00d5ef4c;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(int **)((int)this + 0x134) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x13c) = param_1;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"overdrink",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00838070(this,&local_2c,0,0,0,0,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined1 *)((int)this + 0x10e) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0083a3b0 @ 0083a3b0 ////

undefined4 * __thiscall FUN_0083a3b0(void *this,byte param_1)

{
  FUN_0083a3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


