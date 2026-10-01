//// FUNCTION LH_SaveGlobalProperties @ 00bd2670 ////

bool __fastcall LH_SaveGlobalProperties(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 local_18;
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = LH_CountGlobalProperties(param_2,&local_18);
  if (cVar1 != '\0') {
    piVar3 = (int *)std__String__Constructor(local_14,0xd9f1bc);
    local_4 = 0;
    bVar2 = FUN_00bd2490(param_1,piVar3);
    local_4 = 0xffffffff;
    local_14[0] = &PTR_LAB_00d9d9b4;
    if (bVar2) {
      cVar1 = LH_WriteGlobalProperties(param_2,param_1);
      ExceptionList = local_c;
      return cVar1 != '\0';
    }
  }
  ExceptionList = local_c;
  return false;
}


//// FUNCTION FUN_00bd2710 @ 00bd2710 ////

int __fastcall FUN_00bd2710(int param_1,int param_2)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 0x2c);
  iVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd3890((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Map_GetObject_00bd4010(this,uVar4);
      if (*(int *)(iVar1 + 8) == param_2) {
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd3890((int)this);
    } while (uVar4 < uVar2);
  }
  return iVar3;
}


//// FUNCTION LH_SaveSampleBankTable @ 00bd2750 ////

undefined4 __fastcall LH_SaveSampleBankTable(int *param_1,int param_2,int param_3)

