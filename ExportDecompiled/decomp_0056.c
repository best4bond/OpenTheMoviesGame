//// FUNCTION FUN_00b1bb4d @ 00b1bb4d ////

void __fastcall FUN_00b1bb4d(int *param_1)

{
  if (*param_1 != -1) {
    FUN_00b1bb0a(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00b1bb58 @ 00b1bb58 ////

void __fastcall FUN_00b1bb58(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00b1bb65 @ 00b1bb65 ////

void __fastcall FUN_00b1bb65(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
  }
  return;
}


//// FUNCTION FUN_00b1bb73 @ 00b1bb73 ////

undefined4 __fastcall FUN_00b1bb73(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}


//// FUNCTION FUN_00b1bb94 @ 00b1bb94 ////

undefined4 __thiscall
FUN_00b1bb94(void *this,HMODULE param_1,undefined4 param_2,int param_3,int param_4)

{
  HRSRC hResInfo;
  DWORD DVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  code *pcVar3;
  
  if (*(int *)this != 0) {
    FUN_00b1bb73(this);
  }
  pcVar3 = FindResourceW_exref;
  if (param_4 == 0) {
    pcVar3 = FindResourceA_exref;
  }
  if (((param_3 != 0) && (hResInfo = (HRSRC)(*pcVar3)(param_1,param_2,2), hResInfo != (HRSRC)0x0))
     || (hResInfo = (HRSRC)(*pcVar3)(param_1,param_2,10), hResInfo != (HRSRC)0x0)) {
    DVar1 = SizeofResource((HMODULE)param_1,hResInfo);
    *(DWORD *)((int)this + 8) = DVar1;
    if (DVar1 != 0) {
      hResData = LoadResource((HMODULE)param_1,hResInfo);
      *(HGLOBAL *)this = hResData;
      if (hResData != (HGLOBAL)0x0) {
        pvVar2 = LockResource(hResData);
        *(LPVOID *)((int)this + 4) = pvVar2;
        if (pvVar2 != (LPVOID)0x0) {
          return 0;
        }
      }
    }
  }
  GetLastError();
  return 0x88760b59;
}


//// FUNCTION FUN_00b1bc24 @ 00b1bc24 ////

void __thiscall FUN_00b1bc24(void *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_1[1] + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1[2] + *(float *)((int)this + 8);
  return;
}


//// FUNCTION FUN_00b1bc4a @ 00b1bc4a ////

void __thiscall FUN_00b1bc4a(void *this,float *param_1)

{
  *(float *)this = *(float *)this - *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - param_1[1];
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - param_1[2];
  return;
}


//// FUNCTION FUN_00b1bc70 @ 00b1bc70 ////

void __thiscall FUN_00b1bc70(void *this,float param_1)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  return;
}


//// FUNCTION FUN_00b1bc94 @ 00b1bc94 ////

void __thiscall FUN_00b1bc94(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[2];
  fVar2 = *(float *)((int)this + 8);
  fVar3 = param_2[1];
  fVar4 = *(float *)((int)this + 4);
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar1 + fVar2;
  return;
}


//// FUNCTION FUN_00b1bcbb @ 00b1bcbb ////

void __thiscall FUN_00b1bcbb(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *(float *)((int)this + 4);
  *param_1 = param_2 * *(float *)this;
  param_1[1] = param_2 * fVar2;
  param_1[2] = param_2 * fVar1;
  return;
}


//// FUNCTION FUN_00b1bce0 @ 00b1bce0 ////

void FUN_00b1bce0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  *param_1 = param_2 * *param_3;
  param_1[1] = param_2 * fVar2;
  param_1[2] = param_2 * fVar1;
  return;
}


//// FUNCTION FUN_00b1bd08 @ 00b1bd08 ////

void FUN_00b1bd08(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5,uint param_6,float *param_7,int *param_8,char *param_9,float param_10,
                 float *param_11)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  float local_33c [195];
  uint local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float *local_c;
  float local_8;
  
  local_30 = (int)param_10 * 0xc;
  local_2c = (uint)((int)param_10 * 0xc != param_6);
  if (param_10 == 2.8026e-45) {
    if ((*param_9 == '\0') && (param_9[1] == '\x03')) {
      local_1c = *param_7;
      local_8 = param_7[1];
      local_c = (float *)param_8[1];
      pfVar8 = (float *)*param_8;
    }
    else {
      if ((param_9[1] != '\0') || (*param_9 != '\x03')) goto LAB_00b1bef7;
      local_1c = param_7[1];
      local_8 = *param_7;
      pfVar8 = (float *)param_8[1];
      local_c = (float *)*param_8;
    }
    if (local_1c != 0.0) {
      if (param_5 == 0) {
        return;
      }
      param_7 = (float *)param_5;
      do {
        if (local_2c != 0) {
          puVar2 = (undefined4 *)((int)param_4 + param_6);
          puVar10 = param_3;
          for (uVar6 = param_6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *param_4 = *puVar10;
            puVar10 = puVar10 + 1;
            param_4 = param_4 + 1;
          }
          param_3 = (undefined4 *)((int)param_3 + param_6);
          puVar11 = param_4;
          for (uVar6 = param_6 & 3; param_4 = puVar2, uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
        *pfVar8 = 0.0;
        pfVar8[1] = 0.0;
        pfVar8[2] = 0.0;
        *local_c = 0.0;
        local_c[1] = 0.0;
        local_c[2] = 0.0;
        fVar9 = *param_11;
        while (0.0 <= fVar9) {
          lVar12 = __ftol();
          uVar6 = (uint)lVar12 & 0xfffffffe;
          fVar9 = (float)(int)uVar6;
          if ((int)uVar6 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
          }
          fVar9 = *param_11 - fVar9;
          thunk_FUN_00b00923();
          thunk_FUN_00b00acd();
          local_18 = local_18 * fVar9;
          param_11 = param_11 + 1;
          local_14 = local_14 * fVar9;
          local_10 = local_10 * fVar9;
          local_28 = local_28 * fVar9;
          local_24 = local_24 * fVar9;
          local_20 = local_20 * fVar9;
          *pfVar8 = local_18 + *pfVar8;
          pfVar8[1] = local_14 + pfVar8[1];
          pfVar8[2] = local_10 + pfVar8[2];
          *local_c = local_28 + *local_c;
          local_c[1] = local_24 + local_c[1];
          local_c[2] = local_20 + local_c[2];
          fVar9 = *param_11;
        }
        local_1c = (float)((int)local_1c + param_6);
        local_8 = (float)((int)local_8 + param_6);
        local_c = (float *)((int)local_c + param_6);
        param_11 = param_11 + 1;
        pfVar8 = (float *)((int)pfVar8 + param_6);
        param_7 = (float *)((int)param_7 + -1);
      } while (param_7 != (float *)0x0);
      return;
    }
  }
LAB_00b1bef7:
  local_c = (float *)0x0;
  if (param_5 != 0) {
    do {
      uVar6 = local_30;
      pfVar8 = local_33c;
      for (uVar7 = local_30 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pfVar8 = 0.0;
        pfVar8 = pfVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)pfVar8 = 0;
        pfVar8 = (float *)((int)pfVar8 + 1);
      }
      for (; 0.0 <= *param_11; param_11 = param_11 + 1) {
        lVar12 = __ftol();
        uVar6 = (uint)lVar12 & 0xfffffffe;
        local_8 = (float)(int)uVar6;
        if ((int)uVar6 < 0) {
          local_8 = local_8 + 4.2949673e+09;
        }
        local_8 = *param_11 - local_8;
        fVar9 = 0.0;
        if (param_10 != 0.0) {
          pfVar8 = local_33c + 2;
          do {
            bVar3 = param_9[(int)fVar9];
            if (bVar3 == 0) {
              thunk_FUN_00b00923();
            }
            else {
              if (bVar3 != 3) {
                if (bVar3 < 6) {
                  return;
                }
                if (7 < bVar3) {
                  return;
                }
              }
              thunk_FUN_00b00acd();
            }
            fVar9 = (float)((int)fVar9 + 1);
            local_18 = local_18 * local_8;
            local_14 = local_14 * local_8;
            local_10 = local_10 * local_8;
            pfVar8[-2] = local_18 + pfVar8[-2];
            pfVar8[-1] = local_14 + pfVar8[-1];
            *pfVar8 = local_10 + *pfVar8;
            pfVar8 = pfVar8 + 3;
          } while ((uint)fVar9 < (uint)param_10);
        }
      }
      if (local_2c != 0) {
        puVar2 = (undefined4 *)((int)param_4 + param_6);
        puVar10 = param_3;
        for (uVar6 = param_6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_4 = *puVar10;
          puVar10 = puVar10 + 1;
          param_4 = param_4 + 1;
        }
        param_3 = (undefined4 *)((int)param_3 + param_6);
        puVar11 = param_4;
        for (uVar6 = param_6 & 3; param_4 = puVar2, uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      if (param_10 != 0.0) {
        pfVar8 = local_33c;
        local_8 = param_10;
        piVar5 = param_8;
        do {
          pfVar4 = (float *)*piVar5;
          *pfVar4 = *pfVar8;
          pfVar4[1] = pfVar8[1];
          pfVar4[2] = pfVar8[2];
          *piVar5 = *piVar5 + param_6;
          piVar1 = (int *)(((int)param_7 - (int)param_8) + (int)piVar5);
          *piVar1 = *piVar1 + param_6;
          pfVar8 = pfVar8 + 3;
          piVar5 = piVar5 + 1;
          local_8 = (float)((int)local_8 + -1);
        } while (local_8 != 0.0);
      }
      param_11 = param_11 + 1;
      local_c = (float *)((int)local_c + 1);
    } while (local_c < param_5);
  }
  return;
}


//// FUNCTION FUN_00b1c082 @ 00b1c082 ////

void FUN_00b1c082(float *param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_5 = *param_1;
  param_5[1] = param_1[1];
  param_5[2] = param_1[2];
  *param_5 = *param_5 - *param_2;
  param_5[1] = param_5[1] - param_2[1];
  fVar3 = param_5[2] - param_2[2];
  param_5[2] = fVar3;
  fVar4 = param_5[1] * param_3[1] + *param_3 * *param_5 + fVar3 * param_3[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  param_5[2] = fVar3 - fVar4 * param_3[2];
  fVar1 = (*param_5 - fVar4 * fVar1) * param_4;
  *param_5 = fVar1;
  fVar2 = (param_5[1] - fVar4 * fVar2) * param_4;
  param_5[1] = fVar2;
  param_5[2] = param_4 * param_5[2];
  *param_5 = fVar1 + *param_2;
  param_5[1] = fVar2 + param_2[1];
  param_5[2] = param_2[2] + param_5[2];
  return;
}


//// FUNCTION FUN_00b1c121 @ 00b1c121 ////

void FUN_00b1c121(float *param_1,int param_2,uint param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float local_1cc [68];
  float local_bc [10];
  float local_94;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
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
  
  local_7c = *param_5;
  local_78 = param_5[1];
  local_74 = param_5[2];
  local_34 = *param_6;
  local_30 = param_6[1];
  local_2c = param_6[2];
  local_10 = *param_7;
  local_c = param_7[1];
  local_8 = param_7[2];
  FUN_00b1c082(&local_34,&local_7c,param_1,0.33333334,&local_70);
  FUN_00b1c082(&local_10,&local_7c,param_1,0.33333334,&local_64);
  FUN_00b1c082(&local_7c,&local_34,param_1 + 3,0.33333334,&local_58);
  FUN_00b1c082(&local_7c,&local_10,param_1 + 6,0.33333334,&local_40);
  FUN_00b1c082(&local_10,&local_34,param_1 + 3,0.33333334,&local_28);
  FUN_00b1c082(&local_34,&local_10,param_1 + 6,0.33333334,&local_1c);
  local_94 = local_10 + local_34 + local_7c;
  local_8c = local_8 + local_2c + local_74;
  param_1 = (float *)0x0;
  local_84 = (local_c + local_30 + local_78) * 0.166666;
  local_80 = local_8c * 0.166666;
  local_4c = (local_1c + local_28 + local_40 + local_58 + local_64 + local_70) * 0.25 -
             local_94 * 0.166666;
  local_48 = (local_18 + local_24 + local_3c + local_54 + local_60 + fStack_6c) * 0.25 - local_84;
  local_44 = (local_14 + local_20 + local_38 + local_50 + local_5c + fStack_68) * 0.25 - local_80;
  if (param_3 != 0) {
    do {
      fVar1 = *(float *)((int)param_1 * 8 + param_2);
      uVar6 = 0;
      fVar2 = *(float *)((int)param_1 * 8 + 4 + param_2);
      fVar4 = (1.0 - fVar1) - fVar2;
      local_bc[0] = fVar2 * fVar2 * fVar2;
      local_bc[1] = fVar4 * fVar2 * fVar2 * 3.0;
      local_bc[2] = fVar2 * fVar2 * fVar1 * 3.0;
      fVar3 = fVar4 * fVar4;
      local_bc[3] = fVar3 * fVar2 * 3.0;
      local_bc[4] = fVar4 * fVar2 * fVar1 * 6.0;
      local_bc[5] = fVar2 * fVar1 * fVar1 * 3.0;
      local_bc[6] = fVar3 * fVar4;
      local_bc[7] = fVar3 * fVar1 * 3.0;
      local_bc[8] = fVar4 * fVar1 * fVar1 * 3.0;
      local_bc[9] = fVar1 * fVar1 * fVar1;
      local_1cc[0] = 0.0;
      local_1cc[1] = 0.0;
      local_1cc[2] = 0.0;
      pfVar5 = &local_78;
      do {
        pfVar8 = local_bc + uVar6;
        uVar6 = uVar6 + 1;
        local_1cc[0] = pfVar5[-1] * *pfVar8 + local_1cc[0];
        local_1cc[1] = *pfVar8 * *pfVar5 + local_1cc[1];
        local_1cc[2] = pfVar5[1] * *pfVar8 + local_1cc[2];
        pfVar5 = pfVar5 + 3;
      } while (uVar6 < 10);
      if (3 < param_8) {
        pfVar5 = param_6 + 3;
        iVar7 = param_8 - 3;
        do {
          *(float *)(((int)local_1cc - (int)param_6) + (int)pfVar5) =
               fVar4 * *pfVar5 +
               fVar2 * *(float *)(((int)param_5 - (int)param_6) + (int)pfVar5) +
               fVar1 * *(float *)(((int)param_7 - (int)param_6) + (int)pfVar5);
          pfVar5 = pfVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      pfVar5 = local_1cc;
      pfVar8 = param_4;
      for (uVar6 = param_8 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pfVar8 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar8 = pfVar8 + 1;
      }
      param_1 = (float *)((int)param_1 + 1);
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)pfVar8 = *(undefined1 *)pfVar5;
        pfVar5 = (float *)((int)pfVar5 + 1);
        pfVar8 = (float *)((int)pfVar8 + 1);
      }
      param_4 = param_4 + param_8;
    } while (param_1 < param_3);
  }
  return;
}


//// FUNCTION FUN_00b1c47a @ 00b1c47a ////

undefined4 FUN_00b1c47a(LPBYTE param_1,LPCSTR param_2,LPBYTE param_3)

{
  LONG LVar1;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)&fdwControls_80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_8,param_2,(LPDWORD)0x0,(LPDWORD)&param_3,param_3,
                             (LPDWORD)&stack0x00000010);
    RegCloseKey(local_8);
    if ((LVar1 == 0) && (param_3 == param_1)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00b1c4d9 @ 00b1c4d9 ////

/* WARNING: Removing unreachable block (ram,0x00b1c4ea) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 __fastcall FUN_00b1c4d9(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return CONCAT44(param_2,(uint)((*(uint *)(iVar1 + 8) & 0x800000) != 0));
}


//// FUNCTION FUN_00b1c501 @ 00b1c501 ////

int FUN_00b1c501(void)

{
  LONG LVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar2;
  _union_597 local_38 [8];
  ushort local_18;
  int local_14;
  DWORD local_10 [2];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA((HKEY)&fdwControls_80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    local_10[1] = 4;
    LVar1 = RegQueryValueExA(local_8,"DisableMMX",(LPDWORD)0x0,local_10,(LPBYTE)&local_14,
                             local_10 + 1);
    if (((LVar1 == 0) && (local_10[0] == 4)) && (local_14 != 0)) {
      RegCloseKey(local_8);
      DAT_00e9bba8 = 0;
      return 0;
    }
    RegCloseKey(local_8);
  }
  if (DAT_00e9bba8 < 0) {
    DAT_00e9bba8 = 0;
    GetSystemInfo((LPSYSTEM_INFO)&local_38[0].field1);
    if (((local_38[0].field1.wProcessorArchitecture == 0) && (4 < local_18)) &&
       (uVar2 = FUN_00b1c4d9(extraout_ECX,extraout_EDX), (int)uVar2 != 0)) {
      DAT_00e9bba8 = 1;
    }
  }
  return DAT_00e9bba8;
}


//// FUNCTION FUN_00b1c5b3 @ 00b1c5b3 ////

/* WARNING: Removing unreachable block (ram,0x00b1c5dd) */

void FUN_00b1c5b3(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00ad6930();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  builtin_strncpy((char *)(unaff_EBP + -0x24),"Genu",4);
  builtin_strncpy((char *)(unaff_EBP + -0x20),"ineI",4);
  builtin_strncpy((char *)(unaff_EBP + -0x1c),"ntel",4);
  *(char *)(unaff_EBP + -0x18) = '\0';
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar1 = (undefined4 *)cpuid_basic_info(0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar2 = puVar1[3];
  *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
  *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  FUN_00b1c5f9();
  return;
}


//// FUNCTION FUN_00b1c5f9 @ 00b1c5f9 ////

/* WARNING: Removing unreachable block (ram,0x00b1c614) */

undefined4 FUN_00b1c5f9(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  else {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
    uVar2 = puVar1[2];
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
    if ((*(uint *)(unaff_EBP + -0x28) & 0x2000000) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 4;
    }
    if ((*(uint *)(unaff_EBP + -0x28) & 0x4000000) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 8;
    }
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


//// FUNCTION FUN_00b1c654 @ 00b1c654 ////

uint FUN_00b1c654(DWORD param_1)

{
  uint uVar1;
  
  if (param_1 != 10) {
                    /* WARNING: Could not recover jumptable at 0x00b1c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = IsProcessorFeaturePresent(param_1);
    return uVar1;
  }
  uVar1 = FUN_00b1c5b3();
  return uVar1 & 8;
}


//// FUNCTION FUN_00b1c672 @ 00b1c672 ////

int FUN_00b1c672(int param_1)

{
  WINBOOL WVar1;
  uint uVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  FUN_00b05e99();
  if (param_1 == 0) {
    DAT_00e9bbac = 0xffff;
    ppuVar4 = &PTR_FUN_00e9b140;
    ppuVar5 = &PTR_FUN_00e9b018;
    for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
  }
  else if (DAT_00e9bbac == 0xffff) {
    DAT_00e9bbac = 0;
    ppuVar4 = &PTR_FUN_00e9b140;
    ppuVar5 = &PTR_FUN_00e9b018;
    for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppuVar5 = *ppuVar4;
      ppuVar4 = ppuVar4 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
    FUN_00b244fb(&PTR_FUN_00e9b018);
    iVar3 = FUN_00b1c47a((LPBYTE)0x4,"DisablePSGP",(LPBYTE)&param_1);
    if (iVar3 == 0) {
      param_1 = 0;
    }
    iVar3 = FUN_00b1c47a((LPBYTE)0x4,"DisableD3DXPSGP",(LPBYTE)&local_8);
    if (iVar3 != 0) {
      param_1 = local_8;
    }
    if (param_1 != 1) {
      if ((param_1 == 2) || (WVar1 = IsProcessorFeaturePresent(7), WVar1 == 0)) {
        uVar2 = FUN_00b1c5b3();
        if ((uVar2 & 8) == 0) {
          WVar1 = IsProcessorFeaturePresent(6);
          if (WVar1 != 0) {
            FUN_00b27dae(&PTR_FUN_00e9b018);
            DAT_00e9bbac = 3;
          }
        }
        else {
          FUN_00b27f58(&PTR_FUN_00e9b018);
          DAT_00e9bbac = 2;
        }
      }
      else {
        FUN_00b281a7(&PTR_FUN_00e9b018);
        DAT_00e9bbac = 1;
      }
    }
  }
  return DAT_00e9bbac;
}


//// FUNCTION FUN_00b1c778 @ 00b1c778 ////

void __fastcall FUN_00b1c778(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d8c004;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}


//// FUNCTION FUN_00b1c788 @ 00b1c788 ////

undefined4 __thiscall FUN_00b1c788(void *this,uint param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  
  pvVar1 = operator_new(param_1);
  *(void **)((int)this + 0xc) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *(uint *)((int)this + 8) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION FUN_00b1c7b4 @ 00b1c7b4 ////

undefined4 FUN_00b1c7b4(int param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00b1c7c6 @ 00b1c7c6 ////

undefined1 FUN_00b1c7c6(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}


//// FUNCTION FUN_00b1c7e3 @ 00b1c7e3 ////

int FUN_00b1c7e3(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + -1;
  param_1[1] = iVar1;
  if (iVar2 == 1) {
    (**(code **)(*param_1 + 0x14))(1);
  }
  return iVar1;
}


//// FUNCTION FUN_00b1c808 @ 00b1c808 ////

undefined1 FUN_00b1c808(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = iVar3 + -1;
    iVar2 = *param_2;
    iVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}


//// FUNCTION FUN_00b1c825 @ 00b1c825 ////

undefined4 FUN_00b1c825(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


//// FUNCTION FUN_00b1c834 @ 00b1c834 ////

undefined4 FUN_00b1c834(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00b1c843 @ 00b1c843 ////

undefined4 __thiscall FUN_00b1c843(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 8) < param_1) {
    puVar1 = operator_new(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = *(uint *)((int)this + 8);
      puVar5 = *(undefined4 **)((int)this + 0xc);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0xc));
    }
    uVar2 = 0x8007000e;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION FUN_00b1c89f @ 00b1c89f ////

void __fastcall FUN_00b1c89f(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  *param_1 = &PTR_FUN_00d8c020;
  if (iVar1 != 0) {
    param_1[3] = iVar1 - (uint)*(byte *)(iVar1 + -1);
  }
  FUN_00b1c778(param_1);
  return;
}


//// FUNCTION FUN_00b1c8ba @ 00b1c8ba ////

undefined4 * __thiscall FUN_00b1c8ba(void *this,byte param_1)

{
  FUN_00b1c89f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b1c8db @ 00b1c8db ////

void __thiscall FUN_00b1c8db(void *this,int param_1)

{
  int iVar1;
  byte bVar2;
  
  *(int *)((int)this + 8) = param_1;
  iVar1 = FUN_00b1c788(this,param_1 + 0x10);
  if (-1 < iVar1) {
    bVar2 = 0x10 - (*(byte *)((int)this + 0xc) & 0xf);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + (uint)bVar2;
    *(byte *)(*(int *)((int)this + 0xc) + -1) = bVar2;
  }
  return;
}


//// FUNCTION FUN_00b1c911 @ 00b1c911 ////

int __thiscall FUN_00b1c911(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b1c788(this,param_1);
  if (-1 < iVar1) {
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0xc);
    *(int *)((int)this + 0x14) = *(int *)((int)this + 8) + *(int *)((int)this + 0xc);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00b1c93a @ 00b1c93a ////

undefined4 __thiscall FUN_00b1c93a(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint local_8;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  if ((*(int *)((int)this + 0x14) - iVar4) - 1U < *(int *)((int)this + 0x10) + 4U) {
    iVar2 = *(int *)((int)this + 8);
    lVar13 = __ftol();
    local_8 = iVar2 + iVar4;
    if (local_8 <= (uint)lVar13) {
      local_8 = (uint)lVar13;
    }
    puVar5 = operator_new(local_8 + 3 & 0xfffffffc);
    if (puVar5 != (undefined4 *)0x0) {
      uVar8 = (*(int *)((int)this + 0xc) - (int)*(undefined4 **)((int)this + 0x14)) +
              *(int *)((int)this + 8);
      puVar10 = (undefined4 *)((int)puVar5 + (local_8 - uVar8));
      puVar11 = *(undefined4 **)((int)this + 0x14);
      puVar12 = puVar10;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      iVar4 = *(int *)((int)this + 0x14);
      for (piVar7 = *(int **)((int)this + 0xc); piVar7 < *(int **)((int)this + 0x10);
          piVar7 = piVar7 + 1) {
        *puVar5 = (undefined1 *)((int)puVar10 + (*piVar7 - iVar4));
        puVar5 = puVar5 + 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0xc));
    }
    uVar6 = 0x8007000e;
  }
  else {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + (-1 - iVar4);
    pcVar3 = *(char **)((int)this + 0x14);
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    **(undefined4 **)((int)this + 0x10) = *(undefined4 *)((int)this + 0x14);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
    uVar6 = 0;
  }
  return uVar6;
}


//// FUNCTION FUN_00b1ca49 @ 00b1ca49 ////

undefined4 * __thiscall FUN_00b1ca49(void *this,byte param_1)

{
  FUN_00b1c778(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b1ca6d @ 00b1ca6d ////

undefined4 FUN_00b1ca6d(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  IID **ppIVar3;
  bool bVar4;
  
  *param_3 = 0;
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_2;
  ppIVar3 = &riid_00db2a9c;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = (IID *)*piVar2 == *ppIVar3;
    piVar2 = piVar2 + 1;
    ppIVar3 = ppIVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = &DAT_00d8d1ac;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *piVar2;
      param_2 = param_2 + 1;
      piVar2 = piVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0x80004002;
    }
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


//// FUNCTION FUN_00b1cab6 @ 00b1cab6 ////

void __fastcall FUN_00b1cab6(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d8c004;
  param_1[1] = 1;
  return;
}


//// FUNCTION FUN_00b1cace @ 00b1cace ////

int FUN_00b1cace(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00b1cab6(puVar2);
    }
    if (piVar3 == (int *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x18))(param_1);
      if (iVar1 < 0) {
        (**(code **)(*piVar3 + 0x14))(1);
      }
      else {
        *param_2 = piVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b1cb3e @ 00b1cb3e ////

undefined4 * __fastcall FUN_00b1cb3e(undefined4 *param_1)

{
  undefined4 *extraout_ECX;
  
  FUN_00b1cab6(param_1);
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  *extraout_ECX = &PTR_FUN_00d8c03c;
  return extraout_ECX;
}


//// FUNCTION FUN_00b1cb54 @ 00b1cb54 ////

undefined4 * __thiscall FUN_00b1cb54(void *this,byte param_1)

{
  FUN_00b1c778(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b1cb75 @ 00b1cb75 ////

int FUN_00b1cb75(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = operator_new(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_00b1cb3e(puVar2);
    }
    if (piVar3 == (int *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x18))(param_1);
      if (iVar1 < 0) {
        (**(code **)(*piVar3 + 0x14))(1);
      }
      else {
        *param_2 = piVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b1cbd7 @ 00b1cbd7 ////

void FUN_00b1cbd7(undefined4 param_1,undefined4 *param_2)

{
  FUN_00b1cace(param_1,param_2);
  return;
}


//// FUNCTION FUN_00b1cbe2 @ 00b1cbe2 ////

int FUN_00b1cbe2(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_ECX;
  int *piVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = operator_new(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_00b1cab6(puVar2);
      *extraout_ECX = (int)&PTR_FUN_00d8c020;
      piVar3 = extraout_ECX;
    }
    if (piVar3 == (int *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = (**(code **)(*piVar3 + 0x18))(param_1);
      if (iVar1 < 0) {
        (**(code **)(*piVar3 + 0x14))(1);
      }
      else {
        *param_2 = piVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b1cc50 @ 00b1cc50 ////

undefined4 FUN_00b1cc50(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_ESI;
  
  if (unaff_ESI[5] != 0xcc) {
    (**(code **)unaff_ESI[0x6a])();
    unaff_ESI[0x23] = 0;
    unaff_ESI[5] = 0xcc;
  }
  iVar1 = *(int *)(unaff_ESI[0x6a] + 8);
  while (iVar1 != 0) {
    puVar2 = (undefined4 *)*unaff_ESI;
    puVar2[5] = 0x30;
    (*(code *)*puVar2)();
    iVar1 = *(int *)(unaff_ESI[0x6a] + 8);
  }
  unaff_ESI[5] = (unaff_ESI[0x11] != 0) + 0xcd;
  return 1;
}


//// FUNCTION FUN_00b1ccc0 @ 00b1ccc0 ////

int FUN_00b1ccc0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = param_1;
  iVar1 = param_1[5];
  if (iVar1 != 0xcd) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  uVar3 = piVar4[0x1d];
  if (uVar3 <= (uint)piVar4[0x23]) {
    iVar1 = *piVar4;
    *(undefined4 *)(iVar1 + 0x14) = 0x7b;
    (**(code **)(iVar1 + 4))(piVar4,0xffffffff);
    return 0;
  }
  puVar2 = (undefined4 *)piVar4[2];
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = piVar4[0x23];
    puVar2[2] = uVar3;
    (*(code *)*puVar2)(piVar4);
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar4[0x6b] + 4))(piVar4,param_2,&param_1,param_3);
  piVar4[0x23] = piVar4[0x23] + (int)param_1;
  return (int)param_1;
}


//// FUNCTION FUN_00b1cd50 @ 00b1cd50 ////

uint FUN_00b1cd50(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[5];
  if (iVar2 != 0xce) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  uVar3 = param_1[0x1d];
  if (uVar3 <= (uint)param_1[0x23]) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x7b;
    (**(code **)(iVar2 + 4))(param_1,0xffffffff);
    return 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1[0x23];
    puVar1[2] = uVar3;
    (*(code *)*puVar1)(param_1);
  }
  uVar3 = param_1[0x50] * param_1[0x4f];
  if (param_3 < uVar3) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x17;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = (**(code **)(param_1[0x6c] + 0xc))(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x23] = param_1[0x23] + uVar3;
  return uVar3;
}


//// FUNCTION FUN_00b1cdf0 @ 00b1cdf0 ////

void FUN_00b1cdf0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[5];
  if ((iVar1 != 0xcf) && (iVar1 != 0xcc)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  if ((*(int *)(param_1[0x6e] + 0x14) != 0) && (param_1[0x25] < param_2)) {
    param_2 = param_1[0x25];
  }
  param_1[0x27] = param_2;
  FUN_00b1cc50();
  return;
}


//// FUNCTION FUN_00b1ce50 @ 00b1ce50 ////

undefined4 FUN_00b1ce50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[5];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && (param_1[0x10] != 0)) {
    (**(code **)(param_1[0x6a] + 4))(param_1);
    param_1[5] = 0xd0;
  }
  else if (iVar2 != 0xd0) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_1[0x25] <= param_1[0x27]) {
    do {
      if (((undefined4 *)param_1[0x6e])[5] != 0) break;
      iVar2 = (**(code **)param_1[0x6e])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
    } while (param_1[0x25] <= param_1[0x27]);
  }
  param_1[5] = 0xcf;
  return 1;
}


//// FUNCTION FUN_00b1cef0 @ 00b1cef0 ////

undefined4 FUN_00b1cef0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[5] == 0xca) {
    FUN_00b28ad0((int)param_1);
    if (param_1[0x10] != 0) {
      param_1[5] = 0xcf;
      return 1;
    }
    param_1[5] = 0xcb;
  }
  iVar3 = param_1[5];
  if (iVar3 == 0xcb) {
    if (*(int *)(param_1[0x6e] + 0x10) != 0) {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar3 = (**(code **)param_1[0x6e])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar3 == 2) break;
        iVar1 = param_1[2];
        if ((iVar1 != 0) &&
           (((iVar3 == 3 || (iVar3 == 1)) &&
            (iVar3 = *(int *)(iVar1 + 4) + 1, *(int *)(iVar1 + 4) = iVar3,
            *(int *)(iVar1 + 8) <= iVar3)))) {
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_1[0x51];
        }
      }
    }
    param_1[0x27] = param_1[0x25];
    uVar4 = FUN_00b1cc50();
    return uVar4;
  }
  if (iVar3 != 0xcc) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar3;
    (*(code *)*puVar2)(param_1);
  }
  uVar4 = FUN_00b1cc50();
  return uVar4;
}


//// FUNCTION FUN_00b1cfd0 @ 00b1cfd0 ////

void FUN_00b1cfd0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0xc;
    puVar1[6] = 0x3e;
    puVar1[7] = param_2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_3 != 0x1d8) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x15;
    puVar1[6] = 0x1d8;
    puVar1[7] = param_3;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = param_1[3];
  iVar3 = *param_1;
  piVar5 = param_1;
  for (iVar4 = 0x76; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  *param_1 = iVar3;
  param_1[3] = iVar2;
  param_1[4] = 1;
  FUN_00b29be0(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  param_1[0x4d] = 0;
  FUN_00b1eea0((int)param_1);
  FUN_00b290a0((int)param_1);
  param_1[5] = 200;
  return;
}


//// FUNCTION FUN_00b1d0c0 @ 00b1d0c0 ////

void FUN_00b1d0c0(int param_1)

{
  FUN_00b29ce0(param_1);
  return;
}


//// FUNCTION FUN_00b1d0d0 @ 00b1d0d0 ////

void FUN_00b1d0d0(int param_1)

{
  FUN_00b29ca0(param_1);
  return;
}


//// FUNCTION FUN_00b1d0e0 @ 00b1d0e0 ////

void FUN_00b1d0e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[9];
  if (iVar1 == 1) {
    unaff_ESI[10] = 1;
    unaff_ESI[0xb] = 1;
    goto LAB_00b1d203;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((unaff_ESI[0x4a] == 0) || (uVar6 = (uint)*(byte *)(unaff_ESI + 0x4b), uVar6 == 0)) {
        unaff_ESI[10] = 4;
        unaff_ESI[0xb] = 4;
      }
      else {
        if (uVar6 != 2) {
          iVar1 = *unaff_ESI;
          *(undefined4 *)(iVar1 + 0x14) = 0x72;
          *(uint *)(iVar1 + 0x18) = uVar6;
          (**(code **)(iVar1 + 4))();
        }
        unaff_ESI[10] = 5;
        unaff_ESI[0xb] = 4;
      }
    }
    else {
      unaff_ESI[10] = 0;
      unaff_ESI[0xb] = 0;
    }
    goto LAB_00b1d203;
  }
  if (unaff_ESI[0x47] == 0) {
    if (unaff_ESI[0x4a] == 0) {
      piVar2 = (int *)unaff_ESI[0x37];
      iVar1 = *piVar2;
      iVar3 = piVar2[0x15];
      iVar4 = piVar2[0x2a];
      if (iVar1 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) {
          unaff_ESI[10] = 3;
          unaff_ESI[0xb] = 2;
          goto LAB_00b1d203;
        }
      }
      else if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_00b1d187;
      iVar5 = *unaff_ESI;
      *(int *)(iVar5 + 0x18) = iVar1;
      *(int *)(iVar5 + 0x1c) = iVar3;
      *(int *)(iVar5 + 0x20) = iVar4;
      *(undefined4 *)(iVar5 + 0x14) = 0x6f;
    }
    else {
      uVar6 = (uint)*(byte *)(unaff_ESI + 0x4b);
      if (uVar6 == 0) {
LAB_00b1d187:
        unaff_ESI[10] = 2;
        unaff_ESI[0xb] = 2;
        goto LAB_00b1d203;
      }
      if (uVar6 == 1) goto LAB_00b1d1e6;
      iVar5 = *unaff_ESI;
      *(undefined4 *)(iVar5 + 0x14) = 0x72;
      *(uint *)(iVar5 + 0x18) = uVar6;
    }
    (**(code **)(iVar5 + 4))();
  }
LAB_00b1d1e6:
  unaff_ESI[10] = 3;
  unaff_ESI[0xb] = 2;
LAB_00b1d203:
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0x3ff00000;
  unaff_ESI[0xc] = 1;
  unaff_ESI[0xd] = 1;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 1;
  unaff_ESI[0x14] = 1;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 2;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0x100;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  return;
}


//// FUNCTION FUN_00b1d250 @ 00b1d250 ////

int FUN_00b1d250(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[5];
  iVar3 = 0;
  switch(iVar2) {
  case 200:
    (**(code **)(param_1[0x6e] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar3 = (**(code **)param_1[0x6e])(param_1);
    if (iVar3 == 1) {
      FUN_00b1d0e0();
      param_1[5] = 0xca;
      return 1;
    }
    break;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar2 = (**(code **)param_1[0x6e])(param_1);
    return iVar2;
  default:
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  return iVar3;
}


//// FUNCTION FUN_00b1d310 @ 00b1d310 ////

undefined4 FUN_00b1d310(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[5];
  if ((199 < iVar1) && (iVar1 < 0xd3)) {
    return *(undefined4 *)(param_1[0x6e] + 0x14);
  }
  puVar2 = (undefined4 *)*param_1;
  puVar2[5] = 0x14;
  puVar2[6] = iVar1;
  (*(code *)*puVar2)(param_1);
  return *(undefined4 *)(param_1[0x6e] + 0x14);
}


//// FUNCTION FUN_00b1d360 @ 00b1d360 ////

undefined4 FUN_00b1d360(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[5];
  if ((0xc9 < iVar1) && (iVar1 < 0xd3)) {
    return *(undefined4 *)(param_1[0x6e] + 0x10);
  }
  puVar2 = (undefined4 *)*param_1;
  puVar2[5] = 0x14;
  puVar2[6] = iVar1;
  (*(code *)*puVar2)(param_1);
  return *(undefined4 *)(param_1[0x6e] + 0x10);
}


//// FUNCTION FUN_00b1d3b0 @ 00b1d3b0 ////

undefined4 FUN_00b1d3b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[5];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x43;
      (*(code *)*puVar1)(param_1);
    }
    (**(code **)(param_1[0x6a] + 4))(param_1);
    param_1[5] = 0xd2;
  }
  else if (iVar2 == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (iVar2 != 0xd2) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = *(int *)(param_1[0x6e] + 0x14);
  while( true ) {
    if (iVar2 != 0) {
      (**(code **)(param_1[6] + 0x18))(param_1);
      FUN_00b29ca0((int)param_1);
      return 1;
    }
    iVar2 = (**(code **)param_1[0x6e])(param_1);
    if (iVar2 == 0) break;
    iVar2 = *(int *)(param_1[0x6e] + 0x14);
  }
  return 0;
}


//// FUNCTION FUN_00b1d470 @ 00b1d470 ////

int FUN_00b1d470(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[5];
  if ((iVar2 != 200) && (iVar2 != 0xc9)) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = FUN_00b1d250(param_1);
  if (iVar2 == 1) {
    iVar2 = 1;
  }
  else if (iVar2 == 2) {
    if (param_2 != 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x33;
      (*(code *)*puVar1)(param_1);
    }
    FUN_00b29ca0((int)param_1);
    return 2;
  }
  return iVar2;
}


//// FUNCTION FUN_00b1d4e0 @ 00b1d4e0 ////

undefined4 FUN_00b1d4e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar3 = *unaff_ESI;
  *(undefined4 *)(iVar3 + 0x14) = 0x66;
  (**(code **)(iVar3 + 4))();
  if (*(int *)(unaff_ESI[0x6f] + 0xc) != 0) {
    puVar1 = (undefined4 *)*unaff_ESI;
    puVar1[5] = 0x3d;
    (*(code *)*puVar1)();
  }
  piVar2 = unaff_ESI + 0x3e;
  iVar3 = 0x10;
  do {
    *(undefined1 *)(piVar2 + -4) = 0;
    *(undefined1 *)piVar2 = 1;
    *(undefined1 *)(piVar2 + 4) = 5;
    piVar2 = (int *)((int)piVar2 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0x46] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0x4c] = 0;
  unaff_ESI[0x47] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x122) = 0;
  unaff_ESI[0x4a] = 0;
  *(undefined1 *)(unaff_ESI + 0x4b) = 0;
  *(undefined1 *)(unaff_ESI + 0x48) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x121) = 1;
  *(undefined2 *)(unaff_ESI + 0x49) = 1;
  *(undefined2 *)((int)unaff_ESI + 0x126) = 1;
  *(undefined4 *)(unaff_ESI[0x6f] + 0xc) = 1;
  return 1;
}


//// FUNCTION FUN_00b1d590 @ 00b1d590 ////

undefined4 __fastcall FUN_00b1d590(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *unaff_ESI;
  byte *pbVar10;
  byte *pbVar11;
  uint local_10;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  iVar7 = puVar3[1];
  pbVar10 = (byte *)*puVar3;
  unaff_ESI[0x38] = param_1;
  unaff_ESI[0x39] = param_2;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  bVar1 = *pbVar10;
  iVar7 = iVar7 + -1;
  pbVar10 = pbVar10 + 1;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  bVar2 = *pbVar10;
  iVar7 = iVar7 + -1;
  pbVar10 = pbVar10 + 1;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar11 = pbVar10 + 1;
  unaff_ESI[0x36] = (uint)*pbVar10;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar11 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar10 = pbVar11 + 1;
  unaff_ESI[8] = (uint)*pbVar11 << 8;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar11 = pbVar10 + 1;
  unaff_ESI[8] = unaff_ESI[8] + (uint)*pbVar10;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar11 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar10 = pbVar11 + 1;
  unaff_ESI[7] = (uint)*pbVar11 << 8;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar7 = iVar7 + -1;
  pbVar11 = pbVar10 + 1;
  unaff_ESI[7] = unaff_ESI[7] + (uint)*pbVar10;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar3[3])();
    if (iVar7 == 0) {
      return 0;
    }
    pbVar11 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  iVar8 = *unaff_ESI;
  unaff_ESI[9] = (uint)*pbVar11;
  iVar4 = unaff_ESI[7];
  *(int *)(iVar8 + 0x18) = unaff_ESI[0x69];
  iVar5 = unaff_ESI[8];
  *(int *)(iVar8 + 0x1c) = iVar4;
  iVar4 = unaff_ESI[9];
  *(int *)(iVar8 + 0x20) = iVar5;
  *(int *)(iVar8 + 0x24) = iVar4;
  iVar7 = iVar7 + -1;
  pbVar11 = pbVar11 + 1;
  *(undefined4 *)(iVar8 + 0x14) = 100;
  (**(code **)(iVar8 + 4))();
  if (*(int *)(unaff_ESI[0x6f] + 0x10) != 0) {
    puVar6 = (undefined4 *)*unaff_ESI;
    puVar6[5] = 0x3a;
    (*(code *)*puVar6)();
  }
  if (((unaff_ESI[8] == 0) || (unaff_ESI[7] == 0)) || (unaff_ESI[9] < 1)) {
    puVar6 = (undefined4 *)*unaff_ESI;
    puVar6[5] = 0x20;
    (*(code *)*puVar6)();
  }
  if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != unaff_ESI[9] * 3) {
    puVar6 = (undefined4 *)*unaff_ESI;
    puVar6[5] = 0xb;
    (*(code *)*puVar6)();
  }
  if (unaff_ESI[0x37] == 0) {
    iVar8 = (**(code **)unaff_ESI[1])();
    unaff_ESI[0x37] = iVar8;
  }
  puVar9 = (uint *)unaff_ESI[0x37];
  local_10 = 0;
  if (0 < unaff_ESI[9]) {
    do {
      puVar9[1] = local_10;
      if (iVar7 == 0) {
        iVar7 = (*(code *)puVar3[3])();
        if (iVar7 == 0) {
          return 0;
        }
        pbVar11 = (byte *)*puVar3;
        iVar7 = puVar3[1];
      }
      iVar7 = iVar7 + -1;
      pbVar10 = pbVar11 + 1;
      *puVar9 = (uint)*pbVar11;
      if (iVar7 == 0) {
        iVar7 = (*(code *)puVar3[3])();
        if (iVar7 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar3;
        iVar7 = puVar3[1];
      }
      bVar1 = *pbVar10;
      iVar7 = iVar7 + -1;
      pbVar10 = pbVar10 + 1;
      puVar9[2] = (int)(uint)bVar1 >> 4;
      puVar9[3] = bVar1 & 0xf;
      if (iVar7 == 0) {
        iVar7 = (*(code *)puVar3[3])();
        if (iVar7 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar3;
        iVar7 = puVar3[1];
      }
      puVar9[4] = (uint)*pbVar10;
      iVar8 = *unaff_ESI;
      *(uint *)(iVar8 + 0x18) = *puVar9;
      *(uint *)(iVar8 + 0x1c) = puVar9[2];
      *(uint *)(iVar8 + 0x20) = puVar9[3];
      *(uint *)(iVar8 + 0x24) = puVar9[4];
      iVar7 = iVar7 + -1;
      pbVar11 = pbVar10 + 1;
      *(undefined4 *)(iVar8 + 0x14) = 0x65;
      (**(code **)(iVar8 + 4))();
      local_10 = local_10 + 1;
      puVar9 = puVar9 + 0x15;
    } while ((int)local_10 < unaff_ESI[9]);
  }
  *(undefined4 *)(unaff_ESI[0x6f] + 0x10) = 1;
  *puVar3 = pbVar11;
  puVar3[1] = iVar7;
  return 1;
}


//// FUNCTION FUN_00b1d870 @ 00b1d870 ////

undefined4 FUN_00b1d870(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *unaff_ESI;
  uint *puVar12;
  int local_18;
  int *local_10;
  int local_8;
  
  puVar3 = (undefined4 *)unaff_ESI[6];
  local_8 = puVar3[1];
  pbVar10 = (byte *)*puVar3;
  if (*(int *)(unaff_ESI[0x6f] + 0x10) == 0) {
    puVar4 = (undefined4 *)*unaff_ESI;
    puVar4[5] = 0x3e;
    (*(code *)*puVar4)();
  }
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  bVar1 = *pbVar10;
  local_8 = local_8 + -1;
  pbVar10 = pbVar10 + 1;
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  bVar2 = *pbVar10;
  local_8 = local_8 + -1;
  pbVar10 = pbVar10 + 1;
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  uVar7 = (uint)*pbVar10;
  local_8 = local_8 + -1;
  iVar6 = *unaff_ESI;
  *(undefined4 *)(iVar6 + 0x14) = 0x67;
  pbVar10 = pbVar10 + 1;
  *(uint *)(iVar6 + 0x18) = uVar7;
  (**(code **)(iVar6 + 4))();
  if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar7 * 2 + 6) || (uVar7 == 0)) || (4 < uVar7)) {
    puVar4 = (undefined4 *)*unaff_ESI;
    puVar4[5] = 0xb;
    (*(code *)*puVar4)();
  }
  unaff_ESI[0x53] = uVar7;
  local_18 = 0;
  if (uVar7 != 0) {
    local_10 = unaff_ESI + 0x54;
    do {
      if (local_8 == 0) {
        iVar6 = (*(code *)puVar3[3])();
        if (iVar6 == 0) {
          return 0;
        }
        local_8 = puVar3[1];
        pbVar10 = (byte *)*puVar3;
      }
      uVar8 = (uint)*pbVar10;
      local_8 = local_8 + -1;
      pbVar10 = pbVar10 + 1;
      if (local_8 == 0) {
        iVar6 = (*(code *)puVar3[3])();
        if (iVar6 == 0) {
          return 0;
        }
        local_8 = puVar3[1];
        pbVar10 = (byte *)*puVar3;
      }
      puVar12 = (uint *)unaff_ESI[0x37];
      local_8 = local_8 + -1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar6 = 0;
      if (0 < unaff_ESI[9]) {
        do {
          if (uVar8 == *puVar12) goto LAB_00b1d9f7;
          iVar6 = iVar6 + 1;
          puVar12 = puVar12 + 0x15;
        } while (iVar6 < unaff_ESI[9]);
      }
      puVar4 = (undefined4 *)*unaff_ESI;
      puVar4[5] = 5;
      puVar4[6] = uVar8;
      (*(code *)*puVar4)();
LAB_00b1d9f7:
      puVar12[6] = bVar1 & 0xf;
      *local_10 = (int)puVar12;
      iVar6 = *unaff_ESI;
      puVar12[5] = (int)(uint)bVar1 >> 4;
      *(uint *)(iVar6 + 0x18) = uVar8;
      *(uint *)(iVar6 + 0x1c) = puVar12[5];
      *(uint *)(iVar6 + 0x20) = puVar12[6];
      *(undefined4 *)(iVar6 + 0x14) = 0x68;
      (**(code **)(iVar6 + 4))();
      local_18 = local_18 + 1;
      local_10 = local_10 + 1;
    } while (local_18 < (int)uVar7);
  }
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  local_8 = local_8 + -1;
  pbVar11 = pbVar10 + 1;
  unaff_ESI[0x65] = (uint)*pbVar10;
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar11 = (byte *)*puVar3;
  }
  local_8 = local_8 + -1;
  pbVar10 = pbVar11 + 1;
  unaff_ESI[0x66] = (uint)*pbVar11;
  if (local_8 == 0) {
    iVar6 = (*(code *)puVar3[3])();
    if (iVar6 == 0) {
      return 0;
    }
    local_8 = puVar3[1];
    pbVar10 = (byte *)*puVar3;
  }
  uVar7 = *pbVar10 & 0xf;
  iVar9 = (int)(uint)*pbVar10 >> 4;
  unaff_ESI[0x68] = uVar7;
  iVar6 = *unaff_ESI;
  *(int *)(iVar6 + 0x18) = unaff_ESI[0x65];
  iVar5 = unaff_ESI[0x66];
  *(int *)(iVar6 + 0x20) = iVar9;
  unaff_ESI[0x67] = iVar9;
  *(int *)(iVar6 + 0x1c) = iVar5;
  *(uint *)(iVar6 + 0x24) = uVar7;
  *(undefined4 *)(iVar6 + 0x14) = 0x69;
  (**(code **)(iVar6 + 4))();
  unaff_ESI[0x25] = unaff_ESI[0x25] + 1;
  *(undefined4 *)(unaff_ESI[0x6f] + 0x14) = 0;
  *puVar3 = pbVar10 + 1;
  puVar3[1] = local_8 + -1;
  return 1;
}


//// FUNCTION FUN_00b1db30 @ 00b1db30 ////

undefined4 FUN_00b1db30(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte local_130 [256];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  byte local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)param_1[6];
  pbVar7 = (byte *)*local_c;
  iVar3 = local_c[1];
  if (iVar3 == 0) {
    iVar3 = (*(code *)local_c[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    pbVar7 = (byte *)*local_c;
    iVar3 = local_c[1];
    local_8 = iVar3;
  }
  local_10 = (uint)*pbVar7 << 8;
  iVar3 = iVar3 + -1;
  pbVar7 = pbVar7 + 1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)local_c[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = local_c[1];
    pbVar7 = (byte *)*local_c;
    local_8 = iVar3;
  }
  local_10 = local_10 + (uint)*pbVar7 + -2;
  pbVar7 = pbVar7 + 1;
  iVar3 = iVar3 + -1;
  do {
    if (local_10 < 0x11) {
      if (local_10 != 0) {
        puVar10 = (undefined4 *)*param_1;
        puVar10[5] = 0xb;
        (*(code *)*puVar10)(param_1);
      }
      local_c[1] = iVar3;
      *local_c = pbVar7;
      return 1;
    }
    if (iVar3 == 0) {
      iVar3 = (*(code *)local_c[3])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      pbVar7 = (byte *)*local_c;
      iVar3 = local_c[1];
      local_8 = iVar3;
    }
    local_30 = (uint)*pbVar7;
    iVar6 = *param_1;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar6 + 0x14) = 0x50;
    pbVar7 = pbVar7 + 1;
    *(uint *)(iVar6 + 0x18) = local_30;
    (**(code **)(iVar6 + 4))(param_1,1);
    local_2c = local_2c & 0xffffff00;
    local_14 = 0;
    local_18 = 1;
    do {
      puVar10 = local_c;
      iVar6 = local_18;
      if (iVar3 == 0) {
        iVar3 = (*(code *)local_c[3])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = puVar10[1];
        pbVar7 = (byte *)*puVar10;
        iVar6 = local_18;
      }
      bVar1 = *pbVar7;
      *(byte *)((int)&local_2c + iVar6) = bVar1;
      iVar3 = iVar3 + -1;
      local_14 = local_14 + (uint)bVar1;
      pbVar7 = pbVar7 + 1;
      local_18 = iVar6 + 1;
      local_8 = iVar3;
    } while (local_18 < 0x11);
    local_10 = local_10 + -0x11;
    iVar6 = *param_1;
    *(uint *)(iVar6 + 0x18) = local_2c >> 8 & 0xff;
    *(uint *)(iVar6 + 0x1c) = local_2c >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x20) = local_2c >> 0x18;
    *(uint *)(iVar6 + 0x24) = local_28 & 0xff;
    *(uint *)(iVar6 + 0x28) = local_28 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x2c) = local_28 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x30) = local_28 >> 0x18;
    *(uint *)(iVar6 + 0x34) = local_24 & 0xff;
    *(undefined4 *)(iVar6 + 0x14) = 0x56;
    (**(code **)(iVar6 + 4))(param_1,2);
    iVar6 = *param_1;
    *(uint *)(iVar6 + 0x18) = local_24 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x1c) = local_24 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x20) = local_24 >> 0x18;
    *(uint *)(iVar6 + 0x24) = local_20 & 0xff;
    *(uint *)(iVar6 + 0x28) = local_20 >> 8 & 0xff;
    *(uint *)(iVar6 + 0x2c) = local_20 >> 0x10 & 0xff;
    *(uint *)(iVar6 + 0x30) = local_20 >> 0x18;
    *(uint *)(iVar6 + 0x34) = (uint)local_1c;
    *(undefined4 *)(iVar6 + 0x14) = 0x56;
    (**(code **)(iVar6 + 4))(param_1,2);
    if ((0x100 < local_14) || (local_10 < local_14)) {
      puVar10 = (undefined4 *)*param_1;
      puVar10[5] = 8;
      (*(code *)*puVar10)(param_1);
    }
    local_18 = 0;
    iVar6 = local_14;
    if (0 < local_14) {
      do {
        puVar10 = local_c;
        iVar4 = local_18;
        if (iVar3 == 0) {
          iVar3 = (*(code *)local_c[3])(param_1);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = puVar10[1];
          pbVar7 = (byte *)*puVar10;
          iVar4 = local_18;
          iVar6 = local_14;
        }
        bVar1 = *pbVar7;
        iVar3 = iVar3 + -1;
        pbVar7 = pbVar7 + 1;
        local_130[iVar4] = bVar1;
        local_8 = iVar3;
        local_18 = iVar4 + 1;
      } while (iVar4 + 1 < iVar6);
    }
    local_10 = local_10 - iVar6;
    if ((local_30 & 0x10) == 0) {
      iVar3 = local_30 + 0x2e;
      uVar5 = local_30;
    }
    else {
      iVar3 = local_30 + 0x22;
      uVar5 = local_30 - 0x10;
    }
    piVar9 = param_1 + iVar3;
    if (((int)uVar5 < 0) || (3 < (int)uVar5)) {
      puVar10 = (undefined4 *)*param_1;
      puVar10[5] = 0x1e;
      puVar10[6] = uVar5;
      (*(code *)*puVar10)(param_1);
    }
    if (*piVar9 == 0) {
      iVar3 = FUN_00b29d40((int)param_1);
      *piVar9 = iVar3;
    }
    puVar2 = (uint *)*piVar9;
    *puVar2 = local_2c;
    puVar2[1] = local_28;
    puVar2[2] = local_24;
    puVar2[3] = local_20;
    *(byte *)(puVar2 + 4) = local_1c;
    pbVar8 = local_130;
    puVar10 = (undefined4 *)((int)puVar2 + 0x11);
    for (iVar6 = 0x40; iVar3 = local_8, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      puVar10 = puVar10 + 1;
    }
  } while( true );
}


//// FUNCTION FUN_00b1de00 @ 00b1de00 ////

undefined4 FUN_00b1de00(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int *local_14;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar6 = puVar3[1];
  puVar12 = (undefined1 *)*puVar3;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar12 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  uVar1 = *puVar12;
  iVar6 = iVar6 + -1;
  puVar12 = puVar12 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar12 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar13 = puVar12 + 1;
  iVar7 = CONCAT11(uVar1,*puVar12) - 2;
  do {
    iVar5 = iVar7;
    if (iVar5 < 1) {
      if (iVar5 != 0) {
        puVar4 = (undefined4 *)*param_1;
        puVar4[5] = 0xb;
        (*(code *)*puVar4)(param_1);
      }
      *puVar3 = pbVar13;
      puVar3[1] = iVar6;
      return 1;
    }
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar3[3])(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      pbVar13 = (byte *)*puVar3;
      iVar6 = puVar3[1];
    }
    bVar2 = *pbVar13;
    iVar7 = *param_1;
    iVar8 = (int)(uint)bVar2 >> 4;
    *(undefined4 *)(iVar7 + 0x14) = 0x51;
    uVar10 = bVar2 & 0xf;
    *(uint *)(iVar7 + 0x18) = uVar10;
    iVar6 = iVar6 + -1;
    pbVar13 = pbVar13 + 1;
    *(int *)(iVar7 + 0x1c) = iVar8;
    (**(code **)(iVar7 + 4))(param_1,1);
    if (3 < uVar10) {
      puVar4 = (undefined4 *)*param_1;
      puVar4[5] = 0x1f;
      puVar4[6] = uVar10;
      (*(code *)*puVar4)(param_1);
    }
    if (param_1[uVar10 + 0x2a] == 0) {
      iVar7 = FUN_00b29d10((int)param_1);
      param_1[uVar10 + 0x2a] = iVar7;
    }
    iVar7 = param_1[uVar10 + 0x2a];
    local_14 = &DAT_00d8d8d8;
    do {
      if (iVar8 == 0) {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar13 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        uVar9 = (ushort)*pbVar13;
      }
      else {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar13 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        bVar2 = *pbVar13;
        iVar6 = iVar6 + -1;
        pbVar13 = pbVar13 + 1;
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar3[3])(param_1);
          if (iVar6 == 0) {
            return 0;
          }
          pbVar13 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        uVar9 = (ushort)bVar2 * 0x100 + (ushort)*pbVar13;
      }
      *(ushort *)(iVar7 + *local_14 * 2) = uVar9;
      iVar6 = iVar6 + -1;
      local_14 = local_14 + 1;
      pbVar13 = pbVar13 + 1;
    } while ((int)local_14 < 0xd8d9d8);
    if (1 < *(int *)(*param_1 + 0x68)) {
      puVar11 = (ushort *)(iVar7 + 4);
      local_14 = (int *)0x8;
      do {
        iVar7 = *param_1;
        *(uint *)(iVar7 + 0x18) = (uint)puVar11[-2];
        *(uint *)(iVar7 + 0x1c) = (uint)puVar11[-1];
        *(uint *)(iVar7 + 0x20) = (uint)*puVar11;
        *(uint *)(iVar7 + 0x24) = (uint)puVar11[1];
        *(uint *)(iVar7 + 0x28) = (uint)puVar11[2];
        *(uint *)(iVar7 + 0x2c) = (uint)puVar11[3];
        *(uint *)(iVar7 + 0x30) = (uint)puVar11[4];
        *(uint *)(iVar7 + 0x34) = (uint)puVar11[5];
        *(undefined4 *)(iVar7 + 0x14) = 0x5d;
        (**(code **)(iVar7 + 4))(param_1,2);
        puVar11 = puVar11 + 8;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
    }
    iVar7 = iVar5 + -0x41;
    if (iVar8 != 0) {
      iVar7 = iVar5 + -0x81;
    }
  } while( true );
}


//// FUNCTION FUN_00b1e050 @ 00b1e050 ////

undefined4 FUN_00b1e050(int *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar6 = puVar3[1];
  puVar8 = (undefined1 *)*puVar3;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar8 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  uVar1 = *puVar8;
  iVar6 = iVar6 + -1;
  puVar8 = puVar8 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar8 = (undefined1 *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar6 = iVar6 + -1;
  pbVar9 = puVar8 + 1;
  if (CONCAT11(uVar1,*puVar8) != 4) {
    puVar4 = (undefined4 *)*param_1;
    puVar4[5] = 0xb;
    (*(code *)*puVar4)(param_1);
  }
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  bVar2 = *pbVar9;
  iVar6 = iVar6 + -1;
  pbVar9 = pbVar9 + 1;
  if (iVar6 == 0) {
    iVar6 = (*(code *)puVar3[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar9 = (byte *)*puVar3;
    iVar6 = puVar3[1];
  }
  iVar7 = (uint)bVar2 * 0x100 + (uint)*pbVar9;
  iVar5 = *param_1;
  *(undefined4 *)(iVar5 + 0x14) = 0x52;
  *(int *)(iVar5 + 0x18) = iVar7;
  (**(code **)(iVar5 + 4))(param_1,1);
  *puVar3 = pbVar9 + 1;
  puVar3[1] = iVar6 + -1;
  param_1[0x46] = iVar7;
  return 1;
}


//// FUNCTION FUN_00b1e130 @ 00b1e130 ////

void __fastcall FUN_00b1e130(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint in_EAX;
  uint uVar10;
  int *unaff_ESI;
  char *unaff_EDI;
  
  iVar1 = in_EAX + param_1;
  if ((((in_EAX < 0xe) || (*unaff_EDI != 'J')) || (unaff_EDI[1] != 'F')) ||
     (((unaff_EDI[2] != 'I' || (unaff_EDI[3] != 'F')) || (unaff_EDI[4] != '\0')))) {
    if (((5 < in_EAX) && (*unaff_EDI == 'J')) &&
       ((unaff_EDI[1] == 'F' &&
        (((unaff_EDI[2] == 'X' && (unaff_EDI[3] == 'X')) && (unaff_EDI[4] == '\0')))))) {
      uVar10 = (uint)(byte)unaff_EDI[5];
      if (uVar10 == 0x10) {
        iVar9 = *unaff_ESI;
        *(undefined4 *)(iVar9 + 0x14) = 0x6c;
        *(int *)(iVar9 + 0x18) = iVar1;
        (**(code **)(iVar9 + 4))();
        return;
      }
      if (uVar10 != 0x11) {
        iVar9 = *unaff_ESI;
        if (uVar10 != 0x13) {
          *(undefined4 *)(iVar9 + 0x14) = 0x59;
          *(uint *)(iVar9 + 0x18) = uVar10;
          *(int *)(iVar9 + 0x1c) = iVar1;
          (**(code **)(iVar9 + 4))();
          return;
        }
        *(undefined4 *)(iVar9 + 0x14) = 0x6e;
        *(int *)(iVar9 + 0x18) = iVar1;
        (**(code **)(iVar9 + 4))();
        return;
      }
      iVar9 = *unaff_ESI;
      *(undefined4 *)(iVar9 + 0x14) = 0x6d;
      *(int *)(iVar9 + 0x18) = iVar1;
      (**(code **)(iVar9 + 4))();
      return;
    }
    iVar9 = *unaff_ESI;
    *(undefined4 *)(iVar9 + 0x14) = 0x4d;
    *(int *)(iVar9 + 0x18) = iVar1;
    (**(code **)(iVar9 + 4))();
  }
  else {
    cVar2 = unaff_EDI[7];
    bVar3 = unaff_EDI[5];
    *(char *)((int)unaff_ESI + 0x121) = unaff_EDI[6];
    bVar4 = unaff_EDI[8];
    *(char *)((int)unaff_ESI + 0x122) = cVar2;
    bVar5 = unaff_EDI[9];
    unaff_ESI[0x47] = 1;
    *(byte *)(unaff_ESI + 0x48) = bVar3;
    bVar6 = unaff_EDI[0xb];
    *(ushort *)(unaff_ESI + 0x49) = (ushort)bVar4 * 0x100 + (ushort)bVar5;
    *(ushort *)((int)unaff_ESI + 0x126) = (ushort)(byte)unaff_EDI[10] * 0x100 + (ushort)bVar6;
    if (bVar3 != 1) {
      iVar9 = *unaff_ESI;
      bVar4 = unaff_EDI[6];
      *(undefined4 *)(iVar9 + 0x14) = 0x77;
      *(uint *)(iVar9 + 0x18) = (uint)bVar3;
      *(uint *)(iVar9 + 0x1c) = (uint)bVar4;
      (**(code **)(iVar9 + 4))();
    }
    iVar9 = *unaff_ESI;
    bVar3 = *(byte *)((int)unaff_ESI + 0x121);
    *(uint *)(iVar9 + 0x18) = (uint)*(byte *)(unaff_ESI + 0x48);
    uVar7 = *(ushort *)(unaff_ESI + 0x49);
    *(uint *)(iVar9 + 0x1c) = (uint)bVar3;
    uVar8 = *(ushort *)((int)unaff_ESI + 0x126);
    *(uint *)(iVar9 + 0x20) = (uint)uVar7;
    bVar3 = *(byte *)((int)unaff_ESI + 0x122);
    *(uint *)(iVar9 + 0x24) = (uint)uVar8;
    *(uint *)(iVar9 + 0x28) = (uint)bVar3;
    *(undefined4 *)(iVar9 + 0x14) = 0x57;
    (**(code **)(iVar9 + 4))();
    bVar3 = unaff_EDI[0xc];
    bVar4 = unaff_EDI[0xd];
    if (bVar3 != 0 || bVar4 != 0) {
      iVar9 = *unaff_ESI;
      *(undefined4 *)(iVar9 + 0x14) = 0x5a;
      *(uint *)(iVar9 + 0x18) = (uint)bVar3;
      *(uint *)(iVar9 + 0x1c) = (uint)bVar4;
      (**(code **)(iVar9 + 4))();
    }
    if (iVar1 + -0xe != (uint)(byte)unaff_EDI[0xc] * (uint)(byte)unaff_EDI[0xd] * 3) {
      iVar9 = *unaff_ESI;
      *(undefined4 *)(iVar9 + 0x14) = 0x58;
      *(int *)(iVar9 + 0x18) = iVar1 + -0xe;
      (**(code **)(iVar9 + 4))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00b1e310 @ 00b1e310 ////

void __thiscall FUN_00b1e310(void *this,int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *in_EAX;
  int *unaff_ESI;
  
  if (((((void *)0xb < this) && (*in_EAX == 'A')) && (in_EAX[1] == 'd')) &&
     (((in_EAX[2] == 'o' && (in_EAX[3] == 'b')) && (in_EAX[4] == 'e')))) {
    iVar3 = *unaff_ESI;
    bVar1 = in_EAX[0xb];
    cVar2 = in_EAX[8];
    *(uint *)(iVar3 + 0x18) = (uint)CONCAT11(in_EAX[5],in_EAX[6]);
    *(uint *)(iVar3 + 0x1c) = (uint)CONCAT11(in_EAX[7],cVar2);
    *(uint *)(iVar3 + 0x20) = (uint)CONCAT11(in_EAX[9],in_EAX[10]);
    *(uint *)(iVar3 + 0x24) = (uint)bVar1;
    *(undefined4 *)(iVar3 + 0x14) = 0x4c;
    (**(code **)(iVar3 + 4))();
    *(byte *)(unaff_ESI + 0x4b) = bVar1;
    unaff_ESI[0x4a] = 1;
    return;
  }
  iVar3 = *unaff_ESI;
  *(undefined4 *)(iVar3 + 0x14) = 0x4e;
  *(int *)(iVar3 + 0x18) = (int)this + param_1;
  (**(code **)(iVar3 + 4))();
  return;
}


//// FUNCTION FUN_00b1e3b0 @ 00b1e3b0 ////

undefined4 FUN_00b1e3b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte local_28 [16];
  undefined4 *local_18;
  void *local_14;
  uint local_10;
  void *local_c;
  int local_8;
  
  puVar7 = (undefined4 *)param_1[6];
  iVar3 = puVar7[1];
  pbVar6 = (byte *)*puVar7;
  local_18 = puVar7;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar7[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar7[1];
    pbVar6 = (byte *)*puVar7;
    local_8 = iVar3;
  }
  local_10 = (uint)*pbVar6 << 8;
  iVar3 = iVar3 + -1;
  pbVar6 = pbVar6 + 1;
  if (iVar3 == 0) {
    iVar3 = (*(code *)puVar7[3])(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = puVar7[1];
    pbVar6 = (byte *)*puVar7;
  }
  iVar3 = iVar3 + -1;
  uVar5 = (local_10 + *pbVar6) - 2;
  pbVar6 = pbVar6 + 1;
  if ((int)uVar5 < 0xe) {
    local_c = (void *)(((int)uVar5 < 1) - 1 & uVar5);
  }
  else {
    local_c = (void *)0xe;
  }
  local_14 = (void *)0x0;
  local_10 = uVar5;
  if (local_c != (void *)0x0) {
    do {
      pvVar4 = local_14;
      if (iVar3 == 0) {
        local_8 = iVar3;
        iVar3 = (*(code *)puVar7[3])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = puVar7[1];
        pbVar6 = (byte *)*puVar7;
        pvVar4 = local_14;
        uVar5 = local_10;
      }
      iVar3 = iVar3 + -1;
      local_28[(int)pvVar4] = *pbVar6;
      pbVar6 = pbVar6 + 1;
      local_14 = (void *)((int)pvVar4 + 1);
    } while (local_14 < local_c);
  }
  local_10 = uVar5 - (int)local_c;
  local_8 = iVar3;
  if (param_1[0x69] == 0xe0) {
    FUN_00b1e130(local_10);
    iVar3 = local_8;
    puVar7 = local_18;
  }
  else if (param_1[0x69] == 0xee) {
    FUN_00b1e310(local_c,local_10);
    iVar3 = local_8;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    iVar2 = param_1[0x69];
    puVar1[5] = 0x44;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  *puVar7 = pbVar6;
  puVar7[1] = iVar3;
  if (0 < (int)local_10) {
    (**(code **)(param_1[6] + 0x10))(param_1,local_10);
  }
  return 1;
}


//// FUNCTION FUN_00b1e500 @ 00b1e500 ////

undefined4 FUN_00b1e500(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *local_10;
  void *local_c;
  byte *local_8;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar9 = (byte *)*puVar2;
  iVar6 = puVar2[1];
  iVar3 = param_1[0x6f];
  puVar7 = *(undefined4 **)(iVar3 + 0xa4);
  if (puVar7 == (undefined4 *)0x0) {
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar2[3])(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      pbVar9 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    bVar1 = *pbVar9;
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar9 + 1;
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar2[3])(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      pbVar8 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    pbVar9 = pbVar8 + 1;
    pvVar10 = (void *)((uint)bVar1 * 0x100 + (uint)*pbVar8 + -2);
    if ((int)pvVar10 < 0) {
      local_c = (void *)0x0;
      local_8 = pbVar9;
      goto LAB_00b1e6d6;
    }
    if (param_1[0x69] == 0xfe) {
      local_c = *(void **)(iVar3 + 0x60);
    }
    else {
      local_c = *(void **)(iVar3 + -0x31c + param_1[0x69] * 4);
    }
    if (pvVar10 < local_c) {
      local_c = pvVar10;
    }
    puVar7 = (undefined4 *)(**(code **)(param_1[1] + 4))(param_1,1,(int)local_c + 0x14);
    iVar5 = param_1[0x69];
    puVar7[2] = pvVar10;
    local_10 = (byte *)(puVar7 + 5);
    puVar7[4] = local_10;
    *(undefined4 **)(iVar3 + 0xa4) = puVar7;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(char *)(puVar7 + 1) = (char)iVar5;
    puVar7[3] = local_c;
    *puVar7 = 0;
    pvVar10 = (void *)0x0;
  }
  else {
    local_c = (void *)puVar7[3];
    pvVar10 = *(void **)(iVar3 + 0xa8);
    local_10 = (byte *)(puVar7[4] + (int)pvVar10);
  }
  local_8 = pbVar9;
  if (pvVar10 < local_c) {
    do {
      *puVar2 = pbVar9;
      puVar2[1] = iVar6;
      *(void **)(iVar3 + 0xa8) = pvVar10;
      if (iVar6 == 0) {
        iVar6 = (*(code *)puVar2[3])(param_1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar9 = (byte *)*puVar2;
        iVar6 = puVar2[1];
        local_8 = pbVar9;
      }
      while (iVar6 != 0) {
        *local_10 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar6 = iVar6 + -1;
        pvVar10 = (void *)((int)pvVar10 + 1);
        local_10 = local_10 + 1;
        local_8 = pbVar9;
        if (local_c <= pvVar10) goto LAB_00b1e693;
      }
    } while (pvVar10 < local_c);
    iVar6 = 0;
  }
LAB_00b1e693:
  piVar4 = (int *)param_1[0x4d];
  if (piVar4 == (int *)0x0) {
    param_1[0x4d] = (int)puVar7;
  }
  else {
    iVar5 = *piVar4;
    while (iVar5 != 0) {
      piVar4 = (int *)*piVar4;
      iVar5 = *piVar4;
    }
    *piVar4 = (int)puVar7;
  }
  pvVar10 = (void *)(puVar7[2] - (int)local_c);
LAB_00b1e6d6:
  *(undefined4 *)(iVar3 + 0xa4) = 0;
  iVar3 = param_1[0x69];
  if (iVar3 == 0xe0) {
    FUN_00b1e130((int)pvVar10);
  }
  else if (iVar3 == 0xee) {
    FUN_00b1e310(local_c,(int)pvVar10);
  }
  else {
    iVar5 = *param_1;
    *(undefined4 *)(iVar5 + 0x14) = 0x5b;
    *(int *)(iVar5 + 0x18) = iVar3;
    *(int *)(iVar5 + 0x1c) = (int)local_c + (int)pvVar10;
    (**(code **)(iVar5 + 4))(param_1,1);
  }
  *puVar2 = local_8;
  puVar2[1] = iVar6;
  if (0 < (int)pvVar10) {
    (**(code **)(param_1[6] + 0x10))(param_1,pvVar10);
  }
  return 1;
}


//// FUNCTION FUN_00b1e760 @ 00b1e760 ////

undefined4 FUN_00b1e760(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  
  piVar5 = param_1;
  puVar2 = (undefined4 *)param_1[6];
  iVar7 = puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (iVar7 == 0) {
    iVar7 = (*(code *)puVar2[3])(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    iVar7 = puVar2[1];
    pbVar8 = (byte *)*puVar2;
  }
  bVar1 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  piVar6 = (int *)(iVar7 + -1);
  if ((int *)(iVar7 + -1) == (int *)0x0) {
    iVar7 = (*(code *)puVar2[3])(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    pbVar8 = (byte *)*puVar2;
    piVar6 = (int *)puVar2[1];
  }
  param_1 = piVar6;
  iVar3 = piVar5[0x69];
  iVar7 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar8;
  iVar4 = *piVar5;
  *(undefined4 *)(iVar4 + 0x14) = 0x5b;
  *(int *)(iVar4 + 0x18) = iVar3;
  *(int *)(iVar4 + 0x1c) = iVar7;
  (**(code **)(iVar4 + 4))(piVar5,1);
  puVar2[1] = (int)param_1 + -1;
  *puVar2 = pbVar8 + 1;
  if (0 < iVar7) {
    (**(code **)(piVar5[6] + 0x10))(piVar5,iVar7);
  }
  return 1;
}


//// FUNCTION FUN_00b1e810 @ 00b1e810 ////

undefined4 FUN_00b1e810(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar5 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  while( true ) {
    if (iVar5 == 0) {
      iVar5 = (*(code *)puVar2[3])(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      pbVar7 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar7;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      iVar5 = iVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6f] + 0x18) = *(int *)(param_1[0x6f] + 0x18) + 1;
      *puVar2 = pbVar7;
      puVar2[1] = iVar5;
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar2[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar7;
    }
    do {
      if (iVar5 == 0) {
        iVar5 = (*(code *)puVar2[3])(param_1);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar7 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      uVar6 = (uint)*pbVar7;
      iVar5 = iVar5 + -1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 == 0xff);
    if (uVar6 != 0) break;
    *(int *)(param_1[0x6f] + 0x18) = *(int *)(param_1[0x6f] + 0x18) + 2;
    *puVar2 = pbVar7;
    puVar2[1] = iVar5;
  }
  iVar3 = *(int *)(param_1[0x6f] + 0x18);
  if (iVar3 != 0) {
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0x74;
    *(int *)(iVar4 + 0x18) = iVar3;
    *(uint *)(iVar4 + 0x1c) = uVar6;
    (**(code **)(iVar4 + 4))(param_1,0xffffffff);
    *(undefined4 *)(param_1[0x6f] + 0x18) = 0;
  }
  *puVar2 = pbVar7;
  puVar2[1] = iVar5;
  param_1[0x69] = uVar6;
  return 1;
}


//// FUNCTION FUN_00b1e920 @ 00b1e920 ////

undefined4 FUN_00b1e920(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  bVar1 = *pbVar6;
  iVar4 = iVar4 + -1;
  pbVar6 = pbVar6 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  uVar5 = (uint)*pbVar6;
  if ((bVar1 != 0xff) || (uVar5 != 0xd8)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x35;
    puVar3[6] = (uint)bVar1;
    puVar3[7] = uVar5;
    (*(code *)*puVar3)(param_1);
  }
  puVar2[1] = iVar4 + -1;
  *puVar2 = pbVar6 + 1;
  param_1[0x69] = uVar5;
  return 1;
}


//// FUNCTION FUN_00b1e9c0 @ 00b1e9c0 ////

undefined4 FUN_00b1e9c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
LAB_00b1e9d0:
  if (param_1[0x69] == 0) {
    if (*(int *)(param_1[0x6f] + 0xc) == 0) {
      iVar2 = FUN_00b1e920(param_1);
    }
    else {
      iVar2 = FUN_00b1e810(param_1);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = param_1[0x69];
  switch(iVar2) {
  case 1:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x5c;
    *(int *)(iVar3 + 0x18) = iVar2;
    (**(code **)(iVar3 + 4))(param_1,1);
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  default:
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x44;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
    break;
  case 0xc0:
  case 0xc1:
    iVar2 = 0;
    iVar3 = 0;
    goto LAB_00b1ea4e;
  case 0xc2:
    iVar2 = 0;
    goto LAB_00b1ea49;
  case 0xc3:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x3c;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xc4:
    iVar2 = FUN_00b1db30(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xc9:
    iVar2 = FUN_00b1d590(0,1);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 0xca:
    iVar2 = 1;
LAB_00b1ea49:
    iVar3 = 1;
LAB_00b1ea4e:
    iVar2 = FUN_00b1d590(iVar3,iVar2);
LAB_00b1ea53:
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xcc:
  case 0xdc:
    iVar2 = FUN_00b1e760(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xd8:
    iVar2 = FUN_00b1d4e0();
    goto LAB_00b1ea53;
  case 0xd9:
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x55;
    (**(code **)(iVar2 + 4))(param_1,1);
    param_1[0x69] = 0;
    return 2;
  case 0xda:
    iVar2 = FUN_00b1d870();
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    return 1;
  case 0xdb:
    iVar2 = FUN_00b1de00(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xdd:
    iVar2 = FUN_00b1e050(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    iVar2 = (**(code **)(param_1[0x6f] + -0x360 + iVar2 * 4))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x69] = 0;
    goto LAB_00b1e9d0;
  case 0xfe:
    goto switchD_00b1ea10_caseD_fe;
  }
  param_1[0x69] = 0;
  goto LAB_00b1e9d0;
switchD_00b1ea10_caseD_fe:
  iVar2 = (**(code **)(param_1[0x6f] + 0x1c))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x69] = 0;
  goto LAB_00b1e9d0;
}


//// FUNCTION FUN_00b1ecd0 @ 00b1ecd0 ////

undefined4 FUN_00b1ecd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1[0x69] == 0) && (iVar2 = FUN_00b1e810(param_1), iVar2 == 0)) {
    return 0;
  }
  iVar2 = param_1[0x6f];
  iVar1 = *(int *)(iVar2 + 0x14);
  if (param_1[0x69] == iVar1 + 0xd0) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x62;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x14);
    (**(code **)(iVar1 + 4))(param_1,3);
    param_1[0x69] = 0;
  }
  else {
    iVar2 = (**(code **)(param_1[6] + 0x14))(param_1,iVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1[0x6f] + 0x14) = *(int *)(param_1[0x6f] + 0x14) + 1U & 7;
  return 1;
}


//// FUNCTION FUN_00b1ed60 @ 00b1ed60 ////

undefined4 FUN_00b1ed60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = param_1[0x69];
  *(undefined4 *)(iVar3 + 0x14) = 0x79;
  *(int *)(iVar3 + 0x18) = iVar2;
  *(int *)(iVar3 + 0x1c) = param_2;
  (**(code **)(iVar3 + 4))(param_1,0xffffffff);
  do {
    if (iVar2 < 0xc0) {
LAB_00b1ed98:
      iVar3 = 2;
    }
    else if ((((iVar2 < 0xd0) || (0xd7 < iVar2)) || (iVar2 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar2 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else {
      if ((iVar2 == (param_2 - 1U & 7) + 0xd0) || (iVar2 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_00b1ed98;
      iVar3 = 1;
    }
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x61;
    *(int *)(iVar1 + 0x18) = iVar2;
    *(int *)(iVar1 + 0x1c) = iVar3;
    (**(code **)(iVar1 + 4))(param_1,4);
    if (iVar3 == 1) {
      param_1[0x69] = 0;
      return 1;
    }
    if (iVar3 == 2) {
      iVar3 = FUN_00b1e810(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = param_1[0x69];
    }
    else if (iVar3 == 3) {
      return 1;
    }
  } while( true );
}


//// FUNCTION FUN_00b1ee60 @ 00b1ee60 ////

void FUN_00b1ee60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  return;
}


//// FUNCTION FUN_00b1eea0 @ 00b1eea0 ////

void FUN_00b1eea0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xac);
  *(undefined4 **)(param_1 + 0x1bc) = puVar1;
  *puVar1 = FUN_00b1ee60;
  puVar1[1] = FUN_00b1e9c0;
  puVar1[2] = FUN_00b1ecd0;
  puVar1[7] = FUN_00b1e760;
  puVar1[0x18] = 0;
  puVar2 = puVar1 + 0x19;
  iVar3 = 0x10;
  do {
    puVar2[-0x11] = FUN_00b1e760;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1[8] = FUN_00b1e3b0;
  puVar1[0x16] = FUN_00b1e3b0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[0x29] = 0;
  return;
}


//// FUNCTION FUN_00b1ef30 @ 00b1ef30 ////

void FUN_00b1ef30(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar3 = *(int *)(param_1[1] + 0x30) - 0x14;
  iVar1 = param_1[0x6f];
  if ((int)uVar3 < (int)param_3) {
    param_3 = uVar3;
  }
  if (param_3 == 0) {
    pcVar4 = FUN_00b1e760;
    if ((param_2 == 0xe0) || (param_2 == 0xee)) {
      pcVar4 = FUN_00b1e3b0;
    }
  }
  else {
    pcVar4 = FUN_00b1e500;
    if (param_2 == 0xe0) {
      if (param_3 < 0xe) {
        *(code **)(iVar1 + 0x20) = FUN_00b1e500;
        *(undefined4 *)(iVar1 + 100) = 0xe;
        return;
      }
      goto LAB_00b1efe1;
    }
    if (param_2 == 0xee) {
      if (param_3 < 0xc) {
        *(code **)(iVar1 + 0x58) = FUN_00b1e500;
        *(undefined4 *)(iVar1 + 0x9c) = 0xc;
        return;
      }
      goto LAB_00b1efe1;
    }
  }
  if (param_2 == 0xfe) {
    *(code **)(iVar1 + 0x1c) = pcVar4;
    *(uint *)(iVar1 + 0x60) = param_3;
    return;
  }
  if ((param_2 < 0xe0) || (0xef < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x44;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
    return;
  }
LAB_00b1efe1:
  *(code **)(iVar1 + -0x360 + param_2 * 4) = pcVar4;
  *(uint *)(iVar1 + -0x31c + param_2 * 4) = param_3;
  return;
}


//// FUNCTION FUN_00b1f010 @ 00b1f010 ////

void FUN_00b1f010(int *param_1,int param_2,uint param_3,undefined *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1[1] + 0x30) - 0x14;
  iVar1 = param_1[0x6f];
  if ((int)uVar3 < (int)param_3) {
    param_3 = uVar3;
  }
  if (param_3 == 0) {
    if ((param_2 == 0xe0) || (param_4 = FUN_00b1e760, param_2 == 0xee)) {
      param_4 = FUN_00b1e3b0;
    }
  }
  else {
    if (param_2 == 0xe0) {
      if (param_3 < 0xe) {
        *(undefined **)(iVar1 + 0x20) = param_4;
        *(undefined4 *)(iVar1 + 100) = 0xe;
        return;
      }
      goto LAB_00b1f0bf;
    }
    if (param_2 == 0xee) {
      if (param_3 < 0xc) {
        *(undefined **)(iVar1 + 0x58) = param_4;
        *(undefined4 *)(iVar1 + 0x9c) = 0xc;
        return;
      }
      goto LAB_00b1f0bf;
    }
  }
  if (param_2 == 0xfe) {
    *(undefined **)(iVar1 + 0x1c) = param_4;
    *(uint *)(iVar1 + 0x60) = param_3;
    return;
  }
  if ((param_2 < 0xe0) || (0xef < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x44;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
    return;
  }
LAB_00b1f0bf:
  *(undefined **)(iVar1 + -0x360 + param_2 * 4) = param_4;
  *(uint *)(iVar1 + -0x31c + param_2 * 4) = param_3;
  return;
}


//// FUNCTION FUN_00b1f0f0 @ 00b1f0f0 ////

void FUN_00b1f0f0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_2 == 0xfe) {
    *(undefined4 *)(param_1[0x6f] + 0x1c) = param_3;
    return;
  }
  if ((0xdf < param_2) && (param_2 < 0xf0)) {
    *(undefined4 *)(param_1[0x6f] + -0x360 + param_2 * 4) = param_3;
    return;
  }
  puVar1 = (undefined4 *)*param_1;
  puVar1[5] = 0x44;
  puVar1[6] = param_2;
  (*(code *)*puVar1)(param_1);
  return;
}


//// FUNCTION FUN_00b1f150 @ 00b1f150 ////

void FUN_00b1f150(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_00b29ce0((int)param_1);
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


//// FUNCTION FUN_00b1f170 @ 00b1f170 ////

void FUN_00b1f170(int *param_1)

{
  undefined1 local_cc [200];
  
  (**(code **)(*param_1 + 0xc))(param_1,local_cc);
  return;
}


//// FUNCTION FUN_00b1f1a0 @ 00b1f1a0 ////

void FUN_00b1f1a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_2 < 0) {
    if ((*(int *)(iVar1 + 0x6c) == 0) || (2 < *(int *)(iVar1 + 0x68))) {
      (**(code **)(iVar1 + 8))(param_1);
    }
    *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
    return;
  }
  if (param_2 <= *(int *)(iVar1 + 0x68)) {
    (**(code **)(iVar1 + 8))(param_1);
  }
  return;
}


//// FUNCTION FUN_00b1f1e0 @ 00b1f1e0 ////

void FUN_00b1f1e0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *_Format;
  char *pcVar4;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0x14);
  if ((iVar3 < 1) || (*(int *)(iVar2 + 0x74) < iVar3)) {
    if ((*(int *)(iVar2 + 0x78) != 0) &&
       ((*(int *)(iVar2 + 0x7c) <= iVar3 && (iVar3 <= *(int *)(iVar2 + 0x80))))) {
      _Format = *(char **)(*(int *)(iVar2 + 0x78) + (iVar3 - *(int *)(iVar2 + 0x7c)) * 4);
      goto LAB_00b1f21d;
    }
  }
  else {
    _Format = *(char **)(*(int *)(iVar2 + 0x70) + iVar3 * 4);
LAB_00b1f21d:
    if (_Format != (char *)0x0) goto LAB_00b1f229;
  }
  *(int *)(iVar2 + 0x18) = iVar3;
  _Format = (char *)**(undefined4 **)(iVar2 + 0x70);
LAB_00b1f229:
  cVar1 = *_Format;
  pcVar4 = _Format;
  do {
    if (cVar1 == '\0') {
LAB_00b1f23d:
      _sprintf(param_2,_Format,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
               *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
               *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),
               *(undefined4 *)(iVar2 + 0x30),*(undefined4 *)(iVar2 + 0x34));
      return;
    }
    pcVar4 = pcVar4 + 1;
    if (cVar1 == '%') {
      if (*pcVar4 == 's') {
        _sprintf(param_2,_Format,iVar2 + 0x18);
        return;
      }
      goto LAB_00b1f23d;
    }
    cVar1 = *pcVar4;
  } while( true );
}


//// FUNCTION FUN_00b1f290 @ 00b1f290 ////

void FUN_00b1f290(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00b1f2b0 @ 00b1f2b0 ////

void FUN_00b1f2b0(undefined4 *param_1)

{
  *param_1 = FUN_00b1f150;
  param_1[1] = FUN_00b1f1a0;
  param_1[2] = FUN_00b1f170;
  param_1[3] = FUN_00b1f1e0;
  param_1[4] = FUN_00b1f290;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1c] = &PTR_s_Bogus_message_code__d_00d8c060;
  param_1[0x1d] = 0x7b;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


//// FUNCTION FUN_00b1f310 @ 00b1f310 ////

void FUN_00b1f310(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0xc;
    puVar1[6] = 0x3e;
    puVar1[7] = param_2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_3 != 0x180) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x15;
    puVar1[6] = 0x180;
    puVar1[7] = param_3;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = param_1[3];
  iVar3 = *param_1;
  piVar5 = param_1;
  for (iVar4 = 0x60; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  *param_1 = iVar3;
  param_1[3] = iVar2;
  param_1[4] = 0;
  FUN_00b29be0(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff00000;
  param_1[0x5e] = 0;
  param_1[5] = 100;
  return;
}


//// FUNCTION FUN_00b1f3d0 @ 00b1f3d0 ////

void FUN_00b1f3d0(int param_1)

{
  FUN_00b29ce0(param_1);
  return;
}


//// FUNCTION FUN_00b1f3e0 @ 00b1f3e0 ////

void FUN_00b1f3e0(int param_1)

{
  FUN_00b29ca0(param_1);
  return;
}


//// FUNCTION FUN_00b1f3f0 @ 00b1f3f0 ////

void FUN_00b1f3f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x80) = param_2;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x80) = param_2;
  }
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = 4;
  do {
    if (piVar1[-4] != 0) {
      *(undefined4 *)(piVar1[-4] + 0x114) = param_2;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x114) = param_2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00b1f460 @ 00b1f460 ////

void FUN_00b1f460(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1[5];
  if ((iVar2 == 0x65) || (iVar2 == 0x66)) {
    if ((uint)param_1[0x3a] < (uint)param_1[8]) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x43;
      (*(code *)*puVar1)(param_1);
    }
    (**(code **)(param_1[0x55] + 8))(param_1);
  }
  else if (iVar2 != 0x67) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  puVar1 = (undefined4 *)param_1[0x55];
  iVar2 = puVar1[4];
  while (iVar2 == 0) {
    (*(code *)*puVar1)(param_1);
    uVar3 = param_1[0x3e];
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        puVar1 = (undefined4 *)param_1[2];
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = uVar4;
          puVar1[2] = uVar3;
          (*(code *)*puVar1)(param_1);
        }
        iVar2 = (**(code **)(param_1[0x58] + 4))(param_1,0);
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)*param_1;
          puVar1[5] = 0x18;
          (*(code *)*puVar1)(param_1);
        }
        uVar3 = param_1[0x3e];
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    (**(code **)(param_1[0x55] + 8))(param_1);
    puVar1 = (undefined4 *)param_1[0x55];
    iVar2 = puVar1[4];
  }
  (**(code **)(param_1[0x59] + 0xc))(param_1);
  (**(code **)(param_1[6] + 0x10))(param_1);
  FUN_00b29ca0((int)param_1);
  return;
}


//// FUNCTION FUN_00b1f540 @ 00b1f540 ////

void FUN_00b1f540(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar4 = param_1;
  if ((param_1[0x3a] != 0) ||
     (((iVar1 = param_1[5], iVar1 != 0x65 && (iVar1 != 0x66)) && (iVar1 != 0x67)))) {
    puVar2 = (undefined4 *)*param_1;
    iVar1 = param_1[5];
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  (**(code **)(param_1[0x59] + 0x14))(param_1,param_2,param_4);
  pcVar3 = *(code **)(param_1[0x59] + 0x18);
  if (param_4 != 0) {
    param_1 = (int *)param_4;
    do {
      (*pcVar3)(piVar4,*param_3);
      param_3 = param_3 + 1;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00b1f5c0 @ 00b1f5c0 ////

void FUN_00b1f5c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1[0x3a] != 0) ||
     (((iVar1 = param_1[5], iVar1 != 0x65 && (iVar1 != 0x66)) && (iVar1 != 0x67)))) {
    puVar2 = (undefined4 *)*param_1;
    iVar1 = param_1[5];
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  (**(code **)(param_1[0x59] + 0x14))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00b1f610 @ 00b1f610 ////

void FUN_00b1f610(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 0x164) + 0x18))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00b1f630 @ 00b1f630 ////

void FUN_00b1f630(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[5];
  if (iVar1 != 100) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[6] + 8))(param_1);
  FUN_00b2af50((int)param_1);
  (**(code **)(param_1[0x59] + 0x10))(param_1);
  (**(code **)(param_1[6] + 0x10))(param_1);
  return;
}


//// FUNCTION FUN_00b1f680 @ 00b1f680 ////

void FUN_00b1f680(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[5];
  if (iVar1 != 100) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  if (param_2 != 0) {
    FUN_00b1f3f0((int)param_1,0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[6] + 8))(param_1);
  FUN_00b2afb0(param_1);
  (**(code **)param_1[0x55])(param_1);
  param_1[0x3a] = 0;
  param_1[5] = (param_1[0x2c] != 0) + 0x65;
  return;
}


//// FUNCTION FUN_00b1f6f0 @ 00b1f6f0 ////

void FUN_00b1f6f0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = param_1;
  iVar1 = param_1[5];
  if (iVar1 != 0x65) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  if ((uint)piVar3[8] <= (uint)piVar3[0x3a]) {
    iVar1 = *piVar3;
    *(undefined4 *)(iVar1 + 0x14) = 0x7b;
    (**(code **)(iVar1 + 4))(piVar3,0xffffffff);
  }
  puVar2 = (undefined4 *)piVar3[2];
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = piVar3[8];
    puVar2[1] = piVar3[0x3a];
    puVar2[2] = iVar1;
    (*(code *)*puVar2)(piVar3);
  }
  if (*(int *)(piVar3[0x55] + 0xc) != 0) {
    (**(code **)(piVar3[0x55] + 4))(piVar3);
  }
  uVar4 = param_3;
  if ((uint)(piVar3[8] - piVar3[0x3a]) < param_3) {
    uVar4 = piVar3[8] - piVar3[0x3a];
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar3[0x56] + 4))(piVar3,param_2,&param_1,uVar4);
  piVar3[0x3a] = piVar3[0x3a] + (int)param_1;
  return;
}


//// FUNCTION FUN_00b1f7a0 @ 00b1f7a0 ////

uint FUN_00b1f7a0(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[5];
  if (iVar2 != 0x66) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  uVar3 = param_1[8];
  if (uVar3 <= (uint)param_1[0x3a]) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x7b;
    (**(code **)(iVar2 + 4))(param_1,0xffffffff);
    return 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1[0x3a];
    puVar1[2] = uVar3;
    (*(code *)*puVar1)(param_1);
  }
  if (*(int *)(param_1[0x55] + 0xc) != 0) {
    (**(code **)(param_1[0x55] + 4))(param_1);
  }
  uVar3 = param_1[0x3d] * 8;
  if (param_3 < uVar3) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x17;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = (**(code **)(param_1[0x58] + 4))(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x3a] = param_1[0x3a] + uVar3;
  return uVar3;
}


//// FUNCTION FUN_00b1f850 @ 00b1f850 ////

void FUN_00b1f850(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  
  iVar3 = param_1[5];
  if (iVar3 != 100) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar3;
    (*(code *)*puVar1)(param_1);
  }
  if ((param_2 < 0) || (3 < param_2)) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x1f;
    puVar1[6] = param_2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_1[param_2 + 0x12] == 0) {
    iVar3 = FUN_00b29d10((int)param_1);
    param_1[param_2 + 0x12] = iVar3;
  }
  iVar3 = param_1[param_2 + 0x12];
  puVar6 = (undefined2 *)(iVar3 + 4);
  piVar5 = (int *)(param_3 + 8);
  param_1 = (int *)&DAT_00000010;
  do {
    iVar4 = (piVar5[-2] * param_4 + 0x32) / 100;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if ((param_5 != 0) && (0xff < iVar4)) {
      iVar4 = 0xff;
    }
    iVar2 = piVar5[-1];
    puVar6[-2] = (short)iVar4;
    iVar4 = (iVar2 * param_4 + 0x32) / 100;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if ((param_5 != 0) && (0xff < iVar4)) {
      iVar4 = 0xff;
    }
    iVar2 = *piVar5;
    puVar6[-1] = (short)iVar4;
    iVar4 = (iVar2 * param_4 + 0x32) / 100;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if ((param_5 != 0) && (0xff < iVar4)) {
      iVar4 = 0xff;
    }
    iVar2 = piVar5[1];
    *puVar6 = (short)iVar4;
    iVar4 = (iVar2 * param_4 + 0x32) / 100;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if ((param_5 != 0) && (0xff < iVar4)) {
      iVar4 = 0xff;
    }
    puVar6[1] = (short)iVar4;
    piVar5 = piVar5 + 4;
    puVar6 = puVar6 + 4;
    param_1 = (int *)((int)param_1 + -1);
  } while (param_1 != (int *)0x0);
  *(undefined4 *)(iVar3 + 0x80) = 0;
  return;
}


//// FUNCTION FUN_00b1fa10 @ 00b1fa10 ////

void FUN_00b1fa10(int *param_1,int param_2,int param_3)

{
  FUN_00b1f850(param_1,0,0xd8c358,param_2,param_3);
  FUN_00b1f850(param_1,1,0xd8c258,param_2,param_3);
  return;
}


//// FUNCTION FUN_00b1fa50 @ 00b1fa50 ////

int FUN_00b1fa50(int param_1)

{
  if (param_1 < 1) {
    return 5000;
  }
  if (param_1 < 0x65) {
    if (param_1 < 0x32) {
      return (int)(5000 / (longlong)param_1);
    }
  }
  else {
    param_1 = 100;
  }
  return (100 - param_1) * 2;
}


//// FUNCTION FUN_00b1faa0 @ 00b1faa0 ////

void FUN_00b1faa0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = 5000;
  }
  else {
    if (param_2 < 0x65) {
      if (param_2 < 0x32) {
        iVar1 = (int)(5000 / (longlong)param_2);
        goto LAB_00b1fad3;
      }
    }
    else {
      param_2 = 100;
    }
    iVar1 = (100 - param_2) * 2;
  }
LAB_00b1fad3:
  FUN_00b1f850(param_1,0,0xd8c358,iVar1,param_3);
  FUN_00b1f850(param_1,1,0xd8c258,iVar1,param_3);
  return;
}


//// FUNCTION FUN_00b1fb10 @ 00b1fb10 ////

void FUN_00b1fb10(int *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 *in_EAX;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int *unaff_EBX;
  uint uVar9;
  undefined4 *puVar10;
  
  if (*unaff_EBX == 0) {
    iVar6 = FUN_00b29d40((int)param_1);
    *unaff_EBX = iVar6;
  }
  puVar10 = (undefined4 *)*unaff_EBX;
  *puVar10 = *in_EAX;
  puVar10[1] = in_EAX[1];
  puVar10[2] = in_EAX[2];
  uVar4 = *(undefined1 *)(in_EAX + 4);
  puVar10[3] = in_EAX[3];
  *(undefined1 *)(puVar10 + 4) = uVar4;
  uVar9 = 0;
  pbVar7 = (byte *)((int)in_EAX + 3);
  iVar6 = 4;
  do {
    pbVar1 = pbVar7 + -1;
    pbVar2 = pbVar7 + -2;
    pbVar3 = pbVar7 + 1;
    bVar5 = *pbVar7;
    pbVar7 = pbVar7 + 4;
    iVar6 = iVar6 + -1;
    uVar9 = bVar5 + uVar9 + (uint)*pbVar2 + (uint)*pbVar1 + (uint)*pbVar3;
  } while (iVar6 != 0);
  if (((int)uVar9 < 1) || (0x100 < (int)uVar9)) {
    puVar10 = (undefined4 *)*param_1;
    puVar10[5] = 8;
    (*(code *)*puVar10)(param_1);
  }
  iVar6 = *unaff_EBX;
  puVar10 = (undefined4 *)(iVar6 + 0x11);
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar10 = *param_2;
    param_2 = param_2 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(undefined4 *)(iVar6 + 0x114) = 0;
  return;
}


//// FUNCTION FUN_00b1fbc0 @ 00b1fbc0 ////

void FUN_00b1fbc0(void)

{
  int *unaff_ESI;
  
  FUN_00b1fb10(unaff_ESI,(undefined4 *)&DAT_00d8c600);
  FUN_00b1fb10(unaff_ESI,(undefined4 *)&DAT_00d8c548);
  FUN_00b1fb10(unaff_ESI,(undefined4 *)&DAT_00d8c528);
  FUN_00b1fb10(unaff_ESI,(undefined4 *)&DAT_00d8c470);
  return;
}


//// FUNCTION FUN_00b1fc20 @ 00b1fc20 ////

void FUN_00b1fc20(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[5];
  if (iVar1 != 100) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  param_1[0x10] = param_2;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 1;
  switch(param_2) {
  case 0:
    iVar1 = param_1[9];
    param_1[0xf] = iVar1;
    if ((iVar1 < 1) || (10 < iVar1)) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x1a;
      puVar2[6] = iVar1;
      puVar2[7] = 10;
      (*(code *)*puVar2)(param_1);
    }
    iVar1 = param_1[0xf];
    iVar3 = 0;
    if (0 < iVar1) {
      piVar4 = (int *)param_1[0x11];
      do {
        *piVar4 = iVar3;
        piVar4[2] = 1;
        piVar4[3] = 1;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x15;
      } while (iVar3 < iVar1);
      return;
    }
    break;
  case 1:
    param_1[0x34] = 1;
    param_1[0xf] = 1;
    puVar2 = (undefined4 *)param_1[0x11];
    *puVar2 = 1;
    puVar2[2] = 1;
    puVar2[3] = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    return;
  case 2:
    param_1[0x37] = 1;
    param_1[0xf] = 3;
    puVar2 = (undefined4 *)param_1[0x11];
    puVar2[2] = 1;
    puVar2[3] = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = 0x52;
    puVar2[0x17] = 1;
    puVar2[0x18] = 1;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x15] = 0x47;
    puVar2[0x2c] = 1;
    puVar2[0x2d] = 1;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    puVar2[0x2a] = 0x42;
    return;
  case 3:
    param_1[0x34] = 1;
    param_1[0xf] = 3;
    puVar2 = (undefined4 *)param_1[0x11];
    *puVar2 = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[2] = 2;
    puVar2[3] = 2;
    puVar2[0x17] = 1;
    puVar2[0x18] = 1;
    puVar2[0x19] = 1;
    puVar2[0x1a] = 1;
    puVar2[0x1b] = 1;
    puVar2[0x15] = 2;
    puVar2[0x2c] = 1;
    puVar2[0x2d] = 1;
    puVar2[0x2e] = 1;
    puVar2[0x2f] = 1;
    puVar2[0x30] = 1;
    puVar2[0x2a] = 3;
    return;
  case 4:
    param_1[0x37] = 1;
    param_1[0xf] = 4;
    puVar2 = (undefined4 *)param_1[0x11];
    puVar2[2] = 1;
    puVar2[3] = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = 0x43;
    puVar2[0x17] = 1;
    puVar2[0x18] = 1;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x15] = 0x4d;
    puVar2[0x2c] = 1;
    puVar2[0x2d] = 1;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    puVar2[0x2a] = 0x59;
    puVar2[0x41] = 1;
    puVar2[0x42] = 1;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x3f] = 0x4b;
    return;
  case 5:
    puVar2 = (undefined4 *)param_1[0x11];
    *puVar2 = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[2] = 2;
    puVar2[3] = 2;
    puVar2[0x17] = 1;
    puVar2[0x18] = 1;
    puVar2[0x19] = 1;
    puVar2[0x1a] = 1;
    puVar2[0x1b] = 1;
    puVar2[0x15] = 2;
    puVar2[0x2c] = 1;
    puVar2[0x2d] = 1;
    puVar2[0x2e] = 1;
    puVar2[0x2f] = 1;
    puVar2[0x30] = 1;
    puVar2[0x2a] = 3;
    param_1[0x37] = 1;
    param_1[0xf] = 4;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x3f] = 4;
    puVar2[0x41] = 2;
    puVar2[0x42] = 2;
    return;
  default:
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 10;
    (*(code *)*puVar2)(param_1);
  }
  return;
}


//// FUNCTION FUN_00b1ff10 @ 00b1ff10 ////

undefined4 * __fastcall
FUN_00b1ff10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = param_1;
  in_EAX[5] = param_2;
  in_EAX[6] = param_3;
  *in_EAX = 1;
  in_EAX[7] = param_4;
  in_EAX[8] = param_5;
  return in_EAX + 9;
}


//// FUNCTION FUN_00b1ff40 @ 00b1ff40 ////

void __fastcall FUN_00b1ff40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      in_EAX[5] = param_3;
      in_EAX[1] = iVar1;
      *in_EAX = 1;
      in_EAX[6] = param_4;
      in_EAX[7] = unaff_EDI;
      in_EAX[8] = unaff_ESI;
      in_EAX = in_EAX + 9;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}


//// FUNCTION FUN_00b1ff80 @ 00b1ff80 ////

int * __fastcall FUN_00b1ff80(int param_1,int param_2,int param_3)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  
  if (4 < param_2) {
    piVar1 = (int *)FUN_00b1ff40(param_1,param_2,0,0);
    return piVar1;
  }
  *in_EAX = param_2;
  if (0 < param_2) {
    iVar2 = 0;
    piVar1 = in_EAX;
    do {
      piVar1 = piVar1 + 1;
      *piVar1 = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  in_EAX[7] = param_3;
  in_EAX[8] = param_1;
  in_EAX[6] = 0;
  in_EAX[5] = 0;
  return in_EAX + 9;
}


//// FUNCTION FUN_00b1ffe0 @ 00b1ffe0 ////

void FUN_00b1ffe0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = param_1[5];
  iVar1 = param_1[0xf];
  if (iVar5 != 100) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x14;
    puVar2[6] = iVar5;
    (*(code *)*puVar2)(param_1);
  }
  if (iVar1 == 3) {
    if (param_1[0x10] == 3) {
      iVar5 = 10;
      goto LAB_00b20030;
    }
  }
  else if (4 < iVar1) {
    iVar5 = iVar1 * 6;
    goto LAB_00b20030;
  }
  iVar5 = iVar1 * 4 + 2;
LAB_00b20030:
  if ((param_1[0x5e] == 0) || (param_1[0x5f] < iVar5)) {
    iVar3 = iVar5;
    if (iVar5 < 0xb) {
      iVar3 = 10;
    }
    param_1[0x5f] = iVar3;
    iVar3 = (**(code **)param_1[1])(param_1,0,iVar3 * 0x24);
    param_1[0x5e] = iVar3;
  }
  param_1[0x2b] = param_1[0x5e];
  param_1[0x2a] = iVar5;
  if ((iVar1 == 3) && (param_1[0x10] == 3)) {
    piVar4 = FUN_00b1ff80(1,3,0);
    *piVar4 = 1;
    piVar4[1] = 0;
    piVar4[5] = 1;
    piVar4[6] = 5;
    piVar4[7] = 0;
    piVar4[8] = 2;
    piVar4[10] = 2;
    piVar4[9] = 1;
    piVar4[0xe] = 1;
    piVar4[0x10] = 0;
    piVar4[0x11] = 1;
    piVar4[0xf] = 0x3f;
    piVar4[0x12] = 1;
    piVar4[0x13] = 1;
    piVar4[0x17] = 1;
    piVar4[0x18] = 0x3f;
    piVar4[0x19] = 0;
    piVar4[0x1a] = 1;
    piVar4[0x23] = 2;
    piVar4[0x1b] = 1;
    piVar4[0x1c] = 0;
    piVar4[0x20] = 6;
    piVar4[0x21] = 0x3f;
    piVar4[0x22] = 0;
    piVar4[0x2b] = 2;
    piVar4[0x24] = 1;
    piVar4[0x25] = 0;
    piVar4[0x29] = 1;
    piVar4[0x2a] = 0x3f;
    piVar4[0x2c] = 1;
    piVar4 = FUN_00b1ff80(0,extraout_EDX,1);
    *piVar4 = 1;
    piVar4[5] = 1;
    piVar4[6] = 0x3f;
    piVar4[7] = 1;
    piVar4[8] = 0;
    piVar4[1] = 2;
    piVar4[9] = 1;
    piVar4[10] = 1;
    piVar4[0xe] = 1;
    piVar4[0xf] = 0x3f;
    piVar4[0x10] = 1;
    piVar4[0x11] = 0;
    piVar4[0x13] = 0;
    piVar4[0x1a] = 0;
    piVar4[0x18] = 0x3f;
    piVar4[0x12] = 1;
    piVar4[0x17] = 1;
    piVar4[0x19] = 1;
    return;
  }
  FUN_00b1ff80(1,iVar1,0);
  FUN_00b1ff40(extraout_ECX,extraout_EDX_00,1,5);
  FUN_00b1ff40(extraout_ECX_00,extraout_EDX_01,6,0x3f);
  FUN_00b1ff40(extraout_ECX_01,extraout_EDX_02,1,0x3f);
  uVar7 = 0x3f;
  uVar6 = 1;
  FUN_00b1ff80(0,extraout_EDX_03,1);
  FUN_00b1ff40(extraout_ECX_02,extraout_EDX_04,uVar6,uVar7);
  return;
}


//// FUNCTION FUN_00b201d0 @ 00b201d0 ////

void FUN_00b201d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1[10]) {
  case 0:
    FUN_00b1fc20(param_1,0);
    return;
  case 1:
  case 8:
    iVar1 = param_1[5];
    if (iVar1 != 100) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x14;
      puVar2[6] = iVar1;
      (*(code *)*puVar2)(param_1);
    }
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    FUN_00b1fc20(param_1,3);
    return;
  case 4:
    FUN_00b1fc20(param_1,4);
    return;
  case 5:
    iVar1 = param_1[5];
    if (iVar1 != 100) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x14;
      puVar2[6] = iVar1;
      (*(code *)*puVar2)(param_1);
    }
    puVar2 = (undefined4 *)param_1[0x11];
    *puVar2 = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    param_1[0x10] = 5;
    param_1[0x34] = 0;
    param_1[0x38] = 1;
    param_1[0x39] = 1;
    param_1[0x37] = 1;
    param_1[0xf] = 4;
    puVar2[2] = 2;
    puVar2[3] = 2;
    puVar2[0x15] = 2;
    puVar2[0x17] = 1;
    puVar2[0x18] = 1;
    puVar2[0x19] = 1;
    puVar2[0x1a] = 1;
    puVar2[0x1b] = 1;
    puVar2[0x2a] = 3;
    puVar2[0x2c] = 1;
    puVar2[0x2d] = 1;
    puVar2[0x2e] = 1;
    puVar2[0x2f] = 1;
    puVar2[0x30] = 1;
    puVar2[0x41] = 2;
    puVar2[0x42] = 2;
    puVar2[0x3f] = 4;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    return;
  default:
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 9;
    (*(code *)*puVar2)(param_1);
    return;
  }
  param_1[0x10] = 1;
  param_1[0x37] = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 1;
  param_1[0x34] = 1;
  param_1[0xf] = 1;
  puVar2 = (undefined4 *)param_1[0x11];
  *puVar2 = 1;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return;
}


//// FUNCTION FUN_00b20370 @ 00b20370 ////

void FUN_00b20370(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_1[5];
  if (iVar2 != 100) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_1[0x11] == 0) {
    iVar2 = (**(code **)param_1[1])(param_1,0,0x348);
    param_1[0x11] = iVar2;
  }
  param_1[0xe] = 8;
  FUN_00b1f850(param_1,0,0xd8c358,0x32,1);
  FUN_00b1f850(param_1,1,0xd8c258,0x32,1);
  FUN_00b1fbc0();
  piVar3 = param_1 + 0x22;
  iVar2 = 0x10;
  do {
    *(undefined1 *)(piVar3 + -4) = 0;
    *(undefined1 *)piVar3 = 1;
    *(undefined1 *)(piVar3 + 4) = 5;
    piVar3 = (int *)((int)piVar3 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (8 < param_1[0xe]) {
    param_1[0x2e] = 1;
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)((int)param_1 + 0xd5) = 1;
  *(undefined1 *)((int)param_1 + 0xd6) = 0;
  *(undefined2 *)(param_1 + 0x36) = 1;
  *(undefined2 *)((int)param_1 + 0xda) = 1;
  FUN_00b201d0(param_1);
  return;
}


//// FUNCTION FUN_00b2046b @ 00b2046b ////

void __thiscall FUN_00b2046b(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar3 = 0;
  iVar6 = 0;
  do {
    bVar2 = *(byte *)(param_1 + 0x10c + iVar6);
    uVar5 = (uint)bVar2;
    iVar6 = iVar6 + 1;
    if (((uVar5 < 0x29) || (0x7a < uVar5)) || ((0x5a < uVar5 && (uVar5 < 0x61)))) {
      *(undefined1 *)(iVar3 + (int)this) = 0x5b;
      *(undefined *)(iVar3 + 1 + (int)this) = (&DAT_00d8c60c)[(int)uVar5 >> 4];
      *(undefined *)(iVar3 + 2 + (int)this) = (&DAT_00d8c60c)[uVar5 & 0xf];
      iVar4 = iVar3 + 3;
      *(undefined1 *)(iVar4 + (int)this) = 0x5d;
    }
    else {
      *(byte *)(iVar3 + (int)this) = bVar2;
      iVar4 = iVar3;
    }
    iVar3 = iVar4 + 1;
  } while (iVar6 < 4);
  if (param_2 == (undefined4 *)0x0) {
    *(undefined1 *)(iVar3 + (int)this) = 0;
  }
  else {
    *(undefined1 *)(iVar3 + (int)this) = 0x3a;
    *(undefined1 *)(iVar4 + 2 + (int)this) = 0x20;
    puVar1 = (undefined4 *)(iVar4 + 3 + (int)this);
    puVar7 = puVar1;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)((int)puVar1 + 0x3f) = 0;
  }
  return;
}


//// FUNCTION FUN_00b204f7 @ 00b204f7 ////

void FUN_00b204f7(int *param_1)

{
                    /* WARNING: Subroutine does not return */
  _longjmp(param_1,1);
}


//// FUNCTION FUN_00b20508 @ 00b20508 ////

void FUN_00b20508(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}


//// FUNCTION FUN_00b20526 @ 00b20526 ////

undefined4 FUN_00b20526(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


//// FUNCTION FUN_00b20535 @ 00b20535 ////

void FUN_00b20535(int *param_1,undefined4 param_2)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  _longjmp(param_1,1);
}


//// FUNCTION FUN_00b20556 @ 00b20556 ////

void FUN_00b20556(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_00b20571 @ 00b20571 ////

void FUN_00b20571(int *param_1,undefined4 *param_2)

{
  undefined1 local_54 [80];
  
  FUN_00b2046b(local_54,(int)param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(param_1,local_54);
}


//// FUNCTION FUN_00b20594 @ 00b20594 ////

void FUN_00b20594(int param_1,undefined4 *param_2)

{
  undefined1 local_54 [80];
  
  FUN_00b2046b(local_54,param_1,param_2);
  FUN_00b20556(param_1,local_54);
  return;
}


//// FUNCTION FUN_00b205c2 @ 00b205c2 ////

void FUN_00b205c2(int *param_1,int param_2)

{
  undefined1 uVar1;
  
  if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Too many bytes for PNG signature.");
  }
  uVar1 = 0;
  if (-1 < param_2) {
    uVar1 = (undefined1)param_2;
  }
  *(undefined1 *)(param_1 + 0x47) = uVar1;
  return;
}


//// FUNCTION FUN_00b205f1 @ 00b205f1 ////

int FUN_00b205f1(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  uVar2 = 8;
  if (((param_3 < 9) && (uVar2 = param_3, param_3 == 0)) || (7 < param_2)) {
    iVar1 = 0;
  }
  else {
    if (8 < param_2 + uVar2) {
      uVar2 = 8 - param_2;
    }
    bVar5 = false;
    iVar1 = 0;
    bVar6 = true;
    pbVar3 = (byte *)(param_1 + param_2);
    pbVar4 = &DAT_00d8c61c + param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar5 = *pbVar3 < *pbVar4;
      bVar6 = *pbVar3 == *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar1 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b2063f @ 00b2063f ////

bool FUN_00b2063f(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00b205f1(param_1,0,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


//// FUNCTION FUN_00b2065a @ 00b2065a ////

undefined4 * FUN_00b2065a(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = param_2 * param_3;
  puVar1 = FUN_00b2b0b9(param_1,uVar5);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar6 = puVar1;
    if (0x8000 < uVar5) {
      puVar2 = puVar1;
      for (iVar3 = 0x2000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      uVar5 = uVar5 - 0x8000;
      puVar6 = puVar1 + 0x2000;
    }
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; puVar2 = puVar1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return puVar2;
}


//// FUNCTION FUN_00b206b0 @ 00b206b0 ////

void FUN_00b206b0(int param_1,void *param_2)

{
  FUN_00b2b0f2(param_1,param_2);
  return;
}


//// FUNCTION FUN_00b206bb @ 00b206bb ////

void FUN_00b206bb(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00b2b174(0,(byte *)0x0,0);
  *(uint *)(param_1 + 0x100) = uVar1;
  return;
}


//// FUNCTION FUN_00b206d7 @ 00b206d7 ////

void FUN_00b206d7(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x10c) & 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x5d) & 8) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x5c) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_00b2b174(*(uint *)(param_1 + 0x100),param_2,param_3);
  *(uint *)(param_1 + 0x100) = uVar1;
  return;
}


//// FUNCTION FUN_00b20719 @ 00b20719 ////

void FUN_00b20719(undefined4 *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00b2072e @ 00b2072e ////

void FUN_00b2072e(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  return;
}


//// FUNCTION FUN_00b20743 @ 00b20743 ////

undefined4 FUN_00b20743(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}


//// FUNCTION FUN_00b2075d @ 00b2075d ////

undefined4 * FUN_00b2075d(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00b2b059(2);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return puVar1;
}


//// FUNCTION FUN_00b2078a @ 00b2078a ////

void FUN_00b2078a(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (undefined4 *)0x0) &&
     (puVar1 = (undefined4 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    puVar3 = puVar1;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_00b2b0a1(puVar1);
    *param_2 = 0;
  }
  return;
}


//// FUNCTION FUN_00b207b6 @ 00b207b6 ////

void FUN_00b207b6(int *param_1,int *param_2)

{
  FUN_00b2b33f(param_1);
  FUN_00b2b7a0(param_1,*param_2,param_2[1],(uint)*(byte *)(param_2 + 6),
               (uint)*(byte *)((int)param_2 + 0x19),(uint)*(byte *)((int)param_2 + 0x1a),
               (uint)*(byte *)((int)param_2 + 0x1b),(uint)*(byte *)(param_2 + 7));
  if ((*(byte *)(param_2 + 2) & 8) == 0) {
    if (*(char *)((int)param_2 + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,"Valid palette required for paletted images\n");
    }
  }
  else {
    FUN_00b2b365(param_1,param_2[4],(uint)*(ushort *)(param_2 + 5));
  }
  return;
}


//// FUNCTION FUN_00b2081a @ 00b2081a ////

void FUN_00b2081a(int *param_1)

{
  if ((*(byte *)(param_1 + 0x16) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"No IDATs written into file");
  }
  param_1[0x16] = param_1[0x16] | 8;
  FUN_00b2ba65(param_1);
  return;
}


//// FUNCTION FUN_00b20843 @ 00b20843 ////

void FUN_00b20843(byte *param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(int *)(param_1 + 0xd4) == 0) && (param_1[0x114] == 0)) {
    if ((param_1[0x61] & 0x80) != 0) {
      FUN_00b20556((int)param_1,"PNG_WRITE_FILLER_SUPPORTED is not defined.");
    }
    if ((param_1[0x60] & 4) != 0) {
      FUN_00b20556((int)param_1,"PNG_WRITE_PACK_SUPPORTED is not defined.");
    }
    if ((param_1[0x60] & 8) != 0) {
      FUN_00b20556((int)param_1,"PNG_WRITE_SHIFT_SUPPORTED is not defined.");
    }
    if ((param_1[0x60] & 1) != 0) {
      FUN_00b20556((int)param_1,"PNG_WRITE_BGR_SUPPORTED is not defined.");
    }
    if ((param_1[0x60] & 0x10) != 0) {
      FUN_00b20556((int)param_1,"PNG_WRITE_SWAP_SUPPORTED is not defined.");
    }
    FUN_00b2b3f7((int *)param_1);
  }
  if ((param_1[0x113] == 0) || ((param_1[0x60] & 2) == 0)) {
LAB_00b2095b:
    param_1[0xf8] = param_1[0x116];
    param_1[0xf9] = param_1[0x118];
    bVar2 = param_1[0x118] * param_1[0x11b];
    param_1[0xfb] = bVar2;
    uVar3 = (uint)bVar2 * *(uint *)(param_1 + 0xc4) + 7 >> 3;
    *(uint *)(param_1 + 0xf4) = uVar3;
    puVar1 = (uint *)(param_1 + 0xf0);
    *puVar1 = *(uint *)(param_1 + 0xc4);
    param_1[0xfa] = param_1[0x11b];
    FUN_00b2b110(param_1,(undefined4 *)(*(int *)(param_1 + 0xdc) + 1),param_2,uVar3);
    if ((((param_1[0x113] == 0) || (5 < param_1[0x114])) || ((param_1[0x60] & 2) == 0)) ||
       (FUN_00b2b539(puVar1,(undefined4 *)(*(int *)(param_1 + 0xdc) + 1),
                     (undefined4 *)(uint)param_1[0x114]), *puVar1 != 0)) {
      if (*(int *)(param_1 + 0x60) != 0) {
        FUN_00b2c738();
      }
      FUN_00b2bcb5(param_1,(byte *)puVar1);
      if (*(code **)(param_1 + 0x170) != (code *)0x0) {
        (**(code **)(param_1 + 0x170))(param_1,*(undefined4 *)(param_1 + 0xd4),param_1[0x114]);
      }
    }
    else {
      FUN_00b2ba86((int *)param_1);
    }
  }
  else {
    bVar2 = param_1[0x114];
    if (bVar2 == 0) {
      bVar4 = (param_1[0xd4] & 7) == 0;
LAB_00b20959:
      if (bVar4) goto LAB_00b2095b;
    }
    else if (bVar2 == 1) {
      if ((param_1[0xd4] & 7) == 0) {
        bVar4 = *(uint *)(param_1 + 0xb8) < 5;
LAB_00b2094e:
        if (!bVar4) goto LAB_00b2095b;
      }
    }
    else {
      if (bVar2 == 2) {
        bVar4 = ((byte)*(undefined4 *)(param_1 + 0xd4) & 7) == 4;
        goto LAB_00b20959;
      }
      if (bVar2 == 3) {
        if ((param_1[0xd4] & 3) == 0) {
          bVar4 = *(uint *)(param_1 + 0xb8) < 3;
          goto LAB_00b2094e;
        }
      }
      else {
        if (bVar2 == 4) {
          bVar4 = ((byte)*(undefined4 *)(param_1 + 0xd4) & 3) == 2;
          goto LAB_00b20959;
        }
        if (bVar2 == 5) {
          if ((param_1[0xd4] & 1) == 0) {
            bVar4 = *(uint *)(param_1 + 0xb8) < 2;
            goto LAB_00b2094e;
          }
        }
        else if ((bVar2 != 6) || ((param_1[0xd4] & 1) != 0)) goto LAB_00b2095b;
      }
    }
    FUN_00b2ba86((int *)param_1);
  }
  return;
}


//// FUNCTION FUN_00b20a29 @ 00b20a29 ////

void FUN_00b20a29(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x124) = param_2;
  return;
}


//// FUNCTION FUN_00b20a44 @ 00b20a44 ////

void FUN_00b20a44(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if ((uint)param_1[0x35] < (uint)param_1[0x30]) {
    while( true ) {
      uVar1 = zlib_deflate(param_1 + 0x19,2);
      if (uVar1 != 0) {
        pcVar2 = (char *)param_1[0x1f];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "zlib error";
        }
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(param_1,pcVar2);
      }
      if (param_1[0x1d] != 0) break;
      FUN_00b2ba42(param_1,(byte *)param_1[0x27],param_1[0x28]);
      param_1[0x1c] = param_1[0x27];
      param_1[0x1d] = param_1[0x28];
    }
    if (param_1[0x28] != param_1[0x1d]) {
      FUN_00b2ba42(param_1,(byte *)param_1[0x27],param_1[0x28] - param_1[0x1d]);
      param_1[0x1c] = param_1[0x27];
      param_1[0x1d] = param_1[0x28];
    }
    param_1[0x4a] = 0;
    FUN_00b21244((int)param_1);
  }
  return;
}


//// FUNCTION FUN_00b20aed @ 00b20aed ////

void FUN_00b20aed(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_44 [16];
  
  zlib_deflateEnd((int)(param_1 + 0x19));
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x27]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x37]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x36]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x38]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x39]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x3a]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x3b]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x61]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x62]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[99]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[100]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x65]);
  uVar1 = param_1[0x12];
  uVar2 = param_1[0x10];
  puVar5 = param_1;
  puVar6 = local_44;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = param_1[0x11];
  puVar5 = param_1;
  for (iVar4 = 0x67; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x11] = uVar3;
  puVar5 = local_44;
  puVar6 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x10] = uVar2;
  param_1[0x12] = uVar1;
  return;
}


//// FUNCTION FUN_00b20bd0 @ 00b20bd0 ////

void FUN_00b20bd0(int *param_1,int param_2,byte param_3)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Unknown custom filter method");
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)((int)param_1 + 0x115) = 0x10;
      goto LAB_00b20c2e;
    }
    if (param_3 == 2) {
      *(undefined1 *)((int)param_1 + 0x115) = 0x20;
      goto LAB_00b20c2e;
    }
    if (param_3 == 3) {
      *(undefined1 *)((int)param_1 + 0x115) = 0x40;
      goto LAB_00b20c2e;
    }
    if (param_3 == 4) {
      *(undefined1 *)((int)param_1 + 0x115) = 0x80;
      goto LAB_00b20c2e;
    }
    if ((param_3 < 5) || (7 < param_3)) {
      *(byte *)((int)param_1 + 0x115) = param_3;
      goto LAB_00b20c2e;
    }
    FUN_00b20556((int)param_1,"Unknown row filter for method 0");
  }
  *(undefined1 *)((int)param_1 + 0x115) = 8;
LAB_00b20c2e:
  if (param_1[0x37] != 0) {
    if (((*(byte *)((int)param_1 + 0x115) & 0x10) != 0) && (param_1[0x38] == 0)) {
      puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
      param_1[0x38] = (int)puVar1;
      *puVar1 = 1;
    }
    if (((*(byte *)((int)param_1 + 0x115) & 0x20) != 0) && (param_1[0x39] == 0)) {
      if (param_1[0x36] == 0) {
        FUN_00b20556((int)param_1,"Can\'t add Up filter after starting");
        *(byte *)((int)param_1 + 0x115) = *(byte *)((int)param_1 + 0x115) & 0xdf;
      }
      else {
        puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
        param_1[0x39] = (int)puVar1;
        *puVar1 = 2;
      }
    }
    if (((*(byte *)((int)param_1 + 0x115) & 0x40) != 0) && (param_1[0x3a] == 0)) {
      if (param_1[0x36] == 0) {
        FUN_00b20556((int)param_1,"Can\'t add Average filter after starting");
        *(byte *)((int)param_1 + 0x115) = *(byte *)((int)param_1 + 0x115) & 0xbf;
      }
      else {
        puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
        param_1[0x3a] = (int)puVar1;
        *puVar1 = 3;
      }
    }
    if (((*(byte *)((int)param_1 + 0x115) & 0x80) != 0) && (param_1[0x3b] == 0)) {
      if (param_1[0x36] == 0) {
        FUN_00b20556((int)param_1,"Can\'t add Paeth filter after starting");
        *(byte *)((int)param_1 + 0x115) = *(byte *)((int)param_1 + 0x115) & 0x7f;
      }
      else {
        puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
        param_1[0x3b] = (int)puVar1;
        *puVar1 = 4;
      }
    }
    if (*(char *)((int)param_1 + 0x115) == '\0') {
      *(undefined1 *)((int)param_1 + 0x115) = 8;
    }
  }
  return;
}


//// FUNCTION FUN_00b20d96 @ 00b20d96 ////

void FUN_00b20d96(int *param_1,int param_2,size_t param_3,int param_4,double *param_5)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  longlong lVar5;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    if ((((int)param_3 < 0) || (param_4 == 0)) || (param_2 == 1)) {
      param_3 = 0;
    }
    *(char *)((int)param_1 + 0x181) = (char)param_3;
    *(char *)(param_1 + 0x60) = (char)param_2;
    if (0 < (int)param_3) {
      if (param_1[0x61] == 0) {
        pvVar1 = FUN_00b2b0b9(param_1,param_3);
        param_1[0x61] = (int)pvVar1;
        iVar2 = 0;
        if (0 < (int)param_3) {
          do {
            *(undefined1 *)(iVar2 + param_1[0x61]) = 0xff;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)param_3);
        }
      }
      if (param_1[0x62] == 0) {
        pvVar1 = FUN_00b2b0b9(param_1,param_3 * 2);
        param_1[0x62] = (int)pvVar1;
        pvVar1 = FUN_00b2b0b9(param_1,param_3 * 2);
        param_1[99] = (int)pvVar1;
        iVar2 = 0;
        if (0 < (int)param_3) {
          do {
            *(undefined2 *)(param_1[0x62] + iVar2 * 2) = 0x100;
            *(undefined2 *)(param_1[99] + iVar2 * 2) = 0x100;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)param_3);
        }
      }
      iVar2 = 0;
      if (0 < (int)param_3) {
        do {
          if (0.0 <= *(double *)(param_4 + iVar2 * 8)) {
            lVar5 = __ftol();
            *(short *)(param_1[99] + iVar2 * 2) = (short)lVar5;
            lVar5 = __ftol();
            *(short *)(param_1[0x62] + iVar2 * 2) = (short)lVar5;
          }
          else {
            *(undefined2 *)(param_1[0x62] + iVar2 * 2) = 0x100;
            *(undefined2 *)(param_1[99] + iVar2 * 2) = 0x100;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_3);
      }
    }
    iVar2 = 0;
    pdVar4 = param_5;
    if (param_1[100] == 0) {
      pvVar1 = FUN_00b2b0b9(param_1,10);
      param_1[100] = (int)pvVar1;
      pvVar1 = FUN_00b2b0b9(param_1,10);
      param_1[0x65] = (int)pvVar1;
      iVar3 = 0;
      do {
        *(undefined2 *)(iVar3 + param_1[100]) = 8;
        *(undefined2 *)(iVar3 + param_1[0x65]) = 8;
        iVar3 = iVar3 + 2;
      } while (iVar3 < 10);
    }
    do {
      if ((param_5 == (double *)0x0) || (*pdVar4 < 0.0)) {
        *(undefined2 *)(iVar2 + param_1[100]) = 8;
        *(undefined2 *)(iVar2 + param_1[0x65]) = 8;
      }
      else if (1.0 <= *pdVar4) {
        lVar5 = __ftol();
        *(short *)(iVar2 + param_1[0x65]) = (short)lVar5;
        lVar5 = __ftol();
        *(short *)(iVar2 + param_1[100]) = (short)lVar5;
      }
      iVar2 = iVar2 + 2;
      pdVar4 = pdVar4 + 1;
    } while (iVar2 < 10);
  }
  else {
    FUN_00b20556((int)param_1,"Unknown filter heuristic method");
  }
  return;
}


//// FUNCTION FUN_00b20fa7 @ 00b20fa7 ////

void FUN_00b20fa7(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 2;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}


//// FUNCTION FUN_00b20fc0 @ 00b20fc0 ////

void FUN_00b20fc0(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 4;
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}


//// FUNCTION FUN_00b20fd9 @ 00b20fd9 ////

void FUN_00b20fd9(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1;
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}


//// FUNCTION FUN_00b20ff2 @ 00b20ff2 ////

void FUN_00b20ff2(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_00b2101b;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  FUN_00b20556(param_1,pcVar1);
LAB_00b2101b:
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 8;
  *(int *)(param_1 + 0xac) = param_2;
  return;
}


//// FUNCTION FUN_00b2102b @ 00b2102b ////

void FUN_00b2102b(int param_1,int param_2)

{
  if (param_2 != 8) {
    FUN_00b20556(param_1,"Only compression method 8 is supported by PNG");
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x10;
  *(int *)(param_1 + 0xa8) = param_2;
  return;
}


//// FUNCTION FUN_00b21058 @ 00b21058 ////

void FUN_00b21058(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x170) = param_2;
  return;
}


//// FUNCTION FUN_00b2106d @ 00b2106d ////

int * FUN_00b2106d(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  
  piVar1 = FUN_00b2b059(1);
  if (piVar1 != (int *)0x0) {
    iVar2 = __setjmp3(piVar1,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      FUN_00b20508((int)piVar1,param_2,param_3,param_4);
      if ((param_1 != (char *)0x0) && (*param_1 == '1')) {
        piVar1[0x28] = 0x2000;
        pvVar3 = FUN_00b2b0b9(piVar1,0x2000);
        piVar1[0x27] = (int)pvVar3;
        FUN_00b2125e((int)piVar1,0,0,0);
        FUN_00b20d96(piVar1,0,1,0,(double *)0x0);
        return piVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(piVar1,"Incompatible libpng version in application and library");
    }
    FUN_00b2b0f2((int)piVar1,(void *)piVar1[0x27]);
    FUN_00b2b0a1(piVar1);
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00b21105 @ 00b21105 ////

void FUN_00b21105(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_44 [16];
  
  piVar3 = param_1;
  piVar4 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_1;
  for (iVar2 = 0x67; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  piVar3 = local_44;
  piVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0x28] = 0x2000;
  pvVar1 = FUN_00b2b0b9(param_1,0x2000);
  param_1[0x27] = (int)pvVar1;
  FUN_00b2125e((int)param_1,0,0,0);
  FUN_00b20d96(param_1,0,1,0,(double *)0x0);
  return;
}


//// FUNCTION FUN_00b21165 @ 00b21165 ////

void FUN_00b21165(byte *param_1,undefined4 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_00b20843(param_1,(undefined4 *)*param_2);
    param_2 = param_2 + 1;
  }
  return;
}


//// FUNCTION FUN_00b2118c @ 00b2118c ////

void FUN_00b2118c(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  pbVar1 = param_1;
  pbVar2 = (byte *)FUN_00b22147((int)param_1);
  if (0 < (int)pbVar2) {
    uVar3 = *(uint *)(param_1 + 0xbc);
    param_1 = pbVar2;
    do {
      uVar4 = 0;
      puVar5 = param_2;
      if (uVar3 != 0) {
        do {
          FUN_00b20843(pbVar1,(undefined4 *)*puVar5);
          uVar3 = *(uint *)(pbVar1 + 0xbc);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < uVar3);
      }
      param_1 = param_1 + -1;
    } while (param_1 != (byte *)0x0);
  }
  return;
}


//// FUNCTION FUN_00b211d5 @ 00b211d5 ////

void FUN_00b211d5(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && ((void *)*param_2 != (void *)0x0)) {
    FUN_00b2b0a1((void *)*param_2);
    *param_2 = 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00b20aed(puVar1);
    FUN_00b2b0a1(puVar1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00b21218 @ 00b21218 ////

void FUN_00b21218(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(param_1,"Call to NULL write function");
}


//// FUNCTION FUN_00b21244 @ 00b21244 ////

void FUN_00b21244(int param_1)

{
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
    (**(code **)(param_1 + 0x120))(param_1);
  }
  return;
}


//// FUNCTION FUN_00b2125e @ 00b2125e ////

void FUN_00b2125e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_4;
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00b20556(param_1,"Attempted to set both read_data_fn and write_data_fn in");
    FUN_00b20556(param_1,"the same structure.  Resetting read_data_fn to NULL.");
  }
  return;
}


//// FUNCTION FUN_00b212a1 @ 00b212a1 ////

void FUN_00b212a1(int param_1,int param_2,double param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    *(float *)(param_2 + 0x28) = (float)param_3;
  }
  return;
}


//// FUNCTION FUN_00b212c1 @ 00b212c1 ////

void FUN_00b212c1(int param_1,uint *param_2,uint param_3,uint param_4,char param_5,byte param_6,
                 undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *(undefined1 *)((int)param_2 + 0x1a) = param_8;
    param_2[1] = param_4;
    *(undefined1 *)((int)param_2 + 0x1b) = param_9;
    *param_2 = param_3;
    *(char *)(param_2 + 6) = param_5;
    *(byte *)((int)param_2 + 0x19) = param_6;
    *(undefined1 *)(param_2 + 7) = param_7;
    if ((param_6 == 3) || ((param_6 & 2) == 0)) {
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x1d) = 3;
    }
    if ((param_6 & 4) != 0) {
      *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
    }
    bVar1 = *(char *)((int)param_2 + 0x1d) * param_5;
    *(byte *)((int)param_2 + 0x1e) = bVar1;
    if ((uint)(0x7fffffff / (ulonglong)(uint)((int)(bVar1 + 7) >> 3)) < param_3) {
      FUN_00b20556(param_1,"Width too large to process image data; rowbytes will overflow.");
      param_2[3] = 0;
    }
    else {
      param_2[3] = bVar1 * param_3 + 7 >> 3;
    }
  }
  return;
}


//// FUNCTION FUN_00b21364 @ 00b21364 ////

void FUN_00b21364(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(undefined4 *)(param_2 + 0x10) = param_3;
    *(undefined2 *)(param_2 + 0x14) = param_4;
  }
  return;
}


//// FUNCTION FUN_00b2138c @ 00b2138c ////

void FUN_00b2138c(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 8;
    *(undefined1 *)(param_2 + 0x2c) = param_3;
  }
  return;
}


//// FUNCTION FUN_00b213ac @ 00b213ac ////

void FUN_00b213ac(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00b2138c(param_1,param_2,param_3);
    FUN_00b212a1(param_1,param_2,0.45454999804496765);
  }
  return;
}


//// FUNCTION FUN_00b213e5 @ 00b213e5 ////

void FUN_00b213e5(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 0) {
      *(int *)(param_2 + 0x30) = param_3;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x34) = *param_5;
      *(undefined4 *)(param_2 + 0x38) = param_5[1];
      *(undefined2 *)(param_2 + 0x3c) = *(undefined2 *)(param_5 + 2);
      if (param_4 == 0) {
        param_4 = 1;
      }
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(undefined2 *)(param_2 + 0x16) = (undefined2)param_4;
  }
  return;
}


//// FUNCTION FUN_00b21430 @ 00b21430 ////

void FUN_00b21430(int param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x198) = param_2;
  }
  return;
}


//// FUNCTION FUN_00b21449 @ 00b21449 ////

int * FUN_00b21449(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *unaff_ESI;
  char *pcVar4;
  
  piVar1 = FUN_00b2b059(1);
  if (piVar1 != (int *)0x0) {
    iVar2 = __setjmp3(piVar1,0,unaff_ESI,piVar1);
    if (iVar2 == 0) {
      FUN_00b20508((int)piVar1,param_2,param_3,param_4);
      if ((param_1 != (char *)0x0) && (*param_1 == '1')) {
        piVar1[0x28] = 0x2000;
        pvVar3 = FUN_00b2b0b9(piVar1,0x2000);
        piVar1[0x27] = (int)pvVar3;
        piVar1[0x21] = (int)FUN_00b2065a;
        piVar1[0x22] = (int)FUN_00b206b0;
        piVar1[0x23] = (int)piVar1;
        iVar2 = zlib_inflateInit_((int)(piVar1 + 0x19),"1.1.4",0x38);
        if (iVar2 == -6) {
          pcVar4 = "zlib version error";
        }
        else if ((iVar2 == -4) || (iVar2 == -2)) {
          pcVar4 = "zlib memory error";
        }
        else {
          if (iVar2 == 0) {
            piVar1[0x1c] = piVar1[0x27];
            piVar1[0x1d] = piVar1[0x28];
            FUN_00b24009((int)piVar1,0,0);
            return piVar1;
          }
          pcVar4 = "Unknown zlib error";
        }
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(piVar1,pcVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(piVar1,"Incompatible libpng version in application and library");
    }
    FUN_00b2b0f2((int)piVar1,(void *)piVar1[0x27]);
    FUN_00b2b0a1(piVar1);
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00b2153f @ 00b2153f ////

void FUN_00b2153f(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int local_44 [16];
  
  piVar3 = param_1;
  piVar4 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_1;
  for (iVar2 = 0x67; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  piVar3 = local_44;
  piVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0x28] = 0x2000;
  pvVar1 = FUN_00b2b0b9(param_1,0x2000);
  param_1[0x27] = (int)pvVar1;
  param_1[0x21] = (int)FUN_00b2065a;
  param_1[0x22] = (int)FUN_00b206b0;
  param_1[0x23] = (int)param_1;
  iVar2 = zlib_inflateInit_((int)(param_1 + 0x19),"1.1.4",0x38);
  if (iVar2 == -6) {
    pcVar5 = "zlib version";
  }
  else if ((iVar2 == -4) || (iVar2 == -2)) {
    pcVar5 = "zlib memory";
  }
  else {
    if (iVar2 == 0) {
      param_1[0x1c] = param_1[0x27];
      param_1[0x1d] = param_1[0x28];
      FUN_00b24009((int)param_1,0,0);
      return;
    }
    pcVar5 = "Unknown zlib error";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(param_1,pcVar5);
}


//// FUNCTION FUN_00b215fb @ 00b215fb ////

void FUN_00b215fb(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  piVar2 = param_1;
  if (7 < *(byte *)(param_1 + 0x47)) {
LAB_00b2166c:
    pbVar1 = (byte *)(piVar2 + 0x43);
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            FUN_00b23fdd(piVar2,&param_1,4);
            uVar4 = FUN_00b2e0e0((undefined1 *)&param_1);
            FUN_00b206bb((int)piVar2);
            FUN_00b2e124(piVar2,pbVar1,4);
            if (*(int *)pbVar1 != 0x52444849) break;
            FUN_00b2ea87(piVar2,param_2,uVar4);
          }
          if (*(int *)pbVar1 != 0x45544c50) break;
          FUN_00b2ec69(piVar2,(int)param_2,uVar4);
        }
        if (*(int *)pbVar1 != 0x444e4549) break;
        FUN_00b2ed84(piVar2,param_2,uVar4);
      }
      if (*(int *)pbVar1 == 0x54414449) break;
      if (*(int *)pbVar1 == 0x414d4167) {
        FUN_00b2edcc(piVar2,(int)param_2,uVar4);
      }
      else if (*(int *)pbVar1 == 0x42475273) {
        FUN_00b2eecf(piVar2,(int)param_2,uVar4);
      }
      else if (*(int *)pbVar1 == 0x534e5274) {
        FUN_00b2efb3(piVar2,(int)param_2,uVar4);
      }
      else {
        FUN_00b2f147(piVar2,(int)param_2,uVar4);
      }
    }
    if ((piVar2[0x16] & 1U) == 0) {
      pcVar6 = "Missing IHDR before IDAT";
    }
    else {
      if ((*(char *)((int)piVar2 + 0x116) != '\x03') || ((piVar2[0x16] & 2U) != 0)) {
        piVar2[0x16] = piVar2[0x16] | 4;
        piVar2[0x3f] = uVar4;
        return;
      }
      pcVar6 = "Missing PLTE before IDAT";
    }
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(piVar2,pcVar6);
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x47);
  uVar5 = -uVar4 + 8;
  FUN_00b23fdd(param_1,uVar4 + 0x20 + (int)param_2,uVar5);
  *(undefined1 *)(piVar2 + 0x47) = 8;
  iVar3 = FUN_00b205f1((int)(param_2 + 8),uVar4,uVar5);
  if (iVar3 == 0) goto LAB_00b2166c;
  if (uVar4 < 4) {
    iVar3 = FUN_00b205f1((int)(param_2 + 8),uVar4,-uVar4 + 4);
    if (iVar3 != 0) {
      pcVar6 = "Not a PNG file";
      goto LAB_00b21666;
    }
  }
  pcVar6 = "PNG file corrupted by ASCII conversion";
LAB_00b21666:
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(piVar2,pcVar6);
}


//// FUNCTION FUN_00b2176b @ 00b2176b ////

void FUN_00b2176b(int *param_1,int *param_2)

{
  if ((*(byte *)(param_1 + 0x17) & 0x40) == 0) {
    FUN_00b2e85f(param_1);
  }
  FUN_00b229f9((int)param_1,param_2);
  return;
}


//// FUNCTION FUN_00b2178e @ 00b2178e ////

void FUN_00b2178e(int *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 0x40) == 0) {
    FUN_00b2e85f(param_1);
  }
  return;
}


//// FUNCTION FUN_00b217a6 @ 00b217a6 ////

void __thiscall FUN_00b217a6(void *this,int *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *this_00;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  bool bVar8;
  uint uVar9;
  
  piVar4 = param_1;
  if ((*(byte *)(param_1 + 0x17) & 0x40) == 0) {
    FUN_00b2e85f(param_1);
    this = extraout_ECX;
  }
  if ((*(char *)((int)piVar4 + 0x113) != '\0') && ((*(byte *)(piVar4 + 0x18) & 2) != 0)) {
    cVar2 = (char)piVar4[0x45];
    if (cVar2 == '\0') {
      if ((*(byte *)(piVar4 + 0x35) & 7) != 0) {
        bVar8 = param_3 == (byte *)0x0;
LAB_00b218b8:
        if (bVar8) goto LAB_00b2180f;
        uVar9 = 0xff;
LAB_00b218c3:
        FUN_00b2e201((int)piVar4,param_3,uVar9);
        this = extraout_ECX_00;
LAB_00b2180f:
        FUN_00b2f190(this,piVar4);
        return;
      }
    }
    else if (cVar2 == '\x01') {
      if (((*(byte *)(piVar4 + 0x35) & 7) != 0) || ((uint)piVar4[0x2e] < 5)) {
        if (param_3 == (byte *)0x0) goto LAB_00b2180f;
        uVar9 = 0xf;
        goto LAB_00b218c3;
      }
    }
    else if (cVar2 == '\x02') {
      this = (void *)(piVar4[0x35] & 0xffffff07);
      if ((char)this != '\x04') {
        if (param_3 == (byte *)0x0) goto LAB_00b2180f;
        bVar8 = (piVar4[0x35] & 4U) == 0;
        goto LAB_00b218b8;
      }
    }
    else if (cVar2 == '\x03') {
      if (((*(byte *)(piVar4 + 0x35) & 3) != 0) || ((uint)piVar4[0x2e] < 3)) {
        if (param_3 == (byte *)0x0) goto LAB_00b2180f;
        uVar9 = 0x33;
        goto LAB_00b218c3;
      }
    }
    else if (cVar2 == '\x04') {
      this = (void *)(piVar4[0x35] & 0xffffff03);
      if ((char)this != '\x02') {
        if (param_3 == (byte *)0x0) goto LAB_00b2180f;
        bVar8 = (piVar4[0x35] & 2U) == 0;
        goto LAB_00b218b8;
      }
    }
    else if (cVar2 == '\x05') {
      if (((*(byte *)(piVar4 + 0x35) & 1) != 0) || ((uint)piVar4[0x2e] < 2)) {
        if (param_3 == (byte *)0x0) goto LAB_00b2180f;
        uVar9 = 0x55;
        goto LAB_00b218c3;
      }
    }
    else if ((cVar2 == '\x06') && ((*(byte *)(piVar4 + 0x35) & 1) == 0)) goto LAB_00b2180f;
  }
  if ((*(byte *)(piVar4 + 0x16) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(piVar4,"Invalid attempt to read row data");
  }
  piVar4[0x1c] = piVar4[0x37];
  piVar4[0x1d] = piVar4[0x33];
  do {
    if (piVar4[0x1a] == 0) {
      if (piVar4[0x3f] == 0) {
        do {
          FUN_00b2e9fe(piVar4,0);
          FUN_00b23fdd(piVar4,&param_1,4);
          iVar5 = FUN_00b2e0e0((undefined1 *)&param_1);
          piVar4[0x3f] = iVar5;
          FUN_00b206bb((int)piVar4);
          FUN_00b2e124(piVar4,(byte *)(piVar4 + 0x43),4);
          if (piVar4[0x43] != 0x54414449) {
                    /* WARNING: Subroutine does not return */
            FUN_00b20535(piVar4,"Not enough image data");
          }
        } while (piVar4[0x3f] == 0);
      }
      piVar4[0x1a] = piVar4[0x28];
      piVar4[0x19] = piVar4[0x27];
      if ((uint)piVar4[0x3f] < (uint)piVar4[0x28]) {
        piVar4[0x1a] = piVar4[0x3f];
      }
      FUN_00b2e124(piVar4,(byte *)piVar4[0x27],piVar4[0x1a]);
      piVar4[0x3f] = piVar4[0x3f] - piVar4[0x1a];
    }
    pbVar6 = zlib_inflate(piVar4 + 0x19,1);
    if (pbVar6 == (byte *)0x1) {
      if (((piVar4[0x1d] != 0) || (piVar4[0x1a] != 0)) || (piVar4[0x3f] != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(piVar4,"Extra compressed data");
      }
      piVar4[0x16] = piVar4[0x16] | 8;
      piVar4[0x17] = piVar4[0x17] | 0x20;
      break;
    }
    if (pbVar6 != (byte *)0x0) {
      pcVar7 = (char *)piVar4[0x1f];
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "Decompression error";
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(piVar4,pcVar7);
    }
  } while (piVar4[0x1d] != 0);
  *(undefined1 *)((int)piVar4 + 0xfa) = *(undefined1 *)((int)piVar4 + 0x11a);
  *(undefined1 *)((int)piVar4 + 0xf9) = *(undefined1 *)((int)piVar4 + 0x117);
  *(byte *)((int)piVar4 + 0xfb) = *(byte *)((int)piVar4 + 0x119);
  *(undefined1 *)(piVar4 + 0x3e) = *(undefined1 *)((int)piVar4 + 0x116);
  puVar1 = (uint *)(piVar4 + 0x3c);
  *puVar1 = piVar4[0x34];
  piVar4[0x3d] = (uint)*(byte *)((int)piVar4 + 0x119) * piVar4[0x34] + 7 >> 3;
  FUN_00b2e6e6((int)piVar4,(int)puVar1,(byte *)piVar4[0x37] + 1,(byte *)(piVar4[0x36] + 1),
               (uint)*(byte *)piVar4[0x37]);
  FUN_00b2b110(piVar4,(undefined4 *)piVar4[0x36],(undefined4 *)piVar4[0x37],piVar4[0x32] + 1);
  this_00 = extraout_ECX_01;
  if (piVar4[0x18] != 0) {
    FUN_00b23e3c(piVar4);
    this_00 = extraout_ECX_02;
  }
  if ((*(char *)((int)piVar4 + 0x113) == '\0') || ((piVar4[0x18] & 2U) == 0)) {
    if (param_2 != (byte *)0x0) {
      FUN_00b2e201((int)piVar4,param_2,0xff);
      this_00 = extraout_ECX_05;
    }
    if (param_3 == (byte *)0x0) goto LAB_00b21b00;
    uVar9 = 0xff;
    pbVar6 = param_3;
  }
  else {
    bVar3 = *(byte *)(piVar4 + 0x45);
    this_00 = (void *)CONCAT31((int3)((uint)this_00 >> 8),bVar3);
    if (bVar3 < 6) {
      FUN_00b2e419(puVar1,(int *)(piVar4[0x37] + 1),(uint)bVar3);
      this_00 = extraout_ECX_03;
    }
    if (param_3 != (byte *)0x0) {
      FUN_00b2e201((int)piVar4,param_3,*(uint *)(&DAT_00d8cb38 + (uint)*(byte *)(piVar4 + 0x45) * 4)
                  );
      this_00 = extraout_ECX_04;
    }
    if (param_2 == (byte *)0x0) goto LAB_00b21b00;
    uVar9 = *(uint *)(&DAT_00d8cb1c + (uint)*(byte *)(piVar4 + 0x45) * 4);
    pbVar6 = param_2;
  }
  FUN_00b2e201((int)piVar4,pbVar6,uVar9);
  this_00 = extraout_ECX_06;
LAB_00b21b00:
  FUN_00b2f190(this_00,piVar4);
  if ((code *)piVar4[0x5b] != (code *)0x0) {
    (*(code *)piVar4[0x5b])(piVar4,piVar4[0x35],(char)piVar4[0x45]);
  }
  return;
}


//// FUNCTION FUN_00b21b2b @ 00b21b2b ////

void __thiscall
FUN_00b21b2b(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  void *this_00;
  byte *pbVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        FUN_00b217a6(this,param_1,(byte *)0x0,(byte *)*param_3);
        param_3 = param_3 + 1;
        this = extraout_ECX_00;
      }
    }
  }
  else if (param_3 == (undefined4 *)0x0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      FUN_00b217a6(this,param_1,(byte *)*param_2,(byte *)0x0);
      param_2 = param_2 + 1;
      this = extraout_ECX;
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      this_00 = (void *)*param_3;
      pbVar1 = (byte *)*param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      FUN_00b217a6(this_00,param_1,pbVar1,this_00);
    }
  }
  return;
}


//// FUNCTION FUN_00b21ba0 @ 00b21ba0 ////

void FUN_00b21ba0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  undefined4 local_8;
  
  local_8 = FUN_00b22147((int)param_1);
  iVar1 = param_1[0x2f];
  param_1[0x30] = iVar1;
  iVar2 = iVar1;
  puVar3 = param_2;
  this = extraout_ECX;
  if (0 < local_8) {
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_00b217a6(this,param_1,(byte *)*puVar3,(byte *)0x0);
        puVar3 = puVar3 + 1;
        this = extraout_ECX_00;
      }
      local_8 = local_8 + -1;
      iVar2 = iVar1;
      puVar3 = param_2;
    } while (local_8 != 0);
  }
  return;
}


//// FUNCTION FUN_00b21bed @ 00b21bed ////

void FUN_00b21bed(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = param_1;
  FUN_00b2e9fe(param_1,0);
  pbVar1 = (byte *)(piVar2 + 0x43);
  do {
    FUN_00b23fdd(piVar2,&param_1,4);
    uVar3 = FUN_00b2e0e0((undefined1 *)&param_1);
    FUN_00b206bb((int)piVar2);
    FUN_00b2e124(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == 0x52444849) {
      FUN_00b2ea87(piVar2,param_2,uVar3);
    }
    else if (*(int *)pbVar1 == 0x54414449) {
      if ((uVar3 != 0) || ((*(byte *)(piVar2 + 0x16) & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(piVar2,"Too many IDAT\'s found");
      }
      FUN_00b2e9fe(piVar2,0);
    }
    else if (*(int *)pbVar1 == 0x45544c50) {
      FUN_00b2ec69(piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == 0x444e4549) {
      FUN_00b2ed84(piVar2,param_2,uVar3);
    }
    else if (*(int *)pbVar1 == 0x414d4167) {
      FUN_00b2edcc(piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == 0x42475273) {
      FUN_00b2eecf(piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == 0x534e5274) {
      FUN_00b2efb3(piVar2,(int)param_2,uVar3);
    }
    else {
      FUN_00b2f147(piVar2,(int)param_2,uVar3);
    }
    if ((*(byte *)(piVar2 + 0x16) & 0x10) != 0) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00b21ce7 @ 00b21ce7 ////

void FUN_00b21ce7(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_44 [16];
  
  iVar6 = 0;
  if (param_2 != (undefined4 *)0x0) {
    FUN_00b2072e(param_1,param_2);
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_00b2072e(param_1,param_3);
  }
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x27]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x37]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x36]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x5d]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x5e]);
  FUN_00b2b0f2((int)param_1,(void *)param_1[0x4e]);
  if ((*(byte *)((int)param_1 + 0x5d) & 0x10) != 0) {
    FUN_00b206b0((int)param_1,(void *)param_1[0x41]);
  }
  if ((*(byte *)((int)param_1 + 0x5d) & 0x20) != 0) {
    FUN_00b2b0f2((int)param_1,(void *)param_1[0x57]);
  }
  if (param_1[0x51] != 0) {
    iVar4 = 1 << (8U - (char)param_1[0x4b] & 0x1f);
    if (0 < iVar4) {
      do {
        FUN_00b2b0f2((int)param_1,*(void **)(param_1[0x51] + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    FUN_00b2b0f2((int)param_1,(void *)param_1[0x51]);
  }
  zlib_inflateEnd((int)(param_1 + 0x19));
  uVar1 = param_1[0x12];
  uVar2 = param_1[0x10];
  puVar5 = param_1;
  puVar7 = local_44;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = param_1[0x11];
  puVar5 = param_1;
  for (iVar6 = 0x67; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x11] = uVar3;
  puVar5 = local_44;
  puVar7 = param_1;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x10] = uVar2;
  param_1[0x12] = uVar1;
  return;
}


//// FUNCTION FUN_00b21dfe @ 00b21dfe ////

void FUN_00b21dfe(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x16c) = param_2;
  return;
}


//// FUNCTION FUN_00b21e13 @ 00b21e13 ////

void FUN_00b21e13(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    local_8 = (undefined4 *)*param_1;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    local_c = (undefined4 *)*param_3;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_00b21ce7(local_8,puVar1,local_c);
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00b2b0a1(puVar1);
    *param_2 = 0;
  }
  if (local_c != (undefined4 *)0x0) {
    FUN_00b2b0a1(local_c);
    *param_3 = 0;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_00b2b0a1(local_8);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00b21e92 @ 00b21e92 ////

uint FUN_00b21e92(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & param_3;
  }
  return uVar1;
}


//// FUNCTION FUN_00b21eb2 @ 00b21eb2 ////

undefined4 FUN_00b21eb2(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  return uVar1;
}


//// FUNCTION FUN_00b21ecf @ 00b21ecf ////

undefined1 FUN_00b21ecf(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x1d);
  }
  return uVar1;
}


//// FUNCTION FUN_00b21eec @ 00b21eec ////

int FUN_00b21eec(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 + 0x20;
  }
  return iVar1;
}


//// FUNCTION FUN_00b21f09 @ 00b21f09 ////

undefined4 FUN_00b21f09(int param_1,int param_2,double *param_3)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 1) == 0)) ||
     (param_3 == (double *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = (double)*(float *)(param_2 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}


//// FUNCTION FUN_00b21f38 @ 00b21f38 ////

undefined4 FUN_00b21f38(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (uVar1 = 0x800, (*(uint *)(param_2 + 8) & 0x800) == 0))
     || (param_3 == (uint *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = (uint)*(byte *)(param_2 + 0x2c);
  }
  return uVar1;
}


//// FUNCTION FUN_00b21f69 @ 00b21f69 ////

undefined4
FUN_00b21f69(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) ||
     (((param_4 == (uint *)0x0 || (param_5 == (uint *)0x0)) || (param_6 == (uint *)0x0)))) {
    uVar3 = 0;
  }
  else {
    *param_3 = *param_2;
    *param_4 = param_2[1];
    *param_5 = (uint)(byte)param_2[6];
    *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (param_9 != (uint *)0x0) {
      *param_9 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)(byte)param_2[7];
    }
    uVar1 = *param_6;
    if (uVar1 == 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (int)(char)uVar1 & 2U | 1;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 + 1;
    }
    if ((uint)(0x7fffffff / (ulonglong)(uint)((int)(*param_5 * uVar2 + 7) >> 3)) < *param_3) {
      FUN_00b20556(param_1,"Width too large for libpng to process image data.");
    }
    uVar3 = 1;
  }
  return uVar3;
}


//// FUNCTION FUN_00b2203c @ 00b2203c ////

undefined4 FUN_00b2203c(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == 0)) || ((*(byte *)(param_2 + 8) & 8) == 0)) ||
     (param_3 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
    uVar1 = 8;
  }
  return uVar1;
}


//// FUNCTION FUN_00b22074 @ 00b22074 ////

undefined4 FUN_00b22074(int param_1,int param_2,undefined4 *param_3,uint *param_4,int *param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    if (*(char *)(param_2 + 0x19) == '\x03') {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_2 + 0x30);
        uVar1 = 0x10;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x34;
      }
    }
    else {
      if (param_5 != (int *)0x0) {
        *param_5 = param_2 + 0x34;
        uVar1 = 0x10;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(param_2 + 0x16);
      uVar1 = 0x10;
    }
  }
  return uVar1;
}


//// FUNCTION FUN_00b220df @ 00b220df ////

void FUN_00b220df(int param_1)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  return;
}


//// FUNCTION FUN_00b220ef @ 00b220ef ////

void FUN_00b220ef(int param_1)

{
  if (*(char *)(param_1 + 0x117) == '\x10') {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  }
  return;
}


//// FUNCTION FUN_00b22108 @ 00b22108 ////

void FUN_00b22108(int param_1)

{
  if (*(byte *)(param_1 + 0x117) < 8) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
    *(undefined1 *)(param_1 + 0x118) = 8;
  }
  return;
}


//// FUNCTION FUN_00b22128 @ 00b22128 ////

void FUN_00b22128(int param_1,undefined4 *param_2)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  *(undefined4 *)(param_1 + 0x155) = *param_2;
  *(undefined1 *)(param_1 + 0x159) = *(undefined1 *)(param_2 + 1);
  return;
}


//// FUNCTION FUN_00b22147 @ 00b22147 ////

undefined4 FUN_00b22147(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x113) == '\0') {
    uVar1 = 1;
  }
  else {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
    uVar1 = 7;
  }
  return uVar1;
}


//// FUNCTION FUN_00b22168 @ 00b22168 ////

void FUN_00b22168(int param_1,byte param_2,int param_3)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x80;
  *(ushort *)(param_1 + 0x11e) = (ushort)param_2;
  if (param_3 == 1) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x80;
  }
  else {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0x7f;
  }
  if (*(char *)(param_1 + 0x116) == '\x02') {
    *(undefined1 *)(param_1 + 0x11b) = 4;
  }
  if ((*(char *)(param_1 + 0x116) == '\0') && (7 < *(byte *)(param_1 + 0x117))) {
    *(undefined1 *)(param_1 + 0x11b) = 2;
  }
  return;
}


//// FUNCTION FUN_00b221ba @ 00b221ba ////

void FUN_00b221ba(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      *param_2 = param_2[1];
      param_2[1] = uVar1;
      param_2 = param_2 + 2;
    }
  }
  return;
}


//// FUNCTION FUN_00b221ed @ 00b221ed ////

void FUN_00b221ed(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) != 0) {
    iVar4 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (bVar1 == 2) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar2 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar2;
          param_2 = param_2 + 3;
        }
      }
      else if (bVar1 == 6) {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar2 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVar2;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if (bVar1 == 2) {
        if (iVar4 != 0) {
          puVar3 = param_2 + 1;
          do {
            uVar2 = puVar3[-1];
            puVar3[-1] = puVar3[3];
            puVar3[3] = uVar2;
            uVar2 = *puVar3;
            *puVar3 = puVar3[4];
            puVar3[4] = uVar2;
            puVar3 = puVar3 + 6;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else if ((bVar1 == 6) && (iVar4 != 0)) {
        puVar3 = param_2 + 1;
        do {
          uVar2 = puVar3[-1];
          puVar3[-1] = puVar3[3];
          puVar3[3] = uVar2;
          uVar2 = *puVar3;
          *puVar3 = puVar3[4];
          puVar3[4] = uVar2;
          puVar3 = puVar3 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00b222b0 @ 00b222b0 ////

void FUN_00b222b0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 2) {
    FUN_00b20556(param_1,"Can\'t discard critical data on CRC error.");
  }
  else {
    if (param_2 == 3) {
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffff7ff | 0x400;
      goto LAB_00b222f2;
    }
    if (param_2 == 4) {
      *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 0xc;
      goto LAB_00b222f2;
    }
    if (param_2 == 5) goto LAB_00b222f2;
  }
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xf3;
LAB_00b222f2:
  if (param_3 == 1) {
    uVar1 = *(uint *)(param_1 + 0x5c) & 0xfffffeff | 0x200;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) | 3;
        return;
      }
      if (param_3 == 5) {
        return;
      }
      *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xfc;
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x5c) & 0xfffffdff | 0x100;
  }
  *(uint *)(param_1 + 0x5c) = uVar1;
  return;
}


//// FUNCTION FUN_00b22332 @ 00b22332 ////

void FUN_00b22332(int param_1)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 4;
  return;
}


//// FUNCTION FUN_00b22342 @ 00b22342 ////

void FUN_00b22342(int *param_1,byte *param_2,size_t param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined3 uVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_24;
  uint local_20;
  int local_14;
  uint local_10;
  byte *local_c;
  
  param_1[0x18] = param_1[0x18] | 0x40;
  if (param_6 == 0) {
    pvVar6 = FUN_00b2b0b9(param_1,param_3);
    param_1[0x5e] = (int)pvVar6;
    iVar7 = 0;
    if (0 < (int)param_3) {
      do {
        *(char *)(iVar7 + param_1[0x5e]) = (char)iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3);
    }
  }
  if ((int)param_4 < (int)param_3) {
    pbVar8 = FUN_00b2b0b9(param_1,param_3);
    if (param_5 == 0) {
      pvVar6 = FUN_00b2b0b9(param_1,param_3);
      iVar7 = 0;
      if (0 < (int)param_3) {
        do {
          ((undefined1 *)(iVar7 + (int)pvVar6))[(int)pbVar8 - (int)pvVar6] = (char)iVar7;
          *(undefined1 *)(iVar7 + (int)pvVar6) = (char)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_3);
      }
      puVar17 = FUN_00b2b0b9(param_1,0xc04);
      puVar16 = puVar17;
      for (iVar7 = 0x301; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      local_10 = 0x60;
      sVar10 = param_3;
      do {
        param_5 = 0;
        if (sVar10 != 1 && -1 < (int)(sVar10 - 1)) {
          pbVar13 = param_2 + 2;
          do {
            iVar7 = param_5 + 1;
            if (iVar7 < (int)sVar10) {
              pbVar9 = pbVar13 + 2;
              local_c = (byte *)iVar7;
              do {
                uVar24 = (int)((uint)*pbVar13 - (uint)pbVar9[1]) >> 0x1f;
                uVar11 = (int)((uint)pbVar13[-2] - (uint)pbVar9[-1]) >> 0x1f;
                uVar12 = (int)((uint)pbVar13[-1] - (uint)*pbVar9) >> 0x1f;
                iVar18 = (((uint)*pbVar13 - (uint)pbVar9[1] ^ uVar24) - uVar24) +
                         (((uint)pbVar13[-2] - (uint)pbVar9[-1] ^ uVar11) - uVar11) +
                         (((uint)pbVar13[-1] - (uint)*pbVar9 ^ uVar12) - uVar12);
                if (iVar18 <= (int)local_10) {
                  puVar16 = FUN_00b2b0b9(param_1,8);
                  *puVar16 = puVar17[iVar18];
                  *(undefined1 *)(puVar16 + 1) = (undefined1)param_5;
                  *(undefined1 *)((int)puVar16 + 5) = local_c._0_1_;
                  puVar17[iVar18] = puVar16;
                }
                local_c = (byte *)((int)local_c + 1);
                pbVar9 = pbVar9 + 3;
              } while ((int)local_c < (int)sVar10);
            }
            pbVar13 = pbVar13 + 3;
            param_5 = iVar7;
          } while (iVar7 < (int)(sVar10 - 1));
        }
        param_5 = 0;
        if (-1 < (int)local_10) {
          do {
            piVar14 = (int *)puVar17[param_5];
            if (piVar14 != (int *)0x0) {
              pbVar13 = param_2 + sVar10 * 3;
              do {
                local_24 = (uint)*(byte *)(piVar14 + 1);
                pbVar9 = pbVar13;
                if (((int)(uint)pbVar8[local_24] < (int)sVar10) &&
                   (uVar24 = (uint)*(byte *)((int)piVar14 + 5),
                   (int)(uint)pbVar8[uVar24] < (int)sVar10)) {
                  uVar11 = uVar24;
                  if ((sVar10 & 1) != 0) {
                    uVar11 = local_24;
                    local_24 = uVar24;
                  }
                  pbVar15 = pbVar8 + uVar11;
                  bVar1 = *pbVar15;
                  pbVar9 = pbVar13 + -3;
                  *(undefined2 *)(param_2 + (uint)bVar1 * 3) = *(undefined2 *)pbVar9;
                  (param_2 + (uint)bVar1 * 3)[2] = pbVar13[-1];
                  iVar7 = 0;
                  sVar10 = sVar10 - 1;
                  if ((param_6 == 0) && (0 < (int)param_3)) {
                    do {
                      if (*(byte *)(param_1[0x5e] + iVar7) == *pbVar15) {
                        *(byte *)(param_1[0x5e] + iVar7) = pbVar8[local_24];
                      }
                      if (*(byte *)(param_1[0x5e] + iVar7) == sVar10) {
                        *(byte *)(param_1[0x5e] + iVar7) = *pbVar15;
                      }
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < (int)param_3);
                  }
                  pbVar8[*(byte *)(sVar10 + (int)pvVar6)] = *pbVar15;
                  *(undefined1 *)((uint)*pbVar15 + (int)pvVar6) =
                       *(undefined1 *)(sVar10 + (int)pvVar6);
                  *pbVar15 = (byte)sVar10;
                  local_20._0_1_ = (undefined1)uVar11;
                  *(undefined1 *)(sVar10 + (int)pvVar6) = (undefined1)local_20;
                }
                if ((int)sVar10 <= (int)param_4) goto LAB_00b227af;
                piVar14 = (int *)*piVar14;
                pbVar13 = pbVar9;
              } while (piVar14 != (int *)0x0);
              if ((int)sVar10 <= (int)param_4) break;
            }
            param_5 = param_5 + 1;
          } while (param_5 <= (int)local_10);
        }
LAB_00b227af:
        param_5 = 0;
        do {
          puVar16 = (undefined4 *)puVar17[param_5];
          while (puVar16 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)*puVar16;
            FUN_00b2b0f2((int)param_1,puVar16);
            puVar16 = puVar3;
          }
          puVar17[param_5] = 0;
          param_5 = param_5 + 1;
        } while (param_5 < 0x301);
        local_10 = local_10 + 0x60;
      } while ((int)param_4 < (int)sVar10);
      FUN_00b2b0f2((int)param_1,puVar17);
      FUN_00b2b0f2((int)param_1,pvVar6);
      FUN_00b2b0f2((int)param_1,pbVar8);
    }
    else {
      iVar7 = 0;
      if (0 < (int)param_3) {
        do {
          pbVar8[iVar7] = (byte)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_3);
      }
      iVar7 = param_3 - 1;
      if ((int)param_4 <= iVar7) {
        while (bVar5 = true, pbVar13 = pbVar8, local_24 = iVar7, 0 < iVar7) {
          do {
            pbVar9 = pbVar13 + 1;
            bVar1 = *pbVar13;
            if (*(ushort *)(param_5 + (uint)bVar1 * 2) < *(ushort *)(param_5 + (uint)*pbVar9 * 2)) {
              bVar5 = false;
              *pbVar13 = *pbVar9;
              *pbVar9 = bVar1;
            }
            local_24 = local_24 + -1;
            pbVar13 = pbVar9;
          } while (local_24 != 0);
          if ((bVar5) || (iVar7 = iVar7 + -1, iVar7 < (int)param_4)) break;
        }
      }
      iVar7 = 0;
      if (param_6 == 0) {
        iVar7 = 0;
        if (0 < (int)param_4) {
          local_c = param_2;
          sVar10 = param_3;
          do {
            if ((int)param_4 <= (int)(uint)pbVar8[iVar7]) {
              do {
                sVar10 = sVar10 - 1;
              } while ((int)param_4 <= (int)(uint)pbVar8[sVar10]);
              pbVar13 = param_2 + sVar10 * 3;
              uVar4 = *(undefined3 *)pbVar13;
              *(undefined2 *)pbVar13 = *(undefined2 *)local_c;
              pbVar13[2] = local_c[2];
              param_5._0_2_ = (undefined2)uVar4;
              *(undefined2 *)local_c = (undefined2)param_5;
              param_5._2_1_ = (byte)((uint3)uVar4 >> 0x10);
              local_c[2] = param_5._2_1_;
              *(char *)(sVar10 + param_1[0x5e]) = (char)iVar7;
              *(char *)(iVar7 + param_1[0x5e]) = (char)sVar10;
            }
            local_c = local_c + 3;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_4);
        }
        local_c = (byte *)0x0;
        if (0 < (int)param_3) {
          do {
            uVar24 = (uint)*(byte *)(param_1[0x5e] + (int)local_c);
            if ((int)param_4 <= (int)uVar24) {
              pbVar13 = param_2 + uVar24 * 3;
              uVar24 = (uint)pbVar13[1] - (uint)param_2[1];
              uVar21 = (int)uVar24 >> 0x1f;
              local_24 = 0;
              local_24._0_1_ = 0;
              uVar11 = (uint)pbVar13[2] - (uint)param_2[2];
              uVar22 = (int)uVar11 >> 0x1f;
              uVar12 = (uint)*pbVar13 - (uint)*param_2;
              uVar23 = (int)uVar12 >> 0x1f;
              iVar7 = ((uVar24 ^ uVar21) - uVar21) + ((uVar11 ^ uVar22) - uVar22) +
                      ((uVar12 ^ uVar23) - uVar23);
              param_5 = 1;
              if (1 < (int)param_4) {
                pbVar9 = param_2 + 4;
                do {
                  uVar24 = (uint)*pbVar13 - (uint)pbVar9[-1];
                  uVar21 = (int)uVar24 >> 0x1f;
                  uVar11 = (uint)pbVar13[2] - (uint)pbVar9[1];
                  uVar22 = (int)uVar11 >> 0x1f;
                  uVar12 = (uint)pbVar13[1] - (uint)*pbVar9;
                  uVar23 = (int)uVar12 >> 0x1f;
                  iVar18 = ((uVar24 ^ uVar21) - uVar21) + ((uVar11 ^ uVar22) - uVar22) +
                           ((uVar12 ^ uVar23) - uVar23);
                  if (iVar18 < iVar7) {
                    local_24 = param_5;
                    iVar7 = iVar18;
                  }
                  param_5 = param_5 + 1;
                  pbVar9 = pbVar9 + 3;
                } while (param_5 < (int)param_4);
              }
              *(byte *)(param_1[0x5e] + (int)local_c) = (byte)local_24;
            }
            local_c = (byte *)((int)local_c + 1);
          } while ((int)local_c < (int)param_3);
        }
      }
      else {
        pbVar13 = param_2;
        if (0 < (int)param_4) {
          do {
            if ((int)param_4 <= (int)(uint)pbVar8[iVar7]) {
              do {
                param_3 = param_3 - 1;
              } while ((int)param_4 <= (int)(uint)pbVar8[param_3]);
              *(undefined2 *)pbVar13 = *(undefined2 *)(param_2 + param_3 * 3);
              pbVar13[2] = (param_2 + param_3 * 3)[2];
            }
            iVar7 = iVar7 + 1;
            pbVar13 = pbVar13 + 3;
          } while (iVar7 < (int)param_4);
        }
      }
      FUN_00b2b0f2((int)param_1,pbVar8);
    }
    param_3 = param_4;
  }
  if (param_1[0x41] == 0) {
    param_1[0x41] = (int)param_2;
  }
  *(short *)(param_1 + 0x42) = (short)param_3;
  if (param_6 != 0) {
    puVar16 = FUN_00b2b0b9(param_1,0x8000);
    param_1[0x5d] = (int)puVar16;
    for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    }
    puVar17 = FUN_00b2b0b9(param_1,0x8000);
    param_5 = 0;
    puVar16 = puVar17;
    for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar16 = 0xffffffff;
      puVar16 = puVar16 + 1;
    }
    if (0 < (int)param_3) {
      pbVar8 = param_2 + 2;
      do {
        bVar1 = pbVar8[-1];
        bVar2 = *pbVar8;
        param_6 = 0;
        local_20 = -(uint)(pbVar8[-2] >> 3);
        do {
          iVar7 = (local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f);
          param_2 = (byte *)0x0;
          local_c = (byte *)-(uint)(bVar1 >> 3);
          do {
            iVar18 = ((uint)local_c ^ (int)local_c >> 0x1f) - ((int)local_c >> 0x1f);
            local_14 = iVar7;
            if (iVar7 <= iVar18) {
              local_14 = iVar18;
            }
            param_4 = 0;
            local_10 = -(uint)(bVar2 >> 3);
            do {
              iVar19 = (local_10 ^ (int)local_10 >> 0x1f) - ((int)local_10 >> 0x1f);
              uVar24 = param_4 | (int)param_2 << 5 | param_6 << 10;
              iVar20 = local_14;
              if (local_14 <= iVar19) {
                iVar20 = iVar19;
              }
              iVar20 = iVar19 + iVar20 + iVar18 + iVar7;
              if (iVar20 < (int)(uint)*(byte *)(uVar24 + (int)puVar17)) {
                *(char *)(uVar24 + (int)puVar17) = (char)iVar20;
                *(undefined1 *)(uVar24 + param_1[0x5d]) = (undefined1)param_5;
              }
              param_4 = param_4 + 1;
              local_10 = local_10 + 1;
            } while ((int)param_4 < 0x20);
            param_2 = param_2 + 1;
            local_c = (byte *)((int)local_c + 1);
          } while ((int)param_2 < 0x20);
          param_6 = param_6 + 1;
          local_20 = local_20 + 1;
        } while (param_6 < 0x20);
        param_5 = param_5 + 1;
        pbVar8 = pbVar8 + 3;
      } while (param_5 < (int)param_3);
    }
    FUN_00b2b0f2((int)param_1,puVar17);
  }
  return;
}


//// FUNCTION FUN_00b2297e @ 00b2297e ////

void FUN_00b2297e(int param_1,double param_2,double param_3)

{
  if (0.05 < ABS(param_2 * param_3 - 1.0)) {
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x20;
  }
  *(float *)(param_1 + 0x130) = (float)param_3;
  *(float *)(param_1 + 0x134) = (float)param_2;
  return;
}


//// FUNCTION FUN_00b229b9 @ 00b229b9 ////

void FUN_00b229b9(int param_1)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x10;
  return;
}


//// FUNCTION FUN_00b229c9 @ 00b229c9 ////

void FUN_00b229c9(int param_1)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x10;
  return;
}


//// FUNCTION FUN_00b229d9 @ 00b229d9 ////

void FUN_00b229d9(int param_1)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x10;
  return;
}


//// FUNCTION FUN_00b229e9 @ 00b229e9 ////

void FUN_00b229e9(int param_1)

{
  *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x10;
  return;
}


//// FUNCTION FUN_00b229f9 @ 00b229f9 ////

void FUN_00b229f9(int param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x61) & 0x10) == 0) goto LAB_00b22a46;
  if (*(byte *)((int)param_2 + 0x19) == 3) {
    *(char *)((int)param_2 + 0x19) = (*(short *)(param_1 + 0x10a) != 0) * '\x04' + '\x02';
LAB_00b22a3e:
    *(undefined1 *)(param_2 + 6) = 8;
  }
  else {
    if (*(short *)(param_1 + 0x10a) != 0) {
      *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
    }
    if (*(byte *)(param_2 + 6) < 8) goto LAB_00b22a3e;
  }
  *(undefined2 *)((int)param_2 + 0x16) = 0;
LAB_00b22a46:
  if ((*(byte *)(param_1 + 0x61) & 0x20) != 0) {
    param_2[10] = *(int *)(param_1 + 0x130);
  }
  if (((*(byte *)(param_1 + 0x61) & 4) != 0) && ((char)param_2[6] == '\x10')) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if (((*(byte *)(param_1 + 0x60) & 0x40) != 0) &&
     ((((*(char *)((int)param_2 + 0x19) == '\x02' || (*(char *)((int)param_2 + 0x19) == '\x06')) &&
       (*(int *)(param_1 + 0x174) != 0)) && ((char)param_2[6] == '\b')))) {
    *(undefined1 *)((int)param_2 + 0x19) = 3;
  }
  if (((*(byte *)(param_1 + 0x60) & 4) != 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  bVar1 = *(byte *)((int)param_2 + 0x19);
  if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((bVar1 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if (((*(byte *)(param_1 + 0x61) & 0x80) != 0) && ((bVar1 == 2 || (bVar1 == 0)))) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  bVar1 = (char)param_2[6] * *(char *)((int)param_2 + 0x1d);
  *(byte *)((int)param_2 + 0x1e) = bVar1;
  param_2[3] = (uint)bVar1 * *param_2 + 7 >> 3;
  return;
}


//// FUNCTION FUN_00b22ae2 @ 00b22ae2 ////

void FUN_00b22ae2(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar2 = *(byte *)((int)param_1 + 9);
  if (bVar2 < 8) {
    iVar3 = *param_1;
    if (bVar2 == 1) {
      pbVar5 = (byte *)((iVar3 - 1U >> 3) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = 7 - (iVar3 - 1U & 7);
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 1;
        if (iVar4 == 7) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 2) {
      pbVar5 = (byte *)((iVar3 - 1U >> 2) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = (3 - (iVar3 - 1U & 3)) * 2;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 3;
        if (iVar4 == 6) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 4) {
      pbVar5 = (byte *)((iVar3 - 1U >> 1) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = (1 - (iVar3 - 1U & 1)) * 4;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 0xf;
        if (iVar4 == 4) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = 4;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * iVar3;
  }
  return;
}


//// FUNCTION FUN_00b22bf5 @ 00b22bf5 ////

int * FUN_00b22bf5(int *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_18 [4];
  int local_8;
  
  pbVar9 = param_2;
  if (*(byte *)(param_1 + 2) != 3) {
    bVar3 = false;
    iVar12 = *param_1;
    local_8 = iVar12;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      iVar8 = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
      uVar7 = 1;
    }
    else {
      uVar7 = (uint)*(byte *)((int)param_1 + 9);
      iVar8 = uVar7 - *param_3;
      local_18[1] = uVar7 - param_3[1];
      local_18[2] = uVar7 - param_3[2];
      uVar7 = 3;
    }
    local_18[0] = iVar8;
    if ((*(byte *)(param_1 + 2) & 4) != 0) {
      local_18[uVar7] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4];
      uVar7 = uVar7 + 1;
    }
    iVar10 = 0;
    if (uVar7 != 0) {
      do {
        if (local_18[iVar10] < 1) {
          local_18[iVar10] = 0;
          iVar8 = local_18[0];
        }
        else {
          bVar3 = true;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar7);
      uVar11 = 0;
      if (bVar3) {
        cVar2 = *(char *)((int)param_1 + 9);
        if (cVar2 == '\x02') {
          for (iVar12 = param_1[1]; param_1 = (int *)0x0, iVar12 != 0; iVar12 = iVar12 + -1) {
            *param_2 = *param_2 >> 1 & 0x55;
            param_2 = param_2 + 1;
          }
        }
        else if (cVar2 == '\x04') {
          piVar1 = param_1 + 1;
          bVar6 = (byte)iVar8;
          uVar7 = 0xf0 >> (bVar6 & 0x1f) & 0xfffffff0;
          bVar4 = (byte)uVar7 | (byte)(0xf >> (bVar6 & 0x1f));
          param_1 = (int *)CONCAT31((int3)(uVar7 >> 8),bVar4);
          for (iVar12 = *piVar1; iVar12 != 0; iVar12 = iVar12 + -1) {
            *param_2 = *param_2 >> (bVar6 & 0x1f) & bVar4;
            param_2 = param_2 + 1;
          }
        }
        else if (cVar2 == '\b') {
          if (iVar12 * uVar7 != 0) {
            do {
              param_1 = (int *)(uVar11 / uVar7);
              *param_2 = *param_2 >> (*(byte *)(local_18 + uVar11 % uVar7) & 0x1f);
              param_2 = param_2 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar11 < iVar12 * uVar7);
          }
        }
        else if (cVar2 == '\x10') {
          param_2 = (byte *)0x0;
          if ((byte *)(iVar12 * uVar7) != (byte *)0x0) {
            do {
              uVar5 = (ushort)((ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1]) >>
                      ((byte)(short)local_18[(uint)param_2 % uVar7] & 0x1f);
              *pbVar9 = (byte)(uVar5 >> 8);
              pbVar9[1] = (byte)uVar5;
              pbVar9 = pbVar9 + 2;
              param_1 = (int *)(param_2 + 1);
              param_2 = (byte *)param_1;
            } while (param_1 < (byte *)(iVar12 * uVar7));
          }
        }
      }
    }
  }
  return param_1;
}


//// FUNCTION FUN_00b22d73 @ 00b22d73 ////

void FUN_00b22d73(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    puVar3 = param_2;
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 2;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * *param_1;
  }
  return;
}


//// FUNCTION FUN_00b22dbd @ 00b22dbd ////

void FUN_00b22dbd(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  uVar2 = *param_1;
  bVar5 = (byte)(param_3 >> 8);
  uVar4 = (undefined1)param_3;
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar3 = (undefined1 *)(param_2 + uVar2);
      puVar7 = puVar3 + uVar2;
      uVar6 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar3 = puVar3 + -1;
          puVar7[-1] = *puVar3;
          puVar7 = puVar7 + -2;
          *puVar7 = uVar4;
        }
      }
      else {
        if (1 < uVar2) {
          param_2 = uVar2 - 1;
          do {
            puVar3 = puVar3 + -1;
            puVar7[-1] = uVar4;
            puVar7 = puVar7 + -2;
            param_2 = param_2 + -1;
            *puVar7 = *puVar3;
          } while (param_2 != 0);
        }
        puVar7[-1] = uVar4;
      }
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x10;
      uVar2 = uVar2 * 2;
    }
    else {
      if (*(char *)((int)param_1 + 9) != '\x10') {
        return;
      }
      if ((param_4 & 0x80) == 0) {
        puVar7 = (undefined1 *)(uVar2 + param_2);
        puVar3 = puVar7 + uVar2;
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar8 = puVar7 + -1;
          puVar7 = puVar7 + -2;
          puVar3[-1] = *puVar8;
          puVar3[-2] = *puVar7;
          puVar3[-3] = bVar5;
          puVar3 = puVar3 + -4;
          *puVar3 = uVar4;
        }
      }
      else {
        puVar7 = (undefined1 *)(param_2 + uVar2);
        puVar3 = puVar7 + uVar2;
        if (1 < uVar2) {
          param_2 = uVar2 - 1;
          uVar6 = param_3 >> 8;
          do {
            puVar3[-1] = (char)uVar6;
            puVar3[-2] = uVar4;
            puVar3[-3] = puVar7[-1];
            puVar7 = puVar7 + -2;
            puVar3 = puVar3 + -4;
            param_2 = param_2 + -1;
            *puVar3 = *puVar7;
            uVar6 = (uint)bVar5;
          } while (param_2 != 0);
        }
        puVar3[-1] = bVar5;
        puVar3[-2] = uVar4;
      }
      *(undefined1 *)((int)param_1 + 10) = 2;
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      uVar2 = uVar2 << 2;
    }
  }
  else {
    if ((char)param_1[2] != '\x02') {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      puVar7 = (undefined1 *)(param_2 + uVar2 * 3);
      puVar3 = puVar7 + uVar2;
      uVar6 = uVar2;
      if ((param_4 & 0x80) == 0) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar3[-1] = puVar7[-1];
          puVar3[-2] = puVar7[-2];
          puVar7 = puVar7 + -3;
          puVar3[-3] = *puVar7;
          puVar3 = puVar3 + -4;
          *puVar3 = uVar4;
        }
      }
      else {
        if (1 < uVar2) {
          param_2 = uVar2 - 1;
          do {
            puVar3[-1] = uVar4;
            puVar3[-2] = puVar7[-1];
            puVar8 = puVar7 + -2;
            puVar7 = puVar7 + -3;
            puVar3[-3] = *puVar8;
            puVar3 = puVar3 + -4;
            param_2 = param_2 + -1;
            *puVar3 = *puVar7;
          } while (param_2 != 0);
        }
        puVar3[-1] = uVar4;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x20;
      iVar1 = 2;
    }
    else {
      if (*(char *)((int)param_1 + 9) != '\x10') {
        return;
      }
      if ((param_4 & 0x80) == 0) {
        puVar7 = (undefined1 *)(param_2 + uVar2 * 3);
        puVar3 = puVar7 + uVar2;
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar3[-1] = puVar7[-1];
          puVar3[-2] = puVar7[-2];
          puVar3[-3] = puVar7[-3];
          puVar3[-4] = puVar7[-4];
          puVar3[-5] = puVar7[-5];
          puVar7 = puVar7 + -6;
          puVar3[-6] = *puVar7;
          puVar3[-7] = bVar5;
          puVar3 = puVar3 + -8;
          *puVar3 = uVar4;
        }
      }
      else {
        puVar7 = (undefined1 *)(param_2 + uVar2 * 3);
        puVar3 = puVar7 + uVar2;
        if (1 < uVar2) {
          param_2 = uVar2 - 1;
          do {
            puVar3[-1] = bVar5;
            puVar3[-2] = uVar4;
            puVar3[-3] = puVar7[-1];
            puVar3[-4] = puVar7[-2];
            puVar3[-5] = puVar7[-3];
            puVar3[-6] = puVar7[-4];
            puVar8 = puVar7 + -5;
            puVar7 = puVar7 + -6;
            puVar3[-7] = *puVar8;
            puVar3 = puVar3 + -8;
            param_2 = param_2 + -1;
            *puVar3 = *puVar7;
          } while (param_2 != 0);
        }
        puVar3[-1] = bVar5;
        puVar3[-2] = uVar4;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x40;
      iVar1 = 3;
    }
    uVar2 = uVar2 << iVar1;
    *(undefined1 *)((int)param_1 + 10) = 4;
  }
  param_1[1] = uVar2;
  return;
}


//// FUNCTION FUN_00b22ff2 @ 00b22ff2 ////

void FUN_00b22ff2(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iStack_10;
  
  if (param_2 != 0) {
    if (param_1 == 1) {
      iStack_10 = 2;
      cVar3 = -1;
    }
    else if (param_1 == 2) {
      iStack_10 = 4;
      cVar3 = 'U';
    }
    else if (param_1 == 4) {
      iStack_10 = 0x10;
      cVar3 = '\x11';
    }
    else if (param_1 == 8) {
      iStack_10 = 0x100;
      cVar3 = '\x01';
    }
    else {
      iStack_10 = 0;
      cVar3 = '\0';
    }
    cVar2 = '\0';
    if (iStack_10 != 0) {
      pcVar1 = (char *)(param_2 + 2);
      do {
        pcVar1[-2] = cVar2;
        pcVar1[-1] = cVar2;
        *pcVar1 = cVar2;
        pcVar1 = pcVar1 + 3;
        cVar2 = cVar2 + cVar3;
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00b23058 @ 00b23058 ////

void FUN_00b23058(int *param_1,byte *param_2,int param_3,byte *param_4,byte param_5)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pbVar5 = param_4;
  iVar4 = param_3;
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar10 = *param_1;
  if (((bVar1 < 9) && (param_3 != 0)) || ((bVar1 == 0x10 && (param_4 != (byte *)0x0)))) {
    cVar2 = (char)param_1[2];
    if (cVar2 == '\0') {
      if ((bVar1 == 2) && (param_4 = param_2, iVar10 != 0)) {
        param_3 = (iVar10 - 1U >> 2) + 1;
        do {
          uVar6 = (uint)*param_4;
          uVar8 = uVar6 & 0xc0;
          uVar7 = uVar6 & 3;
          uVar9 = uVar6 & 0xc;
          uVar6 = uVar6 & 0x30;
          param_3 = param_3 + -1;
          *param_4 = (byte)((byte)(*(byte *)(((uVar9 << 2 | uVar9) << 2 | (int)uVar9 >> 2 | uVar9) +
                                            iVar4) & 0xcf |
                                  *(byte *)((((uVar7 << 2 | uVar7) << 2 | uVar7) << 2 | uVar7) +
                                           iVar4) >> 2) >> 2 |
                           *(byte *)(((int)((int)uVar6 >> 2 | uVar6) >> 2 | uVar6 << 2 | uVar6) +
                                    iVar4) & 0xc3) >> 2 |
                     *(byte *)(((int)((int)((int)uVar8 >> 2 | uVar8) >> 2 | uVar8) >> 2 | uVar8) +
                              iVar4) & 0xc0;
          param_4 = param_4 + 1;
        } while (param_3 != 0);
      }
      cVar2 = *(char *)((int)param_1 + 9);
      if (cVar2 == '\x04') {
        if (iVar10 != 0) {
          iVar10 = (iVar10 - 1U >> 1) + 1;
          do {
            uVar7 = *param_2 & 0xf0;
            uVar6 = *param_2 & 0xf;
            *param_2 = *(byte *)(((int)uVar7 >> 4 | uVar7) + iVar4) & 0xf0 |
                       *(byte *)((uVar6 << 4 | uVar6) + iVar4) >> 4;
            param_2 = param_2 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (cVar2 == '\b') {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + iVar4);
          param_2 = param_2 + 1;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(pbVar5 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 2;
        }
      }
    }
    else if (cVar2 == '\x02') {
      if (bVar1 == 8) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + param_3);
          param_2[1] = *(byte *)((uint)param_2[1] + param_3);
          param_2[2] = *(byte *)((uint)param_2[2] + param_3);
          param_2 = param_2 + 3;
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 6;
        }
      }
    }
    else if (cVar2 == '\x04') {
      if (bVar1 == 8) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + param_3);
          param_2 = param_2 + 2;
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          *param_2 = (byte)((ushort)uVar3 >> 8);
          param_2[1] = (byte)uVar3;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (cVar2 == '\x06') {
      if (bVar1 == 8) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *param_2 = *(byte *)((uint)*param_2 + param_3);
          param_2[1] = *(byte *)((uint)param_2[1] + param_3);
          param_2[2] = *(byte *)((uint)param_2[2] + param_3);
          param_2 = param_2 + 4;
        }
      }
      else {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[1] >> (param_5 & 0x1f)) * 4) +
                   (uint)*param_2 * 2);
          param_2[1] = (byte)uVar3;
          *param_2 = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[3] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[2] * 2);
          param_2[3] = (byte)uVar3;
          param_2[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(param_4 + (uint)(param_2[5] >> (param_5 & 0x1f)) * 4) +
                   (uint)param_2[4] * 2);
          param_2[4] = (byte)((ushort)uVar3 >> 8);
          param_2[5] = (byte)uVar3;
          param_2 = param_2 + 8;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00b233aa @ 00b233aa ////

void FUN_00b233aa(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar2 = *param_1;
  if ((char)param_1[2] == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        pbVar6 = (byte *)(uVar2 + param_2 + -1);
        iVar3 = 7 - (uVar2 - 1 & 7);
        pbVar5 = (byte *)((uVar2 - 1 >> 3) + param_2);
        for (uVar7 = uVar2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar6 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar1 == 2) {
        pbVar6 = (byte *)(uVar2 + param_2 + -1);
        iVar3 = (3 - (uVar2 - 1 & 3)) * 2;
        pbVar5 = (byte *)((uVar2 - 1 >> 2) + param_2);
        for (uVar7 = uVar2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar6 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar1 == 4) {
        pbVar6 = (byte *)(uVar2 + param_2 + -1);
        iVar3 = (uVar2 & 1) << 2;
        pbVar5 = (byte *)((uVar2 - 1 >> 1) + param_2);
        for (uVar7 = uVar2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar6 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 4;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar2;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)(uVar2 + param_2 + -1);
      if (param_4 == 0) {
        uVar7 = uVar2 * 3;
        puVar4 = (undefined1 *)((uVar7 - 1) + param_2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *(undefined1 *)((uint)*pbVar6 * 3 + 2 + param_3);
          puVar4[-1] = *(undefined1 *)((uint)*pbVar6 * 3 + 1 + param_3);
          puVar4[-2] = *(undefined1 *)(param_3 + (uint)*pbVar6 * 3);
          puVar4 = puVar4 + -3;
          pbVar6 = pbVar6 + -1;
        }
        *(undefined1 *)((int)param_1 + 0xb) = 0x18;
        *(undefined1 *)(param_1 + 2) = 2;
        *(undefined1 *)((int)param_1 + 10) = 3;
      }
      else {
        uVar7 = uVar2 * 4;
        puVar4 = (undefined1 *)((uVar7 - 1) + param_2);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          if ((int)(uint)*pbVar6 < param_5) {
            *puVar4 = *(undefined1 *)((uint)*pbVar6 + param_4);
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *(undefined1 *)((uint)*pbVar6 * 3 + 2 + param_3);
          puVar4[-2] = *(undefined1 *)((uint)*pbVar6 * 3 + 1 + param_3);
          puVar4[-3] = *(undefined1 *)(param_3 + (uint)*pbVar6 * 3);
          puVar4 = puVar4 + -4;
          pbVar6 = pbVar6 + -1;
        }
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        *(undefined1 *)(param_1 + 2) = 6;
        *(undefined1 *)((int)param_1 + 10) = 4;
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      param_1[1] = uVar7;
    }
  }
  return;
}


//// FUNCTION FUN_00b235b5 @ 00b235b5 ////

void FUN_00b235b5(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  ushort uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  iVar2 = *param_1;
  if ((char)param_1[2] == '\0') {
    uVar9 = 0;
    if (param_3 != 0) {
      uVar9 = *(ushort *)(param_3 + 8);
    }
    bVar3 = *(byte *)((int)param_1 + 9);
    if (bVar3 < 8) {
      if (bVar3 == 1) {
        uVar9 = uVar9 * 0xff;
        pcVar1 = (char *)(iVar2 + -1 + param_2);
        iVar5 = 7 - (iVar2 - 1U & 7);
        pbVar6 = (byte *)((iVar2 - 1U >> 3) + param_2);
        for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pcVar1 = -((*pbVar6 >> ((byte)iVar5 & 0x1f) & 1) != 0);
          if (iVar5 == 7) {
            iVar5 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          pcVar1 = pcVar1 + -1;
        }
      }
      else if (bVar3 == 2) {
        uVar9 = uVar9 * 0x55;
        pbVar6 = (byte *)(iVar2 + -1 + param_2);
        iVar5 = (3 - (iVar2 - 1U & 3)) * 2;
        pbVar7 = (byte *)((iVar2 - 1U >> 2) + param_2);
        for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
          bVar3 = *pbVar7 >> ((byte)iVar5 & 0x1f) & 3;
          *pbVar6 = ((bVar3 << 2 | bVar3) << 2 | bVar3) << 2 | bVar3;
          if (iVar5 == 6) {
            iVar5 = 0;
            pbVar7 = pbVar7 + -1;
          }
          else {
            iVar5 = iVar5 + 2;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar3 == 4) {
        uVar9 = uVar9 * 0x11;
        pbVar6 = (byte *)(iVar2 + -1 + param_2);
        pbVar7 = (byte *)((iVar2 - 1U >> 1) + param_2);
        iVar5 = (iVar2 - 1U & 1) * -4 + 4;
        for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
          bVar3 = *pbVar7 >> ((byte)iVar5 & 0x1f);
          *pbVar6 = bVar3 << 4 | bVar3 & 0xf;
          iVar4 = 4;
          if (iVar5 == 4) {
            iVar4 = 0;
            pbVar7 = pbVar7 + -1;
          }
          pbVar6 = pbVar6 + -1;
          iVar5 = iVar4;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar2;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)(iVar2 + -1 + param_2);
      puVar10 = (undefined1 *)(param_2 + -1 + iVar2 * 2);
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*pbVar6 == uVar9) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 0xff;
        }
        puVar10[-1] = *pbVar6;
        puVar10 = puVar10 + -2;
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar10 = (undefined1 *)(param_1[1] + -1 + param_2);
      puVar11 = (undefined1 *)(param_2 + -1 + param_1[1] * 2);
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (CONCAT11(puVar10[-1],*puVar10) == uVar9) {
          *puVar11 = 0;
          puVar11[-1] = 0;
        }
        else {
          *puVar11 = 0xff;
          puVar11[-1] = 0xff;
        }
        puVar11[-2] = *puVar10;
        puVar11[-3] = puVar10[-1];
        puVar11 = puVar11 + -4;
        puVar10 = puVar10 + -2;
      }
    }
    *(undefined1 *)(param_1 + 2) = 4;
    *(undefined1 *)((int)param_1 + 10) = 2;
    bVar3 = *(char *)((int)param_1 + 9) << 1;
  }
  else {
    if ((char)param_1[2] != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)(param_1[1] + -1 + param_2);
      puVar10 = (undefined1 *)(param_2 + -1 + iVar2 * 4);
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        if ((((ushort)pbVar6[-2] == *(ushort *)(param_3 + 2)) &&
            ((ushort)pbVar6[-1] == *(ushort *)(param_3 + 4))) &&
           ((ushort)*pbVar6 == *(ushort *)(param_3 + 6))) {
          *puVar10 = 0;
        }
        else {
          *puVar10 = 0xff;
        }
        puVar10[-1] = *pbVar6;
        puVar10[-2] = pbVar6[-1];
        puVar10[-3] = pbVar6[-2];
        puVar10 = puVar10 + -4;
        pbVar6 = pbVar6 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar10 = (undefined1 *)(param_1[1] + -1 + param_2);
      puVar11 = (undefined1 *)(param_2 + -1 + iVar2 * 8);
      for (iVar8 = iVar2; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (((CONCAT11(puVar10[-5],puVar10[-4]) == *(short *)(param_3 + 2)) &&
            (CONCAT11(puVar10[-3],puVar10[-2]) == *(short *)(param_3 + 4))) &&
           (CONCAT11(puVar10[-1],*puVar10) == *(short *)(param_3 + 6))) {
          *puVar11 = 0;
          puVar11[-1] = 0;
        }
        else {
          *puVar11 = 0xff;
          puVar11[-1] = 0xff;
        }
        puVar11[-2] = *puVar10;
        puVar11[-3] = puVar10[-1];
        puVar11[-4] = puVar10[-2];
        puVar11[-5] = puVar10[-3];
        puVar11[-6] = puVar10[-4];
        puVar11[-7] = puVar10[-5];
        puVar11 = puVar11 + -8;
        puVar10 = puVar10 + -6;
      }
    }
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    bVar3 = *(char *)((int)param_1 + 9) << 2;
  }
  *(byte *)((int)param_1 + 0xb) = bVar3;
  param_1[1] = (uint)bVar3 * iVar2 >> 3;
  return;
}


//// FUNCTION FUN_00b2390e @ 00b2390e ////

void FUN_00b2390e(int *param_1,byte *param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  cVar1 = (char)param_1[2];
  iVar5 = *param_1;
  if (((cVar1 == '\x02') && (param_3 != 0)) &&
     (iVar3 = iVar5, pbVar4 = param_2, *(char *)((int)param_1 + 9) == '\b')) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      bVar2 = *param_2;
      pbVar6 = param_2 + 1;
      pbVar7 = param_2 + 2;
      param_2 = param_2 + 3;
      *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar6 & 0xf8) << 2 | (int)(uint)*pbVar7 >> 3) +
                         param_3);
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    if (((cVar1 != '\x06') || (param_3 == 0)) ||
       (iVar3 = iVar5, pbVar4 = param_2, *(char *)((int)param_1 + 9) != '\b')) {
      if (cVar1 != '\x03') {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      if (*(char *)((int)param_1 + 9) != '\b') {
        return;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_2 = *(byte *)((uint)*param_2 + param_4);
        param_2 = param_2 + 1;
      }
      return;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      bVar2 = *param_2;
      pbVar6 = param_2 + 1;
      pbVar7 = param_2 + 2;
      param_2 = param_2 + 4;
      *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar6 & 0xf8) << 2 | (int)(uint)*pbVar7 >> 3) +
                         param_3);
      pbVar4 = pbVar4 + 1;
    }
  }
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 9);
  *(undefined1 *)(param_1 + 2) = 3;
  *(undefined1 *)((int)param_1 + 10) = 1;
  param_1[1] = (uint)*(byte *)((int)param_1 + 9) * iVar5 + 7 >> 3;
  return;
}


//// FUNCTION FUN_00b23a1f @ 00b23a1f ////

void FUN_00b23a1f(int *param_1)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ushort local_10;
  uint local_8;
  
  piVar4 = param_1;
  if ((float)param_1[0x4c] != 0.0) {
    if (*(byte *)((int)param_1 + 0x117) < 9) {
      pvVar5 = FUN_00b2b0b9(param_1,0x100);
      param_1 = (int *)0x0;
      piVar4[0x4e] = (int)pvVar5;
      do {
        FUN_00ace9b0();
        lVar12 = __ftol();
        piVar2 = (int *)((int)param_1 + 1);
        *(char *)((int)param_1 + piVar4[0x4e]) = (char)lVar12;
        param_1 = piVar2;
      } while ((int)piVar2 < 0x100);
    }
    else {
      if ((*(byte *)((int)param_1 + 0x116) & 2) == 0) {
        local_8 = (uint)*(byte *)((int)param_1 + 0x153);
      }
      else {
        local_8 = (uint)*(byte *)(param_1 + 0x54);
        if ((uint)*(byte *)(param_1 + 0x54) < (uint)*(byte *)((int)param_1 + 0x151)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x151);
        }
        if (local_8 < *(byte *)((int)param_1 + 0x152)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x152);
        }
      }
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = 0x10 - local_8;
      }
      if (((*(byte *)((int)param_1 + 0x61) & 4) != 0) && ((int)local_8 < 5)) {
        local_8 = 5;
      }
      if (8 < (int)local_8) {
        local_8 = 8;
      }
      if ((int)local_8 < 0) {
        local_8 = 0;
      }
      bVar3 = (byte)local_8;
      bVar7 = 8 - bVar3;
      iVar8 = 1 << (bVar7 & 0x1f);
      param_1[0x4b] = local_8 & 0xff;
      pvVar5 = FUN_00b2b0b9(param_1,iVar8 << 2);
      puVar1 = (ushort *)(param_1 + 0x18);
      param_1[0x51] = (int)pvVar5;
      param_1 = (int *)0x0;
      if ((*puVar1 & 0x480) == 0) {
        if (0 < iVar8) {
          do {
            pvVar5 = FUN_00b2b0b9(piVar4,0x200);
            *(void **)(piVar4[0x51] + (int)param_1 * 4) = pvVar5;
            iVar10 = 0;
            do {
              FUN_00ace9b0();
              lVar12 = __ftol();
              *(short *)(iVar10 + *(int *)(piVar4[0x51] + (int)param_1 * 4)) = (short)lVar12;
              iVar10 = iVar10 + 2;
            } while (iVar10 < 0x200);
            param_1 = (int *)((int)param_1 + 1);
          } while ((int)param_1 < iVar8);
        }
      }
      else {
        if (0 < iVar8) {
          do {
            pvVar5 = FUN_00b2b0b9(piVar4,0x200);
            piVar2 = (int *)((int)param_1 + 1);
            *(void **)(piVar4[0x51] + (int)param_1 * 4) = pvVar5;
            param_1 = piVar2;
          } while ((int)piVar2 < iVar8);
        }
        uVar11 = 0;
        param_1 = (int *)0x0;
        do {
          FUN_00ace9b0();
          lVar12 = __ftol();
          if (uVar11 <= (uint)lVar12) {
            local_10 = (ushort)(((uint)param_1 & 0xff) << 8) | (ushort)param_1;
            do {
              uVar9 = uVar11 >> (bVar7 & 0x1f);
              uVar6 = 0xff >> (bVar3 & 0x1f) & uVar11;
              uVar11 = uVar11 + 1;
              *(ushort *)(*(int *)(piVar4[0x51] + uVar6 * 4) + uVar9 * 2) = local_10;
            } while (uVar11 <= (uint)lVar12);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x100);
        if (uVar11 < (uint)(iVar8 << 8)) {
          do {
            *(undefined2 *)
             (*(int *)(piVar4[0x51] + (0xff >> (bVar3 & 0x1f) & uVar11) * 4) +
             (uVar11 >> (bVar7 & 0x1f)) * 2) = 0xffff;
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)(iVar8 << 8));
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00b23d26 @ 00b23d26 ////

void FUN_00b23d26(int *param_1)

{
  char cVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  piVar2 = param_1;
  cVar1 = *(char *)((int)param_1 + 0x116);
  if ((param_1[0x18] & 0x602000U) != 0) {
    FUN_00b23a1f(param_1);
    if (cVar1 == '\x03') {
      uVar5 = (uint)*(ushort *)(param_1 + 0x42);
      if (uVar5 != 0) {
        pbVar3 = (byte *)(param_1[0x41] + 2);
        do {
          pbVar3[-2] = *(byte *)((uint)pbVar3[-2] + param_1[0x4e]);
          pbVar3[-1] = *(byte *)((uint)pbVar3[-1] + param_1[0x4e]);
          *pbVar3 = *(byte *)((uint)*pbVar3 + param_1[0x4e]);
          pbVar3 = pbVar3 + 3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x18) & 8) != 0) && (cVar1 == '\x03')) {
    pbVar3 = (byte *)((int)param_1 + 0x152);
    iVar6 = 8 - (uint)*(byte *)(param_1 + 0x54);
    param_1 = (int *)(8 - (uint)*(byte *)((int)param_1 + 0x151));
    local_8 = 8 - (uint)*pbVar3;
    if ((iVar6 < 0) || (8 < iVar6)) {
      iVar6 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((local_8 < 0) || (8 < local_8)) {
      local_8 = 0;
    }
    if (*(ushort *)(piVar2 + 0x42) != 0) {
      iVar4 = 0;
      uVar5 = (uint)*(ushort *)(piVar2 + 0x42);
      do {
        *(byte *)(iVar4 + piVar2[0x41]) = *(byte *)(iVar4 + piVar2[0x41]) >> ((byte)iVar6 & 0x1f);
        pbVar3 = (byte *)(iVar4 + 1 + piVar2[0x41]);
        *pbVar3 = *pbVar3 >> ((byte)param_1 & 0x1f);
        pbVar3 = (byte *)(iVar4 + 2 + piVar2[0x41]);
        *pbVar3 = *pbVar3 >> ((byte)local_8 & 0x1f);
        iVar4 = iVar4 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


//// FUNCTION FUN_00b23e3c @ 00b23e3c ////

void FUN_00b23e3c(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x37] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"NULL row buffer");
  }
  if ((*(byte *)((int)param_1 + 0x61) & 0x10) != 0) {
    if ((char)param_1[0x3e] == '\x03') {
      FUN_00b233aa((uint *)(param_1 + 0x3c),param_1[0x37] + 1,param_1[0x41],param_1[0x57],
                   (uint)*(ushort *)((int)param_1 + 0x10a));
    }
    else {
      if (*(short *)((int)param_1 + 0x10a) == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = param_1 + 0x58;
      }
      FUN_00b235b5(param_1 + 0x3c,param_1[0x37] + 1,(int)piVar1);
    }
  }
  if (((*(byte *)((int)param_1 + 0x61) & 0x20) != 0) && (*(char *)((int)param_1 + 0x116) != '\x03'))
  {
    FUN_00b23058(param_1 + 0x3c,(byte *)(param_1[0x37] + 1),param_1[0x4e],(byte *)param_1[0x51],
                 (byte)param_1[0x4b]);
  }
  if ((*(byte *)((int)param_1 + 0x61) & 4) != 0) {
    FUN_00b22d73(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
    FUN_00b2390e(param_1 + 0x3c,(byte *)(param_1[0x37] + 1),param_1[0x5d],param_1[0x5e]);
    if (param_1[0x3d] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    FUN_00b22bf5(param_1 + 0x3c,(byte *)(param_1[0x37] + 1),(byte *)((int)param_1 + 0x155));
  }
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    FUN_00b22ae2(param_1 + 0x3c,param_1[0x37] + 1);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_00b221ed(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  if ((*(byte *)((int)param_1 + 0x61) & 0x80) != 0) {
    FUN_00b22dbd((uint *)(param_1 + 0x3c),param_1[0x37] + 1,(uint)*(ushort *)((int)param_1 + 0x11e),
                 param_1[0x17]);
  }
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    FUN_00b221ba(param_1 + 0x3c,(undefined1 *)(param_1[0x37] + 1));
  }
  return;
}


//// FUNCTION FUN_00b23fdd @ 00b23fdd ////

void FUN_00b23fdd(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(param_1,"Call to NULL read function");
}


//// FUNCTION FUN_00b24009 @ 00b24009 ////

void FUN_00b24009(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_00b20556(param_1,"It\'s an error to set both read_data_fn and write_data_fn in the ");
    FUN_00b20556(param_1,"same structure.  Resetting write_data_fn to NULL.");
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}


//// FUNCTION FUN_00b2404a @ 00b2404a ////

float * FUN_00b2404a(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_3[2];
  fVar3 = *param_2;
  fVar4 = param_3[1];
  fVar5 = *param_2;
  fVar6 = param_3[3];
  fVar7 = param_2[1];
  fVar8 = param_3[6];
  fVar9 = param_2[1];
  fVar10 = param_3[5];
  fVar11 = param_2[1];
  fVar12 = param_3[7];
  fVar13 = param_3[0xd];
  fVar14 = param_3[0xe];
  fVar15 = param_3[0xf];
  *param_1 = param_3[0xc] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar13 + fVar9 * fVar10 + fVar3 * fVar4;
  param_1[2] = fVar14 + fVar7 * fVar8 + fVar1 * fVar2;
  param_1[3] = fVar15 + fVar11 * fVar12 + fVar5 * fVar6;
  return param_1;
}


//// FUNCTION FUN_00b240b5 @ 00b240b5 ////

float * FUN_00b240b5(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar2 = param_3[1];
  fVar3 = param_2[1];
  fVar4 = param_3[5];
  *param_1 = param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar3 * fVar4 + fVar1 * fVar2;
  return param_1;
}


//// FUNCTION FUN_00b240ec @ 00b240ec ////

float * FUN_00b240ec(float *param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_2;
  fVar2 = param_3[2];
  fVar3 = *param_2;
  fVar4 = param_3[1];
  fVar5 = *param_2;
  fVar6 = param_3[3];
  fVar7 = param_2[1];
  fVar8 = param_3[6];
  fVar9 = param_2[1];
  fVar10 = param_3[5];
  fVar11 = param_2[1];
  fVar12 = param_3[7];
  fVar13 = param_2[2];
  fVar14 = param_3[10];
  fVar15 = param_2[2];
  fVar16 = param_3[9];
  fVar17 = param_2[2];
  fVar18 = param_3[0xb];
  fVar19 = param_3[0xd];
  fVar20 = param_3[0xe];
  fVar21 = param_3[0xf];
  *param_1 = param_3[0xc] + param_2[2] * param_3[8] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar19 + fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4;
  param_1[2] = fVar20 + fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2;
  param_1[3] = fVar21 + fVar17 * fVar18 + fVar11 * fVar12 + fVar5 * fVar6;
  return param_1;
}


//// FUNCTION FUN_00b24179 @ 00b24179 ////

float * FUN_00b24179(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_3[1];
  fVar3 = *param_2;
  fVar4 = param_3[2];
  fVar5 = param_2[1];
  fVar6 = param_3[5];
  fVar7 = param_2[1];
  fVar8 = param_3[6];
  fVar9 = param_2[2];
  fVar10 = param_3[9];
  fVar11 = param_2[2];
  fVar12 = param_3[10];
  *param_1 = param_2[2] * param_3[8] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  param_1[2] = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  return param_1;
}


//// FUNCTION FUN_00b241da @ 00b241da ////

float * FUN_00b241da(float *param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *param_2;
  fVar2 = param_3[2];
  fVar3 = *param_2;
  fVar4 = param_3[1];
  fVar5 = *param_2;
  fVar6 = param_3[3];
  fVar7 = param_2[1];
  fVar8 = param_3[6];
  fVar9 = param_2[1];
  fVar10 = param_3[5];
  fVar11 = param_2[1];
  fVar12 = param_3[7];
  fVar13 = param_2[2];
  fVar14 = param_3[10];
  fVar15 = param_2[2];
  fVar16 = param_3[9];
  fVar17 = param_2[2];
  fVar18 = param_3[0xb];
  fVar19 = param_2[3];
  fVar20 = param_3[0xe];
  fVar21 = param_2[3];
  fVar22 = param_3[0xd];
  fVar23 = param_2[3];
  fVar24 = param_3[0xf];
  *param_1 = param_2[3] * param_3[0xc] +
             param_2[2] * param_3[8] + param_2[1] * param_3[4] + *param_2 * *param_3;
  param_1[1] = fVar21 * fVar22 + fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4;
  param_1[2] = fVar19 * fVar20 + fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2;
  param_1[3] = fVar23 * fVar24 + fVar17 * fVar18 + fVar11 * fVar12 + fVar5 * fVar6;
  return param_1;
}


//// FUNCTION FUN_00b24275 @ 00b24275 ////

float10 FUN_00b24275(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0xc & 0xff8;
  return ((float10)(float)(param_1 & 0xffffff | 0x3f000000) *
          (float10)*(float *)(&DAT_00e9bbd0 + uVar1) + (float10)*(float *)(&DAT_00e9bbd4 + uVar1)) *
         (float10)(float)(0xbeffffff - param_1 >> 1 & 0xff800000);
}


//// FUNCTION FUN_00b242ba @ 00b242ba ////

float * FUN_00b242ba(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar5 = (float10)*param_2 * (float10)*param_2 + (float10)param_2[1] * (float10)param_2[1] +
          (float10)param_2[2] * (float10)param_2[2];
  fVar1 = (float)fVar5;
  if (fVar1 == 0.0) {
    ffree(fVar5);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  else if ((uint)ABS((float)(fVar5 - (float10)1)) < 0x3727c5ad) {
    if (param_1 != param_2) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
    }
  }
  else {
    uVar4 = (uint)fVar1 >> 0xc & 0xff8;
    fVar3 = ((float)((uint)fVar1 & 0xffffff | 0x3f000000) * *(float *)(&DAT_00e9bbd0 + uVar4) +
            *(float *)(&DAT_00e9bbd4 + uVar4)) * (float)(0xbeffffffU - (int)fVar1 >> 1 & 0xff800000)
    ;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    *param_1 = *param_2 * fVar3;
    param_1[1] = fVar1 * fVar3;
    param_1[2] = fVar2 * fVar3;
  }
  return param_1;
}


//// FUNCTION FUN_00b24386 @ 00b24386 ////

void FUN_00b24386(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_44 [16];
  
  if (param_3 == param_1) {
    if (param_2 != param_1) {
      iVar6 = -4;
      do {
        iVar5 = -0x10;
        fVar1 = param_3[iVar6 + 4];
        fVar2 = param_3[iVar6 + 8];
        fVar3 = param_3[iVar6 + 0xc];
        fVar4 = param_3[iVar6 + 0x10];
        do {
          param_1[iVar5 + 0x10] =
               (float)((float10)fVar4 * (float10)param_2[iVar5 + 0x13] +
                       (float10)fVar2 * (float10)param_2[iVar5 + 0x11] +
                      (float10)fVar1 * (float10)param_2[iVar5 + 0x10] +
                      (float10)fVar3 * (float10)param_2[iVar5 + 0x12]);
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0);
        ffree((float10)fVar1);
        ffree((float10)fVar2);
        ffree((float10)fVar3);
        ffree((float10)fVar4);
        param_1 = param_1 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      return;
    }
    pfVar7 = local_44;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *param_3;
      param_3 = param_3 + 1;
      pfVar7 = pfVar7 + 1;
    }
    param_3 = local_44;
  }
  iVar6 = -4;
  do {
    iVar5 = -4;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    do {
      param_1[iVar5 + 4] =
           (float)((float10)fVar4 * (float10)param_3[iVar5 + 0x10] +
                   (float10)fVar2 * (float10)param_3[iVar5 + 8] +
                  (float10)fVar1 * (float10)param_3[iVar5 + 4] +
                  (float10)fVar3 * (float10)param_3[iVar5 + 0xc]);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
    ffree((float10)fVar1);
    ffree((float10)fVar2);
    ffree((float10)fVar3);
    ffree((float10)fVar4);
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  return;
}


//// FUNCTION FUN_00b2446b @ 00b2446b ////

void FUN_00b2446b(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_48 [17];
  
  if ((param_1 == param_2) || (pfVar5 = param_1, param_1 == param_3)) {
    pfVar5 = local_48;
  }
  iVar8 = -4;
  do {
    iVar7 = -4;
    pfVar6 = pfVar5 + iVar8 + 4;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    do {
      *pfVar6 = (float)((float10)fVar4 * (float10)param_3[iVar7 + 0x10] +
                        (float10)fVar2 * (float10)param_3[iVar7 + 8] +
                       (float10)fVar1 * (float10)param_3[iVar7 + 4] +
                       (float10)fVar3 * (float10)param_3[iVar7 + 0xc]);
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    ffree((float10)fVar1);
    ffree((float10)fVar2);
    ffree((float10)fVar3);
    ffree((float10)fVar4);
    param_2 = param_2 + 4;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0);
  if (pfVar5 != param_1) {
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *param_1 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00b244fb @ 00b244fb ////

void FUN_00b244fb(undefined4 *param_1)

{
  *param_1 = FUN_00b2404a;
  param_1[1] = FUN_00b240ec;
  param_1[2] = FUN_00b241da;
  param_1[3] = FUN_00b24386;
  param_1[4] = FUN_00b2446b;
  param_1[5] = FUN_00b240b5;
  param_1[6] = FUN_00b24179;
  param_1[7] = FUN_00b242ba;
  param_1[0x23] = FUN_00b241da;
  return;
}


//// FUNCTION FUN_00b24545 @ 00b24545 ////

void __fastcall FUN_00b24545(uint param_1)

{
  float *in_EAX;
  
  *in_EAX = (float)(param_1 >> 0xb & 0x1f) * 0.032258064;
  in_EAX[1] = (float)(param_1 >> 5 & 0x3f) * 0.015873017;
  in_EAX[2] = (float)(param_1 & 0x1f) * 0.032258064;
  in_EAX[3] = 1.0;
  return;
}


//// FUNCTION FUN_00b24593 @ 00b24593 ////

undefined4 __fastcall FUN_00b24593(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    if (param_1[3] == 0.0) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      fVar1 = 0.0;
LAB_00b2460b:
      param_1[2] = fVar1;
    }
    else if (param_1[3] < 1.0) {
      fVar1 = 1.0 / param_1[3];
      if (param_1[3] <= *param_1) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = fVar1 * *param_1;
      }
      *param_1 = fVar2;
      if (param_1[3] <= param_1[1]) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = fVar1 * param_1[1];
      }
      param_1[1] = fVar2;
      if (param_1[3] <= param_1[2]) {
        fVar1 = 1.0;
      }
      else {
        fVar1 = fVar1 * param_1[2];
      }
      goto LAB_00b2460b;
    }
    param_1 = param_1 + 4;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_00b24617 @ 00b24617 ////

undefined4 __fastcall FUN_00b24617(float *param_1)

{
  float *in_EAX;
  int iVar1;
  
  iVar1 = 0x10;
  do {
    *param_1 = in_EAX[3] * *in_EAX;
    iVar1 = iVar1 + -1;
    param_1[1] = in_EAX[1] * in_EAX[3];
    param_1[2] = in_EAX[2] * in_EAX[3];
    param_1[3] = in_EAX[3];
    in_EAX = in_EAX + 4;
    param_1 = param_1 + 4;
  } while (iVar1 != 0);
  return 0;
}


//// FUNCTION FUN_00b24647 @ 00b24647 ////

void FUN_00b24647(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  return;
}


//// FUNCTION FUN_00b24691 @ 00b24691 ////

void __fastcall FUN_00b24691(undefined4 *param_1)

{
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)param_1 >> 0x10),in_FPUControlWord);
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_00b246b0 @ 00b246b0 ////

int FUN_00b246b0(float param_1)

{
  return (int)ROUND(param_1);
}


//// FUNCTION FUN_00b246c3 @ 00b246c3 ////

void FUN_00b246c3(void)

{
  return;
}


//// FUNCTION FUN_00b246cf @ 00b246cf ////

uint __fastcall FUN_00b246cf(float *param_1)

{
  float local_20;
  float local_1c;
  float local_18;
  
  if (0.0 <= *param_1) {
    if (1.0 < *param_1) {
      local_20 = 1.0;
    }
    else {
      local_20 = *param_1;
    }
  }
  else {
    local_20 = 0.0;
  }
  if (0.0 <= param_1[1]) {
    if (1.0 < param_1[1]) {
      local_1c = 1.0;
    }
    else {
      local_1c = param_1[1];
    }
  }
  else {
    local_1c = 0.0;
  }
  if (0.0 <= param_1[2]) {
    if (param_1[2] <= 1.0) {
      local_18 = param_1[2];
    }
    else {
      local_18 = 1.0;
    }
  }
  else {
    local_18 = 0.0;
  }
  return ((int)ROUND(local_20 * 31.0 + 0.5) << 6 | (int)ROUND(local_1c * 63.0 + 0.5)) << 5 |
         (int)ROUND(local_18 * 31.0 + 0.5);
}


//// FUNCTION FUN_00b247d2 @ 00b247d2 ////

void FUN_00b247d2(float *param_1,float *param_2,int param_3,uint param_4)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  undefined2 in_FPUControlWord;
  float local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  undefined4 *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_4 == 6) {
    pfVar5 = (float *)&DAT_00d8d354;
    local_20 = &DAT_00d8d33c;
  }
  else {
    pfVar5 = (float *)&DAT_00d8d31c;
    local_20 = (undefined4 *)&DAT_00d8d2fc;
  }
  uVar3 = 0;
  local_8 = 1.0;
  local_c = 0.0;
  if (param_4 == 8) {
    do {
      pfVar2 = (float *)(param_3 + uVar3 * 4);
      if (*pfVar2 < local_8) {
        local_8 = *pfVar2;
      }
      if (local_c < *pfVar2) {
        local_c = *pfVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  else {
    do {
      pfVar2 = (float *)(param_3 + uVar3 * 4);
      if ((*pfVar2 < local_8) && (0.0 < *pfVar2)) {
        local_8 = *pfVar2;
      }
      if ((local_c < *pfVar2) && (*pfVar2 < 1.0)) {
        local_c = *pfVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
    if (local_8 == local_c) {
      local_c = 1.0;
    }
  }
  uVar3 = param_4 - 1;
  local_28 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    local_28 = local_28 + 4.2949673e+09;
  }
  local_24 = CONCAT22(local_24._2_2_,in_FPUControlWord);
  local_38 = local_24;
  local_24 = 0;
  while (0.00390625 <= local_c - local_8) {
    local_2c = local_28 / (local_c - local_8);
    if (param_4 != 0) {
      iVar4 = (int)local_20 - (int)pfVar5;
      pfVar2 = pfVar5;
      uVar6 = param_4;
      do {
        *(float *)(((int)local_58 - (int)pfVar5) + (int)pfVar2) =
             local_8 * *pfVar2 + local_c * *(float *)(iVar4 + (int)pfVar2);
        pfVar2 = pfVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 == 6) {
      local_40 = 0;
      local_3c = 0x3f800000;
    }
    uVar6 = 0;
    local_10 = 0.0;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = 0.0;
    do {
      pfVar2 = (float *)(param_3 + uVar6 * 4);
      fVar1 = (*pfVar2 - local_8) * local_2c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        if (fVar1 < local_28) {
          local_30 = fVar1 + 0.5;
          local_34 = (uint)ROUND(fVar1 + 0.5);
        }
        else {
          local_34 = uVar3;
          if ((param_4 == 6) &&
             (fVar1 = (local_c + 1.0) * 0.5, fVar1 < *pfVar2 != (fVar1 == *pfVar2)))
          goto LAB_00b249fd;
        }
LAB_00b249bb:
        if (local_34 < param_4) {
          local_10 = (*pfVar2 - local_58[local_34]) * pfVar5[local_34] + local_10;
          local_18 = pfVar5[local_34] * pfVar5[local_34] + local_18;
          local_14 = (*pfVar2 - local_58[local_34]) * (float)local_20[local_34] + local_14;
          fVar1 = (float)local_20[local_34];
          local_1c = fVar1 * fVar1 + local_1c;
        }
      }
      else if ((param_4 != 6) || (local_8 * 0.5 < *pfVar2)) {
        local_34 = 0;
        goto LAB_00b249bb;
      }
LAB_00b249fd:
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    if (0.0 < local_18) {
      local_8 = local_8 - local_10 / local_18;
    }
    if (0.0 < local_1c) {
      local_c = local_c - local_14 / local_1c;
    }
    fVar1 = local_c;
    if (local_c < local_8) {
      local_c = local_8;
      local_8 = fVar1;
    }
    if (((local_10 * local_10 < 0.015625) && (local_14 * local_14 < 0.015625)) ||
       (local_24 = local_24 + 1, 7 < local_24)) break;
  }
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  *param_1 = local_8;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  *param_2 = local_c;
  return;
}


//// FUNCTION FUN_00b24af9 @ 00b24af9 ////

void FUN_00b24af9(float *param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
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
  int iVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  float fVar16;
  undefined2 in_FPUControlWord;
  float local_c4 [16];
  int local_84;
  float *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 *local_68;
  uint local_64;
  float local_60;
  float *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34 [6];
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  undefined4 uStack_8;
  
  fVar9 = param_4;
  if (param_4 == 4.2039e-45) {
    local_5c = (float *)&DAT_00d8d39c;
    local_68 = &DAT_00d8d390;
  }
  else {
    local_5c = (float *)&DAT_00d8d380;
    local_68 = (undefined4 *)&DAT_00d8d370;
  }
  local_34[4] = 0.0;
  local_34[5] = 0.0;
  local_14 = DAT_00e9cbd8;
  local_10 = DAT_00e9cbdc;
  local_1c = 0.0;
  local_c = DAT_00e9cbe0;
  uStack_8 = DAT_00e9cbe4;
  pfVar15 = (float *)((int)param_3 + 8);
  iVar10 = 0x10;
  local_80 = pfVar15;
  pfVar11 = pfVar15;
  iVar12 = iVar10;
  do {
    if (pfVar11[-2] < local_14) {
      local_14 = pfVar11[-2];
    }
    if (pfVar11[-1] < local_10) {
      local_10 = pfVar11[-1];
    }
    fVar16 = local_10;
    if (*pfVar11 < local_c) {
      local_c = *pfVar11;
    }
    if (local_34[4] < pfVar11[-2]) {
      local_34[4] = pfVar11[-2];
    }
    if (local_34[5] < pfVar11[-1]) {
      local_34[5] = pfVar11[-1];
    }
    if (local_1c < *pfVar11) {
      local_1c = *pfVar11;
    }
    fVar3 = local_1c;
    pfVar11 = pfVar11 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  fVar6 = local_34[4] - local_14;
  fVar5 = local_34[5] - local_10;
  fVar4 = local_1c - local_c;
  local_58 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if (1.1754944e-38 <= local_58) {
    fVar7 = 1.0 / local_58;
    local_78 = fVar6 * fVar7;
    local_74 = fVar5 * fVar7;
    local_70 = fVar7 * fVar4;
    local_54 = (local_34[4] + local_14) * 0.5;
    local_50 = (local_34[5] + local_10) * 0.5;
    local_4c = (local_1c + local_c) * 0.5;
    local_34[3] = 0.0;
    local_34[2] = 0.0;
    local_34[1] = 0.0;
    local_34[0] = 0.0;
    do {
      local_44 = (pfVar15[-2] - local_54) * fVar6 * fVar7;
      local_40 = (pfVar15[-1] - local_50) * fVar5 * fVar7;
      fVar2 = *pfVar15;
      pfVar15 = pfVar15 + 4;
      iVar10 = iVar10 + -1;
      fVar2 = (fVar2 - local_4c) * fVar7 * fVar4;
      fVar8 = local_40 + fVar2 + local_44;
      local_34[0] = fVar8 * fVar8 + local_34[0];
      fVar8 = (local_40 + local_44) - fVar2;
      local_34[1] = fVar8 * fVar8 + local_34[1];
      fVar8 = (local_44 - local_40) + fVar2;
      local_34[2] = fVar8 * fVar8 + local_34[2];
      fVar2 = (local_44 - local_40) - fVar2;
      local_34[3] = fVar2 * fVar2 + local_34[3];
    } while (iVar10 != 0);
    uVar14 = 0;
    uVar13 = 1;
    do {
      if (local_34[0] < local_34[uVar13]) {
        local_34[0] = local_34[uVar13];
        uVar14 = uVar13;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < 4);
    if ((uVar14 & 2) != 0) {
      local_10 = local_34[5];
      local_34[5] = fVar16;
    }
    if ((uVar14 & 1) != 0) {
      local_1c = local_c;
      local_c = fVar3;
    }
    if (0.00024414062 <= local_58) {
      iVar10 = (int)param_4 + -1;
      local_58 = (float)iVar10;
      if (iVar10 < 0) {
        local_58 = local_58 + 4.2949673e+09;
      }
      param_4 = (float)CONCAT22((short)((uint)iVar10 >> 0x10),in_FPUControlWord);
      local_64 = 0;
      local_7c = param_4;
      while( true ) {
        iVar10 = 0x10;
        if (fVar9 != 0.0) {
          pfVar11 = local_c4 + 1;
          iVar12 = (int)local_68 - (int)local_5c;
          pfVar15 = local_5c;
          fVar16 = fVar9;
          do {
            pfVar11[-1] = local_34[4] * *(float *)(iVar12 + (int)pfVar15) + local_14 * *pfVar15;
            *pfVar11 = local_34[5] * *(float *)(iVar12 + (int)pfVar15) + local_10 * *pfVar15;
            fVar3 = *pfVar15;
            pfVar1 = (float *)(iVar12 + (int)pfVar15);
            pfVar15 = pfVar15 + 1;
            pfVar11[1] = local_1c * *pfVar1 + local_c * fVar3;
            pfVar11 = pfVar11 + 4;
            fVar16 = (float)((int)fVar16 + -1);
          } while (fVar16 != 0.0);
        }
        fVar16 = local_34[4] - local_14;
        fVar6 = local_34[5] - local_10;
        fVar5 = local_1c - local_c;
        fVar3 = fVar16 * fVar16 + fVar6 * fVar6 + fVar5 * fVar5;
        if (fVar3 < 0.00024414062) break;
        fVar3 = local_58 / fVar3;
        local_44 = fVar3 * fVar16;
        local_40 = fVar6 * fVar3;
        local_3c = fVar3 * fVar5;
        local_34[2] = 0.0;
        local_34[1] = 0.0;
        local_34[0] = 0.0;
        local_4c = 0.0;
        local_50 = 0.0;
        local_54 = 0.0;
        param_3 = 0.0;
        param_4 = 0.0;
        pfVar11 = local_80;
        do {
          fVar4 = (*pfVar11 - local_c) * fVar3 * fVar5 +
                  (pfVar11[-2] - local_14) * fVar3 * fVar16 +
                  (pfVar11[-1] - local_10) * fVar6 * fVar3;
          local_60 = fVar4;
          if (fVar4 < local_58) {
            local_60 = fVar4 + 0.5;
            local_84 = (int)ROUND(fVar4 + 0.5);
          }
          else {
            local_84 = (int)fVar9 + -1;
          }
          pfVar15 = pfVar11 + -2;
          local_74 = local_c4[local_84 * 4 + 1] - pfVar11[-1];
          fVar4 = *pfVar11;
          fVar7 = local_5c[local_84] * 0.125;
          pfVar11 = pfVar11 + 4;
          iVar10 = iVar10 + -1;
          fVar2 = (float)local_68[local_84] * 0.125;
          param_4 = fVar7 * local_5c[local_84] + param_4;
          local_54 = fVar7 * (local_c4[local_84 * 4] - *pfVar15) + local_54;
          local_50 = fVar7 * local_74 + local_50;
          local_4c = fVar7 * (local_c4[local_84 * 4 + 2] - fVar4) + local_4c;
          param_3 = fVar2 * (float)local_68[local_84] + param_3;
          local_34[0] = fVar2 * (local_c4[local_84 * 4] - *pfVar15) + local_34[0];
          local_34[1] = local_74 * fVar2 + local_34[1];
          local_34[2] = fVar2 * (local_c4[local_84 * 4 + 2] - fVar4) + local_34[2];
        } while (iVar10 != 0);
        if (0.0 < param_4) {
          fVar16 = -1.0 / param_4;
          local_14 = local_54 * fVar16 + local_14;
          local_10 = local_50 * fVar16 + local_10;
          local_c = fVar16 * local_4c + local_c;
        }
        if (0.0 < param_3) {
          fVar16 = -1.0 / param_3;
          local_34[4] = local_34[0] * fVar16 + local_34[4];
          local_34[5] = local_34[1] * fVar16 + local_34[5];
          local_1c = fVar16 * local_34[2] + local_1c;
        }
        if (((((local_54 * local_54 < 1.5258789e-05) && (local_50 * local_50 < 1.5258789e-05)) &&
             (local_4c * local_4c < 1.5258789e-05)) &&
            (((local_34[0] * local_34[0] < 1.5258789e-05 &&
              (local_34[1] * local_34[1] < 1.5258789e-05)) &&
             (local_34[2] * local_34[2] < 1.5258789e-05)))) ||
           (local_64 = local_64 + 1, 7 < local_64)) break;
      }
      *param_1 = local_14;
      param_1[1] = local_10;
      param_1[2] = local_c;
      *param_2 = local_34[4];
      param_2[1] = local_34[5];
    }
    else {
      *param_1 = local_14;
      param_1[1] = local_10;
      param_1[2] = local_c;
      param_2[1] = local_34[5];
      *param_2 = local_34[4];
    }
  }
  else {
    *param_1 = local_14;
    param_1[1] = local_10;
    param_1[2] = local_c;
    param_2[1] = local_34[5];
    *param_2 = local_34[4];
  }
  param_2[2] = local_1c;
  return;
}


//// FUNCTION FUN_00b25079 @ 00b25079 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00b25079(ushort *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  undefined2 in_FPUControlWord;
  undefined2 uVar13;
  float local_2e0;
  float local_2dc [63];
  float local_1e0;
  float local_1dc;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [20];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  undefined1 local_1a8 [4];
  float local_1a4;
  float local_1a0 [2];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [4];
  undefined1 local_18c [172];
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  int local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  float local_a8 [4];
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
  float local_70;
  float local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  float local_5c;
  undefined1 *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 *local_34;
  float local_30;
  undefined1 *local_2c;
  float local_28;
  undefined1 *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float *local_c;
  undefined *local_8;
  
  if (param_2 == 0.0) {
    local_28 = 5.60519e-45;
  }
  else {
    iVar8 = 0;
    pfVar5 = (float *)(in_EAX + 0xc);
    iVar12 = 0x10;
    do {
      if (*pfVar5 < 0.5) {
        iVar8 = iVar8 + 1;
      }
      pfVar5 = pfVar5 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    if (iVar8 == 0x10) {
      param_1[1] = 0xffff;
      param_1[2] = 0xffff;
      param_1[3] = 0xffff;
      *param_1 = 0;
      return 0;
    }
    local_28 = (float)(4 - (uint)(iVar8 != 0));
  }
  if (param_3 != 0) {
    pfVar5 = &local_1e0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
  }
  param_2 = (float)CONCAT22(param_2._2_2_,in_FPUControlWord);
  local_b8 = (int)&local_1e0 - in_EAX;
  local_64 = (undefined1 *)((int)local_2dc - in_EAX);
  local_58 = local_1d8 + -in_EAX;
  local_c0 = local_1d4 + -in_EAX;
  local_b4 = local_1d0 + -in_EAX;
  local_60 = local_1b8 + -in_EAX;
  local_bc = local_1b4 + -in_EAX;
  local_b0 = local_1b0 + -in_EAX;
  local_2c = local_1a8 + -in_EAX;
  local_24 = local_198 + -in_EAX;
  local_ac = local_194 + -in_EAX;
  local_34 = local_190 + -in_EAX;
  iVar12 = (int)&local_1a4 - in_EAX;
  iVar8 = (int)local_1a0 - in_EAX;
  local_5c = param_2;
  local_30 = (float)((int)&local_2e0 - in_EAX);
  param_2 = 0.0;
  pfVar5 = (float *)(in_EAX + 8);
  local_e0 = iVar12;
  local_c8 = iVar8;
  uVar6 = 0;
  do {
    local_1c = pfVar5[-2];
    local_18 = pfVar5[-1];
    local_14 = *pfVar5;
    if (param_3 != 0) {
      local_1c = pfVar5[-2] + *(float *)((int)&local_1e0 + uVar6);
      local_18 = pfVar5[-1] + *(float *)(local_1d8 + (uVar6 - 4));
      local_14 = *pfVar5 + *(float *)(local_b8 + (int)pfVar5);
    }
    local_cc = (int)ROUND(local_1c * 31.0 + 0.5);
    fVar1 = (float)local_cc * 0.032258064;
    local_20 = fVar1;
    *(float *)((int)&local_2e0 + uVar6) = fVar1;
    local_c4 = (int)ROUND(local_18 * 63.0 + 0.5);
    fVar2 = (float)local_c4 * 0.015873017;
    local_8 = (undefined *)fVar2;
    *(float *)((int)local_2dc + uVar6) = fVar2;
    local_68 = (undefined1 *)(int)ROUND(local_14 * 31.0 + 0.5);
    local_c = (float *)local_68;
    fVar3 = (float)(int)local_68 * 0.032258064;
    *(float *)((int)local_30 + (int)pfVar5) = fVar3;
    *(undefined4 *)((int)local_64 + (int)pfVar5) = 0x3f800000;
    if (param_3 != 0) {
      fVar1 = local_1c - fVar1;
      uVar10 = (uint)param_2 & 3;
      fVar2 = local_18 - fVar2;
      local_c = (float *)uVar10;
      local_40 = fVar2;
      fVar4 = local_14 - fVar3;
      local_3c = fVar4;
      if (uVar10 != 3) {
        *(float *)(local_58 + (int)pfVar5) = fVar1 * 0.4375 + *(float *)(local_58 + (int)pfVar5);
        *(float *)(local_c0 + (int)pfVar5) = fVar2 * 0.4375 + *(float *)(local_c0 + (int)pfVar5);
        *(float *)(local_b4 + (int)pfVar5) = fVar4 * 0.4375 + *(float *)(local_b4 + (int)pfVar5);
      }
      if (uVar6 < 0xc0) {
        if (uVar10 != 0) {
          *(float *)(local_60 + (int)pfVar5) = fVar1 * 0.1875 + *(float *)(local_60 + (int)pfVar5);
          *(float *)(local_bc + (int)pfVar5) = fVar2 * 0.1875 + *(float *)(local_bc + (int)pfVar5);
          *(float *)(local_b0 + (int)pfVar5) = fVar4 * 0.1875 + *(float *)(local_b0 + (int)pfVar5);
        }
        *(float *)(local_2c + (int)pfVar5) = fVar1 * 0.3125 + *(float *)(local_2c + (int)pfVar5);
        *(float *)(iVar12 + (int)pfVar5) = fVar2 * 0.3125 + *(float *)(iVar12 + (int)pfVar5);
        *(float *)(iVar8 + (int)pfVar5) = fVar4 * 0.3125 + *(float *)(iVar8 + (int)pfVar5);
        if (uVar10 != 3) {
          *(float *)(local_24 + (int)pfVar5) = fVar1 * 0.0625 + *(float *)(local_24 + (int)pfVar5);
          *(float *)(local_ac + (int)pfVar5) =
               local_40 * 0.0625 + *(float *)(local_ac + (int)pfVar5);
          *(float *)(local_34 + (int)pfVar5) =
               local_3c * 0.0625 + *(float *)(local_34 + (int)pfVar5);
        }
      }
    }
    param_2 = (float)((int)param_2 + 1);
    uVar10 = uVar6 + 0x10;
    *(float *)((int)&local_2e0 + uVar6) = local_20 * DAT_00e9cbd8;
    *(float *)((int)local_2dc + uVar6) = (float)local_8 * DAT_00e9cbdc;
    *(float *)((int)local_30 + (int)pfVar5) = fVar3 * DAT_00e9cbe0;
    pfVar5 = pfVar5 + 4;
    uVar6 = uVar10;
  } while (uVar10 < 0x100);
  uVar13 = local_5c._0_2_;
  FUN_00b24af9(&local_1c,&local_54,(float)&local_2e0,local_28);
  local_dc = local_1c * _DAT_00e9cbe8;
  local_d8 = local_18 * _DAT_00e9cbec;
  local_d4 = local_14 * _DAT_00e9cbf0;
  local_44 = local_54 * _DAT_00e9cbe8;
  local_40 = local_50 * _DAT_00e9cbec;
  local_3c = local_4c * _DAT_00e9cbf0;
  uVar6 = FUN_00b246cf(&local_dc);
  local_2c = (undefined1 *)uVar6;
  uVar10 = FUN_00b246cf(&local_44);
  uVar9 = (ushort)uVar6;
  uVar11 = (ushort)uVar10;
  if ((local_28 == 5.60519e-45) && (uVar9 == uVar11)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = uVar9;
    param_1[1] = uVar11;
  }
  else {
    local_24 = (undefined1 *)uVar10;
    FUN_00b24545(uVar6);
    FUN_00b24545(uVar10);
    local_1c = local_dc * DAT_00e9cbd8;
    local_18 = local_d8 * DAT_00e9cbdc;
    local_14 = local_d4 * DAT_00e9cbe0;
    local_54 = local_44 * DAT_00e9cbd8;
    local_50 = local_40 * DAT_00e9cbdc;
    local_4c = local_3c * DAT_00e9cbe0;
    if ((local_28 == 4.2039e-45) == uVar9 <= uVar11) {
      *param_1 = uVar9;
      param_1[1] = uVar11;
      local_a8[0] = local_1c;
      local_a8[1] = local_18;
      local_a8[2] = local_14;
      local_a8[3] = fStack_10;
      pfVar5 = &local_54;
    }
    else {
      param_1[1] = uVar9;
      *param_1 = uVar11;
      local_a8[0] = local_54;
      local_a8[1] = local_50;
      local_a8[2] = local_4c;
      local_a8[3] = fStack_48;
      pfVar5 = &local_1c;
    }
    local_98 = *pfVar5;
    local_94 = pfVar5[1];
    local_90 = pfVar5[2];
    local_8c = pfVar5[3];
    fVar1 = *pfVar5 - local_a8[0];
    if (local_28 == 4.2039e-45) {
      local_8 = &DAT_00d8d3b8;
      local_88 = fVar1 * 0.5 + local_a8[0];
      local_84 = (local_94 - local_a8[1]) * 0.5 + local_a8[1];
      local_80 = (local_90 - local_a8[2]) * 0.5 + local_a8[2];
      local_7c = (local_8c - local_a8[3]) * 0.5 + local_a8[3];
    }
    else {
      local_8 = &DAT_00d8d3a8;
      local_88 = fVar1 * 0.33333334 + local_a8[0];
      local_84 = (local_94 - local_a8[1]) * 0.33333334 + local_a8[1];
      local_80 = (local_90 - local_a8[2]) * 0.33333334 + local_a8[2];
      local_7c = (local_8c - local_a8[3]) * 0.33333334 + local_a8[3];
      local_78 = fVar1 * 0.6666667 + local_a8[0];
      local_74 = (local_94 - local_a8[1]) * 0.6666667 + local_a8[1];
      local_70 = (local_90 - local_a8[2]) * 0.6666667 + local_a8[2];
      local_6c = (local_8c - local_a8[3]) * 0.6666667 + local_a8[3];
    }
    param_2 = local_90 - local_a8[2];
    local_94 = local_94 - local_a8[1];
    iVar12 = (int)local_28 + -1;
    local_30 = (float)iVar12;
    if (iVar12 < 0) {
      local_30 = local_30 + 4.2949673e+09;
    }
    if ((short)local_2c == (short)local_24) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = local_30 / (fVar1 * fVar1 + local_94 * local_94 + param_2 * param_2);
    }
    local_20 = 0.0;
    local_54 = fVar1 * fVar2;
    local_50 = fVar2 * local_94;
    local_4c = fVar2 * param_2;
    if (param_3 != 0) {
      pfVar5 = &local_1e0;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + 1;
      }
    }
    param_2._2_2_ = (undefined2)((uint)iVar12 >> 0x10);
    param_2 = (float)CONCAT22(param_2._2_2_,uVar13);
    local_5c = param_2;
    local_c = &local_1e0;
    local_58 = local_1cc + -in_EAX;
    param_2 = 0.0;
    local_64 = local_1ac + -in_EAX;
    iVar12 = (int)local_2dc + (4 - in_EAX);
    iVar8 = (int)local_1a0 + (4 - in_EAX);
    pfVar5 = (float *)(in_EAX + 4);
    local_24 = local_1d8 + (-4 - in_EAX);
    local_68 = local_18c + -in_EAX;
    do {
      if ((local_28 != 4.2039e-45) || (0.5 <= pfVar5[2])) {
        local_1c = DAT_00e9cbd8 * pfVar5[-1];
        local_18 = DAT_00e9cbdc * *pfVar5;
        local_14 = DAT_00e9cbe0 * pfVar5[1];
        if (param_3 != 0) {
          local_1c = DAT_00e9cbd8 * pfVar5[-1] + *local_c;
          local_18 = DAT_00e9cbdc * *pfVar5 + *(float *)((int)pfVar5 + local_b8);
          local_14 = DAT_00e9cbe0 * pfVar5[1] + *(float *)(local_24 + (int)pfVar5);
        }
        fVar1 = (local_1c - local_a8[0]) * local_54 +
                (local_18 - local_a8[1]) * local_50 + (local_14 - local_a8[2]) * local_4c;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          if (fVar1 < local_30) {
            local_2c = (undefined1 *)(fVar1 + 0.5);
            local_60 = (undefined1 *)(int)ROUND(fVar1 + 0.5);
            iVar7 = *(int *)(local_8 + (int)local_60 * 4);
          }
          else {
            iVar7 = 1;
          }
        }
        else {
          iVar7 = 0;
        }
        local_20 = (float)(iVar7 << 0x1e | (uint)local_20 >> 2);
        if (param_3 != 0) {
          uVar6 = (uint)param_2 & 3;
          fVar1 = (local_1c - local_a8[iVar7 * 4]) * *(float *)(iVar12 + (int)pfVar5);
          fVar2 = (local_18 - local_a8[iVar7 * 4 + 1]) * *(float *)(iVar12 + (int)pfVar5);
          local_40 = fVar2;
          fVar3 = (local_14 - local_a8[iVar7 * 4 + 2]) * *(float *)(iVar12 + (int)pfVar5);
          local_3c = fVar3;
          if (uVar6 != 3) {
            *(float *)(local_c0 + (int)pfVar5) = fVar1 * 0.4375 + *(float *)(local_c0 + (int)pfVar5)
            ;
            *(float *)(local_b4 + (int)pfVar5) = fVar2 * 0.4375 + *(float *)(local_b4 + (int)pfVar5)
            ;
            *(float *)(local_58 + (int)pfVar5) = fVar3 * 0.4375 + *(float *)(local_58 + (int)pfVar5)
            ;
          }
          if ((uint)param_2 < 0xc) {
            if (uVar6 != 0) {
              *(float *)(local_bc + (int)pfVar5) =
                   fVar1 * 0.1875 + *(float *)(local_bc + (int)pfVar5);
              *(float *)(local_b0 + (int)pfVar5) =
                   fVar2 * 0.1875 + *(float *)(local_b0 + (int)pfVar5);
              *(float *)(local_64 + (int)pfVar5) =
                   fVar3 * 0.1875 + *(float *)(local_64 + (int)pfVar5);
            }
            *(float *)(local_e0 + (int)pfVar5) = fVar1 * 0.3125 + *(float *)(local_e0 + (int)pfVar5)
            ;
            *(float *)(local_c8 + (int)pfVar5) = fVar2 * 0.3125 + *(float *)(local_c8 + (int)pfVar5)
            ;
            *(float *)(iVar8 + (int)pfVar5) = fVar3 * 0.3125 + *(float *)(iVar8 + (int)pfVar5);
            if (uVar6 != 3) {
              *(float *)(local_ac + (int)pfVar5) =
                   fVar1 * 0.0625 + *(float *)(local_ac + (int)pfVar5);
              *(float *)(local_34 + (int)pfVar5) =
                   local_40 * 0.0625 + *(float *)(local_34 + (int)pfVar5);
              *(float *)(local_68 + (int)pfVar5) =
                   local_3c * 0.0625 + *(float *)(local_68 + (int)pfVar5);
            }
          }
        }
      }
      else {
        local_20 = (float)((uint)local_20 >> 2 | 0xc0000000);
      }
      param_2 = (float)((int)param_2 + 1);
      local_c = local_c + 4;
      pfVar5 = pfVar5 + 4;
    } while ((uint)param_2 < 0x10);
    *(float *)(param_1 + 2) = local_20;
  }
  return 0;
}


//// FUNCTION FUN_00b259cc @ 00b259cc ////

undefined4 FUN_00b259cc(float *param_1,ushort *param_2)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float local_5c [4];
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
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  uVar2 = *param_2;
  FUN_00b24545((uint)uVar2);
  uVar3 = param_2[1];
  FUN_00b24545((uint)uVar3);
  if (uVar3 < uVar2) {
    local_3c = (local_4c - local_5c[0]) * 0.33333334 + local_5c[0];
    local_38 = (local_48 - local_5c[1]) * 0.33333334 + local_5c[1];
    local_8 = local_44 - local_5c[2];
    local_34 = local_8 * 0.33333334 + local_5c[2];
    local_c = local_40 - local_5c[3];
    local_30 = local_c * 0.33333334 + local_5c[3];
    local_2c = (local_4c - local_5c[0]) * 0.6666667 + local_5c[0];
    local_28 = (local_48 - local_5c[1]) * 0.6666667 + local_5c[1];
    local_24 = local_8 * 0.6666667 + local_5c[2];
    local_20 = local_c * 0.6666667 + local_5c[3];
  }
  else {
    local_3c = (local_4c - local_5c[0]) * 0.5 + local_5c[0];
    local_38 = (local_48 - local_5c[1]) * 0.5 + local_5c[1];
    local_34 = (local_44 - local_5c[2]) * 0.5 + local_5c[2];
    local_30 = (local_40 - local_5c[3]) * 0.5 + local_5c[3];
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_2c = 0.0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_20 = 0.0;
  }
  uVar6 = *(uint *)(param_2 + 2);
  iVar4 = 0x10;
  do {
    uVar5 = uVar6 & 3;
    *param_1 = local_5c[uVar5 * 4];
    param_1[1] = local_5c[uVar5 * 4 + 1];
    pfVar1 = param_1 + 3;
    param_1[2] = local_5c[uVar5 * 4 + 2];
    param_1 = param_1 + 4;
    uVar6 = uVar6 >> 2;
    iVar4 = iVar4 + -1;
    *pfVar1 = local_5c[uVar5 * 4 + 3];
  } while (iVar4 != 0);
  return 0;
}


//// FUNCTION FUN_00b25b0e @ 00b25b0e ////

/* WARNING: Removing unreachable block (ram,0x00b25b47) */
/* WARNING: Removing unreachable block (ram,0x00b25b76) */

int FUN_00b25b0e(float *param_1,uint *param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_00b259cc(param_1,(ushort *)(param_2 + 2));
  if (-1 < iVar1) {
    uVar3 = *param_2;
    iVar1 = 8;
    pfVar2 = param_1 + 3;
    do {
      uVar4 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      *pfVar2 = (float)uVar4 * 0.06666667;
      pfVar2 = pfVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar3 = param_2[1];
    iVar1 = 8;
    pfVar2 = param_1 + 0x23;
    do {
      uVar4 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      *pfVar2 = (float)uVar4 * 0.06666667;
      pfVar2 = pfVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00b25b93 @ 00b25b93 ////

int FUN_00b25b93(float *param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float local_24 [8];
  
  iVar3 = FUN_00b259cc(param_1,(ushort *)(param_2 + 8));
  if (-1 < iVar3) {
    local_24[0] = (float)*param_2 * 0.003921569;
    local_24[1] = (float)param_2[1] * 0.003921569;
    if (param_2[1] < *param_2) {
      uVar4 = 1;
      do {
        fVar1 = (float)(int)(7 - uVar4);
        if ((int)(7 - uVar4) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)(int)uVar4;
        if ((int)uVar4 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        uVar4 = uVar4 + 1;
        local_24[uVar4] = (fVar2 * local_24[1] + fVar1 * local_24[0]) * 0.14285715;
      } while (uVar4 < 7);
    }
    else {
      uVar4 = 1;
      do {
        fVar1 = (float)(int)(5 - uVar4);
        if ((int)(5 - uVar4) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)(int)uVar4;
        if ((int)uVar4 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        uVar4 = uVar4 + 1;
        local_24[uVar4] = (fVar2 * local_24[1] + fVar1 * local_24[0]) * 0.2;
      } while (uVar4 < 5);
      local_24[6] = 0.0;
      local_24[7] = 1.0;
    }
    iVar3 = 8;
    uVar4 = (uint)*(uint3 *)(param_2 + 2);
    pfVar5 = param_1 + 3;
    do {
      uVar6 = uVar4 & 7;
      uVar4 = uVar4 >> 3;
      *pfVar5 = local_24[uVar6];
      pfVar5 = pfVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 8;
    uVar4 = (uint)*(uint3 *)(param_2 + 5);
    pfVar5 = param_1 + 0x23;
    do {
      uVar6 = uVar4 & 7;
      uVar4 = uVar4 >> 3;
      *pfVar5 = local_24[uVar6];
      pfVar5 = pfVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 0;
  }
  return iVar3;
}


//// FUNCTION FUN_00b25cd1 @ 00b25cd1 ////

int FUN_00b25cd1(ushort *param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  undefined2 in_FPUControlWord;
  float local_150 [64];
  float local_50 [16];
  uint local_10;
  uint local_c;
  float local_8;
  
  if (param_3 != 0) {
    pfVar4 = local_50;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + 1;
    }
    local_8 = (float)CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_c = (uint)local_8 | 0xc00;
    local_10 = (uint)local_8;
    uVar7 = 0;
    pfVar6 = local_150 + 1;
    pfVar4 = (float *)(param_2 + 0xc);
    do {
      fVar2 = local_50[uVar7];
      pfVar6[-1] = pfVar4[-3];
      fVar3 = *pfVar4;
      *pfVar6 = pfVar4[-2];
      local_8 = fVar2 + fVar3;
      pfVar6[1] = pfVar4[-1];
      local_c = (uint)ROUND(fVar2 + fVar3 + 0.5);
      fVar2 = (float)(int)local_c;
      uVar1 = uVar7 & 3;
      *(float *)(((int)local_150 - param_2) + (int)pfVar4) = fVar2;
      fVar2 = local_8 - fVar2;
      if (uVar1 != 3) {
        local_50[uVar7 + 1] = fVar2 * 0.4375 + local_50[uVar7 + 1];
      }
      if (uVar7 < 0xc) {
        if (uVar1 != 0) {
          local_50[uVar7 + 3] = fVar2 * 0.1875 + local_50[uVar7 + 3];
        }
        local_50[uVar7 + 4] = fVar2 * 0.3125 + local_50[uVar7 + 4];
        if (uVar1 != 3) {
          local_50[uVar7 + 5] = fVar2 * 0.0625 + local_50[uVar7 + 5];
        }
      }
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 4;
      pfVar4 = pfVar4 + 4;
    } while (uVar7 < 0x10);
  }
  iVar5 = FUN_00b25079(param_1,1.4013e-45,param_3);
  if (-1 < iVar5) {
    iVar5 = 0;
  }
  return iVar5;
}


//// FUNCTION FUN_00b25df5 @ 00b25df5 ////

void FUN_00b25df5(undefined4 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  undefined2 in_FPUControlWord;
  float local_54 [16];
  undefined4 *local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  puVar3 = param_1;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    pfVar7 = local_54;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = 0.0;
      pfVar7 = pfVar7 + 1;
    }
  }
  param_1 = (undefined4 *)CONCAT22(param_1._2_2_,in_FPUControlWord);
  local_14 = param_1;
  local_8 = (float *)(param_2 + 0xc);
  do {
    param_1 = (undefined4 *)*local_8;
    if (param_3 != 0) {
      param_1 = (undefined4 *)((float)param_1 + local_54[uVar5]);
    }
    local_c = (float)param_1 * 15.0 + 0.5;
    local_10 = (float)(int)ROUND(local_c);
    puVar1 = puVar3 + (uVar5 >> 3);
    *puVar1 = *puVar1 >> 4 | (int)local_10 << 0x1c;
    if (param_3 != 0) {
      fVar2 = (float)(int)local_10;
      if ((int)local_10 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      uVar6 = uVar5 & 3;
      fVar2 = (float)param_1 - fVar2 * 0.06666667;
      if (uVar6 != 3) {
        local_54[uVar5 + 1] = fVar2 * 0.4375 + local_54[uVar5 + 1];
      }
      local_c = local_10;
      if (uVar5 < 0xc) {
        if (uVar6 != 0) {
          local_54[uVar5 + 3] = fVar2 * 0.1875 + local_54[uVar5 + 3];
        }
        local_54[uVar5 + 4] = fVar2 * 0.3125 + local_54[uVar5 + 4];
        if (uVar6 != 3) {
          local_54[uVar5 + 5] = fVar2 * 0.0625 + local_54[uVar5 + 5];
        }
      }
    }
    local_8 = local_8 + 4;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x10);
  FUN_00b25079((ushort *)(puVar3 + 2),0.0,param_3);
  return;
}


//// FUNCTION FUN_00b25f24 @ 00b25f24 ////

int FUN_00b25f24(char *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  undefined2 in_FPUControlWord;
  float local_a4 [32];
  int local_24;
  float local_20;
  float *local_1c;
  float local_18;
  float *local_14;
  float local_10;
  undefined *local_c;
  undefined4 local_8;
  
  pcVar5 = param_1;
  pfVar15 = (float *)((int)param_2 + 0xc);
  uVar13 = 0;
  local_1c = pfVar15;
  local_14 = (float *)*pfVar15;
  local_8 = (float *)*pfVar15;
  if (param_3 != 0) {
    pfVar14 = local_a4;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar14 = 0.0;
      pfVar14 = pfVar14 + 1;
    }
  }
  param_2 = (float)CONCAT22(param_2._2_2_,in_FPUControlWord);
  local_c = (undefined *)((uint)param_2 | 0xc00);
  local_18 = param_2;
  do {
    param_2 = *pfVar15;
    if (param_3 != 0) {
      param_2 = param_2 + local_a4[uVar13];
    }
    local_10 = (float)(int)ROUND(param_2 * 255.0 + 0.5);
    local_c = (undefined *)local_10;
    fVar1 = (float)(int)local_10 * 0.003921569;
    local_a4[uVar13 + 0x10] = fVar1;
    if ((float)local_14 <= fVar1) {
      if ((float)local_8 < fVar1) {
        local_8 = (float *)fVar1;
      }
    }
    else {
      local_14 = (float *)fVar1;
    }
    if (param_3 != 0) {
      fVar1 = param_2 - fVar1;
      uVar11 = uVar13 & 3;
      if (uVar11 != 3) {
        local_a4[uVar13 + 1] = fVar1 * 0.4375 + local_a4[uVar13 + 1];
      }
      if (uVar13 < 0xc) {
        if (uVar11 != 0) {
          local_a4[uVar13 + 3] = fVar1 * 0.1875 + local_a4[uVar13 + 3];
        }
        local_a4[uVar13 + 4] = fVar1 * 0.3125 + local_a4[uVar13 + 4];
        if (uVar11 != 3) {
          local_a4[uVar13 + 5] = fVar1 * 0.0625 + local_a4[uVar13 + 5];
        }
      }
    }
    uVar13 = uVar13 + 1;
    pfVar15 = pfVar15 + 4;
  } while (uVar13 < 0x10);
  iVar9 = FUN_00b25079((ushort *)(param_1 + 8),0.0,param_3);
  if (iVar9 < 0) {
    return iVar9;
  }
  if ((float)local_14 == 1.0) {
    *param_1 = -1;
    param_1[1] = -1;
LAB_00b26157:
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5[4] = '\0';
    pcVar5[5] = '\0';
    pcVar5[6] = '\0';
    pcVar5[7] = '\0';
  }
  else {
    if (((float)local_14 == 0.0) || ((float)local_8 == 1.0)) {
      param_1 = (char *)0x6;
      uVar13 = 6;
    }
    else {
      uVar13 = 8;
      param_1 = (char *)0x8;
    }
    FUN_00b247d2(&local_10,&param_2,(int)(local_a4 + 0x10),uVar13);
    uVar11 = (uint)ROUND(local_10 * 255.0 + 0.5);
    uVar7 = (uint)ROUND(param_2 * 255.0 + 0.5);
    fVar1 = (float)(uVar11 & 0xff) * 0.003921569;
    fVar2 = (float)(uVar7 & 0xff) * 0.003921569;
    cVar6 = (char)uVar11;
    cVar8 = (char)uVar7;
    if (uVar13 == 8) {
      if (cVar6 == cVar8) {
        *pcVar5 = cVar6;
        pcVar5[1] = cVar8;
        goto LAB_00b26157;
      }
LAB_00b261cc:
      pcVar5[1] = cVar6;
      local_a4[0x18] = fVar2;
      local_a4[0x19] = fVar1;
      *pcVar5 = cVar8;
      uVar11 = 1;
      do {
        fVar3 = (float)(int)(7 - uVar11);
        if ((int)(7 - uVar11) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar4 = (float)(int)uVar11;
        if ((int)uVar11 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar7 = uVar11 + 1;
        local_a4[uVar11 + 0x19] = (fVar4 * fVar1 + fVar3 * fVar2) * 0.14285715;
        uVar11 = uVar7;
      } while (uVar7 < 7);
      local_c = &DAT_00d8d3c8;
    }
    else {
      if (uVar13 != 6) goto LAB_00b261cc;
      *pcVar5 = cVar6;
      local_a4[0x18] = fVar1;
      local_a4[0x19] = fVar2;
      pcVar5[1] = cVar8;
      uVar11 = 1;
      do {
        fVar3 = (float)(int)(5 - uVar11);
        if ((int)(5 - uVar11) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar4 = (float)(int)uVar11;
        if ((int)uVar11 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar7 = uVar11 + 1;
        local_a4[uVar11 + 0x19] = (fVar4 * fVar2 + fVar3 * fVar1) * 0.2;
        uVar11 = uVar7;
      } while (uVar7 < 5);
      local_c = &DAT_00d8d3e8;
      local_a4[0x1e] = 0.0;
      local_a4[0x1f] = 1.0;
    }
    iVar9 = uVar13 - 1;
    local_10 = (float)iVar9;
    if (iVar9 < 0) {
      local_10 = local_10 + 4.2949673e+09;
    }
    if (local_a4[0x18] == local_a4[0x19]) {
      local_20 = 0.0;
    }
    else {
      local_20 = local_10 / (local_a4[0x19] - local_a4[0x18]);
    }
    if (param_3 != 0) {
      pfVar15 = local_a4;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + 1;
      }
    }
    param_2._2_2_ = (undefined2)((uint)iVar9 >> 0x10);
    param_2 = (float)CONCAT22(param_2._2_2_,in_FPUControlWord);
    local_18 = param_2;
    local_14 = local_1c;
    uVar13 = 0;
    do {
      uVar7 = 0;
      uVar11 = uVar13 + 8;
      local_8._2_1_ = '\0';
      if (uVar13 < uVar11) {
        local_8 = local_14;
        do {
          param_2 = *local_8;
          if (param_3 != 0) {
            param_2 = param_2 + local_a4[uVar13];
          }
          fVar1 = (param_2 - local_a4[0x18]) * local_20;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            if (fVar1 < local_10) {
              local_1c = (float *)(fVar1 + 0.5);
              local_24 = (int)ROUND(fVar1 + 0.5);
              iVar9 = *(int *)(local_c + local_24 * 4);
            }
            else if ((param_1 == (char *)0x6) &&
                    (fVar1 = (local_a4[0x19] + 1.0) * 0.5, fVar1 < param_2 != (fVar1 == param_2))) {
              iVar9 = 7;
            }
            else {
              iVar9 = 1;
            }
          }
          else if ((param_1 != (char *)0x6) || (local_a4[0x18] * 0.5 < param_2)) {
            iVar9 = 0;
          }
          else {
            iVar9 = 6;
          }
          uVar7 = uVar7 >> 3 | iVar9 << 0x15;
          if (param_3 != 0) {
            fVar1 = param_2 - local_a4[iVar9 + 0x18];
            uVar12 = uVar13 & 3;
            if (uVar12 != 3) {
              local_a4[uVar13 + 1] = fVar1 * 0.4375 + local_a4[uVar13 + 1];
            }
            if (uVar13 < 0xc) {
              if (uVar12 != 0) {
                local_a4[uVar13 + 3] = fVar1 * 0.1875 + local_a4[uVar13 + 3];
              }
              local_a4[uVar13 + 4] = fVar1 * 0.3125 + local_a4[uVar13 + 4];
              if (uVar12 != 3) {
                local_a4[uVar13 + 5] = fVar1 * 0.0625 + local_a4[uVar13 + 5];
              }
            }
          }
          local_8 = local_8 + 4;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
        local_8._2_1_ = (char)(uVar7 >> 0x10);
      }
      local_14 = local_14 + 0x20;
      pcVar5[4] = local_8._2_1_;
      pcVar5[2] = (char)uVar7;
      pcVar5[3] = (char)(uVar7 >> 8);
      uVar13 = uVar11;
      pcVar5 = pcVar5 + 3;
    } while (uVar11 < 0x10);
  }
  return 0;
}


//// FUNCTION FUN_00b263f8 @ 00b263f8 ////

int FUN_00b263f8(float *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00b25b0e(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_00b24593(param_1);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b2641e @ 00b2641e ////

int FUN_00b2641e(float *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00b25b93(param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_00b24593(param_1);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b26444 @ 00b26444 ////

int FUN_00b26444(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float local_104 [64];
  
  iVar1 = FUN_00b24617(local_104);
  if (-1 < iVar1) {
    iVar1 = FUN_00b25df5(param_1,(int)local_104,param_3);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b2647d @ 00b2647d ////

int FUN_00b2647d(char *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float local_104 [64];
  
  iVar1 = FUN_00b24617(local_104);
  if (-1 < iVar1) {
    iVar1 = FUN_00b25f24(param_1,(float)local_104,param_3);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b264b6 @ 00b264b6 ////

uint FUN_00b264b6(WCHAR *param_1,int *param_2,uint param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int local_338 [6];
  undefined1 local_320 [664];
  undefined4 local_88 [32];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b31519(local_338);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_4 & 0xfffffffc) == 0) {
    uVar2 = FUN_00b32973(local_338,param_1,(LPSTR)0x0,param_2,param_3);
    if (-1 < (int)uVar2) {
      FUN_00b34659(local_88);
      uVar2 = FUN_00b3787b(local_88,local_338,param_4,0,&local_8);
      FUN_00b36cb8((int)local_88);
      if (-1 < (int)uVar2) {
        iVar1 = FUN_00b33132((int)local_320);
        if (iVar1 == 0) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = local_8;
            local_8 = (int *)0x0;
          }
        }
        else {
          uVar2 = 0x88760b59;
        }
      }
    }
  }
  else {
    uVar2 = 0x8876086c;
  }
  if (param_6 != (undefined4 *)0x0) {
    FUN_00b330c4(local_320,param_6);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_338);
  return uVar2;
}


//// FUNCTION FUN_00b26597 @ 00b26597 ////

uint FUN_00b26597(WCHAR *param_1,int *param_2,uint param_3,uint param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int local_338 [6];
  undefined1 local_320 [664];
  undefined4 local_88 [32];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b31519(local_338);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((param_4 & 0xfffffffc) == 0) {
    uVar2 = FUN_00b32973(local_338,param_1,(LPSTR)0x1,param_2,param_3);
    if (-1 < (int)uVar2) {
      FUN_00b34659(local_88);
      uVar2 = FUN_00b3787b(local_88,local_338,param_4,0,&local_8);
      FUN_00b36cb8((int)local_88);
      if (-1 < (int)uVar2) {
        iVar1 = FUN_00b33132((int)local_320);
        if (iVar1 == 0) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = local_8;
            local_8 = (int *)0x0;
          }
        }
        else {
          uVar2 = 0x88760b59;
        }
      }
    }
  }
  else {
    uVar2 = 0x8876086c;
  }
  if (param_6 != (undefined4 *)0x0) {
    FUN_00b330c4(local_320,param_6);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_338);
  return uVar2;
}


//// FUNCTION FUN_00b26679 @ 00b26679 ////

int FUN_00b26679(HMODULE param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int local_338 [6];
  undefined1 local_320 [664];
  undefined4 local_88 [32];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b31519(local_338);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((param_5 & 0xfffffffc) == 0) {
    iVar2 = FUN_00b329f1(local_338,param_1,param_2,0,param_3,param_4);
    if (-1 < iVar2) {
      FUN_00b34659(local_88);
      iVar2 = FUN_00b3787b(local_88,local_338,param_5,0,&local_8);
      FUN_00b36cb8((int)local_88);
      if (-1 < iVar2) {
        iVar1 = FUN_00b33132((int)local_320);
        if (iVar1 == 0) {
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = local_8;
            local_8 = (int *)0x0;
          }
        }
        else {
          iVar2 = -0x7789f4a7;
        }
      }
    }
  }
  else {
    iVar2 = -0x7789f794;
  }
  if (param_7 != (undefined4 *)0x0) {
    FUN_00b330c4(local_320,param_7);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_338);
  return iVar2;
}


//// FUNCTION FUN_00b2675d @ 00b2675d ////

int FUN_00b2675d(HMODULE param_1,undefined4 param_2,int *param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int local_338 [6];
  undefined1 local_320 [664];
  undefined4 local_88 [32];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b31519(local_338);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((param_5 & 0xfffffffc) == 0) {
    iVar2 = FUN_00b329f1(local_338,param_1,param_2,1,param_3,param_4);
    if (-1 < iVar2) {
      FUN_00b34659(local_88);
      iVar2 = FUN_00b3787b(local_88,local_338,param_5,0,&local_8);
      FUN_00b36cb8((int)local_88);
      if (-1 < iVar2) {
        iVar1 = FUN_00b33132((int)local_320);
        if (iVar1 == 0) {
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = local_8;
            local_8 = (int *)0x0;
          }
        }
        else {
          iVar2 = -0x7789f4a7;
        }
      }
    }
  }
  else {
    iVar2 = -0x7789f794;
  }
  if (param_7 != (undefined4 *)0x0) {
    FUN_00b330c4(local_320,param_7);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_338);
  return iVar2;
}


//// FUNCTION FUN_00b26842 @ 00b26842 ////

int FUN_00b26842(char *param_1,int param_2,int *param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int local_338 [6];
  undefined1 local_320 [664];
  undefined4 local_88 [32];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b31519(local_338);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((param_5 & 0xfffffffc) == 0) {
    iVar2 = FUN_00b32a64(local_338,param_1,param_2,param_3,param_4);
    if (-1 < iVar2) {
      FUN_00b34659(local_88);
      iVar2 = FUN_00b3787b(local_88,local_338,param_5,0,&local_8);
      FUN_00b36cb8((int)local_88);
      if (-1 < iVar2) {
        iVar1 = FUN_00b33132((int)local_320);
        if (iVar1 == 0) {
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = local_8;
            local_8 = (int *)0x0;
          }
        }
        else {
          iVar2 = -0x7789f4a7;
        }
      }
    }
  }
  else {
    iVar2 = -0x7789f794;
  }
  if (param_7 != (undefined4 *)0x0) {
    FUN_00b330c4(local_320,param_7);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_338);
  return iVar2;
}


//// FUNCTION FUN_00b26925 @ 00b26925 ////

uint FUN_00b26925(WCHAR *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
                 uint param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int local_374 [6];
  undefined1 local_35c [664];
  undefined4 local_c4 [46];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_00b31519(local_374);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  if ((param_6 & 0xfffff9c0) == 0) {
    puVar1 = (undefined4 *)FUN_00b32973(local_374,param_1,(LPSTR)0x0,param_2,param_3);
    if (-1 < (int)puVar1) {
      FUN_00b37dd0(local_c4);
      puVar1 = (undefined4 *)FUN_00b48ec0(local_c4,local_374,0,param_4);
      if ((int)puVar1 < 0) {
        FUN_00b397e6((int)local_c4);
      }
      else {
        FUN_00b397e6((int)local_c4);
        iVar2 = FUN_00b33132((int)local_35c);
        if (iVar2 == 0) {
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_9 != (undefined4 *)0x0) {
            *param_9 = local_c;
            local_c = (int *)0x0;
          }
        }
        else {
          param_7 = (undefined4 *)0x88760b59;
          puVar1 = param_7;
        }
      }
    }
  }
  else {
    param_7 = (undefined4 *)0x8876086c;
    puVar1 = param_7;
  }
  param_7 = puVar1;
  if (param_8 != (undefined4 *)0x0) {
    FUN_00b330c4(local_35c,param_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_374);
  return (uint)param_7;
}


//// FUNCTION FUN_00b26a56 @ 00b26a56 ////

uint FUN_00b26a56(WCHAR *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
                 uint param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int local_374 [6];
  undefined1 local_35c [664];
  undefined4 local_c4 [46];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_00b31519(local_374);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  if ((param_6 & 0xfffff9c0) == 0) {
    puVar1 = (undefined4 *)FUN_00b32973(local_374,param_1,(LPSTR)0x1,param_2,param_3);
    if (-1 < (int)puVar1) {
      FUN_00b37dd0(local_c4);
      puVar1 = (undefined4 *)FUN_00b48ec0(local_c4,local_374,0,param_4);
      if ((int)puVar1 < 0) {
        FUN_00b397e6((int)local_c4);
      }
      else {
        FUN_00b397e6((int)local_c4);
        iVar2 = FUN_00b33132((int)local_35c);
        if (iVar2 == 0) {
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_9 != (undefined4 *)0x0) {
            *param_9 = local_c;
            local_c = (int *)0x0;
          }
        }
        else {
          param_7 = (undefined4 *)0x88760b59;
          puVar1 = param_7;
        }
      }
    }
  }
  else {
    param_7 = (undefined4 *)0x8876086c;
    puVar1 = param_7;
  }
  param_7 = puVar1;
  if (param_8 != (undefined4 *)0x0) {
    FUN_00b330c4(local_35c,param_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_374);
  return (uint)param_7;
}


//// FUNCTION FUN_00b26b87 @ 00b26b87 ////

int FUN_00b26b87(HMODULE param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,uint param_7,undefined4 *param_8,undefined4 *param_9,
                undefined4 *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int local_374 [6];
  undefined1 local_35c [664];
  undefined4 local_c4 [46];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_00b31519(local_374);
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if ((param_7 & 0xfffff9c0) == 0) {
    puVar1 = (undefined4 *)FUN_00b329f1(local_374,param_1,param_2,0,param_3,param_4);
    if (-1 < (int)puVar1) {
      FUN_00b37dd0(local_c4);
      puVar1 = (undefined4 *)FUN_00b48ec0(local_c4,local_374,0,param_5);
      if ((int)puVar1 < 0) {
        FUN_00b397e6((int)local_c4);
      }
      else {
        FUN_00b397e6((int)local_c4);
        iVar2 = FUN_00b33132((int)local_35c);
        if (iVar2 == 0) {
          if (param_8 != (undefined4 *)0x0) {
            *param_8 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = local_c;
            local_c = (int *)0x0;
          }
        }
        else {
          param_8 = (undefined4 *)0x88760b59;
          puVar1 = param_8;
        }
      }
    }
  }
  else {
    param_8 = (undefined4 *)0x8876086c;
    puVar1 = param_8;
  }
  param_8 = puVar1;
  if (param_9 != (undefined4 *)0x0) {
    FUN_00b330c4(local_35c,param_9);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_374);
  return (int)param_8;
}


//// FUNCTION FUN_00b26cbb @ 00b26cbb ////

int FUN_00b26cbb(HMODULE param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,uint param_7,undefined4 *param_8,undefined4 *param_9,
                undefined4 *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int local_374 [6];
  undefined1 local_35c [664];
  undefined4 local_c4 [46];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_00b31519(local_374);
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if ((param_7 & 0xfffff9c0) == 0) {
    puVar1 = (undefined4 *)FUN_00b329f1(local_374,param_1,param_2,1,param_3,param_4);
    if (-1 < (int)puVar1) {
      FUN_00b37dd0(local_c4);
      puVar1 = (undefined4 *)FUN_00b48ec0(local_c4,local_374,0,param_5);
      if ((int)puVar1 < 0) {
        FUN_00b397e6((int)local_c4);
      }
      else {
        FUN_00b397e6((int)local_c4);
        iVar2 = FUN_00b33132((int)local_35c);
        if (iVar2 == 0) {
          if (param_8 != (undefined4 *)0x0) {
            *param_8 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = local_c;
            local_c = (int *)0x0;
          }
        }
        else {
          param_8 = (undefined4 *)0x88760b59;
          puVar1 = param_8;
        }
      }
    }
  }
  else {
    param_8 = (undefined4 *)0x8876086c;
    puVar1 = param_8;
  }
  param_8 = puVar1;
  if (param_9 != (undefined4 *)0x0) {
    FUN_00b330c4(local_35c,param_9);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_374);
  return (int)param_8;
}


//// FUNCTION FUN_00b26def @ 00b26def ////

int FUN_00b26def(char *param_1,int param_2,int *param_3,undefined4 param_4,int param_5,
                undefined4 param_6,uint param_7,undefined4 *param_8,undefined4 *param_9,
                undefined4 *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int local_374 [6];
  undefined1 local_35c [664];
  undefined4 local_c4 [46];
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  FUN_00b31519(local_374);
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if ((param_7 & 0xfffff9c0) == 0) {
    puVar1 = (undefined4 *)FUN_00b32a64(local_374,param_1,param_2,param_3,param_4);
    if (-1 < (int)puVar1) {
      FUN_00b37dd0(local_c4);
      puVar1 = (undefined4 *)FUN_00b48ec0(local_c4,local_374,0,param_5);
      if ((int)puVar1 < 0) {
        FUN_00b397e6((int)local_c4);
      }
      else {
        FUN_00b397e6((int)local_c4);
        iVar2 = FUN_00b33132((int)local_35c);
        if (iVar2 == 0) {
          if (param_8 != (undefined4 *)0x0) {
            *param_8 = local_8;
            local_8 = (int *)0x0;
          }
          if (param_10 != (undefined4 *)0x0) {
            *param_10 = local_c;
            local_c = (int *)0x0;
          }
        }
        else {
          param_8 = (undefined4 *)0x88760b59;
          puVar1 = param_8;
        }
      }
    }
  }
  else {
    param_8 = (undefined4 *)0x8876086c;
    puVar1 = param_8;
  }
  param_8 = puVar1;
  if (param_9 != (undefined4 *)0x0) {
    FUN_00b330c4(local_35c,param_9);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b31606(local_374);
  return (int)param_8;
}


//// FUNCTION FUN_00b26f21 @ 00b26f21 ////

char * FUN_00b26f21(int *param_1)

{
  int iVar1;
  undefined1 local_134 [204];
  uint local_68;
  byte local_2c;
  int local_24;
  
  if ((param_1 == (int *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,local_134), iVar1 < 0)) {
    return (char *)0x0;
  }
  local_68 = local_68 & 0xffff;
  if (local_68 < 0x200) {
    if (local_68 == 0x101) {
      return "ps_1_1";
    }
    if (local_68 == 0x102) {
      return "ps_1_2";
    }
    if (local_68 == 0x103) {
      return "ps_1_3";
    }
    return (char *)(~-(uint)(local_68 != 0x104) & 0xd8d6d8);
  }
  if (0x2ff < local_68) {
    return "ps_3_0";
  }
  if ((((0x15 < local_24) && ((local_2c & 1) != 0)) && ((local_2c & 2) != 0)) &&
     ((((local_2c & 4) != 0 && ((local_2c & 8) != 0)) && ((local_2c & 0x10) != 0)))) {
    return "ps_2_a";
  }
  return "ps_2_0";
}


//// FUNCTION FUN_00b26fd1 @ 00b26fd1 ////

char * FUN_00b26fd1(int *param_1)

{
  int iVar1;
  undefined1 local_134 [196];
  uint local_70;
  byte local_3c;
  int local_38;
  int local_34;
  
  if ((param_1 == (int *)0x0) ||
     (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,local_134), iVar1 < 0)) {
    return (char *)0x0;
  }
  local_70 = local_70 & 0xffff;
  if (local_70 < 0x200) {
    return (char *)(~-(uint)(local_70 != 0x101) & 0xd8d640);
  }
  if (local_70 < 0x300) {
    if (((0xc < local_34) && ((local_3c & 1) != 0)) && (local_38 == 0x18)) {
      return "vs_2_a";
    }
    return "vs_2_0";
  }
  return "vs_3_0";
}


//// FUNCTION FUN_00b27049 @ 00b27049 ////

undefined4 FUN_00b27049(uint *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == (uint *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    uVar3 = *param_1 & 0xffff0000;
    puVar4 = param_1;
    if (((((uVar3 == 0x46580000) || (uVar3 == 0x54580000)) || (uVar3 == 0x7ffe0000)) ||
        ((uVar3 == 0x7fff0000 || (uVar3 == 0xfffe0000)))) || (uVar3 == 0xffff0000)) {
      do {
        while( true ) {
          do {
            puVar1 = puVar4;
            puVar4 = puVar1 + 1;
            uVar3 = *puVar4;
          } while ((int)uVar3 < 0);
          uVar5 = uVar3 & 0xffff;
          if (uVar5 == 0xffff) {
            return 1;
          }
          if (uVar5 != 0xfffe) break;
          uVar3 = uVar3 >> 0x10 & 0x7fff;
          if ((1 < uVar3) && (param_2 == puVar1[2])) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = puVar1 + 3;
            }
            if (param_4 != (int *)0x0) {
              *param_4 = uVar3 * 4 + -4;
            }
            return 0;
          }
LAB_00b27116:
          puVar4 = puVar4 + uVar3;
        }
        if (0x1ff < (*param_1 & 0xffff)) {
          uVar3 = uVar3 >> 0x18 & 0xf;
          goto LAB_00b27116;
        }
        if (uVar5 == 0x51) {
          puVar4 = puVar1 + 6;
        }
      } while( true );
    }
    uVar2 = 0x88760b59;
  }
  return uVar2;
}


//// FUNCTION FUN_00b27130 @ 00b27130 ////

int FUN_00b27130(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = param_1;
  if (param_1 == (uint *)0x0) {
    iVar2 = 0;
  }
  else {
    while( true ) {
      do {
        puVar1 = puVar3;
        puVar3 = puVar1 + 1;
        uVar4 = *puVar3;
      } while ((int)uVar4 < 0);
      uVar5 = uVar4 & 0xffff;
      if (uVar5 == 0xffff) break;
      if (uVar5 == 0xfffe) {
        uVar4 = uVar4 >> 0x10 & 0x7fff;
LAB_00b2717e:
        puVar3 = puVar3 + uVar4;
      }
      else {
        if (0x1ff < (*param_1 & 0xffff)) {
          uVar4 = uVar4 >> 0x18 & 0xf;
          goto LAB_00b2717e;
        }
        if (uVar5 == 0x51) {
          puVar3 = puVar1 + 6;
        }
      }
    }
    iVar2 = ((int)puVar3 + (4 - (int)param_1) >> 2) << 2;
  }
  return iVar2;
}


//// FUNCTION FUN_00b271a2 @ 00b271a2 ////

undefined4 FUN_00b271a2(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


//// FUNCTION FUN_00b271b4 @ 00b271b4 ////

undefined4 FUN_00b271b4(uint *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  char local_1c [8];
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  puVar7 = param_1;
  if (param_1 == (uint *)0x0) {
    return 0x8876086c;
  }
  param_1 = (uint *)0x0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_14 = *puVar7;
  uVar4 = local_14 & 0xffff0000;
  if (uVar4 != 0x46580000) {
    if (uVar4 == 0xfffe0000) {
      bVar3 = *(byte *)((int)puVar7 + 1);
      while( true ) {
        do {
          puVar5 = puVar7;
          puVar7 = puVar5 + 1;
        } while ((int)*puVar7 < 0);
        if (((*puVar7 & 0xffff) == 0x1f) &&
           ((puVar5[3] >> 0x14 & 0x700 | puVar5[3] & 0x1800) == 0x100)) {
          if (param_2 != 0) {
            *(uint *)((int)param_1 * 8 + param_2) = puVar5[2] & 0xffff;
            *(uint *)((int)param_1 * 8 + 4 + param_2) = *(ushort *)((int)puVar5 + 10) & 0x7fff;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
        uVar4 = *puVar7;
        uVar6 = uVar4 & 0xffff;
        if (uVar6 == 0xffff) break;
        if (uVar6 == 0xfffe) {
          uVar4 = uVar4 >> 0x10 & 0x7fff;
LAB_00b27559:
          puVar7 = puVar7 + uVar4;
        }
        else {
          if (1 < bVar3) {
            uVar4 = uVar4 >> 0x18 & 0xf;
            goto LAB_00b27559;
          }
          if (uVar6 == 0x51) {
            puVar7 = puVar5 + 6;
          }
        }
      }
    }
    else {
      if (uVar4 != 0xffff0000) {
        return 0x88760b59;
      }
      cVar2 = *(char *)((int)puVar7 + 1);
      if (cVar2 == '\x03') {
        while( true ) {
          puVar5 = puVar7 + 1;
          if (((*puVar5 & 0xffff) == 0x1f) &&
             ((puVar7[3] >> 0x14 & 0x700 | puVar7[3] & 0x1800) == 0x100)) {
            if (param_2 != 0) {
              *(uint *)((int)param_1 * 8 + param_2) = puVar7[2] & 0xffff;
              *(uint *)((int)param_1 * 8 + 4 + param_2) = *(ushort *)((int)puVar7 + 10) & 0x7fff;
            }
            param_1 = (uint *)((int)param_1 + 1);
          }
          uVar4 = *puVar5;
          if ((uVar4 & 0xffff) == 0xffff) break;
          if ((uVar4 & 0xffff) == 0xfffe) {
            uVar4 = uVar4 >> 0x10 & 0x7fff;
          }
          else {
            uVar4 = uVar4 >> 0x18 & 0xf;
          }
          puVar7 = puVar5 + uVar4;
        }
      }
      else {
        if (cVar2 == '\x02') {
          do {
            puVar5 = puVar7 + 1;
            if ((*puVar5 & 0xffff) == 0x1f) {
              uVar6 = puVar7[3] & 0x7ff;
              uVar4 = puVar7[3] & 0xf0001800;
              if (param_2 == 0) {
LAB_00b2730e:
                if (uVar4 == 0xa0000800) goto LAB_00b27318;
              }
              else if (uVar4 == 0xb0000000) {
                *(undefined4 *)((int)param_1 * 8 + param_2) = 5;
                *(uint *)((int)param_1 * 8 + 4 + param_2) = uVar6;
              }
              else {
                if (uVar4 != 0x90000000) {
                  if (uVar4 != 0xa0000800) {
                    return 0x80004005;
                  }
                  goto LAB_00b2730e;
                }
                if (1 < uVar6) {
                  return 0x80004005;
                }
                *(undefined4 *)((int)param_1 * 8 + 4 + param_2) = 0;
                *(undefined4 *)((int)param_1 * 8 + param_2) = 10;
              }
              param_1 = (uint *)((int)param_1 + 1);
            }
LAB_00b27318:
            uVar4 = *puVar5;
            if ((uVar4 & 0xffff) == 0xffff) goto LAB_00b274b2;
            if ((uVar4 & 0xffff) == 0xfffe) {
              uVar4 = uVar4 >> 0x10 & 0x7fff;
            }
            else {
              uVar4 = uVar4 >> 0x18 & 0xf;
            }
            puVar7 = puVar5 + uVar4;
          } while( true );
        }
        if (cVar2 != '\x01') {
          return 0x80004005;
        }
        local_1c[0] = '\0';
        local_1c[1] = '\0';
        local_1c[2] = '\0';
        local_1c[3] = '\0';
        local_1c[4] = '\0';
        local_1c[5] = '\0';
        local_c = 0;
        local_10 = 0;
        local_8 = (uint)((char)local_14 == '\x04');
        while( true ) {
          while( true ) {
            puVar5 = puVar7;
            puVar7 = puVar5 + 1;
            uVar4 = *puVar7;
            if (-1 < (int)uVar4) break;
            if ((uVar4 & 0xf0001800) == 0x90000000) {
              if ((uVar4 & 0x7ff) == 0) {
                local_c = 1;
              }
              else if ((uVar4 & 0x7ff) == 1) {
                local_10 = 1;
              }
            }
            if ((local_8 != 0) && ((uVar4 & 0xf0001800) == 0xb0000000)) {
              local_1c[uVar4 & 0x7ff] = '\x01';
            }
          }
          uVar6 = uVar4 & 0xffff;
          if (uVar6 == 0xffff) break;
          if (uVar6 == 0xfffe) {
            uVar4 = uVar4 >> 0x10 & 0x7fff;
LAB_00b2743c:
            puVar7 = puVar7 + uVar4;
          }
          else {
            if ((((local_8 == 0) && (0x3f < uVar6)) &&
                ((uVar6 < 0x4b ||
                 ((0x4b < uVar6 && ((uVar6 < 0x4e || ((0x51 < uVar6 && (uVar6 < 0x58)))))))))) &&
               ((puVar5[2] & 0xf0001800) == 0xb0000000)) {
              local_1c[puVar5[2] & 0x7ff] = '\x01';
            }
            if (0x1ff < (local_14 & 0xffff)) {
              uVar4 = uVar4 >> 0x18 & 0xf;
              goto LAB_00b2743c;
            }
            if (uVar6 == 0x51) {
              puVar7 = puVar5 + 6;
            }
          }
        }
        uVar4 = 0;
        do {
          if (local_1c[uVar4] != '\0') {
            if (param_2 != 0) {
              *(undefined4 *)((int)param_1 * 8 + param_2) = 5;
              *(uint *)((int)param_1 * 8 + 4 + param_2) = uVar4;
            }
            param_1 = (uint *)((int)param_1 + 1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 6);
        if (local_c != 0) {
          if (param_2 != 0) {
            puVar1 = (undefined4 *)(param_2 + (int)param_1 * 8);
            *puVar1 = 10;
            puVar1[1] = 0;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
        if (local_10 != 0) {
          if (param_2 != 0) {
            puVar1 = (undefined4 *)(param_2 + (int)param_1 * 8);
            *puVar1 = 10;
            puVar1[1] = 1;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
      }
    }
LAB_00b274b2:
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00b2756e @ 00b2756e ////

undefined4 FUN_00b2756e(uint *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  char local_30 [32];
  uint local_10;
  int local_c;
  char local_8 [4];
  
  local_c = 0;
  if (param_1 == (uint *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    bVar1 = *(byte *)((int)param_1 + 1);
    local_10 = (uint)(bVar1 < 2);
    uVar3 = *param_1 & 0xffff0000;
    if (uVar3 != 0x46580000) {
      if (uVar3 == 0xfffe0000) {
        if (bVar1 == 3) {
          while( true ) {
            puVar4 = param_1 + 1;
            if (((*puVar4 & 0xffff) == 0x1f) &&
               ((param_1[3] >> 0x14 & 0x700 | param_1[3] & 0x1800) == 0x600)) {
              if (param_2 != (undefined4 *)0x0) {
                param_2[local_c * 2] = param_1[2] & 0xffff;
                param_2[local_c * 2 + 1] = *(ushort *)((int)param_1 + 10) & 0x7fff;
              }
              local_c = local_c + 1;
            }
            uVar3 = *puVar4;
            if ((uVar3 & 0xffff) == 0xffff) break;
            if ((uVar3 & 0xffff) == 0xfffe) {
              uVar3 = uVar3 >> 0x10 & 0x7fff;
            }
            else {
              uVar3 = uVar3 >> 0x18 & 0xf;
            }
            param_1 = puVar4 + uVar3;
          }
        }
        else {
          local_8[0] = '\0';
          local_8[1] = '\0';
          local_8[2] = 0;
          local_30[0x18] = '\0';
          local_30[0x19] = '\0';
          local_30[0x1a] = '\0';
          local_30[0x1b] = '\0';
          local_30[0x1c] = '\0';
          local_30[0x1d] = '\0';
          local_30[0x1e] = '\0';
          local_30[0x1f] = '\0';
          while( true ) {
            while( true ) {
              puVar4 = param_1;
              param_1 = puVar4 + 1;
              uVar3 = *param_1;
              if (-1 < (int)uVar3) break;
              uVar5 = uVar3 & 0xf0001800;
              uVar3 = uVar3 & 0x7ff;
              if (uVar5 == 0xc0000000) {
                local_8[uVar3] = '\x01';
              }
              else if (uVar5 == 0xd0000000) {
                *(undefined1 *)((int)&param_1 + uVar3 + 2) = 1;
              }
              else if (uVar5 == 0xe0000000) {
                local_30[uVar3 + 0x18] = '\x01';
              }
            }
            uVar5 = uVar3 & 0xffff;
            if (uVar5 == 0xffff) break;
            if (uVar5 == 0xfffe) {
              uVar3 = uVar3 >> 0x10 & 0x7fff;
LAB_00b2780a:
              param_1 = param_1 + uVar3;
            }
            else if (((uVar5 == 0x51) || (uVar5 == 0x30)) || (uVar5 == 0x2f)) {
              if (local_10 == 0) {
                uVar3 = uVar3 >> 0x18 & 0xf;
                goto LAB_00b2780a;
              }
              param_1 = puVar4 + 6;
            }
            else if (uVar5 == 0x1f) {
              param_1 = puVar4 + 2;
            }
          }
          uVar3 = 0;
          do {
            if (local_30[uVar3 + 0x18] != '\0') {
              if (param_2 != (undefined4 *)0x0) {
                param_2[local_c * 2] = 5;
                param_2[local_c * 2 + 1] = uVar3;
              }
              local_c = local_c + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 8);
          uVar3 = 0;
          do {
            if (*(char *)((int)&param_1 + uVar3 + 2) != '\0') {
              if (param_2 != (undefined4 *)0x0) {
                param_2[local_c * 2] = 10;
                param_2[local_c * 2 + 1] = uVar3;
              }
              local_c = local_c + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 2);
          uVar3 = 0;
          do {
            if (local_8[uVar3] != '\0') {
              if (param_2 != (undefined4 *)0x0) {
                if (uVar3 == 0) {
                  param_2[local_c * 2] = 0;
                }
                else if (uVar3 == 2) {
                  param_2[local_c * 2] = 4;
                }
                else {
                  param_2[local_c * 2] = 0xb;
                }
                param_2[local_c * 2 + 1] = 0;
              }
              local_c = local_c + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 3);
        }
      }
      else {
        if (uVar3 != 0xffff0000) {
          return 0x88760b59;
        }
        if (bVar1 < 2) {
          if (param_2 != (undefined4 *)0x0) {
            param_2[1] = 0;
            *param_2 = 10;
          }
          local_c = 1;
        }
        else {
          local_30[0x10] = '\0';
          local_30[0x11] = '\0';
          local_30[0x12] = '\0';
          local_30[0x13] = '\0';
          local_30[0x14] = '\0';
          local_30[0x15] = '\0';
          local_30[0x16] = '\0';
          local_30[0x17] = '\0';
          local_30[0x18] = '\0';
          local_30[0x19] = '\0';
          local_30[0x1a] = '\0';
          local_30[0x1b] = '\0';
          local_30[0x1c] = '\0';
          local_30[0x1d] = '\0';
          local_30[0x1e] = '\0';
          local_30[0x1f] = '\0';
          local_30[0] = '\0';
          local_30[1] = '\0';
          local_30[2] = '\0';
          local_30[3] = '\0';
          local_30[4] = '\0';
          local_30[5] = '\0';
          local_30[6] = '\0';
          local_30[7] = '\0';
          local_30[8] = '\0';
          local_30[9] = '\0';
          local_30[10] = '\0';
          local_30[0xb] = '\0';
          local_30[0xc] = '\0';
          local_30[0xd] = '\0';
          local_30[0xe] = '\0';
          local_30[0xf] = '\0';
          while( true ) {
            while( true ) {
              puVar4 = param_1;
              param_1 = puVar4 + 1;
              uVar3 = *param_1;
              if (-1 < (int)uVar3) break;
              if ((uVar3 & 0xf0001800) == 0x80000800) {
                local_30[(uVar3 & 0x7ff) + 0x10] = '\x01';
              }
              else if ((uVar3 & 0xf0001800) == 0x90000800) {
                local_30[uVar3 & 0x7ff] = '\x01';
              }
            }
            uVar5 = uVar3 & 0xffff;
            if (uVar5 == 0xffff) break;
            if (uVar5 == 0xfffe) {
              uVar3 = uVar3 >> 0x10 & 0x7fff;
LAB_00b27681:
              param_1 = param_1 + uVar3;
            }
            else if (((uVar5 == 0x51) || (uVar5 == 0x30)) || (uVar5 == 0x2f)) {
              if (local_10 == 0) {
                uVar3 = uVar3 >> 0x18 & 0xf;
                goto LAB_00b27681;
              }
              param_1 = puVar4 + 6;
            }
            else if (uVar5 == 0x1f) {
              param_1 = puVar4 + 2;
            }
          }
          uVar3 = 0;
          do {
            if (local_30[uVar3 + 0x10] != '\0') {
              if (param_2 != (undefined4 *)0x0) {
                param_2[local_c * 2] = 10;
                param_2[local_c * 2 + 1] = uVar3;
              }
              local_c = local_c + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x10);
          uVar3 = 0;
          do {
            if (local_30[uVar3] != '\0') {
              if (param_2 != (undefined4 *)0x0) {
                param_2[local_c * 2] = 0xc;
                param_2[local_c * 2 + 1] = uVar3;
              }
              local_c = local_c + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x10);
        }
      }
      *param_3 = local_c;
    }
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION FUN_00b27894 @ 00b27894 ////

int FUN_00b27894(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int local_8;
  
  piVar4 = param_3;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  uVar1 = *param_1 & 0xffff0000;
  if ((uVar1 == 0x46580000) || (uVar1 == 0xfffe0000)) {
LAB_00b27949:
    iVar2 = 0;
  }
  else {
    if (uVar1 == 0xffff0000) {
      local_8 = 0;
      iVar2 = FUN_00b27049(param_1,0x42415443,&local_8,(int *)&param_1);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (local_8 == 0) goto LAB_00b27949;
      if ((uint *)0x1b < param_1) {
        puVar3 = (uint *)(*(int *)(local_8 + 0x10) + local_8);
        if ((uint *)(*(int *)(local_8 + 0xc) * 0x14 + 0x1cU) <= param_1) {
          iVar2 = 0;
          uVar1 = 0;
          if (*(int *)(local_8 + 0xc) != 0) {
            do {
              if ((short)puVar3[1] == 3) {
                if ((param_1 <= (uint *)*puVar3) || (iVar2 == 0x10)) goto LAB_00b278cd;
                *(int *)(param_2 + iVar2 * 4) = (int)*puVar3 + local_8;
                iVar2 = iVar2 + 1;
                piVar4 = param_3;
              }
              uVar1 = uVar1 + 1;
              puVar3 = puVar3 + 5;
            } while (uVar1 < *(uint *)(local_8 + 0xc));
          }
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar2;
          }
          goto LAB_00b27949;
        }
      }
    }
LAB_00b278cd:
    iVar2 = -0x7789f4a7;
  }
  return iVar2;
}


//// FUNCTION FUN_00b27952 @ 00b27952 ////

undefined4 * __thiscall FUN_00b27952(void *this,byte param_1)

{
  FUN_00b49cfc(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b27973 @ 00b27973 ////

int FUN_00b27973(uint *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_30 [10];
  undefined4 *local_8;
  
  piVar1 = param_2;
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) {
    iVar2 = -0x7789f794;
  }
  else {
    iVar2 = FUN_00b27049(param_1,0x47554244,&local_8,(int *)&param_1);
    if (-1 < iVar2) {
      puVar5 = local_8;
      if (iVar2 == 1) {
        puVar5 = local_30;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_30[0] = 0x28;
        param_1 = (uint *)0x28;
        puVar5 = local_30;
      }
      iVar2 = FUN_00b1cace(param_1,&param_2);
      if (-1 < iVar2) {
        puVar3 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
        for (uVar4 = (uint)param_1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar4 = (uint)param_1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        *piVar1 = (int)param_2;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00b27a0c @ 00b27a0c ////

undefined4 FUN_00b27a0c(byte *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  uint local_8;
  
  uVar5 = 0;
  if (param_1 == (byte *)0x0) {
    uVar2 = 0x8876086c;
  }
  else {
    local_8 = 0x2c;
    do {
      uVar3 = local_8 + uVar5 >> 1;
      pbVar6 = *(byte **)(&UNK_00d8d400 + uVar3 * 0xc);
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00b27a5c:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00b27a61;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00b27a5c;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b27a61:
      if (iVar4 == 0) {
        iVar4 = uVar3 * 0xc;
        if ((*(uint *)(&DAT_00d8d408 + iVar4) & param_2) == param_2) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(&UNK_00d8d400 + iVar4);
            param_3[1] = *(undefined4 *)(&UNK_00d8d404 + iVar4);
            param_3[2] = *(undefined4 *)(&DAT_00d8d408 + iVar4);
          }
          return 0;
        }
        break;
      }
      if (iVar4 < 0) {
        uVar5 = uVar3 + 1;
        uVar3 = local_8;
      }
      local_8 = uVar3;
    } while (uVar5 < local_8);
    uVar2 = 0x80004005;
  }
  return uVar2;
}


//// FUNCTION FUN_00b27aaa @ 00b27aaa ////

undefined4 FUN_00b27aaa(uint param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0x2c;
  pcVar2 = "vs_3_0";
  while( true ) {
    puVar1 = (uint *)((int)pcVar2 + -0x10);
    pcVar2 = (char *)((int)pcVar2 + -0xc);
    iVar3 = iVar3 + -1;
    if ((*puVar1 == param_1) && ((*(uint *)pcVar2 & param_2) == param_2)) break;
    if (pcVar2 < &UNK_00d8d409) {
      return 0x80004005;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar3 = iVar3 * 0xc;
    *param_3 = *(undefined4 *)(&UNK_00d8d400 + iVar3);
    param_3[1] = *(undefined4 *)(&UNK_00d8d404 + iVar3);
    param_3[2] = *(undefined4 *)(&DAT_00d8d408 + iVar3);
  }
  return 0;
}


//// FUNCTION FUN_00b27af9 @ 00b27af9 ////

undefined4 * __thiscall FUN_00b27af9(void *this,byte param_1)

{
  FUN_00b4d3f8(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b27b1a @ 00b27b1a ////

int FUN_00b27b1a(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  
  this = (void *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (uint *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return -0x7789f794;
  }
  if (((*param_1 & 0xffff0000) == 0xfffe0000) || ((*param_1 & 0xffff0000) == 0xffff0000)) {
    puVar1 = operator_new(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      this = (void *)FUN_00b4c80c(puVar1);
    }
    if (this == (void *)0x0) {
      return -0x7ff8fff2;
    }
    iVar2 = FUN_00b4c82d(this,param_1,(undefined4 *)0x0);
    if (iVar2 < 0) {
      FUN_00b27952(this,1);
      return iVar2;
    }
  }
  *param_2 = this;
  return 0;
}


//// FUNCTION FUN_00b27b9b @ 00b27b9b ////

int FUN_00b27b9b(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  
  if (param_1 == (uint *)0x0) {
    iVar1 = -0x7789f794;
  }
  else if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7789f794;
  }
  else {
    puVar2 = operator_new(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_00b4d82c(puVar2);
    }
    if (this == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = FUN_00b4d721(this,param_1);
      if (iVar1 < 0) {
        FUN_00b27af9(this,1);
      }
      else {
        *param_2 = this;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b27c0a @ 00b27c0a ////

/* WARNING: Removing unreachable block (ram,0x00b27c46) */

bool FUN_00b27c0a(void)

{
  int *piVar1;
  
  piVar1 = (int *)cpuid_basic_info(0);
  return *piVar1 != 0;
}


//// FUNCTION FUN_00b27c8a @ 00b27c8a ////

/* WARNING: Removing unreachable block (ram,0x00b27cb9) */

undefined4 FUN_00b27c8a(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = cpuid_Version_info(1);
  uVar3 = *(uint *)(iVar1 + 8);
  if ((uVar3 & 0x800000) == 0) {
    uVar2 = 0;
  }
  else if ((uVar3 & 0x2000000) == 0) {
    uVar2 = 0;
  }
  else if ((uVar3 & 0x4000000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_00b27d25 @ 00b27d25 ////

/* WARNING: Removing unreachable block (ram,0x00b27d54) */

undefined4 FUN_00b27d25(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = cpuid_Version_info(1);
  if ((*(uint *)(iVar1 + 8) & 0x800000) == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(iVar1 + 8) & 0x2000000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


//// FUNCTION FUN_00b27dae @ 00b27dae ////

void __cdecl FUN_00b27dae(undefined4 *param_1)

{
  param_1[2] = FUN_00b4dc9f;
  param_1[0x23] = FUN_00b4dc9f;
  *param_1 = FUN_00b4dbcd;
  param_1[1] = FUN_00b4f74b;
  param_1[3] = FUN_00b4dd5f;
  param_1[4] = &LAB_00b4e277;
  param_1[5] = FUN_00b4dc66;
  param_1[6] = FUN_00b4f67f;
  param_1[9] = FUN_00b4dc0d;
  param_1[10] = FUN_00b4f812;
  param_1[7] = FUN_00b4de95;
  param_1[8] = FUN_00b4e480;
  param_1[0x16] = FUN_00b4df29;
  param_1[0x11] = &LAB_00b4e3bf;
  param_1[0x15] = FUN_00b4d8c2;
  param_1[0x14] = FUN_00b4d847;
  param_1[0x19] = FUN_00b4daa1;
  param_1[0x1a] = &LAB_00b4d9e2;
  param_1[0x17] = FUN_00b4eac2;
  param_1[0x13] = &LAB_00b4dfcb;
  param_1[0x32] = FUN_00b4e7f4;
  param_1[0x33] = FUN_00b4e612;
  param_1[0x34] = FUN_00b4e9cd;
  param_1[0x35] = FUN_00b4e8a9;
  param_1[0x36] = FUN_00b4e74d;
  param_1[0x37] = FUN_00b4ea29;
  param_1[0x12] = FUN_00b4e945;
  param_1[0x30] = FUN_00b4e6c6;
  param_1[0x31] = FUN_00b4ea71;
  param_1[0xb] = &LAB_00b4ebf2;
  param_1[0x1c] = &LAB_00b4edb6;
  param_1[0xe] = &LAB_00b4ecca;
  param_1[0x1d] = &LAB_00b4eeae;
  param_1[0x3b] = FUN_00b5089b;
  param_1[0x3c] = &LAB_00b4fdcc;
  param_1[0x3d] = &LAB_00b4ff4c;
  param_1[0x3e] = &LAB_00b500a8;
  param_1[0x3f] = &LAB_00b4fbf9;
  param_1[0x40] = &LAB_00b5056d;
  param_1[0x41] = &LAB_00b503b9;
  param_1[0x42] = &LAB_00b501b9;
  param_1[0x45] = &LAB_00b501b9;
  param_1[0x47] = &LAB_00b4ef86;
  param_1[0x2d] = &LAB_00b4d95e;
  return;
}


//// FUNCTION FUN_00b27f21 @ 00b27f21 ////

void FUN_00b27f21(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_00b27c0a();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00b27c8a();
    if (iVar2 == 0) {
      iVar2 = FUN_00b27d25();
      if (iVar2 != 0) {
        FUN_00b27dae(param_1);
      }
    }
    else {
      FUN_00b27f58(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00b27f58 @ 00b27f58 ////

void __cdecl FUN_00b27f58(undefined4 *param_1)

{
  param_1[2] = FUN_00b516b0;
  param_1[0x23] = FUN_00b516b0;
  *param_1 = FUN_00b4dbcd;
  param_1[1] = FUN_00b523e7;
  param_1[3] = FUN_00b51770;
  param_1[4] = &LAB_00b51c88;
  param_1[5] = FUN_00b4dc66;
  param_1[6] = FUN_00b5231b;
  param_1[9] = FUN_00b4dc0d;
  param_1[10] = FUN_00b524ae;
  param_1[7] = FUN_00b518a6;
  param_1[8] = FUN_00b4e480;
  param_1[0x16] = FUN_00b5193a;
  param_1[0x11] = &LAB_00b51dd0;
  param_1[0x15] = FUN_00b4d8c2;
  param_1[0x14] = FUN_00b4d847;
  param_1[0x19] = FUN_00b528f3;
  param_1[0x1a] = &LAB_00b526dc;
  param_1[0x17] = FUN_00b4eac2;
  param_1[0x13] = &LAB_00b519dc;
  param_1[0x32] = FUN_00b4e7f4;
  param_1[0x33] = FUN_00b4e612;
  param_1[0x34] = FUN_00b4e9cd;
  param_1[0x35] = FUN_00b4e8a9;
  param_1[0x36] = FUN_00b4e74d;
  param_1[0x37] = FUN_00b4ea29;
  param_1[0x12] = FUN_00b4e945;
  param_1[0x30] = FUN_00b4e6c6;
  param_1[0x31] = FUN_00b4ea71;
  param_1[0xb] = &LAB_00b51f87;
  param_1[0x1c] = &LAB_00b5214b;
  param_1[0xe] = &LAB_00b5205f;
  param_1[0x1d] = &LAB_00b52243;
  param_1[0x3b] = FUN_00b515dc;
  param_1[0x3c] = &LAB_00b50b44;
  param_1[0x3d] = &LAB_00b50cc4;
  param_1[0x3e] = &LAB_00b50e20;
  param_1[0x3f] = &LAB_00b50971;
  param_1[0x40] = &LAB_00b512e5;
  param_1[0x41] = &LAB_00b51131;
  param_1[0x42] = &LAB_00b50f31;
  param_1[0x45] = &LAB_00b50f31;
  param_1[0x47] = &LAB_00b4ef86;
  return;
}


//// FUNCTION FUN_00b280c1 @ 00b280c1 ////

/* WARNING: Removing unreachable block (ram,0x00b28151) */
/* WARNING: Removing unreachable block (ram,0x00b2813f) */
/* WARNING: Removing unreachable block (ram,0x00b28113) */
/* WARNING: Removing unreachable block (ram,0x00b280f7) */
/* WARNING: Removing unreachable block (ram,0x00b280ec) */

undefined8 FUN_00b280c1(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char local_2c [16];
  int local_1c;
  uint local_18;
  int local_14;
  char cStack_10;
  undefined4 local_c;
  uint local_8;
  
  cStack_10 = '\0';
  builtin_strncpy(local_2c,"AuthenticAMD",0xd);
  cpuid_basic_info(0);
  local_8 = 1;
  piVar7 = (int *)cpuid_basic_info(0);
  local_18 = piVar7[2];
  local_1c = piVar7[1];
  local_14 = piVar7[3];
  if (*piVar7 != 0) {
    puVar2 = (undefined4 *)cpuid_Version_info(1);
    local_c = *puVar2;
    local_8 = -(uint)((puVar2[2] & 0x800000) != 0) & 0x20 | 3 |
              -(uint)((puVar2[2] & 0x2000000) != 0) & 0x40;
    puVar3 = (uint *)cpuid(0x80000000);
    local_18 = puVar3[2];
    if (0x80000000 < *puVar3) {
      iVar5 = cpuid(0x80000001);
      local_18 = *(uint *)(iVar5 + 8);
      local_8 = local_8 | 4 | -(uint)((local_18 & 0x80000000) != 0) & 0x80;
      iVar5 = 0xc;
      pcVar6 = local_2c;
      piVar7 = &local_1c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        iVar4 = *piVar7;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        piVar7 = (int *)((int)piVar7 + 1);
      } while (cVar1 == (char)iVar4);
      local_8 = local_8 | -(uint)((local_18 & 0x40000000) != 0) & 0x100 |
                -(uint)((local_18 & 0x400000) != 0) & 0x200;
    }
  }
  return CONCAT44(local_18,local_8);
}


//// FUNCTION FUN_00b281a7 @ 00b281a7 ////

void __cdecl FUN_00b281a7(undefined4 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00b280c1();
  if (((uVar1 & 0x20) != 0) && ((char)uVar1 < '\0')) {
    *param_1 = FUN_00b5a3fb;
    param_1[1] = FUN_00b5905d;
    param_1[2] = FUN_00b5a6c2;
    param_1[3] = &LAB_00b54dfb;
    param_1[5] = FUN_00b5a452;
    param_1[6] = FUN_00b590d0;
    param_1[7] = FUN_00b59139;
    param_1[8] = &LAB_00b5a746;
    param_1[9] = FUN_00b5a48d;
    param_1[10] = FUN_00b59baa;
    param_1[0xb] = &LAB_00b5502d;
    param_1[0xd] = &LAB_00b5aaf0;
    param_1[0xe] = &LAB_00b5ab33;
    param_1[0xf] = FUN_00b59bb5;
    param_1[0x10] = FUN_00b59d41;
    param_1[0x11] = &LAB_00b5a7a5;
    param_1[0x12] = &LAB_00b5a4f3;
    param_1[0x13] = FUN_00b5903f;
    param_1[0x14] = &LAB_00b5387c;
    param_1[0x15] = &LAB_00b53915;
    param_1[0x16] = FUN_00b5acd5;
    param_1[0x17] = &LAB_00b5ac17;
    param_1[0x18] = FUN_00b53972;
    param_1[0x19] = &LAB_00b539b6;
    param_1[0x1a] = &LAB_00b53de7;
    param_1[0x1b] = &LAB_00b550fc;
    param_1[0x1c] = &LAB_00b5514c;
    param_1[0x1d] = &LAB_00b55237;
    param_1[0x1e] = FUN_00b53eac;
    param_1[0x1f] = &LAB_00b55313;
    param_1[0x20] = &LAB_00b55378;
    param_1[0x21] = &LAB_00b553d8;
    param_1[0x22] = &LAB_00b55433;
    param_1[0x23] = &LAB_00b5ad39;
    param_1[0x24] = FUN_00b53f18;
    param_1[0x25] = FUN_00b5404f;
    param_1[0x26] = &LAB_00b5547a;
    param_1[0x27] = &LAB_00b55522;
    param_1[0x28] = FUN_00b556a9;
    param_1[0x29] = FUN_00b568a5;
    param_1[0x2a] = &LAB_00b56a4a;
    param_1[0x2b] = FUN_00b56f7e;
    param_1[0x2c] = FUN_00b540dc;
    param_1[0x2d] = &LAB_00b5416e;
    param_1[0x37] = &LAB_00b5a8d9;
    param_1[0x34] = &LAB_00b59198;
    param_1[0x31] = &LAB_00b5a58b;
    param_1[0x2f] = &LAB_00b5a5d4;
    param_1[0x35] = &LAB_00b5a94a;
    param_1[0x32] = &LAB_00b59209;
    param_1[0x38] = FUN_00b541d2;
    param_1[0x39] = &LAB_00b54279;
    param_1[0x36] = &LAB_00b5aa12;
    param_1[0x30] = &LAB_00b5a617;
    param_1[0x33] = &LAB_00b592dd;
    param_1[4] = &LAB_00b58911;
    param_1[0x2e] = FUN_00b543c0;
    param_1[0x3b] = FUN_00b5a140;
    param_1[0x3a] = &LAB_00b5a280;
    if (((uVar1 & 0x100) != 0) && ((uVar1 & 0x200) != 0)) {
      param_1[0x10] = FUN_00b59f5e;
      param_1[0x13] = FUN_00b5862f;
      param_1[0x27] = &LAB_00b555f4;
      param_1[0x28] = FUN_00b57477;
      param_1[0x19] = &LAB_00b53bd2;
    }
  }
  if ((uVar1 & 0x40) != 0) {
    param_1[0x3f] = FUN_00b53240;
    param_1[0x40] = &LAB_00b532e0;
    param_1[0x41] = &LAB_00b53600;
    param_1[0x3c] = &LAB_00b52bc0;
    param_1[0x3d] = &LAB_00b52e20;
    param_1[0x3e] = &LAB_00b53080;
    param_1[0x42] = FUN_00b52b00;
    param_1[0x45] = FUN_00b52a40;
  }
  return;
}


//// FUNCTION FUN_00b28440 @ 00b28440 ////

undefined4 __fastcall FUN_00b28440(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((*(int *)(param_2 + 0x4c) == 0) && (*(int *)(param_2 + 0x130) == 0)) &&
      (*(int *)(param_2 + 0x28) == 3)) &&
     (((*(int *)(param_2 + 0x24) == 3 && (*(int *)(param_2 + 0x2c) == 2)) &&
      (*(int *)(param_2 + 0x78) == 3)))) {
    iVar1 = *(int *)(param_2 + 0xdc);
    if (((*(int *)(iVar1 + 8) != 2) || (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 1)) ||
       (((*(int *)(iVar1 + 0xb0) != 1 ||
         ((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
           (*(int *)(iVar1 + 0xb4) != 1)) ||
          ((iVar2 = *(int *)(param_2 + 0x140), *(int *)(iVar1 + 0x24) != iVar2 ||
           (*(int *)(iVar1 + 0x78) != iVar2)))))) || (*(int *)(iVar1 + 0xcc) != iVar2)))) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}


//// FUNCTION FUN_00b284c0 @ 00b284c0 ////

void FUN_00b284c0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar3 = param_1;
  iVar4 = param_1[5];
  if (iVar4 != 0xca) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x14;
    puVar1[6] = iVar4;
    (*(code *)*puVar1)(param_1);
  }
  iVar4 = param_1[0xc];
  uVar2 = param_1[0xd];
  if ((uint)(iVar4 * 8) < uVar2 || iVar4 * 8 - uVar2 == 0) {
    iVar4 = FUN_00b29d70(param_1[7],8);
    param_1[0x1c] = iVar4;
    iVar4 = FUN_00b29d70(param_1[8],8);
    param_1[0x50] = 1;
  }
  else if ((uint)(iVar4 * 4) < uVar2 || iVar4 * 4 - uVar2 == 0) {
    iVar4 = FUN_00b29d70(param_1[7],4);
    param_1[0x1c] = iVar4;
    iVar4 = FUN_00b29d70(param_1[8],4);
    param_1[0x50] = 2;
  }
  else if (uVar2 < (uint)(iVar4 * 2)) {
    iVar4 = param_1[8];
    param_1[0x1c] = param_1[7];
    param_1[0x50] = 8;
  }
  else {
    iVar4 = FUN_00b29d70(param_1[7],2);
    param_1[0x1c] = iVar4;
    iVar4 = FUN_00b29d70(param_1[8],2);
    param_1[0x50] = 4;
  }
  piVar5 = (int *)param_1[0x37];
  param_1[0x1d] = iVar4;
  param_1 = (int *)param_1[9];
  if (0 < (int)param_1) {
    piVar5 = piVar5 + 3;
    do {
      iVar4 = piVar3[0x50];
      if (iVar4 < 8) {
        iVar6 = piVar3[0x4e] * iVar4;
        do {
          iVar7 = piVar5[-1] * iVar4 * 2;
          if ((iVar7 - iVar6 != 0 && iVar6 <= iVar7) ||
             (iVar7 = *piVar5 * iVar4 * 2,
             iVar7 - piVar3[0x4f] * piVar3[0x50] != 0 && piVar3[0x4f] * piVar3[0x50] <= iVar7))
          break;
          iVar4 = iVar4 * 2;
        } while (iVar4 < 8);
      }
      piVar5[6] = iVar4;
      piVar5 = piVar5 + 0x15;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  iVar4 = 0;
  if (0 < piVar3[9]) {
    piVar8 = (int *)(piVar3[0x37] + 0x24);
    do {
      iVar7 = FUN_00b29d70(piVar8[-7] * *piVar8 * piVar3[7],piVar3[0x4e] << 3);
      iVar6 = piVar3[0x4f];
      piVar8[1] = iVar7;
      iVar6 = FUN_00b29d70(piVar8[-6] * piVar3[8] * *piVar8,iVar6 << 3);
      piVar8[2] = iVar6;
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 0x15;
      piVar5 = extraout_ECX;
    } while (iVar4 < piVar3[9]);
  }
  switch(piVar3[0xb]) {
  case 1:
    piVar3[0x1e] = 1;
    break;
  case 2:
  case 3:
    piVar3[0x1e] = 3;
    break;
  case 4:
  case 5:
    piVar3[0x1e] = 4;
    break;
  default:
    piVar5 = (int *)piVar3[9];
    piVar3[0x1e] = (int)piVar5;
  }
  iVar4 = 1;
  if (piVar3[0x15] == 0) {
    iVar4 = piVar3[0x1e];
  }
  piVar3[0x1f] = iVar4;
  iVar4 = FUN_00b28440(piVar5,(int)piVar3);
  if (iVar4 == 0) {
    piVar3[0x20] = 1;
    return;
  }
  piVar3[0x20] = piVar3[0x4f];
  return;
}


//// FUNCTION FUN_00b286d0 @ 00b286d0 ////

void FUN_00b286d0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  iVar2 = 0;
  *(undefined4 **)(in_EAX + 0x148) = puVar1 + 0x40;
  puVar4 = puVar1;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  do {
    *(char *)(iVar2 + (int)(puVar1 + 0x40)) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  puVar4 = *(undefined4 **)(in_EAX + 0x148);
  puVar5 = puVar1 + 0x80;
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  puVar5 = puVar1 + 0xe0;
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar1 = puVar1 + 0x140;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_00b28750 @ 00b28750 ////

void FUN_00b28750(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  int iVar6;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[0x6a];
  FUN_00b284c0(unaff_ESI);
  FUN_00b286d0();
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar4 = FUN_00b28440(extraout_ECX,(int)unaff_ESI);
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  iVar2 = unaff_ESI[0x15];
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((iVar2 == 0) || (unaff_ESI[0x10] == 0)) {
    unaff_ESI[0x19] = 0;
    unaff_ESI[0x1a] = 0;
    unaff_ESI[0x1b] = 0;
  }
  if (iVar2 == 0) goto LAB_00b287ed;
  if (unaff_ESI[0x11] != 0) {
    puVar5 = (undefined4 *)*unaff_ESI;
    puVar5[5] = 0x2f;
    (*(code *)*puVar5)();
  }
  if (unaff_ESI[0x1e] == 3) {
    if (unaff_ESI[0x22] == 0) {
      if (unaff_ESI[0x17] == 0) goto LAB_00b287bf;
      unaff_ESI[0x1b] = 1;
    }
    else {
      unaff_ESI[0x1a] = 1;
    }
  }
  else {
    unaff_ESI[0x1a] = 0;
    unaff_ESI[0x1b] = 0;
    unaff_ESI[0x22] = 0;
LAB_00b287bf:
    unaff_ESI[0x19] = 1;
  }
  if (unaff_ESI[0x19] != 0) {
    puVar5 = (undefined4 *)*unaff_ESI;
    puVar5[5] = 0x30;
    (*(code *)*puVar5)();
  }
  if ((unaff_ESI[0x1b] != 0) || (unaff_ESI[0x1a] != 0)) {
    puVar5 = (undefined4 *)*unaff_ESI;
    puVar5[5] = 0x30;
    (*(code *)*puVar5)();
  }
LAB_00b287ed:
  if (unaff_ESI[0x11] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_00b5fe20(unaff_ESI);
      FUN_00b5eea0(unaff_ESI);
    }
    else {
      FUN_00b60ab0((int)unaff_ESI);
    }
    FUN_00b5dfb0(unaff_ESI,unaff_ESI[0x1b]);
  }
  FUN_00b5de20(unaff_ESI);
  if (unaff_ESI[0x39] == 0) {
    if (unaff_ESI[0x38] == 0) {
      FUN_00b5ce50((int)unaff_ESI);
    }
    else {
      FUN_00b5da50((int)unaff_ESI);
    }
  }
  else {
    puVar5 = (undefined4 *)*unaff_ESI;
    puVar5[5] = 1;
    (*(code *)*puVar5)();
  }
  if ((*(int *)(unaff_ESI[0x6e] + 0x10) == 0) && (unaff_ESI[0x10] == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)0x1;
  }
  FUN_00b5c2c0((int)unaff_ESI,puVar5);
  if (unaff_ESI[0x11] == 0) {
    FUN_00b5b420(unaff_ESI,0);
  }
  (**(code **)(unaff_ESI[1] + 0x18))();
  (**(code **)(unaff_ESI[0x6e] + 8))();
  iVar2 = unaff_ESI[2];
  if (((iVar2 != 0) && (unaff_ESI[0x10] == 0)) && (*(int *)(unaff_ESI[0x6e] + 0x10) != 0)) {
    iVar6 = unaff_ESI[9];
    if (unaff_ESI[0x38] != 0) {
      iVar6 = iVar6 * 3 + 2;
    }
    iVar3 = unaff_ESI[0x51];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)(iVar2 + 8) = iVar3 * iVar6;
    iVar6 = unaff_ESI[0x1b];
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(uint *)(iVar2 + 0x10) = (iVar6 != 0) + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}


//// FUNCTION FUN_00b28900 @ 00b28900 ////

void FUN_00b28900(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[0x6a];
  if (*(int *)(iVar1 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          puVar2 = (undefined4 *)*param_1;
          puVar2[5] = 0x2e;
          (*(code *)*puVar2)(param_1);
        }
        else {
          param_1[0x74] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x74] = *(int *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x71])(param_1);
    (**(code **)(param_1[0x6c] + 8))(param_1);
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        (**(code **)param_1[0x73])(param_1);
      }
      (**(code **)param_1[0x72])(param_1);
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x74])(param_1,*(undefined4 *)(iVar1 + 8));
      }
      (**(code **)param_1[0x6d])(param_1,-(*(int *)(iVar1 + 8) != 0) & 3);
      (**(code **)param_1[0x6b])(param_1,0);
    }
  }
  else {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x30;
    (*(code *)*puVar2)(param_1);
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    iVar4 = (*(int *)(iVar1 + 8) != 0) + 1 + *(int *)(iVar1 + 0xc);
    iVar1 = param_1[0x10];
    *(int *)(iVar3 + 0x10) = iVar4;
    if ((iVar1 != 0) && (*(int *)(param_1[0x6e] + 0x14) == 0)) {
      *(uint *)(iVar3 + 0x10) = (param_1[0x1b] != 0) + 1 + iVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00b28a30 @ 00b28a30 ////

void FUN_00b28a30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x54) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1d0) + 8))(param_1);
  }
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}


//// FUNCTION FUN_00b28a60 @ 00b28a60 ////

void FUN_00b28a60(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[5];
  iVar2 = param_1[0x6a];
  if (iVar1 != 0xcf) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x14;
    puVar3[6] = iVar1;
    (*(code *)*puVar3)(param_1);
  }
  if (((param_1[0x15] != 0) && (param_1[0x1a] != 0)) && (param_1[0x22] != 0)) {
    iVar1 = *(int *)(iVar2 + 0x18);
    param_1[0x74] = iVar1;
    (**(code **)(iVar1 + 0xc))(param_1);
    *(undefined4 *)(iVar2 + 8) = 0;
    return;
  }
  puVar3 = (undefined4 *)*param_1;
  puVar3[5] = 0x2e;
  (*(code *)*puVar3)(param_1);
  return;
}


//// FUNCTION FUN_00b28ad0 @ 00b28ad0 ////

void FUN_00b28ad0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1a8) = puVar1;
  *puVar1 = FUN_00b28900;
  puVar1[1] = FUN_00b28a30;
  puVar1[2] = 0;
  FUN_00b28750();
  return;
}


//// FUNCTION FUN_00b28b10 @ 00b28b10 ////

void FUN_00b28b10(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int *piVar6;
  
  if ((0xffdc < unaff_ESI[8]) || (0xffdc < unaff_ESI[7])) {
    puVar1 = (undefined4 *)*unaff_ESI;
    puVar1[5] = 0x29;
    puVar1[6] = 0xffdc;
    (*(code *)*puVar1)();
  }
  iVar5 = unaff_ESI[0x36];
  if (iVar5 != 8) {
    puVar1 = (undefined4 *)*unaff_ESI;
    puVar1[5] = 0xf;
    puVar1[6] = iVar5;
    (*(code *)*puVar1)();
  }
  iVar5 = unaff_ESI[9];
  if (10 < iVar5) {
    puVar1 = (undefined4 *)*unaff_ESI;
    puVar1[5] = 0x1a;
    puVar1[6] = iVar5;
    puVar1[7] = 10;
    (*(code *)*puVar1)();
  }
  iVar5 = 0;
  unaff_ESI[0x4e] = 1;
  unaff_ESI[0x4f] = 1;
  if (0 < unaff_ESI[9]) {
    piVar6 = (int *)(unaff_ESI[0x37] + 0xc);
    do {
      if ((((piVar6[-1] < 1) || (4 < piVar6[-1])) || (*piVar6 < 1)) || (4 < *piVar6)) {
        puVar1 = (undefined4 *)*unaff_ESI;
        puVar1[5] = 0x12;
        (*(code *)*puVar1)();
      }
      iVar4 = unaff_ESI[0x4e];
      if (unaff_ESI[0x4e] <= piVar6[-1]) {
        iVar4 = piVar6[-1];
      }
      iVar2 = *piVar6;
      unaff_ESI[0x4e] = iVar4;
      iVar4 = unaff_ESI[0x4f];
      if (unaff_ESI[0x4f] <= iVar2) {
        iVar4 = iVar2;
      }
      unaff_ESI[0x4f] = iVar4;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar5 < unaff_ESI[9]);
  }
  iVar5 = 0;
  unaff_ESI[0x50] = 8;
  if (0 < unaff_ESI[9]) {
    piVar6 = (int *)(unaff_ESI[0x37] + 0x1c);
    do {
      iVar4 = unaff_ESI[7];
      iVar2 = unaff_ESI[0x4e];
      piVar6[2] = 8;
      iVar2 = FUN_00b29d70(piVar6[-5] * iVar4,iVar2 << 3);
      iVar4 = unaff_ESI[0x4f];
      *piVar6 = iVar2;
      iVar3 = FUN_00b29d70(piVar6[-4] * unaff_ESI[8],iVar4 << 3);
      iVar4 = unaff_ESI[7];
      iVar2 = unaff_ESI[0x4e];
      piVar6[1] = iVar3;
      iVar2 = FUN_00b29d70(piVar6[-5] * iVar4,iVar2);
      iVar4 = unaff_ESI[8];
      piVar6[3] = iVar2;
      iVar4 = FUN_00b29d70(piVar6[-4] * iVar4,unaff_ESI[0x4f]);
      piVar6[4] = iVar4;
      iVar4 = unaff_ESI[9];
      piVar6[5] = 1;
      piVar6[0xc] = 0;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar5 < iVar4);
  }
  iVar5 = FUN_00b29d70(unaff_ESI[8],unaff_ESI[0x4f] << 3);
  unaff_ESI[0x51] = iVar5;
  if ((unaff_ESI[9] <= unaff_ESI[0x53]) && (unaff_ESI[0x38] == 0)) {
    *(undefined4 *)(unaff_ESI[0x6e] + 0x10) = 0;
    return;
  }
  *(undefined4 *)(unaff_ESI[0x6e] + 0x10) = 1;
  return;
}


//// FUNCTION FUN_00b28cf0 @ 00b28cf0 ////

uint FUN_00b28cf0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *unaff_ESI;
  int *local_c;
  uint local_8;
  
  iVar3 = unaff_ESI[0x53];
  if (iVar3 == 1) {
    iVar3 = unaff_ESI[0x54];
    uVar1 = *(undefined4 *)(iVar3 + 0x24);
    uVar4 = *(uint *)(iVar3 + 0xc);
    unaff_ESI[0x58] = *(int *)(iVar3 + 0x1c);
    uVar6 = *(uint *)(iVar3 + 0x20);
    *(undefined4 *)(iVar3 + 0x40) = uVar1;
    unaff_ESI[0x59] = uVar6;
    *(undefined4 *)(iVar3 + 0x34) = 1;
    *(undefined4 *)(iVar3 + 0x38) = 1;
    *(undefined4 *)(iVar3 + 0x3c) = 1;
    *(undefined4 *)(iVar3 + 0x44) = 1;
    uVar5 = uVar6 % uVar4;
    if (uVar6 % uVar4 == 0) {
      uVar5 = uVar4;
    }
    unaff_ESI[0x5a] = 1;
    *(uint *)(iVar3 + 0x48) = uVar5;
    unaff_ESI[0x5b] = 0;
    return uVar6 / uVar4;
  }
  if ((iVar3 < 1) || (4 < iVar3)) {
    puVar2 = (undefined4 *)*unaff_ESI;
    puVar2[5] = 0x1a;
    puVar2[6] = iVar3;
    puVar2[7] = 4;
    (*(code *)*puVar2)();
  }
  iVar3 = FUN_00b29d70(unaff_ESI[7],unaff_ESI[0x4e] << 3);
  unaff_ESI[0x58] = iVar3;
  uVar4 = FUN_00b29d70(unaff_ESI[8],unaff_ESI[0x4f] << 3);
  unaff_ESI[0x59] = uVar4;
  unaff_ESI[0x5a] = 0;
  local_8 = 0;
  if (0 < unaff_ESI[0x53]) {
    local_c = unaff_ESI + 0x54;
    do {
      iVar3 = *local_c;
      uVar4 = *(uint *)(iVar3 + 8);
      *(uint *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x24) * uVar4;
      uVar6 = *(uint *)(iVar3 + 0x1c) % uVar4;
      *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0xc);
      iVar7 = *(int *)(iVar3 + 0xc) * uVar4;
      *(uint *)(iVar3 + 0x34) = uVar4;
      *(int *)(iVar3 + 0x3c) = iVar7;
      if (uVar6 == 0) {
        uVar6 = uVar4;
      }
      *(uint *)(iVar3 + 0x44) = uVar6;
      uVar4 = *(uint *)(iVar3 + 0x20) % *(uint *)(iVar3 + 0xc);
      if (uVar4 == 0) {
        uVar4 = *(uint *)(iVar3 + 0xc);
      }
      *(uint *)(iVar3 + 0x48) = uVar4;
      if (10 < unaff_ESI[0x5a] + iVar7) {
        puVar2 = (undefined4 *)*unaff_ESI;
        puVar2[5] = 0xd;
        (*(code *)*puVar2)();
      }
      if (0 < iVar7) {
        do {
          unaff_ESI[unaff_ESI[0x5a] + 0x5b] = local_8;
          iVar7 = iVar7 + -1;
          unaff_ESI[0x5a] = unaff_ESI[0x5a] + 1;
        } while (iVar7 != 0);
      }
      uVar4 = local_8 + 1;
      local_c = local_c + 1;
      local_8 = uVar4;
    } while ((int)uVar4 < unaff_ESI[0x53]);
  }
  return uVar4;
}


//// FUNCTION FUN_00b28e80 @ 00b28e80 ////

void FUN_00b28e80(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_c;
  int *local_8;
  
  local_c = 0;
  if (0 < unaff_EBX[0x53]) {
    local_8 = unaff_EBX + 0x54;
    do {
      iVar1 = *local_8;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (unaff_EBX[iVar2 + 0x2a] == 0)) {
          puVar5 = (undefined4 *)*unaff_EBX;
          puVar5[5] = 0x34;
          puVar5[6] = iVar2;
          (*(code *)*puVar5)();
        }
        puVar3 = (undefined4 *)(**(code **)unaff_EBX[1])();
        puVar5 = (undefined4 *)unaff_EBX[iVar2 + 0x2a];
        puVar6 = puVar3;
        for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 **)(iVar1 + 0x4c) = puVar3;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < unaff_EBX[0x53]);
  }
  return;
}


//// FUNCTION FUN_00b28f20 @ 00b28f20 ////

void FUN_00b28f20(int param_1)

{
  FUN_00b28cf0();
  FUN_00b28e80();
  (*(code *)**(undefined4 **)(param_1 + 0x1c0))(param_1);
  (*(code *)**(undefined4 **)(param_1 + 0x1b0))(param_1);
  **(undefined4 **)(param_1 + 0x1b8) = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 4);
  return;
}


//// FUNCTION FUN_00b28f60 @ 00b28f60 ////

int FUN_00b28f60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[0x6e];
  if (*(int *)(iVar1 + 0x14) != 0) {
    return 2;
  }
  iVar3 = (**(code **)(param_1[0x6f] + 4))(param_1);
  if (iVar3 == 1) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_00b28b10();
      *(undefined4 *)(iVar1 + 0x18) = 0;
      return 1;
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x23;
      (*(code *)*puVar2)(param_1);
    }
    FUN_00b28f20((int)param_1);
  }
  else if (iVar3 == 2) {
    *(undefined4 *)(iVar1 + 0x14) = 1;
    if (*(int *)(iVar1 + 0x18) == 0) {
      if (param_1[0x25] < param_1[0x27]) {
        param_1[0x27] = param_1[0x25];
        return 2;
      }
    }
    else if (*(int *)(param_1[0x6f] + 0x10) != 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x3b;
      (*(code *)*puVar2)(param_1);
      return 2;
    }
  }
  return iVar3;
}


//// FUNCTION FUN_00b29030 @ 00b29030 ////

void FUN_00b29030(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x6e];
  *puVar1 = FUN_00b28f60;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x6f])(param_1);
  param_1[0x29] = 0;
  return;
}


//// FUNCTION FUN_00b29080 @ 00b29080 ////

void FUN_00b29080(int param_1)

{
  **(undefined4 **)(param_1 + 0x1b8) = FUN_00b28f60;
  return;
}


//// FUNCTION FUN_00b290a0 @ 00b290a0 ////

void FUN_00b290a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1c);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = FUN_00b28f60;
  puVar1[1] = FUN_00b29030;
  puVar1[2] = FUN_00b28f20;
  puVar1[3] = FUN_00b29080;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}


//// FUNCTION FUN_00b29100 @ 00b29100 ////

int FUN_00b29100(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  piVar3 = param_1;
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x36;
    puVar2[6] = 1;
    (*(code *)*puVar2)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0xe;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
  }
  param_1 = (int *)0x0;
  piVar4 = *(int **)(iVar1 + 0x34 + param_2 * 4);
  while (piVar5 = piVar4, piVar5 != (int *)0x0) {
    if (param_3 <= (uint)piVar5[2]) goto LAB_00b29217;
    param_1 = piVar5;
    piVar4 = (int *)*piVar5;
  }
  iVar6 = param_3 + 0x10;
  if (param_1 == (int *)0x0) {
    uVar7 = *(uint *)(&DAT_00d8d8c8 + param_2 * 4);
  }
  else {
    uVar7 = *(uint *)(&DAT_00d8d8d0 + param_2 * 4);
  }
  if (1000000000U - iVar6 < uVar7) {
    uVar7 = 1000000000U - iVar6;
  }
  piVar5 = (int *)FUN_00b60b40(piVar3,uVar7 + iVar6);
  while (piVar5 == (int *)0x0) {
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      puVar2 = (undefined4 *)*piVar3;
      puVar2[5] = 0x36;
      puVar2[6] = 2;
      (*(code *)*puVar2)(piVar3);
    }
    piVar5 = (int *)FUN_00b60b40(piVar3,uVar7 + iVar6);
  }
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + uVar7 + iVar6;
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = uVar7 + param_3;
  if (param_1 == (int *)0x0) {
    *(int **)(iVar1 + 0x34 + param_2 * 4) = piVar5;
  }
  else {
    *param_1 = (int)piVar5;
  }
LAB_00b29217:
  iVar1 = piVar5[1];
  piVar5[1] = iVar1 + param_3;
  piVar5[2] = piVar5[2] - param_3;
  return iVar1 + 0x10 + (int)piVar5;
}


//// FUNCTION FUN_00b29240 @ 00b29240 ////

undefined4 * FUN_00b29240(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    puVar4 = (undefined4 *)*param_1;
    puVar4[5] = 0x36;
    puVar4[6] = 3;
    (*(code *)*puVar4)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    puVar4 = (undefined4 *)*param_1;
    puVar4[5] = 0xe;
    puVar4[6] = param_2;
    (*(code *)*puVar4)(param_1);
  }
  puVar4 = (undefined4 *)FUN_00b60b90(param_1,param_3 + 0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x36;
    puVar2[6] = 4;
    (*(code *)*puVar2)(param_1);
  }
  *(uint *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + param_3 + 0x10;
  uVar3 = *(undefined4 *)(iVar1 + 0x3c + param_2 * 4);
  *(undefined4 **)(iVar1 + 0x3c + param_2 * 4) = puVar4;
  puVar4[1] = param_3;
  *puVar4 = uVar3;
  puVar4[2] = 0;
  return puVar4 + 4;
}


//// FUNCTION FUN_00b292f0 @ 00b292f0 ////

int FUN_00b292f0(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x46;
    (*(code *)*puVar3)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_00b29100(param_1,param_2,param_4 * 4);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      puVar3 = FUN_00b29240(param_1,param_2,uVar1 * param_3);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar5 * 4) = puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + param_3);
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}


//// FUNCTION FUN_00b293a0 @ 00b293a0 ////

int FUN_00b293a0(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x46;
    (*(code *)*puVar3)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_00b29100(param_1,param_2,param_4 * 4);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      puVar3 = FUN_00b29240(param_1,param_2,uVar1 * param_3 * 0x80);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar5 * 4) = puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + param_3 * 0x20;
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}


//// FUNCTION FUN_00b29450 @ 00b29450 ////

void FUN_00b29450(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0xe;
    puVar3[6] = param_2;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00b29100(param_1,param_2,0x248);
  puVar3[1] = param_5;
  puVar3[3] = param_6;
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 **)(iVar1 + 0x44) = puVar3;
  puVar3[2] = param_4;
  *puVar3 = 0;
  puVar3[8] = param_3;
  puVar3[10] = 0;
  puVar3[0xb] = uVar2;
  return;
}


//// FUNCTION FUN_00b294c0 @ 00b294c0 ////

void FUN_00b294c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0xe;
    puVar3[6] = param_2;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00b29100(param_1,param_2,0x248);
  puVar3[1] = param_5;
  puVar3[3] = param_6;
  uVar2 = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 **)(iVar1 + 0x48) = puVar3;
  puVar3[2] = param_4;
  *puVar3 = 0;
  puVar3[8] = param_3;
  puVar3[10] = 0;
  puVar3[0xb] = uVar2;
  return;
}


//// FUNCTION FUN_00b29530 @ 00b29530 ////

void FUN_00b29530(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  iVar5 = 0;
  iVar4 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar5 = iVar5 + piVar2[3] * piVar2[2];
      iVar4 = iVar4 + piVar2[1] * piVar2[2];
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar5 = iVar5 + piVar2[3] * piVar2[2] * 0x80;
      iVar4 = iVar4 + piVar2[1] * piVar2[2] * 0x80;
    }
  }
  if (0 < iVar5) {
    iVar3 = FUN_00b60be0((int)param_1,iVar5,iVar4,*(int *)(iVar1 + 0x4c));
    if (iVar3 < iVar4) {
      iVar3 = iVar3 / iVar5;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * iVar3;
          FUN_00b60ce0(param_1,piVar2 + 0xc);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_00b292f0(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * iVar3;
          FUN_00b60ce0(param_1,piVar2 + 0xc);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar5 = FUN_00b293a0(param_1,1,piVar2[2],piVar2[4]);
        iVar4 = *(int *)(iVar1 + 0x50);
        *piVar2 = iVar5;
        piVar2[5] = iVar4;
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00b296d0 @ 00b296d0 ////

void FUN_00b296d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar1 = unaff_ESI[2];
  iVar3 = unaff_ESI[6] * iVar1;
  iVar4 = unaff_ESI[4];
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = iVar4 - iVar5;
      if (unaff_ESI[5] < iVar4 - iVar5) {
        iVar2 = unaff_ESI[5];
      }
      iVar4 = unaff_ESI[7] - (unaff_ESI[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      iVar4 = unaff_ESI[1] - (unaff_ESI[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1;
      if (param_2 == 0) {
        (*(code *)unaff_ESI[0xc])
                  (param_1,unaff_ESI + 0xc,*(undefined4 *)(*unaff_ESI + iVar5 * 4),iVar3,iVar2);
      }
      else {
        (*(code *)unaff_ESI[0xd])(param_1,unaff_ESI + 0xc,*(undefined4 *)(*unaff_ESI + iVar5 * 4));
      }
      iVar3 = iVar3 + iVar2;
      iVar4 = unaff_ESI[4];
      iVar5 = iVar5 + unaff_ESI[5];
    } while (iVar5 < iVar4);
  }
  return;
}


//// FUNCTION FUN_00b29770 @ 00b29770 ////

void FUN_00b29770(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar1 = unaff_ESI[2];
  iVar3 = unaff_ESI[6] * iVar1 * 0x80;
  iVar4 = unaff_ESI[4];
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = iVar4 - iVar5;
      if (unaff_ESI[5] < iVar4 - iVar5) {
        iVar2 = unaff_ESI[5];
      }
      iVar4 = unaff_ESI[7] - (unaff_ESI[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      iVar4 = unaff_ESI[1] - (unaff_ESI[6] + iVar5);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1 * 0x80;
      if (param_2 == 0) {
        (*(code *)unaff_ESI[0xc])
                  (param_1,unaff_ESI + 0xc,*(undefined4 *)(*unaff_ESI + iVar5 * 4),iVar3,iVar2);
      }
      else {
        (*(code *)unaff_ESI[0xd])(param_1,unaff_ESI + 0xc,*(undefined4 *)(*unaff_ESI + iVar5 * 4));
      }
      iVar3 = iVar3 + iVar2;
      iVar4 = unaff_ESI[4];
      iVar5 = iVar5 + unaff_ESI[5];
    } while (iVar5 < iVar4);
  }
  return;
}


//// FUNCTION FUN_00b29820 @ 00b29820 ////

int FUN_00b29820(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_3 + param_4;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x16;
    (*(code *)*puVar2)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (param_2[10] == 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x45;
      (*(code *)*puVar2)(param_1);
    }
    if (param_2[9] != 0) {
      FUN_00b296d0(param_1,1);
      param_2[9] = 0;
    }
    uVar5 = param_3;
    if ((param_3 <= (uint)param_2[6]) && (uVar5 = uVar1 - param_2[4], (int)uVar5 < 0)) {
      uVar5 = 0;
    }
    param_2[6] = uVar5;
    FUN_00b296d0(param_1,0);
  }
  uVar5 = param_2[7];
  if (uVar5 < uVar1) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != 0)) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x16;
      (*(code *)*puVar2)(param_1);
    }
    if (param_5 != 0) {
      param_2[7] = uVar1;
    }
    if (param_2[8] != 0) {
      uVar3 = param_2[2];
      iVar4 = param_2[6];
      for (uVar5 = uVar5 - iVar4; uVar5 < uVar1 - iVar4; uVar5 = uVar5 + 1) {
        FUN_00b29e30(*(undefined4 **)(*param_2 + uVar5 * 4),uVar3);
      }
      goto LAB_00b2990b;
    }
    if (param_5 == 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x16;
      (*(code *)*puVar2)(param_1);
      return *param_2 + (param_3 - param_2[6]) * 4;
    }
  }
  else {
LAB_00b2990b:
    if (param_5 == 0) goto LAB_00b29919;
  }
  param_2[9] = 1;
LAB_00b29919:
  return *param_2 + (param_3 - param_2[6]) * 4;
}


//// FUNCTION FUN_00b29960 @ 00b29960 ////

int FUN_00b29960(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_3 + param_4;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x16;
    (*(code *)*puVar2)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (param_2[10] == 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x45;
      (*(code *)*puVar2)(param_1);
    }
    if (param_2[9] != 0) {
      FUN_00b29770(param_1,1);
      param_2[9] = 0;
    }
    uVar5 = param_3;
    if ((param_3 <= (uint)param_2[6]) && (uVar5 = uVar1 - param_2[4], (int)uVar5 < 0)) {
      uVar5 = 0;
    }
    param_2[6] = uVar5;
    FUN_00b29770(param_1,0);
  }
  uVar5 = param_2[7];
  if (uVar5 < uVar1) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != 0)) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x16;
      (*(code *)*puVar2)(param_1);
    }
    if (param_5 != 0) {
      param_2[7] = uVar1;
    }
    if (param_2[8] != 0) {
      iVar3 = param_2[6];
      iVar4 = param_2[2];
      for (uVar5 = uVar5 - iVar3; uVar5 < uVar1 - iVar3; uVar5 = uVar5 + 1) {
        FUN_00b29e30(*(undefined4 **)(*param_2 + uVar5 * 4),iVar4 << 7);
      }
      goto LAB_00b29a54;
    }
    if (param_5 == 0) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x16;
      (*(code *)*puVar2)(param_1);
      return *param_2 + (param_3 - param_2[6]) * 4;
    }
  }
  else {
LAB_00b29a54:
    if (param_5 == 0) goto LAB_00b29a62;
  }
  param_2[9] = 1;
LAB_00b29a62:
  return *param_2 + (param_3 - param_2[6]) * 4;
}


//// FUNCTION FUN_00b29aa0 @ 00b29aa0 ////

void FUN_00b29aa0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0xe;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
  }
  if (param_2 == 1) {
    for (iVar3 = *(int *)(iVar1 + 0x44); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
      if (*(int *)(iVar3 + 0x28) != 0) {
        *(undefined4 *)(iVar3 + 0x28) = 0;
        (**(code **)(iVar3 + 0x38))(param_1,iVar3 + 0x30);
      }
    }
    iVar3 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
      if (*(int *)(iVar3 + 0x28) != 0) {
        *(undefined4 *)(iVar3 + 0x28) = 0;
        (**(code **)(iVar3 + 0x38))(param_1,iVar3 + 0x30);
      }
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x3c + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x3c + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    iVar3 = puVar2[2];
    iVar4 = puVar2[1];
    puVar5 = (undefined4 *)*puVar2;
    FUN_00b60bc0(param_1,(int)puVar2);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar3 + 0x10 + iVar4);
    puVar2 = puVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x34 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    iVar3 = puVar2[2];
    iVar4 = puVar2[1];
    puVar5 = (undefined4 *)*puVar2;
    FUN_00b60b70(param_1,(int)puVar2);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar3 + 0x10 + iVar4);
    puVar2 = puVar5;
  }
  return;
}


//// FUNCTION FUN_00b29ba0 @ 00b29ba0 ////

void FUN_00b29ba0(int *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00b29aa0(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00b60b70(param_1,param_1[1]);
  param_1[1] = 0;
  FUN_00b60d50();
  return;
}


//// FUNCTION FUN_00b29be0 @ 00b29be0 ////

void FUN_00b29be0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  param_1[1] = 0;
  uVar2 = FUN_00b60d40();
  puVar3 = (undefined4 *)FUN_00b60b40(param_1,0x54);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00b60d50();
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x36;
    puVar1[6] = 0;
    (*(code *)*puVar1)(param_1);
  }
  *puVar3 = FUN_00b29100;
  puVar3[1] = FUN_00b29240;
  puVar3[2] = FUN_00b292f0;
  puVar3[3] = FUN_00b293a0;
  puVar3[4] = FUN_00b29450;
  puVar3[5] = FUN_00b294c0;
  puVar3[6] = FUN_00b29530;
  puVar3[7] = FUN_00b29820;
  puVar3[8] = FUN_00b29960;
  puVar3[9] = FUN_00b29aa0;
  puVar3[10] = FUN_00b29ba0;
  puVar3[0xc] = 1000000000;
  puVar3[0xb] = uVar2;
  puVar3[0xe] = 0;
  puVar3[0x10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xf] = 0;
  param_1[1] = (int)puVar3;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0x54;
  return;
}


//// FUNCTION FUN_00b29ca0 @ 00b29ca0 ////

void FUN_00b29ca0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x134) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}


//// FUNCTION FUN_00b29ce0 @ 00b29ce0 ////

void FUN_00b29ce0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00b29d10 @ 00b29d10 ////

void FUN_00b29d10(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x84);
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}


//// FUNCTION FUN_00b29d40 @ 00b29d40 ////

void FUN_00b29d40(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x118);
  *(undefined4 *)(iVar1 + 0x114) = 0;
  return;
}


//// FUNCTION FUN_00b29d70 @ 00b29d70 ////

int FUN_00b29d70(int param_1,int param_2)

{
  return (param_1 + -1 + param_2) / param_2;
}


//// FUNCTION FUN_00b29d90 @ 00b29d90 ////

int FUN_00b29d90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}


//// FUNCTION FUN_00b29db0 @ 00b29db0 ////

void FUN_00b29db0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    param_2 = param_5;
    do {
      puVar4 = (undefined4 *)*puVar1;
      puVar5 = (undefined4 *)*puVar3;
      for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00b29e00 @ 00b29e00 ////

void FUN_00b29e00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = (param_3 & 0x1ffffff) << 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


//// FUNCTION FUN_00b29e30 @ 00b29e30 ////

void FUN_00b29e30(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


//// FUNCTION FUN_00b29e60 @ 00b29e60 ////

void FUN_00b29e60(undefined1 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_ESI;
  
  piVar2 = (int *)unaff_ESI[6];
  puVar3 = (undefined1 *)*piVar2;
  *puVar3 = param_1;
  *piVar2 = (int)(puVar3 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar5 = (*(code *)piVar2[3])();
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)*unaff_ESI;
      puVar4[5] = 0x18;
      (*(code *)*puVar4)();
    }
  }
  return;
}


//// FUNCTION FUN_00b29e90 @ 00b29e90 ////

void FUN_00b29e90(undefined1 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  
  puVar2 = (undefined4 *)unaff_ESI[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0xff;
  *puVar2 = puVar3 + 1;
  piVar1 = puVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar5 = (*(code *)puVar2[3])();
    if (iVar5 == 0) {
      puVar2 = (undefined4 *)*unaff_ESI;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  piVar4 = (int *)unaff_ESI[6];
  puVar3 = (undefined1 *)*piVar4;
  *puVar3 = param_1;
  *piVar4 = (int)(puVar3 + 1);
  piVar1 = piVar4 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar5 = (*(code *)piVar4[3])();
    if (iVar5 == 0) {
      puVar2 = (undefined4 *)*unaff_ESI;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  return;
}


//// FUNCTION FUN_00b29f40 @ 00b29f40 ////

char FUN_00b29f40(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  ushort *puVar9;
  int iVar10;
  int *unaff_ESI;
  int *piVar11;
  
  iVar2 = unaff_ESI[param_1 + 0x12];
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)*unaff_ESI;
    puVar3[5] = 0x34;
    puVar3[6] = param_1;
    (*(code *)*puVar3)();
  }
  bVar8 = false;
  puVar9 = (ushort *)(iVar2 + 4);
  iVar10 = 0x10;
  do {
    if (0xff < puVar9[-2]) {
      bVar8 = true;
    }
    if (0xff < puVar9[-1]) {
      bVar8 = true;
    }
    if (0xff < *puVar9) {
      bVar8 = true;
    }
    if (0xff < puVar9[1]) {
      bVar8 = true;
    }
    puVar9 = puVar9 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (*(int *)(iVar2 + 0x80) == 0) {
    puVar3 = (undefined4 *)unaff_ESI[6];
    puVar4 = (undefined1 *)*puVar3;
    *puVar4 = 0xff;
    *puVar3 = puVar4 + 1;
    piVar11 = puVar3 + 1;
    *piVar11 = *piVar11 + -1;
    if ((*piVar11 == 0) && (iVar10 = (*(code *)puVar3[3])(), iVar10 == 0)) {
      puVar3 = (undefined4 *)*unaff_ESI;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
    puVar3 = (undefined4 *)unaff_ESI[6];
    puVar4 = (undefined1 *)*puVar3;
    *puVar4 = 0xdb;
    *puVar3 = puVar4 + 1;
    piVar11 = puVar3 + 1;
    *piVar11 = *piVar11 + -1;
    if ((*piVar11 == 0) && (iVar10 = (*(code *)puVar3[3])(), iVar10 == 0)) {
      puVar3 = (undefined4 *)*unaff_ESI;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
    puVar3 = (undefined4 *)unaff_ESI[6];
    puVar4 = (undefined1 *)*puVar3;
    *puVar4 = 0;
    iVar10 = puVar3[1];
    *puVar3 = puVar4 + 1;
    puVar3[1] = iVar10 + -1;
    if ((iVar10 + -1 == 0) && (iVar10 = (*(code *)puVar3[3])(), iVar10 == 0)) {
      puVar3 = (undefined4 *)*unaff_ESI;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
    piVar5 = (int *)unaff_ESI[6];
    pcVar6 = (char *)*piVar5;
    *pcVar6 = (-bVar8 & 0x40U) + 0x43;
    *piVar5 = (int)(pcVar6 + 1);
    piVar11 = piVar5 + 1;
    *piVar11 = *piVar11 + -1;
    if ((*piVar11 == 0) && (iVar10 = (*(code *)piVar5[3])(), iVar10 == 0)) {
      puVar3 = (undefined4 *)*unaff_ESI;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
    piVar5 = (int *)unaff_ESI[6];
    pcVar6 = (char *)*piVar5;
    *pcVar6 = bVar8 * '\x10' + (char)param_1;
    *piVar5 = (int)(pcVar6 + 1);
    piVar11 = piVar5 + 1;
    *piVar11 = *piVar11 + -1;
    if ((*piVar11 == 0) && (iVar10 = (*(code *)piVar5[3])(), iVar10 == 0)) {
      puVar3 = (undefined4 *)*unaff_ESI;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
    piVar11 = &DAT_00d8d8d8;
    do {
      uVar1 = *(undefined2 *)(iVar2 + *piVar11 * 2);
      if (bVar8) {
        piVar7 = (int *)unaff_ESI[6];
        puVar4 = (undefined1 *)*piVar7;
        *puVar4 = (char)((ushort)uVar1 >> 8);
        *piVar7 = (int)(puVar4 + 1);
        piVar5 = piVar7 + 1;
        *piVar5 = *piVar5 + -1;
        if ((*piVar5 == 0) && (iVar10 = (*(code *)piVar7[3])(), iVar10 == 0)) {
          puVar3 = (undefined4 *)*unaff_ESI;
          puVar3[5] = 0x18;
          (*(code *)*puVar3)();
        }
      }
      piVar7 = (int *)unaff_ESI[6];
      puVar4 = (undefined1 *)*piVar7;
      *puVar4 = (char)uVar1;
      *piVar7 = (int)(puVar4 + 1);
      piVar5 = piVar7 + 1;
      *piVar5 = *piVar5 + -1;
      if ((*piVar5 == 0) && (iVar10 = (*(code *)piVar7[3])(), iVar10 == 0)) {
        puVar3 = (undefined4 *)*unaff_ESI;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)();
      }
      piVar11 = piVar11 + 1;
    } while ((int)piVar11 < 0xd8d9d8);
    *(undefined4 *)(iVar2 + 0x80) = 1;
  }
  return bVar8;
}


//// FUNCTION FUN_00b2a110 @ 00b2a110 ////

void __thiscall FUN_00b2a110(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  int in_EAX;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  if (in_EAX == 0) {
    iVar8 = *(int *)((int)this + param_1 * 4 + 0x58);
  }
  else {
    iVar8 = *(int *)((int)this + param_1 * 4 + 0x68);
    param_1 = param_1 + 0x10;
  }
  if (iVar8 == 0) {
    puVar2 = *(undefined4 **)this;
    puVar2[5] = 0x32;
    puVar2[6] = param_1;
    (*(code *)*puVar2)(this);
  }
  if (*(int *)(iVar8 + 0x114) == 0) {
    FUN_00b29e90(0xc4);
    local_8 = 0;
    pbVar5 = (byte *)(iVar8 + 3);
    iVar7 = 4;
    do {
      local_8 = (uint)*pbVar5 + local_8 + (uint)pbVar5[-2] + (uint)pbVar5[-1] + (uint)pbVar5[1];
      pbVar5 = pbVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    piVar3 = *(int **)((int)this + 0x18);
    puVar4 = (undefined1 *)*piVar3;
    *puVar4 = (char)((uint)(local_8 + 0x13) >> 8);
    *piVar3 = (int)(puVar4 + 1);
    piVar1 = piVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar7 = (*(code *)piVar3[3])(this);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)this;
        puVar2[5] = 0x18;
        (*(code *)*puVar2)(this);
      }
    }
    piVar3 = *(int **)((int)this + 0x18);
    puVar4 = (undefined1 *)*piVar3;
    *puVar4 = (char)(local_8 + 0x13);
    *piVar3 = (int)(puVar4 + 1);
    piVar1 = piVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar7 = (*(code *)piVar3[3])(this);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)this;
        puVar2[5] = 0x18;
        (*(code *)*puVar2)(this);
      }
    }
    piVar3 = *(int **)((int)this + 0x18);
    puVar4 = (undefined1 *)*piVar3;
    *puVar4 = (undefined1)param_1;
    *piVar3 = (int)(puVar4 + 1);
    piVar1 = piVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar7 = (*(code *)piVar3[3])(this);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)this;
        puVar2[5] = 0x18;
        (*(code *)*puVar2)(this);
      }
    }
    iVar7 = 1;
    do {
      puVar2 = *(undefined4 **)((int)this + 0x18);
      puVar4 = (undefined1 *)*puVar2;
      *puVar4 = *(undefined1 *)(iVar7 + iVar8);
      *puVar2 = puVar4 + 1;
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar6 = (*(code *)puVar2[3])(this);
        if (iVar6 == 0) {
          puVar2 = *(undefined4 **)this;
          puVar2[5] = 0x18;
          (*(code *)*puVar2)(this);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x11);
    iVar7 = 0;
    if (0 < local_8) {
      do {
        puVar2 = *(undefined4 **)((int)this + 0x18);
        puVar4 = (undefined1 *)*puVar2;
        *puVar4 = *(undefined1 *)(iVar8 + 0x11 + iVar7);
        *puVar2 = puVar4 + 1;
        piVar1 = puVar2 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          iVar6 = (*(code *)puVar2[3])(this);
          if (iVar6 == 0) {
            puVar2 = *(undefined4 **)this;
            puVar2[5] = 0x18;
            (*(code *)*puVar2)(this);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_8);
    }
    *(undefined4 *)(iVar8 + 0x114) = 1;
  }
  return;
}


//// FUNCTION FUN_00b2a2b0 @ 00b2a2b0 ////

void FUN_00b2a2b0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  
  FUN_00b29e90(0xdd);
  puVar1 = (undefined4 *)in_EAX[6];
  puVar2 = (undefined1 *)*puVar1;
  *puVar2 = 0;
  *puVar1 = puVar2 + 1;
  piVar4 = puVar1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar5 = (*(code *)puVar1[3])();
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)*in_EAX;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)();
    }
  }
  puVar1 = (undefined4 *)in_EAX[6];
  puVar2 = (undefined1 *)*puVar1;
  *puVar2 = 4;
  *puVar1 = puVar2 + 1;
  piVar4 = puVar1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar5 = (*(code *)puVar1[3])();
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)*in_EAX;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)();
    }
  }
  piVar3 = (int *)in_EAX[6];
  puVar2 = (undefined1 *)*piVar3;
  iVar5 = in_EAX[0x32];
  *puVar2 = (char)((uint)iVar5 >> 8);
  *piVar3 = (int)(puVar2 + 1);
  piVar4 = piVar3 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar6 = (*(code *)piVar3[3])();
    if (iVar6 == 0) {
      puVar1 = (undefined4 *)*in_EAX;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)();
    }
  }
  piVar4 = (int *)in_EAX[6];
  puVar2 = (undefined1 *)*piVar4;
  *puVar2 = (char)iVar5;
  *piVar4 = (int)(puVar2 + 1);
  iVar5 = piVar4[1];
  piVar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    iVar5 = (*(code *)piVar4[3])();
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)*in_EAX;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)();
    }
  }
  return;
}


//// FUNCTION FUN_00b2a360 @ 00b2a360 ////

void __fastcall FUN_00b2a360(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 in_AL;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_8;
  
  FUN_00b29e90(in_AL);
  iVar7 = param_1[0xf] * 3 + 8;
  piVar2 = (int *)param_1[6];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)((uint)iVar7 >> 8);
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar6 = (*(code *)piVar2[3])(param_1), iVar6 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  piVar2 = (int *)param_1[6];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)iVar7;
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar7 = (*(code *)piVar2[3])(param_1), iVar7 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  if ((0xffff < param_1[8]) || (0xffff < param_1[7])) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x29;
    puVar3[6] = 0xffff;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)param_1[6];
  puVar8 = (undefined1 *)*puVar3;
  *puVar8 = (char)param_1[0xe];
  *puVar3 = puVar8 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar7 = (*(code *)puVar3[3])(param_1), iVar7 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  piVar2 = (int *)param_1[6];
  iVar7 = param_1[8];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)((uint)iVar7 >> 8);
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar6 = (*(code *)piVar2[3])(param_1), iVar6 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  piVar2 = (int *)param_1[6];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)iVar7;
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar7 = (*(code *)piVar2[3])(param_1), iVar7 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  piVar2 = (int *)param_1[6];
  iVar7 = param_1[7];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)((uint)iVar7 >> 8);
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar6 = (*(code *)piVar2[3])(param_1), iVar6 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  piVar2 = (int *)param_1[6];
  puVar8 = (undefined1 *)*piVar2;
  *puVar8 = (char)iVar7;
  *piVar2 = (int)(puVar8 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar7 = (*(code *)piVar2[3])(param_1), iVar7 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)param_1[6];
  puVar8 = (undefined1 *)*puVar3;
  *puVar8 = (char)param_1[0xf];
  *puVar3 = puVar8 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar7 = (*(code *)puVar3[3])(param_1), iVar7 == 0)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)(param_1);
  }
  puVar8 = (undefined1 *)param_1[0x11];
  local_8 = 0;
  if (0 < param_1[0xf]) {
    do {
      puVar3 = (undefined4 *)param_1[6];
      puVar4 = (undefined1 *)*puVar3;
      *puVar4 = *puVar8;
      *puVar3 = puVar4 + 1;
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar7 = (*(code *)puVar3[3])(param_1), iVar7 == 0)) {
        puVar3 = (undefined4 *)*param_1;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)(param_1);
      }
      piVar2 = (int *)param_1[6];
      pcVar5 = (char *)*piVar2;
      *pcVar5 = puVar8[8] * '\x10' + puVar8[0xc];
      *piVar2 = (int)(pcVar5 + 1);
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar7 = (*(code *)piVar2[3])(param_1), iVar7 == 0)) {
        puVar3 = (undefined4 *)*param_1;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)(param_1);
      }
      puVar3 = (undefined4 *)param_1[6];
      puVar4 = (undefined1 *)*puVar3;
      *puVar4 = puVar8[0x10];
      *puVar3 = puVar4 + 1;
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar7 = (*(code *)puVar3[3])(param_1), iVar7 == 0)) {
        puVar3 = (undefined4 *)*param_1;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)(param_1);
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 0x54;
    } while (local_8 < param_1[0xf]);
  }
  return;
}


//// FUNCTION FUN_00b2a560 @ 00b2a560 ////

void FUN_00b2a560(void)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char cVar6;
  int *in_EAX;
  int iVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int *piVar11;
  int local_8;
  
  FUN_00b29e90(0xda);
  piVar1 = (int *)in_EAX[6];
  puVar2 = (undefined1 *)*piVar1;
  iVar8 = in_EAX[0x3f] * 2 + 6;
  *puVar2 = (char)((uint)iVar8 >> 8);
  *piVar1 = (int)(puVar2 + 1);
  piVar11 = piVar1 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar7 = (*(code *)piVar1[3])(), iVar7 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  piVar1 = (int *)in_EAX[6];
  puVar2 = (undefined1 *)*piVar1;
  *puVar2 = (char)iVar8;
  *piVar1 = (int)(puVar2 + 1);
  piVar11 = piVar1 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar8 = (*(code *)piVar1[3])(), iVar8 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar2 = (undefined1 *)*puVar3;
  *puVar2 = (char)in_EAX[0x3f];
  *puVar3 = puVar2 + 1;
  piVar11 = puVar3 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar8 = (*(code *)puVar3[3])(), iVar8 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  local_8 = 0;
  if (0 < in_EAX[0x3f]) {
    piVar11 = in_EAX + 0x40;
    do {
      puVar3 = (undefined4 *)in_EAX[6];
      puVar2 = (undefined1 *)*piVar11;
      puVar4 = (undefined1 *)*puVar3;
      *puVar4 = *puVar2;
      *puVar3 = puVar4 + 1;
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (iVar8 = (*(code *)puVar3[3])(), iVar8 == 0)) {
        puVar3 = (undefined4 *)*in_EAX;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)();
      }
      cVar9 = (char)*(undefined4 *)(puVar2 + 0x14);
      cVar10 = (char)*(undefined4 *)(puVar2 + 0x18);
      if (in_EAX[0x3b] != 0) {
        cVar6 = cVar10;
        if (in_EAX[0x51] == 0) {
          cVar10 = '\0';
          if ((in_EAX[0x53] == 0) || (cVar6 = '\0', in_EAX[0x2d] != 0)) goto LAB_00b2a660;
        }
        cVar10 = cVar6;
        cVar9 = '\0';
      }
LAB_00b2a660:
      piVar1 = (int *)in_EAX[6];
      pcVar5 = (char *)*piVar1;
      *pcVar5 = cVar9 * '\x10' + cVar10;
      iVar8 = piVar1[1];
      *piVar1 = (int)(pcVar5 + 1);
      piVar1[1] = iVar8 + -1;
      if ((iVar8 + -1 == 0) && (iVar8 = (*(code *)piVar1[3])(), iVar8 == 0)) {
        puVar3 = (undefined4 *)*in_EAX;
        puVar3[5] = 0x18;
        (*(code *)*puVar3)();
      }
      local_8 = local_8 + 1;
      piVar11 = piVar11 + 1;
    } while (local_8 < in_EAX[0x3f]);
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar2 = (undefined1 *)*puVar3;
  *puVar2 = (char)in_EAX[0x51];
  *puVar3 = puVar2 + 1;
  piVar11 = puVar3 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar8 = (*(code *)puVar3[3])(), iVar8 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar2 = (undefined1 *)*puVar3;
  *puVar2 = (char)in_EAX[0x52];
  *puVar3 = puVar2 + 1;
  piVar11 = puVar3 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar8 = (*(code *)puVar3[3])(), iVar8 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  piVar1 = (int *)in_EAX[6];
  pcVar5 = (char *)*piVar1;
  *pcVar5 = (char)in_EAX[0x53] * '\x10' + (char)in_EAX[0x54];
  *piVar1 = (int)(pcVar5 + 1);
  piVar11 = piVar1 + 1;
  *piVar11 = *piVar11 + -1;
  if ((*piVar11 == 0) && (iVar8 = (*(code *)piVar1[3])(), iVar8 == 0)) {
    puVar3 = (undefined4 *)*in_EAX;
    puVar3[5] = 0x18;
    (*(code *)*puVar3)();
  }
  return;
}


//// FUNCTION FUN_00b2a730 @ 00b2a730 ////

void FUN_00b2a730(void)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  int *in_EAX;
  int iVar6;
  int iVar7;
  
  FUN_00b29e90(0xe0);
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0x10;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0x4a;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0x46;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0x49;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0x46;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = (char)in_EAX[0x35];
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = *(undefined1 *)((int)in_EAX + 0xd5);
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = *(undefined1 *)((int)in_EAX + 0xd6);
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  piVar4 = (int *)in_EAX[6];
  puVar3 = (undefined1 *)*piVar4;
  iVar6 = in_EAX[0x36];
  *puVar3 = (char)((ushort)(short)iVar6 >> 8);
  *piVar4 = (int)(puVar3 + 1);
  piVar5 = piVar4 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar7 = (*(code *)piVar4[3])();
    if (iVar7 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  piVar4 = (int *)in_EAX[6];
  puVar3 = (undefined1 *)*piVar4;
  *puVar3 = (char)(short)iVar6;
  *piVar4 = (int)(puVar3 + 1);
  piVar5 = piVar4 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)piVar4[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  uVar1 = *(undefined2 *)((int)in_EAX + 0xda);
  piVar4 = (int *)in_EAX[6];
  puVar3 = (undefined1 *)*piVar4;
  *puVar3 = (char)((ushort)uVar1 >> 8);
  *piVar4 = (int)(puVar3 + 1);
  piVar5 = piVar4 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)piVar4[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  piVar5 = (int *)in_EAX[6];
  puVar3 = (undefined1 *)*piVar5;
  *puVar3 = (char)uVar1;
  *piVar5 = (int)(puVar3 + 1);
  iVar6 = piVar5[1];
  piVar5[1] = iVar6 + -1;
  if (iVar6 + -1 == 0) {
    iVar6 = (*(code *)piVar5[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  puVar2 = (undefined4 *)in_EAX[6];
  puVar3 = (undefined1 *)*puVar2;
  *puVar3 = 0;
  *puVar2 = puVar3 + 1;
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    iVar6 = (*(code *)puVar2[3])();
    if (iVar6 == 0) {
      puVar2 = (undefined4 *)*in_EAX;
      puVar2[5] = 0x18;
      (*(code *)*puVar2)();
    }
  }
  return;
}


//// FUNCTION FUN_00b2a980 @ 00b2a980 ////

void FUN_00b2a980(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  FUN_00b29e90(0xee);
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0xe;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0x41;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 100;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0x6f;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0x62;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0x65;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 100;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  puVar3 = (undefined4 *)in_EAX[6];
  puVar4 = (undefined1 *)*puVar3;
  *puVar4 = 0;
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  if (in_EAX[0x10] == 3) {
    puVar3 = (undefined4 *)in_EAX[6];
    puVar4 = (undefined1 *)*puVar3;
    *puVar4 = 1;
  }
  else {
    puVar3 = (undefined4 *)in_EAX[6];
    puVar4 = (undefined1 *)*puVar3;
    if (in_EAX[0x10] == 5) {
      *puVar4 = 2;
    }
    else {
      *puVar4 = 0;
    }
  }
  *puVar3 = puVar4 + 1;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = (*(code *)puVar3[3])();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)*in_EAX;
      puVar3[5] = 0x18;
      (*(code *)*puVar3)();
    }
  }
  return;
}


//// FUNCTION FUN_00b2ab80 @ 00b2ab80 ////

void FUN_00b2ab80(int *param_1,undefined1 param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (0xfffd < param_3) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0xb;
    (*(code *)*puVar1)(param_1);
  }
  FUN_00b29e90(param_2);
  piVar2 = (int *)param_1[6];
  puVar3 = (undefined1 *)*piVar2;
  *puVar3 = (char)(param_3 + 2 >> 8);
  *piVar2 = (int)(puVar3 + 1);
  piVar4 = piVar2 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar5 = (*(code *)piVar2[3])(param_1);
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)(param_1);
    }
  }
  piVar4 = (int *)param_1[6];
  puVar3 = (undefined1 *)*piVar4;
  *puVar3 = (char)(param_3 + 2);
  *piVar4 = (int)(puVar3 + 1);
  iVar5 = piVar4[1];
  piVar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    iVar5 = (*(code *)piVar4[3])(param_1);
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00b2ac10 @ 00b2ac10 ////

void FUN_00b2ac10(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[6];
  puVar3 = (undefined1 *)*piVar2;
  *puVar3 = param_2;
  *piVar2 = (int)(puVar3 + 1);
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar5 = (*(code *)piVar2[3])(param_1);
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)*param_1;
      puVar4[5] = 0x18;
      (*(code *)*puVar4)(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00b2ac50 @ 00b2ac50 ////

void FUN_00b2ac50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x164);
  FUN_00b29e90(0xd8);
  iVar2 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (iVar2 != 0) {
    FUN_00b2a730();
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_00b2a980();
  }
  return;
}


//// FUNCTION FUN_00b2aca0 @ 00b2aca0 ////

void FUN_00b2aca0(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (0 < param_1[0xf]) {
    piVar3 = (int *)(param_1[0x11] + 0x10);
    iVar4 = 0;
    do {
      cVar2 = FUN_00b29f40(*piVar3);
      local_8 = local_8 + CONCAT31(extraout_var,cVar2);
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x15;
    } while (iVar4 < param_1[0xf]);
  }
  if (((param_1[0x2d] == 0) && (param_1[0x3b] == 0)) && (param_1[0xe] == 8)) {
    iVar4 = param_1[0xf];
    bVar1 = true;
    if (0 < iVar4) {
      piVar3 = (int *)(param_1[0x11] + 0x18);
      do {
        if ((1 < piVar3[-1]) || (1 < *piVar3)) {
          bVar1 = false;
        }
        piVar3 = piVar3 + 0x15;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((local_8 != 0) && (bVar1)) {
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x14) = 0x4b;
      (**(code **)(iVar4 + 4))(param_1,0);
    }
  }
  if (param_1[0x2d] == 0) {
    if (param_1[0x3b] == 0) {
      FUN_00b2a360(param_1);
      return;
    }
    FUN_00b2a360(param_1);
    return;
  }
  FUN_00b2a360(param_1);
  return;
}


//// FUNCTION FUN_00b2ada0 @ 00b2ada0 ////

void FUN_00b2ada0(void *param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  int iVar3;
  
  this = param_1;
  iVar1 = *(int *)((int)param_1 + 0x164);
  if ((*(int *)((int)param_1 + 0xb4) == 0) &&
     (piVar2 = (int *)((int)param_1 + 0xfc), param_1 = (void *)0x0, 0 < *piVar2)) {
    piVar2 = (int *)((int)this + 0x100);
    do {
      iVar3 = *piVar2;
      if (*(int *)((int)this + 0xec) == 0) {
        FUN_00b2a110(this,*(int *)(iVar3 + 0x14));
        iVar3 = *(int *)(iVar3 + 0x18);
LAB_00b2ae1a:
        FUN_00b2a110(this,iVar3);
      }
      else {
        if (*(int *)((int)this + 0x144) != 0) {
          iVar3 = *(int *)(iVar3 + 0x18);
          goto LAB_00b2ae1a;
        }
        if (*(int *)((int)this + 0x14c) == 0) {
          iVar3 = *(int *)(iVar3 + 0x14);
          goto LAB_00b2ae1a;
        }
      }
      param_1 = (void *)((int)param_1 + 1);
      piVar2 = piVar2 + 1;
    } while ((int)param_1 < *(int *)((int)this + 0xfc));
  }
  if (*(int *)((int)this + 200) != *(int *)(iVar1 + 0x1c)) {
    FUN_00b2a2b0();
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((int)this + 200);
  }
  FUN_00b2a560();
  return;
}


//// FUNCTION FUN_00b2ae70 @ 00b2ae70 ////

void FUN_00b2ae70(void)

{
  FUN_00b29e90(0xd9);
  return;
}


//// FUNCTION FUN_00b2ae90 @ 00b2ae90 ////

void FUN_00b2ae90(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  
  FUN_00b29e90(0xd8);
  iVar4 = 0;
  piVar3 = param_1 + 0x12;
  do {
    if (*piVar3 != 0) {
      FUN_00b29f40(iVar4);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 4);
  if (param_1[0x2d] == 0) {
    iVar4 = 0;
    piVar3 = param_1 + 0x1a;
    do {
      if (piVar3[-4] != 0) {
        FUN_00b2a110(param_1,iVar4);
      }
      if (*piVar3 != 0) {
        FUN_00b2a110(param_1,iVar4);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 4);
  }
  puVar1 = (undefined4 *)param_1[6];
  puVar2 = (undefined1 *)*puVar1;
  *puVar2 = 0xff;
  *puVar1 = puVar2 + 1;
  piVar3 = puVar1 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    iVar4 = (*(code *)puVar1[3])(param_1);
    if (iVar4 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)(param_1);
    }
  }
  puVar1 = (undefined4 *)param_1[6];
  puVar2 = (undefined1 *)*puVar1;
  *puVar2 = 0xd9;
  *puVar1 = puVar2 + 1;
  piVar3 = puVar1 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    iVar4 = (*(code *)puVar1[3])(param_1);
    if (iVar4 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x18;
      (*(code *)*puVar1)(param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00b2af50 @ 00b2af50 ////

void FUN_00b2af50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x20);
  *(undefined4 **)(param_1 + 0x164) = puVar1;
  *puVar1 = FUN_00b2ac50;
  puVar1[1] = FUN_00b2aca0;
  puVar1[2] = FUN_00b2ada0;
  puVar1[3] = FUN_00b2ae70;
  puVar1[4] = FUN_00b2ae90;
  puVar1[5] = FUN_00b2ab80;
  puVar1[6] = FUN_00b2ac10;
  puVar1[7] = 0;
  return;
}


//// FUNCTION FUN_00b2afb0 @ 00b2afb0 ////

void FUN_00b2afb0(int *param_1)

{
  undefined4 *puVar1;
  
  FUN_00b66640((int)param_1,0);
  if (param_1[0x2c] == 0) {
    FUN_00b65a80(param_1);
    FUN_00b65230(param_1);
    FUN_00b64760(param_1,0);
  }
  FUN_00b64110(param_1);
  if (param_1[0x2d] == 0) {
    if (param_1[0x3b] == 0) {
      FUN_00b62620((int)param_1);
    }
    else {
      FUN_00b63330((int)param_1);
    }
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 1;
    (*(code *)*puVar1)();
  }
  if ((param_1[0x2a] < 2) && (param_1[0x2e] == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)0x1;
  }
  FUN_00b61700((int)param_1,puVar1);
  FUN_00b60e70(param_1,0);
  FUN_00b2af50((int)param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)param_1[0x59])(param_1);
  return;
}


//// FUNCTION FUN_00b2b059 @ 00b2b059 ////

undefined4 * FUN_00b2b059(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == 2) {
    uVar2 = 0x40;
  }
  else {
    if (param_1 != 1) {
      return (undefined4 *)0x0;
    }
    uVar2 = 0x19c;
  }
  puVar1 = _malloc(uVar2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar1;
}


//// FUNCTION FUN_00b2b0a1 @ 00b2b0a1 ////

void FUN_00b2b0a1(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00b2b0b9 @ 00b2b0b9 ////

void * FUN_00b2b0b9(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = _malloc(param_2);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,"Out of Memory");
    }
  }
  return pvVar1;
}


//// FUNCTION FUN_00b2b0f2 @ 00b2b0f2 ////

void FUN_00b2b0f2(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  return;
}


//// FUNCTION FUN_00b2b110 @ 00b2b110 ////

undefined4 * FUN_00b2b110(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_2;
}


//// FUNCTION FUN_00b2b138 @ 00b2b138 ////

undefined4 * FUN_00b2b138(undefined4 param_1,undefined4 *param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = param_3;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_2;
}


//// FUNCTION FUN_00b2b174 @ 00b2b174 ////

uint FUN_00b2b174(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ~param_1;
    if (7 < param_3) {
      uVar2 = param_3 >> 3;
      do {
        param_3 = param_3 - 8;
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((*param_2 ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[1] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[2] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[3] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[4] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[5] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[6] ^ uVar1) & 0xff) * 4);
        uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((param_2[7] ^ uVar1) & 0xff) * 4);
        param_2 = param_2 + 8;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00d8da28 + ((*param_2 ^ uVar1) & 0xff) * 4);
      param_2 = param_2 + 1;
    }
    uVar1 = ~uVar1;
  }
  return uVar1;
}


//// FUNCTION FUN_00b2b269 @ 00b2b269 ////

void FUN_00b2b269(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x18);
  param_1[1] = (char)((uint)param_2 >> 0x10);
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  return;
}


//// FUNCTION FUN_00b2b292 @ 00b2b292 ////

void FUN_00b2b292(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 8);
  param_1[1] = (char)param_2;
  return;
}


//// FUNCTION FUN_00b2b2ab @ 00b2b2ab ////

void FUN_00b2b2ab(int *param_1,byte *param_2,undefined4 param_3)

{
  FUN_00b2b269((undefined1 *)&param_3,param_3);
  FUN_00b21218(param_1,&param_3,4);
  FUN_00b21218(param_1,param_2,4);
  FUN_00b206bb((int)param_1);
  FUN_00b206d7((int)param_1,param_2,4);
  return;
}


//// FUNCTION FUN_00b2b2ed @ 00b2b2ed ////

void FUN_00b2b2ed(int *param_1,byte *param_2,uint param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    FUN_00b206d7((int)param_1,param_2,param_3);
    FUN_00b21218(param_1,param_2,param_3);
    return;
  }
  return;
}


//// FUNCTION FUN_00b2b316 @ 00b2b316 ////

void FUN_00b2b316(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  FUN_00b2b269((undefined1 *)&param_1,param_1[0x40]);
  FUN_00b21218(piVar1,&param_1,4);
  return;
}


//// FUNCTION FUN_00b2b33f @ 00b2b33f ////

void FUN_00b2b33f(int *param_1)

{
  FUN_00b21218(param_1,&DAT_00d8de98 + *(byte *)(param_1 + 0x47),8 - (uint)*(byte *)(param_1 + 0x47)
              );
  return;
}


//// FUNCTION FUN_00b2b365 @ 00b2b365 ////

void FUN_00b2b365(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = param_3;
  piVar1 = param_1;
  if ((((char)param_1[0x66] == '\0') && (param_3 == 0)) || (0x100 < param_3)) {
    if (*(char *)((int)param_1 + 0x116) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,"Invalid number of colors in palette");
    }
    FUN_00b20556((int)param_1,"Invalid number of colors in palette");
  }
  else {
    *(short *)(param_1 + 0x42) = (short)param_3;
    FUN_00b2b2ab(param_1,&DAT_00d8deb8,param_3 * 3);
    if (uVar2 != 0) {
      puVar3 = (undefined1 *)(param_2 + 2);
      do {
        param_1._0_3_ = CONCAT12(*puVar3,*(undefined2 *)(puVar3 + -2));
        FUN_00b2b2ed(piVar1,(byte *)&param_1,3);
        puVar3 = puVar3 + 3;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_00b2b316(piVar1);
    piVar1[0x16] = piVar1[0x16] | 2;
  }
  return;
}


//// FUNCTION FUN_00b2b3f7 @ 00b2b3f7 ////

void FUN_00b2b3f7(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ((uint)*(byte *)((int)param_1 + 0x11b) * (uint)*(byte *)(param_1 + 0x46) * param_1[0x2e] +
           7 >> 3) + 1;
  puVar1 = FUN_00b2b0b9(param_1,uVar4);
  param_1[0x37] = (int)puVar1;
  *puVar1 = 0;
  if ((*(byte *)((int)param_1 + 0x115) & 0x10) != 0) {
    puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
    param_1[0x38] = (int)puVar1;
    *puVar1 = 1;
  }
  if ((*(byte *)((int)param_1 + 0x115) & 0xe0) != 0) {
    puVar2 = FUN_00b2b0b9(param_1,uVar4);
    param_1[0x36] = (int)puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if ((*(byte *)((int)param_1 + 0x115) & 0x20) != 0) {
      puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
      param_1[0x39] = (int)puVar1;
      *puVar1 = 2;
    }
    if ((*(byte *)((int)param_1 + 0x115) & 0x40) != 0) {
      puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
      param_1[0x3a] = (int)puVar1;
      *puVar1 = 3;
    }
    if ((*(byte *)((int)param_1 + 0x115) & 0x80) != 0) {
      puVar1 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
      param_1[0x3b] = (int)puVar1;
      *puVar1 = 4;
    }
  }
  if ((*(char *)((int)param_1 + 0x113) == '\0') || ((*(byte *)(param_1 + 0x18) & 2) != 0)) {
    param_1[0x30] = param_1[0x2f];
    uVar4 = param_1[0x2e];
  }
  else {
    param_1[0x30] = param_1[0x2f] + 7U >> 3;
    uVar4 = param_1[0x2e] + 7U >> 3;
  }
  param_1[0x31] = uVar4;
  param_1[0x1d] = param_1[0x28];
  param_1[0x1c] = param_1[0x27];
  return;
}


//// FUNCTION FUN_00b2b539 @ 00b2b539 ////

void FUN_00b2b539(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  puVar9 = param_2;
  puVar2 = param_1;
  if (5 < (int)param_3) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0xb);
  iVar4 = (int)param_3 * 4;
  if (bVar1 == 1) {
    uVar5 = *(uint *)(&DAT_00d8de28 + iVar4);
    uVar8 = *param_1;
    param_3 = (undefined4 *)0x0;
    param_1 = param_2;
    param_2 = (undefined4 *)0x7;
    if (uVar8 <= uVar5) goto LAB_00b2b742;
    do {
      param_3 = (undefined4 *)
                ((uint)param_3 |
                (*(byte *)((uVar5 >> 3) + (int)puVar9) >> (7 - ((byte)uVar5 & 7) & 0x1f) & 1) <<
                ((byte)param_2 & 0x1f));
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = param_3._0_1_;
        param_3 = (undefined4 *)0x0;
        param_2 = (undefined4 *)0x7;
        *(undefined1 *)param_1 = uVar3;
        param_1 = (uint *)((int)param_1 + 1);
      }
      else {
        param_2 = (undefined4 *)((int)param_2 + -1);
      }
      uVar5 = uVar5 + *(int *)(&DAT_00d8de44 + iVar4);
    } while (uVar5 < uVar8);
    bVar11 = param_2 == (undefined4 *)0x7;
  }
  else if (bVar1 == 2) {
    uVar5 = *(uint *)(&DAT_00d8de28 + iVar4);
    uVar8 = *param_1;
    param_3 = (undefined4 *)0x0;
    param_1 = param_2;
    param_2 = (undefined4 *)0x6;
    if (uVar8 <= uVar5) goto LAB_00b2b742;
    do {
      param_3 = (undefined4 *)
                ((uint)param_3 |
                (*(byte *)((uVar5 >> 2) + (int)puVar9) >>
                 (('\x03' - ((byte)uVar5 & 3)) * '\x02' & 0x1f) & 3) << ((byte)param_2 & 0x1f));
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = param_3._0_1_;
        param_3 = (undefined4 *)0x0;
        param_2 = (undefined4 *)0x6;
        *(undefined1 *)param_1 = uVar3;
        param_1 = (uint *)((int)param_1 + 1);
      }
      else {
        param_2 = (undefined4 *)((int)param_2 + -2);
      }
      uVar5 = uVar5 + *(int *)(&DAT_00d8de44 + iVar4);
    } while (uVar5 < uVar8);
    bVar11 = param_2 == (undefined4 *)0x6;
  }
  else {
    if (bVar1 != 4) {
      uVar5 = *param_1;
      uVar6 = (uint)(bVar1 >> 3);
      uVar8 = *(uint *)(&DAT_00d8de28 + iVar4);
      param_3 = param_2;
      for (; uVar8 < uVar5; uVar8 = uVar8 + *(int *)(&DAT_00d8de44 + iVar4)) {
        puVar9 = (undefined4 *)(uVar8 * uVar6 + (int)param_2);
        if (param_3 != puVar9) {
          puVar10 = param_3;
          for (uVar7 = (uint)(bVar1 >> 5); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
        }
        param_3 = (undefined4 *)((int)param_3 + uVar6);
      }
      goto LAB_00b2b742;
    }
    uVar5 = *(uint *)(&DAT_00d8de28 + iVar4);
    uVar8 = *param_1;
    param_3 = (undefined4 *)0x0;
    param_1 = param_2;
    param_2 = (undefined4 *)0x4;
    if (uVar8 <= uVar5) goto LAB_00b2b742;
    do {
      param_3 = (undefined4 *)
                ((uint)param_3 |
                (*(byte *)((uVar5 >> 1) + (int)puVar9) >> (((byte)uVar5 & 1) * -4 + 4 & 0x1f) & 0xf)
                << ((byte)param_2 & 0x1f));
      if (param_2 == (undefined4 *)0x0) {
        uVar3 = param_3._0_1_;
        param_3 = (undefined4 *)0x0;
        param_2 = (undefined4 *)0x4;
        *(undefined1 *)param_1 = uVar3;
        param_1 = (uint *)((int)param_1 + 1);
      }
      else {
        param_2 = param_2 + -1;
      }
      uVar5 = uVar5 + *(int *)(&DAT_00d8de44 + iVar4);
    } while (uVar5 < uVar8);
    bVar11 = param_2 == (undefined4 *)0x4;
  }
  if (!bVar11) {
    *(undefined1 *)param_1 = param_3._0_1_;
  }
LAB_00b2b742:
  uVar5 = ((*(uint *)(&DAT_00d8de44 + iVar4) - *(int *)(&DAT_00d8de28 + iVar4)) + -1 + *puVar2) /
          *(uint *)(&DAT_00d8de44 + iVar4);
  *puVar2 = uVar5;
  puVar2[1] = *(byte *)((int)puVar2 + 0xb) * uVar5 + 7 >> 3;
  return;
}


//// FUNCTION FUN_00b2b773 @ 00b2b773 ////

void FUN_00b2b773(int *param_1,byte *param_2,byte *param_3,uint param_4)

{
  FUN_00b2b2ab(param_1,param_2,param_4);
  FUN_00b2b2ed(param_1,param_3,param_4);
  FUN_00b2b316(param_1);
  return;
}


//// FUNCTION FUN_00b2b7a0 @ 00b2b7a0 ////

void FUN_00b2b7a0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  byte local_14 [4];
  undefined1 local_10 [4];
  char local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  if (param_5 == 0) {
    if ((param_4 < 1) ||
       ((((2 < param_4 && (param_4 != 4)) && (param_4 != 8)) && (param_4 != 0x10)))) {
      pcVar4 = "Invalid bit depth for grayscale image";
      goto LAB_00b2b87c;
    }
  }
  else {
    if (param_5 == 2) {
      if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(param_1,"Invalid bit depth for RGB image");
      }
      *(undefined1 *)((int)param_1 + 0x11a) = 3;
      goto LAB_00b2b882;
    }
    if (param_5 != 3) {
      if (param_5 == 4) {
        if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_00b20535(param_1,"Invalid bit depth for grayscale+alpha image");
        }
        *(undefined1 *)((int)param_1 + 0x11a) = 2;
      }
      else {
        if (param_5 != 6) {
          pcVar4 = "Invalid image color type specified";
          goto LAB_00b2b87c;
        }
        if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_00b20535(param_1,"Invalid bit depth for RGBA image");
        }
        *(undefined1 *)((int)param_1 + 0x11a) = 4;
      }
      goto LAB_00b2b882;
    }
    if ((param_4 < 1) || (((2 < param_4 && (param_4 != 4)) && (param_4 != 8)))) {
      pcVar4 = "Invalid bit depth for paletted image";
LAB_00b2b87c:
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,pcVar4);
    }
  }
  *(undefined1 *)((int)param_1 + 0x11a) = 1;
LAB_00b2b882:
  if (param_6 != 0) {
    FUN_00b20556((int)param_1,"Invalid compression type specified");
    param_6 = 0;
  }
  if (param_7 != 0) {
    FUN_00b20556((int)param_1,"Invalid filter type specified");
    param_7 = 0;
  }
  if ((param_8 != 0) && (param_8 != 1)) {
    FUN_00b20556((int)param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x116) = (undefined1)param_5;
  *(undefined1 *)((int)param_1 + 0x113) = (undefined1)param_8;
  cVar3 = (char)param_4;
  bVar2 = *(char *)((int)param_1 + 0x11a) * cVar3;
  *(byte *)((int)param_1 + 0x119) = bVar2;
  param_1[0x32] = (bVar2 + 7) * param_2 >> 3;
  *(char *)((int)param_1 + 0x117) = cVar3;
  param_1[0x2e] = param_2;
  param_1[0x2f] = param_3;
  param_1[0x31] = param_2;
  *(char *)(param_1 + 0x46) = cVar3;
  *(char *)((int)param_1 + 0x11b) = *(char *)((int)param_1 + 0x11a);
  FUN_00b2b269(local_14,param_2);
  FUN_00b2b269(local_10,param_3);
  local_b = (undefined1)param_5;
  local_a = (undefined1)param_6;
  local_9 = (undefined1)param_7;
  local_8 = (undefined1)param_8;
  local_c = cVar3;
  FUN_00b2b773(param_1,&DAT_00d8dea0,local_14,0xd);
  param_1[0x21] = (int)FUN_00b2065a;
  param_1[0x22] = (int)FUN_00b206b0;
  param_1[0x23] = (int)param_1;
  if (*(char *)((int)param_1 + 0x115) == '\0') {
    if ((*(char *)((int)param_1 + 0x116) == '\x03') || (*(byte *)((int)param_1 + 0x117) < 8)) {
      *(undefined1 *)((int)param_1 + 0x115) = 8;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x115) = 0xf8;
    }
  }
  uVar1 = param_1[0x17];
  if ((uVar1 & 1) == 0) {
    param_1[0x2d] = (uint)(*(char *)((int)param_1 + 0x115) != '\b');
  }
  if ((uVar1 & 2) == 0) {
    param_1[0x29] = -1;
  }
  if ((uVar1 & 4) == 0) {
    param_1[0x2c] = 8;
  }
  if ((uVar1 & 8) == 0) {
    param_1[0x2b] = 0xf;
  }
  if ((uVar1 & 0x10) == 0) {
    param_1[0x2a] = 8;
  }
  zlib_deflateInit2_((int)(param_1 + 0x19),param_1[0x29],param_1[0x2a],param_1[0x2b],param_1[0x2c],
                     param_1[0x2d],"1.1.4",0x38);
  param_1[0x1c] = param_1[0x27];
  param_1[0x1d] = param_1[0x28];
  param_1[0x16] = 1;
  return;
}


//// FUNCTION FUN_00b2ba42 @ 00b2ba42 ////

void FUN_00b2ba42(int *param_1,byte *param_2,uint param_3)

{
  FUN_00b2b773(param_1,&DAT_00d8dea8,param_2,param_3);
  param_1[0x16] = param_1[0x16] | 4;
  return;
}


//// FUNCTION FUN_00b2ba65 @ 00b2ba65 ////

void FUN_00b2ba65(int *param_1)

{
  FUN_00b2b773(param_1,&DAT_00d8deb0,(byte *)0x0,0);
  param_1[0x16] = param_1[0x16] | 0x10;
  return;
}


//// FUNCTION FUN_00b2ba86 @ 00b2ba86 ////

void FUN_00b2ba86(int *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  puVar1 = (uint *)(param_1 + 0x35);
  *puVar1 = *puVar1 + 1;
  if ((uint)param_1[0x30] <= *puVar1) {
    if (*(char *)((int)param_1 + 0x113) != '\0') {
      *puVar1 = 0;
      if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
        do {
          *(char *)(param_1 + 0x45) = (char)param_1[0x45] + '\x01';
          bVar6 = *(byte *)(param_1 + 0x45);
          if (6 < bVar6) goto LAB_00b2bb79;
          iVar3 = (uint)bVar6 * 4;
          param_1[0x31] =
               ((param_1[0x2e] - *(int *)(&DAT_00d8de28 + iVar3)) + -1 +
               *(uint *)(&DAT_00d8de44 + iVar3)) / *(uint *)(&DAT_00d8de44 + iVar3);
          uVar5 = ((param_1[0x2f] - *(int *)(&DAT_00d8de60 + iVar3)) + -1 +
                  *(uint *)(&DAT_00d8de7c + iVar3)) / *(uint *)(&DAT_00d8de7c + iVar3);
          param_1[0x30] = uVar5;
        } while ((param_1[0x31] == 0) || (uVar5 == 0));
      }
      else {
        pbVar2 = (byte *)(param_1 + 0x45);
        *pbVar2 = *pbVar2 + 1;
        bVar6 = *pbVar2;
      }
      if (bVar6 < 7) {
        if ((undefined4 *)param_1[0x36] == (undefined4 *)0x0) {
          return;
        }
        uVar4 = ((uint)*(byte *)((int)param_1 + 0x11b) * (uint)*(byte *)(param_1 + 0x46) *
                 param_1[0x2e] + 7 >> 3) + 1;
        puVar7 = (undefined4 *)param_1[0x36];
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        return;
      }
    }
LAB_00b2bb79:
    do {
      uVar5 = zlib_deflate(param_1 + 0x19,4);
      if ((uVar5 != 0) && (uVar5 != 1)) {
        pcVar8 = (char *)param_1[0x1f];
        if (pcVar8 == (char *)0x0) {
          pcVar8 = "zlib error";
        }
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(param_1,pcVar8);
      }
      if ((param_1[0x1d] == 0) && (uVar5 == 0)) {
        FUN_00b2ba42(param_1,(byte *)param_1[0x27],param_1[0x28]);
        param_1[0x1c] = param_1[0x27];
        param_1[0x1d] = param_1[0x28];
      }
    } while (uVar5 != 1);
    if ((uint)param_1[0x1d] < (uint)param_1[0x28]) {
      FUN_00b2ba42(param_1,(byte *)param_1[0x27],param_1[0x28] - param_1[0x1d]);
    }
    zlib_deflateReset((int)(param_1 + 0x19));
  }
  return;
}


//// FUNCTION FUN_00b2bc07 @ 00b2bc07 ////

void FUN_00b2bc07(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  param_1[0x19] = param_2;
  param_1[0x1a] = param_1[0x3d] + 1;
  do {
    uVar3 = zlib_deflate(param_1 + 0x19,0);
    if (uVar3 != 0) {
      pcVar4 = (char *)param_1[0x1f];
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "zlib error";
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,pcVar4);
    }
    if (param_1[0x1d] == 0) {
      FUN_00b2ba42(param_1,(byte *)param_1[0x27],param_1[0x28]);
      param_1[0x1c] = param_1[0x27];
      param_1[0x1d] = param_1[0x28];
    }
  } while (param_1[0x1a] != 0);
  iVar2 = param_1[0x36];
  if (iVar2 != 0) {
    param_1[0x36] = param_1[0x37];
    param_1[0x37] = iVar2;
  }
  FUN_00b2ba86(param_1);
  puVar1 = (uint *)(param_1 + 0x4a);
  *puVar1 = *puVar1 + 1;
  if ((param_1[0x49] != 0) && ((uint)param_1[0x49] <= *puVar1)) {
    FUN_00b20a44(param_1);
  }
  return;
}


//// FUNCTION FUN_00b2bcb5 @ 00b2bcb5 ////

void FUN_00b2bcb5(byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  char *pcVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  char *pcVar22;
  byte *pbVar23;
  int iVar24;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  byte *local_18;
  undefined1 *local_14;
  byte *local_c;
  
  pbVar5 = param_1;
  pbVar4 = *(byte **)(param_2 + 4);
  uVar16 = (uint)param_1[0x181];
  pbVar8 = (byte *)((param_2[0xb] + 7) / 8);
  bVar1 = param_1[0x115];
  puVar13 = *(undefined1 **)(param_1 + 0xdc);
  local_c = (byte *)0x7fffffff;
  iVar20 = *(int *)(param_1 + 0xd8);
  if (((bVar1 & 8) != 0) && (bVar1 != 8)) {
    local_c = (byte *)0x0;
    pbVar21 = (byte *)0x0;
    if (pbVar4 != (byte *)0x0) {
      do {
        uVar17 = (uint)(byte)(puVar13 + 1)[(int)pbVar21];
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        local_c = local_c + uVar17;
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 < pbVar4);
    }
    if (param_1[0x180] == 2) {
      local_28 = (byte *)((uint)local_c >> 10 & 0x3fffc0);
      iVar18 = 0;
      uVar17 = (uint)local_c & 0xffff;
      if (uVar16 != 0) {
        do {
          if (*(char *)(*(int *)(param_1 + 0x184) + iVar18) == '\0') {
            uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x188) + iVar18 * 2);
            uVar17 = uVar9 * uVar17 >> 8;
            local_28 = (byte *)(uVar9 * (int)local_28 >> 8);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)uVar16);
      }
      uVar9 = (uint)**(ushort **)(param_1 + 400) * (int)local_28 >> 3;
      if (uVar9 < 0x3fffc1) {
        local_c = (byte *)((**(ushort **)(param_1 + 400) * uVar17 >> 3) + uVar9 * 0x400);
      }
      else {
        local_c = (byte *)0x7fffffff;
      }
    }
  }
  if (bVar1 == 0x10) {
    pcVar22 = puVar13 + 1;
    pcVar10 = (char *)(*(int *)(param_1 + 0xe0) + 1);
    pbVar12 = (byte *)0x0;
    pcVar14 = pcVar22;
    for (pbVar21 = pbVar8; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
      pbVar12 = pbVar8;
    }
    if (pbVar12 < pbVar4) {
      iVar18 = (int)pbVar4 - (int)pbVar12;
      do {
        cVar2 = *pcVar14;
        cVar3 = *pcVar22;
        pcVar14 = pcVar14 + 1;
        pcVar22 = pcVar22 + 1;
        *pcVar10 = cVar2 - cVar3;
        pcVar10 = pcVar10 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    local_14 = *(undefined1 **)(param_1 + 0xe0);
LAB_00b2be15:
    if ((bVar1 & 0x20) != 0) {
      pbVar21 = (byte *)0x0;
      local_2c = local_c;
      if (param_1[0x180] == 2) {
        uVar9 = (uint)local_c & 0xffff;
        uVar17 = (uint)local_c >> 10 & 0x3fffc0;
        param_2 = (byte *)0x0;
        if (uVar16 != 0) {
          do {
            if (param_2[*(int *)(param_1 + 0x184)] == 2) {
              uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + (int)param_2 * 2);
              uVar9 = uVar11 * uVar9 >> 8;
              uVar17 = uVar11 * uVar17 >> 8;
            }
            param_2 = param_2 + 1;
          } while ((int)param_2 < (int)uVar16);
        }
        uVar17 = *(ushort *)(*(int *)(param_1 + 0x194) + 4) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          local_2c = (byte *)((*(ushort *)(*(int *)(param_1 + 0x194) + 4) * uVar9 >> 3) +
                             uVar17 * 0x400);
        }
        else {
          local_2c = (byte *)0x7fffffff;
        }
      }
      local_28 = (byte *)0x0;
      pbVar12 = *(byte **)(param_1 + 0xe4);
      pcVar14 = puVar13 + 1;
      if (pbVar4 != (byte *)0x0) {
        iVar18 = (iVar20 + 1) - (int)pcVar14;
        do {
          pbVar12 = pbVar12 + 1;
          cVar2 = *pcVar14;
          cVar3 = pcVar14[iVar18];
          *pbVar12 = cVar2 - cVar3;
          uVar17 = (uint)(byte)(cVar2 - cVar3);
          pcVar14 = pcVar14 + 1;
          if (0x7f < uVar17) {
            uVar17 = 0x100 - uVar17;
          }
          pbVar21 = pbVar21 + uVar17;
        } while ((pbVar21 <= local_2c) && (local_28 = local_28 + 1, local_28 < pbVar4));
      }
      if (param_1[0x180] == 2) {
        param_2 = (byte *)((uint)pbVar21 >> 10 & 0x3fffc0);
        iVar18 = 0;
        uVar17 = (uint)pbVar21 & 0xffff;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar18 + *(int *)(param_1 + 0x184)) == '\x02') {
              uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x188) + iVar18 * 2);
              uVar17 = uVar9 * uVar17 >> 8;
              param_2 = (byte *)(uVar9 * (int)param_2 >> 8);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar16);
        }
        uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 400) + 4) * (int)param_2 >> 3;
        if (uVar9 < 0x3fffc1) {
          pbVar21 = (byte *)((*(ushort *)(*(int *)(param_1 + 400) + 4) * uVar17 >> 3) +
                            uVar9 * 0x400);
        }
        else {
          pbVar21 = (byte *)0x7fffffff;
        }
      }
      if (pbVar21 < local_c) {
        local_14 = *(undefined1 **)(param_1 + 0xe4);
        local_c = pbVar21;
      }
    }
    if (bVar1 != 0x40) goto LAB_00b2c0a4;
    local_2c = (byte *)0x0;
    local_28 = puVar13 + 1;
    pcVar14 = (char *)(*(int *)(param_1 + 0xe8) + 1);
    pbVar12 = (byte *)(iVar20 + 1);
    param_2 = local_28;
    for (pbVar21 = pbVar8; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
      *pcVar14 = *param_2 - (*pbVar12 >> 1);
      pcVar14 = pcVar14 + 1;
      pbVar12 = pbVar12 + 1;
      param_2 = param_2 + 1;
      local_2c = pbVar8;
    }
    if (local_2c < pbVar4) {
      iVar18 = (int)pbVar4 - (int)local_2c;
      do {
        *pcVar14 = *param_2 - (char)(((uint)*pbVar12 + (uint)*local_28) / 2);
        pcVar14 = pcVar14 + 1;
        local_28 = local_28 + 1;
        pbVar12 = pbVar12 + 1;
        param_2 = param_2 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    local_14 = *(undefined1 **)(param_1 + 0xe8);
LAB_00b2c2a7:
    if ((bVar1 & 0x80) == 0) goto LAB_00b2c6f8;
    iVar18 = 0;
    local_28 = (byte *)0x0;
    local_30 = local_c;
    if (param_1[0x180] == 2) {
      uVar9 = (uint)local_c & 0xffff;
      uVar17 = (uint)local_c >> 10 & 0x3fffc0;
      if (uVar16 != 0) {
        do {
          if (*(char *)(iVar18 + *(int *)(param_1 + 0x184)) == '\x04') {
            uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + iVar18 * 2);
            uVar9 = uVar11 * uVar9 >> 8;
            uVar17 = uVar11 * uVar17 >> 8;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)uVar16);
      }
      uVar17 = *(ushort *)(*(int *)(param_1 + 0x194) + 8) * uVar17 >> 3;
      if (uVar17 < 0x3fffc1) {
        local_30 = (byte *)((*(ushort *)(*(int *)(param_1 + 0x194) + 8) * uVar9 >> 3) +
                           uVar17 * 0x400);
      }
      else {
        local_30 = (byte *)0x7fffffff;
      }
    }
    local_24 = (byte *)0x0;
    local_2c = puVar13 + 1;
    pbVar15 = (byte *)(*(int *)(param_1 + 0xec) + 1);
    local_18 = local_2c;
    param_1 = (byte *)(iVar20 + 1);
    pbVar21 = local_28;
    for (pbVar12 = pbVar8; pbVar12 != (byte *)0x0; pbVar12 = pbVar12 + -1) {
      bVar1 = *local_18;
      bVar6 = *param_1;
      *pbVar15 = bVar1 - bVar6;
      pbVar15 = pbVar15 + 1;
      param_1 = param_1 + 1;
      local_18 = local_18 + 1;
      uVar17 = (uint)(byte)(bVar1 - bVar6);
      if (0x7f < uVar17) {
        uVar17 = 0x100 - uVar17;
      }
      pbVar21 = pbVar21 + uVar17;
      local_24 = pbVar8;
    }
    if (local_24 < pbVar4) {
      iVar20 = (iVar20 + 1) - (int)local_2c;
      do {
        bVar1 = local_2c[iVar20];
        bVar6 = *param_1;
        bVar7 = *local_2c;
        param_1 = param_1 + 1;
        local_2c = local_2c + 1;
        iVar18 = (uint)bVar6 - (uint)bVar1;
        iVar19 = (uint)bVar7 - (uint)bVar1;
        local_28 = (byte *)iVar18;
        if (iVar18 < 0) {
          local_28 = (byte *)-iVar18;
        }
        iVar24 = iVar19;
        if (iVar19 < 0) {
          iVar24 = -iVar19;
        }
        iVar18 = iVar18 + iVar19;
        if (iVar18 < 0) {
          iVar18 = -iVar18;
        }
        if (((iVar24 < (int)local_28) || (iVar18 < (int)local_28)) &&
           (bVar7 = bVar6, iVar18 < iVar24)) {
          bVar7 = bVar1;
        }
        bVar1 = *local_18;
        *pbVar15 = bVar1 - bVar7;
        uVar17 = (uint)(byte)(bVar1 - bVar7);
        pbVar15 = pbVar15 + 1;
        local_18 = local_18 + 1;
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        pbVar21 = pbVar21 + uVar17;
      } while ((pbVar21 <= local_30) && (local_24 = local_24 + 1, local_24 < pbVar4));
    }
    if (pbVar5[0x180] == 2) {
      param_2 = (byte *)((uint)pbVar21 >> 10 & 0x3fffc0);
      iVar20 = 0;
      uVar17 = (uint)pbVar21 & 0xffff;
      if (uVar16 != 0) {
        do {
          if (*(char *)(iVar20 + *(int *)(pbVar5 + 0x184)) == '\x04') {
            uVar9 = (uint)*(ushort *)(*(int *)(pbVar5 + 0x188) + iVar20 * 2);
            uVar17 = uVar9 * uVar17 >> 8;
            param_2 = (byte *)(uVar9 * (int)param_2 >> 8);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar16);
      }
      uVar9 = (uint)*(ushort *)(*(int *)(pbVar5 + 400) + 8) * (int)param_2 >> 3;
      if (uVar9 < 0x3fffc1) {
        pbVar21 = (byte *)((*(ushort *)(*(int *)(pbVar5 + 400) + 8) * uVar17 >> 3) + uVar9 * 0x400);
      }
      else {
        pbVar21 = (byte *)0x7fffffff;
      }
    }
    if (local_c <= pbVar21) goto LAB_00b2c6f8;
  }
  else {
    local_14 = puVar13;
    if ((bVar1 & 0x10) != 0) {
      local_28 = local_c;
      if (param_1[0x180] == 2) {
        iVar18 = 0;
        uVar9 = (uint)local_c & 0xffff;
        uVar17 = (uint)local_c >> 10 & 0x3fffc0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(*(int *)(param_1 + 0x184) + iVar18) == '\x01') {
              uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + iVar18 * 2);
              uVar9 = uVar11 * uVar9 >> 8;
              uVar17 = uVar11 * uVar17 >> 8;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar16);
        }
        uVar17 = *(ushort *)(*(int *)(param_1 + 0x194) + 2) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          local_28 = (byte *)((*(ushort *)(*(int *)(param_1 + 0x194) + 2) * uVar9 >> 3) +
                             uVar17 * 0x400);
        }
        else {
          local_28 = (byte *)0x7fffffff;
        }
      }
      pbVar23 = (byte *)0x0;
      local_24 = (byte *)0x0;
      local_2c = puVar13 + 1;
      pbVar15 = (byte *)(*(int *)(param_1 + 0xe0) + 1);
      pbVar12 = local_2c;
      for (pbVar21 = pbVar8; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
        uVar17 = (uint)*pbVar12;
        *pbVar15 = *pbVar12;
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        pbVar23 = pbVar23 + uVar17;
        pbVar12 = pbVar12 + 1;
        pbVar15 = pbVar15 + 1;
        local_24 = pbVar8;
      }
      for (; local_24 < *(byte **)(param_2 + 4); local_24 = local_24 + 1) {
        bVar6 = *pbVar12;
        bVar7 = *local_2c;
        *pbVar15 = bVar6 - bVar7;
        uVar17 = (uint)(byte)(bVar6 - bVar7);
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        pbVar23 = pbVar23 + uVar17;
        if (local_28 < pbVar23) break;
        pbVar12 = pbVar12 + 1;
        local_2c = local_2c + 1;
        pbVar15 = pbVar15 + 1;
      }
      if (param_1[0x180] == 2) {
        param_2 = (byte *)((uint)pbVar23 >> 10 & 0x3fffc0);
        iVar18 = 0;
        uVar17 = (uint)pbVar23 & 0xffff;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar18 + *(int *)(param_1 + 0x184)) == '\x01') {
              uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + iVar18 * 2);
              uVar17 = uVar9 * uVar17 >> 8;
              param_2 = (byte *)(uVar9 * (int)param_2 >> 8);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar16);
        }
        uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x194) + 2) * (int)param_2 >> 3;
        if (uVar9 < 0x3fffc1) {
          pbVar23 = (byte *)((*(ushort *)(*(int *)(param_1 + 0x194) + 2) * uVar17 >> 3) +
                            uVar9 * 0x400);
        }
        else {
          pbVar23 = (byte *)0x7fffffff;
        }
      }
      if (pbVar23 < local_c) {
        local_14 = *(undefined1 **)(param_1 + 0xe0);
        local_c = pbVar23;
      }
    }
    if (bVar1 != 0x20) goto LAB_00b2be15;
    param_2 = (byte *)0x0;
    pcVar14 = *(char **)(param_1 + 0xe4);
    if (pbVar4 != (byte *)0x0) {
      pcVar10 = puVar13 + 1 + (iVar20 - (int)puVar13);
      do {
        pcVar14 = pcVar14 + 1;
        pbVar21 = param_2 + (int)(puVar13 + 1);
        param_2 = param_2 + 1;
        *pcVar14 = *pbVar21 - *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (param_2 < pbVar4);
    }
    local_14 = *(undefined1 **)(param_1 + 0xe4);
LAB_00b2c0a4:
    if ((bVar1 & 0x40) != 0) {
      param_2 = (byte *)0x0;
      local_28 = local_c;
      if (param_1[0x180] == 2) {
        iVar18 = 0;
        uVar9 = (uint)local_c & 0xffff;
        uVar17 = (uint)local_c >> 10 & 0x3fffc0;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar18 + *(int *)(param_1 + 0x184)) == '\x03') {
              uVar11 = (uint)*(ushort *)(*(int *)(param_1 + 0x18c) + iVar18 * 2);
              uVar9 = uVar11 * uVar9 >> 8;
              uVar17 = uVar11 * uVar17 >> 8;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar16);
        }
        uVar17 = *(ushort *)(*(int *)(param_1 + 0x194) + 6) * uVar17 >> 3;
        if (uVar17 < 0x3fffc1) {
          local_28 = (byte *)((*(ushort *)(*(int *)(param_1 + 0x194) + 6) * uVar9 >> 3) +
                             uVar17 * 0x400);
        }
        else {
          local_28 = (byte *)0x7fffffff;
        }
      }
      local_24 = (byte *)0x0;
      local_2c = puVar13 + 1;
      pbVar15 = (byte *)(*(int *)(param_1 + 0xe8) + 1);
      pbVar23 = (byte *)(iVar20 + 1);
      pbVar12 = local_2c;
      for (pbVar21 = pbVar8; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
        bVar6 = *pbVar12 - (*pbVar23 >> 1);
        *pbVar15 = bVar6;
        pbVar15 = pbVar15 + 1;
        uVar17 = (uint)bVar6;
        pbVar23 = pbVar23 + 1;
        pbVar12 = pbVar12 + 1;
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        param_2 = param_2 + uVar17;
        local_24 = pbVar8;
      }
      for (; local_24 < pbVar4; local_24 = local_24 + 1) {
        bVar6 = *pbVar12 - (char)(((uint)*local_2c + (uint)*pbVar23) / 2);
        *pbVar15 = bVar6;
        pbVar15 = pbVar15 + 1;
        local_2c = local_2c + 1;
        uVar17 = (uint)bVar6;
        pbVar23 = pbVar23 + 1;
        pbVar12 = pbVar12 + 1;
        if (0x7f < uVar17) {
          uVar17 = 0x100 - uVar17;
        }
        param_2 = param_2 + uVar17;
        if (local_28 < param_2) break;
      }
      if (param_1[0x180] == 2) {
        pbVar21 = (byte *)((uint)param_2 >> 10 & 0x3fffc0);
        iVar18 = 0;
        uVar17 = (uint)param_2 & 0xffff;
        param_2 = pbVar21;
        if (uVar16 != 0) {
          do {
            if (*(char *)(iVar18 + *(int *)(param_1 + 0x184)) == '\0') {
              uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 0x188) + iVar18 * 2);
              uVar17 = uVar9 * uVar17 >> 8;
              param_2 = (byte *)(uVar9 * (int)param_2 >> 8);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar16);
        }
        uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 400) + 6) * (int)param_2 >> 3;
        if (uVar9 < 0x3fffc1) {
          param_2 = (byte *)((*(ushort *)(*(int *)(param_1 + 400) + 6) * uVar17 >> 3) +
                            uVar9 * 0x400);
        }
        else {
          param_2 = (byte *)0x7fffffff;
        }
      }
      if (param_2 < local_c) {
        local_c = param_2;
        local_14 = *(undefined1 **)(param_1 + 0xe8);
      }
    }
    if (bVar1 != 0x80) goto LAB_00b2c2a7;
    local_2c = (byte *)0x0;
    pbVar12 = puVar13 + 1;
    pcVar14 = (char *)(*(int *)(param_1 + 0xec) + 1);
    local_18 = pbVar12;
    param_1 = (byte *)(iVar20 + 1);
    for (pbVar21 = pbVar8; pbVar21 != (byte *)0x0; pbVar21 = pbVar21 + -1) {
      *pcVar14 = *local_18 - *param_1;
      pcVar14 = pcVar14 + 1;
      param_1 = param_1 + 1;
      local_18 = local_18 + 1;
      local_2c = pbVar8;
    }
    if (local_2c < pbVar4) {
      iVar20 = (iVar20 + 1) - (int)pbVar12;
      local_30 = (byte *)((int)pbVar4 - (int)local_2c);
      do {
        bVar1 = pbVar12[iVar20];
        bVar6 = *param_1;
        bVar7 = *pbVar12;
        param_1 = param_1 + 1;
        iVar18 = (uint)bVar6 - (uint)bVar1;
        pbVar12 = pbVar12 + 1;
        iVar19 = (uint)bVar7 - (uint)bVar1;
        local_2c = (byte *)iVar18;
        if (iVar18 < 0) {
          local_2c = (byte *)-iVar18;
        }
        iVar24 = iVar19;
        if (iVar19 < 0) {
          iVar24 = -iVar19;
        }
        iVar18 = iVar18 + iVar19;
        if (iVar18 < 0) {
          iVar18 = -iVar18;
        }
        if (((iVar24 < (int)local_2c) || (iVar18 < (int)local_2c)) &&
           (bVar7 = bVar6, iVar18 < iVar24)) {
          bVar7 = bVar1;
        }
        *pcVar14 = *local_18 - bVar7;
        pcVar14 = pcVar14 + 1;
        local_18 = local_18 + 1;
        local_30 = (byte *)((int)local_30 + -1);
      } while (local_30 != (byte *)0x0);
    }
  }
  local_14 = *(undefined1 **)(pbVar5 + 0xec);
LAB_00b2c6f8:
  FUN_00b2bc07((int *)pbVar5,(int)local_14);
  if (pbVar5[0x181] != 0) {
    iVar20 = 1;
    if (1 < uVar16) {
      do {
        puVar13 = (undefined1 *)(*(int *)(pbVar5 + 0x184) + iVar20);
        iVar20 = iVar20 + 1;
        *puVar13 = puVar13[-1];
      } while (iVar20 < (int)uVar16);
    }
    *(undefined1 *)(iVar20 + *(int *)(pbVar5 + 0x184)) = *local_14;
  }
  return;
}


//// FUNCTION FUN_00b2c738 @ 00b2c738 ////

void FUN_00b2c738(void)

{
  return;
}


//// FUNCTION FUN_00b2c73b @ 00b2c73b ////

undefined4 FUN_00b2c73b(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
      (param_2 == (byte *)0x0)) || (*(int *)(iVar1 + 4) != 0x2a)) {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar2 = zlib_adler32(*(uint *)(param_1 + 0x30),param_2,param_3);
    *(uint *)(param_1 + 0x30) = uVar2;
    if (2 < param_3) {
      uVar2 = *(int *)(iVar1 + 0x24) - 0x106;
      if (uVar2 < param_3) {
        param_2 = param_2 + (param_3 - uVar2);
        param_3 = uVar2;
      }
      pbVar5 = *(byte **)(iVar1 + 0x30);
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pbVar5 = *(undefined4 *)param_2;
        param_2 = param_2 + 4;
        pbVar5 = pbVar5 + 4;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pbVar5 = *param_2;
        param_2 = param_2 + 1;
        pbVar5 = pbVar5 + 1;
      }
      *(uint *)(iVar1 + 100) = param_3;
      *(uint *)(iVar1 + 0x54) = param_3;
      uVar2 = (uint)**(byte **)(iVar1 + 0x30);
      *(uint *)(iVar1 + 0x40) = uVar2;
      uVar4 = 0;
      *(uint *)(iVar1 + 0x40) =
           (uVar2 << ((byte)*(undefined4 *)(iVar1 + 0x50) & 0x1f) ^
           (uint)(*(byte **)(iVar1 + 0x30))[1]) & *(uint *)(iVar1 + 0x4c);
      do {
        uVar2 = ((uint)*(byte *)(*(int *)(iVar1 + 0x30) + 2 + uVar4) ^
                *(int *)(iVar1 + 0x40) << ((byte)*(undefined4 *)(iVar1 + 0x50) & 0x1f)) &
                *(uint *)(iVar1 + 0x4c);
        *(uint *)(iVar1 + 0x40) = uVar2;
        *(undefined2 *)(*(int *)(iVar1 + 0x38) + (*(uint *)(iVar1 + 0x2c) & uVar4) * 2) =
             *(undefined2 *)(*(int *)(iVar1 + 0x3c) + uVar2 * 2);
        *(short *)(*(int *)(iVar1 + 0x3c) + *(int *)(iVar1 + 0x40) * 2) = (short)uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= param_3 - 3);
    }
    uVar3 = 0;
  }
  return uVar3;
}


//// FUNCTION zlib_putShortMSB @ 00b2c827 ////

void __fastcall zlib_putShortMSB(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  
  *(char *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = (char)((uint)param_2 >> 8);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(char *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) = (char)param_2;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  return;
}


//// FUNCTION zlib_flush_pending @ 00b2c849 ////

void zlib_flush_pending(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = *(uint *)(*(int *)(in_EAX + 0x1c) + 0x14);
  if (*(uint *)(in_EAX + 0x10) < uVar4) {
    uVar4 = *(uint *)(in_EAX + 0x10);
  }
  if (uVar4 != 0) {
    puVar5 = *(undefined4 **)(*(int *)(in_EAX + 0x1c) + 0x10);
    puVar6 = *(undefined4 **)(in_EAX + 0xc);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x10);
    *piVar1 = *piVar1 + uVar4;
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + uVar4;
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) - uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x14);
    *piVar1 = *piVar1 - uVar4;
    iVar2 = *(int *)(in_EAX + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}


//// FUNCTION zlib_deflate @ 00b2c89d ////

uint zlib_deflate(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  uint uVar5;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *puVar6;
  
  if ((((param_1 == (int *)0x0) || (puVar1 = (undefined4 *)param_1[7], puVar1 == (undefined4 *)0x0))
      || (4 < param_2)) || (param_2 < 0)) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((puVar1[1] == 0x29a && (param_2 != 4)))) {
    param_1[6] = (int)PTR_s_stream_error_00e9e37c;
    return 0xfffffffe;
  }
  if (param_1[4] == 0) goto LAB_00b2c9bc;
  iVar3 = puVar1[8];
  *puVar1 = param_1;
  puVar1[8] = param_2;
  if (puVar1[1] == 0x2a) {
    uVar2 = puVar1[0x1f] + -1 >> 1;
    if (3 < uVar2) {
      uVar2 = 3;
    }
    uVar2 = (puVar1[10] + -8) * 0x1000 + 0x800U | uVar2 << 6;
    if (puVar1[0x19] != 0) {
      uVar2 = uVar2 | 0x20;
    }
    puVar1[1] = 0x71;
    zlib_putShortMSB(uVar2,(uVar2 - uVar2 % 0x1f) + 0x1f);
    if (puVar1[0x19] != 0) {
      zlib_putShortMSB(extraout_ECX,(uint)*(ushort *)((int)param_1 + 0x32));
      zlib_putShortMSB(extraout_ECX_00,param_1[0xc] & 0xffff);
    }
    param_1[0xc] = 1;
  }
  if (puVar1[5] == 0) {
    if (((param_1[1] == 0) && (param_2 <= iVar3)) && (param_2 != 4)) goto LAB_00b2c9bc;
LAB_00b2c9ab:
    uVar4 = 0x29a;
    if (puVar1[1] == 0x29a) {
      if (param_1[1] != 0) {
LAB_00b2c9bc:
        param_1[6] = (int)PTR_s_buffer_error_00e9e388;
        return 0xfffffffb;
      }
LAB_00b2c9d0:
      if ((puVar1[0x1b] != 0) || ((param_2 != 0 && (puVar1[1] != 0x29a)))) goto LAB_00b2c9e5;
    }
    else {
      if (param_1[1] == 0) goto LAB_00b2c9d0;
LAB_00b2c9e5:
      iVar3 = (**(code **)(&DAT_00d8e070 + puVar1[0x1f] * 0xc))(puVar1,param_2);
      if ((iVar3 == 2) || (iVar3 == 3)) {
        puVar1[1] = 0x29a;
      }
      if ((iVar3 == 0) || (iVar3 == 2)) {
        if (param_1[4] != 0) {
          return 0;
        }
        goto LAB_00b2c992;
      }
      uVar4 = extraout_ECX_01;
      if (iVar3 == 1) {
        if (param_2 == 1) {
          FUN_00b67c0f((int)puVar1);
        }
        else {
          FUN_00b67b83((int)puVar1,(undefined1 *)0x0,0,0);
          if (param_2 == 3) {
            *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
            uVar2 = puVar1[0x11] * 2 - 2;
            puVar6 = (undefined4 *)puVar1[0xf];
            for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
        }
        zlib_flush_pending();
        uVar4 = extraout_ECX_02;
        if (param_1[4] == 0) goto LAB_00b2c992;
      }
    }
    if (param_2 == 4) {
      if (puVar1[6] == 0) {
        zlib_putShortMSB(uVar4,(uint)*(ushort *)((int)param_1 + 0x32));
        zlib_putShortMSB(extraout_ECX_03,param_1[0xc] & 0xffff);
        zlib_flush_pending();
        puVar1[6] = 0xffffffff;
        return (uint)(puVar1[5] == 0);
      }
      return 1;
    }
  }
  else {
    zlib_flush_pending();
    if (param_1[4] != 0) goto LAB_00b2c9ab;
LAB_00b2c992:
    puVar1[8] = 0xffffffff;
  }
  return 0;
}


//// FUNCTION zlib_deflateEnd @ 00b2cac8 ////

undefined4 zlib_deflateEnd(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
     ((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0x2a && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    uVar3 = 0xfffffffe;
  }
  else {
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar1 + 8));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) != 0) {
      (**(code **)(param_1 + 0x24))
                (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x38) != 0) {
      (**(code **)(param_1 + 0x24))
                (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x38));
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x30) != 0) {
      (**(code **)(param_1 + 0x24))
                (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (iVar2 == 0x71) {
      uVar3 = 0xfffffffd;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


//// FUNCTION zlib_deflateCopy @ 00b2cb54 ////

undefined4 zlib_deflateCopy(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
     (puVar1 = (undefined4 *)param_2[7], puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    puVar2 = param_1;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x16b8);
    if (puVar2 != (undefined4 *)0x0) {
      param_1[7] = puVar2;
      puVar8 = puVar1;
      puVar9 = puVar2;
      for (iVar4 = 0x5ae; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *puVar2 = param_1;
      uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[9],2);
      puVar2[0xc] = uVar3;
      uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[9],2);
      puVar2[0xe] = uVar3;
      uVar3 = (*(code *)param_1[8])(param_1[10],puVar2[0x11],2);
      puVar2[0xf] = uVar3;
      iVar4 = (*(code *)param_1[8])(param_1[10],puVar2[0x5a5],4);
      puVar2[2] = iVar4;
      if ((((undefined4 *)puVar2[0xc] != (undefined4 *)0x0) && (puVar2[0xe] != 0)) &&
         ((puVar2[0xf] != 0 && (iVar4 != 0)))) {
        uVar7 = puVar2[9];
        puVar8 = (undefined4 *)puVar1[0xc];
        puVar9 = (undefined4 *)puVar2[0xc];
        for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar7 = puVar2[9];
        puVar8 = (undefined4 *)puVar1[0xe];
        puVar9 = (undefined4 *)puVar2[0xe];
        for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar7 = puVar2[0x11];
        puVar8 = (undefined4 *)puVar1[0xf];
        puVar9 = (undefined4 *)puVar2[0xf];
        for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar7 = puVar2[3];
        puVar8 = (undefined4 *)puVar1[2];
        puVar9 = (undefined4 *)puVar2[2];
        for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        puVar2[4] = (puVar1[4] - puVar1[2]) + puVar2[2];
        uVar7 = puVar2[0x5a5];
        puVar2[0x2c4] = puVar2 + 0x23;
        puVar2[0x2c7] = puVar2 + 0x260;
        puVar2[0x2ca] = puVar2 + 0x29d;
        puVar2[0x5a7] = iVar4 + (uVar7 & 0xfffffffe);
        puVar2[0x5a4] = puVar2[2] + uVar7 * 2 + uVar7;
        return 0;
      }
      zlib_deflateEnd((int)param_1);
    }
    uVar3 = 0xfffffffc;
  }
  return uVar3;
}


//// FUNCTION zlib_read_buf @ 00b2cce5 ////

uint __thiscall zlib_read_buf(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int *unaff_EBX;
  undefined4 *puVar3;
  void *local_8;
  
  pvVar1 = (void *)unaff_EBX[1];
  local_8 = pvVar1;
  if (this < pvVar1) {
    local_8 = this;
  }
  if (local_8 == (void *)0x0) {
    local_8 = (void *)0x0;
  }
  else {
    unaff_EBX[1] = (int)pvVar1 - (int)local_8;
    if (*(int *)(unaff_EBX[7] + 0x18) == 0) {
      uVar2 = zlib_adler32(unaff_EBX[0xc],(byte *)*unaff_EBX,(uint)local_8);
      unaff_EBX[0xc] = uVar2;
    }
    puVar3 = (undefined4 *)*unaff_EBX;
    for (uVar2 = (uint)local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar2 = (uint)local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    *unaff_EBX = *unaff_EBX + (int)local_8;
    unaff_EBX[2] = unaff_EBX[2] + (int)local_8;
  }
  return (uint)local_8;
}


//// FUNCTION zlib_lm_init @ 00b2cd42 ////

void __fastcall zlib_lm_init(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x24) << 1;
  *(undefined2 *)(*(int *)(param_2 + 0x3c) + -2 + *(int *)(param_2 + 0x44) * 2) = 0;
  uVar3 = *(int *)(param_2 + 0x44) * 2 - 2;
  puVar4 = *(undefined4 **)(param_2 + 0x3c);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar1 = *(int *)(param_2 + 0x7c) * 0xc;
  *(uint *)(param_2 + 0x78) = (uint)*(ushort *)(&DAT_00d8e06a + iVar1);
  *(uint *)(param_2 + 0x84) = (uint)*(ushort *)(&DAT_00d8e068 + iVar1);
  *(uint *)(param_2 + 0x88) = (uint)*(ushort *)(&DAT_00d8e06c + iVar1);
  *(uint *)(param_2 + 0x74) = (uint)*(ushort *)(&DAT_00d8e06e + iVar1);
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x70) = 2;
  *(undefined4 *)(param_2 + 0x58) = 2;
  return;
}


//// FUNCTION zlib_longest_match @ 00b2cdc7 ////

char * __thiscall zlib_longest_match(void *this,uint param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar6;
  char *pcVar7;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_6;
  char local_5;
  char *pcVar5;
  
  local_c = *(uint *)((int)this + 0x74);
  uVar1 = *(uint *)((int)this + 100);
  pcVar3 = (char *)(*(int *)((int)this + 0x30) + uVar1);
  pcVar7 = *(char **)((int)this + 0x70);
  if (*(int *)((int)this + 0x24) - 0x106U < uVar1) {
    local_14 = (uVar1 - *(int *)((int)this + 0x24)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = (pcVar7 + -1)[(int)pcVar3];
  local_6 = pcVar7[(int)pcVar3];
  if (*(char **)((int)this + 0x84) <= pcVar7) {
    local_c = local_c >> 2;
  }
  pcVar2 = *(char **)((int)this + 0x6c);
  local_10 = *(char **)((int)this + 0x88);
  if (pcVar2 < *(char **)((int)this + 0x88)) {
    local_10 = pcVar2;
  }
  do {
    pcVar6 = (char *)(*(int *)((int)this + 0x30) + param_1);
    if ((((pcVar6[(int)pcVar7] == local_6) && ((pcVar6 + -1)[(int)pcVar7] == local_5)) &&
        (*pcVar6 == *pcVar3)) && (pcVar6[1] == pcVar3[1])) {
      pcVar6 = pcVar6 + 2;
      pcVar5 = pcVar3 + 2;
      while (((((pcVar4 = pcVar5 + 1, *pcVar4 == pcVar6[1] &&
                (pcVar4 = pcVar5 + 2, *pcVar4 == pcVar6[2])) &&
               ((pcVar4 = pcVar5 + 3, *pcVar4 == pcVar6[3] &&
                ((pcVar4 = pcVar5 + 4, *pcVar4 == pcVar6[4] &&
                 (pcVar4 = pcVar5 + 5, *pcVar4 == pcVar6[5])))))) &&
              (pcVar4 = pcVar5 + 6, *pcVar4 == pcVar6[6])) &&
             (pcVar4 = pcVar5 + 7, *pcVar4 == pcVar6[7]))) {
        pcVar4 = pcVar5 + 8;
        pcVar6 = pcVar6 + 8;
        if ((*pcVar4 != *pcVar6) || (pcVar5 = pcVar4, pcVar3 + 0x102 <= pcVar4)) break;
      }
      pcVar4 = pcVar4 + (0x102 - (int)(pcVar3 + 0x102));
      if ((int)pcVar7 < (int)pcVar4) {
        *(uint *)((int)this + 0x68) = param_1;
        if ((int)local_10 <= (int)pcVar4) {
LAB_00b2cf01:
          if (pcVar4 <= pcVar2) {
            pcVar2 = pcVar4;
          }
          return pcVar2;
        }
        local_5 = (pcVar4 + (int)pcVar3)[-1];
        local_6 = pcVar4[(int)pcVar3];
        pcVar7 = pcVar4;
      }
    }
    pcVar4 = pcVar7;
    param_1 = (uint)*(ushort *)
                     (*(int *)((int)this + 0x38) + (*(uint *)((int)this + 0x2c) & param_1) * 2);
    if ((param_1 <= local_14) || (local_c = local_c - 1, pcVar7 = pcVar4, local_c == 0))
    goto LAB_00b2cf01;
  } while( true );
}


//// FUNCTION zlib_fill_window @ 00b2cf11 ////

void zlib_fill_window(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *unaff_EBX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_8;
  
  uVar1 = unaff_EBX[9];
  do {
    uVar8 = unaff_EBX[0x19];
    uVar5 = (unaff_EBX[0xd] - uVar8) - unaff_EBX[0x1b];
    if (uVar5 == 0) {
      if ((uVar8 != 0) || (uVar7 = uVar1, unaff_EBX[0x1b] != 0)) {
LAB_00b2cf47:
        uVar7 = uVar5;
        if ((uVar1 - 0x106) + unaff_EBX[9] <= uVar8) {
          puVar10 = (undefined4 *)(unaff_EBX[0xc] + uVar1);
          puVar11 = (undefined4 *)unaff_EBX[0xc];
          for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          iVar9 = unaff_EBX[0x11];
          unaff_EBX[0x1a] = unaff_EBX[0x1a] - uVar1;
          unaff_EBX[0x19] = unaff_EBX[0x19] - uVar1;
          unaff_EBX[0x15] = unaff_EBX[0x15] - uVar1;
          puVar6 = (ushort *)(unaff_EBX[0xf] + iVar9 * 2);
          do {
            puVar6 = puVar6 + -1;
            iVar9 = iVar9 + -1;
            *puVar6 = ~-(ushort)(*puVar6 < uVar1) & *puVar6 - (short)uVar1;
          } while (iVar9 != 0);
          puVar6 = (ushort *)(unaff_EBX[0xe] + uVar1 * 2);
          uVar8 = uVar1;
          do {
            puVar6 = puVar6 + -1;
            uVar8 = uVar8 - 1;
            *puVar6 = ~-(ushort)(*puVar6 < uVar1) & *puVar6 - (short)uVar1;
          } while (uVar8 != 0);
          uVar7 = uVar5 + uVar1;
        }
      }
    }
    else {
      if (uVar5 != 0xffffffff) goto LAB_00b2cf47;
      uVar7 = 0xfffffffe;
    }
    piVar2 = (int *)*unaff_EBX;
    if (piVar2[1] == 0) {
      return;
    }
    iVar9 = unaff_EBX[0x1b];
    iVar3 = unaff_EBX[0x19];
    uVar8 = piVar2[1];
    iVar4 = unaff_EBX[0xc];
    local_8 = uVar8;
    if (uVar7 < uVar8) {
      local_8 = uVar7;
    }
    if (local_8 == 0) {
      local_8 = 0;
    }
    else {
      piVar2[1] = uVar8 - local_8;
      if (*(int *)(piVar2[7] + 0x18) == 0) {
        uVar8 = zlib_adler32(piVar2[0xc],(byte *)*piVar2,local_8);
        piVar2[0xc] = uVar8;
      }
      puVar10 = (undefined4 *)*piVar2;
      puVar11 = (undefined4 *)(iVar9 + iVar3 + iVar4);
      for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *piVar2 = *piVar2 + local_8;
      piVar2[2] = piVar2[2] + local_8;
    }
    unaff_EBX[0x1b] = unaff_EBX[0x1b] + local_8;
    if (2 < (uint)unaff_EBX[0x1b]) {
      uVar8 = (uint)*(byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]);
      unaff_EBX[0x10] = uVar8;
      unaff_EBX[0x10] =
           (uVar8 << ((byte)unaff_EBX[0x14] & 0x1f) ^
           (uint)((byte *)(unaff_EBX[0x19] + unaff_EBX[0xc]))[1]) & unaff_EBX[0x13];
    }
    if (0x105 < (uint)unaff_EBX[0x1b]) {
      return;
    }
    if (*(int *)(*unaff_EBX + 4) == 0) {
      return;
    }
  } while( true );
}


//// FUNCTION zlib_deflate_stored @ 00b2d069 ////

char zlib_deflate_stored(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1b];
    if (uVar3 < 2) {
      zlib_fill_window();
      uVar3 = param_1[0x1b];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return '\0';
        }
        iVar2 = param_1[0x15];
        if (iVar2 < 0) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
        }
        FUN_00b67dd8((int)param_1,puVar4,param_1[0x19] - iVar2,(uint)(param_2 == 4));
        param_1[0x15] = param_1[0x19];
        zlib_flush_pending();
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return '\0';
          }
          return '\x02';
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
    }
    piVar1 = param_1 + 0x19;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x15];
    param_1[0x1b] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x19])) {
      param_1[0x1b] = param_1[0x19] - uVar3;
      param_1[0x19] = uVar3;
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_00b67dd8((int)param_1,puVar4,uVar3 - iVar2,0);
      param_1[0x15] = param_1[0x19];
      zlib_flush_pending();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
    iVar2 = param_1[0x15];
    if (param_1[9] - 0x106U <= (uint)(param_1[0x19] - iVar2)) {
      if (iVar2 < 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(param_1[0xc] + iVar2);
      }
      FUN_00b67dd8((int)param_1,puVar4,param_1[0x19] - iVar2,0);
      param_1[0x15] = param_1[0x19];
      zlib_flush_pending();
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}


//// FUNCTION zlib_deflateReset @ 00b2d7a2 ////

undefined4 zlib_deflateReset(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
      (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0x47) + 0x2a;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_00b6786f(iVar1);
    zlib_lm_init(extraout_ECX,iVar1);
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION zlib_deflateParams @ 00b2d811 ////

uint zlib_deflateParams(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((param_1 != (int *)0x0) && (iVar1 = param_1[7], iVar1 != 0)) {
    if (param_2 == -1) {
      param_2 = 6;
    }
    if ((((-1 < param_2) && (param_2 < 10)) && (-1 < param_3)) && (param_3 < 3)) {
      iVar3 = param_2 * 0xc;
      if ((*(int *)(&DAT_00d8e070 + *(int *)(iVar1 + 0x7c) * 0xc) != *(int *)(&DAT_00d8e070 + iVar3)
          ) && (param_1[2] != 0)) {
        uVar2 = zlib_deflate(param_1,1);
      }
      if (*(int *)(iVar1 + 0x7c) != param_2) {
        *(int *)(iVar1 + 0x7c) = param_2;
        *(uint *)(iVar1 + 0x78) = (uint)*(ushort *)(&DAT_00d8e06a + iVar3);
        *(uint *)(iVar1 + 0x84) = (uint)*(ushort *)(&DAT_00d8e068 + iVar3);
        *(uint *)(iVar1 + 0x88) = (uint)*(ushort *)(&DAT_00d8e06c + iVar3);
        *(uint *)(iVar1 + 0x74) = (uint)*(ushort *)(&DAT_00d8e06e + iVar3);
      }
      *(int *)(iVar1 + 0x80) = param_3;
      return uVar2;
    }
  }
  return 0xfffffffe;
}


//// FUNCTION zlib_deflateInit2_ @ 00b2d8c2 ////

undefined4
zlib_deflateInit2_(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  char *param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint local_8;
  
  if (((param_7 == (char *)0x0) || (*param_7 != *PTR_s_1_1_4_00e9cbf8)) || (param_8 != 0x38)) {
    uVar4 = 0xfffffffa;
  }
  else {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (*(int *)(param_1 + 0x20) == 0) {
        *(code **)(param_1 + 0x20) = zlib_zcalloc;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(undefined1 **)(param_1 + 0x24) = &LAB_00b67fc4;
      }
      if (param_2 == -1) {
        param_2 = 6;
      }
      bVar6 = param_4 < 0;
      if (bVar6) {
        param_4 = -param_4;
      }
      local_8 = (uint)bVar6;
      if (((((0 < param_5) && (param_5 < 10)) &&
           ((param_3 == 8 && ((8 < param_4 && (param_4 < 0x10)))))) && (-1 < param_2)) &&
         (((param_2 < 10 && (-1 < param_6)) && (param_6 < 3)))) {
        piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
        if (piVar1 != (int *)0x0) {
          *(int **)(param_1 + 0x1c) = piVar1;
          piVar1[10] = param_4;
          piVar1[6] = local_8;
          iVar5 = 1 << ((byte)param_4 & 0x1f);
          piVar1[0xb] = iVar5 + -1;
          iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
          piVar1[0x12] = param_5 + 7;
          *piVar1 = param_1;
          piVar1[0x11] = iVar2;
          piVar1[0x13] = iVar2 + -1;
          piVar1[9] = iVar5;
          piVar1[0x14] = (param_5 + 9U) / 3;
          iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
          piVar1[0xc] = iVar2;
          iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[9],2);
          piVar1[0xe] = iVar2;
          iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0x11],2);
          piVar1[0xf] = iVar2;
          uVar3 = 1 << ((char)param_5 + 6U & 0x1f);
          piVar1[0x5a5] = uVar3;
          iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),uVar3,4);
          uVar3 = piVar1[0x5a5];
          piVar1[3] = uVar3 << 2;
          piVar1[2] = iVar2;
          if (((piVar1[0xc] != 0) && (piVar1[0xe] != 0)) && ((piVar1[0xf] != 0 && (iVar2 != 0)))) {
            piVar1[0x5a4] = iVar2 + uVar3 * 3;
            piVar1[0x1f] = param_2;
            piVar1[0x5a7] = iVar2 + (uVar3 & 0xfffffffe);
            piVar1[0x20] = param_6;
            *(undefined1 *)((int)piVar1 + 0x1d) = 8;
            uVar4 = zlib_deflateReset(param_1);
            return uVar4;
          }
          *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_00e9e384;
          zlib_deflateEnd(param_1);
        }
        return 0xfffffffc;
      }
    }
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


//// FUNCTION zlib_inflateReset @ 00b2dac3 ////

undefined4 zlib_inflateReset(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 == (uint *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    zlib_inflate_blocks_reset(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,(int *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION zlib_inflateEnd @ 00b2db02 ////

undefined4 zlib_inflateEnd(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
     (*(int *)(param_1 + 0x24) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (*(int *)(iVar1 + 0x14) != 0) {
      zlib_inflate_blocks_free(*(int **)(iVar1 + 0x14),param_1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION zlib_inflateInit2_ @ 00b2db3f ////

undefined4 zlib_inflateInit2_(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    uVar3 = 0xfffffffa;
  }
  else if (param_1 == 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = zlib_zcalloc;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined1 **)(param_1 + 0x24) = &LAB_00b67fc4;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      uVar3 = 0xfffffffc;
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
      if (param_2 < 0) {
        param_2 = -param_2;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
      }
      if ((param_2 < 8) || (0xf < param_2)) {
        uVar3 = 0xfffffffe;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = param_2;
        piVar2 = zlib_inflate_blocks_new(param_1);
        *(int **)(*(int *)(param_1 + 0x1c) + 0x14) = piVar2;
        if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
          zlib_inflateReset(param_1);
          return 0;
        }
        uVar3 = 0xfffffffc;
      }
      zlib_inflateEnd(param_1);
    }
  }
  return uVar3;
}


//// FUNCTION zlib_inflateInit_ @ 00b2dc1e ////

void zlib_inflateInit_(int param_1,char *param_2,int param_3)

{
  zlib_inflateInit2_(param_1,0xf,param_2,param_3);
  return;
}


//// FUNCTION zlib_inflate @ 00b2dc34 ////

byte * zlib_inflate(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  
  if (((param_1 == (int *)0x0) || (puVar4 = (undefined4 *)param_1[7], puVar4 == (undefined4 *)0x0))
     || (*param_1 == 0)) {
LAB_00b2de6b:
    return (byte *)0xfffffffe;
  }
  pbVar3 = (byte *)0xfffffffb;
  pbVar5 = (byte *)0x0;
  if (param_2 == 4) {
    pbVar5 = pbVar3;
  }
LAB_00b2de5e:
  switch(*puVar4) {
  case 0:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 4) = (uint)*(byte *)*param_1;
    puVar4 = (undefined4 *)param_1[7];
    uVar2 = puVar4[1];
    *param_1 = *param_1 + 1;
    if (((byte)uVar2 & 0xf) == 8) {
      if (((uint)puVar4[1] >> 4) + 8 <= (uint)puVar4[4]) {
        *puVar4 = 1;
        pbVar3 = pbVar5;
        goto switchD_00b2dc71_caseD_1;
      }
      *puVar4 = 0xd;
      param_1[6] = (int)"invalid window size";
    }
    else {
      *puVar4 = 0xd;
      param_1[6] = (int)"unknown compression method";
    }
    goto LAB_00b2de51;
  case 1:
switchD_00b2dc71_caseD_1:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    puVar4 = (undefined4 *)param_1[7];
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    bVar1 = *(byte *)*param_1;
    *param_1 = (int)((byte *)*param_1 + 1);
    if ((puVar4[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
      *puVar4 = 0xd;
      param_1[6] = (int)"incorrect header check";
      goto LAB_00b2de51;
    }
    if ((bVar1 & 0x20) != 0) {
      *(undefined4 *)param_1[7] = 2;
      pbVar3 = pbVar5;
      goto switchD_00b2dc71_caseD_2;
    }
    *puVar4 = 7;
    pbVar3 = pbVar5;
    break;
  case 2:
switchD_00b2dc71_caseD_2:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 3;
    pbVar3 = pbVar5;
  case 3:
    goto switchD_00b2dc71_caseD_3;
  case 4:
    goto switchD_00b2dc71_caseD_4;
  case 5:
    goto switchD_00b2dc71_caseD_5;
  case 6:
    *(undefined4 *)param_1[7] = 0xd;
    param_1[6] = (int)"need dictionary";
    *(undefined4 *)(param_1[7] + 4) = 0;
    return (byte *)0xfffffffe;
  case 7:
    pbVar3 = (byte *)zlib_inflate_blocks(*(uint **)(param_1[7] + 0x14),param_1,pbVar3);
    if (pbVar3 == (byte *)0xfffffffd) {
      *(undefined4 *)param_1[7] = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
      pbVar3 = (byte *)0xfffffffd;
    }
    else {
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = pbVar5;
      }
      if (pbVar3 != (byte *)0x1) {
        return pbVar3;
      }
      zlib_inflate_blocks_reset(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
      puVar4 = (undefined4 *)param_1[7];
      if (puVar4[3] == 0) {
        *puVar4 = 8;
        pbVar3 = pbVar5;
        goto switchD_00b2dc71_caseD_8;
      }
      *puVar4 = 0xc;
      pbVar3 = pbVar5;
    }
    break;
  case 8:
switchD_00b2dc71_caseD_8:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 9;
    pbVar3 = pbVar5;
  case 9:
    if (param_1[1] == 0) {
      return pbVar3;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 10;
    pbVar3 = pbVar5;
  case 10:
    goto switchD_00b2dc71_caseD_a;
  case 0xb:
    goto switchD_00b2dc71_caseD_b;
  case 0xc:
    goto LAB_00b2de6b;
  case 0xd:
    return (byte *)0xfffffffd;
  default:
    goto LAB_00b2de6b;
  }
LAB_00b2de5b:
  puVar4 = (undefined4 *)param_1[7];
  goto LAB_00b2de5e;
switchD_00b2dc71_caseD_a:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 0xb;
  pbVar3 = pbVar5;
switchD_00b2dc71_caseD_b:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
  puVar4 = (undefined4 *)param_1[7];
  *param_1 = *param_1 + 1;
  if (puVar4[1] == puVar4[2]) {
    *(undefined4 *)param_1[7] = 0xc;
LAB_00b2de6b:
    return (byte *)0x1;
  }
  *puVar4 = 0xd;
  param_1[6] = (int)"incorrect data check";
LAB_00b2de51:
  *(undefined4 *)(param_1[7] + 4) = 5;
  pbVar3 = pbVar5;
  goto LAB_00b2de5b;
switchD_00b2dc71_caseD_3:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 4;
  pbVar3 = pbVar5;
switchD_00b2dc71_caseD_4:
  if (param_1[1] == 0) {
    return pbVar3;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = param_1[1] + -1;
  *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 5;
  pbVar3 = pbVar5;
switchD_00b2dc71_caseD_5:
  if (param_1[1] != 0) {
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + -1;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
    *param_1 = *param_1 + 1;
    param_1[0xc] = ((undefined4 *)param_1[7])[2];
    *(undefined4 *)param_1[7] = 6;
    return (byte *)0x2;
  }
  return pbVar3;
}


//// FUNCTION zlib_inflateSetDictionary @ 00b2df97 ////

undefined4 zlib_inflateSetDictionary(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (*(int **)(param_1 + 0x1c) == (int *)0x0)) ||
     (**(int **)(param_1 + 0x1c) != 6)) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar1 = zlib_adler32(1,param_2,param_3);
    if (uVar1 == *(uint *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x30) = 1;
      uVar1 = 1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f);
      if (uVar1 <= param_3) {
        uVar1 = uVar1 - 1;
        param_2 = param_2 + (param_3 - uVar1);
        param_3 = uVar1;
      }
      zlib_inflate_set_dictionary
                (*(int *)(*(int *)(param_1 + 0x1c) + 0x14),(undefined4 *)param_2,param_3);
      **(undefined4 **)(param_1 + 0x1c) = 7;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00b2e00c @ 00b2e00c ////

undefined4 FUN_00b2e00c(undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  puVar5 = param_1;
  if ((param_1 == (undefined4 *)0x0) || (piVar1 = (int *)param_1[7], piVar1 == (int *)0x0)) {
    uVar8 = 0xfffffffe;
  }
  else {
    if (*piVar1 != 0xd) {
      *piVar1 = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
    }
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      uVar8 = 0xfffffffb;
    }
    else {
      pcVar2 = (char *)*param_1;
      iVar3 = param_1[7];
      uVar6 = *(uint *)(iVar3 + 4);
      pcVar7 = pcVar2;
      param_1 = (undefined4 *)param_1[1];
      do {
        if (3 < uVar6) break;
        if (*pcVar7 == (&DAT_00d8e0e0)[uVar6]) {
          uVar6 = uVar6 + 1;
        }
        else if (*pcVar7 == '\0') {
          uVar6 = 4 - uVar6;
        }
        else {
          uVar6 = 0;
        }
        pcVar7 = pcVar7 + 1;
        param_1 = (undefined4 *)((int)param_1 + -1);
      } while (param_1 != (undefined4 *)0x0);
      puVar5[2] = pcVar7 + (puVar5[2] - (int)pcVar2);
      *puVar5 = pcVar7;
      puVar5[1] = param_1;
      *(uint *)(iVar3 + 4) = uVar6;
      if (uVar6 == 4) {
        uVar8 = puVar5[2];
        uVar4 = puVar5[5];
        zlib_inflateReset((int)puVar5);
        puVar5[2] = uVar8;
        puVar5[5] = uVar4;
        *(undefined4 *)puVar5[7] = 7;
        uVar8 = 0;
      }
      else {
        uVar8 = 0xfffffffd;
      }
    }
  }
  return uVar8;
}


//// FUNCTION FUN_00b2e0e0 @ 00b2e0e0 ////

undefined4 FUN_00b2e0e0(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}


//// FUNCTION FUN_00b2e10a @ 00b2e10a ////

int FUN_00b2e10a(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}


//// FUNCTION FUN_00b2e124 @ 00b2e124 ////

void FUN_00b2e124(int *param_1,byte *param_2,uint param_3)

{
  FUN_00b23fdd(param_1,param_2,param_3);
  FUN_00b206d7((int)param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00b2e13d @ 00b2e13d ////

bool FUN_00b2e13d(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = param_1;
  bVar3 = true;
  if ((*(byte *)(param_1 + 0x43) & 0x20) == 0) {
    if ((*(byte *)((int)param_1 + 0x5d) & 8) == 0) goto LAB_00b2e16b;
  }
  else if ((param_1[0x17] & 0x300U) != 0x300) goto LAB_00b2e16b;
  bVar3 = false;
LAB_00b2e16b:
  FUN_00b23fdd(param_1,&param_1,4);
  if (bVar3) {
    iVar2 = FUN_00b2e0e0((undefined1 *)&param_1);
    bVar3 = iVar2 != piVar1[0x40];
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


//// FUNCTION FUN_00b2e19b @ 00b2e19b ////

void FUN_00b2e19b(int *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (((((((bVar1 < 0x29) || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
        ((bVar1 = param_2[1], bVar1 < 0x29 || (0x7a < bVar1)))) ||
       ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
      ((((bVar1 = param_2[2], bVar1 < 0x29 || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61))))
       || ((bVar1 = param_2[3], bVar1 < 0x29 || (0x7a < bVar1)))))) ||
     ((0x5a < bVar1 && (bVar1 < 0x61)))) {
    FUN_00b20571(param_1,(undefined4 *)"invalid chunk type");
  }
  return;
}


//// FUNCTION FUN_00b2e201 @ 00b2e201 ////

void FUN_00b2e201(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar7 = param_2;
  bVar1 = *(byte *)(param_1 + 0xfb);
  uVar3 = (uint)bVar1;
  if (param_3 == 0xff) {
    uVar3 = uVar3 * *(int *)(param_1 + 0xb8) + 7;
    pbVar7 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    for (uVar4 = uVar3 >> 5; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar3 = uVar3 >> 3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      param_2 = param_2 + 1;
    }
  }
  else if (uVar3 == 1) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar5 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar6 = 7;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *pbVar7 = (byte)(0x7f7f >> (7 - bVar1 & 0x1f)) & *pbVar7 |
                  (*pbVar5 >> (bVar1 & 0x1f) & 1) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar5 = pbVar5 + 1;
        iVar6 = 7;
        pbVar7 = pbVar7 + 1;
      }
      else {
        iVar6 = iVar6 + -1;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar3 == 2) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar5 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar6 = 6;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *pbVar7 = (byte)(0x3f3f >> (6 - bVar1 & 0x1f)) & *pbVar7 |
                  (*pbVar5 >> (bVar1 & 0x1f) & 3) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar5 = pbVar5 + 1;
        iVar6 = 6;
        pbVar7 = pbVar7 + 1;
      }
      else {
        iVar6 = iVar6 + -2;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else if (uVar3 == 4) {
    iVar2 = *(int *)(param_1 + 0xb8);
    pbVar5 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80;
    iVar6 = 4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (((uint)param_2 & param_3) != 0) {
        bVar1 = (byte)iVar6;
        *pbVar7 = (byte)(0xf0f >> (4 - bVar1 & 0x1f)) & *pbVar7 |
                  (*pbVar5 >> (bVar1 & 0x1f) & 0xf) << (bVar1 & 0x1f);
      }
      if (iVar6 == 0) {
        pbVar5 = pbVar5 + 1;
        iVar6 = 4;
        pbVar7 = pbVar7 + 1;
      }
      else {
        iVar6 = iVar6 + -4;
      }
      if (param_2 == (byte *)0x1) {
        param_2 = (byte *)0x80;
      }
      else {
        param_2 = (byte *)((int)param_2 >> 1);
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8);
    uVar3 = (uint)(bVar1 >> 3);
    pbVar5 = (byte *)(*(int *)(param_1 + 0xdc) + 1);
    param_2 = (byte *)0x80000000;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      param_2._3_1_ = (byte)((uint)param_2 >> 0x18);
      if ((param_2._3_1_ & (byte)param_3) != 0) {
        pbVar8 = pbVar5;
        pbVar9 = pbVar7;
        for (uVar4 = (uint)(bVar1 >> 5); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar9 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        }
      }
      pbVar5 = pbVar5 + uVar3;
      pbVar7 = pbVar7 + uVar3;
      if (param_2._3_1_ == 1) {
        uVar4 = 0x80;
      }
      else {
        uVar4 = (uint)(param_2._3_1_ >> 1);
      }
      param_2 = (byte *)(uVar4 << 0x18);
    }
  }
  return;
}


//// FUNCTION FUN_00b2e419 @ 00b2e419 ////

void FUN_00b2e419(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_18 [4];
  uint local_8;
  
  if ((param_2 != (int *)0x0) && (param_1 != (uint *)0x0)) {
    local_18[3] = *(int *)(&DAT_00d8e170 + param_3 * 4);
    uVar3 = *param_1;
    uVar4 = uVar3 * local_18[3];
    bVar1 = *(byte *)((int)param_1 + 0xb);
    if (bVar1 == 1) {
      local_18[2] = 0;
      pbVar10 = (byte *)((uVar3 - 1 >> 3) + (int)param_2);
      pbVar9 = (byte *)((uVar4 - 1 >> 3) + (int)param_2);
      local_8 = 7 - (uVar3 - 1 & 7);
      param_3 = 7 - (uVar4 - 1 & 7);
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar10;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar9 = (byte)(0x7f7f >> (7 - (byte)param_3 & 0x1f)) & *pbVar9 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 1) << ((byte)param_3 & 0x1f);
              if (param_3 == 7) {
                param_3 = 0;
                pbVar9 = pbVar9 + -1;
              }
              else {
                param_3 = param_3 + 1;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 7) {
            local_8 = 0;
            pbVar10 = pbVar10 + -1;
          }
          else {
            local_8 = local_8 + 1;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else if (bVar1 == 2) {
      local_18[2] = 0;
      pbVar10 = (byte *)((uVar3 - 1 >> 2) + (int)param_2);
      pbVar9 = (byte *)((uVar4 - 1 >> 2) + (int)param_2);
      local_8 = (3 - (uVar3 - 1 & 3)) * 2;
      param_3 = (3 - (uVar4 - 1 & 3)) * 2;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar10;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar9 = (byte)(0x3f3f >> (6 - (byte)param_3 & 0x1f)) & *pbVar9 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 3) << ((byte)param_3 & 0x1f);
              if (param_3 == 6) {
                param_3 = 0;
                pbVar9 = pbVar9 + -1;
              }
              else {
                param_3 = param_3 + 2;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 6) {
            local_8 = 0;
            pbVar10 = pbVar10 + -1;
          }
          else {
            local_8 = local_8 + 2;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else if (bVar1 == 4) {
      local_18[2] = 0;
      pbVar10 = (byte *)((uVar3 - 1 >> 1) + (int)param_2);
      pbVar9 = (byte *)((uVar4 - 1 >> 1) + (int)param_2);
      local_8 = (uVar3 - 1 & 1) * -4 + 4;
      param_3 = (uVar4 - 1 & 1) * -4 + 4;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar10;
          local_18[1] = local_18[3];
          if (0 < local_18[3]) {
            do {
              *pbVar9 = (byte)(0xf0f >> (4 - (byte)param_3 & 0x1f)) & *pbVar9 |
                        (bVar1 >> ((byte)local_8 & 0x1f) & 0xf) << ((byte)param_3 & 0x1f);
              if (param_3 == 4) {
                param_3 = 0;
                pbVar9 = pbVar9 + -1;
              }
              else {
                param_3 = param_3 + 4;
              }
              local_18[1] = local_18[1] + -1;
            } while (local_18[1] != 0);
          }
          if (local_8 == 4) {
            local_8 = 0;
            pbVar10 = pbVar10 + -1;
          }
          else {
            local_8 = local_8 + 4;
          }
          local_18[2] = local_18[2] + 1;
        } while ((uint)local_18[2] < *param_1);
      }
    }
    else {
      local_8 = 0;
      uVar6 = (uint)(bVar1 >> 3);
      piVar5 = (int *)((uVar3 - 1) * uVar6 + (int)param_2);
      param_2 = (int *)((uVar4 - 1) * uVar6 + (int)param_2);
      if (uVar3 != 0) {
        do {
          piVar7 = piVar5;
          piVar8 = local_18;
          for (uVar3 = (uint)(bVar1 >> 5); iVar2 = local_18[3], uVar3 != 0; uVar3 = uVar3 - 1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
          for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(char *)piVar8 = (char)*piVar7;
            piVar7 = (int *)((int)piVar7 + 1);
            piVar8 = (int *)((int)piVar8 + 1);
          }
          if (0 < iVar2) {
            local_18[2] = iVar2;
            do {
              piVar7 = (int *)((int)param_2 - uVar6);
              piVar8 = local_18;
              for (uVar3 = (uint)(bVar1 >> 5); uVar3 != 0; uVar3 = uVar3 - 1) {
                *param_2 = *piVar8;
                piVar8 = piVar8 + 1;
                param_2 = param_2 + 1;
              }
              local_18[2] = local_18[2] + -1;
              for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(char *)param_2 = (char)*piVar8;
                piVar8 = (int *)((int)piVar8 + 1);
                param_2 = (int *)((int)param_2 + 1);
              }
              param_2 = piVar7;
            } while (local_18[2] != 0);
          }
          piVar5 = (int *)((int)piVar5 - uVar6);
          local_8 = local_8 + 1;
        } while (local_8 < *param_1);
      }
    }
    *param_1 = uVar4;
    param_1[1] = *(byte *)((int)param_1 + 0xb) * uVar4 + 7 >> 3;
  }
  return;
}


//// FUNCTION FUN_00b2e6e6 @ 00b2e6e6 ////

void FUN_00b2e6e6(int param_1,int param_2,byte *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      pbVar8 = param_3 + uVar4;
      if (uVar4 < *(uint *)(param_2 + 4)) {
        pbVar11 = pbVar8 + -uVar4;
        iVar6 = *(uint *)(param_2 + 4) - uVar4;
        do {
          *pbVar8 = *pbVar8 + *pbVar11;
          pbVar8 = pbVar8 + 1;
          pbVar11 = pbVar11 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else if (param_5 == 2) {
      uVar4 = *(uint *)(param_2 + 4);
      uVar7 = 0;
      if (uVar4 != 0) {
        do {
          *param_3 = *param_3 + param_4[uVar7];
          param_3 = param_3 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
    }
    else if (param_5 == 3) {
      iVar6 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      iVar3 = *(int *)(param_2 + 4) - iVar6;
      pbVar8 = param_3;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar8 = *pbVar8 + (*param_4 >> 1);
        param_4 = param_4 + 1;
        pbVar8 = pbVar8 + 1;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar8 = *pbVar8 + (char)(((uint)*param_3 + (uint)*param_4) / 2);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    else if (param_5 == 4) {
      iVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
      iVar6 = *(int *)(param_2 + 4) - iVar3;
      pbVar8 = param_3;
      pbVar11 = param_4;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar8 = *pbVar8 + *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar8 + 1;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        bVar5 = *param_3;
        bVar1 = *pbVar11;
        bVar2 = *param_4;
        param_3 = param_3 + 1;
        pbVar11 = pbVar11 + 1;
        param_4 = param_4 + 1;
        iVar3 = (uint)bVar1 - (uint)bVar2;
        iVar9 = (uint)bVar5 - (uint)bVar2;
        param_2 = iVar3;
        if (iVar3 < 0) {
          param_2 = -iVar3;
        }
        iVar10 = iVar9;
        if (iVar9 < 0) {
          iVar10 = -iVar9;
        }
        iVar3 = iVar3 + iVar9;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (((iVar10 < param_2) || (iVar3 < param_2)) && (bVar5 = bVar1, iVar3 < iVar10)) {
          bVar5 = bVar2;
        }
        *pbVar8 = *pbVar8 + bVar5;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      FUN_00b20556(param_1,"Ignoring bad adaptive filter type");
      *param_3 = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00b2e85f @ 00b2e85f ////

void FUN_00b2e85f(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  
  param_1[0x1a] = 0;
  FUN_00b23d26(param_1);
  uVar3 = param_1[0x2f];
  if (*(char *)((int)param_1 + 0x113) == '\0') {
    iVar6 = param_1[0x2e];
    param_1[0x30] = uVar3;
    param_1[0x34] = iVar6;
    param_1[0x33] = param_1[0x32] + 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      uVar3 = uVar3 + 7 >> 3;
    }
    iVar6 = param_1[0x2e];
    param_1[0x30] = uVar3;
    uVar3 = ((iVar6 - *(int *)(&DAT_00d8e154 + (uint)*(byte *)(param_1 + 0x45) * 4)) + -1 +
            *(uint *)(&DAT_00d8e170 + (uint)*(byte *)(param_1 + 0x45) * 4)) /
            *(uint *)(&DAT_00d8e170 + (uint)*(byte *)(param_1 + 0x45) * 4);
    param_1[0x34] = uVar3;
    param_1[0x33] = (*(byte *)((int)param_1 + 0x119) * uVar3 + 7 >> 3) + 1;
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 0x119);
  uVar2 = param_1[0x18];
  if (((uVar2 & 4) != 0) && (*(byte *)((int)param_1 + 0x117) < 8)) {
    uVar3 = 8;
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar1 = *(char *)((int)param_1 + 0x116);
    if (cVar1 == '\x03') {
      uVar3 = (uint)(*(short *)((int)param_1 + 0x10a) != 0) * 8 + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar3 < 8) {
        uVar3 = 8;
      }
      if (*(short *)((int)param_1 + 0x10a) != 0) {
        uVar3 = uVar3 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)((int)param_1 + 0x10a) != 0)) {
      uVar3 = (uVar3 << 2) / 3;
    }
  }
  if ((char)(uVar2 >> 8) < '\0') {
    cVar1 = *(char *)((int)param_1 + 0x116);
    if (cVar1 == '\x03') {
      uVar3 = 0x20;
    }
    else if (cVar1 == '\0') {
      uVar3 = ((8 < uVar3) - 1 & 0xfffffff0) + 0x20;
    }
    else if (cVar1 == '\x02') {
      uVar3 = ((0x20 < uVar3) - 1 & 0xffffffe0) + 0x40;
    }
  }
  pvVar4 = FUN_00b2b0b9(param_1,((iVar6 + 7U & 0xfffffff8) * uVar3 + 7 >> 3) + 1 +
                                ((int)(uVar3 + 7) >> 3));
  param_1[0x37] = (int)pvVar4;
  puVar5 = FUN_00b2b0b9(param_1,param_1[0x32] + 1);
  param_1[0x36] = (int)puVar5;
  FUN_00b2b138(param_1,puVar5,0,param_1[0x32] + 1);
  param_1[0x17] = param_1[0x17] | 0x40;
  return;
}


//// FUNCTION FUN_00b2e9fe @ 00b2e9fe ////

undefined4 FUN_00b2e9fe(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  uVar1 = param_1[0x28];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_00b2e124(param_1,(byte *)param_1[0x27],param_1[0x28]);
  }
  if (param_2 != 0) {
    FUN_00b2e124(param_1,(byte *)param_1[0x27],param_2);
  }
  bVar2 = FUN_00b2e13d(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar3 = 0;
  }
  else {
    if ((((*(byte *)(param_1 + 0x43) & 0x20) == 0) || ((*(byte *)((int)param_1 + 0x5d) & 2) != 0))
       && (((*(byte *)(param_1 + 0x43) & 0x20) != 0 || ((*(byte *)((int)param_1 + 0x5d) & 4) == 0)))
       ) {
      FUN_00b20571(param_1,(undefined4 *)"CRC error");
    }
    else {
      FUN_00b20594((int)param_1,(undefined4 *)"CRC error");
    }
    uVar3 = 1;
  }
  return uVar3;
}


//// FUNCTION FUN_00b2ea87 @ 00b2ea87 ////

void FUN_00b2ea87(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte local_20 [4];
  undefined1 local_1c [4];
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_1[0x16] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Out of place IHDR");
  }
  if (param_3 != 0xd) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Invalid IHDR chunk");
  }
  param_1[0x16] = param_1[0x16] | 1;
  FUN_00b2e124(param_1,local_20,0xd);
  FUN_00b2e9fe(param_1,0);
  uVar2 = FUN_00b2e0e0(local_20);
  uVar3 = FUN_00b2e0e0(local_1c);
  local_10 = (uint)local_16;
  local_c = (uint)local_15;
  local_8 = (uint)local_14;
  if ((((uVar2 == 0) || (0x7fffffff < uVar2)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Invalid image size in IHDR");
  }
  if (((local_18 != 1) && (local_18 != 2)) &&
     ((local_18 != 4 && ((local_18 != 8 && (local_18 != 0x10)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Invalid bit depth in IHDR");
  }
  if (((local_17 == 1) || (local_17 == 5)) || (6 < local_17)) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Invalid color type in IHDR");
  }
  if (((local_17 == 3) && (8 < local_18)) ||
     (((local_17 == 2 || ((local_17 == 4 || (local_17 == 6)))) && (local_18 < 8)))) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Invalid color type/bit depth combination in IHDR");
  }
  if (1 < local_8) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Unknown interlace method in IHDR");
  }
  if (local_10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Unknown compression method in IHDR");
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Unknown filter method in IHDR");
  }
  *(byte *)((int)param_1 + 0x113) = local_14;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  *(byte *)((int)param_1 + 0x117) = local_18;
  *(byte *)((int)param_1 + 0x116) = local_17;
  if (local_17 != 0) {
    if (local_17 == 2) {
      *(undefined1 *)((int)param_1 + 0x11a) = 3;
      goto LAB_00b2ec2c;
    }
    if (local_17 != 3) {
      if (local_17 == 4) {
        *(undefined1 *)((int)param_1 + 0x11a) = 2;
      }
      else if (local_17 == 6) {
        *(undefined1 *)((int)param_1 + 0x11a) = 4;
      }
      goto LAB_00b2ec2c;
    }
  }
  *(undefined1 *)((int)param_1 + 0x11a) = 1;
LAB_00b2ec2c:
  bVar1 = *(char *)((int)param_1 + 0x11a) * local_18;
  *(byte *)((int)param_1 + 0x119) = bVar1;
  param_1[0x32] = bVar1 * uVar2 + 7 >> 3;
  FUN_00b212c1((int)param_1,param_2,uVar2,uVar3,local_18,local_17,local_14,local_16,local_15);
  return;
}


//// FUNCTION FUN_00b2ec69 @ 00b2ec69 ////

void FUN_00b2ec69(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  piVar2 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
LAB_00b2ec96:
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,pcVar6);
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) != 0) {
      pcVar6 = "Duplicate PLTE chunk";
      goto LAB_00b2ec96;
    }
    param_1[0x16] = param_1[0x16] | 2;
    if (param_3 % 3 == 0) {
      piVar3 = (int *)((int)param_3 / 3);
      puVar4 = FUN_00b2065a(param_1,(int)piVar3,3);
      *(byte *)((int)param_1 + 0x5d) = *(byte *)((int)param_1 + 0x5d) | 0x10;
      if (0 < (int)piVar3) {
        puVar5 = (undefined1 *)((int)puVar4 + 2);
        param_1 = piVar3;
        do {
          FUN_00b2e124(piVar2,(byte *)&param_3,3);
          puVar5[-2] = (undefined1)param_3;
          puVar5[-1] = param_3._1_1_;
          *puVar5 = param_3._2_1_;
          puVar5 = puVar5 + 3;
          param_1 = (int *)((int)param_1 + -1);
        } while (param_1 != (int *)0x0);
      }
      FUN_00b2e9fe(piVar2,0);
      piVar2[0x41] = (int)puVar4;
      *(short *)(piVar2 + 0x42) = (short)piVar3;
      FUN_00b21364((int)piVar2,param_2,puVar4,(short)piVar3);
      if (*(char *)((int)piVar2 + 0x116) != '\x03') {
        return;
      }
      if (param_2 == 0) {
        return;
      }
      if ((*(byte *)(param_2 + 8) & 0x10) == 0) {
        return;
      }
      if (*(ushort *)((int)piVar2 + 0x10a) <= *(ushort *)(piVar2 + 0x42)) {
        return;
      }
      FUN_00b20556((int)piVar2,"Truncating incorrect tRNS chunk length");
      *(ushort *)((int)piVar2 + 0x10a) = *(ushort *)(piVar2 + 0x42);
      return;
    }
    pcVar6 = "Invalid palette chunk";
    if (*(char *)((int)param_1 + 0x116) == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(param_1,"Invalid palette chunk");
    }
  }
  else {
    pcVar6 = "Invalid PLTE after IDAT";
  }
  FUN_00b20556((int)param_1,pcVar6);
  FUN_00b2e9fe(param_1,param_3);
  return;
}


//// FUNCTION FUN_00b2ed84 @ 00b2ed84 ////

void FUN_00b2ed84(int *param_1,undefined4 param_2,uint param_3)

{
  if (((param_1[0x16] & 1U) != 0) && ((param_1[0x16] & 4U) != 0)) {
    param_1[0x16] = param_1[0x16] | 0x18;
    if (param_3 != 0) {
      FUN_00b20556((int)param_1,"Incorrect IEND chunk length");
    }
    FUN_00b2e9fe(param_1,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b20535(param_1,"No image in file");
}


//// FUNCTION FUN_00b2edcc @ 00b2edcc ////

void FUN_00b2edcc(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = param_2;
  piVar3 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Missing IHDR before gAMA");
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        pcVar6 = "Duplicate gAMA chunk";
        goto LAB_00b2edfc;
      }
    }
    else {
      FUN_00b20556((int)param_1,"Out of place gAMA chunk");
    }
    if (param_3 == 4) {
      FUN_00b2e124(piVar3,(byte *)&param_1,4);
      iVar5 = FUN_00b2e9fe(piVar3,0);
      if (iVar5 != 0) {
        return;
      }
      param_3 = FUN_00b2e0e0((undefined1 *)&param_1);
      if (param_3 == 0) {
        return;
      }
      if ((*(uint *)(iVar4 + 8) & 0x800) != 0) {
        fVar2 = (float)(int)param_3;
        if ((int)param_3 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        if (500.0 < ABS(fVar2 - 45455.0)) {
          FUN_00b20556((int)piVar3,"Ignoring incorrect gAMA value when sRGB is also present");
          return;
        }
      }
      fVar2 = (float)(int)param_3;
      if ((int)param_3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      piVar3[0x4c] = (int)(fVar2 * 1e-05);
      FUN_00b212a1((int)piVar3,iVar4,(double)(fVar2 * 1e-05));
      return;
    }
    pcVar6 = "Incorrect gAMA chunk length";
  }
  else {
    pcVar6 = "Invalid gAMA after IDAT";
  }
LAB_00b2edfc:
  FUN_00b20556((int)piVar3,pcVar6);
  FUN_00b2e9fe(piVar3,param_3);
  return;
}


//// FUNCTION FUN_00b2eecf @ 00b2eecf ////

void FUN_00b2eecf(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  
  piVar2 = param_1;
  uVar1 = param_1[0x16];
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Missing IHDR before sRGB");
  }
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 9) & 8) != 0)) {
        pcVar5 = "Duplicate sRGB chunk";
        goto LAB_00b2eef5;
      }
    }
    else {
      FUN_00b20556((int)param_1,"Out of place sRGB chunk");
    }
    if (param_3 == 1) {
      FUN_00b2e124(piVar2,(byte *)((int)&param_1 + 3),1);
      iVar4 = FUN_00b2e9fe(piVar2,0);
      if (iVar4 != 0) {
        return;
      }
      bVar3 = param_1._3_1_;
      if (3 < param_1._3_1_) {
        FUN_00b20556((int)piVar2,"Unknown sRGB intent");
        return;
      }
      if (((*(byte *)(param_2 + 8) & 1) != 0) &&
         (500.0 < ABS(((float)piVar2[0x4c] * 100000.0 + 0.5) - 45455.0))) {
        FUN_00b20556((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
      }
      FUN_00b213ac((int)piVar2,param_2,bVar3);
      return;
    }
    pcVar5 = "Incorrect sRGB chunk length";
  }
  else {
    pcVar5 = "Invalid sRGB after IDAT";
  }
LAB_00b2eef5:
  FUN_00b20556((int)piVar2,pcVar5);
  FUN_00b2e9fe(piVar2,param_3);
  return;
}


//// FUNCTION FUN_00b2efb3 @ 00b2efb3 ////

void FUN_00b2efb3(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte local_c [2];
  byte local_a [2];
  byte local_8 [4];
  
  if ((param_1[0x16] & 1U) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00b20535(param_1,"Missing IHDR before tRNS");
  }
  if ((param_1[0x16] & 4U) != 0) {
    pcVar4 = "Invalid tRNS after IDAT";
LAB_00b2f026:
    FUN_00b20556((int)param_1,pcVar4);
    FUN_00b2e9fe(param_1,param_3);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    pcVar4 = "Duplicate tRNS chunk";
    goto LAB_00b2f026;
  }
  cVar1 = *(char *)((int)param_1 + 0x116);
  if (cVar1 == '\x03') {
    if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
      FUN_00b20556((int)param_1,"Missing PLTE before tRNS");
    }
    else if (*(ushort *)(param_1 + 0x42) < param_3) {
      FUN_00b20556((int)param_1,"Incorrect tRNS chunk length");
      goto LAB_00b2f13a;
    }
    if (param_3 != 0) {
      pbVar2 = FUN_00b2b0b9(param_1,param_3);
      *(byte *)((int)param_1 + 0x5d) = *(byte *)((int)param_1 + 0x5d) | 0x20;
      param_1[0x57] = (int)pbVar2;
      FUN_00b2e124(param_1,pbVar2,param_3);
      *(short *)((int)param_1 + 0x10a) = (short)param_3;
LAB_00b2f102:
      iVar3 = FUN_00b2e9fe(param_1,0);
      if (iVar3 != 0) {
        return;
      }
      FUN_00b213e5((int)param_1,param_2,param_1[0x57],(uint)*(ushort *)((int)param_1 + 0x10a),
                   param_1 + 0x58);
      return;
    }
    FUN_00b20556((int)param_1,"Zero length tRNS chunk");
    goto LAB_00b2f13a;
  }
  if (cVar1 == '\x02') {
    if (param_3 == 6) {
      FUN_00b2e124(param_1,local_c,6);
      *(undefined2 *)((int)param_1 + 0x10a) = 1;
      iVar3 = FUN_00b2e10a(local_c);
      *(short *)((int)param_1 + 0x162) = (short)iVar3;
      iVar3 = FUN_00b2e10a(local_a);
      *(short *)(param_1 + 0x59) = (short)iVar3;
      iVar3 = FUN_00b2e10a(local_8);
      *(short *)((int)param_1 + 0x166) = (short)iVar3;
      goto LAB_00b2f102;
    }
LAB_00b2f0d6:
    pcVar4 = "Incorrect tRNS chunk length";
  }
  else {
    if (cVar1 == '\0') {
      if (param_3 == 2) {
        FUN_00b2e124(param_1,local_c,2);
        *(undefined2 *)((int)param_1 + 0x10a) = 1;
        iVar3 = FUN_00b2e10a(local_c);
        *(short *)(param_1 + 0x5a) = (short)iVar3;
        goto LAB_00b2f102;
      }
      goto LAB_00b2f0d6;
    }
    pcVar4 = "tRNS chunk not allowed with alpha channel";
  }
  FUN_00b20556((int)param_1,pcVar4);
LAB_00b2f13a:
  FUN_00b2e9fe(param_1,param_3);
  return;
}


//// FUNCTION FUN_00b2f147 @ 00b2f147 ////

void FUN_00b2f147(int *param_1,int param_2,uint param_3)

{
  FUN_00b2e19b(param_1,(byte *)(param_1 + 0x43));
  if (((*(byte *)(param_1 + 0x43) & 0x20) == 0) &&
     (FUN_00b20571(param_1,(undefined4 *)"unknown critical chunk"), param_2 == 0)) {
    return;
  }
  if ((param_1[0x16] & 4U) != 0) {
    param_1[0x16] = param_1[0x16] | 8;
  }
  FUN_00b2e9fe(param_1,param_3);
  return;
}


//// FUNCTION FUN_00b2f190 @ 00b2f190 ////

void __thiscall FUN_00b2f190(void *this,int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  void *local_8;
  
  piVar3 = param_1;
  puVar1 = (uint *)(param_1 + 0x35);
  *puVar1 = *puVar1 + 1;
  if ((uint)param_1[0x30] <= *puVar1) {
    local_8 = this;
    if (*(char *)((int)param_1 + 0x113) != '\0') {
      *puVar1 = 0;
      FUN_00b2b138(param_1,(undefined4 *)param_1[0x36],0,param_1[0x32] + 1);
      do {
        *(char *)(piVar3 + 0x45) = (char)piVar3[0x45] + '\x01';
        bVar2 = *(byte *)(piVar3 + 0x45);
        if (6 < bVar2) goto LAB_00b2f264;
        iVar7 = (uint)bVar2 * 4;
        uVar4 = ((piVar3[0x2e] - *(int *)(&DAT_00d8e154 + iVar7)) + -1 +
                *(uint *)(&DAT_00d8e170 + iVar7)) / *(uint *)(&DAT_00d8e170 + iVar7);
        piVar3[0x34] = uVar4;
        piVar3[0x33] = (*(byte *)((int)piVar3 + 0x119) * uVar4 + 7 >> 3) + 1;
      } while (((*(byte *)(piVar3 + 0x18) & 2) == 0) &&
              (piVar3[0x30] = ((piVar3[0x2f] - *(int *)(&DAT_00d8e18c + iVar7)) + -1 +
                              *(uint *)(&DAT_00d8e1a8 + iVar7)) / *(uint *)(&DAT_00d8e1a8 + iVar7),
              piVar3[0x34] == 0));
      if (bVar2 < 7) {
        return;
      }
    }
LAB_00b2f264:
    if ((*(byte *)(piVar3 + 0x17) & 0x20) == 0) {
      piVar3[0x1c] = (int)&param_1 + 3;
      piVar3[0x1d] = 1;
      while( true ) {
        if (piVar3[0x1a] == 0) {
          if (piVar3[0x3f] == 0) {
            do {
              FUN_00b2e9fe(piVar3,0);
              FUN_00b23fdd(piVar3,&local_8,4);
              iVar7 = FUN_00b2e0e0((undefined1 *)&local_8);
              piVar3[0x3f] = iVar7;
              FUN_00b206bb((int)piVar3);
              FUN_00b2e124(piVar3,(byte *)(piVar3 + 0x43),4);
              if (piVar3[0x43] != 0x54414449) {
                    /* WARNING: Subroutine does not return */
                FUN_00b20535(piVar3,"Not enough image data");
              }
            } while (piVar3[0x3f] == 0);
          }
          piVar3[0x1a] = piVar3[0x28];
          piVar3[0x19] = piVar3[0x27];
          if ((uint)piVar3[0x3f] < (uint)piVar3[0x28]) {
            piVar3[0x1a] = piVar3[0x3f];
          }
          FUN_00b2e124(piVar3,(byte *)piVar3[0x27],piVar3[0x1a]);
          piVar3[0x3f] = piVar3[0x3f] - piVar3[0x1a];
        }
        pbVar5 = zlib_inflate(piVar3 + 0x19,1);
        if (pbVar5 == (byte *)0x1) break;
        if (pbVar5 != (byte *)0x0) {
          pcVar6 = (char *)piVar3[0x1f];
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "Decompression Error";
          }
                    /* WARNING: Subroutine does not return */
          FUN_00b20535(piVar3,pcVar6);
        }
        if (piVar3[0x1d] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00b20535(piVar3,"Extra compressed data");
        }
      }
      if (((piVar3[0x1d] == 0) || (piVar3[0x1a] != 0)) || (piVar3[0x3f] != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b20535(piVar3,"Extra compressed data");
      }
      piVar3[0x16] = piVar3[0x16] | 8;
      piVar3[0x17] = piVar3[0x17] | 0x20;
      piVar3[0x1d] = 0;
    }
    if ((piVar3[0x3f] != 0) || (piVar3[0x1a] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b20535(piVar3,"Extra compression data");
    }
    zlib_inflateReset((int)(piVar3 + 0x19));
    piVar3[0x16] = piVar3[0x16] | 8;
  }
  return;
}


//// FUNCTION FUN_00b2f3aa @ 00b2f3aa ////

void FUN_00b2f3aa(void)

{
  LONG LVar1;
  
  while( true ) {
    LVar1 = InterlockedCompareExchange((LONG *)&DAT_010ccd2c,1,0);
    if (LVar1 != 1) break;
    Sleep(1);
  }
  if (DAT_010ccd28 == 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010ccd10);
  }
  DAT_010ccd28 = DAT_010ccd28 + 1;
  InterlockedExchange((LONG *)&DAT_010ccd2c,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010ccd10);
  return;
}


//// FUNCTION FUN_00b2f3ff @ 00b2f3ff ////

void FUN_00b2f3ff(void)

{
  LONG LVar1;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010ccd10);
  while( true ) {
    LVar1 = InterlockedCompareExchange((LONG *)&DAT_010ccd2c,1,0);
    if (LVar1 != 1) break;
    Sleep(1);
  }
  DAT_010ccd28 = DAT_010ccd28 + -1;
  if (DAT_010ccd28 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010ccd10);
  }
  InterlockedExchange((LONG *)&DAT_010ccd2c,0);
  return;
}


//// FUNCTION FUN_00b2f450 @ 00b2f450 ////

void __thiscall FUN_00b2f450(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return;
}


//// FUNCTION FUN_00b2f474 @ 00b2f474 ////

void __thiscall FUN_00b2f474(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return;
}


//// FUNCTION FUN_00b2f492 @ 00b2f492 ////

void __fastcall FUN_00b2f492(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0xc);
  if (_Memory != (void *)0x0) {
    FUN_00b2f492((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00b2f4ac @ 00b2f4ac ////

void * __thiscall FUN_00b2f4ac(void *this,byte param_1)

{
  FUN_00b2f492((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b2f4cd @ 00b2f4cd ////

undefined4 * __fastcall FUN_00b2f4cd(undefined4 *param_1)

{
  FUN_00b3313a(param_1);
  FUN_00b1b8ca(param_1 + 0xf);
  FUN_00b1bb58(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  return param_1;
}


//// FUNCTION FUN_00b2f502 @ 00b2f502 ////

void __fastcall FUN_00b2f502(int param_1)

{
  void *_Memory;
  
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    FUN_00b2f4ac(*(void **)(param_1 + 0x38),1);
  }
  _Memory = *(void **)(param_1 + 0x6c);
  if (_Memory != (void *)0x0) {
    FUN_00b2f502((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 100) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))(*(int **)(param_1 + 0x58),*(int *)(param_1 + 100))
    ;
  }
  FUN_00b1bb65((undefined4 *)(param_1 + 0x4c));
  FUN_00b1bb4d((int *)(param_1 + 0x3c));
  FUN_00b33154();
  return;
}


//// FUNCTION FUN_00b2f55b @ 00b2f55b ////

void * __thiscall FUN_00b2f55b(void *this,byte param_1)

{
  FUN_00b2f502((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b2f57c @ 00b2f57c ////

uint __thiscall
FUN_00b2f57c(void *this,WCHAR *param_1,LPSTR param_2,void *param_3,int param_4,void *param_5,
            uint param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  undefined4 *puVar4;
  DWORD nBufferLength;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  WCHAR local_108 [130];
  
  uVar6 = param_6;
  *(uint *)((int)this + 0x58) = param_6;
  if (param_2 != (LPSTR)0x0) {
    WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)local_108,0x104,(LPCCH)0x0,(LPBOOL)0x0);
    param_1 = local_108;
  }
  if (uVar6 == 0) {
    nBufferLength = GetFullPathNameA((LPCSTR)param_1,0,(LPSTR)0x0,(LPSTR *)0x0);
    param_6 = nBufferLength + 1;
    iVar5 = FUN_00b688f9(param_3,param_6,1);
    *(int *)((int)this + 0x60) = iVar5;
    if (iVar5 != 0) {
      iVar5 = FUN_00b688f9(param_3,param_6,1);
      *(int *)((int)this + 0x5c) = iVar5;
      if (iVar5 != 0) {
        GetFullPathNameA((LPCSTR)param_1,nBufferLength,*(LPSTR *)((int)this + 0x60),&param_2);
        *(undefined1 *)(nBufferLength + *(int *)((int)this + 0x60)) = 0;
        puVar4 = *(undefined4 **)((int)this + 0x60);
        puVar7 = *(undefined4 **)((int)this + 0x5c);
        for (uVar6 = param_6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = param_6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        if (param_2 != (LPSTR)0x0) {
          *param_2 = '\0';
        }
        uVar6 = FUN_00b1b8dc((void *)((int)this + 0x3c),*(LPCWSTR *)((int)this + 0x5c),0);
        if ((int)uVar6 < 0) {
          FUN_00b33674(param_5,param_4,0x5e3,"failed to open source file: \'%s\'");
          return uVar6;
        }
        *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x44);
        *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x48);
        goto LAB_00b2f70a;
      }
    }
  }
  else {
    pWVar3 = param_1;
    do {
      WVar2 = *pWVar3;
      pWVar3 = (WCHAR *)((int)pWVar3 + 1);
    } while ((char)WVar2 != '\0');
    pcVar1 = (char *)((int)pWVar3 + (1 - ((int)param_1 + 1)));
    puVar4 = (undefined4 *)FUN_00b688f9(param_3,(int)pcVar1,1);
    *(undefined4 **)((int)this + 0x5c) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar6 = (uint)pcVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = (uint)pcVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar4 = (char)*param_1;
        param_1 = (WCHAR *)((int)param_1 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_6 = (**(code **)**(undefined4 **)((int)this + 0x58))
                          (*(undefined4 **)((int)this + 0x58),param_7,
                           *(undefined4 *)((int)this + 0x5c),param_8,(int)this + 100,
                           (int)this + 0x68);
      if ((int)param_6 < 0) {
        FUN_00b33674(param_5,param_4,0x5e3,"failed to open source file: \'%s\'");
        return param_6;
      }
LAB_00b2f70a:
      uVar6 = FUN_00b33155(this,*(char **)((int)this + 100),*(int *)((int)this + 0x68),
                           *(undefined4 *)((int)this + 0x5c),1,(int)param_3,(int)param_5);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      return 0;
    }
  }
  return 0x8007000e;
}


//// FUNCTION FUN_00b2f72d @ 00b2f72d ////

int __thiscall
FUN_00b2f72d(void *this,HMODULE param_1,undefined4 param_2,int param_3,int param_4,void *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00b1bb94((void *)((int)this + 0x4c),param_1,param_2,0,param_3);
  if (iVar1 < 0) {
    FUN_00b33674(param_5,0,0x5e8,"failed to open resource");
  }
  else {
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x54);
    *(char **)((int)this + 100) = *(char **)((int)this + 0x50);
    iVar1 = FUN_00b33155(this,*(char **)((int)this + 0x50),*(int *)((int)this + 0x54),0,1,param_4,
                         (int)param_5);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00b2f795 @ 00b2f795 ////

int __thiscall FUN_00b2f795(void *this,char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_1 != (char *)0x0)) {
    *(char **)((int)this + 100) = param_1;
    *(int *)((int)this + 0x68) = param_2;
    iVar1 = FUN_00b33155(this,param_1,param_2,0,1,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = -0x7789f794;
  }
  return iVar1;
}


//// FUNCTION FUN_00b2f7d0 @ 00b2f7d0 ////

void __thiscall FUN_00b2f7d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  return;
}


//// FUNCTION FUN_00b2f7eb @ 00b2f7eb ////

void __fastcall FUN_00b2f7eb(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_00b2f7eb((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00b2f805 @ 00b2f805 ////

void * __thiscall FUN_00b2f805(void *this,byte param_1)

{
  FUN_00b2f7eb((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b2f82d @ 00b2f82d ////

void __fastcall FUN_00b2f82d(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x28);
  if (_Memory != (void *)0x0) {
    FUN_00b2f82d((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00b2f847 @ 00b2f847 ////

void * __thiscall FUN_00b2f847(void *this,byte param_1)

{
  FUN_00b2f82d((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b2f868 @ 00b2f868 ////

undefined4 __thiscall FUN_00b2f868(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  this_00 = operator_new(0xc);
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    uVar3 = FUN_00b2f7d0(this_00,param_1);
    param_1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    iVar1 = (int)uVar3;
  }
  if (iVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 0x68);
    *(int *)((int)this + 0x68) = iVar1;
    *(undefined4 *)((int)this + 0x298) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION FUN_00b2f8ac @ 00b2f8ac ////

undefined4 __thiscall FUN_00b2f8ac(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x26c) + 0x18);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(*(int *)((int)this + 0x26c) + 0x1c);
  }
  return 0;
}


//// FUNCTION FUN_00b2f8db @ 00b2f8db ////

undefined4 __thiscall FUN_00b2f8db(void *this,uint *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = *(uint **)((int)this + 0x268);
  do {
    puVar2 = puVar1;
    puVar1 = (uint *)puVar2[0x1b];
  } while ((uint *)puVar2[0x1b] != (uint *)0x0);
  if (param_1 != (uint *)0x0) {
    *param_1 = *puVar2;
  }
  if (param_2 != (int *)0x0) {
    if (puVar2[1] < *puVar2) {
      *param_2 = 0;
    }
    else {
      *param_2 = puVar2[1] - *puVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_00b2f91b @ 00b2f91b ////

void __cdecl FUN_00b2f91b(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_104 [255];
  undefined1 local_5;
  
  *(undefined4 *)(param_1 + 0x44) = 1;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = 0xd;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = "syntax error";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x278) != 9)) {
        FUN_00b33898((void *)(param_1 + 0x18),0x5dc,(undefined4 *)(param_1 + 0x278));
      }
      else {
        FUN_00b33674((void *)(param_1 + 0x18),param_1 + 0x278,0x5e0,
                     "invalid preprocessor command \'%s\'");
      }
    }
    else {
      __vsnprintf(local_104,0x100,param_2,&stack0x0000000c);
      local_5 = 0;
      FUN_00b33674((void *)(param_1 + 0x18),param_1 + 0x278,0,"%s");
    }
  }
  return;
}


//// FUNCTION FUN_00b2f9d5 @ 00b2f9d5 ////

undefined4 __thiscall FUN_00b2f9d5(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  
  *(undefined4 *)(*(int *)((int)this + 0x26c) + 0x1c) = param_1;
  if (*(int *)((int)this + 0x278) != 0xc) {
    piVar1 = (int *)(*(int *)((int)this + 0x26c) + 0x1c);
    *piVar1 = *piVar1 + -1;
  }
  if (param_2 != 0) {
    *(int *)(*(int *)((int)this + 0x26c) + 0x18) = param_2;
  }
  return 0;
}


//// FUNCTION FUN_00b2fa0e @ 00b2fa0e ////

uint __fastcall FUN_00b2fa0e(void *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  WCHAR *pWVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  char local_21c [260];
  undefined2 local_118;
  LPSTR local_14;
  undefined4 local_10;
  uint local_c;
  WCHAR *local_8;
  
  uVar2 = FUN_00b340f6(*(void **)((int)param_1 + 0x26c),*(uint *)((int)param_1 + 0x298) | 0xc,
                       (int *)((int)param_1 + 0x278));
  uVar5 = 0;
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  iVar8 = *(int *)((int)param_1 + 0x278);
  if (iVar8 == 10) {
    local_c = 0;
  }
  else {
    if (iVar8 != 0xb) {
      FUN_00b2f91b((int)param_1,"syntax error");
      return 0x80004005;
    }
    local_c = 1;
  }
  local_8 = *(WCHAR **)((int)param_1 + 0x280);
  if ((*(int *)((int)param_1 + 0x270) == 0) &&
     (*(int *)(*(int *)((int)param_1 + 0x26c) + 0x18) == 0)) {
    pcVar9 = "include interface required to support #include from resource or memory";
    iVar8 = 0x5e1;
LAB_00b2fac3:
    FUN_00b33674((void *)((int)param_1 + 0x18),(int)param_1 + 0x278,iVar8,pcVar9);
    *(undefined4 *)((int)param_1 + 0x48) = 1;
    *(undefined4 *)((int)param_1 + 0x44) = 1;
    return 0x80004005;
  }
  iVar8 = *(int *)((int)param_1 + 0x268);
  if (iVar8 != 0) {
    do {
      iVar8 = *(int *)(iVar8 + 0x6c);
      uVar5 = uVar5 + 1;
    } while (iVar8 != 0);
    if (0x1f < uVar5) {
      pcVar9 = "too many nested #includes";
      iVar8 = 0x5e2;
      goto LAB_00b2fac3;
    }
  }
  if (*(int *)((int)param_1 + 0x270) == 0) {
    GetFullPathNameA((LPCSTR)local_8,0x104,(LPSTR)&local_118,&local_14);
    pbVar3 = (byte *)&local_118;
    pWVar6 = local_8;
    do {
      bVar1 = (byte)*pWVar6;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00b2fb24:
        iVar8 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b2fb29;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)pWVar6 + 1);
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00b2fb24;
      pWVar6 = pWVar6 + 1;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_00b2fb29:
    if (iVar8 != 0) {
      __snprintf(local_21c,0x104,"%s%s",*(undefined4 *)(*(int *)((int)param_1 + 0x268) + 0x60),
                 local_8);
      GetFullPathNameA(local_21c,0x104,(LPSTR)&local_118,&local_14);
    }
    local_8 = &local_118;
  }
  iVar8 = *(int *)((int)param_1 + 0x268);
  if ((iVar8 == 0) || (*(int *)(iVar8 + 0x58) == 0)) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(iVar8 + 100);
  }
  puVar4 = operator_new(0x70);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00b2f4cd(puVar4);
  }
  if (puVar4 != (undefined4 *)0x0) {
    local_c = FUN_00b2f57c(puVar4,local_8,(LPSTR)0x0,param_1,(int)param_1 + 0x278,
                           (void *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x270),local_c,
                           local_10);
    if (-1 < (int)local_c) {
      puVar4[0x1b] = *(undefined4 *)((int)param_1 + 0x268);
      *(undefined4 **)((int)param_1 + 0x268) = puVar4;
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x48) = 1;
    *(undefined4 *)((int)param_1 + 0x44) = 1;
    FUN_00b2f55b(puVar4,1);
    return local_c;
  }
  return 0x8007000e;
}


//// FUNCTION FUN_00b2fc07 @ 00b2fc07 ////

undefined4 __fastcall FUN_00b2fc07(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_108 [256];
  uint local_8;
  
  pcVar5 = (char *)**(undefined4 **)(param_1 + 0x26c);
  FUN_00b331bf(*(undefined4 **)(param_1 + 0x26c));
  if (*(int *)(param_1 + 0x50) != 0) {
    for (; (pcVar5 < (char *)**(uint **)(param_1 + 0x26c) && ((*pcVar5 == ' ' || (*pcVar5 == '\t')))
           ); pcVar5 = pcVar5 + 1) {
    }
    local_8 = 0;
    pcVar4 = pcVar5 + 2;
    pcVar3 = pcVar5 + 1;
    do {
      pcVar2 = (char *)**(undefined4 **)(param_1 + 0x26c);
      if (pcVar2 <= pcVar5) break;
      cVar1 = *pcVar5;
      if (cVar1 == '\\') {
        if ((pcVar3 < pcVar2) && (*pcVar3 == '\n')) {
          pcVar5 = pcVar5 + 2;
          pcVar3 = pcVar3 + 2;
          pcVar4 = pcVar4 + 2;
        }
        else {
          if ((pcVar2 <= pcVar4) || ((*pcVar3 != '\r' || (*pcVar4 != '\n')))) goto LAB_00b2fc91;
          pcVar5 = pcVar5 + 3;
          pcVar3 = pcVar3 + 3;
          pcVar4 = pcVar4 + 3;
        }
      }
      else {
LAB_00b2fc91:
        if (cVar1 != '\r') {
          local_108[local_8] = cVar1;
          local_8 = local_8 + 1;
        }
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
    } while (local_8 < 0xff);
    local_108[local_8] = '\0';
    FUN_00b33674((void *)(param_1 + 0x18),param_1 + 0x278,0,"error: %s");
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return 0;
}


//// FUNCTION FUN_00b2fceb @ 00b2fceb ////

undefined4 __thiscall FUN_00b2fceb(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  
  this_00 = operator_new(0x10);
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00b2f474(this_00,param_1,*(undefined4 *)((int)this + 0x50));
  }
  if (iVar1 == 0) {
    uVar2 = 0x8007000e;
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(*(int *)((int)this + 0x268) + 0x38);
    *(int *)(*(int *)((int)this + 0x268) + 0x38) = iVar1;
    if ((*(int *)((int)this + 0x50) == 0) || (param_1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined4 *)((int)this + 0x54) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}


//// FUNCTION FUN_00b2fd4b @ 00b2fd4b ////

undefined4 __thiscall FUN_00b2fd4b(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  piVar1 = *(int **)(*(int *)((int)this + 0x268) + 0x38);
  if (piVar1 == (int *)0x0) {
    pcVar4 = "unexpected #elif";
    iVar3 = 0x5e4;
  }
  else {
    if (piVar1[2] == 0) {
      if (((param_1 == 0) || (*piVar1 != 0)) || (piVar1[1] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)((int)this + 0x54) = uVar2;
      if (param_1 != 0) {
        *piVar1 = 1;
      }
      return 0;
    }
    pcVar4 = "unexpected #elif following #else";
    iVar3 = 0x5e9;
  }
  FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,iVar3,pcVar4);
  *(undefined4 *)((int)this + 0x44) = 1;
  return 0x80004005;
}


//// FUNCTION FUN_00b2fdc8 @ 00b2fdc8 ////

undefined4 __fastcall FUN_00b2fdc8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x268) + 0x38);
  if (piVar1 == (int *)0x0) {
    pcVar4 = "unexpected #else";
    iVar3 = 0x5e5;
  }
  else {
    if (piVar1[2] == 0) {
      uVar2 = 0;
      if ((*piVar1 == 0) && (piVar1[1] != 0)) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      *piVar1 = 1;
      piVar1[2] = 1;
      return 0;
    }
    pcVar4 = "unexpected #else following #else";
    iVar3 = 0x5ea;
  }
  FUN_00b33674((void *)(param_1 + 0x18),param_1 + 0x278,iVar3,pcVar4);
  *(undefined4 *)(param_1 + 0x44) = 1;
  return 0x80004005;
}


//// FUNCTION FUN_00b2fe32 @ 00b2fe32 ////

undefined4 __fastcall FUN_00b2fe32(int param_1)

{
  void *this;
  
  this = *(void **)(*(int *)(param_1 + 0x268) + 0x38);
  if (this == (void *)0x0) {
    FUN_00b33674((void *)(param_1 + 0x18),param_1 + 0x278,0x5e6,"unexpected #endif");
    *(undefined4 *)(param_1 + 0x44) = 1;
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x268) + 0x38) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00b2f4ac(this,1);
  return 0;
}


//// FUNCTION FUN_00b2fe8a @ 00b2fe8a ////

int __fastcall FUN_00b2fe8a(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char *local_8;
  
  iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                       (int *)(param_1 + 0x278));
  if (iVar2 < 0) goto LAB_00b2ffbe;
  iVar2 = *(int *)(param_1 + 0x278);
  if (iVar2 == 1) {
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)(param_1 + 0x280);
    pcVar5 = "(";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) goto LAB_00b2ffa6;
    piVar1 = (int *)(param_1 + 0x278);
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),piVar1);
    if (iVar2 < 0) goto LAB_00b2ffbe;
    if (*piVar1 == 9) {
      local_8 = *(char **)(param_1 + 0x280);
      iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),piVar1);
      if (iVar2 < 0) goto LAB_00b2ffbe;
    }
    else {
      local_8 = (char *)0x0;
    }
    iVar2 = *piVar1;
    if (iVar2 != 1) goto LAB_00b2ffa6;
    iVar3 = 2;
    bVar6 = true;
    pcVar4 = (char *)(param_1 + 0x280);
    pcVar5 = ")";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) goto LAB_00b2ffa6;
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b2ffbe;
    iVar2 = *(int *)(param_1 + 0x278);
    if ((iVar2 != 0xc) && (iVar2 != 0xd)) goto LAB_00b2ffa6;
    if (local_8 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      iVar3 = 10;
      bVar6 = true;
      pcVar4 = local_8;
      pcVar5 = "row_major";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        *(undefined4 *)(param_1 + 0x38) = 0x400;
      }
      else {
        iVar3 = 0xd;
        bVar6 = true;
        pcVar4 = "column_major";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *local_8 == *pcVar4;
          local_8 = local_8 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar6);
        if (!bVar6) goto LAB_00b2ffa6;
        *(undefined4 *)(param_1 + 0x38) = 0x800;
      }
    }
  }
  else {
LAB_00b2ffa6:
    if ((iVar2 != 0xc) && (iVar2 != 0xd)) {
      FUN_00b331bf(*(undefined4 **)(param_1 + 0x26c));
    }
  }
  iVar2 = 0;
LAB_00b2ffbe:
  *(undefined4 *)(param_1 + 0x40) = 1;
  return iVar2;
}


//// FUNCTION FUN_00b2ffc9 @ 00b2ffc9 ////

void __fastcall FUN_00b2ffc9(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  uint local_18;
  uint local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (uint *)0x0;
  iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                       (int *)(param_1 + 0x278));
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x278) == 1) {
      iVar1 = 2;
      bVar7 = true;
      pcVar5 = (char *)(param_1 + 0x280);
      pcVar4 = "(";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar7 = *pcVar5 == *pcVar4;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar7);
      if (bVar7) {
        iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                             (undefined4 *)(param_1 + 0x278));
        if (iVar1 < 0) goto LAB_00b30315;
        local_8 = 0;
        do {
          do {
            do {
              iVar1 = *(int *)(param_1 + 0x278);
              if (iVar1 == 1) {
                iVar3 = 2;
                bVar7 = true;
                pcVar5 = (char *)(param_1 + 0x280);
                pcVar4 = ")";
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  bVar7 = *pcVar5 == *pcVar4;
                  pcVar5 = pcVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (bVar7);
                if (bVar7) {
                  iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                                       (int *)(param_1 + 0x278));
                  if (iVar1 < 0) goto LAB_00b30315;
                  iVar1 = *(int *)(param_1 + 0x278);
                  if ((iVar1 == 0xc) || (iVar1 == 0xd)) {
                    local_18 = 0;
                    if (local_8 != 0) goto LAB_00b30381;
                    goto LAB_00b30315;
                  }
                  goto LAB_00b302f8;
                }
              }
              if (iVar1 == 9) {
                pcVar5 = *(char **)(param_1 + 0x280);
                iVar1 = 5;
                bVar7 = true;
                pcVar4 = pcVar5;
                pcVar6 = "once";
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar7 = *pcVar4 == *pcVar6;
                  pcVar4 = pcVar4 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (bVar7);
                if (bVar7) {
                  local_14 = 0x10;
                }
                else {
                  iVar1 = 6;
                  bVar7 = true;
                  pcVar4 = pcVar5;
                  pcVar6 = "error";
                  do {
                    if (iVar1 == 0) break;
                    iVar1 = iVar1 + -1;
                    bVar7 = *pcVar4 == *pcVar6;
                    pcVar4 = pcVar4 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (bVar7);
                  if (bVar7) {
                    local_14 = 0xf;
                  }
                  else {
                    iVar1 = 8;
                    bVar7 = true;
                    pcVar4 = pcVar5;
                    pcVar6 = "disable";
                    do {
                      if (iVar1 == 0) break;
                      iVar1 = iVar1 + -1;
                      bVar7 = *pcVar4 == *pcVar6;
                      pcVar4 = pcVar4 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (bVar7);
                    if (bVar7) {
                      local_14 = 0;
                    }
                    else {
                      iVar1 = 8;
                      bVar7 = true;
                      pcVar4 = "default";
                      do {
                        if (iVar1 == 0) break;
                        iVar1 = iVar1 + -1;
                        bVar7 = *pcVar5 == *pcVar4;
                        pcVar5 = pcVar5 + 1;
                        pcVar4 = pcVar4 + 1;
                      } while (bVar7);
                      if (!bVar7) goto LAB_00b302f8;
                      local_14 = 0xff;
                    }
                  }
                }
              }
              else if ((((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) ||
                      ((local_14 = *(uint *)(param_1 + 0x280), local_14 == 0 || (4 < local_14))))
              goto LAB_00b302f8;
              iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                                   (int *)(param_1 + 0x278));
              if (iVar1 < 0) goto LAB_00b30315;
              if (*(int *)(param_1 + 0x278) != 1) goto LAB_00b302f8;
              iVar1 = 2;
              bVar7 = true;
              pcVar5 = (char *)(param_1 + 0x280);
              pcVar4 = ":";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *pcVar5 == *pcVar4;
                pcVar5 = pcVar5 + 1;
                pcVar4 = pcVar4 + 1;
              } while (bVar7);
              if (!bVar7) goto LAB_00b302f8;
              iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                                   (undefined4 *)(param_1 + 0x278));
              if (iVar1 < 0) goto LAB_00b30315;
              do {
                do {
                  iVar1 = *(int *)(param_1 + 0x278);
                  if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) goto LAB_00b302f8;
                  if (local_8 == (~local_8 + 1 & local_8)) {
                    if (local_8 == 0) {
                      iVar1 = 1;
                    }
                    else {
                      iVar1 = local_8 * 2;
                    }
                    puVar2 = operator_new(iVar1 << 2);
                    if (puVar2 != (undefined4 *)0x0) {
                      for (local_8 = local_8 & 0x3fffffff; local_8 != 0; local_8 = local_8 - 1) {
                        *puVar2 = *local_c;
                        local_c = local_c + 1;
                        puVar2 = puVar2 + 1;
                      }
                      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *(undefined1 *)puVar2 = *(undefined1 *)local_c;
                        local_c = (undefined4 *)((int)local_c + 1);
                        puVar2 = (undefined4 *)((int)puVar2 + 1);
                      }
                    /* WARNING: Subroutine does not return */
                      _free((void *)0x0);
                    }
                    goto LAB_00b30315;
                  }
                  *(undefined4 *)(local_8 * 4) = *(undefined4 *)(param_1 + 0x280);
                  *(uint *)(local_8 * 4) = local_14;
                  local_8 = local_8 + 1;
                  iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                                       (int *)(param_1 + 0x278));
                  if (iVar1 < 0) goto LAB_00b30315;
                } while (*(int *)(param_1 + 0x278) != 1);
                iVar1 = 2;
                bVar7 = true;
                pcVar5 = (char *)(param_1 + 0x280);
                pcVar4 = ";";
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar7 = *pcVar5 == *pcVar4;
                  pcVar5 = pcVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (bVar7);
                if (bVar7) break;
                iVar1 = 2;
                bVar7 = true;
                pcVar5 = (char *)(param_1 + 0x280);
                pcVar4 = ")";
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar7 = *pcVar5 == *pcVar4;
                  pcVar5 = pcVar5 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (bVar7);
              } while (!bVar7);
              iVar1 = 2;
              bVar7 = true;
              pcVar5 = (char *)(param_1 + 0x280);
              pcVar4 = ";";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar7 = *pcVar5 == *pcVar4;
                pcVar5 = pcVar5 + 1;
                pcVar4 = pcVar4 + 1;
              } while (bVar7);
            } while (!bVar7);
            iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                                 (int *)(param_1 + 0x278));
            if (iVar1 < 0) goto LAB_00b30315;
          } while (*(int *)(param_1 + 0x278) != 1);
          iVar1 = 2;
          bVar7 = true;
          pcVar5 = (char *)(param_1 + 0x280);
          pcVar4 = ")";
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar7 = *pcVar5 == *pcVar4;
            pcVar5 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar7);
        } while (!bVar7);
      }
    }
LAB_00b302f8:
    if ((*(int *)(param_1 + 0x278) != 0xc) && (*(int *)(param_1 + 0x278) != 0xd)) {
      FUN_00b331bf(*(undefined4 **)(param_1 + 0x26c));
    }
  }
  goto LAB_00b30315;
  while( true ) {
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
    if (local_8 <= local_18) break;
LAB_00b30381:
    iVar1 = FUN_00b3360a((void *)(param_1 + 0x18),*local_10,*local_10);
    if (iVar1 < 0) break;
  }
LAB_00b30315:
                    /* WARNING: Subroutine does not return */
  _free((void *)0x0);
}


//// FUNCTION FUN_00b303b1 @ 00b303b1 ////

int __fastcall FUN_00b303b1(int param_1)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  bool bVar8;
  double local_38 [4];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                       (int *)(param_1 + 0x278));
  if (iVar2 < 0) goto LAB_00b306bf;
  if (*(int *)(param_1 + 0x278) == 1) {
    iVar2 = 2;
    bVar8 = true;
    pcVar4 = (char *)(param_1 + 0x280);
    pcVar6 = "(";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (!bVar8) goto LAB_00b306a1;
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b306bf;
    if (*(int *)(param_1 + 0x278) != 9) goto LAB_00b306a1;
    local_10 = *(undefined4 *)(param_1 + 0x280);
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b306bf;
    if (*(int *)(param_1 + 0x278) != 1) goto LAB_00b306a1;
    iVar2 = 2;
    bVar8 = true;
    pcVar4 = (char *)(param_1 + 0x280);
    pcVar6 = ",";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (!bVar8) goto LAB_00b306a1;
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b306bf;
    if (*(int *)(param_1 + 0x278) != 9) goto LAB_00b306a1;
    local_14 = *(undefined4 *)(param_1 + 0x280);
    local_8 = (undefined4 *)0x0;
    do {
      local_c = 0;
      iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                           (int *)(param_1 + 0x278));
      if (iVar2 < 0) goto LAB_00b306bf;
      if (*(int *)(param_1 + 0x278) != 1) goto LAB_00b306a1;
      iVar2 = 2;
      bVar8 = true;
      pcVar4 = (char *)(param_1 + 0x280);
      pcVar6 = ",";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *pcVar4 == *pcVar6;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (!bVar8) goto LAB_00b306a1;
      iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                           (int *)(param_1 + 0x278));
      if (iVar2 < 0) goto LAB_00b306bf;
      if (*(int *)(param_1 + 0x278) == 1) {
        iVar2 = 2;
        bVar8 = true;
        pcVar4 = (char *)(param_1 + 0x280);
        pcVar6 = "-";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar8 = *pcVar4 == *pcVar6;
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar8);
        if (bVar8) {
          local_c = 1;
          iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                               (undefined4 *)(param_1 + 0x278));
          if (iVar2 < 0) goto LAB_00b306bf;
        }
      }
      iVar2 = *(int *)(param_1 + 0x278);
      if (iVar2 == 2) {
LAB_00b30589:
        dVar1 = (double)*(int *)(param_1 + 0x280);
        pdVar3 = local_38 + (int)local_8;
        if (*(int *)(param_1 + 0x280) < 0) {
          dVar1 = dVar1 + 4294967296.0;
        }
      }
      else if (iVar2 == 3) {
        dVar1 = (double)*(int *)(param_1 + 0x280);
        pdVar3 = local_38 + (int)local_8;
      }
      else {
        if (iVar2 == 4) goto LAB_00b30589;
        if ((iVar2 < 5) || (8 < iVar2)) goto LAB_00b306a1;
        dVar1 = *(double *)(param_1 + 0x280);
        pdVar3 = local_38 + (int)local_8;
      }
      bVar8 = local_c != 0;
      *pdVar3 = dVar1;
      if (bVar8) {
        *pdVar3 = -*pdVar3;
      }
      local_8 = (undefined4 *)((int)local_8 + 1);
    } while (local_8 < 4);
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b306bf;
    if (*(int *)(param_1 + 0x278) != 1) goto LAB_00b306a1;
    iVar2 = 2;
    bVar8 = true;
    pcVar4 = (char *)(param_1 + 0x280);
    pcVar6 = ")";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar8);
    if (!bVar8) goto LAB_00b306a1;
    iVar2 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                         (int *)(param_1 + 0x278));
    if (iVar2 < 0) goto LAB_00b306bf;
    iVar2 = *(int *)(param_1 + 0x278);
    if ((iVar2 != 0xc) && (iVar2 != 0xd)) goto LAB_00b306a1;
    local_8 = operator_new(0x30);
    if (local_8 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)0x0;
    }
    else {
      local_8[10] = 0;
    }
    if (local_8 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
      goto LAB_00b306bf;
    }
    *local_8 = local_10;
    local_8[1] = local_14;
    pdVar3 = local_38;
    puVar7 = local_8 + 2;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *(undefined4 *)pdVar3;
      pdVar3 = (double *)((int)pdVar3 + 4);
      puVar7 = puVar7 + 1;
    }
    piVar5 = (int *)(param_1 + 0x3c);
    iVar2 = *piVar5;
    while ((iVar2 != 0 && (iVar2 = __stricmp(*(char **)(iVar2 + 4),(char *)local_8[1]), iVar2 < 0)))
    {
      piVar5 = (int *)(*piVar5 + 0x28);
      iVar2 = *piVar5;
    }
    local_8[10] = *piVar5;
    *piVar5 = (int)local_8;
  }
  else {
LAB_00b306a1:
    if ((*(int *)(param_1 + 0x278) != 0xc) && (*(int *)(param_1 + 0x278) != 0xd)) {
      FUN_00b331bf(*(undefined4 **)(param_1 + 0x26c));
    }
  }
  iVar2 = 0;
LAB_00b306bf:
  *(undefined4 *)(param_1 + 0x40) = 1;
  return iVar2;
}


//// FUNCTION FUN_00b306ca @ 00b306ca ////

uint FUN_00b306ca(char *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = 0x632d80f;
  if ((param_1 == (char *)0x0) || (cVar2 = *param_1, cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    do {
      uVar1 = uVar1 * 0x13 + (int)cVar2;
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    } while (cVar2 != '\0');
    uVar1 = uVar1 % 0x7f;
  }
  return uVar1;
}


//// FUNCTION FUN_00b30701 @ 00b30701 ////

undefined4 FUN_00b30701(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar3 = (byte *)*param_1;
  pbVar9 = (byte *)*param_2;
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00b30738:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00b3073d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00b30738;
    pbVar3 = pbVar3 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00b3073d:
  if (iVar4 == 0) {
    iVar4 = param_1[1];
    iVar2 = param_2[1];
    iVar5 = iVar4;
    iVar8 = iVar2;
    iVar6 = iVar2;
    if (iVar4 != 0) {
      do {
        iVar6 = 0;
        if (iVar8 == 0) break;
        iVar5 = *(int *)(iVar5 + 0xc);
        iVar8 = *(int *)(iVar8 + 0xc);
        iVar6 = iVar8;
      } while (iVar5 != 0);
      if (iVar5 != 0) {
        return 0;
      }
    }
    if (iVar6 == 0) {
      iVar5 = param_1[2];
      iVar8 = param_2[2];
LAB_00b30954:
      if (iVar5 != 0) {
        if ((iVar8 == 0) || (iVar6 = *(int *)(iVar5 + 0x10), iVar6 != *(int *)(iVar8 + 0x10)))
        goto LAB_00b307e0;
        if (8 < iVar6) {
          if (iVar6 == 9) {
            bVar11 = false;
            param_1 = (undefined4 *)0x1;
            for (iVar6 = iVar4; iVar10 = iVar2, iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
              pbVar3 = *(byte **)(iVar6 + 0x18);
              pbVar9 = *(byte **)(iVar5 + 0x18);
              do {
                bVar1 = *pbVar9;
                bVar12 = bVar1 < *pbVar3;
                if (bVar1 != *pbVar3) {
LAB_00b3088d:
                  iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00b30892;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar12 = bVar1 < pbVar3[1];
                if (bVar1 != pbVar3[1]) goto LAB_00b3088d;
                pbVar9 = pbVar9 + 2;
                pbVar3 = pbVar3 + 2;
              } while (bVar1 != 0);
              iVar7 = 0;
LAB_00b30892:
              if (iVar7 == 0) {
                bVar11 = true;
                break;
              }
              param_1 = (undefined4 *)((int)param_1 + 1);
            }
            do {
              param_1 = (undefined4 *)((int)param_1 + -1);
              if (iVar10 == 0) goto LAB_00b308f8;
              pbVar3 = *(byte **)(iVar10 + 0x18);
              pbVar9 = *(byte **)(iVar8 + 0x18);
              do {
                bVar1 = *pbVar9;
                bVar12 = bVar1 < *pbVar3;
                if (bVar1 != *pbVar3) {
LAB_00b308d9:
                  iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00b308de;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar12 = bVar1 < pbVar3[1];
                if (bVar1 != pbVar3[1]) goto LAB_00b308d9;
                pbVar9 = pbVar9 + 2;
                pbVar3 = pbVar3 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00b308de:
              if (iVar6 == 0) {
                bVar11 = true;
                goto LAB_00b308f8;
              }
              iVar10 = *(int *)(iVar10 + 0xc);
            } while( true );
          }
          if ((iVar6 < 10) || (0xb < iVar6)) goto LAB_00b3094e;
          pbVar3 = *(byte **)(iVar8 + 0x18);
          pbVar9 = *(byte **)(iVar5 + 0x18);
          do {
            bVar1 = *pbVar9;
            bVar11 = bVar1 < *pbVar3;
            if (bVar1 != *pbVar3) goto LAB_00b30935;
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar11 = bVar1 < pbVar3[1];
            if (bVar1 != pbVar3[1]) goto LAB_00b30935;
            pbVar9 = pbVar9 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar1 != 0);
          goto LAB_00b3084c;
        }
        if (iVar6 < 5) {
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              if ((((*(char *)(iVar5 + 0x18) != *(char *)(iVar8 + 0x18)) ||
                   (*(char *)(iVar5 + 0x19) != *(char *)(iVar8 + 0x19))) ||
                  (*(char *)(iVar5 + 0x1a) != *(char *)(iVar8 + 0x1a))) ||
                 (*(char *)(iVar5 + 0x1b) != *(char *)(iVar8 + 0x1b))) goto LAB_00b307e0;
            }
            else if ((1 < iVar6) && (iVar6 < 5)) goto LAB_00b307ac;
            goto LAB_00b3094e;
          }
LAB_00b307ac:
          bVar11 = *(int *)(iVar5 + 0x18) == *(int *)(iVar8 + 0x18);
          goto LAB_00b30946;
        }
        if (*(double *)(iVar5 + 0x18) != *(double *)(iVar8 + 0x18)) goto LAB_00b307e0;
        goto LAB_00b3094e;
      }
LAB_00b307e8:
      if (iVar8 == 0) {
        return 1;
      }
    }
  }
  return 0;
LAB_00b308f8:
  if (bVar11) {
    bVar11 = param_1 == (undefined4 *)0x0;
    goto LAB_00b30946;
  }
  pbVar3 = *(byte **)(iVar8 + 0x18);
  pbVar9 = *(byte **)(iVar5 + 0x18);
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) goto LAB_00b30935;
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_00b30935;
    pbVar9 = pbVar9 + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
LAB_00b3084c:
  iVar6 = 0;
  goto LAB_00b3093a;
LAB_00b30935:
  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
LAB_00b3093a:
  bVar11 = iVar6 == 0;
LAB_00b30946:
  if (!bVar11) {
LAB_00b307e0:
    if (iVar5 != 0) {
      return 0;
    }
    goto LAB_00b307e8;
  }
LAB_00b3094e:
  iVar5 = *(int *)(iVar5 + 0xc);
  iVar8 = *(int *)(iVar8 + 0xc);
  goto LAB_00b30954;
}


//// FUNCTION FUN_00b3096d @ 00b3096d ////

bool __thiscall FUN_00b3096d(void *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar2 = FUN_00b306ca((char *)param_1);
  puVar5 = *(undefined4 **)((int)this + uVar2 * 4 + 0x6c);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      return false;
    }
    pbVar3 = (byte *)*puVar5;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00b309ac:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b309b1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00b309ac;
      pbVar6 = pbVar6 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00b309b1:
    if (iVar4 < 0) {
      return false;
    }
    if (iVar4 == 0) {
      if (puVar5[4] != 0) {
        return true;
      }
      iVar4 = puVar5[2];
      puVar5[4] = 1;
      while ((iVar4 != 0 &&
             ((*(int *)(iVar4 + 0x10) != 9 ||
              (bVar7 = FUN_00b3096d(this,*(byte **)(iVar4 + 0x18)),
              CONCAT31(extraout_var,bVar7) == 0))))) {
        iVar4 = *(int *)(iVar4 + 0xc);
      }
      puVar5[4] = 0;
      return iVar4 != 0;
    }
    puVar5 = (undefined4 *)puVar5[3];
  } while( true );
}


//// FUNCTION FUN_00b30a06 @ 00b30a06 ////

undefined4 __thiscall FUN_00b30a06(void *this,byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  
  bVar2 = FUN_00b3096d(this,param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    uVar3 = FUN_00b306ca((char *)param_1);
    for (puVar6 = *(undefined4 **)((int)this + uVar3 * 4 + 0x6c); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[3]) {
      pbVar5 = (byte *)*puVar6;
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar7;
        bVar2 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b30a56:
          iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
          goto LAB_00b30a5b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar2 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b30a56;
        pbVar7 = pbVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b30a5b:
      if (iVar4 < 0) {
        return 0;
      }
      if (iVar4 == 0) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = puVar6[1];
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = puVar6[2];
        }
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00b30a8d @ 00b30a8d ////

undefined4 FUN_00b30a8d(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_010cd918;
  DAT_010cd918 = param_1;
  return uVar1;
}


//// FUNCTION FUN_00b30aa4 @ 00b30aa4 ////

void FUN_00b30aa4(int param_1)

{
  FUN_00b688f9(DAT_010cd918,param_1,0x10);
  return;
}


//// FUNCTION FUN_00b30ac0 @ 00b30ac0 ////

void FUN_00b30ac0(char *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = false;
  bVar2 = false;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 == '\"') {
      if (param_3 != 0) {
        *(undefined1 *)(iVar3 + param_3) = 0x5c;
      }
      iVar3 = iVar3 + 1;
      if (!bVar1) {
        bVar2 = !bVar2;
      }
    }
    bVar1 = false;
    if ((bVar2) && (*param_1 == '\\')) {
      if (param_3 != 0) {
        *(undefined1 *)(iVar3 + param_3) = 0x5c;
      }
      iVar3 = iVar3 + 1;
      bVar1 = true;
    }
    if (param_3 != 0) {
      *(char *)(iVar3 + param_3) = *param_1;
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00b30b27 @ 00b30b27 ////

int __thiscall FUN_00b30b27(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x44) == 0) {
      FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0,
                   "internal error: production failed");
      *(undefined4 *)((int)this + 0x44) = 1;
    }
    param_1 = 0;
  }
  return param_1;
}


//// FUNCTION FUN_00b30b62 @ 00b30b62 ////

void __fastcall FUN_00b30b62(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0xc);
  if (_Memory != (void *)0x0) {
    FUN_00b30b62((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00b30b7c @ 00b30b7c ////

void * __thiscall FUN_00b30b7c(void *this,byte param_1)

{
  FUN_00b30b62((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00b30b9d @ 00b30b9d ////

void __fastcall FUN_00b30b9d(int param_1)

{
  int iVar1;
  
  FUN_00b2f3aa();
  *(undefined4 *)(param_1 + 0x2a4) = 1;
  iVar1 = param_1;
  *(int *)(param_1 + 0x2a8) = DAT_010cd918;
  DAT_010cd918 = iVar1;
  return;
}


//// FUNCTION FUN_00b30bc4 @ 00b30bc4 ////

void __fastcall FUN_00b30bc4(int param_1)

{
  DAT_010cd918 = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  FUN_00b2f3ff();
  return;
}


//// FUNCTION FUN_00b30bdb @ 00b30bdb ////

undefined4 __thiscall FUN_00b30bdb(void *this,byte *param_1)

{
  int *piVar1;
  byte bVar2;
  void *this_00;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar3 = FUN_00b306ca((char *)param_1);
  piVar1 = (int *)((int)this + uVar3 * 4 + 0x6c);
  iVar4 = *piVar1;
  do {
    if (iVar4 == 0) {
      return 0;
    }
    pbVar5 = *(byte **)*piVar1;
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      bVar7 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_00b30c1f:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b30c24;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar7 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_00b30c1f;
      pbVar6 = pbVar6 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_00b30c24:
    if (iVar4 < 0) {
      return 0;
    }
    if (iVar4 == 0) {
      this_00 = (void *)*piVar1;
      *piVar1 = *(int *)((int)this_00 + 0xc);
      *(undefined4 *)((int)this_00 + 0xc) = 0;
      FUN_00b30b7c(this_00,1);
      return 0;
    }
    piVar1 = (undefined4 *)*piVar1 + 3;
    iVar4 = *piVar1;
  } while( true );
}


//// FUNCTION FUN_00b30c4f @ 00b30c4f ////

int __fastcall FUN_00b30c4f(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar1 = FUN_00b340f6(*(void **)(param_1 + 0x26c),*(uint *)(param_1 + 0x298),
                       (int *)(param_1 + 0x278));
  if (-1 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x278);
    if (iVar1 == 9) {
      pcVar4 = *(char **)(param_1 + 0x280);
      iVar2 = 0xc;
      bVar6 = true;
      pcVar3 = pcVar4;
      pcVar5 = "pack_matrix";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        iVar1 = FUN_00b2fe8a(param_1);
        return iVar1;
      }
      iVar2 = 8;
      bVar6 = true;
      pcVar3 = pcVar4;
      pcVar5 = "warning";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        iVar1 = FUN_00b2ffc9(param_1);
        return iVar1;
      }
      iVar2 = 4;
      bVar6 = true;
      pcVar3 = "def";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar3;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar6);
      if (bVar6) {
        iVar1 = FUN_00b303b1(param_1);
        return iVar1;
      }
    }
    if ((iVar1 != 0xc) && (iVar1 != 0xd)) {
      FUN_00b331bf(*(undefined4 **)(param_1 + 0x26c));
    }
    iVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  return iVar1;
}


//// FUNCTION FUN_00b30cf6 @ 00b30cf6 ////

undefined4 __thiscall FUN_00b30cf6(void *this,undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  void *this_00;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar3 = FUN_00b306ca((char *)*param_1);
  piVar1 = (int *)((int)this + uVar3 * 4 + 0x6c);
  iVar5 = *piVar1;
  do {
    if (iVar5 == 0) {
LAB_00b30d9e:
      param_1[3] = *piVar1;
      *piVar1 = (int)param_1;
      return 0;
    }
    pbVar4 = *(byte **)*piVar1;
    pbVar6 = (byte *)*param_1;
    do {
      bVar2 = *pbVar6;
      bVar7 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_00b30d43:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00b30d48;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar7 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_00b30d43;
      pbVar6 = pbVar6 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00b30d48:
    if (iVar5 < 0) goto LAB_00b30d9e;
    if (iVar5 == 0) {
      iVar5 = FUN_00b30701((undefined4 *)*piVar1,param_1);
      if (iVar5 == 0) {
        FUN_00b3373b((void *)((int)this + 0x18),(int)this + 0x278,0x5ef,
                     "\'%s\' : macro redefinition");
      }
      this_00 = (void *)*piVar1;
      *piVar1 = *(int *)((int)this_00 + 0xc);
      *(undefined4 *)((int)this_00 + 0xc) = 0;
      FUN_00b30b7c(this_00,1);
      goto LAB_00b30d9e;
    }
    piVar1 = (undefined4 *)*piVar1 + 3;
    iVar5 = *piVar1;
  } while( true );
}


//// FUNCTION FUN_00b30dad @ 00b30dad ////

undefined4 __thiscall FUN_00b30dad(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  void *local_8;
  
  iVar1 = 9;
  bVar4 = true;
  pbVar2 = (byte *)"__LINE__";
  pbVar3 = param_1;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pbVar2 == *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return *(undefined4 *)((int)this + 0x28c);
  }
  local_8 = this;
  iVar1 = FUN_00b30a06(this,param_1,&param_1,&local_8);
  if (iVar1 != 0) {
    if (param_1 != (byte *)0x0) {
      FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0x5ed,
                   "functional defines in preprocessor expressions not yet implemented");
      return 1;
    }
    if ((((local_8 != (void *)0x0) && (*(int *)((int)local_8 + 0xc) == 0)) &&
        (1 < *(int *)((int)local_8 + 0x10))) && (*(int *)((int)local_8 + 0x10) < 5)) {
      return *(undefined4 *)((int)local_8 + 0x18);
    }
    FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0x5ee,
                 "invalid or unsupported integer constant expression");
  }
  return 0;
}


//// FUNCTION FUN_00b30e54 @ 00b30e54 ////

undefined4 __thiscall FUN_00b30e54(void *this,int *param_1,int param_2,int param_3)

{
  byte bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  byte *pbVar13;
  char *pcVar14;
  int *piVar15;
  byte *pbVar16;
  int iVar17;
  char *pcVar18;
  bool bVar19;
  undefined4 local_7c [14];
  undefined4 local_44 [8];
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  local_20 = 0;
  local_10 = 0;
  if (param_2 == 0) {
    piVar6 = &local_10;
    for (; param_3 != 0; param_3 = *(int *)(param_3 + 0xc)) {
      local_8 = this;
      pvVar2 = (void *)FUN_00b30aa4(0x30);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_00b68cb7(pvVar2,(undefined4 *)(param_3 + 0x10));
      }
      *piVar6 = (int)puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      piVar6 = puVar3 + 3;
      this = local_8;
    }
    *piVar6 = *(int *)((int)this + 100);
    *(int *)((int)this + 100) = local_10;
  }
  else {
    iVar8 = *(int *)((int)this + 100);
    local_8 = this;
    if (iVar8 == 0) {
      puVar3 = *(undefined4 **)((int)this + 0x26c);
      pcVar5 = (char *)*puVar3;
      if (pcVar5 < (char *)puVar3[1]) {
        do {
          cVar11 = *pcVar5;
          if ((cVar11 != ' ') && ((cVar11 < '\t' || ('\r' < cVar11)))) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < *(char **)(*(int *)((int)this + 0x26c) + 4));
        if ((pcVar5 < (char *)puVar3[1]) && (*pcVar5 != '(')) {
          return 0;
        }
      }
      piVar6 = (int *)((int)this + 0x278);
      local_14 = piVar6;
      iVar8 = FUN_00b340f6(puVar3,*(uint *)((int)this + 0x298),piVar6);
      if (iVar8 < 0) {
        return 0;
      }
      if (*piVar6 != 1) {
        return 0;
      }
      local_1c = (int *)((int)local_8 + 0x280);
      iVar8 = 2;
      bVar19 = true;
      pcVar5 = (char *)local_1c;
      pcVar14 = "(";
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar19 = *pcVar5 == *pcVar14;
        pcVar5 = pcVar5 + 1;
        pcVar14 = pcVar14 + 1;
      } while (bVar19);
      if (!bVar19) {
        return 0;
      }
    }
    else {
      local_14 = (int *)((int)this + 0x278);
      piVar6 = (int *)(iVar8 + 0x10);
      piVar4 = local_14;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar4 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar4 = piVar4 + 1;
      }
      if (*local_14 != 1) {
        return 0;
      }
      local_1c = (int *)((int)this + 0x280);
      iVar7 = 2;
      bVar19 = true;
      pcVar5 = (char *)local_1c;
      pcVar14 = "(";
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar19 = *pcVar5 == *pcVar14;
        pcVar5 = pcVar5 + 1;
        pcVar14 = pcVar14 + 1;
      } while (bVar19);
      if (!bVar19) {
        return 0;
      }
      *(undefined4 *)((int)this + 100) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(iVar8 + 0xc) = 0;
    }
    local_18 = (int *)0x0;
    local_24 = &local_20;
    local_c = 1;
    pvVar2 = local_8;
    do {
      piVar6 = local_14;
      iVar8 = *(int *)((int)pvVar2 + 100);
      if (iVar8 == 0) {
        iVar8 = FUN_00b340f6(*(void **)((int)pvVar2 + 0x26c),*(uint *)((int)pvVar2 + 0x298),local_14
                            );
        pvVar2 = local_8;
        if (iVar8 < 0) {
          return 0;
        }
      }
      else {
        piVar4 = (int *)(iVar8 + 0x10);
        piVar15 = local_14;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar15 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar15 = piVar15 + 1;
        }
        *(undefined4 *)((int)pvVar2 + 100) = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)(iVar8 + 0xc) = 0;
      }
      piVar4 = local_24;
      if (*piVar6 == 0xd) {
        FUN_00b33674((void *)((int)pvVar2 + 0x18),(int)param_1,0x5eb,
                     "unexpected end of file in macro expansion");
        return 0;
      }
      if (*local_24 == 0) {
        pvVar2 = (void *)FUN_00b30aa4(0x14);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00b68aae(pvVar2,0,0,&DAT_00d8e920);
        }
        *piVar4 = (int)puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        local_18 = puVar3 + 2;
        pvVar2 = local_8;
      }
      if ((((local_c == 1) && (*piVar6 == 1)) &&
          (((char)*local_1c == ',' || ((char)*local_1c == ')')))) &&
         (*(char *)((int)pvVar2 + 0x281) == '\0')) {
        local_24 = (int *)(*piVar4 + 0xc);
      }
      else {
        pvVar2 = (void *)FUN_00b30aa4(0x30);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_00b68cb7(pvVar2,piVar6);
        }
        *local_18 = (int)puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        local_18 = puVar3 + 3;
        pvVar2 = local_8;
      }
      if ((*piVar6 == 1) && (*(char *)((int)pvVar2 + 0x281) == '\0')) {
        cVar11 = (char)*local_1c;
        if (cVar11 == '(') {
LAB_00b310b4:
          local_c = local_c + 1;
        }
        else {
          if (cVar11 != ')') {
            if (cVar11 == '[') goto LAB_00b310b4;
            if (cVar11 != ']') {
              if (cVar11 == '{') goto LAB_00b310b4;
              if (cVar11 != '}') goto LAB_00b310b7;
            }
          }
          local_c = local_c + -1;
        }
      }
LAB_00b310b7:
      iVar7 = local_20;
      iVar8 = param_2;
    } while (local_c != 0);
    do {
      if ((iVar7 == 0) || (*(int *)(iVar7 + 8) == 0)) break;
      iVar8 = *(int *)(iVar8 + 0xc);
      iVar7 = *(int *)(iVar7 + 0xc);
    } while (iVar8 != 0);
    if ((iVar8 != 0) || (iVar7 != 0)) {
      FUN_00b33674((void *)((int)pvVar2 + 0x18),(int)param_1,0x5ec,
                   "not enough actual parameters for macro \'%s\'");
      return 0;
    }
    param_1 = &local_10;
    local_c = 0;
    local_14 = (int *)0x0;
    local_1c = (int *)0x0;
    for (local_24 = (int *)param_3; local_24 != (int *)0x0;
        local_24 = *(int **)((int)local_24 + 0xc)) {
      piVar6 = (int *)((int)local_24 + 0x10);
      local_18 = param_1;
      if ((local_c == 0) && (local_14 == (int *)0x0)) {
        if (*piVar6 != 1) {
LAB_00b31161:
          if (*piVar6 == 1) {
            iVar8 = 3;
            bVar19 = true;
            pcVar5 = (char *)((int)local_24 + 0x18);
            pcVar14 = "#@";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar19 = *pcVar5 == *pcVar14;
              pcVar5 = pcVar5 + 1;
              pcVar14 = pcVar14 + 1;
            } while (bVar19);
            if (bVar19) {
              local_14 = (int *)0x1;
              local_1c = piVar6;
              goto LAB_00b3137d;
            }
          }
          goto LAB_00b31181;
        }
        iVar8 = 2;
        bVar19 = true;
        pcVar5 = (char *)((int)local_24 + 0x18);
        pcVar14 = "#";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar19 = *pcVar5 == *pcVar14;
          pcVar5 = pcVar5 + 1;
          pcVar14 = pcVar14 + 1;
        } while (bVar19);
        if (!bVar19) goto LAB_00b31161;
        local_c = 1;
        local_1c = piVar6;
      }
      else {
LAB_00b31181:
        iVar8 = param_2;
        param_3 = local_20;
        if (*piVar6 == 9) {
          do {
            pbVar16 = *(byte **)((int)local_24 + 0x18);
            pbVar13 = *(byte **)(iVar8 + 0x18);
            do {
              bVar1 = *pbVar13;
              bVar19 = bVar1 < *pbVar16;
              if (bVar1 != *pbVar16) {
LAB_00b311bb:
                iVar7 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                goto LAB_00b311c0;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar19 = bVar1 < pbVar16[1];
              if (bVar1 != pbVar16[1]) goto LAB_00b311bb;
              pbVar13 = pbVar13 + 2;
              pbVar16 = pbVar16 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00b311c0:
            if (iVar7 == 0) break;
            iVar8 = *(int *)(iVar8 + 0xc);
            param_3 = *(int *)(param_3 + 0xc);
          } while (iVar8 != 0);
          if (iVar8 == 0) goto LAB_00b31216;
          for (iVar8 = *(int *)(param_3 + 8); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
            pvVar2 = (void *)FUN_00b30aa4(0x30);
            if (pvVar2 == (void *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = FUN_00b68cb7(pvVar2,(undefined4 *)(iVar8 + 0x10));
            }
            *param_1 = (int)puVar3;
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            param_1 = puVar3 + 3;
          }
        }
        else {
LAB_00b31216:
          pvVar2 = (void *)FUN_00b30aa4(0x30);
          if (pvVar2 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_00b68cb7(pvVar2,piVar6);
          }
          *param_1 = (int)puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            return 0;
          }
          param_1 = puVar3 + 3;
        }
        if ((local_c != 0) || (local_14 != (int *)0x0)) {
          iVar7 = 0;
          iVar17 = 1;
          for (iVar8 = *local_18; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
            if ((iVar7 != 0) && (iVar7 != *(int *)(iVar8 + 0x28))) {
              iVar17 = iVar17 + 1;
            }
            iVar7 = FUN_00b30ac0(*(char **)(iVar8 + 0x28),*(int *)(iVar8 + 0x2c),0);
            iVar17 = iVar17 + iVar7;
            iVar7 = *(int *)(iVar8 + 0x28) + *(int *)(iVar8 + 0x2c);
          }
          pcVar5 = (char *)FUN_00b688f9(local_8,iVar17 + 1,1);
          if (pcVar5 == (char *)0x0) {
            return 0;
          }
          iVar17 = 0;
          param_3 = 1;
          cVar11 = ((local_c == 0) - 1U & 0xfb) + 0x27;
          *pcVar5 = cVar11;
          iVar8 = param_3;
          for (iVar7 = *local_18; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
            param_3 = iVar8;
            if ((iVar17 != 0) && (iVar17 != *(int *)(iVar7 + 0x28))) {
              param_3 = iVar8 + 1;
              pcVar5[iVar8] = ' ';
            }
            iVar8 = FUN_00b30ac0(*(char **)(iVar7 + 0x28),*(int *)(iVar7 + 0x2c),
                                 (int)(pcVar5 + param_3));
            iVar8 = param_3 + iVar8;
            iVar17 = *(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0x28);
          }
          pcVar5[iVar8] = cVar11;
          FUN_00b3313a(local_7c);
          pvVar2 = local_8;
          iVar8 = FUN_00b33155(local_7c,pcVar5,iVar8 + 1,local_1c[4],local_1c[5],(int)local_8,
                               (int)local_8 + 0x18);
          if ((iVar8 < 0) ||
             (iVar8 = FUN_00b340f6(local_7c,*(uint *)((int)pvVar2 + 0x298),local_44), iVar8 < 0))
          goto LAB_00b314ec;
          pvVar2 = (void *)FUN_00b30aa4(0x30);
          if (pvVar2 == (void *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_00b68cb7(pvVar2,local_44);
          }
          *local_18 = (int)puVar3;
          if (puVar3 == (undefined4 *)0x0) goto LAB_00b314ec;
          local_14 = (int *)0x0;
          local_c = 0;
          param_1 = puVar3 + 3;
          FUN_00b33154();
        }
      }
LAB_00b3137d:
      pvVar2 = local_8;
    }
    piVar6 = &local_10;
    iVar8 = local_10;
    while (iVar8 != 0) {
      iVar8 = *piVar6;
      iVar7 = *(int *)(iVar8 + 0xc);
      if (iVar7 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(int *)(iVar7 + 0xc);
      }
      piVar4 = (int *)(-(uint)(iVar7 != 0) & iVar7 + 0x10U);
      uVar12 = -(uint)(local_20 != 0) & local_20 + 0x10U;
      if (((iVar7 != 0) && (local_20 != 0)) && (*piVar4 == 1)) {
        iVar7 = 3;
        bVar19 = true;
        piVar4 = piVar4 + 2;
        pcVar5 = "##";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar19 = (char)*piVar4 == *pcVar5;
          piVar4 = (int *)((int)piVar4 + 1);
          pcVar5 = pcVar5 + 1;
        } while (bVar19);
        if (bVar19) {
          local_24 = (int *)(*(int *)(iVar8 + 0x2c) + *(int *)(uVar12 + 0x1c));
          pcVar5 = (char *)FUN_00b688f9(local_8,(int)local_24,1);
          if (pcVar5 == (char *)0x0) {
            return 0;
          }
          uVar10 = *(uint *)(iVar8 + 0x2c);
          pcVar14 = *(char **)(iVar8 + 0x28);
          pcVar18 = pcVar5;
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar18 = pcVar18 + 1;
          }
          uVar10 = *(uint *)(uVar12 + 0x1c);
          pcVar14 = *(char **)(uVar12 + 0x18);
          pcVar18 = pcVar5 + *(int *)(iVar8 + 0x2c);
          for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar18 = pcVar18 + 1;
          }
          FUN_00b3313a(local_7c);
          iVar7 = FUN_00b33155(local_7c,pcVar5,(int)local_24,*(undefined4 *)(iVar8 + 0x20),
                               *(undefined4 *)(iVar8 + 0x24),(int)local_8,(int)local_8 + 0x18);
          if ((iVar7 < 0) ||
             (iVar7 = FUN_00b340f6(local_7c,*(uint *)((int)local_8 + 0x298),
                                   (undefined4 *)(iVar8 + 0x10)), iVar7 < 0)) {
LAB_00b314ec:
            FUN_00b33154();
            return 0;
          }
          *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(local_20 + 0xc);
          *(undefined4 *)(local_20 + 0xc) = 0;
          FUN_00b33154();
        }
      }
      piVar6 = (int *)(*piVar6 + 0xc);
      pvVar2 = local_8;
      iVar8 = *piVar6;
    }
    *piVar6 = *(int *)((int)pvVar2 + 100);
    *(int *)((int)pvVar2 + 100) = local_10;
  }
  return 1;
}


//// FUNCTION FUN_00b31519 @ 00b31519 ////

void * __fastcall FUN_00b31519(void *param_1)

{
  uint *_Src;
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  bool bVar6;
  
  FUN_00b6887f(param_1,0x100000,0x10000);
  FUN_00b32e76((undefined4 *)((int)param_1 + 0x18));
  *(undefined4 *)((int)param_1 + 0x2a4) = 0;
  FUN_00b30b9d((int)param_1);
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 1;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 1;
  *(undefined4 *)((int)param_1 + 0x50) = 1;
  *(undefined4 *)((int)param_1 + 0x54) = 1;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0x268) = 0;
  *(undefined4 *)((int)param_1 + 0x26c) = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x6c);
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x278);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x298) = 1;
  _Src = FUN_00ad7ab6(4,(char *)0x0);
  pcVar1 = __strdup((char *)_Src);
  *(char **)((int)param_1 + 0x29c) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    iVar3 = 2;
    bVar6 = true;
    pcVar5 = "C";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar1 == *pcVar5;
      pcVar1 = pcVar1 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) goto LAB_00b315d4;
  }
  FUN_00ad7ab6(4,"C");
LAB_00b315d4:
  uVar2 = __controlfp(0,0);
  *(uint *)((int)param_1 + 0x2a0) = uVar2;
  __controlfp(0xffffffff,0x8001f);
  __controlfp(0,0x30000);
  FUN_00b05e99();
  return param_1;
}


//// FUNCTION FUN_00b31606 @ 00b31606 ////

void __fastcall FUN_00b31606(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((void *)param_1[0xf] != (void *)0x0) {
    FUN_00b2f847((void *)param_1[0xf],1);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    FUN_00b2f805((void *)param_1[0x1a],1);
  }
  if ((void *)param_1[0x9a] != (void *)0x0) {
    FUN_00b2f55b((void *)param_1[0x9a],1);
  }
  piVar2 = param_1 + 0x1b;
  iVar4 = 0x7f;
  do {
    if ((void *)*piVar2 != (void *)0x0) {
      FUN_00b30b7c((void *)*piVar2,1);
    }
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pcVar1 = (char *)param_1[0xa7];
  if (pcVar1 != (char *)0x0) {
    iVar4 = 2;
    bVar6 = true;
    pcVar3 = pcVar1;
    pcVar5 = "C";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      FUN_00ad7ab6(4,pcVar1);
    }
  }
  if ((void *)param_1[0xa7] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa7]);
  }
  __controlfp(param_1[0xa8],0xb001f);
  if (param_1[0xa9] != 0) {
    FUN_00b30bc4((int)param_1);
  }
  FUN_00b32e96(param_1 + 6);
  FUN_00b688d7(param_1);
  return;
}


//// FUNCTION FUN_00b316bc @ 00b316bc ////

int __fastcall FUN_00b316bc(void *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  int *piVar13;
  bool bVar14;
  int local_2c [8];
  int local_c;
  int local_8;
  
  if ((*(int *)((int)param_1 + 0x40) != 0) || (*(int *)((int)param_1 + 0x48) != 0)) {
    *(undefined4 *)((int)param_1 + 0x278) = 0xc;
    return -1;
  }
  iVar4 = *(int *)((int)param_1 + 100);
  if (iVar4 == 0) {
    iVar4 = FUN_00b340f6(*(void **)((int)param_1 + 0x26c),*(uint *)((int)param_1 + 0x298) | 4,
                         (undefined4 *)((int)param_1 + 0x278));
    if (iVar4 < 0) {
      return -1;
    }
  }
  else {
    puVar5 = (undefined4 *)(iVar4 + 0x10);
    puVar10 = (undefined4 *)((int)param_1 + 0x278);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  iVar4 = *(int *)((int)param_1 + 0x278);
  if (iVar4 == 1) {
    cVar1 = *(char *)((int)param_1 + 0x281);
    if (cVar1 == '\0') {
      return (int)*(char *)((int)param_1 + 0x280);
    }
    if (*(char *)((int)param_1 + 0x282) == '\0') {
      if (cVar1 == '=') {
        cVar1 = *(char *)((int)param_1 + 0x280);
        if (cVar1 == '!') {
          return 0x113;
        }
        if (cVar1 == '<') {
          return 0x110;
        }
        if (cVar1 == '=') {
          return 0x112;
        }
        if (cVar1 == '>') {
          return 0x111;
        }
      }
      else {
        cVar2 = *(char *)((int)param_1 + 0x280);
        if (cVar2 == cVar1) {
          if (cVar2 == '&') {
            return 0x114;
          }
          if (cVar2 == '|') {
            return 0x115;
          }
        }
      }
    }
    return 0x119;
  }
  if (iVar4 < 2) {
    return 0x119;
  }
  if (iVar4 < 5) {
    return 0x117;
  }
  if (iVar4 != 9) {
    if (iVar4 == 10) {
      return 0x118;
    }
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) {
      return 0x119;
    }
    *(undefined4 *)((int)param_1 + 0x40) = 1;
    return -1;
  }
  if (*(int *)((int)param_1 + 0x4c) == 0) {
    iVar4 = 8;
    bVar14 = true;
    pbVar8 = *(byte **)((int)param_1 + 0x280);
    pbVar12 = (byte *)"defined";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pbVar8 == *pbVar12;
      pbVar8 = pbVar8 + 1;
      pbVar12 = pbVar12 + 1;
    } while (bVar14);
    if (bVar14) {
      *(undefined4 *)((int)param_1 + 0x58) = 0;
      return 0x10f;
    }
    if (*(int *)((int)param_1 + 0x58) == 0) {
      return 0x116;
    }
    iVar4 = FUN_00b30a06(param_1,*(byte **)((int)param_1 + 0x280),&local_c,&local_8);
    if (iVar4 == 0) {
      return 0x116;
    }
    iVar4 = *(int *)((int)param_1 + 0x44);
    piVar9 = (int *)((int)param_1 + 0x278);
    piVar13 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar13 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar13 = piVar13 + 1;
    }
    if ((iVar4 == 0) && (iVar4 = FUN_00b30e54(param_1,local_2c,local_c,local_8), iVar4 != 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    *(int *)((int)param_1 + 0x44) = iVar4;
    if ((iVar4 == 0) && (local_c = FUN_00b316bc(param_1), local_c != -1)) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
    *(int *)((int)param_1 + 0x44) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((int)param_1 + 0x48) = 1;
      piVar9 = local_2c;
      piVar13 = (int *)((int)param_1 + 0x278);
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar13 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar13 = piVar13 + 1;
      }
      FUN_00b33674((void *)((int)param_1 + 0x18),(int)param_1 + 0x278,0x5ee,
                   "invalid or unsupported integer constant expression");
      return 0x116;
    }
    return local_c;
  }
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0;
  pcVar7 = *(char **)((int)param_1 + 0x280);
  if (*(int *)((int)param_1 + 0x50) == 0) {
    if (*pcVar7 != 'e') {
      if (*pcVar7 == 'i') {
        iVar4 = 3;
        bVar14 = true;
        pcVar6 = pcVar7;
        pcVar11 = "if";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar6 == *pcVar11;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x10c;
        }
        iVar4 = 6;
        bVar14 = true;
        pcVar6 = pcVar7;
        pcVar11 = "ifdef";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar6 == *pcVar11;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x10c;
        }
        iVar4 = 7;
        bVar14 = true;
        pcVar6 = "ifndef";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar7 == *pcVar6;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x10c;
        }
      }
LAB_00b319d5:
      *(undefined4 *)((int)param_1 + 0x4c) = 1;
      return 0x116;
    }
    iVar4 = 5;
    bVar14 = true;
    pcVar6 = pcVar7;
    pcVar11 = "else";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar6 == *pcVar11;
      pcVar6 = pcVar6 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar14);
    if (bVar14) {
      return 0x10a;
    }
    iVar4 = 6;
    bVar14 = true;
    pcVar6 = pcVar7;
    pcVar11 = "endif";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar6 == *pcVar11;
      pcVar6 = pcVar6 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar14);
    if (bVar14) {
      return 0x10b;
    }
    iVar4 = 5;
    bVar14 = true;
    pcVar6 = "elif";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar7 == *pcVar6;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar14);
    if (!bVar14) goto LAB_00b319d5;
    piVar9 = *(int **)(*(int *)((int)param_1 + 0x268) + 0x38);
    if (piVar9 != (int *)0x0) {
      if ((piVar9[1] != 0) && (*piVar9 == 0)) {
        *(int *)((int)param_1 + 0x50) = piVar9[1];
        *(undefined4 *)((int)param_1 + 0x58) = 1;
        return 0x109;
      }
      return 0x10d;
    }
    *(undefined4 *)((int)param_1 + 0x50) = 1;
  }
  else {
    cVar1 = *pcVar7;
    if (cVar1 == 'd') {
      iVar4 = 7;
      bVar14 = true;
      pcVar6 = "define";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar7 == *pcVar6;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar14);
      if (bVar14) {
        return 0x101;
      }
      goto LAB_00b319d5;
    }
    if (cVar1 != 'e') {
      if (cVar1 != 'i') {
        if (cVar1 == 'l') {
          iVar4 = 5;
          bVar14 = true;
          pcVar6 = "line";
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *pcVar7 == *pcVar6;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar14);
          if (bVar14) {
            return 0x103;
          }
        }
        else if (cVar1 == 'p') {
          iVar4 = 7;
          bVar14 = true;
          pcVar6 = "pragma";
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *pcVar7 == *pcVar6;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar14);
          if (bVar14) {
            return 0x10e;
          }
        }
        else if (cVar1 == 'u') {
          iVar4 = 6;
          bVar14 = true;
          pcVar6 = "undef";
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar14 = *pcVar7 == *pcVar6;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar14);
          if (bVar14) {
            return 0x102;
          }
        }
        goto LAB_00b319d5;
      }
      iVar4 = 3;
      bVar14 = true;
      pcVar6 = pcVar7;
      pcVar11 = "if";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar6 == *pcVar11;
        pcVar6 = pcVar6 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar14);
      if (!bVar14) {
        iVar4 = 6;
        bVar14 = true;
        pcVar6 = pcVar7;
        pcVar11 = "ifdef";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar6 == *pcVar11;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x107;
        }
        iVar4 = 7;
        bVar14 = true;
        pcVar6 = pcVar7;
        pcVar11 = "ifndef";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar6 == *pcVar11;
          pcVar6 = pcVar6 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x108;
        }
        iVar4 = 8;
        bVar14 = true;
        pcVar6 = "include";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar7 == *pcVar6;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar14);
        if (bVar14) {
          return 0x104;
        }
        goto LAB_00b319d5;
      }
      iVar4 = 0x106;
      goto LAB_00b3199f;
    }
    iVar4 = 5;
    bVar14 = true;
    pcVar6 = pcVar7;
    pcVar11 = "elif";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = *pcVar6 == *pcVar11;
      pcVar6 = pcVar6 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar14);
    if (!bVar14) {
      iVar4 = 5;
      bVar14 = true;
      pcVar6 = pcVar7;
      pcVar11 = "else";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar6 == *pcVar11;
        pcVar6 = pcVar6 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar14);
      if (bVar14) {
        return 0x10a;
      }
      iVar4 = 6;
      bVar14 = true;
      pcVar6 = pcVar7;
      pcVar11 = "endif";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar6 == *pcVar11;
        pcVar6 = pcVar6 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar14);
      if (bVar14) {
        return 0x10b;
      }
      iVar4 = 6;
      bVar14 = true;
      pcVar6 = "error";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar7 == *pcVar6;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar14);
      if (bVar14) {
        return 0x105;
      }
      goto LAB_00b319d5;
    }
  }
  iVar4 = 0x109;
LAB_00b3199f:
  *(undefined4 *)((int)param_1 + 0x58) = 1;
  return iVar4;
}


//// FUNCTION FUN_00b31b51 @ 00b31b51 ////

int __thiscall FUN_00b31b51(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)FUN_00b2f450(pvVar2,param_1,0,0);
  }
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)((int)this + 0x26c);
      if (((char *)*puVar4 < (char *)puVar4[1]) && (*(char *)*puVar4 == '(')) {
        param_2 = param_1 + 1;
        iVar3 = FUN_00b340f6(puVar4,*(uint *)((int)this + 0x298),(undefined4 *)((int)this + 0x278));
        if (iVar3 < 0) goto LAB_00b31ddf;
        do {
          iVar3 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),
                               (int *)((int)this + 0x278));
          if (iVar3 < 0) goto LAB_00b31ddf;
          if (*(int *)((int)this + 0x278) != 9) goto LAB_00b31ce5;
          for (iVar3 = param_1[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
            pbVar7 = *(byte **)(iVar3 + 0x18);
            pbVar9 = *(byte **)((int)this + 0x280);
            do {
              bVar1 = *pbVar9;
              bVar12 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00b31c2d:
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_00b31c32;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar12 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00b31c2d;
              pbVar9 = pbVar9 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00b31c32:
            if (iVar6 == 0) {
              FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0x5e7,
                           "duplicate macro parameter \'%s\'");
              break;
            }
          }
          pvVar2 = (void *)FUN_00b30aa4(0x30);
          if (pvVar2 == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_00b68cb7(pvVar2,(undefined4 *)((int)this + 0x278));
          }
          *param_2 = puVar4;
          if (puVar4 == (undefined4 *)0x0) goto LAB_00b31dbb;
          param_2 = puVar4 + 3;
          iVar3 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),
                               (int *)((int)this + 0x278));
          if (iVar3 < 0) goto LAB_00b31ddf;
          if (*(int *)((int)this + 0x278) != 1) goto LAB_00b31ce5;
          iVar3 = 2;
          bVar12 = true;
          pcVar8 = ",";
          pcVar10 = (char *)((int)this + 0x280);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar12 = *pcVar8 == *pcVar10;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar12);
        } while (bVar12);
        iVar3 = 2;
        bVar12 = true;
        pcVar8 = ")";
        pcVar10 = (char *)((int)this + 0x280);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar12 = *pcVar8 == *pcVar10;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar12);
        if (!bVar12) {
LAB_00b31ce5:
          iVar3 = *(int *)((int)this + 0x278);
          if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
            *(undefined4 *)((int)this + 0x40) = 1;
          }
          FUN_00b33898((void *)((int)this + 0x18),0x5dc,(int *)((int)this + 0x278));
          *(undefined4 *)((int)this + 0x44) = 1;
          iVar3 = -0x7fffbffb;
          goto LAB_00b31ddf;
        }
      }
    }
    puVar4 = param_1 + 2;
    while( true ) {
      iVar3 = *(int *)((int)this + 100);
      if (iVar3 == 0) {
        iVar3 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),
                             (undefined4 *)((int)this + 0x278));
        if (iVar3 < 0) goto LAB_00b31ddf;
      }
      else {
        puVar5 = (undefined4 *)(iVar3 + 0x10);
        puVar11 = (undefined4 *)((int)this + 0x278);
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined4 *)((int)this + 100) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)((int)this + 0x288) = *(undefined4 *)(*(int *)((int)this + 0x26c) + 0x18);
        *(undefined4 *)((int)this + 0x28c) = *(undefined4 *)(*(int *)((int)this + 0x26c) + 0x1c);
      }
      if ((*(int *)((int)this + 0x278) == 0xc) || (*(int *)((int)this + 0x278) == 0xd)) {
        *(undefined4 *)((int)this + 0x40) = 1;
        iVar3 = FUN_00b30cf6(this,param_1);
        if (-1 < iVar3) {
          param_1 = (undefined4 *)0x0;
          iVar3 = 0;
        }
        goto LAB_00b31ddf;
      }
      pvVar2 = (void *)FUN_00b30aa4(0x30);
      if (pvVar2 == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_00b68cb7(pvVar2,(undefined4 *)((int)this + 0x278));
      }
      *puVar4 = puVar5;
      if (puVar5 == (undefined4 *)0x0) break;
      puVar4 = puVar5 + 3;
    }
  }
LAB_00b31dbb:
  iVar3 = -0x7ff8fff2;
LAB_00b31ddf:
  if (param_1 != (undefined4 *)0x0) {
    FUN_00b30b7c(param_1,1);
  }
  return iVar3;
}


//// FUNCTION FUN_00b31df6 @ 00b31df6 ////

int __thiscall FUN_00b31df6(void *this,int *param_1)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_68 [14];
  undefined4 local_30 [8];
  undefined4 local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_10 = *(undefined4 *)((int)this + 0x26c);
  puVar4 = local_30;
  local_c = this;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_8 = operator_new(0x14);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    *local_8 = "DIRECT3D";
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0;
  }
  if (local_8 != (undefined4 *)0x0) {
    iVar6 = FUN_00b30cf6(this,local_8);
    if (iVar6 < 0) goto LAB_00b31fb1;
    local_8 = operator_new(0x14);
    if (local_8 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)0x0;
    }
    else {
      *local_8 = &DAT_00d8e9c4;
      local_8[1] = 0;
      local_8[2] = 0;
      local_8[3] = 0;
      local_8[4] = 0;
    }
    if (local_8 != (undefined4 *)0x0) {
      iVar6 = FUN_00b30cf6(this,local_8);
      if (iVar6 < 0) goto LAB_00b31fb1;
      local_30[0] = 2;
      local_30[2] = 0x900;
      local_8 = operator_new(0x14);
      if (local_8 == (undefined4 *)0x0) {
        local_8 = (undefined4 *)0x0;
      }
      else {
        *local_8 = "DIRECT3D_VERSION";
        local_8[1] = 0;
        local_8[2] = 0;
        local_8[3] = 0;
        local_8[4] = 0;
      }
      if (local_8 != (undefined4 *)0x0) {
        pvVar3 = (void *)FUN_00b30aa4(0x30);
        if (pvVar3 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_00b68cb7(pvVar3,local_30);
        }
        local_8[2] = puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          iVar6 = FUN_00b30cf6(local_c,local_8);
          if (iVar6 < 0) goto LAB_00b31fb1;
          local_30[0] = 2;
          local_30[2] = 0x902;
          local_8 = operator_new(0x14);
          if (local_8 == (undefined4 *)0x0) {
            local_8 = (undefined4 *)0x0;
          }
          else {
            *local_8 = "D3DX_VERSION";
            local_8[1] = 0;
            local_8[2] = 0;
            local_8[3] = 0;
            local_8[4] = 0;
          }
          if (local_8 != (undefined4 *)0x0) {
            pvVar3 = (void *)FUN_00b30aa4(0x30);
            if (pvVar3 == (void *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = FUN_00b68cb7(pvVar3,local_30);
            }
            local_8[2] = puVar4;
            if (puVar4 != (undefined4 *)0x0) {
              iVar6 = FUN_00b30cf6(local_c,local_8);
              if (-1 < iVar6) {
                local_8 = (undefined4 *)0x0;
                if (param_1 != (int *)0x0) {
                  FUN_00b3313a(local_68);
                  *(undefined4 **)((int)local_c + 0x26c) = local_68;
                  iVar6 = *param_1;
                  while (iVar6 != 0) {
                    pcVar2 = (char *)param_1[1];
                    if (pcVar2 == (char *)0x0) {
                      iVar6 = 0;
                    }
                    else {
                      pcVar5 = pcVar2;
                      do {
                        cVar1 = *pcVar5;
                        pcVar5 = pcVar5 + 1;
                      } while (cVar1 != '\0');
                      iVar6 = (int)pcVar5 - (int)(pcVar2 + 1);
                    }
                    iVar6 = FUN_00b33155(local_68,pcVar2,iVar6,0,0,(int)local_c,(int)local_c + 0x18)
                    ;
                    if ((iVar6 < 0) ||
                       (iVar6 = FUN_00b31b51(local_c,(undefined4 *)*param_1,(undefined4 *)0x0),
                       iVar6 < 0)) {
                      FUN_00b33154();
                      goto LAB_00b31fb1;
                    }
                    param_1 = param_1 + 2;
                    iVar6 = *param_1;
                  }
                  FUN_00b33154();
                }
                iVar6 = 0;
              }
              goto LAB_00b31fb1;
            }
          }
        }
      }
    }
  }
  iVar6 = -0x7ff8fff2;
LAB_00b31fb1:
  *(undefined4 *)((int)local_c + 0x26c) = local_10;
  if (local_8 != (undefined4 *)0x0) {
    FUN_00b30b7c(local_8,1);
  }
  return iVar6;
}


//// FUNCTION FUN_00b3202f @ 00b3202f ////

void __thiscall FUN_00b3202f(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  char *pcVar8;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  
  puVar6 = (undefined4 *)0x0;
  if (*(int *)((int)this + 0x44) != 0) {
    return;
  }
  while (param_2 != 0) {
    iVar1 = *(int *)((int)this + 0x5c);
    param_2 = param_2 + -1;
    if (iVar1 == 0) {
      pcVar8 = "internal error: stack underflow";
      goto LAB_00b32376;
    }
    (&local_44)[param_2] = *(undefined4 **)(iVar1 + 8);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0x60);
    *(int *)((int)this + 0x60) = iVar1;
  }
  switch(param_1) {
  case 0:
    FUN_00b31b51(this,(undefined4 *)local_44[6],(undefined4 *)0x1);
    break;
  case 1:
    FUN_00b30bdb(this,(byte *)local_44[6]);
    break;
  case 2:
    iVar1 = 0;
    goto LAB_00b320b7;
  case 3:
    iVar1 = *(int *)(local_40 + 0x18);
LAB_00b320b7:
    FUN_00b2f9d5(this,local_44[6],iVar1);
    break;
  case 4:
    FUN_00b2fa0e(this);
    break;
  case 5:
    FUN_00b2fc07((int)this);
    break;
  case 6:
    uVar3 = local_44[6];
    goto LAB_00b320ef;
  case 7:
    uVar3 = FUN_00b30a06(this,(byte *)local_44[6],(undefined4 *)0x0,(undefined4 *)0x0);
    goto LAB_00b320ef;
  case 8:
    iVar1 = FUN_00b30a06(this,(byte *)local_44[6],(undefined4 *)0x0,(undefined4 *)0x0);
    uVar3 = (uint)(iVar1 == 0);
LAB_00b320ef:
    FUN_00b2fceb(this,uVar3);
    break;
  case 9:
    FUN_00b2fd4b(this,local_44[6]);
    break;
  case 10:
    FUN_00b2fdc8((int)this);
    break;
  case 0xb:
    FUN_00b2fe32((int)this);
    break;
  case 0xc:
    FUN_00b2fceb(this,1);
    goto LAB_00b32156;
  case 0xd:
    FUN_00b2fd4b(this,1);
LAB_00b32156:
    FUN_00b331bf(*(undefined4 **)((int)this + 0x26c));
    break;
  case 0xe:
    FUN_00b30c4f((int)this);
    break;
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1d:
  case 0x22:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
    puVar6 = local_44;
    break;
  case 0x11:
    local_44[4] = 2;
    uVar3 = FUN_00b30dad(this,(byte *)local_44[6]);
    goto LAB_00b321fe;
  case 0x12:
    local_44[4] = 2;
    uVar2 = FUN_00b30a06(this,(byte *)local_44[6],(undefined4 *)0x0,(undefined4 *)0x0);
    local_44[6] = uVar2;
    *(undefined4 *)((int)this + 0x58) = 1;
    puVar6 = local_44;
    break;
  case 0x14:
    uVar3 = (uint)(local_44[6] == 0);
    goto LAB_00b321c8;
  case 0x15:
    local_44[6] = -local_44[6];
    puVar6 = local_44;
    break;
  case 0x18:
    uVar3 = *(int *)(local_40 + 0x18) * local_44[6];
    goto LAB_00b321c8;
  case 0x19:
    if (*(uint *)(local_40 + 0x18) == 0) {
      FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0x5df,
                   "division by zero in preprocessor expression");
      *(undefined4 *)((int)this + 0x44) = 1;
      puVar6 = local_44;
      break;
    }
    uVar3 = (uint)local_44[6] / *(uint *)(local_40 + 0x18);
LAB_00b321fe:
    local_44[6] = uVar3;
    puVar6 = local_44;
    break;
  case 0x1b:
    local_44[6] = local_44[6] + *(int *)(local_40 + 0x18);
    puVar6 = local_44;
    break;
  case 0x1c:
    local_44[6] = local_44[6] - *(int *)(local_40 + 0x18);
    puVar6 = local_44;
    break;
  case 0x1e:
    bVar7 = (uint)local_44[6] < *(uint *)(local_40 + 0x18);
    goto LAB_00b3226d;
  case 0x1f:
    bVar7 = *(uint *)(local_40 + 0x18) < (uint)local_44[6];
LAB_00b3226d:
    uVar3 = (uint)bVar7;
    goto LAB_00b321c8;
  case 0x20:
    bVar7 = *(uint *)(local_40 + 0x18) < (uint)local_44[6];
    goto LAB_00b322a4;
  case 0x21:
    bVar7 = (uint)local_44[6] < *(uint *)(local_40 + 0x18);
    goto LAB_00b322a4;
  case 0x23:
    bVar7 = local_44[6] != *(int *)(local_40 + 0x18);
LAB_00b322a4:
    uVar3 = 1 - bVar7;
    goto LAB_00b321c8;
  case 0x24:
    local_44[6] = (uint)(local_44[6] != *(int *)(local_40 + 0x18));
    puVar6 = local_44;
    break;
  case 0x26:
    if (local_44[6] != 0) {
LAB_00b322cb:
      if (*(int *)(local_40 + 0x18) != 0) goto LAB_00b322d3;
    }
    uVar3 = 0;
    goto LAB_00b321c8;
  case 0x28:
    if (local_44[6] == 0) goto LAB_00b322cb;
LAB_00b322d3:
    uVar3 = 1;
    goto LAB_00b321c8;
  case 0x2a:
    if (local_44[6] == 0) {
      local_40 = local_3c;
    }
    uVar3 = *(uint *)(local_40 + 0x18);
LAB_00b321c8:
    local_44[6] = uVar3;
    puVar6 = local_44;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
    pvVar4 = (void *)FUN_00b30aa4(0x30);
    if (pvVar4 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_00b68cb7(pvVar4,(undefined4 *)((int)this + 0x278));
    }
    FUN_00b30b27(this,(int)puVar6);
  }
  if (*(int *)((int)this + 0x44) == 0) {
    puVar5 = *(undefined4 **)((int)this + 0x60);
    if (puVar5 == (undefined4 *)0x0) {
      pvVar4 = (void *)FUN_00b30aa4(0x14);
      if (pvVar4 == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_00b68aae(pvVar4,puVar6,*(undefined4 *)((int)this + 0x5c),"Stack");
      }
      if (puVar5 == (undefined4 *)0x0) {
        pcVar8 = "internal error: out of memory";
LAB_00b32376:
        FUN_00b33674((void *)((int)this + 0x18),(int)this + 0x278,0,pcVar8);
        *(undefined4 *)((int)this + 0x44) = 1;
        return;
      }
    }
    else {
      *(undefined4 *)((int)this + 0x60) = puVar5[3];
      puVar5[2] = puVar6;
      puVar5[3] = *(undefined4 *)((int)this + 0x5c);
    }
    *(undefined4 **)((int)this + 0x5c) = puVar5;
  }
  return;
}


//// FUNCTION FUN_00b3244f @ 00b3244f ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00b3244f(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  _DAT_010ccd08 = 0;
  DAT_010ccd04 = 0;
  DAT_010cccfc = (short *)&DAT_010cc908;
  DAT_010cccf8 = (undefined4 *)&DAT_010cc138;
  _DAT_010cc908 = 0;
LAB_00b3247d:
  DAT_010ccd00 = -1;
LAB_00b32485:
  iVar2 = (int)(short)(&DAT_00e9ccc0)[iVar4];
  if (iVar2 == 0) {
    if ((DAT_010ccd00 < 0) && (DAT_010ccd00 = FUN_00b316bc(DAT_010ccd30), DAT_010ccd00 < 0)) {
      DAT_010ccd00 = 0;
    }
    if (((((short)(&DAT_00e9cd80)[iVar4] != 0) &&
         (iVar2 = (short)(&DAT_00e9cd80)[iVar4] + DAT_010ccd00, -1 < iVar2)) && (iVar2 < 0x172)) &&
       (*(short *)(&DAT_00e9d1c8 + iVar2 * 2) == DAT_010ccd00)) {
      if (&DAT_010cccee <= DAT_010cccfc) goto LAB_00b3289e;
      iVar4 = (int)*(short *)(&DAT_00e9cee0 + iVar2 * 2);
      DAT_010cccfc = DAT_010cccfc + 1;
      *DAT_010cccfc = *(short *)(&DAT_00e9cee0 + iVar2 * 2);
      DAT_010cccf8 = DAT_010cccf8 + 1;
      *DAT_010cccf8 = DAT_010cccf0;
      DAT_010ccd00 = -1;
      if (0 < DAT_010ccd04) {
        DAT_010ccd04 = DAT_010ccd04 + -1;
      }
      goto LAB_00b32485;
    }
    if ((((short)(&DAT_00e9ce20)[iVar4] != 0) &&
        (iVar2 = (short)(&DAT_00e9ce20)[iVar4] + DAT_010ccd00, -1 < iVar2)) &&
       ((iVar2 < 0x172 && (*(short *)(&DAT_00e9d1c8 + iVar2 * 2) == DAT_010ccd00)))) {
      iVar2 = (int)*(short *)(&DAT_00e9cee0 + iVar2 * 2);
      goto LAB_00b3256c;
    }
    if (DAT_010ccd04 == 0) {
      FUN_00b2f91b((int)DAT_010ccd30,"syntax error");
      _DAT_010ccd08 = _DAT_010ccd08 + 1;
    }
    if (2 < DAT_010ccd04) goto LAB_00b32895;
    DAT_010ccd04 = 3;
    while ((((short)(&DAT_00e9cd80)[*DAT_010cccfc] == 0 ||
            (iVar4 = (short)(&DAT_00e9cd80)[*DAT_010cccfc] + 0x100, iVar4 < 0)) ||
           ((0x171 < iVar4 || (*(short *)(&DAT_00e9d1c8 + iVar4 * 2) != 0x100))))) {
      if (DAT_010cccfc < (short *)0x10cc909) {
        DAT_010ccd04 = 3;
        return 1;
      }
      DAT_010cccfc = DAT_010cccfc + -1;
      DAT_010cccf8 = DAT_010cccf8 + -1;
    }
    if ((short *)0x10ccced < DAT_010cccfc) goto LAB_00b3289e;
    sVar1 = *(short *)(&DAT_00e9cee0 + iVar4 * 2);
    DAT_010cccfc = DAT_010cccfc + 1;
    *DAT_010cccfc = sVar1;
    uVar6 = DAT_010cccf0;
  }
  else {
LAB_00b3256c:
    iVar4 = (int)*(short *)(&DAT_00e9cc60 + iVar2 * 2);
    DAT_010cccf4 = DAT_010cccf8[1 - iVar4];
    switch(iVar2) {
    case 1:
      iVar3 = 1;
      uVar6 = 0;
      break;
    case 2:
      iVar3 = 1;
      uVar6 = 1;
      break;
    case 3:
      iVar3 = 1;
      uVar6 = 2;
      break;
    case 4:
      iVar3 = 2;
      uVar6 = 3;
      break;
    case 5:
      iVar3 = 0;
      uVar6 = 4;
      break;
    case 6:
      iVar3 = 0;
      uVar6 = 5;
      break;
    case 7:
      iVar3 = 1;
      uVar6 = 6;
      break;
    case 8:
      iVar3 = 1;
      uVar6 = 7;
      break;
    case 9:
      iVar3 = 1;
      uVar6 = 8;
      break;
    case 10:
      iVar3 = 1;
      uVar6 = 9;
      break;
    case 0xb:
      iVar3 = 0;
      uVar6 = 10;
      break;
    case 0xc:
      iVar3 = 0;
      uVar6 = 0xb;
      break;
    case 0xd:
      iVar3 = 0;
      uVar6 = 0xc;
      break;
    case 0xe:
      iVar3 = 0;
      uVar6 = 0xd;
      break;
    case 0xf:
      iVar3 = 0;
      uVar6 = 0xe;
      break;
    case 0x10:
      iVar3 = 1;
      uVar6 = 0xf;
      break;
    case 0x11:
      iVar3 = 1;
      uVar6 = 0x10;
      break;
    case 0x12:
      iVar3 = 1;
      uVar6 = 0x11;
      break;
    case 0x13:
      iVar3 = 1;
      uVar6 = 0x12;
      break;
    case 0x14:
      iVar3 = 1;
      uVar6 = 0x13;
      break;
    case 0x15:
      iVar3 = 1;
      uVar6 = 0x14;
      break;
    case 0x16:
      iVar3 = 1;
      uVar6 = 0x15;
      break;
    case 0x17:
      iVar3 = 1;
      uVar6 = 0x16;
      break;
    case 0x18:
      iVar3 = 1;
      uVar6 = 0x17;
      break;
    case 0x19:
      iVar3 = 2;
      uVar6 = 0x18;
      break;
    case 0x1a:
      iVar3 = 2;
      uVar6 = 0x19;
      break;
    case 0x1b:
      iVar3 = 1;
      uVar6 = 0x1a;
      break;
    case 0x1c:
      iVar3 = 2;
      uVar6 = 0x1b;
      break;
    case 0x1d:
      iVar3 = 2;
      uVar6 = 0x1c;
      break;
    case 0x1e:
      iVar3 = 1;
      uVar6 = 0x1d;
      break;
    case 0x1f:
      iVar3 = 2;
      uVar6 = 0x1e;
      break;
    case 0x20:
      iVar3 = 2;
      uVar6 = 0x1f;
      break;
    case 0x21:
      iVar3 = 2;
      uVar6 = 0x20;
      break;
    case 0x22:
      iVar3 = 2;
      uVar6 = 0x21;
      break;
    case 0x23:
      iVar3 = 1;
      uVar6 = 0x22;
      break;
    case 0x24:
      iVar3 = 2;
      uVar6 = 0x23;
      break;
    case 0x25:
      iVar3 = 2;
      uVar6 = 0x24;
      break;
    case 0x26:
      iVar3 = 1;
      uVar6 = 0x25;
      break;
    case 0x27:
      iVar3 = 2;
      uVar6 = 0x26;
      break;
    case 0x28:
      iVar3 = 1;
      uVar6 = 0x27;
      break;
    case 0x29:
      iVar3 = 2;
      uVar6 = 0x28;
      break;
    case 0x2a:
      iVar3 = 1;
      uVar6 = 0x29;
      break;
    case 0x2b:
      iVar3 = 3;
      uVar6 = 0x2a;
      break;
    case 0x2c:
      iVar3 = 1;
      uVar6 = 0x2b;
      break;
    case 0x2d:
      iVar3 = 0;
      uVar6 = 0x2c;
      break;
    case 0x2e:
      iVar3 = 0;
      uVar6 = 0x2d;
      break;
    case 0x2f:
      iVar3 = 0;
      uVar6 = 0x2e;
      break;
    default:
      goto switchD_00b32596_default;
    }
    FUN_00b3202f(DAT_010ccd30,uVar6,iVar3);
switchD_00b32596_default:
    DAT_010cccfc = DAT_010cccfc + -iVar4;
    iVar3 = (int)*DAT_010cccfc;
    DAT_010cccf8 = DAT_010cccf8 + -iVar4;
    if ((iVar3 == 0) && (*(short *)(&DAT_00e9cc00 + iVar2 * 2) == 0)) {
      DAT_010cccfc = DAT_010cccfc + 1;
      iVar4 = 0xf;
      *DAT_010cccfc = 0xf;
      DAT_010cccf8 = DAT_010cccf8 + 1;
      *DAT_010cccf8 = DAT_010cccf4;
      bVar5 = DAT_010ccd00 == 0;
      if (DAT_010ccd00 < 0) {
        DAT_010ccd00 = FUN_00b316bc(DAT_010ccd30);
        bVar5 = DAT_010ccd00 == 0;
        if (DAT_010ccd00 < 0) {
          DAT_010ccd00 = 0;
          bVar5 = true;
        }
      }
      if (bVar5) {
        return 0;
      }
      goto LAB_00b32485;
    }
    iVar4 = *(short *)(&DAT_00e9cc00 + iVar2 * 2) * 2;
    if ((((*(short *)(&DAT_00e9cec0 + iVar4) == 0) ||
         (iVar2 = *(short *)(&DAT_00e9cec0 + iVar4) + iVar3, iVar2 < 0)) || (0x171 < iVar2)) ||
       (*(short *)(&DAT_00e9d1c8 + iVar2 * 2) != iVar3)) {
      sVar1 = *(short *)(&DAT_00e9cd60 + iVar4);
    }
    else {
      sVar1 = *(short *)(&DAT_00e9cee0 + iVar2 * 2);
    }
    if ((short *)0x10ccced < DAT_010cccfc) {
LAB_00b3289e:
      FUN_00b2f91b((int)DAT_010ccd30,"yacc stack overflow");
      return 1;
    }
    DAT_010cccfc = DAT_010cccfc + 1;
    *DAT_010cccfc = sVar1;
    uVar6 = DAT_010cccf4;
  }
  iVar4 = (int)sVar1;
  DAT_010cccf8 = DAT_010cccf8 + 1;
  *DAT_010cccf8 = uVar6;
  goto LAB_00b32485;
LAB_00b32895:
  if (DAT_010ccd00 == 0) {
    return 1;
  }
  goto LAB_00b3247d;
}


//// FUNCTION FUN_00b32973 @ 00b32973 ////

uint __thiscall FUN_00b32973(void *this,WCHAR *param_1,LPSTR param_2,int *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = operator_new(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00b2f4cd(puVar1);
  }
  *(undefined4 **)((int)this + 0x268) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    uVar2 = FUN_00b2f57c(puVar1,param_1,param_2,this,(int)this + 0x278,(void *)((int)this + 0x18),
                         param_4,0,0);
    if ((-1 < (int)uVar2) && (uVar2 = FUN_00b31df6(this,param_3), -1 < (int)uVar2)) {
      *(undefined4 *)((int)this + 0x26c) = *(undefined4 *)((int)this + 0x268);
      *(uint *)((int)this + 0x270) = param_4;
      uVar2 = 0;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00b329f1 @ 00b329f1 ////

int __thiscall
FUN_00b329f1(void *this,HMODULE param_1,undefined4 param_2,int param_3,int *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00b2f4cd(puVar1);
  }
  *(undefined4 **)((int)this + 0x268) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = FUN_00b2f72d(puVar1,param_1,param_2,param_3,(int)this,(void *)((int)this + 0x18));
    if (-1 < iVar2) {
      iVar2 = FUN_00b31df6(this,param_4);
      if (-1 < iVar2) {
        *(undefined4 *)((int)this + 0x26c) = *(undefined4 *)((int)this + 0x268);
        *(undefined4 *)((int)this + 0x270) = param_5;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00b32a64 @ 00b32a64 ////

int __thiscall FUN_00b32a64(void *this,char *param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = operator_new(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00b2f4cd(puVar1);
  }
  *(undefined4 **)((int)this + 0x268) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = FUN_00b2f795(puVar1,param_1,param_2,(int)this,(int)this + 0x18);
    if (-1 < iVar2) {
      iVar2 = FUN_00b31df6(this,param_3);
      if (-1 < iVar2) {
        *(undefined4 *)((int)this + 0x26c) = *(undefined4 *)((int)this + 0x268);
        *(undefined4 *)((int)this + 0x270) = param_4;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00b32ad4 @ 00b32ad4 ////

uint __thiscall FUN_00b32ad4(void *this,int *param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
LAB_00b32d3a:
  do {
    if (*(int *)((int)this + 0x48) != 0) {
      uVar1 = 0x80004005;
LAB_00b32d4d:
      param_1[4] = *(int *)(*(int *)((int)this + 0x26c) + 0x18);
      param_1[5] = *(int *)(*(int *)((int)this + 0x26c) + 0x1c);
      *param_1 = 0xd;
      return uVar1;
    }
    if ((*(int *)((int)this + 0x68) != 0) && (*(int *)(*(int *)((int)this + 0x68) + 8) == 0)) {
      uVar1 = 0;
      goto LAB_00b32d4d;
    }
    iVar3 = *(int *)((int)this + 100);
    if (iVar3 == 0) {
      uVar1 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    else {
      piVar4 = (int *)(iVar3 + 0x10);
      piVar6 = param_1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      *(undefined4 *)((int)this + 100) = *(undefined4 *)(*(int *)((int)this + 100) + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      param_1[4] = *(int *)(*(int *)((int)this + 0x26c) + 0x18);
      param_1[5] = *(int *)(*(int *)((int)this + 0x26c) + 0x1c);
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    if (*param_1 != 1) {
LAB_00b32c8f:
      if (*param_1 == 0xd) {
        if (*(int *)(*(int *)((int)this + 0x268) + 0x38) != 0) {
          FUN_00b33674((void *)((int)this + 0x18),(int)param_1,0x5de,"unexpected end of file");
        }
        this_00 = *(void **)((int)this + 0x268);
        if (*(int *)((int)this_00 + 0x6c) == 0) {
          return 0;
        }
        *(undefined4 *)((int)this + 0x268) = *(undefined4 *)((int)this_00 + 0x6c);
        *(undefined4 *)((int)this_00 + 0x6c) = 0;
        FUN_00b2f55b(this_00,1);
        *(undefined4 *)((int)this + 0x26c) = *(undefined4 *)((int)this + 0x268);
        *param_1 = 0xc;
        *(undefined4 *)((int)this + 0x40) = 1;
        return 0;
      }
      if (((*param_1 != 9) ||
          (iVar3 = FUN_00b30a06(this,(byte *)param_1[2],&local_c,&local_8), iVar3 == 0)) ||
         (iVar3 = FUN_00b30e54(this,param_1,(int)local_c,(int)local_8), iVar3 == 0)) {
        if (*param_1 == 9) {
          iVar3 = 9;
          bVar8 = true;
          pcVar5 = (char *)param_1[2];
          pcVar7 = "__FILE__";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar8 = *pcVar5 == *pcVar7;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            *param_1 = 10;
            iVar3 = *(int *)(*(int *)((int)this + 0x26c) + 0x18);
            param_1[2] = iVar3;
            if (iVar3 == 0) {
              param_1[2] = (int)&lpClass_00d16914;
            }
          }
          else {
            iVar3 = 9;
            bVar8 = true;
            pcVar5 = (char *)param_1[2];
            pcVar7 = "__LINE__";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar8 = *pcVar5 == *pcVar7;
              pcVar5 = pcVar5 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar8);
            if (bVar8) {
              *param_1 = 2;
              param_1[2] = *(int *)(*(int *)((int)this + 0x26c) + 0x1c);
            }
          }
        }
        *(uint *)((int)this + 0x40) = (uint)(*param_1 == 0xc);
        if (*(int *)((int)this + 0x50) != 0) {
          iVar3 = *(int *)((int)this + 0x68);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
            if ((*param_1 == 1) && (*(char *)((int)param_1 + 9) == '\0')) {
              if ((char)param_1[2] == '{') {
                *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
              }
              if (((char)param_1[2] == '}') && (*(int *)(*(int *)((int)this + 0x68) + 8) != 0)) {
                piVar4 = (int *)(*(int *)((int)this + 0x68) + 8);
                *piVar4 = *piVar4 + -1;
              }
            }
            if (*(int *)(*(int *)((int)this + 0x68) + 8) == 0) {
              *param_1 = 0xd;
            }
          }
          return 0;
        }
      }
      goto LAB_00b32d3a;
    }
    iVar3 = 2;
    bVar8 = true;
    pcVar5 = "#";
    piVar4 = param_1 + 2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pcVar5 == (char)*piVar4;
      pcVar5 = pcVar5 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar8);
    if ((!bVar8) || (*(int *)((int)this + 0x40) == 0)) goto LAB_00b32c8f;
    DAT_010ccd30 = this;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x4c) = 1;
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x50);
    iVar3 = FUN_00b3244f();
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x44) = 1;
    }
    *(undefined4 *)((int)this + 0x5c) = 0;
    if ((*(int *)((int)this + 0x40) == 0) && (*(int *)((int)this + 0x44) == 0)) {
      uVar1 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),
                           (int *)((int)this + 0x278));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      iVar3 = *(int *)((int)this + 0x278);
      if ((iVar3 == 0xc) || (iVar3 == 0xd)) {
        *(undefined4 *)((int)this + 0x40) = 1;
      }
      else {
        if (*(int *)((int)this + 0x50) != 0) {
          FUN_00b33674((void *)((int)this + 0x18),(int)param_1,0x5dd,
                       "unexpected tokens following preprocessor directive");
        }
        *(undefined4 *)((int)this + 0x44) = 1;
      }
    }
    if (*(int *)((int)this + 0x40) == 0) {
      FUN_00b331bf(*(undefined4 **)((int)this + 0x26c));
      *(undefined4 *)((int)this + 100) = 0;
      uVar1 = FUN_00b340f6(*(void **)((int)this + 0x26c),*(uint *)((int)this + 0x298),
                           (undefined4 *)((int)this + 0x278));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      *(undefined4 *)((int)this + 0x40) = 1;
    }
    *(undefined4 *)((int)this + 0x26c) = *(undefined4 *)((int)this + 0x268);
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x54);
    if (*(int *)((int)this + 0x54) != 0) {
      piVar4 = (int *)((int)this + 0x278);
      piVar6 = param_1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      if (*(int *)(*(int *)((int)this + 0x268) + 0x6c) != 0) {
        *param_1 = 0xc;
      }
      return -(uint)(*(int *)((int)this + 0x48) != 0) & 0x80004005;
    }
  } while( true );
}


//// FUNCTION FUN_00b32e1a @ 00b32e1a ////

uint __fastcall FUN_00b32e1a(void *param_1)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int local_24 [8];
  
  if (*(int *)((int)param_1 + 0x68) == 0) {
    uVar1 = 0x8876086c;
  }
  else {
    do {
      uVar1 = FUN_00b32ad4(param_1,local_24);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    } while (local_24[0] != 0xd);
    this = *(void **)((int)param_1 + 0x68);
    *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = 0;
    FUN_00b2f805(this,1);
    if (*(undefined4 **)((int)param_1 + 0x68) == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = **(undefined4 **)((int)param_1 + 0x68);
    }
    *(undefined4 *)((int)param_1 + 0x298) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_00b32e76 @ 00b32e76 ////

void __fastcall FUN_00b32e76(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00b32e96 @ 00b32e96 ////

void __fastcall FUN_00b32e96(int *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[6]);
}


//// FUNCTION FUN_00b32ec7 @ 00b32ec7 ////

undefined4 __thiscall FUN_00b32ec7(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 5) {
    *(uint *)((int)this + 0x10) = param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80004005;
  }
  return uVar1;
}


//// FUNCTION FUN_00b32ee4 @ 00b32ee4 ////

void __thiscall FUN_00b32ee4(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((int)this + 0x14);
  uVar9 = 0;
  uVar3 = uVar1 >> 1;
  uVar5 = uVar1;
  if (uVar1 == 0) {
LAB_00b32f2e:
    if (uVar1 == (~uVar1 + 1 & uVar1)) {
      if (uVar1 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = uVar1 * 2;
      }
      puVar4 = operator_new(iVar7 << 2);
      if (puVar4 != (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)((int)this + 0x1c);
        for (uVar9 = *(uint *)((int)this + 0x14) & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x1c));
      }
      goto LAB_00b33015;
    }
    for (uVar9 = *(uint *)((int)this + 0x14); uVar3 < uVar9; uVar9 = uVar9 - 1) {
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x18) + uVar9 * 4);
      *puVar4 = puVar4[-1];
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x1c) + uVar9 * 4);
      *puVar4 = puVar4[-1];
    }
    *(uint *)(*(int *)((int)this + 0x18) + uVar3 * 4) = param_1;
    *(undefined4 *)(*(int *)((int)this + 0x1c) + uVar3 * 4) = 1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  }
  else {
    do {
      uVar2 = *(uint *)(*(int *)((int)this + 0x18) + uVar3 * 4);
      if (uVar2 < param_1) {
        uVar9 = uVar3 + 1;
        uVar6 = uVar5;
      }
      else {
        uVar6 = uVar3;
        if (uVar2 <= param_1) break;
      }
      uVar3 = uVar6 + uVar9 >> 1;
      uVar5 = uVar6;
    } while (uVar9 < uVar6);
    if (uVar5 <= uVar9) goto LAB_00b32f2e;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
LAB_00b33015:
                    /* WARNING: Subroutine does not return */
  _free((void *)0x0);
}


//// FUNCTION FUN_00b3306a @ 00b3306a ////

undefined4 __thiscall FUN_00b3306a(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  
  pcVar1 = param_1 + 1;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar4 = operator_new((uint)(pcVar3 + (5 - (int)pcVar1)));
  if (pcVar4 == (char *)0x0) {
    uVar5 = 0x8007000e;
  }
  else {
    *(undefined4 *)pcVar4 = *(undefined4 *)this;
    *(int *)((int)this + 4) = (int)(pcVar3 + (*(int *)((int)this + 4) - (int)pcVar1));
    *(char **)this = pcVar4;
    for (uVar6 = (uint)(pcVar3 + (1 - (int)pcVar1)) >> 2; pcVar4 = pcVar4 + 4, uVar6 != 0;
        uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
    }
    for (uVar6 = (uint)(pcVar3 + (1 - (int)pcVar1)) & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *param_1;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
    }
    uVar5 = 0;
  }
  return uVar5;
}


//// FUNCTION FUN_00b330c4 @ 00b330c4 ////

int __thiscall FUN_00b330c4(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  if (param_1 != (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      *param_1 = 0;
    }
    else {
      iVar3 = FUN_00b1cace(*(int *)((int)this + 4) + 1,param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1);
      pcVar4 = (char *)(iVar3 + *(int *)((int)this + 4));
      *pcVar4 = '\0';
      for (puVar2 = *(undefined4 **)this; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        pcVar5 = (char *)(puVar2 + 1);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar6 = (int)pcVar5 - ((int)puVar2 + 5);
        pcVar4 = pcVar4 + -uVar6;
        pcVar5 = (char *)(puVar2 + 1);
        pcVar8 = pcVar4;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00b33132 @ 00b33132 ////

undefined4 __fastcall FUN_00b33132(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00b3313a @ 00b3313a ////

void __fastcall FUN_00b3313a(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_00b33154 @ 00b33154 ////

void FUN_00b33154(void)

{
  return;
}


//// FUNCTION FUN_00b33155 @ 00b33155 ////

undefined4 __thiscall
FUN_00b33155(void *this,char *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_5 != 0) && (param_6 != 0)) {
    if (param_2 == -1) {
      if (param_1 == (char *)0x0) {
        param_2 = 0;
      }
      else {
        pcVar2 = param_1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        param_2 = (int)pcVar2 - (int)(param_1 + 1);
      }
    }
    if ((param_1 != (char *)0x0) || (param_2 == 0)) {
      *(char **)this = param_1;
      *(undefined4 *)((int)this + 0x18) = param_3;
      *(undefined4 *)((int)this + 0x1c) = param_4;
      *(int *)((int)this + 0x2c) = param_5;
      *(char **)((int)this + 4) = param_1 + param_2;
      *(int *)((int)this + 0x30) = param_6;
      return 0;
    }
  }
  return 0x80004005;
}


//// FUNCTION FUN_00b331bf @ 00b331bf ////

undefined4 __fastcall FUN_00b331bf(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)param_1[1];
  if ((char *)*param_1 < pcVar1) {
    do {
      pcVar2 = (char *)*param_1;
      if (*pcVar2 == '\n') {
        return 1;
      }
      if (*pcVar2 == '\\') {
        if ((pcVar2 + 1 < pcVar1) && (pcVar2[1] == '\n')) {
          pcVar2 = pcVar2 + 2;
        }
        else {
          if ((pcVar1 <= pcVar2 + 2) || ((pcVar2[1] != '\r' || (pcVar2[2] != '\n'))))
          goto LAB_00b33208;
          pcVar2 = pcVar2 + 3;
        }
        param_1[7] = param_1[7] + 1;
      }
      else {
LAB_00b33208:
        pcVar2 = pcVar2 + 1;
      }
      *param_1 = pcVar2;
    } while (pcVar2 < (char *)param_1[1]);
  }
  return 0;
}


//// FUNCTION FUN_00b3321a @ 00b3321a ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __thiscall FUN_00b3321a(void *this,char *param_1,double *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  double dVar8;
  undefined4 uStackY_1c;
  
  bVar1 = false;
  if (param_1 < *(char **)((int)this + 4)) {
    uStackY_1c = 0xb3323a;
    iVar2 = _isdigit((int)*param_1);
    pcVar4 = param_1;
    if (iVar2 == 0) goto LAB_00b3323f;
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
      if (*(char **)((int)this + 4) <= pcVar4) break;
      uStackY_1c = 0xb33274;
      iVar2 = _isdigit((int)*pcVar4);
    } while (iVar2 != 0);
    if ((pcVar4 < *(char **)((int)this + 4)) && (*pcVar4 == '.')) {
      pcVar4 = pcVar5 + 2;
      if (pcVar4 < *(char **)((int)this + 4)) {
        do {
          uStackY_1c = 0xb33299;
          iVar2 = _isdigit((int)*pcVar4);
          if (iVar2 == 0) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < *(char **)((int)this + 4));
      }
    }
    else {
      bVar1 = true;
    }
LAB_00b332c3:
    pcVar5 = pcVar4 + 1;
    if (pcVar5 < *(char **)((int)this + 4)) {
      uStackY_1c = 0xb332d4;
      iVar2 = _tolower((int)*pcVar4);
      if (iVar2 != 0x65) goto LAB_00b33302;
      uStackY_1c = 0xb332e3;
      iVar2 = _isdigit((int)*pcVar5);
      if (iVar2 == 0) goto LAB_00b33302;
      for (pcVar4 = pcVar4 + 2; pcVar4 < *(char **)((int)this + 4); pcVar4 = pcVar4 + 1) {
        uStackY_1c = 0xb332f5;
        iVar2 = _isdigit((int)*pcVar4);
        if (iVar2 == 0) break;
      }
    }
    else {
LAB_00b33302:
      if (pcVar4 + 2 < *(char **)((int)this + 4)) {
        uStackY_1c = 0xb33313;
        iVar2 = _tolower((int)*pcVar4);
        if ((iVar2 == 0x65) && (*pcVar5 == '-')) {
          uStackY_1c = 0xb33328;
          iVar2 = _isdigit((int)pcVar4[2]);
          if (iVar2 != 0) {
            for (pcVar4 = pcVar4 + 3; pcVar4 < *(char **)((int)this + 4); pcVar4 = pcVar4 + 1) {
              uStackY_1c = 0xb3333b;
              iVar2 = _isdigit((int)*pcVar4);
              if (iVar2 == 0) break;
            }
            goto LAB_00b3334e;
          }
        }
      }
      if (bVar1) goto LAB_00b33399;
    }
LAB_00b3334e:
    if (param_2 != (double *)0x0) {
      uVar6 = (int)pcVar4 - (int)param_1;
      iVar2 = -(uVar6 + 4 & 0xfffffffc);
      pcVar5 = param_1;
      pcVar7 = &stack0xffffffec + iVar2;
      for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      *(undefined1 **)(&stack0xffffffe8 + iVar2) = &stack0xffffffec + iVar2;
      (&stack0xffffffec)[uVar6 + iVar2] = 0;
      *(undefined4 *)((int)&uStackY_1c + iVar2) = 0xb3338c;
      dVar8 = _atof(*(char **)(&stack0xffffffe8 + iVar2));
      *param_2 = dVar8;
    }
    iVar2 = (int)pcVar4 - (int)param_1;
  }
  else {
LAB_00b3323f:
    if ((param_1 + 1 < *(char **)((int)this + 4)) && (*param_1 == '.')) {
      uStackY_1c = 0xb3325d;
      iVar2 = _isdigit((int)param_1[1]);
      if (iVar2 != 0) {
        for (pcVar4 = param_1 + 2; pcVar4 < *(char **)((int)this + 4); pcVar4 = pcVar4 + 1) {
          uStackY_1c = 0xb332b8;
          iVar2 = _isdigit((int)*pcVar4);
          if (iVar2 == 0) break;
        }
        goto LAB_00b332c3;
      }
    }
LAB_00b33399:
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00b333a5 @ 00b333a5 ////

uint __thiscall FUN_00b333a5(void *this,char *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((param_1 < *(char **)((int)this + 4)) &&
     ((iVar1 = _isalpha((int)*param_1), pcVar3 = param_1, iVar1 != 0 || (*param_1 == '_')))) {
    do {
      pcVar3 = pcVar3 + 1;
      if (*(char **)((int)this + 4) <= pcVar3) break;
      iVar1 = _isalnum((int)*pcVar3);
    } while ((iVar1 != 0) || (*pcVar3 == '_'));
    uVar4 = (int)pcVar3 - (int)param_1;
    pcVar3 = (char *)FUN_00b688f9(*(void **)((int)this + 0x2c),uVar4 + 1,1);
    if (pcVar3 != (char *)0x0) {
      pcVar5 = pcVar3;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar5 = *param_1;
        param_1 = param_1 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcVar3[uVar4] = '\0';
      *param_2 = pcVar3;
      return uVar4;
    }
  }
  return 0;
}


//// FUNCTION FUN_00b33429 @ 00b33429 ////

undefined4 __thiscall FUN_00b33429(void *this,char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  *param_2 = *param_1;
  pcVar1 = param_1 + 1;
  if (*(char **)((int)this + 4) <= pcVar1) {
    return 1;
  }
  cVar2 = *param_1;
  if ((cVar2 == '#') && ((cVar3 = *pcVar1, cVar3 == '#' || (cVar3 == '@')))) {
    param_2[1] = cVar3;
    return 2;
  }
  cVar3 = *pcVar1;
  if (cVar2 != cVar3) {
    if (cVar3 == '=') {
      if (cVar2 < '0') {
        if (((cVar2 != '/') && (cVar2 != '!')) &&
           ((cVar2 < '%' || (('&' < cVar2 && ((cVar2 < '*' || (('+' < cVar2 && (cVar2 != '-'))))))))
           )) {
          return 1;
        }
      }
      else if ((((cVar2 != '<') && (cVar2 != '>')) && (cVar2 != '^')) && (cVar2 != '|')) {
        return 1;
      }
      param_2[1] = '=';
      return 2;
    }
    if (cVar2 != '-') {
      return 1;
    }
    if (cVar3 == '>') {
      param_2[1] = '>';
      return 2;
    }
    return 1;
  }
  if (cVar2 < ';') {
    if ((((cVar2 != ':') && (cVar2 != '&')) && (cVar2 != '+')) && (cVar2 != '-')) {
      if (cVar2 != '.') {
        return 1;
      }
      pcVar1 = param_1 + 2;
      if (pcVar1 < *(char **)((int)this + 4)) {
        if (*pcVar1 == '.') {
          param_2[1] = cVar3;
          param_2[2] = *pcVar1;
          return 3;
        }
        return 1;
      }
      return 1;
    }
  }
  else {
    if (cVar2 == '<') {
LAB_00b334ba:
      param_2[1] = cVar3;
      if (*(char **)((int)this + 4) <= param_1 + 2) {
        return 2;
      }
      if (param_1[2] != '=') {
        return 2;
      }
      param_2[2] = '=';
      return 3;
    }
    if (cVar2 != '=') {
      if (cVar2 == '>') goto LAB_00b334ba;
      if (cVar2 != '|') {
        return 1;
      }
    }
  }
  param_2[1] = cVar3;
  return 2;
}


//// FUNCTION FUN_00b33537 @ 00b33537 ////

int __thiscall FUN_00b33537(void *this,char *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if (*(char **)((int)this + 4) <= param_1) {
    return 0;
  }
  iVar1 = _tolower((int)*param_1);
  if (iVar1 == 0x66) {
    uVar3 = 7;
  }
  else {
    pcVar2 = param_1;
    if (iVar1 != 0x68) goto LAB_00b3356d;
    uVar3 = 6;
  }
  pcVar2 = param_1 + 1;
LAB_00b3356d:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  return (int)pcVar2 - (int)param_1;
}


//// FUNCTION FUN_00b33581 @ 00b33581 ////

int __thiscall FUN_00b33581(void *this,char *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  bVar2 = false;
  bVar1 = false;
  pcVar4 = param_1;
  if (param_1 < *(char **)((int)this + 4)) {
    do {
      if (bVar1) {
LAB_00b335bc:
        if (bVar2) break;
        iVar3 = _tolower((int)*pcVar4);
        if (iVar3 != 0x6c) break;
        bVar2 = true;
      }
      else {
        iVar3 = _tolower((int)*pcVar4);
        if (iVar3 != 0x75) goto LAB_00b335bc;
        bVar1 = true;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < *(char **)((int)this + 4));
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      *param_2 = 4;
    }
    else if (bVar2) {
      *param_2 = 3;
    }
  }
  return (int)pcVar4 - (int)param_1;
}


//// FUNCTION FUN_00b3360a @ 00b3360a ////

void __thiscall FUN_00b3360a(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00b32ee4(this,param_1,&param_1);
  if (-1 < iVar1) {
    if (param_2 == 0xff) {
      puVar2 = (uint *)(*(int *)((int)this + 0x1c) + param_1 * 4);
      *puVar2 = *puVar2 & 0x20;
      puVar2 = (uint *)(param_1 * 4 + *(int *)((int)this + 0x1c));
      *puVar2 = *puVar2 | 1;
    }
    else if (param_2 == 0x10) {
      puVar2 = (uint *)(*(int *)((int)this + 0x1c) + param_1 * 4);
      *puVar2 = *puVar2 | 0x10;
    }
    else {
      puVar2 = (uint *)(*(int *)((int)this + 0x1c) + param_1 * 4);
      *puVar2 = *puVar2 & 0xfffffff0;
      puVar2 = (uint *)(param_1 * 4 + *(int *)((int)this + 0x1c));
      *puVar2 = *puVar2 | param_2 & 0xf;
    }
  }
  return;
}


//// FUNCTION FUN_00b33674 @ 00b33674 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00b33674(void *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *_Dest;
  size_t _Count;
  char local_1004 [4092];
  undefined4 uStack_8;
  
  uStack_8 = 0xb33683;
  _Dest = local_1004;
  _Count = 0xffe;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar1 = __snprintf(_Dest,0xffe,"%s",*(int *)(param_2 + 0x10));
      if (iVar1 < 0) {
        iVar1 = 0xffe;
      }
      _Dest = local_1004 + iVar1;
      _Count = 0xffe - iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    sVar2 = __snprintf(_Dest,_Count,"(%u): ",iVar1);
    if ((int)sVar2 < 0) {
      sVar2 = _Count;
    }
    _Dest = _Dest + sVar2;
    _Count = _Count - sVar2;
  }
  if (param_3 != 0) {
    sVar2 = __snprintf(_Dest,_Count,"error X%u: ",param_3);
    if ((int)sVar2 < 0) {
      sVar2 = _Count;
    }
    _Dest = _Dest + sVar2;
    _Count = _Count - sVar2;
  }
  sVar2 = __vsnprintf(_Dest,_Count,param_4,&stack0x00000014);
  if ((int)sVar2 < 0) {
    sVar2 = _Count;
  }
  _Dest[sVar2] = '\n';
  (_Dest + sVar2)[1] = '\0';
  *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
  FUN_00b3306a(param_1,local_1004);
  return;
}


//// FUNCTION FUN_00b3373b @ 00b3373b ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl FUN_00b3373b(void *param_1,int param_2,uint param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  size_t sVar4;
  char *_Dest;
  size_t _Count;
  char local_1010 [4096];
  uint local_10;
  char *local_c;
  int *local_8;
  
  local_8 = (int *)0xb3374a;
  _Dest = local_1010;
  _Count = 0xffe;
  iVar1 = FUN_00b32ee4(param_1,param_3,(uint *)&local_8);
  if (-1 < iVar1) {
    iVar1 = (int)local_8 * 4;
    local_10 = *(uint *)(iVar1 + *(int *)((int)param_1 + 0x1c));
    uVar2 = local_10 & 0xf;
    if (uVar2 == 0xf) {
      local_8 = (int *)((int)param_1 + 8);
      local_c = "error";
    }
    else {
      local_8 = (int *)((int)param_1 + 0xc);
      local_c = "warning";
      if ((((*(uint *)((int)param_1 + 0x10) == 0) || (uVar2 == 0)) ||
          (*(uint *)((int)param_1 + 0x10) < uVar2)) ||
         (((local_10 & 0x10) != 0 && ((local_10 & 0x20) != 0)))) {
        return 0;
      }
      puVar3 = (uint *)(*(int *)((int)param_1 + 0x1c) + iVar1);
      *puVar3 = *puVar3 | 0x20;
    }
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) != 0) {
        iVar1 = __snprintf(local_1010,0xffe,"%s",*(int *)(param_2 + 0x10));
        if (iVar1 < 0) {
          iVar1 = 0xffe;
        }
        _Dest = local_1010 + iVar1;
        _Count = 0xffe - iVar1;
      }
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      sVar4 = __snprintf(_Dest,_Count,"(%u): ",iVar1);
      if ((int)sVar4 < 0) {
        sVar4 = _Count;
      }
      _Dest = _Dest + sVar4;
      _Count = _Count - sVar4;
    }
    if (param_3 != 0) {
      sVar4 = __snprintf(_Dest,_Count,"%s X%u: ",local_c,param_3);
      if ((int)sVar4 < 0) {
        sVar4 = _Count;
      }
      _Dest = _Dest + sVar4;
      _Count = _Count - sVar4;
    }
    sVar4 = __vsnprintf(_Dest,_Count,param_4,&stack0x00000014);
    if ((int)sVar4 < 0) {
      sVar4 = _Count;
    }
    _Dest[sVar4] = '\n';
    (_Dest + sVar4)[1] = '\0';
    *local_8 = *local_8 + 1;
    iVar1 = FUN_00b3306a(param_1,local_1010);
  }
  return iVar1;
}


//// FUNCTION FUN_00b33898 @ 00b33898 ////

void __thiscall FUN_00b33898(void *this,int param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char local_104 [256];
  
  switch(*param_2) {
  case 0:
    pcVar1 = "version token";
    break;
  case 1:
    goto LAB_00b3393d;
  case 2:
    pcVar1 = "integer \'%u\'";
    goto LAB_00b33942;
  case 3:
    pcVar1 = "integer \'%dl\'";
    goto LAB_00b33942;
  case 4:
    pcVar1 = "integer \'%uul\'";
    goto LAB_00b33942;
  case 5:
    uVar2 = *(undefined8 *)(param_2 + 2);
    pcVar1 = "float \'%g\'";
    goto LAB_00b33924;
  case 6:
    uVar2 = *(undefined8 *)(param_2 + 2);
    pcVar1 = "float \'%gh\'";
    goto LAB_00b33924;
  case 7:
    uVar2 = *(undefined8 *)(param_2 + 2);
    pcVar1 = "float \'%gf\'";
    goto LAB_00b33924;
  case 8:
    uVar2 = *(undefined8 *)(param_2 + 2);
    pcVar1 = "float \'%gl\'";
LAB_00b33924:
    __snprintf(local_104,0x100,pcVar1,uVar2);
    goto LAB_00b33986;
  case 9:
LAB_00b3393d:
    pcVar1 = "token \'%s\'";
LAB_00b33942:
    __snprintf(local_104,0x100,pcVar1);
    goto LAB_00b33986;
  case 10:
    pcVar1 = "string constant";
    break;
  default:
    pcVar1 = "token";
    break;
  case 0xc:
    pcVar1 = "end of line";
    break;
  case 0xd:
    pcVar1 = "end of file";
  }
  __snprintf(local_104,0x100,pcVar1);
LAB_00b33986:
  FUN_00b33674(this,(int)param_2,param_1,"syntax error : unexpected %s");
  return;
}


//// FUNCTION FUN_00b339dd @ 00b339dd ////

undefined4 __fastcall FUN_00b339dd(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (*param_1 < param_1[1]) {
    do {
      pcVar3 = (char *)*param_1;
      cVar1 = *pcVar3;
      if (cVar1 == '\n') {
        pcVar3 = pcVar3 + 1;
        param_1[7] = param_1[7] + 1;
        local_8 = 1;
LAB_00b33af2:
        *param_1 = (uint)pcVar3;
      }
      else {
        if ((cVar1 == ' ') || (('\b' < cVar1 && (cVar1 < '\x0e')))) {
          pcVar3 = pcVar3 + 1;
          goto LAB_00b33af2;
        }
        if (cVar1 == '/') {
          if ((pcVar3 + 1 < (char *)param_1[1]) && (pcVar3[1] == '/')) goto LAB_00b33a3b;
          pcVar2 = (char *)param_1[1];
          if ((pcVar2 <= pcVar3 + 1) || (pcVar3[1] != '*')) goto LAB_00b33aaf;
          *param_1 = (uint)(pcVar3 + 2);
          if (pcVar3 + 2 < pcVar2) {
            do {
              pcVar3 = (char *)*param_1;
              if (((*pcVar3 == '*') && (pcVar3 + 1 < pcVar2)) && (pcVar3[1] == '/')) break;
              if (*pcVar3 == '\n') {
                param_1[7] = param_1[7] + 1;
              }
              *param_1 = (uint)(pcVar3 + 1);
            } while (pcVar3 + 1 < (char *)param_1[1]);
          }
          if ((char *)*param_1 < pcVar2) {
            pcVar3 = (char *)*param_1 + 2;
            goto LAB_00b33af2;
          }
          FUN_00b33674((void *)param_1[0xc],(int)(param_1 + 2),0x3e9,
                       "comment continues past end of file");
        }
        else {
LAB_00b33aaf:
          if (((param_1[10] & 2) == 0) || (cVar1 != ';')) {
            if (cVar1 != '\\') {
              return local_8;
            }
            if ((pcVar3 + 1 < (char *)param_1[1]) && (pcVar3[1] == '\n')) {
              pcVar3 = pcVar3 + 2;
            }
            else {
              if ((char *)param_1[1] <= pcVar3 + 2) {
                return local_8;
              }
              if (pcVar3[1] != '\r') {
                return local_8;
              }
              if (pcVar3[2] != '\n') {
                return local_8;
              }
              pcVar3 = pcVar3 + 3;
            }
            param_1[7] = param_1[7] + 1;
            goto LAB_00b33af2;
          }
LAB_00b33a3b:
          FUN_00b331bf(param_1);
        }
      }
    } while (*param_1 < param_1[1]);
  }
  return local_8;
}


//// FUNCTION FUN_00b33b06 @ 00b33b06 ////

int __thiscall FUN_00b33b06(void *this,char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_1 + 2;
  if ((((pcVar4 < *(char **)((int)this + 4)) && (*param_1 == '0')) && (param_1[1] == 'x')) &&
     (iVar2 = _isxdigit((int)*pcVar4), iVar2 != 0)) {
    iVar2 = 0;
    while ((pcVar4 < *(char **)((int)this + 4) && (iVar3 = _isxdigit((int)*pcVar4), iVar3 != 0))) {
      cVar1 = *pcVar4;
      iVar2 = iVar2 * 0x10;
      if (cVar1 < 'a') {
        if (cVar1 < 'A') {
          iVar2 = iVar2 + -0x30 + (int)cVar1;
        }
        else {
          iVar2 = iVar2 + -0x37 + (int)cVar1;
        }
      }
      else {
        iVar2 = iVar2 + -0x57 + (int)cVar1;
      }
      pcVar4 = pcVar4 + 1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar2;
    }
    iVar2 = (int)pcVar4 - (int)param_1;
    if (10 < iVar2) {
      FUN_00b33674(*(void **)((int)this + 0x30),(int)this + 8,0x3ea,"hex value truncated to 32bits")
      ;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00b33baa @ 00b33baa ////

int __thiscall FUN_00b33baa(void *this,char *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_1 < *(char **)((int)this + 4)) && (*param_1 == '0')) {
    uVar3 = 0;
    bVar2 = false;
    pcVar5 = param_1;
    while (((pcVar5 = pcVar5 + 1, pcVar5 < *(char **)((int)this + 4) &&
            (cVar1 = *pcVar5, '/' < cVar1)) && (cVar1 < '8'))) {
      if ((uVar3 & 0xe0000000) != 0) {
        bVar2 = true;
      }
      uVar3 = cVar1 + -0x30 + uVar3 * 8;
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar3;
    }
    if (bVar2) {
      FUN_00b33674(*(void **)((int)this + 0x30),(int)this + 8,0x3eb,
                   "octal value truncated to 32bits");
    }
    iVar4 = (int)pcVar5 - (int)param_1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


//// FUNCTION FUN_00b33c28 @ 00b33c28 ////

int __thiscall FUN_00b33c28(void *this,char *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  if ((*(char **)((int)this + 4) <= param_1) || (iVar2 = _isdigit((int)*param_1), iVar2 == 0)) {
    return 0;
  }
  uVar5 = 0;
  bVar1 = false;
  pcVar4 = param_1;
  if (param_1 < *(char **)((int)this + 4)) {
    do {
      iVar2 = _isdigit((int)*pcVar4);
      if (iVar2 == 0) break;
      if (0x19999999 < uVar5) {
        bVar1 = true;
      }
      uVar3 = uVar5 * 10;
      uVar5 = *pcVar4 + -0x30 + uVar3;
      if (uVar5 < uVar3) {
        bVar1 = true;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < *(char **)((int)this + 4));
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar5;
  }
  if (bVar1) {
    FUN_00b33674(*(void **)((int)this + 0x30),(int)this + 8,0x3ec,
                 "decimal value truncated to 32bits");
  }
  return (int)pcVar4 - (int)param_1;
}


//// FUNCTION FUN_00b33ccb @ 00b33ccb ////

int __thiscall FUN_00b33ccb(void *this,char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(char **)((int)this + 4) <= param_1) {
    return 0;
  }
  cVar1 = *param_1;
  if ((cVar1 == '\\') && ((*(byte *)((int)this + 0x28) & 4) == 0)) {
    pcVar4 = param_1 + 1;
    if (*(char **)((int)this + 4) <= pcVar4) {
      FUN_00b33674(*(void **)((int)this + 0x30),(int)this + 8,0x3ef,
                   "character continues past end of file");
    }
    cVar1 = *pcVar4;
    if (cVar1 == 'a') {
      *param_2 = 7;
    }
    else if (cVar1 == 'b') {
      *param_2 = 8;
    }
    else if (cVar1 == 'f') {
      *param_2 = 0xc;
    }
    else if (cVar1 == 'n') {
      *param_2 = 10;
    }
    else if (cVar1 == 'r') {
      *param_2 = 0xd;
    }
    else if (cVar1 == 't') {
      *param_2 = 9;
    }
    else {
      if (cVar1 != 'v') {
        if (('/' < cVar1) && (cVar1 < '8')) {
          pcVar5 = *(char **)((int)this + 4);
          if (param_1 + 4 < *(char **)((int)this + 4)) {
            pcVar5 = param_1 + 4;
          }
          iVar3 = 0;
          for (; ((pcVar4 < pcVar5 && (cVar1 = *pcVar4, '/' < cVar1)) && (cVar1 < '8'));
              pcVar4 = pcVar4 + 1) {
            iVar3 = cVar1 + -0x30 + iVar3 * 8;
          }
          *param_2 = iVar3;
          pcVar5 = pcVar4;
          goto LAB_00b33e59;
        }
        if ((cVar1 == 'x') &&
           ((pcVar5 = param_1 + 2, pcVar5 < *(char **)((int)this + 4) &&
            (iVar3 = _isxdigit((int)*pcVar5), iVar3 != 0)))) {
          iVar3 = 0;
          while ((pcVar5 < *(char **)((int)this + 4) &&
                 (iVar2 = _isxdigit((int)*pcVar5), iVar2 != 0))) {
            cVar1 = *pcVar5;
            iVar3 = iVar3 * 0x10;
            if (cVar1 < 'a') {
              if (cVar1 < 'A') {
                iVar3 = iVar3 + -0x30 + (int)cVar1;
              }
              else {
                iVar3 = iVar3 + -0x37 + (int)cVar1;
              }
            }
            else {
              iVar3 = iVar3 + -0x57 + (int)cVar1;
            }
            pcVar5 = pcVar5 + 1;
          }
          *param_2 = iVar3;
          goto LAB_00b33e59;
        }
        cVar1 = *pcVar4;
        pcVar5 = param_1 + 2;
        goto LAB_00b33e54;
      }
      *param_2 = 0xb;
    }
    pcVar5 = param_1 + 2;
  }
  else {
    pcVar5 = param_1 + 1;
LAB_00b33e54:
    *param_2 = (int)cVar1;
  }
LAB_00b33e59:
  return (int)pcVar5 - (int)param_1;
}


//// FUNCTION FUN_00b33e64 @ 00b33e64 ////

byte * __thiscall FUN_00b33e64(void *this,byte *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_30 [4];
  byte abStack_2c [28];
  undefined4 local_10;
  undefined4 local_c;
  
  pbVar3 = param_1;
  if ((*(byte *)((int)this + 0x28) & 2) == 0) {
    return (byte *)0x0;
  }
  pbVar4 = param_1 + 1;
  if ((((pbVar4 < *(byte **)((int)this + 4)) && (iVar1 = _isalpha((int)(char)*param_1), iVar1 != 0))
      && (iVar1 = _isalpha((int)(char)*pbVar4), iVar1 != 0)) &&
     ((pbVar3 + 2 < *(byte **)((int)this + 4) && (pbVar3[2] == 0x2e)))) {
    iVar1 = FUN_00b33c28(this,(char *)(pbVar3 + 3),(uint *)&param_1);
    if (((iVar1 != 0) &&
        ((param_1 < (byte *)0x100 &&
         (pbVar4 = pbVar3 + 3 + iVar1, pbVar4 < *(byte **)((int)this + 4))))) && (*pbVar4 == 0x2e))
    {
      pbVar4 = pbVar4 + 1;
      uVar2 = FUN_00b33c28(this,(char *)pbVar4,(uint *)&param_1);
      if (uVar2 == 0) {
        uVar2 = FUN_00b333a5(this,(char *)pbVar4,&param_1);
        if (uVar2 == 0) {
          return (byte *)0x0;
        }
        param_1 = (byte *)0x0;
      }
      if ((param_1 < (byte *)0x100) &&
         (pbVar4 = pbVar4 + (uVar2 - (int)pbVar3), pbVar4 < (byte *)0x20)) {
        pbVar5 = local_30;
        for (uVar2 = (uint)pbVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          pbVar5 = pbVar5 + 4;
        }
        for (uVar2 = (uint)pbVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pbVar5 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
        }
        local_30[(int)pbVar4] = 0;
        iVar1 = FUN_00b27a0c(local_30,1,&local_10);
        if (-1 < iVar1) {
          *param_2 = local_c;
          return pbVar4;
        }
      }
    }
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_00b33f69 @ 00b33f69 ////

char * __thiscall FUN_00b33f69(void *this,char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_1 < *(char **)((int)this + 4)) && (*param_1 == '\'')) {
    iVar1 = FUN_00b33ccb(this,param_1 + 1,param_2);
    if ((iVar1 != 0) &&
       ((pcVar2 = param_1 + 1 + iVar1, pcVar2 < *(char **)((int)this + 4) && (*pcVar2 == '\'')))) {
      return pcVar2 + (1 - (int)param_1);
    }
  }
  return (char *)0x0;
}


//// FUNCTION FUN_00b33fac @ 00b33fac ////

int __thiscall FUN_00b33fac(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar2 = param_1;
  if (*(char **)((int)this + 4) <= param_1) {
    return 0;
  }
  if (*param_1 == '\"') {
    param_1._3_1_ = '\"';
  }
  else {
    if (*param_1 != '<') {
      return 0;
    }
    if ((*(byte *)((int)this + 0x28) & 8) == 0) {
      return 0;
    }
    param_1._3_1_ = '>';
  }
  pcVar8 = pcVar2 + 1;
  pcVar7 = pcVar8;
  if (pcVar8 < *(char **)((int)this + 4)) {
    pcVar5 = pcVar2 + 2;
    do {
      cVar1 = *pcVar7;
      if ((param_1._3_1_ == cVar1) || (cVar1 == '\n')) break;
      pcVar4 = pcVar5;
      pcVar6 = pcVar7;
      if ((cVar1 == '\\') && ((*(byte *)((int)this + 0x28) & 4) == 0)) {
        pcVar6 = pcVar7 + 1;
        pcVar4 = pcVar5 + 1;
        if (pcVar6 < *(char **)((int)this + 4)) {
          if (*pcVar6 != '\n') {
            if (((*pcVar6 != '\r') || (*(char **)((int)this + 4) <= pcVar4)) || (*pcVar4 != '\n'))
            goto LAB_00b3402a;
            pcVar6 = pcVar7 + 2;
            pcVar4 = pcVar5 + 2;
          }
          *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
        }
      }
LAB_00b3402a:
      pcVar7 = pcVar6 + 1;
      pcVar5 = pcVar4 + 1;
    } while (pcVar7 < *(char **)((int)this + 4));
  }
  if (pcVar7 < *(char **)((int)this + 4)) {
    if (*pcVar7 != '\n') goto LAB_00b34064;
    pcVar5 = "string continues past end of line";
    iVar9 = 0x3ed;
  }
  else {
    pcVar5 = "string continues past end of file";
    iVar9 = 0x3ee;
    pcVar7 = *(char **)((int)this + 4);
  }
  FUN_00b33674(*(void **)((int)this + 0x30),(int)this + 8,iVar9,pcVar5);
LAB_00b34064:
  puVar3 = (undefined1 *)FUN_00b688f9(*(void **)((int)this + 0x2c),(int)pcVar7 - (int)pcVar2,1);
  if (puVar3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_2 = puVar3;
  do {
    pcVar5 = pcVar8 + 1;
    if (pcVar5 < pcVar7) {
      pcVar4 = pcVar8 + 2;
      do {
        if ((*pcVar8 != '\\') || ((*(byte *)((int)this + 0x28) & 4) != 0)) break;
        if (*pcVar5 == '\n') {
          pcVar8 = pcVar8 + 2;
          pcVar4 = pcVar4 + 2;
          pcVar5 = pcVar5 + 2;
        }
        else {
          if (((*pcVar5 != '\r') || (pcVar7 <= pcVar4)) || (*pcVar4 != '\n')) break;
          pcVar8 = pcVar8 + 3;
          pcVar4 = pcVar4 + 3;
          pcVar5 = pcVar5 + 3;
        }
      } while (pcVar5 < pcVar7);
    }
    if (pcVar7 <= pcVar8) {
      *puVar3 = 0;
      return ((int)pcVar7 - (int)pcVar2) + 1;
    }
    iVar9 = FUN_00b33ccb(this,pcVar8,(int *)&param_2);
    pcVar8 = pcVar8 + iVar9;
    *puVar3 = param_2._0_1_;
    puVar3 = puVar3 + 1;
  } while( true );
}


//// FUNCTION FUN_00b340f6 @ 00b340f6 ////

undefined4 __thiscall FUN_00b340f6(void *this,uint param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  *(uint *)((int)this + 0x28) = param_1;
  param_2[4] = *(undefined4 *)((int)this + 0x18);
  pbVar5 = (byte *)0x0;
  param_2[5] = *(undefined4 *)((int)this + 0x1c);
  iVar3 = FUN_00b339dd(this);
  if (iVar3 != 0) {
    *param_2 = 0xc;
    goto LAB_00b342a6;
  }
  param_2[4] = *(undefined4 *)((int)this + 0x18);
  param_2[5] = *(undefined4 *)((int)this + 0x1c);
  pcVar2 = *(char **)this;
  if (*(char **)((int)this + 4) <= pcVar2) {
    *param_2 = 0xd;
    goto LAB_00b342a6;
  }
  cVar1 = *pcVar2;
  if (((cVar1 < '0') || ('9' < cVar1)) && (cVar1 != '.')) {
    if (cVar1 == '\'') {
      pbVar5 = (byte *)FUN_00b33f69(this,pcVar2,param_2 + 2);
      if (pbVar5 != (byte *)0x0) {
        *param_2 = 2;
        goto LAB_00b342a6;
      }
    }
    else if (cVar1 == '\"') {
      pbVar5 = (byte *)FUN_00b33fac(this,pcVar2,param_2 + 2);
      if (pbVar5 != (byte *)0x0) {
        *param_2 = 10;
        goto LAB_00b342a6;
      }
    }
    else if (((*(byte *)((int)this + 0x28) & 4) == 0) || (cVar1 != '<')) {
      iVar3 = _isalpha((int)cVar1);
      if ((iVar3 != 0) || (**(char **)this == '_')) {
        if (((*(byte *)((int)this + 0x28) & 2) != 0) &&
           (pbVar5 = FUN_00b33e64(this,*(byte **)this,param_2 + 2), pbVar5 != (byte *)0x0)) {
          *param_2 = 0;
          goto LAB_00b342a6;
        }
        pbVar5 = (byte *)FUN_00b333a5(this,*(char **)this,param_2 + 2);
        if (pbVar5 != (byte *)0x0) {
          *param_2 = 9;
          goto LAB_00b342a6;
        }
      }
    }
    else {
      pbVar5 = (byte *)FUN_00b33fac(this,pcVar2,param_2 + 2);
      if (pbVar5 != (byte *)0x0) {
        *param_2 = 0xb;
        goto LAB_00b342a6;
      }
    }
LAB_00b34291:
    pbVar5 = (byte *)FUN_00b33429(this,*(char **)this,(char *)(param_2 + 2));
    *param_2 = 1;
  }
  else {
    iVar3 = FUN_00b3321a(this,pcVar2,(double *)(param_2 + 2));
    if (iVar3 == 0) {
      iVar3 = FUN_00b33b06(this,*(char **)this,param_2 + 2);
      if (((iVar3 == 0) && (iVar3 = FUN_00b33baa(this,*(char **)this,param_2 + 2), iVar3 == 0)) &&
         (iVar3 = FUN_00b33c28(this,*(char **)this,param_2 + 2), iVar3 == 0)) goto LAB_00b34291;
      *param_2 = 2;
      iVar4 = FUN_00b33581(this,(char *)(*(int *)this + iVar3),param_2);
    }
    else {
      *param_2 = 5;
      iVar4 = FUN_00b33537(this,(char *)(*(int *)this + iVar3),param_2);
    }
    pbVar5 = (byte *)(iVar3 + iVar4);
  }
LAB_00b342a6:
  param_2[6] = *(undefined4 *)this;
  param_2[7] = pbVar5;
  *(byte **)this = pbVar5 + *(int *)this;
  return 0;
}


//// FUNCTION FUN_00b342b9 @ 00b342b9 ////

undefined4 FUN_00b342b9(char *param_1,undefined1 *param_2,byte *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  char local_20 [27];
  byte local_5;
  
  cVar1 = *param_1;
  pcVar7 = param_1;
  while ((cVar1 != '\0' && (iVar2 = _isalpha((int)*pcVar7), iVar2 != 0))) {
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  if (*pcVar7 == '\0') {
    local_5 = 0;
  }
  else {
    lVar3 = _atol(pcVar7);
    local_5 = (byte)lVar3;
  }
  if (0xf < local_5) {
    *param_2 = 0;
    *param_3 = 0xff;
    return 0x80004005;
  }
  uVar6 = (int)pcVar7 - (int)param_1;
  if ((uVar6 == 0) || (0x14 < uVar6)) {
    return 0x80004005;
  }
  cVar1 = *pcVar7;
  if (cVar1 != '\0') {
    do {
      iVar2 = _isdigit((int)cVar1);
      if (iVar2 == 0) break;
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    } while (cVar1 != '\0');
    if (*pcVar7 != '\0') {
      return 0x80004005;
    }
  }
  if (*param_1 != '\0') {
    iVar2 = -(int)param_1;
    do {
      iVar4 = _isalpha((int)*param_1);
      if (iVar4 == 0) break;
      iVar4 = _toupper((int)*param_1);
      param_1[(int)(local_20 + iVar2)] = (char)iVar4;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
  }
  iVar2 = 9;
  bVar9 = true;
  local_20[uVar6] = '\0';
  iVar4 = iVar2;
  pcVar7 = local_20;
  pcVar8 = "POSITION";
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0xc;
    bVar9 = true;
    pcVar7 = local_20;
    pcVar8 = "BLENDWEIGHT";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (bVar9) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0xd;
      bVar9 = true;
      pcVar7 = local_20;
      pcVar8 = "BLENDINDICES";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        iVar4 = 2;
      }
      else {
        iVar4 = 7;
        bVar9 = true;
        pcVar7 = local_20;
        pcVar8 = "NORMAL";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar9 = *pcVar7 == *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          iVar4 = 3;
        }
        else {
          iVar4 = 6;
          bVar9 = true;
          iVar5 = iVar4;
          pcVar7 = local_20;
          pcVar8 = "PSIZE";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            iVar4 = 4;
          }
          else {
            bVar9 = true;
            iVar5 = iVar2;
            pcVar7 = local_20;
            pcVar8 = "TEXCOORD";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar9 = *pcVar7 == *pcVar8;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              iVar4 = 5;
            }
            else {
              iVar5 = 8;
              bVar9 = true;
              pcVar7 = local_20;
              pcVar8 = "TANGENT";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar9 = *pcVar7 == *pcVar8;
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar8 + 1;
              } while (bVar9);
              if (!bVar9) {
                bVar9 = true;
                iVar4 = iVar2;
                pcVar7 = local_20;
                pcVar8 = "BINORMAL";
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *pcVar7 == *pcVar8;
                  pcVar7 = pcVar7 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  iVar4 = 7;
                }
                else {
                  iVar4 = 0xb;
                  bVar9 = true;
                  iVar5 = iVar4;
                  pcVar7 = local_20;
                  pcVar8 = "TESSFACTOR";
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar9 = *pcVar7 == *pcVar8;
                    pcVar7 = pcVar7 + 1;
                    pcVar8 = pcVar8 + 1;
                  } while (bVar9);
                  if (bVar9) {
                    iVar4 = 8;
                  }
                  else {
                    iVar5 = 10;
                    bVar9 = true;
                    pcVar7 = local_20;
                    pcVar8 = "POSITIONT";
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar9 = *pcVar7 == *pcVar8;
                      pcVar7 = pcVar7 + 1;
                      pcVar8 = pcVar8 + 1;
                    } while (bVar9);
                    if (bVar9) {
                      iVar4 = 9;
                    }
                    else {
                      iVar5 = 6;
                      bVar9 = true;
                      pcVar7 = local_20;
                      pcVar8 = "COLOR";
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar9 = *pcVar7 == *pcVar8;
                        pcVar7 = pcVar7 + 1;
                        pcVar8 = pcVar8 + 1;
                      } while (bVar9);
                      if (!bVar9) {
                        iVar5 = 4;
                        bVar9 = true;
                        pcVar7 = local_20;
                        pcVar8 = "FOG";
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar9 = *pcVar7 == *pcVar8;
                          pcVar7 = pcVar7 + 1;
                          pcVar8 = pcVar8 + 1;
                        } while (bVar9);
                        if (bVar9) goto LAB_00b344e3;
                        iVar4 = 6;
                        bVar9 = true;
                        pcVar7 = local_20;
                        pcVar8 = "DEPTH";
                        do {
                          if (iVar4 == 0) break;
                          iVar4 = iVar4 + -1;
                          bVar9 = *pcVar7 == *pcVar8;
                          pcVar7 = pcVar7 + 1;
                          pcVar8 = pcVar8 + 1;
                        } while (bVar9);
                        if (bVar9) {
                          iVar4 = 0xc;
                          goto LAB_00b344e3;
                        }
                        iVar4 = 7;
                        bVar9 = true;
                        pcVar7 = local_20;
                        pcVar8 = "SAMPLE";
                        do {
                          if (iVar4 == 0) break;
                          iVar4 = iVar4 + -1;
                          bVar9 = *pcVar7 == *pcVar8;
                          pcVar7 = pcVar7 + 1;
                          pcVar8 = pcVar8 + 1;
                        } while (bVar9);
                        if (bVar9) {
                          iVar4 = 0xd;
                          goto LAB_00b344e3;
                        }
                        iVar4 = 8;
                        bVar9 = true;
                        pcVar7 = local_20;
                        pcVar8 = "DIFFUSE";
                        do {
                          if (iVar4 == 0) break;
                          iVar4 = iVar4 + -1;
                          bVar9 = *pcVar7 == *pcVar8;
                          pcVar7 = pcVar7 + 1;
                          pcVar8 = pcVar8 + 1;
                        } while (bVar9);
                        if (bVar9) {
                          local_5 = 0;
                        }
                        else {
                          bVar9 = true;
                          pcVar7 = local_20;
                          pcVar8 = "SPECULAR";
                          do {
                            if (iVar2 == 0) break;
                            iVar2 = iVar2 + -1;
                            bVar9 = *pcVar7 == *pcVar8;
                            pcVar7 = pcVar7 + 1;
                            pcVar8 = pcVar8 + 1;
                          } while (bVar9);
                          if (!bVar9) {
                            return 0x80004005;
                          }
                          local_5 = 1;
                        }
                      }
                      iVar4 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00b344e3:
  *param_2 = (char)iVar4;
  *param_3 = local_5;
  return 0;
}


//// FUNCTION FUN_00b34500 @ 00b34500 ////

char * FUN_00b34500(undefined1 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = "POSITION";
    break;
  case 1:
    pcVar1 = "BLENDWEIGHT";
    break;
  case 2:
    pcVar1 = "BLENDINDICES";
    break;
  case 3:
    pcVar1 = "NORMAL";
    break;
  case 4:
    pcVar1 = "PSIZE";
    break;
  case 5:
    pcVar1 = "TEXCOORD";
    break;
  case 6:
    pcVar1 = "TANGENT";
    break;
  case 7:
    pcVar1 = "BINORMAL";
    break;
  case 8:
    pcVar1 = "TESSFACTOR";
    break;
  case 9:
    pcVar1 = "POSITIONT";
    break;
  case 10:
    pcVar1 = "COLOR";
    break;
  case 0xb:
    pcVar1 = "FOG";
    break;
  case 0xc:
    pcVar1 = "DEPTH";
    break;
  case 0xd:
    pcVar1 = "SAMPLE";
    break;
  default:
    pcVar1 = "UNKNOWN";
  }
  return pcVar1;
}


//// FUNCTION FUN_00b345b8 @ 00b345b8 ////

uint FUN_00b345b8(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1 == (char *)0x0) || (cVar1 = *param_1, cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    do {
      iVar2 = _toupper((int)cVar1);
      uVar3 = uVar3 * 0x13 + iVar2;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    uVar3 = uVar3 % 7;
  }
  return uVar3;
}


//// FUNCTION FUN_00b345f9 @ 00b345f9 ////

undefined4 * __thiscall FUN_00b345f9(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_00b345b8(param_1);
  puVar3 = *(undefined4 **)((int)this + uVar1 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar2 = lstrcmpiA((LPCSTR)*puVar3,param_1);
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)puVar3[8];
  }
  return puVar3;
}


//// FUNCTION FUN_00b3462f @ 00b3462f ////

void __thiscall FUN_00b3462f(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    for (iVar1 = *(int *)((int)this + uVar3 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
      *(int *)(param_1 + iVar2 * 4) = iVar1;
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}


//// FUNCTION FUN_00b34659 @ 00b34659 ////

void __fastcall FUN_00b34659(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  return;
}


//// FUNCTION FUN_00b34675 @ 00b34675 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00b34675(undefined4 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char local_1004 [255];
  undefined1 local_f05;
  undefined4 uStack_8;
  
  uStack_8 = 0xb34684;
  iVar2 = 0xd;
  bVar5 = true;
  param_1[0x13] = 1;
  pcVar3 = param_2;
  pcVar4 = "syntax error";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    piVar1 = param_1 + 4;
    FUN_00b33898((void *)*param_1,2000,piVar1);
    if (*piVar1 == 9) {
      if (param_1[0x15] == 0x7e7) {
        FUN_00b33674((void *)*param_1,(int)piVar1,0x7e7,
                     "\'%s\' is not a valid instruction in this shader version");
      }
      if (param_1[0x15] == 0x7e8) {
        FUN_00b33674((void *)*param_1,(int)piVar1,0x7e8,"invalid instruction modifiers \'%s\'");
      }
    }
  }
  else {
    __vsnprintf(local_1004,0x1000,param_2,&stack0x0000000c);
    local_f05 = 0;
    FUN_00b33674((void *)*param_1,(int)(param_1 + 4),0,"%s");
  }
  return;
}


//// FUNCTION FUN_00b34735 @ 00b34735 ////

undefined4
FUN_00b34735(undefined4 param_1,undefined4 param_2,short param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  if (param_3 == 1) {
LAB_00b3477c:
    FUN_00b3373b((void *)*param_6,param_6[0xc],param_4 + 5000,"%s");
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 5) goto LAB_00b3477c;
      if (param_3 != 6) {
        return 0;
      }
    }
    FUN_00b33674((void *)*param_6,param_6[0xc],param_4 + 5000,"%s");
    param_6[0x13] = 1;
  }
  return 0;
}


//// FUNCTION FUN_00b347a3 @ 00b347a3 ////

int __thiscall FUN_00b347a3(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x4c) == 0) {
      FUN_00b33674(*(void **)this,(int)this + 0x10,0,"internal error: production failed");
      *(undefined4 *)((int)this + 0x4c) = 1;
    }
    *(undefined4 *)((int)this + 0x50) = 1;
    param_1 = 0;
  }
  return param_1;
}


//// FUNCTION FUN_00b347dd @ 00b347dd ////

int __thiscall FUN_00b347dd(void *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_58 [16];
  byte *local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_3c = *(byte **)(param_1 + 8);
  *(undefined4 *)((int)this + 0x54) = 0;
  local_14 = this;
  local_8 = 0x10d;
  local_44 = 0;
  local_c = 0;
  local_10 = 0;
  local_40 = 1;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_38 = 0;
  local_18 = local_3c;
  iVar8 = 0;
  if (*local_3c == 0) {
LAB_00b350a2:
    *(uint *)((int)this + 0x44) = local_c;
    *(uint *)((int)this + 0x48) = local_10;
    *(int *)((int)this + 0x40) = iVar8;
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  else {
    do {
      iVar8 = 3;
      for (; (*local_18 != 0 && (*local_18 != 0x5f)); local_18 = local_18 + 1) {
      }
      uVar3 = (int)local_18 - (int)local_3c;
      if (0xf < uVar3) goto LAB_00b3509b;
      pbVar4 = local_3c;
      pbVar9 = local_58;
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        pbVar9 = pbVar9 + 1;
      }
      local_58[uVar3] = 0;
      if (*local_18 != 0) {
        local_18 = local_18 + 1;
      }
      local_3c = local_18;
      if (local_40 == 0) {
        if (local_30 != 0) {
          iVar5 = 4;
          bVar10 = true;
          pbVar4 = local_58;
          pbVar9 = &DAT_00d90d88;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar10 = *pbVar4 == *pbVar9;
            pbVar4 = pbVar4 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar10);
          if (bVar10) {
            local_c = local_c | 0x100000;
            local_28 = 0;
            local_30 = 0;
            goto LAB_00b3503b;
          }
        }
        if (local_34 != 0) {
          iVar5 = 9;
          bVar10 = true;
          pbVar4 = local_58;
          pbVar9 = (byte *)"centroid";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar10 = *pbVar4 == *pbVar9;
            pbVar4 = pbVar4 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar10);
          if (bVar10) {
            local_c = local_c | 0x400000;
            local_34 = 0;
            goto LAB_00b3503b;
          }
        }
        if (local_28 == 0) {
          if (local_20 != 0) {
            uVar3 = 0;
            bVar10 = true;
            iVar5 = iVar8;
            pbVar4 = local_58;
            pbVar9 = &DAT_00d90d60;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar10 = *pbVar4 == *pbVar9;
              pbVar4 = pbVar4 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              uVar3 = 0x10000000;
            }
            else {
              iVar5 = 5;
              bVar10 = true;
              pbVar4 = local_58;
              pbVar9 = &DAT_00d90d58;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar10 = *pbVar4 == *pbVar9;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                uVar3 = 0x18000000;
              }
              else {
                iVar5 = 7;
                bVar10 = true;
                pbVar4 = local_58;
                pbVar9 = (byte *)"volume";
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *pbVar4 == *pbVar9;
                  pbVar4 = pbVar4 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  uVar3 = 0x20000000;
                }
              }
            }
            local_10 = local_10 | uVar3;
            local_20 = 0;
            if (uVar3 != 0) {
              local_2c = 0;
              local_24 = 0;
              goto LAB_00b3503b;
            }
          }
          if (local_38 != 0) {
            bVar10 = true;
            pbVar4 = local_58;
            pbVar9 = &DAT_00d4ede4;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar10 = *pbVar4 == *pbVar9;
              pbVar4 = pbVar4 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              local_c = local_c | 0x200000;
              local_38 = 0;
              goto LAB_00b3503b;
            }
          }
          if (local_2c == 0) {
LAB_00b34dd7:
            if (local_24 == 0) {
              if (local_1c != 0) {
                iVar8 = 3;
                bVar10 = true;
                iVar5 = iVar8;
                pbVar4 = local_58;
                pbVar9 = &DAT_00d90cec;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *pbVar4 == *pbVar9;
                  pbVar4 = pbVar4 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  local_10 = 1;
                }
                else {
                  bVar10 = true;
                  iVar5 = iVar8;
                  pbVar4 = local_58;
                  pbVar9 = &DAT_00d90ce8;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar10 = *pbVar4 == *pbVar9;
                    pbVar4 = pbVar4 + 1;
                    pbVar9 = pbVar9 + 1;
                  } while (bVar10);
                  if (bVar10) {
                    local_10 = 2;
                  }
                  else {
                    bVar10 = true;
                    iVar5 = iVar8;
                    pbVar4 = local_58;
                    pbVar9 = &DAT_00d90ce4;
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar10 = *pbVar4 == *pbVar9;
                      pbVar4 = pbVar4 + 1;
                      pbVar9 = pbVar9 + 1;
                    } while (bVar10);
                    if (bVar10) {
                      local_10 = 3;
                    }
                    else {
                      bVar10 = true;
                      iVar5 = iVar8;
                      pbVar4 = local_58;
                      pbVar9 = &DAT_00d90ce0;
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar10 = *pbVar4 == *pbVar9;
                        pbVar4 = pbVar4 + 1;
                        pbVar9 = pbVar9 + 1;
                      } while (bVar10);
                      if (bVar10) {
                        local_10 = 4;
                      }
                      else {
                        bVar10 = true;
                        iVar5 = iVar8;
                        pbVar4 = local_58;
                        pbVar9 = &DAT_00d90cdc;
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar10 = *pbVar4 == *pbVar9;
                          pbVar4 = pbVar4 + 1;
                          pbVar9 = pbVar9 + 1;
                        } while (bVar10);
                        if (bVar10) {
                          local_10 = 5;
                        }
                        else {
                          bVar10 = true;
                          pbVar4 = local_58;
                          pbVar9 = &DAT_00d90cd8;
                          do {
                            if (iVar8 == 0) break;
                            iVar8 = iVar8 + -1;
                            bVar10 = *pbVar4 == *pbVar9;
                            pbVar4 = pbVar4 + 1;
                            pbVar9 = pbVar9 + 1;
                          } while (bVar10);
                          if (!bVar10) goto LAB_00b3509b;
                          local_10 = 6;
                        }
                      }
                    }
                  }
                }
                local_1c = 0;
                goto LAB_00b3503b;
              }
              goto LAB_00b3509b;
            }
            pbVar4 = local_58;
            if (local_58[0] == 0) {
LAB_00b34e0e:
              uVar3 = 0;
            }
            else {
              do {
                iVar8 = _isalpha((int)(char)*pbVar4);
                if (iVar8 == 0) break;
                pbVar4 = pbVar4 + 1;
              } while (*pbVar4 != 0);
              if (*pbVar4 == 0) goto LAB_00b34e0e;
              uVar3 = _atol((char *)pbVar4);
            }
            if (0xf < uVar3) goto LAB_00b3509b;
            if (*pbVar4 != 0) {
              *pbVar4 = 0;
              pbVar4 = pbVar4 + 1;
            }
            bVar2 = *pbVar4;
            if (bVar2 != 0) {
              do {
                iVar8 = _isdigit((int)(char)bVar2);
                if (iVar8 == 0) break;
                pbVar4 = pbVar4 + 1;
                bVar2 = *pbVar4;
              } while (bVar2 != 0);
              if (*pbVar4 != 0) goto LAB_00b3509b;
            }
            iVar8 = 9;
            uVar6 = 0;
            bVar10 = true;
            pbVar4 = local_58;
            pbVar9 = (byte *)"position";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar10 = *pbVar4 == *pbVar9;
              pbVar4 = pbVar4 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (!bVar10) {
              iVar8 = 0xc;
              bVar10 = true;
              pbVar4 = local_58;
              pbVar9 = (byte *)"blendweight";
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar10 = *pbVar4 == *pbVar9;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                uVar6 = 1;
              }
              else {
                iVar8 = 0xd;
                bVar10 = true;
                pbVar4 = local_58;
                pbVar9 = (byte *)"blendindices";
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  bVar10 = *pbVar4 == *pbVar9;
                  pbVar4 = pbVar4 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  uVar6 = 2;
                }
                else {
                  iVar8 = 7;
                  bVar10 = true;
                  pbVar4 = local_58;
                  pbVar9 = (byte *)"normal";
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar10 = *pbVar4 == *pbVar9;
                    pbVar4 = pbVar4 + 1;
                    pbVar9 = pbVar9 + 1;
                  } while (bVar10);
                  if (bVar10) {
                    uVar6 = 3;
                  }
                  else {
                    iVar8 = 6;
                    bVar10 = true;
                    pbVar4 = local_58;
                    pbVar9 = (byte *)"psize";
                    do {
                      if (iVar8 == 0) break;
                      iVar8 = iVar8 + -1;
                      bVar10 = *pbVar4 == *pbVar9;
                      pbVar4 = pbVar4 + 1;
                      pbVar9 = pbVar9 + 1;
                    } while (bVar10);
                    if (bVar10) {
                      uVar6 = 4;
                    }
                    else {
                      iVar8 = 9;
                      bVar10 = true;
                      pbVar4 = local_58;
                      pbVar9 = (byte *)"texcoord";
                      do {
                        if (iVar8 == 0) break;
                        iVar8 = iVar8 + -1;
                        bVar10 = *pbVar4 == *pbVar9;
                        pbVar4 = pbVar4 + 1;
                        pbVar9 = pbVar9 + 1;
                      } while (bVar10);
                      if (bVar10) {
                        uVar6 = 5;
                      }
                      else {
                        uVar6 = 8;
                        bVar10 = true;
                        uVar7 = uVar6;
                        pbVar4 = local_58;
                        pbVar9 = (byte *)"tangent";
                        do {
                          if (uVar7 == 0) break;
                          uVar7 = uVar7 - 1;
                          bVar10 = *pbVar4 == *pbVar9;
                          pbVar4 = pbVar4 + 1;
                          pbVar9 = pbVar9 + 1;
                        } while (bVar10);
                        if (bVar10) {
                          uVar6 = 6;
                        }
                        else {
                          iVar8 = 9;
                          bVar10 = true;
                          pbVar4 = local_58;
                          pbVar9 = (byte *)"binormal";
                          do {
                            if (iVar8 == 0) break;
                            iVar8 = iVar8 + -1;
                            bVar10 = *pbVar4 == *pbVar9;
                            pbVar4 = pbVar4 + 1;
                            pbVar9 = pbVar9 + 1;
                          } while (bVar10);
                          if (bVar10) {
                            uVar6 = 7;
                          }
                          else {
                            iVar8 = 0xb;
                            bVar10 = true;
                            pbVar4 = local_58;
                            pbVar9 = (byte *)"tessfactor";
                            do {
                              if (iVar8 == 0) break;
                              iVar8 = iVar8 + -1;
                              bVar10 = *pbVar4 == *pbVar9;
                              pbVar4 = pbVar4 + 1;
                              pbVar9 = pbVar9 + 1;
                            } while (bVar10);
                            if (!bVar10) {
                              uVar6 = 10;
                              bVar10 = true;
                              uVar7 = uVar6;
                              pbVar4 = local_58;
                              pbVar9 = (byte *)"positiont";
                              do {
                                if (uVar7 == 0) break;
                                uVar7 = uVar7 - 1;
                                bVar10 = *pbVar4 == *pbVar9;
                                pbVar4 = pbVar4 + 1;
                                pbVar9 = pbVar9 + 1;
                              } while (bVar10);
                              if (bVar10) {
                                uVar6 = 9;
                              }
                              else {
                                iVar8 = 6;
                                bVar10 = true;
                                pbVar4 = local_58;
                                pbVar9 = (byte *)"color";
                                do {
                                  if (iVar8 == 0) break;
                                  iVar8 = iVar8 + -1;
                                  bVar10 = *pbVar4 == *pbVar9;
                                  pbVar4 = pbVar4 + 1;
                                  pbVar9 = pbVar9 + 1;
                                } while (bVar10);
                                if (!bVar10) {
                                  iVar8 = 4;
                                  bVar10 = true;
                                  pbVar4 = local_58;
                                  pbVar9 = &DAT_00d738a8;
                                  do {
                                    if (iVar8 == 0) break;
                                    iVar8 = iVar8 + -1;
                                    bVar10 = *pbVar4 == *pbVar9;
                                    pbVar4 = pbVar4 + 1;
                                    pbVar9 = pbVar9 + 1;
                                  } while (bVar10);
                                  if (bVar10) {
                                    uVar6 = 0xb;
                                  }
                                  else {
                                    iVar8 = 6;
                                    bVar10 = true;
                                    pbVar4 = local_58;
                                    pbVar9 = (byte *)"depth";
                                    do {
                                      if (iVar8 == 0) break;
                                      iVar8 = iVar8 + -1;
                                      bVar10 = *pbVar4 == *pbVar9;
                                      pbVar4 = pbVar4 + 1;
                                      pbVar9 = pbVar9 + 1;
                                    } while (bVar10);
                                    if (bVar10) {
                                      uVar6 = 0xc;
                                    }
                                    else {
                                      iVar8 = 7;
                                      bVar10 = true;
                                      pbVar4 = local_58;
                                      pbVar9 = (byte *)"sample";
                                      do {
                                        if (iVar8 == 0) break;
                                        iVar8 = iVar8 + -1;
                                        bVar10 = *pbVar4 == *pbVar9;
                                        pbVar4 = pbVar4 + 1;
                                        pbVar9 = pbVar9 + 1;
                                      } while (bVar10);
                                      if (!bVar10) goto LAB_00b3509b;
                                      uVar6 = 0xd;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_24 = 0;
            local_10 = (uVar3 & 0xf) << 0x10 | uVar6;
          }
          else {
            pbVar4 = local_58;
            if (local_58[0] == 0) {
LAB_00b34c3c:
              uVar3 = 0;
            }
            else {
              do {
                iVar8 = _isalpha((int)(char)*pbVar4);
                if (iVar8 == 0) break;
                pbVar4 = pbVar4 + 1;
              } while (*pbVar4 != 0);
              if (*pbVar4 == 0) goto LAB_00b34c3c;
              uVar3 = _atol((char *)pbVar4);
            }
            if (0xf < uVar3) goto LAB_00b34dd7;
            bVar2 = *pbVar4;
            local_48 = pbVar4;
            if (bVar2 != 0) {
              *pbVar4 = 0;
              pbVar4 = pbVar4 + 1;
            }
            bVar1 = *pbVar4;
            if (bVar1 != 0) {
              do {
                iVar8 = _isdigit((int)(char)bVar1);
                if (iVar8 == 0) break;
                pbVar4 = pbVar4 + 1;
                bVar1 = *pbVar4;
              } while (bVar1 != 0);
              if (*pbVar4 == 0) goto LAB_00b34c7b;
LAB_00b34dcf:
              *local_48 = bVar2;
              goto LAB_00b34dd7;
            }
LAB_00b34c7b:
            iVar8 = 9;
            uVar6 = 0;
            bVar10 = true;
            pbVar4 = local_58;
            pbVar9 = (byte *)"position";
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar10 = *pbVar4 == *pbVar9;
              pbVar4 = pbVar4 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              if (uVar3 == 0) goto LAB_00b34dcf;
            }
            else {
              iVar8 = 0xc;
              bVar10 = true;
              pbVar4 = local_58;
              pbVar9 = (byte *)"blendweight";
              do {
                if (iVar8 == 0) break;
                iVar8 = iVar8 + -1;
                bVar10 = *pbVar4 == *pbVar9;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                uVar6 = 1;
              }
              else {
                iVar8 = 0xd;
                bVar10 = true;
                pbVar4 = local_58;
                pbVar9 = (byte *)"blendindices";
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  bVar10 = *pbVar4 == *pbVar9;
                  pbVar4 = pbVar4 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  uVar6 = 2;
                }
                else {
                  iVar8 = 7;
                  bVar10 = true;
                  pbVar4 = local_58;
                  pbVar9 = (byte *)"normal";
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar10 = *pbVar4 == *pbVar9;
                    pbVar4 = pbVar4 + 1;
                    pbVar9 = pbVar9 + 1;
                  } while (bVar10);
                  if (bVar10) {
                    uVar6 = 3;
                  }
                  else {
                    uVar6 = 6;
                    bVar10 = true;
                    uVar7 = uVar6;
                    pbVar4 = local_58;
                    pbVar9 = (byte *)"psize";
                    do {
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      bVar10 = *pbVar4 == *pbVar9;
                      pbVar4 = pbVar4 + 1;
                      pbVar9 = pbVar9 + 1;
                    } while (bVar10);
                    if (bVar10) {
                      uVar6 = 4;
                    }
                    else {
                      iVar8 = 9;
                      bVar10 = true;
                      pbVar4 = local_58;
                      pbVar9 = (byte *)"texcoord";
                      do {
                        if (iVar8 == 0) break;
                        iVar8 = iVar8 + -1;
                        bVar10 = *pbVar4 == *pbVar9;
                        pbVar4 = pbVar4 + 1;
                        pbVar9 = pbVar9 + 1;
                      } while (bVar10);
                      if (bVar10) {
                        uVar6 = 5;
                      }
                      else {
                        iVar8 = 8;
                        bVar10 = true;
                        pbVar4 = local_58;
                        pbVar9 = (byte *)"tangent";
                        do {
                          if (iVar8 == 0) break;
                          iVar8 = iVar8 + -1;
                          bVar10 = *pbVar4 == *pbVar9;
                          pbVar4 = pbVar4 + 1;
                          pbVar9 = pbVar9 + 1;
                        } while (bVar10);
                        if (!bVar10) {
                          iVar8 = 9;
                          bVar10 = true;
                          pbVar4 = local_58;
                          pbVar9 = (byte *)"binormal";
                          do {
                            if (iVar8 == 0) break;
                            iVar8 = iVar8 + -1;
                            bVar10 = *pbVar4 == *pbVar9;
                            pbVar4 = pbVar4 + 1;
                            pbVar9 = pbVar9 + 1;
                          } while (bVar10);
                          if (bVar10) {
                            uVar6 = 7;
                          }
                          else {
                            iVar8 = 0xb;
                            bVar10 = true;
                            pbVar4 = local_58;
                            pbVar9 = (byte *)"tessfactor";
                            do {
                              if (iVar8 == 0) break;
                              iVar8 = iVar8 + -1;
                              bVar10 = *pbVar4 == *pbVar9;
                              pbVar4 = pbVar4 + 1;
                              pbVar9 = pbVar9 + 1;
                            } while (bVar10);
                            if (bVar10) {
                              uVar6 = 8;
                            }
                            else {
                              uVar6 = 10;
                              bVar10 = true;
                              uVar7 = uVar6;
                              pbVar4 = local_58;
                              pbVar9 = (byte *)"positiont";
                              do {
                                if (uVar7 == 0) break;
                                uVar7 = uVar7 - 1;
                                bVar10 = *pbVar4 == *pbVar9;
                                pbVar4 = pbVar4 + 1;
                                pbVar9 = pbVar9 + 1;
                              } while (bVar10);
                              if (bVar10) {
                                uVar6 = 9;
                              }
                              else {
                                iVar8 = 6;
                                bVar10 = true;
                                pbVar4 = local_58;
                                pbVar9 = (byte *)"color";
                                do {
                                  if (iVar8 == 0) break;
                                  iVar8 = iVar8 + -1;
                                  bVar10 = *pbVar4 == *pbVar9;
                                  pbVar4 = pbVar4 + 1;
                                  pbVar9 = pbVar9 + 1;
                                } while (bVar10);
                                if (!bVar10) {
                                  iVar8 = 4;
                                  bVar10 = true;
                                  pbVar4 = local_58;
                                  pbVar9 = &DAT_00d738a8;
                                  do {
                                    if (iVar8 == 0) break;
                                    iVar8 = iVar8 + -1;
                                    bVar10 = *pbVar4 == *pbVar9;
                                    pbVar4 = pbVar4 + 1;
                                    pbVar9 = pbVar9 + 1;
                                  } while (bVar10);
                                  if (bVar10) {
                                    uVar6 = 0xb;
                                  }
                                  else {
                                    iVar8 = 6;
                                    bVar10 = true;
                                    pbVar4 = local_58;
                                    pbVar9 = (byte *)"depth";
                                    do {
                                      if (iVar8 == 0) break;
                                      iVar8 = iVar8 + -1;
                                      bVar10 = *pbVar4 == *pbVar9;
                                      pbVar4 = pbVar4 + 1;
                                      pbVar9 = pbVar9 + 1;
                                    } while (bVar10);
                                    if (bVar10) {
                                      uVar6 = 0xc;
                                    }
                                    else {
                                      iVar8 = 7;
                                      bVar10 = true;
                                      pbVar4 = local_58;
                                      pbVar9 = (byte *)"sample";
                                      do {
                                        if (iVar8 == 0) break;
                                        iVar8 = iVar8 + -1;
                                        bVar10 = *pbVar4 == *pbVar9;
                                        pbVar4 = pbVar4 + 1;
                                        pbVar9 = pbVar9 + 1;
                                      } while (bVar10);
                                      if (!bVar10) goto LAB_00b34dcf;
                                      uVar6 = 0xd;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_10 = local_10 | (uVar3 & 0xf) << 0x10 | uVar6;
            local_2c = 0;
          }
          local_20 = 0;
        }
        else {
          bVar10 = true;
          iVar5 = iVar8;
          pbVar4 = local_58;
          pbVar9 = &DAT_00d90d78;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar10 = *pbVar4 == *pbVar9;
            pbVar4 = pbVar4 + 1;
            pbVar9 = pbVar9 + 1;
          } while (bVar10);
          if (bVar10) {
            local_c = 0x3000000;
          }
          else {
            bVar10 = true;
            iVar5 = iVar8;
            pbVar4 = local_58;
            pbVar9 = &DAT_00d90d74;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar10 = *pbVar4 == *pbVar9;
              pbVar4 = pbVar4 + 1;
              pbVar9 = pbVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              local_c = 0x2000000;
            }
            else {
              bVar10 = true;
              iVar5 = iVar8;
              pbVar4 = local_58;
              pbVar9 = &DAT_00d90d70;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar10 = *pbVar4 == *pbVar9;
                pbVar4 = pbVar4 + 1;
                pbVar9 = pbVar9 + 1;
              } while (bVar10);
              if (bVar10) {
                local_c = 0x1000000;
              }
              else {
                bVar10 = true;
                iVar5 = iVar8;
                pbVar4 = local_58;
                pbVar9 = &DAT_00d90d6c;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *pbVar4 == *pbVar9;
                  pbVar4 = pbVar4 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  local_c = 0xf000000;
                }
                else {
                  bVar10 = true;
                  iVar5 = iVar8;
                  pbVar4 = local_58;
                  pbVar9 = &DAT_00d90d68;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar10 = *pbVar4 == *pbVar9;
                    pbVar4 = pbVar4 + 1;
                    pbVar9 = pbVar9 + 1;
                  } while (bVar10);
                  if (bVar10) {
                    local_c = 0xe000000;
                  }
                  else {
                    bVar10 = true;
                    pbVar4 = local_58;
                    pbVar9 = &DAT_00d90d64;
                    do {
                      if (iVar8 == 0) break;
                      iVar8 = iVar8 + -1;
                      bVar10 = *pbVar4 == *pbVar9;
                      pbVar4 = pbVar4 + 1;
                      pbVar9 = pbVar9 + 1;
                    } while (bVar10);
                    if (!bVar10) goto LAB_00b3509b;
                    local_c = 0xd000000;
                  }
                }
              }
            }
          }
          local_28 = 0;
        }
      }
      else {
        iVar8 = 0;
        uVar3 = 0;
        do {
          pbVar9 = *(byte **)((int)&PTR_DAT_00d8eca0 + uVar3);
          pbVar4 = local_58;
          do {
            bVar2 = *pbVar4;
            bVar10 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_00b348c1:
              iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00b348c8;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar10 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_00b348c1;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_00b348c8:
          if (iVar5 == 0) break;
          uVar3 = uVar3 + 0x44;
          iVar8 = iVar8 + 1;
        } while (uVar3 < 0x1650);
        if (iVar8 == 0x54) goto LAB_00b3509b;
        iVar5 = *(int *)((int)local_14 + 0x38);
        uVar3 = *(uint *)(&DAT_00d8eca8 + (iVar8 * 0x11 + iVar5) * 4);
        if (uVar3 < 0xfffffffb) {
          if (uVar3 == 0xfffffffa) {
            local_8 = 0x10c;
          }
          else if (uVar3 == 0) {
            local_8 = 0x102;
          }
          else if (uVar3 == 1) {
            local_8 = 0x103;
          }
          else if (uVar3 == 2) {
            local_8 = 0x104;
          }
          else if (uVar3 == 3) {
            local_8 = 0x105;
          }
          else if (uVar3 == 4) {
            local_8 = 0x106;
          }
          else if (uVar3 == 5) {
            local_8 = 0x107;
          }
        }
        else if (uVar3 == 0xfffffffb) {
          local_8 = 0x10b;
        }
        else if (uVar3 == 0xfffffffc) {
          local_8 = 0x10a;
        }
        else if (uVar3 == 0xfffffffd) {
          local_8 = 0x108;
        }
        else if (uVar3 == 0xfffffffe) {
          local_8 = 0x109;
        }
        else if (uVar3 == 0xffffffff) {
          *(undefined4 *)((int)local_14 + 0x54) = 0x7e7;
          goto LAB_00b3509b;
        }
        local_44 = (&DAT_00d8eca4)[iVar8 * 0x11];
        local_40 = 0;
        if ((((5 < iVar5) && (iVar5 < 10)) && (0x102 < local_8)) && (local_8 < 0x108)) {
          local_28 = 1;
        }
        if (((((3 < iVar5) && (iVar5 < 6)) || ((5 < iVar5 && (iVar5 < 0xf)))) &&
            ((0x102 < local_8 && (local_8 < 0x108)))) && (local_44 != 0x1f)) {
          local_30 = 1;
        }
        if (9 < iVar5) {
          if ((iVar5 < 0xf) && (local_44 == 0x1f)) {
            local_34 = 1;
          }
          if ((((9 < iVar5) && (iVar5 < 0xf)) && (0x102 < local_8)) && (local_8 < 0x108)) {
            local_38 = 1;
          }
        }
        if ((((3 < iVar5) && (iVar5 < 6)) || ((9 < iVar5 && (iVar5 < 0xf)))) && (local_44 == 0x1f))
        {
          local_20 = 1;
        }
        if (((0xc < iVar5) && (iVar5 < 0xf)) && (local_44 == 0x1f)) {
          local_2c = 1;
        }
        if (((-1 < iVar5) && (iVar5 < 6)) && (local_44 == 0x1f)) {
          local_24 = 1;
        }
        if (((local_44 == 0x28) || (local_44 == 0x2c)) || (local_44 == 0x5e)) {
          local_1c = 1;
        }
        *(undefined4 *)((int)local_14 + 0x54) = 0x7e8;
      }
LAB_00b3503b:
    } while (*local_18 != 0);
    if (local_44 == 0x28) {
      if (local_1c != 0) goto LAB_00b35096;
      if (*(int *)(&DAT_00d902f8 + *(int *)((int)local_14 + 0x38) * 4) != -1) {
        local_44 = 0x29;
        local_8 = 0x10c;
        goto LAB_00b3506b;
      }
    }
    else {
LAB_00b3506b:
      if (local_44 == 0x2c) {
        if (local_1c != 0) goto LAB_00b35096;
        if (*(int *)(&DAT_00d90340 + *(int *)((int)local_14 + 0x38) * 4) == -1) goto LAB_00b3509b;
        local_44 = 0x2d;
        local_8 = 0x10c;
      }
      if ((local_44 != 0x5e) || (local_1c == 0)) {
LAB_00b35096:
        iVar8 = local_44;
        this = local_14;
        if (local_24 == 0) goto LAB_00b350a2;
      }
    }
LAB_00b3509b:
    local_8 = 0x10d;
  }
  return local_8;
}


//// FUNCTION FUN_00b350be @ 00b350be ////

uint __thiscall FUN_00b350be(void *this,int param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  void *pvStack_14;
  void *local_8;
  
  pcVar1 = *(char **)(param_1 + 8);
  uVar2 = 0;
  if ((pcVar1 == (char *)0x0) || (cVar3 = *pcVar1, pcVar4 = pcVar1, local_8 = this, cVar3 == '\0'))
  {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (cVar3 < 'x') {
        if ((cVar3 == 'w') || (cVar3 == 'a')) {
          pvStack_14 = (void *)0x3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (cVar3 != 'b') {
            if (cVar3 == 'g') goto LAB_00b3513b;
            if (cVar3 != 'r') goto LAB_00b35145;
            goto LAB_00b35100;
          }
LAB_00b35131:
          pvStack_14 = (void *)0x2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (cVar3 == 'x') {
LAB_00b35100:
        pvStack_14 = (void *)0x0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (cVar3 != 'y') {
          if (cVar3 != 'z') goto LAB_00b35145;
          goto LAB_00b35131;
        }
LAB_00b3513b:
        pvStack_14 = (void *)0x1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pcVar4 != pcVar1) && (pvStack_14 <= local_8)) {
LAB_00b35145:
        FUN_00b33674(*(void **)this,param_1,0x7d3,"invalid mask \'%s\'");
        *(undefined4 *)((int)this + 0x4c) = 1;
        return 0;
      }
      cVar3 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      local_8 = pvStack_14;
    } while (cVar3 != '\0');
  }
  return uVar2;
}


//// FUNCTION FUN_00b35173 @ 00b35173 ////

uint __thiscall FUN_00b35173(void *this,int param_1)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  int iStack_1c;
  uint local_c;
  uint local_8;
  
  pcVar3 = *(char **)(param_1 + 8);
  iStack_1c = 0;
  local_c = 0;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    local_c = 0xe40000;
  }
  else {
    local_8 = 0x10;
    do {
      cVar2 = *pcVar3;
      if (cVar2 != '\0') {
        if (cVar2 < 'x') {
          if ((cVar2 == 'w') || (cVar2 == 'a')) {
            iStack_1c = 3;
          }
          else {
            if (cVar2 != 'b') {
              if (cVar2 == 'g') goto LAB_00b35219;
              if (cVar2 == 'r') goto LAB_00b351c6;
              goto LAB_00b351e2;
            }
LAB_00b35215:
            iStack_1c = 2;
          }
        }
        else if (cVar2 == 'x') {
LAB_00b351c6:
          iStack_1c = 0;
        }
        else {
          if (cVar2 != 'y') {
            if (cVar2 == 'z') goto LAB_00b35215;
            goto LAB_00b351e2;
          }
LAB_00b35219:
          iStack_1c = 1;
        }
        pcVar3 = pcVar3 + 1;
      }
      uVar1 = local_8 + 2;
      local_c = local_c | iStack_1c << ((byte)local_8 & 0x1f);
      local_8 = uVar1;
    } while (uVar1 < 0x18);
    if (*pcVar3 != '\0') {
LAB_00b351e2:
      FUN_00b33674(*(void **)this,param_1,0x7d4,"invalid swizzle \'%s\'");
      *(undefined4 *)((int)this + 0x4c) = 1;
      local_c = 0;
    }
  }
  return local_c;
}


//// FUNCTION FUN_00b3522f @ 00b3522f ////

int __thiscall FUN_00b3522f(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)((int)this + 100);
    if (uVar2 < *(uint *)((int)this + 0x5c)) {
      *(int *)((int)this + 0x30) = param_1;
      iVar3 = (**(code **)(*piVar1 + 0x10))
                        (piVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                         *(int *)((int)this + 0x58) + uVar2 * 4,*(uint *)((int)this + 0x5c) - uVar2)
      ;
      if (iVar3 < 0) {
        *(undefined4 *)((int)this + 0x4c) = 1;
        *(undefined4 *)((int)this + 0x50) = 1;
      }
      *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x5c);
      return iVar3;
    }
  }
  return 0;
}


//// FUNCTION FUN_00b35284 @ 00b35284 ////

undefined4 __thiscall FUN_00b35284(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = param_1;
  uVar4 = param_1 + *(int *)((int)this + 0x5c);
  param_1 = *(uint *)((int)this + 0x60);
  if (param_1 < uVar4) {
    if (param_1 == 0) {
      param_1 = 0x100;
    }
    if (param_1 < uVar4) {
      do {
        param_1 = param_1 * 2;
      } while (param_1 < *(int *)((int)this + 0x5c) + uVar1);
    }
    puVar2 = operator_new(param_1 << 2);
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)((int)this + 0x58);
      for (uVar4 = *(uint *)((int)this + 0x5c) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x58));
    }
    uVar3 = 0x8007000e;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


//// FUNCTION FUN_00b35315 @ 00b35315 ////

int __thiscall FUN_00b35315(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b35284(this,1);
  if (-1 < iVar1) {
    *(undefined4 *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0x5c) * 4) = param_1;
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + 1;
    iVar1 = 0;
  }
  return iVar1;
}