{
  void *this;
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_2bc [2];
  int *local_2b4;
  char local_2ad;
  int local_2ac;
  undefined4 auStack_2a8 [65];
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined2 uStack_184;
  undefined2 uStack_182;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cffb24;
  local_14 = ExceptionList;
  this = (void *)(param_2 + 0x2c);
  ExceptionList = &local_14;
  local_2b4 = param_1;
  local_2ac = param_2;
  GetField_8_00bd3890((int)this);
  piVar2 = (int *)std__String__Constructor(local_2bc,0xd9f1d4);
  local_c = 0;
  bVar1 = FUN_00bd2490(local_2b4,piVar2);
  local_2ad = '\x01' - bVar1;
  uVar7 = CONCAT31(extraout_var,local_2ad);
  local_c = 0xffffffff;
  if (local_2ad == '\0') {
    uVar7 = 0;
    local_2bc[0] = 0;
    iVar3 = GetField_8_00bd3890((int)this);
    if (iVar3 != 0) {
      do {
        iVar3 = LH_Map_GetObject_00bd4010(this,uVar7);
        if (*(short *)(iVar3 + 0x14) != 0) {
          local_2bc[0] = local_2bc[0] + 1;
        }
        uVar7 = uVar7 + 1;
        uVar4 = GetField_8_00bd3890((int)this);
      } while (uVar7 < uVar4);
    }
    uVar7 = GetField_8_00bd3890((int)this);
    local_2bc[0] = uVar7 & 0xffff | local_2bc[0] << 0x10;
    uVar7 = (**(code **)(*local_2b4 + 4))(local_2bc,4);
    if ((char)uVar7 != '\0') {
      local_2bc[0] = 0;
      iVar3 = GetField_8_00bd3890((int)this);
      uVar7 = 0;
      if (iVar3 != 0) {
        do {
          puVar5 = (undefined4 *)LH_Map_GetObject_00bd4010((void *)(param_2 + 0x2c),local_2bc[0]);
          iVar3 = LH_SortedArray_FindObject_00bd4940((void *)(param_2 + 0x20),puVar5 + 2);
          uVar7 = 0;
          if (iVar3 == 0) goto LAB_00bd2b4f;
          puVar8 = auStack_2a8;
          for (iVar6 = 0xa3; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          FUN_00bd3c80(auStack_2a8,iVar3 + 4);
          iVar6 = local_2ac;
          uStack_1a4 = puVar5[1];
          uStack_1a0 = puVar5[2];
          uStack_19c = *(undefined4 *)(iVar3 + 0xc);
          iStack_198 = *(int *)(iVar3 + 0x10) - param_3;
          iStack_194 = FUN_00bd2710(local_2ac,puVar5[2]);
          uStack_190 = CONCAT22(*(undefined2 *)(puVar5 + 5),*(undefined2 *)((int)puVar5 + 0x16));
          uStack_182 = *(undefined2 *)(iVar3 + 0x14);
          uStack_180 = *(undefined4 *)(iVar3 + 0x18);
          uStack_184 = *(undefined2 *)(iVar3 + 0x16);
          uStack_170 = *(undefined4 *)(iVar3 + 0x1c);
          uStack_16c = *(undefined4 *)(iVar3 + 0x20);
          FUN_00bd3cf0(auStack_2a8,puVar5 + 3);
          uStack_68 = puVar5[6];
          if ((*(byte *)(puVar5 + 0xb) & 4) != 0) {
            uStack_30 = 1;
          }
          iStack_34 = ((*(byte *)(puVar5 + 0xb) >> 3 & 1) != 0) + 2;
          uStack_48 = (uint)*(ushort *)(puVar5 + 9);
          uVar7 = uStack_64 | 0x401;
          if ((*(byte *)(puVar5 + 0xb) & 0x10) != 0) {
            uStack_40 = puVar5[0xc];
            uVar7 = uStack_64 | 0x481;
          }
          uStack_64 = uVar7;
          if ((*(byte *)(puVar5 + 0xb) & 0x20) != 0) {
            uStack_3c = puVar5[0xd];
            uStack_64 = uStack_64 | 0x100;
          }
          if (puVar5[7] != 0) {
            uStack_64 = uStack_64 | 0x40;
            iStack_60 = puVar5[7];
          }
          uStack_44 = (uint)*(ushort *)((int)puVar5 + 0x2e);
          uStack_2c = puVar5[0xe];
          uStack_54 = (uint)*(ushort *)((int)puVar5 + 0x22);
          uStack_58 = (uint)*(ushort *)(puVar5 + 8);
          uVar7 = uStack_64 | 0xc;
          if ((*(byte *)(puVar5 + 0xb) & 1) != 0) {
            uStack_50 = uStack_50 | 1;
            uVar7 = uStack_64 | 0x1c;
          }
          uStack_64 = uVar7;
          if ((*(byte *)(puVar5 + 0xb) & 2) != 0) {
            uStack_64 = uStack_64 | 0x10;
            uStack_50 = uStack_50 | 2;
          }
          uVar7 = uStack_64 | 0x20;
          uStack_4c = uStack_4c & 0xffff0000 | (uint)(ushort)puVar5[10];
          if (*(short *)(puVar5 + 10) != *(short *)((int)puVar5 + 0x2a)) {
            uVar7 = uStack_64 | 0x1020;
            uStack_4c = puVar5[10];
          }
          uStack_64 = uVar7;
          uStack_38 = *puVar5;
          uVar7 = (**(code **)(*local_2b4 + 4))(auStack_2a8,0x28c);
          if ((char)uVar7 == '\0') goto LAB_00bd2b4f;
          uVar4 = local_2bc[0] + 1;
          local_2bc[0] = uVar4;
          uVar7 = GetField_8_00bd3890(iVar6 + 0x2c);
          param_2 = local_2ac;
        } while (uVar4 < uVar7);
      }
      ExceptionList = local_14;
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
LAB_00bd2b4f:
  ExceptionList = local_14;
  return uVar7 & 0xffffff00;
}


//// FUNCTION LH_LoadLUGAsset_AutoDetectFormat @ 00bd2b70 ////

void __thiscall LH_LoadLUGAsset_AutoDetectFormat(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **local_250 [2];
  undefined1 *local_248;
  char local_241;
  uint local_240;
  int local_23c [2];
  undefined1 local_234 [4];
  int local_230;
  int local_22c [6];
  undefined1 local_214 [8];
  undefined4 local_20c [6];
  undefined4 local_1f4 [18];
  undefined1 local_1ac [156];
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PKDiskBufferingCReader_Ctor(local_1ac,param_1,0x1000);
  local_4 = 0;
  PKDiskBufferingCReader_ResizeBuffer(local_1ac,0x1000);
  FUN_00bce860(local_250);
  local_248 = local_1ac;
  local_250[0] = &PTR_ScalarDeletingDtor_00bd3c60_00d9f134;
  local_4._0_1_ = 1;
  Ctor_vt00d9f52c_00bd9d00(local_22c,(int *)local_250);
  local_4._0_1_ = 2;
  uVar3 = LH_VerifyLUGHeader(local_22c);
  if ((char)uVar3 == '\0') {
    pvVar4 = LH_BeginErrorMessage((int)this);
    LH_LogErrorMessage(pvVar4,"Could not verify LUG header");
    goto LAB_00bd2e0b;
  }
  local_110 = &PTR_LAB_00d9db7c;
  local_10c = 0;
  local_d = 0;
  local_4._0_1_ = 3;
  uVar3 = LH_GetFirstSegmentInfo(local_22c,&local_110);
  if ((char)uVar3 == '\0') {
    pvVar4 = LH_BeginErrorMessage((int)this);
    LH_LogErrorMessage(pvVar4,"Could not extract first segment details...");
  }
  else {
    FUN_00c05360(local_1f4);
    local_4._0_1_ = 4;
    piVar5 = (int *)std__String__Constructor(local_214,0xd9f254);
    local_4._0_1_ = 5;
    pbVar6 = (byte *)FUN_00bbf3a0(piVar5);
    iVar7 = FUN_00bbf680(&local_110,pbVar6);
    local_241 = '\x01' - (iVar7 != 0);
    local_4._0_1_ = 4;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 4;
    if (local_241 == '\0') {
      local_4._0_1_ = uVar1;
      FUN_00c00c80(param_1,local_1f4,(int)this);
      bVar2 = LH_CheckLoadStatus((int)this);
      if (bVar2) {
LAB_00bd2dd7:
        LH_CommitLoadedBank(param_2,local_1f4,this);
      }
    }
    else {
      Ctor_vt00d9e4b0_00bc12f0(local_23c,local_240);
      local_4._0_1_ = 6;
      if (local_230 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_00bbc590(local_234,0);
      }
      uVar3 = LH_ReadFileData(local_22c,iVar7,local_240);
      if ((char)uVar3 == '\0') {
        pvVar4 = LH_BeginErrorMessage((int)this);
        LH_LogErrorMessage(pvVar4,"Could not cache the META Data segment");
        local_4._0_1_ = 4;
        Dtor_00bc1280(local_23c);
      }
      else {
        Ctor_vt00d9f52c_00bd9d00(local_20c,local_23c);
        local_4._0_1_ = 7;
        LH_Archive_InitForLoading(local_214,local_20c);
        uVar8 = LH_DeserializeMetaDataSegment(local_1f4,local_214);
        if ((char)uVar8 != '\0') {
          local_4._0_1_ = 6;
          Dtor_00bd9e50(local_20c);
          local_4._0_1_ = 4;
          Dtor_00bc1280(local_23c);
          goto LAB_00bd2dd7;
        }
        pvVar4 = LH_BeginErrorMessage((int)this);
        LH_LogErrorMessage(pvVar4,"Could not serialise the META Data segment");
        local_4._0_1_ = 6;
        Dtor_00bd9e50(local_20c);
        local_4._0_1_ = 4;
        Dtor_00bc1280(local_23c);
      }
    }
    local_4._0_1_ = 3;
    FUN_00c05580((int)local_1f4);
  }
  local_110 = &PTR_LAB_00d9d9b4;
LAB_00bd2e0b:
  local_4._0_1_ = 1;
  Dtor_00bd9e50(local_22c);
  local_250[0] = &PTR_ScalarDeletingDtor_00bd3c60_00d9f134;
  local_4 = (uint)local_4._1_3_ << 8;
  PKDataReadCAccess_Dtor(local_250);
  local_4 = 0xffffffff;
  Dtor_00c081b0(local_1ac);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_LoadMetFile @ 00bd2e70 ////

void __fastcall LH_LoadMetFile(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *_Memory;
  void *this;
  int iVar1;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  _Memory = (undefined4 *)FUN_00bd5370(param_1);
  local_4 = 0;
  local_10 = _Memory;
  if (_Memory == (undefined4 *)0x0) {
    this = LH_BeginErrorMessage(param_2);
    LH_LogErrorMessage(this,"Could not load from file");
    ExceptionList = local_c;
    return;
  }
                    /* process the loaded blob */
  iVar1 = PKCAutoDelete_Get_00bd4350((int *)&local_10);
  LH_CommitLoadedBank(param_3,iVar1,param_2);
  local_4 = 0xffffffff;
  FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION LH_LoadBank @ 00bd2f10 ////

void __fastcall LH_LoadBank(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  void *unaff_EBX;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  undefined **ppuStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_13;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cffbb2;
  pvStack_c = ExceptionList;
  iVar4 = *param_1;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00bbf3a0(unaff_EDI);
  piVar2 = (int *)(**(code **)(iVar4 + 4))(iVar1);
  puStack_8 = (undefined1 *)0x0;
  if (piVar2 == (int *)0x0) {
    pvVar3 = LH_BeginErrorMessage((int)unaff_EBX);
    LH_LogErrorMessage(pvVar3,"Could not open ");
    FUN_00bbf750(pvVar3,unaff_EDI);
    ExceptionList = pvStack_10;
    return;
  }
  ppuStack_20 = &PTR_LAB_00d9dd5c;
  uStack_1c = 0;
  uStack_13 = 0;
  puStack_8 = (undefined1 *)0x1;
  FUN_00bbfb30(unaff_EDI,4,(int *)&ppuStack_20);
  iVar4 = FUN_00bbf6e0(&ppuStack_20,".lug");
  if (iVar4 == 0) {
    iVar4 = FUN_00bbc3b0((int *)&stack0xffffffdc);
    LH_LoadLUGAsset_AutoDetectFormat(unaff_EBX,iVar4,unaff_retaddr);
  }
  else {
    iVar4 = FUN_00bbf6e0(&ppuStack_20,".met");
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)FUN_00bbc3b0((int *)&stack0xffffffdc);
      LH_LoadMetFile(puVar5,(int)unaff_EBX,unaff_retaddr);
    }
    else {
      pvVar3 = LH_BeginErrorMessage((int)unaff_EBX);
      LH_LogErrorMessage(pvVar3,"This bank is not a recognised format (.lug, .met)");
    }
  }
  ppuStack_20 = &PTR_LAB_00d9d9b4;
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar2 + 0xc))();
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION LH_TryLoadBank @ 00bd3040 ////

uint __fastcall LH_TryLoadBank(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffbc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bff5e0(local_20);
  local_4 = 0;
  LH_LoadBank(param_1);
  FUN_00bff660((int)local_20);
  bVar1 = LH_CheckLoadStatus((int)local_20);
  local_4 = 0xffffffff;
  if (!bVar1) {
    uVar2 = FUN_00bff610((int)local_20);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_00bff610((int)local_20);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION LH_SaveBankCriteriaInfo @ 00bd30e0 ////

undefined4 __fastcall LH_SaveBankCriteriaInfo(int *param_1,int param_2)

{
  void *this;
  bool bVar1;
  char extraout_AL;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint3 extraout_var;
  uint3 extraout_var_00;
  void *pvVar5;
  uint3 extraout_var_01;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30 [2];
  int *local_28 [2];
  undefined1 local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cffbde;
  local_14 = ExceptionList;
  this = (void *)(param_2 + 0x38);
  uVar7 = 0;
  local_30[0] = 0;
  ExceptionList = &local_14;
  local_28[0] = param_1;
  iVar3 = GetField_8_00bd38a0((int)this);
  if (iVar3 != 0) {
    do {
      piVar4 = (int *)LH_Map_GetObject_00bd4040(this,uVar7);
      uVar8 = 0;
      if (piVar4[3] != 0) {
        do {
          PKCAutoDeleteArray_At_00bd4820(piVar4 + 2,uVar8);
          PKString_GetLength(piVar4);
          uVar8 = uVar8 + 1;
          uVar7 = local_30[0];
        } while (uVar8 < (uint)piVar4[3]);
      }
      uVar7 = uVar7 + 1;
      local_30[0] = uVar7;
      uVar8 = GetField_8_00bd38a0((int)this);
      param_1 = local_28[0];
    } while (uVar7 < uVar8);
  }
  piVar4 = (int *)std__String__Constructor(local_30,0xd9f32c);
  local_c = 0;
  bVar1 = FUN_00bd2490(param_1,piVar4);
  local_c = 0xffffffff;
  uVar6 = extraout_var;
  if (bVar1) {
    FUN_00be63a0(local_20,param_1);
    LH_Archive_TransferU32((int)local_20);
    uVar6 = extraout_var_00;
    if (extraout_AL != '\0') {
      uVar7 = 0;
      local_30[0] = 0;
      iVar3 = GetField_8_00bd38a0((int)this);
      if (iVar3 == 0) {
        ExceptionList = local_14;
        return 1;
      }
      do {
        iVar3 = LH_Map_GetObject_00bd4040(this,uVar7);
        uVar8 = 0;
        if (*(int *)(iVar3 + 0xc) != 0) {
          do {
            pvVar5 = (void *)PKCAutoDeleteArray_At_00bd4820((void *)(iVar3 + 8),uVar8);
            Ctor_vt00d9feb8_00be2070(local_28,iVar3);
            local_c = 1;
            if (uVar8 != 0) {
              LH_LogErrorMessage(local_28,"SUB");
              LH_PrintResourceID(local_28,uVar8 + 1);
            }
            bVar1 = LH_Archive_SerializeString((int)local_20,(int *)local_28);
            if (!bVar1) {
LAB_00bd32df:
              local_c = 0xffffffff;
              PKStringsCHeapString_Dtor(local_28);
              uVar6 = extraout_var_01;
              goto LAB_00bd32e4;
            }
            cVar2 = FUN_00bd5530((uint)local_20,pvVar5);
            local_c = 0xffffffff;
            if (cVar2 == '\0') goto LAB_00bd32df;
            PKStringsCHeapString_Dtor(local_28);
            uVar8 = uVar8 + 1;
            uVar7 = local_30[0];
          } while (uVar8 < *(uint *)(iVar3 + 0xc));
        }
        uVar7 = uVar7 + 1;
        local_30[0] = uVar7;
        uVar8 = GetField_8_00bd38a0((int)this);
        if (uVar8 <= uVar7) {
          ExceptionList = local_14;
          return CONCAT31((int3)(uVar8 >> 8),1);
        }
      } while( true );
    }
  }
LAB_00bd32e4:
  ExceptionList = local_14;
  return (uint)uVar6 << 8;
}


//// FUNCTION LH_SaveRLMParamsSegment @ 00bd3300 ////

uint __fastcall LH_SaveRLMParamsSegment(int *param_1,int param_2)

{
  void *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char local_39;
  undefined **local_38 [2];
  int *local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = param_1;
  LH_Array_Constructor(&local_2c);
  uVar8 = 0;
  local_4 = 0;
  Ctor_vt00d9f160_00bd3e30(local_1c);
  this = (void *)(param_2 + 0x2c);
  local_4._0_1_ = 1;
  iVar3 = GetField_8_00bd3890((int)this);
  if (iVar3 != 0) {
    do {
      iVar3 = LH_Map_GetObject_00bd4010(this,uVar8);
      if ((*(byte *)(iVar3 + 0x2c) & 0x40) != 0) {
        local_38[0] = operator_new(0x10);
        local_4._0_1_ = 2;
        if (local_38[0] == (undefined **)0x0) {
          ppuVar4 = (undefined **)0x0;
        }
        else {
          ppuVar4 = (undefined **)FUN_00c071e0(local_38[0]);
        }
        local_4._0_1_ = 3;
        local_38[0] = ppuVar4;
        if (ppuVar4 == (undefined **)0x0) {
          LH_Assert(&local_39,"params.IsValid ()\n");
          DebugBreak();
        }
        *ppuVar4 = *(undefined **)(iVar3 + 4);
        ppuVar4[2] = *(undefined **)(iVar3 + 0x40);
        ppuVar4[1] = *(undefined **)(iVar3 + 0x3c);
        ppuVar4[3] = *(undefined **)(iVar3 + 0x44);
        iVar3 = PKCAutoDelete_Release_00bd44f0((int *)local_38);
        LH_Container_AddObject_00bd5540(local_1c,iVar3);
        local_4._0_1_ = 1;
        if (local_38[0] != (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_38[0]);
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = GetField_8_00bd3890((int)this);
      param_1 = local_30;
    } while (uVar8 < uVar5);
  }
  LH_Array_CopySorted_00bd5790(local_28,local_1c);
  cVar1 = FUN_00bd4a30(&local_2c,&local_30);
  if (cVar1 != '\0') {
    piVar6 = (int *)std__String__Constructor(local_38,0xd9f344);
    local_4._0_1_ = 4;
    bVar2 = FUN_00bd2490(param_1,piVar6);
    local_39 = '\x01' - bVar2;
    local_4._0_1_ = 1;
    local_38[0] = &PTR_LAB_00d9d9b4;
    if (local_39 == '\0') {
      cVar1 = FUN_00bd3e60(&local_2c,param_1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (cVar1 != '\0') {
        Dtor_00bd3e50(local_1c);
        local_4 = 0xffffffff;
        uVar7 = LH_Array_Destructor((int)&local_2c);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar7 >> 8),1);
      }
      goto LAB_00bd3462;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
LAB_00bd3462:
  Dtor_00bd3e50(local_1c);
  local_4 = 0xffffffff;
  uVar8 = LH_Array_Destructor((int)&local_2c);
  ExceptionList = local_c;
  return uVar8 & 0xffffff00;
}


//// FUNCTION LH_BuildLUGAsset @ 00bd34d0 ////

bool __cdecl LH_BuildLUGAsset(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  undefined4 *unaff_retaddr;
  int aiStack_3c [2];
  undefined1 auStack_34 [8];
  undefined4 auStack_2c [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  piVar1 = param_3;
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cffc4d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*param_3 + 8))();
  std__String__Constructor(aiStack_3c,0xd9f384);
  iVar8 = *piVar1;
  iVar14 = 0;
  pvStack_4 = (void *)0x0;
  iVar5 = PKString_GetLength(aiStack_3c);
  iVar6 = FUN_00bbf3a0(aiStack_3c);
  cVar2 = (**(code **)(iVar8 + 4))(iVar6,iVar5);
  if ((cVar2 != '\0') && (cVar2 = FUN_00bd4ab0(pvStack_4,&param_1), cVar2 != '\0')) {
    piVar7 = (int *)std__String__Constructor(&stack0xffffffb4,0xd9f254);
    iVar8 = param_1;
    pvStack_c._0_1_ = 1;
    bVar3 = FUN_00bd2490(piVar1,piVar7);
    param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((char)('\x01' - bVar3) == '\0') {
      iVar5 = (**(code **)(*piVar1 + 8))();
      param_1 = iVar5 + 0x24 + (iVar8 - iVar4);
      pvVar16 = (void *)((int)pvStack_4 + 0x20);
      uVar15 = 0;
      iVar8 = LH_Array_GetCount((int)pvVar16);
      if (iVar8 != 0) {
        do {
          iVar8 = LH_Map_GetObject_00bd3ed0(pvVar16,uVar15);
          if (*(int *)(iVar8 + 0x10) != 0) {
            ExceptionList = pvStack_14;
            return false;
          }
          if (*(int *)(iVar8 + 0xc) == 0) {
            ExceptionList = pvStack_14;
            return false;
          }
          iVar4 = param_1 + iVar14;
          iVar14 = iVar14 + *(int *)(iVar8 + 0xc);
          *(int *)(iVar8 + 0x10) = iVar4;
          uVar15 = uVar15 + 1;
          uVar9 = LH_Array_GetCount((int)pvVar16);
        } while (uVar15 < uVar9);
      }
      cVar2 = FUN_00bd3df0(pvStack_4,piVar1);
      if (cVar2 != '\0') {
        piVar7 = (int *)std__String__Constructor(&stack0xffffffb4,0xd9f374);
        pvStack_c._0_1_ = 2;
        bVar3 = FUN_00bd2490(piVar1,piVar7);
        param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
        pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
        if ((char)('\x01' - bVar3) == '\0') {
          iVar8 = (**(code **)(*piVar1 + 8))();
          uVar15 = 0;
          iVar4 = LH_Array_GetCount((int)pvVar16);
          if (iVar4 != 0) {
            do {
              puVar10 = (undefined4 *)LH_Map_GetObject_00bd3ed0(pvVar16,uVar15);
              Ctor_vt00d9f52c_00bd9f70(auStack_2c);
              pvStack_c._0_1_ = 3;
              cVar2 = (**(code **)*unaff_retaddr)(*puVar10,auStack_2c);
              if (cVar2 == '\0') {
                pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
LAB_00bd373d:
                Dtor_00bd9e50(auStack_2c);
                ExceptionList = pvStack_14;
                return false;
              }
              uVar9 = puVar10[3];
              uVar11 = FUN_00bd9f00((int)auStack_2c);
              if (uVar11 != uVar9) {
                pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
                Dtor_00bd9e50(auStack_2c);
                ExceptionList = pvStack_14;
                return false;
              }
              uVar12 = FUN_00bd24e0(auStack_2c,uVar9);
              pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
              if ((char)uVar12 == '\0') goto LAB_00bd373d;
              Dtor_00bd9e50(auStack_2c);
              uVar15 = uVar15 + 1;
              uVar9 = LH_Array_GetCount((int)pvVar16);
            } while (uVar15 < uVar9);
          }
          piVar7 = (int *)std__String__Constructor(aiStack_3c,0xd67d30);
          pvStack_c._0_1_ = 4;
          piVar13 = (int *)std__String__Constructor(auStack_34,0xd67d30);
          pvStack_c._0_1_ = 5;
          bVar3 = FUN_00bd25c0(piVar1,piVar13,piVar7);
          pvVar16 = pvStack_4;
          param_1 = CONCAT31(param_1._1_3_,'\x01' - bVar3);
          pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
          if (((((char)('\x01' - bVar3) == '\0') &&
               (bVar3 = LH_SaveGlobalProperties(piVar1,pvStack_4), bVar3)) &&
              (uVar12 = LH_SaveBankCriteriaInfo(piVar1,(int)pvVar16), (char)uVar12 != '\0')) &&
             (uVar12 = LH_SaveRLMParamsSegment(piVar1,(int)pvVar16), (char)uVar12 != '\0')) {
            uVar12 = LH_SaveSampleBankTable(piVar1,(int)pvVar16,iVar8);
            ExceptionList = pvStack_14;
            return (char)uVar12 != '\0';
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}


//// FUNCTION FUN_00bd37f0 @ 00bd37f0 ////

void __fastcall FUN_00bd37f0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3810 @ 00bd3810 ////

void * __thiscall ScalarDeletingDtor_00bd3810(void *this,byte param_1)

{
  FUN_00c05580((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_GetAt_00bd3830 @ 00bd3830 ////

undefined4 __thiscall LH_Array_GetAt_00bd3830(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION LH_Array_GetCount @ 00bd3870 ////

undefined4 __fastcall LH_Array_GetCount(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION SetVtable_00d9d9ac_00bd3880 @ 00bd3880 ////

void __fastcall SetVtable_00d9d9ac_00bd3880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9ac;
  return;
}


//// FUNCTION GetField_8_00bd3890 @ 00bd3890 ////

undefined4 __fastcall GetField_8_00bd3890(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION GetField_8_00bd38a0 @ 00bd38a0 ////

undefined4 __fastcall GetField_8_00bd38a0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00bd38b0 @ 00bd38b0 ////

void __fastcall FUN_00bd38b0(void *param_1,void *param_2)

{
  LH_DeserializeMetaDataSegment(param_2,param_1);
  return;
}


//// FUNCTION LH_SerializeGlobalProperties_Thunk @ 00bd38c0 ////

void __fastcall LH_SerializeGlobalProperties_Thunk(int param_1,void *param_2)

{
  LH_SerializeGlobalProperties(param_2,param_1);
  return;
}


//// FUNCTION LH_Array_ZeroHeader @ 00bd38d0 ////

void __fastcall LH_Array_ZeroHeader(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd38e0 @ 00bd38e0 ////

void __fastcall LH_Array_FreeBuffer_00bd38e0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd3940 @ 00bd3940 ////

void __fastcall FUN_00bd3940(int param_1,void *param_2)

{
  FUN_00c07320(param_2,param_1);
  return;
}


//// FUNCTION GetField_8_00bd3950 @ 00bd3950 ////

undefined4 __fastcall GetField_8_00bd3950(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_GetAt_00bd3960 @ 00bd3960 ////

undefined4 __thiscall LH_Array_GetAt_00bd3960(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION LH_Array_GetAt_00bd39a0 @ 00bd39a0 ////

undefined4 __thiscall LH_Array_GetAt_00bd39a0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION LH_Array_Reserve_00bd39e0 @ 00bd39e0 ////

void __thiscall LH_Array_Reserve_00bd39e0(void *this,uint param_1)

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


//// FUNCTION FUN_00bd3aa0 @ 00bd3aa0 ////

void __fastcall FUN_00bd3aa0(undefined4 *param_1,undefined4 *param_2)

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


//// FUNCTION FUN_00bd3b30 @ 00bd3b30 ////

void __fastcall FUN_00bd3b30(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00bd3bd0 @ 00bd3bd0 ////

int * __thiscall FUN_00bd3bd0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 8))(param_1);
  return this;
}


//// FUNCTION Ctor_vt00d9f134_00bd3bf0 @ 00bd3bf0 ////

undefined4 * __thiscall Ctor_vt00d9f134_00bd3bf0(void *this,undefined4 param_1)

{
  FUN_00bce860(this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bd3c60_00d9f134;
  return this;
}


//// FUNCTION Dtor_00bd3c10 @ 00bd3c10 ////

void __fastcall Dtor_00bd3c10(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00bd3c60_00d9f134;
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3c60 @ 00bd3c60 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3c60(void *this,byte param_1)

{
  Dtor_00bd3c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd3c80 @ 00bd3c80 ////

void __thiscall FUN_00bd3c80(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc68;
  pvStack_c = ExceptionList;
  puVar2 = this;
  ExceptionList = &pvStack_c;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Ctor_vt00d9e214_00bc0130(local_18,(int)this,0x104);
  local_4 = 0;
  (**(code **)(local_18[0] + 8))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  SetVtable_00d9d9b4_00bc00d0((undefined4 *)&stack0xffffffe4);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bd3cf0 @ 00bd3cf0 ////

void __thiscall FUN_00bd3cf0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffc88;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)((int)this + 0x140);
  ExceptionList = &pvStack_c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  Ctor_vt00d9e214_00bc0130(local_18,(int)this + 0x140,0x100);
  local_4 = 0;
  (**(code **)(local_18[0] + 8))(param_1);
  puStack_8 = (undefined1 *)0xffffffff;
  SetVtable_00d9d9b4_00bc00d0((undefined4 *)&stack0xffffffe4);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bd3d70 @ 00bd3d70 ////

void __fastcall FUN_00bd3d70(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00bd3d90 @ 00bd3d90 ////

void __fastcall FUN_00bd3d90(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd3df0 @ 00bd3df0 ////

void __fastcall FUN_00bd3df0(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  FUN_00bd38b0(local_8,param_1);
  return;
}


//// FUNCTION LH_WriteGlobalProperties @ 00bd3e10 ////

void __fastcall LH_WriteGlobalProperties(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  LH_SerializeGlobalProperties_Thunk((int)local_8,param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f160_00bd3e30 @ 00bd3e30 ////

undefined4 * __fastcall Ctor_vt00d9f160_00bd3e30(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00bd3e80_00d9f160;
  LH_Array_ZeroHeader(param_1 + 1);
  return param_1;
}


//// FUNCTION Dtor_00bd3e50 @ 00bd3e50 ////

void __fastcall Dtor_00bd3e50(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00bd3e80_00d9f160;
  LH_Array_FreeBuffer_00bd38e0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bd3e60 @ 00bd3e60 ////

void __fastcall FUN_00bd3e60(void *param_1,undefined4 param_2)

{
  undefined1 local_8 [8];
  
  FUN_00be63a0(local_8,param_2);
  FUN_00bd3940((int)local_8,param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bd3e80 @ 00bd3e80 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3e80(void *this,byte param_1)

{
  Dtor_00bd3e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bd3ea0 @ 00bd3ea0 ////

void __fastcall Dtor_00bd3ea0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00bc12c0_00d9e4b0;
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION LH_Map_GetObject_00bd3ed0 @ 00bd3ed0 ////

int __thiscall LH_Map_GetObject_00bd3ed0(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd3830(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bd3f20 @ 00bd3f20 ////

int __thiscall FUN_00bd3f20(void *this,uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 8) + -1;
  iVar3 = 0;
  local_4 = this;
  if (-1 < iVar5) {
    do {
      iVar4 = (iVar5 + iVar3) / 2;
      puVar1 = *(uint **)(*(int *)this + iVar4 * 4);
      if (puVar1 == (uint *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
        this = local_4;
      }
      uVar2 = *puVar1;
      if (*param_1 < uVar2) {
        iVar5 = iVar4 + -1;
      }
      else {
        if (*param_1 <= uVar2) {
          *param_2 = 1;
          return iVar4;
        }
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar5);
  }
  iVar3 = (iVar5 + iVar3) / 2;
  puVar1 = *(uint **)(*(int *)this + iVar3 * 4);
  if (puVar1 == (uint *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  if (*puVar1 <= *param_1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


//// FUNCTION ScalarDeletingDtor_00bd3ff0 @ 00bd3ff0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd3ff0(void *this,byte param_1)

{
  SetVtable_00d9d9ac_00bd3880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Map_GetObject_00bd4010 @ 00bd4010 ////

int __thiscall LH_Map_GetObject_00bd4010(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd3960(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION LH_Map_GetObject_00bd4040 @ 00bd4040 ////

int __thiscall LH_Map_GetObject_00bd4040(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bd39a0(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bd4070 @ 00bd4070 ////

void __thiscall FUN_00bd4070(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd39e0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Sort_Compare_00bd40b0 @ 00bd40b0 ////

uint __fastcall LH_Sort_Compare_00bd40b0(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint extraout_EAX;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_4;
  
  uVar4 = param_1[2];
  uVar5 = 1;
  uStack_4 = param_1;
  if (1 < uVar4) {
    do {
      iVar1 = *param_1;
      puVar2 = *(uint **)(iVar1 + -4 + uVar5 * 4);
      puVar3 = *(uint **)(iVar1 + uVar5 * 4);
      uVar4 = iVar1 + uVar5 * 4;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
        uVar4 = extraout_EAX;
      }
      if (*puVar3 <= *puVar2) {
        return uVar4 & 0xffffff00;
      }
      uVar4 = param_1[2];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00bd4110 @ 00bd4110 ////

void __thiscall FUN_00bd4110(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00bd4070(this,param_1[2]);
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


//// FUNCTION LH_Sort_Med3_00bd41c0 @ 00bd41c0 ////

void __fastcall LH_Sort_Med3_00bd41c0(int *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uStack_4;
  
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  uStack_4 = param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)*param_2;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar3;
  }
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  return;
}


//// FUNCTION LH_Sort_PushHeap_00bd4290 @ 00bd4290 ////

void __fastcall LH_Sort_PushHeap_00bd4290(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      puVar1 = *(uint **)(param_1 + iVar2 * 4);
      if ((puVar1 == (uint *)0x0) || (param_4 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*puVar1 < *param_4) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(uint **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(uint **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bd4320 @ 00bd4320 ////

void __fastcall FUN_00bd4320(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c05580((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION PKCAutoDelete_Get_00bd4350 @ 00bd4350 ////

int __fastcall PKCAutoDelete_Get_00bd4350(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffcab;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
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


//// FUNCTION PKCAutoDelete_Release_00bd4420 @ 00bd4420 ////

int __fastcall PKCAutoDelete_Release_00bd4420(int *param_1)

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
  
  puStack_8 = &LAB_00cffccb;
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


//// FUNCTION PKCAutoDelete_Release_00bd44f0 @ 00bd44f0 ////

int __fastcall PKCAutoDelete_Release_00bd44f0(int *param_1)

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
  
  puStack_8 = &LAB_00cffceb;
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


//// FUNCTION PKCAutoDeleteArray_Resize_00bd45c0 @ 00bd45c0 ////

void __thiscall PKCAutoDeleteArray_Resize_00bd45c0(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffd0b;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      pvVar1 = operator_new(param_1 * 4);
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar2);
        DebugBreak();
      }
      uVar4 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar4 = *(uint *)((int)this + 4);
      }
      if ((uVar4 != 0) && (uVar3 = 0, uVar4 != 0)) {
        do {
          *(undefined4 *)((int)pvVar1 + uVar3 * 4) = *(undefined4 *)(*(int *)this + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(void **)this = pvVar1;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKCAutoDeleteArray_At_00bd4710 @ 00bd4710 ////

int __thiscall PKCAutoDeleteArray_At_00bd4710(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffd2b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 4;
}


//// FUNCTION PKCAutoDeleteArray_At_00bd4820 @ 00bd4820 ////

int __thiscall PKCAutoDeleteArray_At_00bd4820(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffd4b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 8;
}


//// FUNCTION LH_SortedArray_FindObject_00bd4940 @ 00bd4940 ////

int __thiscall LH_SortedArray_FindObject_00bd4940(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00bd3f20(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bd3830(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION LH_CountGlobalProperties @ 00bd49b0 ////

undefined1 __fastcall LH_CountGlobalProperties(void *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined1 _0bd3e10 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffd68;
  local_c = ExceptionList;
  local_1c = &PTR_ScalarDeletingDtor_00bd3ff0_00d9f164;
  local_18 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00be63a0(_0bd3e10,&local_1c);
  cVar1 = LH_SerializeGlobalProperties_Thunk((int)_0bd3e10,param_1);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  *param_2 = local_18;
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00bd4a30 @ 00bd4a30 ////

undefined1 __fastcall FUN_00bd4a30(void *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffd88;
  local_c = ExceptionList;
  local_1c = &PTR_ScalarDeletingDtor_00bd3ff0_00d9f164;
  local_18 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00be63a0(local_14,&local_1c);
  cVar1 = FUN_00bd3940((int)local_14,param_1);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  *param_2 = local_18;
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00bd4ab0 @ 00bd4ab0 ////

undefined1 __fastcall FUN_00bd4ab0(void *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined **local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffda8;
  local_c = ExceptionList;
  local_1c = &PTR_ScalarDeletingDtor_00bd3ff0_00d9f164;
  local_18 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00be63a0(local_14,&local_1c);
  cVar1 = FUN_00bd38b0(local_14,param_1);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  *param_2 = local_18;
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_00bd4b30 @ 00bd4b30 ////

void __thiscall FUN_00bd4b30(void *this,undefined4 param_1)

{
  FUN_00bd4070(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bd4b50 @ 00bd4b50 ////

void __thiscall FUN_00bd4b50(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00bd3aa0(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00bd39e0(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00bd4110(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00bd4ba0 @ 00bd4ba0 ////

void __fastcall FUN_00bd4ba0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Sort_Med3_00bd41c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Sort_Med3_00bd41c0(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Sort_Med3_00bd41c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Sort_Med3_00bd41c0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Sort_Med3_00bd41c0(param_1,param_2,param_3);
  return;
}


//// FUNCTION LH_Sort_AdjustHeap_00bd4c60 @ 00bd4c60 ////

void __fastcall LH_Sort_AdjustHeap_00bd4c60(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 local_9;
  uint *local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    puVar1 = *(uint **)(param_1 + iVar2 * 4);
    local_8 = *(uint **)(param_1 + -4 + iVar2 * 4);
    if ((puVar1 == (uint *)0x0) || (local_8 == (uint *)0x0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar1 < *local_8) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Sort_PushHeap_00bd4290(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION LH_Archive_SerializeU32Array @ 00bd4d30 ////

uint __thiscall LH_Archive_SerializeU32Array(void *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    uVar2 = LH_Archive_TransferU32(param_1);
    if ((char)uVar2 == '\0') {
LAB_00bd4d9f:
      return uVar2 & 0xffffff00;
    }
    PKCAutoDeleteArray_Resize_00bd45c0(this,param_1);
  }
  else {
    uVar2 = LH_Archive_TransferU32(param_1);
    if ((char)uVar2 == '\0') goto LAB_00bd4d9f;
  }
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      PKCAutoDeleteArray_At_00bd4710(this,uVar3);
      uVar2 = LH_Archive_TransferU32(param_1);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      uVar2 = *(uint *)((int)this + 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION Ctor_vt00d9f1ec_00bd4de0 @ 00bd4de0 ////

undefined4 * __thiscall Ctor_vt00d9f1ec_00bd4de0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  undefined1 local_54 [4];
  void *local_50 [11];
  void **ppvStack_24;
  undefined4 *puStack_20;
  undefined **ppuStack_1c;
  undefined1 *puStack_18;
  undefined4 **ppuStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffdd0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50[0] = this;
  Ctor_vt00d9e4b0_00bc12f0(this,0);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bd4f00_00d9f1ec;
  local_4 = 0;
  cVar1 = (**(code **)*param_1)(local_54);
  if ((cVar1 == '\0') || (unaff_EBX == 0)) {
    ExceptionList = pvStack_10;
    return this;
  }
  this_00 = (undefined4 *)((int)this + 8);
  FUN_00bbc1d0(this_00,unaff_EBX);
  FUN_00bbbfb0(local_50);
  ppvStack_24 = local_50;
  ppuStack_14 = &ppvStack_24;
  puStack_20 = param_1;
  ppuStack_1c = &PTR_FUN_00d9db74;
  puStack_18 = &LAB_00bbcb40;
  puStack_8._0_1_ = 1;
  if (*(int *)((int)this + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00bbc590(this_00,0);
  }
  uVar3 = FUN_00bbd200(local_50,0,unaff_EBX,iVar2);
  if (((char)uVar3 == '\0') && (*(int *)((int)this + 0xc) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*this_00);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  ppuStack_1c = &PTR_LAB_00d9da84;
  FUN_00bbb7a0(local_50);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bd4f00 @ 00bd4f00 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd4f00(void *this,byte param_1)

{
  Dtor_00bd3ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd4f20 @ 00bd4f20 ////

void __thiscall FUN_00bd4f20(void *this,undefined4 param_1)

{
  FUN_00bd4b30((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00bd4f30 @ 00bd4f30 ////

void __thiscall FUN_00bd4f30(void *this,undefined4 *param_1)

{
  FUN_00bd4b50((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bd4f40 @ 00bd4f40 ////

void __fastcall
LH_Sort_UnguardedPartition_00bd4f40
          (undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bd4ba0(param_2,piVar7,param_3 + -1);
  piVar6 = piVar7 + 1;
  local_10 = piVar6;
  if (param_2 < piVar7) {
    while( true ) {
      puVar2 = (uint *)piVar7[-1];
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)piVar7[-1];
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) || (piVar7 = piVar7 + -1, piVar7 <= local_8)) break;
    }
  }
  piVar5 = piVar6;
  piVar1 = local_10;
  local_c = piVar7;
  if (piVar6 < param_3) {
    while( true ) {
      puVar2 = (uint *)*piVar6;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = piVar6;
      piVar1 = piVar6;
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)*piVar6;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) ||
         (piVar6 = piVar6 + 1, piVar5 = piVar6, piVar1 = piVar6, param_3 <= piVar6)) break;
    }
  }
joined_r0x00bd5049:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar5) {
LAB_00bd50c2:
      if (local_8 < local_c) {
        do {
          puVar2 = (uint *)local_c[-1];
          puVar3 = (uint *)*piVar7;
          if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*puVar3 <= *puVar2) {
            puVar2 = (uint *)*piVar7;
            puVar3 = (uint *)local_c[-1];
            if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar6 = local_10;
            if (*puVar2 < *puVar3) break;
            iVar4 = piVar7[-1];
            piVar7 = piVar7 + -1;
            *piVar7 = local_c[-1];
            local_c[-1] = iVar4;
          }
          local_c = local_c + -1;
          piVar6 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar5 == param_3) {
          *local_4 = piVar7;
          local_4[1] = piVar6;
          return;
        }
        if (piVar6 != piVar5) {
          iVar4 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar4;
        }
        iVar4 = *piVar7;
        piVar6 = piVar6 + 1;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + 1;
        piVar1 = piVar6;
        piVar7 = piVar7 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar7 = piVar7 + -1;
          if (local_c != piVar7) {
            iVar4 = *local_c;
            *local_c = *piVar7;
            *piVar7 = iVar4;
          }
          piVar1 = piVar6 + -1;
          iVar4 = *piVar7;
          piVar6 = piVar6 + -1;
          *piVar7 = *piVar1;
          *piVar6 = iVar4;
          piVar1 = piVar6;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00bd5049;
    }
    puVar2 = (uint *)*piVar7;
    puVar3 = (uint *)*piVar5;
    if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar3 <= *puVar2) {
      puVar2 = (uint *)*piVar5;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar6 = local_10;
      if (*puVar2 < *puVar3) goto LAB_00bd50c2;
      iVar4 = *local_10;
      *local_10 = *piVar5;
      *piVar5 = iVar4;
      local_10 = local_10 + 1;
    }
    piVar6 = local_10;
    piVar5 = piVar5 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bd51f0 @ 00bd51f0 ////

void __fastcall LH_Sort_InsertionSort_00bd51f0(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      puVar1 = (uint *)*piVar3;
      puVar2 = (uint *)*param_1;
      if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*puVar1 < *puVar2) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00bd3b30(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          puVar1 = (uint *)*piVar3;
          puVar2 = (uint *)piVar4[-1];
          local_c = piVar4;
          if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*puVar1 < *puVar2);
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00bd3b30(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00bd52f0 @ 00bd52f0 ////

void __fastcall FUN_00bd52f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Sort_AdjustHeap_00bd4c60(param_1,iVar3,iVar2,*(uint **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bd5370 @ 00bd5370 ////

int __fastcall FUN_00bd5370(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *local_40;
  undefined1 local_3c [8];
  undefined **local_34 [2];
  void *local_2c;
  int local_28;
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffe03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f1ec_00bd4de0(local_34,param_1);
  local_4 = 0;
  if (local_28 == 0) {
    local_4 = 0xffffffff;
    local_34[0] = &PTR_ScalarDeletingDtor_00bc12c0_00d9e4b0;
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    PKDataReadCAccess_Dtor(local_34);
    ExceptionList = local_c;
    return 0;
  }
  Ctor_vt00d9f52c_00bd9d00(local_24,(int *)local_34);
  local_4._0_1_ = 1;
  LH_Archive_InitForLoading(local_3c,local_24);
  local_40 = operator_new(0x48);
  local_4._0_1_ = 2;
  if (local_40 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00c05360(local_40);
  }
  local_4._0_1_ = 3;
  local_40 = puVar2;
  pvVar3 = (void *)PKCAutoDelete_Get_00bd4350((int *)&local_40);
  cVar1 = FUN_00bd38b0(local_3c,pvVar3);
  if (cVar1 == '\0') {
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00c05580((int)puVar2);
                    /* WARNING: Subroutine does not return */
      _free(puVar2);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00bd9e50(local_24);
    local_4 = 0xffffffff;
    local_34[0] = &PTR_ScalarDeletingDtor_00bc12c0_00d9e4b0;
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    PKDataReadCAccess_Dtor(local_34);
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = PKCAutoDelete_Release_00bd4420((int *)&local_40);
  puVar2 = local_40;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_40 != (undefined4 *)0x0) {
    FUN_00c05580((int)local_40);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00bd9e50(local_24);
  local_4 = 0xffffffff;
  local_34[0] = &PTR_ScalarDeletingDtor_00bc12c0_00d9e4b0;
  if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  PKDataReadCAccess_Dtor(local_34);
  ExceptionList = local_c;
  return iVar4;
}


//// FUNCTION FUN_00bd5530 @ 00bd5530 ////

void __fastcall FUN_00bd5530(uint param_1,void *param_2)

{
  LH_Archive_SerializeU32Array(param_2,param_1);
  return;
}


//// FUNCTION LH_Container_AddObject_00bd5540 @ 00bd5540 ////

void __thiscall LH_Container_AddObject_00bd5540(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00bd4f20(this,iVar1);
  return;
}


//// FUNCTION FUN_00bd55d0 @ 00bd55d0 ////

void __fastcall FUN_00bd55d0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    puVar1 = *(uint **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Sort_AdjustHeap_00bd4c60((int)param_1,0,iVar2 + -4 >> 2,puVar1);
  }
  return;
}


//// FUNCTION FUN_00bd5620 @ 00bd5620 ////

void __fastcall FUN_00bd5620(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bd56b3:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bd51f0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bd52f0((int)param_1,(int)param_2);
        }
        FUN_00bd55d0(param_1,(int)param_2);
        return;
      }
      goto LAB_00bd56b3;
    }
    LH_Sort_UnguardedPartition_00bd4f40(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bd5620(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bd5620(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bd5730 @ 00bd5730 ////

void __fastcall FUN_00bd5730(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bd5620(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION LH_Array_SortAndVerifyUnique_00bd5760 @ 00bd5760 ////

void __fastcall LH_Array_SortAndVerifyUnique_00bd5760(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00bd5730(param_1);
  uVar1 = LH_Sort_Compare_00bd40b0(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_CopySorted_00bd5790 @ 00bd5790 ////

void __thiscall LH_Array_CopySorted_00bd5790(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3950((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00bd4f30(param_1,this);
  LH_Array_SortAndVerifyUnique_00bd5760(this);
  return;
}


//// FUNCTION FUN_00bd57f0 @ 00bd57f0 ////

uint __thiscall FUN_00bd57f0(void *this,int *param_1)

{
  uint in_EAX;
  undefined1 local_14 [2];
  short sStack_12;
  
  if (*(short *)((int)this + 0x4c) == 1) {
    in_EAX = (**(code **)(*param_1 + 4))(local_14,*(undefined4 *)((int)this + 0x44),0x12);
    if ((char)in_EAX != '\0') {
      return (uint)(sStack_12 == 0x10);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00bd58a0 @ 00bd58a0 ////

undefined4 * __fastcall FUN_00bd58a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffe5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd6470(param_1);
  local_4 = 0;
  FUN_00bd6470(param_1 + 3);
  FUN_00bd65e0(param_1 + 6);
  FUN_00bd65e0(param_1 + 9);
  local_4._0_1_ = 3;
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x17);
  local_4._0_1_ = 4;
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x19);
  local_4._0_1_ = 5;
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x1b);
  local_4 = CONCAT31(local_4._1_3_,6);
  Ctor_vt00d9feb8_00be1e00(param_1 + 0x1d);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bd5960 @ 00bd5960 ////

undefined4 __thiscall FUN_00bd5960(void *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00bd6f30((void *)((int)this + 0x24),param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  uVar2 = LH_Array_GetAt_00bd6750((void *)((int)this + 0x24),uVar1);
  return uVar2;
}


//// FUNCTION FUN_00bd5990 @ 00bd5990 ////

void __fastcall FUN_00bd5990(void *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  LH_Array_SetFilledSize_00bd6440(param_1,0);
  pvVar1 = (void *)((int)param_1 + 0xc);
  uVar5 = 0;
  iVar2 = GetField_8_00bd6430((int)pvVar1);
  if (iVar2 != 0) {
    do {
      puVar3 = (undefined4 *)LH_Array_GetAt_00bd66d0(pvVar1,uVar5);
      if (puVar3 != (undefined4 *)0x0) {
        PKStringsCHeapString_Dtor(puVar3);
                    /* WARNING: Subroutine does not return */
        _free(puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar4 = GetField_8_00bd6430((int)pvVar1);
    } while (uVar5 < uVar4);
  }
  LH_Array_SetFilledSize_00bd6440(pvVar1,0);
  LH_Array_SetFilledSize_00bd65b0((void *)((int)param_1 + 0x18),0);
  pvVar1 = (void *)((int)param_1 + 0x24);
  uVar5 = 0;
  iVar2 = GetField_8_00bd65a0((int)pvVar1);
  if (iVar2 != 0) {
    do {
      puVar3 = (undefined4 *)LH_Array_GetAt_00bd6750(pvVar1,uVar5);
      if (puVar3 != (undefined4 *)0x0) {
        PKStringsCHeapString_Dtor(puVar3);
                    /* WARNING: Subroutine does not return */
        _free(puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar4 = GetField_8_00bd65a0((int)pvVar1);
    } while (uVar5 < uVar4);
  }
  LH_Array_SetFilledSize_00bd65b0(pvVar1,0);
  return;
}


//// FUNCTION FUN_00bd5a40 @ 00bd5a40 ////

void __fastcall FUN_00bd5a40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cffeb9;
  local_c = ExceptionList;
  local_4 = 7;
  ExceptionList = &local_c;
  FUN_00bd5990(param_1);
  local_4._0_1_ = 6;
  PKStringsCHeapString_Dtor(param_1 + 0x1d);
  local_4._0_1_ = 5;
  PKStringsCHeapString_Dtor(param_1 + 0x1b);
  local_4._0_1_ = 4;
  PKStringsCHeapString_Dtor(param_1 + 0x19);
  local_4._0_1_ = 3;
  PKStringsCHeapString_Dtor(param_1 + 0x17);
  local_4._0_1_ = 2;
  LH_Array_FreeBuffer_00bd65f0(param_1 + 9);
  local_4._0_1_ = 1;
  LH_Array_FreeBuffer_00bd65f0(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  LH_Array_FreeBuffer_00bd6480(param_1 + 3);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd6480(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bd5af0 @ 00bd5af0 ////

undefined4 __thiscall FUN_00bd5af0(void *this,void *param_1)

{
  void *this_00;
  void *this_01;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  this_01 = param_1;
  LH_LogErrorMessage(param_1,"<?xml version=\"1.0\"?>\n");
  LH_LogErrorMessage(this_01,"<WavMetaData");
  LH_LogErrorMessage(this_01," NumChannels=\"");
  FUN_00bbe970((uint)*(ushort *)((int)this + 0x4e));
  LH_LogErrorMessage(this_01,"\"");
  LH_LogErrorMessage(this_01," SampleRate=\"");
  LH_PrintResourceID(this_01,*(undefined4 *)((int)this + 0x50));
  LH_LogErrorMessage(this_01,"\"");
  LH_LogErrorMessage(this_01," Length=\"");
  LH_PrintResourceID(this_01,*(undefined4 *)((int)this + 0x30));
  LH_LogErrorMessage(this_01,"\"");
  LH_LogErrorMessage(this_01,">\n");
  iVar1 = PKString_GetLength((int *)((int)this + 0x5c));
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Comments>");
    FUN_00bbf750(this_01,(int *)((int)this + 0x5c));
    LH_LogErrorMessage(this_01,"</Comments>\n");
  }
  iVar1 = PKString_GetLength((int *)((int)this + 0x74));
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Engineer>");
    FUN_00bbf750(this_01,(int *)((int)this + 0x74));
    LH_LogErrorMessage(this_01,"</Engineer>\n");
  }
  iVar1 = PKString_GetLength((int *)((int)this + 0x6c));
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Subject>");
    FUN_00bbf750(this_01,(int *)((int)this + 0x6c));
    LH_LogErrorMessage(this_01,"</Subject>\n");
  }
  iVar1 = PKString_GetLength((int *)((int)this + 100));
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Title>");
    FUN_00bbf750(this_01,(int *)((int)this + 100));
    LH_LogErrorMessage(this_01,"</Title>\n");
  }
  iVar1 = GetField_8_00bd6430((int)this);
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Markers>\n");
    uVar5 = 0;
    iVar1 = GetField_8_00bd6430((int)this);
    if (iVar1 != 0) {
      do {
        piVar2 = (int *)LH_Array_GetAt_00bd66d0(this,uVar5);
        if (piVar2 == (int *)0x0) {
          LH_Assert(&param_1,"marker != NULL\n");
          DebugBreak();
        }
        LH_LogErrorMessage(this_01,"\t\t<Marker offset=\"");
        LH_PrintResourceID(this_01,piVar2[2]);
        LH_LogErrorMessage(this_01,"\" name=\"");
        FUN_00bbf750(this_01,piVar2);
        LH_LogErrorMessage(this_01,"\"/>\n");
        uVar5 = uVar5 + 1;
        uVar3 = GetField_8_00bd6430((int)this);
      } while (uVar5 < uVar3);
    }
    LH_LogErrorMessage(this_01,"\t</Markers>\n");
  }
  this_00 = (void *)((int)this + 0x18);
  iVar1 = GetField_8_00bd65a0((int)this_00);
  if (iVar1 != 0) {
    LH_LogErrorMessage(this_01,"\t<Regions>\n");
    uVar5 = 0;
    iVar1 = GetField_8_00bd65a0((int)this_00);
    if (iVar1 != 0) {
      do {
        piVar2 = (int *)LH_Array_GetAt_00bd6750(this_00,uVar5);
        if (piVar2 == (int *)0x0) {
          LH_Assert(&param_1,"region != NULL\n");
          DebugBreak();
        }
        LH_LogErrorMessage(this_01,"\t\t<Region offset=\"");
        LH_PrintResourceID(this_01,piVar2[2]);
        LH_LogErrorMessage(this_01,"\" size=\"");
        LH_PrintResourceID(this_01,piVar2[3]);
        LH_LogErrorMessage(this_01,"\" name=\"");
        FUN_00bbf750(this_01,piVar2);
        LH_LogErrorMessage(this_01,"\"/>\n");
        uVar5 = uVar5 + 1;
        uVar3 = GetField_8_00bd65a0((int)this_00);
      } while (uVar5 < uVar3);
    }
    LH_LogErrorMessage(this_01,"\t</Regions>\n");
  }
  uVar4 = LH_LogErrorMessage(this_01,"</WavMetaData>\n");
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_00bd5db0 @ 00bd5db0 ////

uint __thiscall FUN_00bd5db0(void *this,int *param_1)

{
  undefined4 *this_00;
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40 [5];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cffee1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd5990(this);
  FUN_00c0be20(local_64);
  local_4 = 0;
  uVar2 = FUN_00c0bec0(local_64,param_1,0x1f);
  if ((char)uVar2 != '\0') {
    puVar4 = (undefined4 *)FUN_00c0b3b0(local_64);
    if (puVar4 == (undefined4 *)0x0) {
      LH_Assert(&param_1,"waveFormat != NULL\n");
      DebugBreak();
    }
    *(undefined4 *)((int)this + 0x4c) = *puVar4;
    *(undefined4 *)((int)this + 0x50) = puVar4[1];
    *(undefined4 *)((int)this + 0x54) = puVar4[2];
    *(undefined2 *)((int)this + 0x58) = *(undefined2 *)(puVar4 + 3);
    *(undefined4 *)((int)this + 0x38) = local_58;
    *(undefined4 *)((int)this + 0x34) = local_5c;
    *(undefined4 *)((int)this + 0x3c) = local_4c;
    *(undefined4 *)((int)this + 0x44) = local_54;
    *(undefined4 *)((int)this + 0x48) = local_50;
    *(undefined4 *)((int)this + 0x40) = local_48;
    FUN_00be2010((void *)((int)this + 0x5c),(int)local_2c);
    FUN_00be2010((void *)((int)this + 100),(int)local_1c);
    FUN_00be2010((void *)((int)this + 0x6c),(int)local_14);
    FUN_00be2010((void *)((int)this + 0x74),(int)local_24);
    lVar1 = (ulonglong)*(uint *)((int)this + 0x50) * (ulonglong)*(uint *)((int)this + 0x38);
    uVar8 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),*(uint *)((int)this + 0x54),0);
    *(int *)((int)this + 0x30) = (int)uVar8;
    uVar3 = 0;
    uVar7 = 0;
    for (iVar5 = RedBlackTree_GetMinObject(local_40); iVar5 != 0;
        iVar5 = RedBlackTree_GetSuccessor(local_40,&local_44,iVar5)) {
      if (*(int *)(iVar5 + 8) == 0) {
        uVar3 = uVar3 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
      }
    }
    puVar4 = (undefined4 *)((int)this + 0xc);
    LH_Array_Reserve_00bd6370(puVar4,uVar3);
    LH_Array_Reserve_00bd6370(this,uVar3);
    LH_Array_Reserve_00bd64e0((void *)((int)this + 0x24),uVar7);
    this_00 = (undefined4 *)((int)this + 0x18);
    LH_Array_Reserve_00bd64e0(this_00,uVar7);
    for (iVar5 = RedBlackTree_GetMinObject(local_40); iVar5 != 0;
        iVar5 = RedBlackTree_GetSuccessor(local_40,&local_44,iVar5)) {
      if (*(int *)(iVar5 + 8) == 0) {
        puVar6 = operator_new(0xc);
        local_4._0_1_ = 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          Ctor_vt00d9feb8_00be1e00(puVar6);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00be2010(puVar6,iVar5 + 0xc);
        puVar6[2] = *(undefined4 *)(iVar5 + 4);
        FUN_00bd6df0(puVar4,puVar6);
        FUN_00bd6df0(this,puVar6);
      }
      else {
        puVar6 = operator_new(0x10);
        local_4._0_1_ = 1;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          Ctor_vt00d9feb8_00be1e00(puVar6);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00be2010(puVar6,iVar5 + 0xc);
        puVar6[2] = *(undefined4 *)(iVar5 + 4);
        puVar6[3] = *(undefined4 *)(iVar5 + 8);
        FUN_00bd6e20((void *)((int)this + 0x24),puVar6);
        FUN_00bd6e20(this_00,puVar6);
      }
    }
    FUN_00bd99d0(puVar4);
    FUN_00bd9a00((undefined4 *)((int)this + 0x24));
    FUN_00bd9a30(this);
    FUN_00bd9a60(this_00);
    local_4 = 0xffffffff;
    uVar2 = Dtor_00c0bd10(local_64);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar3 = Dtor_00c0bd10(local_64);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bd6300 @ 00bd6300 ////

undefined4 * __fastcall FUN_00bd6300(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bd6320 @ 00bd6320 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd6320(void *this,byte param_1)

{
  PKStringsCHeapString_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_Reserve_00bd6370 @ 00bd6370 ////

void __thiscall LH_Array_Reserve_00bd6370(void *this,uint param_1)

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


//// FUNCTION GetField_8_00bd6430 @ 00bd6430 ////

undefined4 __fastcall GetField_8_00bd6430(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bd6440 @ 00bd6440 ////

void __thiscall LH_Array_SetFilledSize_00bd6440(void *this,uint param_1)

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


//// FUNCTION FUN_00bd6470 @ 00bd6470 ////

void __fastcall FUN_00bd6470(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd6480 @ 00bd6480 ////

void __fastcall LH_Array_FreeBuffer_00bd6480(undefined4 *param_1)

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


//// FUNCTION LH_Array_Reserve_00bd64e0 @ 00bd64e0 ////

void __thiscall LH_Array_Reserve_00bd64e0(void *this,uint param_1)

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


//// FUNCTION GetField_8_00bd65a0 @ 00bd65a0 ////

undefined4 __fastcall GetField_8_00bd65a0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_SetFilledSize_00bd65b0 @ 00bd65b0 ////

void __thiscall LH_Array_SetFilledSize_00bd65b0(void *this,uint param_1)

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


//// FUNCTION FUN_00bd65e0 @ 00bd65e0 ////

void __fastcall FUN_00bd65e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00bd65f0 @ 00bd65f0 ////

void __fastcall LH_Array_FreeBuffer_00bd65f0(undefined4 *param_1)

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


//// FUNCTION FUN_00bd6650 @ 00bd6650 ////

uint __fastcall FUN_00bd6650(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_00bbf3a0(param_2);
  iVar2 = FUN_00bbf680(param_1,pbVar1);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)FUN_00bbf3a0(param_1);
  iVar2 = FUN_00bbf680(param_2,pbVar1);
  return (uint)(iVar2 < 0);
}


//// FUNCTION FUN_00bd6690 @ 00bd6690 ////

void __thiscall FUN_00bd6690(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd6370(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Array_GetAt_00bd66d0 @ 00bd66d0 ////

undefined4 __thiscall LH_Array_GetAt_00bd66d0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION FUN_00bd6710 @ 00bd6710 ////

void __thiscall FUN_00bd6710(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00bd64e0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Array_GetAt_00bd6750 @ 00bd6750 ////

undefined4 __thiscall LH_Array_GetAt_00bd6750(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION FUN_00bd67b0 @ 00bd67b0 ////

void __fastcall FUN_00bd67b0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    PKStringsCHeapString_Dtor(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION LH_Sort_Compare_00bd67e0 @ 00bd67e0 ////

undefined4 LH_Sort_Compare_00bd67e0(int *param_1,int *param_2)

{
  int *this;
  int *this_00;
  byte *pbVar1;
  int iVar2;
  
  this_00 = param_2;
  this = param_1;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this_00);
  iVar2 = FUN_00bbf680(this,pbVar1);
  if (iVar2 < 0) {
    return 0xffffff01;
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this);
  FUN_00bbf680(this_00,pbVar1);
  return 0;
}


//// FUNCTION LH_Sort_Compare_00bd6850 @ 00bd6850 ////

undefined4 LH_Sort_Compare_00bd6850(int *param_1,int *param_2)

{
  int *this;
  int *this_00;
  byte *pbVar1;
  int iVar2;
  
  this_00 = param_2;
  this = param_1;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this_00);
  iVar2 = FUN_00bbf680(this,pbVar1);
  if (iVar2 < 0) {
    return 0xffffff01;
  }
  pbVar1 = (byte *)FUN_00bbf3a0(this);
  FUN_00bbf680(this_00,pbVar1);
  return 0;
}


//// FUNCTION LH_Sort_Compare_00bd68c0 @ 00bd68c0 ////

undefined4 LH_Sort_Compare_00bd68c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    return 0xffffff01;
  }
  return 0;
}


//// FUNCTION FUN_00bd6a40 @ 00bd6a40 ////

void __fastcall FUN_00bd6a40(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    uVar1 = LH_Sort_Compare_00bd67e0(*(int **)(param_1 + iVar2 * 4),param_4);
    if ((char)uVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bd6ab0 @ 00bd6ab0 ////

void __fastcall FUN_00bd6ab0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00bd6b50 @ 00bd6b50 ////

void __fastcall FUN_00bd6b50(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    uVar1 = LH_Sort_Compare_00bd6850(*(int **)(param_1 + iVar2 * 4),param_4);
    if ((char)uVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bd6bc0 @ 00bd6bc0 ////

void __fastcall FUN_00bd6bc0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION LH_Array_PushHeap_00bd6c60 @ 00bd6c60 ////

void __fastcall LH_Array_PushHeap_00bd6c60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 == 0) || (param_4 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*(uint *)(iVar1 + 8) < *(uint *)(param_4 + 8)) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION LH_Array_PushHeap_00bd6cf0 @ 00bd6cf0 ////

void __fastcall LH_Array_PushHeap_00bd6cf0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 == 0) || (param_4 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*(uint *)(iVar1 + 8) < *(uint *)(param_4 + 8)) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00bd6d80 @ 00bd6d80 ////

undefined4 * __fastcall FUN_00bd6d80(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bd6d90 @ 00bd6d90 ////

undefined4 * __thiscall ScalarDeletingDtor_00bd6d90(void *this,byte param_1)

{
  PKStringsCHeapString_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bd6df0 @ 00bd6df0 ////

void __thiscall FUN_00bd6df0(void *this,undefined4 param_1)

{
  FUN_00bd6690(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bd6e20 @ 00bd6e20 ////

void __thiscall FUN_00bd6e20(void *this,undefined4 param_1)

{
  FUN_00bd6710(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00bd6e40 @ 00bd6e40 ////

int __thiscall FUN_00bd6e40(void *this,int *param_1,undefined1 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar7 = *(int *)((int)this + 8) + -1;
  iVar5 = 0;
  local_4 = this;
  if (-1 < iVar7) {
    do {
      iVar6 = (iVar7 + iVar5) / 2;
      piVar1 = *(int **)(*local_4 + iVar6 * 4);
      if (piVar1 == (int *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      pbVar2 = (byte *)FUN_00bbf3a0(piVar1);
      iVar3 = FUN_00bbf680(param_1,pbVar2);
      if (iVar3 < 0) {
        iVar7 = iVar6 + -1;
      }
      else {
        pbVar2 = (byte *)FUN_00bbf3a0(param_1);
        iVar5 = FUN_00bbf680(piVar1,pbVar2);
        if (-1 < iVar5) {
          *param_2 = 1;
          return iVar6;
        }
        iVar5 = iVar6 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  iVar5 = (iVar7 + iVar5) / 2;
  piVar1 = *(int **)(*local_4 + iVar5 * 4);
  if (piVar1 == (int *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  uVar4 = FUN_00bd6650(param_1,piVar1);
  if (-1 < (int)uVar4) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


//// FUNCTION FUN_00bd6f30 @ 00bd6f30 ////

int __thiscall FUN_00bd6f30(void *this,int *param_1,undefined1 *param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar7 = *(int *)((int)this + 8) + -1;
  iVar5 = 0;
  local_4 = this;
  if (-1 < iVar7) {
    do {
      iVar6 = (iVar7 + iVar5) / 2;
      piVar1 = *(int **)(*local_4 + iVar6 * 4);
      if (piVar1 == (int *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      pbVar2 = (byte *)FUN_00bbf3a0(piVar1);
      iVar3 = FUN_00bbf680(param_1,pbVar2);
      if (iVar3 < 0) {
        iVar7 = iVar6 + -1;
      }
      else {
        pbVar2 = (byte *)FUN_00bbf3a0(param_1);
        iVar5 = FUN_00bbf680(piVar1,pbVar2);
        if (-1 < iVar5) {
          *param_2 = 1;
          return iVar6;
        }
        iVar5 = iVar6 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  iVar5 = (iVar7 + iVar5) / 2;
  piVar1 = *(int **)(*local_4 + iVar5 * 4);
  if (piVar1 == (int *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  uVar4 = FUN_00bd6650(param_1,piVar1);
  if (-1 < (int)uVar4) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


//// FUNCTION FUN_00bd7020 @ 00bd7020 ////

void __fastcall FUN_00bd7020(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    PKStringsCHeapString_Dtor(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd7390 @ 00bd7390 ////

void __fastcall FUN_00bd7390(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    PKStringsCHeapString_Dtor(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd73e0 @ 00bd73e0 ////

void __fastcall FUN_00bd73e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = LH_Sort_Compare_00bd67e0((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00bd67e0((int *)*param_3,(int *)*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00bd67e0((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_00bd7450 @ 00bd7450 ////

void __fastcall FUN_00bd7450(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  while( true ) {
    iVar2 = iVar3 * 2 + 2;
    if (param_3 <= iVar2) break;
    uVar1 = LH_Sort_Compare_00bd67e0
                      (*(int **)(param_1 + iVar2 * 4),*(int **)(param_1 + -4 + iVar2 * 4));
    if ((char)uVar1 != '\0') {
      iVar2 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = param_3 + -1;
  }
  FUN_00bd6a40(param_1,iVar3,param_2,param_4);
  return;
}


//// FUNCTION FUN_00bd74f0 @ 00bd74f0 ////

void __fastcall FUN_00bd74f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = LH_Sort_Compare_00bd6850((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00bd6850((int *)*param_3,(int *)*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = LH_Sort_Compare_00bd6850((int *)*param_2,(int *)*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_00bd7560 @ 00bd7560 ////

void __fastcall FUN_00bd7560(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  while( true ) {
    iVar2 = iVar3 * 2 + 2;
    if (param_3 <= iVar2) break;
    uVar1 = LH_Sort_Compare_00bd6850
                      (*(int **)(param_1 + iVar2 * 4),*(int **)(param_1 + -4 + iVar2 * 4));
    if ((char)uVar1 != '\0') {
      iVar2 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar3 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar3 = param_3 + -1;
  }
  FUN_00bd6b50(param_1,iVar3,param_2,param_4);
  return;
}


//// FUNCTION LH_Array_MedianOfThree_00bd7600 @ 00bd7600 ////

void __fastcall LH_Array_MedianOfThree_00bd7600(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uStack_4 = param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  iVar2 = *param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION LH_Array_AdjustHeap_00bd76b0 @ 00bd76b0 ////

void __fastcall LH_Array_AdjustHeap_00bd76b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    local_8 = *(int *)(param_1 + -4 + iVar2 * 4);
    if ((iVar1 == 0) || (local_8 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar1 + 8) < *(uint *)(local_8 + 8)) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Array_PushHeap_00bd6c60(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION LH_Array_MedianOfThree_00bd7750 @ 00bd7750 ////

void __fastcall LH_Array_MedianOfThree_00bd7750(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uStack_4 = param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  iVar2 = *param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION LH_Array_AdjustHeap_00bd7800 @ 00bd7800 ////

void __fastcall LH_Array_AdjustHeap_00bd7800(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    local_8 = *(int *)(param_1 + -4 + iVar2 * 4);
    if ((iVar1 == 0) || (local_8 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar1 + 8) < *(uint *)(local_8 + 8)) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Array_PushHeap_00bd6cf0(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00bd7b30 @ 00bd7b30 ////

void __fastcall FUN_00bd7b30(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    PKStringsCHeapString_Dtor(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bd7b60 @ 00bd7b60 ////

void __fastcall FUN_00bd7b60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bd73e0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bd73e0(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bd73e0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bd73e0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bd73e0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd7c00 @ 00bd7c00 ////

void __fastcall FUN_00bd7c00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bd7450(param_1,iVar3,iVar2,*(int **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bd7c60 @ 00bd7c60 ////

void __fastcall FUN_00bd7c60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00bd74f0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00bd74f0(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00bd74f0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00bd74f0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00bd74f0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd7d00 @ 00bd7d00 ////

void __fastcall FUN_00bd7d00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00bd7560(param_1,iVar3,iVar2,*(int **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bd7d60 @ 00bd7d60 ////

void __fastcall FUN_00bd7d60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Array_MedianOfThree_00bd7600(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Array_MedianOfThree_00bd7600(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Array_MedianOfThree_00bd7600(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Array_MedianOfThree_00bd7600(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Array_MedianOfThree_00bd7600(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd7e00 @ 00bd7e00 ////

void __fastcall FUN_00bd7e00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Array_AdjustHeap_00bd76b0(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00bd7e40 @ 00bd7e40 ////

void __fastcall FUN_00bd7e40(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Array_MedianOfThree_00bd7750(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Array_MedianOfThree_00bd7750(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Array_MedianOfThree_00bd7750(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Array_MedianOfThree_00bd7750(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Array_MedianOfThree_00bd7750(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd7ee0 @ 00bd7ee0 ////

void __fastcall FUN_00bd7ee0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Array_AdjustHeap_00bd7800(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bd81c0 @ 00bd81c0 ////

void __fastcall
LH_Sort_UnguardedPartition_00bd81c0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  uint *local_4;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_c = param_2;
  local_4 = param_1;
  FUN_00bd7b60(param_2,piVar8,param_3 + -1);
  piVar7 = piVar8 + 1;
  local_14 = piVar7;
  piVar4 = piVar7;
  if (param_2 < piVar8) {
    do {
      piVar1 = (int *)piVar8[-1];
      piVar9 = (int *)*piVar8;
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar1 = (int *)*piVar8;
      piVar9 = (int *)piVar8[-1];
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar8 = piVar8 + -1;
      piVar4 = local_14;
    } while (local_c < piVar8);
  }
  do {
    piVar1 = piVar7;
    local_10 = piVar8;
    piVar9 = piVar8;
    if (param_3 <= piVar7) break;
    piVar2 = (int *)*piVar7;
    piVar3 = (int *)*piVar8;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    piVar4 = piVar7;
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar2 = (int *)*piVar8;
    piVar3 = (int *)*piVar7;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar7 = piVar7 + 1;
    piVar4 = piVar7;
  } while( true );
joined_r0x00bd8347:
  local_14 = piVar4;
  if (param_3 <= piVar1) {
LAB_00bd840e:
    bVar10 = piVar8 == local_c;
    if (local_c < piVar8) {
      do {
        piVar7 = (int *)piVar8[-1];
        local_8 = (int *)*piVar9;
        if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
          LH_Assert(&local_16,"( C1 != NULL ) && ( C2 != NULL )\n");
          DebugBreak();
        }
        pbVar5 = (byte *)FUN_00bbf3a0(local_8);
        iVar6 = FUN_00bbf680(piVar7,pbVar5);
        if (-1 < iVar6) {
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          piVar7 = (int *)*piVar9;
          local_8 = (int *)piVar8[-1];
          if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
            LH_Assert(&local_15,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar5 = (byte *)FUN_00bbf3a0(local_8);
          iVar6 = FUN_00bbf680(piVar7,pbVar5);
          if (iVar6 < 0) break;
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          iVar6 = piVar9[-1];
          piVar9 = piVar9 + -1;
          *piVar9 = piVar8[-1];
          piVar8[-1] = iVar6;
        }
        piVar8 = piVar8 + -1;
        local_10 = piVar8;
      } while (local_c < piVar8);
      bVar10 = piVar8 == local_c;
      piVar7 = local_14;
    }
    if (bVar10) {
      if (piVar1 == param_3) {
        *local_4 = (uint)piVar9;
        local_4[1] = (uint)piVar7;
        return;
      }
      if (piVar7 != piVar1) {
        iVar6 = *piVar9;
        *piVar9 = *piVar7;
        *piVar7 = iVar6;
      }
      iVar6 = *piVar9;
      *piVar9 = *piVar1;
      piVar7 = piVar7 + 1;
      *piVar1 = iVar6;
      piVar1 = piVar1 + 1;
      piVar4 = piVar7;
      piVar9 = piVar9 + 1;
    }
    else {
      piVar8 = piVar8 + -1;
      local_10 = piVar8;
      if (piVar1 == param_3) {
        piVar9 = piVar9 + -1;
        if (piVar8 != piVar9) {
          iVar6 = *piVar8;
          *piVar8 = *piVar9;
          *piVar9 = iVar6;
        }
        piVar4 = piVar7 + -1;
        iVar6 = *piVar9;
        piVar7 = piVar7 + -1;
        *piVar9 = *piVar4;
        *piVar7 = iVar6;
        piVar4 = piVar7;
      }
      else {
        iVar6 = *piVar1;
        *piVar1 = *piVar8;
        *piVar8 = iVar6;
        piVar1 = piVar1 + 1;
        piVar4 = local_14;
      }
    }
    goto joined_r0x00bd8347;
  }
  piVar7 = (int *)*piVar9;
  local_8 = (int *)*piVar1;
  if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
    LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar5 = (byte *)FUN_00bbf3a0(local_8);
  iVar6 = FUN_00bbf680(piVar7,pbVar5);
  if (-1 < iVar6) {
    pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
    FUN_00bbf680(local_8,pbVar5);
    piVar4 = (int *)*piVar1;
    piVar2 = (int *)*piVar9;
    if ((piVar4 == (int *)0x0) || (piVar2 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    iVar6 = FUN_00bbf680(piVar4,pbVar5);
    piVar7 = local_14;
    piVar8 = local_10;
    if (iVar6 < 0) goto LAB_00bd840e;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar4);
    FUN_00bbf680(piVar2,pbVar5);
    iVar6 = *local_14;
    *local_14 = *piVar1;
    *piVar1 = iVar6;
    piVar8 = local_10;
    local_14 = local_14 + 1;
  }
  piVar7 = local_14;
  piVar1 = piVar1 + 1;
  piVar4 = local_14;
  goto joined_r0x00bd8347;
}


//// FUNCTION LH_Sort_InsertionSort_00bd8590 @ 00bd8590 ////

void __fastcall LH_Sort_InsertionSort_00bd8590(undefined4 *param_1,undefined4 *param_2)

{
  int *this;
  int *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      uVar2 = LH_Sort_Compare_00bd67e0((int *)*puVar7,(int *)*param_1);
      puVar1 = puVar7;
      if ((char)uVar2 == '\0') {
        do {
          puVar6 = puVar1;
          this = (int *)*puVar7;
          this_00 = (int *)puVar6[-1];
          if ((this == (int *)0x0) || (this_00 == (int *)0x0)) {
            LH_Assert(&stack0x00000004,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar3 = (byte *)FUN_00bbf3a0(this_00);
          iVar4 = FUN_00bbf680(this,pbVar3);
          puVar1 = puVar6 + -1;
        } while (iVar4 < 0);
        pbVar3 = (byte *)FUN_00bbf3a0(this);
        FUN_00bbf680(this_00,pbVar3);
        if ((puVar6 != puVar7) && (puVar7 != puVar5)) {
          FUN_00bd6ab0(puVar6,(int)puVar7,puVar5);
        }
      }
      else if ((param_1 != puVar7) && (puVar7 != puVar5)) {
        FUN_00bd6ab0(param_1,(int)puVar7,puVar5);
      }
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 != param_2);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bd86a0 @ 00bd86a0 ////

void __fastcall
LH_Sort_UnguardedPartition_00bd86a0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  uint *local_4;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_c = param_2;
  local_4 = param_1;
  FUN_00bd7c60(param_2,piVar8,param_3 + -1);
  piVar7 = piVar8 + 1;
  local_14 = piVar7;
  piVar4 = piVar7;
  if (param_2 < piVar8) {
    do {
      piVar1 = (int *)piVar8[-1];
      piVar9 = (int *)*piVar8;
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar1 = (int *)*piVar8;
      piVar9 = (int *)piVar8[-1];
      if ((piVar1 == (int *)0x0) || (piVar9 == (int *)0x0)) {
        LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      pbVar5 = (byte *)FUN_00bbf3a0(piVar9);
      iVar6 = FUN_00bbf680(piVar1,pbVar5);
      piVar4 = local_14;
      if (iVar6 < 0) break;
      pbVar5 = (byte *)FUN_00bbf3a0(piVar1);
      FUN_00bbf680(piVar9,pbVar5);
      piVar8 = piVar8 + -1;
      piVar4 = local_14;
    } while (local_c < piVar8);
  }
  do {
    piVar1 = piVar7;
    local_10 = piVar8;
    piVar9 = piVar8;
    if (param_3 <= piVar7) break;
    piVar2 = (int *)*piVar7;
    piVar3 = (int *)*piVar8;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    piVar4 = piVar7;
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar2 = (int *)*piVar8;
    piVar3 = (int *)*piVar7;
    if ((piVar2 == (int *)0x0) || (piVar3 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar3);
    iVar6 = FUN_00bbf680(piVar2,pbVar5);
    if (iVar6 < 0) break;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    FUN_00bbf680(piVar3,pbVar5);
    piVar7 = piVar7 + 1;
    piVar4 = piVar7;
  } while( true );
joined_r0x00bd8827:
  local_14 = piVar4;
  if (param_3 <= piVar1) {
LAB_00bd88ee:
    bVar10 = piVar8 == local_c;
    if (local_c < piVar8) {
      do {
        piVar7 = (int *)piVar8[-1];
        local_8 = (int *)*piVar9;
        if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
          LH_Assert(&local_16,"( C1 != NULL ) && ( C2 != NULL )\n");
          DebugBreak();
        }
        pbVar5 = (byte *)FUN_00bbf3a0(local_8);
        iVar6 = FUN_00bbf680(piVar7,pbVar5);
        if (-1 < iVar6) {
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          piVar7 = (int *)*piVar9;
          local_8 = (int *)piVar8[-1];
          if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
            LH_Assert(&local_15,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar5 = (byte *)FUN_00bbf3a0(local_8);
          iVar6 = FUN_00bbf680(piVar7,pbVar5);
          if (iVar6 < 0) break;
          pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
          FUN_00bbf680(local_8,pbVar5);
          iVar6 = piVar9[-1];
          piVar9 = piVar9 + -1;
          *piVar9 = piVar8[-1];
          piVar8[-1] = iVar6;
        }
        piVar8 = piVar8 + -1;
        local_10 = piVar8;
      } while (local_c < piVar8);
      bVar10 = piVar8 == local_c;
      piVar7 = local_14;
    }
    if (bVar10) {
      if (piVar1 == param_3) {
        *local_4 = (uint)piVar9;
        local_4[1] = (uint)piVar7;
        return;
      }
      if (piVar7 != piVar1) {
        iVar6 = *piVar9;
        *piVar9 = *piVar7;
        *piVar7 = iVar6;
      }
      iVar6 = *piVar9;
      *piVar9 = *piVar1;
      piVar7 = piVar7 + 1;
      *piVar1 = iVar6;
      piVar1 = piVar1 + 1;
      piVar4 = piVar7;
      piVar9 = piVar9 + 1;
    }
    else {
      piVar8 = piVar8 + -1;
      local_10 = piVar8;
      if (piVar1 == param_3) {
        piVar9 = piVar9 + -1;
        if (piVar8 != piVar9) {
          iVar6 = *piVar8;
          *piVar8 = *piVar9;
          *piVar9 = iVar6;
        }
        piVar4 = piVar7 + -1;
        iVar6 = *piVar9;
        piVar7 = piVar7 + -1;
        *piVar9 = *piVar4;
        *piVar7 = iVar6;
        piVar4 = piVar7;
      }
      else {
        iVar6 = *piVar1;
        *piVar1 = *piVar8;
        *piVar8 = iVar6;
        piVar1 = piVar1 + 1;
        piVar4 = local_14;
      }
    }
    goto joined_r0x00bd8827;
  }
  piVar7 = (int *)*piVar9;
  local_8 = (int *)*piVar1;
  if ((piVar7 == (int *)0x0) || (local_8 == (int *)0x0)) {
    LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  pbVar5 = (byte *)FUN_00bbf3a0(local_8);
  iVar6 = FUN_00bbf680(piVar7,pbVar5);
  if (-1 < iVar6) {
    pbVar5 = (byte *)FUN_00bbf3a0(piVar7);
    FUN_00bbf680(local_8,pbVar5);
    piVar4 = (int *)*piVar1;
    piVar2 = (int *)*piVar9;
    if ((piVar4 == (int *)0x0) || (piVar2 == (int *)0x0)) {
      LH_Assert(&local_17,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    pbVar5 = (byte *)FUN_00bbf3a0(piVar2);
    iVar6 = FUN_00bbf680(piVar4,pbVar5);
    piVar7 = local_14;
    piVar8 = local_10;
    if (iVar6 < 0) goto LAB_00bd88ee;
    pbVar5 = (byte *)FUN_00bbf3a0(piVar4);
    FUN_00bbf680(piVar2,pbVar5);
    iVar6 = *local_14;
    *local_14 = *piVar1;
    *piVar1 = iVar6;
    piVar8 = local_10;
    local_14 = local_14 + 1;
  }
  piVar7 = local_14;
  piVar1 = piVar1 + 1;
  piVar4 = local_14;
  goto joined_r0x00bd8827;
}


//// FUNCTION LH_Sort_InsertionSort_00bd8a70 @ 00bd8a70 ////

void __fastcall LH_Sort_InsertionSort_00bd8a70(undefined4 *param_1,undefined4 *param_2)

{
  int *this;
  int *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_1 != param_2) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      uVar2 = LH_Sort_Compare_00bd6850((int *)*puVar7,(int *)*param_1);
      puVar1 = puVar7;
      if ((char)uVar2 == '\0') {
        do {
          puVar6 = puVar1;
          this = (int *)*puVar7;
          this_00 = (int *)puVar6[-1];
          if ((this == (int *)0x0) || (this_00 == (int *)0x0)) {
            LH_Assert(&stack0x00000004,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          pbVar3 = (byte *)FUN_00bbf3a0(this_00);
          iVar4 = FUN_00bbf680(this,pbVar3);
          puVar1 = puVar6 + -1;
        } while (iVar4 < 0);
        pbVar3 = (byte *)FUN_00bbf3a0(this);
        FUN_00bbf680(this_00,pbVar3);
        if ((puVar6 != puVar7) && (puVar7 != puVar5)) {
          FUN_00bd6bc0(puVar6,(int)puVar7,puVar5);
        }
      }
      else if ((param_1 != puVar7) && (puVar7 != puVar5)) {
        FUN_00bd6bc0(param_1,(int)puVar7,puVar5);
      }
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar7 != param_2);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bd8b80 @ 00bd8b80 ////

void __fastcall
LH_Sort_UnguardedPartition_00bd8b80
          (undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bd7d60(param_2,piVar6,param_3 + -1);
  piVar5 = piVar6 + 1;
  local_10 = piVar5;
  if (param_2 < piVar6) {
    while( true ) {
      iVar2 = piVar6[-1];
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
      iVar2 = *piVar6;
      iVar3 = piVar6[-1];
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) || (piVar6 = piVar6 + -1, piVar6 <= local_8)
         ) break;
    }
  }
  piVar4 = piVar5;
  piVar1 = local_10;
  local_c = piVar6;
  if (piVar5 < param_3) {
    while( true ) {
      iVar2 = *piVar5;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar5;
      piVar1 = piVar5;
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
      iVar2 = *piVar6;
      iVar3 = *piVar5;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) ||
         (piVar5 = piVar5 + 1, piVar4 = piVar5, piVar1 = piVar5, param_3 <= piVar5)) break;
    }
  }
joined_r0x00bd8c94:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00bd8d0a:
      if (local_8 < local_c) {
        do {
          iVar2 = local_c[-1];
          iVar3 = *piVar6;
          if ((iVar2 == 0) || (iVar3 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar2 + 8)) {
            iVar2 = *piVar6;
            iVar3 = local_c[-1];
            if ((iVar2 == 0) || (iVar3 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar5 = local_10;
            if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
            iVar2 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar2;
          }
          local_c = local_c + -1;
          piVar5 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar4 == param_3) {
          *local_4 = piVar6;
          local_4[1] = piVar5;
          return;
        }
        if (piVar5 != piVar4) {
          iVar2 = *piVar6;
          *piVar6 = *piVar5;
          *piVar5 = iVar2;
        }
        iVar2 = *piVar6;
        piVar5 = piVar5 + 1;
        *piVar6 = *piVar4;
        *piVar4 = iVar2;
        piVar4 = piVar4 + 1;
        piVar1 = piVar5;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar4 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar2 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar2;
          }
          piVar1 = piVar5 + -1;
          iVar2 = *piVar6;
          piVar5 = piVar5 + -1;
          *piVar6 = *piVar1;
          *piVar5 = iVar2;
          piVar1 = piVar5;
        }
        else {
          iVar2 = *piVar4;
          *piVar4 = *local_c;
          *local_c = iVar2;
          piVar4 = piVar4 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00bd8c94;
    }
    iVar2 = *piVar6;
    iVar3 = *piVar4;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar2 + 8)) {
      iVar2 = *piVar4;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = local_10;
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) goto LAB_00bd8d0a;
      iVar2 = *local_10;
      *local_10 = *piVar4;
      *piVar4 = iVar2;
      local_10 = local_10 + 1;
    }
    piVar5 = local_10;
    piVar4 = piVar4 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bd8e60 @ 00bd8e60 ////

void __fastcall LH_Sort_InsertionSort_00bd8e60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar3;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00bd6ab0(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar3;
          iVar2 = piVar4[-1];
          local_c = piVar4;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8));
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00bd6ab0(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION LH_Sort_UnguardedPartition_00bd8f60 @ 00bd8f60 ////

void __fastcall
LH_Sort_UnguardedPartition_00bd8f60
          (undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00bd7e40(param_2,piVar6,param_3 + -1);
  piVar5 = piVar6 + 1;
  local_10 = piVar5;
  if (param_2 < piVar6) {
    while( true ) {
      iVar2 = piVar6[-1];
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
      iVar2 = *piVar6;
      iVar3 = piVar6[-1];
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) || (piVar6 = piVar6 + -1, piVar6 <= local_8)
         ) break;
    }
  }
  piVar4 = piVar5;
  piVar1 = local_10;
  local_c = piVar6;
  if (piVar5 < param_3) {
    while( true ) {
      iVar2 = *piVar5;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar5;
      piVar1 = piVar5;
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
      iVar2 = *piVar6;
      iVar3 = *piVar5;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) ||
         (piVar5 = piVar5 + 1, piVar4 = piVar5, piVar1 = piVar5, param_3 <= piVar5)) break;
    }
  }
joined_r0x00bd9074:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00bd90ea:
      if (local_8 < local_c) {
        do {
          iVar2 = local_c[-1];
          iVar3 = *piVar6;
          if ((iVar2 == 0) || (iVar3 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar2 + 8)) {
            iVar2 = *piVar6;
            iVar3 = local_c[-1];
            if ((iVar2 == 0) || (iVar3 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar5 = local_10;
            if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) break;
            iVar2 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar2;
          }
          local_c = local_c + -1;
          piVar5 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar4 == param_3) {
          *local_4 = piVar6;
          local_4[1] = piVar5;
          return;
        }
        if (piVar5 != piVar4) {
          iVar2 = *piVar6;
          *piVar6 = *piVar5;
          *piVar5 = iVar2;
        }
        iVar2 = *piVar6;
        piVar5 = piVar5 + 1;
        *piVar6 = *piVar4;
        *piVar4 = iVar2;
        piVar4 = piVar4 + 1;
        piVar1 = piVar5;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar4 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar2 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar2;
          }
          piVar1 = piVar5 + -1;
          iVar2 = *piVar6;
          piVar5 = piVar5 + -1;
          *piVar6 = *piVar1;
          *piVar5 = iVar2;
          piVar1 = piVar5;
        }
        else {
          iVar2 = *piVar4;
          *piVar4 = *local_c;
          *local_c = iVar2;
          piVar4 = piVar4 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00bd9074;
    }
    iVar2 = *piVar6;
    iVar3 = *piVar4;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar3 + 8) <= *(uint *)(iVar2 + 8)) {
      iVar2 = *piVar4;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = local_10;
      if (*(uint *)(iVar2 + 8) < *(uint *)(iVar3 + 8)) goto LAB_00bd90ea;
      iVar2 = *local_10;
      *local_10 = *piVar4;
      *piVar4 = iVar2;
      local_10 = local_10 + 1;
    }
    piVar5 = local_10;
    piVar4 = piVar4 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION LH_Sort_InsertionSort_00bd9240 @ 00bd9240 ////

void __fastcall LH_Sort_InsertionSort_00bd9240(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar3;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8)) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00bd6bc0(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar3;
          iVar2 = piVar4[-1];
          local_c = piVar4;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8));
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00bd6bc0(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00bd9450 @ 00bd9450 ////

void __fastcall FUN_00bd9450(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    piVar1 = *(int **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bd7450((int)param_1,0,iVar2 + -4 >> 2,piVar1);
  }
  return;
}


//// FUNCTION FUN_00bd94a0 @ 00bd94a0 ////

void __fastcall FUN_00bd94a0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    piVar1 = *(int **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00bd7560((int)param_1,0,iVar2 + -4 >> 2,piVar1);
  }
  return;
}


//// FUNCTION FUN_00bd94f0 @ 00bd94f0 ////

void __fastcall FUN_00bd94f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Array_AdjustHeap_00bd76b0((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bd9540 @ 00bd9540 ////

void __fastcall FUN_00bd9540(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Array_AdjustHeap_00bd7800((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bd9590 @ 00bd9590 ////

void __fastcall FUN_00bd9590(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bd9623:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bd8590(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bd7c00((int)param_1,(int)param_2);
        }
        FUN_00bd9450(param_1,(int)param_2);
        return;
      }
      goto LAB_00bd9623;
    }
    LH_Sort_UnguardedPartition_00bd81c0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bd9590(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bd9590(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bd9680 @ 00bd9680 ////

void __fastcall FUN_00bd9680(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bd9713:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bd8a70(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bd7d00((int)param_1,(int)param_2);
        }
        FUN_00bd94a0(param_1,(int)param_2);
        return;
      }
      goto LAB_00bd9713;
    }
    LH_Sort_UnguardedPartition_00bd86a0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bd9680(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bd9680(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bd9770 @ 00bd9770 ////

void __fastcall FUN_00bd9770(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bd9803:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bd8e60(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bd7e00((int)param_1,(int)param_2);
        }
        FUN_00bd94f0(param_1,(int)param_2);
        return;
      }
      goto LAB_00bd9803;
    }
    LH_Sort_UnguardedPartition_00bd8b80(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bd9770(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bd9770(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bd9860 @ 00bd9860 ////

void __fastcall FUN_00bd9860(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00bd98f3:
      if (1 < iVar2) {
        LH_Sort_InsertionSort_00bd9240(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00bd7ee0((int)param_1,(int)param_2);
        }
        FUN_00bd9540(param_1,(int)param_2);
        return;
      }
      goto LAB_00bd98f3;
    }
    LH_Sort_UnguardedPartition_00bd8f60(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00bd9860(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00bd9860(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00bd99d0 @ 00bd99d0 ////

void __fastcall FUN_00bd99d0(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bd9590(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00bd9a00 @ 00bd9a00 ////

void __fastcall FUN_00bd9a00(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bd9680(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00bd9a30 @ 00bd9a30 ////

void __fastcall FUN_00bd9a30(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bd9770(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00bd9a60 @ 00bd9a60 ////

void __fastcall FUN_00bd9a60(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00bd9860(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION SetVtable_00d9f524_00bd9a90 @ 00bd9a90 ////

void __fastcall SetVtable_00d9f524_00bd9a90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f524;
  return;
}


//// FUNCTION FUN_00bd9ac0 @ 00bd9ac0 ////

int __fastcall FUN_00bd9ac0(int param_1)

{
  int iVar1;
  
  iVar1 = GetField_8_00be59d0(param_1 + 8);
  return iVar1 + *(int *)(param_1 + 4);
}


//// FUNCTION FUN_00bd9ad0 @ 00bd9ad0 ////

void __fastcall FUN_00bd9ad0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00be5a00((undefined4 *)(param_1 + 8));
  return;
}


//// FUNCTION FUN_00bd9ae0 @ 00bd9ae0 ////

void __thiscall FUN_00bd9ae0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00be6100((void *)((int)this + 8),(undefined4 *)(param_1 + 8));
  return;
}


//// FUNCTION FUN_00bd9b00 @ 00bd9b00 ////

void __thiscall FUN_00bd9b00(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00be6100((void *)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00bd9b10 @ 00bd9b10 ////

void __thiscall FUN_00bd9b10(void *this,int param_1,int param_2,int param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  PKDataReadCWindow_Narrow((void *)((int)this + 8),(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd9b30 @ 00bd9b30 ////

void __thiscall FUN_00bd9b30(void *this,undefined4 *param_1,int param_2,int param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  PKDataReadCWindow_Narrow((void *)((int)this + 8),param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00bd9b40 @ 00bd9b40 ////

void __thiscall FUN_00bd9b40(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00be60b0((void *)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00bd9b50 @ 00bd9b50 ////

void __thiscall FUN_00bd9b50(void *this,int *param_1,int param_2,int param_3)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00be60d0((void *)((int)this + 8),param_1,param_2,param_3);
  return;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9b60 @ 00bd9b60 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9b60(void *this,int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfffc3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9ae0(this,param_1);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9bc0 @ 00bd9bc0 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9bc0(void *this,undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfffe0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9b00(this,param_1);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9c20 @ 00bd9c20 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9c20(void *this,int param_1,int param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cffffd;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9b10(this,param_1,param_2,param_3);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9c90 @ 00bd9c90 ////

undefined4 * __thiscall
Ctor_vt00d9f52c_00bd9c90(void *this,undefined4 *param_1,int param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0001a;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9b30(this,param_1,param_2,param_3);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9d00 @ 00bd9d00 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9d00(void *this,int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00037;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9b40(this,param_1);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9d60 @ 00bd9d60 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9d60(void *this,int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00054;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_1 == (int *)0x0) {
    FUN_00bd9ad0((int)this);
    ExceptionList = pvStack_c;
    return this;
  }
  FUN_00bd9b40(this,param_1);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Ctor_vt00d9f52c_00bd9de0 @ 00bd9de0 ////

undefined4 * __thiscall Ctor_vt00d9f52c_00bd9de0(void *this,int *param_1,int param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00071;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0((undefined4 *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9b50(this,param_1,param_2,param_3);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION Dtor_00bd9e50 @ 00bd9e50 ////

void __fastcall Dtor_00bd9e50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00083;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  local_4 = 0;
  FUN_00be6330(param_1 + 2);
  *param_1 = &PTR_LAB_00d9f524;
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_ReadFileData @ 00bd9ea0 ////

uint __thiscall LH_ReadFileData(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  uVar1 = GetField_0xc_00be5a60((int)this + 8);
  if ((uint)(iVar2 + param_2) <= uVar1) {
    uVar1 = FUN_00be5a10((void *)((int)this + 8),iVar2,param_2,param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = *(int *)((int)this + 4) + param_2;
      *(int *)((int)this + 4) = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION GetField_4_00bd9ef0 @ 00bd9ef0 ////

undefined4 __fastcall GetField_4_00bd9ef0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00bd9f00 @ 00bd9f00 ////

int __fastcall FUN_00bd9f00(int param_1)

{
  int iVar1;
  
  iVar1 = GetField_0xc_00be5a60(param_1 + 8);
  return iVar1 - *(int *)(param_1 + 4);
}


//// FUNCTION FUN_00bd9f10 @ 00bd9f10 ////

undefined4 __thiscall FUN_00bd9f10(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bd9f00((int)this);
  uVar2 = PKDataReadCWindow_Narrow
                    (param_1,(undefined4 *)((int)this + 8),*(int *)((int)this + 4),iVar1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00bd9f30 @ 00bd9f30 ////

uint __thiscall FUN_00bd9f30(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00bd9f00((int)this);
  if (uVar1 < param_2) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = PKDataReadCWindow_Narrow
                    (param_1,(undefined4 *)((int)this + 8),*(int *)((int)this + 4),param_2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION Ctor_vt00d9f52c_00bd9f70 @ 00bd9f70 ////

undefined4 * __fastcall Ctor_vt00d9f52c_00bd9f70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d000a0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bda110_00d9f52c;
  FUN_00be59e0(param_1 + 2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bd9ad0((int)param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION PKDataReadCStreamer_Seek @ 00bd9fd0 ////

uint __thiscall PKDataReadCStreamer_Seek(void *this,int param_1,int param_2)

{
  LPCSTR pCVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  uint uVar4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d000b5;
  local_c = ExceptionList;
  uVar2 = 0;
  uVar4 = *(uint *)((int)this + 4);
  ExceptionList = &local_c;
  if (param_2 != 0) {
    if (param_2 == 1) {
      ExceptionList = &local_c;
      uVar2 = GetField_0xc_00be5a60((int)this + 8);
      uVar4 = uVar2;
    }
    else {
      if (param_2 != 2) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        ExceptionList = &local_c;
        LH_LogErrorMessage(&local_110,".\\PKDataReadCStreamer.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x8a);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Did not understand seek method (");
        FUN_00bbe970(param_2);
        LH_LogErrorMessage(&local_110,")");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        uVar2 = LH_Assert(&local_111,pCVar1);
        goto LAB_00bda0ad;
      }
      uVar2 = 0;
      uVar4 = 0;
      ExceptionList = &local_c;
    }
  }
  iVar3 = uVar4 + param_1;
  if ((-1 < iVar3) && (uVar2 = GetField_0xc_00be5a60((int)this + 8), iVar3 <= (int)uVar2)) {
    *(int *)((int)this + 4) = iVar3;
    ExceptionList = local_c;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00bda0ad:
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION ScalarDeletingDtor_00bda110 @ 00bda110 ////

undefined4 * __thiscall ScalarDeletingDtor_00bda110(void *this,byte param_1)

{
  Dtor_00bd9e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9f574_00bda130 @ 00bda130 ////

undefined4 * __fastcall Ctor_vt00d9f574_00bda130(undefined4 *param_1)

{
  FUN_00bce860(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_ScalarDeletingDtor_00bda200_00d9f574;
  return param_1;
}


//// FUNCTION FUN_00bda150 @ 00bda150 ////

void __thiscall FUN_00bda150(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}


//// FUNCTION Dtor_00bda170 @ 00bda170 ////

void __fastcall Dtor_00bda170(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00bda200_00d9f574;
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f574_00bda1d0 @ 00bda1d0 ////

undefined4 * __thiscall Ctor_vt00d9f574_00bda1d0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00bce860(this);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda200_00d9f574;
  FUN_00bda150(this,param_1,param_2);
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bda200 @ 00bda200 ////

undefined4 * __thiscall ScalarDeletingDtor_00bda200(void *this,byte param_1)

{
  Dtor_00bda170(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bda220 @ 00bda220 ////

bool __fastcall FUN_00bda220(int param_1)

{
  return *(int *)(param_1 + 4) != -1;
}


//// FUNCTION Dtor_00bda240 @ 00bda240 ////

void __fastcall Dtor_00bda240(undefined4 *param_1)

{
  bool bVar1;
  
  *param_1 = &PTR_ScalarDeletingDtor_00bda3d0_00d9f588;
  bVar1 = FUN_00bda220((int)param_1);
  if (bVar1) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
  }
  *param_1 = &PTR_LAB_00d9d9ac;
  return;
}


//// FUNCTION Ctor_vt00d9f588_00bda270 @ 00bda270 ////

undefined4 * __thiscall Ctor_vt00d9f588_00bda270(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bda3d0_00d9f588;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  pvVar1 = CreateFileA(param_1,0x40000000,2,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}


//// FUNCTION PKDataWriteCStreamer2File_Write @ 00bda2b0 ////

bool __thiscall PKDataWriteCStreamer2File_Write(void *this,LPCVOID param_1,DWORD param_2)

{
  bool bVar1;
  WINBOOL WVar2;
  LPCSTR pCVar3;
  undefined1 local_115;
  DWORD local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d000cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00bda220((int)this);
  if (!bVar1) {
    ExceptionList = local_c;
    return false;
  }
  WVar2 = WriteFile(*(HANDLE *)((int)this + 4),param_1,param_2,&local_114,(LPOVERLAPPED)0x0);
  if ((WVar2 == 0) || (local_114 != param_2)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDataWriteCStreamer2File.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error writing to file");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar3);
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(DWORD *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
  ExceptionList = local_c;
  return true;
}


//// FUNCTION ScalarDeletingDtor_00bda3d0 @ 00bda3d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bda3d0(void *this,byte param_1)

{
  Dtor_00bda240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9f5cc_00bda3f0 @ 00bda3f0 ////

void __fastcall SetVtable_00d9f5cc_00bda3f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f5cc;
  return;
}


//// FUNCTION FUN_00bda430 @ 00bda430 ////

void __fastcall FUN_00bda430(undefined1 *param_1,int param_2)

{
  FUN_00bddf00(param_1);
  FUN_00bddf30((int)param_1);
  FUN_00bddf50((int)param_1);
  FUN_00bddf70((int)param_1);
  FUN_00bddf90((int)param_1);
  FUN_00bddfb0(param_1,(short)*(undefined4 *)(param_2 + 0x20));
  FUN_00bddfc0(param_1,(short)*(undefined4 *)(param_2 + 0x24));
  FUN_00bddfd0(param_1,*(undefined4 *)(param_2 + 0x28));
  FUN_00bddfe0(param_1,(short)*(undefined4 *)(param_2 + 0x2c));
  FUN_00bddff0(param_1,(short)*(undefined4 *)(param_2 + 0x30));
  FUN_00bde000(param_1,*(char *)(param_2 + 0x34));
  FUN_00bde060((int)param_1);
  FUN_00bde0c0(param_1,*(char *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x48));
  FUN_00bde0b0(param_1,(short)*(undefined4 *)(param_2 + 0x1c));
  if (*(int *)(param_2 + 0x18) == 1) {
    FUN_00bde090(param_1,1);
    return;
  }
  if (*(int *)(param_2 + 0x18) != 2) {
    FUN_00bde090(param_1,0);
    return;
  }
  FUN_00bde090(param_1,2);
  return;
}


//// FUNCTION FUN_00bda510 @ 00bda510 ////

undefined4 * __thiscall FUN_00bda510(void *this,undefined4 param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_74 [2];
  int local_6c;
  undefined4 *local_68;
  undefined1 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d000e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_74,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_50 = *(int *)((int)this + 8);
  local_48 = param_2[1];
  local_4 = 0;
  local_4c = param_1;
  local_38 = FUN_00bc0530(local_50);
  uVar1 = param_2[3];
  local_40 = (uint)(param_2[4] * 1000) / uVar1;
  local_3c = (uint)(param_2[5] * 1000) / uVar1;
  local_44 = (uint)(param_2[1] * 1000) / (*param_2 * uVar1 * 2);
  puVar2 = LHAudioSystem_CreateResource(&local_50);
  local_54 = param_2[5];
  local_58 = param_2[4];
  local_60 = *param_2;
  local_5c = param_2[3];
  FUN_00c0d860(puVar2,&local_60);
  FUN_00bde190(local_34);
  FUN_00bda430(local_34,param_3);
  local_6c = FUN_00bc0510(*(int *)((int)this + 8));
  local_64 = local_34;
  local_68 = puVar2;
  puVar2 = LHAudioSystem_CreateDriver(&local_6c);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_74);
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00bda650 @ 00bda650 ////

undefined4 __thiscall FUN_00bda650(void *this,int *param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d000fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x94))();
    if (iVar1 == *(int *)((int)this + 8)) {
      (**(code **)(*param_1 + 0xc))();
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return 0xffffffff;
}


//// FUNCTION Dtor_00bda6f0 @ 00bda6f0 ////

void __fastcall Dtor_00bda6f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0010c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9f5f8;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])();
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_00d9f5cc;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bda760 @ 00bda760 ////

undefined4 * __thiscall FUN_00bda760(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined1 local_71;
  undefined **local_70 [2];
  undefined4 local_68 [2];
  int local_60;
  undefined4 *local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  undefined ***local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00126;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_68,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)((int)this + 8) == 0) {
    LH_Assert(&local_71,"Bank != NULL\n");
    DebugBreak();
  }
  if ((*param_1 != 0) && (param_1[2] != 0)) {
    std__String__Constructor(local_70,*param_1);
    local_54 = *(int *)((int)this + 8);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_50 = FUN_00bc0530(local_54);
    local_48 = param_1[1];
    local_44 = param_1[2];
    local_4c = local_70;
    local_40 = param_1[3];
    local_3c = param_1[4];
    local_38 = param_1[5];
    puVar1 = LHAudioSystem_CreateResource2(&local_54);
    FUN_00bde190(local_34);
    if (param_1[6] != 0) {
      FUN_00bda430(local_34,param_1[6]);
    }
    local_60 = FUN_00bc0510(*(int *)((int)this + 8));
    local_58 = local_34;
    local_5c = puVar1;
    puVar1 = LHAudioSystem_CreateDriver(&local_60);
    local_70[0] = &PTR_LAB_00d9d9b4;
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_68);
    ExceptionList = local_c;
    return puVar1;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_68);
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bda8c0 @ 00bda8c0 ////

undefined4 * __thiscall FUN_00bda8c0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_f8 [2];
  int local_f0;
  undefined4 *local_ec;
  undefined1 *local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8 [4];
  undefined **local_b8 [2];
  undefined1 local_b0 [40];
  undefined4 local_88 [14];
  int local_50;
  uint local_38;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0015c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_f8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  iVar5 = 0;
  local_4 = 0;
  Ctor_vt00d9f574_00bda1d0(local_c8,param_1,param_2);
  local_4._0_1_ = 1;
  FUN_00bd58a0(local_88);
  local_4._0_1_ = 2;
  uVar1 = FUN_00bd5db0(local_88,local_c8);
  if ((char)uVar1 == '\0') {
    local_4._0_1_ = 1;
    FUN_00bd5a40(local_88);
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00bda170(local_c8);
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_f8);
    puVar2 = (undefined4 *)0x0;
  }
  else {
    piVar3 = (int *)std__String__Constructor(local_b8,0xd9f634);
    local_4._0_1_ = 3;
    iVar4 = FUN_00bd5960(local_88,piVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    local_b8[0] = &PTR_LAB_00d9d9b4;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar4 + 8);
      iVar5 = *(int *)(iVar4 + 0xc);
    }
    local_e4 = *(int *)((int)this + 8);
    local_e0 = param_1;
    local_dc = param_2;
    local_cc = FUN_00bc0530(local_e4);
    local_d4 = (uint)(iVar6 * 1000) / local_38;
    local_d0 = (uint)(iVar5 * 1000) / local_38;
    local_d8 = (uint)(local_50 * 1000) / local_34;
    puVar2 = LHAudioSystem_CreateResource(&local_e4);
    FUN_00bde190(local_b0);
    if (param_3 != 0) {
      FUN_00bda430(local_b0,param_3);
    }
    local_f0 = FUN_00bc0510(*(int *)((int)this + 8));
    local_e8 = local_b0;
    local_ec = puVar2;
    puVar2 = LHAudioSystem_CreateDriver(&local_f0);
    local_4._0_1_ = 1;
    FUN_00bd5a40(local_88);
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00bda170(local_c8);
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_f8);
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION Ctor_vt00d9f5f8_00bdaad0 @ 00bdaad0 ////

undefined4 * __thiscall Ctor_vt00d9f5f8_00bdaad0(void *this,int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0016e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9f5f8;
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  puVar1 = FUN_00bb8af0(param_1);
  *(undefined4 **)((int)this + 8) = puVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bdab70 @ 00bdab70 ////

undefined4 __thiscall FUN_00bdab70(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_4 = this;
  if (*(int *)((int)this + 8) == 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Bank != NULL\n");
    DebugBreak();
  }
  puVar1 = (undefined4 *)
           RedBlackTree_Find((void *)(*(int *)((int)this + 8) + 0x60),
                             (void *)(*(int *)((int)this + 8) + 0x5c),&param_1,&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = LHAudioSystem_CreateAtmosGroup(*(void **)((int)this + 8),param_1);
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}


//// FUNCTION FUN_00bdac20 @ 00bdac20 ////

uint __thiscall FUN_00bdac20(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  void *this_00;
  undefined4 uVar5;
  
  piVar2 = param_2;
  piVar3 = (int *)(**(code **)(*param_2 + 0x98))();
  uVar1 = *(uint *)((int)this + 8);
  uVar4 = (**(code **)(*piVar3 + 0x18))();
  if (uVar4 == uVar1) {
    if (uVar1 == 0) {
      LH_Assert(&param_2,"Bank != NULL\n");
      DebugBreak();
    }
    this_00 = (void *)RedBlackTree_Find((void *)(*(int *)((int)this + 8) + 0x60),
                                        (void *)(*(int *)((int)this + 8) + 0x5c),&param_1,&param_1);
    uVar4 = 0;
    if (this_00 != (void *)0x0) {
      uVar5 = FUN_00be89b0(this_00,(int)piVar2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00bdac90 @ 00bdac90 ////

uint __thiscall FUN_00bdac90(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  void *this_00;
  undefined4 uVar5;
  
  piVar2 = param_2;
  piVar3 = (int *)(**(code **)(*param_2 + 0x98))();
  uVar1 = *(uint *)((int)this + 8);
  uVar4 = (**(code **)(*piVar3 + 0x18))();
  if (uVar4 == uVar1) {
    if (uVar1 == 0) {
      LH_Assert(&param_2,"Bank != NULL\n");
      DebugBreak();
    }
    this_00 = (void *)RedBlackTree_Find((void *)(*(int *)((int)this + 8) + 0x60),
                                        (void *)(*(int *)((int)this + 8) + 0x5c),&param_1,&param_1);
    uVar4 = 0;
    if (this_00 != (void *)0x0) {
      uVar5 = FUN_00be8a60(this_00,(uint)piVar2);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION ScalarDeletingDtor_00bdad10 @ 00bdad10 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdad10(void *this,byte param_1)

{
  Dtor_00bda6f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bdad70 @ 00bdad70 ////

int __thiscall FUN_00bdad70(void *this,int param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  iVar1 = *(int *)((int)this + 4) + 0x4c;
  if (param_1 != 0) {
    iVar1 = param_1 + 0xc;
  }
  PKCProtectionInstance_Leave(local_8);
  return iVar1;
}


//// FUNCTION FUN_00bdadb0 @ 00bdadb0 ////

uint FUN_00bdadb0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00188;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = pvStack_c;
    return uVar2 & 0xffffff00;
  }
  *param_2 = *(undefined4 *)(iVar1 + 8);
  *param_3 = *(undefined4 *)(iVar1 + 0xc);
  *param_4 = *(undefined1 *)(iVar1 + 0x10);
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00bdae50 @ 00bdae50 ////

void __thiscall FUN_00bdae50(void *this,int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0019a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bdad70(this,param_1);
  FUN_00bcbcd0(iVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bdaec0 @ 00bdaec0 ////

undefined4 FUN_00bdaec0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d001ac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar1 = param_1;
  local_4 = 0;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (0 < iVar2) {
    if (iVar2 < 3) {
      *param_2 = 1;
    }
    else {
      if (iVar2 != 3) goto LAB_00bdaf68;
      iVar2 = (**(code **)(*piVar1 + 0x18))();
      if (iVar2 == 0) {
        LH_Assert(&param_1,"e != NULL\n");
        DebugBreak();
      }
      uVar3 = GetField_8_00bdbad0(iVar2 + 8);
      *param_2 = uVar3;
    }
    local_4 = 0xffffffff;
    uVar3 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = pvStack_c;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
LAB_00bdaf68:
  local_4 = 0xffffffff;
  uVar4 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00bdaf90 @ 00bdaf90 ////

void __thiscall FUN_00bdaf90(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00d9f678;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00bdafb0 @ 00bdafb0 ////

undefined4 FUN_00bdafb0(int *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *this;
  undefined4 uVar4;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d001be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar1 = param_1;
  local_4 = 0;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 1) {
    if ((param_2 == 0) && (param_3 == 0)) {
      iVar2 = (**(code **)(*piVar1 + 0x10))();
      if (iVar2 == 0) {
        LH_Assert(&uStack_15,"e != NULL\n");
        DebugBreak();
      }
      uVar4 = *(undefined4 *)(iVar2 + 8);
LAB_00bdb0e2:
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return uVar4;
    }
  }
  else if (iVar2 == 2) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))();
      if (iVar2 == 0) {
        LH_Assert(&uStack_16,"e != NULL\n");
        DebugBreak();
      }
      uVar3 = GetField_8_00bdbac0(iVar2 + 8);
      if (param_3 < uVar3) {
        uVar4 = LH_Array_GetAt_00bdba80((void *)(iVar2 + 8),param_3);
        goto LAB_00bdb0e2;
      }
    }
  }
  else if (iVar2 == 3) {
    iVar2 = (**(code **)(*piVar1 + 0x18))();
    if (iVar2 == 0) {
      LH_Assert(&param_1,"e != NULL\n");
      DebugBreak();
    }
    uVar3 = GetField_8_00bdbad0(iVar2 + 8);
    if (param_2 < uVar3) {
      this = (void *)LH_Array_GetAt_00bdbae0((void *)(iVar2 + 8),param_2);
      if (this != (void *)0x0) {
        uVar3 = GetField_8_00bdbac0((int)this);
        if (param_3 < uVar3) {
          uVar4 = LH_Array_GetAt_00bdba80(this,param_3);
          goto LAB_00bdb0e2;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00bdb130 @ 00bdb130 ////

undefined4 FUN_00bdb130(int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uStack_15;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d001d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar1 = param_1;
  local_4 = 0;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 1) {
    if (param_2 == 0) {
      *param_3 = 1;
LAB_00bdb24b:
      local_4 = 0xffffffff;
      uVar4 = PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  else if (iVar2 == 2) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))();
      if (iVar2 == 0) {
        LH_Assert(&uStack_15,"e != NULL\n");
        DebugBreak();
      }
      uVar4 = GetField_8_00bdbac0(iVar2 + 8);
      *param_3 = uVar4;
      goto LAB_00bdb24b;
    }
  }
  else if (iVar2 == 3) {
    iVar2 = (**(code **)(*piVar1 + 0x18))();
    if (iVar2 == 0) {
      LH_Assert(&param_1,"e != NULL\n");
      DebugBreak();
    }
    uVar3 = GetField_8_00bdbad0(iVar2 + 8);
    if (param_2 < uVar3) {
      iVar2 = LH_Array_GetAt_00bdbae0((void *)(iVar2 + 8),param_2);
      if (iVar2 != 0) {
        uVar4 = GetField_8_00bdbac0(iVar2);
        *param_3 = uVar4;
        local_4 = 0xffffffff;
        uVar4 = PKCProtectionInstance_Leave(local_14);
        ExceptionList = pvStack_c;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      *param_3 = 0;
      goto LAB_00bdb24b;
    }
  }
  local_4 = 0xffffffff;
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bdb330 @ 00bdb330 ////

undefined4 __thiscall FUN_00bdb330(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d001f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bdad70(this,param_1);
  uVar2 = GetField_8_00bcbbd0(iVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00bdb3a0 @ 00bdb3a0 ////

undefined4 __thiscall FUN_00bdb3a0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00209;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bdad70(this,param_1);
  uVar2 = GetField_8_00bcbbd0(iVar1 + 0xc);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00bdb410 @ 00bdb410 ////

int __thiscall FUN_00bdb410(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  uint local_9c;
  undefined4 local_98 [2];
  undefined **local_90;
  undefined1 local_8c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00229;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_98,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_00 = (void *)FUN_00bdad70(this,*(int *)(param_1 + 0x10));
  iVar1 = 0;
  if (*(char **)(param_1 + 0xc) == (char *)0x0) {
    if (*(int *)(param_1 + 4) == 1) {
      local_9c = *(uint *)(param_1 + 8);
    }
    else {
      if (*(int *)(param_1 + 4) != 0) goto LAB_00bdb4df;
      local_9c = *(uint *)(param_1 + 8);
      this_00 = (void *)((int)this_00 + 0xc);
    }
  }
  else {
    local_90 = &PTR_LAB_00d9dcd4;
    local_8c = 0;
    local_d = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00bbfaa0(&local_90,*(char **)(param_1 + 0xc));
    FUN_00bbf360(&local_90);
    local_9c = FUN_00bbf720(&local_90,0);
  }
  iVar1 = LH_SortedArray_FindObject_00bccee0(this_00,&local_9c);
LAB_00bdb4df:
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_98);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bdb510 @ 00bdb510 ////

float10 __thiscall FUN_00bdb510(void *param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0023b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar5 = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_00bdb410(param_1,(int)param_2);
  if (piVar1 != (int *)0x0) {
    param_2 = 0.0;
    uVar2 = FUN_00bdaec0(piVar1,&local_1c);
    if ((char)uVar2 != '\0') {
      if (local_1c != 0) {
        do {
          uVar2 = FUN_00bdb130(piVar1,uVar5,&local_20);
          if ((char)uVar2 == '\0') {
            local_4 = 0xffffffff;
            PKCProtectionInstance_Leave(local_14);
            ExceptionList = local_c;
            return (float10)-1.0;
          }
          uVar4 = 0;
          if (local_20 != 0) {
            do {
              iVar3 = FUN_00bdafb0(piVar1,uVar5,uVar4);
              if (iVar3 != 0) {
                local_18 = iVar3 + 8;
                fVar6 = (float10)FUN_00bdde20(local_18);
                if ((float10)param_2 < fVar6) {
                  fVar6 = (float10)FUN_00bdde20(local_18);
                  param_2 = (float)fVar6;
                }
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_20);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_1c);
      }
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = local_c;
      return (float10)param_2;
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return (float10)-1.0;
}


//// FUNCTION FUN_00bdb660 @ 00bdb660 ////

undefined4 __thiscall FUN_00bdb660(void *this,int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0024d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00bdb410(this,param_1);
  if (piVar1 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  uVar2 = FUN_00bdafb0(piVar1,param_2,param_3);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00bdb700 @ 00bdb700 ////

int __thiscall FUN_00bdb700(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0025f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00bdb410(this,param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00bdaec0(piVar1,&param_1);
    local_4 = 0xffffffff;
    if ((char)uVar2 != '\0') {
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = local_c;
      return param_1;
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return -1;
}


//// FUNCTION FUN_00bdb7a0 @ 00bdb7a0 ////

int __thiscall FUN_00bdb7a0(void *this,int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00271;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00bdb410(this,param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_00bdb130(piVar1,param_2,&param_1);
    local_4 = 0xffffffff;
    if ((char)uVar2 != '\0') {
      PKCProtectionInstance_Leave(local_14);
      ExceptionList = local_c;
      return param_1;
    }
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return -1;
}


//// FUNCTION FUN_00bdb850 @ 00bdb850 ////

uint __thiscall
FUN_00bdb850(void *this,int param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00283;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00bdb410(this,param_1);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x1c))();
    local_4 = 0xffffffff;
    if (iVar3 != 0) {
      *param_2 = *(undefined1 *)(iVar3 + 0x10);
      *param_3 = *(undefined4 *)(*(int *)(iVar3 + 8) + 4);
      *param_4 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = PKCProtectionInstance_Leave(local_14);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00bdb910 @ 00bdb910 ////

undefined4 __thiscall FUN_00bdb910(void *this,int param_1,int *param_2)

{
  void *this_00;
  void *this_01;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00295;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  this_01 = (void *)FUN_00bdad70(this,param_1);
  this_00 = (void *)((int)this_01 + 0xc);
  uVar4 = 0;
  iVar1 = GetField_8_00bcbbd0((int)this_00);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Map_GetObject_00bdbb80(this_00,uVar4);
      (**(code **)*param_2)(*(undefined4 *)(iVar1 + 4));
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bcbbd0((int)this_00);
    } while (uVar4 < uVar2);
  }
  uVar4 = 0;
  iVar1 = GetField_8_00bcbbd0((int)this_01);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Map_GetObject_00bdbb80(this_01,uVar4);
      iVar3 = LH_SortedArray_FindObject_00bdbc90((void *)((int)this_01 + 0x18),(uint *)(iVar1 + 4));
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00bbf3a0((int *)(iVar3 + 4));
      }
      (**(code **)(*param_2 + 4))(*(uint *)(iVar1 + 4),iVar3);
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bcbbd0((int)this_01);
    } while (uVar4 < uVar2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_00bdba00 @ 00bdba00 ////

bool __thiscall FUN_00bdba00(void *this,int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d002a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bdb410(this,param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1 != 0;
}


//// FUNCTION LH_Array_GetAt_00bdba80 @ 00bdba80 ////

undefined4 __thiscall LH_Array_GetAt_00bdba80(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION GetField_8_00bdbac0 @ 00bdbac0 ////

undefined4 __fastcall GetField_8_00bdbac0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION GetField_8_00bdbad0 @ 00bdbad0 ////

undefined4 __fastcall GetField_8_00bdbad0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION LH_Array_GetAt_00bdbae0 @ 00bdbae0 ////

undefined4 __thiscall LH_Array_GetAt_00bdbae0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION ScalarDeletingDtor_00bdbb20 @ 00bdbb20 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdbb20(void *this,byte param_1)

{
  SetVtable_00d9f63c_00bdbb40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9f63c_00bdbb40 @ 00bdbb40 ////

void __fastcall SetVtable_00d9f63c_00bdbb40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f63c;
  return;
}


//// FUNCTION LH_Map_GetObject_00bdbb80 @ 00bdbb80 ////

int __thiscall LH_Map_GetObject_00bdbb80(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = LH_Array_GetAt_00bcc790(this,param_1);
  if (iVar1 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bdbbb0 @ 00bdbbb0 ////

int __thiscall FUN_00bdbbb0(void *this,uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 8) + -1;
  iVar3 = 0;
  local_4 = this;
  if (-1 < iVar5) {
    do {
      iVar4 = (iVar5 + iVar3) / 2;
      puVar1 = *(uint **)(*(int *)this + iVar4 * 4);
      if (puVar1 == (uint *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
        this = local_4;
      }
      uVar2 = *puVar1;
      if (*param_1 < uVar2) {
        iVar5 = iVar4 + -1;
      }
      else {
        if (*param_1 <= uVar2) {
          *param_2 = 1;
          return iVar4;
        }
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar5);
  }
  iVar3 = (iVar5 + iVar3) / 2;
  puVar1 = *(uint **)(*(int *)this + iVar3 * 4);
  if (puVar1 == (uint *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  if (*puVar1 <= *param_1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


//// FUNCTION LH_SortedArray_FindObject_00bdbc90 @ 00bdbc90 ////

int __thiscall LH_SortedArray_FindObject_00bdbc90(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00bdbbb0(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bcc020(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION FUN_00bdbcf0 @ 00bdbcf0 ////

uint __thiscall FUN_00bdbcf0(void *this,int param_1,DWORD *param_2)

{
  DWORD DVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d002c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  DVar1 = GetFileSize(*(HANDLE *)(param_1 + 8),(LPDWORD)0x0);
  local_4 = 0xffffffff;
  *param_2 = DVar1;
  if (DVar1 == 0xffffffff) {
    uVar2 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION PKDiskManagersThreadedSingleHeadCManager_ReleaseFile @ 00bdbd70 ////

void __thiscall PKDiskManagersThreadedSingleHeadCManager_ReleaseFile(void *this,int *param_1)

{
  int *piVar1;
  LPCSTR pCVar2;
  undefined1 local_119;
  undefined4 local_118 [2];
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d002f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"NULL FIle");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar2);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  FUN_00bc1470(local_118,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 1;
  if (param_1[3] == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x41);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Reference count out of sync");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar2);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  piVar1 = param_1 + 3;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    CloseHandle((HANDLE)param_1[2]);
    FUN_00bcff70((void *)((int)this + 0x20),(int *)((int)this + 0x1c),(int)param_1);
    (**(code **)(*param_1 + 0x10))(1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_118);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION PKDiskManagersThreadedSingleHeadCManager_ReadFileBytes @ 00bdbf40 ////

uint __fastcall
PKDiskManagersThreadedSingleHeadCManager_ReadFileBytes
          (HANDLE param_1,LPVOID param_2,LONG param_3,DWORD param_4)

{
  WINBOOL WVar1;
  LPCSTR pCVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_115;
  DWORD local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00313;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SetFilePointer(param_1,param_3,(PLONG)0x0,0);
  WVar1 = ReadFile(param_1,param_2,param_4,&local_114,(LPOVERLAPPED)0x0);
  if (WVar1 == 0) {
    GetLastError();
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x54);
    LH_LogErrorMessage(&local_110,") : ");
    pcVar4 = "win32 error ";
  }
  else {
    if (local_114 == param_4) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)WVar1 >> 8),1);
    }
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x59);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"asked for ");
    LH_PrintResourceID(&local_110,param_4);
    LH_LogErrorMessage(&local_110,"bytes, only read ");
    LH_PrintResourceID(&local_110,local_114);
    pcVar4 = " bytes";
  }
  LH_LogErrorMessage(&local_110,pcVar4);
  LH_LogErrorMessage(&local_110,"\n");
  pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
  uVar3 = LH_Assert(&local_115,pCVar2);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bdc0d0 @ 00bdc0d0 ////

uint __fastcall FUN_00bdc0d0(LPCSTR param_1,undefined4 *param_2)

{
  DWORD DVar1;
  HANDLE pvVar2;
  LPCSTR pCVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00333;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(100);
    LH_LogErrorMessage(&local_110,") : ");
    pcVar5 = "GetFileAttributes for file \'";
  }
  else {
    pvVar2 = CreateFileA(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0,(HANDLE)0x0);
    *param_2 = pvVar2;
    if (pvVar2 != (HANDLE)0xffffffff) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)pvVar2 >> 8),1);
    }
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x73);
    LH_LogErrorMessage(&local_110,") : ");
    pcVar5 = "CreateFile \'";
  }
  LH_LogErrorMessage(&local_110,pcVar5);
  LH_LogErrorMessage(&local_110,param_1);
  LH_LogErrorMessage(&local_110,"\' failed: ");
  DVar1 = GetLastError();
  LH_PrintResourceID(&local_110,DVar1);
  LH_LogErrorMessage(&local_110,"\n");
  pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
  uVar4 = LH_Assert(&local_111,pCVar3);
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION PKDiskManagersThreadedSingleHeadCManager_OpenFile @ 00bdc260 ////

undefined4 * __thiscall PKDiskManagersThreadedSingleHeadCManager_OpenFile(void *this,LPCSTR param_1)

{
  uint3 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LPCSTR pCVar4;
  undefined1 local_121;
  undefined4 local_120;
  undefined4 local_11c [2];
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00361;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_11c,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar2 = FUN_00bdc0d0(param_1,&local_120);
  if ((char)uVar2 == '\0') {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_11c);
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_114 = operator_new(0x24);
    local_4._0_1_ = 1;
    if (local_114 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = Ctor_vt00da3248_00c0e150(local_114,this);
    }
    uVar1 = local_4._1_3_;
    local_4 = (uint)local_4._1_3_ << 8;
    if (puVar3 == (undefined4 *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4._0_1_ = 2;
      local_4._1_3_ = uVar1;
      LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x83);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_121,pCVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    puVar3[2] = local_120;
    puVar3[3] = 1;
    FUN_00bcfac0((void *)((int)this + 0x20),(int *)((int)this + 0x1c),(int)puVar3);
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_11c);
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_00bdc3e0 @ 00bdc3e0 ////

void __thiscall FUN_00bdc3e0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00373;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  piVar1 = param_1;
  local_4 = 0;
  if (param_1[3] != 1) {
    LH_Assert(&param_1,"File->ReferenceCount == 1\n");
    DebugBreak();
  }
  PKDiskManagersThreadedSingleHeadCManager_ReleaseFile(this,piVar1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bdc460 @ 00bdc460 ////

undefined4 __thiscall FUN_00bdc460(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_EAX;
  undefined1 local_5;
  int *local_4;
  
  local_4 = FUN_00bdcee0((uint *)((int)this + 0x58));
  if (local_4 == (int *)0x0) {
    LH_Assert(&local_5,"request != NULL\n");
    DebugBreak();
  }
  FUN_00be2010(local_4,param_1);
  local_4[2] = 0;
  local_4[3] = *(int *)(param_1 + 8);
  local_4[4] = *(int *)(param_1 + 0xc);
  local_4[5] = *(int *)(param_1 + 0x10);
  local_4[6] = *(int *)(param_1 + 0x14);
  local_4[7] = *(int *)(param_1 + 0x18);
  uVar1 = (**(code **)(*(int *)((int)this + 0x28) + 4))(&local_4);
  if ((char)uVar1 == '\0') {
    LH_Assert(&stack0x00000000,"ret\n");
    DebugBreak();
    uVar1 = extraout_EAX;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION PKDiskManagersThreadedSingleHeadCManager_QueueRead @ 00bdc510 ////

undefined4 __thiscall
PKDiskManagersThreadedSingleHeadCManager_QueueRead
          (void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX;
  undefined4 local_120;
  undefined1 local_119;
  undefined4 local_118 [2];
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00388;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_120 = FUN_00bdcee0((uint *)((int)this + 0x58));
  if (local_120 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDiskManagersThreadedSingleHeadCManager.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xb2);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  FUN_00bc1470(local_118,(LPCRITICAL_SECTION)((int)this + 4));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  PKCProtectionInstance_Leave(local_118);
  local_120[2] = param_1;
  local_120[3] = param_2;
  local_120[4] = param_3;
  local_120[5] = param_4;
  local_120[6] = param_5;
  local_120[7] = param_6;
  uVar2 = (**(code **)(*(int *)((int)this + 0x28) + 4))(&local_120);
  if ((char)uVar2 == '\0') {
    LH_Assert((void *)((int)&local_120 + 3),"ret\n");
    DebugBreak();
    uVar2 = extraout_EAX;
  }
  ExceptionList = pvStack_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00bdc690 @ 00bdc690 ////

uint __thiscall FUN_00bdc690(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 8) == 0) {
    LH_Assert(&param_1,"Request.File != NULL\n");
    DebugBreak();
  }
  uVar2 = PKDiskManagersThreadedSingleHeadCManager_ReadFileBytes
                    (*(HANDLE *)(*(int *)(iVar1 + 8) + 8),*(LPVOID *)(iVar1 + 0x14),
                     *(LONG *)(iVar1 + 0xc),*(DWORD *)(iVar1 + 0x10));
  uVar3 = PKDiskManagersThreadedSingleHeadCManager_ReleaseFile(this,*(int **)(iVar1 + 8));
  return CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar2);
}


//// FUNCTION FUN_00bdc6e0 @ 00bdc6e0 ////

uint FUN_00bdc6e0(int *param_1)

{
  int *piVar1;
  int *hObject;
  LPCSTR pCVar2;
  uint uVar3;
  undefined4 uVar4;
  WINBOOL WVar5;
  
  piVar1 = param_1;
  pCVar2 = (LPCSTR)FUN_00bbf3a0(param_1);
  uVar3 = FUN_00bdc0d0(pCVar2,&param_1);
  hObject = param_1;
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar4 = PKDiskManagersThreadedSingleHeadCManager_ReadFileBytes
                    (param_1,(LPVOID)piVar1[5],piVar1[3],piVar1[4]);
  WVar5 = CloseHandle(hObject);
  return CONCAT31((int3)((uint)WVar5 >> 8),(char)uVar4);
}


//// FUNCTION FUN_00bdc730 @ 00bdc730 ////

void __fastcall FUN_00bdc730(void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)FUN_00bdd260((int *)((int)param_1 + 0x28));
  while (piVar3 != (int *)0x0) {
    iVar1 = piVar3[6];
    if (piVar3[2] == 0) {
      uVar4 = FUN_00bdc6e0(piVar3);
      uVar2 = (undefined1)uVar4;
    }
    else {
      uVar4 = FUN_00bdc690(param_1,(int)piVar3);
      uVar2 = (undefined1)uVar4;
    }
    (**(code **)(*(int *)piVar3[7] + 4))(uVar2,iVar1);
    PKAllocatorsLinkTime_Free_00bdd330((void *)((int)param_1 + 0x58),piVar3);
    piVar3 = (int *)FUN_00bdd260((int *)((int)param_1 + 0x28));
  }
  return;
}


//// FUNCTION Dtor_00bdc7a0 @ 00bdc7a0 ////

void __fastcall Dtor_00bdc7a0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_18;
  undefined4 *local_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d003ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d9f88c;
  local_4 = 6;
  local_18 = 0;
  local_14 = param_1;
  (**(code **)(param_1[10] + 4))(&local_18);
  pvVar1 = (void *)PKCAutoDelete_Release_00bdd010(param_1 + 0x24);
  if (pvVar1 != (void *)0x0) {
    Dtor_00bed120((void *)((int)pvVar1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x24];
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
  if (pvVar1 != (void *)0x0) {
    Dtor_00bed120((void *)((int)pvVar1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[0x21] = &PTR_LAB_00d9e7b0;
  puStack_8._0_1_ = 7;
  local_14 = param_1 + 0x16;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x1b));
  puStack_8._0_1_ = 3;
  PKAllocatorsCPooledMemory_FreeBlocks((int)(param_1 + 0x16));
  puStack_8._0_1_ = 2;
  Dtor_00bdcdc0(param_1 + 10);
  puStack_8._0_1_ = 1;
  param_1[7] = &PTR_LAB_00d9f6e8;
  RedBlackTree_Dtor(param_1 + 8);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00d9f6a8;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION Ctor_vt00d9f88c_00bdc8a0 @ 00bdc8a0 ////

undefined4 * __thiscall Ctor_vt00d9f88c_00bdc8a0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00457;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9f88c;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 4));
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9f6e8;
  RedBlackTree_Ctor((int *)((int)this + 0x20));
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9f864;
  local_4._0_1_ = 2;
  Ctor_vt00d9f710_00bdcd10((undefined4 *)((int)this + 0x28));
  local_4._0_1_ = 3;
  FUN_00c0dc40((void *)((int)this + 0x58),0x20,0x400);
  local_4._0_1_ = 4;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x84) = &PTR_ScalarDeletingDtor_00bdcfb0_00d9f724;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = param_1;
  local_4._0_1_ = 7;
  *(void **)((int)this + 0x8c) = this;
  *(code **)((int)this + 0x88) = FUN_00bdc730;
  puVar1 = operator_new(0x14);
  local_4._0_1_ = 8;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_00d9e840;
    puVar1[1] = (undefined4 *)((int)this + 0x84);
    PKCThreadManager_StartThread(puVar1 + 2,puVar1,(SIZE_T *)0x0);
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  PKCAutoDelete_Set_00bc86b0((undefined4 *)((int)this + 0x90),(int)puVar1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION SetVtable_00d9f6a8_00bdc9d0 @ 00bdc9d0 ////

void __fastcall SetVtable_00d9f6a8_00bdc9d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6a8;
  return;
}


//// FUNCTION FUN_00bdca10 @ 00bdca10 ////

LPCRITICAL_SECTION __fastcall FUN_00bdca10(LPCRITICAL_SECTION param_1)

{
  Wrap_InitializeCriticalSection_00bcea70(param_1);
  return param_1;
}


//// FUNCTION FUN_00bdca60 @ 00bdca60 ////

int * __fastcall FUN_00bdca60(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00d9f6b4_00bdca80 @ 00bdca80 ////

void __fastcall SetVtable_00d9f6b4_00bdca80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6b4;
  return;
}


//// FUNCTION FUN_00bdca90 @ 00bdca90 ////

void * __fastcall FUN_00bdca90(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00478;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0dc40(param_1,0x20,0x400);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)param_1 + 0x14));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bdcb30 @ 00bdcb30 ////

undefined4 * __fastcall FUN_00bdcb30(undefined4 *param_1)

{
  Ctor_vt00d9feb8_00be1e00(param_1);
  return param_1;
}


//// FUNCTION FUN_00bdcb80 @ 00bdcb80 ////

void __fastcall FUN_00bdcb80(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00bdcba0 @ 00bdcba0 ////

void __fastcall FUN_00bdcba0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00498;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x14));
  local_4 = 0xffffffff;
  PKAllocatorsCPooledMemory_FreeBlocks(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION SetVtable_00d9e7b0_00bdcbf0 @ 00bdcbf0 ////

void __fastcall SetVtable_00d9e7b0_00bdcbf0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e7b0;
  return;
}


//// FUNCTION Dtor_00bdcca0 @ 00bdcca0 ////

void __fastcall Dtor_00bdcca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6e8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00d9f710_00bdcd10 @ 00bdcd10 ////

undefined4 * __fastcall Ctor_vt00d9f710_00bdcd10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d004c3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bdcf70_00d9f710;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bdcd80 @ 00bdcd80 ////

uint __thiscall FUN_00bdcd80(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION Dtor_00bdcdc0 @ 00bdcdc0 ////

void __fastcall Dtor_00bdcdc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d004ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bdcf70_00d9f710;
  local_4 = 2;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00d9f6b4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bdce40 @ 00bdce40 ////

bool __fastcall FUN_00bdce40(int param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x24);
  PKCProtectionInstance_Leave(local_8);
  return iVar1 == 0;
}


//// FUNCTION FUN_00bdce70 @ 00bdce70 ////

uint __thiscall FUN_00bdce70(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  if (*(int *)((int)this + 0x24) == 0) {
    uVar1 = PKCProtectionInstance_Leave(local_8);
    return uVar1 & 0xffffff00;
  }
  *param_1 = *(undefined4 *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x2c) * 4);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
  *(uint *)((int)this + 0x2c) = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
  uVar2 = PKCProtectionInstance_Leave(local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00bdcee0 @ 00bdcee0 ////

int * __fastcall FUN_00bdcee0(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00511;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 5));
  piVar1 = PKAllocatorsCPooledMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 5));
  local_4 = 0;
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    Ctor_vt00d9feb8_00be1e00(piVar1);
    piVar2 = piVar1;
  }
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION ScalarDeletingDtor_00bdcf70 @ 00bdcf70 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdcf70(void *this,byte param_1)

{
  Dtor_00bdcdc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdcf90 @ 00bdcf90 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdcf90(void *this,byte param_1)

{
  PKStringsCHeapString_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdcfb0 @ 00bdcfb0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdcfb0(void *this,byte param_1)

{
  SetVtable_00d9e7b0_00bdcbf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9f6e8_00bdcfd0 @ 00bdcfd0 ////

undefined4 * __fastcall Ctor_vt00d9f6e8_00bdcfd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6e8;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bdcff0 @ 00bdcff0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdcff0(void *this,byte param_1)

{
  Dtor_00bdcca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION PKCAutoDelete_Release_00bdd010 @ 00bdd010 ////

int __fastcall PKCAutoDelete_Release_00bdd010(int *param_1)

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
  
  puStack_8 = &LAB_00d0052b;
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


//// FUNCTION Dtor_00bdd0e0 @ 00bdd0e0 ////

void __fastcall Dtor_00bdd0e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6e8;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bdd0f0 @ 00bdd0f0 ////

uint __thiscall FUN_00bdd0f0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar1 = FUN_00bdd190((void *)((int)this + 0x20),param_1);
  if ((char)uVar1 == '\0') {
    local_4 = 0xffffffff;
    uVar2 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
  local_4 = 0xffffffff;
  uVar1 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bdd190 @ 00bdd190 ////

undefined4 __thiscall FUN_00bdd190(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == *(int *)((int)this + 4)) {
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = iVar1 * 2;
    }
    uVar3 = FUN_00bdd1e0(this,uVar2);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
  }
  iVar1 = *(int *)this;
  *(undefined4 *)
   (iVar1 + ((uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) % *(uint *)((int)this + 8))
            * 4) = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00bdd1e0 @ 00bdd1e0 ////

uint __thiscall FUN_00bdd1e0(void *this,uint param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_1 != *(uint *)((int)this + 8)) {
    if (param_1 < *(uint *)((int)this + 4)) {
      return in_EAX & 0xffffff00;
    }
    pvVar3 = (void *)0x0;
    if (param_1 != 0) {
      pvVar3 = operator_new(param_1 * 4);
      uVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          uVar1 = *(int *)((int)this + 0xc) + uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)((int)pvVar3 + uVar2 * 4 + -4) =
               *(undefined4 *)(*(int *)this + (uVar1 % *(uint *)((int)this + 8)) * 4);
        } while (uVar2 < *(uint *)((int)this + 4));
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(void **)this = pvVar3;
    in_EAX = 0;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00bdd260 @ 00bdd260 ////

undefined4 __fastcall FUN_00bdd260(int *param_1)

{
  LPCSTR pCVar1;
  undefined **ppuStack_118;
  char local_114 [255];
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d0056b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_114[0] = (**(code **)(*param_1 + 8))(local_114);
  if (local_114[0] == '\0') {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = local_114[0];
    LH_LogErrorMessage(&ppuStack_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h")
    ;
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar1);
    DebugBreak();
  }
  ExceptionList = pvStack_14;
  return 0;
}


//// FUNCTION PKAllocatorsLinkTime_Free_00bdd330 @ 00bdd330 ////

void __thiscall PKAllocatorsLinkTime_Free_00bdd330(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00d0058b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsLinkTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  PKStringsCHeapString_Dtor(param_1);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0x14));
  PKAllocatorsCPooledMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0x14));
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9f864_00bdd520 @ 00bdd520 ////

undefined4 * __fastcall Ctor_vt00d9f864_00bdd520(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f6e8;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9f864;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bdd540 @ 00bdd540 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdd540(void *this,byte param_1)

{
  Dtor_00bdd0e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdd560 @ 00bdd560 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdd560(void *this,byte param_1)

{
  Dtor_00bdc7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bdd5c0 @ 00bdd5c0 ////

void FUN_00bdd5c0(int *param_1)

{
  if (param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bdd5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  return;
}


//// FUNCTION FUN_00bdd5e0 @ 00bdd5e0 ////

void __fastcall FUN_00bdd5e0(int *param_1)

{
  (**(code **)(*(int *)param_1[1] + 0xc))();
  FUN_00bdd5c0(param_1);
  return;
}


//// FUNCTION Ctor_vt00d9f8d0_00bdd650 @ 00bdd650 ////

undefined4 * __thiscall Ctor_vt00d9f8d0_00bdd650(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00610;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9f8d0;
  *(undefined4 *)((int)this + 4) = param_1;
  FUN_00c0dc40((void *)((int)this + 8),0xc,0x400);
  local_4 = CONCAT31(local_4._1_3_,1);
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)this + 0x1c));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION SetVtable_00d9f8a0_00bdda00 @ 00bdda00 ////

void __fastcall SetVtable_00d9f8a0_00bdda00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f8a0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bdda60 @ 00bdda60 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdda60(void *this,byte param_1)

{
  SetVtable_00d9f898_00bdda80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9f898_00bdda80 @ 00bdda80 ////

void __fastcall SetVtable_00d9f898_00bdda80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f898;
  return;
}


//// FUNCTION FUN_00bdda90 @ 00bdda90 ////

void __fastcall FUN_00bdda90(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d005c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x14));
  local_4 = 0xffffffff;
  PKAllocatorsCPooledMemory_FreeBlocks(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bddae0 @ 00bddae0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bddae0(void *this,byte param_1)

{
  SetVtable_00d9f8a0_00bddb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9f8a0_00bddb00 @ 00bddb00 ////

void __fastcall SetVtable_00d9f8a0_00bddb00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f8a0;
  return;
}


//// FUNCTION FUN_00bddb10 @ 00bddb10 ////

void * __fastcall FUN_00bddb10(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d005e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0dc40(param_1,0xc,0x400);
  local_4 = 0;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)((int)param_1 + 0x14));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bddb60 @ 00bddb60 ////

int * __fastcall FUN_00bddb60(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)(param_1 + 5));
  piVar1 = PKAllocatorsCPooledMemory_Allocate(param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)(param_1 + 5));
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    piVar1[2] = 0;
    *piVar1 = (int)&PTR_LAB_00d9f8b4;
    piVar2 = piVar1;
  }
  return piVar2;
}


//// FUNCTION ScalarDeletingDtor_00bddba0 @ 00bddba0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bddba0(void *this,byte param_1)

{
  Dtor_00bddbc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bddbc0 @ 00bddbc0 ////

void __fastcall Dtor_00bddbc0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d00660;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 7));
  local_4 = (uint)local_4._1_3_ << 8;
  PKAllocatorsCPooledMemory_FreeBlocks((int)(param_1 + 2));
  *param_1 = &PTR_LAB_00d9f6a8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKAllocatorsLinkTime_Free_00bddc20 @ 00bddc20 ////

void __thiscall PKAllocatorsLinkTime_Free_00bddc20(void *this,int *param_1)

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
  puStack_8 = &LAB_00d0067b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
    local_4 = param_1;
    ExceptionList = &pvStack_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsLinkTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = (int *)0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  (**(code **)(*param_1 + 4))(0);
  Wrap_EnterCriticalSection_00bcea90((LPCRITICAL_SECTION)((int)this + 0x14));
  PKAllocatorsCPooledMemory_Free(this,param_1);
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)((int)this + 0x14));
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bddd30 @ 00bddd30 ////

void FUN_00bddd30(undefined4 param_1,undefined4 param_2)

{
  DAT_00ea5104 = param_1;
  DAT_00ea5108 = param_2;
  return;
}


//// FUNCTION FUN_00bddd50 @ 00bddd50 ////

void __thiscall FUN_00bddd50(void *this,float *param_1,float *param_2)

{
  *param_1 = (float)*(byte *)this * 0.007874016;
  *param_2 = (float)*(byte *)((int)this + 1) * 0.007874016;
  return;
}


//// FUNCTION FUN_00bddd90 @ 00bddd90 ////

float10 __fastcall FUN_00bddd90(int param_1)

{
  return (float10)*(ushort *)(param_1 + 0xc) * (float10)0.01;
}


//// FUNCTION FUN_00bdddb0 @ 00bdddb0 ////

float10 __fastcall FUN_00bdddb0(int param_1)

{
  return (float10)*(byte *)(param_1 + 2) * (float10)0.01;
}


//// FUNCTION FUN_00bdddd0 @ 00bdddd0 ////

ulonglong FUN_00bdddd0(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00bdddf0 @ 00bdddf0 ////

float10 FUN_00bdddf0(ushort param_1)

{
  return (float10)param_1 * (float10)10000.0 * (float10)1.5259022e-05;
}


//// FUNCTION FUN_00bdde10 @ 00bdde10 ////

void __fastcall FUN_00bdde10(int param_1)

{
  FUN_00bdddf0(*(ushort *)(param_1 + 0x14));
  return;
}


//// FUNCTION FUN_00bdde20 @ 00bdde20 ////

void __fastcall FUN_00bdde20(int param_1)

{
  FUN_00bdddf0(*(ushort *)(param_1 + 0x16));
  return;
}


//// FUNCTION GetField_0xe_00bdde30 @ 00bdde30 ////

undefined2 __fastcall GetField_0xe_00bdde30(int param_1)

{
  return *(undefined2 *)(param_1 + 0xe);
}


//// FUNCTION FUN_00bdde40 @ 00bdde40 ////

int __fastcall FUN_00bdde40(int param_1)

{
  return (int)*(short *)(param_1 + 6);
}


//// FUNCTION GetField_8_00bdde50 @ 00bdde50 ////

undefined4 __fastcall GetField_8_00bdde50(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION GetField_4_00bdde60 @ 00bdde60 ////

undefined2 __fastcall GetField_4_00bdde60(int param_1)

{
  return *(undefined2 *)(param_1 + 4);
}


//// FUNCTION GetField_0x10_00bdde70 @ 00bdde70 ////

undefined2 __fastcall GetField_0x10_00bdde70(int param_1)

{
  return *(undefined2 *)(param_1 + 0x10);
}


//// FUNCTION FUN_00bdde80 @ 00bdde80 ////

byte __fastcall FUN_00bdde80(int param_1)

{
  return *(byte *)(param_1 + 3) & 1;
}


//// FUNCTION FUN_00bdde90 @ 00bdde90 ////

byte __fastcall FUN_00bdde90(int param_1)

{
  return *(byte *)(param_1 + 3) >> 1 & 1;
}


//// FUNCTION FUN_00bddea0 @ 00bddea0 ////

uint __fastcall FUN_00bddea0(int param_1)

{
  return (*(byte *)(param_1 + 3) & 4) >> 2;
}


//// FUNCTION FUN_00bddeb0 @ 00bddeb0 ////

float10 __fastcall FUN_00bddeb0(int param_1)

{
  return (float10)*(ushort *)(param_1 + 0x12) * (float10)1.5259022e-05;
}


//// FUNCTION FUN_00bdded0 @ 00bdded0 ////

uint __thiscall FUN_00bdded0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  *param_2 = *(undefined4 *)((int)this + 0x20);
  *param_3 = *(undefined4 *)((int)this + 0x24);
  return (*(byte *)((int)this + 3) & 8) >> 3;
}


//// FUNCTION FUN_00bddf00 @ 00bddf00 ////

void __fastcall FUN_00bddf00(undefined1 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = (char)uVar1;
  uVar1 = FUN_00acd42c();
  param_1[1] = (char)uVar1;
  return;
}


//// FUNCTION FUN_00bddf30 @ 00bddf30 ////

void __fastcall FUN_00bddf30(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(short *)(param_1 + 0xc) = (short)uVar1;
  return;
}


//// FUNCTION FUN_00bddf50 @ 00bddf50 ////

void __fastcall FUN_00bddf50(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(char *)(param_1 + 2) = (char)uVar1;
  return;
}


//// FUNCTION FUN_00bddf70 @ 00bddf70 ////

void __fastcall FUN_00bddf70(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00bdddd0();
  *(short *)(param_1 + 0x14) = (short)uVar1;
  return;
}


//// FUNCTION FUN_00bddf90 @ 00bddf90 ////

void __fastcall FUN_00bddf90(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00bdddd0();
  *(short *)(param_1 + 0x16) = (short)uVar1;
  return;
}


//// FUNCTION FUN_00bddfb0 @ 00bddfb0 ////

void __thiscall FUN_00bddfb0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0xe) = param_1;
  return;
}


//// FUNCTION FUN_00bddfc0 @ 00bddfc0 ////

void __thiscall FUN_00bddfc0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 6) = param_1;
  return;
}


//// FUNCTION FUN_00bddfd0 @ 00bddfd0 ////

void __thiscall FUN_00bddfd0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00bddfe0 @ 00bddfe0 ////

void __thiscall FUN_00bddfe0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00bddff0 @ 00bddff0 ////

void __thiscall FUN_00bddff0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x10) = param_1;
  return;
}


//// FUNCTION FUN_00bde000 @ 00bde000 ////

void __thiscall FUN_00bde000(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(byte *)((int)this + 3) = *(byte *)((int)this + 3) | 1;
    return;
  }
  *(byte *)((int)this + 3) = *(byte *)((int)this + 3) & 0xfe;
  return;
}


//// FUNCTION FUN_00bde020 @ 00bde020 ////

void __thiscall FUN_00bde020(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(byte *)((int)this + 3) = *(byte *)((int)this + 3) | 2;
    return;
  }
  *(byte *)((int)this + 3) = *(byte *)((int)this + 3) & 0xfd;
  return;
}


//// FUNCTION FUN_00bde040 @ 00bde040 ////

void __thiscall FUN_00bde040(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(byte *)((int)this + 3) = *(byte *)((int)this + 3) | 4;
    return;
  }
  *(byte *)((int)this + 3) = *(byte *)((int)this + 3) & 0xfb;
  return;
}


//// FUNCTION FUN_00bde060 @ 00bde060 ////

void __fastcall FUN_00bde060(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(short *)(param_1 + 0x12) = (short)uVar1;
  return;
}


//// FUNCTION GetField_0x18_00bde080 @ 00bde080 ////

undefined2 __fastcall GetField_0x18_00bde080(int param_1)

{
  return *(undefined2 *)(param_1 + 0x18);
}


//// FUNCTION FUN_00bde090 @ 00bde090 ////

void __thiscall FUN_00bde090(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x18) = param_1;
  return;
}


//// FUNCTION FUN_00bde0a0 @ 00bde0a0 ////

int __fastcall FUN_00bde0a0(int param_1)

{
  return (int)*(short *)(param_1 + 0x1a);
}


//// FUNCTION FUN_00bde0b0 @ 00bde0b0 ////

void __thiscall FUN_00bde0b0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x1a) = param_1;
  return;
}


//// FUNCTION FUN_00bde0c0 @ 00bde0c0 ////

void __thiscall
FUN_00bde0c0(void *this,char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  if (param_1 == '\0') {
    bVar1 = *(byte *)((int)this + 3) & 0xf7;
  }
  else {
    bVar1 = *(byte *)((int)this + 3) | 8;
  }
  *(byte *)((int)this + 3) = bVar1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return;
}


//// FUNCTION FUN_00bde0f0 @ 00bde0f0 ////

void __fastcall FUN_00bde0f0(undefined1 *param_1)

{
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  int extraout_ECX;
  void *this_04;
  void *this_05;
  
  param_1[3] = 0;
  FUN_00bddf00(param_1);
  FUN_00bddf30((int)param_1);
  FUN_00bddf50((int)param_1);
  FUN_00bddf70((int)param_1);
  FUN_00bddf90((int)param_1);
  FUN_00bddfb0(param_1,1);
  FUN_00bddfc0(this,0);
  FUN_00bddfd0(this_00,0);
  FUN_00bddfe0(this_01,0);
  FUN_00bddff0(this_02,0);
  FUN_00bde000(this_03,'\x01');
  FUN_00bde060(extraout_ECX);
  FUN_00bde090(param_1,0);
  FUN_00bde0b0(this_04,0);
  FUN_00bde0c0(this_05,'\0',0,0,0);
  return;
}


//// FUNCTION FUN_00bde190 @ 00bde190 ////

undefined1 * __fastcall FUN_00bde190(undefined1 *param_1)

{
  FUN_00bde0f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00bde1c0 @ 00bde1c0 ////

void FUN_00bde1c0(void)

{
  return;
}


//// FUNCTION FUN_00bde1e0 @ 00bde1e0 ////

void FUN_00bde1e0(void)

{
  return;
}


//// FUNCTION FUN_00bde260 @ 00bde260 ////

void FUN_00bde260(void *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  char *local_8;
  int local_4;
  
  FUN_00bbfaa0(param_1,"");
  FUN_00c0e570(&local_18);
  LH_LogErrorMessage(param_1,"LLA GameCODA Wrapper, ");
  FUN_00bbe970(local_18);
  LH_LogErrorMessage(param_1,".");
  FUN_00bbe970(local_14);
  LH_LogErrorMessage(param_1,".");
  FUN_00bbe970(local_10);
  LH_LogErrorMessage(param_1,", ");
  LH_LogErrorMessage(param_1,"Build(");
  LH_LogErrorMessage(param_1,local_c);
  LH_LogErrorMessage(param_1,"), ");
  LH_LogErrorMessage(param_1,"Platform(");
  LH_LogErrorMessage(param_1,local_8);
  LH_LogErrorMessage(param_1,")");
  if (local_4 != 0) {
    LH_LogErrorMessage(param_1,", EVALUATION!!!");
  }
  return;
}


//// FUNCTION FUN_00bde340 @ 00bde340 ////

void FUN_00bde340(void *param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00c0e530(&local_8,&local_4);
  LH_LogErrorMessage(param_1,"CODA Memory usage - Mem:");
  LH_PrintResourceID(param_1,local_8);
  LH_LogErrorMessage(param_1,", MaxMemory:");
  LH_PrintResourceID(param_1,local_4);
  return;
}


//// FUNCTION FUN_00bde390 @ 00bde390 ////

void __thiscall FUN_00bde390(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = *(undefined4 *)((int)this + 4);
  *param_1 = *(undefined4 *)this;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


//// FUNCTION FUN_00bde3f0 @ 00bde3f0 ////

void __thiscall FUN_00bde3f0(void *this,void *param_1,void *param_2,void *param_3)

{
  float *pfVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c [3];
  
  pfVar1 = (float *)FUN_00bde390(param_1,&local_18);
  local_30 = *pfVar1;
  local_2c = pfVar1[1];
  local_28 = pfVar1[2];
  pfVar1 = (float *)FUN_00bde390(param_2,&local_24);
  local_18 = *pfVar1;
  local_14 = pfVar1[1];
  local_10 = pfVar1[2];
  pfVar1 = (float *)FUN_00bde390(param_3,local_c);
  local_24 = *pfVar1;
  local_20 = pfVar1[1];
  local_1c = pfVar1[2];
  FUN_00c0e920(*(void **)((int)this + 0x48),&local_30);
  FUN_00c0e980(*(void **)((int)this + 0x48),&local_18,&local_24);
  return;
}


//// FUNCTION FUN_00bde520 @ 00bde520 ////

undefined4 FUN_00bde520(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00c0ec80(&local_8,&local_4);
  FUN_00c0e770();
  return local_8;
}


//// FUNCTION FUN_00bde560 @ 00bde560 ////

void FUN_00bde560(int param_1)

{
  FUN_00c0ee90(param_1);
  return;
}


//// FUNCTION FUN_00bde570 @ 00bde570 ////

void FUN_00bde570(int param_1)

{
  FUN_00c0eb90(param_1);
  return;
}


//// FUNCTION Dtor_00bde7c0 @ 00bde7c0 ////

void __fastcall Dtor_00bde7c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d0076f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bdf8b0_00d9fb18;
  local_4 = 6;
  iVar2 = RedBlackTree_GetMinObject(param_1 + 0xb);
  while (iVar2 != 0) {
    FUN_00bde560(iVar2);
    iVar2 = RedBlackTree_GetMinObject(param_1 + 0xb);
  }
  iVar2 = RedBlackTree_GetMinObject(param_1 + 5);
  while (iVar2 != 0) {
    FUN_00bde570(iVar2);
    iVar2 = RedBlackTree_GetMinObject(param_1 + 5);
  }
  iVar2 = RedBlackTree_GetMinObject(param_1 + 8);
  if (iVar2 != 0) {
    do {
      FUN_00bcff70(param_1 + 8,param_1 + 7,iVar2);
      iVar2 = RedBlackTree_GetMinObject(param_1 + 8);
    } while (iVar2 != 0);
  }
  iVar2 = RedBlackTree_GetMinObject(param_1 + 2);
  if (iVar2 != 0) {
    do {
      FUN_00bcff70(param_1 + 2,param_1 + 1,iVar2);
      iVar2 = RedBlackTree_GetMinObject(param_1 + 2);
    } while (iVar2 != 0);
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    FUN_00c0e880((undefined4 *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    FUN_00c0e5d0((int *)param_1[0x11]);
    param_1[0x11] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xf];
  local_4._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    param_1[0xf] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xd];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    param_1[0xd] = 0;
  }
  local_4._0_1_ = 3;
  param_1[10] = &PTR_LAB_00d9fa5c;
  RedBlackTree_Dtor(param_1 + 0xb);
  local_4._0_1_ = 2;
  param_1[7] = &PTR_LAB_00d9fa5c;
  RedBlackTree_Dtor(param_1 + 8);
  local_4._0_1_ = 1;
  param_1[4] = &PTR_LAB_00d9fa34;
  RedBlackTree_Dtor(param_1 + 5);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[1] = &PTR_LAB_00d9fa34;
  RedBlackTree_Dtor(param_1 + 2);
  *param_1 = &PTR_LAB_00d9f920;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION LLACodaCSystem_Ctor @ 00bde970 ////

undefined4 * __thiscall LLACodaCSystem_Ctor(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  undefined1 local_119;
  void *local_118;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d007ee;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00bdf8b0_00d9fb18;
  local_4 = 0;
  *piVar1 = (int)&PTR_LAB_00d9fa34;
  local_114 = this;
  RedBlackTree_Ctor((int *)((int)this + 8));
  *piVar1 = (int)&PTR_LAB_00d9fac8;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9fa34;
  RedBlackTree_Ctor((int *)((int)this + 0x14));
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9fac8;
  local_4._0_1_ = 2;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9fa5c;
  RedBlackTree_Ctor((int *)((int)this + 0x20));
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9faf0;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00d9fa5c;
  RedBlackTree_Ctor((int *)((int)this + 0x2c));
  *(undefined ***)((int)this + 0x28) = &PTR_LAB_00d9faf0;
  local_4._0_1_ = 4;
  FUN_00bdef20((void *)((int)this + 0x34),*(int *)(param_1 + 0xc));
  local_4._0_1_ = 5;
  FUN_00bdefd0((void *)((int)this + 0x3c),*(int *)(param_1 + 8));
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x50) = *(undefined1 *)(param_1 + 0x14);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar2 = PKCAutoDeleteArray_At_00bdf5a0((void *)((int)this + 0x3c),uVar4);
      *(uint *)(iVar2 + 8) = uVar4;
      iVar2 = PKCAutoDeleteArray_At_00bdf5a0((void *)((int)this + 0x3c),uVar4);
      *(void **)(iVar2 + 4) = this;
      iVar2 = PKCAutoDeleteArray_At_00bdf5a0((void *)((int)this + 0x3c),uVar4);
      FUN_00bcfac0((void *)((int)this + 8),piVar1,iVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_118 = (void *)((int)this + 0x20);
    do {
      this_00 = (void *)((int)this + 0x34);
      iVar2 = PKCAutoDeleteArray_At_00bdf490(this_00,uVar4);
      *(uint *)(iVar2 + 8) = uVar4;
      iVar2 = PKCAutoDeleteArray_At_00bdf490(this_00,uVar4);
      *(void **)(iVar2 + 4) = this;
      iVar2 = PKCAutoDeleteArray_At_00bdf490(this_00,uVar4);
      FUN_00bcfac0(local_118,(int *)((int)this + 0x1c),iVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xc));
  }
  if (*(int *)((int)this + 0x44) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4._0_1_ = 7;
    LH_LogErrorMessage(&local_110,".\\LLACodaCSystem.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x92);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: Could not initialise CODA");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar3);
    local_4 = CONCAT31(local_4._1_3_,6);
    DebugBreak();
  }
  FUN_00c0e6e0(0);
  FUN_00c0e750(0.0);
  FUN_00c0e7d0(0);
  iVar2 = FUN_00c0e870();
  *(int *)((int)this + 0x48) = iVar2;
  if (iVar2 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = CONCAT31(local_4._1_3_,8);
    LH_LogErrorMessage(&local_110,".\\LLACodaCSystem.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x9f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Error: Could initialise coda listener");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar3);
    DebugBreak();
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00bdec50 @ 00bdec50 ////

void __fastcall FUN_00bdec50(int param_1)

{
  undefined **local_18;
  undefined **local_14;
  undefined ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0e780();
  local_18 = &PTR_LAB_00d9fa2c;
  local_10 = &local_18;
  local_14 = &PTR_LAB_00d9fa84;
  local_4 = 1;
  RedBlackTree_ForEach((void *)(param_1 + 0x14),&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LLACodaCSystem_ConfigureDirectSound @ 00bdecc0 ////

undefined4 * __fastcall LLACodaCSystem_ConfigureDirectSound(int *param_1)

{
  LPCSTR pCVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_1d1;
  void *local_1d0;
  int local_1cc [2];
  uint local_1c4;
  undefined4 local_1c0;
  int local_1b8;
  undefined **local_1b0;
  undefined1 local_1ac;
  undefined1 local_ad;
  undefined4 local_ac [24];
  int local_4c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0082b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0ef70();
  FUN_00c0e4e0(local_ac);
  FUN_00c0e550(local_1cc);
  local_1b8 = *param_1;
  local_1c4 = (uint)(param_1[4] * local_4c) / 1000;
  local_1c0 = 1;
  if (local_1b8 != 0) {
    local_1b0 = &PTR_LAB_00d9db7c;
    local_1ac = 0;
    local_ad = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_1b0,".\\LLACodaCSystem.cpp");
    LH_LogErrorMessage(&local_1b0,"(");
    FUN_00bbe970(0x5d);
    LH_LogErrorMessage(&local_1b0,") : ");
    LH_LogErrorMessage(&local_1b0,"Setting the DirectSound window handle to ");
    FUN_00bbf310(&local_1b0,*param_1);
    LH_LogErrorMessage(&local_1b0,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_1b0);
    LH_Assert(&local_1d1,pCVar1);
    local_4 = 0xffffffff;
  }
  FUN_00c0e4c0();
  uVar2 = FUN_00c0e5b0((undefined4 *)0x0,local_1cc);
  if (uVar2 == 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  local_1d0 = operator_new(0x54);
  local_4 = 1;
  if (local_1d0 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = LLACodaCSystem_Ctor(local_1d0,(int)param_1,uVar2);
  }
  local_4 = 0xffffffff;
  if (puVar3 == (undefined4 *)0x0) {
    LH_Assert(&local_1d1,"system != NULL\n");
    DebugBreak();
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION SetVtable_00d9f920_00bdee80 @ 00bdee80 ////

void __fastcall SetVtable_00d9f920_00bdee80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f920;
  return;
}


//// FUNCTION FUN_00bdeee0 @ 00bdeee0 ////

int * __fastcall FUN_00bdeee0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bdef00 @ 00bdef00 ////

int * __fastcall FUN_00bdef00(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bdef20 @ 00bdef20 ////

undefined4 * __thiscall FUN_00bdef20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0069b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(param_1 * 0x7c + 4);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    _eh_vector_constructor_iterator_(piVar2,0x7c,param_1,Ctor_vt00da32c0_00c0ece0,Dtor_00c0ed40);
  }
  *(int **)this = piVar2;
  *(int *)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bdef90 @ 00bdef90 ////

void __fastcall FUN_00bdef90(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1[-1] != 0) {
    (**(code **)*puVar1)(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar1 + -1);
}


//// FUNCTION FUN_00bdefd0 @ 00bdefd0 ////

undefined4 * __thiscall FUN_00bdefd0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d006bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(param_1 * 0x6c + 4);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
    _eh_vector_constructor_iterator_(piVar2,0x6c,param_1,Ctor_vt00da3284_00c0e9d0,Dtor_00c0ea30);
  }
  *(int **)this = piVar2;
  *(int *)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bdf040 @ 00bdf040 ////

void __fastcall FUN_00bdf040(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if (puVar1[-1] != 0) {
    (**(code **)*puVar1)(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar1 + -1);
}


//// FUNCTION SetVtable_00d9f9dc_00bdf1d0 @ 00bdf1d0 ////

void __fastcall SetVtable_00d9f9dc_00bdf1d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9dc;
  return;
}


//// FUNCTION SetVtable_00d9f9d4_00bdf2c0 @ 00bdf2c0 ////

void __fastcall SetVtable_00d9f9d4_00bdf2c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9d4;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bdf2d0 @ 00bdf2d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf2d0(void *this,byte param_1)

{
  SetVtable_00d9f9d4_00bdf2c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bdf360 @ 00bdf360 ////

void __fastcall Dtor_00bdf360(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa34;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bdf420 @ 00bdf420 ////

void __fastcall Dtor_00bdf420(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa5c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION PKCAutoDeleteArray_At_00bdf490 @ 00bdf490 ////

int __thiscall PKCAutoDeleteArray_At_00bdf490(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d006db;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1 * 0x7c + *(int *)this;
}


//// FUNCTION PKCAutoDeleteArray_At_00bdf5a0 @ 00bdf5a0 ////

int __thiscall PKCAutoDeleteArray_At_00bdf5a0(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d006fb;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return param_1 * 0x6c + *(int *)this;
}


//// FUNCTION ScalarDeletingDtor_00bdf6f0 @ 00bdf6f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf6f0(void *this,byte param_1)

{
  SetVtable_00d9f9dc_00bdf1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9fa34_00bdf710 @ 00bdf710 ////

undefined4 * __fastcall Ctor_vt00d9fa34_00bdf710(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa34;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9fa5c_00bdf730 @ 00bdf730 ////

undefined4 * __fastcall Ctor_vt00d9fa5c_00bdf730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa5c;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bdf750 @ 00bdf750 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf750(void *this,byte param_1)

{
  Dtor_00bdf360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdf770 @ 00bdf770 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf770(void *this,byte param_1)

{
  Dtor_00bdf420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bdf790 @ 00bdf790 ////

void __fastcall Dtor_00bdf790(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa34;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bdf7a0 @ 00bdf7a0 ////

void __fastcall Dtor_00bdf7a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa5c;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bdf7d0 @ 00bdf7d0 ////

void __thiscall FUN_00bdf7d0(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00848;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00d9fa84;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  RedBlackTree_ForEach(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9fac8_00bdf820 @ 00bdf820 ////

undefined4 * __fastcall Ctor_vt00d9fac8_00bdf820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa34;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9fac8;
  return param_1;
}


//// FUNCTION Ctor_vt00d9faf0_00bdf840 @ 00bdf840 ////

undefined4 * __fastcall Ctor_vt00d9faf0_00bdf840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fa5c;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9faf0;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bdf860 @ 00bdf860 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf860(void *this,byte param_1)

{
  Dtor_00bdf790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdf880 @ 00bdf880 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf880(void *this,byte param_1)

{
  Dtor_00bdf7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bdf8b0 @ 00bdf8b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdf8b0(void *this,byte param_1)

{
  Dtor_00bde7c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00bdf8d0 @ 00bdf8d0 ////

void __fastcall SetVtable_00d9fbe8_00bdf8d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION Dtor_00bdf940 @ 00bdf940 ////

void __fastcall Dtor_00bdf940(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d00894;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00bdfa20_00d9fbec;
  local_4 = 4;
  FUN_00c0f4d0((int)param_1);
  local_4._0_1_ = 3;
  Dtor_00c0f200(param_1 + 0x10);
  local_4._0_1_ = 2;
  Dtor_00c0f200(param_1 + 0xb);
  local_4._0_1_ = 1;
  Dtor_00c0f200(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  Dtor_00c0f200(param_1 + 1);
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bdfa20 @ 00bdfa20 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdfa20(void *this,byte param_1)

{
  Dtor_00bdf940(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00bdfa90 @ 00bdfa90 ////

void __fastcall FUN_00bdfa90(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  return;
}


//// FUNCTION FUN_00bdfab0 @ 00bdfab0 ////

undefined4 __fastcall FUN_00bdfab0(int *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x60e) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00bdfabe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x1c))();
    return uVar1;
  }
  if ((uint)param_1[0x181] <= (uint)param_1[0x182]) {
    if (*(char *)((int)param_1 + 0x60d) == '\0') {
      *(undefined1 *)((int)param_1 + 0x60d) = 1;
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x60d) = 0;
    param_1[0x182] = 0;
  }
  return 1;
}


//// FUNCTION SetVtable_00d9fbe8_00bdfb50 @ 00bdfb50 ////

void __fastcall SetVtable_00d9fbe8_00bdfb50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bdfb70 @ 00bdfb70 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdfb70(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00bdfb50(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00bdfc70 @ 00bdfc70 ////

void __fastcall SetVtable_00d9fbe8_00bdfc70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00bdfca0 @ 00bdfca0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bdfca0(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00bdfcc0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00bdfcc0 @ 00bdfcc0 ////

void __fastcall SetVtable_00d9fbe8_00bdfcc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION Ctor_vt00d9fc2c_00bdfcd0 @ 00bdfcd0 ////

undefined4 * __fastcall Ctor_vt00d9fc2c_00bdfcd0(undefined4 *param_1)

{
  Ctor_vt00d9fbec_00c0f2e0(param_1);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x16] = 0;
  param_1[0x5f] = 0;
  param_1[0x75] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *param_1 = &PTR_ScalarDeletingDtor_00be0bf0_00d9fc2c;
  return param_1;
}


//// FUNCTION FUN_00bdfd30 @ 00bdfd30 ////

void __fastcall FUN_00bdfd30(int param_1)

{
  undefined4 *puVar1;
  
  FUN_00c0f4d0(param_1);
  if (*(undefined4 **)(param_1 + 0x188) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x188))(1);
  }
  if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x58))(1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x180) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x180))(1);
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x184) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x184))(1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x174);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x178);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 8))();
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  return;
}


//// FUNCTION FUN_00bdfdf0 @ 00bdfdf0 ////

int __fastcall FUN_00bdfdf0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d008ab;
  local_c = ExceptionList;
  if ((int *)param_1[0x75] == (int *)0x0) {
    ExceptionList = &local_c;
    local_10 = (undefined4 *)FUN_00c0ef90(0x824);
    local_4 = 0;
    if (local_10 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = Ctor_vt00da34b4_00c110c0(local_10);
    }
    local_4 = 0xffffffff;
  }
  else {
    ExceptionList = &local_c;
    piVar1 = (int *)(**(code **)(*(int *)param_1[0x75] + 0x18))();
    local_10 = param_1;
  }
  param_1[0x5f] = piVar1;
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return -5;
  }
  iVar2 = (**(code **)(*piVar1 + 4))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1[0x5f] + 8))();
    if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x5f])(1);
    }
    param_1[0x5f] = 0;
    ExceptionList = local_10;
    return iVar2;
  }
  *unaff_retaddr = param_1[0x5f];
  ExceptionList = local_10;
  return 0;
}


//// FUNCTION FUN_00bdfee0 @ 00bdfee0 ////

void __fastcall FUN_00bdfee0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x17c) + 8))();
  if (*(undefined4 **)(param_1 + 0x17c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x17c))(1);
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}


//// FUNCTION FUN_00bdff10 @ 00bdff10 ////

char __fastcall FUN_00bdff10(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(param_1 + 0x180);
  if (piVar1 == (int *)0x0) {
    DAT_010ced54 = DAT_010ced54 == '\0';
    goto LAB_00bdffc6;
  }
  if (*(char *)((int)piVar1 + 0x60e) == '\0') {
    if ((uint)piVar1[0x181] <= (uint)piVar1[0x182]) {
      if (*(char *)((int)piVar1 + 0x60d) == '\0') {
        *(undefined1 *)((int)piVar1 + 0x60d) = 1;
        DAT_010ced54 = '\0';
        goto LAB_00bdff68;
      }
      *(undefined1 *)((int)piVar1 + 0x60d) = 0;
      piVar1[0x182] = 0;
    }
    DAT_010ced54 = '\x01';
  }
  else {
    DAT_010ced54 = (**(code **)(*piVar1 + 0x1c))();
  }
LAB_00bdff68:
  if (*(int **)(param_1 + 0x184) == (int *)0x0) {
    if (DAT_010ced54 == '\0') {
      return '\0';
    }
  }
  else {
    if ((DAT_010ced54 == '\0') ||
       (uVar3 = FUN_00bdfab0(*(int **)(param_1 + 0x184)), (char)uVar3 == '\0')) {
      DAT_010ced54 = 0;
      return '\0';
    }
    DAT_010ced54 = '\x01';
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 8))();
  iVar2 = *(int *)(param_1 + 0x17c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 8) = 0;
    puVar5 = *(undefined4 **)(iVar2 + 0x21c);
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
LAB_00bdffc6:
  if ((DAT_010ced54 != '\0') && (*(int **)(param_1 + 0x1d4) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 0x28))();
  }
  return DAT_010ced54;
}


//// FUNCTION Audio_ProcessMixingIfNeeded @ 00be0000 ////

void __fastcall Audio_ProcessMixingIfNeeded(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    if ((*(int *)(param_1 + 0x1cc) == 0) || (*(int *)(param_1 + 0x1b8) == 1)) {
      *(undefined1 *)(param_1 + 0x1c4) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x1c4) == '\0') {
        *(undefined1 *)(param_1 + 0x1c4) = 1;
        puVar2 = (undefined4 *)(param_1 + 0x5c);
        for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        puVar2 = (undefined4 *)(param_1 + 0xe8);
        for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
      }
      FUN_00c11800((void *)(param_1 + 0x5c),*(int *)(*(int *)(param_1 + 0x58) + 4),
                   *(int *)(*(int *)(param_1 + 0x58) + 8));
      if (3 < *(uint *)(param_1 + 0x1bc)) {
        FUN_00c11800((void *)(param_1 + 0xe8),*(int *)(*(int *)(param_1 + 0x58) + 0xc),
                     *(int *)(*(int *)(param_1 + 0x58) + 0x10));
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00be0090 @ 00be0090 ////

undefined4 __fastcall FUN_00be0090(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  int *piStack_4;
  
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d4) + 0x2c))();
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x1a8) != (code *)0x0) {
    local_18 = *(int *)(param_1 + 0x1bc);
    local_10 = local_18 << 8;
    piStack_4 = (int *)(*(int *)(param_1 + 0x58) + 4);
    local_1c = 0x20;
    local_14 = 0xac44;
    local_c = 0;
    uStack_8 = 0;
    (**(code **)(param_1 + 0x1a8))(&local_1c,0);
  }
  piVar1 = *(int **)(param_1 + 0x180);
  if (*(char *)((int)piVar1 + 0x60e) == '\0') {
    piVar1 = piVar1 + 1;
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x20))();
  }
  switch(*(undefined4 *)(param_1 + 0x1bc)) {
  case 1:
    uVar3 = 0;
    piVar2 = piVar1;
    break;
  case 2:
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1,0);
    uVar3 = 1;
    piVar2 = (int *)((int)piVar1 + 2);
    break;
  default:
    goto switchD_00be0126_caseD_3;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))((int)piVar1 + 2,1);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1 + 1,2);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))((int)piVar1 + 6,3);
    goto switchD_00be0126_caseD_3;
  case 6:
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1,0);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))((int)piVar1 + 2,1);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1 + 1,4);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))((int)piVar1 + 6,5);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar1 + 2,2);
    uVar3 = 3;
    piVar2 = (int *)((int)piVar1 + 10);
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 0x28))(piVar2,uVar3);
switchD_00be0126_caseD_3:
  if (*(code **)(param_1 + 0x1a4) != (code *)0x0) {
    local_18 = *(int *)(param_1 + 0x1bc);
    local_10 = local_18 << 8;
    local_1c = 1;
    local_14 = 0xac44;
    local_c = 0;
    uStack_8 = 0;
    piStack_4 = piVar1;
    (**(code **)(param_1 + 0x1a4))(&local_1c,1);
  }
  piVar2 = *(int **)(param_1 + 0x180);
  if (*(char *)((int)piVar2 + 0x60e) == '\0') {
    piVar2[0x182] = piVar2[0x182] + 1;
  }
  else {
    (**(code **)(*piVar2 + 0x24))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x184);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x17c) != 0)) {
    if (*(char *)((int)piVar1 + 0x60e) == '\0') {
      piVar1 = piVar1 + 1;
    }
    else {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x20))();
    }
    (**(code **)(**(int **)(param_1 + 0x17c) + 0x1c))(piVar1);
    piVar2 = *(int **)(param_1 + 0x184);
    if (*(char *)((int)piVar2 + 0x60e) != '\0') {
      (**(code **)(*piVar2 + 0x24))(piVar1);
      return 0;
    }
    piVar2[0x182] = piVar2[0x182] + 1;
  }
  return 0;
}


//// FUNCTION FUN_00be02a0 @ 00be02a0 ////

undefined4 __fastcall FUN_00be02a0(int param_1)

{
  if (*(int *)(param_1 + 0x188) == 0) {
    return 0x80000000;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x188) + 4);
}


//// FUNCTION FUN_00be02c0 @ 00be02c0 ////

undefined4 FUN_00be02c0(void)

{
  return 0;
}


//// FUNCTION FUN_00be02e0 @ 00be02e0 ////

void __thiscall FUN_00be02e0(void *this,int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (cVar1 != '\0') {
    *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1cc) + 1;
    return;
  }
  *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
  return;
}


//// FUNCTION FUN_00be0340 @ 00be0340 ////

void __thiscall FUN_00be0340(void *this,int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\0') {
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + -1;
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x14))();
  if (cVar1 != '\0') {
    *(int *)((int)this + 0x1cc) = *(int *)((int)this + 0x1cc) + -1;
    return;
  }
  *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + -1;
  return;
}


//// FUNCTION FUN_00be03a0 @ 00be03a0 ////

undefined4 __fastcall FUN_00be03a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x1d4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be03ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x1d4) + 0x20))();
    return uVar1;
  }
  return 0xfffffff7;
}


//// FUNCTION FUN_00be03e0 @ 00be03e0 ////

bool __fastcall FUN_00be03e0(int param_1)

{
  return *(int *)(param_1 + 0x1d4) != 0;
}


//// FUNCTION FUN_00be03f0 @ 00be03f0 ////

undefined4 * FUN_00be03f0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d008cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x248);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = Ctor_vt00da35c8_00c12670(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00be0470 @ 00be0470 ////

uint __thiscall FUN_00be0470(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(int **)((int)this + 0x1d4) = &DAT_010d5f50;
  uVar1 = (**(code **)(DAT_010d5f50 + 4))(param_1,param_2);
  if ((int)uVar1 < 0) {
    *(undefined4 *)((int)this + 0x1d4) = 0;
    return uVar1 & 0xffffff00;
  }
  uVar2 = (**(code **)(**(int **)((int)this + 0x1d4) + 0xc))();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00be04c0 @ 00be04c0 ////

undefined4 __thiscall FUN_00be04c0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *unaff_ESI;
  void *local_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00d008f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x628);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00c144d0(puVar1);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0x180) = piVar2;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar3 = (**(code **)(*piVar2 + 4))
                    (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  if ((char)uVar3 == '\0') {
    if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
      uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
    }
    *(undefined4 *)((int)this + 0x180) = 0;
    ExceptionList = unaff_ESI;
    return uVar3 & 0xffffff00;
  }
  if (*(int *)((int)this + 0x1d4) != 0) {
    puStack_8 = (undefined4 *)FUN_00c0ef90(0x628);
    if (puStack_8 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = Ctor_vt00da38b8_00c13e60(puStack_8);
    }
    *(int **)((int)this + 0x184) = piVar2;
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
      if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
      }
      *(undefined4 *)((int)this + 0x180) = 0;
      ExceptionList = unaff_ESI;
      return uVar3 & 0xffffff00;
    }
    uVar3 = (**(code **)(*piVar2 + 4))
                      (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
    if ((char)uVar3 == '\0') {
      if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
      }
      *(undefined4 *)((int)this + 0x180) = 0;
      if (*(undefined4 **)((int)this + 0x184) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x184))(1);
      }
      *(undefined4 *)((int)this + 0x184) = 0;
      ExceptionList = unaff_ESI;
      return uVar3 & 0xffffff00;
    }
  }
  ExceptionList = unaff_ESI;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00be0650 @ 00be0650 ////

undefined4 __thiscall FUN_00be0650(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *unaff_ESI;
  void *local_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00d00916;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x62c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00c14bc0(puVar1);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0x180) = piVar2;
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar3 = (**(code **)(*piVar2 + 4))
                    (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  if ((char)uVar3 == '\0') {
    if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
      uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
    }
    *(undefined4 *)((int)this + 0x180) = 0;
    ExceptionList = unaff_ESI;
    return uVar3 & 0xffffff00;
  }
  if (*(int *)((int)this + 0x1d4) != 0) {
    puStack_8 = (undefined4 *)FUN_00c0ef90(0x62c);
    if (puStack_8 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = Ctor_vt00da3940_00c146a0(puStack_8);
    }
    *(int **)((int)this + 0x184) = piVar2;
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
      if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
      }
      *(undefined4 *)((int)this + 0x180) = 0;
      ExceptionList = unaff_ESI;
      return uVar3 & 0xffffff00;
    }
    uVar3 = (**(code **)(*piVar2 + 4))
                      (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
    if ((char)uVar3 == '\0') {
      if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
      }
      *(undefined4 *)((int)this + 0x180) = 0;
      if (*(undefined4 **)((int)this + 0x184) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x184))(1);
      }
      *(undefined4 *)((int)this + 0x184) = 0;
      ExceptionList = unaff_ESI;
      return uVar3 & 0xffffff00;
    }
  }
  ExceptionList = unaff_ESI;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION Ctor_vt00d9fc4c_00be07e0 @ 00be07e0 ////

undefined4 * __fastcall Ctor_vt00d9fc4c_00be07e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c16640(param_1);
  local_4 = 0;
  *param_1 = &PTR_ScalarDeletingDtor_00be08d0_00d9fc4c;
  _eh_vector_constructor_iterator_
            (param_1 + 0x30d,0x17c,6,Ctor_vt00da3ac0_00c169c0,SetVtable_00da3ac0_00c16710);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Dtor_00be0870 @ 00be0870 ////

void __fastcall Dtor_00be0870(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00948;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(param_1 + 0x30d,0x17c,6,SetVtable_00da3ac0_00c16710);
  local_4 = 0xffffffff;
  SetVtable_00d9fbe8_00c15340(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00be08d0 @ 00be08d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be08d0(void *this,byte param_1)

{
  Dtor_00be0870(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00be0950 @ 00be0950 ////

undefined4 __thiscall FUN_00be0950(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_1) {
  case 1:
    *(undefined4 *)((int)this + 0x1b8) = 1;
    iVar4 = 2;
    break;
  default:
    *(undefined4 *)((int)this + 0x1b8) = 0x40;
    iVar4 = 6;
    break;
  case 4:
    *(undefined4 *)((int)this + 0x1b8) = 4;
    iVar4 = 2;
    break;
  case 8:
    *(undefined4 *)((int)this + 0x1b8) = 8;
    iVar4 = 4;
  }
  if (*(int *)((int)this + 0x1bc) != iVar4) {
    *(int *)((int)this + 0x1bc) = iVar4;
    piVar1 = *(int **)((int)this + 0x58);
    DAT_00ea7aac = iVar4;
    piVar1[8] = iVar4;
    (**(code **)(*piVar1 + 4))();
    piVar1 = *(int **)((int)this + 0x180);
    (**(code **)(*piVar1 + 0x18))();
    *(undefined1 *)((int)piVar1 + 0x60e) = 0;
    piVar1[0x181] = 0;
    piVar1 = *(int **)((int)this + 0x184);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))();
      *(undefined1 *)((int)piVar1 + 0x60e) = 0;
      piVar1[0x181] = 0;
      uVar3 = (**(code **)(**(int **)((int)this + 0x184) + 0x10))(DAT_00ea7a9c);
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
    }
    uVar2 = DAT_00ea7a9c;
    piVar1 = *(int **)((int)this + 0x180);
    piVar1[0x181] = DAT_00ea7a9c >> 7;
    piVar1[0x182] = 0;
    *(undefined1 *)(piVar1 + 0x183) = 0;
    *(undefined1 *)((int)piVar1 + 0x60d) = 0;
    uVar3 = (**(code **)(*piVar1 + 0x14))(iVar4,uVar2);
    *(char *)((int)piVar1 + 0x60e) = (char)uVar3;
    return uVar3;
  }
  return 1;
}


//// FUNCTION FUN_00be0b10 @ 00be0b10 ////

undefined4 FUN_00be0b10(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
  case 4:
    return 0;
  default:
    return 0x80;
  case 8:
    return 4;
  case 0x40:
    return 8;
  case 0x80:
    return 0x40;
  }
}


//// FUNCTION ScalarDeletingDtor_00be0bf0 @ 00be0bf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be0bf0(void *this,byte param_1)

{
  Dtor_00be0c10(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION Dtor_00be0c10 @ 00be0c10 ////

void __fastcall Dtor_00be0c10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00be0bf0_00d9fc2c;
  local_4 = 0;
  FUN_00bdfd30((int)param_1);
  local_4 = 0xffffffff;
  Dtor_00bdf940(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00be0c60 @ 00be0c60 ////

void __fastcall Dtor_00be0c60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00be0d00_00d9fc78;
  local_4 = 0;
  if ((~(byte)((uint)param_1[0xb] >> 0x1f) & 1) != 0) {
    FUN_00c16b70((int)param_1);
  }
  local_4 = 0xffffffff;
  Dtor_00c101e0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00be0d00 @ 00be0d00 ////

undefined4 * __thiscall ScalarDeletingDtor_00be0d00(void *this,byte param_1)

{
  Dtor_00be0c60(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION Dtor_00be0d20 @ 00be0d20 ////

void __fastcall Dtor_00be0d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d009b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_ScalarDeletingDtor_00be0e30_00d9fcc8;
  local_4 = 1;
  if ((~(byte)((uint)param_1[0xb] >> 0x1f) & 1) != 0) {
    FUN_00c176d0((int)param_1);
  }
  param_1[0x2d] = &PTR_LAB_00d9fbe8;
  local_4 = 0xffffffff;
  Dtor_00be0c60(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be0da0 @ 00be0da0 ////

int __fastcall FUN_00be0da0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 200) * *(int *)(param_1 + 0xc0);
    iVar1 = FUN_00c193f0(*(int *)(param_1 + 0xc));
    if (iVar2 != *(int *)(iVar1 + 0x18)) {
      iVar2 = FUN_00c193f0(*(int *)(param_1 + 0xc));
      iVar3 = iVar3 + *(int *)(iVar2 + 0x10);
    }
    return iVar3;
  }
  return 0;
}


//// FUNCTION ScalarDeletingDtor_00be0e30 @ 00be0e30 ////

undefined4 * __thiscall ScalarDeletingDtor_00be0e30(void *this,byte param_1)

{
  Dtor_00be0d20(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00be0e50 @ 00be0e50 ////

undefined4 __thiscall FUN_00be0e50(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)((int)this + 0x1b8);
  uVar2 = FUN_00be0950(this,param_1);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  FUN_00be0950(this,iVar1);
  return 0xfffffff7;
}


//// FUNCTION Ctor_vt00d9fd38_00be0e90 @ 00be0e90 ////

undefined4 * __fastcall Ctor_vt00d9fd38_00be0e90(undefined4 *param_1)

{
  Ctor_vt00d9fcc8_00c186a0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00be0ed0_00d9fd38;
  return param_1;
}


//// FUNCTION Dtor_00be0eb0 @ 00be0eb0 ////

void __fastcall Dtor_00be0eb0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00d009b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_ScalarDeletingDtor_00be0e30_00d9fcc8;
  uStack_4 = 1;
  if ((~(byte)((uint)param_1[0xb] >> 0x1f) & 1) != 0) {
    FUN_00c176d0((int)param_1);
  }
  param_1[0x2d] = &PTR_LAB_00d9fbe8;
  uStack_4 = 0xffffffff;
  Dtor_00be0c60(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00be0ec0 @ 00be0ec0 ////

void __fastcall FUN_00be0ec0(undefined4 *param_1)

{
  param_1[0x7c] = &PTR_LAB_00d9fbe8;
  Dtor_00be0d20(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00be0ed0 @ 00be0ed0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be0ed0(void *this,byte param_1)

{
  Dtor_00be0eb0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9fda8_00be0ef0 @ 00be0ef0 ////

undefined4 * __fastcall Ctor_vt00d9fda8_00be0ef0(undefined4 *param_1)

{
  Ctor_vt00d9fc4c_00be07e0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00be0f20_00d9fda8;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be0f20 @ 00be0f20 ////

undefined4 * __thiscall ScalarDeletingDtor_00be0f20(void *this,byte param_1)

{
  Dtor_00be0870(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00be0fa0 @ 00be0fa0 ////

uint __fastcall FUN_00be0fa0(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)param_1 + 0x188);
  if (uVar3 == 0) {
    uVar2 = FUN_00be0950(param_1,4);
    return uVar2;
  }
  uVar1 = *(uint *)(uVar3 + 4);
  while( true ) {
    if (uVar1 == 0) {
      return uVar3 & 0xffffff00;
    }
    uVar2 = FUN_00be0950(param_1,uVar1);
    if ((char)uVar2 != '\0') break;
    uVar3 = FUN_00be0b10(uVar1);
    uVar1 = uVar3;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION Ctor_vt00d9fdd8_00be0ff0 @ 00be0ff0 ////

undefined4 * __fastcall Ctor_vt00d9fdd8_00be0ff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d009c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9fcc8_00c186a0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00d9fdd8;
  FUN_00c1a730(param_1 + 0x7c);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Ctor_vt00d9fe48_00be1040 @ 00be1040 ////

undefined4 * __fastcall Ctor_vt00d9fe48_00be1040(undefined4 *param_1)

{
  Ctor_vt00d9fc4c_00be07e0(param_1);
  *param_1 = &PTR_ScalarDeletingDtor_00be1060_00d9fe48;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be1060 @ 00be1060 ////

undefined4 * __thiscall ScalarDeletingDtor_00be1060(void *this,byte param_1)

{
  Dtor_00be0870(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00be1090 @ 00be1090 ////

undefined4 __fastcall FUN_00be1090(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = DAT_00ea7a60;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d009f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0 < DAT_00ea7a60) {
    if (DAT_00ea7a60 == 0) {
      ExceptionList = &local_c;
      piVar1 = operator_new(4);
    }
    else {
      ExceptionList = &local_c;
      piVar1 = (int *)FUN_00c0ef90(DAT_00ea7a60 * 0x250 + 4);
    }
    local_4 = 0;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar2,0x250,iVar3,Ctor_vt00d9fdd8_00be0ff0,FUN_00be0ec0);
    }
    local_4 = 0xffffffff;
    *(int **)(param_1 + 0x174) = piVar2;
    if (piVar2 == (int *)0x0) {
      DAT_00ea7a60 = 0;
      DAT_00ea7a64 = 0;
      DAT_00ea7a78 = 0;
      DAT_00ea7a7c = 0;
      ExceptionList = local_c;
      return 0;
    }
    FUN_00c0f020((void *)(param_1 + 0x2c),piVar2,0x250,DAT_00ea7a60);
  }
  iVar3 = DAT_00ea7a78;
  if (0 < DAT_00ea7a78) {
    if (DAT_00ea7a78 == 0) {
      piVar1 = operator_new(4);
    }
    else {
      piVar1 = (int *)FUN_00c0ef90(DAT_00ea7a78 * 0x248 + 4);
    }
    local_4 = 1;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = piVar1 + 1;
      *piVar1 = iVar3;
      _eh_vector_constructor_iterator_(piVar2,0x248,iVar3,Ctor_vt00da35c8_00c12670,Dtor_00c121c0);
    }
    local_4 = 0xffffffff;
    *(int **)(param_1 + 0x178) = piVar2;
    if (piVar2 == (int *)0x0) {
      DAT_00ea7a78 = 0;
      DAT_00ea7a7c = 0;
      ExceptionList = local_c;
      return 0;
    }
    iVar3 = FUN_00c0f020((void *)(param_1 + 0x40),piVar2,0x248,DAT_00ea7a78);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00be1200 @ 00be1200 ////

undefined4 * FUN_00be1200(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00a0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x250);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = Ctor_vt00d9fdd8_00be0ff0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00be1260 @ 00be1260 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00be1260(void *this,undefined4 param_1,int *param_2)

{
  uint3 uVar6;
  uint3 extraout_var;
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00a66;
  local_c = ExceptionList;
  uVar6 = (uint3)((uint)ExceptionList >> 8);
  ExceptionList = &local_c;
  if (DAT_010d5e10 == '\0') {
    ExceptionList = &local_c;
    CPU_InitCapabilities();
    uVar6 = extraout_var;
  }
  if (DAT_010d5e12 == '\0') {
    ExceptionList = local_c;
    return (uint)uVar6 << 8;
  }
  if (DAT_010d5e15 == '\0') {
    puVar1 = (undefined4 *)FUN_00c0ef90(0x151c);
    local_4 = 1;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00be1301;
    Ctor_vt00d9fc4c_00be07e0(puVar1);
    *puVar1 = &PTR_ScalarDeletingDtor_00be0f20_00d9fda8;
  }
  else {
    puVar1 = (undefined4 *)FUN_00c0ef90(0x151c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00be1301:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      Ctor_vt00d9fc4c_00be07e0(puVar1);
      *puVar1 = &PTR_ScalarDeletingDtor_00be1060_00d9fe48;
    }
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x58) = puVar1;
  uVar3 = 0;
  if (puVar1 == (undefined4 *)0x0) goto switchD_00be1329_default;
  uVar3 = param_2[6];
  switch(uVar3) {
  case 0:
    if (DAT_00ea510c == '\0') goto switchD_00be1329_caseD_3;
    FUN_00c1b4e0(local_110);
    iVar4 = FUN_00c1b6f0(local_110);
    if ((iVar4 < 1) || (uVar5 = FUN_00be04c0(this,(int)param_2), (char)uVar5 == '\0'))
    goto switchD_00be1329_caseD_3;
    goto LAB_00be1464;
  case 1:
    puVar1 = (undefined4 *)FUN_00c0ef90(0xc14);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00be141e;
    piVar2 = (int *)FUN_00c1c950(puVar1);
    break;
  case 2:
    uVar3 = FUN_00be04c0(this,(int)param_2);
    goto LAB_00be1398;
  case 3:
switchD_00be1329_caseD_3:
    puVar1 = (undefined4 *)FUN_00c0ef90(0x63c);
    local_4 = 4;
    if (puVar1 == (undefined4 *)0x0) {
LAB_00be141e:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = Ctor_vt00da5928_00c1b0b0(puVar1);
    }
    break;
  case 4:
    puVar1 = (undefined4 *)FUN_00c0ef90(0x660);
    local_4 = 3;
    if (puVar1 == (undefined4 *)0x0) goto LAB_00be141e;
    piVar2 = Ctor_vt00da5aa4_00c1c7f0(puVar1);
    break;
  case 5:
    uVar3 = FUN_00be0650(this,(int)param_2);
LAB_00be1398:
    if ((char)uVar3 == '\0') goto switchD_00be1329_default;
    goto LAB_00be1464;
  default:
    goto switchD_00be1329_default;
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0x180) = piVar2;
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 4))(param_2[4],param_2[5],0);
    if ((char)uVar3 == '\0') {
      if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
        uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
      }
      *(undefined4 *)((int)this + 0x180) = 0;
    }
    else {
LAB_00be1464:
      if (*(int *)((int)this + 0x184) == 0 && *(int *)((int)this + 0x1d4) != 0) {
        DAT_00ea7a68 = DAT_00ea7a68 & 0xffffdf7f;
        DAT_00ea7a80 = DAT_00ea7a80 & 0xffffdf7f;
      }
      _DAT_00ea7a94 = (**(code **)(**(int **)((int)this + 0x180) + 0xc))();
      if (DAT_010d6758 == 0) {
        DAT_00ea7a80 = DAT_00ea7a80 & 0xffcfffff;
      }
      DAT_00ea7a60 = *param_2;
      DAT_00ea7a64 = *param_2;
      DAT_00ea7a78 = param_2[1];
      DAT_00ea7a7c = param_2[1];
      if ((DAT_00ea7a60 == -1) || (DAT_00ea7a78 == -1)) {
        DAT_00ea7abc = -1;
      }
      else {
        DAT_00ea7abc = DAT_00ea7a60 + DAT_00ea7a78;
      }
      uVar3 = param_2[2];
      DAT_00ea7a9c = _DAT_00ea7a94;
      if ((_DAT_00ea7a94 < uVar3) && (DAT_00ea7a9c = uVar3, (uVar3 & 0x7f) != 0)) {
        DAT_00ea7a9c = ((uVar3 >> 7) + 1) * 0x80;
      }
      DAT_00ea7ac0 = DAT_00ea7abc;
      uVar3 = FUN_00be1090((int)this);
      if ((char)uVar3 != '\0') {
        *(undefined1 *)((int)this + 0x1c4) = 0;
        *(undefined4 *)((int)this + 0x1c8) = 0;
        *(undefined4 *)((int)this + 0x1cc) = 0;
        uVar3 = FUN_00be0fa0(this);
        if ((char)uVar3 != '\0') {
          ExceptionList = local_c;
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
        if (*(undefined4 **)((int)this + 0x180) != (undefined4 *)0x0) {
          uVar3 = (**(code **)**(undefined4 **)((int)this + 0x180))(1);
        }
        *(undefined4 *)((int)this + 0x180) = 0;
        if (*(undefined4 **)((int)this + 0x184) != (undefined4 *)0x0) {
          uVar3 = (**(code **)**(undefined4 **)((int)this + 0x184))(1);
        }
        *(undefined4 *)((int)this + 0x184) = 0;
      }
    }
  }
switchD_00be1329_default:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00be15b0 @ 00be15b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00be15b0(void *this,undefined4 param_1,int *param_2)

{
  char cVar1;
  WINBOOL WVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_1c [4];
  undefined4 local_c;
  HWND local_8;
  
  if (param_2 == (int *)0x0) {
    FUN_00c1ca00(local_1c);
  }
  else {
    piVar6 = local_1c;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *param_2;
      param_2 = param_2 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  if ((local_8 == (HWND)0x0) || (local_8 == (HWND)0xffffffff)) {
    local_8 = GetForegroundWindow();
  }
  *(undefined4 *)((int)this + 0x17c) = 0;
  WVar2 = QueryPerformanceFrequency((LARGE_INTEGER *)&lpFrequency_00ea7ac8);
  if (WVar2 != 0) {
    uVar7 = __alldiv((uint)lpFrequency_00ea7ac8,DAT_00ea7acc,0xac44,0);
    *(undefined8 *)((int)this + 0x1b0) = uVar7;
    QueryPerformanceCounter((LARGE_INTEGER *)((int)this + 400));
    *(DWORD *)((int)this + 0x198) = (((LARGE_INTEGER *)((int)this + 400))->field0).LowPart;
    *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)((int)this + 0x194);
    if (DAT_00ea510c != '\0') {
      puVar3 = (undefined4 *)FUN_00c0ef90(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0x80000000;
        *puVar3 = &PTR_ScalarDeletingDtor_00bdfca0_00d9fc1c;
        puVar3[2] = 0;
      }
      *(undefined4 **)((int)this + 0x188) = puVar3;
    }
    if ((*(int **)((int)this + 0x188) != (int *)0x0) &&
       (cVar1 = (**(code **)(**(int **)((int)this + 0x188) + 4))(local_c,local_8,0), cVar1 == '\0'))
    {
      if (*(undefined4 **)((int)this + 0x188) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x188))(1);
      }
      *(undefined4 *)((int)this + 0x188) = 0;
    }
    if (((local_1c[3] != 0) || (uVar4 = FUN_00be0470(this,param_1,local_1c), local_1c[3] != 0)) ||
       ((char)uVar4 == '\0')) {
      DAT_00ea7aa4 = DAT_00ea7aa4 & 0xffffffef;
      DAT_00ea7a30 = 0;
      DAT_00ea7a48 = 0;
      DAT_00ea7a34 = 0;
      DAT_00ea7a4c = 0;
      DAT_00ea7a38 = 0;
      DAT_00ea7a50 = 0;
      _DAT_00ea7a3c = 0;
      _DAT_00ea7a54 = 0;
      _DAT_00ea7a40 = 0;
      _DAT_00ea7a58 = 0;
      _DAT_00ea7ab4 = 0;
      _DAT_00ea7ab8 = 0;
      _DAT_00ea7a44 = 0;
      _DAT_00ea7a5c = 0;
      _DAT_00ea7ac4 = 0;
    }
    uVar4 = FUN_00be1260(this,param_1,local_1c);
    cVar1 = (char)uVar4;
    if (cVar1 == '\0') {
      DAT_00ea7aa4 = DAT_00ea7aa4 & 0xffffffdf;
      DAT_00ea7a60 = 0;
      DAT_00ea7a64 = 0;
      DAT_00ea7a68 = 0;
      _DAT_00ea7a6c = 0;
      _DAT_00ea7a70 = 0;
      DAT_00ea7a78 = 0;
      _DAT_00ea7a74 = 0;
      DAT_00ea7a7c = 0;
      DAT_00ea7a90 = 0;
      DAT_00ea7a80 = 0;
      _DAT_00ea7a94 = 0;
      _DAT_00ea7a84 = 0;
      DAT_00ea7a98 = 0;
      _DAT_00ea7a88 = 0;
      DAT_00ea7a9c = 0;
      DAT_00ea7abc = 0;
      DAT_00ea7ac0 = 0;
      _DAT_00ea7a8c = 0;
      _DAT_00ea7aa0 = 0;
    }
    if ((*(int *)((int)this + 0x1d4) != 0) || (*(int *)((int)this + 0x180) != 0)) {
      cVar1 = '\x01';
    }
    return (cVar1 != '\0') - 1 & 0xfffffff7;
  }
  return 0xffffffe8;
}


//// FUNCTION FUN_00be1840 @ 00be1840 ////

int __thiscall FUN_00be1840(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)this + 0x14))(param_1,param_2);
  return *(int *)((int)this + 4) + 8;
}


//// FUNCTION PKStringsCHeapString_AllocateData @ 00be1930 ////

LONG * __fastcall PKStringsCHeapString_AllocateData(int param_1)

{
  LONG *lpAddend;
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00a90;
  local_c = ExceptionList;
  lpAddend = (LONG *)PTR_DAT_00ea511c;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    lpAddend = operator_new(param_1 + 9);
    if (lpAddend == (LONG *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 0;
      LH_LogErrorMessage(&local_110,".\\PKStringsCHeapString.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x21);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar1);
      DebugBreak();
    }
    *lpAddend = 0;
    lpAddend[1] = param_1;
    *(undefined1 *)(lpAddend + 2) = 0;
    *(undefined1 *)((int)lpAddend + param_1 + 8) = 0;
  }
  InterlockedIncrement(lpAddend);
  ExceptionList = local_c;
  return lpAddend;
}


//// FUNCTION PKStringsCHeapString_ReleaseData @ 00be1a30 ////

void __fastcall PKStringsCHeapString_ReleaseData(LONG *param_1)

{
  LPCSTR pCVar1;
  LONG LVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00ab0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (LONG *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKStringsCHeapString.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null data");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKStringsCHeapString.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x30);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Not referenced?");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  LVar2 = InterlockedDecrement(param_1);
  if (LVar2 < 1) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKStringsCHeapString_MakeUniqueResize @ 00be1cb0 ////

void __thiscall PKStringsCHeapString_MakeUniqueResize(void *this,uint param_1,undefined4 *param_2)

{
  LONG *pLVar1;
  LPCSTR pCVar2;
  LONG *pLVar3;
  uint uVar4;
  uint uVar5;
  LONG *pLVar6;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00ada;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 4) == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKStringsCHeapString.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"NULL Data");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  pLVar1 = *(LONG **)((int)this + 4);
  if ((1 < *pLVar1) || ((uint)pLVar1[1] < param_1)) {
    pLVar3 = PKStringsCHeapString_AllocateData(param_1);
    *(LONG **)((int)this + 4) = pLVar3;
    uVar5 = pLVar3[1];
    if ((uVar5 != 0) && (uVar4 = pLVar1[1], uVar4 != 0)) {
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      pLVar6 = pLVar1 + 2;
      pLVar3 = pLVar3 + 2;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pLVar3 = *pLVar6;
        pLVar6 = pLVar6 + 1;
        pLVar3 = pLVar3 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)pLVar3 = (char)*pLVar6;
        pLVar6 = (LONG *)((int)pLVar6 + 1);
        pLVar3 = (LONG *)((int)pLVar3 + 1);
      }
      *(undefined1 *)(uVar5 + 8 + *(int *)((int)this + 4)) = 0;
    }
    PKStringsCHeapString_ReleaseData(pLVar1);
  }
  *param_2 = *(undefined4 *)(*(int *)((int)this + 4) + 4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9feb8_00be1e00 @ 00be1e00 ////

undefined4 * __fastcall Ctor_vt00d9feb8_00be1e00(undefined4 *param_1)

{
  LONG *pLVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00aec;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9feb8;
  param_1[1] = 0;
  pLVar1 = PKStringsCHeapString_AllocateData(0);
  param_1[1] = pLVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION Ctor_vt00d9feb8_00be1e50 @ 00be1e50 ////

undefined4 * __thiscall Ctor_vt00d9feb8_00be1e50(void *this,char *param_1)

{
  LONG *pLVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00afe;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9feb8;
  *(undefined4 *)((int)this + 4) = 0;
  pLVar1 = PKStringsCHeapString_AllocateData(0);
  *(LONG **)((int)this + 4) = pLVar1;
  FUN_00bbfaa0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00d9feb8_00be1eb0 @ 00be1eb0 ////

int * __thiscall Ctor_vt00d9feb8_00be1eb0(void *this,undefined4 param_1)

{
  LONG *pLVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00b10;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9feb8;
  *(undefined4 *)((int)this + 4) = 0;
  pLVar1 = PKStringsCHeapString_AllocateData(0);
  *(LONG **)((int)this + 4) = pLVar1;
  (**(code **)(*(int *)this + 8))(param_1);
  ExceptionList = this;
  return this;
}


//// FUNCTION PKStringsCHeapString_Dtor @ 00be1f10 ////

void __fastcall PKStringsCHeapString_Dtor(undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_115;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d00b30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9feb8;
  local_4 = 0;
  local_114 = param_1;
  if (param_1[1] == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    LH_LogErrorMessage(&local_110,".\\PKStringsCHeapString.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x8e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null data");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    DebugBreak();
  }
  PKStringsCHeapString_ReleaseData((LONG *)param_1[1]);
  param_1[1] = 0;
  *param_1 = &PTR_LAB_00d9d9b4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be2010 @ 00be2010 ////

void __thiscall FUN_00be2010(void *this,int param_1)

{
  LONG *lpAddend;
  
  if ((void *)param_1 != this) {
    PKStringsCHeapString_ReleaseData(*(LONG **)((int)this + 4));
    lpAddend = *(LONG **)(param_1 + 4);
    *(LONG **)((int)this + 4) = lpAddend;
                    /* WARNING: Could not recover jumptable at 0x00be2030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedIncrement(lpAddend);
    return;
  }
  return;
}


//// FUNCTION FUN_00be2040 @ 00be2040 ////

void __thiscall FUN_00be2040(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)*param_1)();
  if (iVar1 != 0) {
    FUN_00be2010(this,iVar1);
    return;
  }
  FUN_00bbfe40(this,param_1);
  return;
}


//// FUNCTION Ctor_vt00d9feb8_00be2070 @ 00be2070 ////

undefined4 * __thiscall Ctor_vt00d9feb8_00be2070(void *this,int param_1)

{
  LONG *pLVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00b42;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9feb8;
  *(undefined4 *)((int)this + 4) = 0;
  pLVar1 = PKStringsCHeapString_AllocateData(0);
  *(LONG **)((int)this + 4) = pLVar1;
  FUN_00be2010(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00be20e0 @ 00be20e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be20e0(void *this,byte param_1)

{
  PKStringsCHeapString_Dtor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00be2110 @ 00be2110 ////

void __fastcall FUN_00be2110(int param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = FUN_00acd42c();
  FUN_00be24d0((void *)(param_1 + 0x18),(int)uVar1,uVar2,uVar3);
  FUN_00be2550((void *)(param_1 + 0x40),*(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14),0,
               0x3f800000);
  return;
}


//// FUNCTION Dtor_00be2180 @ 00be2180 ////

void __fastcall Dtor_00be2180(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00bee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9ff68;
  local_4 = 2;
  FUN_00be2b90(param_1 + 0x20);
  param_1[0x10] = &PTR_LAB_00d9fee0;
  param_1[6] = &PTR_ScalarDeletingDtor_00be2810_00d9ff14;
  if ((void *)param_1[0xe] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  *param_1 = &PTR_LAB_00d9fed4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be2200 @ 00be2200 ////

void __thiscall FUN_00be2200(void *this,undefined2 *param_1,uint param_2)

{
  FUN_00be2610((void *)((int)this + 0x40),param_1,param_2);
  FUN_00be2d20((void *)((int)this + 0x18),param_1,param_2);
  return;
}


//// FUNCTION FilteredDelayEffect_Init @ 00be2230 ////

undefined4 * __thiscall
FilteredDelayEffect_Init
          (void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5,float param_6,float param_7)

{
  undefined4 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00c74;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9ff68;
  Ctor_vt00d9ff14_00be2c20((void *)((int)this + 0x18),param_1,param_2,param_3,param_5,param_4);
  *(undefined4 *)((int)this + 0x40) = &PTR_LAB_00d9fee0;
  *(undefined4 *)((int)this + 0x60) = param_2;
  *(undefined4 *)((int)this + 100) = param_1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x3f800000;
  FUN_00be2550((undefined4 *)((int)this + 0x40),param_6,param_7,0,0x3f800000);
  this_00 = (undefined4 *)((int)this + 0x80);
  local_4._0_1_ = 2;
  *this_00 = &PTR_LAB_00d9ff18;
  RedBlackTree_Ctor((int *)((int)this + 0x84));
  *this_00 = &PTR_LAB_00d9ff40;
  local_4._0_1_ = 3;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ff94);
  local_4._0_1_ = 4;
  fVar2 = (float)std__String__Constructor(local_14,0xd9ff8c);
  fVar3 = (float)param_3;
  local_4._0_1_ = 5;
  if (param_3 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  FUN_00c1da30(this_00,0,0,0,fVar2,fVar1,1.0,0x43fa0000,fVar3,(int)this + 4);
  local_4._0_1_ = 3;
  fVar3 = (float)std__String__Constructor(local_14,0xd24028);
  local_4._0_1_ = 6;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ff88);
  local_4._0_1_ = 7;
  FUN_00c1da30(this_00,1,0,0,fVar1,fVar3,0.0,0x3f800000,param_5,(int)this + 0xc);
  local_4._0_1_ = 3;
  fVar3 = (float)std__String__Constructor(local_14,0xd24028);
  local_4._0_1_ = 8;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ff84);
  local_4._0_1_ = 9;
  FUN_00c1da30(this_00,2,0,0,fVar1,fVar3,0.0,0x3f800000,param_4,(int)this + 8);
  local_4._0_1_ = 3;
  fVar3 = (float)std__String__Constructor(local_14,0xd9ff80);
  local_4._0_1_ = 10;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ff78);
  local_4._0_1_ = 0xb;
  FUN_00c1da30(this_00,3,0,1,fVar1,fVar3,1.0,0x462c4400,param_6,(int)this + 0x10);
  local_4._0_1_ = 3;
  fVar3 = (float)std__String__Constructor(local_14,0xd16914);
  local_4._0_1_ = 0xc;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ff74);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_00c1da30(this_00,4,0,0,fVar1,fVar3,0.5,0x40a00000,param_7,(int)this + 0x14);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION SetVtable_00d9fed4_00be2490 @ 00be2490 ////

void __fastcall SetVtable_00d9fed4_00be2490(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fed4;
  return;
}


//// FUNCTION FUN_00be24d0 @ 00be24d0 ////

void __thiscall FUN_00be24d0(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(int *)((int)this + 0xc) = (int)uVar1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(int *)((int)this + 0x10) = (int)uVar1 + -1;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}


//// FUNCTION SetVtable_00d9fee0_00be2530 @ 00be2530 ////

void __fastcall SetVtable_00d9fee0_00be2530(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fee0;
  return;
}


//// FUNCTION FUN_00be2550 @ 00be2550 ////

void __thiscall
FUN_00be2550(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  if ((float10)0.25 * fVar3 < (float10)param_1) {
    param_1 = (float)((float10)0.25 * fVar3);
  }
  *(undefined4 *)((int)this + 0x2c) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_3;
  fVar3 = ((float10)param_1 * (float10)6.283185307179586) / fVar3;
  puVar1 = (undefined2 *)((int)this + 0x3c);
  iVar2 = 2;
  fVar4 = (float10)fptan(fVar3 / ((float10)param_2 + (float10)param_2));
  fVar4 = (((float10)1.0 - fVar4) / (fVar4 + (float10)1.0)) * (float10)0.5;
  *(double *)((int)this + 0x10) = (double)fVar4;
  fVar3 = (float10)fcos(fVar3);
  *(double *)((int)this + 0x18) = (double)((fVar4 + (float10)0.5) * fVar3);
  *(double *)((int)this + 8) = (double)(((float10)0.5 - fVar4) * (float10)0.5);
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[-6] = 0;
    puVar1[-4] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00be2610 @ 00be2610 ////

void __thiscall FUN_00be2610(void *this,undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  
  for (uVar2 = param_2 / (uint)(*(int *)((int)this + 0x24) << 1); uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2 = *(uint *)((int)this + 0x24);
    if (param_2 != 0) {
      puVar3 = (undefined2 *)((int)this + 0x38);
      do {
        uVar1 = puVar3[-4];
        uVar4 = FUN_00acd42c();
        puVar3[2] = *puVar3;
        *puVar3 = *param_1;
        puVar3[-4] = (short)uVar4;
        puVar3[-2] = uVar1;
        uVar4 = FUN_00acd42c();
        *param_1 = (short)uVar4;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00be2730 @ 00be2730 ////

int * __fastcall FUN_00be2730(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00be2760 @ 00be2760 ////

void __fastcall FUN_00be2760(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION Dtor_00be27e0 @ 00be27e0 ////

void __fastcall Dtor_00be27e0(undefined4 *param_1)

{
  *param_1 = &PTR_ScalarDeletingDtor_00be2810_00d9ff14;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00be2810 @ 00be2810 ////

undefined4 * __thiscall ScalarDeletingDtor_00be2810(void *this,byte param_1)

{
  Dtor_00be27e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00be2870 @ 00be2870 ////

void __fastcall Dtor_00be2870(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ff18;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION PKCAutoDeleteArray_Resize_00be28e0 @ 00be28e0 ////

void __thiscall PKCAutoDeleteArray_Resize_00be28e0(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00b5b;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      pvVar1 = operator_new(param_1 * 2);
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar2);
        DebugBreak();
      }
      uVar4 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar4 = *(uint *)((int)this + 4);
      }
      if ((uVar4 != 0) && (uVar3 = 0, uVar4 != 0)) {
        do {
          *(undefined2 *)((int)pvVar1 + uVar3 * 2) = *(undefined2 *)(*(int *)this + uVar3 * 2);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(void **)this = pvVar1;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKCAutoDeleteArray_At_00be2a20 @ 00be2a20 ////

int __thiscall PKCAutoDeleteArray_At_00be2a20(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00b7b;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 2;
}


//// FUNCTION Ctor_vt00d9ff18_00be2b30 @ 00be2b30 ////

undefined4 * __fastcall Ctor_vt00d9ff18_00be2b30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ff18;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be2b50 @ 00be2b50 ////

undefined4 * __thiscall ScalarDeletingDtor_00be2b50(void *this,byte param_1)

{
  Dtor_00be2870(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00be2b70 @ 00be2b70 ////

void __fastcall Dtor_00be2b70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ff18;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00be2b90 @ 00be2b90 ////

void __fastcall FUN_00be2b90(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00b98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00c1dc10(param_1);
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_00d9ff18;
  RedBlackTree_Dtor(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9ff40_00be2be0 @ 00be2be0 ////

undefined4 * __fastcall Ctor_vt00d9ff40_00be2be0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ff18;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9ff40;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be2c00 @ 00be2c00 ////

undefined4 * __thiscall ScalarDeletingDtor_00be2c00(void *this,byte param_1)

{
  Dtor_00be2b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9ff14_00be2c20 @ 00be2c20 ////

undefined4 * __thiscall
Ctor_vt00d9ff14_00be2c20
          (void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)((int)this + 0x20);
  *(undefined ***)this = &PTR_ScalarDeletingDtor_00be2810_00d9ff14;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_4;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0;
  uVar4 = FUN_00acd42c();
  *(int *)((int)this + 0xc) = (int)uVar4;
  uVar4 = FUN_00acd42c();
  PKCAutoDeleteArray_Resize_00be28e0(puVar1,(uint)uVar4);
  uVar3 = (uint)uVar4 - 4;
  puVar1 = (undefined4 *)PKCAutoDeleteArray_At_00be2a20(puVar1,0);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0xc) + -1;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00be2d20 @ 00be2d20 ////

uint __thiscall FUN_00be2d20(void *this,undefined2 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  for (uVar2 = param_2 / (uint)(*(int *)((int)this + 4) << 1); uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2 = *(uint *)((int)this + 4);
    uVar4 = 0;
    if (param_2 != 0) {
      puVar5 = param_1;
      do {
        uVar4 = *(uint *)((int)this + 0x14);
        *(uint *)((int)this + 0x14) = uVar4 + 1;
        PKCAutoDeleteArray_At_00be2a20((void *)((int)this + 0x20),uVar4);
        uVar6 = FUN_00acd42c();
        uVar4 = *(uint *)((int)this + 0x10);
        *(uint *)((int)this + 0x10) = uVar4 + 1;
        puVar3 = (undefined2 *)PKCAutoDeleteArray_At_00be2a20((void *)((int)this + 0x20),uVar4);
        *puVar3 = *puVar5;
        uVar1 = *(uint *)((int)this + 0xc);
        param_1 = puVar5 + 1;
        *(uint *)((int)this + 0x14) = *(uint *)((int)this + 0x14) % uVar1;
        uVar4 = *(uint *)((int)this + 0x10) / uVar1;
        param_2 = param_2 - 1;
        *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) % uVar1;
        *puVar5 = (short)uVar6;
        puVar5 = param_1;
      } while (param_2 != 0);
    }
  }
  return uVar4;
}


//// FUNCTION Ctor_vt00d9ff40_00be2de0 @ 00be2de0 ////

undefined4 * __fastcall Ctor_vt00d9ff40_00be2de0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9ff18;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9ff40;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be2e00 @ 00be2e00 ////

undefined4 * __thiscall ScalarDeletingDtor_00be2e00(void *this,byte param_1)

{
  Dtor_00be2180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00be2e70 @ 00be2e70 ////

void __fastcall Dtor_00be2e70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00c93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9ff9c;
  local_4 = 1;
  FUN_00be2b90(param_1 + 0x14);
  param_1[4] = &PTR_LAB_00d9fee0;
  *param_1 = &PTR_LAB_00d9fed4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ParametricEQEffect_Constructor @ 00be2ec0 ////

undefined4 * __thiscall
ParametricEQEffect_Constructor
          (void *this,undefined4 param_1,undefined4 param_2,float param_3,float param_4,
          undefined4 param_5)

{
  undefined4 *this_00;
  float fVar1;
  float fVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9ff9c;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = param_1;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d9fee0;
  *(undefined4 *)((int)this + 0x3c) = param_5;
  FUN_00be2550((undefined4 *)((int)this + 0x10),param_3,param_4,0,param_5);
  this_00 = (undefined4 *)((int)this + 0x50);
  local_4._0_1_ = 1;
  *this_00 = &PTR_LAB_00d9ff18;
  RedBlackTree_Ctor((int *)((int)this + 0x54));
  *this_00 = &PTR_LAB_00d9ff40;
  local_4._0_1_ = 2;
  fVar1 = (float)std__String__Constructor(local_1c,0xd9ffb4);
  local_4._0_1_ = 3;
  fVar2 = (float)std__String__Constructor(local_14,0xd9ff78);
  local_4._0_1_ = 4;
  FUN_00c1da30(this_00,0,0,1,fVar2,fVar1,1.0,0x462c4400,param_3,(int)this + 4);
  local_4._0_1_ = 2;
  fVar1 = (float)std__String__Constructor(local_14,0xd16914);
  local_4._0_1_ = 5;
  fVar2 = (float)std__String__Constructor(local_1c,0xd9ff74);
  local_4._0_1_ = 6;
  FUN_00c1da30(this_00,1,0,0,fVar2,fVar1,0.5,0x40a00000,param_4,(int)this + 8);
  local_4._0_1_ = 2;
  fVar1 = (float)std__String__Constructor(local_14,0xd24028);
  local_4._0_1_ = 7;
  fVar2 = (float)std__String__Constructor(local_1c,0xd9ffa8);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00c1da30(this_00,2,0,0,fVar2,fVar1,0.0,0x40a00000,param_5,(int)this + 0xc);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00be3050 @ 00be3050 ////

undefined4 * __thiscall ScalarDeletingDtor_00be3050(void *this,byte param_1)

{
  Dtor_00be2e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WindowsACM_CreateCodecInstance @ 00be30a0 ////

undefined4 * __thiscall WindowsACM_CreateCodecInstance(void *this,int *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x5c);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = WindowsACM_CodecInstance_Init(this_00,this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION Dtor_00be3130 @ 00be3130 ////

void __fastcall Dtor_00be3130(undefined4 *param_1)

{
  param_1[3] = &PTR_LAB_00d9d9b4;
  param_1[1] = &PTR_LAB_00d9d9b4;
  *param_1 = &PTR_LAB_00d9e03c;
  return;
}


//// FUNCTION CCodecDescriptor_WindowsACM_Constructor @ 00be3150 ////

undefined4 * __fastcall CCodecDescriptor_WindowsACM_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00d33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9ffbc;
  param_1[1] = &PTR_LAB_00d9e058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = &PTR_LAB_00d9e074;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  local_4 = 2;
  FUN_00bbfaa0(param_1 + 1,"wav");
  FUN_00bbfaa0(param_1 + 3,"Windows ACM Codec");
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be31d0 @ 00be31d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00be31d0(void *this,byte param_1)

{
  Dtor_00be3130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WMA_CreateCodecInstance @ 00be3220 ////

undefined4 * __thiscall WMA_CreateCodecInstance(void *this,int *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d00d4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x78);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = WMA_CodecInstance_Init(this_00,this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION Dtor_00be32b0 @ 00be32b0 ////

void __fastcall Dtor_00be32b0(undefined4 *param_1)

{
  param_1[3] = &PTR_LAB_00d9d9b4;
  param_1[1] = &PTR_LAB_00d9d9b4;
  *param_1 = &PTR_LAB_00d9e03c;
  return;
}


//// FUNCTION CCodecDescriptor_WMA_Constructor @ 00be32d0 ////

undefined4 * __fastcall CCodecDescriptor_WMA_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00d73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9ffdc;
  param_1[1] = &PTR_LAB_00d9e058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = &PTR_LAB_00d9e074;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  local_4 = 2;
  FUN_00bbfaa0(param_1 + 1,"wma");
  FUN_00bbfaa0(param_1 + 3,"WMA Codec");
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00be3350 @ 00be3350 ////

undefined4 * __thiscall ScalarDeletingDtor_00be3350(void *this,byte param_1)

{
  Dtor_00be32b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00be3380 @ 00be3380 ////

void FUN_00be3380(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[5] == 0) {
    iVar2 = *(int *)(&DAT_00ea7750 + ((param_1[0xd] * 2 - param_1[1]) * 0x10 + param_1[0xc]) * 4);
  }
  else {
    iVar2 = 4;
  }
  uVar1 = *(undefined4 *)(&DAT_00ea76bc + iVar2 * 4);
  *param_1 = (&PTR_DAT_00ea76a8)[iVar2];
  param_1[4] = uVar1;
  return;
}


//// FUNCTION FUN_00be33d0 @ 00be33d0 ////

void __fastcall FUN_00be33d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


//// FUNCTION FUN_00be33e0 @ 00be33e0 ////

void __fastcall FUN_00be33e0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x1c8));
}


//// FUNCTION FUN_00be3410 @ 00be3410 ////

void __thiscall FUN_00be3410(void *this,uint param_1)

{
  int iVar1;
  int extraout_EDX;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x48);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00be33d0((int)this);
  *(undefined4 *)(extraout_EDX + 0xb4) = 0;
  *(undefined4 *)(extraout_EDX + 0xb0) = 0;
  *(undefined4 *)(extraout_EDX + 0xc0) = 0;
  *(undefined4 *)(extraout_EDX + 0xbc) = 0;
  *(undefined4 *)(extraout_EDX + 0xb8) = 0;
  *(undefined4 *)(extraout_EDX + 100) = 0;
  *(uint *)(extraout_EDX + 0x88) = param_1 >> 0x1e;
  *(undefined4 *)(extraout_EDX + 0x54) = 0xffffffff;
  *(undefined4 *)(extraout_EDX + 0x9c) = 1;
  iVar1 = (param_1 >> 0x1e != 3) + 1;
  *(int *)(extraout_EDX + 0x4c) = iVar1;
  *(int *)(extraout_EDX + 0x6c) = 0x20 << (sbyte)iVar1;
  puVar2 = *(undefined4 **)(extraout_EDX + 0x1c8);
  for (iVar1 = 0x440; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(extraout_EDX + 0x1cc) = 0;
  *(undefined4 *)(extraout_EDX + 0x1d0) = 0;
  *(undefined4 *)(extraout_EDX + 0x1c4) = 1;
  return;
}


//// FUNCTION FUN_00be34c0 @ 00be34c0 ////

void __fastcall FUN_00be34c0(int param_1)

{
  undefined *puVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  int local_8;
  
  iVar8 = 0;
  do {
    puVar1 = (&PTR_DAT_00ea6a50)[iVar8];
    iVar4 = 0x10 >> ((byte)iVar8 & 0x1f);
    local_8 = 0;
    if (0 < iVar4) {
      do {
        fVar13 = (float10)local_8;
        local_8 = local_8 + 1;
        fVar13 = (float10)fcos(((fVar13 + fVar13 + (float10)1.0) * (float10)3.14159265359) /
                               (float10)(0x40 >> ((byte)iVar8 & 0x1f)));
        *(float *)(puVar1 + local_8 * 4 + -4) = (float)((float10)1.0 / (fVar13 + fVar13));
      } while (local_8 < iVar4);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  iVar4 = -param_1;
  uVar12 = 0;
  pfVar5 = (float *)&DAT_010d1b50;
  iVar8 = 0;
  iVar10 = 2;
  local_8 = iVar4;
  do {
    if (pfVar5 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8] * (float)local_8 * 1.5258789e-05;
      *pfVar5 = fVar2;
      pfVar5[0x10] = fVar2;
    }
    if (((byte)uVar12 & 0x1f) == 0x1f) {
      pfVar5 = pfVar5 + -0x3ff;
    }
    if (((byte)uVar12 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar6 = pfVar5 + 0x20;
    if (pfVar6 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 1] * (float)local_8 * 1.5258789e-05;
      *pfVar6 = fVar2;
      pfVar5[0x30] = fVar2;
    }
    bVar3 = (byte)iVar10;
    if ((bVar3 - 1 & 0x1f) == 0x1f) {
      pfVar6 = pfVar5 + -0x3df;
    }
    if ((bVar3 - 1 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar5 = pfVar6 + 0x20;
    if (pfVar5 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 2] * (float)local_8 * 1.5258789e-05;
      *pfVar5 = fVar2;
      pfVar6[0x30] = fVar2;
    }
    if ((bVar3 & 0x1f) == 0x1f) {
      pfVar5 = pfVar6 + -0x3df;
    }
    if ((bVar3 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar6 = pfVar5 + 0x20;
    if (pfVar6 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 3] * (float)local_8 * 1.5258789e-05;
      *pfVar6 = fVar2;
      pfVar5[0x30] = fVar2;
    }
    if ((bVar3 + 1 & 0x1f) == 0x1f) {
      pfVar6 = pfVar5 + -0x3df;
    }
    if ((bVar3 + 1 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar5 = pfVar6 + 0x20;
    if (pfVar5 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 4] * (float)local_8 * 1.5258789e-05;
      *pfVar5 = fVar2;
      pfVar6[0x30] = fVar2;
    }
    if ((bVar3 + 2 & 0x1f) == 0x1f) {
      pfVar5 = pfVar6 + -0x3df;
    }
    if ((bVar3 + 2 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar6 = pfVar5 + 0x20;
    if (pfVar6 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 5] * (float)local_8 * 1.5258789e-05;
      *pfVar6 = fVar2;
      pfVar5[0x30] = fVar2;
    }
    if ((bVar3 + 3 & 0x1f) == 0x1f) {
      pfVar6 = pfVar5 + -0x3df;
    }
    if ((bVar3 + 3 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar7 = pfVar6 + 0x20;
    if (pfVar7 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 6] * (float)local_8 * 1.5258789e-05;
      *pfVar7 = fVar2;
      pfVar6[0x30] = fVar2;
    }
    if ((bVar3 + 4 & 0x1f) == 0x1f) {
      pfVar7 = pfVar6 + -0x3df;
    }
    if ((bVar3 + 4 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    pfVar5 = pfVar7 + 0x20;
    if (pfVar5 < &DAT_010d2390) {
      fVar2 = (float)(int)(&DAT_00ea6a68)[iVar8 + 7] * (float)local_8 * 1.5258789e-05;
      *pfVar5 = fVar2;
      pfVar7[0x30] = fVar2;
    }
    if ((bVar3 + 5 & 0x1f) == 0x1f) {
      pfVar5 = pfVar7 + -0x3df;
    }
    if ((bVar3 + 5 & 0x3f) == 0x3f) {
      iVar4 = -iVar4;
      local_8 = iVar4;
    }
    iVar10 = iVar10 + 8;
    iVar8 = iVar8 + 8;
    pfVar5 = pfVar5 + 0x20;
    uVar12 = uVar12 + 8;
  } while (iVar10 < 0x102);
  if ((int)uVar12 < 0x200) {
    piVar9 = &DAT_00ea6a68 + iVar8;
    do {
      if (pfVar5 < &DAT_010d2390) {
        fVar2 = (float)*piVar9 * (float)local_8 * 1.5258789e-05;
        *pfVar5 = fVar2;
        pfVar5[0x10] = fVar2;
      }
      uVar11 = uVar12 & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      if (uVar11 == 0x1f) {
        pfVar5 = pfVar5 + -0x3ff;
      }
      uVar11 = uVar12 & 0x8000003f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
      }
      if (uVar11 == 0x3f) {
        iVar4 = -iVar4;
        local_8 = iVar4;
      }
      uVar12 = uVar12 + 1;
      piVar9 = piVar9 + -1;
      pfVar5 = pfVar5 + 0x20;
    } while ((int)uVar12 < 0x200);
  }
  return;
}


//// FUNCTION FUN_00be37f0 @ 00be37f0 ////

void __fastcall
FUN_00be37f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_00ea6a50;
  *param_3 = *param_5 + param_5[0x1f];
  param_3[0x1f] = (*param_5 - param_5[0x1f]) * *(float *)puVar3;
  param_3[1] = param_5[1] + param_5[0x1e];
  param_3[0x1e] = (param_5[1] - param_5[0x1e]) * *(float *)(puVar3 + 4);
  param_3[2] = param_5[0x1d] + param_5[2];
  param_3[0x1d] = (param_5[2] - param_5[0x1d]) * *(float *)(puVar3 + 8);
  param_3[3] = param_5[3] + param_5[0x1c];
  param_3[0x1c] = (param_5[3] - param_5[0x1c]) * *(float *)(puVar3 + 0xc);
  param_3[4] = param_5[4] + param_5[0x1b];
  param_3[0x1b] = (param_5[4] - param_5[0x1b]) * *(float *)(puVar3 + 0x10);
  param_3[5] = param_5[5] + param_5[0x1a];
  param_3[0x1a] = (param_5[5] - param_5[0x1a]) * *(float *)(puVar3 + 0x14);
  param_3[6] = param_5[0x19] + param_5[6];
  param_3[0x19] = (param_5[6] - param_5[0x19]) * *(float *)(puVar3 + 0x18);
  param_3[7] = param_5[7] + param_5[0x18];
  param_3[0x18] = (param_5[7] - param_5[0x18]) * *(float *)(puVar3 + 0x1c);
  param_3[8] = param_5[8] + param_5[0x17];
  param_3[0x17] = (param_5[8] - param_5[0x17]) * *(float *)(puVar3 + 0x20);
  param_3[9] = param_5[9] + param_5[0x16];
  param_3[0x16] = (param_5[9] - param_5[0x16]) * *(float *)(puVar3 + 0x24);
  param_3[10] = param_5[0x15] + param_5[10];
  param_3[0x15] = (param_5[10] - param_5[0x15]) * *(float *)(puVar3 + 0x28);
  param_3[0xb] = param_5[0xb] + param_5[0x14];
  param_3[0x14] = (param_5[0xb] - param_5[0x14]) * *(float *)(puVar3 + 0x2c);
  param_3[0xc] = param_5[0xc] + param_5[0x13];
  param_3[0x13] = (param_5[0xc] - param_5[0x13]) * *(float *)(puVar3 + 0x30);
  param_3[0xd] = param_5[0xd] + param_5[0x12];
  param_3[0x12] = (param_5[0xd] - param_5[0x12]) * *(float *)(puVar3 + 0x34);
  param_3[0xe] = param_5[0x11] + param_5[0xe];
  param_3[0x11] = (param_5[0xe] - param_5[0x11]) * *(float *)(puVar3 + 0x38);
  param_3[0xf] = param_5[0xf] + param_5[0x10];
  param_3[0x10] = (param_5[0xf] - param_5[0x10]) * *(float *)(puVar3 + 0x3c);
  puVar3 = PTR_DAT_00ea6a54;
  *param_4 = param_3[0xf] + *param_3;
  param_4[0xf] = (*param_3 - param_3[0xf]) * *(float *)puVar3;
  param_4[1] = param_3[0xe] + param_3[1];
  param_4[0xe] = (param_3[1] - param_3[0xe]) * *(float *)(puVar3 + 4);
  param_4[2] = param_3[2] + param_3[0xd];
  param_4[0xd] = (param_3[2] - param_3[0xd]) * *(float *)(puVar3 + 8);
  param_4[3] = param_3[3] + param_3[0xc];
  param_4[0xc] = (param_3[3] - param_3[0xc]) * *(float *)(puVar3 + 0xc);
  param_4[4] = param_3[0xb] + param_3[4];
  param_4[0xb] = (param_3[4] - param_3[0xb]) * *(float *)(puVar3 + 0x10);
  param_4[5] = param_3[10] + param_3[5];
  param_4[10] = (param_3[5] - param_3[10]) * *(float *)(puVar3 + 0x14);
  param_4[6] = param_3[6] + param_3[9];
  param_4[9] = (param_3[6] - param_3[9]) * *(float *)(puVar3 + 0x18);
  param_4[7] = param_3[7] + param_3[8];
  param_4[8] = (param_3[7] - param_3[8]) * *(float *)(puVar3 + 0x1c);
  param_4[0x10] = param_3[0x10] + param_3[0x1f];
  param_4[0x1f] = (param_3[0x1f] - param_3[0x10]) * *(float *)puVar3;
  param_4[0x11] = param_3[0x11] + param_3[0x1e];
  param_4[0x1e] = (param_3[0x1e] - param_3[0x11]) * *(float *)(puVar3 + 4);
  param_4[0x12] = param_3[0x1d] + param_3[0x12];
  param_4[0x1d] = (param_3[0x1d] - param_3[0x12]) * *(float *)(puVar3 + 8);
  param_4[0x13] = param_3[0x1c] + param_3[0x13];
  param_4[0x1c] = (param_3[0x1c] - param_3[0x13]) * *(float *)(puVar3 + 0xc);
  param_4[0x14] = param_3[0x14] + param_3[0x1b];
  param_4[0x1b] = (param_3[0x1b] - param_3[0x14]) * *(float *)(puVar3 + 0x10);
  param_4[0x15] = param_3[0x15] + param_3[0x1a];
  param_4[0x1a] = (param_3[0x1a] - param_3[0x15]) * *(float *)(puVar3 + 0x14);
  param_4[0x16] = param_3[0x19] + param_3[0x16];
  param_4[0x19] = (param_3[0x19] - param_3[0x16]) * *(float *)(puVar3 + 0x18);
  param_4[0x17] = param_3[0x18] + param_3[0x17];
  param_4[0x18] = (param_3[0x18] - param_3[0x17]) * *(float *)(puVar3 + 0x1c);
  puVar3 = PTR_DAT_00ea6a58;
  *param_3 = param_4[7] + *param_4;
  param_3[7] = (*param_4 - param_4[7]) * *(float *)puVar3;
  param_3[1] = param_4[1] + param_4[6];
  param_3[6] = (param_4[1] - param_4[6]) * *(float *)(puVar3 + 4);
  param_3[2] = param_4[5] + param_4[2];
  param_3[5] = (param_4[2] - param_4[5]) * *(float *)(puVar3 + 8);
  param_3[3] = param_4[4] + param_4[3];
  param_3[4] = (param_4[3] - param_4[4]) * *(float *)(puVar3 + 0xc);
  param_3[8] = param_4[0xf] + param_4[8];
  param_3[0xf] = (param_4[0xf] - param_4[8]) * *(float *)puVar3;
  param_3[9] = param_4[0xe] + param_4[9];
  param_3[0xe] = (param_4[0xe] - param_4[9]) * *(float *)(puVar3 + 4);
  param_3[10] = param_4[10] + param_4[0xd];
  param_3[0xd] = (param_4[0xd] - param_4[10]) * *(float *)(puVar3 + 8);
  param_3[0xb] = param_4[0xb] + param_4[0xc];
  param_3[0xc] = (param_4[0xc] - param_4[0xb]) * *(float *)(puVar3 + 0xc);
  param_3[0x10] = param_4[0x10] + param_4[0x17];
  param_3[0x17] = (param_4[0x10] - param_4[0x17]) * *(float *)puVar3;
  param_3[0x11] = param_4[0x16] + param_4[0x11];
  param_3[0x16] = (param_4[0x11] - param_4[0x16]) * *(float *)(puVar3 + 4);
  param_3[0x12] = param_4[0x12] + param_4[0x15];
  param_3[0x15] = (param_4[0x12] - param_4[0x15]) * *(float *)(puVar3 + 8);
  param_3[0x13] = param_4[0x14] + param_4[0x13];
  param_3[0x14] = (param_4[0x13] - param_4[0x14]) * *(float *)(puVar3 + 0xc);
  param_3[0x18] = param_4[0x1f] + param_4[0x18];
  param_3[0x1f] = (param_4[0x1f] - param_4[0x18]) * *(float *)puVar3;
  param_3[0x19] = param_4[0x19] + param_4[0x1e];
  param_3[0x1e] = (param_4[0x1e] - param_4[0x19]) * *(float *)(puVar3 + 4);
  param_3[0x1a] = param_4[0x1d] + param_4[0x1a];
  param_3[0x1d] = (param_4[0x1d] - param_4[0x1a]) * *(float *)(puVar3 + 8);
  param_3[0x1b] = param_4[0x1b] + param_4[0x1c];
  param_3[0x1c] = (param_4[0x1c] - param_4[0x1b]) * *(float *)(puVar3 + 0xc);
  fVar1 = *(float *)PTR_DAT_00ea6a5c;
  fVar2 = *(float *)(PTR_DAT_00ea6a5c + 4);
  *param_4 = param_3[3] + *param_3;
  param_4[3] = (*param_3 - param_3[3]) * fVar1;
  param_4[1] = param_3[2] + param_3[1];
  param_4[2] = (param_3[1] - param_3[2]) * fVar2;
  param_4[4] = param_3[7] + param_3[4];
  param_4[7] = (param_3[7] - param_3[4]) * fVar1;
  param_4[5] = param_3[6] + param_3[5];
  param_4[6] = (param_3[6] - param_3[5]) * fVar2;
  param_4[8] = param_3[0xb] + param_3[8];
  param_4[0xb] = (param_3[8] - param_3[0xb]) * fVar1;
  param_4[9] = param_3[10] + param_3[9];
  param_4[10] = (param_3[9] - param_3[10]) * fVar2;
  param_4[0xc] = param_3[0xf] + param_3[0xc];
  param_4[0xf] = (param_3[0xf] - param_3[0xc]) * fVar1;
  param_4[0xd] = param_3[0xe] + param_3[0xd];
  param_4[0xe] = (param_3[0xe] - param_3[0xd]) * fVar2;
  param_4[0x10] = param_3[0x10] + param_3[0x13];
  param_4[0x13] = (param_3[0x10] - param_3[0x13]) * fVar1;
  param_4[0x11] = param_3[0x11] + param_3[0x12];
  param_4[0x12] = (param_3[0x11] - param_3[0x12]) * fVar2;
  param_4[0x14] = param_3[0x14] + param_3[0x17];
  param_4[0x17] = (param_3[0x17] - param_3[0x14]) * fVar1;
  param_4[0x15] = param_3[0x15] + param_3[0x16];
  param_4[0x16] = (param_3[0x16] - param_3[0x15]) * fVar2;
  param_4[0x18] = param_3[0x18] + param_3[0x1b];
  param_4[0x1b] = (param_3[0x18] - param_3[0x1b]) * fVar1;
  param_4[0x19] = param_3[0x19] + param_3[0x1a];
  param_4[0x1a] = (param_3[0x19] - param_3[0x1a]) * fVar2;
  param_4[0x1c] = param_3[0x1c] + param_3[0x1f];
  param_4[0x1f] = (param_3[0x1f] - param_3[0x1c]) * fVar1;
  param_4[0x1d] = param_3[0x1d] + param_3[0x1e];
  param_4[0x1e] = (param_3[0x1e] - param_3[0x1d]) * fVar2;
  fVar1 = *(float *)PTR_DAT_00ea6a60;
  *param_3 = param_4[1] + *param_4;
  param_3[1] = (*param_4 - param_4[1]) * fVar1;
  param_3[2] = param_4[3] + param_4[2];
  fVar2 = (param_4[3] - param_4[2]) * fVar1;
  param_3[3] = fVar2;
  param_3[2] = fVar2 + param_3[2];
  param_3[4] = param_4[5] + param_4[4];
  param_3[5] = (param_4[4] - param_4[5]) * fVar1;
  param_3[6] = param_4[7] + param_4[6];
  fVar2 = (param_4[7] - param_4[6]) * fVar1;
  param_3[7] = fVar2;
  fVar2 = fVar2 + param_3[6];
  param_3[6] = fVar2;
  param_3[4] = fVar2 + param_3[4];
  param_3[6] = param_3[6] + param_3[5];
  param_3[5] = param_3[7] + param_3[5];
  param_3[8] = param_4[8] + param_4[9];
  param_3[9] = (param_4[8] - param_4[9]) * fVar1;
  param_3[10] = param_4[10] + param_4[0xb];
  fVar2 = (param_4[0xb] - param_4[10]) * fVar1;
  param_3[0xb] = fVar2;
  param_3[10] = fVar2 + param_3[10];
  param_3[0xc] = param_4[0xc] + param_4[0xd];
  param_3[0xd] = (param_4[0xc] - param_4[0xd]) * fVar1;
  param_3[0xe] = param_4[0xe] + param_4[0xf];
  fVar2 = (param_4[0xf] - param_4[0xe]) * fVar1;
  param_3[0xf] = fVar2;
  fVar2 = fVar2 + param_3[0xe];
  param_3[0xe] = fVar2;
  param_3[0xc] = fVar2 + param_3[0xc];
  param_3[0xe] = param_3[0xe] + param_3[0xd];
  param_3[0xd] = param_3[0xf] + param_3[0xd];
  param_3[0x10] = param_4[0x10] + param_4[0x11];
  param_3[0x11] = (param_4[0x10] - param_4[0x11]) * fVar1;
  param_3[0x12] = param_4[0x12] + param_4[0x13];
  fVar2 = (param_4[0x13] - param_4[0x12]) * fVar1;
  param_3[0x13] = fVar2;
  param_3[0x12] = fVar2 + param_3[0x12];
  param_3[0x14] = param_4[0x14] + param_4[0x15];
  param_3[0x15] = (param_4[0x14] - param_4[0x15]) * fVar1;
  param_3[0x16] = param_4[0x16] + param_4[0x17];
  fVar2 = (param_4[0x17] - param_4[0x16]) * fVar1;
  param_3[0x17] = fVar2;
  fVar2 = fVar2 + param_3[0x16];
  param_3[0x16] = fVar2;
  param_3[0x14] = fVar2 + param_3[0x14];
  param_3[0x16] = param_3[0x15] + param_3[0x16];
  param_3[0x15] = param_3[0x15] + param_3[0x17];
  param_3[0x18] = param_4[0x19] + param_4[0x18];
  param_3[0x19] = (param_4[0x18] - param_4[0x19]) * fVar1;
  param_3[0x1a] = param_4[0x1b] + param_4[0x1a];
  fVar2 = (param_4[0x1b] - param_4[0x1a]) * fVar1;
  param_3[0x1b] = fVar2;
  param_3[0x1a] = fVar2 + param_3[0x1a];
  param_3[0x1c] = param_4[0x1d] + param_4[0x1c];
  param_3[0x1d] = (param_4[0x1c] - param_4[0x1d]) * fVar1;
  param_3[0x1e] = param_4[0x1f] + param_4[0x1e];
  fVar1 = (param_4[0x1f] - param_4[0x1e]) * fVar1;
  param_3[0x1f] = fVar1;
  fVar1 = fVar1 + param_3[0x1e];
  param_3[0x1e] = fVar1;
  param_3[0x1c] = fVar1 + param_3[0x1c];
  param_3[0x1e] = param_3[0x1d] + param_3[0x1e];
  param_3[0x1d] = param_3[0x1d] + param_3[0x1f];
  param_1[0x100] = *param_3;
  param_1[0xc0] = param_3[4];
  param_1[0x80] = param_3[2];
  param_1[0x40] = param_3[6];
  *param_1 = param_3[1];
  *param_2 = param_3[1];
  param_2[0x40] = param_3[5];
  param_2[0x80] = param_3[3];
  param_2[0xc0] = param_3[7];
  fVar1 = param_3[8];
  param_3[8] = param_3[0xc] + fVar1;
  param_1[0xe0] = param_3[0xc] + fVar1;
  fVar1 = param_3[0xc];
  param_3[0xc] = param_3[10] + fVar1;
  param_1[0xa0] = param_3[10] + fVar1;
  fVar1 = param_3[10];
  param_3[10] = param_3[0xe] + fVar1;
  param_1[0x60] = param_3[0xe] + fVar1;
  fVar1 = param_3[0xe];
  param_3[0xe] = fVar1 + param_3[9];
  param_1[0x20] = fVar1 + param_3[9];
  fVar1 = param_3[9];
  param_3[9] = param_3[0xd] + fVar1;
  param_2[0x20] = param_3[0xd] + fVar1;
  fVar1 = param_3[0xd];
  param_3[0xd] = param_3[0xb] + fVar1;
  param_2[0x60] = param_3[0xb] + fVar1;
  fVar1 = param_3[0xb];
  param_3[0xb] = param_3[0xf] + fVar1;
  param_2[0xa0] = param_3[0xf] + fVar1;
  param_2[0xe0] = param_3[0xf];
  fVar1 = param_3[0x18];
  param_3[0x18] = param_3[0x1c] + fVar1;
  param_1[0xf0] = param_3[0x1c] + fVar1 + param_3[0x10];
  param_1[0xd0] = param_3[0x18] + param_3[0x14];
  fVar1 = param_3[0x1c];
  param_3[0x1c] = fVar1 + param_3[0x1a];
  param_1[0xb0] = fVar1 + param_3[0x1a] + param_3[0x14];
  param_1[0x90] = param_3[0x1c] + param_3[0x12];
  fVar1 = param_3[0x1a];
  param_3[0x1a] = param_3[0x1e] + fVar1;
  param_1[0x70] = param_3[0x1e] + fVar1 + param_3[0x12];
  param_1[0x50] = param_3[0x1a] + param_3[0x16];
  fVar1 = param_3[0x1e];
  param_3[0x1e] = param_3[0x19] + fVar1;
  param_1[0x30] = param_3[0x19] + fVar1 + param_3[0x16];
  param_1[0x10] = param_3[0x11] + param_3[0x1e];
  fVar1 = param_3[0x19];
  param_3[0x19] = param_3[0x1d] + fVar1;
  param_2[0x10] = param_3[0x1d] + fVar1 + param_3[0x11];
  param_2[0x30] = param_3[0x19] + param_3[0x15];
  fVar1 = param_3[0x1d];
  param_3[0x1d] = fVar1 + param_3[0x1b];
  param_2[0x50] = fVar1 + param_3[0x1b] + param_3[0x15];
  param_2[0x70] = param_3[0x1d] + param_3[0x13];
  fVar1 = param_3[0x1b];
  param_3[0x1b] = param_3[0x1f] + fVar1;
  param_2[0x90] = param_3[0x1f] + fVar1 + param_3[0x13];
  param_2[0xb0] = param_3[0x1b] + param_3[0x17];
  param_2[0xd0] = param_3[0x1f] + param_3[0x17];
  param_2[0xf0] = param_3[0x1f];
  return;
}


//// FUNCTION FUN_00be40c0 @ 00be40c0 ////

void __fastcall FUN_00be40c0(float *param_1,float *param_2,float *param_3)

{
  float local_100 [32];
  float local_80 [32];
  
  FUN_00be37f0(param_1,param_2,local_100,local_80,param_3);
  return;
}


//// FUNCTION FUN_00be40f0 @ 00be40f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00be40f0(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  double *pdVar12;
  float10 fVar13;
  int local_18;
  int local_14;
  
  iVar3 = 0;
  puVar6 = &DAT_00ea7940;
  do {
    iVar2 = *(int *)((int)&DAT_00ea7934 + iVar3);
    _DAT_010d5da0 = *(undefined4 **)((int)&PTR_DAT_00ea7928 + iVar3);
    puVar4 = puVar6;
    iVar5 = iVar2;
    local_14 = iVar2;
    local_18 = iVar2;
    puVar11 = puVar6;
    puVar8 = puVar6;
    if (0 < iVar2) {
      do {
        do {
          do {
            *_DAT_010d5da0 = *puVar4;
            _DAT_010d5da0[1] = *puVar8;
            _DAT_010d5da0[2] = *puVar11;
            _DAT_010d5da0 = _DAT_010d5da0 + 3;
            iVar5 = iVar5 + -1;
            puVar4 = puVar4 + 1;
          } while (iVar5 != 0);
          puVar8 = puVar8 + 1;
          local_18 = local_18 + -1;
          puVar4 = puVar6;
          iVar5 = iVar2;
        } while (local_18 != 0);
        puVar11 = puVar11 + 1;
        local_14 = local_14 + -1;
        local_18 = iVar2;
        puVar8 = puVar6;
      } while (local_14 != 0);
    }
    iVar3 = iVar3 + 4;
    puVar6 = puVar6 + 9;
  } while ((int)puVar6 < 0xea79ac);
  pfVar7 = (float *)&DAT_010d0030;
  pdVar12 = (double *)&DAT_00ea7850;
  do {
    dVar1 = *pdVar12;
    iVar3 = 0x3f;
    pfVar9 = pfVar7;
    do {
      fVar13 = (float10)FUN_00ace9b0();
      pfVar10 = pfVar9 + 1;
      iVar3 = iVar3 + -1;
      *pfVar9 = (float)(fVar13 * (float10)dVar1);
      pfVar9 = pfVar10;
    } while (iVar3 != 0);
    pdVar12 = pdVar12 + 1;
    pfVar7 = pfVar7 + 0x40;
    *pfVar10 = 0.0;
  } while ((int)pdVar12 < 0xea7928);
  return;
}


//// FUNCTION FUN_00be4220 @ 00be4220 ////

void __fastcall FUN_00be4220(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_00be4240 @ 00be4240 ////

void __thiscall FUN_00be4240(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if ((uint)(*(int *)((int)this + 4) << 3) <
      (uint)(param_1 + *(int *)((int)this + 8) * 8 + *(int *)((int)this + 0xc))) {
    LH_Assert(&param_1,"( NumBits + BitOffset + ( ByteOffset * 8 )) <= ( ByteSize * 8 )\n");
    DebugBreak();
  }
  uVar2 = *(int *)((int)this + 0xc) + iVar1;
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + (uVar2 >> 3);
  *(uint *)((int)this + 0xc) = uVar2 & 7;
  return;
}


//// FUNCTION FUN_00be4290 @ 00be4290 ////

void __thiscall FUN_00be4290(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    LH_Assert(&param_1,"( Buffer != NULL ) && ( _ByteSize > 0 )\n");
    DebugBreak();
  }
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    LH_Assert(&param_1,"Data != NULL\n");
    DebugBreak();
  }
  *(int *)((int)this + 4) = iVar2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00be4300 @ 00be4300 ////

uint __thiscall FUN_00be4300(void *this,uint param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)this == 0) ||
     ((uint)(*(int *)((int)this + 4) << 3) <
      *(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 8 + param_1)) {
    LH_Assert(&param_1,
              "( Data != NULL ) && (( NumBits + BitOffset + ( ByteOffset * 8 )) <= ( ByteSize * 8 ))\n"
             );
    DebugBreak();
  }
  if (0x20 < uVar9) {
    LH_Assert(&param_1,"NumBits <= 32\n");
    DebugBreak();
  }
  iVar6 = *(int *)((int)this + 8);
  iVar7 = *(int *)this;
  uVar2 = *(undefined1 *)(iVar7 + iVar6);
  uVar3 = *(undefined1 *)(iVar7 + 1 + iVar6);
  iVar8 = *(int *)((int)this + 0xc);
  uVar4 = *(undefined1 *)(iVar7 + iVar6 + 2);
  uVar5 = *(undefined1 *)(iVar7 + iVar6 + 3);
  uVar1 = iVar8 + uVar9;
  *(uint *)((int)this + 8) = (uVar1 >> 3) + iVar6;
  *(uint *)((int)this + 0xc) = uVar1 & 7;
  return (uint)(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5) << ((byte)iVar8 & 0x1f)) >>
         (0x20U - (char)uVar9 & 0x1f);
}


//// FUNCTION FUN_00be4410 @ 00be4410 ////

uint __thiscall FUN_00be4410(void *this,int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1;
  if ((*(int *)this == 0) ||
     ((uint)(*(int *)((int)this + 4) << 3) <
      (uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 8) * 8 + param_1))) {
    LH_Assert(&param_1,
              "( Data != NULL ) && (( NumBits + BitOffset + ( ByteOffset * 8 )) <= ( ByteSize * 8 ))\n"
             );
    DebugBreak();
  }
  iVar4 = *(int *)((int)this + 8);
  uVar2 = *(undefined1 *)(*(int *)this + iVar4);
  iVar5 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined1 *)(*(int *)this + iVar4 + 1);
  uVar1 = iVar5 + iVar6;
  *(uint *)((int)this + 8) = (uVar1 >> 3) + iVar4;
  *(uint *)((int)this + 0xc) = uVar1 & 7;
  return ((uint)CONCAT11(uVar2,uVar3) << ((byte)iVar5 & 0x1f) & 0xffff) >>
         (0x10U - (char)iVar6 & 0x1f);
}


//// FUNCTION FUN_00be44d0 @ 00be44d0 ////

undefined4 __thiscall FUN_00be44d0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00bd9f00((int)this + 0x2c);
  iVar2 = GetField_4_00bd9ef0((int)this + 0x2c);
  lVar3 = __allmul(*(uint *)((int)this + 8),0,iVar1 + iVar2,0);
  lVar3 = __allmul((uint)lVar3,(int)((ulonglong)lVar3 >> 0x20),8,0);
  uVar4 = __aulldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),*(uint *)((int)this + 0x18),0);
  *param_1 = (int)uVar4;
  return CONCAT31((int3)((ulonglong)uVar4 >> 8),1);
}


//// FUNCTION FUN_00be4550 @ 00be4550 ////

void __fastcall FUN_00be4550(int param_1)

{
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00be33e0(param_1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


//// FUNCTION FUN_00be4570 @ 00be4570 ////

void __thiscall FUN_00be4570(void *this,int *param_1)

{
  int *this_00;
  char cVar1;
  void *pvVar2;
  uint unaff_ESI;
  
  this_00 = param_1;
  cVar1 = (**(code **)(*param_1 + 4))(&param_1,4);
  if (cVar1 != '\0') {
    PKDataReadCStreamer_Seek(this_00,0,2);
    FUN_00bd9ae0((void *)((int)this + 0x2c),(int)this_00);
    pvVar2 = operator_new(0x1100);
    *(void **)((int)this + 0x1c8) = pvVar2;
    if (DAT_00ea79ac != 0) {
      FUN_00be34c0(0x8000);
      FUN_00be40f0();
      DAT_00ea79ac = 0;
    }
    FUN_00be3410(this,unaff_ESI);
  }
  return;
}


//// FUNCTION FUN_00be45f0 @ 00be45f0 ////

undefined4 __thiscall
FUN_00be45f0(void *this,float *param_1,int param_2,undefined2 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  undefined2 *puVar11;
  
  if (param_2 == 0) {
    *(uint *)((int)this + 0x1c4) = *(int *)((int)this + 0x1c4) - 1U & 0xf;
    pfVar4 = *(float **)((int)this + 0x1c8);
  }
  else {
    param_3 = param_3 + 1;
    pfVar4 = (float *)(*(int *)((int)this + 0x1c8) + 0x880);
  }
  uVar1 = *(uint *)((int)this + 0x1c4);
  if ((uVar1 & 1) == 0) {
    uVar8 = uVar1 + 1;
    uVar2 = uVar1 + 0x111;
    pfVar9 = pfVar4 + 0x110;
    uVar3 = uVar1;
  }
  else {
    uVar8 = uVar1;
    pfVar9 = pfVar4;
    uVar3 = (uVar1 + 1 & 0xf) + 0x110;
    uVar2 = uVar1;
  }
  FUN_00be40c0(pfVar4 + uVar3,pfVar4 + uVar2,param_1);
  iVar7 = 8;
  pfVar4 = (float *)(&DAT_010d1b90 + -uVar8);
  do {
    pfVar10 = pfVar9;
    pfVar5 = pfVar4;
    iVar6 = ((uint)(((pfVar5[0xe] * pfVar10[0xe] +
                     ((pfVar5[0xc] * pfVar10[0xc] +
                      ((pfVar5[10] * pfVar10[10] +
                       ((pfVar5[8] * pfVar10[8] +
                        ((pfVar5[6] * pfVar10[6] +
                         ((pfVar5[4] * pfVar10[4] +
                          ((pfVar5[2] * pfVar10[2] + (*pfVar5 * *pfVar10 - pfVar5[1] * pfVar10[1]))
                          - pfVar5[3] * pfVar10[3])) - pfVar5[5] * pfVar10[5])) -
                        pfVar5[7] * pfVar10[7])) - pfVar5[9] * pfVar10[9])) -
                      pfVar5[0xb] * pfVar10[0xb])) - pfVar5[0xd] * pfVar10[0xd])) -
                    pfVar5[0xf] * pfVar10[0xf]) + 8429568.0) & 0xfffff) - 0xa000;
    if (iVar6 < -0x7fff) {
      iVar6 = -0x7fff;
    }
    else if (0x7ffe < iVar6) {
      iVar6 = 0x7ffe;
    }
    *param_3 = (short)iVar6;
    iVar6 = ((uint)(((pfVar5[0x2e] * pfVar10[0x1e] +
                     ((pfVar5[0x2c] * pfVar10[0x1c] +
                      ((pfVar5[0x2a] * pfVar10[0x1a] +
                       ((pfVar5[0x28] * pfVar10[0x18] +
                        ((pfVar5[0x26] * pfVar10[0x16] +
                         ((pfVar5[0x24] * pfVar10[0x14] +
                          ((pfVar5[0x22] * pfVar10[0x12] +
                           (pfVar5[0x20] * pfVar10[0x10] - pfVar5[0x21] * pfVar10[0x11])) -
                          pfVar5[0x23] * pfVar10[0x13])) - pfVar5[0x25] * pfVar10[0x15])) -
                        pfVar5[0x27] * pfVar10[0x17])) - pfVar5[0x29] * pfVar10[0x19])) -
                      pfVar5[0x2b] * pfVar10[0x1b])) - pfVar5[0x2d] * pfVar10[0x1d])) -
                    pfVar5[0x2f] * pfVar10[0x1f]) + 8429568.0) & 0xfffff) - 0xa000;
    if (iVar6 < -0x7fff) {
      iVar6 = -0x7fff;
    }
    else if (0x7ffe < iVar6) {
      iVar6 = 0x7ffe;
    }
    param_3[param_4] = (short)iVar6;
    param_3 = param_3 + param_4 + param_4;
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar5 + 0x40;
    pfVar9 = pfVar10 + 0x20;
  } while (iVar7 != 0);
  iVar7 = ((uint)(pfVar5[0x4e] * pfVar10[0x2e] +
                  pfVar5[0x4c] * pfVar10[0x2c] +
                  pfVar5[0x4a] * pfVar10[0x2a] +
                  pfVar5[0x48] * pfVar10[0x28] +
                  pfVar5[0x46] * pfVar10[0x26] +
                  pfVar5[0x44] * pfVar10[0x24] +
                  pfVar5[0x40] * pfVar10[0x20] + pfVar5[0x42] * pfVar10[0x22] + 8429568.0) & 0xfffff
          ) - 0xa000;
  if (iVar7 < -0x7fff) {
    iVar7 = -0x7fff;
  }
  else if (0x7ffe < iVar7) {
    iVar7 = 0x7ffe;
  }
  *param_3 = (short)iVar7;
  puVar11 = param_3 + param_4;
  iVar7 = 7;
  pfVar4 = pfVar5 + uVar8 * 2 + 0x10;
  pfVar9 = pfVar10 + 0x10;
  do {
    pfVar10 = pfVar9;
    pfVar5 = pfVar4;
    iVar6 = ((uint)((((((((((((((((-(pfVar5[0xf] * *pfVar10) - pfVar5[0xe] * pfVar10[1]) -
                                 pfVar5[0xd] * pfVar10[2]) - pfVar5[0xc] * pfVar10[3]) -
                               pfVar5[0xb] * pfVar10[4]) - pfVar5[10] * pfVar10[5]) -
                             pfVar5[9] * pfVar10[6]) - pfVar5[8] * pfVar10[7]) -
                           pfVar5[7] * pfVar10[8]) - pfVar5[6] * pfVar10[9]) -
                         pfVar5[5] * pfVar10[10]) - pfVar5[4] * pfVar10[0xb]) -
                       pfVar10[0xc] * pfVar5[3]) - pfVar10[0xd] * pfVar5[2]) -
                     pfVar10[0xe] * pfVar5[1]) - pfVar10[0xf] * *pfVar5) + 8429568.0) & 0xfffff) -
            0xa000;
    if (iVar6 < -0x7fff) {
      iVar6 = -0x7fff;
    }
    else if (0x7ffe < iVar6) {
      iVar6 = 0x7ffe;
    }
    *puVar11 = (short)iVar6;
    iVar6 = ((uint)((((((((((((((((-(pfVar5[-0x11] * pfVar10[-0x10]) - pfVar5[-0x12] * pfVar10[-0xf]
                                  ) - pfVar5[-0x13] * pfVar10[-0xe]) - pfVar5[-0x14] * pfVar10[-0xd]
                                ) - pfVar5[-0x15] * pfVar10[-0xc]) - pfVar5[-0x16] * pfVar10[-0xb])
                             - pfVar5[-0x17] * pfVar10[-10]) - pfVar5[-0x18] * pfVar10[-9]) -
                           pfVar5[-0x19] * pfVar10[-8]) - pfVar5[-0x1a] * pfVar10[-7]) -
                         pfVar5[-0x1b] * pfVar10[-6]) - pfVar5[-0x1c] * pfVar10[-5]) -
                       pfVar10[-4] * pfVar5[-0x1d]) - pfVar10[-3] * pfVar5[-0x1e]) -
                     pfVar10[-2] * pfVar5[-0x1f]) - pfVar10[-1] * pfVar5[-0x20]) + 8429568.0) &
            0xfffff) - 0xa000;
    if (iVar6 < -0x7fff) {
      iVar6 = -0x7fff;
    }
    else if (0x7ffe < iVar6) {
      iVar6 = 0x7ffe;
    }
    puVar11[param_4] = (short)iVar6;
    puVar11 = puVar11 + param_4 + param_4;
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar5 + -0x40;
    pfVar9 = pfVar10 + -0x20;
  } while (iVar7 != 0);
  DAT_010d1b4c = ((uint)((((((((((((((((-(pfVar5[-0x31] * pfVar10[-0x20]) -
                                       pfVar5[-0x32] * pfVar10[-0x1f]) -
                                      pfVar5[-0x33] * pfVar10[-0x1e]) -
                                     pfVar5[-0x34] * pfVar10[-0x1d]) -
                                    pfVar5[-0x35] * pfVar10[-0x1c]) - pfVar5[-0x36] * pfVar10[-0x1b]
                                   ) - pfVar5[-0x37] * pfVar10[-0x1a]) -
                                 pfVar5[-0x38] * pfVar10[-0x19]) - pfVar5[-0x39] * pfVar10[-0x18]) -
                               pfVar5[-0x3a] * pfVar10[-0x17]) - pfVar5[-0x3b] * pfVar10[-0x16]) -
                             pfVar5[-0x3c] * pfVar10[-0x15]) - pfVar10[-0x14] * pfVar5[-0x3d]) -
                           pfVar10[-0x13] * pfVar5[-0x3e]) - pfVar10[-0x12] * pfVar5[-0x3f]) -
                         pfVar10[-0x11] * pfVar5[-0x40]) + 8429568.0) & 0xfffff) - 0xa000;
  if (DAT_010d1b4c < -0x7fff) {
    *puVar11 = 0x8001;
    return 0;
  }
  iVar7 = DAT_010d1b4c;
  if (0x7ffe < DAT_010d1b4c) {
    iVar7 = 0x7ffe;
  }
  *puVar11 = (short)iVar7;
  return 0;
}


//// FUNCTION FUN_00be4b00 @ 00be4b00 ////

void __thiscall
FUN_00be4b00(void *this,int *param_1,uint *param_2,undefined4 *param_3,void *param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  iVar7 = param_3[4];
  iVar2 = param_3[2];
  iVar9 = iVar7 << ((byte)(param_3[1] + -1) & 0x1f);
  psVar3 = (short *)*param_3;
  iVar4 = iVar7;
  piVar10 = param_1;
  iVar5 = iVar2;
  if (param_3[1] + -1 == 0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      sVar1 = *psVar3;
      uVar6 = FUN_00be4300(param_4,(int)sVar1);
      *piVar10 = (int)(char)uVar6;
      psVar3 = psVar3 + (1 << ((byte)sVar1 & 0x1f)) * 2;
      piVar10 = piVar10 + 1;
    }
    piVar10 = (int *)((int)this + 0xc4);
    piVar8 = param_1;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar2 = *piVar8;
      piVar8 = piVar8 + 1;
      if (iVar2 != 0) {
        uVar6 = FUN_00be4410(param_4,2);
        *piVar10 = (int)(char)uVar6;
        piVar10 = piVar10 + 1;
      }
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      sVar1 = *psVar3;
      uVar6 = FUN_00be4300(param_4,(int)sVar1);
      *piVar10 = (int)(char)uVar6;
      uVar6 = FUN_00be4300(param_4,(int)sVar1);
      piVar10[1] = (int)(char)uVar6;
      psVar3 = psVar3 + (1 << ((byte)sVar1 & 0x1f)) * 2;
      piVar10 = piVar10 + 2;
    }
    for (iVar7 = iVar7 - iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
      sVar1 = *psVar3;
      uVar6 = FUN_00be4300(param_4,(int)sVar1);
      *piVar10 = (int)(char)uVar6;
      piVar10[1] = (int)(char)uVar6;
      piVar10 = piVar10 + 2;
      psVar3 = psVar3 + (1 << ((byte)sVar1 & 0x1f)) * 2;
    }
    piVar10 = (int *)((int)this + 0xc4);
    piVar8 = param_1;
    for (iVar7 = iVar9; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar2 = *piVar8;
      piVar8 = piVar8 + 1;
      if (iVar2 != 0) {
        uVar6 = FUN_00be4410(param_4,2);
        *piVar10 = (int)(char)uVar6;
        piVar10 = piVar10 + 1;
      }
    }
  }
  piVar10 = (int *)((int)this + 0xc4);
  do {
    if (iVar9 == 0) {
      return;
    }
    iVar7 = *param_1;
    param_1 = param_1 + 1;
    if (iVar7 != 0) {
      iVar7 = *piVar10;
      piVar10 = piVar10 + 1;
      if (iVar7 == 0) {
        uVar6 = FUN_00be4410(param_4,6);
        *param_2 = uVar6;
        uVar6 = FUN_00be4410(param_4,6);
LAB_00be4d1b:
        param_2[1] = uVar6;
        uVar6 = FUN_00be4410(param_4,6);
      }
      else {
        if (iVar7 == 1) {
          uVar6 = FUN_00be4410(param_4,6);
          *param_2 = uVar6;
          goto LAB_00be4d1b;
        }
        if (iVar7 == 2) {
          uVar6 = FUN_00be4410(param_4,6);
          *param_2 = uVar6;
          param_2[1] = uVar6;
        }
        else {
          uVar6 = FUN_00be4410(param_4,6);
          *param_2 = uVar6;
          uVar6 = FUN_00be4410(param_4,6);
          param_2[1] = uVar6;
        }
      }
      param_2[2] = uVar6;
      param_2 = param_2 + 3;
    }
    iVar9 = iVar9 + -1;
  } while( true );
}


//// FUNCTION FUN_00be4d40 @ 00be4d40 ////

void FUN_00be4d40(int *param_1,int param_2,int param_3,int *param_4,int param_5,void *param_6)

{
  int *piVar1;
  float fVar2;
  undefined2 uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined2 *local_28;
  float *local_20;
  int local_14;
  int local_10;
  
  iVar7 = param_4[2];
  iVar4 = param_4[1];
  iVar14 = param_4[4];
  local_28 = (undefined2 *)*param_4;
  if (0 < iVar7) {
    local_20 = (float *)(param_2 + 0x80);
    local_10 = iVar7;
    do {
      uVar3 = *local_28;
      pfVar12 = local_20;
      local_14 = iVar4;
      if (0 < iVar4) {
        do {
          iVar11 = *param_1;
          param_1 = param_1 + 1;
          if (iVar11 == 0) {
            pfVar12[0x20] = 0.0;
            *pfVar12 = 0.0;
            pfVar12[-0x20] = 0.0;
          }
          else {
            iVar10 = (int)(short)local_28[iVar11 * 2 + 1];
            uVar9 = (uint)(short)local_28[iVar11 * 2];
            if (iVar10 < 0) {
              fVar2 = (float)(&DAT_010d0030)[uVar9 * 0x40 + *(int *)(param_3 + param_5 * 4)];
              uVar6 = FUN_00be4300(param_6,uVar9);
              pfVar12[-0x20] = (float)(int)(uVar6 + iVar10) * fVar2;
              uVar6 = FUN_00be4300(param_6,uVar9);
              *pfVar12 = (float)(int)(uVar6 + iVar10) * fVar2;
              uVar9 = FUN_00be4300(param_6,uVar9);
              pfVar12[0x20] = (float)(int)(uVar9 + iVar10) * fVar2;
            }
            else {
              iVar11 = *(int *)(param_3 + param_5 * 4);
              uVar9 = FUN_00be4300(param_6,uVar9);
              piVar1 = (int *)(*(int *)(&DAT_00ea79d8 + iVar10 * 4) + uVar9 * 0xc);
              pfVar12[-0x20] = (float)(&DAT_010d0030)[*piVar1 * 0x40 + iVar11];
              *pfVar12 = (float)(&DAT_010d0030)[piVar1[1] * 0x40 + iVar11];
              pfVar12[0x20] = (float)(&DAT_010d0030)[piVar1[2] * 0x40 + iVar11];
            }
            param_3 = param_3 + 0xc;
          }
          local_14 = local_14 + -1;
          pfVar12 = pfVar12 + 0x80;
        } while (local_14 != 0);
      }
      local_20 = local_20 + 1;
      local_28 = local_28 + (1 << ((byte)uVar3 & 0x1f)) * 2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (iVar7 < iVar14) {
    local_10 = iVar14 - iVar7;
    pfVar12 = (float *)(param_2 + 0x280 + iVar7 * 4);
    do {
      uVar3 = *local_28;
      iVar7 = param_1[1];
      param_1 = param_1 + 2;
      if (iVar7 == 0) {
        pfVar12[0x20] = 0.0;
        *pfVar12 = 0.0;
        pfVar12[-0x20] = 0.0;
        pfVar12[-0x60] = 0.0;
        pfVar12[-0x80] = 0.0;
        pfVar12[-0xa0] = 0.0;
      }
      else {
        iVar11 = (int)(short)local_28[iVar7 * 2 + 1];
        uVar9 = (uint)(short)local_28[iVar7 * 2];
        if (iVar11 < 0) {
          fVar2 = (float)(&DAT_010d0030)[*(int *)(param_3 + 0xc + param_5 * 4) + uVar9 * 0x40];
          uVar6 = FUN_00be4300(param_6,uVar9);
          pfVar12[-0xa0] = (float)(int)(uVar6 + iVar11);
          pfVar12[-0x20] = (float)(int)(uVar6 + iVar11) * fVar2;
          uVar6 = FUN_00be4300(param_6,uVar9);
          pfVar12[-0x80] = (float)(int)(uVar6 + iVar11);
          *pfVar12 = (float)(int)(uVar6 + iVar11) * fVar2;
          uVar6 = FUN_00be4300(param_6,uVar9);
          fVar5 = (float)(int)(uVar6 + iVar11);
          pfVar12[-0x60] = fVar5;
          pfVar12[0x20] = fVar2 * fVar5;
          fVar2 = (float)(&DAT_010d0030)[*(int *)(param_3 + param_5 * 4) + uVar9 * 0x40];
          pfVar12[-0xa0] = fVar2 * pfVar12[-0xa0];
          pfVar12[-0x80] = fVar2 * pfVar12[-0x80];
          pfVar12[-0x60] = fVar5 * fVar2;
        }
        else {
          iVar7 = *(int *)(param_3 + param_5 * 4);
          iVar10 = *(int *)(param_3 + 0xc + param_5 * 4);
          uVar9 = FUN_00be4300(param_6,uVar9);
          piVar1 = (int *)(*(int *)(&DAT_00ea79b0 + iVar11 * 4) + uVar9 * 0xc);
          pfVar12[-0xa0] = (float)(&DAT_010d0030)[*piVar1 * 0x40 + iVar7];
          pfVar12[-0x20] = (float)(&DAT_010d0030)[*piVar1 * 0x40 + iVar10];
          pfVar12[-0x80] = (float)(&DAT_010d0030)[piVar1[1] * 0x40 + iVar7];
          *pfVar12 = (float)(&DAT_010d0030)[piVar1[1] * 0x40 + iVar10];
          pfVar12[-0x60] = (float)(&DAT_010d0030)[piVar1[2] * 0x40 + iVar7];
          pfVar12[0x20] = (float)(&DAT_010d0030)[piVar1[2] * 0x40 + iVar10];
        }
        param_3 = param_3 + 0x18;
      }
      pfVar12 = pfVar12 + 1;
      local_28 = local_28 + (1 << ((byte)uVar3 & 0x1f)) * 2;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar7 = 0x20 >> ((byte)param_4[7] & 0x1f);
  if (iVar7 < iVar14) {
    iVar14 = iVar7;
  }
  if (iVar14 < 0x20) {
    puVar13 = (undefined4 *)(param_2 + 0x80 + iVar14 * 4);
    iVar14 = 0x20 - iVar14;
    do {
      puVar8 = puVar13;
      iVar7 = iVar4;
      if (0 < iVar4) {
        do {
          puVar8[0x20] = 0;
          *puVar8 = 0;
          puVar8[-0x20] = 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + 0x80;
        } while (iVar7 != 0);
      }
      puVar13 = puVar13 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}


//// FUNCTION MPEG2LayerII_CodecInstance_Constructor @ 00be5170 ////

undefined4 * __thiscall MPEG2LayerII_CodecInstance_Constructor(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00d88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00da10b8;
  Ctor_vt00d9f52c_00bd9f70((undefined4 *)((int)this + 0x2c));
  *(undefined4 *)((int)this + 0x44) = param_1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Dtor_00be51e0 @ 00be51e0 ////

void __fastcall Dtor_00be51e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d00d9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da10b8;
  local_4 = 0;
  FUN_00be4550((int)param_1);
  if ((void *)param_1[0x2a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2a]);
  }
  if ((void *)param_1[0x28] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x28]);
  }
  Dtor_00bd9e50(param_1 + 0xb);
  *param_1 = &PTR_LAB_00da0f54;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00be5270 @ 00be5270 ////

void __thiscall FUN_00be5270(void *this,float *param_1,undefined2 *param_2)

{
  FUN_00be45f0(this,param_1,0,param_2,1);
  return;
}


//// FUNCTION FUN_00be5290 @ 00be5290 ////

undefined4 __thiscall FUN_00be5290(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_EBP;
  byte bVar7;
  void *local_8;
  undefined4 *puStack_4;
  
  iVar5 = *(int *)((int)this + 0xb8);
  cVar3 = (**(code **)(*param_3 + 4))(&local_8,4);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar1 = CONCAT11((char)unaff_EBP,(char)(unaff_EBP >> 8));
  bVar7 = (byte)(unaff_EBP >> 0x18);
  uVar2 = CONCAT21(uVar1,(char)(unaff_EBP >> 0x10));
  iVar4 = CONCAT31(uVar2,bVar7);
  if ((*(int *)((int)this + 0xbc) == iVar4) && (*(int *)((int)this + 0xbc) != 0)) {
    puStack_4[8] = 0;
  }
  else {
    puStack_4[8] = 1;
    if ((uVar1 & 0xffe0) != 0xffe0) {
      return 0;
    }
    if (*(int *)((int)this + 0xc0) == 0) {
      *(int *)((int)this + 0xc0) = iVar4;
    }
    if ((unaff_EBP & 0x1000) == 0) {
      puStack_4[5] = 1;
      puStack_4[6] = 1;
    }
    else {
      puStack_4[5] = ~(uint)(uVar1 >> 3) & 1;
      puStack_4[6] = 0;
    }
    if (*(int *)((int)this + 0xbc) == 0) {
      puStack_4[0xc] = (uVar2 & 0xf0) >> 4;
      uVar6 = (uVar2 & 0xc) >> 2;
      puStack_4[10] = 4 - ((uVar2 & 0x600) >> 9);
      if (uVar6 == 3) {
        return 0;
      }
      if (puStack_4[6] == 0) {
        puStack_4[0xd] = uVar6 + puStack_4[5] * 3;
      }
      else {
        puStack_4[0xd] = 6;
      }
      puStack_4[0xb] = ~(uint)uVar1 & 1;
    }
    puStack_4[0xf] = uVar2 & 1;
    puStack_4[0x11] = (bVar7 & 0x30) >> 4;
    puStack_4[0x12] = (bVar7 & 8) >> 3;
    puStack_4[0x13] = (bVar7 & 4) >> 2;
    puStack_4[0xe] = (uVar2 & 2) >> 1;
    puStack_4[0x14] = bVar7 & 3;
    puStack_4[0x10] = (uint)(bVar7 >> 6);
    puStack_4[1] = (bVar7 >> 6 != 3) + 1;
    *(int *)((int)this + 0xbc) = iVar4;
    if (puStack_4[0xc] == 0) {
      return 0;
    }
    if (puStack_4[10] != 2) {
      return 0;
    }
    FUN_00be3380(puStack_4);
    if (puStack_4[0x10] == 1) {
      iVar5 = puStack_4[0x11] * 4 + 4;
    }
    else {
      iVar5 = puStack_4[4];
    }
    puStack_4[2] = iVar5;
    iVar5 = (*(int *)(&DAT_00ea6910 + (puStack_4[5] * 0x30 + puStack_4[0xc]) * 4) * 0x23280) /
            *(int *)(&UNK_00da0f38 + puStack_4[0xd] * 4) + -4 + puStack_4[0xe];
  }
  *(int *)((int)this + 0xb8) = iVar5;
  if (*(uint *)((int)this + 0xa4) < iVar5 + 4U) {
    FUN_00bbc1d0((void *)((int)this + 0xa0),iVar5 + 4U);
  }
  iVar5 = FUN_00bbc590((void *)((int)this + 0xa0),0);
  cVar3 = (**(code **)(*param_3 + 4))(iVar5,*(undefined4 *)((int)this + 0xb8));
  if (cVar3 == '\0') {
    return 0;
  }
  iVar5 = FUN_00bbc590((void *)((int)this + 0xa0),0);
  FUN_00be4290(local_8,iVar5,*(int *)((int)this + 0xb8));
  if (puStack_4[0xb] != 0) {
    FUN_00be4240(local_8,0x10);
  }
  return 1;
}


//// FUNCTION FUN_00be5500 @ 00be5500 ////

int __thiscall FUN_00be5500(void *this,int *param_1,void *param_2,uint *param_3)

{
  void *this_00;
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int local_810;
  int local_80c;
  int local_808;
  int local_804;
  int local_800 [64];
  uint local_700 [192];
  float local_400 [128];
  float local_200 [128];
  
  local_804 = param_1[3];
  uVar5 = 0;
  local_810 = 0;
  if ((param_1[1] == 1) || (local_804 == 3)) {
    local_804 = 0;
  }
  uVar1 = param_1[9] * 0x24;
  *param_3 = uVar1;
  if (*(uint *)((int)this + 0xac) < uVar1) {
    FUN_00bbc1d0((void *)((int)this + 0xa8),uVar1);
  }
  FUN_00be4b00(this,local_800,local_700,param_1,param_2);
  local_80c = 0;
  this_00 = (void *)((int)this + 0xa8);
  do {
    FUN_00be4d40(local_800,(int)local_400,(int)local_700,param_1,local_80c >> 2,param_2);
    local_808 = 0;
    pfVar4 = local_200;
    do {
      if (local_804 < 0) {
        iVar3 = 2;
        puVar2 = (undefined2 *)FUN_00bbc590(this_00,uVar5);
        iVar3 = FUN_00be45f0(this,pfVar4 + -0x80,0,puVar2,iVar3);
        local_810 = local_810 + iVar3;
        iVar3 = 2;
        puVar2 = (undefined2 *)FUN_00bbc590(this_00,uVar5);
        iVar3 = FUN_00be45f0(this,pfVar4,1,puVar2,iVar3);
      }
      else {
        puVar2 = (undefined2 *)FUN_00bbc590(this_00,uVar5);
        iVar3 = FUN_00be5270(this,local_400 + (local_808 + local_804 * 4) * 0x20,puVar2);
      }
      local_810 = local_810 + iVar3;
      uVar5 = uVar5 + param_1[9];
      local_808 = local_808 + 1;
      pfVar4 = pfVar4 + 0x20;
    } while (local_808 < 3);
    local_80c = local_80c + 1;
  } while (local_80c < 0xc);
  return local_810;
}


